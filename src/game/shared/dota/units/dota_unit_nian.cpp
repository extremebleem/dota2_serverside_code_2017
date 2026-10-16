// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_nian.cpp:54
class CDOTA_Ability_Animation_Attack : public CDOTABaseAbility {
public:

private:

	float m_flPlaybackRate;  // +0x390
protected:

	float animation_time;  // +0x394
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
	CDOTA_Ability_Animation_Attack(CDOTA_Ability_Animation_Attack &);
	CDOTA_Ability_Animation_Attack(CDOTA_Ability_Animation_Attack &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CDOTA_Ability_Animation_Attack();
	virtual float GetPlaybackRateOverride();
	void SetPlaybackRate(float);
	virtual int GetCastRange();
	virtual ScriptClassDesc_t * GetScriptDesc();
	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	virtual ~CDOTA_Ability_Animation_Attack();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[213] GetPlaybackRateOverride
	// vtable[333] GetCastRange
	// vtable[4] GetScriptDesc
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_nian.cpp:99
class CDOTA_Ability_Animation_RightClawSwipe : public CDOTA_Ability_Animation_Attack {
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
	CDOTA_Ability_Animation_RightClawSwipe(CDOTA_Ability_Animation_RightClawSwipe &);
	CDOTA_Ability_Animation_RightClawSwipe(CDOTA_Ability_Animation_RightClawSwipe &);
	CDOTA_Ability_Animation_RightClawSwipe();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual bool OnAbilityPhaseStart();
	virtual ~CDOTA_Ability_Animation_RightClawSwipe();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[264] OnAbilityPhaseStart
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_nian.cpp:131
class CDOTA_Modifier_Animation_RightClawSwipe : public CDOTA_Buff {
public:

private:

	int damage;  // +0xba8
	int damage_radius;  // +0xbac
	float m_flScalar;  // +0xbb0

	CDOTA_Modifier_Animation_RightClawSwipe();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierDisableTurning(const CModifierParams &);
	virtual ~CDOTA_Modifier_Animation_RightClawSwipe();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// sizeof = 3024
};

// src/game/shared/dota/units/dota_unit_nian.cpp:236
class CDOTA_Ability_Animation_LeftClawSwipe : public CDOTA_Ability_Animation_Attack {
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
	CDOTA_Ability_Animation_LeftClawSwipe(CDOTA_Ability_Animation_LeftClawSwipe &);
	CDOTA_Ability_Animation_LeftClawSwipe(CDOTA_Ability_Animation_LeftClawSwipe &);
	CDOTA_Ability_Animation_LeftClawSwipe();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual bool OnAbilityPhaseStart();
	virtual ~CDOTA_Ability_Animation_LeftClawSwipe();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[264] OnAbilityPhaseStart
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_nian.cpp:268
class CDOTA_Modifier_Animation_LeftClawSwipe : public CDOTA_Buff {
public:

private:

	int damage;  // +0xba8
	int damage_radius;  // +0xbac
	float m_flScalar;  // +0xbb0

	CDOTA_Modifier_Animation_LeftClawSwipe();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierDisableTurning(const CModifierParams &);
	virtual ~CDOTA_Modifier_Animation_LeftClawSwipe();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// sizeof = 3024
};

// src/game/shared/dota/units/dota_unit_nian.cpp:370
class CDOTA_Modifier_Move_From_Activity : public CDOTA_Buff, public CHorizontalMotionController {
public:

private:

	float m_flCurrentTime;  // +0xbb4
	float m_flTotalTime;  // +0xbb8
	float m_flSequenceYaw;  // +0xbbc
	Activity m_nActivity;  // +0xbc4
	bool m_bCanBeInterrupted;  // +0xbc8
	bool m_bFadeGesture;  // +0xbc9
	CDOTA_Modifier_Move_From_Activity();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual ~CDOTA_Modifier_Move_From_Activity();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] OnHorizontalMotionInterrupted
	// vtable[91] IsHorizontalMotionValidToApply
	// sizeof = 3024
};

// src/game/shared/dota/units/dota_unit_nian.cpp:498
class CDOTA_Modifier_Attached_Unit : public CDOTA_Buff, public CHorizontalMotionController {
public:

private:

	EHANDLE m_hAttachTarget;  // +0xbb4
	bool m_bPhysicalImmune;  // +0xbb8
	bool m_bMagicImmune;  // +0xbb9
	CDOTA_Modifier_Attached_Unit();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	virtual void CheckState(CDOTABuffState &);
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	ModifierVariant_t GetAbsoluteNoDamagePhysical(const CModifierParams &);
	virtual ~CDOTA_Modifier_Attached_Unit();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[5] CheckState
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] OnHorizontalMotionInterrupted
	// vtable[91] IsHorizontalMotionValidToApply
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_nian.cpp:618
class CDOTA_Ability_Nian_Dive : public CDOTABaseAbility {
public:

private:

	float m_flPlaybackRate;  // +0x390
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
	CDOTA_Ability_Nian_Dive(CDOTA_Ability_Nian_Dive &);
	CDOTA_Ability_Nian_Dive(CDOTA_Ability_Nian_Dive &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual Activity GetCastAnimation();
	CDOTA_Ability_Nian_Dive();
	virtual float GetPlaybackRateOverride();
	void SetPlaybackRate(float);
	virtual ScriptClassDesc_t * GetScriptDesc();

protected:

	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	virtual ~CDOTA_Ability_Nian_Dive();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[234] GetCastAnimation
	// vtable[213] GetPlaybackRateOverride
	// vtable[4] GetScriptDesc
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_nian.cpp:665
class CDOTA_Modifier_Nian_Dive : public CDOTA_Buff, public CHorizontalMotionController, public CVerticalMotionController {
public:

private:

	float m_flTotalTimeInAir;  // +0xbc4
	float m_flInitialVelocity;  // +0xbc8
	float m_flCurrentTimeHoriz;  // +0xbf0
	float m_flCurrentTimeVert;  // +0xbf4
	bool m_bInterrupted;  // +0xbf8

	float m_flHorizDelayTime;  // +0xbfc
	float m_flVertDelayTime;  // +0xc00
	float m_flLeapSequenceDuration;  // +0xc04
	float m_flClawDamageTime;  // +0xc08
	float m_flPlaybackRate;  // +0xc0c
	EHANDLE m_hTarget;  // +0xc10
	bool m_bPlayedSwipeSound;  // +0xc14

	int pounce_distance;  // +0xc18
	float pounce_speed;  // +0xc1c
	float pounce_acceleration;  // +0xc20
	int pounce_radius;  // +0xc24
	int pounce_damage;  // +0xc28
	int stun_radius;  // +0xc2c
	float stun_duration;  // +0xc30
	float leash_duration;  // +0xc34
	float initial_delay;  // +0xc38
	float landing_delay;  // +0xc3c
	float vertical_adjust;  // +0xc40
	float vertical_adjust_max_distance;  // +0xc44
	float vertical_adjust_min_distance;  // +0xc48
	int claw_damage;  // +0xc4c
	int claw_damage_radius;  // +0xc50
	float claw_damage_delay;  // +0xc54
	float claw_damage_duration;  // +0xc58

	CDOTA_Modifier_Nian_Dive();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual void CheckState(CDOTABuffState &);
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void UpdateVerticalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual void OnVerticalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual bool IsVerticalMotionValidToApply();
	virtual ~CDOTA_Modifier_Nian_Dive();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[5] CheckState
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] UpdateVerticalMotion
	// vtable[91] OnHorizontalMotionInterrupted
	// vtable[92] OnVerticalMotionInterrupted
	// vtable[93] IsHorizontalMotionValidToApply
	// vtable[94] IsVerticalMotionValidToApply
	// sizeof = 3192
};

// src/game/shared/dota/units/dota_unit_nian.cpp:1091
class CDOTA_Ability_NianCharge : public CDOTABaseAbility, public CHorizontalMotionController {
public:

private:

	bool m_bChargeFinished;  // +0x39c
	bool m_bPlayedChargeAnimation;  // +0x39d
	bool m_bPinning;  // +0x39e

	float m_flPinStartTime;  // +0x3a0
	EHANDLE m_hTarget;  // +0x3bc
	int nFXIndex;  // +0x3f0
	int m_iCurProjectileIndex;  // +0x3f4
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
	CDOTA_Ability_NianCharge(CDOTA_Ability_NianCharge &);
	CDOTA_Ability_NianCharge(CDOTA_Ability_NianCharge &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CDOTA_Ability_NianCharge();
	virtual bool OnAbilityPhaseStart();
	virtual void OnAbilityPhaseInterrupted();
	virtual void OnSpellStart();
	virtual void OnChannelFinish(bool);
	virtual bool OnProjectileHit_ExtraData(EHANDLE, const Vector &, KeyValues *);
	virtual void OnProjectileThink_ExtraData(const Vector &, KeyValues *);
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual bool PlaysDefaultAnimWhenStolen();
	virtual const char * GetStolenActivityModifier();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual bool IsCooldownReady();
	bool IsPinning();
	virtual ~CDOTA_Ability_NianCharge();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[266] OnSpellStart
	// vtable[267] OnChannelFinish
	// vtable[290] OnProjectileHit_ExtraData
	// vtable[294] OnProjectileThink_ExtraData
	// vtable[333] UpdateHorizontalMotion
	// vtable[334] OnHorizontalMotionInterrupted
	// vtable[309] PlaysDefaultAnimWhenStolen
	// vtable[310] GetStolenActivityModifier
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[245] IsCooldownReady
	// sizeof = 1016
};

// src/game/shared/dota/units/dota_unit_nian.cpp:1147
class CDOTA_Ability_Nian_Frenzy : public CDOTABaseAbility {
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
	CDOTA_Ability_Nian_Frenzy(CDOTA_Ability_Nian_Frenzy &);
	CDOTA_Ability_Nian_Frenzy(CDOTA_Ability_Nian_Frenzy &);
	CDOTA_Ability_Nian_Frenzy();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool OnAbilityPhaseStart();
	virtual ~CDOTA_Ability_Nian_Frenzy();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[264] OnAbilityPhaseStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_nian.cpp:1156
class C_CDOTA_Ability_Nian_Frenzy_MapInstall {
	C_CDOTA_Ability_Nian_Frenzy_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_nian.cpp:1178
class CDOTA_Modifier_Nian_Frenzy : public CDOTA_Buff {
public:

private:

	int damage;  // +0xba8
	int damage_radius;  // +0xbac
	int stun_radius;  // +0xbb0
	float dive_distance;  // +0xbb4
	float initial_rise_time;  // +0xbb8
	float right_swipe_time;  // +0xbbc
	float left_swipe_time;  // +0xbc0
	float knockdown_duration;  // +0xbc4
	float stun_duration;  // +0xbc8
	int m_nTickCounter;  // +0xbcc
	CDOTA_Modifier_Nian_Frenzy();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	void DiveTowards(Vector);
	ModifierVariant_t GetModifierDisableTurning(const CModifierParams &);
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Nian_Frenzy();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// vtable[11] IsHidden
	// sizeof = 3048
};

// src/game/shared/dota/units/dota_unit_nian.cpp:1357
class CDOTA_Ability_Nian_Roar : public CDOTABaseAbility {
public:

private:

	int base_projectiles;  // +0x390
	int max_projectiles;  // +0x394
	int projectile_step;  // +0x398
	int base_speed;  // +0x39c
	int speed_step;  // +0x3a0
	int initial_radius;  // +0x3a4
	int end_radius;  // +0x3a8
	int damage;  // +0x3ac
	float base_interval;  // +0x3b0
	float interval_step;  // +0x3b4
	int m_nCastCount;  // +0x3b8
	int m_nProjectiles;  // +0x3bc
	int m_nWaveCount;  // +0x3c0

	float m_flTiming;  // +0x3e0
	bool m_bScriptRoar;  // +0x3e4
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
	CDOTA_Ability_Nian_Roar(CDOTA_Ability_Nian_Roar &);
	CDOTA_Ability_Nian_Roar(CDOTA_Ability_Nian_Roar &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Ability_Nian_Roar();
	virtual bool OnAbilityPhaseStart();
	virtual void OnAbilityPhaseInterrupted();
	virtual void OnSpellStart();
	void FireProjectiles(int);
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual void OnChannelThink(float);
	int GetCastCount();
	virtual void OnChannelFinish(bool);
	virtual ScriptClassDesc_t * GetScriptDesc();

protected:

	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	virtual ~CDOTA_Ability_Nian_Roar();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[296] OnChannelThink
	// vtable[267] OnChannelFinish
	// vtable[4] GetScriptDesc
	// sizeof = 1000
};

// src/game/shared/dota/units/dota_unit_nian.cpp:1412
class C_CDOTA_Ability_Nian_Roar_MapInstall {
	C_CDOTA_Ability_Nian_Roar_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_nian.cpp:1595
class CDOTA_Modifier_Nian_Roar : public CDOTA_Buff {
public:

	CDOTA_Modifier_Nian_Roar();
	virtual void DeclareFunctions();
	virtual bool IsPurgable();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	virtual ~CDOTA_Modifier_Nian_Roar();

	// vtable[65] DeclareFunctions
	// vtable[14] IsPurgable
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_nian.cpp:1629
class CDOTA_Modifier_Nian_Invulnerable : public CDOTA_Buff {
public:

	CDOTA_Modifier_Nian_Invulnerable();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	ModifierVariant_t GetAbsoluteNoDamagePhysical(const CModifierParams &);
	ModifierVariant_t GetAbsoluteNoDamageMagical(const CModifierParams &);
	ModifierVariant_t GetAbsoluteNoDamagePure(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Nian_Invulnerable();

	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_nian.cpp:1718
class CDOTA_Modifier_Nian_Intrinsic : public CDOTA_Buff {
public:

	CDOTA_Modifier_Nian_Intrinsic();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeed_Absolute(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeed_Max(const CModifierParams &);
	ModifierVariant_t GetMinHealth(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Nian_Intrinsic();

	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_nian.cpp:1808
struct NianDamageTaken_t {
private:

	int nDamage;  // +0x0
	int nPlayerID;  // +0x4
	NianDamageTaken_t();

	NianDamageTaken_t & operator=(const NianDamageTaken_t &);

	// sizeof = 20
};

// src/game/shared/dota/units/dota_unit_nian.cpp:1817
class CDOTA_Unit_Nian_Attachment : public CDOTA_BaseNPC_Additive {
public:

private:

	bool m_bAttachmentBroken;  // +0x1198

	int m_nfxIndex_tailgrow;  // +0x119c
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
	CDOTA_Unit_Nian_Attachment(CDOTA_Unit_Nian_Attachment &);
	CDOTA_Unit_Nian_Attachment(CDOTA_Unit_Nian_Attachment &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CDOTA_Unit_Nian_Attachment();
	virtual int OnTakeDamage(const CTakeDamageInfo &);
	virtual void Event_Killed(const CTakeDamageInfo &);
	virtual void UpdateOnRemove();
	virtual void Spawn(const CEntityKeyValues *);
	virtual int OnTakeDamage_Alive(const CTakeDamageInfo &);
	virtual void UnitThink();
	virtual bool UnitCanRespawn();
	bool IsBroken();
	void Regrow();
	virtual ~CDOTA_Unit_Nian_Attachment();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[90] OnTakeDamage
	// vtable[92] Event_Killed
	// vtable[11] UpdateOnRemove
	// vtable[8] Spawn
	// vtable[319] OnTakeDamage_Alive
	// vtable[385] UnitThink
	// vtable[477] UnitCanRespawn
	// sizeof = 4536
};

// src/game/shared/dota/units/dota_unit_nian.cpp:1850
class CDOTA_Modifier_Nian_Attachment : public CDOTA_Buff {
public:

	CDOTA_Modifier_Nian_Attachment();
	virtual bool IsPurgable();
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	ModifierVariant_t GetMinHealth(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Nian_Attachment();

	// vtable[14] IsPurgable
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_nian.cpp:2110
class CDOTA_Modifier_Nian_Attachment_Regrow : public CDOTA_Buff {
public:

	CDOTA_Modifier_Nian_Attachment_Regrow(CDOTA_Modifier_Nian_Attachment_Regrow &);
	CDOTA_Modifier_Nian_Attachment_Regrow(const CDOTA_Modifier_Nian_Attachment_Regrow &);
	CDOTA_Modifier_Nian_Attachment_Regrow();
	virtual bool IsDebuff();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnDestroy();
	virtual ~CDOTA_Modifier_Nian_Attachment_Regrow();

	// vtable[12] IsDebuff
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[60] OnDestroy
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_nian.cpp:2136
class CDOTA_Unit_Nian : public CDOTA_BaseNPC_Creature {
public:

private:

	EHANDLE m_hTail;  // +0x12e8
	EHANDLE m_hHorn;  // +0x12ec
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
	CDOTA_Unit_Nian(CDOTA_Unit_Nian &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Unit_Nian();
	virtual ~CDOTA_Unit_Nian();
	virtual int OnTakeDamage_Alive(const CTakeDamageInfo &);
	virtual void UnitThink();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void GainedModifier(CDOTA_Buff *);
	virtual void Precache(const CEntityPrecacheContext *);
	bool IsHornAlive();
	bool IsTailAlive();
	CDOTA_Unit_Nian_Attachment * GetHorn();
	CDOTA_Unit_Nian_Attachment * GetTail();
	HSCRIPT Script_GetHorn();
	HSCRIPT Script_GetTail();
	virtual ScriptClassDesc_t * GetScriptDesc();

protected:

	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[319] OnTakeDamage_Alive
	// vtable[385] UnitThink
	// vtable[8] Spawn
	// vtable[449] GainedModifier
	// vtable[6] Precache
	// vtable[4] GetScriptDesc
	// sizeof = 4848
};

// src/game/shared/dota/units/dota_unit_nian.cpp:2200
class C_CDOTA_Unit_Nian_MapInstall {
	C_CDOTA_Unit_Nian_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_nian.cpp:2363
class CDOTA_Modifier_Nian_Waiting : public CDOTA_Buff {
public:

	CDOTA_Modifier_Nian_Waiting();
	virtual void DeclareFunctions();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsPurgable();
	virtual ModifierVariant_t OnTakeDamage(const CModifierParams &);
	virtual ModifierVariant_t GetDisableAutoAttack(const CModifierParams &);
	virtual ~CDOTA_Modifier_Nian_Waiting();

	// vtable[65] DeclareFunctions
	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[14] IsPurgable
	// vtable[89] OnTakeDamage
	// vtable[90] GetDisableAutoAttack
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_nian.cpp:2427
class CDOTA_Ability_Animation_TailSpin : public CDOTABaseAbility {
public:

private:

	float m_flPlaybackRate;  // +0x390
	float animation_time;  // +0x394
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
	CDOTA_Ability_Animation_TailSpin(CDOTA_Ability_Animation_TailSpin &);
	CDOTA_Ability_Animation_TailSpin(CDOTA_Ability_Animation_TailSpin &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual bool OnAbilityPhaseStart();
	CDOTA_Ability_Animation_TailSpin();
	virtual float GetPlaybackRateOverride();
	void SetPlaybackRate(float);
	virtual ScriptClassDesc_t * GetScriptDesc();

protected:

	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	virtual ~CDOTA_Ability_Animation_TailSpin();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[264] OnAbilityPhaseStart
	// vtable[213] GetPlaybackRateOverride
	// vtable[4] GetScriptDesc
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_nian.cpp:2478
class CDOTA_Modifier_Animation_TailSpin : public CDOTA_Buff {
public:

private:

	int damage;  // +0xba8
	int damage_radius;  // +0xbac
	float m_flPlaybackRate;  // +0xbb0

	CDOTA_Modifier_Animation_TailSpin();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Animation_TailSpin();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// sizeof = 3024
};

// src/game/shared/dota/units/dota_unit_nian.cpp:2597
class CDOTA_Ability_Nian_Apocalypse : public CDOTABaseAbility {
public:

private:

	int area_of_effect;  // +0x390
	int m_nfxIndex_roar;  // +0x394
	float fire_interval;  // +0x398
	float delay;  // +0x39c
	float target_range;  // +0x3a0

	float m_flTiming;  // +0x3c0
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
	CDOTA_Ability_Nian_Apocalypse(CDOTA_Ability_Nian_Apocalypse &);
	CDOTA_Ability_Nian_Apocalypse(CDOTA_Ability_Nian_Apocalypse &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Ability_Nian_Apocalypse();
	virtual void OnSpellStart();
	virtual bool OnAbilityPhaseStart();
	virtual void OnAbilityPhaseInterrupted();
	void DoAttack();
	virtual void OnChannelThink(float);
	virtual void OnChannelFinish(bool);
	virtual ~CDOTA_Ability_Nian_Apocalypse();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[296] OnChannelThink
	// vtable[267] OnChannelFinish
	// sizeof = 968
};

// src/game/shared/dota/units/dota_unit_nian.cpp:2629
class C_CDOTA_Ability_Nian_Apocalypse_MapInstall {
	C_CDOTA_Ability_Nian_Apocalypse_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_nian.cpp:2757
class CDOTA_Modifier_Nian_Apocalypse : public CDOTA_Buff {
public:

private:

	int area_of_effect;  // +0xba8
	float damage;  // +0xbac
	float stun_duration;  // +0xbb0
	CDOTA_Modifier_Nian_Apocalypse();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Nian_Apocalypse();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_nian.cpp:2874
class CDOTA_Modifier_Nian_Knockdown : public CDOTA_Buff {
public:

private:

	float m_flStandUpDuration;  // +0xba8
	float m_flKnockDownDuration;  // +0xbac
	bool m_bDebuff;  // +0xbb0
	bool m_bStandingUp;  // +0xbb1
	CDOTA_Modifier_Nian_Knockdown();
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual int GetAttributes();
	virtual int StatusEffectPriority();
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	virtual void CheckState(CDOTABuffState &);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	ModifierVariant_t GetModifierMagicalResistanceBonus(const CModifierParams &);
	virtual ~CDOTA_Modifier_Nian_Knockdown();

	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[7] GetAttributes
	// vtable[71] StatusEffectPriority
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// vtable[5] CheckState
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_nian.cpp:2990
class CDOTA_Modifier_Nian_Big_Flinch : public CDOTA_Buff {
public:

	CDOTA_Modifier_Nian_Big_Flinch();
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual int GetAttributes();
	virtual int StatusEffectPriority();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Nian_Big_Flinch();

	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[7] GetAttributes
	// vtable[71] StatusEffectPriority
	// vtable[5] CheckState
	// vtable[11] IsHidden
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_nian.cpp:3039
class CDOTA_Modifier_Firecracker_Debuff : public CDOTA_Buff {
public:

private:

	int bonus_damage;  // +0xba8
	CDOTA_Modifier_Firecracker_Debuff();
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual int GetAttributes();
	virtual int StatusEffectPriority();
	virtual bool IsHidden();
	ModifierVariant_t GetModifierIncomingDamage_Percentage(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual ~CDOTA_Modifier_Firecracker_Debuff();

	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[7] GetAttributes
	// vtable[71] StatusEffectPriority
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_nian.cpp:3202
class CDOTA_Ability_Nian_GreaterBash : public CDOTABaseAbility {
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
	CDOTA_Ability_Nian_GreaterBash(CDOTA_Ability_Nian_GreaterBash &);
	CDOTA_Ability_Nian_GreaterBash(CDOTA_Ability_Nian_GreaterBash &);
	CDOTA_Ability_Nian_GreaterBash();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual bool IsHiddenWhenStolen();
	virtual ~CDOTA_Ability_Nian_GreaterBash();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[306] IsHiddenWhenStolen
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_nian.cpp:3218
class CDOTA_Modifier_Nian_GreaterBash : public CDOTA_Buff {
public:

private:

	int chance_pct;  // +0xba8
	float damage;  // +0xbac
	float movespeed_duration;  // +0xbb0
	CDOTA_Modifier_Nian_GreaterBash();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	void DoBash(CDOTA_BaseNPC *);
	virtual ~CDOTA_Modifier_Nian_GreaterBash();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_nian.cpp:3331
class CDOTA_Modifier_Nian_GreaterBash_Speed : public CDOTA_Buff {
public:

private:

	int bonus_movespeed_pct;  // +0xba8
	CDOTA_Modifier_Nian_GreaterBash_Speed();
	virtual void OnCreated(KeyValues *);
	virtual const char * GetEffectName();
	virtual void DeclareFunctions();
	virtual bool IsHidden();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Nian_GreaterBash_Speed();

	// vtable[57] OnCreated
	// vtable[67] GetEffectName
	// vtable[65] DeclareFunctions
	// vtable[11] IsHidden
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_nian.cpp:3697
class CDOTA_Modifier_NianCharge : public CDOTA_Buff {
public:

private:

	EHANDLE m_hTarget;  // +0xba8
	CDOTA_Modifier_NianCharge();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void OnDestroy();
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t OnOrder(const CModifierParams &);
	ModifierVariant_t OnStateChanged(const CModifierParams &);
	virtual bool IsPurgable();
	virtual const char * GetEffectName();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_NianCharge();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[60] OnDestroy
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// vtable[14] IsPurgable
	// vtable[67] GetEffectName
	// vtable[5] CheckState
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_nian.cpp:3835
class CDOTA_Modifier_NianChargePinned : public CDOTA_Buff {
public:

private:

	float pinned_damage_amount;  // +0xba8
	float pinned_damage_interval;  // +0xbac
	CDOTA_Modifier_NianChargePinned();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void OnDestroy();
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	virtual bool IsPurgable();
	virtual const char * GetStatusEffectName();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_NianChargePinned();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[60] OnDestroy
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// vtable[14] IsPurgable
	// vtable[70] GetStatusEffectName
	// vtable[5] CheckState
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_nian.cpp:3919
class CDOTA_Ability_Nian_Tail_Swipe : public CDOTA_Ability_Animation_Attack {
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
	CDOTA_Ability_Nian_Tail_Swipe(CDOTA_Ability_Nian_Tail_Swipe &);
	CDOTA_Ability_Nian_Tail_Swipe(CDOTA_Ability_Nian_Tail_Swipe &);
	CDOTA_Ability_Nian_Tail_Swipe();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool OnAbilityPhaseStart();
	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Nian_Tail_Swipe();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[264] OnAbilityPhaseStart
	// vtable[266] OnSpellStart
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_nian.cpp:3932
class C_CDOTA_Ability_Nian_Tail_Swipe_MapInstall {
	C_CDOTA_Ability_Nian_Tail_Swipe_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_nian.cpp:3985
class CDOTA_Modifier_Nian_Tail_Swipe_Wall : public CDOTA_Buff {
public:

private:

	int m_DamageAmount;  // +0xbcc
	int m_DamageType;  // +0xbd0
	float speed;  // +0xbd4
	float starting_width;  // +0xbd8
	float ending_width;  // +0xbdc
	float stun_duration;  // +0xbe0
	float fly_duration;  // +0xbe4
	float fly_distance;  // +0xbe8
	int m_nFXIndex;  // +0xbec
	float m_flWallStartTime;  // +0xbf0
	float m_flScalar;  // +0xbf4
	CDOTA_Modifier_Nian_Tail_Swipe_Wall();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnIntervalThink();
	virtual bool IsAvoidMagical();
	void HitNPC(CDOTA_BaseNPC *);
	virtual ~CDOTA_Modifier_Nian_Tail_Swipe_Wall();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[56] OnIntervalThink
	// vtable[79] IsAvoidMagical
	// sizeof = 3096
};

// src/game/shared/dota/units/dota_unit_nian.cpp:4178
class CDOTA_Modifier_Nian_Tail_Swipe_AirTime : public CDOTA_Buff, public CVerticalMotionController {
public:

private:

	float m_flStartZ;  // +0xbb4
	float m_flCurTime;  // +0xbb8
	float m_flOldPitch;  // +0xbbc
	int m_nRotations;  // +0xbcc
	float m_flDistance;  // +0xbd0
	CDOTA_Modifier_Nian_Tail_Swipe_AirTime();
	virtual void CheckState(CDOTABuffState &);
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnVerticalMotionInterrupted();
	virtual void UpdateVerticalMotion(CDOTA_BaseNPC *, float);
	virtual void DeclareFunctions();
	virtual bool IsStunDebuff();
	virtual bool IsPermanent();
	virtual bool IsPurgable();
	virtual bool IsVerticalMotionValidToApply();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual int GetPriority();
	virtual ~CDOTA_Modifier_Nian_Tail_Swipe_AirTime();

	// vtable[5] CheckState
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[89] OnVerticalMotionInterrupted
	// vtable[90] UpdateVerticalMotion
	// vtable[65] DeclareFunctions
	// vtable[16] IsStunDebuff
	// vtable[23] IsPermanent
	// vtable[14] IsPurgable
	// vtable[91] IsVerticalMotionValidToApply
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[6] GetPriority
	// sizeof = 3032
};

// src/game/shared/dota/units/dota_unit_nian.cpp:4310
class CDOTA_Modifier_Nian_Hurricane_Whirlpool : public CDOTA_Buff, public CHorizontalMotionController {
public:

private:

	float pull_switch_interval;  // +0xbb4
	int pull_speed;  // +0xbb8
	bool m_bForward;  // +0xbbc

	int m_nfxIndex;  // +0xbc0
	CDOTA_Modifier_Nian_Hurricane_Whirlpool();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual bool IsHidden();
	virtual bool IsHorizontalMotionValidToApply();
	void SwitchDirection();
	virtual ~CDOTA_Modifier_Nian_Hurricane_Whirlpool();

	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[89] UpdateHorizontalMotion
	// vtable[11] IsHidden
	// vtable[90] IsHorizontalMotionValidToApply
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_nian.cpp:4427
class CDOTA_Ability_Nian_Hurricane : public CDOTABaseAbility {
public:

private:

	int min_distance;  // +0x390
	int max_distance;  // +0x394
	int torrent_count;  // +0x398
	float fire_interval;  // +0x39c
	float pull_switch_interval;  // +0x3a0
	float game_time_wind_activation;  // +0x3a4

	float m_flTiming;  // +0x3d8
	bool m_bForward;  // +0x3dc
	bool m_bUseWind;  // +0x3dd

	int m_nFXIndex;  // +0x3e0
	int m_nfxIndex_roar;  // +0x3e4
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
	CDOTA_Ability_Nian_Hurricane(CDOTA_Ability_Nian_Hurricane &);
	CDOTA_Ability_Nian_Hurricane(CDOTA_Ability_Nian_Hurricane &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Ability_Nian_Hurricane();
	virtual void OnSpellStart();
	virtual bool OnAbilityPhaseStart();
	void LaunchTorrents();
	virtual void OnAbilityPhaseInterrupted();
	virtual void OnChannelThink(float);
	virtual void OnChannelFinish(bool);
	virtual ~CDOTA_Ability_Nian_Hurricane();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[296] OnChannelThink
	// vtable[267] OnChannelFinish
	// sizeof = 1000
};

// src/game/shared/dota/units/dota_unit_nian.cpp:4466
class C_CDOTA_Ability_Nian_Hurricane_MapInstall {
	C_CDOTA_Ability_Nian_Hurricane_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_nian.cpp:4677
class CDOTA_Modifier_Nian_Torrent_Thinker : public CDOTA_Buff {
public:

	CDOTA_Modifier_Nian_Torrent_Thinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Nian_Torrent_Thinker();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_nian.cpp:4767
class CDOTA_Ability_Nian_Whirlpool : public CDOTABaseAbility {
public:

private:

	int pool_count;  // +0x390
	int min_distance;  // +0x394
	int max_distance;  // +0x398
	int pull_radius;  // +0x39c
	float fire_interval;  // +0x3a0

	float m_flTiming;  // +0x3c0
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
	CDOTA_Ability_Nian_Whirlpool(CDOTA_Ability_Nian_Whirlpool &);
	CDOTA_Ability_Nian_Whirlpool(CDOTA_Ability_Nian_Whirlpool &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Ability_Nian_Whirlpool();
	virtual void OnSpellStart();
	virtual bool OnAbilityPhaseStart();
	virtual void OnAbilityPhaseInterrupted();
	void CreateWhirlpools();
	virtual void OnChannelThink(float);
	virtual void OnChannelFinish(bool);
	virtual ~CDOTA_Ability_Nian_Whirlpool();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[296] OnChannelThink
	// vtable[267] OnChannelFinish
	// sizeof = 968
};

// src/game/shared/dota/units/dota_unit_nian.cpp:4799
class C_CDOTA_Ability_Nian_Whirlpool_MapInstall {
	C_CDOTA_Ability_Nian_Whirlpool_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_nian.cpp:4900
class CDOTA_Modifier_Nian_WhirlpoolThinker : public CDOTA_Buff {
public:

private:

	int pull_radius;  // +0xba8
	CDOTA_Modifier_Nian_WhirlpoolThinker();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Nian_WhirlpoolThinker();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_nian.cpp:4989
class CDOTA_Modifier_Nian_Whirlpool_Pull : public CDOTA_Buff, public CHorizontalMotionController {
public:

private:

	int pull_radius;  // +0xbb4
	int pull_speed;  // +0xbb8
	int radius;  // +0xbbc
	int whirlpool_damage;  // +0xbc0
	float tick_rate;  // +0xbc4
	float m_flDamageTick;  // +0xbc8
	EHANDLE m_hThinker;  // +0xbcc
	CDOTA_Modifier_Nian_Whirlpool_Pull();
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void CheckState(CDOTABuffState &);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual bool IsHorizontalMotionValidToApply();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	virtual ~CDOTA_Modifier_Nian_Whirlpool_Pull();

	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[5] CheckState
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] IsHorizontalMotionValidToApply
	// sizeof = 3024
};

// src/game/shared/dota/units/dota_unit_nian.cpp:5117
class CDOTA_Ability_Nian_Eruption : public CDOTABaseAbility {
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
	CDOTA_Ability_Nian_Eruption(CDOTA_Ability_Nian_Eruption &);
	CDOTA_Ability_Nian_Eruption(CDOTA_Ability_Nian_Eruption &);
	CDOTA_Ability_Nian_Eruption();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Nian_Eruption();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_nian.cpp:5128
class C_CDOTA_Ability_Nian_Eruption_MapInstall {
	C_CDOTA_Ability_Nian_Eruption_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_nian.cpp:5167
class CDOTA_Modifier_Nian_EruptionPendingThinker : public CDOTA_Buff {
public:

private:

	int tick_count;  // +0xba8
	int beam_radius;  // +0xbac
	int m_nTickCount;  // +0xbb0
	CDOTA_Modifier_Nian_EruptionPendingThinker();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Nian_EruptionPendingThinker();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_nian.cpp:5254
class CDOTA_Modifier_Nian_EruptionThinker : public CDOTA_Buff {
public:

private:

	int explosion_radius;  // +0xba8
	float damage_interval;  // +0xbac
	int damage;  // +0xbb0
	CDOTA_Modifier_Nian_EruptionThinker();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Nian_EruptionThinker();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_nian.cpp:5337
class CDOTA_Ability_Nian_Sigils : public CDOTABaseAbility {
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
	CDOTA_Ability_Nian_Sigils(CDOTA_Ability_Nian_Sigils &);
	CDOTA_Ability_Nian_Sigils(CDOTA_Ability_Nian_Sigils &);
	CDOTA_Ability_Nian_Sigils();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual bool OnAbilityPhaseStart();
	virtual void OnAbilityPhaseInterrupted();
	virtual ~CDOTA_Ability_Nian_Sigils();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_nian.cpp:5360
class C_CDOTA_Ability_Nian_Sigils_MapInstall {
	C_CDOTA_Ability_Nian_Sigils_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_nian.cpp:5429
class CDOTA_Modifier_Nian_Waterball : public CDOTA_Buff {
public:

private:

	int trail_damage_per_second;  // +0xba8
	int trail_damage_radius;  // +0xbac
	CDOTA_Modifier_Nian_Waterball();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	void AddLocation(Vector);
	virtual ~CDOTA_Modifier_Nian_Waterball();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// sizeof = 3040
};

// src/game/shared/dota/units/dota_unit_nian.cpp:5515
class CDOTA_Ability_Nian_Waterball : public CDOTABaseAbility {
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
	CDOTA_Ability_Nian_Waterball(CDOTA_Ability_Nian_Waterball &);
	CDOTA_Ability_Nian_Waterball(CDOTA_Ability_Nian_Waterball &);
	CDOTA_Ability_Nian_Waterball();
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
	virtual Activity GetCastAnimation();
	virtual bool OnAbilityPhaseStart();
	virtual ~CDOTA_Ability_Nian_Waterball();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[291] OnProjectileThink
	// vtable[234] GetCastAnimation
	// vtable[264] OnAbilityPhaseStart
	// sizeof = 960
};

// src/game/shared/dota/units/dota_unit_nian.cpp:5533
class C_CDOTA_Ability_Nian_Waterball_MapInstall {
	C_CDOTA_Ability_Nian_Waterball_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_nian.cpp:5664
class CDOTA_Modifier_Nian_Damage_Reflection : public CDOTA_Buff {
public:

private:

	float m_flReflectionStartTime;  // +0xba8
	float m_flReflectionAmount;  // +0xbac
	CDOTA_Modifier_Nian_Damage_Reflection();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Nian_Damage_Reflection();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[14] IsPurgable
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_nian.cpp:5733
class CDOTA_Item_Nian_Flag_Trap : public CDOTA_Item {
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
	CDOTA_Item_Nian_Flag_Trap(CDOTA_Item_Nian_Flag_Trap &);
	CDOTA_Item_Nian_Flag_Trap(CDOTA_Item_Nian_Flag_Trap &);
	CDOTA_Item_Nian_Flag_Trap();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual ~CDOTA_Item_Nian_Flag_Trap();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/units/dota_unit_nian.cpp:5752
class C_CDOTA_Item_Nian_Flag_Trap_MapInstall {
	C_CDOTA_Item_Nian_Flag_Trap_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_nian.cpp:5784
class CDOTA_Modifier_Nian_Flag_Trap_Thinker : public CDOTA_Buff {
public:

	int radius;  // +0xba8
	int m_nFXIndex;  // +0xbac
	CDOTA_Modifier_Nian_Flag_Trap_Thinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Nian_Flag_Trap_Thinker();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[14] IsPurgable
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_nian.cpp:5858
class CDOTA_Modifier_Nian_Flag_Trapped : public CDOTA_Buff {
public:

	int bonus_spell_damage_pct;  // +0xba8
	CDOTA_Modifier_Nian_Flag_Trapped();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual int GetAttributes();
	virtual int StatusEffectPriority();
	virtual void CheckState(CDOTABuffState &);
	virtual void OnDestroy();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Nian_Flag_Trapped();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[7] GetAttributes
	// vtable[71] StatusEffectPriority
	// vtable[5] CheckState
	// vtable[60] OnDestroy
	// vtable[14] IsPurgable
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_nian.cpp:5924
class CDOTA_Ability_Firework_Mine : public CDOTA_Item {
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
	CDOTA_Ability_Firework_Mine(CDOTA_Ability_Firework_Mine &);
	CDOTA_Ability_Firework_Mine(CDOTA_Ability_Firework_Mine &);
	CDOTA_Ability_Firework_Mine();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Firework_Mine();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/units/dota_unit_nian.cpp:5959
class CDOTA_Modifier_Firework_Mine : public CDOTA_Buff {
public:

private:

	int damage_radius;  // +0xba8
	int trigger_radius;  // +0xbac
	int damage;  // +0xbb0
	CDOTA_Modifier_Firework_Mine();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Firework_Mine();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[5] CheckState
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_nian.cpp:6078
class CDOTA_Item_ForceBoots : public CDOTA_Item {
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
	CDOTA_Item_ForceBoots(CDOTA_Item_ForceBoots &);
	CDOTA_Item_ForceBoots(CDOTA_Item_ForceBoots &);
	CDOTA_Item_ForceBoots();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual ~CDOTA_Item_ForceBoots();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/units/dota_unit_nian.cpp:6125
class CDOTA_Modifier_ForceBootsIntrinsic : public CDOTA_Buff {
public:

private:

	int bonus_movement_speed;  // +0xba8
	int bonus_attack_speed;  // +0xbac
	int bonus_str;  // +0xbb0
	int bonus_agi;  // +0xbb4
	int bonus_int;  // +0xbb8
	CDOTA_Modifier_ForceBootsIntrinsic();
	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Special_Boots(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Str(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Agi(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Int(const CModifierParams &);
	virtual ~CDOTA_Modifier_ForceBootsIntrinsic();

	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_nian.cpp:6201
class CDOTA_Modifier_ForceBoots : public CDOTA_Buff, public CHorizontalMotionController {
public:

private:

	float m_flEndTime;  // +0xbc0
	float m_flCurTime;  // +0xbc4
	int push_length;  // +0xbc8
	CDOTA_Modifier_ForceBoots();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual void DeclareFunctions();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	virtual ~CDOTA_Modifier_ForceBoots();

	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] OnHorizontalMotionInterrupted
	// vtable[91] IsHorizontalMotionValidToApply
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[65] DeclareFunctions
	// sizeof = 3024
};

// src/game/shared/dota/units/dota_unit_nian.cpp:6329
class CDOTA_Item_JumpBoots : public CDOTA_Item {
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
	CDOTA_Item_JumpBoots(CDOTA_Item_JumpBoots &);
	CDOTA_Item_JumpBoots(CDOTA_Item_JumpBoots &);
	CDOTA_Item_JumpBoots();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual ~CDOTA_Item_JumpBoots();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/units/dota_unit_nian.cpp:6376
class CDOTA_Modifier_JumpBootsIntrinsic : public CDOTA_Buff {
public:

private:

	int bonus_movement_speed;  // +0xba8
	CDOTA_Modifier_JumpBootsIntrinsic();
	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Special_Boots(const CModifierParams &);
	virtual ~CDOTA_Modifier_JumpBootsIntrinsic();

	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_nian.cpp:6419
class CDOTA_Modifier_JumpBoots : public CDOTA_Buff, public CVerticalMotionController {
public:

private:

	float m_flStartZ;  // +0xbc0
	float m_flCurTime;  // +0xbc4
	int push_length;  // +0xbc8
	CDOTA_Modifier_JumpBoots();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void UpdateVerticalMotion(CDOTA_BaseNPC *, float);
	virtual void OnVerticalMotionInterrupted();
	virtual bool IsVerticalMotionValidToApply();
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	virtual ~CDOTA_Modifier_JumpBoots();

	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[89] UpdateVerticalMotion
	// vtable[90] OnVerticalMotionInterrupted
	// vtable[91] IsVerticalMotionValidToApply
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// sizeof = 3024
};

// src/game/shared/dota/units/dota_unit_nian.cpp:6544
class CDOTA_Ability_Nian_Leap : public CDOTABaseAbility {
public:

private:

	float m_flPlaybackRate;  // +0x390
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
	CDOTA_Ability_Nian_Leap(CDOTA_Ability_Nian_Leap &);
	CDOTA_Ability_Nian_Leap(CDOTA_Ability_Nian_Leap &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual Activity GetCastAnimation();
	virtual ScriptClassDesc_t * GetScriptDesc();

protected:

	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	CDOTA_Ability_Nian_Leap();
	virtual float GetPlaybackRateOverride();
	void SetPlaybackRate(float);
	virtual ~CDOTA_Ability_Nian_Leap();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[234] GetCastAnimation
	// vtable[4] GetScriptDesc
	// vtable[213] GetPlaybackRateOverride
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_nian.cpp:6593
class CDOTA_Modifier_Nian_Leap : public CDOTA_Buff, public CHorizontalMotionController, public CVerticalMotionController {
public:

private:

	float m_flTotalTimeInAir;  // +0xbc4
	float m_flInitialVelocity;  // +0xbc8
	float m_flCurrentTimeHoriz;  // +0xbf0
	float m_flCurrentTimeVert;  // +0xbf4
	bool m_bInterrupted;  // +0xbf8

	float m_flHorizDelayTime;  // +0xbfc
	float m_flVertDelayTime;  // +0xc00
	float m_flLeapSequenceDuration;  // +0xc04
	float m_flPlaybackRate;  // +0xc08
	int pounce_distance;  // +0xc0c
	float pounce_speed;  // +0xc10
	float pounce_acceleration;  // +0xc14
	float initial_delay;  // +0xc18
	float landing_delay;  // +0xc1c
	CDOTA_Modifier_Nian_Leap();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void CheckState(CDOTABuffState &);
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void UpdateVerticalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual void OnVerticalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual bool IsVerticalMotionValidToApply();
	virtual ~CDOTA_Modifier_Nian_Leap();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[5] CheckState
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] UpdateVerticalMotion
	// vtable[91] OnHorizontalMotionInterrupted
	// vtable[92] OnVerticalMotionInterrupted
	// vtable[93] IsHorizontalMotionValidToApply
	// vtable[94] IsVerticalMotionValidToApply
	// sizeof = 3104
};

// src/game/shared/dota/units/dota_unit_nian.cpp:6841
class CDOTA_Item_Recipe_Vermillion_Robe : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Vermillion_Robe(CDOTA_Item_Recipe_Vermillion_Robe &);
	CDOTA_Item_Recipe_Vermillion_Robe(CDOTA_Item_Recipe_Vermillion_Robe &);
	CDOTA_Item_Recipe_Vermillion_Robe();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Vermillion_Robe();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/units/dota_unit_nian.cpp:6855
class CDOTA_Item_Vermillion_Robe : public CDOTA_Item {
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
	CDOTA_Item_Vermillion_Robe(CDOTA_Item_Vermillion_Robe &);
	CDOTA_Item_Vermillion_Robe(CDOTA_Item_Vermillion_Robe &);
	CDOTA_Item_Vermillion_Robe();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_Vermillion_Robe();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/units/dota_unit_nian.cpp:6891
class CDOTA_Modifier_Item_Vermillion_Robe_Flames : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	float damage_per_health_missing;  // +0xbac
	float delay;  // +0xbb0
	CDOTA_Modifier_Item_Vermillion_Robe_Flames();
	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Item_Vermillion_Robe_Flames();

	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_nian.cpp:6967
class CDOTA_Modifier_Item_Vermillion_Robe : public CDOTA_Buff_Item {
public:

private:

	int mana_regen_pct;  // +0xba8
	int move_speed_bonus;  // +0xbac
	int bonus_stats;  // +0xbb0
	CDOTA_Modifier_Item_Vermillion_Robe();
	ModifierVariant_t GetModifierPercentageManaRegen(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Str(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Agi(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Int(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual const char * GetStatusEffectName();
	virtual ~CDOTA_Modifier_Item_Vermillion_Robe();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[70] GetStatusEffectName
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Ability_Animation_Attack::~CDOTA_Ability_Animation_Attack  (line 54, @0x0000000002b1c280, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Animation_Attack::~CDOTA_Ability_Animation_Attack(
        CDOTA_Ability_Animation_Attack *const this)
{
  this->_vptr_IHandleEntity = &off_44793B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Animation_Attack::~CDOTA_Ability_Animation_Attack  (line 54, @0x0000000002b1c2a0, libserver.so)  // inlines: ~CDOTA_Ability_Animation_Attack
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Animation_Attack::~CDOTA_Ability_Animation_Attack(
        CDOTA_Ability_Animation_Attack *const this)
{
  this->_vptr_IHandleEntity = &off_44793B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Animation_Attack::Schema_DynamicBinding  (line 56, @0x0000000002b15840, libserver.so)
// globals: CDOTA_Ability_Animation_Attack::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Animation_Attack::Schema_DynamicBinding(
        const CDOTA_Ability_Animation_Attack *const this)
{
  return CDOTA_Ability_Animation_Attack::s_pSchemaBinding;
}


// CDOTA_Ability_Animation_Attack::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 56, @0x0000000002b15850, libserver.so)
// globals: CDOTA_Ability_Animation_Attack::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Animation_Attack::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Animation_Attack::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Animation_Attack::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Animation_Attack::CEntityInstanceEntityClass::DestructInstance  (line 56, @0x0000000002b15860, libserver.so)  // inlines: Destruct<CDOTA_Ability_Animation_Attack>
void __fastcall CDOTA_Ability_Animation_Attack::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Animation_Attack::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Animation_Attack::CEntityInstanceEntityClass::FreeInstance  (line 56, @0x0000000002b15880, libserver.so)
void __fastcall CDOTA_Ability_Animation_Attack::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Animation_Attack::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Animation_Attack::CEntityInstanceEntityClass::CanAllocate  (line 56, @0x0000000002b158a0, libserver.so)
bool __fastcall CDOTA_Ability_Animation_Attack::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Animation_Attack::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Animation_Attack::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 56, @0x0000000002b158b0, libserver.so)
// globals: CDOTA_Ability_Animation_Attack::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Animation_Attack::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Animation_Attack::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Animation_Attack::s_pSchemaBinding;
}


// CDOTA_Ability_Animation_Attack::CEntityInstanceEntityClass::AllocateInstance  (line 56, @0x0000000002b19030, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Animation_Attack::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Animation_Attack::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Animation_Attack::CEntityInstanceEntityClass::ConstructInstance  (line 56, @0x0000000002b1b730, libserver.so)  // inlines: CDOTA_Ability_Animation_Attack, Construct<CDOTA_Ability_Animation_Attack>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Animation_Attack::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Animation_Attack::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = 1065353216;
    *p = &off_44793B0;
  }
  return p;
}


// CDOTA_Ability_Animation_Attack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 56, @0x0000000002b22040, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Animation_Attack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Animation_Attack::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Animation_Attack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 56, @0x0000000002b22060, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Animation_Attack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Animation_Attack::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Animation_Attack::GetEntityClassInfo  (line 56, @0x0000000002b2b7c0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release
// callers: CDOTA_Ability_Animation_RightClawSwipe::GetEntityClassInternal, CDOTA_Ability_Animation_LeftClawSwipe::GetEntityClassInternal, CDOTA_Ability_Nian_Tail_Swipe::GetEntityClassInternal
// strings: "ability_animation_attack", "CDOTA_Ability_Animation_Attack", "dota_base_ability", "CDOTABaseAbility", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CDOTA_Ability_Animation_Attack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_AttackClassInfo, CDOTA_Ability_Animation_Attack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_AttackClassInfo, `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo, CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo, `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo, CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo
CEntityClassInfo *__cdecl CDOTA_Ability_Animation_Attack::GetEntityClassInfo()
{
  if ( `guard variable for'CDOTA_Ability_Animation_Attack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_AttackClassInfo != 0 )
    return &CDOTA_Ability_Animation_Attack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_AttackClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Animation_Attack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_AttackClassInfo) == 0 )
    return &CDOTA_Ability_Animation_Attack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_AttackClassInfo;
  if ( `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo) != 0 )
    {
      if ( `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo) != 0 )
      {
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo,
          "CGameEntity",
          0,
          0,
          &g_EntityRootClassInfo);
        __cxa_guard_release(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo,
        "CBaseEntity",
        0,
        0,
        &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo,
      "CDOTABaseAbility",
      "dota_base_ability",
      0,
      &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CDOTA_Ability_Animation_Attack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_AttackClassInfo,
    "CDOTA_Ability_Animation_Attack",
    "ability_animation_attack",
    0,
    &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo);
  __cxa_guard_release(&`guard variable for'CDOTA_Ability_Animation_Attack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_AttackClassInfo);
  return &CDOTA_Ability_Animation_Attack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_AttackClassInfo;
}


// CDOTA_Ability_Animation_Attack::GetEntityClassInternal  (line 56, @0x0000000002b32980, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_Ability_Animation_Attack>, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "ability_animation_attack", "CDOTA_Ability_Animation_Attack"
// globals: `guard variable for'CDOTA_Ability_Animation_Attack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_AttackClass, CDOTA_Ability_Animation_Attack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_AttackClass, __dso_handle, CDOTA_Ability_Animation_Attack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Animation_Attack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_AttackClassInfo, CDOTA_Ability_Animation_Attack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_AttackClassInfo
CEntityClass *__cdecl CDOTA_Ability_Animation_Attack::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Animation_Attack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_AttackClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Animation_Attack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_AttackClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Animation_Attack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_AttackClass);
    CDOTA_Ability_Animation_Attack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_AttackClass._vptr_CEntityClass = off_445EDF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Animation_Attack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_AttackClass);
    __cxa_atexit(
      CDOTA_Ability_Animation_Attack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Animation_Attack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_AttackClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Animation_AttackClass != 0 )
    return &CDOTA_Ability_Animation_Attack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_AttackClass;
  if ( `guard variable for'CDOTA_Ability_Animation_Attack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_AttackClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Animation_Attack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_AttackClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Animation_Attack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_AttackClassInfo,
      "CDOTA_Ability_Animation_Attack",
      "ability_animation_attack",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Animation_Attack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_AttackClassInfo);
  }
  CDOTA_Ability_Animation_Attack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_AttackClass.m_pClassInfo = &CDOTA_Ability_Animation_Attack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_AttackClassInfo;
  CDOTA_Ability_Animation_Attack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_AttackClass.m_pBaseClassInfo = CDOTA_Ability_Animation_Attack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_AttackClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Animation_AttackClass = &CDOTA_Ability_Animation_Attack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_AttackClass;
  CDOTA_Ability_Animation_Attack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_AttackClassInfo.m_pClass = &CDOTA_Ability_Animation_Attack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_AttackClass;
  CDOTA_Ability_Animation_Attack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_AttackClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_Ability_Animation_Attack>(0);
  g_pEntityCDOTA_Ability_Animation_AttackClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Animation_Attack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_AttackClass;
}


// CDOTA_Ability_Animation_Attack::GetPlaybackRateOverride  (line 62, @0x0000000002b158c0, libserver.so)
float __fastcall CDOTA_Ability_Animation_Attack::GetPlaybackRateOverride(CDOTA_Ability_Animation_Attack *const this)
{
  return this->m_flPlaybackRate;
}


// CDOTA_Ability_Animation_Attack::SetPlaybackRate  (line 63, @0x0000000002b158d0, libserver.so)
void __fastcall CDOTA_Ability_Animation_Attack::SetPlaybackRate(
        CDOTA_Ability_Animation_Attack *const this,
        float a2,
        float flRate)
{
  this->m_flPlaybackRate = a2;
}


// CDOTA_Ability_Animation_Attack::GetCastRange  (line 68, @0x0000000002b1bc70, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::GetCastRange
// strings: "modifier_animated_right_claw_swipe", "modifier_animated_left_claw_swipe"
int __fastcall CDOTA_Ability_Animation_Attack::GetCastRange(CDOTA_Ability_Animation_Attack *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v4; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_animated_right_claw_swipe", 0) != 0 )
    return 10000;
  v4 = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::FindModifierByName(v4, "modifier_animated_left_claw_swipe", 0) != 0 )
    return 10000;
  else
    return CDOTABaseAbility::GetCastRange(this, &vec3_origin, 0);
}


// CDOTA_Ability_Animation_RightClawSwipe::~CDOTA_Ability_Animation_RightClawSwipe  (line 99, @0x0000000002b1c2d0, libserver.so)  // inlines: ~CDOTA_Ability_Animation_Attack
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Animation_RightClawSwipe::~CDOTA_Ability_Animation_RightClawSwipe(
        CDOTA_Ability_Animation_RightClawSwipe *const this)
{
  this->_vptr_IHandleEntity = &off_44793B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Animation_RightClawSwipe::~CDOTA_Ability_Animation_RightClawSwipe  (line 99, @0x0000000002b1c2f0, libserver.so)  // inlines: ~CDOTA_Ability_Animation_Attack, ~CDOTA_Ability_Animation_RightClawSwipe
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Animation_RightClawSwipe::~CDOTA_Ability_Animation_RightClawSwipe(
        CDOTA_Ability_Animation_RightClawSwipe *const this)
{
  this->_vptr_IHandleEntity = &off_44793B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Animation_RightClawSwipe::Schema_DynamicBinding  (line 101, @0x0000000002b158e0, libserver.so)
// globals: CDOTA_Ability_Animation_RightClawSwipe::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Animation_RightClawSwipe::Schema_DynamicBinding(
        const CDOTA_Ability_Animation_RightClawSwipe *const this)
{
  return CDOTA_Ability_Animation_RightClawSwipe::s_pSchemaBinding;
}


// CDOTA_Ability_Animation_RightClawSwipe::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 101, @0x0000000002b158f0, libserver.so)
// globals: CDOTA_Ability_Animation_RightClawSwipe::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Animation_RightClawSwipe::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Animation_RightClawSwipe::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Animation_RightClawSwipe::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Animation_RightClawSwipe::CEntityInstanceEntityClass::DestructInstance  (line 101, @0x0000000002b15900, libserver.so)  // inlines: Destruct<CDOTA_Ability_Animation_RightClawSwipe>
void __fastcall CDOTA_Ability_Animation_RightClawSwipe::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Animation_RightClawSwipe::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Animation_RightClawSwipe::CEntityInstanceEntityClass::FreeInstance  (line 101, @0x0000000002b15920, libserver.so)
void __fastcall CDOTA_Ability_Animation_RightClawSwipe::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Animation_RightClawSwipe::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Animation_RightClawSwipe::CEntityInstanceEntityClass::CanAllocate  (line 101, @0x0000000002b15940, libserver.so)
bool __fastcall CDOTA_Ability_Animation_RightClawSwipe::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Animation_RightClawSwipe::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Animation_RightClawSwipe::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 101, @0x0000000002b15950, libserver.so)
// globals: CDOTA_Ability_Animation_RightClawSwipe::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Animation_RightClawSwipe::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Animation_RightClawSwipe::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Animation_RightClawSwipe::s_pSchemaBinding;
}


// CDOTA_Ability_Animation_RightClawSwipe::CEntityInstanceEntityClass::AllocateInstance  (line 101, @0x0000000002b19070, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Animation_RightClawSwipe::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Animation_RightClawSwipe::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Animation_RightClawSwipe::CEntityInstanceEntityClass::ConstructInstance  (line 101, @0x0000000002b1b770, libserver.so)  // inlines: CDOTA_Ability_Animation_Attack, CDOTA_Ability_Animation_RightClawSwipe, Construct<CDOTA_Ability_Animation_RightClawSwipe>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Animation_RightClawSwipe::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Animation_RightClawSwipe::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = 1065353216;
    *p = &off_445EEF0;
  }
  return p;
}


// CDOTA_Ability_Animation_RightClawSwipe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 101, @0x0000000002b22090, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Animation_RightClawSwipe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Animation_RightClawSwipe::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Animation_RightClawSwipe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 101, @0x0000000002b220b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Animation_RightClawSwipe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Animation_RightClawSwipe::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Animation_RightClawSwipe::GetEntityClassInternal  (line 101, @0x0000000002b32ad0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_Ability_Animation_Attack>, CDOTA_Ability_Animation_Attack::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "animated_right_claw_swipe", "CDOTA_Ability_Animation_RightClawSwipe"
// globals: `guard variable for'CDOTA_Ability_Animation_RightClawSwipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_RightClawSwipeClass, CDOTA_Ability_Animation_RightClawSwipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_RightClawSwipeClass, __dso_handle, CDOTA_Ability_Animation_RightClawSwipe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Animation_RightClawSwipe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_RightClawSwipeClassInfo, CDOTA_Ability_Animation_RightClawSwipe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_RightClawSwipeClassInfo
CEntityClass *__cdecl CDOTA_Ability_Animation_RightClawSwipe::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Animation_RightClawSwipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_RightClawSwipeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Animation_RightClawSwipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_RightClawSwipeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Animation_RightClawSwipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_RightClawSwipeClass);
    CDOTA_Ability_Animation_RightClawSwipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_RightClawSwipeClass._vptr_CEntityClass = off_445EE70;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Animation_RightClawSwipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_RightClawSwipeClass);
    __cxa_atexit(
      CDOTA_Ability_Animation_RightClawSwipe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Animation_RightClawSwipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_RightClawSwipeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Animation_RightClawSwipeClass != 0 )
    return &CDOTA_Ability_Animation_RightClawSwipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_RightClawSwipeClass;
  if ( `guard variable for'CDOTA_Ability_Animation_RightClawSwipe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_RightClawSwipeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Animation_RightClawSwipe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_RightClawSwipeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Ability_Animation_Attack::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Animation_RightClawSwipe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_RightClawSwipeClassInfo,
      "CDOTA_Ability_Animation_RightClawSwipe",
      "animated_right_claw_swipe",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Animation_RightClawSwipe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_RightClawSwipeClassInfo);
  }
  CDOTA_Ability_Animation_RightClawSwipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_RightClawSwipeClass.m_pClassInfo = &CDOTA_Ability_Animation_RightClawSwipe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_RightClawSwipeClassInfo;
  CDOTA_Ability_Animation_RightClawSwipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_RightClawSwipeClass.m_pBaseClassInfo = CDOTA_Ability_Animation_RightClawSwipe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_RightClawSwipeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Animation_RightClawSwipeClass = &CDOTA_Ability_Animation_RightClawSwipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_RightClawSwipeClass;
  CDOTA_Ability_Animation_RightClawSwipe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_RightClawSwipeClassInfo.m_pClass = &CDOTA_Ability_Animation_RightClawSwipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_RightClawSwipeClass;
  CDOTA_Ability_Animation_RightClawSwipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_RightClawSwipeClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_Ability_Animation_Attack>(0);
  g_pEntityCDOTA_Ability_Animation_RightClawSwipeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Animation_RightClawSwipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_RightClawSwipeClass;
}


// CDOTA_Ability_Animation_RightClawSwipe::OnAbilityPhaseStart  (line 112, @0x0000000002b02c70, libserver.so)  // inlines: GetLevelSpecialValueFor<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "animation_time", "modifier_animated_right_claw_swipe", "initial_delay", "Nian.Claw.PreAttack"
bool __fastcall CDOTA_Ability_Animation_RightClawSwipe::OnAbilityPhaseStart(
        CDOTA_Ability_Animation_RightClawSwipe *const this)
{
  float v2; // xmm1_4
  float v3; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  this->animation_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "animation_time", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_animated_right_claw_swipe");
  KeyValues::SetFloat(&kv, "duration", v2);
  KeyValues::SetFloat(&kv, "initial_delay", v3);
  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v5, Caster, this, "modifier_animated_right_claw_swipe", &kv, 0);
  v6 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v6, "Nian.Claw.PreAttack", 0.0, 0, 0);
  KeyValues::~KeyValues(&kv);
  return 1;
}


// CDOTA_Modifier_Animation_RightClawSwipe::~CDOTA_Modifier_Animation_RightClawSwipe  (line 131, @0x0000000002b30450, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Animation_RightClawSwipe::~CDOTA_Modifier_Animation_RightClawSwipe(
        CDOTA_Modifier_Animation_RightClawSwipe *const this)
{
  this->_vptr_CDOTA_Buff = &off_445F9B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_vHitEntities);
  if ( (this->m_vHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vHitEntities.m_Memory),
        (this->m_vHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vHitEntities.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Animation_RightClawSwipe::~CDOTA_Modifier_Animation_RightClawSwipe  (line 131, @0x0000000002b30840, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_Animation_RightClawSwipe, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Animation_RightClawSwipe::~CDOTA_Modifier_Animation_RightClawSwipe(
        CDOTA_Modifier_Animation_RightClawSwipe *const this)
{
  this->_vptr_CDOTA_Buff = &off_445F9B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_vHitEntities);
  if ( (this->m_vHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vHitEntities.m_Memory);
    if ( (this->m_vHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vHitEntities.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Animation_RightClawSwipe::IsHidden  (line 139, @0x0000000002b15960, libserver.so)
bool __fastcall CDOTA_Modifier_Animation_RightClawSwipe::IsHidden(CDOTA_Modifier_Animation_RightClawSwipe *const this)
{
  return 1;
}


// CDOTA_Modifier_Animation_RightClawSwipe::IsPurgable  (line 140, @0x0000000002b15970, libserver.so)
bool __fastcall CDOTA_Modifier_Animation_RightClawSwipe::IsPurgable(
        CDOTA_Modifier_Animation_RightClawSwipe *const this)
{
  return 0;
}


// CDOTA_Modifier_Animation_RightClawSwipe::OnCreated  (line 158, @0x0000000002b0a540, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::GetFloat, CDOTA_Buff::StartIntervalThink
// strings: "initial_delay"
void __fastcall CDOTA_Modifier_Animation_RightClawSwipe::OnCreated(
        CDOTA_Modifier_Animation_RightClawSwipe *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  float v6; // xmm1_4
  float Float; // xmm0_4
  float v8; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->damage = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_3;
LABEL_6:
    this->damage_radius = 0;
    goto LABEL_4;
  }
  this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_6;
LABEL_3:
  this->damage_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "damage_radius", -1, 0);
LABEL_4:
  Float = KeyValues::GetFloat(pKV, "initial_delay", v6);
  this->m_flScalar = Float;
  CDOTA_Buff::StartIntervalThink(this, Float, v8);
}


// CDOTA_Modifier_Animation_RightClawSwipe::OnIntervalThink  (line 171, @0x0000000002b0dda0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, GrowMemory, HasElement, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetCaster, CBaseAnimating::GetAttachment, CDOTA_Buff::GetParent, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CDOTA_Buff::GetAbility, ApplyDamage, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, KeyValues::KeyValues, CBaseEntity::GetAbsOrigin (20 total)
// strings: "attach_attack1", "attach_attack3", "modifier_knockback", "center_x", "center_y", "center_z" (7 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Animation_RightClawSwipe::OnIntervalThink(
        CDOTA_Modifier_Animation_RightClawSwipe *const this)
{
  float v1; // xmm1_4
  __int64 v3; // r14
  vec_t z; // ebx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v6; // rax
  __m128i v7; // xmm2
  CDOTA_BaseNPC *Parent; // r15
  CDOTA_BaseNPC *v9; // rax
  __m128i v10; // xmm3
  CDOTA_BaseNPC *v11; // r13
  CDOTA_BaseNPC *v12; // rax
  __int64 v13; // rbx
  CHandle<CBaseEntity> *v14; // rsi
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *v19; // rax
  CDOTABaseAbility *v20; // rax
  CDOTABaseAbility *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  float v23; // xmm1_4
  CDOTA_BaseNPC *v24; // rax
  float v25; // xmm1_4
  CDOTA_BaseNPC *v26; // rax
  float v27; // xmm1_4
  float v28; // xmm1_4
  float v29; // xmm1_4
  float v30; // xmm1_4
  CDOTA_BaseNPC *v31; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v33; // cx
  __int64 m_Size; // r15
  int v35; // eax
  CHandle<CBaseEntity> *v36; // rax
  float flDamage; // [rsp+3Ch] [rbp-A4h]
  int v38; // [rsp+40h] [rbp-A0h]
  float knockback_duration; // [rsp+48h] [rbp-98h] BYREF
  int knockback_distance; // [rsp+4Ch] [rbp-94h] BYREF
  Vector vLocation1; // [rsp+50h] [rbp-90h] BYREF
  Vector vLocation2; // [rsp+60h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+70h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+90h] [rbp-50h] BYREF
  unsigned __int64 v45; // [rsp+A8h] [rbp-38h]

  v45 = __readfsqword(0x28u);
  CDOTA_Buff::StartIntervalThink(this, 0.0099999998, v1);
  v3 = *&vec3_invalid.x;
  z = vec3_invalid.z;
  *&vLocation1.x = *&vec3_invalid.x;
  vLocation1.z = z;
  Caster = CDOTA_Buff::GetCaster(this);
  CBaseAnimating::GetAttachment(Caster, "attach_attack1", &vLocation1);
  *&vLocation2.x = v3;
  vLocation2.z = z;
  v6 = CDOTA_Buff::GetCaster(this);
  CBaseAnimating::GetAttachment(v6, "attach_attack3", &vLocation2);
  *v7.m128i_i32 = this->damage_radius;
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  LODWORD(v3) = _mm_cvtsi128_si32(v7);
  Parent = CDOTA_Buff::GetParent(this);
  v9 = CDOTA_Buff::GetParent(this);
  FindUnitsInRadius(v9->m_iTeamNum.m_Value, &vLocation1, Parent, *&v3, &entities, 2, 3, 16, 0, 0);
  *v10.m128i_i32 = this->damage_radius;
  LODWORD(v3) = _mm_cvtsi128_si32(v10);
  v11 = CDOTA_Buff::GetParent(this);
  v12 = CDOTA_Buff::GetParent(this);
  FindUnitsInRadius(v12->m_iTeamNum.m_Value, &vLocation2, v11, *&v3, &entities, 2, 3, 16, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v13 = 0;
    do
    {
      while ( 1 )
      {
        v14 = &entities.m_Memory.m_pMemory[v13];
        if ( v14->m_Index + 2 > 1 )
        {
          v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v14->m_Index) >> 9) & 0x3F];
          if ( v15 != 0 )
          {
            v16 = &v15[v14->m_Index & 0x1FF];
            if ( v16 != 0 && v14->m_Index == v16->m_EHandle.m_Index )
            {
              m_pInstance = v16->m_pInstance;
              if ( v16->m_pInstance != 0
                && m_pInstance->m_bIsDOTANPC
                && CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                     &this->m_vHitEntities,
                     v14) < 0 )
              {
                break;
              }
            }
          }
        }
        if ( entities.m_Size <= ++v13 )
          goto LABEL_20;
      }
      flDamage = this->damage / this->m_flScalar;
      Ability = CDOTA_Buff::GetAbility(this);
      v19 = CDOTA_Buff::GetCaster(this);
      ApplyDamage(v19, m_pInstance, Ability, flDamage, 1, 0);
      v20 = CDOTA_Buff::GetAbility(this);
      DotaRetrieveAbilityValue<float>(v20, &knockback_duration, "knockback_duration");
      v21 = CDOTA_Buff::GetAbility(this);
      DotaRetrieveAbilityValue<int>(v21, &knockback_distance, "knockback_distance");
      KeyValues::KeyValues(&kv, "modifier_knockback");
      v22 = CDOTA_Buff::GetCaster(this);
      CBaseEntity::GetAbsOrigin(v22);
      KeyValues::SetFloat(&kv, "center_x", v23);
      v24 = CDOTA_Buff::GetCaster(this);
      CBaseEntity::GetAbsOrigin(v24);
      KeyValues::SetFloat(&kv, "center_y", v25);
      v26 = CDOTA_Buff::GetCaster(this);
      CBaseEntity::GetAbsOrigin(v26);
      KeyValues::SetFloat(&kv, "center_z", v27);
      KeyValues::SetFloat(&kv, "knockback_duration", v28);
      KeyValues::SetFloat(&kv, "knockback_distance", v29);
      KeyValues::SetFloat(&kv, "duration", v30);
      v31 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v31, 0, "modifier_knockback", &kv, 0);
      v38 = -1;
      m_pEntity = m_pInstance->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v33 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v33 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v38 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v33 & 0x7FFF;
      }
      m_Size = this->m_vHitEntities.m_Size;
      v35 = this->m_vHitEntities.m_Size;
      if ( m_Size == this->m_vHitEntities.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_vHitEntities.m_Memory, 1);
        v35 = this->m_vHitEntities.m_Size;
      }
      this->m_vHitEntities.m_Size = v35 + 1;
      v36 = &this->m_vHitEntities.m_Memory.m_pMemory[m_Size];
      if ( v36 != 0 )
        v36->m_Index = v38;
      CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Nian.Attack", 0.0, 0, 0);
      KeyValues::~KeyValues(&kv);
      ++v13;
    }
    while ( entities.m_Size > v13 );
  }
LABEL_20:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Modifier_Animation_RightClawSwipe::DeclareFunctions  (line 216, @0x0000000002ae7aa0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Animation_RightClawSwipe::GetModifierDisableTurning(CModifierParams const&)
void __fastcall CDOTA_Modifier_Animation_RightClawSwipe::DeclareFunctions(
        CDOTA_Modifier_Animation_RightClawSwipe *const this)
{
  this->m_Functions[161].__pfn = CDOTA_Modifier_Animation_RightClawSwipe::GetModifierDisableTurning;
  this->m_Functions[161].__delta = 0;
}


// CDOTA_Modifier_Animation_RightClawSwipe::GetModifierDisableTurning  (line 223, @0x0000000002ae7ac0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Animation_RightClawSwipe::GetModifierDisableTurning(
        CDOTA_Modifier_Animation_RightClawSwipe *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Ability_Animation_LeftClawSwipe::~CDOTA_Ability_Animation_LeftClawSwipe  (line 236, @0x0000000002b1c320, libserver.so)  // inlines: ~CDOTA_Ability_Animation_Attack
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Animation_LeftClawSwipe::~CDOTA_Ability_Animation_LeftClawSwipe(
        CDOTA_Ability_Animation_LeftClawSwipe *const this)
{
  this->_vptr_IHandleEntity = &off_44793B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Animation_LeftClawSwipe::~CDOTA_Ability_Animation_LeftClawSwipe  (line 236, @0x0000000002b1c340, libserver.so)  // inlines: ~CDOTA_Ability_Animation_Attack, ~CDOTA_Ability_Animation_LeftClawSwipe
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Animation_LeftClawSwipe::~CDOTA_Ability_Animation_LeftClawSwipe(
        CDOTA_Ability_Animation_LeftClawSwipe *const this)
{
  this->_vptr_IHandleEntity = &off_44793B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Animation_LeftClawSwipe::Schema_DynamicBinding  (line 238, @0x0000000002b15980, libserver.so)
// globals: CDOTA_Ability_Animation_LeftClawSwipe::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Animation_LeftClawSwipe::Schema_DynamicBinding(
        const CDOTA_Ability_Animation_LeftClawSwipe *const this)
{
  return CDOTA_Ability_Animation_LeftClawSwipe::s_pSchemaBinding;
}


// CDOTA_Ability_Animation_LeftClawSwipe::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 238, @0x0000000002b15990, libserver.so)
// globals: CDOTA_Ability_Animation_LeftClawSwipe::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Animation_LeftClawSwipe::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Animation_LeftClawSwipe::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Animation_LeftClawSwipe::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Animation_LeftClawSwipe::CEntityInstanceEntityClass::DestructInstance  (line 238, @0x0000000002b159a0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Animation_LeftClawSwipe>
void __fastcall CDOTA_Ability_Animation_LeftClawSwipe::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Animation_LeftClawSwipe::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Animation_LeftClawSwipe::CEntityInstanceEntityClass::FreeInstance  (line 238, @0x0000000002b159c0, libserver.so)
void __fastcall CDOTA_Ability_Animation_LeftClawSwipe::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Animation_LeftClawSwipe::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Animation_LeftClawSwipe::CEntityInstanceEntityClass::CanAllocate  (line 238, @0x0000000002b159e0, libserver.so)
bool __fastcall CDOTA_Ability_Animation_LeftClawSwipe::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Animation_LeftClawSwipe::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Animation_LeftClawSwipe::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 238, @0x0000000002b159f0, libserver.so)
// globals: CDOTA_Ability_Animation_LeftClawSwipe::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Animation_LeftClawSwipe::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Animation_LeftClawSwipe::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Animation_LeftClawSwipe::s_pSchemaBinding;
}


// CDOTA_Ability_Animation_LeftClawSwipe::CEntityInstanceEntityClass::AllocateInstance  (line 238, @0x0000000002b190b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Animation_LeftClawSwipe::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Animation_LeftClawSwipe::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Animation_LeftClawSwipe::CEntityInstanceEntityClass::ConstructInstance  (line 238, @0x0000000002b1b7b0, libserver.so)  // inlines: CDOTA_Ability_Animation_Attack, CDOTA_Ability_Animation_LeftClawSwipe, Construct<CDOTA_Ability_Animation_LeftClawSwipe>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Animation_LeftClawSwipe::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Animation_LeftClawSwipe::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = 1065353216;
    *p = &off_445FD10;
  }
  return p;
}


// CDOTA_Ability_Animation_LeftClawSwipe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 238, @0x0000000002b220e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Animation_LeftClawSwipe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Animation_LeftClawSwipe::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Animation_LeftClawSwipe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 238, @0x0000000002b22100, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Animation_LeftClawSwipe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Animation_LeftClawSwipe::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Animation_LeftClawSwipe::GetEntityClassInternal  (line 238, @0x0000000002b32c20, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_Ability_Animation_Attack>, CDOTA_Ability_Animation_Attack::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "animated_left_claw_swipe", "CDOTA_Ability_Animation_LeftClawSwipe"
// globals: `guard variable for'CDOTA_Ability_Animation_LeftClawSwipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_LeftClawSwipeClass, CDOTA_Ability_Animation_LeftClawSwipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_LeftClawSwipeClass, __dso_handle, CDOTA_Ability_Animation_LeftClawSwipe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Animation_LeftClawSwipe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_LeftClawSwipeClassInfo, CDOTA_Ability_Animation_LeftClawSwipe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_LeftClawSwipeClassInfo
CEntityClass *__cdecl CDOTA_Ability_Animation_LeftClawSwipe::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Animation_LeftClawSwipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_LeftClawSwipeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Animation_LeftClawSwipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_LeftClawSwipeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Animation_LeftClawSwipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_LeftClawSwipeClass);
    CDOTA_Ability_Animation_LeftClawSwipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_LeftClawSwipeClass._vptr_CEntityClass = off_445FC90;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Animation_LeftClawSwipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_LeftClawSwipeClass);
    __cxa_atexit(
      CDOTA_Ability_Animation_LeftClawSwipe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Animation_LeftClawSwipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_LeftClawSwipeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Animation_LeftClawSwipeClass != 0 )
    return &CDOTA_Ability_Animation_LeftClawSwipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_LeftClawSwipeClass;
  if ( `guard variable for'CDOTA_Ability_Animation_LeftClawSwipe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_LeftClawSwipeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Animation_LeftClawSwipe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_LeftClawSwipeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Ability_Animation_Attack::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Animation_LeftClawSwipe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_LeftClawSwipeClassInfo,
      "CDOTA_Ability_Animation_LeftClawSwipe",
      "animated_left_claw_swipe",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Animation_LeftClawSwipe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_LeftClawSwipeClassInfo);
  }
  CDOTA_Ability_Animation_LeftClawSwipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_LeftClawSwipeClass.m_pClassInfo = &CDOTA_Ability_Animation_LeftClawSwipe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_LeftClawSwipeClassInfo;
  CDOTA_Ability_Animation_LeftClawSwipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_LeftClawSwipeClass.m_pBaseClassInfo = CDOTA_Ability_Animation_LeftClawSwipe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_LeftClawSwipeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Animation_LeftClawSwipeClass = &CDOTA_Ability_Animation_LeftClawSwipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_LeftClawSwipeClass;
  CDOTA_Ability_Animation_LeftClawSwipe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_LeftClawSwipeClassInfo.m_pClass = &CDOTA_Ability_Animation_LeftClawSwipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_LeftClawSwipeClass;
  CDOTA_Ability_Animation_LeftClawSwipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_LeftClawSwipeClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_Ability_Animation_Attack>(0);
  g_pEntityCDOTA_Ability_Animation_LeftClawSwipeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Animation_LeftClawSwipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_LeftClawSwipeClass;
}


// CDOTA_Ability_Animation_LeftClawSwipe::OnAbilityPhaseStart  (line 249, @0x0000000002b02d90, libserver.so)  // inlines: GetLevelSpecialValueFor<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "animation_time", "modifier_animated_left_claw_swipe", "initial_delay", "Nian.Claw.PreAttack"
bool __fastcall CDOTA_Ability_Animation_LeftClawSwipe::OnAbilityPhaseStart(
        CDOTA_Ability_Animation_LeftClawSwipe *const this)
{
  float v2; // xmm1_4
  float v3; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  this->animation_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "animation_time", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_animated_left_claw_swipe");
  KeyValues::SetFloat(&kv, "duration", v2);
  KeyValues::SetFloat(&kv, "initial_delay", v3);
  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v5, Caster, this, "modifier_animated_left_claw_swipe", &kv, 0);
  v6 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v6, "Nian.Claw.PreAttack", 0.0, 0, 0);
  KeyValues::~KeyValues(&kv);
  return 1;
}


// CDOTA_Modifier_Animation_LeftClawSwipe::~CDOTA_Modifier_Animation_LeftClawSwipe  (line 268, @0x0000000002b30290, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Animation_LeftClawSwipe::~CDOTA_Modifier_Animation_LeftClawSwipe(
        CDOTA_Modifier_Animation_LeftClawSwipe *const this)
{
  this->_vptr_CDOTA_Buff = &off_44607D0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_vHitEntities);
  if ( (this->m_vHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vHitEntities.m_Memory),
        (this->m_vHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vHitEntities.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Animation_LeftClawSwipe::~CDOTA_Modifier_Animation_LeftClawSwipe  (line 268, @0x0000000002b30760, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_Animation_LeftClawSwipe, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Animation_LeftClawSwipe::~CDOTA_Modifier_Animation_LeftClawSwipe(
        CDOTA_Modifier_Animation_LeftClawSwipe *const this)
{
  this->_vptr_CDOTA_Buff = &off_44607D0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_vHitEntities);
  if ( (this->m_vHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vHitEntities.m_Memory);
    if ( (this->m_vHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vHitEntities.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Animation_LeftClawSwipe::IsHidden  (line 276, @0x0000000002b15a00, libserver.so)
bool __fastcall CDOTA_Modifier_Animation_LeftClawSwipe::IsHidden(CDOTA_Modifier_Animation_LeftClawSwipe *const this)
{
  return 1;
}


// CDOTA_Modifier_Animation_LeftClawSwipe::IsPurgable  (line 277, @0x0000000002b15a10, libserver.so)
bool __fastcall CDOTA_Modifier_Animation_LeftClawSwipe::IsPurgable(CDOTA_Modifier_Animation_LeftClawSwipe *const this)
{
  return 0;
}


// CDOTA_Modifier_Animation_LeftClawSwipe::OnCreated  (line 295, @0x0000000002b0a600, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::GetFloat, CDOTA_Buff::StartIntervalThink
// strings: "initial_delay"
void __fastcall CDOTA_Modifier_Animation_LeftClawSwipe::OnCreated(
        CDOTA_Modifier_Animation_LeftClawSwipe *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  float v6; // xmm1_4
  float Float; // xmm0_4
  float v8; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->damage = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_3;
LABEL_6:
    this->damage_radius = 0;
    goto LABEL_4;
  }
  this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_6;
LABEL_3:
  this->damage_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "damage_radius", -1, 0);
LABEL_4:
  Float = KeyValues::GetFloat(pKV, "initial_delay", v6);
  this->m_flScalar = Float;
  CDOTA_Buff::StartIntervalThink(this, Float, v8);
}


// CDOTA_Modifier_Animation_LeftClawSwipe::OnIntervalThink  (line 308, @0x0000000002b0d890, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, GrowMemory, HasElement, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetCaster, CBaseAnimating::GetAttachment, CDOTA_Buff::GetParent, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CDOTA_Buff::GetAbility, ApplyDamage, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, KeyValues::KeyValues, CBaseEntity::GetAbsOrigin (20 total)
// strings: "attach_attack2", "attach_attack4", "modifier_knockback", "center_x", "center_y", "center_z" (7 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Animation_LeftClawSwipe::OnIntervalThink(
        CDOTA_Modifier_Animation_LeftClawSwipe *const this)
{
  float v1; // xmm1_4
  __int64 v3; // r14
  vec_t z; // ebx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v6; // rax
  __m128i v7; // xmm2
  CDOTA_BaseNPC *Parent; // r15
  CDOTA_BaseNPC *v9; // rax
  __m128i v10; // xmm3
  CDOTA_BaseNPC *v11; // r13
  CDOTA_BaseNPC *v12; // rax
  __int64 v13; // rbx
  CHandle<CBaseEntity> *v14; // rsi
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *v19; // rax
  CDOTABaseAbility *v20; // rax
  CDOTABaseAbility *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  float v23; // xmm1_4
  CDOTA_BaseNPC *v24; // rax
  float v25; // xmm1_4
  CDOTA_BaseNPC *v26; // rax
  float v27; // xmm1_4
  float v28; // xmm1_4
  float v29; // xmm1_4
  float v30; // xmm1_4
  CDOTA_BaseNPC *v31; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v33; // cx
  __int64 m_Size; // r15
  int v35; // eax
  CHandle<CBaseEntity> *v36; // rax
  float flDamage; // [rsp+3Ch] [rbp-A4h]
  int v38; // [rsp+40h] [rbp-A0h]
  float knockback_duration; // [rsp+48h] [rbp-98h] BYREF
  int knockback_distance; // [rsp+4Ch] [rbp-94h] BYREF
  Vector vLocation1; // [rsp+50h] [rbp-90h] BYREF
  Vector vLocation2; // [rsp+60h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+70h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+90h] [rbp-50h] BYREF
  unsigned __int64 v45; // [rsp+A8h] [rbp-38h]

  v45 = __readfsqword(0x28u);
  CDOTA_Buff::StartIntervalThink(this, 0.0099999998, v1);
  v3 = *&vec3_invalid.x;
  z = vec3_invalid.z;
  *&vLocation1.x = *&vec3_invalid.x;
  vLocation1.z = z;
  Caster = CDOTA_Buff::GetCaster(this);
  CBaseAnimating::GetAttachment(Caster, "attach_attack2", &vLocation1);
  *&vLocation2.x = v3;
  vLocation2.z = z;
  v6 = CDOTA_Buff::GetCaster(this);
  CBaseAnimating::GetAttachment(v6, "attach_attack4", &vLocation2);
  *v7.m128i_i32 = this->damage_radius;
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  LODWORD(v3) = _mm_cvtsi128_si32(v7);
  Parent = CDOTA_Buff::GetParent(this);
  v9 = CDOTA_Buff::GetParent(this);
  FindUnitsInRadius(v9->m_iTeamNum.m_Value, &vLocation1, Parent, *&v3, &entities, 2, 3, 16, 0, 0);
  *v10.m128i_i32 = this->damage_radius;
  LODWORD(v3) = _mm_cvtsi128_si32(v10);
  v11 = CDOTA_Buff::GetParent(this);
  v12 = CDOTA_Buff::GetParent(this);
  FindUnitsInRadius(v12->m_iTeamNum.m_Value, &vLocation2, v11, *&v3, &entities, 2, 3, 16, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v13 = 0;
    do
    {
      while ( 1 )
      {
        v14 = &entities.m_Memory.m_pMemory[v13];
        if ( v14->m_Index + 2 > 1 )
        {
          v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v14->m_Index) >> 9) & 0x3F];
          if ( v15 != 0 )
          {
            v16 = &v15[v14->m_Index & 0x1FF];
            if ( v16 != 0 && v14->m_Index == v16->m_EHandle.m_Index )
            {
              m_pInstance = v16->m_pInstance;
              if ( v16->m_pInstance != 0
                && m_pInstance->m_bIsDOTANPC
                && CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                     &this->m_vHitEntities,
                     v14) < 0 )
              {
                break;
              }
            }
          }
        }
        if ( entities.m_Size <= ++v13 )
          goto LABEL_20;
      }
      flDamage = this->damage / this->m_flScalar;
      Ability = CDOTA_Buff::GetAbility(this);
      v19 = CDOTA_Buff::GetCaster(this);
      ApplyDamage(v19, m_pInstance, Ability, flDamage, 1, 0);
      v20 = CDOTA_Buff::GetAbility(this);
      DotaRetrieveAbilityValue<float>(v20, &knockback_duration, "knockback_duration");
      v21 = CDOTA_Buff::GetAbility(this);
      DotaRetrieveAbilityValue<int>(v21, &knockback_distance, "knockback_distance");
      KeyValues::KeyValues(&kv, "modifier_knockback");
      v22 = CDOTA_Buff::GetCaster(this);
      CBaseEntity::GetAbsOrigin(v22);
      KeyValues::SetFloat(&kv, "center_x", v23);
      v24 = CDOTA_Buff::GetCaster(this);
      CBaseEntity::GetAbsOrigin(v24);
      KeyValues::SetFloat(&kv, "center_y", v25);
      v26 = CDOTA_Buff::GetCaster(this);
      CBaseEntity::GetAbsOrigin(v26);
      KeyValues::SetFloat(&kv, "center_z", v27);
      KeyValues::SetFloat(&kv, "knockback_duration", v28);
      KeyValues::SetFloat(&kv, "knockback_distance", v29);
      KeyValues::SetFloat(&kv, "duration", v30);
      v31 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v31, 0, "modifier_knockback", &kv, 0);
      v38 = -1;
      m_pEntity = m_pInstance->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v33 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v33 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v38 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v33 & 0x7FFF;
      }
      m_Size = this->m_vHitEntities.m_Size;
      v35 = this->m_vHitEntities.m_Size;
      if ( m_Size == this->m_vHitEntities.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_vHitEntities.m_Memory, 1);
        v35 = this->m_vHitEntities.m_Size;
      }
      this->m_vHitEntities.m_Size = v35 + 1;
      v36 = &this->m_vHitEntities.m_Memory.m_pMemory[m_Size];
      if ( v36 != 0 )
        v36->m_Index = v38;
      CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Nian.Attack", 0.0, 0, 0);
      KeyValues::~KeyValues(&kv);
      ++v13;
    }
    while ( entities.m_Size > v13 );
  }
LABEL_20:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Modifier_Animation_LeftClawSwipe::DeclareFunctions  (line 354, @0x0000000002ae7ae0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Animation_LeftClawSwipe::GetModifierDisableTurning(CModifierParams const&)
void __fastcall CDOTA_Modifier_Animation_LeftClawSwipe::DeclareFunctions(
        CDOTA_Modifier_Animation_LeftClawSwipe *const this)
{
  this->m_Functions[161].__pfn = CDOTA_Modifier_Animation_LeftClawSwipe::GetModifierDisableTurning;
  this->m_Functions[161].__delta = 0;
}


// CDOTA_Modifier_Animation_LeftClawSwipe::GetModifierDisableTurning  (line 361, @0x0000000002ae7b00, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Animation_LeftClawSwipe::GetModifierDisableTurning(
        CDOTA_Modifier_Animation_LeftClawSwipe *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Move_From_Activity::~CDOTA_Modifier_Move_From_Activity  (line 370, @0x0000000002b1a9a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Move_From_Activity::~CDOTA_Modifier_Move_From_Activity(
        CDOTA_Modifier_Move_From_Activity *const this)
{
  this->_vptr_CDOTA_Buff = &off_4460AF0;
  this->_vptr_CHorizontalMotionController = &off_4460DE0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Move_From_Activity::~CDOTA_Modifier_Move_From_Activity  (line 370, @0x0000000002b1a9d0, libserver.so)  // inlines: ~CDOTA_Modifier_Move_From_Activity
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Move_From_Activity::~CDOTA_Modifier_Move_From_Activity(
        CDOTA_Modifier_Move_From_Activity *const this)
{
  this->_vptr_CDOTA_Buff = &off_4460AF0;
  this->_vptr_CHorizontalMotionController = &off_4460DE0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Move_From_Activity::IsPurgable  (line 380, @0x0000000002b15a20, libserver.so)
bool __fastcall CDOTA_Modifier_Move_From_Activity::IsPurgable(CDOTA_Modifier_Move_From_Activity *const this)
{
  return 0;
}


// CDOTA_Modifier_Move_From_Activity::IsHidden  (line 381, @0x0000000002b15a30, libserver.so)
bool __fastcall CDOTA_Modifier_Move_From_Activity::IsHidden(CDOTA_Modifier_Move_From_Activity *const this)
{
  return 1;
}


// CDOTA_Modifier_Move_From_Activity::IsHorizontalMotionValidToApply  (line 385, @0x0000000002b15a40, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Move_From_Activity::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_Move_From_Activity *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Move_From_Activity::OnCreated  (line 402, @0x0000000002aea3e0, libserver.so)  // inlines: GetBool, operator[]
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::ApplyHorizontalMotionController, KeyValues::GetString, CBaseAnimating::LookupActivity, CBaseAnimating::SelectWeightedSequence, CBaseAnimating::SequenceDuration, CBaseEntity::GetAbsAngles, KeyValues::GetInt, CDOTA_BaseNPC::StartGesture, CDOTA_Buff::Destroy
// strings: "allow_interrupt", "fade_gesture"
void __fastcall CDOTA_Modifier_Move_From_Activity::OnCreated(
        CDOTA_Modifier_Move_From_Activity *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v5; // rax
  const char *String; // r13
  CDOTA_BaseNPC *v7; // rax
  Activity v8; // r13d
  CDOTA_BaseNPC *v9; // rax
  HSequence v10; // eax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  int Int; // eax
  Activity m_nActivity; // r12d
  CDOTA_BaseNPC *v15; // rax

  Parent = CDOTA_Buff::GetParent(this);
  v5 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  if ( !CDOTALocomotor::ApplyHorizontalMotionController(v5, &this->CHorizontalMotionController, 0)
    || (String = KeyValues::GetString(pKV, "activity", "", 0, 0),
        v7 = CDOTA_Buff::GetParent(this),
        v8 = CBaseAnimating::LookupActivity(v7, String),
        this->m_nActivity = v8,
        v8 == -1)
    || (v9 = CDOTA_Buff::GetParent(this),
        v10.m_Data = CBaseAnimating::SelectWeightedSequence(v9, v8).m_Data,
        this->m_nSequence = v10,
        v10.m_Data == -1) )
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
  else
  {
    this->m_flCurrentTime = 0.0;
    v11 = CDOTA_Buff::GetParent(this);
    this->m_flTotalTime = CBaseAnimating::SequenceDuration(v11, this->m_nSequence);
    v12 = CDOTA_Buff::GetParent(this);
    this->m_flSequenceYaw = CBaseEntity::GetAbsAngles(v12)->y;
    this->m_bCanBeInterrupted = KeyValues::GetInt(pKV, "allow_interrupt", 1) != 0;
    Int = KeyValues::GetInt(pKV, "fade_gesture", 1);
    m_nActivity = this->m_nActivity;
    this->m_bFadeGesture = Int != 0;
    v15 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::StartGesture(v15, m_nActivity, 0.1, 0.1, 9, 0, 1.0);
  }
}


// CDOTA_Modifier_Move_From_Activity::OnDestroy  (line 437, @0x0000000002aea7a0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::RemoveHorizontalMotionController, CDOTA_BaseNPC::RemoveGesture, CDOTA_BaseNPC::FadeGesture
void __fastcall CDOTA_Modifier_Move_From_Activity::OnDestroy(CDOTA_Modifier_Move_From_Activity *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v3; // rax
  Activity m_nActivity; // r12d
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax

  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveHorizontalMotionController(v3, &this->CHorizontalMotionController);
  m_nActivity = this->m_nActivity;
  if ( this->m_bFadeGesture )
  {
    v6 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::FadeGesture(v6, m_nActivity);
  }
  else
  {
    v5 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::RemoveGesture(v5, m_nActivity);
  }
}


// CDOTA_Modifier_Move_From_Activity::UpdateHorizontalMotion  (line 454, @0x0000000002aeaac0, libserver.so)  // inlines: VectorAdd, operator+
// calls: CBaseAnimating::GetSequenceMovement, VectorYawRotate, CBaseEntity::GetAbsOrigin, CBaseEntity::GetAbsAngles, CBaseEntity::SetAbsOrigin, CBaseEntity::SetAbsAngles, CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CGridNav::DestroyTreesAroundPoint, CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Move_From_Activity::UpdateHorizontalMotion(
        CDOTA_Modifier_Move_From_Activity *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  float m_flCurrentTime; // xmm0_4
  float m_flTotalTime; // xmm2_4
  float v9; // xmm1_4
  int32 m_Data; // esi
  float v11; // xmm1_4
  const Vector *AbsOrigin; // rax
  vec_t v13; // xmm0_4
  vec_t v14; // xmm2_4
  const QAngle *AbsAngles; // rax
  vec_t v16; // xmm0_4
  vec_t v17; // xmm2_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *Parent; // rax
  float v20; // xmm3_4
  float m_flHullRadius; // [rsp+Ch] [rbp-64h]
  Vector vDeltaPos; // [rsp+10h] [rbp-60h] BYREF
  QAngle angDelta; // [rsp+20h] [rbp-50h] BYREF
  Vector vTargetPos; // [rsp+30h] [rbp-40h] BYREF
  QAngle angTarget; // [rsp+40h] [rbp-30h] BYREF
  Vector v26; // 0:xmm0_8.8,8:xmm1_4.4

  m_flCurrentTime = this->m_flCurrentTime;
  m_flTotalTime = this->m_flTotalTime;
  v9 = a3 + m_flCurrentTime;
  m_Data = this->m_nSequence.m_Data;
  this->m_flCurrentTime = v9;
  CBaseAnimating::GetSequenceMovement(
    me,
    m_Data,
    m_flCurrentTime / m_flTotalTime,
    v9 / m_flTotalTime,
    &vDeltaPos,
    &angDelta);
  VectorYawRotate(&vDeltaPos, v11, &vDeltaPos);
  AbsOrigin = CBaseEntity::GetAbsOrigin(me);
  v13 = AbsOrigin->z + vDeltaPos.z;
  v14 = AbsOrigin->x + vDeltaPos.x;
  vTargetPos.y = AbsOrigin->y + vDeltaPos.y;
  vTargetPos.z = v13;
  vTargetPos.x = v14;
  AbsAngles = CBaseEntity::GetAbsAngles(me);
  v16 = AbsAngles->z + angDelta.z;
  v17 = AbsAngles->x + angDelta.x;
  angTarget.y = AbsAngles->y + angDelta.y;
  angTarget.z = v16;
  angTarget.x = v17;
  CBaseEntity::SetAbsOrigin(me, &vTargetPos);
  CBaseEntity::SetAbsAngles(me, &angTarget);
  Caster = CDOTA_Buff::GetCaster(this);
  LODWORD(me) = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
  m_flHullRadius = CDOTA_Buff::GetParent(this)->m_flHullRadius;
  Parent = CDOTA_Buff::GetParent(this);
  v26 = *CBaseEntity::GetAbsOrigin(Parent);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 1, me, v26, m_flHullRadius, v20);
  if ( this->m_flCurrentTime >= this->m_flTotalTime )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Move_From_Activity::OnHorizontalMotionInterrupted  (line 483, @0x0000000002aec3c0, libserver.so)
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Move_From_Activity::OnHorizontalMotionInterrupted(
        CDOTA_Modifier_Move_From_Activity *const this)
{
  if ( this->m_bCanBeInterrupted )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Attached_Unit::~CDOTA_Modifier_Attached_Unit  (line 498, @0x0000000002b1a930, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Attached_Unit::~CDOTA_Modifier_Attached_Unit(CDOTA_Modifier_Attached_Unit *const this)
{
  this->_vptr_CDOTA_Buff = &off_4460E70;
  this->_vptr_CHorizontalMotionController = &off_4461160;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Attached_Unit::~CDOTA_Modifier_Attached_Unit  (line 498, @0x0000000002b1a960, libserver.so)  // inlines: ~CDOTA_Modifier_Attached_Unit
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Attached_Unit::~CDOTA_Modifier_Attached_Unit(CDOTA_Modifier_Attached_Unit *const this)
{
  this->_vptr_CDOTA_Buff = &off_4460E70;
  this->_vptr_CHorizontalMotionController = &off_4461160;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Attached_Unit::IsHidden  (line 507, @0x0000000002b15a70, libserver.so)
bool __fastcall CDOTA_Modifier_Attached_Unit::IsHidden(CDOTA_Modifier_Attached_Unit *const this)
{
  return 1;
}


// CDOTA_Modifier_Attached_Unit::IsPurgable  (line 508, @0x0000000002b15a80, libserver.so)
bool __fastcall CDOTA_Modifier_Attached_Unit::IsPurgable(CDOTA_Modifier_Attached_Unit *const this)
{
  return 0;
}


// CDOTA_Modifier_Attached_Unit::UpdateHorizontalMotion  (line 517, @0x0000000002b15a90, libserver.so)
void __fastcall CDOTA_Modifier_Attached_Unit::UpdateHorizontalMotion(
        CDOTA_Modifier_Attached_Unit *const this,
        CDOTA_BaseNPC *me,
        double a3,
        float dt)
{
  ;
}


// CDOTA_Modifier_Attached_Unit::OnHorizontalMotionInterrupted  (line 518, @0x0000000002b15ab0, libserver.so)
void __fastcall CDOTA_Modifier_Attached_Unit::OnHorizontalMotionInterrupted(CDOTA_Modifier_Attached_Unit *const this)
{
  ;
}


// CDOTA_Modifier_Attached_Unit::IsHorizontalMotionValidToApply  (line 519, @0x0000000002b15ad0, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Attached_Unit::IsHorizontalMotionValidToApply(CDOTA_Modifier_Attached_Unit *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Attached_Unit::OnCreated  (line 534, @0x0000000002af1fa0, libserver.so)  // inlines: Get, GetBool, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, Vector, operator CEntityInstance*, operator=
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::ApplyHorizontalMotionController, KeyValues::GetPtr, KeyValues::GetInt, CBaseEntity::SetAbsVelocity, CBaseEntity::FollowEntity, KeyValues::GetFloat, CBaseEntity::SetLocalOrigin, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::Destroy
// strings: "PhysicalImmune"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Attached_Unit::OnCreated(CDOTA_Modifier_Attached_Unit *const this, KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v5; // rax
  _QWORD *Ptr; // rax
  __int64 v7; // rdx
  int v8; // eax
  __int16 v9; // cx
  int Int; // eax
  CConcreteEntityList *v11; // rsi
  bool v12; // zf
  uint32 m_Index; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CBaseEntity *m_pInstance; // r13
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  float v20; // xmm1_4
  CDOTA_BaseNPC *v21; // rax
  float v22; // xmm1_4
  Vector vOrigin; // [rsp+0h] [rbp-30h] BYREF

  Parent = CDOTA_Buff::GetParent(this);
  v5 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  if ( CDOTALocomotor::ApplyHorizontalMotionController(v5, &this->CHorizontalMotionController, 0) )
  {
    Ptr = KeyValues::GetPtr(pKV, "target", 0);
    if ( Ptr != 0 && (v7 = Ptr[1]) != 0 )
    {
      v8 = (*(v7 + 16) >> 15) - (*(v7 + 48) & 1);
      v9 = 0x7FFF;
      if ( *(v7 + 16) != -1 )
        v9 = *(v7 + 16) & 0x7FFF;
      LOWORD(this->m_hAttachTarget.m_Index) = v9 | this->m_hAttachTarget.m_Index & 0x8000;
      this->m_hAttachTarget.m_Index = (v8 << 15) | this->m_hAttachTarget.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hAttachTarget.m_Index = -1;
    }
    this->m_bPhysicalImmune = KeyValues::GetInt(pKV, "PhysicalImmune", 0) != 0;
    Int = KeyValues::GetInt(pKV, "MagicImmune", 0);
    v11 = CEntityHandle::gm_pEntityList;
    v12 = Int == 0;
    m_Index = this->m_hAttachTarget.m_Index;
    this->m_bMagicImmune = !v12;
    if ( m_Index + 2 <= 1
      || (v14 = v11->m_pIdentityChunks[(LOWORD(this->m_hAttachTarget.m_Index) >> 9) & 0x3F]) == 0
      || (v15 = &v14[this->m_hAttachTarget.m_Index & 0x1FF]) == 0
      || m_Index != v15->m_EHandle.m_Index
      || (m_pInstance = v15->m_pInstance, v15->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC )
    {
      m_pInstance = 0;
    }
    v17 = CDOTA_Buff::GetParent(this);
    CBaseEntity::SetAbsVelocity(v17, &vec3_origin);
    v18 = CDOTA_Buff::GetParent(this);
    CBaseEntity::FollowEntity(v18, m_pInstance, 1);
    v19 = CDOTA_Buff::GetParent(this);
    (*(v19->_vptr_IHandleEntity + 40))(v19, m_pInstance);
    vOrigin.x = KeyValues::GetFloat(pKV, "offset_x", v20);
    vOrigin.y = 0.0;
    vOrigin.z = 0.0;
    v21 = CDOTA_Buff::GetParent(this);
    CBaseEntity::SetLocalOrigin(v21, &vOrigin);
    CDOTA_Buff::StartIntervalThink(this, 0.1, v22);
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Attached_Unit::OnDestroy  (line 560, @0x0000000002aea560, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::ForceKill, CDOTALocomotor::RemoveHorizontalMotionController
void __fastcall CDOTA_Modifier_Attached_Unit::OnDestroy(CDOTA_Modifier_Attached_Unit *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTALocomotor *v4; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::ForceKill(Parent, 0);
  v3 = CDOTA_Buff::GetParent(this);
  v4 = (*(v3->_vptr_IHandleEntity + 376))(v3);
  CDOTALocomotor::RemoveHorizontalMotionController(v4, &this->CHorizontalMotionController);
}


// CDOTA_Modifier_Attached_Unit::OnIntervalThink  (line 570, @0x0000000002af0a50, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Attached_Unit::OnIntervalThink(CDOTA_Modifier_Attached_Unit *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rdi

  m_Index = this->m_hAttachTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAttachTarget.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hAttachTarget.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0
          && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) == 0 )
        {
          CDOTA_Buff::Destroy(this, 0, 0, 0);
        }
      }
    }
  }
}


// CDOTA_Modifier_Attached_Unit::CheckState  (line 587, @0x0000000002ae7b20, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Attached_Unit::CheckState(
        CDOTA_Modifier_Attached_Unit *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0xE900000uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFF16FFFFFLL;
}


// CDOTA_Modifier_Attached_Unit::DeclareFunctions  (line 600, @0x0000000002ae7b40, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Attached_Unit::GetAbsoluteNoDamagePhysical(CModifierParams const&)
void __fastcall CDOTA_Modifier_Attached_Unit::DeclareFunctions(CDOTA_Modifier_Attached_Unit *const this)
{
  this->m_Functions[103].__pfn = CDOTA_Modifier_Attached_Unit::GetAbsoluteNoDamagePhysical;
  this->m_Functions[103].__delta = 0;
}


// CDOTA_Modifier_Attached_Unit::GetAbsoluteNoDamagePhysical  (line 607, @0x0000000002ae7b60, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Attached_Unit::GetAbsoluteNoDamagePhysical(
        CDOTA_Modifier_Attached_Unit *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = this->m_bPhysicalImmune;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Nian_Dive::~CDOTA_Ability_Nian_Dive  (line 618, @0x0000000002b1c3c0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Nian_Dive::~CDOTA_Ability_Nian_Dive(CDOTA_Ability_Nian_Dive *const this)
{
  this->_vptr_IHandleEntity = &off_4461230;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Nian_Dive::~CDOTA_Ability_Nian_Dive  (line 618, @0x0000000002b1c3e0, libserver.so)  // inlines: ~CDOTA_Ability_Nian_Dive
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Nian_Dive::~CDOTA_Ability_Nian_Dive(CDOTA_Ability_Nian_Dive *const this)
{
  this->_vptr_IHandleEntity = &off_4461230;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Nian_Dive::Schema_DynamicBinding  (line 620, @0x0000000002b15b00, libserver.so)
// globals: CDOTA_Ability_Nian_Dive::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nian_Dive::Schema_DynamicBinding(
        const CDOTA_Ability_Nian_Dive *const this)
{
  return CDOTA_Ability_Nian_Dive::s_pSchemaBinding;
}


// CDOTA_Ability_Nian_Dive::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 620, @0x0000000002b15b10, libserver.so)
// globals: CDOTA_Ability_Nian_Dive::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nian_Dive::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Nian_Dive::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nian_Dive::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Nian_Dive::CEntityInstanceEntityClass::DestructInstance  (line 620, @0x0000000002b15b20, libserver.so)  // inlines: Destruct<CDOTA_Ability_Nian_Dive>
void __fastcall CDOTA_Ability_Nian_Dive::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Nian_Dive::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Nian_Dive::CEntityInstanceEntityClass::FreeInstance  (line 620, @0x0000000002b15b40, libserver.so)
void __fastcall CDOTA_Ability_Nian_Dive::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Nian_Dive::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Nian_Dive::CEntityInstanceEntityClass::CanAllocate  (line 620, @0x0000000002b15b60, libserver.so)
bool __fastcall CDOTA_Ability_Nian_Dive::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Nian_Dive::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Nian_Dive::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 620, @0x0000000002b15b70, libserver.so)
// globals: CDOTA_Ability_Nian_Dive::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Nian_Dive::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Nian_Dive::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nian_Dive::s_pSchemaBinding;
}


// CDOTA_Ability_Nian_Dive::CEntityInstanceEntityClass::AllocateInstance  (line 620, @0x0000000002b190f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Nian_Dive::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Nian_Dive::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Nian_Dive::CEntityInstanceEntityClass::ConstructInstance  (line 620, @0x0000000002b1b7f0, libserver.so)  // inlines: CDOTA_Ability_Nian_Dive, Construct<CDOTA_Ability_Nian_Dive>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Nian_Dive::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Nian_Dive::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = 1065353216;
    *p = &off_4461230;
  }
  return p;
}


// CDOTA_Ability_Nian_Dive::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 620, @0x0000000002b22180, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Nian_Dive::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nian_Dive::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Nian_Dive::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 620, @0x0000000002b221a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Nian_Dive::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nian_Dive::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Nian_Dive::GetEntityClassInternal  (line 620, @0x0000000002b32830, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_Ability_Nian_Dive>, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "CDOTA_Ability_Nian_Dive"
// globals: `guard variable for'CDOTA_Ability_Nian_Dive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_DiveClass, CDOTA_Ability_Nian_Dive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_DiveClass, __dso_handle, CDOTA_Ability_Nian_Dive::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Nian_Dive::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_DiveClassInfo, CDOTA_Ability_Nian_Dive::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_DiveClassInfo
CEntityClass *__cdecl CDOTA_Ability_Nian_Dive::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Nian_Dive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_DiveClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nian_Dive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_DiveClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Nian_Dive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_DiveClass);
    CDOTA_Ability_Nian_Dive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_DiveClass._vptr_CEntityClass = off_44611B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nian_Dive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_DiveClass);
    __cxa_atexit(
      CDOTA_Ability_Nian_Dive::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Nian_Dive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_DiveClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Nian_DiveClass != 0 )
    return &CDOTA_Ability_Nian_Dive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_DiveClass;
  if ( `guard variable for'CDOTA_Ability_Nian_Dive::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_DiveClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nian_Dive::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_DiveClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Nian_Dive::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_DiveClassInfo,
      "CDOTA_Ability_Nian_Dive",
      "nian_dive",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nian_Dive::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_DiveClassInfo);
  }
  CDOTA_Ability_Nian_Dive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_DiveClass.m_pClassInfo = &CDOTA_Ability_Nian_Dive::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_DiveClassInfo;
  CDOTA_Ability_Nian_Dive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_DiveClass.m_pBaseClassInfo = CDOTA_Ability_Nian_Dive::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_DiveClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Nian_DiveClass = &CDOTA_Ability_Nian_Dive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_DiveClass;
  CDOTA_Ability_Nian_Dive::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_DiveClassInfo.m_pClass = &CDOTA_Ability_Nian_Dive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_DiveClass;
  CDOTA_Ability_Nian_Dive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_DiveClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_Ability_Nian_Dive>(0);
  g_pEntityCDOTA_Ability_Nian_DiveClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Nian_Dive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_DiveClass;
}


// CDOTA_Ability_Nian_Dive::GetCastAnimation  (line 624, @0x0000000002b15b80, libserver.so)
Activity __fastcall CDOTA_Ability_Nian_Dive::GetCastAnimation(CDOTA_Ability_Nian_Dive *const this)
{
  return 1659;
}


// CDOTA_Ability_Nian_Dive::GetPlaybackRateOverride  (line 629, @0x0000000002b15b90, libserver.so)
float __fastcall CDOTA_Ability_Nian_Dive::GetPlaybackRateOverride(CDOTA_Ability_Nian_Dive *const this)
{
  return this->m_flPlaybackRate;
}


// CDOTA_Ability_Nian_Dive::SetPlaybackRate  (line 630, @0x0000000002b15ba0, libserver.so)
void __fastcall CDOTA_Ability_Nian_Dive::SetPlaybackRate(CDOTA_Ability_Nian_Dive *const this, float a2, float flRate)
{
  this->m_flPlaybackRate = a2;
}


// CDOTA_Ability_Nian_Dive::OnSpellStart  (line 645, @0x0000000002aeac40, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Set, entindex
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetCursorPosition, KeyValues::SetFloat, CDOTABaseAbility::GetCursorTarget, CEntityInstance::GetEntityIndex, KeyValues::SetInt, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_ProjectileManager::ProjectileDodge, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, __stack_chk_fail (13 total)
// strings: "modifier_nian_dive", "playback_rate", "target_entindex", "Nian.Dive.PreAttack"
void __fastcall CDOTA_Ability_Nian_Dive::OnSpellStart(CDOTA_Ability_Nian_Dive *const this)
{
  float v2; // xmm1_4
  CBaseEntity *CursorTarget; // rax
  CEntityIndex v4; // edx
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v9; // cx
  CDOTA_BaseNPC *v10; // rax
  EHANDLE hTarget; // [rsp+0h] [rbp-80h] BYREF
  Vector CursorPosition; // [rsp+10h] [rbp-70h]
  Vector v13; // [rsp+20h] [rbp-60h]
  Vector v14; // [rsp+30h] [rbp-50h]
  KeyValues kv; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v16; // [rsp+58h] [rbp-28h]

  v16 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_nian_dive");
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  KeyValues::SetFloat(&kv, "x", CursorPosition.z);
  v13 = CDOTABaseAbility::GetCursorPosition(this);
  KeyValues::SetFloat(&kv, "y", v13.z);
  v14 = CDOTABaseAbility::GetCursorPosition(this);
  KeyValues::SetFloat(&kv, "z", v14.z);
  KeyValues::SetFloat(&kv, "playback_rate", v2);
  if ( CDOTABaseAbility::GetCursorTarget(this) != 0 )
  {
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    v4.m_Data = CEntityInstance::GetEntityIndex(CursorTarget).m_Data;
  }
  else
  {
    v4.m_Data = 0;
  }
  KeyValues::SetInt(&kv, "target_entindex", v4.m_Data);
  Caster = CDOTABaseAbility::GetCaster(this);
  v6 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v6, Caster, this, "modifier_nian_dive", &kv, 0);
  v7 = CDOTABaseAbility::GetCaster(this);
  hTarget.m_Index = -1;
  if ( v7 != 0 )
  {
    m_pEntity = v7->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v9 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      hTarget.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v9 & 0x7FFF;
    }
  }
  CDOTA_ProjectileManager::ProjectileDodge(&g_DOTAProjectileManager, &hTarget, 0);
  v10 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v10, "Nian.Dive.PreAttack", 0.0, 0, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Nian_Dive::~CDOTA_Modifier_Nian_Dive  (line 665, @0x0000000002b305a0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Nian_Dive::~CDOTA_Modifier_Nian_Dive(CDOTA_Modifier_Nian_Dive *const this)
{
  this->_vptr_CDOTA_Buff = &off_4461CF0;
  this->_vptr_CHorizontalMotionController = &off_4461FF8;
  this->_vptr_CVerticalMotionController = &off_4462038;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_vHitEntities);
  if ( (this->m_vHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vHitEntities.m_Memory),
        (this->m_vHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vHitEntities.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Nian_Dive::~CDOTA_Modifier_Nian_Dive  (line 665, @0x0000000002b30ae0, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_Nian_Dive, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Nian_Dive::~CDOTA_Modifier_Nian_Dive(CDOTA_Modifier_Nian_Dive *const this)
{
  this->_vptr_CDOTA_Buff = &off_4461CF0;
  this->_vptr_CHorizontalMotionController = &off_4461FF8;
  this->_vptr_CVerticalMotionController = &off_4462038;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_vHitEntities);
  if ( (this->m_vHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vHitEntities.m_Memory);
    if ( (this->m_vHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vHitEntities.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nian_Dive::IsHidden  (line 675, @0x0000000002b15bb0, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Dive::IsHidden(CDOTA_Modifier_Nian_Dive *const this)
{
  return 1;
}


// CDOTA_Modifier_Nian_Dive::IsPurgable  (line 676, @0x0000000002b15bc0, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Dive::IsPurgable(CDOTA_Modifier_Nian_Dive *const this)
{
  return 0;
}


// CDOTA_Modifier_Nian_Dive::IsHorizontalMotionValidToApply  (line 688, @0x0000000002b15bd0, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Nian_Dive::IsHorizontalMotionValidToApply(CDOTA_Modifier_Nian_Dive *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Nian_Dive::IsVerticalMotionValidToApply  (line 689, @0x0000000002b15c00, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Nian_Dive::IsVerticalMotionValidToApply(CDOTA_Modifier_Nian_Dive *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Nian_Dive::OnCreated  (line 739, @0x0000000002b04fa0, libserver.so)  // inlines: FastSqrt, GetEHandle, GetEntryIndex, GetSerialNumber, Length2D, NormalizeInPlace, Set, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, clamp<float, float>, operator-, operator=
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, DotaRetrieveAbilityValue<float>, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, GetPositionOnGround, KeyValues::GetFloat, KeyValues::GetInt, VectorNormalize, CDOTALocomotor::ApplyHorizontalMotionController, CDOTA_Buff::Destroy, UTIL_EntityByIndex (17 total)
// strings: "pounce_distance", "pounce_speed", "pounce_acceleration", "pounce_radius", "pounce_damage", "leash_duration" (18 total)
void __fastcall CDOTA_Modifier_Nian_Dive::OnCreated(CDOTA_Modifier_Nian_Dive *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax
  CDOTABaseAbility *v10; // rax
  CDOTABaseAbility *v11; // rax
  CDOTABaseAbility *v12; // rax
  CDOTABaseAbility *v13; // rax
  CDOTABaseAbility *v14; // rax
  CDOTABaseAbility *v15; // rax
  CDOTABaseAbility *v16; // rax
  CDOTABaseAbility *v17; // rax
  CDOTABaseAbility *v18; // rax
  CDOTABaseAbility *v19; // rax
  CDOTABaseAbility *v20; // rax
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_BaseNPC *v22; // rax
  const Vector *AbsOrigin; // rax
  float v24; // xmm1_4
  float v25; // xmm1_4
  float Float; // xmm0_4
  float initial_delay; // xmm1_4
  int Int; // eax
  vec_t v29; // xmm0_4
  vec_t v30; // xmm2_4
  float v31; // xmm0_4
  float vertical_adjust_min_distance; // xmm1_4
  float v33; // xmm0_4
  float v34; // xmm2_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  CDOTA_BaseNPC *v37; // rax
  CDOTALocomotor *v38; // rax
  CBaseEntity *v39; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v41; // eax
  __int16 v42; // cx
  CDOTA_BaseNPC *v43; // rax
  CDOTALocomotor *v44; // rax
  float v45; // xmm0_4
  Activity v46; // r12d
  __m128i v47; // xmm0
  float v48; // r13d
  CDOTA_BaseNPC *v49; // rax
  int32 m_Data; // r12d
  CDOTA_BaseNPC *v51; // rax
  float v52; // xmm0_4
  float v53; // xmm0_4
  CDOTA_BaseNPC *v54; // rax
  vec_t v55; // xmm1_4
  __int64 v56; // xmm0_8
  CDOTA_BaseNPC *v57; // rax
  float GroundHeight; // xmm0_4
  double v59; // xmm4_8
  float v60; // xmm2_4
  int (**vptr_CDOTA_Buff)(...); // rax
  float v62; // xmm3_4
  float v63; // xmm2_4
  float v64; // xmm1_4
  float v65; // [rsp+Ch] [rbp-34h]
  Vector vEdgePos; // [rsp+10h] [rbp-30h] BYREF
  Vector PositionOnGround; // 0:kr00_12.12

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->pounce_distance, "pounce_distance");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v5, &this->pounce_speed, "pounce_speed");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v6, &this->pounce_acceleration, "pounce_acceleration");
  v7 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v7, &this->pounce_radius, "pounce_radius");
  v8 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v8, &this->pounce_damage, "pounce_damage");
  v9 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v9, &this->leash_duration, "leash_duration");
  v10 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v10, &this->initial_delay, "initial_delay");
  v11 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v11, &this->landing_delay, "landing_delay");
  v12 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v12, &this->stun_radius, "stun_radius");
  v13 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v13, &this->stun_duration, "stun_duration");
  v14 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v14, &this->claw_damage, "claw_damage");
  v15 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v15, &this->claw_damage_radius, "claw_damage_radius");
  v16 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v16, &this->claw_damage_delay, "claw_damage_delay");
  v17 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v17, &this->claw_damage_duration, "claw_damage_duration");
  v18 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v18, &this->vertical_adjust, "vertical_adjust");
  v19 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v19, &this->vertical_adjust_max_distance, "vertical_adjust_max_distance");
  v20 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v20, &this->vertical_adjust_min_distance, "vertical_adjust_min_distance");
  Parent = CDOTA_Buff::GetParent(this);
  v22 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v22);
  PositionOnGround = GetPositionOnGround(AbsOrigin, Parent);
  *&vEdgePos.x = *&PositionOnGround.x;
  this->m_vStartPosition.z = PositionOnGround.z;
  vEdgePos.z = PositionOnGround.z;
  this->m_vStartPosition.x = PositionOnGround.x;
  this->m_vStartPosition.y = vEdgePos.y;
  this->m_vTargetPosition.x = KeyValues::GetFloat(pKV, "x", PositionOnGround.z);
  this->m_vTargetPosition.y = KeyValues::GetFloat(pKV, "y", v24);
  this->m_vTargetPosition.z = 0.0;
  Float = KeyValues::GetFloat(pKV, "playback_rate", v25);
  initial_delay = this->initial_delay;
  this->m_flPlaybackRate = Float;
  this->m_bPlayedSwipeSound = 0;
  this->initial_delay = initial_delay / Float;
  this->landing_delay = this->landing_delay / Float;
  this->claw_damage_duration = this->claw_damage_duration / Float;
  Int = KeyValues::GetInt(pKV, "target_entindex", 0);
  if ( Int != 0 )
  {
    v39 = UTIL_EntityByIndex(Int);
    if ( v39 != 0 && (m_pEntity = v39->m_pEntity) != 0 )
    {
      v41 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v42 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v42 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hTarget.m_Index) = v42 | this->m_hTarget.m_Index & 0x8000;
      this->m_hTarget.m_Index = (v41 << 15) | this->m_hTarget.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hTarget.m_Index = -1;
    }
  }
  v29 = this->m_vTargetPosition.z - this->m_vStartPosition.z;
  v30 = this->m_vTargetPosition.x - this->m_vStartPosition.x;
  this->m_vTargetHorizontalDirection.y = this->m_vTargetPosition.y - this->m_vStartPosition.y;
  this->m_vTargetHorizontalDirection.z = v29;
  this->m_vTargetHorizontalDirection.x = v30;
  v31 = VectorNormalize(&this->m_vTargetHorizontalDirection);
  vertical_adjust_min_distance = this->vertical_adjust_min_distance;
  if ( vertical_adjust_min_distance > v31 )
  {
    v36 = 0.0;
LABEL_8:
    v35 = v36;
    goto LABEL_5;
  }
  v33 = v31 - vertical_adjust_min_distance;
  v34 = this->vertical_adjust_max_distance - vertical_adjust_min_distance;
  v35 = 0.0;
  v36 = v33 / v34;
  if ( v36 >= 0.0 )
  {
    v35 = 1.0;
    if ( v36 <= 1.0 )
      goto LABEL_8;
  }
LABEL_5:
  this->vertical_adjust = v35 * this->vertical_adjust;
  v37 = CDOTA_Buff::GetParent(this);
  v38 = (*(v37->_vptr_IHandleEntity + 376))(v37);
  if ( CDOTALocomotor::ApplyHorizontalMotionController(v38, &this->CHorizontalMotionController, 0)
    && (v43 = CDOTA_Buff::GetParent(this),
        v44 = (*(v43->_vptr_IHandleEntity + 376))(v43),
        CDOTALocomotor::ApplyVerticalMotionController(v44, &this->CVerticalMotionController, 0)) )
  {
    v45 = this->m_vStartPosition.x - this->m_vTargetPosition.x;
    v46 = (this->claw_damage > 0) + 1658;
    v65 = (v45 * v45)
        + ((this->m_vStartPosition.y - this->m_vTargetPosition.y)
         * (this->m_vStartPosition.y - this->m_vTargetPosition.y));
    v47 = LODWORD(v65);
    *v47.m128i_i32 = fsqrt(v65);
    v48 = COERCE_FLOAT(_mm_cvtsi128_si32(v47));
    v49 = CDOTA_Buff::GetParent(this);
    m_Data = CBaseAnimating::SelectWeightedSequence(v49, v46).m_Data;
    v51 = CDOTA_Buff::GetParent(this);
    v52 = CBaseAnimating::SequenceDuration(v51, m_Data);
    this->m_bInterrupted = 0;
    v53 = v52 / this->m_flPlaybackRate;
    this->m_flCurrentTimeHoriz = 0.0;
    this->m_flLeapSequenceDuration = v53;
    this->m_flCurrentTimeVert = 0.0;
    this->m_flHorizDelayTime = 0.0;
    this->m_flVertDelayTime = 0.0;
    this->m_flClawDamageTime = 0.0;
    v54 = CDOTA_Buff::GetParent(this);
    CGridNavBase::ClampToWorldEdge(&g_GridNav, v54, this->m_vTargetPosition);
    vEdgePos.z = v55;
    *&vEdgePos.x = v56;
    v57 = CDOTA_Buff::GetParent(this);
    GroundHeight = GetGroundHeight(&vEdgePos, v57);
    *&v59 = LODWORD(this->m_flLeapSequenceDuration);
    v60 = this->initial_delay + this->landing_delay;
    this->m_vTargetPosition.z = GroundHeight;
    vptr_CDOTA_Buff = this->_vptr_CDOTA_Buff;
    v62 = *&v59 - v60;
    v63 = 0.5 * this->pounce_acceleration;
    v64 = (GroundHeight - this->m_vStartPosition.z) / v62;
    this->m_flTotalTimeInAir = v62;
    this->m_flInitialVelocity = v64 + (v63 * v62);
    this->pounce_speed = v48 / v62;
    vptr_CDOTA_Buff[63](this, 1, v59);
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Nian_Dive::UpdateHorizontalMotion  (line 853, @0x0000000002af1480, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NormalizeInPlace, VectorAdd, VectorMultiply, VectorSubtract, operator CEntityInstance*, operator*, operator+, operator-, operator=
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::IsLeashedMovementPrevented, CBaseEntity::SetAbsOrigin, CBaseEntity::GetAbsOrigin, CGridNavBase::ClampToWorldEdge, GetGroundHeight, VectorNormalize, CBaseEntity::GetAbsAngles, UTIL_VecToYaw, CBaseEntity::SetAbsAngles
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Nian_Dive::UpdateHorizontalMotion(
        CDOTA_Modifier_Nian_Dive *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  float v4; // xmm3_4
  float m_flHorizDelayTime; // xmm2_4
  float initial_delay; // xmm1_4
  uint32 m_Index; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  float v12; // xmm3_4
  float m_flCurrentTimeHoriz; // xmm2_4
  float m_flTotalTimeInAir; // xmm1_4
  float v15; // xmm2_4
  float pounce_speed; // xmm0_4
  unsigned int v17; // xmm3_4
  vec_t v18; // xmm2_4
  unsigned int v19; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  vec_t v23; // xmm1_4
  __int64 v24; // xmm0_8
  CDOTA_BaseNPC *v25; // rax
  float GroundHeight; // xmm0_4
  float y; // xmm1_4
  float x; // xmm2_4
  vec_t v29; // xmm2_4
  vec_t v30; // xmm0_4
  CDOTA_BaseNPC *v31; // rax
  CDOTA_BaseNPC *v32; // rax
  Vector vEdgePos; // [rsp+10h] [rbp-40h] BYREF
  QAngle angFacing; // [rsp+20h] [rbp-30h] BYREF

  v4 = a3;
  m_flHorizDelayTime = this->m_flHorizDelayTime;
  initial_delay = this->initial_delay;
  if ( initial_delay <= m_flHorizDelayTime )
  {
LABEL_9:
    m_flCurrentTimeHoriz = this->m_flCurrentTimeHoriz;
    m_flTotalTimeInAir = this->m_flTotalTimeInAir;
    if ( m_flCurrentTimeHoriz <= m_flTotalTimeInAir )
    {
      v15 = m_flCurrentTimeHoriz + v4;
      if ( v15 > m_flTotalTimeInAir )
      {
        this->m_flCurrentTimeHoriz = m_flTotalTimeInAir;
      }
      else
      {
        this->m_flCurrentTimeHoriz = v15;
        m_flTotalTimeInAir = v15;
      }
      pounce_speed = this->pounce_speed;
      *&v17 = ((this->m_vTargetHorizontalDirection.y * pounce_speed) * m_flTotalTimeInAir) + this->m_vStartPosition.y;
      v18 = ((this->m_vTargetHorizontalDirection.z * pounce_speed) * m_flTotalTimeInAir) + this->m_vStartPosition.z;
      *&v19 = ((pounce_speed * this->m_vTargetHorizontalDirection.x) * m_flTotalTimeInAir) + this->m_vStartPosition.x;
      angFacing.z = v18;
      *&angFacing.x = __PAIR64__(v17, v19);
      Parent = CDOTA_Buff::GetParent(this);
      v21 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
      if ( !CDOTALocomotor::IsLeashedMovementPrevented(v21, *&angFacing.x) )
        CBaseEntity::SetAbsOrigin(me, &angFacing);
    }
    return;
  }
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v10 != 0 )
    {
      v11 = &v10[this->m_hTarget.m_Index & 0x1FF];
      if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index && v11->m_pInstance != 0 )
      {
        this->m_vTargetPosition = *CBaseEntity::GetAbsOrigin(v11->m_pInstance);
        v22 = CDOTA_Buff::GetParent(this);
        CGridNavBase::ClampToWorldEdge(&g_GridNav, v22, this->m_vTargetPosition);
        vEdgePos.z = v23;
        *&vEdgePos.x = v24;
        v25 = CDOTA_Buff::GetParent(this);
        GroundHeight = GetGroundHeight(&vEdgePos, v25);
        y = this->m_vTargetPosition.y;
        x = this->m_vTargetPosition.x;
        this->m_vTargetPosition.z = GroundHeight;
        v29 = x - this->m_vStartPosition.x;
        v30 = GroundHeight - this->m_vStartPosition.z;
        this->m_vTargetHorizontalDirection.y = y - this->m_vStartPosition.y;
        this->m_vTargetHorizontalDirection.x = v29;
        this->m_vTargetHorizontalDirection.z = v30;
        VectorNormalize(&this->m_vTargetHorizontalDirection);
        v31 = CDOTA_Buff::GetParent(this);
        angFacing = *CBaseEntity::GetAbsAngles(v31);
        angFacing.y = UTIL_VecToYaw(&this->m_vTargetHorizontalDirection);
        v32 = CDOTA_Buff::GetParent(this);
        CBaseEntity::SetAbsAngles(v32, &angFacing);
        m_flHorizDelayTime = this->m_flHorizDelayTime;
        initial_delay = this->initial_delay;
        v4 = a3;
      }
    }
  }
  v12 = v4 + m_flHorizDelayTime;
  this->m_flHorizDelayTime = v12;
  if ( initial_delay <= v12 )
  {
    v4 = v12 - initial_delay;
    goto LABEL_9;
  }
}


// CDOTA_Modifier_Nian_Dive::UpdateVerticalMotion  (line 901, @0x0000000002afcf50, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Square<float>, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CBaseEntity::GetAbsOrigin, CBaseEntity::SetAbsOrigin, CDOTA_Buff::GetCaster, CGridNav::DestroyTreesAroundPoint, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, FindUnitsInRadius, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase (17 total)
// strings: "modifier_knockback", "center_x", "center_y", "center_z"
// globals: CEntityHandle::gm_pEntityList
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_Modifier_Nian_Dive::UpdateVerticalMotion(
        CDOTA_Modifier_Nian_Dive *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  float m_flVertDelayTime; // xmm2_4
  float initial_delay; // xmm1_4
  float v8; // xmm0_4
  float m_flCurrentTimeVert; // xmm2_4
  float m_flTotalTimeInAir; // xmm1_4
  bool v11; // zf
  float v12; // xmm2_4
  char v13; // r13
  const Vector *AbsOrigin; // rax
  float v15; // xmm2_4
  float v16; // xmm0_4
  float z; // xmm3_4
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v19; // ebx
  CDOTA_BaseNPC *v20; // rax
  float v21; // xmm3_4
  float v22; // xmm1_4
  __m128i v23; // xmm5
  float v24; // r14d
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_BaseNPC *v26; // rax
  const Vector *v27; // rbx
  CDOTA_BaseNPC *v28; // rax
  __int64 v29; // r14
  int v30; // r13d
  unsigned __int16 *v31; // rdx
  int v32; // eax
  __int16 v33; // cx
  CEntityIdentity *v34; // rdx
  CEntityIdentity *v35; // rdx
  CDOTA_BaseNPC *m_pInstance; // r15
  CDOTA_BaseNPC *v37; // rax
  float v38; // xmm1_4
  CDOTA_BaseNPC *v39; // rax
  float v40; // xmm1_4
  CDOTA_BaseNPC *v41; // rax
  float v42; // xmm1_4
  float v43; // xmm1_4
  float v44; // xmm1_4
  float v45; // xmm1_4
  CDOTA_BaseNPC *v46; // rax
  const Vector *v47; // rax
  float v48; // xmm1_4
  float pounce_acceleration; // xmm3_4
  float m_flInitialVelocity; // xmm2_4
  CDOTA_BaseNPC *v51; // rax
  Vector *v52; // rbx
  CDOTA_BaseNPC *v53; // rax
  CDOTA_BaseNPC *v54; // rax
  float GroundHeight; // xmm0_4
  CDOTA_BaseNPC *v56; // rax
  unsigned int v57; // r13d
  CDOTA_BaseNPC *v58; // rax
  float v59; // xmm3_4
  float pounce_radius; // [rsp+24h] [rbp-8Ch]
  float vOrigin; // [rsp+28h] [rbp-88h]
  Vector vNewPos; // [rsp+30h] [rbp-80h] BYREF
  __int128 vNewPos_0; // [rsp+40h] [rbp-70h] OVERLAPPED BYREF
  int v64; // [rsp+50h] [rbp-60h]
  int v65; // [rsp+54h] [rbp-5Ch]
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v67; // [rsp+78h] [rbp-38h]
  Vector v68; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v69; // 0:xmm0_8.8,8:xmm1_4.4

  v67 = __readfsqword(0x28u);
  m_flVertDelayTime = this->m_flVertDelayTime;
  initial_delay = this->initial_delay;
  if ( initial_delay > m_flVertDelayTime )
  {
    v8 = a3 + m_flVertDelayTime;
    this->m_flVertDelayTime = v8;
    if ( initial_delay > v8 )
      return;
    a3 = v8 - initial_delay;
  }
  m_flCurrentTimeVert = this->m_flCurrentTimeVert;
  m_flTotalTimeInAir = this->m_flTotalTimeInAir;
  if ( m_flCurrentTimeVert < m_flTotalTimeInAir )
  {
    v11 = !this->m_bInterrupted;
    v12 = m_flCurrentTimeVert + a3;
    this->m_flCurrentTimeVert = v12;
    if ( v11 )
    {
      v13 = 0;
      if ( v12 >= m_flTotalTimeInAir )
      {
        this->m_flCurrentTimeVert = m_flTotalTimeInAir;
        v13 = 1;
      }
      AbsOrigin = CBaseEntity::GetAbsOrigin(me);
      v15 = this->m_flCurrentTimeVert;
      v16 = -0.5 * this->pounce_acceleration;
      z = this->m_vStartPosition.z;
      *&vNewPos.x = *&AbsOrigin->x;
      vNewPos.z = (((((v16 * (v15 * v15)) + (this->m_flInitialVelocity * v15)) * this->vertical_adjust) / 9.0) + z)
                + ((this->m_vTargetPosition.z - z) * (v15 / this->m_flTotalTimeInAir));
      CBaseEntity::SetAbsOrigin(me, &vNewPos);
      if ( v13 != 0 )
      {
        Caster = CDOTA_Buff::GetCaster(this);
        v19 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
        vOrigin = this->pounce_radius;
        v20 = CDOTA_Buff::GetCaster(this);
        v68 = *CBaseEntity::GetAbsOrigin(v20);
        CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v19, v68, vOrigin, v21);
        if ( this->claw_damage > 0 )
          CDOTA_Buff::StartIntervalThink(this, this->claw_damage_delay, v22);
        if ( this->stun_duration > 0.0 )
        {
          LODWORD(vNewPos_0) = 0;
          *v23.m128i_i32 = this->stun_radius;
          *(&vNewPos_0 + 1) = 0;
          v64 = 0;
          v65 = 0;
          v24 = COERCE_FLOAT(_mm_cvtsi128_si32(v23));
          Parent = CDOTA_Buff::GetParent(this);
          v26 = CDOTA_Buff::GetParent(this);
          v27 = CBaseEntity::GetAbsOrigin(v26);
          v28 = CDOTA_Buff::GetParent(this);
          FindUnitsInRadius(v28->m_iTeamNum.m_Value, v27, Parent, v24, &vNewPos_0, 2, 3, 16, 0, 0);
          if ( vNewPos_0 > 0 )
          {
            v29 = 0;
            v30 = 0;
            do
            {
              v31 = (*(&vNewPos_0 + 1) + v29);
              v32 = *(*(&vNewPos_0 + 1) + v29);
              if ( (v32 + 2) > 1 )
              {
                v33 = *v31;
                v34 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v31 >> 9) & 0x3F];
                if ( v34 != 0 )
                {
                  v35 = &v34[v33 & 0x1FF];
                  if ( v35 != 0 && v32 == v35->m_EHandle.m_Index )
                  {
                    m_pInstance = v35->m_pInstance;
                    if ( v35->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                    {
                      KeyValues::KeyValues(&kv, "modifier_knockback");
                      v37 = CDOTA_Buff::GetCaster(this);
                      CBaseEntity::GetAbsOrigin(v37);
                      KeyValues::SetFloat(&kv, "center_x", v38);
                      v39 = CDOTA_Buff::GetCaster(this);
                      CBaseEntity::GetAbsOrigin(v39);
                      KeyValues::SetFloat(&kv, "center_y", v40);
                      v41 = CDOTA_Buff::GetCaster(this);
                      CBaseEntity::GetAbsOrigin(v41);
                      KeyValues::SetFloat(&kv, "center_z", v42);
                      KeyValues::SetFloat(&kv, "knockback_duration", v43);
                      KeyValues::SetFloat(&kv, "knockback_distance", v44);
                      KeyValues::SetFloat(&kv, "duration", v45);
                      v46 = CDOTA_Buff::GetCaster(this);
                      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v46, 0, "modifier_knockback", &kv, 0);
                      KeyValues::~KeyValues(&kv);
                    }
                  }
                }
              }
              ++v30;
              v29 += 4;
            }
            while ( vNewPos_0 > v30 );
          }
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&vNewPos_0);
        }
        v51 = CDOTA_Buff::GetCaster(this);
        v52 = CBaseEntity::GetAbsOrigin(v51);
        v53 = CDOTA_Buff::GetCaster(this);
        FindClearSpaceForUnit(v53, *v52, 0);
      }
    }
    else
    {
      v47 = CBaseEntity::GetAbsOrigin(me);
      v48 = this->m_flCurrentTimeVert;
      pounce_acceleration = this->pounce_acceleration;
      m_flInitialVelocity = this->m_flInitialVelocity;
      *&vNewPos_0 = *&v47->x;
      *(&vNewPos_0 + 2) = ((((-0.5 * pounce_acceleration) * (v48 * v48)) + this->m_vStartPosition.z)
                         + (v48 * m_flInitialVelocity))
                        / 9.0;
      if ( (m_flInitialVelocity - (v48 * pounce_acceleration)) < 0.0 )
      {
        v54 = CDOTA_Buff::GetParent(this);
        GroundHeight = GetGroundHeight(&vNewPos_0, v54);
        if ( GroundHeight >= *(&vNewPos_0 + 2) )
        {
          *(&vNewPos_0 + 2) = GroundHeight;
          v56 = CDOTA_Buff::GetCaster(this);
          v57 = (*(v56->_vptr_IHandleEntity + 414))(v56);
          pounce_radius = this->pounce_radius;
          v58 = CDOTA_Buff::GetCaster(this);
          v69 = *CBaseEntity::GetAbsOrigin(v58);
          CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v57, v69, pounce_radius, v59);
          CDOTA_Buff::Destroy(this, 0, 0, 0);
        }
      }
      CBaseEntity::SetAbsOrigin(me, &vNewPos_0);
    }
  }
}


// CDOTA_Modifier_Nian_Dive::OnHorizontalMotionInterrupted  (line 993, @0x0000000002ae7b80, libserver.so)
void __fastcall CDOTA_Modifier_Nian_Dive::OnHorizontalMotionInterrupted(CDOTA_Modifier_Nian_Dive *const this)
{
  this->m_bInterrupted = 1;
}


// CDOTA_Modifier_Nian_Dive::OnVerticalMotionInterrupted  (line 1002, @0x0000000002aea130, libserver.so)
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Nian_Dive::OnVerticalMotionInterrupted(CDOTA_Modifier_Nian_Dive *const this)
{
  CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Nian_Dive::OnDestroy  (line 1011, @0x0000000002aeb1a0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::RemoveHorizontalMotionController, CDOTALocomotor::RemoveVerticalMotionController
void __fastcall CDOTA_Modifier_Nian_Dive::OnDestroy(CDOTA_Modifier_Nian_Dive *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v3; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTALocomotor *v5; // rax

  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveHorizontalMotionController(v3, &this->CHorizontalMotionController);
  v4 = CDOTA_Buff::GetParent(this);
  v5 = (*(v4->_vptr_IHandleEntity + 376))(v4);
  CDOTALocomotor::RemoveVerticalMotionController(v5, &this->CVerticalMotionController);
}


// CDOTA_Modifier_Nian_Dive::CheckState  (line 1021, @0x0000000002ae7ba0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Nian_Dive::CheckState(
        CDOTA_Modifier_Nian_Dive *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 2uLL;
  buffState->m_nDisabledStateMask &= ~2uLL;
}


// CDOTA_Modifier_Nian_Dive::OnIntervalThink  (line 1031, @0x0000000002b0d330, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, GrowMemory, HasElement, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::UnitEmitSound, CBaseAnimating::GetAttachment, CDOTA_Buff::GetParent, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CDOTA_Buff::GetAbility, ApplyDamage, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, KeyValues::KeyValues (20 total)
// strings: "Nian.Claw.PreAttack", "attach_attack1", "attach_attack3", "claw_knockback_duration", "claw_knockback_distance", "modifier_knockback" (10 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Nian_Dive::OnIntervalThink(CDOTA_Modifier_Nian_Dive *const this)
{
  float v1; // xmm1_4
  float v3; // xmm0_4
  bool v4; // cf
  CDOTA_BaseNPC *Caster; // rax
  __int64 v6; // r14
  vec_t z; // r12d
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  __m128i v10; // xmm2
  CDOTA_BaseNPC *Parent; // r15
  CDOTA_BaseNPC *v12; // rax
  __m128i v13; // xmm3
  CDOTA_BaseNPC *v14; // r13
  CDOTA_BaseNPC *v15; // rax
  __int64 v16; // r12
  CHandle<CBaseEntity> *v17; // rsi
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *v22; // rax
  CDOTABaseAbility *v23; // rax
  CDOTABaseAbility *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  float v26; // xmm1_4
  CDOTA_BaseNPC *v27; // rax
  float v28; // xmm1_4
  CDOTA_BaseNPC *v29; // rax
  float v30; // xmm1_4
  float v31; // xmm1_4
  float v32; // xmm1_4
  float v33; // xmm1_4
  CDOTA_BaseNPC *v34; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v36; // cx
  __int64 m_Size; // r15
  int v38; // eax
  CHandle<CBaseEntity> *v39; // rax
  float flDamage; // [rsp+3Ch] [rbp-A4h]
  int v41; // [rsp+40h] [rbp-A0h]
  float claw_knockback_duration; // [rsp+48h] [rbp-98h] BYREF
  int claw_knockback_distance; // [rsp+4Ch] [rbp-94h] BYREF
  Vector vLocation1; // [rsp+50h] [rbp-90h] BYREF
  Vector vLocation2; // [rsp+60h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+70h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+90h] [rbp-50h] BYREF
  unsigned __int64 v48; // [rsp+A8h] [rbp-38h]

  v48 = __readfsqword(0x28u);
  CDOTA_Buff::StartIntervalThink(this, 0.0099999998, v1);
  if ( !this->m_bPlayedSwipeSound )
  {
    this->m_bPlayedSwipeSound = 1;
    Caster = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(Caster, "Nian.Claw.PreAttack", 0.0, 0, 0);
  }
  v3 = this->m_flClawDamageTime + 0.0099999998;
  v4 = v3 < this->claw_damage_duration;
  this->m_flClawDamageTime = v3;
  if ( v4 )
  {
    v6 = *&vec3_invalid.x;
    z = vec3_invalid.z;
    *&vLocation1.x = *&vec3_invalid.x;
    vLocation1.z = z;
    v8 = CDOTA_Buff::GetCaster(this);
    CBaseAnimating::GetAttachment(v8, "attach_attack1", &vLocation1);
    *&vLocation2.x = v6;
    vLocation2.z = z;
    v9 = CDOTA_Buff::GetCaster(this);
    CBaseAnimating::GetAttachment(v9, "attach_attack3", &vLocation2);
    *v10.m128i_i32 = this->claw_damage_radius;
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    LODWORD(v6) = _mm_cvtsi128_si32(v10);
    Parent = CDOTA_Buff::GetParent(this);
    v12 = CDOTA_Buff::GetParent(this);
    FindUnitsInRadius(v12->m_iTeamNum.m_Value, &vLocation1, Parent, *&v6, &entities, 2, 3, 16, 0, 0);
    *v13.m128i_i32 = this->claw_damage_radius;
    LODWORD(v6) = _mm_cvtsi128_si32(v13);
    v14 = CDOTA_Buff::GetParent(this);
    v15 = CDOTA_Buff::GetParent(this);
    FindUnitsInRadius(v15->m_iTeamNum.m_Value, &vLocation2, v14, *&v6, &entities, 2, 3, 16, 0, 0);
    if ( entities.m_Size > 0 )
    {
      v16 = 0;
      do
      {
        while ( 1 )
        {
          v17 = &entities.m_Memory.m_pMemory[v16];
          if ( v17->m_Index + 2 > 1 )
          {
            v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v17->m_Index) >> 9) & 0x3F];
            if ( v18 != 0 )
            {
              v19 = &v18[v17->m_Index & 0x1FF];
              if ( v19 != 0 && v17->m_Index == v19->m_EHandle.m_Index )
              {
                m_pInstance = v19->m_pInstance;
                if ( v19->m_pInstance != 0
                  && m_pInstance->m_bIsDOTANPC
                  && CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                       &this->m_vHitEntities,
                       v17) < 0 )
                {
                  break;
                }
              }
            }
          }
          if ( entities.m_Size <= ++v16 )
            goto LABEL_24;
        }
        flDamage = this->claw_damage;
        Ability = CDOTA_Buff::GetAbility(this);
        v22 = CDOTA_Buff::GetCaster(this);
        ApplyDamage(v22, m_pInstance, Ability, flDamage, 1, 0);
        v23 = CDOTA_Buff::GetAbility(this);
        DotaRetrieveAbilityValue<float>(v23, &claw_knockback_duration, "claw_knockback_duration");
        v24 = CDOTA_Buff::GetAbility(this);
        DotaRetrieveAbilityValue<int>(v24, &claw_knockback_distance, "claw_knockback_distance");
        KeyValues::KeyValues(&kv, "modifier_knockback");
        v25 = CDOTA_Buff::GetCaster(this);
        CBaseEntity::GetAbsOrigin(v25);
        KeyValues::SetFloat(&kv, "center_x", v26);
        v27 = CDOTA_Buff::GetCaster(this);
        CBaseEntity::GetAbsOrigin(v27);
        KeyValues::SetFloat(&kv, "center_y", v28);
        v29 = CDOTA_Buff::GetCaster(this);
        CBaseEntity::GetAbsOrigin(v29);
        KeyValues::SetFloat(&kv, "center_z", v30);
        KeyValues::SetFloat(&kv, "knockback_duration", v31);
        KeyValues::SetFloat(&kv, "knockback_distance", v32);
        KeyValues::SetFloat(&kv, "duration", v33);
        v34 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(m_pInstance, v34, 0, "modifier_knockback", &kv, 0);
        v41 = -1;
        m_pEntity = m_pInstance->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v36 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v36 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          v41 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v36 & 0x7FFF;
        }
        m_Size = this->m_vHitEntities.m_Size;
        v38 = this->m_vHitEntities.m_Size;
        if ( m_Size == this->m_vHitEntities.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_vHitEntities.m_Memory, 1);
          v38 = this->m_vHitEntities.m_Size;
        }
        this->m_vHitEntities.m_Size = v38 + 1;
        v39 = &this->m_vHitEntities.m_Memory.m_pMemory[m_Size];
        if ( v39 != 0 )
          v39->m_Index = v41;
        CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Nian.Attack", 0.0, 0, 0);
        KeyValues::~KeyValues(&kv);
        ++v16;
      }
      while ( entities.m_Size > v16 );
    }
LABEL_24:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  }
}


// CDOTA_Ability_NianCharge::~CDOTA_Ability_NianCharge  (line 1091, @0x0000000002b30c30, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlMemory<CDOTA_Tree*, int>::Purge
void __fastcall CDOTA_Ability_NianCharge::~CDOTA_Ability_NianCharge(CDOTA_Ability_NianCharge *const this)
{
  bool v2; // zf
  CUtlVectorBase<CDOTA_Tree*,CUtlMemory<CDOTA_Tree*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_hTrackingProjectileTrees.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_446AB50;
  this->_vptr_CHorizontalMotionController = &off_446B5D8;
  this->m_hTrackingProjectileTrees.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_hTrackingProjectileTrees.m_Memory;
    CUtlMemory<CDOTA_Tree *,int>::Purge(&this->m_hTrackingProjectileTrees.m_Memory);
    if ( (this->m_hTrackingProjectileTrees.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_Tree *,int>::Purge(p_m_Memory);
  }
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


// CDOTA_Ability_NianCharge::~CDOTA_Ability_NianCharge  (line 1091, @0x0000000002b30cf0, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Ability_NianCharge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlMemory<CDOTA_Tree*, int>::Purge
void __fastcall CDOTA_Ability_NianCharge::~CDOTA_Ability_NianCharge(CDOTA_Ability_NianCharge *const this)
{
  bool v2; // zf
  CUtlVectorBase<CDOTA_Tree*,CUtlMemory<CDOTA_Tree*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_hTrackingProjectileTrees.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_446AB50;
  this->_vptr_CHorizontalMotionController = &off_446B5D8;
  this->m_hTrackingProjectileTrees.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_hTrackingProjectileTrees.m_Memory;
    CUtlMemory<CDOTA_Tree *,int>::Purge(&this->m_hTrackingProjectileTrees.m_Memory);
    if ( (this->m_hTrackingProjectileTrees.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_Tree *,int>::Purge(p_m_Memory);
  }
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


// CDOTA_Ability_NianCharge::Schema_DynamicBinding  (line 1093, @0x0000000002b15c30, libserver.so)
// globals: CDOTA_Ability_NianCharge::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_NianCharge::Schema_DynamicBinding(
        const CDOTA_Ability_NianCharge *const this)
{
  return CDOTA_Ability_NianCharge::s_pSchemaBinding;
}


// CDOTA_Ability_NianCharge::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1093, @0x0000000002b15c50, libserver.so)
// globals: CDOTA_Ability_NianCharge::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_NianCharge::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_NianCharge::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_NianCharge::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_NianCharge::CEntityInstanceEntityClass::DestructInstance  (line 1093, @0x0000000002b15c60, libserver.so)  // inlines: Destruct<CDOTA_Ability_NianCharge>
void __fastcall CDOTA_Ability_NianCharge::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_NianCharge::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_NianCharge::CEntityInstanceEntityClass::FreeInstance  (line 1093, @0x0000000002b15c80, libserver.so)
void __fastcall CDOTA_Ability_NianCharge::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_NianCharge::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_NianCharge::CEntityInstanceEntityClass::CanAllocate  (line 1093, @0x0000000002b15ca0, libserver.so)
bool __fastcall CDOTA_Ability_NianCharge::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_NianCharge::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_NianCharge::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1093, @0x0000000002b15cb0, libserver.so)
// globals: CDOTA_Ability_NianCharge::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_NianCharge::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_NianCharge::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_NianCharge::s_pSchemaBinding;
}


// CDOTA_Ability_NianCharge::CEntityInstanceEntityClass::AllocateInstance  (line 1093, @0x0000000002b19130, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_NianCharge::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_NianCharge::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1016);
  memset(v1, 0, 0x3F8u);
  return v1;
}


// CDOTA_Ability_NianCharge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1093, @0x0000000002b221d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_NianCharge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_NianCharge::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_NianCharge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1093, @0x0000000002b221f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_NianCharge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_NianCharge::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_NianCharge::GetEntityClassInternal  (line 1093, @0x0000000002b2b910, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "CDOTA_Ability_NianCharge"
// globals: `guard variable for'CDOTA_Ability_NianCharge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NianChargeClass, CDOTA_Ability_NianCharge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NianChargeClass, __dso_handle, CDOTA_Ability_NianCharge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_NianCharge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NianChargeClassInfo, CDOTA_Ability_NianCharge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NianChargeClassInfo
CEntityClass *__cdecl CDOTA_Ability_NianCharge::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_NianCharge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NianChargeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_NianCharge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NianChargeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_NianCharge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NianChargeClass);
    CDOTA_Ability_NianCharge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NianChargeClass._vptr_CEntityClass = off_4462070;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_NianCharge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NianChargeClass);
    __cxa_atexit(
      CDOTA_Ability_NianCharge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_NianCharge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NianChargeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_NianChargeClass != 0 )
    return &CDOTA_Ability_NianCharge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NianChargeClass;
  if ( `guard variable for'CDOTA_Ability_NianCharge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NianChargeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_NianCharge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NianChargeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_NianCharge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NianChargeClassInfo,
      "CDOTA_Ability_NianCharge",
      "nian_charge",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_NianCharge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NianChargeClassInfo);
  }
  CDOTA_Ability_NianCharge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NianChargeClass.m_pClassInfo = &CDOTA_Ability_NianCharge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NianChargeClassInfo;
  CDOTA_Ability_NianCharge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NianChargeClass.m_pBaseClassInfo = CDOTA_Ability_NianCharge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NianChargeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_NianChargeClass = &CDOTA_Ability_NianCharge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NianChargeClass;
  CDOTA_Ability_NianCharge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NianChargeClassInfo.m_pClass = &CDOTA_Ability_NianCharge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NianChargeClass;
  CDOTA_Ability_NianCharge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NianChargeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_NianChargeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_NianCharge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NianChargeClass;
}


// CDOTA_Ability_NianCharge::CEntityInstanceEntityClass::ConstructInstance  (line 1093, @0x0000000002b2fcb0, libserver.so)  // inlines: CDOTA_Ability_NianCharge, CEntityHandle, CHandle, CHorizontalMotionController, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_NianCharge>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_NianCharge::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_NianCharge::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 230) = 2;
    *p = &off_446AB50;
    *(p + 114) = &off_446B5D8;
    *(p + 239) = -1;
    *(p + 240) = 0;
    *(p + 121) = 0;
    *(p + 244) = 0;
    *(p + 245) = 0;
    *(p + 246) = 0;
    *(p + 124) = 0;
    *(p + 250) = 0;
    *(p + 251) = 0;
    *(p + 253) = 0;
    *(p + 926) = 0;
  }
  return p;
}


// CDOTA_Ability_NianCharge::PlaysDefaultAnimWhenStolen  (line 1115, @0x0000000002b15cc0, libserver.so)
bool __fastcall CDOTA_Ability_NianCharge::PlaysDefaultAnimWhenStolen(CDOTA_Ability_NianCharge *const this)
{
  return 0;
}


// CDOTA_Ability_NianCharge::GetStolenActivityModifier  (line 1116, @0x0000000002b15cd0, libserver.so)
// strings: "stolen_charge"
const char *__fastcall CDOTA_Ability_NianCharge::GetStolenActivityModifier(CDOTA_Ability_NianCharge *const this)
{
  return "stolen_charge";
}


// CDOTA_Ability_NianCharge::GetAssociatedSecondaryAbilities  (line 1117, @0x0000000002b15ce0, libserver.so)
const char *__fastcall CDOTA_Ability_NianCharge::GetAssociatedSecondaryAbilities(CDOTA_Ability_NianCharge *const this)
{
  return "nian_greater_bash";
}


// CDOTA_Ability_Nian_Frenzy::~CDOTA_Ability_Nian_Frenzy  (line 1147, @0x0000000002b1c410, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Nian_Frenzy::~CDOTA_Ability_Nian_Frenzy(CDOTA_Ability_Nian_Frenzy *const this)
{
  this->_vptr_IHandleEntity = &off_4462170;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Nian_Frenzy::~CDOTA_Ability_Nian_Frenzy  (line 1147, @0x0000000002b1c430, libserver.so)  // inlines: ~CDOTA_Ability_Nian_Frenzy
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Nian_Frenzy::~CDOTA_Ability_Nian_Frenzy(CDOTA_Ability_Nian_Frenzy *const this)
{
  this->_vptr_IHandleEntity = &off_4462170;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Nian_Frenzy::Schema_DynamicBinding  (line 1149, @0x0000000002b15cf0, libserver.so)
// globals: CDOTA_Ability_Nian_Frenzy::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nian_Frenzy::Schema_DynamicBinding(
        const CDOTA_Ability_Nian_Frenzy *const this)
{
  return CDOTA_Ability_Nian_Frenzy::s_pSchemaBinding;
}


// CDOTA_Ability_Nian_Frenzy::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1149, @0x0000000002b15d00, libserver.so)
// globals: CDOTA_Ability_Nian_Frenzy::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nian_Frenzy::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Nian_Frenzy::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nian_Frenzy::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Nian_Frenzy::CEntityInstanceEntityClass::DestructInstance  (line 1149, @0x0000000002b15d10, libserver.so)  // inlines: Destruct<CDOTA_Ability_Nian_Frenzy>
void __fastcall CDOTA_Ability_Nian_Frenzy::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Nian_Frenzy::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Nian_Frenzy::CEntityInstanceEntityClass::FreeInstance  (line 1149, @0x0000000002b15d30, libserver.so)
void __fastcall CDOTA_Ability_Nian_Frenzy::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Nian_Frenzy::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Nian_Frenzy::CEntityInstanceEntityClass::CanAllocate  (line 1149, @0x0000000002b15d50, libserver.so)
bool __fastcall CDOTA_Ability_Nian_Frenzy::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Nian_Frenzy::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Nian_Frenzy::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1149, @0x0000000002b15d60, libserver.so)
// globals: CDOTA_Ability_Nian_Frenzy::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Nian_Frenzy::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Nian_Frenzy::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nian_Frenzy::s_pSchemaBinding;
}


// CDOTA_Ability_Nian_Frenzy::CEntityInstanceEntityClass::AllocateInstance  (line 1149, @0x0000000002b19170, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Nian_Frenzy::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Nian_Frenzy::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Nian_Frenzy::CEntityInstanceEntityClass::ConstructInstance  (line 1149, @0x0000000002b1b830, libserver.so)  // inlines: CDOTA_Ability_Nian_Frenzy, Construct<CDOTA_Ability_Nian_Frenzy>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Nian_Frenzy::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Nian_Frenzy::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4462170;
  }
  return p;
}


// CDOTA_Ability_Nian_Frenzy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1149, @0x0000000002b22220, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Nian_Frenzy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nian_Frenzy::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Nian_Frenzy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1149, @0x0000000002b22240, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Nian_Frenzy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nian_Frenzy::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Nian_Frenzy::GetEntityClassInternal  (line 1149, @0x0000000002b2ba60, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "CDOTA_Ability_Nian_Frenzy"
// globals: `guard variable for'CDOTA_Ability_Nian_Frenzy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_FrenzyClass, CDOTA_Ability_Nian_Frenzy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_FrenzyClass, __dso_handle, CDOTA_Ability_Nian_Frenzy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Nian_Frenzy::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_FrenzyClassInfo, CDOTA_Ability_Nian_Frenzy::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_FrenzyClassInfo
CEntityClass *__cdecl CDOTA_Ability_Nian_Frenzy::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Nian_Frenzy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_FrenzyClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nian_Frenzy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_FrenzyClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Nian_Frenzy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_FrenzyClass);
    CDOTA_Ability_Nian_Frenzy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_FrenzyClass._vptr_CEntityClass = off_44620F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nian_Frenzy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_FrenzyClass);
    __cxa_atexit(
      CDOTA_Ability_Nian_Frenzy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Nian_Frenzy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_FrenzyClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Nian_FrenzyClass != 0 )
    return &CDOTA_Ability_Nian_Frenzy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_FrenzyClass;
  if ( `guard variable for'CDOTA_Ability_Nian_Frenzy::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_FrenzyClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nian_Frenzy::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_FrenzyClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Nian_Frenzy::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_FrenzyClassInfo,
      "CDOTA_Ability_Nian_Frenzy",
      "nian_frenzy",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nian_Frenzy::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_FrenzyClassInfo);
  }
  CDOTA_Ability_Nian_Frenzy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_FrenzyClass.m_pClassInfo = &CDOTA_Ability_Nian_Frenzy::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_FrenzyClassInfo;
  CDOTA_Ability_Nian_Frenzy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_FrenzyClass.m_pBaseClassInfo = CDOTA_Ability_Nian_Frenzy::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_FrenzyClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Nian_FrenzyClass = &CDOTA_Ability_Nian_Frenzy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_FrenzyClass;
  CDOTA_Ability_Nian_Frenzy::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_FrenzyClassInfo.m_pClass = &CDOTA_Ability_Nian_Frenzy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_FrenzyClass;
  CDOTA_Ability_Nian_Frenzy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_FrenzyClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Nian_FrenzyClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Nian_Frenzy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_FrenzyClass;
}


// CDOTA_Ability_Nian_Frenzy::YouForgotToImplementOrDeclareServerClass  (line 1156, @0x0000000002ae7bb0, libserver.so)
int __fastcall CDOTA_Ability_Nian_Frenzy::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Nian_Frenzy *const this)
{
  return 0;
}


// CDOTA_Ability_Nian_Frenzy::GetServerClass  (line 1156, @0x0000000002af2ab0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Nian_Frenzy::GetServerClass(CDOTA_Ability_Nian_Frenzy *const this)
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


// CDOTA_Ability_Nian_Frenzy::OnAbilityPhaseStart  (line 1165, @0x0000000002ae8c50, libserver.so)
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_nian_frenzy"
bool __fastcall CDOTA_Ability_Nian_Frenzy::OnAbilityPhaseStart(CDOTA_Ability_Nian_Frenzy *const this)
{
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v3; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_nian_frenzy");
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_nian_frenzy", &kv, 0);
  KeyValues::~KeyValues(&kv);
  return 1;
}


// CDOTA_Modifier_Nian_Frenzy::~CDOTA_Modifier_Nian_Frenzy  (line 1178, @0x0000000002b30530, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Nian_Frenzy::~CDOTA_Modifier_Nian_Frenzy(CDOTA_Modifier_Nian_Frenzy *const this)
{
  this->_vptr_CDOTA_Buff = &off_4462C30;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hEnemies);
  if ( (this->m_hEnemies.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hEnemies.m_Memory),
        (this->m_hEnemies.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hEnemies.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Nian_Frenzy::~CDOTA_Modifier_Nian_Frenzy  (line 1178, @0x0000000002b30a00, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_Nian_Frenzy, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Nian_Frenzy::~CDOTA_Modifier_Nian_Frenzy(CDOTA_Modifier_Nian_Frenzy *const this)
{
  this->_vptr_CDOTA_Buff = &off_4462C30;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hEnemies);
  if ( (this->m_hEnemies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hEnemies.m_Memory);
    if ( (this->m_hEnemies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hEnemies.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nian_Frenzy::IsHidden  (line 1192, @0x0000000002b15d70, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Frenzy::IsHidden(CDOTA_Modifier_Nian_Frenzy *const this)
{
  return 1;
}


// CDOTA_Modifier_Nian_Frenzy::OnCreated  (line 1216, @0x0000000002b05610, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>, GetTeamNumber
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_Buff::Destroy
// strings: "initial_rise_time", "right_swipe_time", "left_swipe_time", "dive_distance", "knockdown_duration", "stun_radius"
void __fastcall CDOTA_Modifier_Nian_Frenzy::OnCreated(CDOTA_Modifier_Nian_Frenzy *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax
  CDOTABaseAbility *v10; // rax
  CDOTABaseAbility *v11; // rax
  float v12; // xmm1_4
  float initial_rise_time; // xmm0_4
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_BaseNPC *v15; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v17; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->damage, "damage");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->damage_radius, "damage_radius");
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
    this->initial_rise_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "initial_rise_time", -1, 0);
  else
    this->initial_rise_time = 0.0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
    this->right_swipe_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "right_swipe_time", -1, 0);
  else
    this->right_swipe_time = 0.0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
    this->left_swipe_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v7, "left_swipe_time", -1, 0);
  else
    this->left_swipe_time = 0.0;
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 != 0 )
    this->dive_distance = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v8, "dive_distance", -1, 0);
  else
    this->dive_distance = 0.0;
  v9 = CDOTA_Buff::GetAbility(this);
  if ( v9 != 0 )
    this->knockdown_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v9, "knockdown_duration", -1, 0);
  else
    this->knockdown_duration = 0.0;
  v10 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v10, &this->stun_radius, "stun_radius");
  v11 = CDOTA_Buff::GetAbility(this);
  if ( v11 != 0 )
    this->stun_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v11, "stun_duration", -1, 0);
  else
    this->stun_duration = 0.0;
  initial_rise_time = this->initial_rise_time;
  this->m_nTickCounter = 0;
  CDOTA_Buff::StartIntervalThink(this, initial_rise_time, v12);
  Parent = CDOTA_Buff::GetParent(this);
  v15 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v15);
  v17 = CDOTA_Buff::GetParent(this);
  FindUnitsInRadius(v17->m_iTeamNum.m_Value, AbsOrigin, Parent, -1.0, &this->m_hEnemies, 2, 1, 0, 1, 0);
  if ( this->m_hEnemies.m_Size <= 2 )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Nian_Frenzy::OnIntervalThink  (line 1240, @0x0000000002afd540, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, QAngle, RandomYawVector, ToDOTABaseNPC, VectorAdd, VectorMultiply, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator[], ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, RandomFloat, AngleVectors, CBaseEntity::GetAbsOrigin, CDOTA_Modifier_Nian_Frenzy::DiveTowards, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_Buff::StartIntervalThink, KeyValues::~KeyValues (19 total)
// strings: "modifier_animated_right_claw_swipe", "modifier_animated_left_claw_swipe", "modifier_stunned", "modifier_nian_frenzy"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Nian_Frenzy::OnIntervalThink(CDOTA_Modifier_Nian_Frenzy *const this)
{
  __m128i v1; // xmm4
  int m_nTickCounter; // r12d
  CEntityInstance *v4; // rax
  const CBaseEntity *v5; // r13
  float v6; // xmm1_4
  CDOTABaseAbility *v7; // r14
  CDOTA_BaseNPC *v8; // r13
  CDOTA_BaseNPC *v9; // rax
  float v10; // xmm1_4
  CEntityInstance *v11; // rax
  const CBaseEntity *v12; // r13
  float v13; // xmm1_4
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v16; // rax
  float v17; // xmm1_4
  float v18; // r14d
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_BaseNPC *v20; // rax
  const Vector *v21; // r12
  CDOTA_BaseNPC *v22; // rax
  __int64 v23; // r12
  CHandle<CBaseEntity> *v24; // rdx
  uint32 m_Index; // eax
  __int16 v26; // cx
  CEntityIdentity *v27; // rdx
  CEntityIdentity *v28; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  CDOTABaseAbility *v30; // r15
  CDOTA_BaseNPC *v31; // rax
  float v32; // xmm1_4
  CDOTABaseAbility *v33; // r15
  CDOTA_BaseNPC *v34; // rax
  CDOTA_BaseNPC *v35; // rax
  CEntityInstance *v36; // rax
  const CBaseEntity *v37; // r13
  __m128i m_Size; // xmm7
  __m128i v39; // xmm5
  float v40; // r12d
  float v41; // r14d
  const Vector *AbsOrigin; // rax
  vec_t v43; // xmm0_4
  vec_t v44; // xmm1_4
  float flDamage; // [rsp+2Ch] [rbp-A4h]
  float flDamagea; // [rsp+2Ch] [rbp-A4h]
  QAngle angles; // [rsp+50h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+60h] [rbp-70h] BYREF
  KeyValues kvstun; // [rsp+80h] [rbp-50h] BYREF
  unsigned __int64 v50; // [rsp+98h] [rbp-38h]

  v50 = __readfsqword(0x28u);
  m_nTickCounter = this->m_nTickCounter;
  if ( m_nTickCounter != 0 )
  {
    if ( m_nTickCounter != 1 )
      goto LABEL_3;
LABEL_9:
    v11 = CEntityHandle::operator CEntityInstance *(this->m_hEnemies.m_Memory.m_pMemory + 1);
    v12 = v11;
    if ( v11 == 0 || BYTE3(v11[7]._vptr_IHandleEntity) == 0 )
      goto LABEL_5;
    angles.y = RandomFloat(0.0, 360.0);
    angles.x = 0.0;
    angles.z = 0.0;
    AngleVectors(&angles, &entities, 0, 0);
    CBaseEntity::GetAbsOrigin(v12);
    CDOTA_Modifier_Nian_Frenzy::DiveTowards(this);
    KeyValues::KeyValues(&kvstun, "modifier_animated_left_claw_swipe");
    KeyValues::SetFloat(&kvstun, "duration", v13);
    Ability = CDOTA_Buff::GetAbility(this);
    Caster = CDOTA_Buff::GetCaster(this);
    v16 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v16, Caster, Ability, "modifier_animated_left_claw_swipe", &kvstun, 0);
    CDOTA_Buff::StartIntervalThink(this, this->left_swipe_time, v17);
    KeyValues::~KeyValues(&kvstun);
    m_nTickCounter = this->m_nTickCounter;
    goto LABEL_3;
  }
  v4 = CEntityHandle::operator CEntityInstance *(this->m_hEnemies.m_Memory.m_pMemory);
  v5 = v4;
  if ( v4 == 0 || BYTE3(v4[7]._vptr_IHandleEntity) == 0 )
    goto LABEL_5;
  angles.y = RandomFloat(0.0, 360.0);
  angles.x = 0.0;
  angles.z = 0.0;
  AngleVectors(&angles, &entities, 0, 0);
  CBaseEntity::GetAbsOrigin(v5);
  CDOTA_Modifier_Nian_Frenzy::DiveTowards(this);
  KeyValues::KeyValues(&kvstun, "modifier_animated_right_claw_swipe");
  KeyValues::SetFloat(&kvstun, "duration", v6);
  v7 = CDOTA_Buff::GetAbility(this);
  v8 = CDOTA_Buff::GetCaster(this);
  v9 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v9, v8, v7, "modifier_animated_right_claw_swipe", &kvstun, 0);
  CDOTA_Buff::StartIntervalThink(this, this->right_swipe_time, v10);
  KeyValues::~KeyValues(&kvstun);
  m_nTickCounter = this->m_nTickCounter;
  if ( m_nTickCounter == 1 )
    goto LABEL_9;
LABEL_3:
  if ( m_nTickCounter == 2 )
  {
    v36 = CEntityHandle::operator CEntityInstance *(this->m_hEnemies.m_Memory.m_pMemory + 2);
    v37 = v36;
    if ( v36 == 0 || BYTE3(v36[7]._vptr_IHandleEntity) == 0 )
      goto LABEL_5;
    angles.y = RandomFloat(0.0, 360.0);
    angles.x = 0.0;
    angles.z = 0.0;
    AngleVectors(&angles, &entities, 0, 0);
    m_Size = entities.m_Size;
    v39 = *(&entities.m_Size + 1);
    *m_Size.m128i_i32 = *&entities.m_Size * 200.0;
    *v39.m128i_i32 = *(&entities.m_Size + 1) * 200.0;
    v40 = COERCE_FLOAT(_mm_cvtsi128_si32(m_Size));
    v41 = COERCE_FLOAT(_mm_cvtsi128_si32(v39));
    flDamagea = 200.0 * *&entities.m_Memory.m_pMemory;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v37);
    v43 = v41 + AbsOrigin->y;
    v44 = flDamagea + AbsOrigin->z;
    angles.x = v40 + AbsOrigin->x;
    angles.y = v43;
    angles.z = v44;
    CDOTA_Modifier_Nian_Frenzy::DiveTowards(this);
    m_nTickCounter = this->m_nTickCounter;
  }
  if ( m_nTickCounter == 3 )
  {
    *v1.m128i_i32 = this->stun_radius;
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    v18 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
    Parent = CDOTA_Buff::GetParent(this);
    v20 = CDOTA_Buff::GetParent(this);
    v21 = CBaseEntity::GetAbsOrigin(v20);
    v22 = CDOTA_Buff::GetParent(this);
    FindUnitsInRadius(v22->m_iTeamNum.m_Value, v21, Parent, v18, &entities, 2, 3, 0, 0, 0);
    if ( entities.m_Size > 0 )
    {
      v23 = 0;
      do
      {
        while ( 1 )
        {
          v24 = &entities.m_Memory.m_pMemory[v23];
          m_Index = v24->m_Index;
          if ( v24->m_Index + 2 > 1 )
          {
            v26 = v24->m_Index;
            v27 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v24->m_Index) >> 9) & 0x3F];
            if ( v27 != 0 )
            {
              v28 = &v27[v26 & 0x1FF];
              if ( v28 != 0 && m_Index == v28->m_EHandle.m_Index )
              {
                m_pInstance = v28->m_pInstance;
                if ( v28->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                  break;
              }
            }
          }
          if ( entities.m_Size <= ++v23 )
            goto LABEL_22;
        }
        flDamage = this->damage;
        v30 = CDOTA_Buff::GetAbility(this);
        v31 = CDOTA_Buff::GetCaster(this);
        ApplyDamage(v31, m_pInstance, v30, flDamage, 1, 0);
        KeyValues::KeyValues(&kvstun, "modifier_stunned");
        KeyValues::SetFloat(&kvstun, "duration", v32);
        v33 = CDOTA_Buff::GetAbility(this);
        v34 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(m_pInstance, v34, v33, "modifier_stunned", &kvstun, 0);
        KeyValues::~KeyValues(&kvstun);
        ++v23;
      }
      while ( entities.m_Size > v23 );
    }
LABEL_22:
    v35 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::RemoveModifierByName(v35, "modifier_nian_frenzy");
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
    m_nTickCounter = this->m_nTickCounter;
  }
LABEL_5:
  this->m_nTickCounter = m_nTickCounter + 1;
}


// CDOTA_Modifier_Nian_Frenzy::CheckState  (line 1310, @0x0000000002ae7bc0, libserver.so)
void __fastcall CDOTA_Modifier_Nian_Frenzy::CheckState(
        CDOTA_Modifier_Nian_Frenzy *const this,
        CDOTABuffState *const buffState)
{
  ;
}


// CDOTA_Modifier_Nian_Frenzy::DeclareFunctions  (line 1319, @0x0000000002ae7bd0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Nian_Frenzy::GetModifierDisableTurning(CModifierParams const&)
void __fastcall CDOTA_Modifier_Nian_Frenzy::DeclareFunctions(CDOTA_Modifier_Nian_Frenzy *const this)
{
  this->m_Functions[161].__pfn = CDOTA_Modifier_Nian_Frenzy::GetModifierDisableTurning;
  this->m_Functions[161].__delta = 0;
}


// CDOTA_Modifier_Nian_Frenzy::GetModifierDisableTurning  (line 1326, @0x0000000002ae7bf0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Nian_Frenzy::GetModifierDisableTurning(
        CDOTA_Modifier_Nian_Frenzy *const this,
        const CModifierParams *const params)
{
  return 1uLL;
}


// CDOTA_Modifier_Nian_Frenzy::DiveTowards  (line 1333, @0x0000000002af6bd0, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Set
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_ProjectileManager::ProjectileDodge, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_Modifier_Nian_Frenzy::OnIntervalThink
// strings: "modifier_nian_dive"
void __fastcall CDOTA_Modifier_Nian_Frenzy::DiveTowards(CDOTA_Modifier_Nian_Frenzy *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // r13
  float v4; // xmm1_4
  float v5; // xmm1_4
  float v6; // xmm1_4
  CDOTA_BaseNPC *v7; // r14
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v11; // cx
  EHANDLE hTarget; // [rsp+10h] [rbp-50h] BYREF
  KeyValues kv; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-28h]

  v14 = __readfsqword(0x28u);
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "nian_dive", 0);
  if ( AbilityByName != 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_nian_dive");
    KeyValues::SetFloat(&kv, "x", v4);
    KeyValues::SetFloat(&kv, "y", v5);
    KeyValues::SetFloat(&kv, "z", v6);
    v7 = CDOTA_Buff::GetCaster(this);
    v8 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v8, v7, AbilityByName, "modifier_nian_dive", &kv, 0);
    v9 = CDOTA_Buff::GetCaster(this);
    hTarget.m_Index = -1;
    if ( v9 != 0 )
    {
      m_pEntity = v9->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v11 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        hTarget.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v11 & 0x7FFF;
      }
    }
    CDOTA_ProjectileManager::ProjectileDodge(&g_DOTAProjectileManager, &hTarget, 0);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_Nian_Roar::~CDOTA_Ability_Nian_Roar  (line 1357, @0x0000000002b1c460, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Nian_Roar::~CDOTA_Ability_Nian_Roar(CDOTA_Ability_Nian_Roar *const this)
{
  this->_vptr_IHandleEntity = &off_4462F90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Nian_Roar::~CDOTA_Ability_Nian_Roar  (line 1357, @0x0000000002b1c480, libserver.so)  // inlines: ~CDOTA_Ability_Nian_Roar
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Nian_Roar::~CDOTA_Ability_Nian_Roar(CDOTA_Ability_Nian_Roar *const this)
{
  this->_vptr_IHandleEntity = &off_4462F90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Nian_Roar::Schema_DynamicBinding  (line 1359, @0x0000000002b15d80, libserver.so)
// globals: CDOTA_Ability_Nian_Roar::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nian_Roar::Schema_DynamicBinding(
        const CDOTA_Ability_Nian_Roar *const this)
{
  return CDOTA_Ability_Nian_Roar::s_pSchemaBinding;
}


// CDOTA_Ability_Nian_Roar::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1359, @0x0000000002b15d90, libserver.so)
// globals: CDOTA_Ability_Nian_Roar::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nian_Roar::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Nian_Roar::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nian_Roar::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Nian_Roar::CEntityInstanceEntityClass::DestructInstance  (line 1359, @0x0000000002b15da0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Nian_Roar>
void __fastcall CDOTA_Ability_Nian_Roar::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Nian_Roar::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Nian_Roar::CEntityInstanceEntityClass::FreeInstance  (line 1359, @0x0000000002b15dc0, libserver.so)
void __fastcall CDOTA_Ability_Nian_Roar::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Nian_Roar::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Nian_Roar::CEntityInstanceEntityClass::CanAllocate  (line 1359, @0x0000000002b15de0, libserver.so)
bool __fastcall CDOTA_Ability_Nian_Roar::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Nian_Roar::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Nian_Roar::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1359, @0x0000000002b15df0, libserver.so)
// globals: CDOTA_Ability_Nian_Roar::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Nian_Roar::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Nian_Roar::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nian_Roar::s_pSchemaBinding;
}


// CDOTA_Ability_Nian_Roar::CEntityInstanceEntityClass::AllocateInstance  (line 1359, @0x0000000002b191b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Nian_Roar::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Nian_Roar::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Ability_Nian_Roar::CEntityInstanceEntityClass::ConstructInstance  (line 1359, @0x0000000002b21040, libserver.so)  // inlines: CDOTA_Ability_Nian_Roar, Construct<CDOTA_Ability_Nian_Roar>
// calls: CDOTABaseAbility::CDOTABaseAbility, CountdownTimer::CountdownTimer, CDOTABaseAbility::~CDOTABaseAbility, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_Ability_Nian_Roar::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Nian_Roar::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4462F90;
    CountdownTimer::CountdownTimer((p + 968));
    *(p + 238) = 0;
    *(p + 248) = 1074161254;
    *(p + 996) = 0;
  }
  return p;
}


// CDOTA_Ability_Nian_Roar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1359, @0x0000000002b22270, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Nian_Roar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nian_Roar::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Nian_Roar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1359, @0x0000000002b22290, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Nian_Roar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nian_Roar::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Nian_Roar::GetEntityClassInternal  (line 1359, @0x0000000002b32590, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_Ability_Nian_Roar>, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "CDOTA_Ability_Nian_Roar"
// globals: `guard variable for'CDOTA_Ability_Nian_Roar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_RoarClass, CDOTA_Ability_Nian_Roar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_RoarClass, __dso_handle, CDOTA_Ability_Nian_Roar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Nian_Roar::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_RoarClassInfo, CDOTA_Ability_Nian_Roar::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_RoarClassInfo
CEntityClass *__cdecl CDOTA_Ability_Nian_Roar::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Nian_Roar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_RoarClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nian_Roar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_RoarClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Nian_Roar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_RoarClass);
    CDOTA_Ability_Nian_Roar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_RoarClass._vptr_CEntityClass = off_4462F10;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nian_Roar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_RoarClass);
    __cxa_atexit(
      CDOTA_Ability_Nian_Roar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Nian_Roar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_RoarClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Nian_RoarClass != 0 )
    return &CDOTA_Ability_Nian_Roar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_RoarClass;
  if ( `guard variable for'CDOTA_Ability_Nian_Roar::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_RoarClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nian_Roar::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_RoarClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Nian_Roar::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_RoarClassInfo,
      "CDOTA_Ability_Nian_Roar",
      "nian_roar",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nian_Roar::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_RoarClassInfo);
  }
  CDOTA_Ability_Nian_Roar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_RoarClass.m_pClassInfo = &CDOTA_Ability_Nian_Roar::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_RoarClassInfo;
  CDOTA_Ability_Nian_Roar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_RoarClass.m_pBaseClassInfo = CDOTA_Ability_Nian_Roar::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_RoarClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Nian_RoarClass = &CDOTA_Ability_Nian_Roar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_RoarClass;
  CDOTA_Ability_Nian_Roar::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_RoarClassInfo.m_pClass = &CDOTA_Ability_Nian_Roar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_RoarClass;
  CDOTA_Ability_Nian_Roar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_RoarClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_Ability_Nian_Roar>(0);
  g_pEntityCDOTA_Ability_Nian_RoarClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Nian_Roar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_RoarClass;
}


// CDOTA_Ability_Nian_Roar::GetCastCount  (line 1378, @0x0000000002b15e00, libserver.so)
int __fastcall CDOTA_Ability_Nian_Roar::GetCastCount(CDOTA_Ability_Nian_Roar *const this)
{
  return this->m_nCastCount;
}


// CDOTA_Ability_Nian_Roar::YouForgotToImplementOrDeclareServerClass  (line 1412, @0x0000000002ae7c00, libserver.so)
int __fastcall CDOTA_Ability_Nian_Roar::YouForgotToImplementOrDeclareServerClass(CDOTA_Ability_Nian_Roar *const this)
{
  return 0;
}


// CDOTA_Ability_Nian_Roar::GetServerClass  (line 1412, @0x0000000002af2df0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Nian_Roar::GetServerClass(CDOTA_Ability_Nian_Roar *const this)
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


// CDOTA_Ability_Nian_Roar::OnAbilityPhaseStart  (line 1422, @0x0000000002ae8a30, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::StartGesture, CDOTA_BaseNPC::UnitEmitSound
// strings: "Nian.Roar.PreAttack"
bool __fastcall CDOTA_Ability_Nian_Roar::OnAbilityPhaseStart(CDOTA_Ability_Nian_Roar *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(Caster, 1551, 0.0, 0.1, 5, 0, 1.0);
  v3 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v3, 1552, 0.0, 0.0, 4, 0, 1.0);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v4, "Nian.Roar.PreAttack", 0.0, 0, 0);
  return 1;
}


// CDOTA_Ability_Nian_Roar::OnAbilityPhaseInterrupted  (line 1434, @0x0000000002aea810, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveGesture
void __fastcall CDOTA_Ability_Nian_Roar::OnAbilityPhaseInterrupted(CDOTA_Ability_Nian_Roar *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveGesture(Caster, 1551);
  v3 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveGesture(v3, 1552);
}


// CDOTA_Ability_Nian_Roar::OnSpellStart  (line 1444, @0x0000000002b06880, libserver.so)  // inlines: CVariantBase, Free, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, Invalidate, Min<int>, NetworkStateChanged, Set, Start, operator=<float>, ~CVariantBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CountdownTimer::Now, CDOTA_Ability_Nian_Roar::FireProjectiles, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, CEntityInstance::CallScriptFunction, __stack_chk_fail (14 total)
// strings: "base_projectiles", "projectile_step", "base_speed", "speed_step", "initial_radius", "end_radius" (11 total)
void __fastcall CDOTA_Ability_Nian_Roar::OnSpellStart(CDOTA_Ability_Nian_Roar *const this)
{
  CountdownTimer *p_m_ctTimer; // r12
  int m_nCastCount; // eax
  bool v4; // zf
  float LevelSpecialValue; // xmm0_4
  int v6; // eax
  float v7; // xmm1_4
  int v8; // r13d
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  int max_projectiles; // esi
  float v14; // xmm1_4
  CDOTA_BaseNPC *v15; // r13
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *Caster; // rax
  float v19; // [rsp+8h] [rbp-58h]
  float v20; // [rsp+Ch] [rbp-54h]
  float v21; // [rsp+Ch] [rbp-54h]
  ScriptVariant_t result; // [rsp+10h] [rbp-50h] BYREF
  KeyValues kv; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-28h]

  p_m_ctTimer = &this->m_ctTimer;
  this->m_nWaveCount = 0;
  v24 = __readfsqword(0x28u);
  m_nCastCount = this->m_nCastCount;
  this->m_bScriptRoar = (m_nCastCount & 3) != 0;
  v4 = this->m_ctTimer.m_timestamp.m_Value == -1.0;
  this->m_nCastCount = m_nCastCount + 1;
  if ( !v4 )
  {
    (*(this->m_ctTimer._vptr_CountdownTimer + 2))(&this->m_ctTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_ctTimer.m_timestamp.m_Value = -1.0;
  }
  this->base_projectiles = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "base_projectiles", -1, 0);
  this->max_projectiles = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "max_projectiles", -1, 0);
  this->projectile_step = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "projectile_step", -1, 0);
  this->base_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "base_speed", -1, 0);
  this->speed_step = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed_step", -1, 0);
  this->initial_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "initial_radius", -1, 0);
  this->end_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "end_radius", -1, 0);
  this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0);
  this->base_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "base_interval", -1, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "interval_step", -1, 0);
  v4 = !this->m_bScriptRoar;
  this->interval_step = LevelSpecialValue;
  if ( v4 )
  {
    v6 = this->m_nCastCount;
    if ( v6 <= 9 )
    {
      v7 = v6;
      v8 = this->m_nCastCount;
    }
    else
    {
      v7 = 10.0;
      v8 = 10;
    }
    v9 = this->base_interval - (LevelSpecialValue * v7);
    this->m_flTiming = v9;
    v20 = v9;
    v10 = CountdownTimer::Now(p_m_ctTimer);
    v11 = v20;
    v12 = v10 + v20;
    if ( v12 != this->m_ctTimer.m_timestamp.m_Value )
    {
      v19 = v12;
      (*(this->m_ctTimer._vptr_CountdownTimer + 2))(p_m_ctTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v11 = v20;
      this->m_ctTimer.m_timestamp.m_Value = v19;
    }
    if ( v11 != this->m_ctTimer.m_duration.m_Value )
    {
      v21 = v11;
      (*(this->m_ctTimer._vptr_CountdownTimer + 2))(p_m_ctTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_ctTimer.m_duration.m_Value = v21;
    }
    max_projectiles = this->max_projectiles;
    if ( this->base_projectiles + v8 * this->projectile_step <= max_projectiles )
      max_projectiles = this->base_projectiles + v8 * this->projectile_step;
    this->m_nProjectiles = max_projectiles;
    CDOTA_Ability_Nian_Roar::FireProjectiles(this, max_projectiles);
  }
  else
  {
    result.m_uint64 = 0;
    result.m_type = 0;
    result.m_flags = 0;
    Caster = CDOTABaseAbility::GetCaster(this);
    CEntityInstance::CallScriptFunction(
      Caster,
      CallScriptFunctionBehavior_t::CALL_SCRIPT_FUNCTION_PRIVATE_ONLY,
      "OnRoarSpellStart",
      &result,
      0);
    if ( (result.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, result.m_uint64);
  }
  KeyValues::KeyValues(&kv, "modifier_nian_roar");
  (*(this->_vptr_IHandleEntity + 225))(this);
  KeyValues::SetFloat(&kv, "duration", v14);
  v15 = CDOTABaseAbility::GetCaster(this);
  v16 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v16, v15, this, "modifier_nian_roar", &kv, 0);
  v17 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v17, "Nian.Roar.Loop", 0.0, 0, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Nian_Roar::FireProjectiles  (line 1488, @0x0000000002af6d50, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Invalidate, NetworkStateChanged, QAngle, Reset, Set, Vector, VectorMultiply, operator*, operator=, operator=<float>, sLinearProjectileCreateInfo
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::StartGesture, CDOTABaseAbility::CreateAbilityParticleEffect, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::UnitEmitSound, RandomInt, AngleVectors, CDOTA_ProjectileManager::CreateLinearProjectile, CountdownTimer::Now
// callers: CDOTA_Ability_Nian_Roar::OnChannelThink, CDOTA_Ability_Nian_Roar::OnSpellStart
// strings: "nian_tailswipe_thunder_clap", "Nian.RoarProjectiles.Cast", "nian_roar_projectile"
void __fastcall CDOTA_Ability_Nian_Roar::FireProjectiles(CDOTA_Ability_Nian_Roar *const this, int nProjectiles)
{
  CDOTA_BaseNPC *Caster; // rax
  int AbilityParticleEffect; // r12d
  CDOTA_BaseNPC *v6; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v9; // rax
  CDOTA_ParticleManager *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v14; // rax
  const Vector *v15; // rax
  vec_t v16; // xmm0_4
  CDOTA_BaseNPC *v17; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v19; // cx
  int v20; // r8d
  int v21; // r15d
  int m_nWaveCount; // r13d
  int v23; // r12d
  int v24; // eax
  int base_speed; // r12d
  int v26; // r12d
  float v27; // xmm0_4
  const CountdownTimer *p_m_ctTimer; // [rsp+8h] [rbp-F8h]
  int v29; // [rsp+2Ch] [rbp-D4h]
  float v30; // [rsp+2Ch] [rbp-D4h]
  QAngle angles; // [rsp+30h] [rbp-D0h] BYREF
  Vector vForward; // [rsp+40h] [rbp-C0h] BYREF
  sLinearProjectileCreateInfo info; // [rsp+50h] [rbp-B0h] BYREF

  p_m_ctTimer = &this->m_ctTimer;
  if ( this->m_ctTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_ctTimer._vptr_CountdownTimer + 2))(p_m_ctTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL, -1.0);
    this->m_ctTimer.m_timestamp.m_Value = -1.0;
  }
  ++this->m_nWaveCount;
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(Caster, 1650, 0.1, 0.1, 9, 0, 1.0);
  AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(this, "nian_tailswipe_thunder_clap", 2, 0, 0);
  v6 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, AbilityParticleEffect, 0, *&AbsOrigin->x, AbsOrigin->z);
  info.pszEffectName = 0x4396000043960000LL;
  LODWORD(info.pAbility) = 1133903872;
  v9 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v9, AbilityParticleEffect, 1, 3.963168397784515e17, 300.0);
  v10 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v10, AbilityParticleEffect);
  v11 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v11, "Nian.RoarProjectiles.Cast", 0.0, 0, 0);
  info.hSource.m_Index = -1;
  info.fDistance = 0.0;
  info.fStartRadius = 0.0;
  info.fEndRadius = 0.0;
  y = vec3_origin.y;
  info.bHasFrontalCone = 1;
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
  info.pszEffectName = "nian_roar_projectile";
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
  v14 = CDOTABaseAbility::GetCaster(this);
  v15 = CBaseEntity::GetAbsOrigin(v14);
  info.vSpawnOrigin.x = v15->x;
  info.vSpawnOrigin.y = v15->y;
  v16 = v15->z;
  info.fDistance = 99999.0;
  info.vSpawnOrigin.z = v16;
  info.fStartRadius = this->initial_radius;
  info.fEndRadius = this->end_radius;
  v17 = CDOTABaseAbility::GetCaster(this);
  if ( v17 != 0 && (m_pEntity = v17->m_pEntity) != 0 )
  {
    v19 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v19 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v19 & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  info.iUnitTargetTeam = 2;
  info.iUnitTargetType = 51;
  info.iUnitTargetFlags = 16;
  info.bHasFrontalCone = 0;
  if ( nProjectiles > 0 )
  {
    v20 = 0;
    v21 = 0;
    do
    {
      m_nWaveCount = this->m_nWaveCount;
      v29 = v20;
      ++v21;
      v23 = v20 / nProjectiles;
      v24 = RandomInt(0, 15);
      angles.x = 0.0;
      angles.z = 0.0;
      angles.y = (v24 * m_nWaveCount + v23);
      AngleVectors(&angles, &vForward, 0, 0);
      base_speed = this->base_speed;
      v26 = RandomInt(0, (this->m_nCastCount * this->speed_step)) + base_speed;
      info.vVelocity.y = vForward.y * v26;
      info.vVelocity.z = vForward.z * v26;
      info.vVelocity.x = v26 * vForward.x;
      CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
      v20 = v29 + 360;
    }
    while ( v21 != nProjectiles );
  }
  v27 = CountdownTimer::Now(p_m_ctTimer) + this->m_ctTimer.m_duration.m_Value;
  if ( v27 != this->m_ctTimer.m_timestamp.m_Value )
  {
    v30 = v27;
    (*(this->m_ctTimer._vptr_CountdownTimer + 2))(p_m_ctTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_ctTimer.m_timestamp.m_Value = v30;
  }
}


// CDOTA_Ability_Nian_Roar::OnChannelThink  (line 1535, @0x0000000002b00390, libserver.so)  // inlines: CVariantBase, Free, IsElapsed, ~CVariantBase
// calls: CDOTABaseAbility::OnChannelThink, CDOTABaseAbility::GetCaster, CEntityInstance::CallScriptFunction, CountdownTimer::Now, CDOTA_Ability_Nian_Roar::FireProjectiles, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "OnRoarChannelThink"
void __fastcall CDOTA_Ability_Nian_Roar::OnChannelThink(
        CDOTA_Ability_Nian_Roar *const this,
        double a2,
        float flInterval)
{
  CDOTA_BaseNPC *Caster; // rax
  ScriptVariant_t result; // [rsp+0h] [rbp-20h] BYREF

  CDOTABaseAbility::OnChannelThink(this, a2, flInterval);
  if ( this->m_bScriptRoar )
  {
    result.m_uint64 = 0;
    result.m_type = 0;
    result.m_flags = 0;
    Caster = CDOTABaseAbility::GetCaster(this);
    CEntityInstance::CallScriptFunction(
      Caster,
      CallScriptFunctionBehavior_t::CALL_SCRIPT_FUNCTION_PRIVATE_ONLY,
      "OnRoarChannelThink",
      &result,
      0);
    if ( (result.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, result.m_uint64);
  }
  else if ( CountdownTimer::Now(&this->m_ctTimer) >= this->m_ctTimer.m_timestamp.m_Value )
  {
    CDOTA_Ability_Nian_Roar::FireProjectiles(this, this->m_nProjectiles);
  }
}


// CDOTA_Ability_Nian_Roar::OnProjectileHit  (line 1555, @0x0000000002af0be0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetCaster, ApplyDamage, CDOTA_BaseNPC::UnitEmitSound, CDOTABaseAbility::CreateAbilityParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "Nian.RoarProjectiles.Target", "nian_roar_prj_gasexplode"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Nian_Roar::OnProjectileHit(
        CDOTA_Ability_Nian_Roar *const this,
        _DWORD *hTarget,
        const Vector *const vLocation)
{
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx
  CEntityInstance *m_pInstance; // rbx
  CDOTA_BaseNPC *Caster; // rax
  int AbilityParticleEffect; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v12; // rax
  float flDamage; // [rsp+Ch] [rbp-24h]

  if ( (*hTarget + 2) <= 1 )
    return 1;
  v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
  if ( v5 == 0 )
    return 1;
  v6 = &v5[*hTarget & 0x1FF];
  if ( v6 == 0 )
    return 1;
  if ( *hTarget != v6->m_EHandle.m_Index )
    return 1;
  m_pInstance = v6->m_pInstance;
  if ( v6->m_pInstance == 0 )
    return 1;
  if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    return 1;
  if ( LOBYTE(m_pInstance[71]._vptr_IHandleEntity) != 0 )
    return 1;
  if ( (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 1) != 0 )
    return 1;
  if ( BYTE5(m_pInstance[45]._vptr_IHandleEntity) != 0 )
    return 1;
  flDamage = this->damage;
  Caster = CDOTABaseAbility::GetCaster(this);
  ApplyDamage(Caster, m_pInstance, this, flDamage, 4, 16);
  CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Nian.RoarProjectiles.Target", 0.0, 0, 0);
  if ( !this->m_bScriptRoar )
    return 1;
  AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(this, "nian_roar_prj_gasexplode", 2, 0, 0);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, AbilityParticleEffect, 4, *&vLocation->x, vLocation->z);
  v12 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v12, AbilityParticleEffect);
  return 1;
}


// CDOTA_Ability_Nian_Roar::OnChannelFinish  (line 1580, @0x0000000002aea850, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_BaseNPC::RemoveGesture, CDOTA_BaseNPC::StartGesture, CBaseEntity::StopSound, CDOTA_BaseNPC::UnitEmitSound
// strings: "modifier_nian_roar", "Nian.Roar.Loop", "Nian.Channel.Stop"
void __fastcall CDOTA_Ability_Nian_Roar::OnChannelFinish(CDOTA_Ability_Nian_Roar *const this, bool bInterrupted)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_nian_roar");
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveGesture(v4, 1552);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v5, 1553, 0.1, 0.1, 5, 0, 1.0);
  v6 = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::StopSound(v6, "Nian.Roar.Loop");
  v7 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v7, "Nian.Channel.Stop", 0.0, 0, 0);
}


// CDOTA_Modifier_Nian_Roar::~CDOTA_Modifier_Nian_Roar  (line 1595, @0x0000000002b1a8e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Nian_Roar::~CDOTA_Modifier_Nian_Roar(CDOTA_Modifier_Nian_Roar *const this)
{
  this->_vptr_CDOTA_Buff = &off_4463A50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Nian_Roar::~CDOTA_Modifier_Nian_Roar  (line 1595, @0x0000000002b1a900, libserver.so)  // inlines: ~CDOTA_Modifier_Nian_Roar
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Nian_Roar::~CDOTA_Modifier_Nian_Roar(CDOTA_Modifier_Nian_Roar *const this)
{
  this->_vptr_CDOTA_Buff = &off_4463A50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nian_Roar::IsPurgable  (line 1601, @0x0000000002b15e10, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Roar::IsPurgable(CDOTA_Modifier_Nian_Roar *const this)
{
  return 0;
}


// CDOTA_Modifier_Nian_Roar::DeclareFunctions  (line 1613, @0x0000000002ae7c10, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Nian_Roar::GetOverrideAnimation(CModifierParams const&)
void __fastcall CDOTA_Modifier_Nian_Roar::DeclareFunctions(CDOTA_Modifier_Nian_Roar *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_Nian_Roar::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
}


// CDOTA_Modifier_Nian_Roar::GetOverrideAnimation  (line 1620, @0x0000000002ae7c30, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Nian_Roar::GetOverrideAnimation(
        CDOTA_Modifier_Nian_Roar *const this,
        const CModifierParams *const params)
{
  return 0x44CE400000000001uLL;
}


// CDOTA_Modifier_Nian_Invulnerable::~CDOTA_Modifier_Nian_Invulnerable  (line 1629, @0x0000000002b1a890, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Nian_Invulnerable::~CDOTA_Modifier_Nian_Invulnerable(
        CDOTA_Modifier_Nian_Invulnerable *const this)
{
  this->_vptr_CDOTA_Buff = &off_4463D70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Nian_Invulnerable::~CDOTA_Modifier_Nian_Invulnerable  (line 1629, @0x0000000002b1a8b0, libserver.so)  // inlines: ~CDOTA_Modifier_Nian_Invulnerable
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Nian_Invulnerable::~CDOTA_Modifier_Nian_Invulnerable(
        CDOTA_Modifier_Nian_Invulnerable *const this)
{
  this->_vptr_CDOTA_Buff = &off_4463D70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nian_Invulnerable::IsPurgable  (line 1636, @0x0000000002b15e20, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Invulnerable::IsPurgable(CDOTA_Modifier_Nian_Invulnerable *const this)
{
  return 0;
}


// CDOTA_Modifier_Nian_Invulnerable::GetEffectName  (line 1648, @0x0000000002b15e30, libserver.so)
// strings: "particles/items_fx/black_king_bar_avatar.vpcf"
const char *__fastcall CDOTA_Modifier_Nian_Invulnerable::GetEffectName(CDOTA_Modifier_Nian_Invulnerable *const this)
{
  return "particles/items_fx/black_king_bar_avatar.vpcf";
}


// CDOTA_Modifier_Nian_Invulnerable::GetStatusEffectName  (line 1649, @0x0000000002b15e40, libserver.so)
// strings: "particles/status_fx/status_effect_avatar.vpcf"
const char *__fastcall CDOTA_Modifier_Nian_Invulnerable::GetStatusEffectName(
        CDOTA_Modifier_Nian_Invulnerable *const this)
{
  return "particles/status_fx/status_effect_avatar.vpcf";
}


// CDOTA_Modifier_Nian_Invulnerable::StatusEffectPriority  (line 1650, @0x0000000002b15e50, libserver.so)
int __fastcall CDOTA_Modifier_Nian_Invulnerable::StatusEffectPriority(CDOTA_Modifier_Nian_Invulnerable *const this)
{
  return 20;
}


// CDOTA_Modifier_Nian_Invulnerable::OnCreated  (line 1657, @0x0000000002aea150, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::Destroy
// strings: "modifier_nian_vulnerable"
void __fastcall CDOTA_Modifier_Nian_Invulnerable::OnCreated(
        CDOTA_Modifier_Nian_Invulnerable *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_Buff *ModifierByName; // rax

  Parent = CDOTA_Buff::GetParent(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_nian_vulnerable", 0);
  if ( ModifierByName != 0 )
    CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
}


// CDOTA_Modifier_Nian_Invulnerable::OnDestroy  (line 1668, @0x0000000002ae9bd0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::ReleaseParticleIndex, KeyValues::KeyValues, KeyValues::SetInt, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_nian_vulnerable", "particles/items_fx/dust_of_appearance_debuff.vpcf"
void __fastcall CDOTA_Modifier_Nian_Invulnerable::OnDestroy(CDOTA_Modifier_Nian_Invulnerable *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax
  int BuffParticleEffect; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *v7; // r13
  CDOTA_BaseNPC *v8; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-28h]

  v10 = __readfsqword(0x28u);
  Parent = CDOTA_Buff::GetParent(this);
  if ( CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_nian_vulnerable", 0) == 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_nian_vulnerable");
    KeyValues::SetInt(&kv, "duration", -1);
    Ability = CDOTA_Buff::GetAbility(this);
    v7 = CDOTA_Buff::GetParent(this);
    v8 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::AddNewModifier(v8, v7, Ability, "modifier_nian_vulnerable", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
  v3 = CDOTA_Buff::GetParent(this);
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/items_fx/dust_of_appearance_debuff.vpcf",
                         1,
                         v3,
                         0);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(ParticleManager, BuffParticleEffect);
}


// CDOTA_Modifier_Nian_Invulnerable::CheckState  (line 1684, @0x0000000002ae7c50, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Nian_Invulnerable::CheckState(
        CDOTA_Modifier_Nian_Invulnerable *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x400uLL;
  buffState->m_nDisabledStateMask &= ~0x400uLL;
}


// CDOTA_Modifier_Nian_Invulnerable::DeclareFunctions  (line 1691, @0x0000000002ae7c70, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Nian_Invulnerable::GetAbsoluteNoDamagePhysical(CModifierParams const&), CDOTA_Modifier_Nian_Invulnerable::GetAbsoluteNoDamageMagical(CModifierParams const&), CDOTA_Modifier_Nian_Invulnerable::GetAbsoluteNoDamagePure(CModifierParams const&)
void __fastcall CDOTA_Modifier_Nian_Invulnerable::DeclareFunctions(CDOTA_Modifier_Nian_Invulnerable *const this)
{
  this->m_Functions[103].__pfn = CDOTA_Modifier_Nian_Invulnerable::GetAbsoluteNoDamagePhysical;
  this->m_Functions[103].__delta = 0;
  this->m_Functions[104].__delta = 0;
  this->m_Functions[104].__pfn = CDOTA_Modifier_Nian_Invulnerable::GetAbsoluteNoDamageMagical;
  this->m_Functions[105].__pfn = CDOTA_Modifier_Nian_Invulnerable::GetAbsoluteNoDamagePure;
  this->m_Functions[105].__delta = 0;
}


// CDOTA_Modifier_Nian_Invulnerable::GetAbsoluteNoDamagePhysical  (line 1698, @0x0000000002ae7cd0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Nian_Invulnerable::GetAbsoluteNoDamagePhysical(
        CDOTA_Modifier_Nian_Invulnerable *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Nian_Invulnerable::GetAbsoluteNoDamageMagical  (line 1703, @0x0000000002ae7cf0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Nian_Invulnerable::GetAbsoluteNoDamageMagical(
        CDOTA_Modifier_Nian_Invulnerable *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Nian_Invulnerable::GetAbsoluteNoDamagePure  (line 1708, @0x0000000002ae7d10, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Nian_Invulnerable::GetAbsoluteNoDamagePure(
        CDOTA_Modifier_Nian_Invulnerable *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Nian_Intrinsic::~CDOTA_Modifier_Nian_Intrinsic  (line 1718, @0x0000000002b1a840, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Nian_Intrinsic::~CDOTA_Modifier_Nian_Intrinsic(
        CDOTA_Modifier_Nian_Intrinsic *const this)
{
  this->_vptr_CDOTA_Buff = &off_4464090;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Nian_Intrinsic::~CDOTA_Modifier_Nian_Intrinsic  (line 1718, @0x0000000002b1a860, libserver.so)  // inlines: ~CDOTA_Modifier_Nian_Intrinsic
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Nian_Intrinsic::~CDOTA_Modifier_Nian_Intrinsic(
        CDOTA_Modifier_Nian_Intrinsic *const this)
{
  this->_vptr_CDOTA_Buff = &off_4464090;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nian_Intrinsic::IsPurgable  (line 1725, @0x0000000002b15e60, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Intrinsic::IsPurgable(CDOTA_Modifier_Nian_Intrinsic *const this)
{
  return 0;
}


// CDOTA_Modifier_Nian_Intrinsic::IsHidden  (line 1730, @0x0000000002b15e70, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Intrinsic::IsHidden(CDOTA_Modifier_Nian_Intrinsic *const this)
{
  return 1;
}


// CDOTA_Modifier_Nian_Intrinsic::OnCreated  (line 1742, @0x0000000002ae8f90, libserver.so)
// calls: CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Nian_Intrinsic::OnCreated(CDOTA_Modifier_Nian_Intrinsic *const this, KeyValues *pKV)
{
  float v2; // xmm1_4

  CDOTA_Buff::StartIntervalThink(this, 0.5, v2);
}


// CDOTA_Modifier_Nian_Intrinsic::OnDestroy  (line 1749, @0x0000000002ae8cf0, libserver.so)
// calls: CDOTA_Buff::GetParent
void __fastcall CDOTA_Modifier_Nian_Intrinsic::OnDestroy(CDOTA_Modifier_Nian_Intrinsic *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  if ( CDOTA_Buff::GetParent(this) != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    (*(Parent->_vptr_IHandleEntity + 408))(Parent);
  }
}


// CDOTA_Modifier_Nian_Intrinsic::DeclareFunctions  (line 1759, @0x0000000002ae7d30, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Nian_Intrinsic::GetModifierMoveSpeed_Absolute(CModifierParams const&), CDOTA_Modifier_Nian_Intrinsic::GetMinHealth(CModifierParams const&), CDOTA_Modifier_Nian_Intrinsic::GetModifierMoveSpeed_Max(CModifierParams const&)
void __fastcall CDOTA_Modifier_Nian_Intrinsic::DeclareFunctions(CDOTA_Modifier_Nian_Intrinsic *const this)
{
  this->m_Functions[18].__pfn = CDOTA_Modifier_Nian_Intrinsic::GetModifierMoveSpeed_Absolute;
  this->m_Functions[18].__delta = 0;
  this->m_Functions[102].__delta = 0;
  this->m_Functions[102].__pfn = CDOTA_Modifier_Nian_Intrinsic::GetMinHealth;
  this->m_Functions[21].__pfn = CDOTA_Modifier_Nian_Intrinsic::GetModifierMoveSpeed_Max;
  this->m_Functions[21].__delta = 0;
}


// CDOTA_Modifier_Nian_Intrinsic::GetModifierMoveSpeed_Absolute  (line 1768, @0x0000000002ae7d90, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Nian_Intrinsic::GetModifierMoveSpeed_Absolute(
        CDOTA_Modifier_Nian_Intrinsic *const this,
        const CModifierParams *const params)
{
  return 0x4416000000000001uLL;
}


// CDOTA_Modifier_Nian_Intrinsic::GetModifierMoveSpeed_Max  (line 1775, @0x0000000002ae7db0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Nian_Intrinsic::GetModifierMoveSpeed_Max(
        CDOTA_Modifier_Nian_Intrinsic *const this,
        const CModifierParams *const params)
{
  return 0x461C400000000001uLL;
}


// CDOTA_Modifier_Nian_Intrinsic::CheckState  (line 1782, @0x0000000002ae7dd0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Nian_Intrinsic::CheckState(
        CDOTA_Modifier_Nian_Intrinsic *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x800400uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFF7FFBFFLL;
}


// CDOTA_Modifier_Nian_Intrinsic::GetMinHealth  (line 1792, @0x0000000002ae7df0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Nian_Intrinsic::GetMinHealth(
        CDOTA_Modifier_Nian_Intrinsic *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Nian_Intrinsic::OnIntervalThink  (line 1798, @0x0000000002aeb310, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::ModifyHealth, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Nian_Intrinsic::OnIntervalThink(CDOTA_Modifier_Nian_Intrinsic *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  int v3; // r12d
  CDOTA_BaseNPC *v4; // rax
  float v5; // xmm1_4

  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 156))(Parent);
  v4 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::ModifyHealth(v4, v3, 0, 0, 0);
  CDOTA_Buff::StartIntervalThink(this, 0.5, v5);
}


// CDOTA_Unit_Nian_Attachment::~CDOTA_Unit_Nian_Attachment  (line 1817, @0x0000000002b31020, libserver.so)  // inlines: Purge, ~CDOTA_BaseNPC_Additive, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<NianDamageTaken_t, CUtlMemory<NianDamageTaken_t, int> >::RemoveAll, CDOTA_BaseNPC::~CDOTA_BaseNPC, CUtlMemory<NianDamageTaken_t, int>::Purge
void __fastcall CDOTA_Unit_Nian_Attachment::~CDOTA_Unit_Nian_Attachment(CDOTA_Unit_Nian_Attachment *const this)
{
  this->_vptr_IHandleEntity = &off_4464710;
  this->_vptr_INextBotEventResponder = &off_4465670;
  this->_vptr_CObstructionObject = &off_44659A0;
  CUtlVectorBase<NianDamageTaken_t,CUtlMemory<NianDamageTaken_t,int>>::RemoveAll(&this->m_vecRecentDamage);
  if ( (this->m_vecRecentDamage.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<NianDamageTaken_t,int>::Purge(&this->m_vecRecentDamage.m_Memory);
    if ( (this->m_vecRecentDamage.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<NianDamageTaken_t,int>::Purge(&this->m_vecRecentDamage.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_Unit_Nian_Attachment::~CDOTA_Unit_Nian_Attachment  (line 1817, @0x0000000002b310e0, libserver.so)  // inlines: Purge, ~CDOTA_BaseNPC_Additive, ~CDOTA_Unit_Nian_Attachment, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<NianDamageTaken_t, CUtlMemory<NianDamageTaken_t, int> >::RemoveAll, CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete, CUtlMemory<NianDamageTaken_t, int>::Purge
void __fastcall CDOTA_Unit_Nian_Attachment::~CDOTA_Unit_Nian_Attachment(CDOTA_Unit_Nian_Attachment *const this)
{
  this->_vptr_IHandleEntity = &off_4464710;
  this->_vptr_INextBotEventResponder = &off_4465670;
  this->_vptr_CObstructionObject = &off_44659A0;
  CUtlVectorBase<NianDamageTaken_t,CUtlMemory<NianDamageTaken_t,int>>::RemoveAll(&this->m_vecRecentDamage);
  if ( (this->m_vecRecentDamage.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<NianDamageTaken_t,int>::Purge(&this->m_vecRecentDamage.m_Memory);
    if ( (this->m_vecRecentDamage.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<NianDamageTaken_t,int>::Purge(&this->m_vecRecentDamage.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Nian_Attachment::Schema_DynamicBinding  (line 1819, @0x0000000002b15e80, libserver.so)
// globals: CDOTA_Unit_Nian_Attachment::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Nian_Attachment::Schema_DynamicBinding(
        const CDOTA_Unit_Nian_Attachment *const this)
{
  return CDOTA_Unit_Nian_Attachment::s_pSchemaBinding;
}


// CDOTA_Unit_Nian_Attachment::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1819, @0x0000000002b15eb0, libserver.so)
// globals: CDOTA_Unit_Nian_Attachment::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Nian_Attachment::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Nian_Attachment::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Nian_Attachment::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Nian_Attachment::CEntityInstanceEntityClass::DestructInstance  (line 1819, @0x0000000002b15ec0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Nian_Attachment>
void __fastcall CDOTA_Unit_Nian_Attachment::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Nian_Attachment::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Nian_Attachment::CEntityInstanceEntityClass::FreeInstance  (line 1819, @0x0000000002b15ee0, libserver.so)
void __fastcall CDOTA_Unit_Nian_Attachment::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Nian_Attachment::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Nian_Attachment::CEntityInstanceEntityClass::CanAllocate  (line 1819, @0x0000000002b15f00, libserver.so)
bool __fastcall CDOTA_Unit_Nian_Attachment::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Nian_Attachment::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Nian_Attachment::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1819, @0x0000000002b15f10, libserver.so)
// globals: CDOTA_Unit_Nian_Attachment::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Nian_Attachment::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Nian_Attachment::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Nian_Attachment::s_pSchemaBinding;
}


// CDOTA_Unit_Nian_Attachment::CEntityInstanceEntityClass::AllocateInstance  (line 1819, @0x0000000002b191f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Nian_Attachment::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Nian_Attachment::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4536);
  memset(v1, 0, 0x11B8u);
  return v1;
}


// CDOTA_Unit_Nian_Attachment::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1819, @0x0000000002b227a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Nian_Attachment::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Nian_Attachment::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Nian_Attachment::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1819, @0x0000000002b22960, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Nian_Attachment::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Nian_Attachment::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Nian_Attachment::GetEntityClassInternal  (line 1819, @0x0000000002b2bbb0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC::InitScriptDesc, CDOTA_BaseNPC_Additive::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "npc_dota_nian_attachment", "CDOTA_Unit_Nian_Attachment"
// globals: `guard variable for'CDOTA_Unit_Nian_Attachment::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Nian_AttachmentClass, CDOTA_Unit_Nian_Attachment::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Nian_AttachmentClass, __dso_handle, CDOTA_Unit_Nian_Attachment::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Nian_Attachment::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Nian_AttachmentClassInfo, CDOTA_Unit_Nian_Attachment::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Nian_AttachmentClassInfo
CEntityClass *__cdecl CDOTA_Unit_Nian_Attachment::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Nian_Attachment::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Nian_AttachmentClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Nian_Attachment::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Nian_AttachmentClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Nian_Attachment::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Nian_AttachmentClass);
    CDOTA_Unit_Nian_Attachment::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Nian_AttachmentClass._vptr_CEntityClass = off_4464370;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Nian_Attachment::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Nian_AttachmentClass);
    __cxa_atexit(
      CDOTA_Unit_Nian_Attachment::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Nian_Attachment::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Nian_AttachmentClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Nian_AttachmentClass != 0 )
    return &CDOTA_Unit_Nian_Attachment::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Nian_AttachmentClass;
  if ( `guard variable for'CDOTA_Unit_Nian_Attachment::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Nian_AttachmentClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Nian_Attachment::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Nian_AttachmentClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Additive::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Nian_Attachment::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Nian_AttachmentClassInfo,
      "CDOTA_Unit_Nian_Attachment",
      "npc_dota_nian_attachment",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Nian_Attachment::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Nian_AttachmentClassInfo);
  }
  CDOTA_Unit_Nian_Attachment::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Nian_AttachmentClass.m_pClassInfo = &CDOTA_Unit_Nian_Attachment::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Nian_AttachmentClassInfo;
  CDOTA_Unit_Nian_Attachment::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Nian_AttachmentClass.m_pBaseClassInfo = CDOTA_Unit_Nian_Attachment::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Nian_AttachmentClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Nian_AttachmentClass = &CDOTA_Unit_Nian_Attachment::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Nian_AttachmentClass;
  CDOTA_Unit_Nian_Attachment::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Nian_AttachmentClassInfo.m_pClass = &CDOTA_Unit_Nian_Attachment::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Nian_AttachmentClass;
  CDOTA_Unit_Nian_Attachment::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Nian_AttachmentClass.m_pScriptClassDesc = CDOTA_BaseNPC::InitScriptDesc();
  g_pEntityCDOTA_Unit_Nian_AttachmentClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Nian_Attachment::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Nian_AttachmentClass;
}


// CDOTA_Unit_Nian_Attachment::CEntityInstanceEntityClass::ConstructInstance  (line 1819, @0x0000000002b2bd00, libserver.so)  // inlines: Construct<CDOTA_Unit_Nian_Attachment>
// calls: CDOTA_Unit_Nian_Attachment::CDOTA_Unit_Nian_Attachment
CEntityInstance *__fastcall CDOTA_Unit_Nian_Attachment::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Nian_Attachment::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CDOTA_Unit_Nian_Attachment::CDOTA_Unit_Nian_Attachment(p);
  return p;
}


// CDOTA_Unit_Nian_Attachment::UnitCanRespawn  (line 1834, @0x0000000002b15f20, libserver.so)
bool __fastcall CDOTA_Unit_Nian_Attachment::UnitCanRespawn(CDOTA_Unit_Nian_Attachment *const this)
{
  return 1;
}


// CDOTA_Modifier_Nian_Attachment::~CDOTA_Modifier_Nian_Attachment  (line 1850, @0x0000000002b1a7f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Nian_Attachment::~CDOTA_Modifier_Nian_Attachment(
        CDOTA_Modifier_Nian_Attachment *const this)
{
  this->_vptr_CDOTA_Buff = &off_4464430;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Nian_Attachment::~CDOTA_Modifier_Nian_Attachment  (line 1850, @0x0000000002b1a810, libserver.so)  // inlines: ~CDOTA_Modifier_Nian_Attachment
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Nian_Attachment::~CDOTA_Modifier_Nian_Attachment(
        CDOTA_Modifier_Nian_Attachment *const this)
{
  this->_vptr_CDOTA_Buff = &off_4464430;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nian_Attachment::IsPurgable  (line 1857, @0x0000000002b15f30, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Attachment::IsPurgable(CDOTA_Modifier_Nian_Attachment *const this)
{
  return 0;
}


// CDOTA_Modifier_Nian_Attachment::OnDestroy  (line 1871, @0x0000000002ae8d30, libserver.so)
// calls: CDOTA_Buff::GetParent
void __fastcall CDOTA_Modifier_Nian_Attachment::OnDestroy(CDOTA_Modifier_Nian_Attachment *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  if ( CDOTA_Buff::GetParent(this) != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    (*(Parent->_vptr_IHandleEntity + 408))(Parent);
  }
}


// CDOTA_Modifier_Nian_Attachment::DeclareFunctions  (line 1881, @0x0000000002ae7e10, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Nian_Attachment::GetMinHealth(CModifierParams const&)
void __fastcall CDOTA_Modifier_Nian_Attachment::DeclareFunctions(CDOTA_Modifier_Nian_Attachment *const this)
{
  this->m_Functions[102].__pfn = CDOTA_Modifier_Nian_Attachment::GetMinHealth;
  this->m_Functions[102].__delta = 0;
}


// CDOTA_Modifier_Nian_Attachment::CheckState  (line 1888, @0x0000000002ae7e30, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Nian_Attachment::CheckState(
        CDOTA_Modifier_Nian_Attachment *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x800400uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFF7FFBFFLL;
}


// CDOTA_Modifier_Nian_Attachment::GetMinHealth  (line 1898, @0x0000000002ae7e50, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Nian_Attachment::GetMinHealth(
        CDOTA_Modifier_Nian_Attachment *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Nian_Attachment::OnIntervalThink  (line 1904, @0x0000000002af7550, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_Unit_Nian_Attachment::Regrow, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Nian_Attachment::OnIntervalThink(CDOTA_Modifier_Nian_Attachment *const this)
{
  CDOTA_Unit_Nian_Attachment *Parent; // rax
  float v3; // xmm1_4

  Parent = CDOTA_Buff::GetParent(this);
  if ( Parent != 0 )
  {
    CDOTA_Unit_Nian_Attachment::Regrow(Parent);
    CDOTA_Buff::StartIntervalThink(this, -1.0, v3);
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Unit_Nian_Attachment::CDOTA_Unit_Nian_Attachment  (line 1927, @0x0000000002af7220, libserver.so)  // inlines: CDOTA_BaseNPC_Additive, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
// callers: CDOTA_Unit_Nian_Attachment::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CDOTA_Unit_Nian_Attachment::CDOTA_Unit_Nian_Attachment(CDOTA_Unit_Nian_Attachment *const this)
{
  CDOTA_BaseNPC::CDOTA_BaseNPC(this);
  this->m_vecRecentDamage.m_Size = 0;
  this->_vptr_IHandleEntity = &off_4464710;
  this->_vptr_INextBotEventResponder = &off_4465670;
  this->_vptr_CObstructionObject = &off_44659A0;
  this->m_vecRecentDamage.m_Memory.m_pMemory = 0;
  this->m_vecRecentDamage.m_Memory.m_nAllocationCount = 0;
  this->m_vecRecentDamage.m_Memory.m_nGrowSize = 0;
  this->m_bAttachmentBroken = 0;
}


// CDOTA_Unit_Nian_Attachment::Spawn  (line 1932, @0x0000000002aeb360, libserver.so)
// calls: CDOTA_BaseNPC::Spawn, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_nian_attachment"
void __fastcall CDOTA_Unit_Nian_Attachment::Spawn(
        CDOTA_Unit_Nian_Attachment *const this,
        const CEntityKeyValues *pKeyValues)
{
  KeyValues kv; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-18h]

  v4 = __readfsqword(0x28u);
  CDOTA_BaseNPC::Spawn(this, pKeyValues);
  this->m_iUnitType |= 0x880u;
  KeyValues::KeyValues(&kv, "modifier_nian_attachment");
  CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_nian_attachment", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Unit_Nian_Attachment::OnTakeDamage  (line 1942, @0x0000000002aeff40, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetParent, GetSerialNumber, IndexToIdentity, Init, LookupEntity, SetBool, String, ToCStr, ToDOTABaseNPC, _V_strstr, strstr
// calls: CBaseEntity::GetHealth, CDOTA_BaseNPC::OnTakeDamage, CBaseEntity::GetModelName, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CBaseAnimating::FindBodygroupByName, CBaseAnimating::SetBodygroup, CGameSceneNode::GetOwnerEntity, CBaseEntity::GetAbsOrigin, CBaseEntity::AddEffects (22 total)
// strings: "nian_tail_death", "attach_hitloc", "nian_tail_remnant", "attach_stump", "modifier_nian_knockdown", "modifier_nian_attachment" (8 total)
int __fastcall CDOTA_Unit_Nian_Attachment::OnTakeDamage(
        CDOTA_Unit_Nian_Attachment *const this,
        const CTakeDamageInfo *const info)
{
  unsigned __int16 v4; // dx
  int v5; // esi
  uint32 v6; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  int Health; // r15d
  int v12; // r14d
  CDOTA_ParticleManager *v13; // rax
  int v14; // r12d
  CDOTA_ParticleManager *v15; // rax
  CDOTA_ParticleManager *v16; // rax
  int BodygroupByName; // eax
  CDOTA_ParticleManager *v18; // rax
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  const CBaseAnimating *v21; // r15
  const Vector *AbsOrigin; // r12
  CGameSceneNode *v23; // rdi
  CDOTA_ParticleManager *v24; // rax
  float v25; // xmm1_4
  CDOTA_Buff *ModifierByName; // rax
  float v27; // xmm1_4
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_ParticleManager *v30; // rax
  CDOTA_ParticleManager *v31; // rax
  int iIndex; // [rsp+Ch] [rbp-64h]
  char *haystack; // [rsp+10h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v35; // [rsp+38h] [rbp-38h]

  v35 = __readfsqword(0x28u);
  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v4 = 0x7FFF;
    v5 = 0x7FFF;
  }
  else
  {
    v4 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v5 = v4;
  }
  v6 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v4 & 0x7FFF;
  LODWORD(haystack) = v6;
  if ( v6 + 2 <= 1 )
    return 0;
  v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
  if ( v7 == 0 )
    return 0;
  v8 = &v7[v5 & 0x1FF];
  if ( v8 == 0 )
    return 0;
  if ( v6 != v8->m_EHandle.m_Index )
    return 0;
  m_pInstance = v8->m_pInstance;
  if ( v8->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC )
    return 0;
  Health = CBaseEntity::GetHealth(this);
  (*(m_pInstance->_vptr_IHandleEntity + 90))(m_pInstance, info);
  v12 = CDOTA_BaseNPC::OnTakeDamage(this, info);
  if ( Health > 1 && CBaseEntity::GetHealth(this) <= 1 && !this->m_bAttachmentBroken )
  {
    CBaseEntity::GetModelName(&haystack, this);
    if ( haystack != 0 && strstr(haystack, "horn") != 0 )
    {
      ParticleManager = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(ParticleManager, "nian_horn_death", 1, this, 0, 0);
      v30 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v30, Particle, 1, this, 5, "attach_horn", vec3_invalid, 1);
      v31 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v31, Particle);
    }
    else
    {
      v13 = GetParticleManager();
      v14 = CDOTA_ParticleManager::CreateParticle(v13, "nian_tail_death", 2, this, 0, 0);
      v15 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v15, v14, 0, this, 5, "attach_hitloc", vec3_invalid, 1);
      v16 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v16, v14);
      BodygroupByName = CBaseAnimating::FindBodygroupByName(m_pInstance, "stump");
      CBaseAnimating::SetBodygroup(m_pInstance, BodygroupByName, 1);
      v18 = GetParticleManager();
      this->m_nfxIndex_tailgrow = CDOTA_ParticleManager::CreateParticle(v18, "nian_tail_remnant", 2, 0, 0, 0);
      m_pParent = this->m_pGameSceneNode->m_pParent;
      OwnerEntity = 0;
      if ( m_pParent != 0 )
        OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
      v21 = 0;
      AbsOrigin = CBaseEntity::GetAbsOrigin(OwnerEntity);
      v23 = this->m_pGameSceneNode->m_pParent;
      if ( v23 != 0 )
        v21 = CGameSceneNode::GetOwnerEntity(v23);
      iIndex = this->m_nfxIndex_tailgrow;
      v24 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v24, iIndex, 1, v21, 5, "attach_stump", *AbsOrigin, 1);
    }
    CBaseEntity::AddEffects(this, 32);
    KeyValues::KeyValues(&kv, "modifier_nian_knockdown");
    KeyValues::SetFloat(&kv, "duration", v25);
    KeyValues::SetInt(&kv, "debuff", 1);
    CDOTA_BaseNPC::AddNewModifier(m_pInstance, m_pInstance, 0, "modifier_nian_knockdown", &kv, 0);
    KeyValues::~KeyValues(&kv);
    this->m_bAttachmentBroken = 1;
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(this, "modifier_nian_attachment", 0);
    CDOTA_Buff::StartIntervalThink(ModifierByName, 25.0, v27);
  }
  return v12;
}


// CDOTA_Unit_Nian_Attachment::Event_Killed  (line 1998, @0x0000000002ae7e70, libserver.so)
void __fastcall CDOTA_Unit_Nian_Attachment::Event_Killed(
        CDOTA_Unit_Nian_Attachment *const this,
        const CTakeDamageInfo *const info)
{
  ;
}


// CDOTA_Unit_Nian_Attachment::Regrow  (line 2003, @0x0000000002af7290, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, MarkPVSInformationDirty, RemoveEffects, String, ToCStr, ToDOTABaseNPC, _V_strstr, strstr
// calls: CBaseEntity::SetLifeState, CDOTA_BaseNPC::ModifyHealth, CBaseEntity::DispatchUpdateTransmitState, CEntityKeyValues::CEntityKeyValues, CDOTA_BaseNPC::DirectRespawn, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CBaseEntity::GetModelName, CBaseAnimating::FindBodygroupByName, CBaseAnimating::SetBodygroup (17 total)
// callers: CDOTA_Modifier_Nian_Attachment::OnIntervalThink, CDOTA_Modifier_Nian_Attachment_Regrow::OnDestroy
// strings: "nian_tail_death", "attach_hitloc"
void __fastcall CDOTA_Unit_Nian_Attachment::Regrow(CDOTA_Unit_Nian_Attachment *const this)
{
  int v2; // eax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  CDOTA_ParticleManager *v5; // rax
  CDOTA_ParticleManager *v6; // rax
  unsigned __int16 v7; // dx
  __int64 v8; // rsi
  uint32 v9; // eax
  CEntitySystem *v10; // rcx
  CEntityIdentity *v11; // rdx
  __int64 v12; // rsi
  CBaseAnimating *m_pInstance; // r13
  int BodygroupByName; // eax
  int m_nfxIndex_tailgrow; // r13d
  CDOTA_ParticleManager *v16; // rax
  float v17; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  int v19; // eax
  char *haystack; // [rsp+10h] [rbp-B0h] BYREF
  CEntityKeyValues emptyKeyValues; // [rsp+20h] [rbp-A0h] BYREF
  unsigned __int64 v22; // [rsp+98h] [rbp-28h]

  v22 = __readfsqword(0x28u);
  CBaseEntity::SetLifeState(this, LifeState_t::LIFE_ALIVE);
  v2 = (*(this->_vptr_IHandleEntity + 156))(this);
  CDOTA_BaseNPC::ModifyHealth(this, v2, 0, 0, 0);
  (*(this->_vptr_IHandleEntity + 188))(this, this->m_fEffects.m_Value & 0xFFFFFFDF);
  this->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  CBaseEntity::DispatchUpdateTransmitState(this);
  this->m_bAttachmentBroken = 0;
  CEntityKeyValues::CEntityKeyValues(&emptyKeyValues);
  CDOTA_BaseNPC::DirectRespawn(this, &emptyKeyValues);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(ParticleManager, "nian_tail_death", 1, this, 0, 0);
  v5 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v5, Particle, 1, this, 5, "attach_hitloc", vec3_invalid, 1);
  v6 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v6, Particle);
  CBaseEntity::GetModelName(&haystack, this);
  if ( haystack == 0 || strstr(haystack, "horn") == 0 )
  {
    if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v7 = 0x7FFF;
      v8 = 0x7FFF;
    }
    else
    {
      v7 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v8 = v7;
    }
    v9 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v7 & 0x7FFF;
    LODWORD(haystack) = v9;
    v10 = g_pEntitySystem;
    v11 = (v9 + 2);
    if ( v11 > 1 )
    {
      v11 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v8 >> 9];
      if ( v11 != 0 )
      {
        v12 = v8 & 0x1FF;
        v10 = (8 * v12);
        v8 = 120 * v12;
        v11 = (v11 + v8);
        if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
        {
          m_pInstance = v11->m_pInstance;
          if ( v11->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
          {
            BodygroupByName = CBaseAnimating::FindBodygroupByName(v11->m_pInstance, "stump");
            CBaseAnimating::SetBodygroup(m_pInstance, BodygroupByName, 0);
            m_nfxIndex_tailgrow = this->m_nfxIndex_tailgrow;
            v16 = GetParticleManager();
            CDOTA_ParticleManager::DestroyParticleEffect(v16, m_nfxIndex_tailgrow, 0);
            this->m_nfxIndex_tailgrow = -1;
          }
        }
      }
    }
  }
  if ( (*(this->_vptr_IHandleEntity + 156))(this, v8, v11, v10) <= 1999999 )
  {
    v17 = (2 * (*(this->_vptr_IHandleEntity + 156))(this));
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    this->m_flBaseMaxHealth = v17;
    v19 = vptr_IHandleEntity[156](this);
    CDOTA_BaseNPC::ModifyHealth(this, v19, 0, 0, 0);
  }
  CEntityKeyValues::~CEntityKeyValues(&emptyKeyValues);
}


// CDOTA_Unit_Nian_Attachment::UpdateOnRemove  (line 2038, @0x0000000002ae8760, libserver.so)
// calls: CDOTA_BaseNPC::UpdateOnRemove
void __fastcall CDOTA_Unit_Nian_Attachment::UpdateOnRemove(CDOTA_Unit_Nian_Attachment *const this)
{
  CDOTA_BaseNPC::UpdateOnRemove(this);
}


// CDOTA_Unit_Nian_Attachment::OnTakeDamage_Alive  (line 2044, @0x0000000002b10d40, libserver.so)  // inlines: AddToTail, CopyConstruct<NianDamageTaken_t>, Element, Get, GetAttacker, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CBaseEntity::GetHealth, CDOTA_BaseNPC::OnTakeDamage_Alive, CBaseAnimating::GetAttachment, CUtlMemory<NianDamageTaken_t, int>::Grow
// strings: "attach_hitloc"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Unit_Nian_Attachment::OnTakeDamage_Alive(
        CDOTA_Unit_Nian_Attachment *const this,
        const CTakeDamageInfo *const info)
{
  int Health; // r13d
  int v5; // r12d
  int v6; // r13d
  uint32 m_Index; // eax
  int v8; // ecx
  CEntityIdentity *v9; // rdx
  __int64 v10; // rsi
  CEntityIdentity *v11; // rdx
  int m_Size; // eax
  NianDamageTaken_t *m_pMemory; // rdx
  NianDamageTaken_t *v14; // rdx
  NianDamageTaken_t *v15; // rsi
  NianDamageTaken_t *v16; // rdi
  __int64 v17; // r13
  int v18; // eax
  NianDamageTaken_t *v19; // rax
  CEntityInstance *m_pInstance; // rdi
  NianDamageTaken_t damageRecord; // [rsp+0h] [rbp-40h] BYREF

  Health = CBaseEntity::GetHealth(this);
  v5 = CDOTA_BaseNPC::OnTakeDamage_Alive(this, info);
  v6 = Health - CBaseEntity::GetHealth(this);
  if ( v6 > 0 )
  {
    m_Index = info->m_hAttacker.m_Index;
    v8 = -1;
    if ( m_Index + 2 > 1 )
    {
      v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F];
      if ( v9 != 0 )
      {
        v10 = info->m_hAttacker.m_Index & 0x1FF;
        v11 = &v9[v10];
        if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index )
        {
          m_pInstance = v11->m_pInstance;
          if ( v11->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            v8 = (*(m_pInstance->_vptr_IHandleEntity + 414))(m_pInstance, v10 * 120, v11, 0xFFFFFFFFLL);
          }
        }
      }
    }
    m_Size = this->m_vecRecentDamage.m_Size;
    if ( m_Size > 0 )
    {
      m_pMemory = this->m_vecRecentDamage.m_Memory.m_pMemory;
      if ( v8 == m_pMemory->nPlayerID )
      {
        v16 = this->m_vecRecentDamage.m_Memory.m_pMemory;
LABEL_17:
        v16->nDamage += v6;
      }
      else
      {
        v14 = m_pMemory + 1;
        v15 = &v14[m_Size - 1];
        while ( v14 != v15 )
        {
          v16 = v14++;
          if ( v8 == v14[-1].nPlayerID )
            goto LABEL_17;
        }
      }
    }
    damageRecord.nDamage = v6;
    damageRecord.nPlayerID = v8;
    CBaseAnimating::GetAttachment(this, "attach_hitloc", &damageRecord.vPos);
    v17 = this->m_vecRecentDamage.m_Size;
    v18 = this->m_vecRecentDamage.m_Size;
    if ( v17 == this->m_vecRecentDamage.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<NianDamageTaken_t,int>::Grow(&this->m_vecRecentDamage.m_Memory, 1);
      v18 = this->m_vecRecentDamage.m_Size;
    }
    this->m_vecRecentDamage.m_Size = v18 + 1;
    v19 = &this->m_vecRecentDamage.m_Memory.m_pMemory[v17];
    if ( v19 != 0 )
      *v19 = damageRecord;
  }
  return v5;
}


// CDOTA_Unit_Nian_Attachment::UnitThink  (line 2082, @0x0000000002affe10, libserver.so)  // inlines: CreateEvent
// calls: CDOTA_BaseNPC::UnitThink, CUtlVectorBase<NianDamageTaken_t, CUtlMemory<NianDamageTaken_t, int> >::RemoveAll
// strings: "nian_damaged", "damage_x", "damage_y", "damage_z"
void __fastcall CDOTA_Unit_Nian_Attachment::UnitThink(CDOTA_Unit_Nian_Attachment *const this)
{
  __int64 v2; // r12
  int v3; // r14d
  __int64 v4; // rax
  __int64 v5; // rbx

  CDOTA_BaseNPC::UnitThink(this);
  if ( this->m_vecRecentDamage.m_Size > 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      v4 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "nian_damaged", 0, 0);
      v5 = v4;
      if ( v4 != 0 )
      {
        (*(*v4 + 112LL))(v4, "damage", this->m_vecRecentDamage.m_Memory.m_pMemory[v2].nDamage);
        (*(*v5 + 112LL))(v5, "player_id", this->m_vecRecentDamage.m_Memory.m_pMemory[v2].nPlayerID);
        (*(*v5 + 112LL))(v5, "damage_x", this->m_vecRecentDamage.m_Memory.m_pMemory[v2].vPos.x);
        (*(*v5 + 112LL))(v5, "damage_y", this->m_vecRecentDamage.m_Memory.m_pMemory[v2].vPos.y);
        (*(*v5 + 112LL))(v5, "damage_z", this->m_vecRecentDamage.m_Memory.m_pMemory[v2].vPos.z);
        (*(*v5 + 112LL))(v5, "attachment", 1);
        (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v5, 0);
      }
      ++v3;
      ++v2;
    }
    while ( this->m_vecRecentDamage.m_Size > v3 );
  }
  CUtlVectorBase<NianDamageTaken_t,CUtlMemory<NianDamageTaken_t,int>>::RemoveAll(&this->m_vecRecentDamage);
}


// CDOTA_Modifier_Nian_Attachment_Regrow::~CDOTA_Modifier_Nian_Attachment_Regrow  (line 2110, @0x0000000002b1b1e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Nian_Attachment_Regrow::~CDOTA_Modifier_Nian_Attachment_Regrow(
        CDOTA_Modifier_Nian_Attachment_Regrow *const this)
{
  this->_vptr_CDOTA_Buff = &off_44659F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Nian_Attachment_Regrow::~CDOTA_Modifier_Nian_Attachment_Regrow  (line 2110, @0x0000000002b1b200, libserver.so)  // inlines: ~CDOTA_Modifier_Nian_Attachment_Regrow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Nian_Attachment_Regrow::~CDOTA_Modifier_Nian_Attachment_Regrow(
        CDOTA_Modifier_Nian_Attachment_Regrow *const this)
{
  this->_vptr_CDOTA_Buff = &off_44659F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nian_Attachment_Regrow::IsDebuff  (line 2114, @0x0000000002b15f40, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Attachment_Regrow::IsDebuff(CDOTA_Modifier_Nian_Attachment_Regrow *const this)
{
  return 0;
}


// CDOTA_Modifier_Nian_Attachment_Regrow::IsHidden  (line 2115, @0x0000000002b15f50, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Attachment_Regrow::IsHidden(CDOTA_Modifier_Nian_Attachment_Regrow *const this)
{
  return 1;
}


// CDOTA_Modifier_Nian_Attachment_Regrow::IsPurgable  (line 2116, @0x0000000002b15f60, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Attachment_Regrow::IsPurgable(CDOTA_Modifier_Nian_Attachment_Regrow *const this)
{
  return 0;
}


// CDOTA_Modifier_Nian_Attachment_Regrow::OnDestroy  (line 2118, @0x0000000002b2bd30, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_Unit_Nian_Attachment::Regrow
void __fastcall CDOTA_Modifier_Nian_Attachment_Regrow::OnDestroy(CDOTA_Modifier_Nian_Attachment_Regrow *const this)
{
  CDOTA_Unit_Nian_Attachment *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  if ( Parent != 0 )
    CDOTA_Unit_Nian_Attachment::Regrow(Parent);
}


// CDOTA_Unit_Nian::Schema_DynamicBinding  (line 2138, @0x0000000002b15f70, libserver.so)
// globals: CDOTA_Unit_Nian::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Nian::Schema_DynamicBinding(const CDOTA_Unit_Nian *const this)
{
  return CDOTA_Unit_Nian::s_pSchemaBinding;
}


// CDOTA_Unit_Nian::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2138, @0x0000000002b15fa0, libserver.so)
// globals: CDOTA_Unit_Nian::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Nian::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Nian::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Nian::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Nian::CEntityInstanceEntityClass::DestructInstance  (line 2138, @0x0000000002b15fb0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Nian>
void __fastcall CDOTA_Unit_Nian::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Nian::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Nian::CEntityInstanceEntityClass::FreeInstance  (line 2138, @0x0000000002b15fd0, libserver.so)
void __fastcall CDOTA_Unit_Nian::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Nian::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Nian::CEntityInstanceEntityClass::CanAllocate  (line 2138, @0x0000000002b15ff0, libserver.so)
bool __fastcall CDOTA_Unit_Nian::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Nian::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Nian::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2138, @0x0000000002b16000, libserver.so)
// globals: CDOTA_Unit_Nian::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Nian::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Nian::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Nian::s_pSchemaBinding;
}


// CDOTA_Unit_Nian::CEntityInstanceEntityClass::AllocateInstance  (line 2138, @0x0000000002b19230, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Nian::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Nian::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4848);
  memset(v1, 0, 0x12F0u);
  return v1;
}


// CDOTA_Unit_Nian::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2138, @0x0000000002b22880, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Nian::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Nian::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Nian::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2138, @0x0000000002b22ab0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Nian::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Nian::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Nian::CEntityInstanceEntityClass::ConstructInstance  (line 2138, @0x0000000002b30f00, libserver.so)  // inlines: Construct<CDOTA_Unit_Nian>
// calls: CDOTA_Unit_Nian::CDOTA_Unit_Nian
CEntityInstance *__fastcall CDOTA_Unit_Nian::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Nian::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CDOTA_Unit_Nian::CDOTA_Unit_Nian(p);
  return p;
}


// CDOTA_Unit_Nian::GetEntityClassInternal  (line 2138, @0x0000000002b33010, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_Unit_Nian>, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CDOTA_BaseNPC_Creep::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "npc_dota_nian", "CDOTA_Unit_Nian", "npc_dota_creature", "CDOTA_BaseNPC_Creature"
// globals: `guard variable for'CDOTA_Unit_Nian::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_NianClass, CDOTA_Unit_Nian::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_NianClass, __dso_handle, CDOTA_Unit_Nian::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Nian::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_NianClassInfo, CDOTA_Unit_Nian::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_NianClassInfo, `guard variable for'CDOTA_BaseNPC_Creature::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreatureClassInfo, CDOTA_BaseNPC_Creature::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreatureClassInfo
CEntityClass *__cdecl CDOTA_Unit_Nian::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Nian::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_NianClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Nian::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_NianClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Nian::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_NianClass);
    CDOTA_Unit_Nian::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_NianClass._vptr_CEntityClass = off_4465D10;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Nian::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_NianClass);
    __cxa_atexit(
      CDOTA_Unit_Nian::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Nian::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_NianClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_NianClass != 0 )
    return &CDOTA_Unit_Nian::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_NianClass;
  if ( `guard variable for'CDOTA_Unit_Nian::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_NianClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Nian::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_NianClassInfo) != 0 )
  {
    if ( `guard variable for'CDOTA_BaseNPC_Creature::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreatureClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Creature::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreatureClassInfo) != 0 )
    {
      EntityClassInfo = CDOTA_BaseNPC_Creep::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CDOTA_BaseNPC_Creature::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreatureClassInfo,
        "CDOTA_BaseNPC_Creature",
        "npc_dota_creature",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Creature::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreatureClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Nian::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_NianClassInfo,
      "CDOTA_Unit_Nian",
      "npc_dota_nian",
      0,
      &CDOTA_BaseNPC_Creature::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreatureClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Nian::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_NianClassInfo);
  }
  CDOTA_Unit_Nian::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_NianClass.m_pClassInfo = &CDOTA_Unit_Nian::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_NianClassInfo;
  CDOTA_Unit_Nian::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_NianClass.m_pBaseClassInfo = CDOTA_Unit_Nian::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_NianClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_NianClass = &CDOTA_Unit_Nian::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_NianClass;
  CDOTA_Unit_Nian::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_NianClassInfo.m_pClass = &CDOTA_Unit_Nian::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_NianClass;
  CDOTA_Unit_Nian::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_NianClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_Unit_Nian>(0);
  g_pEntityCDOTA_Unit_NianClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Nian::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_NianClass;
}


// CDOTA_Unit_Nian::Precache  (line 2152, @0x0000000002b1d6e0, libserver.so)
// calls: CDOTA_BaseNPC_Creature::Precache, PrecacheParticleFolderAndSystems
// strings: "particles/frostivus_gameplay", "particles/econ/generic/generic_aoe_shockwave_1", "particles/units/heroes/hero_jakiro", "particles/units/heroes/hero_clinkz"
void __fastcall CDOTA_Unit_Nian::Precache(CDOTA_Unit_Nian *const this, const CEntityPrecacheContext *pContext)
{
  CDOTA_BaseNPC_Creature::Precache(this, pContext);
  PrecacheParticleFolderAndSystems("particles/frostivus_gameplay", pContext);
  PrecacheParticleFolderAndSystems("particles/econ/generic/generic_aoe_shockwave_1", pContext);
  PrecacheParticleFolderAndSystems("particles/units/heroes/hero_jakiro", pContext);
  PrecacheParticleFolderAndSystems("particles/units/heroes/hero_clinkz", pContext);
}


// CDOTA_Unit_Nian::Script_GetHorn  (line 2182, @0x0000000002b22ae0, libserver.so)  // inlines: EntityToHScript, Get, GetEntityIdentity, GetEntryIndex, GetHorn, GetInstance, GetPublicScriptScope, IndexToIdentity, IsValid, LookupEntity, ToHScript, operator CEntityInstance*
// calls: CEntityInstance::CreatePublicScriptScope
// globals: CEntityHandle::gm_pEntityList
HSCRIPT __fastcall CDOTA_Unit_Nian::Script_GetHorn(CDOTA_Unit_Nian *const this)
{
  uint32 m_Index; // edx
  HSCRIPT result; // rax
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx
  CEntityInstance *m_pInstance; // rbx

  m_Index = this->m_hHorn.m_Index;
  result = 0;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hHorn.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hHorn.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 )
        {
          result = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
          if ( result == 0 )
          {
            CEntityInstance::CreatePublicScriptScope(v4->m_pInstance, 0);
            return m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
          }
        }
      }
    }
  }
  return result;
}


// CDOTA_Unit_Nian::Script_GetTail  (line 2183, @0x0000000002b22b70, libserver.so)  // inlines: EntityToHScript, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetPublicScriptScope, GetTail, IndexToIdentity, IsValid, LookupEntity, ToHScript, operator CEntityInstance*
// calls: CEntityInstance::CreatePublicScriptScope
// globals: CEntityHandle::gm_pEntityList
HSCRIPT __fastcall CDOTA_Unit_Nian::Script_GetTail(CDOTA_Unit_Nian *const this)
{
  uint32 m_Index; // edx
  HSCRIPT result; // rax
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx
  CEntityInstance *m_pInstance; // rbx

  m_Index = this->m_hTail.m_Index;
  result = 0;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTail.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hTail.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 )
        {
          result = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
          if ( result == 0 )
          {
            CEntityInstance::CreatePublicScriptScope(v4->m_pInstance, 0);
            return m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
          }
        }
      }
    }
  }
  return result;
}


// CDOTA_Unit_Nian::YouForgotToImplementOrDeclareServerClass  (line 2200, @0x0000000002ae7e80, libserver.so)
int __fastcall CDOTA_Unit_Nian::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Nian *const this)
{
  return 0;
}


// CDOTA_Unit_Nian::GetServerClass  (line 2200, @0x0000000002af2cf0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Nian::GetServerClass(CDOTA_Unit_Nian *const this)
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


// GetNian  (line 2213, @0x0000000002af75a0, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*
// globals: g_hNian, CEntityHandle::gm_pEntityList
CBaseEntity *__cdecl GetNian()
{
  CBaseEntity *result; // rax
  CEntityIdentity *v1; // rcx
  CEntityIdentity *v2; // rcx

  result = 0;
  if ( g_hNian.m_Index + 2 > 1 )
  {
    v1 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(g_hNian.m_Index) >> 9) & 0x3F];
    if ( v1 != 0 )
    {
      v2 = &v1[g_hNian.m_Index & 0x1FF];
      if ( v2 != 0 && g_hNian.m_Index == v2->m_EHandle.m_Index )
        return v2->m_pInstance;
    }
  }
  return result;
}


// CDOTA_Unit_Nian::CDOTA_Unit_Nian  (line 2218, @0x0000000002affc90, libserver.so)  // inlines: CDOTA_BaseNPC_Creature, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: CDOTA_BaseNPC_Creep::CDOTA_BaseNPC_Creep
// callers: CDOTA_Unit_Nian::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CDOTA_Unit_Nian::CDOTA_Unit_Nian(CDOTA_Unit_Nian *const this)
{
  CDOTA_BaseNPC_Creep::CDOTA_BaseNPC_Creep(this);
  this->m_vCreatureStates.m_Size = 0;
  this->_vptr_IHandleEntity = &off_4465D90;
  this->_vptr_INextBotEventResponder = &off_4466D98;
  this->m_vCreatureStates.m_Memory.m_pMemory = 0;
  this->m_vCreatureStates.m_Memory.m_nAllocationCount = 0;
  this->m_vCreatureStates.m_Memory.m_nGrowSize = 0;
  this->m_vOffensiveAbilities.m_Size = 0;
  this->m_vOffensiveAbilities.m_Memory.m_pMemory = 0;
  this->m_vOffensiveAbilities.m_Memory.m_nAllocationCount = 0;
  this->m_vOffensiveAbilities.m_Memory.m_nGrowSize = 0;
  this->m_vDefensiveAbilities.m_Size = 0;
  this->m_vDefensiveAbilities.m_Memory.m_pMemory = 0;
  this->m_vDefensiveAbilities.m_Memory.m_nAllocationCount = 0;
  this->m_vDefensiveAbilities.m_Memory.m_nGrowSize = 0;
  this->m_vEscapeAbilities.m_Size = 0;
  this->m_vEscapeAbilities.m_Memory.m_pMemory = 0;
  this->m_vEscapeAbilities.m_Memory.m_nAllocationCount = 0;
  this->m_vEscapeAbilities.m_Memory.m_nGrowSize = 0;
  this->m_vItemDropData.m_Size = 0;
  this->m_vItemDropData.m_Memory.m_pMemory = 0;
  this->m_vItemDropData.m_Memory.m_nAllocationCount = 0;
  this->m_vItemDropData.m_Memory.m_nGrowSize = 0;
  this->m_vecAttachWearableItemDefs.m_Size = 0;
  this->m_vecAttachWearableItemDefs.m_Memory.m_pMemory = 0;
  this->m_vecAttachWearableItemDefs.m_Memory.m_nAllocationCount = 0;
  this->m_vecAttachWearableItemDefs.m_Memory.m_nGrowSize = 0;
  this->m_bInitialized = 0;
  this->_vptr_CObstructionObject = &off_44670C8;
  this->m_vecRecentDamage.m_Size = 0;
  this->m_vecRecentDamage.m_Memory.m_pMemory = 0;
  this->m_vecRecentDamage.m_Memory.m_nAllocationCount = 0;
  this->m_vecRecentDamage.m_Memory.m_nGrowSize = 0;
  this->m_hTail.m_Index = -1;
  this->m_hHorn.m_Index = -1;
  this->m_bTrackDamageTaken = 1;
}


// CDOTA_Unit_Nian::~CDOTA_Unit_Nian  (line 2223, @0x0000000002b000b0, libserver.so)  // inlines: Purge, RemoveAll, Set, operator=, ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creature, ~CDOTA_BaseNPC_Creep, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<NianDamageTaken_t, CUtlMemory<NianDamageTaken_t, int> >::RemoveAll, CDOTA_BaseNPC::~CDOTA_BaseNPC, CUtlMemory<NianDamageTaken_t, int>::Purge, CUtlMemory<CreatureAbilityData_t, int>::Purge, CUtlMemory<CreatureStateData_t, int>::Purge, CUtlMemory<ItemDropData_t, int>::Purge, CUtlMemory<item_definition_index_t, int>::Purge
// callers: CDOTA_Unit_Nian::~CDOTA_Unit_Nian
// globals: g_hNian
void __fastcall CDOTA_Unit_Nian::~CDOTA_Unit_Nian(CDOTA_Unit_Nian *const this)
{
  bool v2; // zf

  this->_vptr_IHandleEntity = &off_4465D90;
  this->_vptr_INextBotEventResponder = &off_4466D98;
  this->_vptr_CObstructionObject = &off_44670C8;
  g_hNian.m_Index = -1;
  CUtlVectorBase<NianDamageTaken_t,CUtlMemory<NianDamageTaken_t,int>>::RemoveAll(&this->m_vecRecentDamage);
  if ( (this->m_vecRecentDamage.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<NianDamageTaken_t,int>::Purge(&this->m_vecRecentDamage.m_Memory);
    if ( (this->m_vecRecentDamage.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<NianDamageTaken_t,int>::Purge(&this->m_vecRecentDamage.m_Memory);
  }
  this->m_vecAttachWearableItemDefs.m_Size = 0;
  this->_vptr_IHandleEntity = &off_42EB950;
  v2 = (this->m_vecAttachWearableItemDefs.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_INextBotEventResponder = &off_42EC958;
  this->_vptr_CObstructionObject = &off_42ECC88;
  if ( v2 )
  {
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecAttachWearableItemDefs.m_Memory);
    if ( (this->m_vecAttachWearableItemDefs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecAttachWearableItemDefs.m_Memory);
  }
  v2 = (this->m_vItemDropData.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vItemDropData.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<ItemDropData_t,int>::Purge(&this->m_vItemDropData.m_Memory);
    if ( (this->m_vItemDropData.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<ItemDropData_t,int>::Purge(&this->m_vItemDropData.m_Memory);
  }
  v2 = (this->m_vEscapeAbilities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vEscapeAbilities.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CreatureAbilityData_t,int>::Purge(&this->m_vEscapeAbilities.m_Memory);
    if ( (this->m_vEscapeAbilities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CreatureAbilityData_t,int>::Purge(&this->m_vEscapeAbilities.m_Memory);
  }
  v2 = (this->m_vDefensiveAbilities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vDefensiveAbilities.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CreatureAbilityData_t,int>::Purge(&this->m_vDefensiveAbilities.m_Memory);
    if ( (this->m_vDefensiveAbilities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CreatureAbilityData_t,int>::Purge(&this->m_vDefensiveAbilities.m_Memory);
  }
  v2 = (this->m_vOffensiveAbilities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vOffensiveAbilities.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CreatureAbilityData_t,int>::Purge(&this->m_vOffensiveAbilities.m_Memory);
    if ( (this->m_vOffensiveAbilities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CreatureAbilityData_t,int>::Purge(&this->m_vOffensiveAbilities.m_Memory);
  }
  v2 = (this->m_vCreatureStates.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vCreatureStates.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CreatureStateData_t,int>::Purge(&this->m_vCreatureStates.m_Memory);
    if ( (this->m_vCreatureStates.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CreatureStateData_t,int>::Purge(&this->m_vCreatureStates.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_Unit_Nian::~CDOTA_Unit_Nian  (line 2223, @0x0000000002b00360, libserver.so)
// calls: CDOTA_Unit_Nian::~CDOTA_Unit_Nian, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Nian::~CDOTA_Unit_Nian(CDOTA_Unit_Nian *const this)
{
  CDOTA_Unit_Nian::~CDOTA_Unit_Nian(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Nian::Spawn  (line 2228, @0x0000000002aeb650, libserver.so)  // inlines: CUtlSymbolLarge, GetEHandle, GetEntryIndex, GetSerialNumber, GetTeamNumber, Set, SetBool, SetEntityName, operator=
// calls: AllocPooledString, CEntityIdentity::SetEntityName, CDOTA_BaseNPC_Creature::Spawn, CBaseAnimating::FindBodygroupByName, CBaseAnimating::SetBodygroup, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CBaseEntity::GetAbsOrigin, DOTA_Character_ScriptSpawn_Synchronous, KeyValues::SetPtr, KeyValues::SetFloat (15 total)
// strings: "npc_dota_nian", "modifier_nian_intrinsic", "npc_dota_nian_horn", "modifier_attached_unit", "npc_dota_nian_tail"
// globals: g_hNian
void __fastcall CDOTA_Unit_Nian::Spawn(CDOTA_Unit_Nian *const this, const CEntityKeyValues *pKeyValues)
{
  CEntityIdentity *m_pEntity; // rdi
  CEntityIdentity *v5; // rax
  int v6; // edx
  __int16 v7; // cx
  int BodygroupByName; // eax
  int m_Value; // r13d
  CDOTA_BaseNPC *v10; // r13
  float v11; // xmm1_4
  float v12; // xmm1_4
  CEntityIdentity *v13; // rdx
  int v14; // eax
  __int16 v15; // cx
  int v16; // r13d
  CDOTA_BaseNPC *v17; // r13
  float v18; // xmm1_4
  float v19; // xmm1_4
  CEntityIdentity *v20; // rdx
  int v21; // eax
  __int16 v22; // cx
  UtlSymLargeId_t v23[2]; // [rsp+0h] [rbp-60h] BYREF
  string_t name; // [rsp+10h] [rbp-50h] BYREF
  KeyValues kv; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-28h]
  Vector v27; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v28; // 0:xmm0_8.8,8:xmm1_4.4

  v26 = __readfsqword(0x28u);
  AllocPooledString(v23, "npc_dota_nian");
  m_pEntity = this->m_pEntity;
  name.u.m_Id = v23[0];
  CEntityIdentity::SetEntityName(m_pEntity, &name);
  CDOTA_BaseNPC_Creature::Spawn(this, pKeyValues);
  v5 = this->m_pEntity;
  if ( v5 != 0 )
  {
    v6 = (v5->m_EHandle.m_Index >> 15) - (v5->m_flags & 1);
    v7 = 0x7FFF;
    if ( v5->m_EHandle.m_Index != -1 )
      v7 = v5->m_EHandle.m_Index & 0x7FFF;
    LOWORD(g_hNian.m_Index) = v7 | g_hNian.m_Index & 0x8000;
    g_hNian.m_Index = (v6 << 15) | g_hNian.m_Index & 0x7FFF;
  }
  else
  {
    g_hNian.m_Index = -1;
  }
  BodygroupByName = CBaseAnimating::FindBodygroupByName(this, "stump");
  CBaseAnimating::SetBodygroup(this, BodygroupByName, 0);
  this->m_iUnitType |= 0x880u;
  KeyValues::KeyValues(&kv, "modifier_nian_intrinsic");
  CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_nian_intrinsic", &kv, 0);
  KeyValues::~KeyValues(&kv);
  m_Value = this->m_iTeamNum.m_Value;
  v27 = *CBaseEntity::GetAbsOrigin(this);
  v10 = DOTA_Character_ScriptSpawn_Synchronous("npc_dota_nian_horn", m_Value, this, 0, 0, v27);
  if ( v10 != 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_attached_unit");
    KeyValues::SetPtr(&kv, "target", this);
    KeyValues::SetFloat(&kv, "duration", v11);
    KeyValues::SetFloat(&kv, "offset_x", v12);
    CDOTA_BaseNPC::AddNewModifier(v10, this, 0, "modifier_attached_unit", &kv, 0);
    v13 = v10->m_pEntity;
    if ( v13 != 0 )
    {
      v14 = (v13->m_EHandle.m_Index >> 15) - (v13->m_flags & 1);
      v15 = 0x7FFF;
      if ( v13->m_EHandle.m_Index != -1 )
        v15 = v13->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hHorn.m_Index) = v15 | this->m_hHorn.m_Index & 0x8000;
      this->m_hHorn.m_Index = (v14 << 15) | this->m_hHorn.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hHorn.m_Index = -1;
    }
    KeyValues::~KeyValues(&kv);
  }
  v16 = this->m_iTeamNum.m_Value;
  v28 = *CBaseEntity::GetAbsOrigin(this);
  v17 = DOTA_Character_ScriptSpawn_Synchronous("npc_dota_nian_tail", v16, this, 0, 0, v28);
  if ( v17 != 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_attached_unit");
    KeyValues::SetPtr(&kv, "target", this);
    KeyValues::SetFloat(&kv, "duration", v18);
    KeyValues::SetFloat(&kv, "offset_x", v19);
    KeyValues::SetInt(&kv, "MagicImmune", 1);
    CDOTA_BaseNPC::AddNewModifier(v17, this, 0, "modifier_attached_unit", &kv, 0);
    v20 = v17->m_pEntity;
    if ( v20 != 0 )
    {
      v21 = (v20->m_EHandle.m_Index >> 15) - (v20->m_flags & 1);
      v22 = 0x7FFF;
      if ( v20->m_EHandle.m_Index != -1 )
        v22 = v20->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hTail.m_Index) = v22 | this->m_hTail.m_Index & 0x8000;
      this->m_hTail.m_Index = (v21 << 15) | this->m_hTail.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hTail.m_Index = -1;
    }
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Unit_Nian::GainedModifier  (line 2272, @0x0000000002aeb9e0, libserver.so)  // inlines: FStrEq, _V_strcmp
// calls: CDOTA_BaseNPC_Creature::GainedModifier, CDOTA_Buff::GetName, CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::FindAbilityByName, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_firecracker_debuff", "modifier_nian_big_flinch"
void __fastcall CDOTA_Unit_Nian::GainedModifier(CDOTA_Unit_Nian *const this, CDOTA_Buff *pBuff)
{
  char *Name; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float v6; // xmm1_4
  KeyValues kv; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-18h]

  v8 = __readfsqword(0x28u);
  CDOTA_BaseNPC_Creature::GainedModifier(this, pBuff);
  Name = CDOTA_Buff::GetName(pBuff);
  if ( (Name == "modifier_firecracker_debuff" || strcmp(Name, "modifier_firecracker_debuff") == 0)
    && CDOTA_BaseNPC::FindModifierByName(this, "modifier_nian_big_flinch", 0) == 0 )
  {
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "nian_charge", 0);
    if ( AbilityByName != 0 && BYTE6(AbilityByName[1].m_pEntity) != 0 )
    {
      KeyValues::KeyValues(&kv, "modifier_nian_big_flinch");
      KeyValues::SetFloat(&kv, "duration", v6);
      CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_nian_big_flinch", &kv, 0);
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Unit_Nian::OnTakeDamage_Alive  (line 2289, @0x0000000002b10ba0, libserver.so)  // inlines: AddToTail, CopyConstruct<NianDamageTaken_t>, Element, Get, GetAttacker, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CBaseEntity::GetHealth, CDOTA_BaseNPC_Creature::OnTakeDamage_Alive, CBaseAnimating::GetAttachment, CUtlMemory<NianDamageTaken_t, int>::Grow
// strings: "attach_hitloc"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Unit_Nian::OnTakeDamage_Alive(CDOTA_Unit_Nian *const this, const CTakeDamageInfo *const info)
{
  int Health; // r13d
  int v5; // r12d
  int v6; // r13d
  uint32 m_Index; // eax
  int v8; // ecx
  CEntityIdentity *v9; // rdx
  __int64 v10; // rsi
  CEntityIdentity *v11; // rdx
  int m_Size; // eax
  NianDamageTaken_t *m_pMemory; // rdx
  NianDamageTaken_t *v14; // rdx
  NianDamageTaken_t *v15; // rsi
  NianDamageTaken_t *v16; // rdi
  __int64 v17; // r13
  int v18; // eax
  NianDamageTaken_t *v19; // rax
  CEntityInstance *m_pInstance; // rdi
  NianDamageTaken_t damageRecord; // [rsp+0h] [rbp-40h] BYREF

  Health = CBaseEntity::GetHealth(this);
  v5 = CDOTA_BaseNPC_Creature::OnTakeDamage_Alive(this, info);
  v6 = Health - CBaseEntity::GetHealth(this);
  if ( v6 > 0 )
  {
    m_Index = info->m_hAttacker.m_Index;
    v8 = -1;
    if ( m_Index + 2 > 1 )
    {
      v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F];
      if ( v9 != 0 )
      {
        v10 = info->m_hAttacker.m_Index & 0x1FF;
        v11 = &v9[v10];
        if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index )
        {
          m_pInstance = v11->m_pInstance;
          if ( v11->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            v8 = (*(m_pInstance->_vptr_IHandleEntity + 414))(m_pInstance, v10 * 120, v11, 0xFFFFFFFFLL);
          }
        }
      }
    }
    m_Size = this->m_vecRecentDamage.m_Size;
    if ( m_Size > 0 )
    {
      m_pMemory = this->m_vecRecentDamage.m_Memory.m_pMemory;
      if ( v8 == m_pMemory->nPlayerID )
      {
        v16 = this->m_vecRecentDamage.m_Memory.m_pMemory;
LABEL_17:
        v16->nDamage += v6;
      }
      else
      {
        v14 = m_pMemory + 1;
        v15 = &v14[m_Size - 1];
        while ( v14 != v15 )
        {
          v16 = v14++;
          if ( v8 == v14[-1].nPlayerID )
            goto LABEL_17;
        }
      }
    }
    damageRecord.nDamage = v6;
    damageRecord.nPlayerID = v8;
    CBaseAnimating::GetAttachment(this, "attach_hitloc", &damageRecord.vPos);
    v17 = this->m_vecRecentDamage.m_Size;
    v18 = this->m_vecRecentDamage.m_Size;
    if ( v17 == this->m_vecRecentDamage.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<NianDamageTaken_t,int>::Grow(&this->m_vecRecentDamage.m_Memory, 1);
      v18 = this->m_vecRecentDamage.m_Size;
    }
    this->m_vecRecentDamage.m_Size = v18 + 1;
    v19 = &this->m_vecRecentDamage.m_Memory.m_pMemory[v17];
    if ( v19 != 0 )
      *v19 = damageRecord;
  }
  return v5;
}


// CDOTA_Unit_Nian::UnitThink  (line 2327, @0x0000000002afff60, libserver.so)  // inlines: CreateEvent
// calls: CDOTA_BaseNPC::UnitThink, CUtlVectorBase<NianDamageTaken_t, CUtlMemory<NianDamageTaken_t, int> >::RemoveAll
// strings: "nian_damaged", "damage_x", "damage_y", "damage_z"
void __fastcall CDOTA_Unit_Nian::UnitThink(CDOTA_Unit_Nian *const this)
{
  __int64 v2; // r12
  int v3; // r14d
  __int64 v4; // rax
  __int64 v5; // rbx

  CDOTA_BaseNPC::UnitThink(this);
  if ( this->m_vecRecentDamage.m_Size > 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      v4 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "nian_damaged", 0, 0);
      v5 = v4;
      if ( v4 != 0 )
      {
        (*(*v4 + 112LL))(v4, "damage", this->m_vecRecentDamage.m_Memory.m_pMemory[v2].nDamage);
        (*(*v5 + 112LL))(v5, "player_id", this->m_vecRecentDamage.m_Memory.m_pMemory[v2].nPlayerID);
        (*(*v5 + 112LL))(v5, "damage_x", this->m_vecRecentDamage.m_Memory.m_pMemory[v2].vPos.x);
        (*(*v5 + 112LL))(v5, "damage_y", this->m_vecRecentDamage.m_Memory.m_pMemory[v2].vPos.y);
        (*(*v5 + 112LL))(v5, "damage_z", this->m_vecRecentDamage.m_Memory.m_pMemory[v2].vPos.z);
        (*(*v5 + 112LL))(v5, "attachment", 0);
        (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v5, 0);
      }
      ++v3;
      ++v2;
    }
    while ( this->m_vecRecentDamage.m_Size > v3 );
  }
  CUtlVectorBase<NianDamageTaken_t,CUtlMemory<NianDamageTaken_t,int>>::RemoveAll(&this->m_vecRecentDamage);
}


// CDOTA_Unit_Nian::IsHornAlive  (line 2349, @0x0000000002af0610, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Unit_Nian::IsHornAlive(CDOTA_Unit_Nian *const this)
{
  bool result; // al
  uint32 m_Index; // edx
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx

  result = 0;
  m_Index = this->m_hHorn.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hHorn.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hHorn.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index && v4->m_pInstance != 0 )
        return LOBYTE(v4->m_pInstance[93].m_CScriptComponent) ^ 1;
    }
  }
  return result;
}


// CDOTA_Unit_Nian::IsTailAlive  (line 2354, @0x0000000002af0680, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Unit_Nian::IsTailAlive(CDOTA_Unit_Nian *const this)
{
  bool result; // al
  uint32 m_Index; // edx
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx

  result = 0;
  m_Index = this->m_hTail.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTail.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hTail.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index && v4->m_pInstance != 0 )
        return LOBYTE(v4->m_pInstance[93].m_CScriptComponent) ^ 1;
    }
  }
  return result;
}


// CDOTA_Modifier_Nian_Waiting::~CDOTA_Modifier_Nian_Waiting  (line 2363, @0x0000000002b1a7a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Nian_Waiting::~CDOTA_Modifier_Nian_Waiting(CDOTA_Modifier_Nian_Waiting *const this)
{
  this->_vptr_CDOTA_Buff = &off_4467170;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Nian_Waiting::~CDOTA_Modifier_Nian_Waiting  (line 2363, @0x0000000002b1a7c0, libserver.so)  // inlines: ~CDOTA_Modifier_Nian_Waiting
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Nian_Waiting::~CDOTA_Modifier_Nian_Waiting(CDOTA_Modifier_Nian_Waiting *const this)
{
  this->_vptr_CDOTA_Buff = &off_4467170;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nian_Waiting::IsHidden  (line 2369, @0x0000000002b16010, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Waiting::IsHidden(CDOTA_Modifier_Nian_Waiting *const this)
{
  return 0;
}


// CDOTA_Modifier_Nian_Waiting::IsPurgable  (line 2372, @0x0000000002b16020, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Waiting::IsPurgable(CDOTA_Modifier_Nian_Waiting *const this)
{
  return 0;
}


// CDOTA_Modifier_Nian_Waiting::GetDisableAutoAttack  (line 2375, @0x0000000002b16030, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Nian_Waiting::GetDisableAutoAttack(
        CDOTA_Modifier_Nian_Waiting *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Nian_Waiting::DeclareFunctions  (line 2380, @0x0000000002ae7e90, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Nian_Waiting::DeclareFunctions(CDOTA_Modifier_Nian_Waiting *const this)
{
  this->m_Functions[134].__pfn = (&stru_10 + 697);
  this->m_Functions[134].__delta = 0;
  this->m_Functions[95].__pfn = (&stru_10 + 705);
  this->m_Functions[95].__delta = 0;
}


// CDOTA_Modifier_Nian_Waiting::OnTakeDamage  (line 2386, @0x0000000002af09a0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Nian_Waiting::OnTakeDamage(
        CDOTA_Modifier_Nian_Waiting *const this,
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
  if ( v4->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC || CDOTA_Buff::GetParent(this) != m_pInstance )
    return 1uLL;
  CDOTA_Buff::Destroy(this, 0, 0, 0);
  return 1uLL;
}


// CDOTA_Modifier_Nian_Waiting::OnCreated  (line 2395, @0x0000000002ae8fb0, libserver.so)
// calls: CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Nian_Waiting::OnCreated(CDOTA_Modifier_Nian_Waiting *const this, KeyValues *pKV)
{
  float v2; // xmm1_4

  CDOTA_Buff::StartIntervalThink(this, 1.0, v2);
}


// CDOTA_Modifier_Nian_Waiting::OnIntervalThink  (line 2400, @0x0000000002affae0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Purge, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_Buff::Destroy, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Nian_Waiting::OnIntervalThink(CDOTA_Modifier_Nian_Waiting *const this)
{
  float v1; // xmm1_4
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v6; // rax
  __int64 v7; // r12
  int v8; // ebx
  CHandle<CBaseEntity> *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CEntityInstance *m_pInstance; // rdi
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+20h] [rbp-40h] BYREF

  CDOTA_Buff::StartIntervalThink(this, 1.0, v1);
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  Parent = CDOTA_Buff::GetParent(this);
  v4 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
  v6 = CDOTA_Buff::GetParent(this);
  FindUnitsInRadius(v6->m_iTeamNum.m_Value, AbsOrigin, Parent, 800.0, &entities, 2, 3, 0, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      v9 = &entities.m_Memory.m_pMemory[v7];
      m_Index = entities.m_Memory.m_pMemory[v7].m_Index;
      if ( m_Index + 2 > 1 )
      {
        v11 = v9->m_Index;
        v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_Index) >> 9) & 0x3F];
        if ( v12 != 0 )
        {
          v13 = &v12[v11 & 0x1FF];
          if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
          {
            m_pInstance = v13->m_pInstance;
            if ( v13->m_pInstance != 0
              && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) != 0 )
            {
              break;
            }
          }
        }
      }
      ++v8;
      ++v7;
      if ( entities.m_Size <= v8 )
        goto LABEL_12;
    }
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
LABEL_12:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
  if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
  }
}


// CDOTA_Ability_Animation_TailSpin::~CDOTA_Ability_Animation_TailSpin  (line 2427, @0x0000000002b1c4b0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Animation_TailSpin::~CDOTA_Ability_Animation_TailSpin(
        CDOTA_Ability_Animation_TailSpin *const this)
{
  this->_vptr_IHandleEntity = &off_44674F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Animation_TailSpin::~CDOTA_Ability_Animation_TailSpin  (line 2427, @0x0000000002b1c4d0, libserver.so)  // inlines: ~CDOTA_Ability_Animation_TailSpin
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Animation_TailSpin::~CDOTA_Ability_Animation_TailSpin(
        CDOTA_Ability_Animation_TailSpin *const this)
{
  this->_vptr_IHandleEntity = &off_44674F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Animation_TailSpin::Schema_DynamicBinding  (line 2429, @0x0000000002b16050, libserver.so)
// globals: CDOTA_Ability_Animation_TailSpin::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Animation_TailSpin::Schema_DynamicBinding(
        const CDOTA_Ability_Animation_TailSpin *const this)
{
  return CDOTA_Ability_Animation_TailSpin::s_pSchemaBinding;
}


// CDOTA_Ability_Animation_TailSpin::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2429, @0x0000000002b16060, libserver.so)
// globals: CDOTA_Ability_Animation_TailSpin::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Animation_TailSpin::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Animation_TailSpin::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Animation_TailSpin::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Animation_TailSpin::CEntityInstanceEntityClass::DestructInstance  (line 2429, @0x0000000002b16070, libserver.so)  // inlines: Destruct<CDOTA_Ability_Animation_TailSpin>
void __fastcall CDOTA_Ability_Animation_TailSpin::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Animation_TailSpin::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Animation_TailSpin::CEntityInstanceEntityClass::FreeInstance  (line 2429, @0x0000000002b16090, libserver.so)
void __fastcall CDOTA_Ability_Animation_TailSpin::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Animation_TailSpin::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Animation_TailSpin::CEntityInstanceEntityClass::CanAllocate  (line 2429, @0x0000000002b160b0, libserver.so)
bool __fastcall CDOTA_Ability_Animation_TailSpin::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Animation_TailSpin::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Animation_TailSpin::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2429, @0x0000000002b160c0, libserver.so)
// globals: CDOTA_Ability_Animation_TailSpin::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Animation_TailSpin::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Animation_TailSpin::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Animation_TailSpin::s_pSchemaBinding;
}


// CDOTA_Ability_Animation_TailSpin::CEntityInstanceEntityClass::AllocateInstance  (line 2429, @0x0000000002b19270, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Animation_TailSpin::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Animation_TailSpin::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Animation_TailSpin::CEntityInstanceEntityClass::ConstructInstance  (line 2429, @0x0000000002b1b860, libserver.so)  // inlines: CDOTA_Ability_Animation_TailSpin, Construct<CDOTA_Ability_Animation_TailSpin>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Animation_TailSpin::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Animation_TailSpin::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = 1065353216;
    *p = &off_44674F0;
  }
  return p;
}


// CDOTA_Ability_Animation_TailSpin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2429, @0x0000000002b222c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Animation_TailSpin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Animation_TailSpin::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Animation_TailSpin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2429, @0x0000000002b222e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Animation_TailSpin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Animation_TailSpin::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Animation_TailSpin::GetEntityClassInternal  (line 2429, @0x0000000002b32ec0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_Ability_Animation_TailSpin>, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "CDOTA_Ability_Animation_TailSpin"
// globals: `guard variable for'CDOTA_Ability_Animation_TailSpin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_TailSpinClass, CDOTA_Ability_Animation_TailSpin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_TailSpinClass, __dso_handle, CDOTA_Ability_Animation_TailSpin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Animation_TailSpin::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_TailSpinClassInfo, CDOTA_Ability_Animation_TailSpin::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_TailSpinClassInfo
CEntityClass *__cdecl CDOTA_Ability_Animation_TailSpin::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Animation_TailSpin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_TailSpinClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Animation_TailSpin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_TailSpinClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Animation_TailSpin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_TailSpinClass);
    CDOTA_Ability_Animation_TailSpin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_TailSpinClass._vptr_CEntityClass = off_4467470;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Animation_TailSpin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_TailSpinClass);
    __cxa_atexit(
      CDOTA_Ability_Animation_TailSpin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Animation_TailSpin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_TailSpinClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Animation_TailSpinClass != 0 )
    return &CDOTA_Ability_Animation_TailSpin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_TailSpinClass;
  if ( `guard variable for'CDOTA_Ability_Animation_TailSpin::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_TailSpinClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Animation_TailSpin::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_TailSpinClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Animation_TailSpin::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_TailSpinClassInfo,
      "CDOTA_Ability_Animation_TailSpin",
      "animated_tail_spin",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Animation_TailSpin::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_TailSpinClassInfo);
  }
  CDOTA_Ability_Animation_TailSpin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_TailSpinClass.m_pClassInfo = &CDOTA_Ability_Animation_TailSpin::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_TailSpinClassInfo;
  CDOTA_Ability_Animation_TailSpin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_TailSpinClass.m_pBaseClassInfo = CDOTA_Ability_Animation_TailSpin::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_TailSpinClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Animation_TailSpinClass = &CDOTA_Ability_Animation_TailSpin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_TailSpinClass;
  CDOTA_Ability_Animation_TailSpin::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Animation_TailSpinClassInfo.m_pClass = &CDOTA_Ability_Animation_TailSpin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_TailSpinClass;
  CDOTA_Ability_Animation_TailSpin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_TailSpinClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_Ability_Animation_TailSpin>(0);
  g_pEntityCDOTA_Ability_Animation_TailSpinClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Animation_TailSpin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Animation_TailSpinClass;
}


// CDOTA_Ability_Animation_TailSpin::GetPlaybackRateOverride  (line 2437, @0x0000000002b160d0, libserver.so)
float __fastcall CDOTA_Ability_Animation_TailSpin::GetPlaybackRateOverride(
        CDOTA_Ability_Animation_TailSpin *const this)
{
  return this->m_flPlaybackRate;
}


// CDOTA_Ability_Animation_TailSpin::SetPlaybackRate  (line 2438, @0x0000000002b160e0, libserver.so)
void __fastcall CDOTA_Ability_Animation_TailSpin::SetPlaybackRate(
        CDOTA_Ability_Animation_TailSpin *const this,
        float a2,
        float flRate)
{
  this->m_flPlaybackRate = a2;
}


// CDOTA_Ability_Animation_TailSpin::OnAbilityPhaseStart  (line 2459, @0x0000000002b02eb0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "animation_time", "modifier_animated_tail_spin", "playback_rate", "Nian.Tail.PreAttack"
bool __fastcall CDOTA_Ability_Animation_TailSpin::OnAbilityPhaseStart(CDOTA_Ability_Animation_TailSpin *const this)
{
  float v2; // xmm1_4
  float v3; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  this->animation_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "animation_time", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_animated_tail_spin");
  KeyValues::SetFloat(&kv, "duration", v2);
  KeyValues::SetFloat(&kv, "playback_rate", v3);
  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v5, Caster, this, "modifier_animated_tail_spin", &kv, 0);
  v6 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v6, "Nian.Tail.PreAttack", 0.0, 0, 0);
  KeyValues::~KeyValues(&kv);
  return 1;
}


// CDOTA_Modifier_Animation_TailSpin::~CDOTA_Modifier_Animation_TailSpin  (line 2478, @0x0000000002b30370, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Animation_TailSpin::~CDOTA_Modifier_Animation_TailSpin(
        CDOTA_Modifier_Animation_TailSpin *const this)
{
  this->_vptr_CDOTA_Buff = &off_4467FB0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_vHitEntities);
  if ( (this->m_vHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vHitEntities.m_Memory),
        (this->m_vHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vHitEntities.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Animation_TailSpin::~CDOTA_Modifier_Animation_TailSpin  (line 2478, @0x0000000002b30920, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_Animation_TailSpin, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Animation_TailSpin::~CDOTA_Modifier_Animation_TailSpin(
        CDOTA_Modifier_Animation_TailSpin *const this)
{
  this->_vptr_CDOTA_Buff = &off_4467FB0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_vHitEntities);
  if ( (this->m_vHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vHitEntities.m_Memory);
    if ( (this->m_vHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vHitEntities.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Animation_TailSpin::IsHidden  (line 2486, @0x0000000002b160f0, libserver.so)
bool __fastcall CDOTA_Modifier_Animation_TailSpin::IsHidden(CDOTA_Modifier_Animation_TailSpin *const this)
{
  return 1;
}


// CDOTA_Modifier_Animation_TailSpin::IsPurgable  (line 2487, @0x0000000002b16100, libserver.so)
bool __fastcall CDOTA_Modifier_Animation_TailSpin::IsPurgable(CDOTA_Modifier_Animation_TailSpin *const this)
{
  return 0;
}


// CDOTA_Modifier_Animation_TailSpin::OnCreated  (line 2502, @0x0000000002b0ab80, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::GetFloat, CDOTA_Buff::StartIntervalThink
// strings: "playback_rate"
void __fastcall CDOTA_Modifier_Animation_TailSpin::OnCreated(
        CDOTA_Modifier_Animation_TailSpin *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  float v6; // xmm1_4
  float Float; // xmm0_4
  double v8; // xmm1_8
  float v9; // xmm0_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->damage = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_3;
LABEL_6:
    this->damage_radius = 0;
    goto LABEL_4;
  }
  this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_6;
LABEL_3:
  this->damage_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "damage_radius", -1, 0);
LABEL_4:
  Float = KeyValues::GetFloat(pKV, "playback_rate", v6);
  this->m_flPlaybackRate = Float;
  v8 = Float;
  v9 = 1.4 / Float;
  CDOTA_Buff::StartIntervalThink(this, v9, *&v8);
}


// CDOTA_Modifier_Animation_TailSpin::OnIntervalThink  (line 2527, @0x0000000002b0e2b0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTail, GetTeamNumber, GrowMemory, HasElement, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetCaster, CEntityHandle::operator CEntityInstance*, CDOTA_Buff::StartIntervalThink, CBaseAnimating::GetAttachment, CDOTA_Buff::GetParent, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CDOTA_Buff::GetAbility, ApplyDamage, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, KeyValues::KeyValues (21 total)
// strings: "attach_tail1", "attach_tail2", "attach_tail3", "attach_tail4", "attach_tail5", "modifier_knockback" (10 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Animation_TailSpin::OnIntervalThink(CDOTA_Modifier_Animation_TailSpin *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  const CBaseAnimating *v3; // rbx
  float v4; // xmm1_4
  vec_t z; // r13d
  __int64 v6; // r15
  __m128i v7; // xmm2
  float v8; // ebx
  CDOTA_BaseNPC *Parent; // r15
  CDOTA_BaseNPC *v10; // rax
  __m128i v11; // xmm3
  float v12; // ebx
  CDOTA_BaseNPC *v13; // r14
  CDOTA_BaseNPC *v14; // rax
  __m128i v15; // xmm4
  float v16; // ebx
  CDOTA_BaseNPC *v17; // r14
  CDOTA_BaseNPC *v18; // rax
  __m128i v19; // xmm5
  float v20; // ebx
  CDOTA_BaseNPC *v21; // r14
  CDOTA_BaseNPC *v22; // rax
  __m128i v23; // xmm6
  CDOTA_BaseNPC *v24; // rbx
  CDOTA_BaseNPC *v25; // rax
  __int64 v26; // rbx
  CHandle<CBaseEntity> *v27; // rsi
  CEntityIdentity *v28; // rdx
  CEntityIdentity *v29; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *v32; // rax
  CDOTABaseAbility *v33; // rax
  CDOTABaseAbility *v34; // rax
  CDOTA_BaseNPC *v35; // rax
  float v36; // xmm1_4
  CDOTA_BaseNPC *v37; // rax
  float v38; // xmm1_4
  CDOTA_BaseNPC *v39; // rax
  float v40; // xmm1_4
  float v41; // xmm1_4
  float v42; // xmm1_4
  float v43; // xmm1_4
  CDOTA_BaseNPC *v44; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v46; // cx
  __int64 m_Size; // r15
  int v48; // eax
  CHandle<CBaseEntity> *v49; // rax
  float vPosition; // [rsp+38h] [rbp-D8h]
  int v51; // [rsp+40h] [rbp-D0h]
  float knockback_duration; // [rsp+48h] [rbp-C8h] BYREF
  int knockback_distance; // [rsp+4Ch] [rbp-C4h] BYREF
  Vector vLocation1; // [rsp+50h] [rbp-C0h] BYREF
  Vector vLocation2; // [rsp+60h] [rbp-B0h] BYREF
  Vector vLocation3; // [rsp+70h] [rbp-A0h] BYREF
  Vector vLocation4; // [rsp+80h] [rbp-90h] BYREF
  Vector vLocation5; // [rsp+90h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+A0h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+C0h] [rbp-50h] BYREF
  unsigned __int64 v61; // [rsp+D8h] [rbp-38h]

  v61 = __readfsqword(0x28u);
  Caster = CDOTA_Buff::GetCaster(this);
  if ( Caster != 0 )
  {
    v3 = CEntityHandle::operator CEntityInstance *(&Caster[1].m_lifeState);
    if ( v3 != 0 )
    {
      CDOTA_Buff::StartIntervalThink(this, 0.0099999998, v4);
      v6 = *&vec3_invalid.x;
      vLocation1 = vec3_invalid;
      z = vec3_invalid.z;
      CBaseAnimating::GetAttachment(v3, "attach_tail1", &vLocation1);
      vLocation2.z = z;
      *&vLocation2.x = v6;
      CBaseAnimating::GetAttachment(v3, "attach_tail2", &vLocation2);
      vLocation3.z = z;
      *&vLocation3.x = v6;
      CBaseAnimating::GetAttachment(v3, "attach_tail3", &vLocation3);
      vLocation4.z = z;
      *&vLocation4.x = v6;
      CBaseAnimating::GetAttachment(v3, "attach_tail4", &vLocation4);
      vLocation5.z = z;
      *&vLocation5.x = v6;
      CBaseAnimating::GetAttachment(v3, "attach_tail5", &vLocation5);
      *v7.m128i_i32 = this->damage_radius;
      entities.m_Size = 0;
      entities.m_Memory.m_pMemory = 0;
      entities.m_Memory.m_nAllocationCount = 0;
      entities.m_Memory.m_nGrowSize = 0;
      v8 = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
      Parent = CDOTA_Buff::GetParent(this);
      v10 = CDOTA_Buff::GetParent(this);
      FindUnitsInRadius(v10->m_iTeamNum.m_Value, &vLocation1, Parent, v8, &entities, 2, 3, 16, 0, 0);
      *v11.m128i_i32 = this->damage_radius;
      v12 = COERCE_FLOAT(_mm_cvtsi128_si32(v11));
      v13 = CDOTA_Buff::GetParent(this);
      v14 = CDOTA_Buff::GetParent(this);
      FindUnitsInRadius(v14->m_iTeamNum.m_Value, &vLocation2, v13, v12, &entities, 2, 3, 16, 0, 0);
      *v15.m128i_i32 = this->damage_radius;
      v16 = COERCE_FLOAT(_mm_cvtsi128_si32(v15));
      v17 = CDOTA_Buff::GetParent(this);
      v18 = CDOTA_Buff::GetParent(this);
      FindUnitsInRadius(v18->m_iTeamNum.m_Value, &vLocation3, v17, v16, &entities, 2, 3, 16, 0, 0);
      *v19.m128i_i32 = this->damage_radius;
      v20 = COERCE_FLOAT(_mm_cvtsi128_si32(v19));
      v21 = CDOTA_Buff::GetParent(this);
      v22 = CDOTA_Buff::GetParent(this);
      FindUnitsInRadius(v22->m_iTeamNum.m_Value, &vLocation4, v21, v20, &entities, 2, 3, 16, 0, 0);
      *v23.m128i_i32 = this->damage_radius;
      LODWORD(v21) = _mm_cvtsi128_si32(v23);
      v24 = CDOTA_Buff::GetParent(this);
      v25 = CDOTA_Buff::GetParent(this);
      FindUnitsInRadius(v25->m_iTeamNum.m_Value, &vLocation5, v24, *&v21, &entities, 2, 3, 16, 0, 0);
      if ( entities.m_Size > 0 )
      {
        v26 = 0;
        do
        {
          while ( 1 )
          {
            v27 = &entities.m_Memory.m_pMemory[v26];
            if ( v27->m_Index + 2 > 1 )
            {
              v28 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v27->m_Index) >> 9) & 0x3F];
              if ( v28 != 0 )
              {
                v29 = &v28[v27->m_Index & 0x1FF];
                if ( v29 != 0 && v27->m_Index == v29->m_EHandle.m_Index )
                {
                  m_pInstance = v29->m_pInstance;
                  if ( v29->m_pInstance != 0
                    && m_pInstance->m_bIsDOTANPC
                    && CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                         &this->m_vHitEntities,
                         v27) < 0 )
                  {
                    break;
                  }
                }
              }
            }
            if ( entities.m_Size <= ++v26 )
              goto LABEL_22;
          }
          vPosition = this->damage;
          Ability = CDOTA_Buff::GetAbility(this);
          v32 = CDOTA_Buff::GetCaster(this);
          ApplyDamage(v32, m_pInstance, Ability, vPosition, 1, 0);
          v33 = CDOTA_Buff::GetAbility(this);
          DotaRetrieveAbilityValue<float>(v33, &knockback_duration, "knockback_duration");
          v34 = CDOTA_Buff::GetAbility(this);
          DotaRetrieveAbilityValue<int>(v34, &knockback_distance, "knockback_distance");
          KeyValues::KeyValues(&kv, "modifier_knockback");
          v35 = CDOTA_Buff::GetCaster(this);
          CBaseEntity::GetAbsOrigin(v35);
          KeyValues::SetFloat(&kv, "center_x", v36);
          v37 = CDOTA_Buff::GetCaster(this);
          CBaseEntity::GetAbsOrigin(v37);
          KeyValues::SetFloat(&kv, "center_y", v38);
          v39 = CDOTA_Buff::GetCaster(this);
          CBaseEntity::GetAbsOrigin(v39);
          KeyValues::SetFloat(&kv, "center_z", v40);
          KeyValues::SetFloat(&kv, "knockback_duration", v41);
          KeyValues::SetFloat(&kv, "knockback_distance", v42);
          KeyValues::SetFloat(&kv, "duration", v43);
          v44 = CDOTA_Buff::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(m_pInstance, v44, 0, "modifier_knockback", &kv, 0);
          v51 = -1;
          m_pEntity = m_pInstance->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v46 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v46 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            v51 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v46 & 0x7FFF;
          }
          m_Size = this->m_vHitEntities.m_Size;
          v48 = this->m_vHitEntities.m_Size;
          if ( m_Size == this->m_vHitEntities.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_vHitEntities.m_Memory, 1);
            v48 = this->m_vHitEntities.m_Size;
          }
          this->m_vHitEntities.m_Size = v48 + 1;
          v49 = &this->m_vHitEntities.m_Memory.m_pMemory[m_Size];
          if ( v49 != 0 )
            v49->m_Index = v51;
          CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Nian.Attack", 0.0, 0, 0);
          KeyValues::~KeyValues(&kv);
          ++v26;
        }
        while ( entities.m_Size > v26 );
      }
LABEL_22:
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
    }
  }
}


// CDOTA_Ability_Nian_Apocalypse::~CDOTA_Ability_Nian_Apocalypse  (line 2597, @0x0000000002b1c500, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Nian_Apocalypse::~CDOTA_Ability_Nian_Apocalypse(
        CDOTA_Ability_Nian_Apocalypse *const this)
{
  this->_vptr_IHandleEntity = &off_4468310;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Nian_Apocalypse::~CDOTA_Ability_Nian_Apocalypse  (line 2597, @0x0000000002b1c520, libserver.so)  // inlines: ~CDOTA_Ability_Nian_Apocalypse
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Nian_Apocalypse::~CDOTA_Ability_Nian_Apocalypse(
        CDOTA_Ability_Nian_Apocalypse *const this)
{
  this->_vptr_IHandleEntity = &off_4468310;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Nian_Apocalypse::Schema_DynamicBinding  (line 2599, @0x0000000002b16110, libserver.so)
// globals: CDOTA_Ability_Nian_Apocalypse::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nian_Apocalypse::Schema_DynamicBinding(
        const CDOTA_Ability_Nian_Apocalypse *const this)
{
  return CDOTA_Ability_Nian_Apocalypse::s_pSchemaBinding;
}


// CDOTA_Ability_Nian_Apocalypse::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2599, @0x0000000002b16120, libserver.so)
// globals: CDOTA_Ability_Nian_Apocalypse::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nian_Apocalypse::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Nian_Apocalypse::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nian_Apocalypse::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Nian_Apocalypse::CEntityInstanceEntityClass::DestructInstance  (line 2599, @0x0000000002b16130, libserver.so)  // inlines: Destruct<CDOTA_Ability_Nian_Apocalypse>
void __fastcall CDOTA_Ability_Nian_Apocalypse::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Nian_Apocalypse::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Nian_Apocalypse::CEntityInstanceEntityClass::FreeInstance  (line 2599, @0x0000000002b16150, libserver.so)
void __fastcall CDOTA_Ability_Nian_Apocalypse::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Nian_Apocalypse::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Nian_Apocalypse::CEntityInstanceEntityClass::CanAllocate  (line 2599, @0x0000000002b16170, libserver.so)
bool __fastcall CDOTA_Ability_Nian_Apocalypse::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Nian_Apocalypse::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Nian_Apocalypse::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2599, @0x0000000002b16180, libserver.so)
// globals: CDOTA_Ability_Nian_Apocalypse::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Nian_Apocalypse::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Nian_Apocalypse::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nian_Apocalypse::s_pSchemaBinding;
}


// CDOTA_Ability_Nian_Apocalypse::CEntityInstanceEntityClass::AllocateInstance  (line 2599, @0x0000000002b192b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Nian_Apocalypse::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Nian_Apocalypse::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 968);
  memset(v1, 0, 0x3C8u);
  return v1;
}


// CDOTA_Ability_Nian_Apocalypse::CEntityInstanceEntityClass::ConstructInstance  (line 2599, @0x0000000002b20c00, libserver.so)  // inlines: CDOTA_Ability_Nian_Apocalypse, Construct<CDOTA_Ability_Nian_Apocalypse>
// calls: CDOTABaseAbility::CDOTABaseAbility, CountdownTimer::CountdownTimer, CDOTABaseAbility::~CDOTABaseAbility, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_Ability_Nian_Apocalypse::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Nian_Apocalypse::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4468310;
    CountdownTimer::CountdownTimer(p + 39);
    *(p + 240) = 1074161254;
  }
  return p;
}


// CDOTA_Ability_Nian_Apocalypse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2599, @0x0000000002b22310, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Nian_Apocalypse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nian_Apocalypse::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Nian_Apocalypse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2599, @0x0000000002b22330, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Nian_Apocalypse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nian_Apocalypse::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Nian_Apocalypse::GetEntityClassInternal  (line 2599, @0x0000000002b2bd60, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "CDOTA_Ability_Nian_Apocalypse"
// globals: `guard variable for'CDOTA_Ability_Nian_Apocalypse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_ApocalypseClass, CDOTA_Ability_Nian_Apocalypse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_ApocalypseClass, __dso_handle, CDOTA_Ability_Nian_Apocalypse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Nian_Apocalypse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_ApocalypseClassInfo, CDOTA_Ability_Nian_Apocalypse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_ApocalypseClassInfo
CEntityClass *__cdecl CDOTA_Ability_Nian_Apocalypse::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Nian_Apocalypse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_ApocalypseClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nian_Apocalypse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_ApocalypseClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Nian_Apocalypse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_ApocalypseClass);
    CDOTA_Ability_Nian_Apocalypse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_ApocalypseClass._vptr_CEntityClass = off_4468290;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nian_Apocalypse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_ApocalypseClass);
    __cxa_atexit(
      CDOTA_Ability_Nian_Apocalypse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Nian_Apocalypse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_ApocalypseClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Nian_ApocalypseClass != 0 )
    return &CDOTA_Ability_Nian_Apocalypse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_ApocalypseClass;
  if ( `guard variable for'CDOTA_Ability_Nian_Apocalypse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_ApocalypseClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nian_Apocalypse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_ApocalypseClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Nian_Apocalypse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_ApocalypseClassInfo,
      "CDOTA_Ability_Nian_Apocalypse",
      "nian_apocalypse",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nian_Apocalypse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_ApocalypseClassInfo);
  }
  CDOTA_Ability_Nian_Apocalypse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_ApocalypseClass.m_pClassInfo = &CDOTA_Ability_Nian_Apocalypse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_ApocalypseClassInfo;
  CDOTA_Ability_Nian_Apocalypse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_ApocalypseClass.m_pBaseClassInfo = CDOTA_Ability_Nian_Apocalypse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_ApocalypseClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Nian_ApocalypseClass = &CDOTA_Ability_Nian_Apocalypse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_ApocalypseClass;
  CDOTA_Ability_Nian_Apocalypse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_ApocalypseClassInfo.m_pClass = &CDOTA_Ability_Nian_Apocalypse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_ApocalypseClass;
  CDOTA_Ability_Nian_Apocalypse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_ApocalypseClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Nian_ApocalypseClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Nian_Apocalypse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_ApocalypseClass;
}


// CDOTA_Ability_Nian_Apocalypse::YouForgotToImplementOrDeclareServerClass  (line 2629, @0x0000000002ae7ed0, libserver.so)
int __fastcall CDOTA_Ability_Nian_Apocalypse::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Nian_Apocalypse *const this)
{
  return 0;
}


// CDOTA_Ability_Nian_Apocalypse::GetServerClass  (line 2629, @0x0000000002af2ef0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Nian_Apocalypse::GetServerClass(CDOTA_Ability_Nian_Apocalypse *const this)
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


// CDOTA_Ability_Nian_Apocalypse::OnAbilityPhaseStart  (line 2638, @0x0000000002b06c90, libserver.so)  // inlines: GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::StartGesture, CDOTA_BaseNPC::UnitEmitSound
// strings: "area_of_effect", "Nian.Apocalypse.PreAttack"
bool __fastcall CDOTA_Ability_Nian_Apocalypse::OnAbilityPhaseStart(CDOTA_Ability_Nian_Apocalypse *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // rax

  this->area_of_effect = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "area_of_effect", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(Caster, 1551, 0.0, 0.1, 5, 0, 1.0);
  v3 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v3, 1552, 0.0, 0.0, 4, 0, 1.0);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v4, "Nian.Apocalypse.PreAttack", 0.0, 0, 0);
  return 1;
}


// CDOTA_Ability_Nian_Apocalypse::OnAbilityPhaseInterrupted  (line 2652, @0x0000000002aea8f0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveGesture, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect
void __fastcall CDOTA_Ability_Nian_Apocalypse::OnAbilityPhaseInterrupted(CDOTA_Ability_Nian_Apocalypse *const this)
{
  CDOTA_Ability_Nian_Apocalypse *v1; // rbx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTA_ParticleManager *ParticleManager; // rax

  v1 = this;
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveGesture(Caster, 1551);
  v3 = CDOTABaseAbility::GetCaster(v1);
  CDOTA_BaseNPC::RemoveGesture(v3, 1552);
  LODWORD(v1) = v1->m_nfxIndex_roar;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, v1, 0);
}


// CDOTA_Ability_Nian_Apocalypse::OnSpellStart  (line 2663, @0x0000000002b02fc0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, Invalidate, NetworkStateChanged, Set, Start, operator=<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CountdownTimer::Now, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::UnitEmitSound, CDOTABaseAbility::CreateAbilityParticleEffect, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt
// strings: "fire_interval", "target_range", "Nian.Apocalypse.Loop", "nian_channel_roar", "attach_mouthbase", "attach_mouthend"
void __fastcall CDOTA_Ability_Nian_Apocalypse::OnSpellStart(CDOTA_Ability_Nian_Apocalypse *const this)
{
  CountdownTimer *p_m_ctTimer; // r12
  float LevelSpecialValue; // xmm0_4
  float fire_interval; // xmm1_4
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v9; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v11; // rax
  int m_nfxIndex_roar; // r13d
  const CBaseAnimating *v13; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v15; // rax
  const Vector *v16; // r12
  CDOTA_BaseNPC *v17; // rax
  int v18; // r13d
  const CBaseAnimating *v19; // r14
  CDOTA_ParticleManager *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  int v22; // ebx
  const CBaseAnimating *v23; // r12
  CDOTA_ParticleManager *v24; // rax
  float v25; // [rsp+8h] [rbp-28h]
  float v26; // [rsp+Ch] [rbp-24h]
  float v27; // [rsp+Ch] [rbp-24h]

  p_m_ctTimer = &this->m_ctTimer;
  if ( this->m_ctTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_ctTimer._vptr_CountdownTimer + 2))(&this->m_ctTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL, -1.0);
    this->m_ctTimer.m_timestamp.m_Value = -1.0;
  }
  this->fire_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "fire_interval", -1, 0);
  this->delay = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "delay", -1, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "target_range", -1, 0);
  fire_interval = this->fire_interval;
  this->target_range = LevelSpecialValue;
  this->m_flTiming = fire_interval;
  v26 = fire_interval;
  v5 = CountdownTimer::Now(p_m_ctTimer);
  v6 = v26;
  v7 = v5 + v26;
  if ( v7 != this->m_ctTimer.m_timestamp.m_Value )
  {
    v25 = v7;
    (*(this->m_ctTimer._vptr_CountdownTimer + 2))(p_m_ctTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v6 = v26;
    this->m_ctTimer.m_timestamp.m_Value = v25;
  }
  if ( v6 != this->m_ctTimer.m_duration.m_Value )
  {
    v27 = v6;
    (*(this->m_ctTimer._vptr_CountdownTimer + 2))(p_m_ctTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_ctTimer.m_duration.m_Value = v27;
  }
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(Caster, "Nian.Apocalypse.Loop", 0.0, 0, 0);
  this->m_nfxIndex_roar = CDOTABaseAbility::CreateAbilityParticleEffect(this, "nian_channel_roar", 2, 0, 0);
  v9 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
  v11 = CDOTABaseAbility::GetCaster(this);
  m_nfxIndex_roar = this->m_nfxIndex_roar;
  v13 = v11;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(
    ParticleManager,
    m_nfxIndex_roar,
    0,
    v13,
    5,
    "attach_mouthbase",
    *AbsOrigin,
    1);
  v15 = CDOTABaseAbility::GetCaster(this);
  v16 = CBaseEntity::GetAbsOrigin(v15);
  v17 = CDOTABaseAbility::GetCaster(this);
  v18 = this->m_nfxIndex_roar;
  v19 = v17;
  v20 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v20, v18, 1, v19, 5, "attach_mouthend", *v16, 1);
  v21 = CDOTABaseAbility::GetCaster(this);
  v22 = this->m_nfxIndex_roar;
  v23 = v21;
  v24 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v24, v22, 2, v23, 1, 0, vec3_invalid, 1);
}


// CDOTA_Ability_Nian_Apocalypse::OnChannelThink  (line 2687, @0x0000000002b04590, libserver.so)  // inlines: IsElapsed
// calls: CDOTABaseAbility::OnChannelThink, CountdownTimer::Now, CDOTA_Ability_Nian_Apocalypse::DoAttack
void __fastcall CDOTA_Ability_Nian_Apocalypse::OnChannelThink(
        CDOTA_Ability_Nian_Apocalypse *const this,
        double a2,
        float flInterval)
{
  CDOTABaseAbility::OnChannelThink(this, a2, flInterval);
  if ( CountdownTimer::Now(&this->m_ctTimer) >= this->m_ctTimer.m_timestamp.m_Value )
    CDOTA_Ability_Nian_Apocalypse::DoAttack(this);
}


// CDOTA_Ability_Nian_Apocalypse::OnChannelFinish  (line 2699, @0x0000000002aea690, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FadeGesture, CDOTA_BaseNPC::StartGesture, CBaseEntity::StopSound, CDOTA_BaseNPC::UnitEmitSound, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect
// strings: "Nian.Apocalypse.Loop", "Nian.Channel.Stop"
void __fastcall CDOTA_Ability_Nian_Apocalypse::OnChannelFinish(
        CDOTA_Ability_Nian_Apocalypse *const this,
        bool bInterrupted)
{
  CDOTA_Ability_Nian_Apocalypse *v2; // rbx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTA_ParticleManager *ParticleManager; // rax

  v2 = this;
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::FadeGesture(Caster, 1552);
  v4 = CDOTABaseAbility::GetCaster(v2);
  CDOTA_BaseNPC::StartGesture(v4, 1553, 0.1, 0.2, 9, 0, 1.0);
  v5 = CDOTABaseAbility::GetCaster(v2);
  CBaseEntity::StopSound(v5, "Nian.Apocalypse.Loop");
  v6 = CDOTABaseAbility::GetCaster(v2);
  CDOTA_BaseNPC::UnitEmitSound(v6, "Nian.Channel.Stop", 0.0, 0, 0);
  LODWORD(v2) = v2->m_nfxIndex_roar;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, v2, 0);
}


// CDOTA_Ability_Nian_Apocalypse::DoAttack  (line 2714, @0x0000000002b04150, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetCurrentVelocityForTargeting, GetInstance, GetTeamNumber, NetworkStateChanged, NormalizeInPlace, Purge, Reset, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorAdd, VectorMultiply, clamp<float, float>, operator CBaseEntity*, operator*, operator+, operator=, operator=<float>, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, RandomInt, CEntityHandle::operator CEntityInstance*, CountdownTimer::Now, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, KeyValues::~KeyValues (19 total)
// callers: CDOTA_Ability_Nian_Apocalypse::OnChannelThink
// strings: "modifier_nian_apocalypse", "area_of_effect", "Target is moving at %f %f %f\n"
void __fastcall CDOTA_Ability_Nian_Apocalypse::DoAttack(CDOTA_Ability_Nian_Apocalypse *const this)
{
  float v2; // xmm1_4
  float v3; // xmm1_4
  float v4; // xmm1_4
  float target_range; // xmm5_4
  CDOTA_BaseNPC *Caster; // r15
  CDOTA_BaseNPC *v7; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v9; // rax
  int v10; // eax
  CEntityInstance *v11; // rax
  const CBaseEntity *v12; // r14
  __m128i v13; // xmm0
  __m128i v14; // xmm3
  float v15; // r14d
  CEntityInstance *v16; // rdi
  vec_t z; // eax
  float *v18; // rax
  float x; // xmm0_4
  float y; // xmm1_4
  float v21; // xmm2_4
  __m128 v22; // xmm0
  float v23; // xmm1_4
  __m128 v24; // xmm1
  __m128i y_low; // xmm7
  float v26; // r15d
  const Vector *v27; // rax
  vec_t v28; // xmm0_4
  vec_t v29; // xmm2_4
  int m_Value; // r14d
  CDOTA_BaseNPC *v31; // rax
  float v32; // [rsp+18h] [rbp-98h]
  float flRadius; // [rsp+1Ch] [rbp-94h]
  float flRadiusa; // [rsp+1Ch] [rbp-94h]
  Vector vDirection; // [rsp+20h] [rbp-90h] BYREF
  Vector vTarget; // [rsp+30h] [rbp-80h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v39; // [rsp+78h] [rbp-38h]

  v39 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "damage", this->m_iLevel.m_Value, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_duration", this->m_iLevel.m_Value, 0);
  KeyValues::KeyValues(&kv, "modifier_nian_apocalypse");
  KeyValues::SetFloat(&kv, "duration", v2);
  KeyValues::SetInt(&kv, "area_of_effect", this->area_of_effect);
  KeyValues::SetFloat(&kv, "damage", v3);
  KeyValues::SetFloat(&kv, "stun_duration", v4);
  entities.m_Size = 0;
  target_range = this->target_range;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  flRadius = target_range;
  Caster = CDOTABaseAbility::GetCaster(this);
  v7 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
  v9 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v9->m_iTeamNum.m_Value, AbsOrigin, Caster, flRadius, &entities, 2, 1, 16, 0, 0);
  v10 = RandomInt(0, (entities.m_Size - 1));
  if ( entities.m_Size > 0 )
  {
    v11 = CEntityHandle::operator CEntityInstance *(&entities.m_Memory.m_pMemory[v10]);
    v12 = v11;
    if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 && (v11[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
    {
      v16 = v11;
      z = vec3_origin.z;
      *&vDirection.x = *&vec3_origin.x;
      vDirection.z = z;
      if ( (*(v12->_vptr_IHandleEntity + 376))(v16) != 0 )
      {
        v18 = (*(v12->_vptr_IHandleEntity + 376))(v12);
        x = v18[62];
        y = v18[63];
        v21 = v18[64];
        vDirection.x = x;
        vDirection.y = y;
        vDirection.z = v21;
      }
      else
      {
        v21 = vDirection.z;
        y = vDirection.y;
        x = vDirection.x;
      }
      Msg("Target is moving at %f %f %f\n", x, y, v21);
      v22.m128_f32[0] = VectorNormalize(&vDirection);
      v23 = 0.0;
      if ( v22.m128_f32[0] >= 0.0 )
      {
        v24 = _mm_cmplt_ss(0x437A0000u, v22);
        LODWORD(v23) = _mm_andnot_ps(v24, v22).m128_u32[0] | v24.m128_i32[0] & 0x437A0000;
      }
      y_low = LODWORD(vDirection.y);
      *y_low.m128i_i32 = vDirection.y * v23;
      flRadiusa = vDirection.x * v23;
      v26 = COERCE_FLOAT(_mm_cvtsi128_si32(y_low));
      v32 = v23 * vDirection.z;
      v27 = CBaseEntity::GetAbsOrigin(v12);
      v28 = v32 + v27->z;
      v29 = flRadiusa + v27->x;
      vTarget.y = v26 + v27->y;
      vTarget.z = v28;
      vTarget.x = v29;
      m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
      v31 = CDOTABaseAbility::GetCaster(this);
      Thinker_Create(v31, this, "modifier_nian_apocalypse", &kv, vTarget, m_Value, 0, 1, 0);
    }
  }
  *v13.m128i_i32 = CountdownTimer::Now(&this->m_ctTimer);
  v14 = v13;
  *v14.m128i_i32 = *v13.m128i_i32 + this->m_ctTimer.m_duration.m_Value;
  v15 = COERCE_FLOAT(_mm_cvtsi128_si32(v14));
  if ( *v14.m128i_i32 != this->m_ctTimer.m_timestamp.m_Value )
  {
    (*(this->m_ctTimer._vptr_CountdownTimer + 2))(&this->m_ctTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_ctTimer.m_timestamp.m_Value = v15;
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
  if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
  }
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Nian_Apocalypse::~CDOTA_Modifier_Nian_Apocalypse  (line 2757, @0x0000000002b1a750, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Nian_Apocalypse::~CDOTA_Modifier_Nian_Apocalypse(
        CDOTA_Modifier_Nian_Apocalypse *const this)
{
  this->_vptr_CDOTA_Buff = &off_4468DD0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Nian_Apocalypse::~CDOTA_Modifier_Nian_Apocalypse  (line 2757, @0x0000000002b1a770, libserver.so)  // inlines: ~CDOTA_Modifier_Nian_Apocalypse
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Nian_Apocalypse::~CDOTA_Modifier_Nian_Apocalypse(
        CDOTA_Modifier_Nian_Apocalypse *const this)
{
  this->_vptr_CDOTA_Buff = &off_4468DD0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nian_Apocalypse::IsHidden  (line 2764, @0x0000000002b16190, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Apocalypse::IsHidden(CDOTA_Modifier_Nian_Apocalypse *const this)
{
  return 1;
}


// CDOTA_Modifier_Nian_Apocalypse::IsPurgable  (line 2765, @0x0000000002b161a0, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Apocalypse::IsPurgable(CDOTA_Modifier_Nian_Apocalypse *const this)
{
  return 0;
}


// CDOTA_Modifier_Nian_Apocalypse::OnCreated  (line 2780, @0x0000000002ae9ef0, libserver.so)  // inlines: Vector
// calls: KeyValues::GetInt, KeyValues::GetFloat, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSoundLocation
// strings: "area_of_effect", "particles/econ/generic/generic_aoe_shockwave_1/generic_aoe_shockwave_1.vpcf", "Nian.Apocalypse.Create"
void __fastcall CDOTA_Modifier_Nian_Apocalypse::OnCreated(CDOTA_Modifier_Nian_Apocalypse *const this, KeyValues *pKV)
{
  KeyValues *v2; // r12
  float v4; // xmm1_4
  float v5; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v11; // rax
  CDOTA_ParticleManager *v12; // rax
  CDOTA_ParticleManager *v13; // rax
  CDOTA_ParticleManager *v14; // rax
  CDOTA_ParticleManager *v15; // rax
  Vector vPos; // [rsp+10h] [rbp-40h] BYREF
  double v17; // [rsp+20h] [rbp-30h]
  int v18; // [rsp+28h] [rbp-28h]

  v2 = pKV;
  this->area_of_effect = KeyValues::GetInt(pKV, "area_of_effect", 0);
  this->damage = KeyValues::GetFloat(v2, "damage", v4);
  this->stun_duration = KeyValues::GetFloat(v2, "stun_duration", v5);
  Parent = CDOTA_Buff::GetParent(this);
  vPos = *CBaseEntity::GetAbsOrigin(Parent);
  v7 = CDOTA_Buff::GetParent(this);
  LODWORD(v2) = CDOTA_Buff::CreateBuffParticleEffect(
                  this,
                  "particles/econ/generic/generic_aoe_shockwave_1/generic_aoe_shockwave_1.vpcf",
                  1,
                  v7,
                  0);
  v8 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, v2, 0, *&AbsOrigin->x, AbsOrigin->z);
  *&v17 = COERCE_UNSIGNED_INT(this->area_of_effect);
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v11, v2, 1, v17, 0.0);
  v12 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v12, v2, 2, COERCE_DOUBLE(1086324736), 1.0);
  v18 = 0;
  v13 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v13, v2, 3, COERCE_DOUBLE(1128792064), 0.0);
  v17 = 0.0;
  v14 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v14, v2, 4, 0.0, 0.0);
  v15 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v15, v2);
  DOTA_EmitSoundLocation(&vPos, "Nian.Apocalypse.Create", 1);
}


// CDOTA_Modifier_Nian_Apocalypse::OnDestroy  (line 2804, @0x0000000002aff1e0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, Vector, entindex, operator CBaseEntity*, operator CEntityInstance*, operator->, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::GetCaster, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSoundLocation, FindUnitsInRadius, CEntityHandle::operator CEntityInstance*, CEntityInstance::GetEntityIndex (18 total)
// strings: "particles/units/heroes/hero_legion_commander/legion_commander_odds.vpcf", "attach_hitloc", "Nian.Apocalypse.Destroy", "particles/units/heroes/hero_legion_commander/legion_commander_odds_hero_arrow_group.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Nian_Apocalypse::OnDestroy(CDOTA_Modifier_Nian_Apocalypse *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  int BuffParticleEffect; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_ParticleManager *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v9; // r15
  CDOTA_ParticleManager *v10; // rax
  CDOTA_ParticleManager *v11; // rax
  CDOTA_ParticleManager *v12; // rax
  CDOTA_ParticleManager *v13; // rax
  CDOTA_ParticleManager *v14; // rax
  int area_of_effect; // eax
  __m128i v16; // xmm3
  CDOTA_BaseNPC *v17; // r15
  CDOTA_BaseNPC *v18; // rax
  CEntityInstance *v19; // rax
  CEntityIndex v20; // eax
  __m128i v21; // xmm4
  float v22; // r14d
  CDOTA_BaseNPC *v23; // r15
  CDOTA_BaseNPC *v24; // rax
  __int64 v25; // r15
  CDOTA_BaseNPC *m_pInstance; // r14
  CDOTABaseAbility *Ability; // r12
  CDOTA_BaseNPC *v28; // rax
  CDOTA_ParticleManager *v29; // rax
  CDOTA_BaseNPC *v30; // r14
  CDOTA_ParticleManager *v31; // rax
  CDOTA_BaseNPC *v32; // rax
  const Vector *v33; // r14
  CDOTA_ParticleManager *v34; // rax
  CDOTA_ParticleManager *v35; // rax
  CHandle<CBaseEntity> *v36; // rdx
  uint32 m_Index; // eax
  __int16 v38; // cx
  CEntityIdentity *v39; // rdx
  CEntityIdentity *v40; // rdx
  CDOTA_BaseNPC *pEnt; // [rsp+20h] [rbp-70h]
  float flDamagePerEnemy; // [rsp+28h] [rbp-68h]
  int i; // [rsp+2Ch] [rbp-64h]
  Vector vLocation; // [rsp+30h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-50h] BYREF

  Parent = CDOTA_Buff::GetParent(this);
  vLocation = *CBaseEntity::GetAbsOrigin(Parent);
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/units/heroes/hero_legion_commander/legion_commander_odds.vpcf",
                         2,
                         0,
                         0);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, BuffParticleEffect, 0, *&vLocation.x, vLocation.z);
  Caster = CDOTA_Buff::GetCaster(this);
  v6 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v6, BuffParticleEffect, 1, Caster, 1, 0, vec3_invalid, 1);
  v7 = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
  v9 = CDOTA_Buff::GetCaster(this);
  v10 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v10, BuffParticleEffect, 2, v9, 5, "attach_hitloc", *AbsOrigin, 1);
  *&entities.m_Size = 0x4000000040000000LL;
  LODWORD(entities.m_Memory.m_pMemory) = 0x40000000;
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v11, BuffParticleEffect, 3, 2.000000476837158, 2.0);
  *&entities.m_Size = this->area_of_effect;
  *(&entities.m_Size + 1) = entities.m_Size;
  v12 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v12, BuffParticleEffect, 4, *&entities.m_Size, *&entities.m_Size);
  *&entities.m_Size = 0x4040000040400000LL;
  LODWORD(entities.m_Memory.m_pMemory) = 1077936128;
  v13 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v13, BuffParticleEffect, 5, 32.00000765919685, 3.0);
  v14 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v14, BuffParticleEffect);
  DOTA_EmitSoundLocation(&vLocation, "Nian.Apocalypse.Destroy", 1);
  area_of_effect = this->area_of_effect;
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  *v16.m128i_i32 = (2 * area_of_effect);
  LODWORD(AbsOrigin) = _mm_cvtsi128_si32(v16);
  v17 = CDOTA_Buff::GetCaster(this);
  v18 = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(v18->m_iTeamNum.m_Value, &vLocation, v17, *&AbsOrigin, &entities, 2, 1, 528, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v19 = CEntityHandle::operator CEntityInstance *(entities.m_Memory.m_pMemory);
    v20.m_Data = CEntityInstance::GetEntityIndex(v19).m_Data;
    CreateUnitEvent(v20, 0, 14, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_HERO_VS_HERO_ABILITY);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
  *v21.m128i_i32 = this->area_of_effect;
  v22 = COERCE_FLOAT(_mm_cvtsi128_si32(v21));
  v23 = CDOTA_Buff::GetCaster(this);
  v24 = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(v24->m_iTeamNum.m_Value, &vLocation, v23, v22, &entities, 2, 3, 528, 0, 0);
  if ( entities.m_Size != 0 )
  {
    flDamagePerEnemy = this->damage / entities.m_Size;
    if ( entities.m_Size > 0 )
    {
      v25 = 0;
      i = 0;
      do
      {
        v36 = &entities.m_Memory.m_pMemory[v25];
        m_Index = entities.m_Memory.m_pMemory[v25].m_Index;
        if ( m_Index + 2 <= 1
          || (v38 = v36->m_Index,
              (v39 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v36->m_Index) >> 9) & 0x3F]) == 0)
          || (v40 = &v39[v38 & 0x1FF]) == 0
          || m_Index != v40->m_EHandle.m_Index
          || (m_pInstance = v40->m_pInstance, v40->m_pInstance == 0)
          || !m_pInstance->m_bIsDOTANPC )
        {
          m_pInstance = 0;
        }
        Ability = CDOTA_Buff::GetAbility(this);
        v28 = CDOTA_Buff::GetCaster(this);
        ApplyDamage(v28, m_pInstance, Ability, flDamagePerEnemy, 4, 0);
        LODWORD(Ability) = CDOTA_Buff::CreateBuffParticleEffect(
                             this,
                             "particles/units/heroes/hero_legion_commander/legion_commander_odds_hero_arrow_group.vpcf",
                             2,
                             0,
                             0);
        v29 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v29, Ability, 0, m_pInstance, 1, 0, vec3_invalid, 1);
        v30 = CDOTA_Buff::GetCaster(this);
        v31 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v31, Ability, 1, v30, 1, 0, vec3_invalid, 1);
        v32 = CDOTA_Buff::GetCaster(this);
        v33 = CBaseEntity::GetAbsOrigin(v32);
        pEnt = CDOTA_Buff::GetCaster(this);
        v34 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v34, Ability, 2, pEnt, 5, "attach_hitloc", *v33, 1);
        v35 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v35, Ability);
        ++i;
        ++v25;
      }
      while ( entities.m_Size > i );
    }
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Modifier_Nian_Knockdown::~CDOTA_Modifier_Nian_Knockdown  (line 2874, @0x0000000002b1a700, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Nian_Knockdown::~CDOTA_Modifier_Nian_Knockdown(
        CDOTA_Modifier_Nian_Knockdown *const this)
{
  this->_vptr_CDOTA_Buff = &off_44690F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Nian_Knockdown::~CDOTA_Modifier_Nian_Knockdown  (line 2874, @0x0000000002b1a720, libserver.so)  // inlines: ~CDOTA_Modifier_Nian_Knockdown
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Nian_Knockdown::~CDOTA_Modifier_Nian_Knockdown(
        CDOTA_Modifier_Nian_Knockdown *const this)
{
  this->_vptr_CDOTA_Buff = &off_44690F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nian_Knockdown::IsDebuff  (line 2879, @0x0000000002b161b0, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Knockdown::IsDebuff(CDOTA_Modifier_Nian_Knockdown *const this)
{
  return 0;
}


// CDOTA_Modifier_Nian_Knockdown::IsPurgable  (line 2880, @0x0000000002b161c0, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Knockdown::IsPurgable(CDOTA_Modifier_Nian_Knockdown *const this)
{
  return 0;
}


// CDOTA_Modifier_Nian_Knockdown::GetAttributes  (line 2883, @0x0000000002b161d0, libserver.so)
int __fastcall CDOTA_Modifier_Nian_Knockdown::GetAttributes(CDOTA_Modifier_Nian_Knockdown *const this)
{
  return 1;
}


// CDOTA_Modifier_Nian_Knockdown::StatusEffectPriority  (line 2885, @0x0000000002b161e0, libserver.so)
int __fastcall CDOTA_Modifier_Nian_Knockdown::StatusEffectPriority(CDOTA_Modifier_Nian_Knockdown *const this)
{
  return 10030;
}


// CDOTA_Modifier_Nian_Knockdown::IsHidden  (line 2886, @0x0000000002b161f0, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Knockdown::IsHidden(CDOTA_Modifier_Nian_Knockdown *const this)
{
  return 1;
}


// CDOTA_Modifier_Nian_Knockdown::OnCreated  (line 2907, @0x0000000002aea290, libserver.so)  // inlines: GetBool
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveModifierByName, KeyValues::GetInt, CDOTA_BaseNPC::StartGesture, CBaseAnimating::SelectWeightedSequence, CBaseAnimating::SequenceDuration, CDOTA_Buff::StartIntervalThink
// strings: "modifier_animated_right_claw_swipe", "modifier_animated_left_claw_swipe", "modifier_animated_tail_spin"
void __fastcall CDOTA_Modifier_Nian_Knockdown::OnCreated(CDOTA_Modifier_Nian_Knockdown *const this, KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  float v13; // xmm0_4
  int (**vptr_CDOTA_Buff)(...); // rax
  float v15; // xmm0_4
  float v16; // xmm1_4

  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveModifierByName(Parent, "modifier_animated_right_claw_swipe");
  v5 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveModifierByName(v5, "modifier_animated_left_claw_swipe");
  v6 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveModifierByName(v6, "modifier_animated_tail_spin");
  this->m_bStandingUp = 0;
  this->m_bDebuff = KeyValues::GetInt(pKV, "debuff", 0) != 0;
  v7 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::StartGesture(v7, 1612, 0.0, 0.1, 5, 0, 1.0);
  v8 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::StartGesture(v8, 1613, 0.0, 0.0, 4, 0, 1.0);
  v9 = CDOTA_Buff::GetParent(this);
  LODWORD(pKV) = CBaseAnimating::SelectWeightedSequence(v9, 1614);
  v10 = CDOTA_Buff::GetParent(this);
  this->m_flStandUpDuration = CBaseAnimating::SequenceDuration(v10, pKV);
  v11 = CDOTA_Buff::GetParent(this);
  LODWORD(pKV) = CBaseAnimating::SelectWeightedSequence(v11, 1612);
  v12 = CDOTA_Buff::GetParent(this);
  v13 = CBaseAnimating::SequenceDuration(v12, pKV);
  vptr_CDOTA_Buff = this->_vptr_CDOTA_Buff;
  this->m_flKnockDownDuration = v13;
  v15 = (vptr_CDOTA_Buff[31])(this);
  CDOTA_Buff::StartIntervalThink(this, v15 - this->m_flStandUpDuration, v16);
}


// CDOTA_Modifier_Nian_Knockdown::OnIntervalThink  (line 2933, @0x0000000002aec3f0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveGesture, CDOTA_Buff::StartIntervalThink, CDOTA_BaseNPC::StartGesture
void __fastcall CDOTA_Modifier_Nian_Knockdown::OnIntervalThink(CDOTA_Modifier_Nian_Knockdown *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  float v3; // xmm1_4
  CDOTA_BaseNPC *v4; // rax
  float v5; // xmm1_4

  if ( this->m_bStandingUp )
  {
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::RemoveGesture(Parent, 1613);
    CDOTA_Buff::StartIntervalThink(this, -1.0, v3);
  }
  else
  {
    v4 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::StartGesture(v4, 1614, 0.1, 0.1, 5, 0, 1.0);
    this->m_bStandingUp = 1;
    CDOTA_Buff::StartIntervalThink(this, 0.2, v5);
  }
}


// CDOTA_Modifier_Nian_Knockdown::OnDestroy  (line 2950, @0x0000000002aea940, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveGesture
void __fastcall CDOTA_Modifier_Nian_Knockdown::OnDestroy(CDOTA_Modifier_Nian_Knockdown *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveGesture(Parent, 1613);
}


// CDOTA_Modifier_Nian_Knockdown::DeclareFunctions  (line 2960, @0x0000000002ae7ee0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Nian_Knockdown::GetModifierMagicalResistanceBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Nian_Knockdown::DeclareFunctions(CDOTA_Modifier_Nian_Knockdown *const this)
{
  this->m_Functions[49].__pfn = CDOTA_Modifier_Nian_Knockdown::GetModifierMagicalResistanceBonus;
  this->m_Functions[49].__delta = 0;
}


// CDOTA_Modifier_Nian_Knockdown::CheckState  (line 2967, @0x0000000002ae7f00, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Nian_Knockdown::CheckState(
        CDOTA_Modifier_Nian_Knockdown *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x23uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFFFFFDCLL;
}


// CDOTA_Modifier_Nian_Knockdown::GetModifierMagicalResistanceBonus  (line 2978, @0x0000000002aec680, libserver.so)  // inlines: FStrEq, GetAbilityName, _V_strcmp
// calls: CDOTA_Buff::GetAbility
// strings: "item_firework_mine"
ModifierVariant_t __fastcall CDOTA_Modifier_Nian_Knockdown::GetModifierMagicalResistanceBonus(
        CDOTA_Modifier_Nian_Knockdown *const this,
        const CModifierParams *const params)
{
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // rsi

  if ( CDOTA_Buff::GetAbility(this) != 0
    && (m_pAbilityData = CDOTA_Buff::GetAbility(this)->m_pAbilityData) != 0
    && (m_pszAbilityName = m_pAbilityData->m_pszAbilityName, m_pAbilityData->m_pszAbilityName != 0)
    && (m_pszAbilityName == "item_firework_mine" || strcmp(m_pszAbilityName, "item_firework_mine") == 0) )
  {
    return 0xC47A000000000001LL;
  }
  else
  {
    return 1uLL;
  }
}


// CDOTA_Modifier_Nian_Big_Flinch::~CDOTA_Modifier_Nian_Big_Flinch  (line 2990, @0x0000000002b1a6b0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Nian_Big_Flinch::~CDOTA_Modifier_Nian_Big_Flinch(
        CDOTA_Modifier_Nian_Big_Flinch *const this)
{
  this->_vptr_CDOTA_Buff = &off_4469410;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Nian_Big_Flinch::~CDOTA_Modifier_Nian_Big_Flinch  (line 2990, @0x0000000002b1a6d0, libserver.so)  // inlines: ~CDOTA_Modifier_Nian_Big_Flinch
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Nian_Big_Flinch::~CDOTA_Modifier_Nian_Big_Flinch(
        CDOTA_Modifier_Nian_Big_Flinch *const this)
{
  this->_vptr_CDOTA_Buff = &off_4469410;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nian_Big_Flinch::IsDebuff  (line 2995, @0x0000000002b16200, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Big_Flinch::IsDebuff(CDOTA_Modifier_Nian_Big_Flinch *const this)
{
  return 0;
}


// CDOTA_Modifier_Nian_Big_Flinch::IsPurgable  (line 2996, @0x0000000002b16210, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Big_Flinch::IsPurgable(CDOTA_Modifier_Nian_Big_Flinch *const this)
{
  return 0;
}


// CDOTA_Modifier_Nian_Big_Flinch::GetAttributes  (line 2999, @0x0000000002b16220, libserver.so)
int __fastcall CDOTA_Modifier_Nian_Big_Flinch::GetAttributes(CDOTA_Modifier_Nian_Big_Flinch *const this)
{
  return 2;
}


// CDOTA_Modifier_Nian_Big_Flinch::StatusEffectPriority  (line 3001, @0x0000000002b16230, libserver.so)
int __fastcall CDOTA_Modifier_Nian_Big_Flinch::StatusEffectPriority(CDOTA_Modifier_Nian_Big_Flinch *const this)
{
  return 10030;
}


// CDOTA_Modifier_Nian_Big_Flinch::IsHidden  (line 3004, @0x0000000002b16240, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Big_Flinch::IsHidden(CDOTA_Modifier_Nian_Big_Flinch *const this)
{
  return 1;
}


// CDOTA_Modifier_Nian_Big_Flinch::OnCreated  (line 3011, @0x0000000002aea0d0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_animated_right_claw_swipe", "modifier_animated_left_claw_swipe", "modifier_animated_tail_spin"
void __fastcall CDOTA_Modifier_Nian_Big_Flinch::OnCreated(CDOTA_Modifier_Nian_Big_Flinch *const this, KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveModifierByName(Parent, "modifier_animated_right_claw_swipe");
  v4 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveModifierByName(v4, "modifier_animated_left_claw_swipe");
  v5 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveModifierByName(v5, "modifier_animated_tail_spin");
}


// CDOTA_Modifier_Nian_Big_Flinch::CheckState  (line 3024, @0x0000000002ae7f20, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Nian_Big_Flinch::CheckState(
        CDOTA_Modifier_Nian_Big_Flinch *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x23uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFFFFFDCLL;
}


// CDOTA_Modifier_Firecracker_Debuff::~CDOTA_Modifier_Firecracker_Debuff  (line 3039, @0x0000000002b1a660, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Firecracker_Debuff::~CDOTA_Modifier_Firecracker_Debuff(
        CDOTA_Modifier_Firecracker_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4469730;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Firecracker_Debuff::~CDOTA_Modifier_Firecracker_Debuff  (line 3039, @0x0000000002b1a680, libserver.so)  // inlines: ~CDOTA_Modifier_Firecracker_Debuff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Firecracker_Debuff::~CDOTA_Modifier_Firecracker_Debuff(
        CDOTA_Modifier_Firecracker_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4469730;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Firecracker_Debuff::IsDebuff  (line 3044, @0x0000000002b16250, libserver.so)
bool __fastcall CDOTA_Modifier_Firecracker_Debuff::IsDebuff(CDOTA_Modifier_Firecracker_Debuff *const this)
{
  return 1;
}


// CDOTA_Modifier_Firecracker_Debuff::IsPurgable  (line 3045, @0x0000000002b16260, libserver.so)
bool __fastcall CDOTA_Modifier_Firecracker_Debuff::IsPurgable(CDOTA_Modifier_Firecracker_Debuff *const this)
{
  return 0;
}


// CDOTA_Modifier_Firecracker_Debuff::GetAttributes  (line 3048, @0x0000000002b16270, libserver.so)
int __fastcall CDOTA_Modifier_Firecracker_Debuff::GetAttributes(CDOTA_Modifier_Firecracker_Debuff *const this)
{
  return 2;
}


// CDOTA_Modifier_Firecracker_Debuff::StatusEffectPriority  (line 3050, @0x0000000002b16280, libserver.so)
int __fastcall CDOTA_Modifier_Firecracker_Debuff::StatusEffectPriority(CDOTA_Modifier_Firecracker_Debuff *const this)
{
  return 10030;
}


// CDOTA_Modifier_Firecracker_Debuff::IsHidden  (line 3052, @0x0000000002b16290, libserver.so)
bool __fastcall CDOTA_Modifier_Firecracker_Debuff::IsHidden(CDOTA_Modifier_Firecracker_Debuff *const this)
{
  return 0;
}


// CDOTA_Modifier_Firecracker_Debuff::GetModifierIncomingDamage_Percentage  (line 3054, @0x0000000002b162a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Firecracker_Debuff::GetModifierIncomingDamage_Percentage(
        CDOTA_Modifier_Firecracker_Debuff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Firecracker_Debuff::OnCreated  (line 3069, @0x0000000002ae7f40, libserver.so)
void __fastcall CDOTA_Modifier_Firecracker_Debuff::OnCreated(
        CDOTA_Modifier_Firecracker_Debuff *const this,
        KeyValues *pKV)
{
  this->bonus_damage = -5;
}


// CDOTA_Modifier_Firecracker_Debuff::DeclareFunctions  (line 3074, @0x0000000002ae7f50, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Firecracker_Debuff::GetModifierIncomingDamage_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Firecracker_Debuff::DeclareFunctions(CDOTA_Modifier_Firecracker_Debuff *const this)
{
  this->m_Functions[36].__pfn = CDOTA_Modifier_Firecracker_Debuff::GetModifierIncomingDamage_Percentage;
  this->m_Functions[36].__delta = 0;
}


// nian_stun  (line 3082, @0x0000000002aec090, libserver.so)  // inlines: Arg, FStrEq, _V_strcmp, operator[]
// calls: UTIL_GetCommandClient, CGameEntitySystem::FindEntityByClassname, __dynamic_cast, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, Msg, _Unwind_Resume, __stack_chk_fail
// strings: "npc_dota_nian", "scared", "modifier_nian_flag_trapped", "modifier_nian_knockdown", "modifier_nian_big_flinch", "Usage: nian_stun <flinch|knockdown|scared>\n"
// globals: `typeinfo for'CDOTA_Unit_Nian
void __fastcall nian_stun(const CCommandContext *const ctx, const CCommand *const args)
{
  CBaseEntity *v3; // rbx
  CBaseEntity *EntityByClassname; // rax
  CDOTA_BaseNPC *v5; // r12
  const char *v6; // rax
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  KeyValues kv; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  if ( UTIL_GetCommandClient() != 0 )
  {
    if ( args->m_nArgc > 1 )
    {
      v3 = 0;
      while ( 1 )
      {
        do
        {
          EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, v3, "npc_dota_nian");
          v3 = EntityByClassname;
          if ( EntityByClassname == 0 )
            return;
          v5 = __dynamic_cast(EntityByClassname, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_Unit_Nian, 0);
        }
        while ( v5 == 0 || args->m_nArgc <= 1 );
        v6 = args->m_ppArgv[1];
        if ( v6 == "knockdown" || strcmp(args->m_ppArgv[1], "knockdown") == 0 )
          break;
        if ( v6 == "flinch" || strcmp(args->m_ppArgv[1], "flinch") == 0 )
        {
          KeyValues::KeyValues(&kv, "modifier_nian_big_flinch");
          KeyValues::SetFloat(&kv, "duration", v9);
          CDOTA_BaseNPC::AddNewModifier(v5, v5, 0, "modifier_nian_big_flinch", &kv, 0);
LABEL_14:
          KeyValues::~KeyValues(&kv);
        }
        else if ( v6 == "scared" || strcmp(args->m_ppArgv[1], "scared") == 0 )
        {
          KeyValues::KeyValues(&kv, "modifier_nian_flag_trapped");
          KeyValues::SetFloat(&kv, "duration", v7);
          CDOTA_BaseNPC::AddNewModifier(v5, v5, 0, "modifier_nian_flag_trapped", &kv, 0);
          goto LABEL_14;
        }
      }
      KeyValues::KeyValues(&kv, "modifier_nian_knockdown");
      KeyValues::SetFloat(&kv, "duration", v8);
      CDOTA_BaseNPC::AddNewModifier(v5, v5, 0, "modifier_nian_knockdown", &kv, 0);
      goto LABEL_14;
    }
    Msg("Usage: nian_stun <flinch|knockdown|scared>\n");
  }
}


// nian_cast_ability  (line 3125, @0x0000000002b0f7c0, libserver.so)  // inlines: AddToTail, Arg, CCopyableUtlVector, CEntityHandle, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, FStrEq, GetAssignedHero, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, GrowMemory, IndexToIdentity, Init, LookupEntity, Purge, RemoveAll, Reset, ToDOTABaseNPC, ToDOTABaseNPCHero, _V_strcmp, entindex, operator CBaseEntity*, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: Msg, UTIL_GetCommandClient, __dynamic_cast, CGameEntitySystem::FindEntityByClassname, CDOTA_BaseNPC::GetAbilityByIndex, CDOTABaseAbility::EndCooldown, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_BaseNPC::FindAbilityByName, CEntityInstance::GetEntityIndex, CBaseEntity::GetAbsOrigin, DOTA_ExecuteOrders, CUtlMemory<CEntityIndex, int>::Purge (14 total)
// strings: "Usage: nian_cast_ability <abilityname>\n", "You must be controlling a hero for the Nian to target\n", "npc_dota_nian", "modifier_nian_sleep"
// globals: `typeinfo for'CDOTA_Unit_Nian
void __fastcall nian_cast_ability(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  _WORD *v4; // rax
  unsigned __int16 v5; // dx
  __int64 v6; // rsi
  int v7; // eax
  CEntitySystem *v8; // rdx
  CEntityIdentity *v9; // rcx
  __int64 v10; // rdx
  const char *v11; // r12
  CBaseEntity *v12; // rbx
  CBaseEntity *EntityByClassname; // rax
  CDOTA_BaseNPC *v14; // r13
  int i; // r14d
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTABaseAbility *AbilityByName; // r14
  vec_t y; // xmm0_4
  CEntityIndex v19; // eax
  __int64 m_Size; // r13
  int32 m_Data; // r15d
  int v22; // eax
  CEntityIndex *v23; // rax
  const Vector *AbsOrigin; // rax
  vec_t z; // xmm0_4
  CEntityInstance *vptr_IEntityResourceManifestBuilder; // [rsp+18h] [rbp-78h]
  CUnitOrders orders; // [rsp+20h] [rbp-70h] BYREF

  if ( args->m_nArgc != 2 )
  {
    Msg("Usage: nian_cast_ability <abilityname>\n");
    return;
  }
  CommandClient = UTIL_GetCommandClient();
  if ( CommandClient != 0 )
  {
    v4 = __dynamic_cast(CommandClient, &`typeinfo for'CBasePlayer, &`typeinfo for'CDOTAPlayer, 0);
    if ( v4 != 0 )
    {
      if ( *(v4 + 1205) == -1 )
      {
        v5 = 0x7FFF;
        v6 = 0x7FFF;
      }
      else
      {
        v5 = v4[2410] & 0x7FFF;
        v6 = v5;
      }
      v7 = (*(v4 + 1205) >> 15 << 15) | v5 & 0x7FFF;
      orders.m_nIssuerPlayerIndex = v7;
      v8 = g_pEntitySystem;
      if ( (v7 + 2) <= 1
        || (v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v6 >> 9]) == 0
        || (v10 = v6 & 0x1FF, v6 = 8 * v10, (v8 = &v9[v10]) == 0)
        || v7 != *&v8->m_EntityList.m_Lock.gap0
        || (vptr_IEntityResourceManifestBuilder = v8->_vptr_IEntityResourceManifestBuilder,
            v8->_vptr_IEntityResourceManifestBuilder == 0)
        || *(v8->_vptr_IEntityResourceManifestBuilder + 339) == 0
        || (vptr_IEntityResourceManifestBuilder[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
      {
        Msg("You must be controlling a hero for the Nian to target\n", v6, v8);
        return;
      }
      v11 = "";
      if ( args->m_nArgc > 1 )
        v11 = args->m_ppArgv[1];
      v12 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, v12, "npc_dota_nian");
          v12 = EntityByClassname;
          if ( EntityByClassname == 0 )
            return;
          v14 = __dynamic_cast(EntityByClassname, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_Unit_Nian, 0);
          if ( v14 != 0 )
          {
            for ( i = 0; i != 24; ++i )
            {
              AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(v14, i);
              if ( AbilityByIndex != 0 )
                CDOTABaseAbility::EndCooldown(AbilityByIndex);
            }
            CDOTA_BaseNPC::RemoveModifierByName(v14, "modifier_nian_sleep");
            AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v14, v11, 0);
            if ( AbilityByName != 0 )
              break;
          }
        }
        orders.m_bQueue = 0;
        orders.m_nUnits.m_Size = 0;
        memset(&orders.m_nUnits.m_Memory, 0, 28);
        orders.m_nOrderSequenceNumber = 0;
        orders.m_vPosition.x = vec3_origin.x;
        y = vec3_origin.y;
        orders.m_nIssuerPlayerIndex = -1;
        orders.m_vPosition.y = y;
        orders.m_vPosition.z = vec3_origin.z;
        v19.m_Data = CEntityInstance::GetEntityIndex(v14).m_Data;
        m_Size = orders.m_nUnits.m_Size;
        m_Data = v19.m_Data;
        v22 = orders.m_nUnits.m_Size;
        if ( orders.m_nUnits.m_Size == orders.m_nUnits.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CEntityIndex,int>::Grow(&orders.m_nUnits.m_Memory, 1);
          v22 = orders.m_nUnits.m_Size;
        }
        orders.m_nUnits.m_Size = v22 + 1;
        v23 = &orders.m_nUnits.m_Memory.m_pMemory[m_Size];
        if ( v23 != 0 )
          v23->m_Data = m_Data;
        orders.m_nOrderType = 8;
        orders.m_nTargetIndex = CEntityInstance::GetEntityIndex(vptr_IEntityResourceManifestBuilder);
        orders.m_nAbilityIndex = CEntityInstance::GetEntityIndex(AbilityByName);
        AbsOrigin = CBaseEntity::GetAbsOrigin(vptr_IEntityResourceManifestBuilder);
        orders.m_vPosition.x = AbsOrigin->x;
        orders.m_vPosition.y = AbsOrigin->y;
        z = AbsOrigin->z;
        orders.m_bQueue = 0;
        orders.m_vPosition.z = z;
        if ( v11 != "nian_charge" && strcmp(v11, "nian_charge") != 0 )
        {
          if ( v11 == "nian_leap" || strcmp(v11, "nian_leap") == 0 )
          {
            orders.m_nOrderType = 5;
            goto LABEL_37;
          }
          if ( v11 != "nian_dive" && strcmp(v11, "nian_dive") != 0 )
            goto LABEL_37;
        }
        orders.m_nOrderType = 6;
LABEL_37:
        DOTA_ExecuteOrders(&orders, 0, 0, 0);
        orders.m_nUnits.m_Size = 0;
        if ( (orders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<CEntityIndex,int>::Purge(&orders.m_nUnits.m_Memory);
          if ( (orders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CEntityIndex,int>::Purge(&orders.m_nUnits.m_Memory);
        }
      }
    }
  }
}


// CDOTA_Ability_Nian_GreaterBash::~CDOTA_Ability_Nian_GreaterBash  (line 3202, @0x0000000002b1c550, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Nian_GreaterBash::~CDOTA_Ability_Nian_GreaterBash(
        CDOTA_Ability_Nian_GreaterBash *const this)
{
  this->_vptr_IHandleEntity = &off_4469A90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Nian_GreaterBash::~CDOTA_Ability_Nian_GreaterBash  (line 3202, @0x0000000002b1c570, libserver.so)  // inlines: ~CDOTA_Ability_Nian_GreaterBash
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Nian_GreaterBash::~CDOTA_Ability_Nian_GreaterBash(
        CDOTA_Ability_Nian_GreaterBash *const this)
{
  this->_vptr_IHandleEntity = &off_4469A90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Nian_GreaterBash::Schema_DynamicBinding  (line 3204, @0x0000000002b162c0, libserver.so)
// globals: CDOTA_Ability_Nian_GreaterBash::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nian_GreaterBash::Schema_DynamicBinding(
        const CDOTA_Ability_Nian_GreaterBash *const this)
{
  return CDOTA_Ability_Nian_GreaterBash::s_pSchemaBinding;
}


// CDOTA_Ability_Nian_GreaterBash::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 3204, @0x0000000002b162d0, libserver.so)
// globals: CDOTA_Ability_Nian_GreaterBash::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nian_GreaterBash::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Nian_GreaterBash::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nian_GreaterBash::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Nian_GreaterBash::CEntityInstanceEntityClass::DestructInstance  (line 3204, @0x0000000002b162e0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Nian_GreaterBash>
void __fastcall CDOTA_Ability_Nian_GreaterBash::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Nian_GreaterBash::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Nian_GreaterBash::CEntityInstanceEntityClass::FreeInstance  (line 3204, @0x0000000002b16300, libserver.so)
void __fastcall CDOTA_Ability_Nian_GreaterBash::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Nian_GreaterBash::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Nian_GreaterBash::CEntityInstanceEntityClass::CanAllocate  (line 3204, @0x0000000002b16320, libserver.so)
bool __fastcall CDOTA_Ability_Nian_GreaterBash::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Nian_GreaterBash::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Nian_GreaterBash::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 3204, @0x0000000002b16330, libserver.so)
// globals: CDOTA_Ability_Nian_GreaterBash::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Nian_GreaterBash::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Nian_GreaterBash::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nian_GreaterBash::s_pSchemaBinding;
}


// CDOTA_Ability_Nian_GreaterBash::CEntityInstanceEntityClass::AllocateInstance  (line 3204, @0x0000000002b192f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Nian_GreaterBash::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Nian_GreaterBash::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Nian_GreaterBash::CEntityInstanceEntityClass::ConstructInstance  (line 3204, @0x0000000002b1b8a0, libserver.so)  // inlines: CDOTA_Ability_Nian_GreaterBash, Construct<CDOTA_Ability_Nian_GreaterBash>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Nian_GreaterBash::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Nian_GreaterBash::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4469A90;
  }
  return p;
}


// CDOTA_Ability_Nian_GreaterBash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3204, @0x0000000002b22360, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Nian_GreaterBash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nian_GreaterBash::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Nian_GreaterBash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3204, @0x0000000002b22380, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Nian_GreaterBash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nian_GreaterBash::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Nian_GreaterBash::GetEntityClassInternal  (line 3204, @0x0000000002b2beb0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "CDOTA_Ability_Nian_GreaterBash"
// globals: `guard variable for'CDOTA_Ability_Nian_GreaterBash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_GreaterBashClass, CDOTA_Ability_Nian_GreaterBash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_GreaterBashClass, __dso_handle, CDOTA_Ability_Nian_GreaterBash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Nian_GreaterBash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_GreaterBashClassInfo, CDOTA_Ability_Nian_GreaterBash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_GreaterBashClassInfo
CEntityClass *__cdecl CDOTA_Ability_Nian_GreaterBash::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Nian_GreaterBash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_GreaterBashClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nian_GreaterBash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_GreaterBashClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Nian_GreaterBash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_GreaterBashClass);
    CDOTA_Ability_Nian_GreaterBash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_GreaterBashClass._vptr_CEntityClass = off_4469A10;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nian_GreaterBash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_GreaterBashClass);
    __cxa_atexit(
      CDOTA_Ability_Nian_GreaterBash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Nian_GreaterBash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_GreaterBashClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Nian_GreaterBashClass != 0 )
    return &CDOTA_Ability_Nian_GreaterBash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_GreaterBashClass;
  if ( `guard variable for'CDOTA_Ability_Nian_GreaterBash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_GreaterBashClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nian_GreaterBash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_GreaterBashClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Nian_GreaterBash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_GreaterBashClassInfo,
      "CDOTA_Ability_Nian_GreaterBash",
      "nian_greater_bash",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nian_GreaterBash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_GreaterBashClassInfo);
  }
  CDOTA_Ability_Nian_GreaterBash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_GreaterBashClass.m_pClassInfo = &CDOTA_Ability_Nian_GreaterBash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_GreaterBashClassInfo;
  CDOTA_Ability_Nian_GreaterBash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_GreaterBashClass.m_pBaseClassInfo = CDOTA_Ability_Nian_GreaterBash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_GreaterBashClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Nian_GreaterBashClass = &CDOTA_Ability_Nian_GreaterBash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_GreaterBashClass;
  CDOTA_Ability_Nian_GreaterBash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_GreaterBashClassInfo.m_pClass = &CDOTA_Ability_Nian_GreaterBash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_GreaterBashClass;
  CDOTA_Ability_Nian_GreaterBash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_GreaterBashClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Nian_GreaterBashClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Nian_GreaterBash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_GreaterBashClass;
}


// CDOTA_Ability_Nian_GreaterBash::GetIntrinsicModifierName  (line 3207, @0x0000000002b16340, libserver.so)
// strings: "modifier_nian_greater_bash"
const char *__fastcall CDOTA_Ability_Nian_GreaterBash::GetIntrinsicModifierName(
        CDOTA_Ability_Nian_GreaterBash *const this)
{
  return "modifier_nian_greater_bash";
}


// CDOTA_Ability_Nian_GreaterBash::IsHiddenWhenStolen  (line 3209, @0x0000000002b16350, libserver.so)
bool __fastcall CDOTA_Ability_Nian_GreaterBash::IsHiddenWhenStolen(CDOTA_Ability_Nian_GreaterBash *const this)
{
  return 1;
}


// CDOTA_Modifier_Nian_GreaterBash::~CDOTA_Modifier_Nian_GreaterBash  (line 3218, @0x0000000002b1a610, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Nian_GreaterBash::~CDOTA_Modifier_Nian_GreaterBash(
        CDOTA_Modifier_Nian_GreaterBash *const this)
{
  this->_vptr_CDOTA_Buff = &off_446A550;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Nian_GreaterBash::~CDOTA_Modifier_Nian_GreaterBash  (line 3218, @0x0000000002b1a630, libserver.so)  // inlines: ~CDOTA_Modifier_Nian_GreaterBash
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Nian_GreaterBash::~CDOTA_Modifier_Nian_GreaterBash(
        CDOTA_Modifier_Nian_GreaterBash *const this)
{
  this->_vptr_CDOTA_Buff = &off_446A550;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nian_GreaterBash::IsHidden  (line 3226, @0x0000000002b16360, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_GreaterBash::IsHidden(CDOTA_Modifier_Nian_GreaterBash *const this)
{
  return 1;
}


// CDOTA_Modifier_Nian_GreaterBash::OnCreated  (line 3244, @0x0000000002b0a860, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "movespeed_duration"
void __fastcall CDOTA_Modifier_Nian_GreaterBash::OnCreated(CDOTA_Modifier_Nian_GreaterBash *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->chance_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "chance_pct", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->damage = 0.0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->chance_pct = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "damage", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->movespeed_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "movespeed_duration", -1, 0);
    return;
  }
LABEL_7:
  this->movespeed_duration = 0.0;
}


// CDOTA_Modifier_Nian_GreaterBash::OnRefresh  (line 3253, @0x0000000002b0a930, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "movespeed_duration"
void __fastcall CDOTA_Modifier_Nian_GreaterBash::OnRefresh(CDOTA_Modifier_Nian_GreaterBash *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->chance_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "chance_pct", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->damage = 0.0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->chance_pct = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "damage", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->movespeed_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "movespeed_duration", -1, 0);
    return;
  }
LABEL_7:
  this->movespeed_duration = 0.0;
}


// CDOTA_Modifier_Nian_GreaterBash::DeclareFunctions  (line 3262, @0x0000000002ae7f70, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Nian_GreaterBash::OnAttackLanded(CModifierParams const&)
void __fastcall CDOTA_Modifier_Nian_GreaterBash::DeclareFunctions(CDOTA_Modifier_Nian_GreaterBash *const this)
{
  this->m_Functions[121].__pfn = CDOTA_Modifier_Nian_GreaterBash::OnAttackLanded;
  this->m_Functions[121].__delta = 0;
}


// CDOTA_Modifier_Nian_GreaterBash::OnAttackLanded  (line 3269, @0x0000000002b00f90, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, RollPercentage, CDOTA_Modifier_Nian_GreaterBash::DoBash
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Nian_GreaterBash::OnAttackLanded(
        CDOTA_Modifier_Nian_GreaterBash *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  CDOTA_BaseNPC *v7; // r14
  CEntityIdentity *v8; // rdx
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *v12; // r12
  CDOTABaseAbility *Ability; // rax
  uint32 m_iUnitType; // eax
  CDOTABaseAbility *v16; // rax
  ModifierVariant_t result; // 0:rax.16

  if ( !CDOTA_Buff::GetAbility(this)->m_bStolen.m_Value )
  {
    m_Index = params->hattacker.m_Index;
    if ( m_Index + 2 > 1
      && (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) != 0 )
    {
      m_pInstance = 0;
      v7 = 0;
      v8 = &v5[params->hattacker.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
      {
        m_pInstance = v8->m_pInstance;
        if ( v8->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
          v7 = v8->m_pInstance;
      }
    }
    else
    {
      m_pInstance = 0;
      v7 = 0;
    }
    v9 = params->htarget.m_Index;
    if ( v9 + 2 <= 1
      || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
      || (v11 = &v10[params->htarget.m_Index & 0x1FF]) == 0
      || v9 != v11->m_EHandle.m_Index
      || (v12 = v11->m_pInstance, v11->m_pInstance == 0)
      || !v12->m_bIsDOTANPC )
    {
      v12 = 0;
    }
    if ( m_pInstance != 0
      && m_pInstance->m_bIsDOTANPC
      && CDOTA_Buff::GetParent(this) == m_pInstance
      && v12 != 0
      && v7 != 0 )
    {
      Ability = CDOTA_Buff::GetAbility(this);
      if ( (*(Ability->_vptr_IHandleEntity + 245))(Ability) != 0 && !v7->m_bIsIllusion.m_Value )
      {
        m_iUnitType = v12->m_iUnitType;
        if ( (m_iUnitType & 0x10) == 0
          && (m_iUnitType & 0x193) != 0
          && v12->m_iTeamNum.m_Value != v7->m_iTeamNum.m_Value )
        {
          *&result.m_eType = 1;
          if ( (v7->m_nUnitState64.m_Value & 0x10000000) != 0 )
            goto LABEL_15;
          if ( RollPercentage(this->chance_pct) )
          {
            CDOTA_Modifier_Nian_GreaterBash::DoBash(this, v12);
            v16 = CDOTA_Buff::GetAbility(this);
            (*(v16->_vptr_IHandleEntity + 241))(v16, -1.0);
          }
        }
      }
    }
  }
  *&result.m_eType = 1;
LABEL_15:
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Nian_GreaterBash::DoBash  (line 3295, @0x0000000002b00c60, libserver.so)  // inlines: VectorAdd, VectorSubtract, operator+, operator-
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<float>, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::RemoveModifierByName, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, ApplyDamage, DOTA_EmitSound, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager (18 total)
// callers: CDOTA_Modifier_Nian_GreaterBash::OnAttackLanded, CDOTA_Ability_NianCharge::OnProjectileThink_ExtraData
// strings: "modifier_knockback", "center_x", "center_y", "Hero_Spirit_Breaker.GreaterBash", "particles/units/heroes/hero_spirit_breaker/spirit_breaker_greater_bash.vpcf", "attach_hitloc" (7 total)
void __fastcall CDOTA_Modifier_Nian_GreaterBash::DoBash(
        CDOTA_Modifier_Nian_GreaterBash *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // rax
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  CDOTABaseAbility *v9; // r14
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTABaseAbility *v12; // r14
  CDOTA_BaseNPC *v13; // rax
  const Vector *AbsOrigin; // r15
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  float v19; // xmm1_4
  CDOTABaseAbility *v20; // r15
  CDOTA_BaseNPC *v21; // r14
  CDOTA_BaseNPC *v22; // rax
  float vTarget_4; // [rsp+Ch] [rbp-84h]
  float duration; // [rsp+1Ch] [rbp-74h] BYREF
  KeyValues kv; // [rsp+20h] [rbp-70h] BYREF
  KeyValues kv2; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+58h] [rbp-38h]

  v27 = __readfsqword(0x28u);
  if ( pTarget != 0 )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<float>(Ability, &duration, "duration");
    CBaseEntity::GetAbsOrigin(pTarget);
    Caster = CDOTA_Buff::GetCaster(this);
    CBaseEntity::GetAbsOrigin(Caster);
    CBaseEntity::GetAbsOrigin(pTarget);
    CDOTA_BaseNPC::RemoveModifierByName(pTarget, "modifier_knockback");
    KeyValues::KeyValues(&kv, "modifier_knockback");
    KeyValues::SetFloat(&kv, "center_x", v6);
    KeyValues::SetFloat(&kv, "center_y", v7);
    KeyValues::SetFloat(&kv, "duration", v8);
    v9 = CDOTA_Buff::GetAbility(this);
    v10 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(pTarget, v10, v9, "modifier_knockback", &kv, 0);
    v11 = CDOTA_Buff::GetCaster(this);
    vTarget_4 = (this->damage * (*(v11->_vptr_IHandleEntity + 386))(v11)) / 100.0;
    v12 = CDOTA_Buff::GetAbility(this);
    v13 = CDOTA_Buff::GetCaster(this);
    ApplyDamage(v13, pTarget, v12, vTarget_4, 2, 0);
    DOTA_EmitSound(8, "Hero_Spirit_Breaker.GreaterBash", pTarget);
    LODWORD(v12) = CDOTA_Buff::CreateBuffParticleEffect(
                     this,
                     "particles/units/heroes/hero_spirit_breaker/spirit_breaker_greater_bash.vpcf",
                     2,
                     0,
                     0);
    AbsOrigin = CBaseEntity::GetAbsOrigin(pTarget);
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, v12, 0, pTarget, 5, "attach_hitloc", *AbsOrigin, 1);
    Parent = CDOTA_Buff::GetParent(this);
    v17 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v17, v12, 1, Parent, 1, 0, vec3_invalid, 1);
    v18 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v18, v12);
    KeyValues::KeyValues(&kv2, "modifier_nian_greater_bash_speed");
    KeyValues::SetFloat(&kv2, "duration", v19);
    v20 = CDOTA_Buff::GetAbility(this);
    v21 = CDOTA_Buff::GetCaster(this);
    v22 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v22, v21, v20, "modifier_nian_greater_bash_speed", &kv2, 0);
    KeyValues::~KeyValues(&kv2);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_Nian_GreaterBash_Speed::~CDOTA_Modifier_Nian_GreaterBash_Speed  (line 3331, @0x0000000002b1a5c0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Nian_GreaterBash_Speed::~CDOTA_Modifier_Nian_GreaterBash_Speed(
        CDOTA_Modifier_Nian_GreaterBash_Speed *const this)
{
  this->_vptr_CDOTA_Buff = &off_446A870;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Nian_GreaterBash_Speed::~CDOTA_Modifier_Nian_GreaterBash_Speed  (line 3331, @0x0000000002b1a5e0, libserver.so)  // inlines: ~CDOTA_Modifier_Nian_GreaterBash_Speed
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Nian_GreaterBash_Speed::~CDOTA_Modifier_Nian_GreaterBash_Speed(
        CDOTA_Modifier_Nian_GreaterBash_Speed *const this)
{
  this->_vptr_CDOTA_Buff = &off_446A870;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nian_GreaterBash_Speed::GetEffectName  (line 3337, @0x0000000002b16370, libserver.so)
// strings: "particles/units/heroes/hero_spirit_breaker/spirit_breaker_haste_owner.vpcf"
const char *__fastcall CDOTA_Modifier_Nian_GreaterBash_Speed::GetEffectName(
        CDOTA_Modifier_Nian_GreaterBash_Speed *const this)
{
  return "particles/units/heroes/hero_spirit_breaker/spirit_breaker_haste_owner.vpcf";
}


// CDOTA_Modifier_Nian_GreaterBash_Speed::IsHidden  (line 3340, @0x0000000002b16380, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_GreaterBash_Speed::IsHidden(CDOTA_Modifier_Nian_GreaterBash_Speed *const this)
{
  return 1;
}


// CDOTA_Modifier_Nian_GreaterBash_Speed::OnCreated  (line 3352, @0x0000000002b09d80, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_movespeed_pct"
void __fastcall CDOTA_Modifier_Nian_GreaterBash_Speed::OnCreated(
        CDOTA_Modifier_Nian_GreaterBash_Speed *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_movespeed_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_movespeed_pct", -1, 0);
  else
    this->bonus_movespeed_pct = 0;
}


// CDOTA_Modifier_Nian_GreaterBash_Speed::DeclareFunctions  (line 3359, @0x0000000002ae7f90, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Nian_GreaterBash_Speed::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Nian_GreaterBash_Speed::DeclareFunctions(
        CDOTA_Modifier_Nian_GreaterBash_Speed *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Nian_GreaterBash_Speed::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Nian_GreaterBash_Speed::GetModifierMoveSpeedBonus_Percentage  (line 3366, @0x0000000002ae7fb0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Nian_GreaterBash_Speed::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Nian_GreaterBash_Speed *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_movespeed_pct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_NianCharge::OnAbilityPhaseStart  (line 3375, @0x0000000002ae8ac0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::StartGesture, CDOTA_BaseNPC::UnitEmitSound
// strings: "Nian.Charge.PreAttack"
bool __fastcall CDOTA_Ability_NianCharge::OnAbilityPhaseStart(CDOTA_Ability_NianCharge *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(Caster, 1605, 0.1, 0.0, 4, 0, 1.0);
  v3 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v3, "Nian.Charge.PreAttack", 0.0, 0, 0);
  return 1;
}


// CDOTA_Ability_NianCharge::OnAbilityPhaseInterrupted  (line 3385, @0x0000000002aec990, libserver.so)
// calls: Msg, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveGesture, CBaseEntity::StopSound
// strings: "CDOTA_Ability_NianCharge::OnAbilityPhaseInterrupted", "Nian.Charge.PreAttack"
void __fastcall CDOTA_Ability_NianCharge::OnAbilityPhaseInterrupted(CDOTA_Ability_NianCharge *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax

  Msg("CDOTA_Ability_NianCharge::OnAbilityPhaseInterrupted");
  if ( !this->m_bStolen.m_Value )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::RemoveGesture(Caster, 1605);
    v3 = CDOTABaseAbility::GetCaster(this);
    CBaseEntity::StopSound(v3, "Nian.Charge.PreAttack");
  }
}


// CDOTA_Ability_NianCharge::IsCooldownReady  (line 3400, @0x0000000002ae99e0, libserver.so)
// calls: CDOTABaseAbility::IsCooldownReady
bool __fastcall CDOTA_Ability_NianCharge::IsCooldownReady(CDOTA_Ability_NianCharge *const this)
{
  bool IsCooldownReady; // al
  bool v3; // dl

  IsCooldownReady = CDOTABaseAbility::IsCooldownReady(this);
  v3 = 0;
  if ( IsCooldownReady )
    return !this->m_bPinning;
  return v3;
}


// CDOTA_Ability_NianCharge::OnSpellStart  (line 3409, @0x0000000002b0e980, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, Color, CopyConstruct<CHandle<CBaseEntity> >, Element, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<int>, GetSerialNumber, GrowMemory, InState, IsInvulnerable, RemoveAll, Set, ToDOTABaseNPC, operator=, operator[], sTrackingProjectileCreateInfo
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CDOTABaseAbility::CreateAbilityParticleEffect, GetParticleManager, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTALocomotor::ApplyHorizontalMotionController, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::KeyValues, KeyValues::SetInt, CBaseEntity::GetAbsOrigin, CDOTA_ProjectileManager::CreateTrackingProjectile, CDOTA_BaseNPC::AddNewModifier (18 total)
// strings: "particles/units/heroes/hero_spirit_breaker/spirit_breaker_charge_start.vpcf", "charge_of_darkness_projectile", "modifier_nian_charge"
void __fastcall CDOTA_Ability_NianCharge::OnSpellStart(CDOTA_Ability_NianCharge *const this)
{
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v3; // r12
  CDOTA_BaseNPC *Caster; // rax
  int AbilityParticleEffect; // r13d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTALocomotor *v8; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v10; // eax
  __int16 v11; // cx
  int LevelSpecialValue; // eax
  int v13; // r14d
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v16; // rax
  CEntityIdentity *v17; // rax
  int v18; // edx
  __int16 v19; // cx
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC *v21; // r14
  CDOTA_BaseNPC *v22; // rax
  __int64 m_Size; // r14
  int v24; // eax
  CHandle<CBaseEntity> *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  KeyValues kv_projectile; // [rsp+0h] [rbp-D0h] BYREF
  KeyValues kv; // [rsp+20h] [rbp-B0h] BYREF
  sTrackingProjectileCreateInfo info; // [rsp+40h] [rbp-90h] BYREF
  unsigned __int64 v30; // [rsp+A8h] [rbp-28h]

  v30 = __readfsqword(0x28u);
  if ( !this->m_bPinning )
  {
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    v3 = CursorTarget;
    if ( CursorTarget != 0
      && CursorTarget->m_bIsDOTANPC
      && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0
      && (BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 1) == 0 )
    {
      Caster = CDOTABaseAbility::GetCaster(this);
      AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                                this,
                                "particles/units/heroes/hero_spirit_breaker/spirit_breaker_charge_start.vpcf",
                                1,
                                Caster,
                                0);
      ParticleManager = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(ParticleManager, AbilityParticleEffect);
      v7 = CDOTABaseAbility::GetCaster(this);
      v8 = (*(v7->_vptr_IHandleEntity + 376))(v7);
      if ( CDOTALocomotor::ApplyHorizontalMotionController(v8, &this->CHorizontalMotionController, 0) )
      {
        m_pEntity = v3->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v10 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          v11 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(this->m_hTarget.m_Index) = v11 | this->m_hTarget.m_Index & 0x8000;
          this->m_hTarget.m_Index = (v10 << 15) | this->m_hTarget.m_Index & 0x7FFF;
        }
        else
        {
          this->m_hTarget.m_Index = -1;
        }
        LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "movement_speed", -1, 0);
        ++this->m_iCurProjectileIndex;
        v13 = LevelSpecialValue;
        KeyValues::KeyValues(&kv_projectile, "charge_of_darkness_projectile");
        KeyValues::SetInt(&kv_projectile, "id", this->m_iCurProjectileIndex);
        info.bProvidesVision = 0;
        info.hSource.m_Index = -1;
        info.hTarget.m_Index = -1;
        info.colorGemColor = 0;
        info.pAttackRecord = 0;
        info.pszEffectName = 0;
        info.vSourceLoc.x = vec3_origin.x;
        y = vec3_origin.y;
        info.iSourceAttachment = 1;
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
        info.pAbility = this;
        info.iMoveSpeed = v13;
        v16 = CDOTABaseAbility::GetCaster(this);
        info.vSourceLoc = *CBaseEntity::GetAbsOrigin(v16);
        v17 = v3->m_pEntity;
        if ( v17 != 0 )
        {
          v18 = (v17->m_EHandle.m_Index >> 15) - (v17->m_flags & 1);
          v19 = 0x7FFF;
          if ( v17->m_EHandle.m_Index != -1 )
            v19 = v17->m_EHandle.m_Index & 0x7FFF;
          LOWORD(info.hTarget.m_Index) = v19 | info.hTarget.m_Index & 0x8000;
          info.hTarget.m_Index = (v18 << 15) | info.hTarget.m_Index & 0x7FFF;
        }
        else
        {
          info.hTarget.m_Index = -1;
        }
        info.bDodgeable = 0;
        info.bProvidesVision = 0;
        info.pKVExtraData = &kv_projectile;
        v20 = CDOTABaseAbility::GetCaster(this);
        this->m_vProjectileLocation = *CBaseEntity::GetAbsOrigin(v20);
        CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
        KeyValues::KeyValues(&kv, "modifier_nian_charge");
        v21 = CDOTABaseAbility::GetCaster(this);
        v22 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v22, v21, this, "modifier_nian_charge", &kv, 0);
        this->m_hTrackingProjectileTrees.m_Size = 0;
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTrackingProjectileHits);
        m_Size = this->m_hTrackingProjectileHits.m_Size;
        v24 = this->m_hTrackingProjectileHits.m_Size;
        if ( m_Size == this->m_hTrackingProjectileHits.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hTrackingProjectileHits.m_Memory, 1);
          v24 = this->m_hTrackingProjectileHits.m_Size;
        }
        this->m_hTrackingProjectileHits.m_Size = v24 + 1;
        v25 = &this->m_hTrackingProjectileHits.m_Memory.m_pMemory[m_Size];
        if ( v25 != 0 )
          v25->m_Index = this->m_hTarget;
        this->m_bChargeFinished = 0;
        this->m_bPlayedChargeAnimation = 0;
        this->m_bPinning = 0;
        v26 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::ClearPseudoQueuedOrder(v26);
        KeyValues::~KeyValues(&kv);
        KeyValues::~KeyValues(&kv_projectile);
      }
    }
  }
}


// CDOTA_Ability_NianCharge::OnProjectileHit_ExtraData  (line 3465, @0x0000000002af1900, libserver.so)  // inlines: DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: KeyValues::GetInt, CDOTABaseAbility::EndChannel, __stack_chk_fail, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::RemoveGesture, CDOTA_BaseNPC::StartGesture, KeyValues::~KeyValues, _Unwind_Resume
// strings: "modifier_nian_charge_pinned"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_NianCharge::OnProjectileHit_ExtraData(
        CDOTA_Ability_NianCharge *const this,
        _DWORD *hTarget,
        const Vector *const vLocation,
        KeyValues *pExtraData)
{
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  float v10; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  float v16; // xmm0_4
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-28h]

  v18 = __readfsqword(0x28u);
  if ( !this->m_bChargeFinished && KeyValues::GetInt(pExtraData, "id", 0) == this->m_iCurProjectileIndex )
  {
    if ( (*hTarget + 2) > 1
      && (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F]) != 0
      && (v8 = &v7[*hTarget & 0x1FF]) != 0
      && *hTarget == v8->m_EHandle.m_Index
      && (m_pInstance = v8->m_pInstance, v8->m_pInstance != 0)
      && m_pInstance->m_bIsDOTANPC )
    {
      KeyValues::KeyValues(&kv, "modifier_nian_charge_pinned");
      KeyValues::SetFloat(&kv, "duration", v10);
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, Caster, this, "modifier_nian_charge_pinned", &kv, 0);
      v12 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::RemoveGesture(v12, 1605);
      v13 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::RemoveGesture(v13, 1606);
      v14 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::StartGesture(v14, 1655, 0.1, 0.0, 0, 0, 1.0);
      v15 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::StartGesture(v15, 1656, 0.0, 0.1, 9, 0, 1.0);
      this->m_bChargeFinished = 1;
      v16 = 0.0;
      this->m_bPinning = 1;
      if ( g_pGameRules != 0 )
        v16 = *&g_pGameRules[18].m_szQuestName[20];
      this->m_flPinStartTime = v16;
      KeyValues::~KeyValues(&kv);
    }
    else
    {
      CDOTABaseAbility::EndChannel(this, 1);
    }
  }
  return 1;
}


// CDOTA_Ability_NianCharge::OnProjectileThink_ExtraData  (line 3502, @0x0000000002b10ee0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Color, CopyConstruct<CDOTA_Tree*>, CopyConstruct<CHandle<CBaseEntity> >, Element, FastSqrt, Find, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, GrowMemory, HasElement, InState, IndexToIdentity, IsInvulnerable, IsValid, Length2D, LookupEntity, Purge, RemoveAll, Set, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=, operator[], sTrackingProjectileCreateInfo, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: KeyValues::GetInt, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCaster, VectorAngles, CBaseEntity::SetAbsAngles, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTA_Modifier_Nian_GreaterBash::DoBash (27 total)
// strings: "modifier_nian_greater_bash", "bash_radius", "charge_of_darkness_projectile", "particles/units/heroes/hero_spirit_breaker/spirit_breaker_charge_tree.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_NianCharge::OnProjectileThink_ExtraData(
        CDOTA_Ability_NianCharge *const this,
        const Vector *const vLocation,
        KeyValues *pExtraData)
{
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // rax
  vec_t v6; // xmm0_4
  vec_t v7; // xmm1_4
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  int v10; // eax
  __m128i v11; // xmm3
  float v12; // r13d
  CDOTA_BaseNPC *v13; // r12
  CDOTA_BaseNPC *v14; // rax
  __int64 v15; // r12
  int i; // r13d
  CHandle<CBaseEntity> *v17; // rsi
  uint32 m_Index; // eax
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CEntityInstance *m_pInstance; // r14
  __int64 v22; // r14
  CHandle<CBaseEntity> *v23; // r15
  int v24; // eax
  CHandle<CBaseEntity> *v25; // rax
  CDOTA_BaseNPC *Caster; // rax
  int LevelSpecialValue; // eax
  int v28; // r13d
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v31; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v33; // eax
  __int16 v34; // cx
  CDOTA_BaseNPC *v35; // rax
  __int64 m_Size; // r13
  int v37; // eax
  CHandle<CBaseEntity> *v38; // rax
  __int64 v39; // r12
  __int64 v40; // r14
  const CBaseEntity *v41; // r13
  int v42; // ecx
  CHandle<CBaseEntity> *v43; // rax
  CDOTA_Tree **m_pMemory; // rdx
  CDOTA_Tree *v45; // rsi
  CDOTA_Tree **v46; // rdx
  int v47; // eax
  int AbilityParticleEffect; // r15d
  const Vector *v49; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v51; // rax
  __int64 v52; // r13
  CHandle<CBaseEntity> *v53; // r14
  int v54; // eax
  CDOTA_Tree **v55; // rax
  CDOTA_BaseNPC *v56; // rax
  const Vector *v57; // r12
  const Vector *v58; // rax
  float v59; // xmm1_4
  float v60; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  CDOTA_Modifier_Nian_GreaterBash *pBashBuff; // [rsp+18h] [rbp-148h]
  CDOTA_BaseNPC *pPrimaryTarget; // [rsp+28h] [rbp-138h]
  uint32 v66[4]; // [rsp+50h] [rbp-110h] BYREF
  Vector vToTarget; // [rsp+60h] [rbp-100h] BYREF
  QAngle faceTargetAngles; // [rsp+70h] [rbp-F0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+80h] [rbp-E0h] BYREF
  KeyValues kv_projectile; // [rsp+A0h] [rbp-C0h] BYREF
  sTrackingProjectileCreateInfo info; // [rsp+C0h] [rbp-A0h] BYREF
  unsigned __int64 v72; // [rsp+128h] [rbp-38h]

  v72 = __readfsqword(0x28u);
  if ( !this->m_bChargeFinished && KeyValues::GetInt(pExtraData, "id", 0) == this->m_iCurProjectileIndex )
  {
    this->m_vProjectileLocation.x = vLocation->x;
    this->m_vProjectileLocation.y = vLocation->y;
    this->m_vProjectileLocation.z = vLocation->z;
    pPrimaryTarget = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
    if ( pPrimaryTarget == 0
      || !pPrimaryTarget->m_bIsDOTANPC
      || (*(pPrimaryTarget->_vptr_IHandleEntity + 408))(pPrimaryTarget) == 0 )
    {
      hEntities.m_Size = 0;
      hEntities.m_Memory.m_pMemory = 0;
      hEntities.m_Memory.m_nAllocationCount = 0;
      hEntities.m_Memory.m_nGrowSize = 0;
      Caster = CDOTABaseAbility::GetCaster(this);
      FindUnitsInRadius(Caster->m_iTeamNum.m_Value, &this->m_vTargetLocation, 0, 4000.0, &hEntities, 2, 19, 384, 1, 0);
      if ( hEntities.m_Size == 0 )
      {
        (*(this->_vptr_IHandleEntity + 334))(this);
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
        return;
      }
      this->m_hTarget.m_Index = hEntities.m_Memory.m_pMemory->m_Index;
      pPrimaryTarget = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
      if ( pPrimaryTarget == 0 || !pPrimaryTarget->m_bIsDOTANPC )
        pPrimaryTarget = 0;
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "movement_speed", -1, 0);
      ++this->m_iCurProjectileIndex;
      v28 = LevelSpecialValue;
      KeyValues::KeyValues(&kv_projectile, "charge_of_darkness_projectile");
      KeyValues::SetInt(&kv_projectile, "id", this->m_iCurProjectileIndex);
      info.bProvidesVision = 0;
      info.hSource.m_Index = -1;
      info.hTarget.m_Index = -1;
      info.colorGemColor = 0;
      info.bDrawsOnMinimap = 0;
      info.pszEffectName = 0;
      info.vSourceLoc.x = vec3_origin.x;
      y = vec3_origin.y;
      info.pAttackRecord = 0;
      info.vSourceLoc.y = y;
      z = vec3_origin.z;
      info.iSourceAttachment = 1;
      info.vSourceLoc.z = z;
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
      info.pAbility = this;
      info.iMoveSpeed = v28;
      v31 = CDOTABaseAbility::GetCaster(this);
      info.vSourceLoc = *CBaseEntity::GetAbsOrigin(v31);
      if ( pPrimaryTarget != 0 && (m_pEntity = pPrimaryTarget->m_pEntity) != 0 )
      {
        v33 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v34 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v34 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(info.hTarget.m_Index) = v34 | info.hTarget.m_Index & 0x8000;
        info.hTarget.m_Index = (v33 << 15) | info.hTarget.m_Index & 0x7FFF;
      }
      else
      {
        info.hTarget.m_Index = -1;
      }
      info.bDodgeable = 0;
      info.bReplaceExisting = 1;
      info.bProvidesVision = 1;
      info.pKVExtraData = &kv_projectile;
      v35 = CDOTABaseAbility::GetCaster(this);
      this->m_vProjectileLocation = *CBaseEntity::GetAbsOrigin(v35);
      CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
      m_Size = this->m_hTrackingProjectileHits.m_Size;
      v37 = this->m_hTrackingProjectileHits.m_Size;
      if ( m_Size == this->m_hTrackingProjectileHits.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hTrackingProjectileHits.m_Memory, 1);
        v37 = this->m_hTrackingProjectileHits.m_Size;
      }
      this->m_hTrackingProjectileHits.m_Size = v37 + 1;
      v38 = &this->m_hTrackingProjectileHits.m_Memory.m_pMemory[m_Size];
      if ( v38 != 0 )
        v38->m_Index = this->m_hTarget;
      KeyValues::~KeyValues(&kv_projectile);
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
    }
    this->m_vTargetLocation = *CBaseEntity::GetAbsOrigin(pPrimaryTarget);
    v4 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
    v6 = this->m_vTargetLocation.y - AbsOrigin->y;
    v7 = this->m_vTargetLocation.x - AbsOrigin->x;
    vToTarget.z = 0.0;
    vToTarget.y = v6;
    vToTarget.x = v7;
    VectorAngles(&vToTarget, &faceTargetAngles);
    v8 = CDOTABaseAbility::GetCaster(this);
    CBaseEntity::SetAbsAngles(v8, &faceTargetAngles);
    v9 = CDOTABaseAbility::GetCaster(this);
    pBashBuff = CDOTA_BaseNPC::FindModifierByName(v9, "modifier_nian_greater_bash", 0);
    if ( pBashBuff != 0 )
    {
      v10 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bash_radius", -1, 0);
      hEntities.m_Size = 0;
      hEntities.m_Memory.m_pMemory = 0;
      *v11.m128i_i32 = v10;
      hEntities.m_Memory.m_nAllocationCount = 0;
      hEntities.m_Memory.m_nGrowSize = 0;
      v12 = COERCE_FLOAT(_mm_cvtsi128_si32(v11));
      v13 = CDOTABaseAbility::GetCaster(this);
      v14 = CDOTABaseAbility::GetCaster(this);
      FindUnitsInRadius(v14->m_iTeamNum.m_Value, vLocation, v13, v12, &hEntities, 2, 3, 16, 0, 0);
      v15 = 0;
      for ( i = 0; hEntities.m_Size > i; ++v15 )
      {
        v17 = &hEntities.m_Memory.m_pMemory[v15];
        m_Index = hEntities.m_Memory.m_pMemory[v15].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v17->m_Index) >> 9) & 0x3F];
          if ( v19 != 0 )
          {
            v20 = &v19[v17->m_Index & 0x1FF];
            if ( v20 != 0 && m_Index == v20->m_EHandle.m_Index )
            {
              m_pInstance = v20->m_pInstance;
              if ( v20->m_pInstance != 0
                && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                && CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                     &this->m_hTrackingProjectileHits,
                     v17) < 0
                && LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0
                && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 1) == 0
                && !CDOTA_BaseNPC::TriggerSpellAbsorb(m_pInstance, this, 1) )
              {
                CDOTA_Modifier_Nian_GreaterBash::DoBash(pBashBuff, m_pInstance);
                v22 = this->m_hTrackingProjectileHits.m_Size;
                v23 = &hEntities.m_Memory.m_pMemory[v15];
                v24 = this->m_hTrackingProjectileHits.m_Size;
                if ( v22 == this->m_hTrackingProjectileHits.m_Memory.m_nAllocationCount )
                {
                  CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hTrackingProjectileHits.m_Memory, 1);
                  v24 = this->m_hTrackingProjectileHits.m_Size;
                }
                this->m_hTrackingProjectileHits.m_Size = v24 + 1;
                v25 = &this->m_hTrackingProjectileHits.m_Memory.m_pMemory[v22];
                if ( v25 != 0 )
                  v25->m_Index = v23->m_Index;
              }
            }
          }
        }
        ++i;
      }
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
    }
    hEntities.m_Size = 0;
    hEntities.m_Memory.m_pMemory = 0;
    hEntities.m_Memory.m_nAllocationCount = 0;
    hEntities.m_Memory.m_nGrowSize = 0;
    CGridNav::GetStandingTreesAroundPoint(&g_GridNav, *vLocation, 200.0, 0, &hEntities);
    if ( hEntities.m_Size > 0 )
    {
      v39 = 0;
      while ( 1 )
      {
        v40 = 2 * v39;
        v41 = (*(**&hEntities.m_Memory.m_pMemory[2 * v39].m_Index + 64LL))(*&hEntities.m_Memory.m_pMemory[2 * v39].m_Index);
        if ( v41 != 0 )
        {
          v42 = this->m_hTrackingProjectileTrees.m_Size;
          v43 = &hEntities.m_Memory.m_pMemory[v40];
          if ( v42 <= 0 )
            goto LABEL_49;
          m_pMemory = this->m_hTrackingProjectileTrees.m_Memory.m_pMemory;
          v45 = *&v43->m_Index;
          if ( *m_pMemory != *&v43->m_Index )
            break;
        }
LABEL_53:
        if ( hEntities.m_Size <= ++v39 )
          goto LABEL_54;
      }
      v46 = m_pMemory + 1;
      v47 = 0;
      while ( ++v47 != v42 )
      {
        if ( *v46++ == v45 )
        {
          if ( v47 >= 0 )
            goto LABEL_53;
          break;
        }
      }
LABEL_49:
      AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                                this,
                                "particles/units/heroes/hero_spirit_breaker/spirit_breaker_charge_tree.vpcf",
                                8,
                                0,
                                0);
      v49 = CBaseEntity::GetAbsOrigin(v41);
      ParticleManager = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(ParticleManager, AbilityParticleEffect, 0, *&v49->x, v49->z);
      v51 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v51, AbilityParticleEffect);
      v52 = this->m_hTrackingProjectileTrees.m_Size;
      v53 = &hEntities.m_Memory.m_pMemory[v40];
      v54 = this->m_hTrackingProjectileTrees.m_Size;
      if ( v52 == this->m_hTrackingProjectileTrees.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CDOTA_Tree *,int>::Grow(&this->m_hTrackingProjectileTrees.m_Memory, 1);
        v54 = this->m_hTrackingProjectileTrees.m_Size;
      }
      this->m_hTrackingProjectileTrees.m_Size = v54 + 1;
      v55 = &this->m_hTrackingProjectileTrees.m_Memory.m_pMemory[v52];
      if ( v55 != 0 )
        *v55 = *&v53->m_Index;
      goto LABEL_53;
    }
LABEL_54:
    v56 = CDOTABaseAbility::GetCaster(this);
    v57 = CBaseEntity::GetAbsOrigin(v56);
    v58 = CBaseEntity::GetAbsOrigin(pPrimaryTarget);
    v59 = v58->y - v57->y;
    v60 = fsqrt(((v58->x - v57->x) * (v58->x - v57->x)) + (v59 * v59));
    if ( v60 < 200.0 )
    {
      vptr_IHandleEntity = this->_vptr_IHandleEntity;
      v66[0] = this->m_hTarget.m_Index;
      vptr_IHandleEntity[290](this, v66, vLocation, pExtraData);
    }
    else if ( !this->m_bPlayedChargeAnimation && v60 < 350.0 )
    {
      this->m_bPlayedChargeAnimation = 1;
    }
    hEntities.m_Size = 0;
    if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CDOTA_Tree *,int>::Purge(&hEntities.m_Memory);
      if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CDOTA_Tree *,int>::Purge(&hEntities.m_Memory);
    }
  }
}


// CDOTA_Ability_NianCharge::UpdateHorizontalMotion  (line 3620, @0x0000000002af3680, libserver.so)  // inlines: DOTAGameRules, DistTo, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, IndexToIdentity, IsValid, Length, LookupEntity, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CEntityInstance*, operator->, operator=
// calls: CBaseEntity::SetAbsOrigin, CBaseEntity::GetAbsOrigin, CEntityHandle::operator CEntityInstance*, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_nian_big_flinch"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_NianCharge::UpdateHorizontalMotion(
        CDOTA_Ability_NianCharge *const this,
        CDOTA_BaseNPC *me,
        double a3,
        float dt)
{
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  const Vector *AbsOrigin; // rax
  const CBaseEntity *v10; // rax
  float v11; // xmm1_4
  float v12; // xmm1_4
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-28h]

  v14 = __readfsqword(0x28u);
  if ( this->m_bPinning
    && (m_Index = this->m_hTarget.m_Index) + 2 > 1
    && (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v8 = &v7[this->m_hTarget.m_Index & 0x1FF]) != 0
    && m_Index == v8->m_EHandle.m_Index
    && v8->m_pInstance != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(v8->m_pInstance);
    if ( fsqrt(
           (((this->m_vProjectileLocation.x - AbsOrigin->x) * (this->m_vProjectileLocation.x - AbsOrigin->x))
          + ((this->m_vProjectileLocation.y - AbsOrigin->y) * (this->m_vProjectileLocation.y - AbsOrigin->y)))
         + ((this->m_vProjectileLocation.z - AbsOrigin->z) * (this->m_vProjectileLocation.z - AbsOrigin->z))) > 350.0 )
    {
      v10 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
      this->m_vProjectileLocation = *CBaseEntity::GetAbsOrigin(v10);
    }
    CBaseEntity::SetAbsOrigin(me, &this->m_vProjectileLocation);
    if ( (*(*engine + 160LL))(engine) == 0 )
    {
      v11 = 0.0;
      if ( g_pGameRules != 0 )
        v11 = *&g_pGameRules[18].m_szQuestName[20];
      if ( v11 > (this->m_flPinStartTime + 3.0) )
      {
        KeyValues::KeyValues(&kv, "modifier_nian_big_flinch");
        KeyValues::SetFloat(&kv, "duration", v12);
        CDOTA_BaseNPC::AddNewModifier(me, me, 0, "modifier_nian_big_flinch", &kv, 0);
        KeyValues::~KeyValues(&kv);
      }
    }
  }
  else
  {
    CBaseEntity::SetAbsOrigin(me, &this->m_vProjectileLocation);
  }
}


// CDOTA_Ability_NianCharge::OnHorizontalMotionInterrupted  (line 3647, @0x0000000002aebaf0, libserver.so)
// calls: Msg, CDOTABaseAbility::EndChannel
// strings: "CDOTA_Ability_NianCharge::OnHorizontalMotionInterrupted Ending Nian charge channel\n"
void __fastcall CDOTA_Ability_NianCharge::OnHorizontalMotionInterrupted(CDOTA_Ability_NianCharge *const this)
{
  Msg("CDOTA_Ability_NianCharge::OnHorizontalMotionInterrupted Ending Nian charge channel\n");
  CDOTABaseAbility::EndChannel(this, 1);
}


// CDOTA_Ability_NianCharge::OnChannelFinish  (line 3657, @0x0000000002af1b10, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: Msg, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveGesture, CDOTALocomotor::RemoveHorizontalMotionController, CDOTA_BaseNPC::RemoveModifierByName, CBaseEntity::StopSound, CDOTA_BaseNPC::UnitEmitSound, CDOTA_BaseNPC::StartGesture, CDOTA_BaseNPC::FindModifierByName
// strings: "CDOTA_Ability_NianCharge::OnChannelFinish\n", "modifier_nian_charge", "Nian.Charge.Pin", "Nian.Charge.PostAttack", "modifier_nian_charge_pinned"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_NianCharge::OnChannelFinish(CDOTA_Ability_NianCharge *const this, bool bInterrupted)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTALocomotor *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTA_Buff *ModifierByName; // rax

  Msg("CDOTA_Ability_NianCharge::OnChannelFinish\n", bInterrupted);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveGesture(Caster, 1605);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveGesture(v4, 1606);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveGesture(v5, 1655);
  v6 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveGesture(v6, 1656);
  if ( this->m_bPinning )
  {
    v15 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::StartGesture(v15, 1662, 0.0, 0.1, 0, 0, 1.0);
  }
  this->m_bChargeFinished = 1;
  this->m_bPinning = 0;
  v7 = CDOTABaseAbility::GetCaster(this);
  v8 = (*(v7->_vptr_IHandleEntity + 376))(v7);
  CDOTALocomotor::RemoveHorizontalMotionController(v8, &this->CHorizontalMotionController);
  v9 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v9, "modifier_nian_charge");
  v10 = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::StopSound(v10, "Nian.Charge.Pin");
  v11 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v11, "Nian.Charge.PostAttack", 0.0, 0, 0);
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v13 != 0 )
    {
      v14 = &v13[this->m_hTarget.m_Index & 0x1FF];
      if ( v14 != 0 && m_Index == v14->m_EHandle.m_Index )
      {
        m_pInstance = v14->m_pInstance;
        if ( v14->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          ModifierByName = CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_nian_charge_pinned", 0);
          if ( ModifierByName != 0 )
            (*(ModifierByName->_vptr_CDOTA_Buff + 63))(ModifierByName, 1, 1.87);
        }
      }
    }
  }
}


// CDOTA_Modifier_NianCharge::~CDOTA_Modifier_NianCharge  (line 3697, @0x0000000002b1a570, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_NianCharge::~CDOTA_Modifier_NianCharge(CDOTA_Modifier_NianCharge *const this)
{
  this->_vptr_CDOTA_Buff = &off_446B670;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_NianCharge::~CDOTA_Modifier_NianCharge  (line 3697, @0x0000000002b1a590, libserver.so)  // inlines: ~CDOTA_Modifier_NianCharge
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_NianCharge::~CDOTA_Modifier_NianCharge(CDOTA_Modifier_NianCharge *const this)
{
  this->_vptr_CDOTA_Buff = &off_446B670;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_NianCharge::IsHidden  (line 3705, @0x0000000002b16390, libserver.so)
bool __fastcall CDOTA_Modifier_NianCharge::IsHidden(CDOTA_Modifier_NianCharge *const this)
{
  return 1;
}


// CDOTA_Modifier_NianCharge::IsPurgable  (line 3711, @0x0000000002b163a0, libserver.so)
bool __fastcall CDOTA_Modifier_NianCharge::IsPurgable(CDOTA_Modifier_NianCharge *const this)
{
  return 0;
}


// CDOTA_Modifier_NianCharge::GetEffectName  (line 3712, @0x0000000002b163b0, libserver.so)
// strings: "particles/units/heroes/hero_spirit_breaker/spirit_breaker_charge.vpcf"
const char *__fastcall CDOTA_Modifier_NianCharge::GetEffectName(CDOTA_Modifier_NianCharge *const this)
{
  return "particles/units/heroes/hero_spirit_breaker/spirit_breaker_charge.vpcf";
}


// CDOTA_Modifier_NianCharge::OnCreated  (line 3725, @0x0000000002ae8fd0, libserver.so)
// calls: CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_NianCharge::OnCreated(CDOTA_Modifier_NianCharge *const this, KeyValues *pKV)
{
  float v2; // xmm1_4

  CDOTA_Buff::StartIntervalThink(this, 0.1, v2);
}


// CDOTA_Modifier_NianCharge::OnDestroy  (line 3735, @0x0000000002aea960, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveGesture, Msg
// strings: "CDOTA_Modifier_NianCharge::OnDestroy\n"
void __fastcall CDOTA_Modifier_NianCharge::OnDestroy(CDOTA_Modifier_NianCharge *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveGesture(Parent, 1605);
  v3 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveGesture(v3, 1606);
  Msg("CDOTA_Modifier_NianCharge::OnDestroy\n");
}


// CDOTA_Modifier_NianCharge::OnIntervalThink  (line 3745, @0x0000000002aea1f0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::StartGesture, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_NianCharge::OnIntervalThink(CDOTA_Modifier_NianCharge *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax

  if ( CDOTA_Buff::GetParent(this) != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Parent, "nian_charge", 0);
    if ( AbilityByName != 0 && BYTE6(AbilityByName[1].m_pEntity) == 0 )
    {
      Caster = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::StartGesture(Caster, 1606, 0.1, 0.0, 5, 0, 1.0);
    }
    CDOTA_Buff::StartIntervalThink(this, -1.0, v4);
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_NianCharge::DeclareFunctions  (line 3768, @0x0000000002ae7fd0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_NianCharge::OnOrder(CModifierParams const&), CDOTA_Modifier_NianCharge::OnStateChanged(CModifierParams const&)
void __fastcall CDOTA_Modifier_NianCharge::DeclareFunctions(CDOTA_Modifier_NianCharge *const this)
{
  this->m_Functions[125].__pfn = CDOTA_Modifier_NianCharge::OnOrder;
  this->m_Functions[125].__delta = 0;
  this->m_Functions[135].__delta = 0;
  this->m_Functions[135].__pfn = CDOTA_Modifier_NianCharge::OnStateChanged;
}


// CDOTA_Modifier_NianCharge::OnOrder  (line 3776, @0x0000000002ae8010, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_NianCharge::OnOrder(
        CDOTA_Modifier_NianCharge *const this,
        const CModifierParams *const params)
{
  return 1uLL;
}


// CDOTA_Modifier_NianCharge::OnStateChanged  (line 3810, @0x0000000002af0af0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTABaseAbility::EndChannel
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_NianCharge::OnStateChanged(
        CDOTA_Modifier_NianCharge *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTABaseAbility *Ability; // rax

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    return 1uLL;
  v5 = &v4[params->hunit.m_Index & 0x1FF];
  if ( v5 == 0 )
    return 1uLL;
  if ( m_Index != v5->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0
    || !m_pInstance->m_bIsDOTANPC
    || CDOTA_Buff::GetParent(this) != m_pInstance
    || (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x20) == 0
    && (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x40) == 0
    && (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 1) == 0 )
  {
    return 1uLL;
  }
  Ability = CDOTA_Buff::GetAbility(this);
  CDOTABaseAbility::EndChannel(Ability, 1);
  return 1uLL;
}


// CDOTA_Modifier_NianCharge::CheckState  (line 3824, @0x0000000002ae8020, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_NianCharge::CheckState(
        CDOTA_Modifier_NianCharge *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x2000000uLL;
  buffState->m_nDisabledStateMask &= ~0x2000000uLL;
}


// CDOTA_Modifier_NianChargePinned::~CDOTA_Modifier_NianChargePinned  (line 3835, @0x0000000002b1a520, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_NianChargePinned::~CDOTA_Modifier_NianChargePinned(
        CDOTA_Modifier_NianChargePinned *const this)
{
  this->_vptr_CDOTA_Buff = &off_446B990;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_NianChargePinned::~CDOTA_Modifier_NianChargePinned  (line 3835, @0x0000000002b1a540, libserver.so)  // inlines: ~CDOTA_Modifier_NianChargePinned
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_NianChargePinned::~CDOTA_Modifier_NianChargePinned(
        CDOTA_Modifier_NianChargePinned *const this)
{
  this->_vptr_CDOTA_Buff = &off_446B990;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_NianChargePinned::IsHidden  (line 3843, @0x0000000002b163c0, libserver.so)
bool __fastcall CDOTA_Modifier_NianChargePinned::IsHidden(CDOTA_Modifier_NianChargePinned *const this)
{
  return 1;
}


// CDOTA_Modifier_NianChargePinned::IsPurgable  (line 3847, @0x0000000002b163d0, libserver.so)
bool __fastcall CDOTA_Modifier_NianChargePinned::IsPurgable(CDOTA_Modifier_NianChargePinned *const this)
{
  return 0;
}


// CDOTA_Modifier_NianChargePinned::GetStatusEffectName  (line 3848, @0x0000000002b163e0, libserver.so)
// strings: "particles/status_fx/status_effect_rupture.vpcf"
const char *__fastcall CDOTA_Modifier_NianChargePinned::GetStatusEffectName(
        CDOTA_Modifier_NianChargePinned *const this)
{
  return "particles/status_fx/status_effect_rupture.vpcf";
}


// CDOTA_Modifier_NianChargePinned::OnCreated  (line 3862, @0x0000000002b04800, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, CDOTA_Buff::CreateBuffParticleEffect, CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle, CBaseEntity::AddEffects, CDOTA_BaseNPC::UnitEmitSound
// strings: "pinned_damage_amount", "pinned_damage_interval", "nian_charged_pinned_debuff", "attach_pindown", "Nian.Charge.Pin"
void __fastcall CDOTA_Modifier_NianChargePinned::OnCreated(CDOTA_Modifier_NianChargePinned *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float v5; // xmm1_4
  float LevelSpecialValue; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax
  int BuffParticleEffect; // r12d
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->pinned_damage_amount = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    LevelSpecialValue = 0.0;
    this->pinned_damage_interval = 0.0;
    goto LABEL_4;
  }
  this->pinned_damage_amount = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "pinned_damage_amount", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "pinned_damage_interval", -1, 0);
  this->pinned_damage_interval = LevelSpecialValue;
LABEL_4:
  CDOTA_Buff::StartIntervalThink(this, LevelSpecialValue, v5);
  Parent = CDOTA_Buff::GetParent(this);
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(this, "nian_charged_pinned_debuff", 1, Parent, 0);
  Caster = CDOTA_Buff::GetCaster(this);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(
    ParticleManager,
    BuffParticleEffect,
    1,
    Caster,
    5,
    "attach_pindown",
    vec3_invalid,
    1);
  CDOTA_Buff::AddParticle(this, BuffParticleEffect, 0, 0, -1, 0, 0);
  v11 = CDOTA_Buff::GetParent(this);
  CBaseEntity::AddEffects(v11, 32);
  v12 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v12, "Nian.Charge.Pin", 0.0, 0, 0);
}


// CDOTA_Modifier_NianChargePinned::OnDestroy  (line 3882, @0x0000000002aef070, libserver.so)  // inlines: MarkPVSInformationDirty, RemoveEffects
// calls: CDOTA_Buff::GetParent, CBaseEntity::DispatchUpdateTransmitState, CDOTA_Buff::GetCaster, CBaseEntity::StopSound
// strings: "Nian.Charge.Pin"
void __fastcall CDOTA_Modifier_NianChargePinned::OnDestroy(CDOTA_Modifier_NianChargePinned *const this)
{
  CDOTA_BaseNPC *Parent; // rbx
  CDOTA_BaseNPC *Caster; // rax

  Parent = CDOTA_Buff::GetParent(this);
  (*(Parent->_vptr_IHandleEntity + 188))(Parent, Parent->m_fEffects.m_Value & 0xFFFFFFDF);
  Parent->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  CBaseEntity::DispatchUpdateTransmitState(Parent);
  Caster = CDOTA_Buff::GetCaster(this);
  CBaseEntity::StopSound(Caster, "Nian.Charge.Pin");
}


// CDOTA_Modifier_NianChargePinned::OnIntervalThink  (line 3890, @0x0000000002ae8ea0, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage
void __fastcall CDOTA_Modifier_NianChargePinned::OnIntervalThink(CDOTA_Modifier_NianChargePinned *const this)
{
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  float pinned_damage_amount; // [rsp+Ch] [rbp-24h]

  pinned_damage_amount = this->pinned_damage_amount;
  Ability = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, Parent, Ability, pinned_damage_amount, 2, 0);
}


// CDOTA_Modifier_NianChargePinned::DeclareFunctions  (line 3900, @0x0000000002ae8040, libserver.so)
void __fastcall CDOTA_Modifier_NianChargePinned::DeclareFunctions(CDOTA_Modifier_NianChargePinned *const this)
{
  ;
}


// CDOTA_Modifier_NianChargePinned::CheckState  (line 3906, @0x0000000002ae8050, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_NianChargePinned::CheckState(
        CDOTA_Modifier_NianChargePinned *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x23uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFFFFFDCLL;
}


// CDOTA_Ability_Nian_Tail_Swipe::~CDOTA_Ability_Nian_Tail_Swipe  (line 3919, @0x0000000002b1c370, libserver.so)  // inlines: ~CDOTA_Ability_Animation_Attack
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Nian_Tail_Swipe::~CDOTA_Ability_Nian_Tail_Swipe(
        CDOTA_Ability_Nian_Tail_Swipe *const this)
{
  this->_vptr_IHandleEntity = &off_44793B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Nian_Tail_Swipe::~CDOTA_Ability_Nian_Tail_Swipe  (line 3919, @0x0000000002b1c390, libserver.so)  // inlines: ~CDOTA_Ability_Animation_Attack, ~CDOTA_Ability_Nian_Tail_Swipe
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Nian_Tail_Swipe::~CDOTA_Ability_Nian_Tail_Swipe(
        CDOTA_Ability_Nian_Tail_Swipe *const this)
{
  this->_vptr_IHandleEntity = &off_44793B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Nian_Tail_Swipe::Schema_DynamicBinding  (line 3921, @0x0000000002b163f0, libserver.so)
// globals: CDOTA_Ability_Nian_Tail_Swipe::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nian_Tail_Swipe::Schema_DynamicBinding(
        const CDOTA_Ability_Nian_Tail_Swipe *const this)
{
  return CDOTA_Ability_Nian_Tail_Swipe::s_pSchemaBinding;
}


// CDOTA_Ability_Nian_Tail_Swipe::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 3921, @0x0000000002b16400, libserver.so)
// globals: CDOTA_Ability_Nian_Tail_Swipe::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nian_Tail_Swipe::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Nian_Tail_Swipe::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nian_Tail_Swipe::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Nian_Tail_Swipe::CEntityInstanceEntityClass::DestructInstance  (line 3921, @0x0000000002b16410, libserver.so)  // inlines: Destruct<CDOTA_Ability_Nian_Tail_Swipe>
void __fastcall CDOTA_Ability_Nian_Tail_Swipe::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Nian_Tail_Swipe::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Nian_Tail_Swipe::CEntityInstanceEntityClass::FreeInstance  (line 3921, @0x0000000002b16430, libserver.so)
void __fastcall CDOTA_Ability_Nian_Tail_Swipe::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Nian_Tail_Swipe::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Nian_Tail_Swipe::CEntityInstanceEntityClass::CanAllocate  (line 3921, @0x0000000002b16450, libserver.so)
bool __fastcall CDOTA_Ability_Nian_Tail_Swipe::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Nian_Tail_Swipe::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Nian_Tail_Swipe::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 3921, @0x0000000002b16460, libserver.so)
// globals: CDOTA_Ability_Nian_Tail_Swipe::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Nian_Tail_Swipe::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Nian_Tail_Swipe::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nian_Tail_Swipe::s_pSchemaBinding;
}


// CDOTA_Ability_Nian_Tail_Swipe::CEntityInstanceEntityClass::AllocateInstance  (line 3921, @0x0000000002b19330, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Nian_Tail_Swipe::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Nian_Tail_Swipe::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Nian_Tail_Swipe::CEntityInstanceEntityClass::ConstructInstance  (line 3921, @0x0000000002b1b8d0, libserver.so)  // inlines: CDOTA_Ability_Animation_Attack, CDOTA_Ability_Nian_Tail_Swipe, Construct<CDOTA_Ability_Nian_Tail_Swipe>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Nian_Tail_Swipe::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Nian_Tail_Swipe::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = 1065353216;
    *p = &off_446BCF0;
  }
  return p;
}


// CDOTA_Ability_Nian_Tail_Swipe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3921, @0x0000000002b22130, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Nian_Tail_Swipe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nian_Tail_Swipe::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Nian_Tail_Swipe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3921, @0x0000000002b22150, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Nian_Tail_Swipe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nian_Tail_Swipe::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Nian_Tail_Swipe::GetEntityClassInternal  (line 3921, @0x0000000002b32d70, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_Ability_Animation_Attack>, CDOTA_Ability_Animation_Attack::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "nian_tail_swipe", "CDOTA_Ability_Nian_Tail_Swipe"
// globals: `guard variable for'CDOTA_Ability_Nian_Tail_Swipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_Tail_SwipeClass, CDOTA_Ability_Nian_Tail_Swipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_Tail_SwipeClass, __dso_handle, CDOTA_Ability_Nian_Tail_Swipe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Nian_Tail_Swipe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_Tail_SwipeClassInfo, CDOTA_Ability_Nian_Tail_Swipe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_Tail_SwipeClassInfo
CEntityClass *__cdecl CDOTA_Ability_Nian_Tail_Swipe::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Nian_Tail_Swipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_Tail_SwipeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nian_Tail_Swipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_Tail_SwipeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Nian_Tail_Swipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_Tail_SwipeClass);
    CDOTA_Ability_Nian_Tail_Swipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_Tail_SwipeClass._vptr_CEntityClass = off_446BC70;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nian_Tail_Swipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_Tail_SwipeClass);
    __cxa_atexit(
      CDOTA_Ability_Nian_Tail_Swipe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Nian_Tail_Swipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_Tail_SwipeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Nian_Tail_SwipeClass != 0 )
    return &CDOTA_Ability_Nian_Tail_Swipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_Tail_SwipeClass;
  if ( `guard variable for'CDOTA_Ability_Nian_Tail_Swipe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_Tail_SwipeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nian_Tail_Swipe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_Tail_SwipeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Ability_Animation_Attack::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Nian_Tail_Swipe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_Tail_SwipeClassInfo,
      "CDOTA_Ability_Nian_Tail_Swipe",
      "nian_tail_swipe",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nian_Tail_Swipe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_Tail_SwipeClassInfo);
  }
  CDOTA_Ability_Nian_Tail_Swipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_Tail_SwipeClass.m_pClassInfo = &CDOTA_Ability_Nian_Tail_Swipe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_Tail_SwipeClassInfo;
  CDOTA_Ability_Nian_Tail_Swipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_Tail_SwipeClass.m_pBaseClassInfo = CDOTA_Ability_Nian_Tail_Swipe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_Tail_SwipeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Nian_Tail_SwipeClass = &CDOTA_Ability_Nian_Tail_Swipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_Tail_SwipeClass;
  CDOTA_Ability_Nian_Tail_Swipe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_Tail_SwipeClassInfo.m_pClass = &CDOTA_Ability_Nian_Tail_Swipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_Tail_SwipeClass;
  CDOTA_Ability_Nian_Tail_Swipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_Tail_SwipeClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_Ability_Animation_Attack>(0);
  g_pEntityCDOTA_Ability_Nian_Tail_SwipeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Nian_Tail_Swipe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_Tail_SwipeClass;
}


// CDOTA_Ability_Nian_Tail_Swipe::YouForgotToImplementOrDeclareServerClass  (line 3932, @0x0000000002ae8070, libserver.so)
int __fastcall CDOTA_Ability_Nian_Tail_Swipe::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Nian_Tail_Swipe *const this)
{
  return 0;
}


// CDOTA_Ability_Nian_Tail_Swipe::GetServerClass  (line 3932, @0x0000000002af27f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Nian_Tail_Swipe::GetServerClass(CDOTA_Ability_Nian_Tail_Swipe *const this)
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


// CDOTA_Ability_Nian_Tail_Swipe::OnAbilityPhaseStart  (line 3939, @0x0000000002ae8b30, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::UnitEmitSound
// strings: "Nian.TailSwipe.PreAttack"
bool __fastcall CDOTA_Ability_Nian_Tail_Swipe::OnAbilityPhaseStart(CDOTA_Ability_Nian_Tail_Swipe *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(Caster, "Nian.TailSwipe.PreAttack", 0.0, 0, 0);
  return 1;
}


// CDOTA_Ability_Nian_Tail_Swipe::OnSpellStart  (line 3948, @0x0000000002b03290, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetTeamNumber, NormalizeInPlace, VectorMultiply, VectorSubtract, operator*, operator-
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CBaseEntity::GetAbsOrigin, VectorNormalize, KeyValues::KeyValues, KeyValues::SetFloat, Thinker_Create, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_nian_tail_swipe_wall", "direction_x", "direction_y", "direction_z", "origin_z", "playback_rate" (7 total)
void __fastcall CDOTA_Ability_Nian_Tail_Swipe::OnSpellStart(CDOTA_Ability_Nian_Tail_Swipe *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *v4; // rax
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm1_4
  int m_Value; // r13d
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  float flOffset; // [rsp+20h] [rbp-70h]
  float vecWallStart; // [rsp+24h] [rbp-6Ch]
  vec_t vecWallStarta; // [rsp+24h] [rbp-6Ch]
  float vecWallStart_4; // [rsp+28h] [rbp-68h]
  unsigned int vecWallStart_4a; // [rsp+28h] [rbp-68h]
  float vecWallStart_8; // [rsp+2Ch] [rbp-64h]
  unsigned int vecWallStart_8a; // [rsp+2Ch] [rbp-64h]
  Vector vecForward; // [rsp+30h] [rbp-60h] BYREF
  Vector vOrigin; // [rsp+40h] [rbp-50h]
  KeyValues kv; // [rsp+50h] [rbp-40h] BYREF
  unsigned __int64 v26; // [rsp+68h] [rbp-28h]
  Vector v27; // 0:xmm0_8.8,8:xmm1_4.4

  v26 = __readfsqword(0x28u);
  if ( CDOTABaseAbility::GetCaster(this) != 0 )
  {
    flOffset = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "offset", -1, 0);
    Caster = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
    vecWallStart_8 = AbsOrigin->x;
    vecWallStart_4 = AbsOrigin->y;
    vecWallStart = AbsOrigin->z;
    v4 = CDOTABaseAbility::GetCaster(this);
    (*(v4->_vptr_IHandleEntity + 61))(v4, &vecForward, 0, 0);
    vecForward.z = 0.0;
    VectorNormalize(&vecForward);
    *&vecWallStart_8a = vecWallStart_8 - (flOffset * vecForward.x);
    *&vecWallStart_4a = vecWallStart_4 - (flOffset * vecForward.y);
    vecWallStarta = vecWallStart - (flOffset * vecForward.z);
    KeyValues::KeyValues(&kv, "modifier_nian_tail_swipe_wall");
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    KeyValues::SetFloat(&kv, "duration", v5);
    KeyValues::SetFloat(&kv, "direction_x", v6);
    KeyValues::SetFloat(&kv, "direction_y", v7);
    KeyValues::SetFloat(&kv, "direction_z", v8);
    KeyValues::SetFloat(&kv, "origin_x", v9);
    KeyValues::SetFloat(&kv, "origin_y", v10);
    KeyValues::SetFloat(&kv, "origin_z", v11);
    KeyValues::SetFloat(&kv, "playback_rate", v12);
    m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
    v14 = CDOTABaseAbility::GetCaster(this);
    *&vOrigin.x = __PAIR64__(vecWallStart_4a, vecWallStart_8a);
    *&v27.x = __PAIR64__(vecWallStart_4a, vecWallStart_8a);
    v27.z = vecWallStarta;
    vOrigin.z = vecWallStarta;
    Thinker_Create(v14, this, "modifier_nian_tail_swipe_wall", &kv, v27, m_Value, 0, 1, 0);
    v15 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v15, "Nian.TailSwipe.Cast", 0.0, 0, 0);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_Nian_Tail_Swipe_Wall::~CDOTA_Modifier_Nian_Tail_Swipe_Wall  (line 3985, @0x0000000002b304c0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Nian_Tail_Swipe_Wall::~CDOTA_Modifier_Nian_Tail_Swipe_Wall(
        CDOTA_Modifier_Nian_Tail_Swipe_Wall *const this)
{
  this->_vptr_CDOTA_Buff = &off_446C7B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_EntitiesToExclude);
  if ( (this->m_EntitiesToExclude.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_EntitiesToExclude.m_Memory),
        (this->m_EntitiesToExclude.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_EntitiesToExclude.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Nian_Tail_Swipe_Wall::~CDOTA_Modifier_Nian_Tail_Swipe_Wall  (line 3985, @0x0000000002b307d0, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_Nian_Tail_Swipe_Wall, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Nian_Tail_Swipe_Wall::~CDOTA_Modifier_Nian_Tail_Swipe_Wall(
        CDOTA_Modifier_Nian_Tail_Swipe_Wall *const this)
{
  this->_vptr_CDOTA_Buff = &off_446C7B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_EntitiesToExclude);
  if ( (this->m_EntitiesToExclude.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_EntitiesToExclude.m_Memory);
    if ( (this->m_EntitiesToExclude.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_EntitiesToExclude.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nian_Tail_Swipe_Wall::IsHidden  (line 3997, @0x0000000002b16470, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Tail_Swipe_Wall::IsHidden(CDOTA_Modifier_Nian_Tail_Swipe_Wall *const this)
{
  return 1;
}


// CDOTA_Modifier_Nian_Tail_Swipe_Wall::IsPurgable  (line 3998, @0x0000000002b16480, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Tail_Swipe_Wall::IsPurgable(CDOTA_Modifier_Nian_Tail_Swipe_Wall *const this)
{
  return 0;
}


// CDOTA_Modifier_Nian_Tail_Swipe_Wall::IsAvoidMagical  (line 4002, @0x0000000002b16490, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Tail_Swipe_Wall::IsAvoidMagical(CDOTA_Modifier_Nian_Tail_Swipe_Wall *const this)
{
  return 1;
}


// CDOTA_Modifier_Nian_Tail_Swipe_Wall::OnCreated  (line 4032, @0x0000000002b01190, libserver.so)  // inlines: CPASAttenuationFilter, CPASFilter, GetAbilityDamageType, GetAbilityData, GetGameTime, Vector, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-, ~CPASAttenuationFilter, ~CPASFilter
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<float>, KeyValues::GetFloat, VectorVectors, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlForward, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::AddParticle, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::ReleaseParticleIndex (22 total)
// strings: "fly_duration", "fly_distance", "direction_x", "direction_y", "direction_z", "nian_tail_swipe" (10 total)
void __fastcall CDOTA_Modifier_Nian_Tail_Swipe_Wall::OnCreated(
        CDOTA_Modifier_Nian_Tail_Swipe_Wall *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax
  CDOTABaseAbility *v10; // rax
  CDOTABaseAbility *v11; // rax
  float v12; // xmm1_4
  DOTAAbilityData_t *m_pAbilityData; // rdx
  float v14; // xmm1_4
  float v15; // xmm1_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  float v18; // xmm1_4
  float v19; // xmm1_4
  float Float; // xmm0_4
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  float starting_width; // xmm3_4
  float v24; // xmm1_4
  int v25; // r12d
  float v26; // xmm0_4
  float v27; // xmm3_4
  CDOTA_ParticleManager *v28; // rax
  float v29; // xmm0_4
  int v30; // r12d
  unsigned int v31; // xmm4_4
  unsigned int v32; // xmm1_4
  CDOTA_ParticleManager *v33; // rax
  int v34; // r12d
  CDOTA_ParticleManager *v35; // rax
  int v36; // r12d
  CDOTA_ParticleManager *v37; // rax
  int BuffParticleEffect; // r12d
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_ParticleManager *v41; // rax
  CDOTA_ParticleManager *v42; // rax
  CDOTA_ParticleManager *v43; // rax
  CDOTA_BaseNPC *Parent; // rax
  float v45; // xmm1_4
  float v46; // xmm1_4
  CDOTA_BaseNPC *v47; // rax
  CDOTABaseAbility *v48; // [rsp+8h] [rbp-1A8h]
  Vector up; // [rsp+10h] [rbp-1A0h] BYREF
  Vector vPos; // [rsp+20h] [rbp-190h] BYREF
  double v51; // [rsp+30h] [rbp-180h]
  float v52; // [rsp+38h] [rbp-178h]
  double v53; // [rsp+40h] [rbp-170h]
  float v54; // [rsp+48h] [rbp-168h]
  CPASAttenuationFilter filter; // [rsp+50h] [rbp-160h] BYREF
  unsigned __int64 v56; // [rsp+188h] [rbp-28h]

  this->m_nFXIndex = -1;
  v56 = __readfsqword(0x28u);
  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(Ability, &this->starting_width, "starting_width");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v5, &this->ending_width, "ending_width");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v6, &this->speed, "speed");
  v7 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v7, &this->stun_duration, "stun_duration");
  v8 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v8, &this->fly_duration, "fly_duration");
  v9 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v9, &this->fly_distance, "fly_distance");
  v10 = CDOTA_Buff::GetAbility(this);
  this->m_DamageAmount = (*(v10->_vptr_IHandleEntity + 247))(v10);
  v11 = CDOTA_Buff::GetAbility(this);
  m_pAbilityData = v11->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    v48 = v11;
    CDOTABaseAbility::LoadAbilityData(v11, 0);
    m_pAbilityData = v48->m_pAbilityData;
  }
  this->m_DamageType = m_pAbilityData->m_iAbilityDamageType;
  this->m_vWallDirection.x = KeyValues::GetFloat(pKV, "direction_x", v12);
  this->m_vWallDirection.y = KeyValues::GetFloat(pKV, "direction_y", v14);
  this->m_vWallDirection.z = KeyValues::GetFloat(pKV, "direction_z", v15);
  VectorVectors(&this->m_vWallDirection, &this->m_vWallRight, &up);
  this->m_nFXIndex = CDOTA_Buff::CreateBuffParticleEffect(this, "nian_tail_swipe", 8, 0, 0);
  this->m_vWallStartPosition.x = KeyValues::GetFloat(pKV, "origin_x", v16);
  this->m_vWallStartPosition.y = KeyValues::GetFloat(pKV, "origin_y", v17);
  this->m_vWallStartPosition.z = KeyValues::GetFloat(pKV, "origin_z", v18);
  Float = KeyValues::GetFloat(pKV, "playback_rate", v19);
  m_nFXIndex = this->m_nFXIndex;
  this->m_flScalar = Float;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlForward(
    ParticleManager,
    m_nFXIndex,
    0,
    *&this->m_vWallDirection.x,
    this->m_vWallDirection.z);
  starting_width = this->starting_width;
  v24 = this->m_vWallRight.y * starting_width;
  v25 = this->m_nFXIndex;
  v26 = ((this->m_vWallRight.z * starting_width) * 0.5) + this->m_vWallStartPosition.z;
  v27 = ((starting_width * this->m_vWallRight.x) * 0.5) + this->m_vWallStartPosition.x;
  *(&v51 + 1) = (v24 * 0.5) + this->m_vWallStartPosition.y;
  v52 = v26;
  *&v51 = v27;
  v28 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v28, v25, 0, v51, v52);
  v29 = this->starting_width;
  v30 = this->m_nFXIndex;
  *&v31 = this->m_vWallStartPosition.y - ((this->m_vWallRight.y * v29) * 0.5);
  *&v32 = this->m_vWallStartPosition.x - ((v29 * this->m_vWallRight.x) * 0.5);
  v54 = this->m_vWallStartPosition.z - ((this->m_vWallRight.z * v29) * 0.5);
  v53 = COERCE_DOUBLE(__PAIR64__(v31, v32));
  v33 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v33, v30, 1, v53, v54);
  v34 = this->m_nFXIndex;
  v35 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v35, v34, 2, *&this->m_vWallDirection.x, this->m_vWallDirection.z);
  v36 = this->m_nFXIndex;
  *&vPos.x = 0x4248000042480000LL;
  vPos.z = 50.0;
  v37 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v37, v36, 3, *&vPos.x, vPos.z);
  CDOTA_Buff::AddParticle(this, this->m_nFXIndex, 0, 0, -1, 0, 0);
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(this, "nian_tailswipe_thunder_clap", 2, 0, 0);
  Caster = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  v41 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v41, BuffParticleEffect, 0, *&AbsOrigin->x, AbsOrigin->z);
  *&vPos.x = 0x43FA000043FA0000LL;
  vPos.z = 500.0;
  v42 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v42, BuffParticleEffect, 1, *&vPos.x, vPos.z);
  v43 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v43, BuffParticleEffect);
  this->m_flWallStartTime = *&g_pGameRules[18].m_szQuestName[20];
  Parent = CDOTA_Buff::GetParent(this);
  vPos = *CBaseEntity::GetAbsOrigin(Parent);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS(&filter, &vPos);
  filter._vptr_IRecipientFilter = &off_3FECD70;
  CPASAttenuationFilter::Filter(&filter, &vPos, 0.80000001, v45);
  CDOTA_Buff::StartIntervalThink(this, 0.0, v46);
  v47 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(v47, "Nian.TailSwipe.Wall", 0.0, 0, 0);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CDOTA_Modifier_Nian_Tail_Swipe_Wall::OnDestroy  (line 4083, @0x0000000002aebb30, libserver.so)
// calls: CDOTA_Buff::DestroyParticles, CDOTA_Buff::GetParent, UTIL_Remove
void __fastcall CDOTA_Modifier_Nian_Tail_Swipe_Wall::OnDestroy(CDOTA_Modifier_Nian_Tail_Swipe_Wall *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  CDOTA_Buff::DestroyParticles(this, 0);
  Parent = CDOTA_Buff::GetParent(this);
  UTIL_Remove(Parent);
}


// CDOTA_Modifier_Nian_Tail_Swipe_Wall::OnIntervalThink  (line 4096, @0x0000000002b0edb0, libserver.so)  // inlines: AddToTail, CBroadcastRecipientFilter, CEntityHandle, CEntityIndex, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, EmitSound_t, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetGameTime, GetHero, GetInstance, GetPaddedCollisionRadius, GetSerialNumber, GrowMemory, IndexToIdentity, IsValid, Lerp<float>, LookupEntity, Purge, RemoveAll, Set, SoundEventGuid_t, ToDOTABaseNPCHero, VectorAdd, VectorMultiply, VectorSubtract, entindex, operator CEntityInstance*, operator*, operator+, operator-, operator[], ~CBroadcastRecipientFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, GetParticleManager, CDOTA_ParticleManager::SetParticleControlForward, CDOTA_ParticleManager::SetParticleControl, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CDOTA_Buff::GetParent, CEntityInstance::GetEntityIndex, CBaseEntity::EmitSound, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CBaseEntity::GetAbsOrigin (21 total)
// strings: "Nian.TailSwipe.Wall.Loop"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Nian_Tail_Swipe_Wall::OnIntervalThink(CDOTA_Modifier_Nian_Tail_Swipe_Wall *const this)
{
  float v2; // xmm0_4
  float v3; // xmm1_4
  float v4; // xmm3_4
  float speed; // xmm4_4
  int m_nFXIndex; // ebx
  float v7; // xmm0_4
  vec_t v8; // xmm3_4
  float v9; // xmm5_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm4_4
  vec_t v13; // xmm2_4
  vec_t v14; // xmm1_4
  float v15; // xmm0_4
  CDOTA_ParticleManager *ParticleManager; // rax
  int v17; // ebx
  CDOTA_ParticleManager *v18; // rax
  int v19; // ebx
  CDOTA_ParticleManager *v20; // rax
  int v21; // ebx
  CDOTA_ParticleManager *v22; // rax
  CDOTA_BaseNPC *Parent; // rax
  CEntityIndex v24; // eax
  __int64 v25; // r12
  int v26; // ebx
  CHandle<CDOTA_BaseNPC_Hero> *v27; // rdx
  uint32 m_Index; // eax
  __int16 v29; // cx
  CEntityIdentity *v30; // rdx
  CEntityIdentity *v31; // rdx
  CEntityInstance *m_pInstance; // r13
  CEntityIdentity *m_pEntity; // rax
  int v34; // edx
  __int16 v35; // cx
  const Vector *AbsOrigin; // rax
  int m_Size; // eax
  EHANDLE *v38; // rax
  float v39; // xmm0_4
  int v40; // [rsp+Ch] [rbp-234h]
  float flWallTime; // [rsp+28h] [rbp-218h]
  EHANDLE hHero; // [rsp+30h] [rbp-210h] BYREF
  Vector vWallPos; // [rsp+40h] [rbp-200h] BYREF
  Vector vWallPoint1; // [rsp+50h] [rbp-1F0h] BYREF
  Vector vWallPoint2; // [rsp+60h] [rbp-1E0h] BYREF
  EmitSound_t ep; // [rsp+70h] [rbp-1D0h] BYREF
  CBroadcastRecipientFilter filter; // [rsp+D0h] [rbp-170h] BYREF
  unsigned __int64 v48; // [rsp+208h] [rbp-38h]

  v48 = __readfsqword(0x28u);
  if ( CDOTA_Buff::GetCaster(this) != 0 && CDOTA_Buff::GetAbility(this) != 0 )
  {
    flWallTime = *&g_pGameRules[18].m_szQuestName[20] - this->m_flWallStartTime;
    v2 = (*(this->_vptr_CDOTA_Buff + 31))(this);
    v3 = flWallTime;
    if ( (flWallTime / v2) < 1.0 )
    {
      v39 = (*(this->_vptr_CDOTA_Buff + 31))(this);
      v3 = flWallTime;
      v4 = flWallTime / v39;
    }
    else
    {
      v4 = 1.0;
    }
    speed = this->speed;
    m_nFXIndex = this->m_nFXIndex;
    v7 = (((this->ending_width - this->starting_width) * v4) + this->starting_width) * 0.5;
    v8 = ((this->m_vWallDirection.x * v3) * speed) + this->m_vWallStartPosition.x;
    v9 = this->m_vWallRight.x * v7;
    v10 = (this->m_vWallDirection.y * v3) * speed;
    v11 = (v3 * this->m_vWallDirection.z) * speed;
    vWallPos.x = v8;
    v12 = this->m_vWallRight.y * v7;
    v13 = v10 + this->m_vWallStartPosition.y;
    vWallPoint1.x = v8 - v9;
    v14 = v11 + this->m_vWallStartPosition.z;
    v15 = v7 * this->m_vWallRight.z;
    vWallPoint2.x = v8 + v9;
    vWallPos.y = v13;
    vWallPos.z = v14;
    vWallPoint2.y = v13 + v12;
    vWallPoint1.y = v13 - v12;
    vWallPoint1.z = v14 - v15;
    vWallPoint2.z = v15 + v14;
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlForward(
      ParticleManager,
      m_nFXIndex,
      0,
      *&this->m_vWallDirection.x,
      this->m_vWallDirection.z);
    v17 = this->m_nFXIndex;
    v18 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v18, v17, 0, *&vWallPoint1.x, vWallPoint1.z);
    v19 = this->m_nFXIndex;
    v20 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v20, v19, 1, *&vWallPoint2.x, vWallPoint2.z);
    v21 = this->m_nFXIndex;
    v22 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v22, v21, 2, *&this->m_vWallDirection.x, this->m_vWallDirection.z);
    ep.m_nChannel = 0;
    ep.m_pSoundName = "Nian.TailSwipe.Wall.Loop";
    ep.m_pOrigin = &vWallPos;
    ep.m_bEmitCloseCaption = 1;
    ep.m_flVolume = 1.0;
    ep.m_SoundLevel = soundlevel_t::SNDLVL_NONE;
    ep.m_nPitch = 100;
    ep.m_flSoundTime = 0.0;
    ep.m_pflSoundDuration = 0;
    ep.m_bWarnOnMissingCloseCaption = 0;
    ep.m_bWarnOnDirectWaveReference = 0;
    ep.m_nSpeakerEntity.m_Data = -1;
    ep.m_UtlVecSoundOrigin.m_Size = 0;
    memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
    ep.m_nFlags = 49152;
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&filter);
    Parent = CDOTA_Buff::GetParent(this);
    v24.m_Data = CEntityInstance::GetEntityIndex(Parent).m_Data;
    CBaseEntity::EmitSound(&filter, v24, &ep);
    if ( g_HeroList.m_hHeroList.m_Size > 0 )
    {
      v25 = 0;
      v26 = 0;
      do
      {
        while ( 1 )
        {
          v27 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v25];
          m_Index = v27->m_Index;
          if ( v27->m_Index + 2 > 1 )
          {
            v29 = v27->m_Index;
            v30 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v27->m_Index) >> 9) & 0x3F];
            if ( v30 != 0 )
            {
              v31 = &v30[v29 & 0x1FF];
              if ( v31 != 0 && m_Index == v31->m_EHandle.m_Index )
              {
                m_pInstance = v31->m_pInstance;
                if ( v31->m_pInstance != 0 && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                {
                  hHero.m_Index = -1;
                  m_pEntity = m_pInstance->m_pEntity;
                  if ( m_pEntity != 0 )
                  {
                    v34 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                    v35 = 0x7FFF;
                    if ( m_pEntity->m_EHandle.m_Index != -1 )
                      v35 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                    LOWORD(hHero.m_Index) = v35 | hHero.m_Index & 0x8000;
                    hHero.m_Index = (v34 << 15) | hHero.m_Index & 0x7FFF;
                  }
                  if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                         &this->m_EntitiesToExclude,
                         &hHero) == -1 )
                  {
                    AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
                    if ( CalcDistanceToLineSegment2D(AbsOrigin, &vWallPoint1, &vWallPoint2, 0) <= ((*(&m_pInstance[48]._vptr_IHandleEntity + 1)
                                                                                                  + *&m_pInstance[48].m_pEntity)
                                                                                                 + 50.0) )
                      break;
                  }
                }
              }
            }
          }
          ++v26;
          ++v25;
          if ( v26 >= g_HeroList.m_hHeroList.m_Size )
            goto LABEL_25;
        }
        m_Size = this->m_EntitiesToExclude.m_Size;
        v40 = m_Size;
        if ( m_Size == this->m_EntitiesToExclude.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_EntitiesToExclude.m_Memory, 1);
          m_Size = this->m_EntitiesToExclude.m_Size;
        }
        this->m_EntitiesToExclude.m_Size = m_Size + 1;
        v38 = &this->m_EntitiesToExclude.m_Memory.m_pMemory[v40];
        if ( v38 != 0 )
          v38->m_Index = hHero.m_Index;
        CDOTA_Modifier_Nian_Tail_Swipe_Wall::HitNPC(this, m_pInstance);
        ++v26;
        ++v25;
      }
      while ( v26 < g_HeroList.m_hHeroList.m_Size );
    }
LABEL_25:
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&filter);
    ep.m_UtlVecSoundOrigin.m_Size = 0;
    if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
      if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
    }
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Nian_Tail_Swipe_Wall::HitNPC  (line 4146, @0x0000000002af7600, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, ApplyDamage, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle, KeyValues::~KeyValues, CDOTA_BaseNPC::UnitEmitSound (14 total)
// callers: CDOTA_Modifier_Nian_Tail_Swipe_Wall::OnIntervalThink
// strings: "modifier_nian_tail_swipe_air_time", "nian_tail_swipe_hit", "attach_hitloc", "modifier_stunned", "Nian.TailSwipe.Damage"
void __fastcall CDOTA_Modifier_Nian_Tail_Swipe_Wall::HitNPC(
        CDOTA_Modifier_Nian_Tail_Swipe_Wall *const this,
        CDOTA_BaseNPC *pNPC)
{
  int m_DamageType; // r14d
  CDOTABaseAbility *Ability; // r12
  CDOTA_BaseNPC *Caster; // rax
  float v7; // xmm1_4
  float v8; // xmm1_4
  CDOTA_BaseNPC *v9; // rax
  int BuffParticleEffect; // r15d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v12; // rax
  float v13; // xmm1_4
  CDOTA_BaseNPC *v14; // rax
  float flDamage; // [rsp+Ch] [rbp-54h]
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  m_DamageType = this->m_DamageType;
  flDamage = this->m_DamageAmount * this->m_flScalar;
  Ability = CDOTA_Buff::GetAbility(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, pNPC, Ability, flDamage, m_DamageType, 0);
  KeyValues::KeyValues(&kv, "modifier_nian_tail_swipe_air_time");
  KeyValues::SetFloat(&kv, "duration", v7);
  KeyValues::SetFloat(&kv, "distance", v8);
  v9 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(pNPC, v9, 0, "modifier_nian_tail_swipe_air_time", &kv, 0);
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(this, "nian_tail_swipe_hit", 2, 0, 0);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, BuffParticleEffect, 0, pNPC, 1, 0, vec3_invalid, 1);
  v12 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v12, BuffParticleEffect, 1, pNPC, 5, "attach_hitloc", vec3_invalid, 1);
  CDOTA_Buff::AddParticle(this, BuffParticleEffect, 0, 0, -1, 0, 0);
  KeyValues::~KeyValues(&kv);
  KeyValues::KeyValues(&kv, "modifier_stunned");
  KeyValues::SetFloat(&kv, "duration", v13);
  v14 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(pNPC, v14, 0, "modifier_stunned", &kv, 0);
  KeyValues::~KeyValues(&kv);
  CDOTA_BaseNPC::UnitEmitSound(pNPC, "Nian.TailSwipe.Damage", 0.0, 0, 0);
}


// CDOTA_Modifier_Nian_Tail_Swipe_AirTime::~CDOTA_Modifier_Nian_Tail_Swipe_AirTime  (line 4178, @0x0000000002b1a4b0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Nian_Tail_Swipe_AirTime::~CDOTA_Modifier_Nian_Tail_Swipe_AirTime(
        CDOTA_Modifier_Nian_Tail_Swipe_AirTime *const this)
{
  this->_vptr_CDOTA_Buff = &off_446CAD0;
  this->_vptr_CVerticalMotionController = &off_446CDC0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Nian_Tail_Swipe_AirTime::~CDOTA_Modifier_Nian_Tail_Swipe_AirTime  (line 4178, @0x0000000002b1a4e0, libserver.so)  // inlines: ~CDOTA_Modifier_Nian_Tail_Swipe_AirTime
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Nian_Tail_Swipe_AirTime::~CDOTA_Modifier_Nian_Tail_Swipe_AirTime(
        CDOTA_Modifier_Nian_Tail_Swipe_AirTime *const this)
{
  this->_vptr_CDOTA_Buff = &off_446CAD0;
  this->_vptr_CVerticalMotionController = &off_446CDC0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nian_Tail_Swipe_AirTime::IsStunDebuff  (line 4197, @0x0000000002b164a0, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Tail_Swipe_AirTime::IsStunDebuff(
        CDOTA_Modifier_Nian_Tail_Swipe_AirTime *const this)
{
  return 1;
}


// CDOTA_Modifier_Nian_Tail_Swipe_AirTime::IsPermanent  (line 4198, @0x0000000002b164b0, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Tail_Swipe_AirTime::IsPermanent(CDOTA_Modifier_Nian_Tail_Swipe_AirTime *const this)
{
  return 1;
}


// CDOTA_Modifier_Nian_Tail_Swipe_AirTime::IsPurgable  (line 4199, @0x0000000002b164c0, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Tail_Swipe_AirTime::IsPurgable(CDOTA_Modifier_Nian_Tail_Swipe_AirTime *const this)
{
  return 0;
}


// CDOTA_Modifier_Nian_Tail_Swipe_AirTime::IsVerticalMotionValidToApply  (line 4201, @0x0000000002b164d0, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Nian_Tail_Swipe_AirTime::IsVerticalMotionValidToApply(
        CDOTA_Modifier_Nian_Tail_Swipe_AirTime *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Nian_Tail_Swipe_AirTime::GetEffectName  (line 4206, @0x0000000002b1bb30, libserver.so)
// calls: CDOTA_Buff::GetParent
// strings: "generic_stunned"
const char *__fastcall CDOTA_Modifier_Nian_Tail_Swipe_AirTime::GetEffectName(
        CDOTA_Modifier_Nian_Tail_Swipe_AirTime *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  char v2; // al
  const char *v3; // rdx

  Parent = CDOTA_Buff::GetParent(this);
  v2 = (*(Parent->_vptr_IHandleEntity + 408))(Parent);
  v3 = 0;
  if ( v2 != 0 )
    return "generic_stunned";
  return v3;
}


// CDOTA_Modifier_Nian_Tail_Swipe_AirTime::GetEffectAttachType  (line 4207, @0x0000000002b16500, libserver.so)
int __fastcall CDOTA_Modifier_Nian_Tail_Swipe_AirTime::GetEffectAttachType(
        CDOTA_Modifier_Nian_Tail_Swipe_AirTime *const this)
{
  return 7;
}


// CDOTA_Modifier_Nian_Tail_Swipe_AirTime::GetPriority  (line 4209, @0x0000000002b16510, libserver.so)
int __fastcall CDOTA_Modifier_Nian_Tail_Swipe_AirTime::GetPriority(CDOTA_Modifier_Nian_Tail_Swipe_AirTime *const this)
{
  return 10000;
}


// CDOTA_Modifier_Nian_Tail_Swipe_AirTime::DeclareFunctions  (line 4227, @0x0000000002ae8080, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Nian_Tail_Swipe_AirTime::GetOverrideAnimation(CModifierParams const&)
void __fastcall CDOTA_Modifier_Nian_Tail_Swipe_AirTime::DeclareFunctions(
        CDOTA_Modifier_Nian_Tail_Swipe_AirTime *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_Nian_Tail_Swipe_AirTime::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
}


// CDOTA_Modifier_Nian_Tail_Swipe_AirTime::GetOverrideAnimation  (line 4234, @0x0000000002ae80a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Nian_Tail_Swipe_AirTime::GetOverrideAnimation(
        CDOTA_Modifier_Nian_Tail_Swipe_AirTime *const this,
        const CModifierParams *const params)
{
  return 0x44BCA00000000001uLL;
}


// CDOTA_Modifier_Nian_Tail_Swipe_AirTime::UpdateVerticalMotion  (line 4239, @0x0000000002aeef00, libserver.so)  // inlines: RemapValClamped, clamp<float, float>
// calls: CDOTA_Buff::GetParent, CBaseEntity::SetAbsAngles, CVerticalMotionController::UpdateSimpleAirTime, CDOTA_BaseNPC::RemoveGesture
void __fastcall CDOTA_Modifier_Nian_Tail_Swipe_AirTime::UpdateVerticalMotion(
        CDOTA_Modifier_Nian_Tail_Swipe_AirTime *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  float v6; // xmm0_4
  int (**vptr_CDOTA_Buff)(...); // rax
  float v8; // xmm0_4
  float v9; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax
  float v11; // xmm0_4
  float v12; // xmm4_4
  float v13; // xmm2_4
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  float flTotalTimeOnEvenGround; // [rsp+Ch] [rbp-24h]

  v6 = a3 + this->m_flCurTime;
  vptr_CDOTA_Buff = this->_vptr_CDOTA_Buff;
  this->m_flCurTime = v6;
  v8 = (vptr_CDOTA_Buff[31])(v6, dt);
  if ( v8 == 0.0 )
  {
    v9 = 0.0;
  }
  else
  {
    v13 = this->m_flCurTime / v8;
    v9 = 0.0;
    if ( v13 >= 0.0 )
    {
      v9 = -360.0;
      if ( v13 > 1.0 || (v9 = (-360.0 * v13) + 0.0) < -180.0 )
        v9 = v9 + 360.0;
    }
  }
  this->m_qRotation.x = v9;
  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::SetAbsAngles(Parent, &this->m_qRotation);
  flTotalTimeOnEvenGround = this->m_flDistance;
  v11 = (*(this->_vptr_CDOTA_Buff + 31))(this);
  if ( CVerticalMotionController::UpdateSimpleAirTime(
         &this->CVerticalMotionController,
         me,
         this->m_flStartZ,
         this->m_flCurTime,
         v11,
         flTotalTimeOnEvenGround,
         v12) != 0 )
  {
    this->m_qRotation.x = this->m_flOldPitch;
    v14 = CDOTA_Buff::GetParent(this);
    CBaseEntity::SetAbsAngles(v14, &this->m_qRotation);
    v15 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::RemoveGesture(v15, 1508);
  }
}


// CDOTA_Modifier_Nian_Tail_Swipe_AirTime::CheckState  (line 4266, @0x0000000002ae80c0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Nian_Tail_Swipe_AirTime::CheckState(
        CDOTA_Modifier_Nian_Tail_Swipe_AirTime *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x20uLL;
  buffState->m_nDisabledStateMask &= ~0x20uLL;
}


// CDOTA_Modifier_Nian_Tail_Swipe_AirTime::OnCreated  (line 4275, @0x0000000002aeaee0, libserver.so)  // inlines: operator=
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, GetGroundHeight, CDOTALocomotor::ApplyVerticalMotionController, CDOTA_BaseNPC::StartGesture, CBaseEntity::GetAbsAngles, KeyValues::GetFloat
void __fastcall CDOTA_Modifier_Nian_Tail_Swipe_AirTime::OnCreated(
        CDOTA_Modifier_Nian_Tail_Swipe_AirTime *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTALocomotor *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  const QAngle *AbsAngles; // rax
  float x; // xmm0_4
  float z; // xmm1_4

  this->m_flCurTime = 0.0;
  Parent = CDOTA_Buff::GetParent(this);
  v5 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  this->m_flStartZ = GetGroundHeight(AbsOrigin, Parent);
  v7 = CDOTA_Buff::GetParent(this);
  v8 = (*(v7->_vptr_IHandleEntity + 376))(v7);
  if ( CDOTALocomotor::ApplyVerticalMotionController(v8, &this->CVerticalMotionController, 0) )
  {
    v9 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::StartGesture(v9, 1508, 0.2, 0.2, 0, 0, 1.0);
  }
  v10 = CDOTA_Buff::GetParent(this);
  AbsAngles = CBaseEntity::GetAbsAngles(v10);
  x = AbsAngles->x;
  this->m_qRotation.x = AbsAngles->x;
  this->m_qRotation.y = AbsAngles->y;
  z = AbsAngles->z;
  this->m_flOldPitch = x;
  this->m_qRotation.z = z;
  this->m_flDistance = KeyValues::GetFloat(pKV, "distance", z);
}


// CDOTA_Modifier_Nian_Tail_Swipe_AirTime::OnVerticalMotionInterrupted  (line 4290, @0x0000000002aeaa60, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::SetAbsAngles, CDOTA_BaseNPC::RemoveGesture
void __fastcall CDOTA_Modifier_Nian_Tail_Swipe_AirTime::OnVerticalMotionInterrupted(
        CDOTA_Modifier_Nian_Tail_Swipe_AirTime *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax

  this->m_qRotation.x = this->m_flOldPitch;
  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::SetAbsAngles(Parent, &this->m_qRotation);
  v3 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveGesture(v3, 1508);
}


// CDOTA_Modifier_Nian_Tail_Swipe_AirTime::OnDestroy  (line 4297, @0x0000000002aeb2a0, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::SetAbsAngles, CDOTALocomotor::RemoveVerticalMotionController, CDOTA_BaseNPC::RemoveGesture
void __fastcall CDOTA_Modifier_Nian_Tail_Swipe_AirTime::OnDestroy(CDOTA_Modifier_Nian_Tail_Swipe_AirTime *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTALocomotor *v4; // rax
  CDOTA_BaseNPC *v5; // rax

  this->m_qRotation.x = this->m_flOldPitch;
  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::SetAbsAngles(Parent, &this->m_qRotation);
  v3 = CDOTA_Buff::GetParent(this);
  v4 = (*(v3->_vptr_IHandleEntity + 376))(v3);
  CDOTALocomotor::RemoveVerticalMotionController(v4, &this->CVerticalMotionController);
  v5 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveGesture(v5, 1508);
}


// CDOTA_Modifier_Nian_Hurricane_Whirlpool::~CDOTA_Modifier_Nian_Hurricane_Whirlpool  (line 4310, @0x0000000002b1a440, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Nian_Hurricane_Whirlpool::~CDOTA_Modifier_Nian_Hurricane_Whirlpool(
        CDOTA_Modifier_Nian_Hurricane_Whirlpool *const this)
{
  this->_vptr_CDOTA_Buff = &off_446CE50;
  this->_vptr_CHorizontalMotionController = &off_446D138;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Nian_Hurricane_Whirlpool::~CDOTA_Modifier_Nian_Hurricane_Whirlpool  (line 4310, @0x0000000002b1a470, libserver.so)  // inlines: ~CDOTA_Modifier_Nian_Hurricane_Whirlpool
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Nian_Hurricane_Whirlpool::~CDOTA_Modifier_Nian_Hurricane_Whirlpool(
        CDOTA_Modifier_Nian_Hurricane_Whirlpool *const this)
{
  this->_vptr_CDOTA_Buff = &off_446CE50;
  this->_vptr_CHorizontalMotionController = &off_446D138;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nian_Hurricane_Whirlpool::IsPurgable  (line 4319, @0x0000000002b16520, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Hurricane_Whirlpool::IsPurgable(
        CDOTA_Modifier_Nian_Hurricane_Whirlpool *const this)
{
  return 0;
}


// CDOTA_Modifier_Nian_Hurricane_Whirlpool::OnIntervalThink  (line 4324, @0x0000000002b16530, libserver.so)
void __fastcall CDOTA_Modifier_Nian_Hurricane_Whirlpool::OnIntervalThink(
        CDOTA_Modifier_Nian_Hurricane_Whirlpool *const this)
{
  this->m_bForward ^= 1u;
}


// CDOTA_Modifier_Nian_Hurricane_Whirlpool::IsHidden  (line 4326, @0x0000000002b16540, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Hurricane_Whirlpool::IsHidden(CDOTA_Modifier_Nian_Hurricane_Whirlpool *const this)
{
  return 1;
}


// CDOTA_Modifier_Nian_Hurricane_Whirlpool::IsHorizontalMotionValidToApply  (line 4327, @0x0000000002b16550, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Nian_Hurricane_Whirlpool::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_Nian_Hurricane_Whirlpool *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Nian_Hurricane_Whirlpool::OnCreated  (line 4344, @0x0000000002b058b0, libserver.so)  // inlines: GetBool, Normalized, VectorSubtract, operator-
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, DotaRetrieveAbilityValue<float>, KeyValues::GetInt, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, CDOTALocomotor::ApplyHorizontalMotionController, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, VectorNormalize, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager (16 total)
// strings: "pull_speed", "pull_switch_interval", "nian_hurricane_worldwind", "Nian.Hurricane.Target"
void __fastcall CDOTA_Modifier_Nian_Hurricane_Whirlpool::OnCreated(
        CDOTA_Modifier_Nian_Hurricane_Whirlpool *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  int Int; // eax
  float pull_switch_interval; // xmm0_4
  float v8; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v10; // rax
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v13; // rax
  const Vector *v14; // rax
  vec_t v15; // xmm2_4
  vec_t v16; // xmm0_4
  CDOTA_BaseNPC *v17; // rax
  int m_nfxIndex; // r13d
  const CBaseAnimating *v19; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  __int64 v21; // r12
  int v22; // r13d
  CDOTA_ParticleManager *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  int v25; // r13d
  const CBaseAnimating *v26; // r14
  CDOTA_ParticleManager *v27; // rax
  CDOTA_BaseNPC *v28; // rax
  CDOTA_BaseNPC *v29; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-34h]
  Vector vWindDirection; // [rsp+10h] [rbp-30h] BYREF
  Vector v32; // 0:xmm0_8.8,8:xmm1_4.4

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->pull_speed, "pull_speed");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v5, &this->pull_switch_interval, "pull_switch_interval");
  Int = KeyValues::GetInt(pKV, "forward", 0);
  pull_switch_interval = this->pull_switch_interval;
  this->m_bForward = Int != 0;
  CDOTA_Buff::StartIntervalThink(this, pull_switch_interval, v8);
  Parent = CDOTA_Buff::GetParent(this);
  v10 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::ApplyHorizontalMotionController(v10, &this->CHorizontalMotionController, 0);
  if ( this->m_bForward )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
    v13 = CDOTA_Buff::GetParent(this);
  }
  else
  {
    v29 = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v29);
    v13 = CDOTA_Buff::GetCaster(this);
  }
  v14 = CBaseEntity::GetAbsOrigin(v13);
  v15 = v14->x - AbsOrigin->x;
  v16 = v14->z - AbsOrigin->z;
  vWindDirection.y = v14->y - AbsOrigin->y;
  vWindDirection.x = v15;
  vWindDirection.z = v16;
  VectorNormalize(&vWindDirection);
  this->m_nfxIndex = CDOTA_Buff::CreateBuffParticleEffect(this, "nian_hurricane_worldwind", 2, 0, 0);
  v17 = CDOTA_Buff::GetParent(this);
  m_nfxIndex = this->m_nfxIndex;
  v19 = v17;
  ParticleManager = GetParticleManager();
  v21 = *&vec3_invalid.x;
  vecFallbackPosition = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, m_nfxIndex, 0, v19, 1, 0, vec3_invalid, 1);
  v22 = this->m_nfxIndex;
  v23 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v23, v22, 1, *&vWindDirection.x, vWindDirection.z);
  v24 = CDOTA_Buff::GetCaster(this);
  v25 = this->m_nfxIndex;
  v26 = v24;
  v27 = GetParticleManager();
  *&v32.x = v21;
  v32.z = vecFallbackPosition;
  CDOTA_ParticleManager::SetParticleControlEnt(v27, v25, 3, v26, 1, 0, v32, 1);
  CDOTA_Buff::AddParticle(this, this->m_nfxIndex, 0, 0, -1, 0, 0);
  v28 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(v28, "Nian.Hurricane.Target", 0.0, 0, 0);
}


// CDOTA_Modifier_Nian_Hurricane_Whirlpool::OnDestroy  (line 4368, @0x0000000002aea5b0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::RemoveHorizontalMotionController, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CBaseEntity::StopSound
// strings: "Nian.Hurricane.Target"
void __fastcall CDOTA_Modifier_Nian_Hurricane_Whirlpool::OnDestroy(CDOTA_Modifier_Nian_Hurricane_Whirlpool *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v3; // rax
  int m_nfxIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v6; // rax

  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveHorizontalMotionController(v3, &this->CHorizontalMotionController);
  m_nfxIndex = this->m_nfxIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nfxIndex, 0);
  v6 = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(v6, "Nian.Hurricane.Target");
}


// CDOTA_Modifier_Nian_Hurricane_Whirlpool::OnRefresh  (line 4379, @0x0000000002b09ba0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "pull_speed"
void __fastcall CDOTA_Modifier_Nian_Hurricane_Whirlpool::OnRefresh(
        CDOTA_Modifier_Nian_Hurricane_Whirlpool *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->pull_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "pull_speed", -1, 0);
  else
    this->pull_speed = 0;
}


// CDOTA_Modifier_Nian_Hurricane_Whirlpool::UpdateHorizontalMotion  (line 4388, @0x0000000002aef5e0, libserver.so)  // inlines: Normalized, Vector, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, VectorNormalize, CBaseEntity::SetAbsOrigin, CGridNav::DestroyTreesAroundPoint, GetParticleManager, CDOTA_ParticleManager::SetParticleControl
void __fastcall CDOTA_Modifier_Nian_Hurricane_Whirlpool::UpdateHorizontalMotion(
        CDOTA_Modifier_Nian_Hurricane_Whirlpool *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v9; // rax
  const Vector *v10; // rax
  vec_t v11; // xmm0_4
  vec_t v12; // xmm2_4
  CDOTA_BaseNPC *v13; // rax
  float v14; // xmm0_4
  float pull_speed; // xmm3_4
  const Vector *v16; // rax
  vec_t v17; // xmm1_4
  vec_t v18; // xmm2_4
  CDOTA_BaseNPC *v19; // rax
  unsigned int v20; // r13d
  float v21; // xmm3_4
  int m_nfxIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  int v24; // ebx
  CDOTA_ParticleManager *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  float v27; // [rsp+8h] [rbp-78h]
  float v28; // [rsp+Ch] [rbp-74h]
  float dtb; // [rsp+10h] [rbp-70h]
  Vector vParentForward; // [rsp+20h] [rbp-60h] BYREF
  Vector vNewLocation; // [rsp+30h] [rbp-50h] BYREF
  Vector vWindDirection; // [rsp+40h] [rbp-40h]
  Vector vec; // [rsp+50h] [rbp-30h] BYREF
  Vector v35; // 0:^14.12
  Vector v36; // 0:xmm0_8.8,8:xmm1_4.4

  Parent = CDOTA_Buff::GetParent(this);
  (*(Parent->_vptr_IHandleEntity + 61))(Parent, &vParentForward, 0, 0);
  if ( this->m_bForward )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
    v9 = CDOTA_Buff::GetParent(this);
  }
  else
  {
    v26 = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v26);
    v9 = CDOTA_Buff::GetCaster(this);
  }
  v10 = CBaseEntity::GetAbsOrigin(v9);
  v11 = v10->z - AbsOrigin->z;
  v12 = v10->x - AbsOrigin->x;
  vec.y = v10->y - AbsOrigin->y;
  vec.z = v11;
  vec.x = v12;
  VectorNormalize(&vec);
  v35 = vec;
  v13 = CDOTA_Buff::GetParent(this);
  v14 = (*(v13->_vptr_IHandleEntity + 386))(v13);
  pull_speed = this->pull_speed;
  v27 = ((vParentForward.x * v14) + (v35.x * pull_speed)) * a3;
  v28 = ((vParentForward.y * v14) + (v35.y * pull_speed)) * a3;
  dtb = ((v14 * vParentForward.z) + (pull_speed * v35.z)) * a3;
  v16 = CBaseEntity::GetAbsOrigin(me);
  v17 = v27 + v16->x;
  v18 = v28 + v16->y;
  vNewLocation.z = dtb + v16->z;
  vNewLocation.x = v17;
  vNewLocation.y = v18;
  CBaseEntity::SetAbsOrigin(me, &vNewLocation);
  vWindDirection = v35;
  v19 = CDOTA_Buff::GetCaster(this);
  v20 = (*(v19->_vptr_IHandleEntity + 414))(v19);
  v35.z = me->m_flHullRadius;
  v36 = *CBaseEntity::GetAbsOrigin(me);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 1, v20, v36, v35.z, v21);
  m_nfxIndex = this->m_nfxIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, m_nfxIndex, 1, *&vWindDirection.x, vWindDirection.z);
  if ( this->m_bForward )
  {
    vec.x = 1.0;
    vec.y = 1.0;
    vec.z = 1.0;
  }
  else
  {
    vec.x = -1.0;
    vec.y = -1.0;
    vec.z = -1.0;
  }
  v24 = this->m_nfxIndex;
  v25 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v25, v24, 2, *&vec.x, vec.z);
}


// CDOTA_Ability_Nian_Hurricane::~CDOTA_Ability_Nian_Hurricane  (line 4427, @0x0000000002b1c5a0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Nian_Hurricane::~CDOTA_Ability_Nian_Hurricane(CDOTA_Ability_Nian_Hurricane *const this)
{
  this->_vptr_IHandleEntity = &off_446D210;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Nian_Hurricane::~CDOTA_Ability_Nian_Hurricane  (line 4427, @0x0000000002b1c5c0, libserver.so)  // inlines: ~CDOTA_Ability_Nian_Hurricane
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Nian_Hurricane::~CDOTA_Ability_Nian_Hurricane(CDOTA_Ability_Nian_Hurricane *const this)
{
  this->_vptr_IHandleEntity = &off_446D210;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Nian_Hurricane::Schema_DynamicBinding  (line 4429, @0x0000000002b16580, libserver.so)
// globals: CDOTA_Ability_Nian_Hurricane::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nian_Hurricane::Schema_DynamicBinding(
        const CDOTA_Ability_Nian_Hurricane *const this)
{
  return CDOTA_Ability_Nian_Hurricane::s_pSchemaBinding;
}


// CDOTA_Ability_Nian_Hurricane::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 4429, @0x0000000002b16590, libserver.so)
// globals: CDOTA_Ability_Nian_Hurricane::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nian_Hurricane::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Nian_Hurricane::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nian_Hurricane::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Nian_Hurricane::CEntityInstanceEntityClass::DestructInstance  (line 4429, @0x0000000002b165a0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Nian_Hurricane>
void __fastcall CDOTA_Ability_Nian_Hurricane::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Nian_Hurricane::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Nian_Hurricane::CEntityInstanceEntityClass::FreeInstance  (line 4429, @0x0000000002b165c0, libserver.so)
void __fastcall CDOTA_Ability_Nian_Hurricane::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Nian_Hurricane::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Nian_Hurricane::CEntityInstanceEntityClass::CanAllocate  (line 4429, @0x0000000002b165e0, libserver.so)
bool __fastcall CDOTA_Ability_Nian_Hurricane::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Nian_Hurricane::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Nian_Hurricane::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 4429, @0x0000000002b165f0, libserver.so)
// globals: CDOTA_Ability_Nian_Hurricane::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Nian_Hurricane::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Nian_Hurricane::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nian_Hurricane::s_pSchemaBinding;
}


// CDOTA_Ability_Nian_Hurricane::CEntityInstanceEntityClass::AllocateInstance  (line 4429, @0x0000000002b19370, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Nian_Hurricane::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Nian_Hurricane::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Ability_Nian_Hurricane::CEntityInstanceEntityClass::ConstructInstance  (line 4429, @0x0000000002b212f0, libserver.so)  // inlines: CDOTA_Ability_Nian_Hurricane, Construct<CDOTA_Ability_Nian_Hurricane>
// calls: CDOTABaseAbility::CDOTABaseAbility, CountdownTimer::CountdownTimer, CDOTABaseAbility::~CDOTABaseAbility, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_Ability_Nian_Hurricane::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Nian_Hurricane::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_446D210;
    CountdownTimer::CountdownTimer(p + 39);
    CountdownTimer::CountdownTimer(p + 40);
    *(p + 246) = 1074161254;
  }
  return p;
}


// CDOTA_Ability_Nian_Hurricane::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 4429, @0x0000000002b223b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Nian_Hurricane::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nian_Hurricane::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Nian_Hurricane::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 4429, @0x0000000002b223d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Nian_Hurricane::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nian_Hurricane::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Nian_Hurricane::GetEntityClassInternal  (line 4429, @0x0000000002b2c000, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "nian_hurricane", "CDOTA_Ability_Nian_Hurricane"
// globals: `guard variable for'CDOTA_Ability_Nian_Hurricane::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_HurricaneClass, CDOTA_Ability_Nian_Hurricane::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_HurricaneClass, __dso_handle, CDOTA_Ability_Nian_Hurricane::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Nian_Hurricane::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_HurricaneClassInfo, CDOTA_Ability_Nian_Hurricane::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_HurricaneClassInfo
CEntityClass *__cdecl CDOTA_Ability_Nian_Hurricane::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Nian_Hurricane::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_HurricaneClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nian_Hurricane::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_HurricaneClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Nian_Hurricane::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_HurricaneClass);
    CDOTA_Ability_Nian_Hurricane::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_HurricaneClass._vptr_CEntityClass = off_446D190;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nian_Hurricane::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_HurricaneClass);
    __cxa_atexit(
      CDOTA_Ability_Nian_Hurricane::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Nian_Hurricane::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_HurricaneClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Nian_HurricaneClass != 0 )
    return &CDOTA_Ability_Nian_Hurricane::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_HurricaneClass;
  if ( `guard variable for'CDOTA_Ability_Nian_Hurricane::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_HurricaneClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nian_Hurricane::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_HurricaneClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Nian_Hurricane::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_HurricaneClassInfo,
      "CDOTA_Ability_Nian_Hurricane",
      "nian_hurricane",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nian_Hurricane::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_HurricaneClassInfo);
  }
  CDOTA_Ability_Nian_Hurricane::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_HurricaneClass.m_pClassInfo = &CDOTA_Ability_Nian_Hurricane::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_HurricaneClassInfo;
  CDOTA_Ability_Nian_Hurricane::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_HurricaneClass.m_pBaseClassInfo = CDOTA_Ability_Nian_Hurricane::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_HurricaneClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Nian_HurricaneClass = &CDOTA_Ability_Nian_Hurricane::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_HurricaneClass;
  CDOTA_Ability_Nian_Hurricane::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_HurricaneClassInfo.m_pClass = &CDOTA_Ability_Nian_Hurricane::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_HurricaneClass;
  CDOTA_Ability_Nian_Hurricane::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_HurricaneClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Nian_HurricaneClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Nian_Hurricane::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_HurricaneClass;
}


// CDOTA_Ability_Nian_Hurricane::YouForgotToImplementOrDeclareServerClass  (line 4466, @0x0000000002ae80d0, libserver.so)
int __fastcall CDOTA_Ability_Nian_Hurricane::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Nian_Hurricane *const this)
{
  return 0;
}


// CDOTA_Ability_Nian_Hurricane::GetServerClass  (line 4466, @0x0000000002af2a70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Nian_Hurricane::GetServerClass(CDOTA_Ability_Nian_Hurricane *const this)
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


// CDOTA_Ability_Nian_Hurricane::OnAbilityPhaseStart  (line 4475, @0x0000000002b06d40, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::StartGesture, CDOTA_BaseNPC::UnitEmitSound, CDOTABaseAbility::CreateAbilityParticleEffect, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt
// strings: "fire_interval", "pull_switch_interval", "torrent_count", "game_time_wind_activation", "Nian.Hurricane.PreAttack", "nian_channel_roar_water" (8 total)
bool __fastcall CDOTA_Ability_Nian_Hurricane::OnAbilityPhaseStart(CDOTA_Ability_Nian_Hurricane *const this)
{
  CDOTA_Ability_Nian_Hurricane *v1; // rbx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v7; // rax
  int m_nfxIndex_roar; // r13d
  const CBaseAnimating *v9; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v11; // rax
  const Vector *v12; // r12
  CDOTA_BaseNPC *v13; // rax
  int v14; // r13d
  const CBaseAnimating *v15; // r14
  CDOTA_ParticleManager *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  const CBaseAnimating *v18; // r12
  CDOTA_ParticleManager *v19; // rax

  v1 = this;
  this->min_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "min_distance", -1, 0);
  v1->max_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v1, "max_distance", -1, 0);
  v1->fire_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v1, "fire_interval", -1, 0);
  v1->pull_switch_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v1, "pull_switch_interval", -1, 0);
  v1->torrent_count = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v1, "torrent_count", -1, 0);
  v1->game_time_wind_activation = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                    v1,
                                    "game_time_wind_activation",
                                    -1,
                                    0);
  Caster = CDOTABaseAbility::GetCaster(v1);
  CDOTA_BaseNPC::StartGesture(Caster, 1551, 0.0, 0.1, 5, 0, 1.0);
  v3 = CDOTABaseAbility::GetCaster(v1);
  CDOTA_BaseNPC::StartGesture(v3, 1552, 0.0, 0.0, 4, 0, 1.0);
  v1->m_bForward = 1;
  v4 = CDOTABaseAbility::GetCaster(v1);
  CDOTA_BaseNPC::UnitEmitSound(v4, "Nian.Hurricane.PreAttack", 0.0, 0, 0);
  v1->m_nfxIndex_roar = CDOTABaseAbility::CreateAbilityParticleEffect(v1, "nian_channel_roar_water", 2, 0, 0);
  v5 = CDOTABaseAbility::GetCaster(v1);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = CDOTABaseAbility::GetCaster(v1);
  m_nfxIndex_roar = v1->m_nfxIndex_roar;
  v9 = v7;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(
    ParticleManager,
    m_nfxIndex_roar,
    0,
    v9,
    5,
    "attach_mouthbase",
    *AbsOrigin,
    1);
  v11 = CDOTABaseAbility::GetCaster(v1);
  v12 = CBaseEntity::GetAbsOrigin(v11);
  v13 = CDOTABaseAbility::GetCaster(v1);
  v14 = v1->m_nfxIndex_roar;
  v15 = v13;
  v16 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v16, v14, 1, v15, 5, "attach_mouthend", *v12, 1);
  v17 = CDOTABaseAbility::GetCaster(v1);
  LODWORD(v1) = v1->m_nfxIndex_roar;
  v18 = v17;
  v19 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v19, v1, 2, v18, 1, 0, vec3_invalid, 1);
  return 1;
}


// CDOTA_Ability_Nian_Hurricane::OnAbilityPhaseInterrupted  (line 4506, @0x0000000002aea9b0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveGesture, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect
void __fastcall CDOTA_Ability_Nian_Hurricane::OnAbilityPhaseInterrupted(CDOTA_Ability_Nian_Hurricane *const this)
{
  CDOTA_Ability_Nian_Hurricane *v1; // rbx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTA_ParticleManager *ParticleManager; // rax

  v1 = this;
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveGesture(Caster, 1551);
  v3 = CDOTABaseAbility::GetCaster(v1);
  CDOTA_BaseNPC::RemoveGesture(v3, 1552);
  LODWORD(v1) = v1->m_nfxIndex_roar;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, v1, 0);
}


// CDOTA_Ability_Nian_Hurricane::OnSpellStart  (line 4517, @0x0000000002afdbf0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, Invalidate, IsValid, LookupEntity, NetworkStateChanged, Set, SetBool, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=<float>, operator[], ~CUtlVector
// calls: CountdownTimer::Start, CDOTAGamerules::GetDOTATime, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, KeyValues::KeyValues, KeyValues::SetInt, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CDOTA_BaseNPC::UnitEmitSound, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume (13 total)
// strings: "modifier_nian_hurricane_whirlpool", "Nian.Hurricane.Loop"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Nian_Hurricane::OnSpellStart(CDOTA_Ability_Nian_Hurricane *const this)
{
  float v1; // xmm1_4
  CountdownTimer *p_m_ctPullTimer; // rbx
  float fire_interval; // xmm0_4
  float v5; // xmm1_4
  float DOTATime; // xmm0_4
  bool v7; // cf
  bool v8; // zf
  __m128i v9; // xmm1
  float v10; // r15d
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v12; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v14; // rax
  __int64 v15; // rbx
  CHandle<CBaseEntity> *v16; // rdx
  uint32 m_Index; // eax
  __int16 v18; // cx
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CDOTA_BaseNPC *m_pInstance; // r15
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEnemies; // [rsp+20h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-38h]

  p_m_ctPullTimer = &this->m_ctPullTimer;
  v26 = __readfsqword(0x28u);
  if ( this->m_ctPullTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_ctPullTimer._vptr_CountdownTimer + 2))(&this->m_ctPullTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_ctPullTimer.m_timestamp.m_Value = -1.0;
  }
  if ( this->m_ctTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_ctTimer._vptr_CountdownTimer + 2))(&this->m_ctTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_ctTimer.m_timestamp.m_Value = -1.0;
  }
  fire_interval = this->fire_interval;
  this->m_flTiming = fire_interval;
  CountdownTimer::Start(&this->m_ctTimer, fire_interval, v1);
  CountdownTimer::Start(p_m_ctPullTimer, this->pull_switch_interval, v5);
  DOTATime = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
  hEnemies.m_Size = 0;
  v7 = DOTATime < this->game_time_wind_activation;
  v8 = DOTATime == this->game_time_wind_activation;
  hEnemies.m_Memory.m_pMemory = 0;
  *v9.m128i_i32 = this->max_distance;
  hEnemies.m_Memory.m_nAllocationCount = 0;
  hEnemies.m_Memory.m_nGrowSize = 0;
  this->m_bUseWind = !v7 && !v8;
  v10 = COERCE_FLOAT(_mm_cvtsi128_si32(v9));
  Caster = CDOTABaseAbility::GetCaster(this);
  v12 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v12);
  v14 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v14->m_iTeamNum.m_Value, AbsOrigin, Caster, v10, &hEnemies, 2, 19, 528, 0, 0);
  if ( hEnemies.m_Size > 0 )
  {
    v15 = 0;
    do
    {
      while ( 1 )
      {
        v16 = &hEnemies.m_Memory.m_pMemory[v15];
        m_Index = v16->m_Index;
        if ( v16->m_Index + 2 > 1 )
        {
          v18 = v16->m_Index;
          v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v16->m_Index) >> 9) & 0x3F];
          if ( v19 != 0 )
          {
            v20 = &v19[v18 & 0x1FF];
            if ( v20 != 0 && m_Index == v20->m_EHandle.m_Index )
            {
              m_pInstance = v20->m_pInstance;
              if ( v20->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && this->m_bUseWind )
                break;
            }
          }
        }
        if ( hEnemies.m_Size <= ++v15 )
          goto LABEL_16;
      }
      KeyValues::KeyValues(&kv, "modifier_nian_hurricane_whirlpool");
      KeyValues::SetInt(&kv, "forward", this->m_bForward);
      v22 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v22, this, "modifier_nian_hurricane_whirlpool", &kv, 0);
      KeyValues::~KeyValues(&kv);
      ++v15;
    }
    while ( hEnemies.m_Size > v15 );
  }
LABEL_16:
  v23 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v23, "Nian.Hurricane.Loop", 0.0, 0, 0);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemies);
}


// CDOTA_Ability_Nian_Hurricane::OnChannelThink  (line 4548, @0x0000000002afdf10, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsElapsed, IsValid, Length2D, LookupEntity, NetworkStateChanged, Reset, Set, SetBool, SwitchDirection, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=<float>, operator[], ~CUtlVector
// calls: CDOTABaseAbility::OnChannelThink, CountdownTimer::Now, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_BaseNPC::FindModifierByName, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_Ability_Nian_Hurricane::LaunchTorrents, CDOTA_BaseNPC::RemoveModifierByName, KeyValues::KeyValues, KeyValues::SetInt, CDOTA_BaseNPC::AddNewModifier (15 total)
// strings: "modifier_nian_hurricane_whirlpool"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Nian_Hurricane::OnChannelThink(
        CDOTA_Ability_Nian_Hurricane *const this,
        double a2,
        float flInterval)
{
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v7; // rax
  __int64 v8; // rbx
  CHandle<CBaseEntity> *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  const Vector *v15; // r14
  CDOTA_BaseNPC *v16; // rax
  const Vector *v17; // rax
  CDOTA_Buff *ModifierByName; // rax
  __m128i v19; // xmm0
  __m128i v20; // xmm2
  float v21; // ebx
  CDOTA_BaseNPC *v22; // rax
  const CountdownTimer *p_m_ctPullTimer; // [rsp+20h] [rbp-80h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEnemies; // [rsp+30h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v26; // [rsp+68h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  CDOTABaseAbility::OnChannelThink(this, a2, flInterval);
  if ( CountdownTimer::Now(&this->m_ctTimer) >= this->m_ctTimer.m_timestamp.m_Value )
    CDOTA_Ability_Nian_Hurricane::LaunchTorrents(this);
  p_m_ctPullTimer = &this->m_ctPullTimer;
  if ( CountdownTimer::Now(&this->m_ctPullTimer) >= this->m_ctPullTimer.m_timestamp.m_Value )
  {
    hEnemies.m_Size = 0;
    hEnemies.m_Memory.m_pMemory = 0;
    hEnemies.m_Memory.m_nAllocationCount = 0;
    hEnemies.m_Memory.m_nGrowSize = 0;
    Caster = CDOTABaseAbility::GetCaster(this);
    v5 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
    v7 = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(v7->m_iTeamNum.m_Value, AbsOrigin, Caster, -1.0, &hEnemies, 2, 51, 528, 0, 0);
    if ( hEnemies.m_Size > 0 )
    {
      v8 = 0;
      while ( 1 )
      {
        v9 = &hEnemies.m_Memory.m_pMemory[v8];
        m_Index = v9->m_Index;
        if ( v9->m_Index + 2 <= 1 )
          goto LABEL_6;
        v11 = v9->m_Index;
        v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_Index) >> 9) & 0x3F];
        if ( v12 == 0 )
          goto LABEL_6;
        v13 = &v12[v11 & 0x1FF];
        if ( v13 == 0 )
          goto LABEL_6;
        if ( m_Index != v13->m_EHandle.m_Index )
          goto LABEL_6;
        m_pInstance = v13->m_pInstance;
        if ( v13->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC || !this->m_bUseWind )
          goto LABEL_6;
        v15 = CBaseEntity::GetAbsOrigin(v13->m_pInstance);
        v16 = CDOTABaseAbility::GetCaster(this);
        v17 = CBaseEntity::GetAbsOrigin(v16);
        if ( this->max_distance <= fsqrt(((v17->x - v15->x) * (v17->x - v15->x)) + ((v17->y - v15->y) * (v17->y - v15->y))) )
          break;
        if ( CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_nian_hurricane_whirlpool", 0) == 0 )
        {
          KeyValues::KeyValues(&kv, "modifier_nian_hurricane_whirlpool");
          KeyValues::SetInt(&kv, "forward", this->m_bForward);
          v22 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(m_pInstance, v22, this, "modifier_nian_hurricane_whirlpool", &kv, 0);
          KeyValues::~KeyValues(&kv);
          goto LABEL_6;
        }
        ModifierByName = CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_nian_hurricane_whirlpool", 0);
        if ( ModifierByName != 0 )
        {
          BYTE4(ModifierByName[1].m_name.u.m_pAsString) ^= 1u;
          if ( hEnemies.m_Size <= ++v8 )
            goto LABEL_18;
        }
        else
        {
LABEL_6:
          if ( hEnemies.m_Size <= ++v8 )
            goto LABEL_18;
        }
      }
      CDOTA_BaseNPC::RemoveModifierByName(m_pInstance, "modifier_nian_hurricane_whirlpool");
      goto LABEL_6;
    }
LABEL_18:
    *v19.m128i_i32 = CountdownTimer::Now(p_m_ctPullTimer);
    v20 = v19;
    *v20.m128i_i32 = *v19.m128i_i32 + this->m_ctPullTimer.m_duration.m_Value;
    v21 = COERCE_FLOAT(_mm_cvtsi128_si32(v20));
    if ( *v20.m128i_i32 != this->m_ctPullTimer.m_timestamp.m_Value )
    {
      (*(this->m_ctPullTimer._vptr_CountdownTimer + 2))(p_m_ctPullTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_ctPullTimer.m_timestamp.m_Value = v21;
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemies);
  }
}


// CDOTA_Ability_Nian_Hurricane::OnChannelFinish  (line 4598, @0x0000000002afe290, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FadeGesture, CDOTA_BaseNPC::StartGesture, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::RemoveModifierByName, CBaseEntity::StopSound, CDOTA_BaseNPC::UnitEmitSound, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase (13 total)
// strings: "modifier_nian_hurricane_whirlpool", "Nian.Hurricane.Loop", "Nian.Channel.Stop"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Nian_Hurricane::OnChannelFinish(
        CDOTA_Ability_Nian_Hurricane *const this,
        bool bInterrupted)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // r12
  CDOTA_BaseNPC *v6; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v8; // rax
  __int64 v9; // r12
  int i; // ebx
  CHandle<CBaseEntity> *v11; // rdx
  uint32 m_Index; // eax
  __int16 v13; // cx
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CDOTA_BaseNPC *m_pInstance; // r15
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  int m_nFXIndex; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  int m_nfxIndex_roar; // ebx
  CDOTA_ParticleManager *v22; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEnemies; // [rsp+20h] [rbp-50h] BYREF

  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::FadeGesture(Caster, 1552);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v4, 1553, 0.1, 0.2, 9, 0, 1.0);
  hEnemies.m_Size = 0;
  hEnemies.m_Memory.m_pMemory = 0;
  hEnemies.m_Memory.m_nAllocationCount = 0;
  hEnemies.m_Memory.m_nGrowSize = 0;
  v5 = CDOTABaseAbility::GetCaster(this);
  v6 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
  v8 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v8->m_iTeamNum.m_Value, AbsOrigin, v5, -1.0, &hEnemies, 2, 51, 528, 0, 0);
  v9 = 0;
  for ( i = 0; hEnemies.m_Size > i; ++v9 )
  {
    while ( 1 )
    {
      v11 = &hEnemies.m_Memory.m_pMemory[v9];
      m_Index = hEnemies.m_Memory.m_pMemory[v9].m_Index;
      if ( m_Index + 2 > 1 )
      {
        v13 = v11->m_Index;
        v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v11->m_Index) >> 9) & 0x3F];
        if ( v14 != 0 )
        {
          v15 = &v14[v13 & 0x1FF];
          if ( v15 != 0 && m_Index == v15->m_EHandle.m_Index )
          {
            m_pInstance = v15->m_pInstance;
            if ( v15->m_pInstance != 0
              && m_pInstance->m_bIsDOTANPC
              && CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_nian_hurricane_whirlpool", 0) != 0 )
            {
              break;
            }
          }
        }
      }
      ++i;
      ++v9;
      if ( hEnemies.m_Size <= i )
        goto LABEL_12;
    }
    CDOTA_BaseNPC::RemoveModifierByName(m_pInstance, "modifier_nian_hurricane_whirlpool");
    ++i;
  }
LABEL_12:
  v17 = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::StopSound(v17, "Nian.Hurricane.Loop");
  v18 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v18, "Nian.Channel.Stop", 0.0, 0, 0);
  m_nFXIndex = this->m_nFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 0);
  m_nfxIndex_roar = this->m_nfxIndex_roar;
  v22 = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(v22, m_nfxIndex_roar, 0);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemies);
}


// CDOTA_Ability_Nian_Hurricane::LaunchTorrents  (line 4622, @0x0000000002afbfd0, libserver.so)  // inlines: CEntityIndex, CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlVector, CUtlVectorBase, EmitSound_t, GetTeamNumber, Invalidate, NetworkStateChanged, Purge, QAngle, RemoveAll, Set, SoundEventGuid_t, VectorAdd, operator*=, operator+, operator=<float>, ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CRecipientFilter::~CRecipientFilter, KeyValues::~KeyValues, RandomFloat, AngleVectors, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, KeyValues::KeyValues, Thinker_Create, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::CreateAbilityParticleEffect, CDOTA_Buff::AddParticle, CDOTABaseAbility::GetCursorPosition (25 total)
// callers: CDOTA_Ability_Nian_Hurricane::OnChannelThink
// strings: "modifier_nian_torrent_thinker", "nian_hurricane_torrent_bubbles", "Nian.pre.Torrent"
void __fastcall CDOTA_Ability_Nian_Hurricane::LaunchTorrents(CDOTA_Ability_Nian_Hurricane *const this)
{
  int v2; // r15d
  int v3; // r12d
  float v4; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rax
  vec_t v7; // xmm0_4
  vec_t v8; // xmm2_4
  int m_Value; // r14d
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CBaseEntity *v12; // r14
  int AbilityParticleEffect; // eax
  float v14; // xmm1_4
  CDOTA_BaseNPC *v15; // rax
  CTeam *Team; // rax
  CTeam *GlobalTeam; // rax
  CountdownTimer *p_m_ctTimer; // [rsp+10h] [rbp-270h]
  CDOTA_Buff *pBuff; // [rsp+38h] [rbp-248h]
  QAngle angle; // [rsp+50h] [rbp-230h] BYREF
  Vector dir; // [rsp+60h] [rbp-220h] BYREF
  Vector vExplosionLoc; // [rsp+70h] [rbp-210h]
  Vector vPos; // [rsp+80h] [rbp-200h] BYREF
  EmitSound_t ep; // [rsp+90h] [rbp-1F0h] BYREF
  KeyValues kv; // [rsp+F0h] [rbp-190h] BYREF
  CPASAttenuationFilter filter; // [rsp+110h] [rbp-170h] BYREF
  unsigned __int64 v27; // [rsp+248h] [rbp-38h]

  v27 = __readfsqword(0x28u);
  p_m_ctTimer = &this->m_ctTimer;
  if ( this->m_ctTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_ctTimer._vptr_CountdownTimer + 2))(p_m_ctTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_ctTimer.m_timestamp.m_Value = -1.0;
  }
  if ( this->torrent_count > 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      angle.y = RandomFloat(v3, (v3 + 90));
      angle.x = 0.0;
      angle.z = 0.0;
      AngleVectors(&angle, &dir, 0, 0);
      v4 = RandomFloat(this->min_distance, this->max_distance);
      v3 = (v3 + 90) % 360;
      dir.x = dir.x * v4;
      dir.y = dir.y * v4;
      dir.z = v4 * dir.z;
      Caster = CDOTABaseAbility::GetCaster(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
      v7 = AbsOrigin->z + dir.z;
      v8 = AbsOrigin->x + dir.x;
      vExplosionLoc.y = AbsOrigin->y + dir.y;
      vExplosionLoc.z = v7;
      vExplosionLoc.x = v8;
      KeyValues::KeyValues(&kv, "modifier_nian_torrent_thinker");
      m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
      v10 = CDOTABaseAbility::GetCaster(this);
      v11 = Thinker_Create(v10, this, "modifier_nian_torrent_thinker", &kv, vExplosionLoc, m_Value, 0, 1, 0);
      v12 = v11;
      if ( v11 != 0 )
      {
        pBuff = CDOTA_BaseNPC::FindModifierByName(v11, "modifier_nian_torrent_thinker", 0);
        if ( pBuff != 0 )
        {
          AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                                    this,
                                    "nian_hurricane_torrent_bubbles",
                                    0,
                                    v12,
                                    0);
          CDOTA_Buff::AddParticle(pBuff, AbilityParticleEffect, 0, 0, -1, 0, 0);
        }
      }
      vPos = CDOTABaseAbility::GetCursorPosition(this);
      CRecipientFilter::CRecipientFilter(&filter);
      filter._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::AddRecipientsByPAS(&filter, &vPos);
      filter._vptr_IRecipientFilter = &off_3FECD70;
      CPASAttenuationFilter::Filter(&filter, &vPos, 0.80000001, v14);
      v15 = CDOTABaseAbility::GetCaster(this);
      Team = CBaseEntity::GetTeam(v15);
      CRecipientFilter::RemoveRecipientsNotOnTeam(&filter, Team);
      GlobalTeam = GetGlobalTeam(1);
      CRecipientFilter::AddRecipientsByTeam(&filter, GlobalTeam);
      ep.m_pSoundName = "Nian.pre.Torrent";
      ep.m_flVolume = 1.0;
      ep.m_SoundLevel = soundlevel_t::SNDLVL_NONE;
      ep.m_nFlags = 0;
      ep.m_nPitch = 100;
      ep.m_flSoundTime = 0.0;
      ep.m_pflSoundDuration = 0;
      ep.m_bEmitCloseCaption = 1;
      ep.m_bWarnOnMissingCloseCaption = 0;
      ep.m_bWarnOnDirectWaveReference = 0;
      ep.m_nSpeakerEntity.m_Data = -1;
      ep.m_UtlVecSoundOrigin.m_Size = 0;
      memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
      ep.m_nChannel = 6;
      ep.m_pOrigin = &vPos;
      CBaseEntity::EmitSound(&filter, 0, &ep);
      ep.m_UtlVecSoundOrigin.m_Size = 0;
      if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
        if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
      }
      ++v2;
      filter._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::~CRecipientFilter(&filter);
      KeyValues::~KeyValues(&kv);
    }
    while ( this->torrent_count > v2 );
  }
  CountdownTimer::Reset(p_m_ctTimer);
}


// CDOTA_Modifier_Nian_Torrent_Thinker::~CDOTA_Modifier_Nian_Torrent_Thinker  (line 4677, @0x0000000002b1a3f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Nian_Torrent_Thinker::~CDOTA_Modifier_Nian_Torrent_Thinker(
        CDOTA_Modifier_Nian_Torrent_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_446DCD0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Nian_Torrent_Thinker::~CDOTA_Modifier_Nian_Torrent_Thinker  (line 4677, @0x0000000002b1a410, libserver.so)  // inlines: ~CDOTA_Modifier_Nian_Torrent_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Nian_Torrent_Thinker::~CDOTA_Modifier_Nian_Torrent_Thinker(
        CDOTA_Modifier_Nian_Torrent_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_446DCD0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nian_Torrent_Thinker::IsHidden  (line 4685, @0x0000000002b16600, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Torrent_Thinker::IsHidden(CDOTA_Modifier_Nian_Torrent_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Nian_Torrent_Thinker::IsPurgable  (line 4686, @0x0000000002b16610, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Torrent_Thinker::IsPurgable(CDOTA_Modifier_Nian_Torrent_Thinker *const this)
{
  return 0;
}


// CDOTA_Modifier_Nian_Torrent_Thinker::OnCreated  (line 4693, @0x0000000002b04630, libserver.so)  // inlines: DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Nian_Torrent_Thinker::OnCreated(
        CDOTA_Modifier_Nian_Torrent_Thinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v4; // xmm1_4
  float LevelSpecialValue; // xmm0_4

  Ability = CDOTA_Buff::GetAbility(this);
  LevelSpecialValue = 0.0;
  if ( Ability != 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "delay", -1, 0);
  CDOTA_Buff::StartIntervalThink(this, LevelSpecialValue, v4);
}


// CDOTA_Modifier_Nian_Torrent_Thinker::OnIntervalThink  (line 4705, @0x0000000002b05ed0, libserver.so)  // inlines: CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CPASAttenuationFilter, ~CPASFilter, ~CUtlVector
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, DotaRetrieveAbilityValue<float>, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetCaster, FindUnitsInRadius, KeyValues::KeyValues, KeyValues::SetFloat, ApplyDamage, CDOTA_BaseNPC::AddNewModifier, CDOTA_Buff::CreateBuffParticleEffect (26 total)
// strings: "modifier_kunkka_torrent", "modifier_kunkka_torrent_slow", "nian_hurricane_torrent", "Nian.Torrent"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Nian_Torrent_Thinker::OnIntervalThink(CDOTA_Modifier_Nian_Torrent_Thinker *const this)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v3; // rax
  CDOTABaseAbility *v4; // rax
  __m128i v5; // xmm4
  float v6; // r14d
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_BaseNPC *v8; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *Caster; // rax
  float v11; // xmm1_4
  float v12; // xmm1_4
  __int64 v13; // r13
  int v14; // r12d
  CHandle<CBaseEntity> *v15; // rdx
  uint32 m_Index; // eax
  __int16 v17; // cx
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  CDOTABaseAbility *v21; // rax
  CDOTABaseAbility *v22; // r15
  CDOTA_BaseNPC *v23; // rax
  CDOTABaseAbility *v24; // r15
  CDOTA_BaseNPC *v25; // rax
  CDOTABaseAbility *v26; // r15
  CDOTA_BaseNPC *v27; // rax
  int BuffParticleEffect; // r13d
  CDOTA_BaseNPC *v29; // rax
  const Vector *v30; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v32; // rax
  CDOTA_BaseNPC *v33; // rax
  const Vector *v34; // r13
  float v35; // xmm1_4
  CDOTA_BaseNPC *v36; // rax
  CDOTA_BaseNPC *v37; // rax
  const Vector *v38; // r13
  CDOTA_BaseNPC *v39; // rax
  CDOTA_BaseNPC *v40; // rax
  float flDamage; // [rsp+3Ch] [rbp-1F4h]
  int radius; // [rsp+44h] [rbp-1ECh] BYREF
  float stun_duration; // [rsp+48h] [rbp-1E8h] BYREF
  float slow_duration; // [rsp+4Ch] [rbp-1E4h] BYREF
  Vector vPos; // [rsp+50h] [rbp-1E0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+60h] [rbp-1D0h] BYREF
  KeyValues kv_stun; // [rsp+80h] [rbp-1B0h] BYREF
  KeyValues kv_slow; // [rsp+A0h] [rbp-190h] BYREF
  CPASAttenuationFilter filter; // [rsp+C0h] [rbp-170h] BYREF
  unsigned __int64 v50; // [rsp+1F8h] [rbp-38h]

  v50 = __readfsqword(0x28u);
  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &radius, "radius");
  v3 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v3, &stun_duration, "stun_duration");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v4, &slow_duration, "slow_duration");
  *v5.m128i_i32 = radius;
  hEntities.m_Size = 0;
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  v6 = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
  Parent = CDOTA_Buff::GetParent(this);
  v8 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
  Caster = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(Caster->m_iTeamNum.m_Value, AbsOrigin, Parent, v6, &hEntities, 2, 19, 528, 0, 0);
  KeyValues::KeyValues(&kv_stun, "modifier_kunkka_torrent");
  KeyValues::SetFloat(&kv_stun, "duration", v11);
  KeyValues::KeyValues(&kv_slow, "modifier_kunkka_torrent_slow");
  KeyValues::SetFloat(&kv_slow, "duration", v12);
  if ( hEntities.m_Size > 0 )
  {
    v13 = 0;
    v14 = 0;
    do
    {
      v15 = &hEntities.m_Memory.m_pMemory[v13];
      m_Index = hEntities.m_Memory.m_pMemory[v13].m_Index;
      if ( m_Index + 2 > 1 )
      {
        v17 = v15->m_Index;
        v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v15->m_Index) >> 9) & 0x3F];
        if ( v18 != 0 )
        {
          v19 = &v18[v17 & 0x1FF];
          if ( v19 != 0 && m_Index == v19->m_EHandle.m_Index )
          {
            m_pInstance = v19->m_pInstance;
            if ( v19->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
            {
              v21 = CDOTA_Buff::GetAbility(this);
              flDamage = 0.5 * (*(v21->_vptr_IHandleEntity + 247))(v21);
              v22 = CDOTA_Buff::GetAbility(this);
              v23 = CDOTA_Buff::GetCaster(this);
              ApplyDamage(v23, m_pInstance, v22, flDamage, 4, 0);
              v24 = CDOTA_Buff::GetAbility(this);
              v25 = CDOTA_Buff::GetCaster(this);
              CDOTA_BaseNPC::AddNewModifier(m_pInstance, v25, v24, "modifier_kunkka_torrent", &kv_stun, 0);
              v26 = CDOTA_Buff::GetAbility(this);
              v27 = CDOTA_Buff::GetCaster(this);
              CDOTA_BaseNPC::AddNewModifier(m_pInstance, v27, v26, "modifier_kunkka_torrent_slow", &kv_slow, 0);
            }
          }
        }
      }
      ++v14;
      ++v13;
    }
    while ( hEntities.m_Size > v14 );
  }
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(this, "nian_hurricane_torrent", 2, 0, 0);
  v29 = CDOTA_Buff::GetParent(this);
  v30 = CBaseEntity::GetAbsOrigin(v29);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, BuffParticleEffect, 0, *&v30->x, v30->z);
  v32 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v32, BuffParticleEffect);
  v33 = CDOTA_Buff::GetParent(this);
  v34 = CBaseEntity::GetAbsOrigin(v33);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS(&filter, v34);
  filter._vptr_IRecipientFilter = &off_3FECD70;
  CPASAttenuationFilter::Filter(&filter, v34, 0.80000001, v35);
  v36 = CDOTA_Buff::GetParent(this);
  vPos = *CBaseEntity::GetAbsOrigin(v36);
  DOTA_EmitSoundLocation(&vPos, "Nian.Torrent", 1);
  v37 = CDOTA_Buff::GetParent(this);
  v38 = CBaseEntity::GetAbsOrigin(v37);
  v39 = CDOTA_Buff::GetCaster(this);
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_TORRENT,
    v39->m_iTeamNum.m_Value,
    v38,
    400.0,
    4.0,
    1);
  v40 = CDOTA_Buff::GetParent(this);
  UTIL_Remove(v40);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(&filter);
  KeyValues::~KeyValues(&kv_slow);
  KeyValues::~KeyValues(&kv_stun);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
}


// CDOTA_Ability_Nian_Whirlpool::~CDOTA_Ability_Nian_Whirlpool  (line 4767, @0x0000000002b1c5f0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Nian_Whirlpool::~CDOTA_Ability_Nian_Whirlpool(CDOTA_Ability_Nian_Whirlpool *const this)
{
  this->_vptr_IHandleEntity = &off_446E030;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Nian_Whirlpool::~CDOTA_Ability_Nian_Whirlpool  (line 4767, @0x0000000002b1c610, libserver.so)  // inlines: ~CDOTA_Ability_Nian_Whirlpool
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Nian_Whirlpool::~CDOTA_Ability_Nian_Whirlpool(CDOTA_Ability_Nian_Whirlpool *const this)
{
  this->_vptr_IHandleEntity = &off_446E030;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Nian_Whirlpool::Schema_DynamicBinding  (line 4769, @0x0000000002b16620, libserver.so)
// globals: CDOTA_Ability_Nian_Whirlpool::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nian_Whirlpool::Schema_DynamicBinding(
        const CDOTA_Ability_Nian_Whirlpool *const this)
{
  return CDOTA_Ability_Nian_Whirlpool::s_pSchemaBinding;
}


// CDOTA_Ability_Nian_Whirlpool::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 4769, @0x0000000002b16630, libserver.so)
// globals: CDOTA_Ability_Nian_Whirlpool::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nian_Whirlpool::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Nian_Whirlpool::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nian_Whirlpool::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Nian_Whirlpool::CEntityInstanceEntityClass::DestructInstance  (line 4769, @0x0000000002b16640, libserver.so)  // inlines: Destruct<CDOTA_Ability_Nian_Whirlpool>
void __fastcall CDOTA_Ability_Nian_Whirlpool::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Nian_Whirlpool::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Nian_Whirlpool::CEntityInstanceEntityClass::FreeInstance  (line 4769, @0x0000000002b16660, libserver.so)
void __fastcall CDOTA_Ability_Nian_Whirlpool::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Nian_Whirlpool::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Nian_Whirlpool::CEntityInstanceEntityClass::CanAllocate  (line 4769, @0x0000000002b16680, libserver.so)
bool __fastcall CDOTA_Ability_Nian_Whirlpool::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Nian_Whirlpool::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Nian_Whirlpool::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 4769, @0x0000000002b16690, libserver.so)
// globals: CDOTA_Ability_Nian_Whirlpool::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Nian_Whirlpool::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Nian_Whirlpool::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nian_Whirlpool::s_pSchemaBinding;
}


// CDOTA_Ability_Nian_Whirlpool::CEntityInstanceEntityClass::AllocateInstance  (line 4769, @0x0000000002b193b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Nian_Whirlpool::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Nian_Whirlpool::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 968);
  memset(v1, 0, 0x3C8u);
  return v1;
}


// CDOTA_Ability_Nian_Whirlpool::CEntityInstanceEntityClass::ConstructInstance  (line 4769, @0x0000000002b20c60, libserver.so)  // inlines: CDOTA_Ability_Nian_Whirlpool, Construct<CDOTA_Ability_Nian_Whirlpool>
// calls: CDOTABaseAbility::CDOTABaseAbility, CountdownTimer::CountdownTimer, CDOTABaseAbility::~CDOTABaseAbility, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_Ability_Nian_Whirlpool::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Nian_Whirlpool::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_446E030;
    CountdownTimer::CountdownTimer(p + 39);
    *(p + 240) = 1074161254;
  }
  return p;
}


// CDOTA_Ability_Nian_Whirlpool::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 4769, @0x0000000002b22400, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Nian_Whirlpool::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nian_Whirlpool::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Nian_Whirlpool::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 4769, @0x0000000002b22420, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Nian_Whirlpool::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nian_Whirlpool::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Nian_Whirlpool::GetEntityClassInternal  (line 4769, @0x0000000002b2c150, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "nian_whirlpool", "CDOTA_Ability_Nian_Whirlpool"
// globals: `guard variable for'CDOTA_Ability_Nian_Whirlpool::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_WhirlpoolClass, CDOTA_Ability_Nian_Whirlpool::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_WhirlpoolClass, __dso_handle, CDOTA_Ability_Nian_Whirlpool::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Nian_Whirlpool::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_WhirlpoolClassInfo, CDOTA_Ability_Nian_Whirlpool::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_WhirlpoolClassInfo
CEntityClass *__cdecl CDOTA_Ability_Nian_Whirlpool::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Nian_Whirlpool::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_WhirlpoolClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nian_Whirlpool::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_WhirlpoolClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Nian_Whirlpool::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_WhirlpoolClass);
    CDOTA_Ability_Nian_Whirlpool::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_WhirlpoolClass._vptr_CEntityClass = off_446DFB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nian_Whirlpool::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_WhirlpoolClass);
    __cxa_atexit(
      CDOTA_Ability_Nian_Whirlpool::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Nian_Whirlpool::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_WhirlpoolClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Nian_WhirlpoolClass != 0 )
    return &CDOTA_Ability_Nian_Whirlpool::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_WhirlpoolClass;
  if ( `guard variable for'CDOTA_Ability_Nian_Whirlpool::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_WhirlpoolClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nian_Whirlpool::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_WhirlpoolClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Nian_Whirlpool::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_WhirlpoolClassInfo,
      "CDOTA_Ability_Nian_Whirlpool",
      "nian_whirlpool",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nian_Whirlpool::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_WhirlpoolClassInfo);
  }
  CDOTA_Ability_Nian_Whirlpool::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_WhirlpoolClass.m_pClassInfo = &CDOTA_Ability_Nian_Whirlpool::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_WhirlpoolClassInfo;
  CDOTA_Ability_Nian_Whirlpool::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_WhirlpoolClass.m_pBaseClassInfo = CDOTA_Ability_Nian_Whirlpool::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_WhirlpoolClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Nian_WhirlpoolClass = &CDOTA_Ability_Nian_Whirlpool::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_WhirlpoolClass;
  CDOTA_Ability_Nian_Whirlpool::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_WhirlpoolClassInfo.m_pClass = &CDOTA_Ability_Nian_Whirlpool::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_WhirlpoolClass;
  CDOTA_Ability_Nian_Whirlpool::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_WhirlpoolClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Nian_WhirlpoolClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Nian_Whirlpool::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_WhirlpoolClass;
}


// CDOTA_Ability_Nian_Whirlpool::YouForgotToImplementOrDeclareServerClass  (line 4799, @0x0000000002ae80e0, libserver.so)
int __fastcall CDOTA_Ability_Nian_Whirlpool::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Nian_Whirlpool *const this)
{
  return 0;
}


// CDOTA_Ability_Nian_Whirlpool::GetServerClass  (line 4799, @0x0000000002af2970, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Nian_Whirlpool::GetServerClass(CDOTA_Ability_Nian_Whirlpool *const this)
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


// CDOTA_Ability_Nian_Whirlpool::OnAbilityPhaseStart  (line 4808, @0x0000000002b06fb0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::StartGesture
// strings: "pull_radius", "fire_interval", "pool_count"
bool __fastcall CDOTA_Ability_Nian_Whirlpool::OnAbilityPhaseStart(CDOTA_Ability_Nian_Whirlpool *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax

  this->min_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "min_distance", -1, 0);
  this->max_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "max_distance", -1, 0);
  this->pull_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "pull_radius", -1, 0);
  this->fire_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "fire_interval", -1, 0);
  this->pool_count = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "pool_count", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(Caster, 1551, 0.0, 0.1, 5, 0, 1.0);
  v3 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v3, 1552, 0.0, 0.0, 4, 0, 1.0);
  return 1;
}


// CDOTA_Ability_Nian_Whirlpool::OnSpellStart  (line 4825, @0x0000000002aefe10, libserver.so)  // inlines: Invalidate, NetworkStateChanged, Set, Start, operator=<float>
// calls: CountdownTimer::Now
void __fastcall CDOTA_Ability_Nian_Whirlpool::OnSpellStart(CDOTA_Ability_Nian_Whirlpool *const this)
{
  CountdownTimer *p_m_ctTimer; // r12
  float fire_interval; // xmm1_4
  float v4; // xmm0_4
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // [rsp+8h] [rbp-18h]
  float v8; // [rsp+Ch] [rbp-14h]
  float v9; // [rsp+Ch] [rbp-14h]

  p_m_ctTimer = &this->m_ctTimer;
  if ( this->m_ctTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_ctTimer._vptr_CountdownTimer + 2))(&this->m_ctTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL, -1.0);
    this->m_ctTimer.m_timestamp.m_Value = -1.0;
  }
  fire_interval = this->fire_interval;
  this->m_flTiming = fire_interval;
  v8 = fire_interval;
  v4 = CountdownTimer::Now(p_m_ctTimer);
  v5 = v8;
  v6 = v4 + v8;
  if ( v6 != this->m_ctTimer.m_timestamp.m_Value )
  {
    v7 = v6;
    (*(this->m_ctTimer._vptr_CountdownTimer + 2))(p_m_ctTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v5 = v8;
    this->m_ctTimer.m_timestamp.m_Value = v7;
  }
  if ( v5 != this->m_ctTimer.m_duration.m_Value )
  {
    v9 = v5;
    (*(this->m_ctTimer._vptr_CountdownTimer + 2))(p_m_ctTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_ctTimer.m_duration.m_Value = v9;
  }
}


// CDOTA_Ability_Nian_Whirlpool::OnAbilityPhaseInterrupted  (line 4837, @0x0000000002aeaa00, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveGesture
void __fastcall CDOTA_Ability_Nian_Whirlpool::OnAbilityPhaseInterrupted(CDOTA_Ability_Nian_Whirlpool *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveGesture(Caster, 1551);
  v3 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveGesture(v3, 1552);
}


// CDOTA_Ability_Nian_Whirlpool::OnChannelThink  (line 4847, @0x0000000002af7a70, libserver.so)  // inlines: IsElapsed
// calls: CDOTABaseAbility::OnChannelThink, CountdownTimer::Now, CDOTA_Ability_Nian_Whirlpool::CreateWhirlpools
void __fastcall CDOTA_Ability_Nian_Whirlpool::OnChannelThink(
        CDOTA_Ability_Nian_Whirlpool *const this,
        double a2,
        float flInterval)
{
  CDOTABaseAbility::OnChannelThink(this, a2, flInterval);
  if ( CountdownTimer::Now(&this->m_ctTimer) >= this->m_ctTimer.m_timestamp.m_Value )
    CDOTA_Ability_Nian_Whirlpool::CreateWhirlpools(this);
}


// CDOTA_Ability_Nian_Whirlpool::OnChannelFinish  (line 4859, @0x0000000002aea740, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FadeGesture, CDOTA_BaseNPC::StartGesture
void __fastcall CDOTA_Ability_Nian_Whirlpool::OnChannelFinish(
        CDOTA_Ability_Nian_Whirlpool *const this,
        bool bInterrupted)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v4; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::FadeGesture(Caster, 1552);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v4, 1553, 0.1, 0.2, 9, 0, 1.0);
}


// CDOTA_Ability_Nian_Whirlpool::CreateWhirlpools  (line 4868, @0x0000000002af7820, libserver.so)  // inlines: GetTeamNumber, Invalidate, NetworkStateChanged, QAngle, Set, VectorAdd, operator*=, operator+, operator=<float>
// calls: RandomFloat, AngleVectors, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, KeyValues::KeyValues, Thinker_Create, KeyValues::~KeyValues, CountdownTimer::Reset, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_Ability_Nian_Whirlpool::OnChannelThink
// strings: "modifier_nian_whirlpool_thinker"
void __fastcall CDOTA_Ability_Nian_Whirlpool::CreateWhirlpools(CDOTA_Ability_Nian_Whirlpool *const this)
{
  int v2; // r14d
  int v3; // ebx
  float v4; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rax
  vec_t v7; // xmm0_4
  vec_t v8; // xmm2_4
  int m_Value; // r15d
  CDOTA_BaseNPC *v10; // rax
  CountdownTimer *p_m_ctTimer; // [rsp+18h] [rbp-98h]
  QAngle angle; // [rsp+30h] [rbp-80h] BYREF
  Vector dir; // [rsp+40h] [rbp-70h] BYREF
  Vector vPoolLoc; // [rsp+50h] [rbp-60h]
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v16; // [rsp+78h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  p_m_ctTimer = &this->m_ctTimer;
  if ( this->m_ctTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_ctTimer._vptr_CountdownTimer + 2))(p_m_ctTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_ctTimer.m_timestamp.m_Value = -1.0;
  }
  if ( this->pool_count > 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      angle.y = RandomFloat(v3, (v3 + 90));
      angle.x = 0.0;
      angle.z = 0.0;
      AngleVectors(&angle, &dir, 0, 0);
      v3 = (v3 + 90) % 360;
      v4 = RandomFloat(this->min_distance, this->max_distance);
      dir.x = dir.x * v4;
      dir.y = dir.y * v4;
      dir.z = v4 * dir.z;
      Caster = CDOTABaseAbility::GetCaster(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
      v7 = AbsOrigin->z + dir.z;
      v8 = AbsOrigin->x + dir.x;
      vPoolLoc.y = AbsOrigin->y + dir.y;
      vPoolLoc.z = v7;
      vPoolLoc.x = v8;
      KeyValues::KeyValues(&kv, "modifier_nian_whirlpool_thinker");
      m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
      v10 = CDOTABaseAbility::GetCaster(this);
      Thinker_Create(v10, this, "modifier_nian_whirlpool_thinker", &kv, vPoolLoc, m_Value, 0, 1, 0);
      ++v2;
      KeyValues::~KeyValues(&kv);
    }
    while ( this->pool_count > v2 );
  }
  CountdownTimer::Reset(p_m_ctTimer);
}


// CDOTA_Modifier_Nian_WhirlpoolThinker::~CDOTA_Modifier_Nian_WhirlpoolThinker  (line 4900, @0x0000000002b1a3a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Nian_WhirlpoolThinker::~CDOTA_Modifier_Nian_WhirlpoolThinker(
        CDOTA_Modifier_Nian_WhirlpoolThinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_446EAF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Nian_WhirlpoolThinker::~CDOTA_Modifier_Nian_WhirlpoolThinker  (line 4900, @0x0000000002b1a3c0, libserver.so)  // inlines: ~CDOTA_Modifier_Nian_WhirlpoolThinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Nian_WhirlpoolThinker::~CDOTA_Modifier_Nian_WhirlpoolThinker(
        CDOTA_Modifier_Nian_WhirlpoolThinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_446EAF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nian_WhirlpoolThinker::IsHidden  (line 4910, @0x0000000002b166a0, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_WhirlpoolThinker::IsHidden(CDOTA_Modifier_Nian_WhirlpoolThinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Nian_WhirlpoolThinker::IsPurgable  (line 4911, @0x0000000002b166b0, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_WhirlpoolThinker::IsPurgable(CDOTA_Modifier_Nian_WhirlpoolThinker *const this)
{
  return 0;
}


// CDOTA_Modifier_Nian_WhirlpoolThinker::OnCreated  (line 4931, @0x0000000002b09f00, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
// strings: "pull_radius"
void __fastcall CDOTA_Modifier_Nian_WhirlpoolThinker::OnCreated(
        CDOTA_Modifier_Nian_WhirlpoolThinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v4; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->pull_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "pull_radius", -1, 0);
  else
    this->pull_radius = 0;
  CDOTA_Buff::StartIntervalThink(this, 0.5, v4);
}


// CDOTA_Modifier_Nian_WhirlpoolThinker::OnIntervalThink  (line 4950, @0x0000000002afe4d0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, KeyValues::KeyValues, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// strings: "modifier_nian_whirlpool_pull"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Nian_WhirlpoolThinker::OnIntervalThink(CDOTA_Modifier_Nian_WhirlpoolThinker *const this)
{
  __m128i v1; // xmm1
  float v3; // r13d
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v7; // rax
  __int64 v8; // r12
  int v9; // ebx
  CHandle<CBaseEntity> *v10; // rdx
  uint32 m_Index; // eax
  __int16 v12; // cx
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *v17; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+30h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v21; // [rsp+68h] [rbp-38h]

  *v1.m128i_i32 = this->pull_radius;
  hEntities.m_Size = 0;
  v21 = __readfsqword(0x28u);
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  Caster = CDOTA_Buff::GetCaster(this);
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v7 = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(v7->m_iTeamNum.m_Value, AbsOrigin, Caster, v3, &hEntities, 2, 3, 16, 0, 0);
  if ( hEntities.m_Size > 0 )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      while ( 1 )
      {
        v10 = &hEntities.m_Memory.m_pMemory[v8];
        m_Index = hEntities.m_Memory.m_pMemory[v8].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v12 = v10->m_Index;
          v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->m_Index) >> 9) & 0x3F];
          if ( v13 != 0 )
          {
            v14 = &v13[v12 & 0x1FF];
            if ( v14 != 0 && m_Index == v14->m_EHandle.m_Index )
            {
              m_pInstance = v14->m_pInstance;
              if ( v14->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                break;
            }
          }
        }
        ++v9;
        ++v8;
        if ( hEntities.m_Size <= v9 )
          goto LABEL_11;
      }
      KeyValues::KeyValues(&kv, "modifier_nian_whirlpool_pull");
      Ability = CDOTA_Buff::GetAbility(this);
      v17 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v17, Ability, "modifier_nian_whirlpool_pull", &kv, 0);
      ++v9;
      ++v8;
      KeyValues::~KeyValues(&kv);
    }
    while ( hEntities.m_Size > v9 );
  }
LABEL_11:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
}


// CDOTA_Modifier_Nian_WhirlpoolThinker::OnDestroy  (line 4971, @0x0000000002ae9910, libserver.so)
// calls: CDOTA_Buff::GetParent, UTIL_Remove
void __fastcall CDOTA_Modifier_Nian_WhirlpoolThinker::OnDestroy(CDOTA_Modifier_Nian_WhirlpoolThinker *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  UTIL_Remove(Parent);
}


// CDOTA_Modifier_Nian_Whirlpool_Pull::~CDOTA_Modifier_Nian_Whirlpool_Pull  (line 4989, @0x0000000002b1a330, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Nian_Whirlpool_Pull::~CDOTA_Modifier_Nian_Whirlpool_Pull(
        CDOTA_Modifier_Nian_Whirlpool_Pull *const this)
{
  this->_vptr_CDOTA_Buff = &off_446EE10;
  this->_vptr_CHorizontalMotionController = &off_446F0F8;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Nian_Whirlpool_Pull::~CDOTA_Modifier_Nian_Whirlpool_Pull  (line 4989, @0x0000000002b1a360, libserver.so)  // inlines: ~CDOTA_Modifier_Nian_Whirlpool_Pull
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Nian_Whirlpool_Pull::~CDOTA_Modifier_Nian_Whirlpool_Pull(
        CDOTA_Modifier_Nian_Whirlpool_Pull *const this)
{
  this->_vptr_CDOTA_Buff = &off_446EE10;
  this->_vptr_CHorizontalMotionController = &off_446F0F8;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nian_Whirlpool_Pull::IsPurgable  (line 4998, @0x0000000002b166c0, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Whirlpool_Pull::IsPurgable(CDOTA_Modifier_Nian_Whirlpool_Pull *const this)
{
  return 0;
}


// CDOTA_Modifier_Nian_Whirlpool_Pull::IsHorizontalMotionValidToApply  (line 5006, @0x0000000002b166d0, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Nian_Whirlpool_Pull::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_Nian_Whirlpool_Pull *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Nian_Whirlpool_Pull::GetOverrideAnimation  (line 5010, @0x0000000002b16700, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Nian_Whirlpool_Pull::GetOverrideAnimation(
        CDOTA_Modifier_Nian_Whirlpool_Pull *const this,
        const CModifierParams *const params)
{
  return 0x44BC800000000001uLL;
}


// CDOTA_Modifier_Nian_Whirlpool_Pull::DeclareFunctions  (line 5034, @0x0000000002ae80f0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Nian_Whirlpool_Pull::GetOverrideAnimation(CModifierParams const&)
void __fastcall CDOTA_Modifier_Nian_Whirlpool_Pull::DeclareFunctions(CDOTA_Modifier_Nian_Whirlpool_Pull *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_Nian_Whirlpool_Pull::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
}


// CDOTA_Modifier_Nian_Whirlpool_Pull::OnCreated  (line 5041, @0x0000000002b0bb60, libserver.so)  // inlines: AssignTo, DOTAGameRules, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetGameTime, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, CDOTALocomotor::ApplyHorizontalMotionController
// strings: "pull_radius", "pull_speed", "whirlpool_damage", "tick_rate"
void __fastcall CDOTA_Modifier_Nian_Whirlpool_Pull::OnCreated(
        CDOTA_Modifier_Nian_Whirlpool_Pull *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  float v7; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v9; // rax
  float v10; // xmm0_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->pull_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "pull_radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->pull_radius = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->pull_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "pull_speed", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_11:
      this->whirlpool_damage = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_12;
    }
  }
  this->pull_speed = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_11;
LABEL_4:
  this->whirlpool_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "whirlpool_damage", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->tick_rate = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "tick_rate", -1, 0);
    goto LABEL_6;
  }
LABEL_12:
  this->tick_rate = 0.0;
LABEL_6:
  CDOTA_Buff::StartIntervalThink(this, 0.0, v7);
  Parent = CDOTA_Buff::GetParent(this);
  v9 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::ApplyHorizontalMotionController(v9, &this->CHorizontalMotionController, 0);
  v10 = 1.0;
  if ( g_pGameRules != 0 )
    v10 = *&g_pGameRules[18].m_szQuestName[20] + 1.0;
  this->m_flDamageTick = v10;
}


// CDOTA_Modifier_Nian_Whirlpool_Pull::OnDestroy  (line 5058, @0x0000000002aea610, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::RemoveHorizontalMotionController
void __fastcall CDOTA_Modifier_Nian_Whirlpool_Pull::OnDestroy(CDOTA_Modifier_Nian_Whirlpool_Pull *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v3; // rax

  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveHorizontalMotionController(v3, &this->CHorizontalMotionController);
}


// CDOTA_Modifier_Nian_Whirlpool_Pull::OnRefresh  (line 5067, @0x0000000002b0b250, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "pull_radius", "pull_speed", "whirlpool_damage", "tick_rate"
void __fastcall CDOTA_Modifier_Nian_Whirlpool_Pull::OnRefresh(
        CDOTA_Modifier_Nian_Whirlpool_Pull *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->pull_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "pull_radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->pull_radius = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->pull_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "pull_speed", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_8:
      this->whirlpool_damage = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->pull_speed = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->whirlpool_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "whirlpool_damage", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->tick_rate = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "tick_rate", -1, 0);
    return;
  }
LABEL_9:
  this->tick_rate = 0.0;
}


// CDOTA_Modifier_Nian_Whirlpool_Pull::CheckState  (line 5077, @0x0000000002ae8110, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Nian_Whirlpool_Pull::CheckState(
        CDOTA_Modifier_Nian_Whirlpool_Pull *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x18uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFFFFFE7LL;
}


// CDOTA_Modifier_Nian_Whirlpool_Pull::UpdateHorizontalMotion  (line 5085, @0x0000000002aef340, libserver.so)  // inlines: FastSqrt, Length2D, Normalized, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-
// calls: CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetCaster, CBaseEntity::SetAbsOrigin, VectorNormalize
void __fastcall CDOTA_Modifier_Nian_Whirlpool_Pull::UpdateHorizontalMotion(
        CDOTA_Modifier_Nian_Whirlpool_Pull *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *Caster; // rax
  const Vector *v8; // rax
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm3_4
  float v12; // xmm5_4
  float x; // r13d
  float y; // xmm1_4
  float z; // xmm0_4
  const Vector *v16; // rax
  vec_t v17; // xmm0_4
  vec_t v18; // xmm2_4
  __m128i x_low; // xmm6
  float dtb; // [rsp+8h] [rbp-38h]
  float flTravelDistance; // [rsp+Ch] [rbp-34h]
  float flTravelDistancea; // [rsp+Ch] [rbp-34h]
  Vector vOrigin; // [rsp+10h] [rbp-30h] BYREF

  AbsOrigin = CBaseEntity::GetAbsOrigin(me);
  Caster = CDOTA_Buff::GetCaster(this);
  v8 = CBaseEntity::GetAbsOrigin(Caster);
  v9 = v8->x - AbsOrigin->x;
  v10 = v8->y - AbsOrigin->y;
  v11 = fsqrt((v9 * v9) + (v10 * v10));
  v12 = fminf(v11, this->pull_speed * a3);
  if ( v11 == 0.0 )
  {
    x = vec3_origin.x;
    y = vec3_origin.y;
    z = vec3_origin.z;
  }
  else
  {
    flTravelDistancea = v12;
    vOrigin.y = v8->y - AbsOrigin->y;
    vOrigin.x = v9;
    vOrigin.z = 0.0;
    VectorNormalize(&vOrigin);
    x_low = LODWORD(vOrigin.x);
    *x_low.m128i_i32 = vOrigin.x * flTravelDistancea;
    y = vOrigin.y * flTravelDistancea;
    x = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
    z = flTravelDistancea * vOrigin.z;
  }
  dtb = y;
  flTravelDistance = z;
  v16 = CBaseEntity::GetAbsOrigin(me);
  v17 = flTravelDistance + v16->z;
  v18 = x + v16->x;
  vOrigin.y = dtb + v16->y;
  vOrigin.z = v17;
  vOrigin.x = v18;
  CBaseEntity::SetAbsOrigin(me, &vOrigin);
}


// CDOTA_Modifier_Nian_Whirlpool_Pull::OnIntervalThink  (line 5101, @0x0000000002aec8c0, libserver.so)  // inlines: DOTAGameRules, GetGameTime
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage
void __fastcall CDOTA_Modifier_Nian_Whirlpool_Pull::OnIntervalThink(CDOTA_Modifier_Nian_Whirlpool_Pull *const this)
{
  float v1; // xmm1_4
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_BaseNPC *Caster; // rax
  float v6; // xmm0_4
  float whirlpool_damage; // [rsp-24h] [rbp-2Ch]

  v1 = 0.0;
  if ( g_pGameRules != 0 )
    v1 = *&g_pGameRules[18].m_szQuestName[20];
  if ( v1 >= this->m_flDamageTick )
  {
    whirlpool_damage = this->whirlpool_damage;
    Ability = CDOTA_Buff::GetAbility(this);
    Parent = CDOTA_Buff::GetParent(this);
    Caster = CDOTA_Buff::GetCaster(this);
    ApplyDamage(Caster, Parent, Ability, whirlpool_damage, 2, 0);
    v6 = 1.0;
    if ( g_pGameRules != 0 )
      v6 = *&g_pGameRules[18].m_szQuestName[20] + 1.0;
    this->m_flDamageTick = v6;
  }
}


// CDOTA_Ability_Nian_Eruption::~CDOTA_Ability_Nian_Eruption  (line 5117, @0x0000000002b1c640, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Nian_Eruption::~CDOTA_Ability_Nian_Eruption(CDOTA_Ability_Nian_Eruption *const this)
{
  this->_vptr_IHandleEntity = &off_446F1D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Nian_Eruption::~CDOTA_Ability_Nian_Eruption  (line 5117, @0x0000000002b1c660, libserver.so)  // inlines: ~CDOTA_Ability_Nian_Eruption
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Nian_Eruption::~CDOTA_Ability_Nian_Eruption(CDOTA_Ability_Nian_Eruption *const this)
{
  this->_vptr_IHandleEntity = &off_446F1D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Nian_Eruption::Schema_DynamicBinding  (line 5119, @0x0000000002b16720, libserver.so)
// globals: CDOTA_Ability_Nian_Eruption::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nian_Eruption::Schema_DynamicBinding(
        const CDOTA_Ability_Nian_Eruption *const this)
{
  return CDOTA_Ability_Nian_Eruption::s_pSchemaBinding;
}


// CDOTA_Ability_Nian_Eruption::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 5119, @0x0000000002b16730, libserver.so)
// globals: CDOTA_Ability_Nian_Eruption::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nian_Eruption::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Nian_Eruption::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nian_Eruption::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Nian_Eruption::CEntityInstanceEntityClass::DestructInstance  (line 5119, @0x0000000002b16740, libserver.so)  // inlines: Destruct<CDOTA_Ability_Nian_Eruption>
void __fastcall CDOTA_Ability_Nian_Eruption::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Nian_Eruption::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Nian_Eruption::CEntityInstanceEntityClass::FreeInstance  (line 5119, @0x0000000002b16760, libserver.so)
void __fastcall CDOTA_Ability_Nian_Eruption::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Nian_Eruption::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Nian_Eruption::CEntityInstanceEntityClass::CanAllocate  (line 5119, @0x0000000002b16780, libserver.so)
bool __fastcall CDOTA_Ability_Nian_Eruption::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Nian_Eruption::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Nian_Eruption::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 5119, @0x0000000002b16790, libserver.so)
// globals: CDOTA_Ability_Nian_Eruption::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Nian_Eruption::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Nian_Eruption::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nian_Eruption::s_pSchemaBinding;
}


// CDOTA_Ability_Nian_Eruption::CEntityInstanceEntityClass::AllocateInstance  (line 5119, @0x0000000002b193f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Nian_Eruption::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Nian_Eruption::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Nian_Eruption::CEntityInstanceEntityClass::ConstructInstance  (line 5119, @0x0000000002b1b910, libserver.so)  // inlines: CDOTA_Ability_Nian_Eruption, Construct<CDOTA_Ability_Nian_Eruption>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Nian_Eruption::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Nian_Eruption::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_446F1D0;
  }
  return p;
}


// CDOTA_Ability_Nian_Eruption::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 5119, @0x0000000002b22450, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Nian_Eruption::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nian_Eruption::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Nian_Eruption::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 5119, @0x0000000002b22470, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Nian_Eruption::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nian_Eruption::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Nian_Eruption::GetEntityClassInternal  (line 5119, @0x0000000002b2c2a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "CDOTA_Ability_Nian_Eruption"
// globals: `guard variable for'CDOTA_Ability_Nian_Eruption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_EruptionClass, CDOTA_Ability_Nian_Eruption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_EruptionClass, __dso_handle, CDOTA_Ability_Nian_Eruption::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Nian_Eruption::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_EruptionClassInfo, CDOTA_Ability_Nian_Eruption::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_EruptionClassInfo
CEntityClass *__cdecl CDOTA_Ability_Nian_Eruption::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Nian_Eruption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_EruptionClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nian_Eruption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_EruptionClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Nian_Eruption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_EruptionClass);
    CDOTA_Ability_Nian_Eruption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_EruptionClass._vptr_CEntityClass = off_446F150;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nian_Eruption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_EruptionClass);
    __cxa_atexit(
      CDOTA_Ability_Nian_Eruption::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Nian_Eruption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_EruptionClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Nian_EruptionClass != 0 )
    return &CDOTA_Ability_Nian_Eruption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_EruptionClass;
  if ( `guard variable for'CDOTA_Ability_Nian_Eruption::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_EruptionClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nian_Eruption::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_EruptionClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Nian_Eruption::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_EruptionClassInfo,
      "CDOTA_Ability_Nian_Eruption",
      "nian_eruption",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nian_Eruption::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_EruptionClassInfo);
  }
  CDOTA_Ability_Nian_Eruption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_EruptionClass.m_pClassInfo = &CDOTA_Ability_Nian_Eruption::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_EruptionClassInfo;
  CDOTA_Ability_Nian_Eruption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_EruptionClass.m_pBaseClassInfo = CDOTA_Ability_Nian_Eruption::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_EruptionClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Nian_EruptionClass = &CDOTA_Ability_Nian_Eruption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_EruptionClass;
  CDOTA_Ability_Nian_Eruption::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_EruptionClassInfo.m_pClass = &CDOTA_Ability_Nian_Eruption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_EruptionClass;
  CDOTA_Ability_Nian_Eruption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_EruptionClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Nian_EruptionClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Nian_Eruption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_EruptionClass;
}


// CDOTA_Ability_Nian_Eruption::YouForgotToImplementOrDeclareServerClass  (line 5128, @0x0000000002ae8130, libserver.so)
int __fastcall CDOTA_Ability_Nian_Eruption::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Nian_Eruption *const this)
{
  return 0;
}


// CDOTA_Ability_Nian_Eruption::GetServerClass  (line 5128, @0x0000000002af2b70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Nian_Eruption::GetServerClass(CDOTA_Ability_Nian_Eruption *const this)
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


// CDOTA_Ability_Nian_Eruption::OnSpellStart  (line 5136, @0x0000000002b070b0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, QAngle, RandomYawVector, VectorAdd, VectorMultiply, operator*, operator+
// calls: CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, RandomFloat, AngleVectors, KeyValues::KeyValues, Thinker_Create, KeyValues::~KeyValues, CDOTA_BaseNPC::UnitEmitSound, _Unwind_Resume, __stack_chk_fail
// strings: "radius_locations", "num_locations", "modifier_nian_eruption_pending", "Nian.Eruption.PreAttack"
void __fastcall CDOTA_Ability_Nian_Eruption::OnSpellStart(CDOTA_Ability_Nian_Eruption *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  int LevelSpecialValue; // r15d
  int i; // r13d
  int m_Value; // r14d
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  float radius_locations; // [rsp+20h] [rbp-80h]
  const Vector v9; // [rsp+24h] [rbp-7Ch]
  QAngle v10; // [rsp+30h] [rbp-70h] BYREF
  Vector vLocation; // [rsp+40h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v13; // [rsp+68h] [rbp-38h]

  v13 = __readfsqword(0x28u);
  if ( CDOTABaseAbility::GetCaster(this) != 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    v9 = *CBaseEntity::GetAbsOrigin(Caster);
    radius_locations = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "radius_locations", -1, 0);
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "num_locations", -1, 0);
    if ( LevelSpecialValue > 0 )
    {
      for ( i = 0; i != LevelSpecialValue; ++i )
      {
        v10.y = RandomFloat(0.0, 360.0);
        v10.x = 0.0;
        v10.z = 0.0;
        AngleVectors(&v10, &vLocation, 0, 0);
        vLocation.x = (vLocation.x * radius_locations) + v9.x;
        vLocation.y = (vLocation.y * radius_locations) + v9.y;
        vLocation.z = (radius_locations * vLocation.z) + v9.z;
        KeyValues::KeyValues(&kv, "modifier_nian_eruption_pending");
        m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
        v6 = CDOTABaseAbility::GetCaster(this);
        Thinker_Create(v6, this, "modifier_nian_eruption_pending", &kv, vLocation, m_Value, 0, 1, 0);
        KeyValues::~KeyValues(&kv);
      }
    }
    v7 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v7, "Nian.Eruption.PreAttack", 0.0, 0, 0);
  }
}


// CDOTA_Modifier_Nian_EruptionPendingThinker::~CDOTA_Modifier_Nian_EruptionPendingThinker  (line 5167, @0x0000000002b1a2e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Nian_EruptionPendingThinker::~CDOTA_Modifier_Nian_EruptionPendingThinker(
        CDOTA_Modifier_Nian_EruptionPendingThinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_446FC90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Nian_EruptionPendingThinker::~CDOTA_Modifier_Nian_EruptionPendingThinker  (line 5167, @0x0000000002b1a300, libserver.so)  // inlines: ~CDOTA_Modifier_Nian_EruptionPendingThinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Nian_EruptionPendingThinker::~CDOTA_Modifier_Nian_EruptionPendingThinker(
        CDOTA_Modifier_Nian_EruptionPendingThinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_446FC90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nian_EruptionPendingThinker::IsHidden  (line 5177, @0x0000000002b167a0, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_EruptionPendingThinker::IsHidden(
        CDOTA_Modifier_Nian_EruptionPendingThinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Nian_EruptionPendingThinker::IsPurgable  (line 5178, @0x0000000002b167b0, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_EruptionPendingThinker::IsPurgable(
        CDOTA_Modifier_Nian_EruptionPendingThinker *const this)
{
  return 0;
}


// CDOTA_Modifier_Nian_EruptionPendingThinker::OnCreated  (line 5199, @0x0000000002b0a350, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
// strings: "tick_count", "beam_radius"
void __fastcall CDOTA_Modifier_Nian_EruptionPendingThinker::OnCreated(
        CDOTA_Modifier_Nian_EruptionPendingThinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float v5; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->tick_count = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->beam_radius = 0;
    goto LABEL_4;
  }
  this->tick_count = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "tick_count", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->beam_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "beam_radius", -1, 0);
LABEL_4:
  this->m_nTickCount = 0;
  CDOTA_Buff::StartIntervalThink(this, 1.0, v5);
}


// CDOTA_Modifier_Nian_EruptionPendingThinker::OnIntervalThink  (line 5213, @0x0000000002b01ef0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, GetTeamNumber, Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, KeyValues::KeyValues, CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<float>, KeyValues::SetFloat, CDOTA_Buff::GetCaster, Thinker_Create, KeyValues::~KeyValues, UTIL_Remove, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll (19 total)
// strings: "modifier_nian_eruption", "explosion_duration", "particles/generic_hero_status/hero_levelup.vpcf"
void __fastcall CDOTA_Modifier_Nian_EruptionPendingThinker::OnIntervalThink(
        CDOTA_Modifier_Nian_EruptionPendingThinker *const this)
{
  __m128i v1; // xmm2
  float v3; // r15d
  CDOTA_BaseNPC *v4; // r14
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v7; // rax
  CDOTABaseAbility *Ability; // rax
  float v9; // xmm1_4
  int m_Value; // r15d
  CDOTA_BaseNPC *v11; // rax
  Vector *v12; // r14
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *Parent; // rax
  int BuffParticleEffect; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTABaseAbility *pAbility; // [rsp+18h] [rbp-88h]
  float explosion_duration; // [rsp+2Ch] [rbp-74h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+30h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v22; // [rsp+68h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  if ( this->m_nTickCount <= this->tick_count )
  {
    Parent = CDOTA_Buff::GetParent(this);
    BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                           this,
                           "particles/generic_hero_status/hero_levelup.vpcf",
                           1,
                           Parent,
                           0);
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(ParticleManager, BuffParticleEffect);
    ++this->m_nTickCount;
  }
  else
  {
    *v1.m128i_i32 = this->beam_radius;
    hEntities.m_Size = 0;
    hEntities.m_Memory.m_pMemory = 0;
    hEntities.m_Memory.m_nAllocationCount = 0;
    hEntities.m_Memory.m_nGrowSize = 0;
    v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
    v4 = CDOTA_Buff::GetParent(this);
    v5 = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
    v7 = CDOTA_Buff::GetParent(this);
    FindUnitsInRadius(v7->m_iTeamNum.m_Value, AbsOrigin, v4, v3, &hEntities, 3, 1, 0, 0, 0);
    if ( hEntities.m_Size == 0 )
    {
      KeyValues::KeyValues(&kv, "modifier_nian_eruption");
      Ability = CDOTA_Buff::GetAbility(this);
      DotaRetrieveAbilityValue<float>(Ability, &explosion_duration, "explosion_duration");
      KeyValues::SetFloat(&kv, "duration", v9);
      m_Value = CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value;
      v11 = CDOTA_Buff::GetParent(this);
      v12 = CBaseEntity::GetAbsOrigin(v11);
      pAbility = CDOTA_Buff::GetAbility(this);
      Caster = CDOTA_Buff::GetCaster(this);
      Thinker_Create(Caster, pAbility, "modifier_nian_eruption", &kv, *v12, m_Value, 0, 1, 0);
      KeyValues::~KeyValues(&kv);
    }
    v14 = CDOTA_Buff::GetParent(this);
    UTIL_Remove(v14);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hEntities);
    if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
      if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
    }
  }
}


// CDOTA_Modifier_Nian_EruptionThinker::~CDOTA_Modifier_Nian_EruptionThinker  (line 5254, @0x0000000002b1a290, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Nian_EruptionThinker::~CDOTA_Modifier_Nian_EruptionThinker(
        CDOTA_Modifier_Nian_EruptionThinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_446FFB0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Nian_EruptionThinker::~CDOTA_Modifier_Nian_EruptionThinker  (line 5254, @0x0000000002b1a2b0, libserver.so)  // inlines: ~CDOTA_Modifier_Nian_EruptionThinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Nian_EruptionThinker::~CDOTA_Modifier_Nian_EruptionThinker(
        CDOTA_Modifier_Nian_EruptionThinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_446FFB0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nian_EruptionThinker::IsHidden  (line 5264, @0x0000000002b167c0, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_EruptionThinker::IsHidden(CDOTA_Modifier_Nian_EruptionThinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Nian_EruptionThinker::IsPurgable  (line 5265, @0x0000000002b167d0, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_EruptionThinker::IsPurgable(CDOTA_Modifier_Nian_EruptionThinker *const this)
{
  return 0;
}


// CDOTA_Modifier_Nian_EruptionThinker::OnCreated  (line 5285, @0x0000000002b0bce0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, Vector
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_BaseNPC::UnitEmitSound
// strings: "particles/units/heroes/hero_alchemist/alchemist_acid_spray.vpcf", "Nian.EruptionPool"
void __fastcall CDOTA_Modifier_Nian_EruptionThinker::OnCreated(
        CDOTA_Modifier_Nian_EruptionThinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  float v6; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax
  int BuffParticleEffect; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v10; // rax
  double v11; // [rsp+0h] [rbp-20h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->explosion_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "explosion_radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_7:
    this->damage_interval = 0.0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
LABEL_8:
    this->damage = 0;
    goto LABEL_5;
  }
  this->explosion_radius = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_7;
LABEL_3:
  this->damage_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "damage_interval", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "damage", -1, 0);
LABEL_5:
  CDOTA_Buff::StartIntervalThink(this, this->damage_interval, v6);
  HIDWORD(v11) = 1065353216;
  *&v11 = this->explosion_radius;
  Parent = CDOTA_Buff::GetParent(this);
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/units/heroes/hero_alchemist/alchemist_acid_spray.vpcf",
                         1,
                         Parent,
                         0);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, BuffParticleEffect, 1, v11, 1.0);
  v10 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(v10, "Nian.EruptionPool", 0.0, 0, 0);
}


// CDOTA_Modifier_Nian_EruptionThinker::OnIntervalThink  (line 5309, @0x0000000002afe6e0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, ApplyDamage, DOTA_EmitSound, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "Nian.Eruption.Damage"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Nian_EruptionThinker::OnIntervalThink(CDOTA_Modifier_Nian_EruptionThinker *const this)
{
  __m128i v1; // xmm2
  float v3; // r14d
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v7; // rax
  __int64 v8; // rbx
  CHandle<CBaseEntity> *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // rax
  float flDamage; // [rsp+1Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+20h] [rbp-50h] BYREF

  hEntities.m_Size = 0;
  *v1.m128i_i32 = this->explosion_radius;
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  Parent = CDOTA_Buff::GetParent(this);
  v5 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = CDOTA_Buff::GetParent(this);
  FindUnitsInRadius(v7->m_iTeamNum.m_Value, AbsOrigin, Parent, v3, &hEntities, 3, 1, 0, 0, 0);
  if ( hEntities.m_Size > 0 )
  {
    v8 = 0;
    do
    {
      while ( 1 )
      {
        v9 = &hEntities.m_Memory.m_pMemory[v8];
        m_Index = v9->m_Index;
        if ( v9->m_Index + 2 > 1 )
        {
          v11 = v9->m_Index;
          v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_Index) >> 9) & 0x3F];
          if ( v12 != 0 )
          {
            v13 = &v12[v11 & 0x1FF];
            if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
            {
              m_pInstance = v13->m_pInstance;
              if ( v13->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                break;
            }
          }
        }
        if ( hEntities.m_Size <= ++v8 )
          goto LABEL_11;
      }
      flDamage = this->damage;
      Ability = CDOTA_Buff::GetAbility(this);
      Caster = CDOTA_Buff::GetCaster(this);
      ApplyDamage(Caster, m_pInstance, Ability, flDamage, 2, 0);
      DOTA_EmitSound(1, "Nian.Eruption.Damage", m_pInstance);
      ++v8;
    }
    while ( hEntities.m_Size > v8 );
  }
LABEL_11:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
}


// CDOTA_Ability_Nian_Sigils::~CDOTA_Ability_Nian_Sigils  (line 5337, @0x0000000002b1c690, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Nian_Sigils::~CDOTA_Ability_Nian_Sigils(CDOTA_Ability_Nian_Sigils *const this)
{
  this->_vptr_IHandleEntity = &off_4470310;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Nian_Sigils::~CDOTA_Ability_Nian_Sigils  (line 5337, @0x0000000002b1c6b0, libserver.so)  // inlines: ~CDOTA_Ability_Nian_Sigils
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Nian_Sigils::~CDOTA_Ability_Nian_Sigils(CDOTA_Ability_Nian_Sigils *const this)
{
  this->_vptr_IHandleEntity = &off_4470310;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Nian_Sigils::Schema_DynamicBinding  (line 5339, @0x0000000002b167e0, libserver.so)
// globals: CDOTA_Ability_Nian_Sigils::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nian_Sigils::Schema_DynamicBinding(
        const CDOTA_Ability_Nian_Sigils *const this)
{
  return CDOTA_Ability_Nian_Sigils::s_pSchemaBinding;
}


// CDOTA_Ability_Nian_Sigils::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 5339, @0x0000000002b167f0, libserver.so)
// globals: CDOTA_Ability_Nian_Sigils::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nian_Sigils::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Nian_Sigils::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nian_Sigils::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Nian_Sigils::CEntityInstanceEntityClass::DestructInstance  (line 5339, @0x0000000002b16800, libserver.so)  // inlines: Destruct<CDOTA_Ability_Nian_Sigils>
void __fastcall CDOTA_Ability_Nian_Sigils::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Nian_Sigils::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Nian_Sigils::CEntityInstanceEntityClass::FreeInstance  (line 5339, @0x0000000002b16820, libserver.so)
void __fastcall CDOTA_Ability_Nian_Sigils::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Nian_Sigils::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Nian_Sigils::CEntityInstanceEntityClass::CanAllocate  (line 5339, @0x0000000002b16840, libserver.so)
bool __fastcall CDOTA_Ability_Nian_Sigils::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Nian_Sigils::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Nian_Sigils::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 5339, @0x0000000002b16850, libserver.so)
// globals: CDOTA_Ability_Nian_Sigils::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Nian_Sigils::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Nian_Sigils::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nian_Sigils::s_pSchemaBinding;
}


// CDOTA_Ability_Nian_Sigils::CEntityInstanceEntityClass::AllocateInstance  (line 5339, @0x0000000002b19430, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Nian_Sigils::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Nian_Sigils::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Nian_Sigils::CEntityInstanceEntityClass::ConstructInstance  (line 5339, @0x0000000002b1b940, libserver.so)  // inlines: CDOTA_Ability_Nian_Sigils, Construct<CDOTA_Ability_Nian_Sigils>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Nian_Sigils::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Nian_Sigils::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4470310;
  }
  return p;
}


// CDOTA_Ability_Nian_Sigils::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 5339, @0x0000000002b224a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Nian_Sigils::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nian_Sigils::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Nian_Sigils::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 5339, @0x0000000002b224c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Nian_Sigils::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nian_Sigils::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Nian_Sigils::GetEntityClassInternal  (line 5339, @0x0000000002b2c3f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "nian_sigils", "CDOTA_Ability_Nian_Sigils"
// globals: `guard variable for'CDOTA_Ability_Nian_Sigils::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_SigilsClass, CDOTA_Ability_Nian_Sigils::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_SigilsClass, __dso_handle, CDOTA_Ability_Nian_Sigils::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Nian_Sigils::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_SigilsClassInfo, CDOTA_Ability_Nian_Sigils::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_SigilsClassInfo
CEntityClass *__cdecl CDOTA_Ability_Nian_Sigils::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Nian_Sigils::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_SigilsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nian_Sigils::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_SigilsClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Nian_Sigils::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_SigilsClass);
    CDOTA_Ability_Nian_Sigils::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_SigilsClass._vptr_CEntityClass = off_4470290;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nian_Sigils::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_SigilsClass);
    __cxa_atexit(
      CDOTA_Ability_Nian_Sigils::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Nian_Sigils::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_SigilsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Nian_SigilsClass != 0 )
    return &CDOTA_Ability_Nian_Sigils::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_SigilsClass;
  if ( `guard variable for'CDOTA_Ability_Nian_Sigils::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_SigilsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nian_Sigils::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_SigilsClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Nian_Sigils::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_SigilsClassInfo,
      "CDOTA_Ability_Nian_Sigils",
      "nian_sigils",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nian_Sigils::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_SigilsClassInfo);
  }
  CDOTA_Ability_Nian_Sigils::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_SigilsClass.m_pClassInfo = &CDOTA_Ability_Nian_Sigils::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_SigilsClassInfo;
  CDOTA_Ability_Nian_Sigils::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_SigilsClass.m_pBaseClassInfo = CDOTA_Ability_Nian_Sigils::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_SigilsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Nian_SigilsClass = &CDOTA_Ability_Nian_Sigils::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_SigilsClass;
  CDOTA_Ability_Nian_Sigils::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_SigilsClassInfo.m_pClass = &CDOTA_Ability_Nian_Sigils::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_SigilsClass;
  CDOTA_Ability_Nian_Sigils::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_SigilsClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Nian_SigilsClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Nian_Sigils::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_SigilsClass;
}


// CDOTA_Ability_Nian_Sigils::OnAbilityPhaseStart  (line 5346, @0x0000000002b1baa0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::UnitEmitSound, CDOTA_BaseNPC::StartGesture
// strings: "Nian.FrozenSigil.Cast"
bool __fastcall CDOTA_Ability_Nian_Sigils::OnAbilityPhaseStart(CDOTA_Ability_Nian_Sigils *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(Caster, "Nian.FrozenSigil.Cast", 0.0, 0, 0);
  v3 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v3, 1514, 0.1, 0.0, 0, 0, 1.0);
  return 1;
}


// CDOTA_Ability_Nian_Sigils::OnAbilityPhaseInterrupted  (line 5352, @0x0000000002b1d6a0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CBaseEntity::StopSound, CDOTA_BaseNPC::RemoveGesture
// strings: "Nian.FrozenSigil.Cast"
void __fastcall CDOTA_Ability_Nian_Sigils::OnAbilityPhaseInterrupted(CDOTA_Ability_Nian_Sigils *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::StopSound(Caster, "Nian.FrozenSigil.Cast");
  v3 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveGesture(v3, 1514);
}


// CDOTA_Ability_Nian_Sigils::YouForgotToImplementOrDeclareServerClass  (line 5360, @0x0000000002ae8140, libserver.so)
int __fastcall CDOTA_Ability_Nian_Sigils::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Nian_Sigils *const this)
{
  return 0;
}


// CDOTA_Ability_Nian_Sigils::GetServerClass  (line 5360, @0x0000000002af28f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Nian_Sigils::GetServerClass(CDOTA_Ability_Nian_Sigils *const this)
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


// CDOTA_Ability_Nian_Sigils::OnSpellStart  (line 5369, @0x0000000002b072b0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, SetMaximumGoldBounty, SetMinimumGoldBounty
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, V_snprintf, DOTACommander, RandomFloat, CDOTABaseAbility::GetCaster, DOTA_CreateUnitByName, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues (14 total)
// strings: "sigil_count", "sigil_level", "sigil_duration", "world_bounds_inset", "npc_dota_tusk_frozen_sigil%d", "modifier_tusk_frozen_sigil_aura" (8 total)
void __fastcall CDOTA_Ability_Nian_Sigils::OnSpellStart(CDOTA_Ability_Nian_Sigils *const this)
{
  int LevelSpecialValue; // r12d
  int v3; // r13d
  CDOTA_Commander *v4; // rax
  CDOTA_Commander *v5; // rax
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // r12
  float v10; // xmm1_4
  CDOTA_BaseNPC *v11; // rax
  float v12; // xmm1_4
  CDOTA_BaseNPC *v13; // rax
  vec_t z; // [rsp+4h] [rbp-1BCh]
  __int64 v15; // [rsp+8h] [rbp-1B8h]
  int sigil_count; // [rsp+20h] [rbp-1A0h]
  float iTeamNumber; // [rsp+28h] [rbp-198h]
  float iTeamNumbera; // [rsp+28h] [rbp-198h]
  int iTeamNumberb; // [rsp+28h] [rbp-198h]
  float world_bounds_inset; // [rsp+2Ch] [rbp-194h]
  Vector vPos; // [rsp+30h] [rbp-190h] BYREF
  KeyValues kv; // [rsp+40h] [rbp-180h] BYREF
  KeyValues kv2; // [rsp+60h] [rbp-160h] BYREF
  char szUnitName[264]; // [rsp+80h] [rbp-140h] BYREF
  unsigned __int64 v25; // [rsp+188h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  sigil_count = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "sigil_count", -1, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "sigil_level", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "sigil_duration", -1, 0);
  world_bounds_inset = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "world_bounds_inset", -1, 0);
  memset(szUnitName, 0, 260);
  V_snprintf(szUnitName, 260, "npc_dota_tusk_frozen_sigil%d", LevelSpecialValue);
  if ( sigil_count > 0 )
  {
    v3 = 0;
    v15 = *&vec3_origin.x;
    z = vec3_origin.z;
    do
    {
      *&vPos.x = v15;
      vPos.z = z;
      iTeamNumber = DOTACommander()->m_vWorldBounds[1].x - world_bounds_inset;
      v4 = DOTACommander();
      vPos.x = RandomFloat(world_bounds_inset + v4->m_vWorldBounds[0].x, iTeamNumber);
      iTeamNumbera = DOTACommander()->m_vWorldBounds[1].y - world_bounds_inset;
      v5 = DOTACommander();
      vPos.y = RandomFloat(world_bounds_inset + v5->m_vWorldBounds[0].y, iTeamNumbera);
      iTeamNumberb = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
      Caster = CDOTABaseAbility::GetCaster(this);
      v7 = CDOTABaseAbility::GetCaster(this);
      v8 = DOTA_CreateUnitByName(szUnitName, &vPos, 1, v7, Caster, iTeamNumberb);
      v9 = v8;
      if ( v8 != 0 )
      {
        v8->m_iGoldBountyMin = 0;
        v8->m_iGoldBountyMax = 0;
        KeyValues::KeyValues(&kv, "modifier_tusk_frozen_sigil_aura");
        KeyValues::SetFloat(&kv, "duration", v10);
        v11 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v9, v11, this, "modifier_tusk_frozen_sigil_aura", &kv, 0);
        KeyValues::KeyValues(&kv2, "modifier_kill");
        KeyValues::SetFloat(&kv2, "duration", v12);
        v13 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v9, v13, this, "modifier_kill", &kv2, 0);
        DOTA_EmitSound(8, "Nian.FrozenSigil", v9);
        KeyValues::~KeyValues(&kv2);
        KeyValues::~KeyValues(&kv);
      }
      ++v3;
    }
    while ( v3 != sigil_count );
  }
}


// CDOTA_Modifier_Nian_Waterball::~CDOTA_Modifier_Nian_Waterball  (line 5429, @0x0000000002b21710, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, CUtlMemory<Vector, int>::Purge, CUtlMemory<int, int>::Purge
void __fastcall CDOTA_Modifier_Nian_Waterball::~CDOTA_Modifier_Nian_Waterball(
        CDOTA_Modifier_Nian_Waterball *const this)
{
  bool v2; // zf
  CUtlVectorBase<Vector,CUtlMemory<Vector,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vLocations.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_4470DD0;
  this->m_vLocations.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_vLocations.m_Memory;
    CUtlMemory<Vector,int>::Purge(&this->m_vLocations.m_Memory);
    if ( (this->m_vLocations.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(p_m_Memory);
  }
  v2 = (this->m_vFXIndices.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vFXIndices.m_Size = 0;
  if ( !v2
    || (CUtlMemory<int,int>::Purge(&this->m_vFXIndices.m_Memory),
        (this->m_vFXIndices.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<int,int>::Purge(&this->m_vFXIndices.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Nian_Waterball::~CDOTA_Modifier_Nian_Waterball  (line 5429, @0x0000000002b217c0, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Modifier_Nian_Waterball, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<Vector, int>::Purge, CUtlMemory<int, int>::Purge
void __fastcall CDOTA_Modifier_Nian_Waterball::~CDOTA_Modifier_Nian_Waterball(
        CDOTA_Modifier_Nian_Waterball *const this)
{
  bool v2; // zf
  CUtlVectorBase<Vector,CUtlMemory<Vector,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vLocations.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_4470DD0;
  this->m_vLocations.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_vLocations.m_Memory;
    CUtlMemory<Vector,int>::Purge(&this->m_vLocations.m_Memory);
    if ( (this->m_vLocations.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(p_m_Memory);
  }
  v2 = (this->m_vFXIndices.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vFXIndices.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<int,int>::Purge(&this->m_vFXIndices.m_Memory);
    if ( (this->m_vFXIndices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&this->m_vFXIndices.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nian_Waterball::IsHidden  (line 5434, @0x0000000002b16860, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Waterball::IsHidden(CDOTA_Modifier_Nian_Waterball *const this)
{
  return 1;
}


// CDOTA_Modifier_Nian_Waterball::IsPurgable  (line 5435, @0x0000000002b16870, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Waterball::IsPurgable(CDOTA_Modifier_Nian_Waterball *const this)
{
  return 0;
}


// CDOTA_Modifier_Nian_Waterball::OnCreated  (line 5456, @0x0000000002b0aad0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
// strings: "trail_damage_per_second", "trail_damage_radius"
void __fastcall CDOTA_Modifier_Nian_Waterball::OnCreated(CDOTA_Modifier_Nian_Waterball *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float v5; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->trail_damage_per_second = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->trail_damage_radius = 0;
    goto LABEL_4;
  }
  this->trail_damage_per_second = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                    Ability,
                                    "trail_damage_per_second",
                                    -1,
                                    0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->trail_damage_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "trail_damage_radius", -1, 0);
LABEL_4:
  (*(this->_vptr_CDOTA_Buff + 56))(this);
  CDOTA_Buff::StartIntervalThink(this, 0.5, v5);
}


// CDOTA_Modifier_Nian_Waterball::OnDestroy  (line 5469, @0x0000000002ae8150, libserver.so)
void __fastcall CDOTA_Modifier_Nian_Waterball::OnDestroy(CDOTA_Modifier_Nian_Waterball *const this)
{
  ;
}


// CDOTA_Modifier_Nian_Waterball::AddLocation  (line 5477, @0x0000000002b11c20, libserver.so)  // inlines: AddToTail, CopyConstruct<Vector>, Element, GrowMemory, operator[]
// calls: CUtlMemory<Vector, int>::Grow
void __fastcall CDOTA_Modifier_Nian_Waterball::AddLocation(
        CDOTA_Modifier_Nian_Waterball *const this,
        double a2,
        vec_t a3)
{
  __int64 m_Size; // r12
  int v5; // eax
  Vector *v6; // rax

  m_Size = this->m_vLocations.m_Size;
  v5 = m_Size;
  if ( m_Size == this->m_vLocations.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<Vector,int>::Grow(&this->m_vLocations.m_Memory, 1);
    v5 = this->m_vLocations.m_Size;
  }
  this->m_vLocations.m_Size = v5 + 1;
  v6 = &this->m_vLocations.m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
  {
    *&v6->x = a2;
    v6->z = a3;
  }
}


// CDOTA_Modifier_Nian_Waterball::OnIntervalThink  (line 5489, @0x0000000002aff700, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, Purge, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, FindUnitsInRadius, CDOTA_Buff::GetAbility, ApplyDamage, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Nian_Waterball::OnIntervalThink(CDOTA_Modifier_Nian_Waterball *const this)
{
  __m128i v1; // xmm2
  __int64 v3; // r15
  float v4; // r12d
  CDOTA_BaseNPC *Parent; // rbx
  const Vector *v6; // r14
  CDOTA_BaseNPC *Caster; // rax
  __int64 v8; // rbx
  CHandle<CBaseEntity> *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *v16; // rax
  int j; // [rsp+28h] [rbp-58h]
  float flDamage; // [rsp+2Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hUnits; // [rsp+30h] [rbp-50h] BYREF

  if ( this->m_vLocations.m_Size > 0 )
  {
    v3 = 0;
    j = 0;
    do
    {
      *v1.m128i_i32 = this->trail_damage_radius;
      hUnits.m_Size = 0;
      hUnits.m_Memory.m_pMemory = 0;
      hUnits.m_Memory.m_nAllocationCount = 0;
      hUnits.m_Memory.m_nGrowSize = 0;
      v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
      Parent = CDOTA_Buff::GetParent(this);
      v6 = &this->m_vLocations.m_Memory.m_pMemory[v3];
      Caster = CDOTA_Buff::GetCaster(this);
      FindUnitsInRadius(Caster->m_iTeamNum.m_Value, v6, Parent, v4, &hUnits, 2, 1, 16, 0, 0);
      if ( hUnits.m_Size > 0 )
      {
        v8 = 0;
        do
        {
          while ( 1 )
          {
            v9 = &hUnits.m_Memory.m_pMemory[v8];
            m_Index = v9->m_Index;
            if ( v9->m_Index + 2 > 1 )
            {
              v11 = v9->m_Index;
              v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_Index) >> 9) & 0x3F];
              if ( v12 != 0 )
              {
                v13 = &v12[v11 & 0x1FF];
                if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
                {
                  m_pInstance = v13->m_pInstance;
                  if ( v13->m_pInstance != 0
                    && m_pInstance->m_bIsDOTANPC
                    && !m_pInstance->m_bIsWaitingToSpawn.m_Value
                    && (m_pInstance->m_nUnitState64.m_Value & 0x100) == 0
                    && (*(m_pInstance->_vptr_IHandleEntity + 405))(v13->m_pInstance) == 0 )
                  {
                    break;
                  }
                }
              }
            }
            if ( hUnits.m_Size <= ++v8 )
              goto LABEL_16;
          }
          flDamage = this->trail_damage_per_second;
          Ability = CDOTA_Buff::GetAbility(this);
          v16 = CDOTA_Buff::GetCaster(this);
          ApplyDamage(v16, m_pInstance, Ability, flDamage, 1, 0);
          ++v8;
        }
        while ( hUnits.m_Size > v8 );
      }
LABEL_16:
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hUnits);
      if ( (hUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hUnits.m_Memory);
        if ( (hUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hUnits.m_Memory);
      }
      ++j;
      ++v3;
    }
    while ( this->m_vLocations.m_Size > j );
  }
}


// CDOTA_Ability_Nian_Waterball::~CDOTA_Ability_Nian_Waterball  (line 5515, @0x0000000002b30300, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Nian_Waterball::~CDOTA_Ability_Nian_Waterball(CDOTA_Ability_Nian_Waterball *const this)
{
  this->_vptr_IHandleEntity = &off_4471130;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hEntities);
  if ( (this->m_hEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hEntities.m_Memory),
        (this->m_hEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hEntities.m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_Nian_Waterball::~CDOTA_Ability_Nian_Waterball  (line 5515, @0x0000000002b30a70, libserver.so)  // inlines: Purge, ~CDOTA_Ability_Nian_Waterball, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Nian_Waterball::~CDOTA_Ability_Nian_Waterball(CDOTA_Ability_Nian_Waterball *const this)
{
  this->_vptr_IHandleEntity = &off_4471130;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hEntities);
  if ( (this->m_hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hEntities.m_Memory);
    if ( (this->m_hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hEntities.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Nian_Waterball::Schema_DynamicBinding  (line 5517, @0x0000000002b16880, libserver.so)
// globals: CDOTA_Ability_Nian_Waterball::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nian_Waterball::Schema_DynamicBinding(
        const CDOTA_Ability_Nian_Waterball *const this)
{
  return CDOTA_Ability_Nian_Waterball::s_pSchemaBinding;
}


// CDOTA_Ability_Nian_Waterball::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 5517, @0x0000000002b16890, libserver.so)
// globals: CDOTA_Ability_Nian_Waterball::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nian_Waterball::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Nian_Waterball::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nian_Waterball::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Nian_Waterball::CEntityInstanceEntityClass::DestructInstance  (line 5517, @0x0000000002b168a0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Nian_Waterball>
void __fastcall CDOTA_Ability_Nian_Waterball::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Nian_Waterball::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Nian_Waterball::CEntityInstanceEntityClass::FreeInstance  (line 5517, @0x0000000002b168c0, libserver.so)
void __fastcall CDOTA_Ability_Nian_Waterball::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Nian_Waterball::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Nian_Waterball::CEntityInstanceEntityClass::CanAllocate  (line 5517, @0x0000000002b168e0, libserver.so)
bool __fastcall CDOTA_Ability_Nian_Waterball::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Nian_Waterball::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Nian_Waterball::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 5517, @0x0000000002b168f0, libserver.so)
// globals: CDOTA_Ability_Nian_Waterball::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Nian_Waterball::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Nian_Waterball::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nian_Waterball::s_pSchemaBinding;
}


// CDOTA_Ability_Nian_Waterball::CEntityInstanceEntityClass::AllocateInstance  (line 5517, @0x0000000002b19470, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Nian_Waterball::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Nian_Waterball::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 960);
  memset(v1, 0, 0x3C0u);
  return v1;
}


// CDOTA_Ability_Nian_Waterball::CEntityInstanceEntityClass::ConstructInstance  (line 5517, @0x0000000002b21270, libserver.so)  // inlines: CDOTA_Ability_Nian_Waterball, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_Nian_Waterball>
// calls: CDOTABaseAbility::CDOTABaseAbility, CountdownTimer::CountdownTimer, CDOTABaseAbility::~CDOTABaseAbility, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_Ability_Nian_Waterball::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Nian_Waterball::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4471130;
    CountdownTimer::CountdownTimer(p + 38);
    *(p + 234) = 0;
    *(p + 118) = 0;
    *(p + 238) = 0;
    *(p + 239) = 0;
  }
  return p;
}


// CDOTA_Ability_Nian_Waterball::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 5517, @0x0000000002b224f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Nian_Waterball::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nian_Waterball::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Nian_Waterball::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 5517, @0x0000000002b22510, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Nian_Waterball::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nian_Waterball::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Nian_Waterball::GetEntityClassInternal  (line 5517, @0x0000000002b2c540, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "CDOTA_Ability_Nian_Waterball"
// globals: `guard variable for'CDOTA_Ability_Nian_Waterball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_WaterballClass, CDOTA_Ability_Nian_Waterball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_WaterballClass, __dso_handle, CDOTA_Ability_Nian_Waterball::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Nian_Waterball::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_WaterballClassInfo, CDOTA_Ability_Nian_Waterball::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_WaterballClassInfo
CEntityClass *__cdecl CDOTA_Ability_Nian_Waterball::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Nian_Waterball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_WaterballClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nian_Waterball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_WaterballClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Nian_Waterball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_WaterballClass);
    CDOTA_Ability_Nian_Waterball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_WaterballClass._vptr_CEntityClass = off_44710B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nian_Waterball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_WaterballClass);
    __cxa_atexit(
      CDOTA_Ability_Nian_Waterball::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Nian_Waterball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_WaterballClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Nian_WaterballClass != 0 )
    return &CDOTA_Ability_Nian_Waterball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_WaterballClass;
  if ( `guard variable for'CDOTA_Ability_Nian_Waterball::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_WaterballClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nian_Waterball::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_WaterballClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Nian_Waterball::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_WaterballClassInfo,
      "CDOTA_Ability_Nian_Waterball",
      "nian_waterball",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nian_Waterball::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_WaterballClassInfo);
  }
  CDOTA_Ability_Nian_Waterball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_WaterballClass.m_pClassInfo = &CDOTA_Ability_Nian_Waterball::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_WaterballClassInfo;
  CDOTA_Ability_Nian_Waterball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_WaterballClass.m_pBaseClassInfo = CDOTA_Ability_Nian_Waterball::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_WaterballClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Nian_WaterballClass = &CDOTA_Ability_Nian_Waterball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_WaterballClass;
  CDOTA_Ability_Nian_Waterball::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_WaterballClassInfo.m_pClass = &CDOTA_Ability_Nian_Waterball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_WaterballClass;
  CDOTA_Ability_Nian_Waterball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_WaterballClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Nian_WaterballClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Nian_Waterball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_WaterballClass;
}


// CDOTA_Ability_Nian_Waterball::GetCastAnimation  (line 5524, @0x0000000002b16900, libserver.so)
Activity __fastcall CDOTA_Ability_Nian_Waterball::GetCastAnimation(CDOTA_Ability_Nian_Waterball *const this)
{
  return 1661;
}


// CDOTA_Ability_Nian_Waterball::YouForgotToImplementOrDeclareServerClass  (line 5533, @0x0000000002ae8160, libserver.so)
int __fastcall CDOTA_Ability_Nian_Waterball::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Nian_Waterball *const this)
{
  return 0;
}


// CDOTA_Ability_Nian_Waterball::GetServerClass  (line 5533, @0x0000000002af2af0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Nian_Waterball::GetServerClass(CDOTA_Ability_Nian_Waterball *const this)
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


// CDOTA_Ability_Nian_Waterball::OnAbilityPhaseStart  (line 5540, @0x0000000002ae9b30, libserver.so)
// calls: CDOTABaseAbility::CreateAbilityParticleEffect, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::UnitEmitSound
// strings: "nian_waterball_transform", "Nian.Waterball.PreAttack"
bool __fastcall CDOTA_Ability_Nian_Waterball::OnAbilityPhaseStart(CDOTA_Ability_Nian_Waterball *const this)
{
  int AbilityParticleEffect; // r12d
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v6; // rax
  CDOTA_BaseNPC *v7; // rax

  AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(this, "nian_waterball_transform", 2, 0, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, AbilityParticleEffect, 0, *&AbsOrigin->x, AbsOrigin->z);
  v6 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v6, AbilityParticleEffect);
  v7 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v7, "Nian.Waterball.PreAttack", 0.0, 0, 0);
  return 1;
}


// CDOTA_Ability_Nian_Waterball::OnSpellStart  (line 5554, @0x0000000002b03530, libserver.so)  // inlines: CEntityHandle, CHandle, Color, DOTAGameRules, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetLevelSpecialValueFor<float>, GetSerialNumber, GetTeamNumber, IndexToIdentity, Invalidate, IsValid, LookupEntity, NetworkStateChanged, Set, Start, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, operator=<float>, operator[], sTrackingProjectileCreateInfo
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_ProjectileManager::CreateTrackingProjectile, CountdownTimer::Now, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues (14 total)
// strings: "nian_waterball_damage_tracking", "trail_damage_expire_time", "modifier_nian_waterball", "Nian.Waterball.Cast"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Nian_Waterball::OnSpellStart(CDOTA_Ability_Nian_Waterball *const this)
{
  CountdownTimer *p_m_ctTimer; // r13
  CDOTA_BaseNPC *Caster; // r15
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v6; // rax
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v9; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v11; // cx
  float v12; // xmm0_4
  int m_Size; // eax
  __int64 v14; // r12
  CHandle<CBaseEntity> *v15; // rdx
  uint32 m_Index; // eax
  __int16 v17; // cx
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CEntityInstance *m_pInstance; // r15
  CEntityIdentity *v21; // rdx
  int v22; // eax
  __int16 v23; // cx
  float v24; // xmm0_4
  float v25; // xmm1_4
  CDOTA_BaseNPC *v26; // r13
  CDOTA_BaseNPC *v27; // rax
  CDOTA_BaseNPC *v28; // rax
  float expire_time; // [rsp+18h] [rbp-C8h]
  float v30; // [rsp+1Ch] [rbp-C4h]
  KeyValues kv; // [rsp+20h] [rbp-C0h] BYREF
  sTrackingProjectileCreateInfo info; // [rsp+40h] [rbp-A0h] BYREF
  unsigned __int64 v33; // [rsp+A8h] [rbp-38h]

  p_m_ctTimer = &this->m_ctTimer;
  v33 = __readfsqword(0x28u);
  if ( this->m_ctTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_ctTimer._vptr_CountdownTimer + 2))(&this->m_ctTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL, -1.0);
    this->m_ctTimer.m_timestamp.m_Value = -1.0;
  }
  expire_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "expire_time", -1, 0);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hEntities);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
  v6 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v6->m_iTeamNum.m_Value, AbsOrigin, Caster, -1.0, &this->m_hEntities, 2, 1, 144, 0, 0);
  info.hSource.m_Index = -1;
  info.hTarget.m_Index = -1;
  info.colorGemColor = 0;
  info.bProvidesVision = 0;
  info.pszEffectName = 0;
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
  info.bDrawsOnMinimap = 0;
  info.bDodgeable = 1;
  info.bIsAttack = 0;
  info.bVisibleToEnemies = 1;
  info.pKVExtraData = 0;
  info.bReplaceExisting = 0;
  info.flExpireTime = 0.0;
  info.flMaxImpactTime = 0.0;
  info.bServerOnly = 0;
  info.pAbility = this;
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
  info.iSourceAttachment = 3;
  v12 = 0.0;
  info.bDodgeable = 0;
  if ( g_pGameRules != 0 )
    v12 = *&g_pGameRules[18].m_szQuestName[20];
  m_Size = this->m_hEntities.m_Size;
  v14 = 0;
  info.flExpireTime = v12 + expire_time;
  if ( m_Size > 0 )
  {
    do
    {
      v15 = &this->m_hEntities.m_Memory.m_pMemory[v14];
      m_Index = v15->m_Index;
      if ( v15->m_Index + 2 > 1 )
      {
        v17 = v15->m_Index;
        v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v15->m_Index) >> 9) & 0x3F];
        if ( v18 != 0 )
        {
          v19 = &v18[v17 & 0x1FF];
          if ( v19 != 0 && m_Index == v19->m_EHandle.m_Index )
          {
            m_pInstance = v19->m_pInstance;
            if ( v19->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
            {
              info.iMoveSpeed = ((*(m_pInstance->_vptr_IHandleEntity + 386))(v19->m_pInstance) - 50.0);
              v21 = m_pInstance->m_pEntity;
              info.pszEffectName = "nian_waterball_damage_tracking";
              if ( v21 != 0 )
              {
                v22 = (v21->m_EHandle.m_Index >> 15) - (v21->m_flags & 1);
                v23 = 0x7FFF;
                if ( v21->m_EHandle.m_Index != -1 )
                  v23 = v21->m_EHandle.m_Index & 0x7FFF;
                LOWORD(info.hTarget.m_Index) = v23 | info.hTarget.m_Index & 0x8000;
                info.hTarget.m_Index = (v22 << 15) | info.hTarget.m_Index & 0x7FFF;
              }
              else
              {
                info.hTarget.m_Index = -1;
              }
              CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
              v24 = CountdownTimer::Now(p_m_ctTimer) + 0.5;
              if ( v24 != this->m_ctTimer.m_timestamp.m_Value )
              {
                v30 = v24;
                (*(this->m_ctTimer._vptr_CountdownTimer + 2))(p_m_ctTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                this->m_ctTimer.m_timestamp.m_Value = v30;
              }
              if ( this->m_ctTimer.m_duration.m_Value != 0.5 )
              {
                (*(this->m_ctTimer._vptr_CountdownTimer + 2))(p_m_ctTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                this->m_ctTimer.m_duration.m_Value = 0.5;
              }
            }
          }
        }
      }
      ++v14;
    }
    while ( this->m_hEntities.m_Size > v14 );
  }
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "trail_damage_expire_time", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_nian_waterball");
  KeyValues::SetFloat(&kv, "duration", v25);
  v26 = CDOTABaseAbility::GetCaster(this);
  v27 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v27, v26, this, "modifier_nian_waterball", &kv, 0);
  v28 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v28, "Nian.Waterball.Cast", 0.0, 0, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Nian_Waterball::OnProjectileThink  (line 5600, @0x0000000002b11960, libserver.so)  // inlines: AddLocation, AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<Vector>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, IndexToIdentity, IsElapsed, IsValid, LookupEntity, Purge, RemoveAll, operator CEntityInstance*, operator==, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CountdownTimer::Now, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTA_ProjectileManager::GetTrackingProjectilesOnTarget, CountdownTimer::Reset, CUtlMemory<CDOTA_TrackingProjectileInfo*, int>::Purge, CUtlMemory<Vector, int>::Grow, _Unwind_Resume
// strings: "modifier_nian_waterball"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Nian_Waterball::OnProjectileThink(
        CDOTA_Ability_Nian_Waterball *const this,
        const Vector *const vLocation)
{
  CDOTA_BaseNPC *Caster; // rax
  CUtlMemory<Vector,int> *ModifierByName; // r12
  __int64 v5; // r14
  CHandle<CBaseEntity> *m_pMemory; // rax
  __int64 j; // rbx
  CDOTA_TrackingProjectileInfo *v8; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v10; // rcx
  CEntityIdentity *v11; // rcx
  __int64 m_nAllocationCount; // r13
  vec_t *p_x; // rax
  CountdownTimer *p_m_ctTimer; // [rsp+8h] [rbp-98h]
  int i; // [rsp+30h] [rbp-70h]
  vec_t x; // [rsp+34h] [rbp-6Ch]
  vec_t z; // [rsp+38h] [rbp-68h]
  vec_t y; // [rsp+3Ch] [rbp-64h]
  uint32 v19[4]; // [rsp+40h] [rbp-60h] BYREF
  CUtlVector<CDOTA_TrackingProjectileInfo*,CUtlMemory<CDOTA_TrackingProjectileInfo*,int> > vProjInfos; // [rsp+50h] [rbp-50h] BYREF

  p_m_ctTimer = &this->m_ctTimer;
  if ( CountdownTimer::Now(&this->m_ctTimer) >= this->m_ctTimer.m_timestamp.m_Value )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_nian_waterball", 0);
    if ( ModifierByName != 0 && this->m_hEntities.m_Size > 0 )
    {
      v5 = 0;
      i = 0;
      do
      {
        m_pMemory = this->m_hEntities.m_Memory.m_pMemory;
        vProjInfos.m_Size = 0;
        vProjInfos.m_Memory.m_pMemory = 0;
        vProjInfos.m_Memory.m_nAllocationCount = 0;
        vProjInfos.m_Memory.m_nGrowSize = 0;
        v19[0] = m_pMemory[v5];
        CDOTA_ProjectileManager::GetTrackingProjectilesOnTarget(&g_DOTAProjectileManager, v19, &vProjInfos);
        for ( j = 0; vProjInfos.m_Size > j; ++j )
        {
          while ( 1 )
          {
            v8 = vProjInfos.m_Memory.m_pMemory[j];
            if ( v8 != 0 )
            {
              m_Index = v8->m_hAbility.m_Index;
              if ( m_Index + 2 > 1 )
              {
                v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_hAbility.m_Index) >> 9) & 0x3F];
                if ( v10 != 0 )
                {
                  v11 = &v10[v8->m_hAbility.m_Index & 0x1FF];
                  if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index && this == v11->m_pInstance )
                  {
                    m_nAllocationCount = ModifierByName[188].m_nAllocationCount;
                    x = v8->m_vLocation.x;
                    y = v8->m_vLocation.y;
                    z = v8->m_vLocation.z;
                    if ( m_nAllocationCount == ModifierByName[189].m_nAllocationCount )
                      CUtlMemory<Vector,int>::Grow(ModifierByName + 189, 1);
                    ++ModifierByName[188].m_nAllocationCount;
                    p_x = &ModifierByName[189].m_pMemory[m_nAllocationCount].x;
                    if ( p_x != 0 )
                      break;
                  }
                }
              }
            }
            if ( vProjInfos.m_Size <= ++j )
              goto LABEL_18;
          }
          *p_x = x;
          p_x[1] = y;
          p_x[2] = z;
        }
LABEL_18:
        vProjInfos.m_Size = 0;
        if ( (vProjInfos.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<CDOTA_TrackingProjectileInfo *,int>::Purge(&vProjInfos.m_Memory);
          if ( (vProjInfos.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CDOTA_TrackingProjectileInfo *,int>::Purge(&vProjInfos.m_Memory);
        }
        ++i;
        ++v5;
      }
      while ( this->m_hEntities.m_Size > i );
    }
    CountdownTimer::Reset(p_m_ctTimer);
  }
}


// CDOTA_Ability_Nian_Waterball::OnProjectileHit  (line 5640, @0x0000000002b07600, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, __stack_chk_fail, CDOTABaseAbility::GetCaster, ApplyDamage, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, _Unwind_Resume
// strings: "waterball_hit_damage", "modifier_stunned", "Nian.Waterball.Damage", "Nian.Torrent"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Nian_Waterball::OnProjectileHit(
        CDOTA_Ability_Nian_Waterball *const this,
        _WORD *hTarget,
        const Vector *const vLocation)
{
  int LevelSpecialValue; // r13d
  float v6; // xmm0_4
  CEntityIdentity *v7; // rax
  CEntityIdentity *v8; // rax
  CEntityInstance *m_pInstance; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v12; // rax
  float value; // [rsp+Ch] [rbp-44h]
  KeyValues kvstun; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-28h]

  v15 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "waterball_hit_damage", -1, 0);
  v6 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_duration", -1, 0);
  if ( (*hTarget + 2) > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[*hTarget & 0x1FF];
      if ( v8 != 0 && *hTarget == v8->m_EHandle.m_Index )
      {
        m_pInstance = v8->m_pInstance;
        if ( v8->m_pInstance != 0
          && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0
          && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 1) == 0
          && BYTE5(m_pInstance[45]._vptr_IHandleEntity) == 0 )
        {
          value = v6;
          Caster = CDOTABaseAbility::GetCaster(this);
          ApplyDamage(Caster, m_pInstance, this, LevelSpecialValue, 4, 0);
          KeyValues::KeyValues(&kvstun, "modifier_stunned");
          KeyValues::SetFloat(&kvstun, "duration", value);
          v12 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(m_pInstance, v12, this, "modifier_stunned", &kvstun, 0);
          CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Nian.Waterball.Damage", 0.0, 0, 0);
          CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Nian.Torrent", 0.0, 0, 0);
          KeyValues::~KeyValues(&kvstun);
        }
      }
    }
  }
  return 0;
}


// CDOTA_Modifier_Nian_Damage_Reflection::~CDOTA_Modifier_Nian_Damage_Reflection  (line 5664, @0x0000000002b1a240, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Nian_Damage_Reflection::~CDOTA_Modifier_Nian_Damage_Reflection(
        CDOTA_Modifier_Nian_Damage_Reflection *const this)
{
  this->_vptr_CDOTA_Buff = &off_4471BF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Nian_Damage_Reflection::~CDOTA_Modifier_Nian_Damage_Reflection  (line 5664, @0x0000000002b1a260, libserver.so)  // inlines: ~CDOTA_Modifier_Nian_Damage_Reflection
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Nian_Damage_Reflection::~CDOTA_Modifier_Nian_Damage_Reflection(
        CDOTA_Modifier_Nian_Damage_Reflection *const this)
{
  this->_vptr_CDOTA_Buff = &off_4471BF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nian_Damage_Reflection::GetEffectName  (line 5675, @0x0000000002b16910, libserver.so)
const char *__fastcall CDOTA_Modifier_Nian_Damage_Reflection::GetEffectName(
        CDOTA_Modifier_Nian_Damage_Reflection *const this)
{
  return "blademail";
}


// CDOTA_Modifier_Nian_Damage_Reflection::GetEffectAttachType  (line 5676, @0x0000000002b16920, libserver.so)
int __fastcall CDOTA_Modifier_Nian_Damage_Reflection::GetEffectAttachType(
        CDOTA_Modifier_Nian_Damage_Reflection *const this)
{
  return 1;
}


// CDOTA_Modifier_Nian_Damage_Reflection::GetStatusEffectName  (line 5677, @0x0000000002b16930, libserver.so)
// strings: "status_effect_blademail"
const char *__fastcall CDOTA_Modifier_Nian_Damage_Reflection::GetStatusEffectName(
        CDOTA_Modifier_Nian_Damage_Reflection *const this)
{
  return "status_effect_blademail";
}


// CDOTA_Modifier_Nian_Damage_Reflection::StatusEffectPriority  (line 5678, @0x0000000002b16940, libserver.so)
int __fastcall CDOTA_Modifier_Nian_Damage_Reflection::StatusEffectPriority(
        CDOTA_Modifier_Nian_Damage_Reflection *const this)
{
  return 30;
}


// CDOTA_Modifier_Nian_Damage_Reflection::IsPurgable  (line 5679, @0x0000000002b16950, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Damage_Reflection::IsPurgable(CDOTA_Modifier_Nian_Damage_Reflection *const this)
{
  return 0;
}


// CDOTA_Modifier_Nian_Damage_Reflection::DeclareFunctions  (line 5690, @0x0000000002ae8170, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Nian_Damage_Reflection::OnTakeDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Nian_Damage_Reflection::DeclareFunctions(
        CDOTA_Modifier_Nian_Damage_Reflection *const this)
{
  this->m_Functions[134].__pfn = CDOTA_Modifier_Nian_Damage_Reflection::OnTakeDamage;
  this->m_Functions[134].__delta = 0;
}


// CDOTA_Modifier_Nian_Damage_Reflection::OnCreated  (line 5695, @0x0000000002b04670, libserver.so)  // inlines: DotaRetrieveAbilityValue<float>, GetGameTime, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "reflection_amount"
void __fastcall CDOTA_Modifier_Nian_Damage_Reflection::OnCreated(
        CDOTA_Modifier_Nian_Damage_Reflection *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float LevelSpecialValue; // xmm0_4
  CDOTABaseAbility *v5; // rax
  float v6; // xmm0_4

  Ability = CDOTA_Buff::GetAbility(this);
  LevelSpecialValue = 0.0;
  if ( Ability != 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "reflection_amount", -1, 0);
  this->m_flReflectionAmount = LevelSpecialValue;
  v5 = CDOTA_Buff::GetAbility(this);
  v6 = 0.0;
  if ( v5 != 0 )
    v6 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "delay", -1, 0);
  this->m_flReflectionStartTime = v6 + *&g_pGameRules[18].m_szQuestName[20];
}


// CDOTA_Modifier_Nian_Damage_Reflection::OnTakeDamage  (line 5708, @0x0000000002af2430, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, Unit, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, DOTA_EmitSound, CDOTA_Buff::GetAbility, ApplyDamage
// strings: "DOTA_Item.BladeMail.Damage"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Nian_Damage_Reflection::OnTakeDamage(
        CDOTA_Modifier_Nian_Damage_Reflection *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  uint32 v9; // eax
  CDOTA_BaseNPC *v10; // rdx
  CEntityIdentity *v11; // rcx
  CEntityIdentity *v12; // rcx
  CDOTA_BaseNPC *v13; // r13
  uint32 m_iUnitType; // eax
  unsigned __int8 m_Value; // r14
  CDOTABaseAbility *Ability; // r12
  CDOTA_BaseNPC *Parent; // rax
  float flDamage; // [rsp+Ch] [rbp-24h]
  ModifierVariant_t result; // 0:rax.16

  *&result.m_eType = 1;
  if ( this->m_flReflectionStartTime > *&g_pGameRules[18].m_szQuestName[20] )
  {
    result.m_szVal = 0;
    return result;
  }
  m_pInstance = 0;
  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[params->hunit.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetParent(this) == m_pInstance )
  {
    v9 = params->hattacker.m_Index;
    v10 = 0;
    if ( v9 + 2 <= 1 )
      goto LABEL_18;
    v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v11 == 0 )
      goto LABEL_18;
    v12 = &v11[params->hattacker.m_Index & 0x1FF];
    if ( v12 == 0 )
      goto LABEL_18;
    if ( v9 != v12->m_EHandle.m_Index )
      goto LABEL_18;
    v13 = v12->m_pInstance;
    if ( v12->m_pInstance != 0 && v13->m_bIsDOTANPC )
    {
      m_iUnitType = v13->m_iUnitType;
      if ( (m_iUnitType & 0x10) != 0 )
        goto LABEL_17;
      v10 = v12->m_pInstance;
      if ( (m_iUnitType & 0x193) == 0 || (params->nDamageflags & 0x10) != 0 )
        goto LABEL_18;
      m_Value = v13->m_iTeamNum.m_Value;
      if ( m_Value == CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value )
      {
LABEL_17:
        v10 = v13;
      }
      else
      {
        flDamage = this->m_flReflectionAmount * params->fDamage;
        Ability = CDOTA_Buff::GetAbility(this);
        Parent = CDOTA_Buff::GetParent(this);
        ApplyDamage(Parent, v13, Ability, flDamage, 4, 16);
        v10 = v13;
      }
    }
LABEL_18:
    DOTA_EmitSound(1, "DOTA_Item.BladeMail.Damage", v10);
  }
  return 1uLL;
}


// CDOTA_Item_Nian_Flag_Trap::~CDOTA_Item_Nian_Flag_Trap  (line 5733, @0x0000000002b1dc70, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Nian_Flag_Trap::~CDOTA_Item_Nian_Flag_Trap(CDOTA_Item_Nian_Flag_Trap *const this)
{
  this->_vptr_IHandleEntity = &off_4471F50;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Nian_Flag_Trap::~CDOTA_Item_Nian_Flag_Trap  (line 5733, @0x0000000002b1dc90, libserver.so)  // inlines: ~CDOTA_Item_Nian_Flag_Trap
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Nian_Flag_Trap::~CDOTA_Item_Nian_Flag_Trap(CDOTA_Item_Nian_Flag_Trap *const this)
{
  this->_vptr_IHandleEntity = &off_4471F50;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Nian_Flag_Trap::Schema_DynamicBinding  (line 5735, @0x0000000002b16960, libserver.so)
// globals: CDOTA_Item_Nian_Flag_Trap::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Nian_Flag_Trap::Schema_DynamicBinding(
        const CDOTA_Item_Nian_Flag_Trap *const this)
{
  return CDOTA_Item_Nian_Flag_Trap::s_pSchemaBinding;
}


// CDOTA_Item_Nian_Flag_Trap::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 5735, @0x0000000002b16970, libserver.so)
// globals: CDOTA_Item_Nian_Flag_Trap::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Nian_Flag_Trap::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Nian_Flag_Trap::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Nian_Flag_Trap::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Nian_Flag_Trap::CEntityInstanceEntityClass::DestructInstance  (line 5735, @0x0000000002b16980, libserver.so)  // inlines: Destruct<CDOTA_Item_Nian_Flag_Trap>
void __fastcall CDOTA_Item_Nian_Flag_Trap::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Nian_Flag_Trap::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Nian_Flag_Trap::CEntityInstanceEntityClass::FreeInstance  (line 5735, @0x0000000002b169a0, libserver.so)
void __fastcall CDOTA_Item_Nian_Flag_Trap::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Nian_Flag_Trap::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Nian_Flag_Trap::CEntityInstanceEntityClass::CanAllocate  (line 5735, @0x0000000002b169c0, libserver.so)
bool __fastcall CDOTA_Item_Nian_Flag_Trap::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Nian_Flag_Trap::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Nian_Flag_Trap::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 5735, @0x0000000002b169d0, libserver.so)
// globals: CDOTA_Item_Nian_Flag_Trap::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Nian_Flag_Trap::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Nian_Flag_Trap::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Nian_Flag_Trap::s_pSchemaBinding;
}


// CDOTA_Item_Nian_Flag_Trap::CEntityInstanceEntityClass::AllocateInstance  (line 5735, @0x0000000002b194b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Nian_Flag_Trap::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Nian_Flag_Trap::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Nian_Flag_Trap::CEntityInstanceEntityClass::ConstructInstance  (line 5735, @0x0000000002b1d740, libserver.so)  // inlines: CDOTA_Item_Nian_Flag_Trap, Construct<CDOTA_Item_Nian_Flag_Trap>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Nian_Flag_Trap::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Nian_Flag_Trap::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4471F50;
  }
  return p;
}


// CDOTA_Item_Nian_Flag_Trap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 5735, @0x0000000002b21870, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Nian_Flag_Trap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Nian_Flag_Trap::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Nian_Flag_Trap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 5735, @0x0000000002b21890, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Nian_Flag_Trap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Nian_Flag_Trap::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Nian_Flag_Trap::GetEntityClassInternal  (line 5735, @0x0000000002b2c690, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "item_nian_flag_trap", "CDOTA_Item_Nian_Flag_Trap"
// globals: `guard variable for'CDOTA_Item_Nian_Flag_Trap::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Nian_Flag_TrapClass, CDOTA_Item_Nian_Flag_Trap::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Nian_Flag_TrapClass, __dso_handle, CDOTA_Item_Nian_Flag_Trap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Nian_Flag_Trap::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Nian_Flag_TrapClassInfo, CDOTA_Item_Nian_Flag_Trap::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Nian_Flag_TrapClassInfo
CEntityClass *__cdecl CDOTA_Item_Nian_Flag_Trap::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Nian_Flag_Trap::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Nian_Flag_TrapClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Nian_Flag_Trap::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Nian_Flag_TrapClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Nian_Flag_Trap::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Nian_Flag_TrapClass);
    CDOTA_Item_Nian_Flag_Trap::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Nian_Flag_TrapClass._vptr_CEntityClass = off_4471ED0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Nian_Flag_Trap::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Nian_Flag_TrapClass);
    __cxa_atexit(
      CDOTA_Item_Nian_Flag_Trap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Nian_Flag_Trap::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Nian_Flag_TrapClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Nian_Flag_TrapClass != 0 )
    return &CDOTA_Item_Nian_Flag_Trap::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Nian_Flag_TrapClass;
  if ( `guard variable for'CDOTA_Item_Nian_Flag_Trap::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Nian_Flag_TrapClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Nian_Flag_Trap::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Nian_Flag_TrapClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Nian_Flag_Trap::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Nian_Flag_TrapClassInfo,
      "CDOTA_Item_Nian_Flag_Trap",
      "item_nian_flag_trap",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Nian_Flag_Trap::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Nian_Flag_TrapClassInfo);
  }
  CDOTA_Item_Nian_Flag_Trap::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Nian_Flag_TrapClass.m_pClassInfo = &CDOTA_Item_Nian_Flag_Trap::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Nian_Flag_TrapClassInfo;
  CDOTA_Item_Nian_Flag_Trap::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Nian_Flag_TrapClass.m_pBaseClassInfo = CDOTA_Item_Nian_Flag_Trap::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Nian_Flag_TrapClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Nian_Flag_TrapClass = &CDOTA_Item_Nian_Flag_Trap::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Nian_Flag_TrapClass;
  CDOTA_Item_Nian_Flag_Trap::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Nian_Flag_TrapClassInfo.m_pClass = &CDOTA_Item_Nian_Flag_Trap::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Nian_Flag_TrapClass;
  CDOTA_Item_Nian_Flag_Trap::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Nian_Flag_TrapClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Nian_Flag_TrapClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Nian_Flag_Trap::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Nian_Flag_TrapClass;
}


// CDOTA_Item_Nian_Flag_Trap::YouForgotToImplementOrDeclareServerClass  (line 5752, @0x0000000002ae8190, libserver.so)
int __fastcall CDOTA_Item_Nian_Flag_Trap::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Item_Nian_Flag_Trap *const this)
{
  return 0;
}


// CDOTA_Item_Nian_Flag_Trap::GetServerClass  (line 5752, @0x0000000002af29f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Nian_Flag_Trap::GetServerClass(CDOTA_Item_Nian_Flag_Trap *const this)
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


// CDOTA_Item_Nian_Flag_Trap::OnSpellStart  (line 5761, @0x0000000002b077b0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorPosition, Thinker_Create, CDOTA_Item::SpendCharge, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_nian_apocalypse", "modifier_nian_flag_trap_thinker"
void __fastcall CDOTA_Item_Nian_Flag_Trap::OnSpellStart(CDOTA_Item_Nian_Flag_Trap *const this)
{
  int LevelSpecialValue; // r13d
  float v3; // xmm1_4
  int m_Value; // r13d
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v7; // [rsp+48h] [rbp-28h]
  Vector CursorPosition; // 0:kr00_12.12

  v7 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_duration", -1, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_nian_apocalypse");
  KeyValues::SetFloat(&kv, "duration", v3);
  KeyValues::SetInt(&kv, "radius", LevelSpecialValue);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(Caster, this, "modifier_nian_flag_trap_thinker", &kv, CursorPosition, m_Value, 0, 1, 0);
  CDOTA_Item::SpendCharge(this);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Nian_Flag_Trap_Thinker::~CDOTA_Modifier_Nian_Flag_Trap_Thinker  (line 5784, @0x0000000002b1a1f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Nian_Flag_Trap_Thinker::~CDOTA_Modifier_Nian_Flag_Trap_Thinker(
        CDOTA_Modifier_Nian_Flag_Trap_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4472B10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Nian_Flag_Trap_Thinker::~CDOTA_Modifier_Nian_Flag_Trap_Thinker  (line 5784, @0x0000000002b1a210, libserver.so)  // inlines: ~CDOTA_Modifier_Nian_Flag_Trap_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Nian_Flag_Trap_Thinker::~CDOTA_Modifier_Nian_Flag_Trap_Thinker(
        CDOTA_Modifier_Nian_Flag_Trap_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4472B10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nian_Flag_Trap_Thinker::IsPurgable  (line 5793, @0x0000000002b169e0, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Flag_Trap_Thinker::IsPurgable(CDOTA_Modifier_Nian_Flag_Trap_Thinker *const this)
{
  return 0;
}


// CDOTA_Modifier_Nian_Flag_Trap_Thinker::OnCreated  (line 5805, @0x0000000002ae9d20, libserver.so)
// calls: KeyValues::GetInt, CDOTA_Buff::CreateBuffParticleEffect, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CBaseEntity::GetAbsOrigin, CDOTA_Buff::AddParticle, CDOTA_Buff::StartIntervalThink
// strings: "nian_gladiators_ring", "attach_hitloc"
void __fastcall CDOTA_Modifier_Nian_Flag_Trap_Thinker::OnCreated(
        CDOTA_Modifier_Nian_Flag_Trap_Thinker *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax
  int m_nFXIndex; // r12d
  const CBaseAnimating *v5; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v7; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v9; // rax
  const CBaseAnimating *v10; // r14
  CDOTA_ParticleManager *v11; // rax
  float v12; // xmm1_4

  this->radius = KeyValues::GetInt(pKV, "radius", 0);
  this->m_nFXIndex = CDOTA_Buff::CreateBuffParticleEffect(this, "nian_gladiators_ring", 2, 0, 0);
  Parent = CDOTA_Buff::GetParent(this);
  m_nFXIndex = this->m_nFXIndex;
  v5 = Parent;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, m_nFXIndex, 0, v5, 1, 0, vec3_invalid, 1);
  v7 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
  v9 = CDOTA_Buff::GetParent(this);
  LODWORD(v5) = this->m_nFXIndex;
  v10 = v9;
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v11, v5, 1, v10, 5, "attach_hitloc", *AbsOrigin, 1);
  CDOTA_Buff::AddParticle(this, this->m_nFXIndex, 0, 0, -1, 0, 0);
  CDOTA_Buff::StartIntervalThink(this, 0.2, v12);
}


// CDOTA_Modifier_Nian_Flag_Trap_Thinker::OnIntervalThink  (line 5822, @0x0000000002afe8a0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CDOTA_Buff::StartIntervalThink, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// strings: "modifier_nian_flag_trapped"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Nian_Flag_Trap_Thinker::OnIntervalThink(
        CDOTA_Modifier_Nian_Flag_Trap_Thinker *const this)
{
  __m128i v1; // xmm1
  float v3; // r13d
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v7; // rax
  float v8; // xmm1_4
  __int64 v9; // r12
  int v10; // ebx
  CHandle<CBaseEntity> *v11; // rdx
  uint32 m_Index; // eax
  __int16 v13; // cx
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  float v17; // xmm1_4
  CDOTABaseAbility *Ability; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+20h] [rbp-70h] BYREF
  KeyValues kvstun; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v21; // [rsp+58h] [rbp-38h]

  entities.m_Size = 0;
  *v1.m128i_i32 = this->radius;
  entities.m_Memory.m_pMemory = 0;
  v21 = __readfsqword(0x28u);
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  Parent = CDOTA_Buff::GetParent(this);
  v5 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = CDOTA_Buff::GetParent(this);
  FindUnitsInRadius(v7->m_iTeamNum.m_Value, AbsOrigin, Parent, v3, &entities, 2, 3, 0, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v9 = 0;
    v10 = 0;
    do
    {
      while ( 1 )
      {
        v11 = &entities.m_Memory.m_pMemory[v9];
        m_Index = entities.m_Memory.m_pMemory[v9].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v13 = v11->m_Index;
          v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v11->m_Index) >> 9) & 0x3F];
          if ( v14 != 0 )
          {
            v15 = &v14[v13 & 0x1FF];
            if ( v15 != 0 && m_Index == v15->m_EHandle.m_Index )
            {
              m_pInstance = v15->m_pInstance;
              if ( v15->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                break;
            }
          }
        }
        ++v10;
        ++v9;
        if ( entities.m_Size <= v10 )
          goto LABEL_11;
      }
      KeyValues::KeyValues(&kvstun, "modifier_nian_flag_trapped");
      KeyValues::SetFloat(&kvstun, "duration", v17);
      Ability = CDOTA_Buff::GetAbility(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, m_pInstance, Ability, "modifier_nian_flag_trapped", &kvstun, 0);
      ++v10;
      ++v9;
      KeyValues::~KeyValues(&kvstun);
    }
    while ( entities.m_Size > v10 );
  }
LABEL_11:
  CDOTA_Buff::StartIntervalThink(this, 0.2, v8);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Modifier_Nian_Flag_Trap_Thinker::OnDestroy  (line 5845, @0x0000000002ae9a40, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_Buff::GetParent, UTIL_Remove
void __fastcall CDOTA_Modifier_Nian_Flag_Trap_Thinker::OnDestroy(CDOTA_Modifier_Nian_Flag_Trap_Thinker *const this)
{
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Parent; // rax

  m_nFXIndex = this->m_nFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 0);
  Parent = CDOTA_Buff::GetParent(this);
  UTIL_Remove(Parent);
}


// CDOTA_Modifier_Nian_Flag_Trapped::~CDOTA_Modifier_Nian_Flag_Trapped  (line 5858, @0x0000000002b1a1a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Nian_Flag_Trapped::~CDOTA_Modifier_Nian_Flag_Trapped(
        CDOTA_Modifier_Nian_Flag_Trapped *const this)
{
  this->_vptr_CDOTA_Buff = &off_4472E30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Nian_Flag_Trapped::~CDOTA_Modifier_Nian_Flag_Trapped  (line 5858, @0x0000000002b1a1c0, libserver.so)  // inlines: ~CDOTA_Modifier_Nian_Flag_Trapped
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Nian_Flag_Trapped::~CDOTA_Modifier_Nian_Flag_Trapped(
        CDOTA_Modifier_Nian_Flag_Trapped *const this)
{
  this->_vptr_CDOTA_Buff = &off_4472E30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nian_Flag_Trapped::IsDebuff  (line 5863, @0x0000000002b169f0, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Flag_Trapped::IsDebuff(CDOTA_Modifier_Nian_Flag_Trapped *const this)
{
  return 0;
}


// CDOTA_Modifier_Nian_Flag_Trapped::GetAttributes  (line 5866, @0x0000000002b16a00, libserver.so)
int __fastcall CDOTA_Modifier_Nian_Flag_Trapped::GetAttributes(CDOTA_Modifier_Nian_Flag_Trapped *const this)
{
  return 1;
}


// CDOTA_Modifier_Nian_Flag_Trapped::StatusEffectPriority  (line 5868, @0x0000000002b16a10, libserver.so)
int __fastcall CDOTA_Modifier_Nian_Flag_Trapped::StatusEffectPriority(CDOTA_Modifier_Nian_Flag_Trapped *const this)
{
  return 10030;
}


// CDOTA_Modifier_Nian_Flag_Trapped::IsPurgable  (line 5872, @0x0000000002b16a20, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Flag_Trapped::IsPurgable(CDOTA_Modifier_Nian_Flag_Trapped *const this)
{
  return 0;
}


// CDOTA_Modifier_Nian_Flag_Trapped::OnCreated  (line 5883, @0x0000000002b0ba80, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_BaseNPC::StartGesture, CDOTA_BaseNPC::UnitEmitSound
// strings: "bonus_spell_damage_pct", "modifier_animated_right_claw_swipe", "modifier_animated_left_claw_swipe", "modifier_animated_tail_spin", "Nian.Scared"
void __fastcall CDOTA_Modifier_Nian_Flag_Trapped::OnCreated(
        CDOTA_Modifier_Nian_Flag_Trapped *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_spell_damage_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                     Ability,
                                     "bonus_spell_damage_pct",
                                     -1,
                                     0);
  else
    this->bonus_spell_damage_pct = 0;
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveModifierByName(Parent, "modifier_animated_right_claw_swipe");
  v5 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveModifierByName(v5, "modifier_animated_left_claw_swipe");
  v6 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveModifierByName(v6, "modifier_animated_tail_spin");
  v7 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::StartGesture(v7, 1509, 0.1, 0.0, 0, 0, 1.0);
  v8 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(v8, "Nian.Scared", 0.0, 0, 0);
}


// CDOTA_Modifier_Nian_Flag_Trapped::OnDestroy  (line 5899, @0x0000000002aeaa40, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveGesture
void __fastcall CDOTA_Modifier_Nian_Flag_Trapped::OnDestroy(CDOTA_Modifier_Nian_Flag_Trapped *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveGesture(Parent, 1509);
}


// CDOTA_Modifier_Nian_Flag_Trapped::CheckState  (line 5908, @0x0000000002ae81a0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Nian_Flag_Trapped::CheckState(
        CDOTA_Modifier_Nian_Flag_Trapped *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x23uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFFFFFDCLL;
}


// CDOTA_Ability_Firework_Mine::~CDOTA_Ability_Firework_Mine  (line 5924, @0x0000000002b1dcc0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Ability_Firework_Mine::~CDOTA_Ability_Firework_Mine(CDOTA_Ability_Firework_Mine *const this)
{
  this->_vptr_IHandleEntity = &off_4473190;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Ability_Firework_Mine::~CDOTA_Ability_Firework_Mine  (line 5924, @0x0000000002b1dce0, libserver.so)  // inlines: ~CDOTA_Ability_Firework_Mine
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Firework_Mine::~CDOTA_Ability_Firework_Mine(CDOTA_Ability_Firework_Mine *const this)
{
  this->_vptr_IHandleEntity = &off_4473190;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Firework_Mine::Schema_DynamicBinding  (line 5926, @0x0000000002b16a30, libserver.so)
// globals: CDOTA_Ability_Firework_Mine::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Firework_Mine::Schema_DynamicBinding(
        const CDOTA_Ability_Firework_Mine *const this)
{
  return CDOTA_Ability_Firework_Mine::s_pSchemaBinding;
}


// CDOTA_Ability_Firework_Mine::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 5926, @0x0000000002b16a40, libserver.so)
// globals: CDOTA_Ability_Firework_Mine::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Firework_Mine::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Firework_Mine::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Firework_Mine::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Firework_Mine::CEntityInstanceEntityClass::DestructInstance  (line 5926, @0x0000000002b16a50, libserver.so)  // inlines: Destruct<CDOTA_Ability_Firework_Mine>
void __fastcall CDOTA_Ability_Firework_Mine::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Firework_Mine::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Firework_Mine::CEntityInstanceEntityClass::FreeInstance  (line 5926, @0x0000000002b16a70, libserver.so)
void __fastcall CDOTA_Ability_Firework_Mine::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Firework_Mine::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Firework_Mine::CEntityInstanceEntityClass::CanAllocate  (line 5926, @0x0000000002b16a90, libserver.so)
bool __fastcall CDOTA_Ability_Firework_Mine::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Firework_Mine::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Firework_Mine::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 5926, @0x0000000002b16aa0, libserver.so)
// globals: CDOTA_Ability_Firework_Mine::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Firework_Mine::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Firework_Mine::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Firework_Mine::s_pSchemaBinding;
}


// CDOTA_Ability_Firework_Mine::CEntityInstanceEntityClass::AllocateInstance  (line 5926, @0x0000000002b194f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Firework_Mine::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Firework_Mine::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Ability_Firework_Mine::CEntityInstanceEntityClass::ConstructInstance  (line 5926, @0x0000000002b1d770, libserver.so)  // inlines: CDOTA_Ability_Firework_Mine, Construct<CDOTA_Ability_Firework_Mine>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Ability_Firework_Mine::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Firework_Mine::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4473190;
  }
  return p;
}


// CDOTA_Ability_Firework_Mine::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 5926, @0x0000000002b218c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Firework_Mine::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Firework_Mine::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Firework_Mine::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 5926, @0x0000000002b218e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Firework_Mine::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Firework_Mine::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Firework_Mine::GetEntityClassInternal  (line 5926, @0x0000000002b2c7e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "item_firework_mine", "CDOTA_Ability_Firework_Mine"
// globals: `guard variable for'CDOTA_Ability_Firework_Mine::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Firework_MineClass, CDOTA_Ability_Firework_Mine::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Firework_MineClass, __dso_handle, CDOTA_Ability_Firework_Mine::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Firework_Mine::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Firework_MineClassInfo, CDOTA_Ability_Firework_Mine::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Firework_MineClassInfo
CEntityClass *__cdecl CDOTA_Ability_Firework_Mine::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Firework_Mine::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Firework_MineClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Firework_Mine::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Firework_MineClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Firework_Mine::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Firework_MineClass);
    CDOTA_Ability_Firework_Mine::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Firework_MineClass._vptr_CEntityClass = off_4473110;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Firework_Mine::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Firework_MineClass);
    __cxa_atexit(
      CDOTA_Ability_Firework_Mine::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Firework_Mine::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Firework_MineClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Firework_MineClass != 0 )
    return &CDOTA_Ability_Firework_Mine::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Firework_MineClass;
  if ( `guard variable for'CDOTA_Ability_Firework_Mine::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Firework_MineClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Firework_Mine::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Firework_MineClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Firework_Mine::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Firework_MineClassInfo,
      "CDOTA_Ability_Firework_Mine",
      "item_firework_mine",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Firework_Mine::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Firework_MineClassInfo);
  }
  CDOTA_Ability_Firework_Mine::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Firework_MineClass.m_pClassInfo = &CDOTA_Ability_Firework_Mine::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Firework_MineClassInfo;
  CDOTA_Ability_Firework_Mine::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Firework_MineClass.m_pBaseClassInfo = CDOTA_Ability_Firework_Mine::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Firework_MineClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Firework_MineClass = &CDOTA_Ability_Firework_Mine::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Firework_MineClass;
  CDOTA_Ability_Firework_Mine::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Firework_MineClassInfo.m_pClass = &CDOTA_Ability_Firework_Mine::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Firework_MineClass;
  CDOTA_Ability_Firework_Mine::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Firework_MineClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Ability_Firework_MineClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Firework_Mine::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Firework_MineClass;
}


// CDOTA_Ability_Firework_Mine::OnSpellStart  (line 5934, @0x0000000002b03a40, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetTeamNumber
// calls: CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, DOTA_CreateUnitByName, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, FindClearSpaceForUnit, KeyValues::~KeyValues, CDOTA_Item::SpendCharge, __stack_chk_fail, _Unwind_Resume
// strings: "activation_time", "modifier_firework_mine"
void __fastcall CDOTA_Ability_Firework_Mine::OnSpellStart(CDOTA_Ability_Firework_Mine *const this)
{
  int m_Value; // r14d
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // r12
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *UnitByName; // r12
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-28h]
  Vector v12; // 0:xmm0_8.8,8:xmm1_4.4

  v11 = __readfsqword(0x28u);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  UnitByName = DOTA_CreateUnitByName("firework_mine", AbsOrigin, 1, v4, Caster, m_Value);
  if ( UnitByName != 0 )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "activation_time", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_firework_mine");
    v8 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(UnitByName, v8, this, "modifier_firework_mine", &kv, 0);
    v9 = CDOTABaseAbility::GetCaster(this);
    v12 = *CBaseEntity::GetAbsOrigin(v9);
    FindClearSpaceForUnit(UnitByName, v12, 1);
    KeyValues::~KeyValues(&kv);
  }
  CDOTA_Item::SpendCharge(this);
}


// CDOTA_Modifier_Firework_Mine::~CDOTA_Modifier_Firework_Mine  (line 5959, @0x0000000002b1a150, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Firework_Mine::~CDOTA_Modifier_Firework_Mine(CDOTA_Modifier_Firework_Mine *const this)
{
  this->_vptr_CDOTA_Buff = &off_4473D50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Firework_Mine::~CDOTA_Modifier_Firework_Mine  (line 5959, @0x0000000002b1a170, libserver.so)  // inlines: ~CDOTA_Modifier_Firework_Mine
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Firework_Mine::~CDOTA_Modifier_Firework_Mine(CDOTA_Modifier_Firework_Mine *const this)
{
  this->_vptr_CDOTA_Buff = &off_4473D50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Firework_Mine::IsHidden  (line 5963, @0x0000000002b16ab0, libserver.so)
bool __fastcall CDOTA_Modifier_Firework_Mine::IsHidden(CDOTA_Modifier_Firework_Mine *const this)
{
  return 1;
}


// CDOTA_Modifier_Firework_Mine::IsPurgable  (line 5964, @0x0000000002b16ac0, libserver.so)
bool __fastcall CDOTA_Modifier_Firework_Mine::IsPurgable(CDOTA_Modifier_Firework_Mine *const this)
{
  return 0;
}


// CDOTA_Modifier_Firework_Mine::CheckState  (line 5985, @0x0000000002ae81c0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Firework_Mine::CheckState(
        CDOTA_Modifier_Firework_Mine *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x2000000uLL;
  buffState->m_nDisabledStateMask &= ~0x2000000uLL;
}


// CDOTA_Modifier_Firework_Mine::OnCreated  (line 5994, @0x0000000002b0c010, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, CDOTA_BaseNPC::UnitEmitSound, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle
// strings: "FireworkBomb.Fuse", "nian_ward_ambient", "attach_attack1"
void __fastcall CDOTA_Modifier_Firework_Mine::OnCreated(CDOTA_Modifier_Firework_Mine *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  float v6; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v8; // rax
  int BuffParticleEffect; // r12d
  CDOTA_BaseNPC *v10; // r13
  CDOTA_ParticleManager *ParticleManager; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->damage_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage_radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_7:
    this->trigger_radius = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
LABEL_8:
    this->damage = 0;
    goto LABEL_5;
  }
  this->damage_radius = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_7;
LABEL_3:
  this->trigger_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "trigger_radius", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "damage", -1, 0);
LABEL_5:
  CDOTA_Buff::StartIntervalThink(this, 0.25, v6);
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(Parent, "FireworkBomb.Fuse", 0.0, 0, 0);
  v8 = CDOTA_Buff::GetParent(this);
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(this, "nian_ward_ambient", 2, v8, 0);
  v10 = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(
    ParticleManager,
    BuffParticleEffect,
    0,
    v10,
    5,
    "attach_attack1",
    vec3_invalid,
    1);
  CDOTA_Buff::AddParticle(this, BuffParticleEffect, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_Firework_Mine::OnIntervalThink  (line 6014, @0x0000000002aff940, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Purge, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Firework_Mine::OnIntervalThink(CDOTA_Modifier_Firework_Mine *const this)
{
  float trigger_radius; // xmm1_4
  CDOTA_BaseNPC *Parent; // r14
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v6; // rax
  CHandle<CBaseEntity> *m_pMemory; // rax
  CHandle<CBaseEntity> *v8; // r9
  CEntityIdentity *v9; // rcx
  __int64 v10; // rsi
  CEntityIdentity *v11; // rcx
  CEntityInstance *m_pInstance; // rdx
  float flRadius; // [rsp+1Ch] [rbp-44h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hTargets; // [rsp+20h] [rbp-40h] BYREF

  hTargets.m_Size = 0;
  trigger_radius = this->trigger_radius;
  hTargets.m_Memory.m_pMemory = 0;
  hTargets.m_Memory.m_nAllocationCount = 0;
  hTargets.m_Memory.m_nGrowSize = 0;
  flRadius = trigger_radius;
  Parent = CDOTA_Buff::GetParent(this);
  v4 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
  v6 = CDOTA_Buff::GetParent(this);
  FindUnitsInRadius(v6->m_iTeamNum.m_Value, AbsOrigin, Parent, flRadius, &hTargets, 2, 19, 16, 0, 0);
  if ( hTargets.m_Size > 0 )
  {
    m_pMemory = hTargets.m_Memory.m_pMemory;
    v8 = &hTargets.m_Memory.m_pMemory[hTargets.m_Size - 1 + 1];
    while ( 1 )
    {
      if ( m_pMemory->m_Index + 2 > 1 )
      {
        v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
        if ( v9 != 0 )
        {
          v10 = m_pMemory->m_Index & 0x1FF;
          v11 = &v9[v10];
          if ( v11 != 0 && m_pMemory->m_Index == v11->m_EHandle.m_Index )
          {
            m_pInstance = v11->m_pInstance;
            if ( v11->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
              break;
          }
        }
      }
      if ( ++m_pMemory == v8 )
        goto LABEL_8;
    }
    (*(this->_vptr_CDOTA_Buff + 60))(this, v10 * 120, m_pInstance, v11, CEntityHandle::gm_pEntityList, v8);
  }
LABEL_8:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hTargets);
  if ( (hTargets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hTargets.m_Memory);
    if ( (hTargets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hTargets.m_Memory);
  }
}


// CDOTA_Modifier_Firework_Mine::OnDestroy  (line 6035, @0x0000000002afeac0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, ClassMatches, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, ApplyDamage, CEntityIdentity::ClassMatches, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CDOTA_Buff::CreateBuffParticleEffect (20 total)
// strings: "npc_dota_nian", "modifier_nian_knockdown", "particles/units/heroes/hero_phoenix/phoenix_supernova_reborn.vpcf", "FireworkBomb.Explode"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Firework_Mine::OnDestroy(CDOTA_Modifier_Firework_Mine *const this)
{
  __m128i v1; // xmm3
  float v3; // r14d
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v7; // rax
  __int64 v8; // rbx
  CHandle<CBaseEntity> *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // rax
  float v17; // xmm1_4
  CDOTABaseAbility *v18; // rax
  int BuffParticleEffect; // ebx
  CDOTA_BaseNPC *v20; // rax
  const Vector *v21; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v23; // rax
  CDOTA_ParticleManager *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  float flDamage; // [rsp+2Ch] [rbp-84h]
  double v28; // [rsp+30h] [rbp-80h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hTargets; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v31; // [rsp+78h] [rbp-38h]

  hTargets.m_Size = 0;
  *v1.m128i_i32 = this->damage_radius;
  hTargets.m_Memory.m_pMemory = 0;
  v31 = __readfsqword(0x28u);
  hTargets.m_Memory.m_nAllocationCount = 0;
  hTargets.m_Memory.m_nGrowSize = 0;
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  Parent = CDOTA_Buff::GetParent(this);
  v5 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = CDOTA_Buff::GetParent(this);
  FindUnitsInRadius(v7->m_iTeamNum.m_Value, AbsOrigin, Parent, v3, &hTargets, 2, 19, 16, 0, 0);
  if ( hTargets.m_Size > 0 )
  {
    v8 = 0;
    do
    {
      while ( 1 )
      {
        v9 = &hTargets.m_Memory.m_pMemory[v8];
        m_Index = v9->m_Index;
        if ( v9->m_Index + 2 > 1 )
        {
          v11 = v9->m_Index;
          v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_Index) >> 9) & 0x3F];
          if ( v12 != 0 )
          {
            v13 = &v12[v11 & 0x1FF];
            if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
            {
              m_pInstance = v13->m_pInstance;
              if ( v13->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
              {
                flDamage = this->damage;
                Ability = CDOTA_Buff::GetAbility(this);
                Caster = CDOTA_Buff::GetCaster(this);
                ApplyDamage(Caster, m_pInstance, Ability, flDamage, 1, 0);
                if ( CEntityIdentity::ClassMatches(m_pInstance->m_pEntity, "npc_dota_nian") )
                  break;
              }
            }
          }
        }
        if ( ++v8 >= hTargets.m_Size )
          goto LABEL_12;
      }
      KeyValues::KeyValues(&kv, "modifier_nian_knockdown");
      KeyValues::SetFloat(&kv, "duration", v17);
      v18 = CDOTA_Buff::GetAbility(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, m_pInstance, v18, "modifier_nian_knockdown", &kv, 0);
      KeyValues::~KeyValues(&kv);
      ++v8;
    }
    while ( v8 < hTargets.m_Size );
  }
LABEL_12:
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/units/heroes/hero_phoenix/phoenix_supernova_reborn.vpcf",
                         8,
                         0,
                         0);
  v20 = CDOTA_Buff::GetParent(this);
  v21 = CBaseEntity::GetAbsOrigin(v20);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, BuffParticleEffect, 0, *&v21->x, v21->z);
  HIDWORD(v28) = 1065353216;
  *&v28 = this->damage_radius;
  v23 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v23, BuffParticleEffect, 1, v28, 1.0);
  v24 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v24, BuffParticleEffect);
  v25 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(v25, "FireworkBomb.Explode", 0.0, 0, 0);
  v26 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::ForceKill(v26, 0);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hTargets);
}


// CDOTA_Item_ForceBoots::~CDOTA_Item_ForceBoots  (line 6078, @0x0000000002b1dd10, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_ForceBoots::~CDOTA_Item_ForceBoots(CDOTA_Item_ForceBoots *const this)
{
  this->_vptr_IHandleEntity = &off_44740B0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_ForceBoots::~CDOTA_Item_ForceBoots  (line 6078, @0x0000000002b1dd30, libserver.so)  // inlines: ~CDOTA_Item_ForceBoots
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_ForceBoots::~CDOTA_Item_ForceBoots(CDOTA_Item_ForceBoots *const this)
{
  this->_vptr_IHandleEntity = &off_44740B0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_ForceBoots::Schema_DynamicBinding  (line 6080, @0x0000000002b16ad0, libserver.so)
// globals: CDOTA_Item_ForceBoots::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_ForceBoots::Schema_DynamicBinding(
        const CDOTA_Item_ForceBoots *const this)
{
  return CDOTA_Item_ForceBoots::s_pSchemaBinding;
}


// CDOTA_Item_ForceBoots::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 6080, @0x0000000002b16ae0, libserver.so)
// globals: CDOTA_Item_ForceBoots::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_ForceBoots::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_ForceBoots::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_ForceBoots::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_ForceBoots::CEntityInstanceEntityClass::DestructInstance  (line 6080, @0x0000000002b16af0, libserver.so)  // inlines: Destruct<CDOTA_Item_ForceBoots>
void __fastcall CDOTA_Item_ForceBoots::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_ForceBoots::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_ForceBoots::CEntityInstanceEntityClass::FreeInstance  (line 6080, @0x0000000002b16b10, libserver.so)
void __fastcall CDOTA_Item_ForceBoots::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_ForceBoots::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_ForceBoots::CEntityInstanceEntityClass::CanAllocate  (line 6080, @0x0000000002b16b30, libserver.so)
bool __fastcall CDOTA_Item_ForceBoots::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_ForceBoots::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_ForceBoots::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 6080, @0x0000000002b16b40, libserver.so)
// globals: CDOTA_Item_ForceBoots::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_ForceBoots::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_ForceBoots::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_ForceBoots::s_pSchemaBinding;
}


// CDOTA_Item_ForceBoots::CEntityInstanceEntityClass::AllocateInstance  (line 6080, @0x0000000002b19530, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_ForceBoots::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_ForceBoots::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_ForceBoots::CEntityInstanceEntityClass::ConstructInstance  (line 6080, @0x0000000002b1d7a0, libserver.so)  // inlines: CDOTA_Item_ForceBoots, Construct<CDOTA_Item_ForceBoots>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_ForceBoots::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_ForceBoots::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_44740B0;
  }
  return p;
}


// CDOTA_Item_ForceBoots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 6080, @0x0000000002b21910, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_ForceBoots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_ForceBoots::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_ForceBoots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 6080, @0x0000000002b21930, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_ForceBoots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_ForceBoots::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_ForceBoots::GetEntityClassInternal  (line 6080, @0x0000000002b2c930, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "CDOTA_Item_ForceBoots"
// globals: `guard variable for'CDOTA_Item_ForceBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ForceBootsClass, CDOTA_Item_ForceBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ForceBootsClass, __dso_handle, CDOTA_Item_ForceBoots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_ForceBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ForceBootsClassInfo, CDOTA_Item_ForceBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ForceBootsClassInfo
CEntityClass *__cdecl CDOTA_Item_ForceBoots::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_ForceBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ForceBootsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_ForceBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ForceBootsClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_ForceBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ForceBootsClass);
    CDOTA_Item_ForceBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ForceBootsClass._vptr_CEntityClass = off_4474030;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_ForceBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ForceBootsClass);
    __cxa_atexit(
      CDOTA_Item_ForceBoots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_ForceBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ForceBootsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_ForceBootsClass != 0 )
    return &CDOTA_Item_ForceBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ForceBootsClass;
  if ( `guard variable for'CDOTA_Item_ForceBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ForceBootsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_ForceBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ForceBootsClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_ForceBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ForceBootsClassInfo,
      "CDOTA_Item_ForceBoots",
      "item_force_boots",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_ForceBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ForceBootsClassInfo);
  }
  CDOTA_Item_ForceBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ForceBootsClass.m_pClassInfo = &CDOTA_Item_ForceBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ForceBootsClassInfo;
  CDOTA_Item_ForceBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ForceBootsClass.m_pBaseClassInfo = CDOTA_Item_ForceBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ForceBootsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_ForceBootsClass = &CDOTA_Item_ForceBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ForceBootsClass;
  CDOTA_Item_ForceBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ForceBootsClassInfo.m_pClass = &CDOTA_Item_ForceBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ForceBootsClass;
  CDOTA_Item_ForceBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ForceBootsClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_ForceBootsClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_ForceBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ForceBootsClass;
}


// CDOTA_Item_ForceBoots::GetIntrinsicModifierName  (line 6082, @0x0000000002b16b50, libserver.so)
// strings: "modifier_item_forcebootsintrinsic"
const char *__fastcall CDOTA_Item_ForceBoots::GetIntrinsicModifierName(CDOTA_Item_ForceBoots *const this)
{
  return "modifier_item_forcebootsintrinsic";
}


// CDOTA_Item_ForceBoots::OnSpellStart  (line 6089, @0x0000000002b089d0, libserver.so)  // inlines: InState, IsInvulnerable, ToDOTABaseNPC, entindex
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::PrimeResumePreviousMovement, KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::SetInt, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, CEntityInstance::GetEntityIndex, CreateUnitEvent, KeyValues::~KeyValues (14 total)
// strings: "modifier_faceless_void_chronosphere_freeze", "modifier_enigma_black_hole_pull", "modifier_legion_commander_duel", "modifier_disruptor_kinetic_field", "modifier_nian_intrinsic", "CDOTA_Item_ForceBoots::OnSpellStart" (9 total)
void __fastcall CDOTA_Item_ForceBoots::OnSpellStart(CDOTA_Item_ForceBoots *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rbx
  unsigned __int64 m_Value; // rax
  int LevelSpecialValue; // eax
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CEntityIndex v8; // eax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-28h]

  v10 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = Caster;
  if ( Caster != 0 && Caster->m_bIsDOTANPC && !Caster->m_bIsWaitingToSpawn.m_Value )
  {
    m_Value = Caster->m_nUnitState64.m_Value;
    if ( (m_Value & 0x100) == 0
      && ((m_Value & 0x200) == 0 || v3 == CDOTABaseAbility::GetCaster(this))
      && !CDOTA_BaseNPC::TriggerSpellAbsorb(v3, this, 1)
      && CDOTA_BaseNPC::FindModifierByName(v3, "modifier_faceless_void_chronosphere_freeze", 0) == 0
      && CDOTA_BaseNPC::FindModifierByName(v3, "modifier_enigma_black_hole_pull", 0) == 0
      && CDOTA_BaseNPC::FindModifierByName(v3, "modifier_legion_commander_duel", 0) == 0
      && CDOTA_BaseNPC::FindModifierByName(v3, "modifier_disruptor_kinetic_field", 0) == 0
      && CDOTA_BaseNPC::FindModifierByName(v3, "modifier_nian_intrinsic", 0) == 0 )
    {
      if ( v3 == CDOTABaseAbility::GetCaster(this) )
        CDOTA_BaseNPC::PrimeResumePreviousMovement(v3);
      KeyValues::KeyValues(&kv, "CDOTA_Item_ForceBoots::OnSpellStart");
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "push_length", -1, 0);
      KeyValues::SetInt(&kv, "push_length", LevelSpecialValue);
      v6 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v3, v6, this, "modifier_item_force_boots", &kv, 0);
      DOTA_EmitSound(8, "DOTA_Item.ForceStaff.Activate", v3);
      v7 = CDOTABaseAbility::GetCaster(this);
      v8.m_Data = CEntityInstance::GetEntityIndex(v7).m_Data;
      CreateUnitEvent(v8, 0, 7, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_GENERIC_ITEM_USAGE);
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Modifier_ForceBootsIntrinsic::~CDOTA_Modifier_ForceBootsIntrinsic  (line 6125, @0x0000000002b1a100, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_ForceBootsIntrinsic::~CDOTA_Modifier_ForceBootsIntrinsic(
        CDOTA_Modifier_ForceBootsIntrinsic *const this)
{
  this->_vptr_CDOTA_Buff = &off_4474C70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_ForceBootsIntrinsic::~CDOTA_Modifier_ForceBootsIntrinsic  (line 6125, @0x0000000002b1a120, libserver.so)  // inlines: ~CDOTA_Modifier_ForceBootsIntrinsic
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_ForceBootsIntrinsic::~CDOTA_Modifier_ForceBootsIntrinsic(
        CDOTA_Modifier_ForceBootsIntrinsic *const this)
{
  this->_vptr_CDOTA_Buff = &off_4474C70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_ForceBootsIntrinsic::IsPurgable  (line 6132, @0x0000000002b16b60, libserver.so)
bool __fastcall CDOTA_Modifier_ForceBootsIntrinsic::IsPurgable(CDOTA_Modifier_ForceBootsIntrinsic *const this)
{
  return 0;
}


// CDOTA_Modifier_ForceBootsIntrinsic::IsHidden  (line 6133, @0x0000000002b16b70, libserver.so)
bool __fastcall CDOTA_Modifier_ForceBootsIntrinsic::IsHidden(CDOTA_Modifier_ForceBootsIntrinsic *const this)
{
  return 1;
}


// CDOTA_Modifier_ForceBootsIntrinsic::OnCreated  (line 6155, @0x0000000002b0b6c0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_str", "bonus_agi", "bonus_int"
void __fastcall CDOTA_Modifier_ForceBootsIntrinsic::OnCreated(
        CDOTA_Modifier_ForceBootsIntrinsic *const this,
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
    this->bonus_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_movement_speed", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->bonus_movement_speed = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_attack_speed", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_9;
    }
  }
  this->bonus_attack_speed = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->bonus_str = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_str", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
LABEL_10:
    this->bonus_agi = 0;
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
    goto LABEL_11;
  }
LABEL_9:
  this->bonus_str = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_10;
LABEL_5:
  this->bonus_agi = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "bonus_agi", -1, 0);
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
  {
LABEL_6:
    this->bonus_int = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "bonus_int", -1, 0);
    return;
  }
LABEL_11:
  this->bonus_int = 0;
}


// CDOTA_Modifier_ForceBootsIntrinsic::DeclareFunctions  (line 6164, @0x0000000002ae81e0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_ForceBootsIntrinsic::GetModifierMoveSpeedBonus_Special_Boots(CModifierParams const&), CDOTA_Modifier_ForceBootsIntrinsic::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_ForceBootsIntrinsic::GetModifierBonusStats_Str(CModifierParams const&), CDOTA_Modifier_ForceBootsIntrinsic::GetModifierBonusStats_Agi(CModifierParams const&), CDOTA_Modifier_ForceBootsIntrinsic::GetModifierBonusStats_Int(CModifierParams const&)
void __fastcall CDOTA_Modifier_ForceBootsIntrinsic::DeclareFunctions(CDOTA_Modifier_ForceBootsIntrinsic *const this)
{
  this->m_Functions[16].__pfn = CDOTA_Modifier_ForceBootsIntrinsic::GetModifierMoveSpeedBonus_Special_Boots;
  this->m_Functions[16].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_ForceBootsIntrinsic::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[64].__pfn = CDOTA_Modifier_ForceBootsIntrinsic::GetModifierBonusStats_Str;
  this->m_Functions[65].__pfn = CDOTA_Modifier_ForceBootsIntrinsic::GetModifierBonusStats_Agi;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[66].__pfn = CDOTA_Modifier_ForceBootsIntrinsic::GetModifierBonusStats_Int;
  this->m_Functions[66].__delta = 0;
}


// CDOTA_Modifier_ForceBootsIntrinsic::GetModifierMoveSpeedBonus_Special_Boots  (line 6173, @0x0000000002ae8270, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_ForceBootsIntrinsic::GetModifierMoveSpeedBonus_Special_Boots(
        CDOTA_Modifier_ForceBootsIntrinsic *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_ForceBootsIntrinsic::GetModifierAttackSpeedBonus_Constant  (line 6178, @0x0000000002ae8290, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_ForceBootsIntrinsic::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_ForceBootsIntrinsic *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_ForceBootsIntrinsic::GetModifierBonusStats_Str  (line 6183, @0x0000000002ae82b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_ForceBootsIntrinsic::GetModifierBonusStats_Str(
        CDOTA_Modifier_ForceBootsIntrinsic *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_str;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_ForceBootsIntrinsic::GetModifierBonusStats_Agi  (line 6188, @0x0000000002ae82d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_ForceBootsIntrinsic::GetModifierBonusStats_Agi(
        CDOTA_Modifier_ForceBootsIntrinsic *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_agi;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_ForceBootsIntrinsic::GetModifierBonusStats_Int  (line 6193, @0x0000000002ae82f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_ForceBootsIntrinsic::GetModifierBonusStats_Int(
        CDOTA_Modifier_ForceBootsIntrinsic *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_int;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_ForceBoots::~CDOTA_Modifier_ForceBoots  (line 6201, @0x0000000002b1a090, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_ForceBoots::~CDOTA_Modifier_ForceBoots(CDOTA_Modifier_ForceBoots *const this)
{
  this->_vptr_CDOTA_Buff = &off_4474F90;
  this->_vptr_CHorizontalMotionController = &off_4475280;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_ForceBoots::~CDOTA_Modifier_ForceBoots  (line 6201, @0x0000000002b1a0c0, libserver.so)  // inlines: ~CDOTA_Modifier_ForceBoots
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_ForceBoots::~CDOTA_Modifier_ForceBoots(CDOTA_Modifier_ForceBoots *const this)
{
  this->_vptr_CDOTA_Buff = &off_4474F90;
  this->_vptr_CHorizontalMotionController = &off_4475280;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_ForceBoots::IsPurgable  (line 6210, @0x0000000002b16b80, libserver.so)
bool __fastcall CDOTA_Modifier_ForceBoots::IsPurgable(CDOTA_Modifier_ForceBoots *const this)
{
  return 0;
}


// CDOTA_Modifier_ForceBoots::IsHorizontalMotionValidToApply  (line 6216, @0x0000000002b16b90, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_ForceBoots::IsHorizontalMotionValidToApply(CDOTA_Modifier_ForceBoots *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_ForceBoots::GetEffectName  (line 6218, @0x0000000002b16bc0, libserver.so)
// strings: "particles/items_fx/force_staff.vpcf"
const char *__fastcall CDOTA_Modifier_ForceBoots::GetEffectName(CDOTA_Modifier_ForceBoots *const this)
{
  return "particles/items_fx/force_staff.vpcf";
}


// CDOTA_Modifier_ForceBoots::GetStatusEffectName  (line 6219, @0x0000000002b16bd0, libserver.so)
// strings: "particles/status_fx/status_effect_forcestaff.vpcf"
const char *__fastcall CDOTA_Modifier_ForceBoots::GetStatusEffectName(CDOTA_Modifier_ForceBoots *const this)
{
  return "particles/status_fx/status_effect_forcestaff.vpcf";
}


// CDOTA_Modifier_ForceBoots::StatusEffectPriority  (line 6220, @0x0000000002b16be0, libserver.so)
int __fastcall CDOTA_Modifier_ForceBoots::StatusEffectPriority(CDOTA_Modifier_ForceBoots *const this)
{
  return 10;
}


// CDOTA_Modifier_ForceBoots::OnCreated  (line 6241, @0x0000000002aef260, libserver.so)  // inlines: Forward, Normalized, operator=
// calls: KeyValues::GetInt, CDOTA_Buff::GetParent, CDOTALocomotor::ApplyHorizontalMotionController, CBaseEntity::EntityToWorldTransform, VectorNormalize, CDOTA_Buff::Destroy
// strings: "push_length"
void __fastcall CDOTA_Modifier_ForceBoots::OnCreated(CDOTA_Modifier_ForceBoots *const this, KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  const matrix3x4_t *v6; // rax
  vec_t v7; // xmm1_4
  vec_t v8; // xmm2_4
  vec_t x; // xmm0_4
  Vector vec; // [rsp+0h] [rbp-20h] BYREF

  this->push_length = KeyValues::GetInt(pKV, "push_length", 0);
  Parent = CDOTA_Buff::GetParent(this);
  v4 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  if ( CDOTALocomotor::ApplyHorizontalMotionController(v4, &this->CHorizontalMotionController, 0) )
  {
    v5 = CDOTA_Buff::GetParent(this);
    v6 = CBaseEntity::EntityToWorldTransform(v5);
    v7 = v6->m_flMatVal[2][0];
    v8 = v6->m_flMatVal[1][0];
    vec.x = v6->m_flMatVal[0][0];
    vec.z = v7;
    vec.y = v8;
    VectorNormalize(&vec);
    x = vec.x;
    this->m_flEndTime = 0.34999999;
    this->m_flCurTime = 0.0;
    this->m_vDirection.x = x;
    this->m_vDirection.y = vec.y;
    this->m_vDirection.z = vec.z;
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_ForceBoots::DeclareFunctions  (line 6257, @0x0000000002ae8310, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_ForceBoots::GetOverrideAnimation(CModifierParams const&), CDOTA_Modifier_ForceBoots::GetActivityTranslationModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_ForceBoots::DeclareFunctions(CDOTA_Modifier_ForceBoots *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_ForceBoots::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
  this->m_Functions[155].__delta = 0;
  this->m_Functions[155].__pfn = CDOTA_Modifier_ForceBoots::GetActivityTranslationModifiers;
}


// CDOTA_Modifier_ForceBoots::OnDestroy  (line 6263, @0x0000000002aea650, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::RemoveHorizontalMotionController
void __fastcall CDOTA_Modifier_ForceBoots::OnDestroy(CDOTA_Modifier_ForceBoots *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v3; // rax

  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveHorizontalMotionController(v3, &this->CHorizontalMotionController);
}


// CDOTA_Modifier_ForceBoots::UpdateHorizontalMotion  (line 6270, @0x0000000002aeafe0, libserver.so)  // inlines: VectorAdd, VectorMultiply, operator*, operator+
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTALocomotor::IsLeashedMovementPrevented, CDOTA_Buff::GetCaster, CGridNav::DestroyTreesAroundPoint, CDOTA_Buff::Destroy, CDOTA_BaseNPC::StartGesture, CBaseEntity::SetAbsOrigin
void __fastcall CDOTA_Modifier_ForceBoots::UpdateHorizontalMotion(
        CDOTA_Modifier_ForceBoots *const this,
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


// CDOTA_Modifier_ForceBoots::OnHorizontalMotionInterrupted  (line 6294, @0x0000000002aea190, libserver.so)
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_ForceBoots::OnHorizontalMotionInterrupted(CDOTA_Modifier_ForceBoots *const this)
{
  CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_ForceBoots::GetOverrideAnimation  (line 6301, @0x0000000002ae8350, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_ForceBoots::GetOverrideAnimation(
        CDOTA_Modifier_ForceBoots *const this,
        const CModifierParams *const params)
{
  return 0x44BC800000000001uLL;
}


// CDOTA_Modifier_ForceBoots::GetActivityTranslationModifiers  (line 6307, @0x0000000002aec6f0, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent
// strings: "forcestaff_enemy", "forcestaff_friendly"
ModifierVariant_t __fastcall CDOTA_Modifier_ForceBoots::GetActivityTranslationModifiers(
        CDOTA_Modifier_ForceBoots *const this,
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


// CDOTA_Item_JumpBoots::~CDOTA_Item_JumpBoots  (line 6329, @0x0000000002b1dd60, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_JumpBoots::~CDOTA_Item_JumpBoots(CDOTA_Item_JumpBoots *const this)
{
  this->_vptr_IHandleEntity = &off_4475350;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_JumpBoots::~CDOTA_Item_JumpBoots  (line 6329, @0x0000000002b1dd80, libserver.so)  // inlines: ~CDOTA_Item_JumpBoots
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_JumpBoots::~CDOTA_Item_JumpBoots(CDOTA_Item_JumpBoots *const this)
{
  this->_vptr_IHandleEntity = &off_4475350;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_JumpBoots::Schema_DynamicBinding  (line 6331, @0x0000000002b16bf0, libserver.so)
// globals: CDOTA_Item_JumpBoots::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_JumpBoots::Schema_DynamicBinding(
        const CDOTA_Item_JumpBoots *const this)
{
  return CDOTA_Item_JumpBoots::s_pSchemaBinding;
}


// CDOTA_Item_JumpBoots::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 6331, @0x0000000002b16c00, libserver.so)
// globals: CDOTA_Item_JumpBoots::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_JumpBoots::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_JumpBoots::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_JumpBoots::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_JumpBoots::CEntityInstanceEntityClass::DestructInstance  (line 6331, @0x0000000002b16c10, libserver.so)  // inlines: Destruct<CDOTA_Item_JumpBoots>
void __fastcall CDOTA_Item_JumpBoots::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_JumpBoots::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_JumpBoots::CEntityInstanceEntityClass::FreeInstance  (line 6331, @0x0000000002b16c30, libserver.so)
void __fastcall CDOTA_Item_JumpBoots::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_JumpBoots::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_JumpBoots::CEntityInstanceEntityClass::CanAllocate  (line 6331, @0x0000000002b16c50, libserver.so)
bool __fastcall CDOTA_Item_JumpBoots::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_JumpBoots::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_JumpBoots::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 6331, @0x0000000002b16c60, libserver.so)
// globals: CDOTA_Item_JumpBoots::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_JumpBoots::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_JumpBoots::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_JumpBoots::s_pSchemaBinding;
}


// CDOTA_Item_JumpBoots::CEntityInstanceEntityClass::AllocateInstance  (line 6331, @0x0000000002b19570, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_JumpBoots::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_JumpBoots::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_JumpBoots::CEntityInstanceEntityClass::ConstructInstance  (line 6331, @0x0000000002b1d7d0, libserver.so)  // inlines: CDOTA_Item_JumpBoots, Construct<CDOTA_Item_JumpBoots>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_JumpBoots::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_JumpBoots::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4475350;
  }
  return p;
}


// CDOTA_Item_JumpBoots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 6331, @0x0000000002b21960, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_JumpBoots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_JumpBoots::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_JumpBoots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 6331, @0x0000000002b21980, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_JumpBoots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_JumpBoots::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_JumpBoots::GetEntityClassInternal  (line 6331, @0x0000000002b2ca80, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "CDOTA_Item_JumpBoots"
// globals: `guard variable for'CDOTA_Item_JumpBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_JumpBootsClass, CDOTA_Item_JumpBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_JumpBootsClass, __dso_handle, CDOTA_Item_JumpBoots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_JumpBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_JumpBootsClassInfo, CDOTA_Item_JumpBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_JumpBootsClassInfo
CEntityClass *__cdecl CDOTA_Item_JumpBoots::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_JumpBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_JumpBootsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_JumpBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_JumpBootsClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_JumpBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_JumpBootsClass);
    CDOTA_Item_JumpBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_JumpBootsClass._vptr_CEntityClass = off_44752D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_JumpBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_JumpBootsClass);
    __cxa_atexit(
      CDOTA_Item_JumpBoots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_JumpBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_JumpBootsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_JumpBootsClass != 0 )
    return &CDOTA_Item_JumpBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_JumpBootsClass;
  if ( `guard variable for'CDOTA_Item_JumpBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_JumpBootsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_JumpBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_JumpBootsClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_JumpBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_JumpBootsClassInfo,
      "CDOTA_Item_JumpBoots",
      "item_jump_boots",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_JumpBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_JumpBootsClassInfo);
  }
  CDOTA_Item_JumpBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_JumpBootsClass.m_pClassInfo = &CDOTA_Item_JumpBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_JumpBootsClassInfo;
  CDOTA_Item_JumpBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_JumpBootsClass.m_pBaseClassInfo = CDOTA_Item_JumpBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_JumpBootsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_JumpBootsClass = &CDOTA_Item_JumpBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_JumpBootsClass;
  CDOTA_Item_JumpBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_JumpBootsClassInfo.m_pClass = &CDOTA_Item_JumpBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_JumpBootsClass;
  CDOTA_Item_JumpBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_JumpBootsClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_JumpBootsClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_JumpBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_JumpBootsClass;
}


// CDOTA_Item_JumpBoots::GetIntrinsicModifierName  (line 6333, @0x0000000002b16c70, libserver.so)
// strings: "modifier_item_jumpbootsintrinsic"
const char *__fastcall CDOTA_Item_JumpBoots::GetIntrinsicModifierName(CDOTA_Item_JumpBoots *const this)
{
  return "modifier_item_jumpbootsintrinsic";
}


// CDOTA_Item_JumpBoots::OnSpellStart  (line 6340, @0x0000000002b08bb0, libserver.so)  // inlines: InState, IsInvulnerable, ToDOTABaseNPC, entindex
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::PrimeResumePreviousMovement, KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::SetInt, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, CEntityInstance::GetEntityIndex, CreateUnitEvent, KeyValues::~KeyValues (14 total)
// strings: "modifier_faceless_void_chronosphere_freeze", "modifier_enigma_black_hole_pull", "modifier_legion_commander_duel", "modifier_disruptor_kinetic_field", "modifier_nian_intrinsic", "CDOTA_Item_JumpBoots::OnSpellStart" (9 total)
void __fastcall CDOTA_Item_JumpBoots::OnSpellStart(CDOTA_Item_JumpBoots *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rbx
  unsigned __int64 m_Value; // rax
  int LevelSpecialValue; // eax
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CEntityIndex v8; // eax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-28h]

  v10 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = Caster;
  if ( Caster != 0 && Caster->m_bIsDOTANPC && !Caster->m_bIsWaitingToSpawn.m_Value )
  {
    m_Value = Caster->m_nUnitState64.m_Value;
    if ( (m_Value & 0x100) == 0
      && ((m_Value & 0x200) == 0 || v3 == CDOTABaseAbility::GetCaster(this))
      && !CDOTA_BaseNPC::TriggerSpellAbsorb(v3, this, 1)
      && CDOTA_BaseNPC::FindModifierByName(v3, "modifier_faceless_void_chronosphere_freeze", 0) == 0
      && CDOTA_BaseNPC::FindModifierByName(v3, "modifier_enigma_black_hole_pull", 0) == 0
      && CDOTA_BaseNPC::FindModifierByName(v3, "modifier_legion_commander_duel", 0) == 0
      && CDOTA_BaseNPC::FindModifierByName(v3, "modifier_disruptor_kinetic_field", 0) == 0
      && CDOTA_BaseNPC::FindModifierByName(v3, "modifier_nian_intrinsic", 0) == 0 )
    {
      if ( v3 == CDOTABaseAbility::GetCaster(this) )
        CDOTA_BaseNPC::PrimeResumePreviousMovement(v3);
      KeyValues::KeyValues(&kv, "CDOTA_Item_JumpBoots::OnSpellStart");
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "push_length", -1, 0);
      KeyValues::SetInt(&kv, "push_length", LevelSpecialValue);
      v6 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v3, v6, this, "modifier_item_jump_boots", &kv, 0);
      DOTA_EmitSound(8, "DOTA_Item.ForceStaff.Activate", v3);
      v7 = CDOTABaseAbility::GetCaster(this);
      v8.m_Data = CEntityInstance::GetEntityIndex(v7).m_Data;
      CreateUnitEvent(v8, 0, 7, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_GENERIC_ITEM_USAGE);
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Modifier_JumpBootsIntrinsic::~CDOTA_Modifier_JumpBootsIntrinsic  (line 6376, @0x0000000002b1a040, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_JumpBootsIntrinsic::~CDOTA_Modifier_JumpBootsIntrinsic(
        CDOTA_Modifier_JumpBootsIntrinsic *const this)
{
  this->_vptr_CDOTA_Buff = &off_4475F10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_JumpBootsIntrinsic::~CDOTA_Modifier_JumpBootsIntrinsic  (line 6376, @0x0000000002b1a060, libserver.so)  // inlines: ~CDOTA_Modifier_JumpBootsIntrinsic
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_JumpBootsIntrinsic::~CDOTA_Modifier_JumpBootsIntrinsic(
        CDOTA_Modifier_JumpBootsIntrinsic *const this)
{
  this->_vptr_CDOTA_Buff = &off_4475F10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_JumpBootsIntrinsic::IsPurgable  (line 6383, @0x0000000002b16c80, libserver.so)
bool __fastcall CDOTA_Modifier_JumpBootsIntrinsic::IsPurgable(CDOTA_Modifier_JumpBootsIntrinsic *const this)
{
  return 0;
}


// CDOTA_Modifier_JumpBootsIntrinsic::IsHidden  (line 6384, @0x0000000002b16c90, libserver.so)
bool __fastcall CDOTA_Modifier_JumpBootsIntrinsic::IsHidden(CDOTA_Modifier_JumpBootsIntrinsic *const this)
{
  return 1;
}


// CDOTA_Modifier_JumpBootsIntrinsic::OnCreated  (line 6400, @0x0000000002b09c60, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_JumpBootsIntrinsic::OnCreated(
        CDOTA_Modifier_JumpBootsIntrinsic *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_movement_speed", -1, 0);
  else
    this->bonus_movement_speed = 0;
}


// CDOTA_Modifier_JumpBootsIntrinsic::DeclareFunctions  (line 6406, @0x0000000002ae8370, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_JumpBootsIntrinsic::GetModifierMoveSpeedBonus_Special_Boots(CModifierParams const&)
void __fastcall CDOTA_Modifier_JumpBootsIntrinsic::DeclareFunctions(CDOTA_Modifier_JumpBootsIntrinsic *const this)
{
  this->m_Functions[16].__pfn = CDOTA_Modifier_JumpBootsIntrinsic::GetModifierMoveSpeedBonus_Special_Boots;
  this->m_Functions[16].__delta = 0;
}


// CDOTA_Modifier_JumpBootsIntrinsic::GetModifierMoveSpeedBonus_Special_Boots  (line 6411, @0x0000000002ae8390, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_JumpBootsIntrinsic::GetModifierMoveSpeedBonus_Special_Boots(
        CDOTA_Modifier_JumpBootsIntrinsic *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_JumpBoots::~CDOTA_Modifier_JumpBoots  (line 6419, @0x0000000002b19fd0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_JumpBoots::~CDOTA_Modifier_JumpBoots(CDOTA_Modifier_JumpBoots *const this)
{
  this->_vptr_CDOTA_Buff = &off_4476230;
  this->_vptr_CVerticalMotionController = &off_4476520;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_JumpBoots::~CDOTA_Modifier_JumpBoots  (line 6419, @0x0000000002b1a000, libserver.so)  // inlines: ~CDOTA_Modifier_JumpBoots
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_JumpBoots::~CDOTA_Modifier_JumpBoots(CDOTA_Modifier_JumpBoots *const this)
{
  this->_vptr_CDOTA_Buff = &off_4476230;
  this->_vptr_CVerticalMotionController = &off_4476520;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_JumpBoots::IsPurgable  (line 6428, @0x0000000002b16ca0, libserver.so)
bool __fastcall CDOTA_Modifier_JumpBoots::IsPurgable(CDOTA_Modifier_JumpBoots *const this)
{
  return 0;
}


// CDOTA_Modifier_JumpBoots::IsVerticalMotionValidToApply  (line 6434, @0x0000000002b16cb0, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_JumpBoots::IsVerticalMotionValidToApply(CDOTA_Modifier_JumpBoots *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_JumpBoots::GetEffectName  (line 6436, @0x0000000002b16ce0, libserver.so)
// strings: "particles/items_fx/force_staff.vpcf"
const char *__fastcall CDOTA_Modifier_JumpBoots::GetEffectName(CDOTA_Modifier_JumpBoots *const this)
{
  return "particles/items_fx/force_staff.vpcf";
}


// CDOTA_Modifier_JumpBoots::GetStatusEffectName  (line 6437, @0x0000000002b16cf0, libserver.so)
// strings: "particles/status_fx/status_effect_forcestaff.vpcf"
const char *__fastcall CDOTA_Modifier_JumpBoots::GetStatusEffectName(CDOTA_Modifier_JumpBoots *const this)
{
  return "particles/status_fx/status_effect_forcestaff.vpcf";
}


// CDOTA_Modifier_JumpBoots::StatusEffectPriority  (line 6438, @0x0000000002b16d00, libserver.so)
int __fastcall CDOTA_Modifier_JumpBoots::StatusEffectPriority(CDOTA_Modifier_JumpBoots *const this)
{
  return 10;
}


// CDOTA_Modifier_JumpBoots::OnCreated  (line 6461, @0x0000000002aeae30, libserver.so)
// calls: KeyValues::GetInt, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, GetGroundHeight, CDOTALocomotor::ApplyVerticalMotionController, CDOTA_Buff::Destroy
// strings: "push_length"
void __fastcall CDOTA_Modifier_JumpBoots::OnCreated(CDOTA_Modifier_JumpBoots *const this, KeyValues *pKV)
{
  int Int; // eax
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTALocomotor *v8; // rax

  Int = KeyValues::GetInt(pKV, "push_length", 0);
  this->m_flCurTime = 0.0;
  this->push_length = Int;
  Parent = CDOTA_Buff::GetParent(this);
  v5 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  this->m_flStartZ = GetGroundHeight(AbsOrigin, Parent);
  v7 = CDOTA_Buff::GetParent(this);
  v8 = (*(v7->_vptr_IHandleEntity + 376))(v7);
  if ( !CDOTALocomotor::ApplyVerticalMotionController(v8, &this->CVerticalMotionController, 0) )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_JumpBoots::DeclareFunctions  (line 6475, @0x0000000002ae83b0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_JumpBoots::GetOverrideAnimation(CModifierParams const&), CDOTA_Modifier_JumpBoots::GetActivityTranslationModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_JumpBoots::DeclareFunctions(CDOTA_Modifier_JumpBoots *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_JumpBoots::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
  this->m_Functions[155].__delta = 0;
  this->m_Functions[155].__pfn = CDOTA_Modifier_JumpBoots::GetActivityTranslationModifiers;
}


// CDOTA_Modifier_JumpBoots::OnDestroy  (line 6481, @0x0000000002aeb200, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::RemoveVerticalMotionController
void __fastcall CDOTA_Modifier_JumpBoots::OnDestroy(CDOTA_Modifier_JumpBoots *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v3; // rax

  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveVerticalMotionController(v3, &this->CVerticalMotionController);
}


// CDOTA_Modifier_JumpBoots::UpdateVerticalMotion  (line 6488, @0x0000000002aec480, libserver.so)
// calls: CVerticalMotionController::UpdateSimpleAirTime, CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_JumpBoots::UpdateVerticalMotion(
        CDOTA_Modifier_JumpBoots *const this,
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

  v8 = &this->CVerticalMotionController;
  v9 = *(&v8[1].m_nPriority + 1) + a3;
  v10 = *&v8[1].m_nPriority;
  *(&v8[1].m_nPriority + 1) = v9;
  if ( CVerticalMotionController::UpdateSimpleAirTime(v8, me, v10, v9, 1.0, this->push_length, a7) != 0 )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_JumpBoots::OnVerticalMotionInterrupted  (line 6500, @0x0000000002aea1b0, libserver.so)
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_JumpBoots::OnVerticalMotionInterrupted(CDOTA_Modifier_JumpBoots *const this)
{
  CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_JumpBoots::GetOverrideAnimation  (line 6507, @0x0000000002ae83f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_JumpBoots::GetOverrideAnimation(
        CDOTA_Modifier_JumpBoots *const this,
        const CModifierParams *const params)
{
  return 0x44BC800000000001uLL;
}


// CDOTA_Modifier_JumpBoots::GetActivityTranslationModifiers  (line 6513, @0x0000000002aec770, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent
// strings: "forcestaff_enemy", "forcestaff_friendly"
ModifierVariant_t __fastcall CDOTA_Modifier_JumpBoots::GetActivityTranslationModifiers(
        CDOTA_Modifier_JumpBoots *const this,
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


// CDOTA_Modifier_JumpBoots::CheckState  (line 6529, @0x0000000002ae8410, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_JumpBoots::CheckState(
        CDOTA_Modifier_JumpBoots *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x100uLL;
  buffState->m_nDisabledStateMask &= ~0x100uLL;
}


// CDOTA_Ability_Nian_Leap::~CDOTA_Ability_Nian_Leap  (line 6544, @0x0000000002b1c6e0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Nian_Leap::~CDOTA_Ability_Nian_Leap(CDOTA_Ability_Nian_Leap *const this)
{
  this->_vptr_IHandleEntity = &off_44765F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Nian_Leap::~CDOTA_Ability_Nian_Leap  (line 6544, @0x0000000002b1c700, libserver.so)  // inlines: ~CDOTA_Ability_Nian_Leap
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Nian_Leap::~CDOTA_Ability_Nian_Leap(CDOTA_Ability_Nian_Leap *const this)
{
  this->_vptr_IHandleEntity = &off_44765F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Nian_Leap::Schema_DynamicBinding  (line 6546, @0x0000000002b16d10, libserver.so)
// globals: CDOTA_Ability_Nian_Leap::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nian_Leap::Schema_DynamicBinding(
        const CDOTA_Ability_Nian_Leap *const this)
{
  return CDOTA_Ability_Nian_Leap::s_pSchemaBinding;
}


// CDOTA_Ability_Nian_Leap::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 6546, @0x0000000002b16d20, libserver.so)
// globals: CDOTA_Ability_Nian_Leap::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nian_Leap::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Nian_Leap::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nian_Leap::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Nian_Leap::CEntityInstanceEntityClass::DestructInstance  (line 6546, @0x0000000002b16d30, libserver.so)  // inlines: Destruct<CDOTA_Ability_Nian_Leap>
void __fastcall CDOTA_Ability_Nian_Leap::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Nian_Leap::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Nian_Leap::CEntityInstanceEntityClass::FreeInstance  (line 6546, @0x0000000002b16d50, libserver.so)
void __fastcall CDOTA_Ability_Nian_Leap::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Nian_Leap::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Nian_Leap::CEntityInstanceEntityClass::CanAllocate  (line 6546, @0x0000000002b16d70, libserver.so)
bool __fastcall CDOTA_Ability_Nian_Leap::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Nian_Leap::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Nian_Leap::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 6546, @0x0000000002b16d80, libserver.so)
// globals: CDOTA_Ability_Nian_Leap::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Nian_Leap::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Nian_Leap::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nian_Leap::s_pSchemaBinding;
}


// CDOTA_Ability_Nian_Leap::CEntityInstanceEntityClass::AllocateInstance  (line 6546, @0x0000000002b195b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Nian_Leap::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Nian_Leap::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Nian_Leap::CEntityInstanceEntityClass::ConstructInstance  (line 6546, @0x0000000002b1b970, libserver.so)  // inlines: CDOTA_Ability_Nian_Leap, Construct<CDOTA_Ability_Nian_Leap>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Nian_Leap::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Nian_Leap::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = 1065353216;
    *p = &off_44765F0;
  }
  return p;
}


// CDOTA_Ability_Nian_Leap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 6546, @0x0000000002b22540, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Nian_Leap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nian_Leap::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Nian_Leap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 6546, @0x0000000002b22560, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Nian_Leap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nian_Leap::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Nian_Leap::GetEntityClassInternal  (line 6546, @0x0000000002b326e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_Ability_Nian_Leap>, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "CDOTA_Ability_Nian_Leap"
// globals: `guard variable for'CDOTA_Ability_Nian_Leap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_LeapClass, CDOTA_Ability_Nian_Leap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_LeapClass, __dso_handle, CDOTA_Ability_Nian_Leap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Nian_Leap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_LeapClassInfo, CDOTA_Ability_Nian_Leap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_LeapClassInfo
CEntityClass *__cdecl CDOTA_Ability_Nian_Leap::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Nian_Leap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_LeapClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nian_Leap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_LeapClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Nian_Leap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_LeapClass);
    CDOTA_Ability_Nian_Leap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_LeapClass._vptr_CEntityClass = off_4476570;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nian_Leap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_LeapClass);
    __cxa_atexit(
      CDOTA_Ability_Nian_Leap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Nian_Leap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_LeapClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Nian_LeapClass != 0 )
    return &CDOTA_Ability_Nian_Leap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_LeapClass;
  if ( `guard variable for'CDOTA_Ability_Nian_Leap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_LeapClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nian_Leap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_LeapClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Nian_Leap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_LeapClassInfo,
      "CDOTA_Ability_Nian_Leap",
      "nian_leap",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nian_Leap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_LeapClassInfo);
  }
  CDOTA_Ability_Nian_Leap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_LeapClass.m_pClassInfo = &CDOTA_Ability_Nian_Leap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_LeapClassInfo;
  CDOTA_Ability_Nian_Leap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_LeapClass.m_pBaseClassInfo = CDOTA_Ability_Nian_Leap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_LeapClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Nian_LeapClass = &CDOTA_Ability_Nian_Leap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_LeapClass;
  CDOTA_Ability_Nian_Leap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nian_LeapClassInfo.m_pClass = &CDOTA_Ability_Nian_Leap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_LeapClass;
  CDOTA_Ability_Nian_Leap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_LeapClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_Ability_Nian_Leap>(0);
  g_pEntityCDOTA_Ability_Nian_LeapClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Nian_Leap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nian_LeapClass;
}


// CDOTA_Ability_Nian_Leap::GetCastAnimation  (line 6550, @0x0000000002b16d90, libserver.so)
Activity __fastcall CDOTA_Ability_Nian_Leap::GetCastAnimation(CDOTA_Ability_Nian_Leap *const this)
{
  return 1660;
}


// CDOTA_Ability_Nian_Leap::GetPlaybackRateOverride  (line 6560, @0x0000000002b16da0, libserver.so)
float __fastcall CDOTA_Ability_Nian_Leap::GetPlaybackRateOverride(CDOTA_Ability_Nian_Leap *const this)
{
  return this->m_flPlaybackRate;
}


// CDOTA_Ability_Nian_Leap::SetPlaybackRate  (line 6561, @0x0000000002b16db0, libserver.so)
void __fastcall CDOTA_Ability_Nian_Leap::SetPlaybackRate(CDOTA_Ability_Nian_Leap *const this, float a2, float flRate)
{
  this->m_flPlaybackRate = a2;
}


// CDOTA_Ability_Nian_Leap::OnSpellStart  (line 6572, @0x0000000002aebb60, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Set
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetCursorPosition, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CBaseEntity::EmitSound, CDOTA_ProjectileManager::ProjectileDodge, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_nian_dive", "playback_rate", "modifier_nian_leap", "Nian.Stinger.Begin"
void __fastcall CDOTA_Ability_Nian_Leap::OnSpellStart(CDOTA_Ability_Nian_Leap *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v8; // cx
  EHANDLE hTarget; // [rsp+0h] [rbp-80h] BYREF
  Vector CursorPosition; // [rsp+10h] [rbp-70h]
  Vector v11; // [rsp+20h] [rbp-60h]
  Vector v12; // [rsp+30h] [rbp-50h]
  KeyValues kv; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp-28h]

  v14 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_nian_dive");
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  KeyValues::SetFloat(&kv, "x", CursorPosition.z);
  v11 = CDOTABaseAbility::GetCursorPosition(this);
  KeyValues::SetFloat(&kv, "y", v11.z);
  v12 = CDOTABaseAbility::GetCursorPosition(this);
  KeyValues::SetFloat(&kv, "z", v12.z);
  KeyValues::SetFloat(&kv, "playback_rate", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_nian_leap", &kv, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::EmitSound(v5, "Nian.Stinger.Begin", 0.0, 0);
  v6 = CDOTABaseAbility::GetCaster(this);
  hTarget.m_Index = -1;
  if ( v6 != 0 )
  {
    m_pEntity = v6->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v8 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      hTarget.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v8 & 0x7FFF;
    }
  }
  CDOTA_ProjectileManager::ProjectileDodge(&g_DOTAProjectileManager, &hTarget, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Nian_Leap::~CDOTA_Modifier_Nian_Leap  (line 6593, @0x0000000002b19f50, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Nian_Leap::~CDOTA_Modifier_Nian_Leap(CDOTA_Modifier_Nian_Leap *const this)
{
  this->_vptr_CDOTA_Buff = &off_44770B0;
  this->_vptr_CHorizontalMotionController = &off_44773B8;
  this->_vptr_CVerticalMotionController = &off_44773F8;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Nian_Leap::~CDOTA_Modifier_Nian_Leap  (line 6593, @0x0000000002b19f80, libserver.so)  // inlines: ~CDOTA_Modifier_Nian_Leap
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Nian_Leap::~CDOTA_Modifier_Nian_Leap(CDOTA_Modifier_Nian_Leap *const this)
{
  this->_vptr_CDOTA_Buff = &off_44770B0;
  this->_vptr_CHorizontalMotionController = &off_44773B8;
  this->_vptr_CVerticalMotionController = &off_44773F8;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nian_Leap::IsHidden  (line 6603, @0x0000000002b16dc0, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Leap::IsHidden(CDOTA_Modifier_Nian_Leap *const this)
{
  return 1;
}


// CDOTA_Modifier_Nian_Leap::IsPurgable  (line 6604, @0x0000000002b16dd0, libserver.so)
bool __fastcall CDOTA_Modifier_Nian_Leap::IsPurgable(CDOTA_Modifier_Nian_Leap *const this)
{
  return 0;
}


// CDOTA_Modifier_Nian_Leap::IsHorizontalMotionValidToApply  (line 6615, @0x0000000002b16de0, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Nian_Leap::IsHorizontalMotionValidToApply(CDOTA_Modifier_Nian_Leap *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Nian_Leap::IsVerticalMotionValidToApply  (line 6616, @0x0000000002b16e10, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Nian_Leap::IsVerticalMotionValidToApply(CDOTA_Modifier_Nian_Leap *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Nian_Leap::OnCreated  (line 6646, @0x0000000002b05b10, libserver.so)  // inlines: FastSqrt, Length2D, NormalizeInPlace, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator=
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, DotaRetrieveAbilityValue<float>, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, GetPositionOnGround, KeyValues::GetFloat, VectorNormalize, CDOTALocomotor::ApplyHorizontalMotionController, CDOTA_Buff::Destroy, CDOTALocomotor::ApplyVerticalMotionController, CBaseAnimating::SelectWeightedSequence (15 total)
// strings: "pounce_distance", "pounce_speed", "pounce_acceleration", "initial_delay", "landing_delay", "playback_rate"
void __fastcall CDOTA_Modifier_Nian_Leap::OnCreated(CDOTA_Modifier_Nian_Leap *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_BaseNPC *v10; // rax
  const Vector *AbsOrigin; // rax
  float v12; // xmm1_4
  float v13; // xmm1_4
  float Float; // xmm0_4
  float initial_delay; // xmm1_4
  float v16; // xmm1_4
  CDOTA_BaseNPC *v17; // rax
  CDOTALocomotor *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  CDOTALocomotor *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  int32 m_Data; // r12d
  CDOTA_BaseNPC *v23; // rax
  float v24; // xmm0_4
  float v25; // xmm0_4
  CDOTA_BaseNPC *v26; // rax
  vec_t v27; // xmm1_4
  __int64 v28; // xmm0_8
  CDOTA_BaseNPC *v29; // rax
  float GroundHeight; // xmm0_4
  float v31; // xmm3_4
  float v32; // xmm1_4
  int (**vptr_CDOTA_Buff)(...); // rax
  float v34; // xmm4_4
  float flPounceDist; // [rsp+0h] [rbp-40h]
  Vector vEdgePos; // [rsp+10h] [rbp-30h] BYREF
  Vector PositionOnGround; // 0:kr00_12.12

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->pounce_distance, "pounce_distance");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v5, &this->pounce_speed, "pounce_speed");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v6, &this->pounce_acceleration, "pounce_acceleration");
  v7 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v7, &this->initial_delay, "initial_delay");
  v8 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v8, &this->landing_delay, "landing_delay");
  Parent = CDOTA_Buff::GetParent(this);
  v10 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
  PositionOnGround = GetPositionOnGround(AbsOrigin, Parent);
  *&vEdgePos.x = *&PositionOnGround.x;
  this->m_vStartPosition.z = PositionOnGround.z;
  vEdgePos.z = PositionOnGround.z;
  this->m_vStartPosition.x = PositionOnGround.x;
  this->m_vStartPosition.y = vEdgePos.y;
  this->m_vTargetPosition.x = KeyValues::GetFloat(pKV, "x", PositionOnGround.z);
  this->m_vTargetPosition.y = KeyValues::GetFloat(pKV, "y", v12);
  this->m_vTargetPosition.z = 0.0;
  Float = KeyValues::GetFloat(pKV, "playback_rate", v13);
  initial_delay = this->initial_delay;
  this->m_flPlaybackRate = Float;
  this->m_vTargetHorizontalDirection.x = this->m_vTargetPosition.x - this->m_vStartPosition.x;
  this->initial_delay = initial_delay / Float;
  v16 = this->landing_delay / Float;
  this->m_vTargetHorizontalDirection.z = this->m_vTargetPosition.z - this->m_vStartPosition.z;
  this->landing_delay = v16;
  this->m_vTargetHorizontalDirection.y = this->m_vTargetPosition.y - this->m_vStartPosition.y;
  VectorNormalize(&this->m_vTargetHorizontalDirection);
  v17 = CDOTA_Buff::GetParent(this);
  v18 = (*(v17->_vptr_IHandleEntity + 376))(v17);
  if ( CDOTALocomotor::ApplyHorizontalMotionController(v18, &this->CHorizontalMotionController, 0)
    && (v19 = CDOTA_Buff::GetParent(this),
        v20 = (*(v19->_vptr_IHandleEntity + 376))(v19),
        CDOTALocomotor::ApplyVerticalMotionController(v20, &this->CVerticalMotionController, 0)) )
  {
    flPounceDist = fsqrt(
                     ((this->m_vStartPosition.x - this->m_vTargetPosition.x)
                    * (this->m_vStartPosition.x - this->m_vTargetPosition.x))
                   + ((this->m_vStartPosition.y - this->m_vTargetPosition.y)
                    * (this->m_vStartPosition.y - this->m_vTargetPosition.y)));
    v21 = CDOTA_Buff::GetParent(this);
    m_Data = CBaseAnimating::SelectWeightedSequence(v21, 1660).m_Data;
    v23 = CDOTA_Buff::GetParent(this);
    v24 = CBaseAnimating::SequenceDuration(v23, m_Data);
    this->m_bInterrupted = 0;
    v25 = v24 / this->m_flPlaybackRate;
    this->m_flCurrentTimeHoriz = 0.0;
    this->m_flLeapSequenceDuration = v25;
    this->m_flCurrentTimeVert = 0.0;
    this->m_flHorizDelayTime = 0.0;
    this->m_flVertDelayTime = 0.0;
    v26 = CDOTA_Buff::GetParent(this);
    CGridNavBase::ClampToWorldEdge(&g_GridNav, v26, this->m_vTargetPosition);
    vEdgePos.z = v27;
    *&vEdgePos.x = v28;
    v29 = CDOTA_Buff::GetParent(this);
    GroundHeight = GetGroundHeight(&vEdgePos, v29);
    v31 = this->initial_delay;
    this->m_vTargetPosition.z = GroundHeight;
    v32 = GroundHeight - this->m_vStartPosition.z;
    vptr_CDOTA_Buff = this->_vptr_CDOTA_Buff;
    v34 = this->m_flLeapSequenceDuration - (v31 + this->landing_delay);
    this->m_flTotalTimeInAir = v34;
    this->pounce_speed = flPounceDist / v34;
    this->m_flInitialVelocity = (v32 / v34) + ((0.5 * this->pounce_acceleration) * v34);
    vptr_CDOTA_Buff[63](this, 1);
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Nian_Leap::UpdateHorizontalMotion  (line 6708, @0x0000000002aec500, libserver.so)  // inlines: VectorAdd, VectorMultiply, operator*, operator+
// calls: CBaseEntity::SetAbsOrigin
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_Modifier_Nian_Leap::UpdateHorizontalMotion(
        CDOTA_Modifier_Nian_Leap *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  __int64 v4; // rbp
  float m_flHorizDelayTime; // xmm2_4
  float initial_delay; // xmm1_4
  float v7; // xmm0_4
  float m_flCurrentTimeHoriz; // xmm2_4
  float m_flTotalTimeInAir; // xmm1_4
  float v10; // xmm2_4
  float pounce_speed; // xmm0_4
  unsigned int v12; // xmm3_4
  float v13; // xmm2_4
  unsigned int v14; // xmm0_4
  unsigned __int64 v15; // [rsp-8h] [rbp-18h] BYREF
  __int128 vNewLocation; // [rsp+0h] [rbp-10h] OVERLAPPED

  m_flHorizDelayTime = this->m_flHorizDelayTime;
  initial_delay = this->initial_delay;
  if ( initial_delay > m_flHorizDelayTime )
  {
    v7 = a3 + m_flHorizDelayTime;
    this->m_flHorizDelayTime = v7;
    if ( initial_delay > v7 )
      return;
    a3 = v7 - initial_delay;
  }
  m_flCurrentTimeHoriz = this->m_flCurrentTimeHoriz;
  m_flTotalTimeInAir = this->m_flTotalTimeInAir;
  if ( m_flCurrentTimeHoriz <= m_flTotalTimeInAir )
  {
    v10 = m_flCurrentTimeHoriz + a3;
    *(&vNewLocation + 1) = v4;
    if ( v10 <= m_flTotalTimeInAir )
    {
      this->m_flCurrentTimeHoriz = v10;
      m_flTotalTimeInAir = v10;
    }
    else
    {
      this->m_flCurrentTimeHoriz = m_flTotalTimeInAir;
    }
    pounce_speed = this->pounce_speed;
    *&v12 = ((this->m_vTargetHorizontalDirection.y * pounce_speed) * m_flTotalTimeInAir) + this->m_vStartPosition.y;
    v13 = ((this->m_vTargetHorizontalDirection.z * pounce_speed) * m_flTotalTimeInAir) + this->m_vStartPosition.z;
    *&v14 = ((pounce_speed * this->m_vTargetHorizontalDirection.x) * m_flTotalTimeInAir) + this->m_vStartPosition.x;
    *&vNewLocation = v13;
    v15 = __PAIR64__(v12, v14);
    CBaseEntity::SetAbsOrigin(me, &v15);
  }
}


// CDOTA_Modifier_Nian_Leap::UpdateVerticalMotion  (line 6736, @0x0000000002aebd10, libserver.so)  // inlines: Square<float>
// calls: CBaseEntity::GetAbsOrigin, CBaseEntity::SetAbsOrigin, CDOTA_Buff::GetCaster, CGridNav::DestroyTreesAroundPoint, FindClearSpaceForUnit, Gamerules_EmitSound, CDOTA_Buff::GetParent, GetGroundHeight, CDOTA_Buff::Destroy
// strings: "Nian.MatchBegin"
void __fastcall CDOTA_Modifier_Nian_Leap::UpdateVerticalMotion(
        CDOTA_Modifier_Nian_Leap *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  float m_flVertDelayTime; // xmm2_4
  float initial_delay; // xmm1_4
  float v8; // xmm0_4
  float m_flCurrentTimeVert; // xmm2_4
  float m_flTotalTimeInAir; // xmm1_4
  bool v11; // zf
  float v12; // xmm2_4
  char v13; // r13
  const Vector *AbsOrigin; // rax
  float v15; // xmm2_4
  float z; // xmm3_4
  float v17; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v19; // r12d
  CDOTA_BaseNPC *v20; // rax
  float v21; // xmm3_4
  CDOTA_BaseNPC *v22; // rax
  Vector *v23; // r12
  CDOTA_BaseNPC *v24; // rax
  const Vector *v25; // rax
  float v26; // xmm1_4
  float pounce_acceleration; // xmm3_4
  float m_flInitialVelocity; // xmm2_4
  CDOTA_BaseNPC *Parent; // rax
  float GroundHeight; // xmm0_4
  CDOTA_BaseNPC *v31; // rax
  unsigned int v32; // r14d
  CDOTA_BaseNPC *v33; // rax
  float v34; // xmm3_4
  Vector vNewPos; // [rsp+0h] [rbp-30h] BYREF
  Vector v36; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v37; // 0:xmm0_8.8,8:xmm1_4.4

  m_flVertDelayTime = this->m_flVertDelayTime;
  initial_delay = this->initial_delay;
  if ( initial_delay > m_flVertDelayTime )
  {
    v8 = a3 + m_flVertDelayTime;
    this->m_flVertDelayTime = v8;
    if ( initial_delay > v8 )
      return;
    a3 = v8 - initial_delay;
  }
  m_flCurrentTimeVert = this->m_flCurrentTimeVert;
  m_flTotalTimeInAir = this->m_flTotalTimeInAir;
  if ( m_flCurrentTimeVert < m_flTotalTimeInAir )
  {
    v11 = !this->m_bInterrupted;
    v12 = m_flCurrentTimeVert + a3;
    this->m_flCurrentTimeVert = v12;
    if ( v11 )
    {
      v13 = 0;
      if ( v12 >= m_flTotalTimeInAir )
      {
        this->m_flCurrentTimeVert = m_flTotalTimeInAir;
        v13 = 1;
      }
      AbsOrigin = CBaseEntity::GetAbsOrigin(me);
      v15 = this->m_flCurrentTimeVert;
      z = this->m_vStartPosition.z;
      v17 = -0.5 * this->pounce_acceleration;
      *&vNewPos.x = *&AbsOrigin->x;
      vNewPos.z = ((((v17 * (v15 * v15)) + (this->m_flInitialVelocity * v15)) / 9.0) + z)
                + ((this->m_vTargetPosition.z - z) * (v15 / this->m_flTotalTimeInAir));
      CBaseEntity::SetAbsOrigin(me, &vNewPos);
      if ( v13 != 0 )
      {
        Caster = CDOTA_Buff::GetCaster(this);
        v19 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
        v20 = CDOTA_Buff::GetCaster(this);
        v36 = *CBaseEntity::GetAbsOrigin(v20);
        CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v19, v36, 300.0, v21);
        v22 = CDOTA_Buff::GetCaster(this);
        v23 = CBaseEntity::GetAbsOrigin(v22);
        v24 = CDOTA_Buff::GetCaster(this);
        FindClearSpaceForUnit(v24, *v23, 0);
        Gamerules_EmitSound("Nian.MatchBegin", 0, 0);
      }
    }
    else
    {
      v25 = CBaseEntity::GetAbsOrigin(me);
      v26 = this->m_flCurrentTimeVert;
      pounce_acceleration = this->pounce_acceleration;
      m_flInitialVelocity = this->m_flInitialVelocity;
      *&vNewPos.x = *&v25->x;
      vNewPos.z = ((((-0.5 * pounce_acceleration) * (v26 * v26)) + this->m_vStartPosition.z)
                 + (v26 * m_flInitialVelocity))
                / 9.0;
      if ( (m_flInitialVelocity - (v26 * pounce_acceleration)) < 0.0 )
      {
        Parent = CDOTA_Buff::GetParent(this);
        GroundHeight = GetGroundHeight(&vNewPos, Parent);
        if ( GroundHeight >= vNewPos.z )
        {
          vNewPos.z = GroundHeight;
          v31 = CDOTA_Buff::GetCaster(this);
          v32 = (*(v31->_vptr_IHandleEntity + 414))(v31);
          v33 = CDOTA_Buff::GetCaster(this);
          v37 = *CBaseEntity::GetAbsOrigin(v33);
          CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v32, v37, 300.0, v34);
          CDOTA_Buff::Destroy(this, 0, 0, 0);
        }
      }
      CBaseEntity::SetAbsOrigin(me, &vNewPos);
    }
  }
}


// CDOTA_Modifier_Nian_Leap::OnHorizontalMotionInterrupted  (line 6802, @0x0000000002ae8430, libserver.so)
void __fastcall CDOTA_Modifier_Nian_Leap::OnHorizontalMotionInterrupted(CDOTA_Modifier_Nian_Leap *const this)
{
  this->m_bInterrupted = 1;
}


// CDOTA_Modifier_Nian_Leap::OnVerticalMotionInterrupted  (line 6811, @0x0000000002aea1d0, libserver.so)
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Nian_Leap::OnVerticalMotionInterrupted(CDOTA_Modifier_Nian_Leap *const this)
{
  CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Nian_Leap::OnDestroy  (line 6820, @0x0000000002aeb240, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::RemoveHorizontalMotionController, CDOTALocomotor::RemoveVerticalMotionController
void __fastcall CDOTA_Modifier_Nian_Leap::OnDestroy(CDOTA_Modifier_Nian_Leap *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v3; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTALocomotor *v5; // rax

  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveHorizontalMotionController(v3, &this->CHorizontalMotionController);
  v4 = CDOTA_Buff::GetParent(this);
  v5 = (*(v4->_vptr_IHandleEntity + 376))(v4);
  CDOTALocomotor::RemoveVerticalMotionController(v5, &this->CVerticalMotionController);
}


// CDOTA_Modifier_Nian_Leap::CheckState  (line 6830, @0x0000000002ae8450, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Nian_Leap::CheckState(
        CDOTA_Modifier_Nian_Leap *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 2uLL;
  buffState->m_nDisabledStateMask &= ~2uLL;
}


// CDOTA_Item_Recipe_Vermillion_Robe::~CDOTA_Item_Recipe_Vermillion_Robe  (line 6841, @0x0000000002b1ddb0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Vermillion_Robe::~CDOTA_Item_Recipe_Vermillion_Robe(
        CDOTA_Item_Recipe_Vermillion_Robe *const this)
{
  this->_vptr_IHandleEntity = &off_44774B0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Vermillion_Robe::~CDOTA_Item_Recipe_Vermillion_Robe  (line 6841, @0x0000000002b1ddd0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Vermillion_Robe
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Vermillion_Robe::~CDOTA_Item_Recipe_Vermillion_Robe(
        CDOTA_Item_Recipe_Vermillion_Robe *const this)
{
  this->_vptr_IHandleEntity = &off_44774B0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Vermillion_Robe::Schema_DynamicBinding  (line 6843, @0x0000000002b16e40, libserver.so)
// globals: CDOTA_Item_Recipe_Vermillion_Robe::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Vermillion_Robe::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Vermillion_Robe *const this)
{
  return CDOTA_Item_Recipe_Vermillion_Robe::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Vermillion_Robe::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 6843, @0x0000000002b16e50, libserver.so)
// globals: CDOTA_Item_Recipe_Vermillion_Robe::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Vermillion_Robe::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Vermillion_Robe::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Vermillion_Robe::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Vermillion_Robe::CEntityInstanceEntityClass::DestructInstance  (line 6843, @0x0000000002b16e60, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Vermillion_Robe>
void __fastcall CDOTA_Item_Recipe_Vermillion_Robe::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Vermillion_Robe::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Vermillion_Robe::CEntityInstanceEntityClass::FreeInstance  (line 6843, @0x0000000002b16e80, libserver.so)
void __fastcall CDOTA_Item_Recipe_Vermillion_Robe::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Vermillion_Robe::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Vermillion_Robe::CEntityInstanceEntityClass::CanAllocate  (line 6843, @0x0000000002b16ea0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Vermillion_Robe::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Vermillion_Robe::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Vermillion_Robe::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 6843, @0x0000000002b16eb0, libserver.so)
// globals: CDOTA_Item_Recipe_Vermillion_Robe::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Vermillion_Robe::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Vermillion_Robe::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Vermillion_Robe::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Vermillion_Robe::CEntityInstanceEntityClass::AllocateInstance  (line 6843, @0x0000000002b195f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Vermillion_Robe::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Vermillion_Robe::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Vermillion_Robe::CEntityInstanceEntityClass::ConstructInstance  (line 6843, @0x0000000002b1d800, libserver.so)  // inlines: CDOTA_Item_Recipe_Vermillion_Robe, Construct<CDOTA_Item_Recipe_Vermillion_Robe>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Vermillion_Robe::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Vermillion_Robe::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_44774B0;
  }
  return p;
}


// CDOTA_Item_Recipe_Vermillion_Robe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 6843, @0x0000000002b219b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Vermillion_Robe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Vermillion_Robe::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Vermillion_Robe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 6843, @0x0000000002b219d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Vermillion_Robe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Vermillion_Robe::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Vermillion_Robe::GetEntityClassInternal  (line 6843, @0x0000000002b2cbd0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "item_recipe_vermillion_robe", "CDOTA_Item_Recipe_Vermillion_Robe"
// globals: `guard variable for'CDOTA_Item_Recipe_Vermillion_Robe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Vermillion_RobeClass, CDOTA_Item_Recipe_Vermillion_Robe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Vermillion_RobeClass, __dso_handle, CDOTA_Item_Recipe_Vermillion_Robe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Vermillion_Robe::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Vermillion_RobeClassInfo, CDOTA_Item_Recipe_Vermillion_Robe::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Vermillion_RobeClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Vermillion_Robe::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Vermillion_Robe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Vermillion_RobeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Vermillion_Robe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Vermillion_RobeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Vermillion_Robe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Vermillion_RobeClass);
    CDOTA_Item_Recipe_Vermillion_Robe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Vermillion_RobeClass._vptr_CEntityClass = off_4477430;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Vermillion_Robe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Vermillion_RobeClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Vermillion_Robe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Vermillion_Robe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Vermillion_RobeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_Vermillion_RobeClass != 0 )
    return &CDOTA_Item_Recipe_Vermillion_Robe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Vermillion_RobeClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Vermillion_Robe::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Vermillion_RobeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Vermillion_Robe::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Vermillion_RobeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Vermillion_Robe::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Vermillion_RobeClassInfo,
      "CDOTA_Item_Recipe_Vermillion_Robe",
      "item_recipe_vermillion_robe",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Vermillion_Robe::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Vermillion_RobeClassInfo);
  }
  CDOTA_Item_Recipe_Vermillion_Robe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Vermillion_RobeClass.m_pClassInfo = &CDOTA_Item_Recipe_Vermillion_Robe::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Vermillion_RobeClassInfo;
  CDOTA_Item_Recipe_Vermillion_Robe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Vermillion_RobeClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Vermillion_Robe::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Vermillion_RobeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_Vermillion_RobeClass = &CDOTA_Item_Recipe_Vermillion_Robe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Vermillion_RobeClass;
  CDOTA_Item_Recipe_Vermillion_Robe::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Vermillion_RobeClassInfo.m_pClass = &CDOTA_Item_Recipe_Vermillion_Robe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Vermillion_RobeClass;
  CDOTA_Item_Recipe_Vermillion_Robe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Vermillion_RobeClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_Vermillion_RobeClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Vermillion_Robe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Vermillion_RobeClass;
}


// CDOTA_Item_Vermillion_Robe::~CDOTA_Item_Vermillion_Robe  (line 6855, @0x0000000002b1de00, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Vermillion_Robe::~CDOTA_Item_Vermillion_Robe(CDOTA_Item_Vermillion_Robe *const this)
{
  this->_vptr_IHandleEntity = &off_44780B0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Vermillion_Robe::~CDOTA_Item_Vermillion_Robe  (line 6855, @0x0000000002b1de20, libserver.so)  // inlines: ~CDOTA_Item_Vermillion_Robe
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Vermillion_Robe::~CDOTA_Item_Vermillion_Robe(CDOTA_Item_Vermillion_Robe *const this)
{
  this->_vptr_IHandleEntity = &off_44780B0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Vermillion_Robe::Schema_DynamicBinding  (line 6857, @0x0000000002b16ec0, libserver.so)
// globals: CDOTA_Item_Vermillion_Robe::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Vermillion_Robe::Schema_DynamicBinding(
        const CDOTA_Item_Vermillion_Robe *const this)
{
  return CDOTA_Item_Vermillion_Robe::s_pSchemaBinding;
}


// CDOTA_Item_Vermillion_Robe::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 6857, @0x0000000002b16ed0, libserver.so)
// globals: CDOTA_Item_Vermillion_Robe::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Vermillion_Robe::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Vermillion_Robe::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Vermillion_Robe::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Vermillion_Robe::CEntityInstanceEntityClass::DestructInstance  (line 6857, @0x0000000002b16ee0, libserver.so)  // inlines: Destruct<CDOTA_Item_Vermillion_Robe>
void __fastcall CDOTA_Item_Vermillion_Robe::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Vermillion_Robe::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Vermillion_Robe::CEntityInstanceEntityClass::FreeInstance  (line 6857, @0x0000000002b16f00, libserver.so)
void __fastcall CDOTA_Item_Vermillion_Robe::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Vermillion_Robe::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Vermillion_Robe::CEntityInstanceEntityClass::CanAllocate  (line 6857, @0x0000000002b16f20, libserver.so)
bool __fastcall CDOTA_Item_Vermillion_Robe::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Vermillion_Robe::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Vermillion_Robe::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 6857, @0x0000000002b16f30, libserver.so)
// globals: CDOTA_Item_Vermillion_Robe::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Vermillion_Robe::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Vermillion_Robe::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Vermillion_Robe::s_pSchemaBinding;
}


// CDOTA_Item_Vermillion_Robe::CEntityInstanceEntityClass::AllocateInstance  (line 6857, @0x0000000002b19630, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Vermillion_Robe::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Vermillion_Robe::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Vermillion_Robe::CEntityInstanceEntityClass::ConstructInstance  (line 6857, @0x0000000002b1d830, libserver.so)  // inlines: CDOTA_Item_Vermillion_Robe, Construct<CDOTA_Item_Vermillion_Robe>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Vermillion_Robe::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Vermillion_Robe::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_44780B0;
  }
  return p;
}


// CDOTA_Item_Vermillion_Robe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 6857, @0x0000000002b21a00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Vermillion_Robe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Vermillion_Robe::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Vermillion_Robe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 6857, @0x0000000002b21a20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Vermillion_Robe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Vermillion_Robe::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Vermillion_Robe::GetEntityClassInternal  (line 6857, @0x0000000002b2cd20, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "CDOTA_Item_Vermillion_Robe"
// globals: `guard variable for'CDOTA_Item_Vermillion_Robe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Vermillion_RobeClass, CDOTA_Item_Vermillion_Robe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Vermillion_RobeClass, __dso_handle, CDOTA_Item_Vermillion_Robe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Vermillion_Robe::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Vermillion_RobeClassInfo, CDOTA_Item_Vermillion_Robe::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Vermillion_RobeClassInfo
CEntityClass *__cdecl CDOTA_Item_Vermillion_Robe::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Vermillion_Robe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Vermillion_RobeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Vermillion_Robe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Vermillion_RobeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Vermillion_Robe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Vermillion_RobeClass);
    CDOTA_Item_Vermillion_Robe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Vermillion_RobeClass._vptr_CEntityClass = off_4478030;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Vermillion_Robe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Vermillion_RobeClass);
    __cxa_atexit(
      CDOTA_Item_Vermillion_Robe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Vermillion_Robe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Vermillion_RobeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Vermillion_RobeClass != 0 )
    return &CDOTA_Item_Vermillion_Robe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Vermillion_RobeClass;
  if ( `guard variable for'CDOTA_Item_Vermillion_Robe::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Vermillion_RobeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Vermillion_Robe::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Vermillion_RobeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Vermillion_Robe::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Vermillion_RobeClassInfo,
      "CDOTA_Item_Vermillion_Robe",
      "item_vermillion_robe",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Vermillion_Robe::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Vermillion_RobeClassInfo);
  }
  CDOTA_Item_Vermillion_Robe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Vermillion_RobeClass.m_pClassInfo = &CDOTA_Item_Vermillion_Robe::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Vermillion_RobeClassInfo;
  CDOTA_Item_Vermillion_Robe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Vermillion_RobeClass.m_pBaseClassInfo = CDOTA_Item_Vermillion_Robe::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Vermillion_RobeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Vermillion_RobeClass = &CDOTA_Item_Vermillion_Robe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Vermillion_RobeClass;
  CDOTA_Item_Vermillion_Robe::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Vermillion_RobeClassInfo.m_pClass = &CDOTA_Item_Vermillion_Robe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Vermillion_RobeClass;
  CDOTA_Item_Vermillion_Robe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Vermillion_RobeClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Vermillion_RobeClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Vermillion_Robe::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Vermillion_RobeClass;
}


// CDOTA_Item_Vermillion_Robe::GetIntrinsicModifierName  (line 6863, @0x0000000002b16f40, libserver.so)
// strings: "modifier_item_vermillion_robe"
const char *__fastcall CDOTA_Item_Vermillion_Robe::GetIntrinsicModifierName(CDOTA_Item_Vermillion_Robe *const this)
{
  return "modifier_item_vermillion_robe";
}


// CDOTA_Item_Vermillion_Robe::OnSpellStart  (line 6870, @0x0000000002aeb400, libserver.so)  // inlines: GetParent
// calls: CDOTABaseAbility::GetCaster, CBaseEntity::GetHealth, ApplyDamage, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, CDOTABaseAbility::CreateAbilityParticleEffect, CGameSceneNode::GetOwnerEntity, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, KeyValues::~KeyValues (14 total)
// strings: "modifier_item_vermillion_robe_flames", "particles/units/heroes/hero_clinkz/clinkz_windwalk.vpcf", "attach_hitloc"
void __fastcall CDOTA_Item_Vermillion_Robe::OnSpellStart(CDOTA_Item_Vermillion_Robe *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  int Health; // r13d
  CDOTA_BaseNPC *v4; // r12
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // r13
  CDOTA_BaseNPC *v7; // rax
  int AbilityParticleEffect; // r13d
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rdi
  const Vector *AbsOrigin; // r14
  CGameSceneNode *v12; // rdi
  const CBaseAnimating *v13; // r15
  CDOTA_ParticleManager *ParticleManager; // rax
  CGameSceneNode *v15; // rdi
  CBaseEntity *v16; // rdi
  const Vector *v17; // r14
  CGameSceneNode *v18; // rdi
  const CBaseAnimating *v19; // rbx
  CDOTA_ParticleManager *v20; // rax
  CDOTA_ParticleManager *v21; // rax
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v23; // [rsp+28h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  if ( CDOTABaseAbility::GetCaster(this) != 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    Health = CBaseEntity::GetHealth(Caster);
    v4 = CDOTABaseAbility::GetCaster(this);
    v5 = CDOTABaseAbility::GetCaster(this);
    ApplyDamage(v5, v4, this, Health * 0.5, 4, 160);
    KeyValues::KeyValues(&kv, "modifier_item_vermillion_robe_flames");
    v6 = CDOTABaseAbility::GetCaster(this);
    v7 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v7, v6, this, "modifier_item_vermillion_robe_flames", &kv, 0);
    AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                              this,
                              "particles/units/heroes/hero_clinkz/clinkz_windwalk.vpcf",
                              2,
                              0,
                              0);
    m_pParent = this->m_pGameSceneNode->m_pParent;
    if ( m_pParent != 0 )
      OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
    else
      OwnerEntity = 0;
    AbsOrigin = CBaseEntity::GetAbsOrigin(OwnerEntity);
    v12 = this->m_pGameSceneNode->m_pParent;
    if ( v12 != 0 )
      v13 = CGameSceneNode::GetOwnerEntity(v12);
    else
      v13 = 0;
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, AbilityParticleEffect, 0, v13, 1, 0, *AbsOrigin, 1);
    v15 = this->m_pGameSceneNode->m_pParent;
    if ( v15 != 0 )
      v16 = CGameSceneNode::GetOwnerEntity(v15);
    else
      v16 = 0;
    v17 = CBaseEntity::GetAbsOrigin(v16);
    v18 = this->m_pGameSceneNode->m_pParent;
    if ( v18 != 0 )
      v19 = CGameSceneNode::GetOwnerEntity(v18);
    else
      v19 = 0;
    v20 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v20, AbilityParticleEffect, 1, v19, 5, "attach_hitloc", *v17, 1);
    v21 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v21, AbilityParticleEffect);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_Item_Vermillion_Robe_Flames::~CDOTA_Modifier_Item_Vermillion_Robe_Flames  (line 6891, @0x0000000002b19f00, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Vermillion_Robe_Flames::~CDOTA_Modifier_Item_Vermillion_Robe_Flames(
        CDOTA_Modifier_Item_Vermillion_Robe_Flames *const this)
{
  this->_vptr_CDOTA_Buff = &off_4478C70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Vermillion_Robe_Flames::~CDOTA_Modifier_Item_Vermillion_Robe_Flames  (line 6891, @0x0000000002b19f20, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Vermillion_Robe_Flames
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Vermillion_Robe_Flames::~CDOTA_Modifier_Item_Vermillion_Robe_Flames(
        CDOTA_Modifier_Item_Vermillion_Robe_Flames *const this)
{
  this->_vptr_CDOTA_Buff = &off_4478C70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Vermillion_Robe_Flames::IsPurgable  (line 6896, @0x0000000002b16f50, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Vermillion_Robe_Flames::IsPurgable(
        CDOTA_Modifier_Item_Vermillion_Robe_Flames *const this)
{
  return 0;
}


// CDOTA_Modifier_Item_Vermillion_Robe_Flames::IsHidden  (line 6897, @0x0000000002b16f60, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Vermillion_Robe_Flames::IsHidden(
        CDOTA_Modifier_Item_Vermillion_Robe_Flames *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Vermillion_Robe_Flames::OnCreated  (line 6913, @0x0000000002b0b460, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetCaster, DOTA_EmitSound
// strings: "damage_per_health_missing", "Item.VermillionRobe.Cast"
void __fastcall CDOTA_Modifier_Item_Vermillion_Robe_Flames::OnCreated(
        CDOTA_Modifier_Item_Vermillion_Robe_Flames *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  float v6; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_7:
    this->delay = 0.0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
LABEL_8:
    this->damage_per_health_missing = 0.0;
    goto LABEL_5;
  }
  this->radius = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_7;
LABEL_3:
  this->delay = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "delay", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->damage_per_health_missing = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                      v5,
                                      "damage_per_health_missing",
                                      -1,
                                      0);
LABEL_5:
  CDOTA_Buff::StartIntervalThink(this, this->delay, v6);
  Caster = CDOTA_Buff::GetCaster(this);
  DOTA_EmitSound(10, "Item.VermillionRobe.Cast", Caster);
}


// CDOTA_Modifier_Item_Vermillion_Robe_Flames::OnIntervalThink  (line 6928, @0x0000000002afee10, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetHealthDeficit, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetCaster, CBaseEntity::GetHealth, CDOTA_Buff::CreateBuffParticleEffect, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_ParticleManager::SetParticleControl, FindUnitsInRadius, ApplyDamage, CDOTA_Buff::GetAbility (16 total)
// strings: "particles/units/heroes/hero_clinkz/clinkz_windwalk.vpcf", "attach_hitloc", "vermillion_robe_flames", "Item.VermillionRobe.Damage"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Item_Vermillion_Robe_Flames::OnIntervalThink(
        CDOTA_Modifier_Item_Vermillion_Robe_Flames *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  const CBaseEntity *v3; // rbx
  int v4; // r12d
  int BuffParticleEffect; // ebx
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v8; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v10; // rax
  const Vector *v11; // r12
  CDOTA_BaseNPC *v12; // r13
  CDOTA_ParticleManager *v13; // rax
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  int v16; // ebx
  CDOTA_BaseNPC *v17; // rax
  const Vector *v18; // r12
  CDOTA_ParticleManager *v19; // rax
  CDOTA_ParticleManager *v20; // rax
  CDOTA_ParticleManager *v21; // rax
  __m128i v22; // xmm3
  CDOTA_BaseNPC *v23; // r13
  CDOTA_BaseNPC *v24; // rax
  const Vector *v25; // rbx
  CDOTA_BaseNPC *v26; // rax
  __int64 v27; // r12
  int i; // ebx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_BaseNPC *v30; // rax
  CDOTABaseAbility *Ability; // r15
  CHandle<CBaseEntity> *v32; // rdx
  uint32 m_Index; // eax
  __int16 v34; // cx
  CEntityIdentity *v35; // rdx
  CEntityIdentity *v36; // rdx
  CDOTA_BaseNPC *v37; // rax
  float flDamage; // [rsp+2Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-50h] BYREF

  if ( CDOTA_Buff::GetCaster(this) != 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    v3 = Caster;
    if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
    {
      v4 = (*(Caster->_vptr_IHandleEntity + 156))(Caster);
      flDamage = (v4 - CBaseEntity::GetHealth(v3)) * this->damage_per_health_missing;
      BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                             this,
                             "particles/units/heroes/hero_clinkz/clinkz_windwalk.vpcf",
                             2,
                             0,
                             0);
      Parent = CDOTA_Buff::GetParent(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
      v8 = CDOTA_Buff::GetParent(this);
      ParticleManager = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, BuffParticleEffect, 0, v8, 1, 0, *AbsOrigin, 1);
      v10 = CDOTA_Buff::GetParent(this);
      v11 = CBaseEntity::GetAbsOrigin(v10);
      v12 = CDOTA_Buff::GetParent(this);
      v13 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v13, BuffParticleEffect, 1, v12, 5, "attach_hitloc", *v11, 1);
      v14 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v14, BuffParticleEffect);
      v15 = CDOTA_Buff::GetCaster(this);
      v16 = CDOTA_Buff::CreateBuffParticleEffect(this, "vermillion_robe_flames", 2, v15, 0);
      v17 = CDOTA_Buff::GetCaster(this);
      v18 = CBaseEntity::GetAbsOrigin(v17);
      v19 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v19, v16, 0, *&v18->x, v18->z);
      *&entities.m_Size = this->radius;
      *(&entities.m_Size + 1) = entities.m_Size;
      LODWORD(entities.m_Memory.m_pMemory) = entities.m_Size;
      v20 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v20, v16, 1, *&entities.m_Size, *&entities.m_Size);
      v21 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v21, v16);
      *v22.m128i_i32 = this->radius;
      entities.m_Size = 0;
      entities.m_Memory.m_pMemory = 0;
      entities.m_Memory.m_nAllocationCount = 0;
      entities.m_Memory.m_nGrowSize = 0;
      LODWORD(v18) = _mm_cvtsi128_si32(v22);
      v23 = CDOTA_Buff::GetParent(this);
      v24 = CDOTA_Buff::GetParent(this);
      v25 = CBaseEntity::GetAbsOrigin(v24);
      v26 = CDOTA_Buff::GetParent(this);
      FindUnitsInRadius(v26->m_iTeamNum.m_Value, v25, v23, *&v18, &entities, 2, 19, 0, 0, 0);
      v27 = 0;
      for ( i = 0; entities.m_Size > i; ++v27 )
      {
        Ability = CDOTA_Buff::GetAbility(this);
        v32 = &entities.m_Memory.m_pMemory[v27];
        m_Index = entities.m_Memory.m_pMemory[v27].m_Index;
        if ( m_Index + 2 <= 1
          || (v34 = v32->m_Index,
              (v35 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v32->m_Index) >> 9) & 0x3F]) == 0)
          || (v36 = &v35[v34 & 0x1FF]) == 0
          || m_Index != v36->m_EHandle.m_Index
          || (m_pInstance = v36->m_pInstance, v36->m_pInstance == 0)
          || !m_pInstance->m_bIsDOTANPC )
        {
          m_pInstance = 0;
        }
        v30 = CDOTA_Buff::GetParent(this);
        ApplyDamage(v30, m_pInstance, Ability, flDamage, 2, 0);
        ++i;
      }
      v37 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::UnitEmitSound(v37, "Item.VermillionRobe.Damage", 0.0, 0, 0);
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
    }
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Item_Vermillion_Robe::~CDOTA_Modifier_Item_Vermillion_Robe  (line 6967, @0x0000000002b19eb0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Vermillion_Robe::~CDOTA_Modifier_Item_Vermillion_Robe(
        CDOTA_Modifier_Item_Vermillion_Robe *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Vermillion_Robe::~CDOTA_Modifier_Item_Vermillion_Robe  (line 6967, @0x0000000002b19ed0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Vermillion_Robe
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Vermillion_Robe::~CDOTA_Modifier_Item_Vermillion_Robe(
        CDOTA_Modifier_Item_Vermillion_Robe *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Vermillion_Robe::GetStatusEffectName  (line 6980, @0x0000000002b16f70, libserver.so)
// strings: "particles/status_fx/status_effect_burn.vpcf"
const char *__fastcall CDOTA_Modifier_Item_Vermillion_Robe::GetStatusEffectName(
        CDOTA_Modifier_Item_Vermillion_Robe *const this)
{
  return "particles/status_fx/status_effect_burn.vpcf";
}


// CDOTA_Modifier_Item_Vermillion_Robe::DeclareFunctions  (line 6994, @0x0000000002ae8460, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Vermillion_Robe::GetModifierPercentageManaRegen(CModifierParams const&), CDOTA_Modifier_Item_Vermillion_Robe::GetModifierMoveSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_Item_Vermillion_Robe::GetModifierBonusStats_Str(CModifierParams const&), CDOTA_Modifier_Item_Vermillion_Robe::GetModifierBonusStats_Agi(CModifierParams const&), CDOTA_Modifier_Item_Vermillion_Robe::GetModifierBonusStats_Int(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Vermillion_Robe::DeclareFunctions(CDOTA_Modifier_Item_Vermillion_Robe *const this)
{
  this->m_Functions[54].__pfn = CDOTA_Modifier_Item_Vermillion_Robe::GetModifierPercentageManaRegen;
  this->m_Functions[54].__delta = 0;
  this->m_Functions[11].__delta = 0;
  this->m_Functions[11].__pfn = CDOTA_Modifier_Item_Vermillion_Robe::GetModifierMoveSpeedBonus_Constant;
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_Vermillion_Robe::GetModifierBonusStats_Str;
  this->m_Functions[65].__pfn = CDOTA_Modifier_Item_Vermillion_Robe::GetModifierBonusStats_Agi;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_Vermillion_Robe::GetModifierBonusStats_Int;
  this->m_Functions[66].__delta = 0;
}


// CDOTA_Modifier_Item_Vermillion_Robe::GetModifierPercentageManaRegen  (line 7005, @0x0000000002aef4a0, libserver.so)  // inlines: GetHealthPercent
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Vermillion_Robe::GetModifierPercentageManaRegen(
        CDOTA_Modifier_Item_Vermillion_Robe *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // r12
  __int64 v4; // r13
  int v5; // eax
  __m128i v6; // xmm0
  __int64 v7; // rcx
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetParent(this) == 0 )
    return 1uLL;
  Parent = CDOTA_Buff::GetParent(this);
  v4 = 100LL * CBaseEntity::GetHealth(Parent);
  v5 = (*(Parent->_vptr_IHandleEntity + 156))(Parent);
  v7 = 1;
  if ( v5 > 0 )
    v7 = v5;
  result.m_szVal = 0;
  *v6.m128i_i32 = (this->mana_regen_pct * (100 - v4 / v7));
  *&result.m_eType = (_mm_cvtsi128_si32(v6) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Vermillion_Robe::GetModifierMoveSpeedBonus_Constant  (line 7015, @0x0000000002aef540, libserver.so)  // inlines: GetHealthPercent
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Vermillion_Robe::GetModifierMoveSpeedBonus_Constant(
        CDOTA_Modifier_Item_Vermillion_Robe *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // r12
  __int64 v4; // r13
  int v5; // eax
  __m128i v6; // xmm0
  __int64 v7; // rcx
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetParent(this) == 0 )
    return 1uLL;
  Parent = CDOTA_Buff::GetParent(this);
  v4 = 100LL * CBaseEntity::GetHealth(Parent);
  v5 = (*(Parent->_vptr_IHandleEntity + 156))(Parent);
  v7 = 1;
  if ( v5 > 0 )
    v7 = v5;
  result.m_szVal = 0;
  *v6.m128i_i32 = (this->move_speed_bonus * (100 - v4 / v7));
  *&result.m_eType = (_mm_cvtsi128_si32(v6) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Vermillion_Robe::GetModifierBonusStats_Str  (line 7024, @0x0000000002ae84f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Vermillion_Robe::GetModifierBonusStats_Str(
        CDOTA_Modifier_Item_Vermillion_Robe *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Vermillion_Robe::GetModifierBonusStats_Agi  (line 7029, @0x0000000002ae8510, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Vermillion_Robe::GetModifierBonusStats_Agi(
        CDOTA_Modifier_Item_Vermillion_Robe *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Vermillion_Robe::GetModifierBonusStats_Int  (line 7034, @0x0000000002ae8530, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Vermillion_Robe::GetModifierBonusStats_Int(
        CDOTA_Modifier_Item_Vermillion_Robe *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Vermillion_Robe::OnCreated  (line 7041, @0x0000000002b0a6c0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_stats"
void __fastcall CDOTA_Modifier_Item_Vermillion_Robe::OnCreated(
        CDOTA_Modifier_Item_Vermillion_Robe *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->mana_regen_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "mana_regen_pct", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->bonus_stats = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->mana_regen_pct = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->bonus_stats = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_stats", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->move_speed_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "move_speed_bonus", -1, 0);
    return;
  }
LABEL_7:
  this->move_speed_bonus = 0;
}


