// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:107
class CDOTA_Ability_MonkeyKing_TreeDance : public CDOTABaseAbility {
public:

private:

	int perched_jump_distance;  // +0x390
	int ground_jump_distance;  // +0x394
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
	CDOTA_Ability_MonkeyKing_TreeDance(CDOTA_Ability_MonkeyKing_TreeDance &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Ability_MonkeyKing_TreeDance();
	virtual ~CDOTA_Ability_MonkeyKing_TreeDance();
	virtual const char * GetIntrinsicModifierName();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual bool OnAbilityPhaseStart();
	virtual void OnAbilityPhaseInterrupted();
	virtual void OnSpellStart();
	virtual void OnUpgrade();
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual bool ProcsMagicStick();
	virtual int CastFilterResult(CDOTA_Tree *);
	virtual const char * GetCustomCastError(CDOTA_Tree *);
	void LeapAt(CBaseEntity *, Vector, float);
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[266] OnSpellStart
	// vtable[268] OnUpgrade
	// vtable[226] GetCastRange
	// vtable[239] ProcsMagicStick
	// vtable[333] CastFilterResult
	// vtable[334] GetCustomCastError
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:164
class C_CDOTA_Ability_MonkeyKing_TreeDance_MapInstall {
	C_CDOTA_Ability_MonkeyKing_TreeDance_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:180
class CDOTA_Ability_MonkeyKing_Spring : public CDOTABaseAbility {
public:

private:

	float m_fStartChannelTime;  // +0x39c
	EHANDLE m_hThinker;  // +0x3a0
	int m_nFxIndex;  // +0x3a4
	int m_nRefCount;  // +0x3a8
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
	CDOTA_Ability_MonkeyKing_Spring(CDOTA_Ability_MonkeyKing_Spring &);
	CDOTA_Ability_MonkeyKing_Spring(CDOTA_Ability_MonkeyKing_Spring &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Ability_MonkeyKing_Spring();
	virtual const char * GetAssociatedPrimaryAbilities();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual void OnSpellStart();
	virtual void OnChannelFinish(bool);
	virtual void OnUpgrade();
	virtual bool OnLoadState(KeyValues *);
	void DestroyEffectThinker();
	virtual Activity GetCastAnimation();
	void OnRefCountModified();
	void IncrementRefCount();
	void DecrementRefCount();
	virtual ~CDOTA_Ability_MonkeyKing_Spring();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[303] GetAssociatedPrimaryAbilities
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[266] OnSpellStart
	// vtable[267] OnChannelFinish
	// vtable[268] OnUpgrade
	// vtable[249] OnLoadState
	// vtable[234] GetCastAnimation
	// sizeof = 944
};

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:229
class C_CDOTA_Ability_MonkeyKing_Spring_MapInstall {
	C_CDOTA_Ability_MonkeyKing_Spring_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:249
class CDOTA_Unit_Hero_MonkeyKing : public CDOTA_BaseNPC_Hero {
	class NetworkVar_m_nTreeDisguise {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nPerchedTree {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	bool mb_MonkeyHasArcana;  // +0x16ec

	bool m_bIsOnCloud;  // +0x1704

	float m_fTotalDistOnCloud;  // +0x1708
	float m_fTotalDistoffCloud;  // +0x170c
	float m_fBackOnCloudThresh;  // +0x1710
	typedef CDOTA_Unit_Hero_MonkeyKing ThisClass;

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
	CDOTA_Unit_Hero_MonkeyKing(CDOTA_Unit_Hero_MonkeyKing &);
	CDOTA_Unit_Hero_MonkeyKing(CDOTA_Unit_Hero_MonkeyKing &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Unit_Hero_MonkeyKing();
	void CloudRunThink();
	virtual void OnAssetModifiersUpdated();
	virtual void CalculateActivityModifiers(Activity);
	virtual bool CanSpeak(int);
	virtual void BuildAttachedParticleFilter(AttachedParticleFilter_t *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Spawn(const CEntityKeyValues *);
	virtual void AddCustomVisibility();
	virtual void ModifyOrAppendCriteria(CResponseCriteriaSet &);
	virtual bool HasFlyingVision();
	void SetPerchedTree(DotaTreeId_t);
	virtual ~CDOTA_Unit_Hero_MonkeyKing();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[482] OnAssetModifiersUpdated
	// vtable[442] CalculateActivityModifiers
	// vtable[459] CanSpeak
	// vtable[481] BuildAttachedParticleFilter
	// vtable[6] Precache
	// vtable[8] Spawn
	// vtable[462] AddCustomVisibility
	// vtable[159] ModifyOrAppendCriteria
	// vtable[445] HasFlyingVision
	// sizeof = 5912
};

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:741
class C_CDOTA_Unit_Hero_MonkeyKing_MapInstall {
	C_CDOTA_Unit_Hero_MonkeyKing_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:766
class CDOTA_Ability_MonkeyKing_Boundless_Strike : public CDOTABaseAbility {
public:

private:

	int strike_cast_range;  // +0x390
	int m_nFXIndex;  // +0x394
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
	CDOTA_Ability_MonkeyKing_Boundless_Strike(CDOTA_Ability_MonkeyKing_Boundless_Strike &);
	CDOTA_Ability_MonkeyKing_Boundless_Strike(CDOTA_Ability_MonkeyKing_Boundless_Strike &);
	CDOTA_Ability_MonkeyKing_Boundless_Strike();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual bool OnAbilityPhaseStart();
	virtual void OnAbilityPhaseInterrupted();
	virtual void OnSpellStart();
	void StrikeInLine();
	virtual const char * GetStolenActivityModifier();
	virtual Activity GetGestureBasedActivity();
	virtual ~CDOTA_Ability_MonkeyKing_Boundless_Strike();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[266] OnSpellStart
	// vtable[310] GetStolenActivityModifier
	// vtable[211] GetGestureBasedActivity
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:994
class CDOTA_Modifier_MonkeyKing_Strike_Stun : public CDOTA_Modifier_Stunned {
public:

	CDOTA_Modifier_MonkeyKing_Strike_Stun(CDOTA_Modifier_MonkeyKing_Strike_Stun &);
	CDOTA_Modifier_MonkeyKing_Strike_Stun(const CDOTA_Modifier_MonkeyKing_Strike_Stun &);
	CDOTA_Modifier_MonkeyKing_Strike_Stun();
	virtual ~CDOTA_Modifier_MonkeyKing_Strike_Stun();

	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:1006
class CDOTA_Modifier_MonkeyKing_Strike_Crit : public CDOTA_Buff {
public:

private:

	int strike_crit_mult;  // +0xba8
	CDOTA_Modifier_MonkeyKing_Strike_Crit();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual void CheckState(CDOTABuffState &);
	ModifierVariant_t GetModifierPreAttack_CriticalStrike(const CModifierParams &);
	virtual ~CDOTA_Modifier_MonkeyKing_Strike_Crit();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[5] CheckState
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:1326
class CDOTA_Modifier_MonkeyKing_Bounce : public CDOTA_Buff {
public:

private:

	float jump_damage_cooldown;  // +0xba8
	CDOTA_Modifier_MonkeyKing_Bounce();
	virtual void OnCreated(KeyValues *);
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual bool IsPermanent();
	virtual bool DestroyOnExpire();
	virtual void DeclareFunctions();
	ModifierVariant_t OnOrder(const CModifierParams &);
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	virtual ~CDOTA_Modifier_MonkeyKing_Bounce();

	// vtable[57] OnCreated
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[23] IsPermanent
	// vtable[61] DestroyOnExpire
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:1477
class CDOTA_Modifier_MonkeyKing_BounceLeap : public CDOTA_Buff, public CHorizontalMotionController, public CVerticalMotionController {
public:

private:

	float give_up_distance;  // +0xbc4
	float ground_jump_distance;  // +0xbc8
	float m_flZDelta;  // +0xbcc
	float perched_vision;  // +0xbd0
	EHANDLE m_hTarget;  // +0xbe0
	float m_flSpeed;  // +0xbf0
	bool m_bTargetingEntity;  // +0xbf4
	bool m_bGroundToTree;  // +0xbf5
	bool m_bTreeToGround;  // +0xbf6
	bool m_bTreeToTree;  // +0xbf7
	bool m_bIsSpringJump;  // +0xbf8

	float m_fSpringChanneledPercent;  // +0xbfc
	int m_nLeapSpeed;  // +0xc00
	int m_nFXIndex;  // +0xc04
	int m_nFXIndex2;  // +0xc08
	CDOTA_Modifier_MonkeyKing_BounceLeap();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsPurgable();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsHidden();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void UpdateVerticalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual void OnVerticalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual bool IsVerticalMotionValidToApply();
	virtual void DeclareFunctions();
	ModifierVariant_t GetVisualZDelta(const CModifierParams &);
	ModifierVariant_t GetFixedVision(const CModifierParams &);
	virtual void OnIntervalThink();
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	float CalculateZDelta();
	Vector GetTargetPosition();
	float GetIdealSpeed();
	bool IsSpringJumping();
	virtual ~CDOTA_Modifier_MonkeyKing_BounceLeap();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[14] IsPurgable
	// vtable[5] CheckState
	// vtable[11] IsHidden
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] UpdateVerticalMotion
	// vtable[91] OnHorizontalMotionInterrupted
	// vtable[92] OnVerticalMotionInterrupted
	// vtable[93] IsHorizontalMotionValidToApply
	// vtable[94] IsVerticalMotionValidToApply
	// vtable[65] DeclareFunctions
	// vtable[56] OnIntervalThink
	// vtable[10] AddCustomTransmiterData
	// sizeof = 3088
};

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:2034
class CDOTA_Ability_MonkeyKing_Spring_Early : public CDOTABaseAbility {
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
	CDOTA_Ability_MonkeyKing_Spring_Early(CDOTA_Ability_MonkeyKing_Spring_Early &);
	CDOTA_Ability_MonkeyKing_Spring_Early(CDOTA_Ability_MonkeyKing_Spring_Early &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CDOTA_Ability_MonkeyKing_Spring_Early();
	virtual void OnSpellStart();
	virtual bool ProcsMagicStick();
	virtual const char * GetAssociatedPrimaryAbilities();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual bool IsHiddenWhenStolen();
	virtual ~CDOTA_Ability_MonkeyKing_Spring_Early();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[239] ProcsMagicStick
	// vtable[303] GetAssociatedPrimaryAbilities
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[306] IsHiddenWhenStolen
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:2063
class CDOTA_Modifier_MonkeyKing_TreeDance_Activity : public CDOTA_Buff {
public:

private:

	float m_fAbilityRangePct;  // +0xba8
	float m_bIsSpring;  // +0xbac
	CDOTA_Modifier_MonkeyKing_TreeDance_Activity();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual ~CDOTA_Modifier_MonkeyKing_TreeDance_Activity();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:2122
class CDOTA_Modifier_MonkeyKing_RightClickJump_Activity : public CDOTA_Buff {
public:

	CDOTA_Modifier_MonkeyKing_RightClickJump_Activity();
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	virtual ~CDOTA_Modifier_MonkeyKing_RightClickJump_Activity();

	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:2338
class CDOTA_Modifier_MonkeyKing_SpringSlow : public CDOTA_Buff {
public:

private:

	int impact_movement_slow;  // +0xba8
	int m_nSlowPct;  // +0xbac
	CDOTA_Modifier_MonkeyKing_SpringSlow();
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_MonkeyKing_SpringSlow();

	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[10] AddCustomTransmiterData
	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:2417
class CDOTA_Modifier_MonkeyKing_Spring_Thinker : public CDOTA_Buff {
public:

	CDOTA_Modifier_MonkeyKing_Spring_Thinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_MonkeyKing_Spring_Thinker();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[11] IsHidden
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:2480
class CDOTA_Modifier_MonkeyKing_TreeJump_Hidden : public CDOTA_Buff {
public:

	CDOTA_Modifier_MonkeyKing_TreeJump_Hidden();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttackStart(const CModifierParams &);
	virtual ~CDOTA_Modifier_MonkeyKing_TreeJump_Hidden();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:2781
class CDOTA_Modifier_MonkeyKing_UnperchedStunned : public CDOTA_Modifier_Stunned {
public:

	CDOTA_Modifier_MonkeyKing_UnperchedStunned();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierTranslateActivityModifiers(const CModifierParams &);
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	virtual ~CDOTA_Modifier_MonkeyKing_UnperchedStunned();

	// vtable[65] DeclareFunctions
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:2823
class CDOTA_Modifier_MonkeyKing_ArcToGround : public CDOTA_Buff, public CHorizontalMotionController, public CVerticalMotionController {
public:

private:

	float leap_speed;  // +0xbc4
	float give_up_distance;  // +0xbc8
	float attackspeed_duration;  // +0xbcc
	float m_flOriginalZDelta;  // +0xbd0
	float m_flZDelta;  // +0xbd4
	float m_flSpeed;  // +0xbf0
	bool m_bDroppedFromTree;  // +0xbf4

	int m_nFXIndex;  // +0xbf8
	int m_nFXIndex2;  // +0xbfc
	float m_flOriginalHeight;  // +0xc00
	bool m_bRightClickHop;  // +0xc04
	CDOTA_Modifier_MonkeyKing_ArcToGround();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsPurgable();
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	virtual bool IsHidden();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void UpdateVerticalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual void OnVerticalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual bool IsVerticalMotionValidToApply();
	virtual bool IsMotionController();
	ModifierVariant_t GetVisualZDelta(const CModifierParams &);
	virtual void OnIntervalThink();
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	float CalculateZDelta();
	Vector GetTargetPosition();
	float GetIdealSpeed();
	virtual ~CDOTA_Modifier_MonkeyKing_ArcToGround();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[14] IsPurgable
	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// vtable[11] IsHidden
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] UpdateVerticalMotion
	// vtable[91] OnHorizontalMotionInterrupted
	// vtable[92] OnVerticalMotionInterrupted
	// vtable[93] IsHorizontalMotionValidToApply
	// vtable[94] IsVerticalMotionValidToApply
	// vtable[21] IsMotionController
	// vtable[56] OnIntervalThink
	// vtable[10] AddCustomTransmiterData
	// sizeof = 3080
};

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:3156
class CDOTA_Ability_MonkeyKing_Transform : public CDOTABaseAbility {
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
	CDOTA_Ability_MonkeyKing_Transform(CDOTA_Ability_MonkeyKing_Transform &);
	CDOTA_Ability_MonkeyKing_Transform(CDOTA_Ability_MonkeyKing_Transform &);
	CDOTA_Ability_MonkeyKing_Transform();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetAssociatedSecondaryAbilities();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void OnSpellStart();
	virtual bool OnLoadState(KeyValues *);
	virtual bool IsStealable();
	virtual bool ProcsMagicStick();
	virtual ~CDOTA_Ability_MonkeyKing_Transform();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[8] Spawn
	// vtable[266] OnSpellStart
	// vtable[249] OnLoadState
	// vtable[305] IsStealable
	// vtable[239] ProcsMagicStick
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:3221
class CDOTA_Modifier_MonkeyKing_Transform : public CDOTA_Buff {
public:

private:

	int movespeed;  // +0xbb0
	int m_nDisguisedSpeed;  // +0xbb4
	int reveal_radius;  // +0xbb8
	int m_nDisguiseEffectIndex;  // +0xbbc
	EHANDLE m_hCourierToClone;  // +0xbc0
	bool m_bIsFlyingCourier;  // +0xbc4
	bool m_bIsRune;  // +0xbc5
	bool m_bIsBanana;  // +0xbc6
	CDOTA_Modifier_MonkeyKing_Transform();
	virtual void OnCreated(KeyValues *);
	void CreateDisguiseParticle(const char *);
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	ModifierVariant_t OnAbilityExecuted(const CModifierParams &);
	ModifierVariant_t OnAttackStart(const CModifierParams &);
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	ModifierVariant_t OnModelChange(const CModifierParams &);
	ModifierVariant_t GetModifierModelChange(const CModifierParams &);
	ModifierVariant_t GetModifierPersistentInvisibility(const CModifierParams &);
	ModifierVariant_t GetMoveSpeedModifier(const CModifierParams &);
	ModifierVariant_t GetVisualZDelta(const CModifierParams &);
	virtual ModifierVariant_t GetDisableAutoAttack(const CModifierParams &);
	virtual bool CanParentBeAutoAttacked();
	virtual void OnIntervalThink();
	virtual void CheckState(CDOTABuffState &);
	virtual const char * GetTexture();
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	virtual ~CDOTA_Modifier_MonkeyKing_Transform();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[89] GetDisableAutoAttack
	// vtable[13] CanParentBeAutoAttacked
	// vtable[56] OnIntervalThink
	// vtable[5] CheckState
	// vtable[32] GetTexture
	// vtable[10] AddCustomTransmiterData
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:3647
class CDOTA_Ability_MonkeyKing_UnTransform : public CDOTABaseAbility {
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
	CDOTA_Ability_MonkeyKing_UnTransform(CDOTA_Ability_MonkeyKing_UnTransform &);
	CDOTA_Ability_MonkeyKing_UnTransform(CDOTA_Ability_MonkeyKing_UnTransform &);
	CDOTA_Ability_MonkeyKing_UnTransform();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetAssociatedPrimaryAbilities();
	virtual void Spawn(const CEntityKeyValues *);
	virtual bool IsStealable();
	virtual bool ProcsMagicStick();
	virtual ~CDOTA_Ability_MonkeyKing_UnTransform();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[303] GetAssociatedPrimaryAbilities
	// vtable[8] Spawn
	// vtable[305] IsStealable
	// vtable[239] ProcsMagicStick
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:3682
class CDOTA_Ability_MonkeyKing_FurArmy : public CDOTABaseAbility {
public:

private:

	EHANDLE m_hThinker;  // +0x390
	int m_nFXIndex;  // +0x394
	int num_first_soldiers;  // +0x398
	int num_second_soldiers;  // +0x39c
	bool m_bCreateMonkeys;  // +0x3a0

	float m_flNextCreationTime;  // +0x3a4
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
	CDOTA_Ability_MonkeyKing_FurArmy(CDOTA_Ability_MonkeyKing_FurArmy &);
	CDOTA_Ability_MonkeyKing_FurArmy(CDOTA_Ability_MonkeyKing_FurArmy &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Ability_MonkeyKing_FurArmy();
	virtual bool OnAbilityPhaseStart();
	virtual void OnAbilityPhaseInterrupted();
	virtual void OnUpgrade();
	virtual void Think();
	virtual void OnUnStolen();
	virtual void OnSpellStart();
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> > * GetSoldiers();
	virtual Activity GetCastAnimation();
	virtual ~CDOTA_Ability_MonkeyKing_FurArmy();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[268] OnUpgrade
	// vtable[117] Think
	// vtable[308] OnUnStolen
	// vtable[266] OnSpellStart
	// vtable[226] GetCastRange
	// vtable[234] GetCastAnimation
	// sizeof = 960
};

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:3734
class C_CDOTA_Ability_MonkeyKing_FurArmy_MapInstall {
	C_CDOTA_Ability_MonkeyKing_FurArmy_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:3957
class CDOTA_Modifier_MonkeyKing_FurArmyThinker : public CDOTA_Buff {
public:

private:

	float m_fDuration;  // +0xba8
	float m_fTimeThinkerCreated;  // +0xbac
	int first_radius;  // +0xbd4
	int num_first_soldiers;  // +0xbd8
	int second_radius;  // +0xbdc
	int num_second_soldiers;  // +0xbe0
	int m_nRingFXIndex;  // +0xbe4
	int m_nSoldiersCreated;  // +0xbe8
	CDOTA_Modifier_MonkeyKing_FurArmyThinker();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	void CreateSoldier(Vector, Vector, float, int);
	void CreateSoldierPositions(int, int);
	virtual ~CDOTA_Modifier_MonkeyKing_FurArmyThinker();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// sizeof = 3056
};

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:4245
class CDOTA_Modifier_MonkeyKing_FurArmy_Soldier : public CDOTA_Buff {
public:

private:

	int bonus_damage;  // +0xbc0
	int move_speed;  // +0xbc4
	EHANDLE m_hThinker;  // +0xbc8
	bool m_bIsInPosition;  // +0xbcc

	int m_nFXIndex;  // +0xbd0
	CDOTA_Modifier_MonkeyKing_FurArmy_Soldier();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual bool RemoveOnDeath();
	virtual int GetPriority();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void CheckState(CDOTABuffState &);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackRangeBonus(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeed_Absolute(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeed_Max(const CModifierParams &);
	ModifierVariant_t GetModifierTranslateActivityModifiers(const CModifierParams &);
	ModifierVariant_t GetFixedVision(const CModifierParams &);
	virtual ModifierVariant_t GetDisableAutoAttack(const CModifierParams &);
	ModifierVariant_t GetModifierTempestDouble(const CModifierParams &);
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual ~CDOTA_Modifier_MonkeyKing_FurArmy_Soldier();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[54] RemoveOnDeath
	// vtable[6] GetPriority
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[5] CheckState
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierPreAttack_BonusDamage
	// vtable[90] GetDisableAutoAttack
	// sizeof = 3032
};

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:4487
class CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition : public CDOTA_Buff {
public:

private:

	EHANDLE m_hAttackTarget;  // +0xbb4
	float attack_speed;  // +0xbb8
	int second_radius;  // +0xbbc
	int outer_attack_buffer;  // +0xbc0
	EHANDLE m_hThinker;  // +0xbc4
	bool m_bDisarmed;  // +0xbc8

	float m_flNextAttackTime;  // +0xbcc
	int m_nFXIndex;  // +0xbd0
	CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual bool RemoveOnDeath();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void CheckState(CDOTABuffState &);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t OnAttackLanded(const CModifierParams &);
	virtual ~CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[54] RemoveOnDeath
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[5] CheckState
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[89] OnAttackLanded
	// sizeof = 3032
};

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:4706
class CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInactive : public CDOTA_Buff {
public:

	CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInactive(CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInactive &);
	CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInactive(const CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInactive &);
	CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInactive();
	virtual bool IsHidden();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInactive();

	// vtable[11] IsHidden
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:4721
class CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden : public CDOTA_Buff {
public:

	CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden();
	virtual bool IsPermanent();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierTempestDouble(const CModifierParams &);
	ModifierVariant_t GetDisableAutoAttack(const CModifierParams &);
	ModifierVariant_t GetFixedVision(const CModifierParams &);
	virtual ~CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden();

	// vtable[23] IsPermanent
	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:4811
class CDOTA_Modifier_ObliterateSoldier : public CDOTA_Buff {
public:

	CDOTA_Modifier_ObliterateSoldier();
	virtual bool IsDebuff();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierTempestDouble(const CModifierParams &);
	virtual void OnDestroy();
	virtual ~CDOTA_Modifier_ObliterateSoldier();

	// vtable[12] IsDebuff
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// vtable[60] OnDestroy
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:4878
class CDOTA_Modifier_MonkeyKing_FurArmy_BonusDamage : public CDOTA_Buff {
public:

private:

	int bonus_damage;  // +0xba8
	CDOTA_Modifier_MonkeyKing_FurArmy_BonusDamage();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual ~CDOTA_Modifier_MonkeyKing_FurArmy_BonusDamage();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierPreAttack_BonusDamage
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:4933
class CDOTA_Ability_MonkeyKing_QuadrupleTap : public CDOTABaseAbility {
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
	CDOTA_Ability_MonkeyKing_QuadrupleTap(CDOTA_Ability_MonkeyKing_QuadrupleTap &);
	CDOTA_Ability_MonkeyKing_QuadrupleTap(CDOTA_Ability_MonkeyKing_QuadrupleTap &);
	CDOTA_Ability_MonkeyKing_QuadrupleTap();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_MonkeyKing_QuadrupleTap();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:4949
class CDOTA_Modifier_MonkeyKing_QuadrupleTap : public CDOTA_Buff {
public:

private:

	int counter_duration;  // +0xba8
	int required_hits;  // +0xbac
	CDOTA_Modifier_MonkeyKing_QuadrupleTap();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t OnAttacked(const CModifierParams &);
	virtual ~CDOTA_Modifier_MonkeyKing_QuadrupleTap();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[89] OnAttacked
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:5040
class CDOTA_Modifier_MonkeyKing_QuadrupleTap_Counter : public CDOTA_Buff {
public:

private:

	int m_nFXStackIndex;  // +0xba8
	CDOTA_Modifier_MonkeyKing_QuadrupleTap_Counter();
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool ShouldUseOverheadOffset();
	virtual ~CDOTA_Modifier_MonkeyKing_QuadrupleTap_Counter();

	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[69] ShouldUseOverheadOffset
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:5098
class CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses : public CDOTA_Buff {
public:

private:

	int charges;  // +0xba8
	int bonus_damage;  // +0xbac
	int lifesteal;  // +0xbb0
	int m_nFXIndex;  // +0xbb4
	int m_nIgnoreStrikeIndex;  // +0xbb8
	bool m_bIsAttackAnim;  // +0xbbc
	CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	void OnDestroy(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t OnAttackStart(const CModifierParams &);
	virtual ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t OnAttacked(const CModifierParams &);
	virtual ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	ModifierVariant_t OnAttackFinished(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual bool ShouldUseOverheadOffset();
	virtual ~CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[89] OnAttackStart
	// vtable[90] GetModifierPreAttack_BonusDamage
	// vtable[91] GetActivityTranslationModifiers
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[69] ShouldUseOverheadOffset
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:5373
class CDOTA_Modifier_MonkeyKing_CloudRun : public CDOTA_Buff {
public:

	CDOTA_Modifier_MonkeyKing_CloudRun();
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	ModifierVariant_t GetActivityModifiers(const CModifierParams &);
	virtual int GetEffectAttachType();
	virtual ~CDOTA_Modifier_MonkeyKing_CloudRun();

	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[68] GetEffectAttachType
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_monkey_king.cpp:5427
class CDOTA_Modifier_MonkeyKing_CloudRunStart : public CDOTA_Buff {
public:

	CDOTA_Modifier_MonkeyKing_CloudRunStart();
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	ModifierVariant_t GetActivityModifiers(const CModifierParams &);
	virtual ~CDOTA_Modifier_MonkeyKing_CloudRunStart();

	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Ability_MonkeyKing_TreeDance::Schema_DynamicBinding  (line 109, @0x0000000002c8aa30, libserver.so)
// globals: CDOTA_Ability_MonkeyKing_TreeDance::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_MonkeyKing_TreeDance::Schema_DynamicBinding(
        const CDOTA_Ability_MonkeyKing_TreeDance *const this)
{
  return CDOTA_Ability_MonkeyKing_TreeDance::s_pSchemaBinding;
}


// CDOTA_Ability_MonkeyKing_TreeDance::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 109, @0x0000000002c8aa40, libserver.so)
// globals: CDOTA_Ability_MonkeyKing_TreeDance::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_MonkeyKing_TreeDance::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_MonkeyKing_TreeDance::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_MonkeyKing_TreeDance::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_MonkeyKing_TreeDance::CEntityInstanceEntityClass::DestructInstance  (line 109, @0x0000000002c8aa50, libserver.so)  // inlines: Destruct<CDOTA_Ability_MonkeyKing_TreeDance>
void __fastcall CDOTA_Ability_MonkeyKing_TreeDance::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_MonkeyKing_TreeDance::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_MonkeyKing_TreeDance::CEntityInstanceEntityClass::FreeInstance  (line 109, @0x0000000002c8aa70, libserver.so)
void __fastcall CDOTA_Ability_MonkeyKing_TreeDance::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_MonkeyKing_TreeDance::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_MonkeyKing_TreeDance::CEntityInstanceEntityClass::CanAllocate  (line 109, @0x0000000002c8aa90, libserver.so)
bool __fastcall CDOTA_Ability_MonkeyKing_TreeDance::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_MonkeyKing_TreeDance::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_MonkeyKing_TreeDance::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 109, @0x0000000002c8aaa0, libserver.so)
// globals: CDOTA_Ability_MonkeyKing_TreeDance::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_MonkeyKing_TreeDance::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_MonkeyKing_TreeDance::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_MonkeyKing_TreeDance::s_pSchemaBinding;
}


// CDOTA_Ability_MonkeyKing_TreeDance::CEntityInstanceEntityClass::AllocateInstance  (line 109, @0x0000000002c90520, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_MonkeyKing_TreeDance::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_MonkeyKing_TreeDance::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_MonkeyKing_TreeDance::CEntityInstanceEntityClass::ConstructInstance  (line 109, @0x0000000002c95120, libserver.so)  // inlines: CDOTA_Ability_MonkeyKing_TreeDance, Construct<CDOTA_Ability_MonkeyKing_TreeDance>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_MonkeyKing_TreeDance::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_MonkeyKing_TreeDance::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45DD350;
  }
  return p;
}


// CDOTA_Ability_MonkeyKing_TreeDance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 109, @0x0000000002ca2b60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_MonkeyKing_TreeDance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_MonkeyKing_TreeDance::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_MonkeyKing_TreeDance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 109, @0x0000000002ca2b80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_MonkeyKing_TreeDance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_MonkeyKing_TreeDance::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_MonkeyKing_TreeDance::GetEntityClassInternal  (line 109, @0x0000000002cbb4c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "monkey_king_tree_dance", "CDOTA_Ability_MonkeyKing_TreeDance"
// globals: `guard variable for'CDOTA_Ability_MonkeyKing_TreeDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TreeDanceClass, CDOTA_Ability_MonkeyKing_TreeDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TreeDanceClass, __dso_handle, CDOTA_Ability_MonkeyKing_TreeDance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_MonkeyKing_TreeDance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_TreeDanceClassInfo, CDOTA_Ability_MonkeyKing_TreeDance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_TreeDanceClassInfo
CEntityClass *__cdecl CDOTA_Ability_MonkeyKing_TreeDance::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_MonkeyKing_TreeDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TreeDanceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_MonkeyKing_TreeDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TreeDanceClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_MonkeyKing_TreeDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TreeDanceClass);
    CDOTA_Ability_MonkeyKing_TreeDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TreeDanceClass._vptr_CEntityClass = off_45DD2D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_MonkeyKing_TreeDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TreeDanceClass);
    __cxa_atexit(
      CDOTA_Ability_MonkeyKing_TreeDance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_MonkeyKing_TreeDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TreeDanceClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_MonkeyKing_TreeDanceClass != 0 )
    return &CDOTA_Ability_MonkeyKing_TreeDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TreeDanceClass;
  if ( `guard variable for'CDOTA_Ability_MonkeyKing_TreeDance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_TreeDanceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_MonkeyKing_TreeDance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_TreeDanceClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_MonkeyKing_TreeDance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_TreeDanceClassInfo,
      "CDOTA_Ability_MonkeyKing_TreeDance",
      "monkey_king_tree_dance",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_MonkeyKing_TreeDance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_TreeDanceClassInfo);
  }
  CDOTA_Ability_MonkeyKing_TreeDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TreeDanceClass.m_pClassInfo = &CDOTA_Ability_MonkeyKing_TreeDance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_TreeDanceClassInfo;
  CDOTA_Ability_MonkeyKing_TreeDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TreeDanceClass.m_pBaseClassInfo = CDOTA_Ability_MonkeyKing_TreeDance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_TreeDanceClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_MonkeyKing_TreeDanceClass = &CDOTA_Ability_MonkeyKing_TreeDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TreeDanceClass;
  CDOTA_Ability_MonkeyKing_TreeDance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_TreeDanceClassInfo.m_pClass = &CDOTA_Ability_MonkeyKing_TreeDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TreeDanceClass;
  CDOTA_Ability_MonkeyKing_TreeDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TreeDanceClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_MonkeyKing_TreeDanceClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_MonkeyKing_TreeDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TreeDanceClass;
}


// CDOTA_Ability_MonkeyKing_TreeDance::~CDOTA_Ability_MonkeyKing_TreeDance  (line 124, @0x0000000002c97980, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_MonkeyKing_TreeDance::~CDOTA_Ability_MonkeyKing_TreeDance(
        CDOTA_Ability_MonkeyKing_TreeDance *const this)
{
  this->_vptr_IHandleEntity = &off_45DD350;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_MonkeyKing_TreeDance::~CDOTA_Ability_MonkeyKing_TreeDance  (line 124, @0x0000000002c979a0, libserver.so)  // inlines: ~CDOTA_Ability_MonkeyKing_TreeDance
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_MonkeyKing_TreeDance::~CDOTA_Ability_MonkeyKing_TreeDance(
        CDOTA_Ability_MonkeyKing_TreeDance *const this)
{
  this->_vptr_IHandleEntity = &off_45DD350;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_MonkeyKing_TreeDance::GetIntrinsicModifierName  (line 134, @0x0000000002c8aab0, libserver.so)
// strings: "modifier_monkey_king_bounce"
const char *__fastcall CDOTA_Ability_MonkeyKing_TreeDance::GetIntrinsicModifierName(
        CDOTA_Ability_MonkeyKing_TreeDance *const this)
{
  return "modifier_monkey_king_bounce";
}


// CDOTA_Ability_MonkeyKing_TreeDance::GetAssociatedSecondaryAbilities  (line 135, @0x0000000002c8aac0, libserver.so)
// strings: "monkey_king_primal_spring;monkey_king_primal_spring_early"
const char *__fastcall CDOTA_Ability_MonkeyKing_TreeDance::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_MonkeyKing_TreeDance *const this)
{
  return "monkey_king_primal_spring;monkey_king_primal_spring_early";
}


// CDOTA_Ability_MonkeyKing_TreeDance::ProcsMagicStick  (line 142, @0x0000000002c8aad0, libserver.so)
bool __fastcall CDOTA_Ability_MonkeyKing_TreeDance::ProcsMagicStick(CDOTA_Ability_MonkeyKing_TreeDance *const this)
{
  return 0;
}


// CDOTA_Ability_MonkeyKing_TreeDance::YouForgotToImplementOrDeclareServerClass  (line 164, @0x0000000002c1d440, libserver.so)
int __fastcall CDOTA_Ability_MonkeyKing_TreeDance::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_MonkeyKing_TreeDance *const this)
{
  return 0;
}


// CDOTA_Ability_MonkeyKing_TreeDance::GetServerClass  (line 164, @0x0000000002c354b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_MonkeyKing_TreeDance::GetServerClass(
        CDOTA_Ability_MonkeyKing_TreeDance *const this)
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


// CDOTA_Ability_MonkeyKing_Spring::~CDOTA_Ability_MonkeyKing_Spring  (line 180, @0x0000000002c98ef0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_MonkeyKing_Spring::~CDOTA_Ability_MonkeyKing_Spring(
        CDOTA_Ability_MonkeyKing_Spring *const this)
{
  this->_vptr_IHandleEntity = &off_45DDE70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_MonkeyKing_Spring::~CDOTA_Ability_MonkeyKing_Spring  (line 180, @0x0000000002c98f10, libserver.so)  // inlines: ~CDOTA_Ability_MonkeyKing_Spring
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_MonkeyKing_Spring::~CDOTA_Ability_MonkeyKing_Spring(
        CDOTA_Ability_MonkeyKing_Spring *const this)
{
  this->_vptr_IHandleEntity = &off_45DDE70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_MonkeyKing_Spring::Schema_DynamicBinding  (line 182, @0x0000000002c8aae0, libserver.so)
// globals: CDOTA_Ability_MonkeyKing_Spring::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_MonkeyKing_Spring::Schema_DynamicBinding(
        const CDOTA_Ability_MonkeyKing_Spring *const this)
{
  return CDOTA_Ability_MonkeyKing_Spring::s_pSchemaBinding;
}


// CDOTA_Ability_MonkeyKing_Spring::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 182, @0x0000000002c8aaf0, libserver.so)
// globals: CDOTA_Ability_MonkeyKing_Spring::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_MonkeyKing_Spring::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_MonkeyKing_Spring::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_MonkeyKing_Spring::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_MonkeyKing_Spring::CEntityInstanceEntityClass::DestructInstance  (line 182, @0x0000000002c8ab00, libserver.so)  // inlines: Destruct<CDOTA_Ability_MonkeyKing_Spring>
void __fastcall CDOTA_Ability_MonkeyKing_Spring::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_MonkeyKing_Spring::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_MonkeyKing_Spring::CEntityInstanceEntityClass::FreeInstance  (line 182, @0x0000000002c8ab20, libserver.so)
void __fastcall CDOTA_Ability_MonkeyKing_Spring::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_MonkeyKing_Spring::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_MonkeyKing_Spring::CEntityInstanceEntityClass::CanAllocate  (line 182, @0x0000000002c8ab40, libserver.so)
bool __fastcall CDOTA_Ability_MonkeyKing_Spring::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_MonkeyKing_Spring::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_MonkeyKing_Spring::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 182, @0x0000000002c8ab50, libserver.so)
// globals: CDOTA_Ability_MonkeyKing_Spring::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_MonkeyKing_Spring::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_MonkeyKing_Spring::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_MonkeyKing_Spring::s_pSchemaBinding;
}


// CDOTA_Ability_MonkeyKing_Spring::CEntityInstanceEntityClass::AllocateInstance  (line 182, @0x0000000002c90560, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_MonkeyKing_Spring::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_MonkeyKing_Spring::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 944);
  memset(v1, 0, 0x3B0u);
  return v1;
}


// CDOTA_Ability_MonkeyKing_Spring::CEntityInstanceEntityClass::ConstructInstance  (line 182, @0x0000000002ca0ad0, libserver.so)  // inlines: CDOTA_Ability_MonkeyKing_Spring, CEntityHandle, CHandle, Construct<CDOTA_Ability_MonkeyKing_Spring>
// calls: CDOTABaseAbility::CDOTABaseAbility, CDOTABaseAbility::SetActivated, CDOTABaseAbility::~CDOTABaseAbility, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_Ability_MonkeyKing_Spring::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_MonkeyKing_Spring::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45DDE70;
    *(p + 232) = -1;
    *(p + 234) = 0;
    CDOTABaseAbility::SetActivated(p, 0);
  }
  return p;
}


// CDOTA_Ability_MonkeyKing_Spring::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 182, @0x0000000002ca2bb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_MonkeyKing_Spring::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_MonkeyKing_Spring::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_MonkeyKing_Spring::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 182, @0x0000000002ca2bd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_MonkeyKing_Spring::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_MonkeyKing_Spring::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_MonkeyKing_Spring::GetEntityClassInternal  (line 182, @0x0000000002cbb610, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "monkey_king_primal_spring", "CDOTA_Ability_MonkeyKing_Spring"
// globals: `guard variable for'CDOTA_Ability_MonkeyKing_Spring::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_SpringClass, CDOTA_Ability_MonkeyKing_Spring::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_SpringClass, __dso_handle, CDOTA_Ability_MonkeyKing_Spring::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_MonkeyKing_Spring::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_SpringClassInfo, CDOTA_Ability_MonkeyKing_Spring::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_SpringClassInfo
CEntityClass *__cdecl CDOTA_Ability_MonkeyKing_Spring::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_MonkeyKing_Spring::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_SpringClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_MonkeyKing_Spring::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_SpringClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_MonkeyKing_Spring::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_SpringClass);
    CDOTA_Ability_MonkeyKing_Spring::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_SpringClass._vptr_CEntityClass = off_45DDDF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_MonkeyKing_Spring::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_SpringClass);
    __cxa_atexit(
      CDOTA_Ability_MonkeyKing_Spring::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_MonkeyKing_Spring::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_SpringClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_MonkeyKing_SpringClass != 0 )
    return &CDOTA_Ability_MonkeyKing_Spring::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_SpringClass;
  if ( `guard variable for'CDOTA_Ability_MonkeyKing_Spring::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_SpringClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_MonkeyKing_Spring::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_SpringClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_MonkeyKing_Spring::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_SpringClassInfo,
      "CDOTA_Ability_MonkeyKing_Spring",
      "monkey_king_primal_spring",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_MonkeyKing_Spring::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_SpringClassInfo);
  }
  CDOTA_Ability_MonkeyKing_Spring::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_SpringClass.m_pClassInfo = &CDOTA_Ability_MonkeyKing_Spring::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_SpringClassInfo;
  CDOTA_Ability_MonkeyKing_Spring::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_SpringClass.m_pBaseClassInfo = CDOTA_Ability_MonkeyKing_Spring::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_SpringClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_MonkeyKing_SpringClass = &CDOTA_Ability_MonkeyKing_Spring::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_SpringClass;
  CDOTA_Ability_MonkeyKing_Spring::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_SpringClassInfo.m_pClass = &CDOTA_Ability_MonkeyKing_Spring::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_SpringClass;
  CDOTA_Ability_MonkeyKing_Spring::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_SpringClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_MonkeyKing_SpringClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_MonkeyKing_Spring::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_SpringClass;
}


// CDOTA_Ability_MonkeyKing_Spring::GetAssociatedPrimaryAbilities  (line 199, @0x0000000002c8ab60, libserver.so)
// strings: "monkey_king_tree_dance"
const char *__fastcall CDOTA_Ability_MonkeyKing_Spring::GetAssociatedPrimaryAbilities(
        CDOTA_Ability_MonkeyKing_Spring *const this)
{
  return "monkey_king_tree_dance";
}


// CDOTA_Ability_MonkeyKing_Spring::GetAssociatedSecondaryAbilities  (line 200, @0x0000000002c8ab70, libserver.so)
// strings: "monkey_king_primal_spring_early"
const char *__fastcall CDOTA_Ability_MonkeyKing_Spring::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_MonkeyKing_Spring *const this)
{
  return "monkey_king_primal_spring_early";
}


// CDOTA_Ability_MonkeyKing_Spring::GetCastAnimation  (line 209, @0x0000000002c8ab80, libserver.so)
Activity __fastcall CDOTA_Ability_MonkeyKing_Spring::GetCastAnimation(CDOTA_Ability_MonkeyKing_Spring *const this)
{
  return 1723;
}


// CDOTA_Ability_MonkeyKing_Spring::YouForgotToImplementOrDeclareServerClass  (line 229, @0x0000000002c1d450, libserver.so)
int __fastcall CDOTA_Ability_MonkeyKing_Spring::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_MonkeyKing_Spring *const this)
{
  return 0;
}


// CDOTA_Ability_MonkeyKing_Spring::GetServerClass  (line 229, @0x0000000002c35cb0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_MonkeyKing_Spring::GetServerClass(CDOTA_Ability_MonkeyKing_Spring *const this)
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


// CDOTA_Unit_Hero_MonkeyKing::~CDOTA_Unit_Hero_MonkeyKing  (line 249, @0x0000000002c9a310, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_MonkeyKing::~CDOTA_Unit_Hero_MonkeyKing(CDOTA_Unit_Hero_MonkeyKing *const this)
{
  this->_vptr_IHandleEntity = &off_45DE970;
  this->_vptr_INextBotEventResponder = &off_45DF950;
  this->_vptr_CObstructionObject = &off_45DFC80;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_MonkeyKing::~CDOTA_Unit_Hero_MonkeyKing  (line 249, @0x0000000002c9a350, libserver.so)  // inlines: ~CDOTA_Unit_Hero_MonkeyKing
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_MonkeyKing::~CDOTA_Unit_Hero_MonkeyKing(CDOTA_Unit_Hero_MonkeyKing *const this)
{
  this->_vptr_IHandleEntity = &off_45DE970;
  this->_vptr_INextBotEventResponder = &off_45DF950;
  this->_vptr_CObstructionObject = &off_45DFC80;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_MonkeyKing::Schema_DynamicBinding  (line 251, @0x0000000002c8ab90, libserver.so)
// globals: CDOTA_Unit_Hero_MonkeyKing::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_MonkeyKing::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_MonkeyKing *const this)
{
  return CDOTA_Unit_Hero_MonkeyKing::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_MonkeyKing::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 251, @0x0000000002c8abc0, libserver.so)
// globals: CDOTA_Unit_Hero_MonkeyKing::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_MonkeyKing::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_MonkeyKing::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_MonkeyKing::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_MonkeyKing::CEntityInstanceEntityClass::DestructInstance  (line 251, @0x0000000002c8abd0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_MonkeyKing>
void __fastcall CDOTA_Unit_Hero_MonkeyKing::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_MonkeyKing::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_MonkeyKing::CEntityInstanceEntityClass::FreeInstance  (line 251, @0x0000000002c8abf0, libserver.so)
void __fastcall CDOTA_Unit_Hero_MonkeyKing::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_MonkeyKing::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_MonkeyKing::CEntityInstanceEntityClass::CanAllocate  (line 251, @0x0000000002c8ac10, libserver.so)
bool __fastcall CDOTA_Unit_Hero_MonkeyKing::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_MonkeyKing::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_MonkeyKing::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 251, @0x0000000002c8ac20, libserver.so)
// globals: CDOTA_Unit_Hero_MonkeyKing::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_MonkeyKing::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_MonkeyKing::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_MonkeyKing::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_MonkeyKing::CEntityInstanceEntityClass::AllocateInstance  (line 251, @0x0000000002c905a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_MonkeyKing::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_MonkeyKing::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5912);
  memset(v1, 0, 0x1718u);
  return v1;
}


// CDOTA_Unit_Hero_MonkeyKing::CEntityInstanceEntityClass::ConstructInstance  (line 251, @0x0000000002ca0be0, libserver.so)  // inlines: CDOTA_Unit_Hero_MonkeyKing, CNetworkVarBase, Construct<CDOTA_Unit_Hero_MonkeyKing>, EnsureValidValue<unsigned int>, NetworkStateChanged, Set
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero, CBaseEntity::NetworkStateChanged, CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_Unit_Hero_MonkeyKing::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_MonkeyKing::CEntityInstanceEntityClass *const this,
        void *p)
{
  bool v3; // zf

  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_45DE970;
    *(p + 236) = &off_45DF950;
    *(p + 1468) = 0;
    *(p + 257) = &off_45DFC80;
    *(p + 1469) = 0;
    *(p + 5892) = 0;
    *(p + 1476) = 0;
    CBaseEntity::NetworkStateChanged(p, 0x16F4u, -1, -1);
    v3 = *(p + 1468) == -1;
    *(p + 1469) = -1;
    if ( !v3 )
    {
      (*(*p + 176LL))(p, 5872, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      *(p + 1468) = -1;
    }
  }
  return p;
}


// CDOTA_Unit_Hero_MonkeyKing::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 251, @0x0000000002ca34f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_MonkeyKing::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_MonkeyKing::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_MonkeyKing::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 251, @0x0000000002ca3990, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_MonkeyKing::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_MonkeyKing::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal  (line 251, @0x0000000002cc7470, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "npc_dota_hero_monkey_king", "CDOTA_Unit_Hero_MonkeyKing"
// globals: `guard variable for'CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass, CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Unit_Hero_MonkeyKing::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClassInfo, CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass) != 0 )
  {
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_designerName.u.m_Id = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_AllHelpers.m_Size = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_classInputs.m_Size = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_classOutputs.m_Size = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_hNetworkSerializer = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_pBaseClassInfo = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_pClassInfo = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_flags = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_nAllHelpersFlags = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_pScriptClassDesc = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_pInputs = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_nInputCount = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_pOutputs = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_nOutputCount = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_pGameClass = 0;
    CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass._vptr_CEntityClass = off_45DE8F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_MonkeyKing::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_MonkeyKingClass != 0 )
    return &CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass;
  if ( `guard variable for'CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClassInfo,
      "CDOTA_Unit_Hero_MonkeyKing",
      "npc_dota_hero_monkey_king",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClassInfo);
  }
  CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_pClassInfo = &CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClassInfo;
  CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_pBaseClassInfo = CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_MonkeyKingClass = &CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass;
  CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClassInfo.m_pClass = &CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass;
  CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_MonkeyKingClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_MonkeyKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MonkeyKingClass;
}


// CDOTA_Unit_Hero_MonkeyKing::CalculateActivityModifiers  (line 267, @0x0000000002ca3bb0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsAttacking, IsValid, LookupEntity, operator CEntityInstance*
// calls: CDOTA_BaseNPC::CalculateActivityModifiers, CDOTA_BaseNPC::GetAttackSpeed, CDOTA_BaseNPC::AddActivityModifier, CDOTA_BaseNPC::IsEntityInRange
// strings: "run_fast", "fastest", "faster", "attack_long_range", "attack_normal_range"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Unit_Hero_MonkeyKing::CalculateActivityModifiers(
        CDOTA_Unit_Hero_MonkeyKing *const this,
        Activity iActivity)
{
  float v3; // xmm0_4
  int v4; // eax
  float v5; // xmm1_4
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  UtlSymId_t v9[16]; // [rsp+0h] [rbp-20h] BYREF

  CDOTA_BaseNPC::CalculateActivityModifiers(this, iActivity);
  v3 = CDOTA_BaseNPC::GetAttackSpeed(this) * 100.0;
  if ( v3 > 351.0 )
  {
    CDOTA_BaseNPC::AddActivityModifier(v9, this, "fastest");
  }
  else if ( v3 >= 275.0 && v3 <= 350.0 )
  {
    CDOTA_BaseNPC::AddActivityModifier(v9, this, "faster");
  }
  else if ( v3 >= 169.0 )
  {
    CDOTA_BaseNPC::AddActivityModifier(v9, this, "fast");
  }
  v4 = (*(this->_vptr_IHandleEntity + 386))(this);
  if ( v4 <= 399 )
  {
    CDOTA_BaseNPC::AddActivityModifier(v9, this, "walk");
  }
  else if ( (v4 - 400) <= 0x32 )
  {
    CDOTA_BaseNPC::AddActivityModifier(v9, this, "run");
  }
  else
  {
    CDOTA_BaseNPC::AddActivityModifier(v9, this, "run_fast");
  }
  m_Index = this->m_hAttackTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAttackTarget.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[this->m_hAttackTarget.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index && v8->m_pInstance != 0 )
      {
        if ( CDOTA_BaseNPC::IsEntityInRange(this, v8->m_pInstance, 200.0, v5) )
          CDOTA_BaseNPC::AddActivityModifier(v9, this, "attack_normal_range");
        else
          CDOTA_BaseNPC::AddActivityModifier(v9, this, "attack_long_range");
      }
    }
  }
}


// CDOTA_Unit_Hero_MonkeyKing::CanSpeak  (line 317, @0x0000000002ca0d20, libserver.so)  // inlines: GetModifier_Constant_First, IsListeningToEvent, IsTempestDouble
// calls: CDOTA_ModifierManager::GetModifier_Constant_First_Internal
bool __fastcall CDOTA_Unit_Hero_MonkeyKing::CanSpeak(CDOTA_Unit_Hero_MonkeyKing *const this, int iConcept)
{
  bool v2; // bl
  __int64 v3; // rax

  v2 = 1;
  v3 = this->m_ModifierManager.m_buffsForModifiers[166];
  if ( v3 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v3].m_Size > 0 )
    return CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
             &this->m_ModifierManager,
             modifierfunction::MODIFIER_PROPERTY_TEMPEST_DOUBLE,
             &CModifierParams::s_Default) != 1.0;
  return v2;
}


// CDOTA_Unit_Hero_MonkeyKing::BuildAttachedParticleFilter  (line 322, @0x0000000002ca0e00, libserver.so)  // inlines: GetModifier_Constant_First, IsListeningToEvent, IsTempestDouble
// calls: CDOTA_BaseNPC::BuildAttachedParticleFilter, CDOTA_ModifierManager::GetModifier_Constant_First_Internal
void __fastcall CDOTA_Unit_Hero_MonkeyKing::BuildAttachedParticleFilter(
        CDOTA_Unit_Hero_MonkeyKing *const this,
        AttachedParticleFilter_t *pFilter)
{
  __int64 v4; // rax

  CDOTA_BaseNPC::BuildAttachedParticleFilter(this, pFilter);
  v4 = this->m_ModifierManager.m_buffsForModifiers[166];
  if ( v4 != 0xFF
    && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v4].m_Size > 0
    && CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
         &this->m_ModifierManager,
         modifierfunction::MODIFIER_PROPERTY_TEMPEST_DOUBLE,
         &CModifierParams::s_Default) == 1.0 )
  {
    pFilter->m_bSuppressAllEffects = 1;
  }
}


// CDOTA_Unit_Hero_MonkeyKing::Precache  (line 331, @0x0000000002c9a710, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Precache, PrecacheParticleSystem, CBaseEntity::PrecacheModel
// strings: "particles/econ/items/monkey_king/arcana/monkey_arcana_cloud.vpcf", "particles/units/heroes/hero_monkey_king/monkey_king_strike.vpcf", "particles/units/heroes/hero_monkey_king/monkey_king_strike_cast.vpcf", "particles/units/heroes/hero_monkey_king/monkey_king_strike_slow.vpcf", "particles/units/heroes/hero_monkey_king/monkey_king_strike_slow_impact.vpcf", "particles/units/heroes/hero_monkey_king/monkey_king_jump_trail.vpcf" (18 total)
// globals: s_pszPowerupRuneDisguises, s_pszMiscDisguises
void __fastcall CDOTA_Unit_Hero_MonkeyKing::Precache(
        CDOTA_Unit_Hero_MonkeyKing *const this,
        const CEntityPrecacheContext *pContext)
{
  const char *const *v2; // r12
  const char *v4; // rdi
  const char *const *v5; // r12
  const char *v6; // rdi

  v2 = s_pszPowerupRuneDisguises;
  CDOTA_BaseNPC_Hero::Precache(this, pContext);
  PrecacheParticleSystem("particles/econ/items/monkey_king/arcana/monkey_arcana_cloud.vpcf", pContext);
  PrecacheParticleSystem("particles/units/heroes/hero_monkey_king/monkey_king_strike.vpcf", pContext);
  PrecacheParticleSystem("particles/units/heroes/hero_monkey_king/monkey_king_strike_cast.vpcf", pContext);
  PrecacheParticleSystem("particles/units/heroes/hero_monkey_king/monkey_king_strike_slow.vpcf", pContext);
  PrecacheParticleSystem("particles/units/heroes/hero_monkey_king/monkey_king_strike_slow_impact.vpcf", pContext);
  PrecacheParticleSystem("particles/units/heroes/hero_monkey_king/monkey_king_jump_trail.vpcf", pContext);
  PrecacheParticleSystem("particles/units/heroes/hero_monkey_king/monkey_king_jump_launch_ring.vpcf", pContext);
  PrecacheParticleSystem("particles/units/heroes/hero_monkey_king/monkey_king_spring_cast.vpcf", pContext);
  PrecacheParticleSystem("particles/units/heroes/hero_monkey_king/monkey_king_spring_channel.vpcf", pContext);
  PrecacheParticleSystem("particles/units/heroes/hero_monkey_king/monkey_king_furarmy_ring.vpcf", pContext);
  PrecacheParticleSystem("particles/units/heroes/hero_monkey_king/monkey_king_fur_army_cast.vpcf", pContext);
  PrecacheParticleSystem("particles/units/heroes/hero_monkey_king/monkey_king_disguise.vpcf", pContext);
  CBaseEntity::PrecacheModel("models/props_items/mesh/monkey_king_bar_centered_model_02.vmdl", pContext);
  CBaseEntity::PrecacheModel("models/heroes/monkey_king/transform_invisiblebox.vmdl", pContext);
  do
  {
    v4 = *v2++;
    CBaseEntity::PrecacheModel(v4, pContext);
  }
  while ( v2 != &unk_3F6D8E8 );
  v5 = s_pszMiscDisguises;
  do
  {
    v6 = *v5++;
    CBaseEntity::PrecacheModel(v6, pContext);
  }
  while ( v5 != &unk_3F6D8B8 );
  CBaseEntity::PrecacheModel("models/props_gameplay/aegis.vmdl", pContext);
  CBaseEntity::PrecacheModel("models/props_gameplay/cheese.vmdl", pContext);
  CBaseEntity::PrecacheModel("models/props_gameplay/rune_goldxp.vmdl", pContext);
  CBaseEntity::PrecacheModel("models/props_gameplay/donkey.vmdl", pContext);
}


// CDOTA_Unit_Hero_MonkeyKing::Spawn  (line 372, @0x0000000002ca1350, libserver.so)  // inlines: Init, NetworkStateChanged, SetAlpha, SetBlue, SetColor, SetComponent, SetGreen, SetRed, SetRenderColor, SetVal, a
// calls: CDOTA_BaseNPC_Hero::Spawn
void __fastcall CDOTA_Unit_Hero_MonkeyKing::Spawn(
        CDOTA_Unit_Hero_MonkeyKing *const this,
        const CEntityKeyValues *pKeyValues)
{
  unsigned __int8 v3; // r12

  this->mb_MonkeyHasArcana = 0;
  CDOTA_BaseNPC_Hero::Spawn(this, pKeyValues);
  v3 = this->m_clrRender.m_Value._color[3];
  if ( this->m_clrRender.m_Value._color[0] != 0xFF )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[0] = -1;
  }
  if ( this->m_clrRender.m_Value._color[1] != 0xFF )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[1] = -1;
  }
  if ( this->m_clrRender.m_Value._color[2] != 0xFF )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[2] = -1;
  }
  if ( v3 != this->m_clrRender.m_Value._color[3] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[3] = v3;
  }
}


// CDOTA_Unit_Hero_MonkeyKing::AddCustomVisibility  (line 381, @0x0000000002cb78e0, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetGlobalDOTATeam, GetInstance, GetModifier_Constant_Highest, GetSerialNumber, GetTeamMapping, GetTeamNumber, IndexToIdentity, IsListeningToEvent, LookupEntity, RemoveSeenByTeamTag, Set, SetTarget, TagAsSeenByTeam, ToDOTABaseNPC, end, operator CBaseEntity*, operator CEntityInstance*, operator=, ~CUtlVector
// calls: CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetAbsOrigin, GetGroundHeight, CDOTA_BaseNPC::IsInvisibleTo, GetGlobalTeam, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, FoW_TeamNumberToFoWIndex, CDOTAFogOfWarSystem::GetFoW, CFoW::HasUnobstructedViewer (18 total)
// strings: "modifier_monkey_king_tree_dance_hidden", "perched_spot_height", "top_level_height", "modifier_monkey_king_bounce_perch"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Unit_Hero_MonkeyKing::AddCustomVisibility(CDOTA_Unit_Hero_MonkeyKing *const this)
{
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Buff *v3; // rbx
  CDOTABaseAbility *Ability; // rax
  float LevelSpecialValue; // xmm0_4
  CDOTA_Buff *v6; // rdi
  int v7; // ebx
  CDOTABaseAbility *v8; // rax
  const Vector *AbsOrigin; // rax
  int v10; // r13d
  CTeam *GlobalTeam; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v13; // eax
  __int16 v14; // cx
  __int64 v15; // rax
  unsigned int v16; // r14d
  const Vector *v17; // r15
  CFoW *FoW; // rax
  const Vector *v19; // rax
  CHandle<CBaseEntity> *m_pMemory; // r14
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // rdx
  CDOTA_BaseNPC *m_pInstance; // r15
  const Vector *v24; // rax
  int CurrentVisionRange; // eax
  float v26; // xmm1_4
  int i; // ebx
  const Vector *v28; // r14
  unsigned int v29; // r13d
  CFoW *v30; // rax
  int top_level_height; // [rsp+2Ch] [rbp-114h]
  float flSpotterHeight; // [rsp+40h] [rbp-100h]
  float flVisibleHeighta; // [rsp+44h] [rbp-FCh]
  float flVisibleHeight; // [rsp+44h] [rbp-FCh]
  CHandle<CBaseEntity> *__for_end; // [rsp+48h] [rbp-F8h]
  EHANDLE enemy; // [rsp+50h] [rbp-F0h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > enemies; // [rsp+60h] [rbp-E0h] BYREF
  CModifierParams prms; // [rsp+80h] [rbp-C0h] BYREF

  ModifierByName = CDOTA_BaseNPC::FindModifierByName(this, "modifier_monkey_king_tree_dance_hidden", 0);
  v3 = ModifierByName;
  if ( ModifierByName != 0 && CDOTA_Buff::GetAbility(ModifierByName) != 0 )
  {
    Ability = CDOTA_Buff::GetAbility(v3);
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "perched_spot_height", 1, 0);
    v6 = v3;
    v7 = 0;
    flVisibleHeighta = LevelSpecialValue;
    v8 = CDOTA_Buff::GetAbility(v6);
    top_level_height = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v8, "top_level_height", 1, 0);
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    flVisibleHeight = flVisibleHeighta + GetGroundHeight(AbsOrigin, this);
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v7 != this->m_iTeamNum.m_Value && v7 != 1 )
        {
          v10 = 1 << v7;
          this->m_iTeamVisibilityBitmask &= ~(1 << v7);
          if ( ((v7 - 6) <= 7 || (v7 - 2) <= 1) && !CDOTA_BaseNPC::IsInvisibleTo(this, v7) )
            break;
        }
LABEL_5:
        if ( ++v7 == 14 )
          return;
      }
      prms.bCraniumBasherTested = 0;
      prms.ability.m_Index = -1;
      prms.fDamage = 0.0;
      prms.fOriginalDamage = 0.0;
      prms.nActivity = -1;
      prms.bTooltip = 0;
      prms.nTooltipParam = 0;
      prms.bIgnoreInvis = 0;
      prms.bNoCooldown = 0;
      prms.bReincarnate = 0;
      prms.bDoNotConsume = 0;
      prms.fDistance = 0.0;
      prms.inflictor.m_Index = -1;
      prms.nDamageflags = 0;
      prms.nDamageCategory = 0;
      memset(&prms.pOrb, 0, 24);
      prms.bHeartRegenApplied = 0;
      prms.bDiffusalApplied = 0;
      prms.bChainLightningConsidered = 0;
      prms.bSuppressDamage = 0;
      prms.bRangedAttack = 0;
      prms.nPlayerids_stick = 0;
      prms.hattacker.m_Index = -1;
      prms.htarget.m_Index = -1;
      prms.hunit.m_Index = -1;
      GlobalTeam = GetGlobalTeam(v7);
      if ( GlobalTeam != 0 && (m_pEntity = GlobalTeam->m_pEntity) != 0 )
      {
        v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v14 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(prms.htarget.m_Index) = v14 | prms.htarget.m_Index & 0x8000;
        prms.htarget.m_Index = (v13 << 15) | prms.htarget.m_Index & 0x7FFF;
      }
      else
      {
        prms.htarget.m_Index = -1;
      }
      v15 = this->m_ModifierManager.m_buffsForModifiers[158];
      if ( (v15 == 0xFF
         || this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v15].m_Size <= 0
         || CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
              &this->m_ModifierManager,
              modifierfunction::MODIFIER_PROPERTY_PROVIDES_FOW_POSITION,
              &prms) != 1.0)
        && (this->m_nUnitState64.m_Value & 0x400) == 0 )
      {
        v16 = FoW_TeamNumberToFoWIndex(v7);
        v17 = CBaseEntity::GetAbsOrigin(this);
        FoW = CDOTAFogOfWarSystem::GetFoW(&g_DOTAFogOfWarSystem, 0);
        if ( !CFoW::HasUnobstructedViewer(FoW, v16, v17) )
        {
          enemies.m_Size = 0;
          enemies.m_Memory.m_pMemory = 0;
          enemies.m_Memory.m_nAllocationCount = 0;
          enemies.m_Memory.m_nGrowSize = 0;
          v19 = CBaseEntity::GetAbsOrigin(this);
          FindUnitsInRadius(this->m_iTeamNum.m_Value, v19, this, 2400.0, &enemies, 2, 55, 80, 0, 0);
          m_pMemory = enemies.m_Memory.m_pMemory;
          __for_end = &enemies.m_Memory.m_pMemory[enemies.m_Size];
          if ( enemies.m_Memory.m_pMemory != __for_end )
          {
            while ( 1 )
            {
              enemy.m_Index = m_pMemory->m_Index;
              if ( m_pMemory->m_Index + 2 > 1 )
              {
                v21 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(enemy.m_Index) >> 9) & 0x3F];
                if ( v21 != 0 )
                {
                  v22 = &v21[enemy.m_Index & 0x1FF];
                  if ( v22 != 0 && m_pMemory->m_Index == v22->m_EHandle.m_Index )
                  {
                    m_pInstance = v22->m_pInstance;
                    if ( v22->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && v7 == m_pInstance->m_iTeamNum.m_Value )
                    {
                      v24 = CBaseEntity::GetAbsOrigin(v22->m_pInstance);
                      flSpotterHeight = GetGroundHeight(v24, m_pInstance);
                      CurrentVisionRange = CDOTA_BaseNPC::GetCurrentVisionRange(m_pInstance);
                      if ( CDOTA_BaseNPC::IsEntityInRange(m_pInstance, this, CurrentVisionRange, v26)
                        && ((*(m_pInstance->_vptr_IHandleEntity + 445))(m_pInstance) != 0
                         || flSpotterHeight > flVisibleHeight
                         || flSpotterHeight > top_level_height) )
                      {
                        break;
                      }
                    }
                  }
                }
              }
              if ( __for_end == ++m_pMemory )
                goto LABEL_37;
            }
            this->m_iTeamVisibilityBitmask |= v10;
          }
LABEL_37:
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&enemies);
          goto LABEL_5;
        }
      }
      this->m_iTeamVisibilityBitmask |= v10;
      if ( ++v7 == 14 )
        return;
    }
  }
  if ( CDOTA_BaseNPC::FindModifierByName(this, "modifier_monkey_king_bounce_perch", 0) != 0 )
  {
    for ( i = 0; i != 14; ++i )
    {
      if ( !CDOTA_BaseNPC::IsInvisibleTo(this, i) )
      {
        v28 = CBaseEntity::GetAbsOrigin(this);
        v29 = FoW_TeamNumberToFoWIndex(i);
        v30 = CDOTAFogOfWarSystem::GetFoW(&g_DOTAFogOfWarSystem, 0);
        if ( CFoW::GetLocationInfoForRadius(v30, v29, v28, 90.0) )
          this->m_iTeamVisibilityBitmask |= 1 << i;
      }
    }
  }
}


// CDOTA_Unit_Hero_MonkeyKing::ModifyOrAppendCriteria  (line 469, @0x0000000002c9a630, libserver.so)  // inlines: GetHealthPercent
// calls: CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria, CResponseCriteriaSet::AppendCriteria, CDOTA_BaseNPC::FindModifierByName, CBaseEntity::GetHealth
// strings: "injured", "modifier_monkeyking_cloudrun", "ar_cloud_run"
void __fastcall CDOTA_Unit_Hero_MonkeyKing::ModifyOrAppendCriteria(
        CDOTA_Unit_Hero_MonkeyKing *const this,
        CResponseCriteriaSet *const criteria)
{
  float v4; // xmm2_4
  float v5; // xmm2_4

  CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria(this, criteria);
  if ( (*(this->_vptr_IHandleEntity + 408))(this) != 0 )
  {
    CBaseEntity::GetHealth(this);
    (*(this->_vptr_IHandleEntity + 156))(this);
  }
  CResponseCriteriaSet::AppendCriteria(criteria, "injured", 1.0, v4);
  CDOTA_BaseNPC::FindModifierByName(this, "modifier_monkeyking_cloudrun", 0);
  CResponseCriteriaSet::AppendCriteria(criteria, "ar_cloud_run", 1.0, v5);
}


// CDOTA_Unit_Hero_MonkeyKing::HasFlyingVision  (line 477, @0x0000000002c9d030, libserver.so)  // inlines: HasFlyingVision, InState
bool __fastcall CDOTA_Unit_Hero_MonkeyKing::HasFlyingVision(CDOTA_Unit_Hero_MonkeyKing *const this)
{
  bool result; // al

  result = 1;
  if ( (this->m_iMoveCapabilities & 2) == 0 )
    return (this->m_nUnitState64.m_Value & 0x1000000) != 0;
  return result;
}


// CDOTA_Unit_Hero_MonkeyKing::OnAssetModifiersUpdated  (line 621, @0x0000000002c2bca0, libserver.so)  // inlines: curtime
// calls: CDOTA_BaseNPC_Hero::OnAssetModifiersUpdated, CBaseEntity::ThinkSet
// globals: CDOTA_Unit_Hero_MonkeyKing::CloudRunThink(void)
void __fastcall CDOTA_Unit_Hero_MonkeyKing::OnAssetModifiersUpdated(CDOTA_Unit_Hero_MonkeyKing *const this)
{
  CGlobalVars *v2; // r12
  float v3; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CDOTA_BaseNPC_Hero::OnAssetModifiersUpdated(this);
  if ( this->m_nArcanaLevel > 0 )
  {
    v2 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      v3 = v2->m_flCurrentTime + 0.25;
    }
    else
    {
      v3 = 0.25;
    }
    CBaseEntity::ThinkSet(this, CDOTA_Unit_Hero_MonkeyKing::CloudRunThink, v3, -1075542393, 0);
  }
}


// CDOTA_Unit_Hero_MonkeyKing::CloudRunThink  (line 634, @0x0000000002c24bb0, libserver.so)  // inlines: VectorNormalize2D, VectorSubtract, curtime, operator-, operator=
// calls: CBaseEntity::GetAbsOrigin, VectorNormalize, CBaseEntity::ThinkSet, CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::RemoveModifierByName, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_monkeyking_cloudrun", "modifier_monkeyking_cloudrun_start", "modifier_monkeyking_cloudrunstart"
// globals: CDOTA_Unit_Hero_MonkeyKing::CloudRunThink(void)
void __fastcall CDOTA_Unit_Hero_MonkeyKing::CloudRunThink(CDOTA_Unit_Hero_MonkeyKing *const this)
{
  const Vector *AbsOrigin; // rax
  vec_t v3; // xmm0_4
  vec_t v4; // xmm1_4
  __m128i v5; // xmm0
  float v6; // r12d
  float v7; // xmm0_4
  CGlobalVars *v8; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v10; // xmm0_4
  CDOTA_Buff *ModifierByName; // rax
  float v12; // xmm0_4
  float v13; // xmm0_4
  CDOTA_Buff *v14; // [rsp+8h] [rbp-78h]
  Vector vDirection; // [rsp+10h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+20h] [rbp-60h] BYREF
  KeyValues kvst; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-28h]

  v18 = __readfsqword(0x28u);
  if ( this->m_nArcanaLevel <= 0 )
    return;
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v3 = this->m_vLastPos.y - AbsOrigin->y;
  v4 = this->m_vLastPos.x - AbsOrigin->x;
  vDirection.z = 0.0;
  vDirection.y = v3;
  vDirection.x = v4;
  *v5.m128i_i32 = VectorNormalize(&vDirection);
  v6 = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
  v7 = (*(this->_vptr_IHandleEntity + 386))(this);
  if ( v7 <= 400.0 )
  {
    if ( this->m_bIsOnCloud && v7 < 400.0 )
    {
      CDOTA_BaseNPC::RemoveModifierByName(this, "modifier_monkeyking_cloudrun");
      this->m_bIsOnCloud = 0;
      this->m_fTotalDistOnCloud = -1.0;
      this->m_fBackOnCloudThresh = 0.0;
    }
    goto LABEL_6;
  }
  if ( !this->m_bIsOnCloud )
  {
    if ( v6 <= 0.0 )
      goto LABEL_6;
    this->m_fTotalDistOnCloud = -1.0;
    v13 = v6 + this->m_fTotalDistoffCloud;
    this->m_fTotalDistoffCloud = v13;
    if ( v13 <= 2400.0 )
      goto LABEL_6;
    if ( CDOTA_BaseNPC::FindModifierByName(this, "modifier_monkeyking_cloudrun", 0) == 0 )
    {
      this->m_bIsOnCloud = 1;
      this->m_fTotalDistoffCloud = -1.0;
      this->m_fTotalDistOnCloud = 0.0;
      this->m_fBackOnCloudThresh = 0.0;
      KeyValues::KeyValues(&kv, "modifier_monkeyking_cloudrun");
      CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_monkeyking_cloudrun", &kv, 0);
      KeyValues::KeyValues(&kvst, "modifier_monkeyking_cloudrun_start");
      CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_monkeyking_cloudrunstart", &kvst, 0);
      KeyValues::~KeyValues(&kvst);
      KeyValues::~KeyValues(&kv);
    }
    if ( !this->m_bIsOnCloud )
      goto LABEL_6;
  }
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(this, "modifier_monkeyking_cloudrun", 0);
  if ( ModifierByName != 0 )
    this->m_fTotalDistOnCloud = v6 + this->m_fTotalDistOnCloud;
  v12 = v6 + this->m_fBackOnCloudThresh;
  this->m_fBackOnCloudThresh = v12;
  if ( v6 == 0.0 )
  {
    v14 = ModifierByName;
    this->m_fTotalDistoffCloud = -1.0;
    CDOTA_BaseNPC::RemoveModifierByName(this, "modifier_monkeyking_cloudrun");
    ModifierByName = v14;
    this->m_fBackOnCloudThresh = 0.0;
    goto LABEL_30;
  }
  if ( v6 <= 90.0 )
  {
LABEL_30:
    if ( this->m_fTotalDistOnCloud < 2400.0 || ModifierByName == 0 )
      goto LABEL_6;
    goto LABEL_32;
  }
  if ( ModifierByName == 0 )
  {
    if ( v12 >= 1200.0 )
    {
      KeyValues::KeyValues(&kv, "modifier_monkeyking_cloudrun");
      CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_monkeyking_cloudrun", &kv, 0);
      KeyValues::KeyValues(&kvst, "modifier_monkeyking_cloudrun_start");
      CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_monkeyking_cloudrunstart", &kvst, 0);
      this->m_fBackOnCloudThresh = 0.0;
      this->m_fTotalDistOnCloud = 1.0;
      KeyValues::~KeyValues(&kvst);
      KeyValues::~KeyValues(&kv);
    }
    goto LABEL_6;
  }
  if ( this->m_fTotalDistOnCloud >= 2400.0 )
  {
LABEL_32:
    this->m_bIsOnCloud = 0;
    this->m_fTotalDistOnCloud = -1.0;
    this->m_fTotalDistoffCloud = -1.0;
    CDOTA_BaseNPC::RemoveModifierByName(this, "modifier_monkeyking_cloudrun");
    this->m_fBackOnCloudThresh = 0.0;
  }
LABEL_6:
  this->m_vLastPos = *CBaseEntity::GetAbsOrigin(this);
  v8 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    v10 = v8->m_flCurrentTime + 0.25;
  }
  else
  {
    v10 = 0.25;
  }
  CBaseEntity::ThinkSet(this, CDOTA_Unit_Hero_MonkeyKing::CloudRunThink, v10, -1075542393, 0);
}


// CDOTA_Unit_Hero_MonkeyKing::YouForgotToImplementOrDeclareServerClass  (line 741, @0x0000000002c1d460, libserver.so)
int __fastcall CDOTA_Unit_Hero_MonkeyKing::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_MonkeyKing *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_MonkeyKing::GetServerClass  (line 741, @0x0000000002c34fb0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_MonkeyKing::GetServerClass(CDOTA_Unit_Hero_MonkeyKing *const this)
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


// CDOTA_Ability_MonkeyKing_Boundless_Strike::~CDOTA_Ability_MonkeyKing_Boundless_Strike  (line 766, @0x0000000002c98f40, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_MonkeyKing_Boundless_Strike::~CDOTA_Ability_MonkeyKing_Boundless_Strike(
        CDOTA_Ability_MonkeyKing_Boundless_Strike *const this)
{
  this->_vptr_IHandleEntity = &off_45DFD50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_MonkeyKing_Boundless_Strike::~CDOTA_Ability_MonkeyKing_Boundless_Strike  (line 766, @0x0000000002c98f60, libserver.so)  // inlines: ~CDOTA_Ability_MonkeyKing_Boundless_Strike
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_MonkeyKing_Boundless_Strike::~CDOTA_Ability_MonkeyKing_Boundless_Strike(
        CDOTA_Ability_MonkeyKing_Boundless_Strike *const this)
{
  this->_vptr_IHandleEntity = &off_45DFD50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_MonkeyKing_Boundless_Strike::Schema_DynamicBinding  (line 768, @0x0000000002c8ac30, libserver.so)
// globals: CDOTA_Ability_MonkeyKing_Boundless_Strike::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_MonkeyKing_Boundless_Strike::Schema_DynamicBinding(
        const CDOTA_Ability_MonkeyKing_Boundless_Strike *const this)
{
  return CDOTA_Ability_MonkeyKing_Boundless_Strike::s_pSchemaBinding;
}


// CDOTA_Ability_MonkeyKing_Boundless_Strike::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 768, @0x0000000002c8ac40, libserver.so)
// globals: CDOTA_Ability_MonkeyKing_Boundless_Strike::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_MonkeyKing_Boundless_Strike::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_MonkeyKing_Boundless_Strike::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_MonkeyKing_Boundless_Strike::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_MonkeyKing_Boundless_Strike::CEntityInstanceEntityClass::DestructInstance  (line 768, @0x0000000002c8ac50, libserver.so)  // inlines: Destruct<CDOTA_Ability_MonkeyKing_Boundless_Strike>
void __fastcall CDOTA_Ability_MonkeyKing_Boundless_Strike::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_MonkeyKing_Boundless_Strike::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_MonkeyKing_Boundless_Strike::CEntityInstanceEntityClass::FreeInstance  (line 768, @0x0000000002c8ac70, libserver.so)
void __fastcall CDOTA_Ability_MonkeyKing_Boundless_Strike::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_MonkeyKing_Boundless_Strike::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_MonkeyKing_Boundless_Strike::CEntityInstanceEntityClass::CanAllocate  (line 768, @0x0000000002c8ac90, libserver.so)
bool __fastcall CDOTA_Ability_MonkeyKing_Boundless_Strike::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_MonkeyKing_Boundless_Strike::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_MonkeyKing_Boundless_Strike::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 768, @0x0000000002c8aca0, libserver.so)
// globals: CDOTA_Ability_MonkeyKing_Boundless_Strike::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_MonkeyKing_Boundless_Strike::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_MonkeyKing_Boundless_Strike::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_MonkeyKing_Boundless_Strike::s_pSchemaBinding;
}


// CDOTA_Ability_MonkeyKing_Boundless_Strike::CEntityInstanceEntityClass::AllocateInstance  (line 768, @0x0000000002c905e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_MonkeyKing_Boundless_Strike::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_MonkeyKing_Boundless_Strike::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_MonkeyKing_Boundless_Strike::CEntityInstanceEntityClass::ConstructInstance  (line 768, @0x0000000002c95150, libserver.so)  // inlines: CDOTA_Ability_MonkeyKing_Boundless_Strike, Construct<CDOTA_Ability_MonkeyKing_Boundless_Strike>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_MonkeyKing_Boundless_Strike::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_MonkeyKing_Boundless_Strike::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45DFD50;
  }
  return p;
}


// CDOTA_Ability_MonkeyKing_Boundless_Strike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 768, @0x0000000002ca2c00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_MonkeyKing_Boundless_Strike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_MonkeyKing_Boundless_Strike::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_MonkeyKing_Boundless_Strike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 768, @0x0000000002ca2c20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_MonkeyKing_Boundless_Strike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_MonkeyKing_Boundless_Strike::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal  (line 768, @0x0000000002cc24f0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "monkey_king_boundless_strike", "CDOTA_Ability_MonkeyKing_Boundless_Strike"
// globals: `guard variable for'CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass, CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_MonkeyKing_Boundless_Strike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClassInfo, CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClassInfo
CEntityClass *__cdecl CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass) != 0 )
  {
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_pClassInfo = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_flags = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_pInputs = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_nInputCount = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_pOutputs = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_nOutputCount = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_pGameClass = 0;
    CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass._vptr_CEntityClass = off_45DFCD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass);
    __cxa_atexit(
      CDOTA_Ability_MonkeyKing_Boundless_Strike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass != 0 )
    return &CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass;
  if ( `guard variable for'CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClassInfo,
      "CDOTA_Ability_MonkeyKing_Boundless_Strike",
      "monkey_king_boundless_strike",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClassInfo);
  }
  CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_pClassInfo = &CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClassInfo;
  CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_pBaseClassInfo = CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass = &CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass;
  CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClassInfo.m_pClass = &CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass;
  CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_MonkeyKing_Boundless_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Boundless_StrikeClass;
}


// CDOTA_Ability_MonkeyKing_Boundless_Strike::GetStolenActivityModifier  (line 776, @0x0000000002c8acb0, libserver.so)
const char *__fastcall CDOTA_Ability_MonkeyKing_Boundless_Strike::GetStolenActivityModifier(
        CDOTA_Ability_MonkeyKing_Boundless_Strike *const this)
{
  return "fissure";
}


// CDOTA_Ability_MonkeyKing_Boundless_Strike::GetGestureBasedActivity  (line 782, @0x0000000002c8acc0, libserver.so)
Activity __fastcall CDOTA_Ability_MonkeyKing_Boundless_Strike::GetGestureBasedActivity(
        CDOTA_Ability_MonkeyKing_Boundless_Strike *const this)
{
  return 1715;
}


// CDOTA_Ability_MonkeyKing_Boundless_Strike::OnAbilityPhaseStart  (line 790, @0x0000000002c21390, libserver.so)  // inlines: Vector
// calls: CDOTABaseAbility::OnAbilityPhaseStart, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::UnitEmitSound, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::CreateAbilityParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControl
// strings: "Hero_MonkeyKing.Strike.Cast", "modifier_monkey_king_bounce_perch", "particles/units/heroes/hero_monkey_king/monkey_king_strike_cast.vpcf", "attach_weapon_bot", "attach_weapon_top"
bool __fastcall CDOTA_Ability_MonkeyKing_Boundless_Strike::OnAbilityPhaseStart(
        CDOTA_Ability_MonkeyKing_Boundless_Strike *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTA_Buff *ModifierByName; // r14
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  int m_nFXIndex; // r12d
  const CBaseAnimating *v8; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v10; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v12; // rax
  const CBaseAnimating *v13; // r15
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  const Vector *v16; // r12
  CDOTA_BaseNPC *v17; // rax
  const CBaseAnimating *v18; // r15
  CDOTA_ParticleManager *v19; // rax
  CDOTA_ParticleManager *v20; // rax
  int v21; // ebx
  CDOTA_ParticleManager *v22; // rax

  CDOTABaseAbility::OnAbilityPhaseStart(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(Caster, "Hero_MonkeyKing.Strike.Cast", 0.0, 0, 0);
  v3 = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(v3, "modifier_monkey_king_bounce_perch", 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  this->m_nFXIndex = CDOTABaseAbility::CreateAbilityParticleEffect(
                       this,
                       "particles/units/heroes/hero_monkey_king/monkey_king_strike_cast.vpcf",
                       2,
                       v5,
                       0);
  v6 = CDOTABaseAbility::GetCaster(this);
  m_nFXIndex = this->m_nFXIndex;
  v8 = v6;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, m_nFXIndex, 0, v8, 1, 0, vec3_invalid, 1);
  v10 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
  v12 = CDOTABaseAbility::GetCaster(this);
  LODWORD(v8) = this->m_nFXIndex;
  v13 = v12;
  v14 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v14, v8, 1, v13, 5, "attach_weapon_bot", *AbsOrigin, 1);
  v15 = CDOTABaseAbility::GetCaster(this);
  v16 = CBaseEntity::GetAbsOrigin(v15);
  v17 = CDOTABaseAbility::GetCaster(this);
  LODWORD(v8) = this->m_nFXIndex;
  v18 = v17;
  v19 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v19, v8, 2, v18, 5, "attach_weapon_top", *v16, 1);
  LODWORD(v16) = this->m_nFXIndex;
  v20 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v20, v16, 3, 0.0, 0.0);
  if ( ModifierByName != 0 )
  {
    v21 = this->m_nFXIndex;
    v22 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v22, v21, 3, 0.007812501848093234, 1.0);
  }
  return 1;
}


// CDOTA_Ability_MonkeyKing_Boundless_Strike::OnAbilityPhaseInterrupted  (line 816, @0x0000000002c215a0, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTABaseAbility::OnAbilityPhaseInterrupted, CDOTABaseAbility::GetCaster, CBaseEntity::StopSound
// strings: "Hero_MonkeyKing.Strike.Cast"
void __fastcall CDOTA_Ability_MonkeyKing_Boundless_Strike::OnAbilityPhaseInterrupted(
        CDOTA_Ability_MonkeyKing_Boundless_Strike *const this)
{
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Caster; // rax

  m_nFXIndex = this->m_nFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 1);
  CDOTABaseAbility::OnAbilityPhaseInterrupted(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::StopSound(Caster, "Hero_MonkeyKing.Strike.Cast");
}


// CDOTA_Ability_MonkeyKing_Boundless_Strike::OnSpellStart  (line 827, @0x0000000002c854e0, libserver.so)  // inlines: GetLevelSpecialValueFor<int>, NormalizeInPlace, Normalized, VectorAdd, VectorMultiply, VectorSubtract, abs<float>, operator*, operator+, operator-, operator=
// calls: GetParticleManager, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Ability_MonkeyKing_Boundless_Strike::StrikeInLine, CDOTABaseAbility::GetCursorPosition, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CBaseEntity::GetAbsAngles, AngleVectors, VectorNormalize, CDOTABaseAbility::CreateAbilityParticleEffect, CDOTA_ParticleManager::SetParticleControl (14 total)
// strings: "strike_cast_range", "particles/units/heroes/hero_monkey_king/monkey_king_strike.vpcf"
void __fastcall CDOTA_Ability_MonkeyKing_Boundless_Strike::OnSpellStart(
        CDOTA_Ability_MonkeyKing_Boundless_Strike *const this)
{
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  float z; // kr08_4
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r12
  vec_t v7; // xmm2_4
  vec_t v8; // xmm1_4
  CDOTA_BaseNPC *v9; // rax
  const Vector *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  __m128 v12; // xmm0
  __m128 v13; // rt1
  __m128 v14; // xmm0
  float strike_cast_range; // xmm1_4
  __m128i x_low; // xmm7
  float v17; // r12d
  CDOTA_BaseNPC *v18; // rax
  const Vector *v19; // rax
  vec_t v20; // xmm0_4
  vec_t v21; // xmm1_4
  int AbilityParticleEffect; // r12d
  CDOTA_ParticleManager *v23; // rax
  CDOTA_ParticleManager *v24; // rax
  CDOTA_ParticleManager *v25; // rax
  CDOTA_ParticleManager *v26; // rax
  CDOTA_BaseNPC *v27; // rax
  CDOTA_BaseNPC *v28; // rax
  const QAngle *AbsAngles; // rax
  float v30; // [rsp+4h] [rbp-9Ch]
  float v31; // [rsp+8h] [rbp-98h]
  float v32; // [rsp+8h] [rbp-98h]
  float v33; // [rsp+Ch] [rbp-94h]
  Vector vStrikeDir; // [rsp+20h] [rbp-80h] BYREF
  Vector v35; // [rsp+30h] [rbp-70h]
  QAngle angles; // [rsp+40h] [rbp-60h] BYREF
  Vector vecFwd; // [rsp+50h] [rbp-50h] BYREF
  Vector vecRight; // [rsp+60h] [rbp-40h] BYREF
  Vector vecUp; // [rsp+70h] [rbp-30h] BYREF
  Vector vStrikeLoc; // [rsp+80h] [rbp-20h] BYREF

  m_nFXIndex = this->m_nFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(ParticleManager, m_nFXIndex);
  this->strike_cast_range = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "strike_cast_range", -1, 0);
  CDOTA_Ability_MonkeyKing_Boundless_Strike::StrikeInLine(this);
  z = CDOTABaseAbility::GetCursorPosition(this).z;
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  vStrikeLoc = CDOTABaseAbility::GetCursorPosition(this);
  v7 = vStrikeLoc.x - AbsOrigin->x;
  v8 = vStrikeLoc.z - AbsOrigin->z;
  vStrikeDir.y = vStrikeLoc.y - AbsOrigin->y;
  vStrikeDir.x = v7;
  vStrikeDir.z = v8;
  v9 = CDOTABaseAbility::GetCaster(this);
  v10 = CBaseEntity::GetAbsOrigin(v9);
  v33 = v10->z;
  v35 = *v10;
  v11 = CDOTABaseAbility::GetCaster(this);
  angles = *CBaseEntity::GetAbsAngles(v11);
  AngleVectors(&angles, &vecFwd, &vecRight, &vecUp);
  v12 = LODWORD(z);
  v12.m128_f32[0] = z - v33;
  if ( (z - v33) >= 0.0 )
  {
    if ( v12.m128_f32[0] <= 63.0 )
      goto LABEL_5;
    if ( v12.m128_f32[0] >= 0.0 )
      goto LABEL_4;
    goto LABEL_9;
  }
  if ( v12.m128_f32[0] < -63.0 )
  {
LABEL_9:
    v12 = _mm_xor_ps(v12, 0x80000000);
LABEL_4:
    v13.m128_i32[0] = 1132593152;
    v14 = _mm_cmpge_ss(v12, v13);
    LODWORD(v33) = _mm_andnot_ps(v14, LODWORD(z)).m128_u32[0] | LODWORD(v33) & v14.m128_i32[0];
  }
LABEL_5:
  vStrikeDir.z = 0.0;
  if ( VectorNormalize(&vStrikeDir) < 0.0099999998 )
  {
    v28 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v28);
    AngleVectors(AbsAngles, &vStrikeDir, 0, 0);
  }
  strike_cast_range = this->strike_cast_range;
  vStrikeLoc = vStrikeDir;
  v31 = strike_cast_range;
  VectorNormalize(&vStrikeLoc);
  x_low = LODWORD(vStrikeLoc.x);
  *x_low.m128i_i32 = vStrikeLoc.x * v31;
  v17 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
  v30 = vStrikeLoc.y * v31;
  v32 = v31 * vStrikeLoc.z;
  v18 = CDOTABaseAbility::GetCaster(this);
  v19 = CBaseEntity::GetAbsOrigin(v18);
  v20 = v30 + v19->y;
  v21 = v32 + v19->z;
  vStrikeLoc.x = v17 + v19->x;
  vStrikeLoc.y = v20;
  vStrikeLoc.z = v21;
  AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                            this,
                            "particles/units/heroes/hero_monkey_king/monkey_king_strike.vpcf",
                            8,
                            0,
                            0);
  v23 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v23, AbilityParticleEffect, 0, *&v35.x, v33);
  v24 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlOrientation(
    v24,
    AbilityParticleEffect,
    0,
    *&vecFwd.x,
    vecFwd.z,
    *&vecRight.x,
    vecRight.z,
    *&vecUp.x,
    vecUp.z);
  v25 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v25, AbilityParticleEffect, 1, *&vStrikeLoc.x, vStrikeLoc.z);
  v26 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v26, AbilityParticleEffect);
  v27 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v27, 1517, 0.1, 0.1, 9, 0, 1.0);
}


// CDOTA_Ability_MonkeyKing_Boundless_Strike::StrikeInLine  (line 876, @0x0000000002c848b0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CDOTA_BaseNPC*>, CopyConstruct<Vector>, DotProduct, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetPaddedCollisionRadius, GetParent, GetTeamNumber, GrowMemory, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsValid, LookupEntity, NormalizeInPlace, Purge, RemoveAll, ToDOTABaseNPC, VectorAdd, VectorMultiply, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator*, operator*=, operator+, operator+=, operator-, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CGameSceneNode::GetOwnerEntity, VectorNormalize, CBaseEntity::GetModel, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CBaseAnimating::GetAttachment, CBaseEntity::GetAbsAngles (37 total)
// callers: CDOTA_Ability_MonkeyKing_Boundless_Strike::OnSpellStart
// strings: "strike_radius", "modifier_monkey_king_boundless_strike_crit", "modifier_monkey_king_boundless_strike_stun", "attach_hitloc", "modifier_monkey_king_quadruple_tap_bonuses", "Hero_MonkeyKing.Strike.Impact" (7 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_MonkeyKing_Boundless_Strike::StrikeInLine(
        CDOTA_Ability_MonkeyKing_Boundless_Strike *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rbx
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  const Vector *v6; // rax
  vec_t v7; // xmm1_4
  vec_t v8; // xmm0_4
  void (__fastcall *v9)(IGameModelInfo *, CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *, Vector *, Vector *); // r12
  CDOTA_BaseNPC *v10; // rax
  __m128i x_low; // xmm6
  float v12; // ebx
  __m128i y_low; // xmm6
  CDOTA_BaseNPC *v14; // rax
  const Vector *v15; // rax
  __m128i v16; // xmm6
  vec_t v17; // xmm2_4
  vec_t v18; // xmm1_4
  __m128i v19; // xmm5
  float strike_cast_range; // xmm0_4
  float v21; // ebx
  CDOTA_BaseNPC *v22; // rax
  const Vector *v23; // rax
  vec_t v24; // xmm0_4
  vec_t v25; // xmm2_4
  vec_t v26; // xmm1_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  CDOTA_BaseNPC *v29; // rbx
  CDOTA_BaseNPC *v30; // rax
  float v31; // xmm1_4
  CDOTA_BaseNPC *v32; // rax
  CDOTA_BaseNPC *v33; // rax
  CDOTA_BaseNPC *v34; // rax
  CDOTA_BaseNPC *v35; // rax
  CDOTA_BaseNPC *v36; // rbx
  CDOTA_BaseNPC *v37; // rax
  __int64 v38; // r12
  int v39; // r15d
  CHandle<CBaseEntity> *v40; // rdx
  uint32 m_Index; // eax
  __int16 v42; // cx
  CEntityIdentity *v43; // rdx
  CEntityIdentity *v44; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  CDOTA_BaseNPC *v46; // rax
  CDOTA_BaseNPC *v47; // rax
  __int64 m_Size; // r14
  int v49; // eax
  CDOTA_BaseNPC **v50; // rax
  CDOTA_BaseNPC *v51; // rax
  const Vector *v52; // r14
  const Vector *v53; // rax
  float v54; // xmm0_4
  double v55; // xmm1_8
  float v56; // xmm1_4
  __m128i v57; // xmm3
  float v58; // xmm1_4
  int v59; // r14d
  const Vector *v60; // rax
  float v61; // xmm4_4
  __int64 v62; // r14
  float v63; // xmm5_4
  int v64; // xmm6_4
  int v65; // eax
  Vector *v66; // rax
  unsigned __int8 m_Value; // r14
  unsigned __int64 v68; // rax
  CDOTA_BaseNPC *v69; // rax
  CDOTA_BaseNPC *v70; // rax
  CDOTA_AttackRecord *AttackRecord; // r14
  CDOTA_BaseNPC *v72; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v74; // rax
  CDOTA_BaseNPC *v75; // rax
  const QAngle *AbsAngles; // rax
  CDOTA_Buff *pBuff; // [rsp+28h] [rbp-1E8h]
  float v78; // [rsp+44h] [rbp-1CCh]
  float v79; // [rsp+48h] [rbp-1C8h]
  float v80; // [rsp+4Ch] [rbp-1C4h]
  int nSegments; // [rsp+50h] [rbp-1C0h]
  float flRadius; // [rsp+54h] [rbp-1BCh]
  int i; // [rsp+60h] [rbp-1B0h]
  float v84; // [rsp+64h] [rbp-1ACh]
  float x; // [rsp+68h] [rbp-1A8h]
  float v86; // [rsp+6Ch] [rbp-1A4h]
  float v87; // [rsp+70h] [rbp-1A0h]
  float v88; // [rsp+70h] [rbp-1A0h]
  float v89; // [rsp+70h] [rbp-1A0h]
  float v90; // [rsp+70h] [rbp-1A0h]
  int nFXIndex; // [rsp+74h] [rbp-19Ch]
  float nFXIndexa; // [rsp+74h] [rbp-19Ch]
  int nFXIndexb; // [rsp+74h] [rbp-19Ch]
  int nFXIndexc; // [rsp+74h] [rbp-19Ch]
  CDOTA_BaseNPC *pNPC; // [rsp+88h] [rbp-188h] BYREF
  Vector vStrikeDir; // [rsp+90h] [rbp-180h] BYREF
  Vector mins; // [rsp+A0h] [rbp-170h] BYREF
  Vector maxs; // [rsp+B0h] [rbp-160h] BYREF
  Vector vStartPos; // [rsp+C0h] [rbp-150h] BYREF
  Vector vEndPos; // [rsp+D0h] [rbp-140h] BYREF
  Vector vecPosition; // [rsp+E0h] [rbp-130h] BYREF
  QAngle angles; // [rsp+F0h] [rbp-120h] BYREF
  Vector vecFwd; // [rsp+100h] [rbp-110h] BYREF
  Vector vecRight; // [rsp+110h] [rbp-100h] BYREF
  Vector vecUp; // [rsp+120h] [rbp-F0h] BYREF
  Vector vStrikeLoc; // [rsp+130h] [rbp-E0h] BYREF
  CUtlVector<CDOTA_BaseNPC*,CUtlMemory<CDOTA_BaseNPC*,int> > struckEntities; // [rsp+140h] [rbp-D0h] BYREF
  CUtlVector<Vector,CUtlMemory<Vector,int> > struckEntityPositions; // [rsp+160h] [rbp-B0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+180h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+1A0h] [rbp-70h] BYREF
  KeyValues kv2; // [rsp+1C0h] [rbp-50h] BYREF
  unsigned __int64 v113; // [rsp+1D8h] [rbp-38h]

  v113 = __readfsqword(0x28u);
  flRadius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "strike_radius", -1, 0);
  *&nFXIndex = flRadius * 0.5;
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  m_pParent = this->m_pGameSceneNode->m_pParent;
  OwnerEntity = 0;
  if ( m_pParent != 0 )
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
  v6 = CBaseEntity::GetAbsOrigin(OwnerEntity);
  v7 = v6->x - AbsOrigin->x;
  v8 = v6->y - AbsOrigin->y;
  vStrikeDir.z = 0.0;
  vStrikeDir.x = v7;
  vStrikeDir.y = v8;
  if ( VectorNormalize(&vStrikeDir) < 0.0099999998 )
  {
    v75 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v75);
    AngleVectors(AbsAngles, &vStrikeDir, 0, 0);
  }
  v9 = *(modelinfo->_vptr_IAppSystem + 16);
  v10 = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::GetModel(&entities, v10);
  v9(modelinfo, &entities, &mins, &maxs);
  x_low = LODWORD(vStrikeDir.x);
  *x_low.m128i_i32 = vStrikeDir.x * (maxs.x - mins.x);
  v12 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
  y_low = LODWORD(vStrikeDir.y);
  *y_low.m128i_i32 = vStrikeDir.y * (maxs.x - mins.x);
  LODWORD(v9) = _mm_cvtsi128_si32(y_low);
  v87 = (maxs.x - mins.x) * vStrikeDir.z;
  v14 = CDOTABaseAbility::GetCaster(this);
  v15 = CBaseEntity::GetAbsOrigin(v14);
  v16 = LODWORD(vStrikeDir.x);
  v17 = v12 + v15->x;
  v18 = *&v9 + v15->y;
  vStartPos.z = v87 + v15->z;
  v19 = LODWORD(vStrikeDir.y);
  strike_cast_range = this->strike_cast_range;
  vStartPos.x = v17;
  vStartPos.y = v18;
  *v16.m128i_i32 = vStrikeDir.x * strike_cast_range;
  *v19.m128i_i32 = vStrikeDir.y * strike_cast_range;
  v21 = COERCE_FLOAT(_mm_cvtsi128_si32(v16));
  LODWORD(v9) = _mm_cvtsi128_si32(v19);
  v88 = strike_cast_range * vStrikeDir.z;
  v22 = CDOTABaseAbility::GetCaster(this);
  v23 = CBaseEntity::GetAbsOrigin(v22);
  v24 = v88 + v23->z;
  v25 = v21 + v23->x;
  x = vStrikeDir.x;
  struckEntities.m_Size = 0;
  v26 = *&v9 + v23->y;
  vEndPos.z = v24;
  vEndPos.x = v25;
  v80 = *&nFXIndex * vStrikeDir.x;
  v86 = -vStrikeDir.y;
  v27 = this->strike_cast_range;
  vEndPos.y = v26;
  struckEntities.m_Memory.m_pMemory = 0;
  struckEntities.m_Memory.m_nAllocationCount = 0;
  v79 = *&nFXIndex * vStrikeDir.y;
  struckEntities.m_Memory.m_nGrowSize = 0;
  struckEntityPositions.m_Size = 0;
  struckEntityPositions.m_Memory.m_pMemory = 0;
  struckEntityPositions.m_Memory.m_nAllocationCount = 0;
  struckEntityPositions.m_Memory.m_nGrowSize = 0;
  v78 = *&nFXIndex * vStrikeDir.z;
  nSegments = (v27 / *&nFXIndex);
  KeyValues::KeyValues(&kv, "modifier_monkey_king_boundless_strike_crit");
  KeyValues::SetFloat(&kv, "duration", v28);
  v29 = CDOTABaseAbility::GetCaster(this);
  v30 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v30, v29, this, "modifier_monkey_king_boundless_strike_crit", &kv, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_duration", -1, 0);
  KeyValues::KeyValues(&kv2, "modifier_monkey_king_boundless_strike_stun");
  KeyValues::SetFloat(&kv2, "duration", v31);
  v32 = CDOTABaseAbility::GetCaster(this);
  CBaseAnimating::GetAttachment(v32, "attach_hitloc", &vecPosition, &angles);
  v33 = CDOTABaseAbility::GetCaster(this);
  angles = *CBaseEntity::GetAbsAngles(v33);
  AngleVectors(&angles, &vecFwd, &vecRight, &vecUp);
  v34 = CDOTABaseAbility::GetCaster(this);
  pBuff = CDOTA_BaseNPC::FindModifierByName(v34, "modifier_monkey_king_quadruple_tap_bonuses", 0);
  v35 = CDOTABaseAbility::GetCaster(this);
  vStrikeLoc = *CBaseEntity::GetAbsOrigin(v35);
  if ( nSegments > 0 )
  {
    for ( i = 0; i != nSegments; ++i )
    {
      entities.m_Size = 0;
      entities.m_Memory.m_nAllocationCount = 0;
      entities.m_Memory.m_nGrowSize = 0;
      entities.m_Memory.m_pMemory = 0;
      vStrikeLoc.x = v80 + vStrikeLoc.x;
      vStrikeLoc.y = v79 + vStrikeLoc.y;
      vStrikeLoc.z = v78 + vStrikeLoc.z;
      v36 = CDOTABaseAbility::GetCaster(this);
      v37 = CDOTABaseAbility::GetCaster(this);
      FindUnitsInRadius(v37->m_iTeamNum.m_Value, &vStrikeLoc, v36, flRadius, &entities, 3, 19, 80, 0, 0);
      if ( entities.m_Size > 0 )
      {
        v38 = 0;
        v39 = 0;
        do
        {
          v40 = &entities.m_Memory.m_pMemory[v38];
          m_Index = entities.m_Memory.m_pMemory[v38].m_Index;
          if ( m_Index + 2 <= 1
            || (v42 = v40->m_Index,
                (v43 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v40->m_Index) >> 9) & 0x3F]) == 0)
            || (v44 = &v43[v42 & 0x1FF]) == 0
            || m_Index != v44->m_EHandle.m_Index
            || (m_pInstance = v44->m_pInstance, v44->m_pInstance == 0)
            || !m_pInstance->m_bIsDOTANPC )
          {
            m_pInstance = 0;
          }
          pNPC = m_pInstance;
          if ( CDOTABaseAbility::GetCaster(this) != m_pInstance
            && CUtlVectorBase<CDOTA_BaseNPC *,CUtlMemory<CDOTA_BaseNPC *,int>>::Find(&struckEntities, &pNPC) == -1 )
          {
            m_Size = struckEntities.m_Size;
            v49 = struckEntities.m_Size;
            if ( struckEntities.m_Size == struckEntities.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<CDOTA_BaseNPC *,int>::Grow(&struckEntities.m_Memory, 1);
              v49 = struckEntities.m_Size;
            }
            struckEntities.m_Size = v49 + 1;
            v50 = &struckEntities.m_Memory.m_pMemory[m_Size];
            if ( v50 != 0 )
              *v50 = m_pInstance;
            v51 = CDOTABaseAbility::GetCaster(this);
            v52 = CBaseEntity::GetAbsOrigin(v51);
            v53 = CBaseEntity::GetAbsOrigin(m_pInstance);
            v54 = (((v53->x - v52->x) * v86) + ((v53->y - v52->y) * x)) + ((v53->z - v52->z) * 0.0);
            v55 = ((m_pInstance->m_flHullRadius + m_pInstance->m_flCollisionPadding) * 3.0) - fabs(v54);
            if ( v55 < 0.0 )
            {
              nFXIndexa = 0.0;
              v56 = 0.0;
            }
            else
            {
              v56 = v55;
              nFXIndexa = 0.0 * v56;
            }
            v57 = LODWORD(v86);
            *v57.m128i_i32 = v86 * v56;
            v58 = v56 * x;
            *&v59 = COERCE_FLOAT(_mm_cvtsi128_si32(v57));
            v89 = v58;
            if ( v54 < 0.0 )
            {
              v59 ^= 0x80000000;
              v89 = -v58;
              nFXIndexa = -nFXIndexa;
            }
            v60 = CBaseEntity::GetAbsOrigin(m_pInstance);
            v61 = *&v59;
            v62 = struckEntityPositions.m_Size;
            v63 = v89 + v60->y;
            *&v64 = nFXIndexa + v60->z;
            v84 = v61 + v60->x;
            v65 = struckEntityPositions.m_Size;
            v90 = v63;
            nFXIndexb = v64;
            if ( struckEntityPositions.m_Size == struckEntityPositions.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<Vector,int>::Grow(&struckEntityPositions.m_Memory, 1);
              v65 = struckEntityPositions.m_Size;
            }
            struckEntityPositions.m_Size = v65 + 1;
            v66 = &struckEntityPositions.m_Memory.m_pMemory[v62];
            if ( v66 != 0 )
            {
              v66->x = v84;
              v66->y = v90;
              LODWORD(v66->z) = nFXIndexb;
            }
            m_Value = m_pInstance->m_iTeamNum.m_Value;
            if ( m_Value != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
            {
              v68 = m_pInstance->m_nUnitState64.m_Value;
              if ( (v68 & 0x200) == 0 && !m_pInstance->m_bIsWaitingToSpawn.m_Value && (v68 & 0x100) == 0 )
              {
                v69 = CDOTABaseAbility::GetCaster(this);
                CDOTA_BaseNPC::AddNewModifier(
                  m_pInstance,
                  v69,
                  this,
                  "modifier_monkey_king_boundless_strike_stun",
                  &kv2,
                  0);
                v70 = CDOTABaseAbility::GetCaster(this);
                AttackRecord = CDOTA_BaseNPC::CreateAttackRecord(v70, m_pInstance, 0, 1, 0, 1, 1);
                v72 = CDOTABaseAbility::GetCaster(this);
                nFXIndexc = CDOTABaseAbility::CreateAbilityParticleEffect(
                              this,
                              "particles/units/heroes/hero_monkey_king/monkey_king_strike_slow_impact.vpcf",
                              2,
                              v72,
                              0);
                ParticleManager = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControlEnt(
                  ParticleManager,
                  nFXIndexc,
                  0,
                  m_pInstance,
                  1,
                  0,
                  vec3_invalid,
                  1);
                if ( AttackRecord != 0 )
                {
                  v74 = CDOTABaseAbility::GetCaster(this);
                  CDOTA_BaseNPC::PerformAttack(v74, AttackRecord, m_pInstance, 1, 0, 1, 1);
                }
              }
            }
          }
          ++v39;
          ++v38;
        }
        while ( entities.m_Size > v39 );
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
  if ( pBuff != 0 )
  {
    (*(pBuff->_vptr_CDOTA_Buff + 26))(pBuff);
    if ( (*(pBuff->_vptr_CDOTA_Buff + 27))(pBuff) <= 0 )
      CDOTA_Buff::Destroy(pBuff, 0, 0, 0);
  }
  v46 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSoundLocationWithCaster(&vStartPos, "Hero_MonkeyKing.Strike.Impact", v46);
  DOTA_EmitSoundLocation(&vEndPos, "Hero_MonkeyKing.Strike.Impact", 0);
  v47 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v47, "modifier_monkey_king_boundless_strike_crit");
  KeyValues::~KeyValues(&kv2);
  KeyValues::~KeyValues(&kv);
  struckEntityPositions.m_Size = 0;
  if ( (struckEntityPositions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&struckEntityPositions.m_Memory);
    if ( (struckEntityPositions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&struckEntityPositions.m_Memory);
  }
  struckEntities.m_Size = 0;
  if ( (struckEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&struckEntities.m_Memory);
    if ( (struckEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&struckEntities.m_Memory);
  }
}


// CDOTA_Modifier_MonkeyKing_Strike_Stun::~CDOTA_Modifier_MonkeyKing_Strike_Stun  (line 994, @0x0000000002c918b0, libserver.so)  // inlines: ~CDOTA_Modifier_Stunned
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_MonkeyKing_Strike_Stun::~CDOTA_Modifier_MonkeyKing_Strike_Stun(
        CDOTA_Modifier_MonkeyKing_Strike_Stun *const this)
{
  this->_vptr_CDOTA_Buff = &off_411CD70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_MonkeyKing_Strike_Stun::~CDOTA_Modifier_MonkeyKing_Strike_Stun  (line 994, @0x0000000002c918d0, libserver.so)  // inlines: ~CDOTA_Modifier_MonkeyKing_Strike_Stun, ~CDOTA_Modifier_Stunned
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_MonkeyKing_Strike_Stun::~CDOTA_Modifier_MonkeyKing_Strike_Stun(
        CDOTA_Modifier_MonkeyKing_Strike_Stun *const this)
{
  this->_vptr_CDOTA_Buff = &off_411CD70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_MonkeyKing_Strike_Crit::~CDOTA_Modifier_MonkeyKing_Strike_Crit  (line 1006, @0x0000000002c91bd0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_MonkeyKing_Strike_Crit::~CDOTA_Modifier_MonkeyKing_Strike_Crit(
        CDOTA_Modifier_MonkeyKing_Strike_Crit *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E0B30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_MonkeyKing_Strike_Crit::~CDOTA_Modifier_MonkeyKing_Strike_Crit  (line 1006, @0x0000000002c91bf0, libserver.so)  // inlines: ~CDOTA_Modifier_MonkeyKing_Strike_Crit
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_MonkeyKing_Strike_Crit::~CDOTA_Modifier_MonkeyKing_Strike_Crit(
        CDOTA_Modifier_MonkeyKing_Strike_Crit *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E0B30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_MonkeyKing_Strike_Crit::OnCreated  (line 1026, @0x0000000002c70650, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "strike_crit_mult"
void __fastcall CDOTA_Modifier_MonkeyKing_Strike_Crit::OnCreated(
        CDOTA_Modifier_MonkeyKing_Strike_Crit *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->strike_crit_mult = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "strike_crit_mult", -1, 0);
  else
    this->strike_crit_mult = 0;
}


// CDOTA_Modifier_MonkeyKing_Strike_Crit::CheckState  (line 1035, @0x0000000002c1d470, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_MonkeyKing_Strike_Crit::CheckState(
        CDOTA_Modifier_MonkeyKing_Strike_Crit *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x10000uLL;
  buffState->m_nDisabledStateMask &= ~0x10000uLL;
}


// CDOTA_Modifier_MonkeyKing_Strike_Crit::DeclareFunctions  (line 1045, @0x0000000002c1d490, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_MonkeyKing_Strike_Crit::GetModifierPreAttack_CriticalStrike(CModifierParams const&)
void __fastcall CDOTA_Modifier_MonkeyKing_Strike_Crit::DeclareFunctions(
        CDOTA_Modifier_MonkeyKing_Strike_Crit *const this)
{
  this->m_Functions[83].__pfn = CDOTA_Modifier_MonkeyKing_Strike_Crit::GetModifierPreAttack_CriticalStrike;
  this->m_Functions[83].__delta = 0;
}


// CDOTA_Modifier_MonkeyKing_Strike_Crit::GetModifierPreAttack_CriticalStrike  (line 1052, @0x0000000002c63b10, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent
// strings: "special_bonus_unique_monkey_king"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_Strike_Crit::GetModifierPreAttack_CriticalStrike(
        CDOTA_Modifier_MonkeyKing_Strike_Crit *const this,
        const CModifierParams *const params)
{
  int strike_crit_mult; // r12d
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  __m128i v7; // xmm0
  __m128i v9; // xmm1
  uint32 m_Index; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CEntityInstance *m_pInstance; // rax
  uint32 v14; // edx
  CEntityIdentity *v15; // rcx
  CEntityIdentity *v16; // rcx
  CEntityInstance *v17; // rdx
  int m_Id; // ecx
  ModifierVariant_t result; // 0:rax.16

  strike_crit_mult = this->strike_crit_mult;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_monkey_king", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    strike_crit_mult += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  if ( params->bTooltip )
  {
    *v7.m128i_i32 = strike_crit_mult;
    *&result.m_eType = (_mm_cvtsi128_si32(v7) << 32) | 1;
LABEL_6:
    result.m_szVal = 0;
    return result;
  }
  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) == 0 )
  {
    m_Index = params->htarget.m_Index;
    if ( m_Index + 2 <= 1
      || (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
      || (v12 = &v11[params->htarget.m_Index & 0x1FF]) == 0
      || m_Index != v12->m_EHandle.m_Index
      || (m_pInstance = v12->m_pInstance, v12->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    v14 = params->hattacker.m_Index;
    if ( v14 + 2 <= 1
      || (v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
      || (v16 = &v15[params->hattacker.m_Index & 0x1FF]) == 0
      || v14 != v16->m_EHandle.m_Index
      || (v17 = v16->m_pInstance, v16->m_pInstance == 0)
      || BYTE3(v17[7]._vptr_IHandleEntity) == 0 )
    {
      v17 = 0;
    }
    if ( m_pInstance != 0 )
    {
      m_Id = m_pInstance[43].m_iszPrivateVScripts.u.m_Id;
      if ( (m_Id & 0x193) != 0
        && (m_Id & 0x10) == 0
        && v17 != 0
        && HIBYTE(v17[7].m_CScriptComponent) != HIBYTE(m_pInstance[7].m_CScriptComponent) )
      {
        *v9.m128i_i32 = strike_crit_mult;
        *&result.m_eType = (_mm_cvtsi128_si32(v9) << 32) | 1;
        goto LABEL_6;
      }
    }
  }
  return 1uLL;
}


// CDOTA_Ability_MonkeyKing_TreeDance::CastFilterResult  (line 1085, @0x0000000002c21f80, libserver.so)  // inlines: FastSqrt, Length2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CBaseEntity::GetAbsOrigin
// strings: "modifier_monkey_king_bounce_perch"
int __fastcall CDOTA_Ability_MonkeyKing_TreeDance::CastFilterResult(
        CDOTA_Ability_MonkeyKing_TreeDance *const this,
        CDOTA_Tree *pTree)
{
  CDOTA_BaseNPC *Caster; // rax
  const CBaseEntity *v5; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v7; // rax
  const Vector *v8; // rax
  float v9; // xmm1_4
  int result; // eax
  float fDist; // [rsp+0h] [rbp-20h]

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_monkey_king_bounce_perch", 0) == 0 )
    return 0;
  v5 = (*(pTree->_vptr_CObstructionObject + 8))(pTree);
  if ( v5 == 0 )
    return 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = CDOTABaseAbility::GetCaster(this);
  v8 = CBaseEntity::GetAbsOrigin(v7);
  fDist = fsqrt(((v8->x - AbsOrigin->x) * (v8->x - AbsOrigin->x)) + ((v8->y - AbsOrigin->y) * (v8->y - AbsOrigin->y)));
  v9 = (*(this->_vptr_IHandleEntity + 229))(this, &vec3_origin, 0);
  result = 0;
  if ( fDist > v9 )
    return 23;
  return result;
}


// CDOTA_Ability_MonkeyKing_TreeDance::GetCustomCastError  (line 1117, @0x0000000002c22060, libserver.so)  // inlines: FastSqrt, Length2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CBaseEntity::GetAbsOrigin
// strings: "modifier_monkey_king_bounce_perch", "#dota_hud_error_tree_dance_tree_target_out_of_range"
const char *__fastcall CDOTA_Ability_MonkeyKing_TreeDance::GetCustomCastError(
        CDOTA_Ability_MonkeyKing_TreeDance *const this,
        CDOTA_Tree *pTree)
{
  CDOTA_BaseNPC *Caster; // rax
  const CBaseEntity *v5; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v7; // rax
  const Vector *v8; // rax
  float v9; // xmm1_4
  const char *result; // rax
  float fDist; // [rsp+0h] [rbp-20h]

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_monkey_king_bounce_perch", 0) == 0 )
    return "";
  v5 = (*(pTree->_vptr_CObstructionObject + 8))(pTree);
  if ( v5 == 0 )
    return "";
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = CDOTABaseAbility::GetCaster(this);
  v8 = CBaseEntity::GetAbsOrigin(v7);
  fDist = fsqrt(((v8->x - AbsOrigin->x) * (v8->x - AbsOrigin->x)) + ((v8->y - AbsOrigin->y) * (v8->y - AbsOrigin->y)));
  v9 = (*(this->_vptr_IHandleEntity + 229))(this, &vec3_origin, 0);
  result = "";
  if ( fDist > v9 )
    return "#dota_hud_error_tree_dance_tree_target_out_of_range";
  return result;
}


// CDOTA_Ability_MonkeyKing_TreeDance::OnAbilityPhaseStart  (line 1188, @0x0000000002c49210, libserver.so)  // inlines: FastSqrt, IncrementRefCount, Length2D, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::GetCursorTarget, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_MonkeyKing_Spring::OnRefCountModified, CDOTA_PlayerResource::GetPlayer, SendHudErrorToPlayer
// strings: "modifier_monkey_king_bounce_perch", "monkey_king_primal_spring", "#dota_hud_error_tree_dance_tree_target_out_of_range"
bool __fastcall CDOTA_Ability_MonkeyKing_TreeDance::OnAbilityPhaseStart(CDOTA_Ability_MonkeyKing_TreeDance *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CBaseEntity *v3; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v5; // rax
  const Vector *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_Ability_MonkeyKing_Spring *AbilityByName; // rdi
  bool result; // al
  CDOTA_BaseNPC *v10; // rax
  CDOTAPlayer *Player; // r12
  CBaseEntity *CursorTarget; // rdx
  float fDist; // [rsp+0h] [rbp-20h]

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_monkey_king_bounce_perch", 0) != 0
    && CDOTABaseAbility::GetCursorTarget(this) != 0
    && (v3 = CDOTABaseAbility::GetCursorTarget(this),
        AbsOrigin = CBaseEntity::GetAbsOrigin(v3),
        v5 = CDOTABaseAbility::GetCaster(this),
        v6 = CBaseEntity::GetAbsOrigin(v5),
        (fDist = fsqrt(((v6->x - AbsOrigin->x) * (v6->x - AbsOrigin->x)) + ((v6->y - AbsOrigin->y)
                                                                          * (v6->y - AbsOrigin->y)))) > (*(this->_vptr_IHandleEntity + 229))(this, &vec3_origin, 0)) )
  {
    v10 = CDOTABaseAbility::GetCaster(this);
    Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, v10->m_iLastAbilityPlayer);
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    if ( CursorTarget == 0 || (result = 0, !CursorTarget->m_bIsDOTANPC) )
    {
      SendHudErrorToPlayer("#dota_hud_error_tree_dance_tree_target_out_of_range", Player);
      return 0;
    }
  }
  else
  {
    v7 = CDOTABaseAbility::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v7, "monkey_king_primal_spring", 0);
    result = 1;
    if ( AbilityByName != 0 )
    {
      ++AbilityByName->m_nRefCount;
      CDOTA_Ability_MonkeyKing_Spring::OnRefCountModified(AbilityByName);
      return 1;
    }
  }
  return result;
}


// CDOTA_Ability_MonkeyKing_TreeDance::OnAbilityPhaseInterrupted  (line 1227, @0x0000000002c49360, libserver.so)  // inlines: DecrementRefCount
// calls: CDOTABaseAbility::OnAbilityPhaseInterrupted, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_MonkeyKing_Spring::OnRefCountModified
// strings: "monkey_king_primal_spring"
void __fastcall CDOTA_Ability_MonkeyKing_TreeDance::OnAbilityPhaseInterrupted(
        CDOTA_Ability_MonkeyKing_TreeDance *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Ability_MonkeyKing_Spring *AbilityByName; // rax
  int v4; // edx

  CDOTABaseAbility::OnAbilityPhaseInterrupted(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "monkey_king_primal_spring", 0);
  if ( AbilityByName != 0 )
  {
    v4 = 0;
    if ( AbilityByName->m_nRefCount - 1 >= 0 )
      v4 = AbilityByName->m_nRefCount - 1;
    AbilityByName->m_nRefCount = v4;
    CDOTA_Ability_MonkeyKing_Spring::OnRefCountModified(AbilityByName);
  }
}


// CDOTA_Ability_MonkeyKing_TreeDance::OnSpellStart  (line 1242, @0x0000000002c48d20, libserver.so)
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_Ability_MonkeyKing_TreeDance::LeapAt
void __fastcall CDOTA_Ability_MonkeyKing_TreeDance::OnSpellStart(CDOTA_Ability_MonkeyKing_TreeDance *const this)
{
  CBaseEntity *CursorTarget; // rax

  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  CDOTA_Ability_MonkeyKing_TreeDance::LeapAt(this, CursorTarget, vec3_origin, 0LL);
}


// CDOTA_Ability_MonkeyKing_TreeDance::LeapAt  (line 1252, @0x0000000002c48b30, libserver.so)  // inlines: SetBool, operator=
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, KeyValues::KeyValues, KeyValues::SetPtr, CBaseEntity::GetAbsOrigin, KeyValues::SetFloat, KeyValues::SetInt, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CDOTA_BaseNPC::RemoveModifierByName, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_Ability_MonkeyKing_TreeDance::OnSpellStart, CDOTA_Ability_MonkeyKing_Spring::OnChannelFinish
// strings: "modifier_monkey_king_bounce_leap", "vPosX", "vPosY", "vPosZ", "fSpringChanneledPercent", "modifier_monkey_king_bounce_perch" (7 total)
void __fastcall CDOTA_Ability_MonkeyKing_TreeDance::LeapAt(
        CDOTA_Ability_MonkeyKing_TreeDance *const this,
        CBaseEntity *pTarget,
        Vector vPos,
        __m128i fSpringChanneledPercent)
{
  float v4; // r14d
  CDOTA_BaseNPC *Caster; // rax
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  float v11; // xmm1_4
  CDOTA_BaseNPC *v12; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_BaseNPC *v14; // r12
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  KeyValues kv; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v18; // [rsp+30h] [rbp-38h]

  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(fSpringChanneledPercent));
  v18 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_monkey_king_bounce_leap", 0) == 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_monkey_king_bounce_leap");
    KeyValues::SetPtr(&kv, "target", pTarget);
    if ( pTarget != 0 )
      CBaseEntity::GetAbsOrigin(pTarget);
    KeyValues::SetFloat(&kv, "vPosX", v8);
    KeyValues::SetFloat(&kv, "vPosY", v9);
    KeyValues::SetFloat(&kv, "vPosZ", v10);
    KeyValues::SetFloat(&kv, "fSpringChanneledPercent", v11);
    v12 = CDOTABaseAbility::GetCaster(this);
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(v12, "modifier_monkey_king_bounce_perch", 0);
    KeyValues::SetInt(&kv, "JumpedFromTree", ModifierByName != 0);
    v14 = CDOTABaseAbility::GetCaster(this);
    v15 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v15, v14, this, "modifier_monkey_king_bounce_leap", &kv, 0);
    if ( v4 <= 0.0 )
    {
      v16 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::RemoveModifierByName(v16, "modifier_monkey_king_bounce_perch");
    }
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_MonkeyKing_TreeDance::OnUpgrade  (line 1286, @0x0000000002c616d0, libserver.so)  // inlines: GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "perched_jump_distance", "ground_jump_distance", "monkey_king_primal_spring"
void __fastcall CDOTA_Ability_MonkeyKing_TreeDance::OnUpgrade(CDOTA_Ability_MonkeyKing_TreeDance *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  this->perched_jump_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "perched_jump_distance", -1, 0);
  this->ground_jump_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "ground_jump_distance", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "monkey_king_primal_spring", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value < this->m_iLevel.m_Value )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_MonkeyKing_TreeDance::GetCastRange  (line 1303, @0x0000000002c61760, libserver.so)  // inlines: GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "modifier_monkey_king_bounce_perch", "perched_jump_distance", "ground_jump_distance"
int __fastcall CDOTA_Ability_MonkeyKing_TreeDance::GetCastRange(
        CDOTA_Ability_MonkeyKing_TreeDance *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // r13
  int LevelSpecialValue; // r12d

  Caster = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_monkey_king_bounce_perch", 0);
  this->perched_jump_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "perched_jump_distance", -1, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "ground_jump_distance", -1, 0);
  this->ground_jump_distance = LevelSpecialValue;
  if ( ModifierByName != 0 )
    LevelSpecialValue = this->perched_jump_distance;
  return LevelSpecialValue + (*(this->_vptr_IHandleEntity + 228))(this);
}


// CDOTA_Modifier_MonkeyKing_Bounce::~CDOTA_Modifier_MonkeyKing_Bounce  (line 1326, @0x0000000002c91b80, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_MonkeyKing_Bounce::~CDOTA_Modifier_MonkeyKing_Bounce(
        CDOTA_Modifier_MonkeyKing_Bounce *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E0E50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_MonkeyKing_Bounce::~CDOTA_Modifier_MonkeyKing_Bounce  (line 1326, @0x0000000002c91ba0, libserver.so)  // inlines: ~CDOTA_Modifier_MonkeyKing_Bounce
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_MonkeyKing_Bounce::~CDOTA_Modifier_MonkeyKing_Bounce(
        CDOTA_Modifier_MonkeyKing_Bounce *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E0E50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_MonkeyKing_Bounce::IsHidden  (line 1332, @0x0000000002c8acd0, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_Bounce::IsHidden(CDOTA_Modifier_MonkeyKing_Bounce *const this)
{
  return 1;
}


// CDOTA_Modifier_MonkeyKing_Bounce::IsPurgable  (line 1334, @0x0000000002c8ace0, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_Bounce::IsPurgable(CDOTA_Modifier_MonkeyKing_Bounce *const this)
{
  return 0;
}


// CDOTA_Modifier_MonkeyKing_Bounce::IsPermanent  (line 1335, @0x0000000002c8acf0, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_Bounce::IsPermanent(CDOTA_Modifier_MonkeyKing_Bounce *const this)
{
  return 1;
}


// CDOTA_Modifier_MonkeyKing_Bounce::DestroyOnExpire  (line 1336, @0x0000000002c8ad00, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_Bounce::DestroyOnExpire(CDOTA_Modifier_MonkeyKing_Bounce *const this)
{
  return 0;
}


// CDOTA_Modifier_MonkeyKing_Bounce::OnCreated  (line 1348, @0x0000000002c59420, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "jump_damage_cooldown"
void __fastcall CDOTA_Modifier_MonkeyKing_Bounce::OnCreated(
        CDOTA_Modifier_MonkeyKing_Bounce *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->jump_damage_cooldown = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                   Ability,
                                   "jump_damage_cooldown",
                                   -1,
                                   0);
  else
    this->jump_damage_cooldown = 0.0;
}


// CDOTA_Modifier_MonkeyKing_Bounce::DeclareFunctions  (line 1355, @0x0000000002c1d4b0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_MonkeyKing_Bounce::OnOrder(CModifierParams const&), CDOTA_Modifier_MonkeyKing_Bounce::OnTakeDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_MonkeyKing_Bounce::DeclareFunctions(CDOTA_Modifier_MonkeyKing_Bounce *const this)
{
  this->m_Functions[125].__pfn = CDOTA_Modifier_MonkeyKing_Bounce::OnOrder;
  this->m_Functions[125].__delta = 0;
  this->m_Functions[134].__delta = 0;
  this->m_Functions[134].__pfn = CDOTA_Modifier_MonkeyKing_Bounce::OnTakeDamage;
}


// CDOTA_Modifier_MonkeyKing_Bounce::OnOrder  (line 1363, @0x0000000002c35df0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, SetBool, TargetNPC, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: __stack_chk_fail, CDOTA_Buff::GetParent, CDOTA_BaseNPC::IsChanneling, CDOTA_BaseNPC::Interrupt, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::FindAbilityByName, CDOTA_PlayerResource::GetPlayer, SendHudErrorToPlayer, KeyValues::KeyValues, CEntityHandle::operator CEntityInstance*, KeyValues::SetFloat (18 total)
// strings: "modifier_monkey_king_bounce_perch", "monkey_king_tree_dance", "#dota_hud_error_tree_dance_cant_hop_yet", "modifier_monkey_king_bounce_leap", "modifier_monkey_king_arc_to_ground", "vPosX" (9 total)
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_Bounce::OnOrder(
        CDOTA_Modifier_MonkeyKing_Bounce *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  unsigned int v9; // ecx
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v13; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v15; // r13
  CDOTA_BaseNPC *v16; // rax
  CDOTAPlayer *Player; // rax
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  const CBaseEntity *v20; // rax
  float y; // xmm1_4
  float v22; // xmm1_4
  float v23; // xmm1_4
  CDOTA_BaseNPC *v24; // rbx
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  void (__fastcall *v27)(CDOTABaseAbility *); // rbx
  KeyValues kv; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v29; // [rsp+18h] [rbp-38h]

  v29 = __readfsqword(0x28u);
  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->hunit.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == m_pInstance )
        {
          v9 = params->nOrdertype - 1;
          if ( v9 <= 0xE && ((1LL << v9) & 0x600F) != 0 )
          {
            Parent = CDOTA_Buff::GetParent(this);
            if ( CDOTA_BaseNPC::IsChanneling(Parent) )
            {
              v11 = CDOTA_Buff::GetParent(this);
              CDOTA_BaseNPC::Interrupt(v11);
            }
            else
            {
              Caster = CDOTA_Buff::GetCaster(this);
              if ( CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_monkey_king_bounce_perch", 0) != 0 )
              {
                v13 = CDOTA_Buff::GetCaster(this);
                AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v13, "monkey_king_tree_dance", 0);
                v15 = AbilityByName;
                if ( AbilityByName != 0 )
                {
                  if ( (*(AbilityByName->_vptr_IHandleEntity + 245))(AbilityByName) != 0 )
                  {
                    if ( (*(v15->_vptr_IHandleEntity + 245))(v15) != 0 )
                    {
                      v18 = CDOTA_Buff::GetCaster(this);
                      if ( CDOTA_BaseNPC::FindModifierByName(v18, "modifier_monkey_king_bounce_leap", 0) == 0 )
                      {
                        v19 = CDOTA_Buff::GetCaster(this);
                        if ( CDOTA_BaseNPC::FindModifierByName(v19, "modifier_monkey_king_arc_to_ground", 0) == 0 )
                        {
                          KeyValues::KeyValues(&kv, "modifier_monkey_king_arc_to_ground");
                          v20 = CEntityHandle::operator CEntityInstance *(&params->htarget);
                          if ( v20 != 0 && v20->m_bIsDOTANPC )
                            y = CBaseEntity::GetAbsOrigin(v20)->y;
                          KeyValues::SetFloat(&kv, "vPosX", y);
                          KeyValues::SetFloat(&kv, "vPosY", v22);
                          KeyValues::SetFloat(&kv, "vPosZ", v23);
                          KeyValues::SetInt(&kv, "rightclick_hop", 1);
                          v24 = CDOTA_Buff::GetCaster(this);
                          v25 = CDOTA_Buff::GetCaster(this);
                          CDOTA_BaseNPC::AddNewModifier(v25, v24, v15, "modifier_monkey_king_arc_to_ground", &kv, 0);
                          v26 = CDOTA_Buff::GetCaster(this);
                          CDOTA_BaseNPC::RemoveModifierByName(v26, "modifier_monkey_king_bounce_perch");
                          v27 = *(v15->_vptr_IHandleEntity + 241);
                          (*(v15->_vptr_IHandleEntity + 242))(v15, 0xFFFFFFFFLL);
                          v27(v15);
                          KeyValues::~KeyValues(&kv);
                        }
                      }
                    }
                  }
                  else
                  {
                    v16 = CDOTA_Buff::GetCaster(this);
                    Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, v16->m_iLastAbilityPlayer);
                    if ( Player != 0 )
                      SendHudErrorToPlayer("#dota_hud_error_tree_dance_cant_hop_yet", Player);
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


// CDOTA_Modifier_MonkeyKing_Bounce::OnTakeDamage  (line 1433, @0x0000000002c49520, libserver.so)  // inlines: AttackerNPC, DecrementRefCount, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsOwnedByAnyPlayer, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName, CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetCooldownTimeRemaining, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_MonkeyKing_Spring::OnRefCountModified
// strings: "modifier_monkey_king_bounce_perch", "modifier_monkey_king_bounce_leap", "monkey_king_primal_spring"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_Bounce::OnTakeDamage(
        CDOTA_Modifier_MonkeyKing_Bounce *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v10; // rax
  CEntityInstance *v11; // rax
  CEntityInstance *v12; // r13
  CEntityInstance *v13; // rax
  int m_Id; // edx
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  CDOTA_Ability_MonkeyKing_Spring *AbilityByName; // rax
  int v19; // edx
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->hunit.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == m_pInstance )
        {
          Caster = CDOTA_Buff::GetCaster(this);
          result.m_szVal = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_monkey_king_bounce_perch", 0);
          *&result.m_eType = 1;
          if ( result.m_szVal != 0 )
            goto LABEL_6;
          v10 = CDOTA_Buff::GetCaster(this);
          if ( CDOTA_BaseNPC::FindModifierByName(v10, "modifier_monkey_king_bounce_leap", 0) == 0 )
          {
            v11 = CEntityHandle::operator CEntityInstance *(&params->hunit);
            if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
              v12 = v11;
            else
              v12 = 0;
            v13 = CEntityHandle::operator CEntityInstance *(&params->hattacker);
            if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 && v12 != 0 && params->fDamage > 0.0 )
            {
              m_Id = v13[43].m_iszPrivateVScripts.u.m_Id;
              if ( (m_Id & 1) != 0
                || v13[61].m_hPrivateScope.m_hScope != 0
                || (m_Id & 0x800) != 0
                || (*(v13->_vptr_IHandleEntity + 405))(v13) != 0 )
              {
                Ability = CDOTA_Buff::GetAbility(this);
                if ( this->jump_damage_cooldown > CDOTABaseAbility::GetCooldownTimeRemaining(Ability) )
                {
                  v16 = CDOTA_Buff::GetAbility(this);
                  (*(v16->_vptr_IHandleEntity + 241))(v16, this->jump_damage_cooldown);
                  v17 = CDOTA_Buff::GetCaster(this);
                  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v17, "monkey_king_primal_spring", 0);
                  if ( AbilityByName != 0 )
                  {
                    v19 = 0;
                    if ( AbilityByName->m_nRefCount - 1 >= 0 )
                      v19 = AbilityByName->m_nRefCount - 1;
                    AbilityByName->m_nRefCount = v19;
                    CDOTA_Ability_MonkeyKing_Spring::OnRefCountModified(AbilityByName);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *&result.m_eType = 1;
LABEL_6:
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_MonkeyKing_BounceLeap::~CDOTA_Modifier_MonkeyKing_BounceLeap  (line 1477, @0x0000000002c91b00, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_MonkeyKing_BounceLeap::~CDOTA_Modifier_MonkeyKing_BounceLeap(
        CDOTA_Modifier_MonkeyKing_BounceLeap *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E1170;
  this->_vptr_CHorizontalMotionController = &off_45E1478;
  this->_vptr_CVerticalMotionController = &off_45E14B8;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_MonkeyKing_BounceLeap::~CDOTA_Modifier_MonkeyKing_BounceLeap  (line 1477, @0x0000000002c91b30, libserver.so)  // inlines: ~CDOTA_Modifier_MonkeyKing_BounceLeap
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_MonkeyKing_BounceLeap::~CDOTA_Modifier_MonkeyKing_BounceLeap(
        CDOTA_Modifier_MonkeyKing_BounceLeap *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E1170;
  this->_vptr_CHorizontalMotionController = &off_45E1478;
  this->_vptr_CVerticalMotionController = &off_45E14B8;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_MonkeyKing_BounceLeap::IsPurgable  (line 1489, @0x0000000002c8ad10, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_BounceLeap::IsPurgable(CDOTA_Modifier_MonkeyKing_BounceLeap *const this)
{
  return 0;
}


// CDOTA_Modifier_MonkeyKing_BounceLeap::IsHidden  (line 1492, @0x0000000002c8ad20, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_BounceLeap::IsHidden(CDOTA_Modifier_MonkeyKing_BounceLeap *const this)
{
  return 1;
}


// CDOTA_Modifier_MonkeyKing_BounceLeap::IsHorizontalMotionValidToApply  (line 1498, @0x0000000002c8ad30, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_MonkeyKing_BounceLeap::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_MonkeyKing_BounceLeap *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_MonkeyKing_BounceLeap::IsVerticalMotionValidToApply  (line 1499, @0x0000000002c8ad60, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_MonkeyKing_BounceLeap::IsVerticalMotionValidToApply(
        CDOTA_Modifier_MonkeyKing_BounceLeap *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_MonkeyKing_BounceLeap::OnCreated  (line 1548, @0x0000000002c5d2d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, FastSqrt, Get, GetBool, GetEHandle, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetSerialNumber, Length2D, Normalized, Set, SetBool, ToDOTABaseNPC, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::Destroy, CDOTA_Buff::GetCaster, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CBaseEntity::GetAbsOrigin, GetPositionOnGround, KeyValues::GetPtr (30 total)
// strings: "give_up_distance", "ground_jump_distance", "perched_vision", "modifier_monkey_king_arc_to_ground", "particles/units/heroes/hero_monkey_king/monkey_king_jump_trail.vpcf", "attach_hitloc" (20 total)
void __fastcall CDOTA_Modifier_MonkeyKing_BounceLeap::OnCreated(
        CDOTA_Modifier_MonkeyKing_BounceLeap *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  int m_nFXIndex; // r13d
  const CBaseAnimating *v13; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v15; // rax
  float v16; // xmm0_4
  CDOTA_BaseNPC *v17; // r13
  CDOTA_BaseNPC *v18; // rax
  const Vector *AbsOrigin; // rax
  _QWORD *Ptr; // rax
  __int64 v21; // rdx
  int v22; // eax
  __int16 v23; // cx
  float v24; // xmm1_4
  __m128i v25; // xmm0
  vec_t v26; // r13d
  float v27; // xmm1_4
  __m128i v28; // xmm0
  vec_t v29; // r15d
  float v30; // xmm1_4
  vec_t Float; // xmm0_4
  int Int; // r15d
  float v33; // xmm1_4
  float v34; // xmm0_4
  CDOTA_BaseNPC *v35; // rax
  const Vector *v36; // rax
  float v37; // xmm1_4
  float v38; // xmm0_4
  CDOTABaseAbility *v39; // rax
  int v40; // eax
  CDOTABaseAbility *v41; // rax
  CDOTABaseAbility *v42; // rax
  float v43; // xmm1_4
  CDOTABaseAbility *v44; // rax
  CDOTABaseAbility *v45; // rax
  float v46; // xmm1_4
  CDOTABaseAbility *v47; // r15
  CDOTA_BaseNPC *v48; // r14
  CDOTA_BaseNPC *v49; // rax
  float v50; // xmm1_4
  float v51; // xmm0_4
  float v52; // xmm5_4
  float v53; // xmm4_4
  CDOTA_BaseNPC *v54; // rax
  CDOTA_BaseNPC *v55; // rax
  CDOTALocomotor *v56; // rax
  CDOTABaseAbility *v57; // rax
  CDOTA_BaseNPC *v58; // rax
  CDOTALocomotor *v59; // rax
  CDOTABaseAbility *v60; // r13
  void (__fastcall *v61)(CDOTABaseAbility *, float); // r14
  CDOTABaseAbility *v62; // rax
  float v63; // xmm0_4
  CDOTA_BaseNPC *v64; // rax
  int BuffParticleEffect; // eax
  float v66; // xmm1_4
  CDOTA_BaseNPC *v67; // rax
  float ground_jump_distance; // xmm0_4
  vec_t v69; // xmm2_4
  vec_t v70; // xmm1_4
  vec_t v71; // xmm0_4
  CDOTABaseAbility *v72; // rax
  CDOTABaseAbility *v73; // rax
  float v74; // xmm1_4
  float fDuration; // [rsp+14h] [rbp-6Ch]
  float fDist; // [rsp+18h] [rbp-68h]
  __int64 perched_jump_distance; // [rsp+20h] [rbp-60h] BYREF
  float z; // [rsp+28h] [rbp-58h]
  KeyValues kv; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v80; // [rsp+48h] [rbp-38h]
  Vector PositionOnGround; // 0:kr00_12.12

  v80 = __readfsqword(0x28u);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->give_up_distance = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "give_up_distance", -1, 0);
  else
    this->give_up_distance = 0.0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
    this->ground_jump_distance = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "ground_jump_distance", -1, 0);
  else
    this->ground_jump_distance = 0.0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
    this->perched_vision = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "perched_vision", -1, 0);
  else
    this->perched_vision = 0.0;
  Parent = CDOTA_Buff::GetParent(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_monkey_king_arc_to_ground", 0);
  if ( ModifierByName != 0 )
    CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
  Caster = CDOTA_Buff::GetCaster(this);
  if ( Caster != 0 && Caster->m_bIsDOTANPC )
  {
    v10 = CDOTA_Buff::GetParent(this);
    this->m_nFXIndex = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/units/heroes/hero_monkey_king/monkey_king_jump_trail.vpcf",
                         1,
                         v10,
                         0);
    v11 = CDOTA_Buff::GetCaster(this);
    m_nFXIndex = this->m_nFXIndex;
    v13 = v11;
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(
      ParticleManager,
      m_nFXIndex,
      1,
      v13,
      5,
      "attach_hitloc",
      vec3_invalid,
      1);
    v15 = CDOTA_Buff::GetParent(this);
    if ( CDOTA_BaseNPC::FindModifierByName(v15, "modifier_monkey_king_bounce_perch", 0) != 0 )
      v16 = 250.0;
    else
      v16 = 0.0;
    this->m_flZDelta = v16;
    v17 = CDOTA_Buff::GetParent(this);
    v18 = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v18);
    PositionOnGround = GetPositionOnGround(AbsOrigin, v17);
    perched_jump_distance = *&PositionOnGround.x;
    this->m_vStart.z = PositionOnGround.z;
    z = PositionOnGround.z;
    this->m_vStart.x = PositionOnGround.x;
    this->m_vStart.y = *(&perched_jump_distance + 1);
    Ptr = KeyValues::GetPtr(pKV, "target", 0);
    if ( Ptr != 0 && (v21 = Ptr[1]) != 0 )
    {
      v22 = (*(v21 + 16) >> 15) - (*(v21 + 48) & 1);
      v23 = 0x7FFF;
      if ( *(v21 + 16) != -1 )
        v23 = *(v21 + 16) & 0x7FFF;
      LOWORD(this->m_hTarget.m_Index) = v23 | this->m_hTarget.m_Index & 0x8000;
      this->m_hTarget.m_Index = (v22 << 15) | this->m_hTarget.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hTarget.m_Index = -1;
    }
    this->m_bTargetingEntity = CEntityHandle::operator CEntityInstance *(&this->m_hTarget) != 0;
    *v25.m128i_i32 = KeyValues::GetFloat(pKV, "vPosZ", v24);
    v26 = COERCE_FLOAT(_mm_cvtsi128_si32(v25));
    *v28.m128i_i32 = KeyValues::GetFloat(pKV, "vPosY", v27);
    v29 = COERCE_FLOAT(_mm_cvtsi128_si32(v28));
    Float = KeyValues::GetFloat(pKV, "vPosX", v30);
    this->m_vTargetPos.y = v29;
    this->m_vTargetPos.x = Float;
    this->m_vTargetPos.z = v26;
    Int = KeyValues::GetInt(pKV, "JumpedFromTree", 0);
    v34 = KeyValues::GetFloat(pKV, "fSpringChanneledPercent", v33);
    this->m_fSpringChanneledPercent = v34;
    if ( v34 != 0.0 )
      this->m_bIsSpringJump = 1;
    v35 = CDOTA_Buff::GetCaster(this);
    v36 = CBaseEntity::GetAbsOrigin(v35);
    v37 = (this->m_vTargetPos.y - v36->y) * (this->m_vTargetPos.y - v36->y);
    fDist = fsqrt(((this->m_vTargetPos.x - v36->x) * (this->m_vTargetPos.x - v36->x)) + v37);
    v38 = KeyValues::GetFloat(pKV, "fSpringChanneledPercent", v37);
    this->m_fSpringChanneledPercent = v38;
    if ( v38 == 0.0 )
    {
      if ( !this->m_bIsSpringJump )
      {
        v39 = CDOTA_Buff::GetAbility(this);
        DotaRetrieveAbilityValue<int>(v39, &perched_jump_distance, "leap_speed");
        v40 = (perched_jump_distance + ((fDist / this->ground_jump_distance) * 400.0));
        this->m_nLeapSpeed = v40;
LABEL_23:
        fDuration = fDist / v40;
        KeyValues::KeyValues(&kv, "modifier_monkey_king_tree_dance_activity");
        KeyValues::SetFloat(&kv, "duration", fDuration - 0.2);
        if ( Int != 0 )
        {
          if ( CEntityHandle::operator CEntityInstance *(&this->m_hTarget) != 0 )
          {
            v41 = CDOTA_Buff::GetAbility(this);
            DotaRetrieveAbilityValue<float>(v41, &perched_jump_distance, "perched_jump_distance");
            v42 = CDOTA_Buff::GetAbility(this);
            (*(v42->_vptr_IHandleEntity + 228))(v42);
            KeyValues::SetFloat(&kv, "ability_range_pct", v43);
            this->m_bTreeToTree = 1;
          }
          else
          {
            v72 = CDOTA_Buff::GetAbility(this);
            DotaRetrieveAbilityValue<float>(v72, &perched_jump_distance, "perched_jump_distance");
            v73 = CDOTA_Buff::GetAbility(this);
            (*(v73->_vptr_IHandleEntity + 228))(v73);
            KeyValues::SetFloat(&kv, "ability_range_pct", v74);
            KeyValues::SetInt(&kv, "is_spring", 1);
            this->m_bTreeToGround = 1;
          }
        }
        else
        {
          v44 = CDOTA_Buff::GetAbility(this);
          (*(v44->_vptr_IHandleEntity + 226))(v44, &vec3_origin, 0);
          v45 = CDOTA_Buff::GetAbility(this);
          (*(v45->_vptr_IHandleEntity + 228))(v45);
          KeyValues::SetFloat(&kv, "ability_range_pct", v46);
          this->m_bGroundToTree = 1;
        }
        v47 = CDOTA_Buff::GetAbility(this);
        v48 = CDOTA_Buff::GetCaster(this);
        v49 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v49, v48, v47, "modifier_monkey_king_tree_dance_activity", &kv, 0);
        if ( !this->m_bTargetingEntity && !this->m_bIsSpringJump )
        {
          v50 = this->m_vTargetPos.x - this->m_vStart.x;
          v51 = this->m_vTargetPos.y - this->m_vStart.y;
          v52 = this->m_vTargetPos.z;
          v53 = this->m_vStart.z;
          if ( fsqrt((v50 * v50) + (v51 * v51)) > this->ground_jump_distance )
          {
            *&perched_jump_distance = this->m_vTargetPos.x - this->m_vStart.x;
            *(&perched_jump_distance + 1) = v51;
            z = v52 - v53;
            VectorNormalize(&perched_jump_distance);
            ground_jump_distance = this->ground_jump_distance;
            v69 = (*(&perched_jump_distance + 1) * ground_jump_distance) + this->m_vStart.y;
            v70 = (z * ground_jump_distance) + this->m_vStart.z;
            v71 = (ground_jump_distance * *&perched_jump_distance) + this->m_vStart.x;
            this->m_vTargetPos.y = v69;
            this->m_vTargetPos.z = v70;
            this->m_vTargetPos.x = v71;
          }
        }
        v54 = CDOTA_Buff::GetParent(this);
        CDOTA_BaseNPC::UnitEmitSound(v54, "Hero_MonkeyKing.TreeJump.Cast", 0.0, 0, 0);
        v55 = CDOTA_Buff::GetParent(this);
        v56 = (*(v55->_vptr_IHandleEntity + 376))(v55);
        if ( CDOTALocomotor::ApplyHorizontalMotionController(v56, &this->CHorizontalMotionController, 0)
          && (v58 = CDOTA_Buff::GetParent(this),
              v59 = (*(v58->_vptr_IHandleEntity + 376))(v58),
              CDOTALocomotor::ApplyVerticalMotionController(v59, &this->CVerticalMotionController, 0)) )
        {
          if ( this->m_bGroundToTree || this->m_bTreeToTree )
          {
            v60 = CDOTA_Buff::GetAbility(this);
            v61 = *(v60->_vptr_IHandleEntity + 241);
            v62 = CDOTA_Buff::GetAbility(this);
            v63 = (*(v62->_vptr_IHandleEntity + 242))(v62, 0xFFFFFFFFLL);
            v61(v60, v63 + fDuration);
          }
          if ( this->m_bTreeToGround || this->m_bTreeToTree )
          {
            v64 = CDOTA_Buff::GetParent(this);
            BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                                   this,
                                   "particles/units/heroes/hero_monkey_king/monkey_king_jump_treelaunch_ring.vpcf",
                                   0,
                                   v64,
                                   0);
          }
          else
          {
            v67 = CDOTA_Buff::GetParent(this);
            BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                                   this,
                                   "particles/units/heroes/hero_monkey_king/monkey_king_jump_launch_ring.vpcf",
                                   0,
                                   v67,
                                   0);
          }
          this->m_nFXIndex2 = BuffParticleEffect;
          this->m_flSpeed = CDOTA_Modifier_MonkeyKing_BounceLeap::GetIdealSpeed(this);
          CDOTA_Buff::StartIntervalThink(this, 0.0, v66);
        }
        else
        {
          CDOTA_Buff::Destroy(this, 0, 0, 0);
        }
        KeyValues::~KeyValues(&kv);
        return;
      }
    }
    else
    {
      this->m_bIsSpringJump = 1;
    }
    v57 = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<int>(v57, &perched_jump_distance, "spring_leap_speed");
    v40 = perched_jump_distance;
    this->m_nLeapSpeed = perched_jump_distance;
    goto LABEL_23;
  }
}


// CDOTA_Modifier_MonkeyKing_BounceLeap::CheckState  (line 1674, @0x0000000002c2cb50, libserver.so)  // inlines: Enable, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_MonkeyKing_BounceLeap::CheckState(
        CDOTA_Modifier_MonkeyKing_BounceLeap *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nEnabledStateMask; // r8
  uint64 m_nDisabledStateMask; // rcx
  CConcreteEntityList *v4; // r9
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rdi
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx

  m_nEnabledStateMask = buffState->m_nEnabledStateMask;
  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x20uLL;
  v4 = CEntityHandle::gm_pEntityList;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFFFFFDFLL;
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 <= 1
    || (m_Index_low = LOWORD(this->m_hTarget.m_Index), (v7 = v4->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
    || (v8 = &v7[m_Index_low & 0x1FF]) == 0
    || m_Index != v8->m_EHandle.m_Index
    || v8->m_pInstance == 0
    || BYTE3(v8->m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    buffState->m_nEnabledStateMask = m_nEnabledStateMask | 0x1000020;
    buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFEFFFFDFLL;
  }
}


// CDOTA_Modifier_MonkeyKing_BounceLeap::DeclareFunctions  (line 1690, @0x0000000002c1d4f0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_MonkeyKing_BounceLeap::GetVisualZDelta(CModifierParams const&), CDOTA_Modifier_MonkeyKing_BounceLeap::GetFixedVision(CModifierParams const&)
void __fastcall CDOTA_Modifier_MonkeyKing_BounceLeap::DeclareFunctions(
        CDOTA_Modifier_MonkeyKing_BounceLeap *const this)
{
  this->m_Functions[171].__pfn = CDOTA_Modifier_MonkeyKing_BounceLeap::GetVisualZDelta;
  this->m_Functions[171].__delta = 0;
  this->m_Functions[100].__delta = 0;
  this->m_Functions[100].__pfn = CDOTA_Modifier_MonkeyKing_BounceLeap::GetFixedVision;
  this->m_Functions[101].__pfn = CDOTA_Modifier_MonkeyKing_BounceLeap::GetFixedVision;
  this->m_Functions[101].__delta = 0;
}


// CDOTA_Modifier_MonkeyKing_BounceLeap::CalculateZDelta  (line 1700, @0x0000000002c48d60, libserver.so)  // inlines: FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTargetPosition, IndexToIdentity, IsValid, Length2D, LookupEntity, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CEntityInstance*, operator-
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin
// callers: CDOTA_Modifier_MonkeyKing_BounceLeap::OnIntervalThink
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Modifier_MonkeyKing_BounceLeap::CalculateZDelta(
        CDOTA_Modifier_MonkeyKing_BounceLeap *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *Parent; // rax
  const Vector *v7; // rax
  float v8; // xmm0_4
  float result; // xmm0_4
  float x; // [rsp+0h] [rbp-20h]
  float vTotalDelta; // [rsp+4h] [rbp-1Ch]
  float vTotalDelta_4; // [rsp+8h] [rbp-18h]
  float vTotalDelta_8; // [rsp+Ch] [rbp-14h]

  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v4 = &v3[this->m_hTarget.m_Index & 0x1FF]) != 0
    && m_Index == v4->m_EHandle.m_Index
    && v4->m_pInstance != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(v4->m_pInstance);
  }
  else
  {
    AbsOrigin = &this->m_vTargetPos;
  }
  x = AbsOrigin->x;
  vTotalDelta_4 = AbsOrigin->y;
  vTotalDelta = AbsOrigin->x - this->m_vStart.x;
  vTotalDelta_8 = vTotalDelta_4 - this->m_vStart.y;
  Parent = CDOTA_Buff::GetParent(this);
  v7 = CBaseEntity::GetAbsOrigin(Parent);
  v8 = 1.0
     - (fsqrt(((x - v7->x) * (x - v7->x)) + ((vTotalDelta_4 - v7->y) * (vTotalDelta_4 - v7->y)))
      / fsqrt((vTotalDelta * vTotalDelta) + (vTotalDelta_8 * vTotalDelta_8)));
  if ( this->m_bGroundToTree )
    return v8 * 250.0;
  if ( this->m_bTreeToGround )
    return (1.0 - v8) * 250.0;
  result = 0.0;
  if ( this->m_bTreeToTree )
    return 250.0;
  return result;
}


// CDOTA_Modifier_MonkeyKing_BounceLeap::GetVisualZDelta  (line 1730, @0x0000000002c1d540, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_BounceLeap::GetVisualZDelta(
        CDOTA_Modifier_MonkeyKing_BounceLeap *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(this->m_flZDelta) << 32) | 1;
  return result;
}


// CDOTA_Modifier_MonkeyKing_BounceLeap::GetFixedVision  (line 1738, @0x0000000002c1d560, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_BounceLeap::GetFixedVision(
        CDOTA_Modifier_MonkeyKing_BounceLeap *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(this->perched_vision) << 32) | 1;
  return result;
}


// CDOTA_Modifier_MonkeyKing_BounceLeap::OnIntervalThink  (line 1745, @0x0000000002c48f00, libserver.so)
// calls: CDOTA_Modifier_MonkeyKing_BounceLeap::CalculateZDelta, CDOTA_Buff::SendBuffRefreshToClients
void __fastcall CDOTA_Modifier_MonkeyKing_BounceLeap::OnIntervalThink(CDOTA_Modifier_MonkeyKing_BounceLeap *const this)
{
  this->m_flZDelta = CDOTA_Modifier_MonkeyKing_BounceLeap::CalculateZDelta(this);
  CDOTA_Buff::SendBuffRefreshToClients(this);
}


// CDOTA_Modifier_MonkeyKing_BounceLeap::AddCustomTransmiterData  (line 1754, @0x0000000002c21df0, libserver.so)  // inlines: set_fade_time, set_has_fade_time
// calls: CDOTA_Buff::AddCustomTransmiterData
void __fastcall CDOTA_Modifier_MonkeyKing_BounceLeap::AddCustomTransmiterData(
        CDOTA_Modifier_MonkeyKing_BounceLeap *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  float m_flZDelta; // xmm0_4

  m_flZDelta = this->m_flZDelta;
  *(entry + 4) |= 0x1000u;
  *(entry + 18) = m_flZDelta;
  CDOTA_Buff::AddCustomTransmiterData(this, entry);
}


// CDOTA_Modifier_MonkeyKing_BounceLeap::GetIdealSpeed  (line 1774, @0x0000000002c48f30, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName
// callers: CDOTA_Modifier_MonkeyKing_BounceLeap::OnCreated, CDOTA_Modifier_MonkeyKing_BounceLeap::UpdateHorizontalMotion
// strings: "modifier_monkey_king_transform"
float __fastcall CDOTA_Modifier_MonkeyKing_BounceLeap::GetIdealSpeed(CDOTA_Modifier_MonkeyKing_BounceLeap *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  if ( CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_monkey_king_transform", 0) != 0 )
    return this->m_nLeapSpeed * 0.7;
  else
    return this->m_nLeapSpeed;
}


// CDOTA_Modifier_MonkeyKing_BounceLeap::UpdateHorizontalMotion  (line 1785, @0x0000000002c6f490, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTargetPosition, GetTeamNumber, IndexToIdentity, IsValid, Length2D, LookupEntity, Max<float>, NormalizeInPlace, ToDOTABaseNPC, Vector, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator-, operator[], ~CUtlVector
// calls: CDOTA_Buff::Destroy, CBaseEntity::GetAbsOrigin, VectorNormalize, CDOTA_Modifier_MonkeyKing_BounceLeap::GetIdealSpeed, VectorAngles, CDOTA_Buff::GetCaster, CBaseEntity::SetAbsAngles, GetGroundHeight, CEntityHandle::operator CEntityInstance*, __dynamic_cast, CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName (33 total)
// strings: "modifier_monkey_king_bounce_perch", "modifier_monkey_king_tree_dance_hidden", "Hero_MonkeyKing.TreeJump.Tree", "monkey_king_primal_spring", "impact_radius", "impact_damage" (12 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_MonkeyKing_BounceLeap::UpdateHorizontalMotion(
        CDOTA_Modifier_MonkeyKing_BounceLeap *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  const Vector *AbsOrigin; // rax
  uint32 v10; // edx
  float *p_x; // r13
  CEntityIdentity *v12; // rax
  CEntityIdentity *v13; // rax
  const Vector *p_m_vTargetPos; // rax
  vec_t v15; // xmm1_4
  vec_t v16; // xmm0_4
  float v17; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  float m_flSpeed; // xmm0_4
  const Vector *v20; // rax
  vec_t v21; // xmm4_4
  vec_t v22; // xmm0_4
  CEntityInstance *v23; // rax
  void *v24; // r14
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  CDOTALocomotor *v27; // rax
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *v29; // r14
  CDOTA_BaseNPC *v30; // rax
  CDOTABaseAbility *v31; // r15
  CDOTA_BaseNPC *v32; // rax
  CDOTA_BaseNPC *v33; // rax
  CDOTA_BaseNPC *v34; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v36; // r15
  int LevelSpecialValue; // r13d
  CDOTA_BaseNPC *Parent; // r14
  CDOTA_BaseNPC *v39; // rax
  const Vector *v40; // r13
  CDOTA_BaseNPC *v41; // rax
  __int64 v42; // r14
  int v43; // r15d
  CHandle<CBaseEntity> *v44; // rdx
  uint32 v45; // eax
  __int16 v46; // cx
  CEntityIdentity *v47; // rdx
  CEntityIdentity *v48; // rdx
  CDOTA_BaseNPC *v49; // rax
  float v50; // xmm1_4
  float v51; // xmm1_4
  CDOTA_BaseNPC *v52; // rax
  int v53; // r13d
  __m128i m_fSpringChanneledPercent_low; // xmm5
  CDOTA_BaseNPC *v55; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v57; // rax
  CDOTA_ParticleManager *v58; // rax
  CDOTA_ParticleManager *v59; // rax
  CDOTA_ParticleManager *v60; // rax
  CDOTA_BaseNPC *v61; // rax
  CDOTA_BaseNPC *v62; // rax
  float flRadius; // [rsp+20h] [rbp-100h]
  int impact_damage; // [rsp+24h] [rbp-FCh]
  float pSpringAbilitya; // [rsp+30h] [rbp-F0h]
  CDOTABaseAbility *pSpringAbility; // [rsp+30h] [rbp-F0h]
  float pInflictor; // [rsp+38h] [rbp-E8h]
  CDOTABaseAbility *pInflictora; // [rsp+38h] [rbp-E8h]
  float flDamage; // [rsp+44h] [rbp-DCh]
  float flDamagea; // [rsp+44h] [rbp-DCh]
  float dtc; // [rsp+48h] [rbp-D8h]
  CDOTA_BaseNPC *dtd; // [rsp+48h] [rbp-D8h]
  CDOTA_BaseNPC *dtb; // [rsp+48h] [rbp-D8h]
  Vector vDelta; // [rsp+50h] [rbp-D0h] BYREF
  QAngle faceTargetAngles; // [rsp+60h] [rbp-C0h] BYREF
  Vector vNewLocation; // [rsp+70h] [rbp-B0h] BYREF
  double v78; // [rsp+80h] [rbp-A0h]
  float v79; // [rsp+88h] [rbp-98h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+90h] [rbp-90h] BYREF
  KeyValues kv_0; // [rsp+B0h] [rbp-70h] BYREF
  KeyValues kv2; // [rsp+D0h] [rbp-50h] BYREF
  unsigned __int64 v83; // [rsp+E8h] [rbp-38h]

  v83 = __readfsqword(0x28u);
  if ( this->m_bTargetingEntity )
  {
    m_Index = this->m_hTarget.m_Index;
    if ( m_Index + 2 <= 1 )
      goto LABEL_6;
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v7 == 0 )
      goto LABEL_6;
    v8 = &v7[this->m_hTarget.m_Index & 0x1FF];
    if ( v8 == 0 || m_Index != v8->m_EHandle.m_Index || v8->m_pInstance == 0 )
      goto LABEL_6;
  }
  AbsOrigin = CBaseEntity::GetAbsOrigin(me);
  v10 = this->m_hTarget.m_Index;
  p_x = &AbsOrigin->x;
  if ( v10 + 2 > 1
    && (v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v13 = &v12[this->m_hTarget.m_Index & 0x1FF]) != 0
    && v10 == v13->m_EHandle.m_Index
    && v13->m_pInstance != 0 )
  {
    p_m_vTargetPos = CBaseEntity::GetAbsOrigin(v13->m_pInstance);
  }
  else
  {
    p_m_vTargetPos = &this->m_vTargetPos;
  }
  v15 = p_m_vTargetPos->x - *p_x;
  v16 = p_m_vTargetPos->y - p_x[1];
  vDelta.z = 0.0;
  vDelta.x = v15;
  vDelta.y = v16;
  v17 = VectorNormalize(&vDelta);
  if ( v17 <= this->give_up_distance )
  {
    pSpringAbilitya = v17;
    this->m_flSpeed = fmaxf(this->m_flSpeed, CDOTA_Modifier_MonkeyKing_BounceLeap::GetIdealSpeed(this));
    VectorAngles(&vDelta, &faceTargetAngles);
    Caster = CDOTA_Buff::GetCaster(this);
    CBaseEntity::SetAbsAngles(Caster, &faceTargetAngles);
    m_flSpeed = this->m_flSpeed;
    pInflictor = (vDelta.x * m_flSpeed) * a3;
    flDamage = (vDelta.y * m_flSpeed) * a3;
    dtc = (m_flSpeed * vDelta.z) * a3;
    v20 = CBaseEntity::GetAbsOrigin(me);
    v21 = v20->y + flDamage;
    v22 = dtc + v20->z;
    vNewLocation.x = pInflictor + v20->x;
    vNewLocation.y = v21;
    vNewLocation.z = v22;
    vNewLocation.z = CBaseEntity::GetAbsOrigin(me)->z;
    if ( ((me->m_flHullRadius + 5.0) + fsqrt((pInflictor * pInflictor) + (flDamage * flDamage))) >= pSpringAbilitya )
    {
      vNewLocation.z = GetGroundHeight(&vNewLocation, me);
      if ( CEntityHandle::operator CEntityInstance *(&this->m_hTarget) == 0 )
      {
        v34 = CDOTA_Buff::GetCaster(this);
        AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v34, "monkey_king_primal_spring", 0);
        v36 = AbilityByName;
        pSpringAbility = AbilityByName;
        if ( this->m_bIsSpringJump && AbilityByName != 0 )
        {
          LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "impact_radius", -1, 0);
          impact_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v36, "impact_damage", -1, 0);
          CDOTABaseAbility::GetLevelSpecialValueFor<float>(v36, "impact_slow_duration", -1, 0);
          entities.m_Size = 0;
          entities.m_Memory.m_pMemory = 0;
          entities.m_Memory.m_nAllocationCount = 0;
          entities.m_Memory.m_nGrowSize = 0;
          flRadius = LevelSpecialValue;
          Parent = CDOTA_Buff::GetParent(this);
          v39 = CDOTA_Buff::GetParent(this);
          v40 = CBaseEntity::GetAbsOrigin(v39);
          v41 = CDOTA_Buff::GetParent(this);
          FindUnitsInRadius(v41->m_iTeamNum.m_Value, v40, Parent, flRadius, &entities, 2, 19, 0, 0, 0);
          if ( entities.m_Size > 0 )
          {
            v42 = 0;
            v43 = 0;
            do
            {
              v44 = &entities.m_Memory.m_pMemory[v42];
              v45 = entities.m_Memory.m_pMemory[v42].m_Index;
              if ( v45 + 2 > 1 )
              {
                v46 = v44->m_Index;
                v47 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v44->m_Index) >> 9) & 0x3F];
                if ( v47 != 0 )
                {
                  v48 = &v47[v46 & 0x1FF];
                  if ( v48 != 0 && v45 == v48->m_EHandle.m_Index )
                  {
                    dtb = v48->m_pInstance;
                    if ( v48->m_pInstance != 0 && BYTE3(v48->m_pInstance[7]._vptr_IHandleEntity) != 0 )
                    {
                      flDamagea = impact_damage * this->m_fSpringChanneledPercent;
                      pInflictora = CDOTA_Buff::GetAbility(this);
                      v49 = CDOTA_Buff::GetCaster(this);
                      ApplyDamage(v49, dtb, pInflictora, flDamagea, 2, 0);
                      KeyValues::KeyValues(&kv2, "modifier_monkey_king_spring_slow");
                      KeyValues::SetFloat(&kv2, "duration", v50);
                      KeyValues::SetFloat(&kv2, "fSpringChanneledPercent", v51);
                      v52 = CDOTA_Buff::GetCaster(this);
                      CDOTA_BaseNPC::AddNewModifier(
                        dtb,
                        v52,
                        pSpringAbility,
                        "modifier_monkey_king_spring_slow",
                        &kv2,
                        0);
                      KeyValues::~KeyValues(&kv2);
                    }
                  }
                }
              }
              ++v43;
              ++v42;
            }
            while ( entities.m_Size > v43 );
          }
          v53 = 0;
          if ( impact_damage > 0 )
          {
            m_fSpringChanneledPercent_low = LODWORD(this->m_fSpringChanneledPercent);
            *m_fSpringChanneledPercent_low.m128i_i32 = (*m_fSpringChanneledPercent_low.m128i_i32 * impact_damage)
                                                     / impact_damage;
            v53 = _mm_cvtsi128_si32(m_fSpringChanneledPercent_low);
          }
          v55 = CDOTA_Buff::GetCaster(this);
          ParticleManager = GetParticleManager();
          LODWORD(v55) = CDOTA_ParticleManager::CreateParticle(
                           ParticleManager,
                           "particles/units/heroes/hero_monkey_king/monkey_king_spring.vpcf",
                           2,
                           0,
                           0,
                           v55);
          v57 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControl(v57, v55, 0, *&vNewLocation.x, vNewLocation.z);
          *&v78 = flRadius;
          *(&v78 + 1) = flRadius;
          v79 = flRadius;
          v58 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControl(v58, v55, 1, v78, v79);
          LODWORD(v78) = v53;
          HIDWORD(v78) = v53;
          v79 = *&v53;
          v59 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControl(v59, v55, 2, v78, v79);
          v60 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v60, v55);
          v61 = CDOTA_Buff::GetParent(this);
          CDOTA_BaseNPC::UnitEmitSound(v61, "Hero_MonkeyKing.Spring.Target", 0.0, 0, 0);
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
        }
        v62 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::UnitEmitSound(v62, "Hero_MonkeyKing.Spring.Impact", 0.0, 0, 0);
      }
      CDOTA_Buff::Destroy(this, 0, 0, 0);
      v23 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
      if ( v23 != 0 )
      {
        v24 = __dynamic_cast(v23, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_Tree, -2);
        if ( v24 != 0 )
        {
          v25 = CDOTA_Buff::GetParent(this);
          if ( CDOTA_BaseNPC::FindModifierByName(v25, "modifier_monkey_king_bounce_perch", 0) == 0 )
          {
            KeyValues::KeyValues(&kv_0, "modifier_monkey_king_bounce_perch");
            KeyValues::SetPtr(&kv_0, "tree", v24);
            Ability = CDOTA_Buff::GetAbility(this);
            v29 = CDOTA_Buff::GetCaster(this);
            v30 = CDOTA_Buff::GetParent(this);
            CDOTA_BaseNPC::AddNewModifier(v30, v29, Ability, "modifier_monkey_king_bounce_perch", &kv_0, 0);
            KeyValues::KeyValues(&kv2, "modifier_monkey_king_tree_dance_hidden");
            v31 = CDOTA_Buff::GetAbility(this);
            dtd = CDOTA_Buff::GetCaster(this);
            v32 = CDOTA_Buff::GetParent(this);
            CDOTA_BaseNPC::AddNewModifier(v32, dtd, v31, "modifier_monkey_king_tree_dance_hidden", &kv2, 0);
            v33 = CDOTA_Buff::GetCaster(this);
            CDOTA_BaseNPC::UnitEmitSound(v33, "Hero_MonkeyKing.TreeJump.Tree", 0.0, 0, 0);
            KeyValues::~KeyValues(&kv2);
            KeyValues::~KeyValues(&kv_0);
          }
        }
      }
    }
    v26 = CDOTA_Buff::GetParent(this);
    v27 = (*(v26->_vptr_IHandleEntity + 376))(v26);
    if ( !CDOTALocomotor::IsLeashedMovementPrevented(v27, *&vNewLocation.x) )
      CBaseEntity::SetAbsOrigin(me, &vNewLocation);
  }
  else
  {
LABEL_6:
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_MonkeyKing_BounceLeap::UpdateVerticalMotion  (line 1907, @0x0000000002c30310, libserver.so)  // inlines: FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTargetPosition, IndexToIdentity, IsValid, Length2D, LookupEntity, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CEntityInstance*, operator-
// calls: CBaseEntity::GetAbsOrigin, sin, GetGroundHeight, CBaseEntity::SetAbsOrigin
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_MonkeyKing_BounceLeap::UpdateVerticalMotion(
        CDOTA_Modifier_MonkeyKing_BounceLeap *const this,
        CDOTA_BaseNPC *me,
        double a3,
        float dt)
{
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  const Vector *AbsOrigin; // rax
  float v10; // r14d
  const Vector *v11; // rax
  float v12; // xmm3_4
  float v13; // xmm0_4
  const Vector *v14; // rax
  float v15; // xmm2_4
  double v16; // xmm0_8
  __m128d v17; // xmm1
  vec_t v18; // xmm5_4
  float GroundHeight; // xmm0_4
  float flTotalDist; // [rsp+Ch] [rbp-44h]
  float v21; // [rsp+10h] [rbp-40h]
  float z; // [rsp+10h] [rbp-40h]
  float y; // [rsp+14h] [rbp-3Ch]
  float v24; // [rsp+14h] [rbp-3Ch]
  float v25; // [rsp+14h] [rbp-3Ch]
  float flProgressa; // [rsp+18h] [rbp-38h]
  float flProgressb; // [rsp+18h] [rbp-38h]
  double flProgress; // [rsp+18h] [rbp-38h]
  Vector vNewPos; // [rsp+20h] [rbp-30h] BYREF

  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v8 = &v7[this->m_hTarget.m_Index & 0x1FF]) != 0
    && m_Index == v8->m_EHandle.m_Index
    && v8->m_pInstance != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(v8->m_pInstance);
  }
  else
  {
    AbsOrigin = &this->m_vTargetPos;
  }
  flTotalDist = AbsOrigin->x;
  y = AbsOrigin->y;
  v10 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(AbsOrigin->z)));
  v21 = AbsOrigin->x - this->m_vStart.x;
  flProgressa = y - this->m_vStart.y;
  v11 = CBaseEntity::GetAbsOrigin(me);
  v12 = fsqrt((v21 * v21) + (flProgressa * flProgressa));
  v13 = fsqrt(((flTotalDist - v11->x) * (flTotalDist - v11->x)) + ((y - v11->y) * (y - v11->y))) / v12;
  v24 = v12;
  flProgressb = 1.0 - v13;
  v14 = CBaseEntity::GetAbsOrigin(me);
  v15 = flProgressb;
  *&vNewPos.x = *&v14->x;
  if ( v24 >= 600.0 )
    flProgress = 200.0;
  else
    flProgress = ((v24 / 600.0) * 200.0);
  v25 = v15;
  z = this->m_vStart.z;
  v16 = sin(v15 * 3.141592653589793);
  v17.m128d_f64[1] = (((v10 - z) * v25) + z);
  v17.m128d_f64[0] = v17.m128d_f64[1] + v16 * flProgress;
  v18 = _mm_movedup_pd(v17).m128d_f64[0];
  vNewPos.z = v18;
  GroundHeight = GetGroundHeight(&vNewPos, me);
  if ( GroundHeight > vNewPos.z )
    vNewPos.z = GroundHeight;
  CBaseEntity::SetAbsOrigin(me, &vNewPos);
}


// CDOTA_Modifier_MonkeyKing_BounceLeap::OnHorizontalMotionInterrupted  (line 1945, @0x0000000002c1f720, libserver.so)
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_MonkeyKing_BounceLeap::OnHorizontalMotionInterrupted(
        CDOTA_Modifier_MonkeyKing_BounceLeap *const this)
{
  CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_MonkeyKing_BounceLeap::OnVerticalMotionInterrupted  (line 1954, @0x0000000002c1f740, libserver.so)
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_MonkeyKing_BounceLeap::OnVerticalMotionInterrupted(
        CDOTA_Modifier_MonkeyKing_BounceLeap *const this)
{
  CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_MonkeyKing_BounceLeap::OnDestroy  (line 1963, @0x0000000002c493c0, libserver.so)  // inlines: DecrementRefCount
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_Buff::GetParent, CDOTALocomotor::RemoveHorizontalMotionController, CDOTALocomotor::RemoveVerticalMotionController, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_MonkeyKing_Spring::OnRefCountModified, CDOTA_Buff::GetAbility
// strings: "monkey_king_primal_spring"
void __fastcall CDOTA_Modifier_MonkeyKing_BounceLeap::OnDestroy(CDOTA_Modifier_MonkeyKing_BounceLeap *const this)
{
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  int v4; // r12d
  CDOTA_ParticleManager *v5; // rax
  int m_nFXIndex2; // r12d
  CDOTA_ParticleManager *v7; // rax
  int v8; // r12d
  CDOTA_ParticleManager *v9; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTALocomotor *v13; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Ability_MonkeyKing_Spring *AbilityByName; // rax
  int v16; // edx
  CDOTABaseAbility *Ability; // r12
  void (__fastcall *v18)(CDOTABaseAbility *); // r13
  CDOTABaseAbility *v19; // rax

  m_nFXIndex = this->m_nFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 0);
  v4 = this->m_nFXIndex;
  v5 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v5, v4);
  m_nFXIndex2 = this->m_nFXIndex2;
  v7 = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(v7, m_nFXIndex2, 0);
  v8 = this->m_nFXIndex2;
  v9 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v9, v8);
  Parent = CDOTA_Buff::GetParent(this);
  v11 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveHorizontalMotionController(v11, &this->CHorizontalMotionController);
  v12 = CDOTA_Buff::GetParent(this);
  v13 = (*(v12->_vptr_IHandleEntity + 376))(v12);
  CDOTALocomotor::RemoveVerticalMotionController(v13, &this->CVerticalMotionController);
  if ( !this->m_bIsSpringJump )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    v18 = *(Ability->_vptr_IHandleEntity + 241);
    v19 = CDOTA_Buff::GetAbility(this);
    (*(v19->_vptr_IHandleEntity + 242))(v19, 0xFFFFFFFFLL);
    v18(Ability);
  }
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "monkey_king_primal_spring", 0);
  if ( AbilityByName != 0 )
  {
    v16 = 0;
    if ( AbilityByName->m_nRefCount - 1 >= 0 )
      v16 = AbilityByName->m_nRefCount - 1;
    AbilityByName->m_nRefCount = v16;
    CDOTA_Ability_MonkeyKing_Spring::OnRefCountModified(AbilityByName);
  }
}


// CDOTA_Ability_MonkeyKing_Spring_Early::~CDOTA_Ability_MonkeyKing_Spring_Early  (line 2034, @0x0000000002c98f90, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_MonkeyKing_Spring_Early::~CDOTA_Ability_MonkeyKing_Spring_Early(
        CDOTA_Ability_MonkeyKing_Spring_Early *const this)
{
  this->_vptr_IHandleEntity = &off_45E1570;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_MonkeyKing_Spring_Early::~CDOTA_Ability_MonkeyKing_Spring_Early  (line 2034, @0x0000000002c98fb0, libserver.so)  // inlines: ~CDOTA_Ability_MonkeyKing_Spring_Early
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_MonkeyKing_Spring_Early::~CDOTA_Ability_MonkeyKing_Spring_Early(
        CDOTA_Ability_MonkeyKing_Spring_Early *const this)
{
  this->_vptr_IHandleEntity = &off_45E1570;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_MonkeyKing_Spring_Early::Schema_DynamicBinding  (line 2036, @0x0000000002c8ad90, libserver.so)
// globals: CDOTA_Ability_MonkeyKing_Spring_Early::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_MonkeyKing_Spring_Early::Schema_DynamicBinding(
        const CDOTA_Ability_MonkeyKing_Spring_Early *const this)
{
  return CDOTA_Ability_MonkeyKing_Spring_Early::s_pSchemaBinding;
}


// CDOTA_Ability_MonkeyKing_Spring_Early::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2036, @0x0000000002c8ada0, libserver.so)
// globals: CDOTA_Ability_MonkeyKing_Spring_Early::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_MonkeyKing_Spring_Early::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_MonkeyKing_Spring_Early::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_MonkeyKing_Spring_Early::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_MonkeyKing_Spring_Early::CEntityInstanceEntityClass::DestructInstance  (line 2036, @0x0000000002c8adb0, libserver.so)  // inlines: Destruct<CDOTA_Ability_MonkeyKing_Spring_Early>
void __fastcall CDOTA_Ability_MonkeyKing_Spring_Early::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_MonkeyKing_Spring_Early::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_MonkeyKing_Spring_Early::CEntityInstanceEntityClass::FreeInstance  (line 2036, @0x0000000002c8add0, libserver.so)
void __fastcall CDOTA_Ability_MonkeyKing_Spring_Early::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_MonkeyKing_Spring_Early::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_MonkeyKing_Spring_Early::CEntityInstanceEntityClass::CanAllocate  (line 2036, @0x0000000002c8adf0, libserver.so)
bool __fastcall CDOTA_Ability_MonkeyKing_Spring_Early::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_MonkeyKing_Spring_Early::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_MonkeyKing_Spring_Early::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2036, @0x0000000002c8ae00, libserver.so)
// globals: CDOTA_Ability_MonkeyKing_Spring_Early::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_MonkeyKing_Spring_Early::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_MonkeyKing_Spring_Early::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_MonkeyKing_Spring_Early::s_pSchemaBinding;
}


// CDOTA_Ability_MonkeyKing_Spring_Early::CEntityInstanceEntityClass::AllocateInstance  (line 2036, @0x0000000002c90620, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_MonkeyKing_Spring_Early::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_MonkeyKing_Spring_Early::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_MonkeyKing_Spring_Early::CEntityInstanceEntityClass::ConstructInstance  (line 2036, @0x0000000002ca09c0, libserver.so)  // inlines: CDOTA_Ability_MonkeyKing_Spring_Early, Construct<CDOTA_Ability_MonkeyKing_Spring_Early>
// calls: CDOTABaseAbility::CDOTABaseAbility, CDOTABaseAbility::SetActivated, CDOTABaseAbility::~CDOTABaseAbility, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_Ability_MonkeyKing_Spring_Early::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_MonkeyKing_Spring_Early::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45E1570;
    CDOTABaseAbility::SetActivated(p, 0);
  }
  return p;
}


// CDOTA_Ability_MonkeyKing_Spring_Early::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2036, @0x0000000002ca2c50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_MonkeyKing_Spring_Early::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_MonkeyKing_Spring_Early::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_MonkeyKing_Spring_Early::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2036, @0x0000000002ca2c70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_MonkeyKing_Spring_Early::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_MonkeyKing_Spring_Early::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_MonkeyKing_Spring_Early::GetEntityClassInternal  (line 2036, @0x0000000002cbb760, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "monkey_king_primal_spring_early", "CDOTA_Ability_MonkeyKing_Spring_Early"
// globals: `guard variable for'CDOTA_Ability_MonkeyKing_Spring_Early::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Spring_EarlyClass, CDOTA_Ability_MonkeyKing_Spring_Early::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Spring_EarlyClass, __dso_handle, CDOTA_Ability_MonkeyKing_Spring_Early::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_MonkeyKing_Spring_Early::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_Spring_EarlyClassInfo, CDOTA_Ability_MonkeyKing_Spring_Early::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_Spring_EarlyClassInfo
CEntityClass *__cdecl CDOTA_Ability_MonkeyKing_Spring_Early::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_MonkeyKing_Spring_Early::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Spring_EarlyClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_MonkeyKing_Spring_Early::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Spring_EarlyClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_MonkeyKing_Spring_Early::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Spring_EarlyClass);
    CDOTA_Ability_MonkeyKing_Spring_Early::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Spring_EarlyClass._vptr_CEntityClass = off_45E14F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_MonkeyKing_Spring_Early::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Spring_EarlyClass);
    __cxa_atexit(
      CDOTA_Ability_MonkeyKing_Spring_Early::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_MonkeyKing_Spring_Early::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Spring_EarlyClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_MonkeyKing_Spring_EarlyClass != 0 )
    return &CDOTA_Ability_MonkeyKing_Spring_Early::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Spring_EarlyClass;
  if ( `guard variable for'CDOTA_Ability_MonkeyKing_Spring_Early::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_Spring_EarlyClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_MonkeyKing_Spring_Early::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_Spring_EarlyClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_MonkeyKing_Spring_Early::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_Spring_EarlyClassInfo,
      "CDOTA_Ability_MonkeyKing_Spring_Early",
      "monkey_king_primal_spring_early",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_MonkeyKing_Spring_Early::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_Spring_EarlyClassInfo);
  }
  CDOTA_Ability_MonkeyKing_Spring_Early::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Spring_EarlyClass.m_pClassInfo = &CDOTA_Ability_MonkeyKing_Spring_Early::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_Spring_EarlyClassInfo;
  CDOTA_Ability_MonkeyKing_Spring_Early::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Spring_EarlyClass.m_pBaseClassInfo = CDOTA_Ability_MonkeyKing_Spring_Early::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_Spring_EarlyClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_MonkeyKing_Spring_EarlyClass = &CDOTA_Ability_MonkeyKing_Spring_Early::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Spring_EarlyClass;
  CDOTA_Ability_MonkeyKing_Spring_Early::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_Spring_EarlyClassInfo.m_pClass = &CDOTA_Ability_MonkeyKing_Spring_Early::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Spring_EarlyClass;
  CDOTA_Ability_MonkeyKing_Spring_Early::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Spring_EarlyClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_MonkeyKing_Spring_EarlyClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_MonkeyKing_Spring_Early::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_Spring_EarlyClass;
}


// CDOTA_Ability_MonkeyKing_Spring_Early::ProcsMagicStick  (line 2041, @0x0000000002c8ae10, libserver.so)
bool __fastcall CDOTA_Ability_MonkeyKing_Spring_Early::ProcsMagicStick(
        CDOTA_Ability_MonkeyKing_Spring_Early *const this)
{
  return 0;
}


// CDOTA_Ability_MonkeyKing_Spring_Early::GetAssociatedPrimaryAbilities  (line 2043, @0x0000000002c8ae20, libserver.so)
// strings: "monkey_king_tree_dance"
const char *__fastcall CDOTA_Ability_MonkeyKing_Spring_Early::GetAssociatedPrimaryAbilities(
        CDOTA_Ability_MonkeyKing_Spring_Early *const this)
{
  return "monkey_king_tree_dance";
}


// CDOTA_Ability_MonkeyKing_Spring_Early::GetAssociatedSecondaryAbilities  (line 2044, @0x0000000002c8ae30, libserver.so)
// strings: "monkey_king_primal_spring"
const char *__fastcall CDOTA_Ability_MonkeyKing_Spring_Early::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_MonkeyKing_Spring_Early *const this)
{
  return "monkey_king_primal_spring";
}


// CDOTA_Ability_MonkeyKing_Spring_Early::IsHiddenWhenStolen  (line 2045, @0x0000000002c8ae40, libserver.so)
bool __fastcall CDOTA_Ability_MonkeyKing_Spring_Early::IsHiddenWhenStolen(
        CDOTA_Ability_MonkeyKing_Spring_Early *const this)
{
  return 1;
}


// CDOTA_Ability_MonkeyKing_Spring_Early::OnSpellStart  (line 2052, @0x0000000002c252e0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::InterruptChannel
void __fastcall CDOTA_Ability_MonkeyKing_Spring_Early::OnSpellStart(CDOTA_Ability_MonkeyKing_Spring_Early *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::InterruptChannel(Caster);
}


// CDOTA_Modifier_MonkeyKing_TreeDance_Activity::~CDOTA_Modifier_MonkeyKing_TreeDance_Activity  (line 2063, @0x0000000002c91ab0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_MonkeyKing_TreeDance_Activity::~CDOTA_Modifier_MonkeyKing_TreeDance_Activity(
        CDOTA_Modifier_MonkeyKing_TreeDance_Activity *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E2030;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_MonkeyKing_TreeDance_Activity::~CDOTA_Modifier_MonkeyKing_TreeDance_Activity  (line 2063, @0x0000000002c91ad0, libserver.so)  // inlines: ~CDOTA_Modifier_MonkeyKing_TreeDance_Activity
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_MonkeyKing_TreeDance_Activity::~CDOTA_Modifier_MonkeyKing_TreeDance_Activity(
        CDOTA_Modifier_MonkeyKing_TreeDance_Activity *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E2030;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_MonkeyKing_TreeDance_Activity::IsHidden  (line 2068, @0x0000000002c8ae50, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_TreeDance_Activity::IsHidden(
        CDOTA_Modifier_MonkeyKing_TreeDance_Activity *const this)
{
  return 1;
}


// CDOTA_Modifier_MonkeyKing_TreeDance_Activity::OnCreated  (line 2085, @0x0000000002c25be0, libserver.so)  // inlines: GetBool
// calls: KeyValues::GetInt, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::StartGesture
// strings: "is_spring"
void __fastcall CDOTA_Modifier_MonkeyKing_TreeDance_Activity::OnCreated(
        CDOTA_Modifier_MonkeyKing_TreeDance_Activity *const this,
        KeyValues *pKV)
{
  _BOOL4 v3; // eax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v5; // rax

  v3 = KeyValues::GetInt(pKV, "is_spring", 0) != 0;
  this->m_bIsSpring = v3;
  if ( v3 == 0.0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::StartGesture(Caster, 1720, 0.1, 0.1, 9, 0, 1.0);
  }
  else
  {
    v5 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::StartGesture(v5, 1718, 0.1, 0.1, 9, 0, 1.0);
  }
}


// CDOTA_Modifier_MonkeyKing_TreeDance_Activity::OnDestroy  (line 2102, @0x0000000002c25aa0, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::RemoveGesture, CDOTA_BaseNPC::StartGesture
void __fastcall CDOTA_Modifier_MonkeyKing_TreeDance_Activity::OnDestroy(
        CDOTA_Modifier_MonkeyKing_TreeDance_Activity *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax

  if ( this->m_bIsSpring == 0.0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::RemoveGesture(Caster, 1720);
    v3 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::StartGesture(v3, 1721, 0.0, 0.2, 9, 0, 1.0);
  }
  else
  {
    v4 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::RemoveGesture(v4, 1718);
    v5 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::StartGesture(v5, 1719, 0.0, 0.2, 9, 0, 1.0);
  }
}


// CDOTA_Modifier_MonkeyKing_RightClickJump_Activity::~CDOTA_Modifier_MonkeyKing_RightClickJump_Activity  (line 2122, @0x0000000002c91a60, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_MonkeyKing_RightClickJump_Activity::~CDOTA_Modifier_MonkeyKing_RightClickJump_Activity(
        CDOTA_Modifier_MonkeyKing_RightClickJump_Activity *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E2350;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_MonkeyKing_RightClickJump_Activity::~CDOTA_Modifier_MonkeyKing_RightClickJump_Activity  (line 2122, @0x0000000002c91a80, libserver.so)  // inlines: ~CDOTA_Modifier_MonkeyKing_RightClickJump_Activity
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_MonkeyKing_RightClickJump_Activity::~CDOTA_Modifier_MonkeyKing_RightClickJump_Activity(
        CDOTA_Modifier_MonkeyKing_RightClickJump_Activity *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E2350;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_MonkeyKing_RightClickJump_Activity::IsHidden  (line 2127, @0x0000000002c8ae60, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_RightClickJump_Activity::IsHidden(
        CDOTA_Modifier_MonkeyKing_RightClickJump_Activity *const this)
{
  return 1;
}


// CDOTA_Modifier_MonkeyKing_RightClickJump_Activity::DeclareFunctions  (line 2137, @0x0000000002c1d580, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_MonkeyKing_RightClickJump_Activity::GetActivityTranslationModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_MonkeyKing_RightClickJump_Activity::DeclareFunctions(
        CDOTA_Modifier_MonkeyKing_RightClickJump_Activity *const this)
{
  this->m_Functions[155].__pfn = CDOTA_Modifier_MonkeyKing_RightClickJump_Activity::GetActivityTranslationModifiers;
  this->m_Functions[155].__delta = 0;
}


// CDOTA_Modifier_MonkeyKing_RightClickJump_Activity::GetActivityTranslationModifiers  (line 2144, @0x0000000002c1d5a0, libserver.so)
// strings: "right_click_jumping"
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_RightClickJump_Activity::GetActivityTranslationModifiers(
        CDOTA_Modifier_MonkeyKing_RightClickJump_Activity *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "right_click_jumping";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Ability_MonkeyKing_Spring::OnSpellStart  (line 2156, @0x0000000002c63cd0, libserver.so)  // inlines: CEntityIndex, CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlVector, CUtlVectorBase, DOTAGameRules, EmitSound_t, FastSqrt, GetEHandle, GetEntryIndex, GetGameTime, GetSerialNumber, GetTeamNumber, Length, NormalizeInPlace, Purge, RemoveAll, Set, SoundEventGuid_t, VectorAdd, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-, operator=, ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorPosition, VectorNormalize, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::SetActivated, CDOTA_BaseNPC::SwapAbilities, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CBaseEntity::GetTeam (27 total)
// strings: "monkey_king_primal_spring_early", "monkey_king_primal_spring", "Hero_MonkeyKing.Spring.Channel", "modifier_monkey_king_spring_thinker", "particles/units/heroes/hero_monkey_king/monkey_king_spring_channel.vpcf", "attach_hitloc"
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_Ability_MonkeyKing_Spring::OnSpellStart(CDOTA_Ability_MonkeyKing_Spring *const this)
{
  float v1; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  int LevelSpecialValue; // r12d
  float v5; // xmm2_4
  vec_t v6; // xmm1_4
  vec_t v7; // xmm0_4
  vec_t v8; // xmm2_4
  CDOTA_BaseNPC *v9; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v11; // rax
  float v12; // xmm1_4
  CDOTA_BaseNPC *v13; // rax
  CTeam *Team; // rax
  CTeam *GlobalTeam; // rax
  int m_Value; // r15d
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v20; // eax
  __int16 v21; // cx
  CDOTA_BaseNPC *v22; // r15
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v24; // r15
  CDOTA_ParticleManager *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  const Vector *AbsOrigin; // r15
  int v28; // ebx
  CDOTA_ParticleManager *v29; // rax
  float v30; // [rsp+10h] [rbp-238h]
  const Vector v31; // [rsp+20h] [rbp-228h]
  int m_nFxIndex; // [rsp+28h] [rbp-220h]
  CDOTA_BaseNPC *v33; // [rsp+28h] [rbp-220h]
  float v34; // [rsp+30h] [rbp-218h] BYREF
  float v35; // [rsp+34h] [rbp-214h]
  __int128 vDirection; // [rsp+38h] [rbp-210h] OVERLAPPED BYREF
  __int128 vPos; // [rsp+48h] [rbp-200h] OVERLAPPED BYREF
  EmitSound_t ep; // [rsp+58h] [rbp-1F0h] BYREF
  IRecipientFilter v39; // [rsp+D0h] [rbp-178h] BYREF
  CPASAttenuationFilter filter; // [rsp+D8h] [rbp-170h]
  Vector CursorPosition; // 0:kr00_12.12
  Vector v42; // 0:kr14_12.12
  Vector v43; // 0:kr20_12.12

  v1 = 0.0;
  *&filter.m_bUsingPredictionRules = __readfsqword(0x28u);
  if ( g_pGameRules != 0 )
    v1 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_fStartChannelTime = v1;
  Caster = CDOTABaseAbility::GetCaster(this);
  v31 = *CBaseEntity::GetAbsOrigin(Caster);
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  *(&vPos + 1) = *&CursorPosition.x;
  ep.m_nChannel = LODWORD(CursorPosition.z);
  v34 = CursorPosition.x - v31.x;
  v35 = CursorPosition.y - v31.y;
  *&vDirection = CursorPosition.z - v31.z;
  v30 = fsqrt(((v34 * v34) + (v35 * v35)) + (*&vDirection * *&vDirection));
  VectorNormalize(&v34);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "max_distance", -1, 0);
  v5 = ((*(this->_vptr_IHandleEntity + 228))(this) + LevelSpecialValue);
  if ( v30 <= v5 )
  {
    v43 = CDOTABaseAbility::GetCursorPosition(this);
    *(&vPos + 1) = *&v43.x;
    ep.m_nChannel = LODWORD(v43.z);
    this->m_vPos.z = v43.z;
    this->m_vPos.x = v43.x;
    this->m_vPos.y = *(&vPos + 3);
  }
  else
  {
    v6 = (v35 * v5) + v31.y;
    v7 = (*&vDirection * v5) + v31.z;
    v8 = (v5 * v34) + v31.x;
    this->m_vPos.y = v6;
    this->m_vPos.z = v7;
    this->m_vPos.x = v8;
  }
  v9 = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v9, "monkey_king_primal_spring_early", 0);
  if ( AbilityByName != 0 )
  {
    CDOTABaseAbility::SetActivated(AbilityByName, 1);
    v11 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::SwapAbilities(v11, "monkey_king_primal_spring_early", "monkey_king_primal_spring", 1, 0);
  }
  v42 = CDOTABaseAbility::GetCursorPosition(this);
  *(&vDirection + 1) = *&v42.x;
  *&vPos = v42.z;
  CRecipientFilter::CRecipientFilter(&v39);
  v39._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS(&v39, (&vDirection + 8));
  v39._vptr_IRecipientFilter = &off_3FECD70;
  CPASAttenuationFilter::Filter(&v39, (&vDirection + 8), 0.80000001, v12);
  v13 = CDOTABaseAbility::GetCaster(this);
  Team = CBaseEntity::GetTeam(v13);
  CRecipientFilter::RemoveRecipientsNotOnTeam(&v39, Team);
  GlobalTeam = GetGlobalTeam(1);
  CRecipientFilter::AddRecipientsByTeam(&v39, GlobalTeam);
  ep.m_pSoundName = 1065353216;
  ep.m_flVolume = 0.0;
  ep.m_SoundLevel = soundlevel_t::SNDLVL_100dB;
  LODWORD(ep.m_pOrigin) = 0;
  *&ep.m_flSoundTime = 0;
  LOWORD(ep.m_pflSoundDuration) = 1;
  BYTE2(ep.m_pflSoundDuration) = 0;
  HIDWORD(ep.m_pflSoundDuration) = -1;
  *&ep.m_bEmitCloseCaption = 0;
  memset(&ep.m_UtlVecSoundOrigin, 0, 21);
  DWORD2(vPos) = 6;
  *&ep.m_nChannel = "Hero_MonkeyKing.Spring.Channel";
  *&ep.m_nFlags = &vDirection + 8;
  CBaseEntity::EmitSound(&v39, 0, (&vPos + 8));
  KeyValues::KeyValues(&ep.m_nForceGuid, "modifier_monkey_king_spring_thinker");
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  v17 = CDOTABaseAbility::GetCaster(this);
  v18 = Thinker_Create(
          v17,
          this,
          "modifier_monkey_king_spring_thinker",
          &ep.m_nForceGuid,
          this->m_vPos,
          m_Value,
          0,
          1,
          0);
  if ( v18 != 0 && (m_pEntity = v18->m_pEntity) != 0 )
  {
    v20 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v21 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v21 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hThinker.m_Index) = v21 | this->m_hThinker.m_Index & 0x8000;
    this->m_hThinker.m_Index = (v20 << 15) | this->m_hThinker.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hThinker.m_Index = -1;
  }
  v22 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  this->m_nFxIndex = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_monkey_king/monkey_king_spring_channel.vpcf",
                       2,
                       v22,
                       0,
                       0);
  v24 = CDOTABaseAbility::GetCaster(this);
  m_nFxIndex = this->m_nFxIndex;
  v25 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v25, m_nFxIndex, 0, v24, 1, 0, vec3_invalid, 1);
  v26 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v26);
  v33 = CDOTABaseAbility::GetCaster(this);
  v28 = this->m_nFxIndex;
  v29 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v29, v28, 1, v33, 5, "attach_hitloc", *AbsOrigin, 1);
  KeyValues::~KeyValues(&ep.m_nForceGuid);
  *&ep.m_bEmitCloseCaption = 0;
  if ( (HIDWORD(ep.m_UtlVecSoundOrigin.m_Memory.m_pMemory) & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin);
    if ( (HIDWORD(ep.m_UtlVecSoundOrigin.m_Memory.m_pMemory) & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin);
  }
  v39._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(&v39);
}


// CDOTA_Ability_MonkeyKing_Spring::OnChannelFinish  (line 2210, @0x0000000002c490a0, libserver.so)  // inlines: DOTAGameRules, GetGameTime
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_MonkeyKing_TreeDance::LeapAt, CDOTABaseAbility::SetActivated, CDOTA_BaseNPC::SwapAbilities, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_Ability_MonkeyKing_Spring::DestroyEffectThinker, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect
// strings: "monkey_king_tree_dance", "monkey_king_primal_spring_early", "monkey_king_primal_spring", "modifier_monkey_king_bounce_perch"
void __fastcall CDOTA_Ability_MonkeyKing_Spring::OnChannelFinish(
        CDOTA_Ability_MonkeyKing_Spring *const this,
        bool bInterrupted)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Ability_MonkeyKing_TreeDance *AbilityByName; // r12
  float v5; // xmm2_4
  float v6; // xmm0_4
  __m128i v7; // xmm2
  int m_nFxIndex; // r12d
  CDOTA_BaseNPC *v9; // rax
  CDOTABaseAbility *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  unsigned int v14; // [rsp+Ch] [rbp-14h]

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "monkey_king_tree_dance", 0);
  if ( AbilityByName != 0 )
  {
    v5 = 0.0;
    if ( g_pGameRules != 0 )
      v5 = *&g_pGameRules[18].m_szQuestName[20];
    *&v14 = v5 - this->m_fStartChannelTime;
    v6 = (*(this->_vptr_IHandleEntity + 225))(this);
    v7 = v14;
    *v7.m128i_i32 = *&v14 / v6;
    CDOTA_Ability_MonkeyKing_TreeDance::LeapAt(AbilityByName, 0, this->m_vPos, v7);
    m_nFxIndex = this->m_nFxIndex;
    if ( m_nFxIndex != 0 )
    {
      ParticleManager = GetParticleManager();
      CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFxIndex, 0);
    }
    v9 = CDOTABaseAbility::GetCaster(this);
    v10 = CDOTA_BaseNPC::FindAbilityByName(v9, "monkey_king_primal_spring_early", 0);
    if ( v10 != 0 )
    {
      CDOTABaseAbility::SetActivated(v10, 0);
      v11 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::SwapAbilities(v11, "monkey_king_primal_spring_early", "monkey_king_primal_spring", 0, 1);
    }
    v12 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::RemoveModifierByName(v12, "modifier_monkey_king_bounce_perch");
    CDOTABaseAbility::SetActivated(this, 0);
    CDOTA_Ability_MonkeyKing_Spring::DestroyEffectThinker(this);
  }
}


// CDOTA_Ability_MonkeyKing_Spring::OnUpgrade  (line 2241, @0x0000000002c215f0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::OnUpgrade
// strings: "monkey_king_primal_spring_early"
void __fastcall CDOTA_Ability_MonkeyKing_Spring::OnUpgrade(CDOTA_Ability_MonkeyKing_Spring *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "monkey_king_primal_spring_early", 0);
  if ( AbilityByName != 0 )
    (*(AbilityByName->_vptr_IHandleEntity + 212))(AbilityByName, this->m_iLevel.m_Value);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_MonkeyKing_Spring::OnLoadState  (line 2255, @0x0000000002c212d0, libserver.so)
// calls: CDOTABaseAbility::OnLoadState, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::SwapAbilities
// strings: "monkey_king_primal_spring_early", "monkey_king_primal_spring"
bool __fastcall CDOTA_Ability_MonkeyKing_Spring::OnLoadState(
        CDOTA_Ability_MonkeyKing_Spring *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rax

  CDOTABaseAbility::OnLoadState(this, pKV);
  if ( this != 0 && this->m_bHidden.m_Value )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::SwapAbilities(Caster, "monkey_king_primal_spring", "monkey_king_primal_spring_early", 1, 0);
  }
  return 1;
}


// CDOTA_Ability_MonkeyKing_Spring::DestroyEffectThinker  (line 2272, @0x0000000002c48f90, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator bool, operator=
// calls: CDOTA_ModifierManager::RemoveModifierByName, UTIL_Remove
// callers: CDOTA_Ability_MonkeyKing_Spring::OnChannelFinish
// strings: "modifier_monkey_king_spring_thinker"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_MonkeyKing_Spring::DestroyEffectThinker(CDOTA_Ability_MonkeyKing_Spring *const this)
{
  uint32 m_Index; // eax
  unsigned __int64 v3; // rdx
  CEntityIdentity *v4; // rcx
  CEntityIdentity *v5; // rsi
  CEntityInstance *m_pInstance; // rdi
  CEntityIdentity *v7; // rdx
  CEntityInstance *v8; // rdi
  CEntityIdentity *v9; // rdx

  m_Index = this->m_hThinker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = this->m_hThinker.m_Index & 0x7FFF;
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v3 >> 9)];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hThinker.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
        {
          CDOTA_ModifierManager::RemoveModifierByName(
            &m_pInstance[64].m_worldGroupId,
            "modifier_monkey_king_spring_thinker");
          m_Index = this->m_hThinker.m_Index;
          if ( m_Index + 2 <= 1 )
            goto LABEL_10;
          v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hThinker.m_Index) >> 9) & 0x3F];
          if ( v7 == 0 )
            goto LABEL_10;
          v9 = &v7[this->m_hThinker.m_Index & 0x1FF];
          if ( v9 == 0 )
            goto LABEL_10;
        }
        else
        {
          v9 = &v4[v3 & 0x1FF];
        }
        if ( m_Index == v9->m_EHandle.m_Index )
        {
          v8 = v9->m_pInstance;
          goto LABEL_11;
        }
LABEL_10:
        v8 = 0;
LABEL_11:
        UTIL_Remove(v8);
        this->m_hThinker.m_Index = -1;
      }
    }
  }
}


// CDOTA_Ability_MonkeyKing_Spring::OnRefCountModified  (line 2293, @0x0000000002c491e0, libserver.so)
// calls: CDOTABaseAbility::SetActivated
// callers: CDOTA_Ability_MonkeyKing_TreeDance::OnAbilityPhaseStart, CDOTA_Ability_MonkeyKing_TreeDance::OnAbilityPhaseInterrupted, CDOTA_Modifier_MonkeyKing_BounceLeap::OnDestroy, CDOTA_Modifier_MonkeyKing_Bounce::OnTakeDamage, CDOTA_Modifier_MonkeyKing_BouncePerch::OnDestroy, CDOTA_Ability_MonkeyKing_Spring::IncrementRefCount, CDOTA_Ability_MonkeyKing_Spring::DecrementRefCount, CDOTA_Modifier_MonkeyKing_BouncePerch::OnCreated
void __fastcall CDOTA_Ability_MonkeyKing_Spring::OnRefCountModified(CDOTA_Ability_MonkeyKing_Spring *const this)
{
  if ( this->m_nRefCount <= 0 )
    CDOTABaseAbility::SetActivated(this, 0);
  else
    CDOTABaseAbility::SetActivated(this, 1);
}


// CDOTA_Ability_MonkeyKing_Spring::IncrementRefCount  (line 2309, @0x0000000002c49850, libserver.so)
// calls: CDOTA_Ability_MonkeyKing_Spring::OnRefCountModified
void __fastcall CDOTA_Ability_MonkeyKing_Spring::IncrementRefCount(CDOTA_Ability_MonkeyKing_Spring *const this)
{
  ++this->m_nRefCount;
  CDOTA_Ability_MonkeyKing_Spring::OnRefCountModified(this);
}


// CDOTA_Ability_MonkeyKing_Spring::DecrementRefCount  (line 2319, @0x0000000002c49870, libserver.so)
// calls: CDOTA_Ability_MonkeyKing_Spring::OnRefCountModified
void __fastcall CDOTA_Ability_MonkeyKing_Spring::DecrementRefCount(CDOTA_Ability_MonkeyKing_Spring *const this)
{
  int v1; // eax

  v1 = 0;
  if ( this->m_nRefCount - 1 >= 0 )
    v1 = this->m_nRefCount - 1;
  this->m_nRefCount = v1;
  CDOTA_Ability_MonkeyKing_Spring::OnRefCountModified(this);
}


// CDOTA_Modifier_MonkeyKing_SpringSlow::~CDOTA_Modifier_MonkeyKing_SpringSlow  (line 2338, @0x0000000002c91a10, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_MonkeyKing_SpringSlow::~CDOTA_Modifier_MonkeyKing_SpringSlow(
        CDOTA_Modifier_MonkeyKing_SpringSlow *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E2670;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_MonkeyKing_SpringSlow::~CDOTA_Modifier_MonkeyKing_SpringSlow  (line 2338, @0x0000000002c91a30, libserver.so)  // inlines: ~CDOTA_Modifier_MonkeyKing_SpringSlow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_MonkeyKing_SpringSlow::~CDOTA_Modifier_MonkeyKing_SpringSlow(
        CDOTA_Modifier_MonkeyKing_SpringSlow *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E2670;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_MonkeyKing_SpringSlow::GetEffectName  (line 2343, @0x0000000002c8ae70, libserver.so)
// strings: "particles/units/heroes/hero_monkey_king/monkey_king_spring_slow.vpcf"
const char *__fastcall CDOTA_Modifier_MonkeyKing_SpringSlow::GetEffectName(
        CDOTA_Modifier_MonkeyKing_SpringSlow *const this)
{
  return "particles/units/heroes/hero_monkey_king/monkey_king_spring_slow.vpcf";
}


// CDOTA_Modifier_MonkeyKing_SpringSlow::GetStatusEffectName  (line 2344, @0x0000000002c8ae80, libserver.so)
// strings: "particles/status_fx/status_effect_monkey_king_spring_slow.vpcf"
const char *__fastcall CDOTA_Modifier_MonkeyKing_SpringSlow::GetStatusEffectName(
        CDOTA_Modifier_MonkeyKing_SpringSlow *const this)
{
  return "particles/status_fx/status_effect_monkey_king_spring_slow.vpcf";
}


// CDOTA_Modifier_MonkeyKing_SpringSlow::StatusEffectPriority  (line 2345, @0x0000000002c8ae90, libserver.so)
int __fastcall CDOTA_Modifier_MonkeyKing_SpringSlow::StatusEffectPriority(
        CDOTA_Modifier_MonkeyKing_SpringSlow *const this)
{
  return 49;
}


// CDOTA_Modifier_MonkeyKing_SpringSlow::IsDebuff  (line 2353, @0x0000000002c8aea0, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_SpringSlow::IsDebuff(CDOTA_Modifier_MonkeyKing_SpringSlow *const this)
{
  return 1;
}


// CDOTA_Modifier_MonkeyKing_SpringSlow::OnCreated  (line 2370, @0x0000000002c71130, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::GetFloat
// strings: "impact_movement_slow", "fSpringChanneledPercent"
void __fastcall CDOTA_Modifier_MonkeyKing_SpringSlow::OnCreated(
        CDOTA_Modifier_MonkeyKing_SpringSlow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v5; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->impact_movement_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "impact_movement_slow", -1, 0);
  else
    this->impact_movement_slow = 0;
  this->m_nSlowPct = (KeyValues::GetFloat(pKV, "fSpringChanneledPercent", v5) * -this->impact_movement_slow);
}


// CDOTA_Modifier_MonkeyKing_SpringSlow::AddCustomTransmiterData  (line 2382, @0x0000000002c21e70, libserver.so)  // inlines: set_has_movement_speed, set_movement_speed
// calls: CDOTA_Buff::AddCustomTransmiterData
void __fastcall CDOTA_Modifier_MonkeyKing_SpringSlow::AddCustomTransmiterData(
        CDOTA_Modifier_MonkeyKing_SpringSlow *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  int m_nSlowPct; // eax

  m_nSlowPct = this->m_nSlowPct;
  *(entry + 4) |= 0x200000u;
  *(entry + 32) = m_nSlowPct;
  CDOTA_Buff::AddCustomTransmiterData(this, entry);
}


// CDOTA_Modifier_MonkeyKing_SpringSlow::DeclareFunctions  (line 2398, @0x0000000002c1d5c0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_MonkeyKing_SpringSlow::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_MonkeyKing_SpringSlow::DeclareFunctions(
        CDOTA_Modifier_MonkeyKing_SpringSlow *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_MonkeyKing_SpringSlow::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_MonkeyKing_SpringSlow::GetModifierMoveSpeedBonus_Percentage  (line 2405, @0x0000000002c1d5e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_SpringSlow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_MonkeyKing_SpringSlow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->m_nSlowPct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_MonkeyKing_Spring_Thinker::~CDOTA_Modifier_MonkeyKing_Spring_Thinker  (line 2417, @0x0000000002c919c0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_MonkeyKing_Spring_Thinker::~CDOTA_Modifier_MonkeyKing_Spring_Thinker(
        CDOTA_Modifier_MonkeyKing_Spring_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E2990;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_MonkeyKing_Spring_Thinker::~CDOTA_Modifier_MonkeyKing_Spring_Thinker  (line 2417, @0x0000000002c919e0, libserver.so)  // inlines: ~CDOTA_Modifier_MonkeyKing_Spring_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_MonkeyKing_Spring_Thinker::~CDOTA_Modifier_MonkeyKing_Spring_Thinker(
        CDOTA_Modifier_MonkeyKing_Spring_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E2990;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_MonkeyKing_Spring_Thinker::IsHidden  (line 2425, @0x0000000002c8aeb0, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_Spring_Thinker::IsHidden(
        CDOTA_Modifier_MonkeyKing_Spring_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_MonkeyKing_Spring_Thinker::OnCreated  (line 2437, @0x0000000002c65600, libserver.so)  // inlines: DotaRetrieveAbilityValue<float>, FastSqrt, GetLevelSpecialValueFor<float>, GetTeamNumber, Length2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTAFogOfWarSystem::AddTempViewer
// strings: "impact_radius", "monkey_king_tree_dance", "spring_leap_speed"
void __fastcall CDOTA_Modifier_MonkeyKing_Spring_Thinker::OnCreated(
        CDOTA_Modifier_MonkeyKing_Spring_Thinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  __m128i v4; // xmm0
  int v5; // r14d
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  __m128i v8; // xmm2
  float v9; // r15d
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v12; // rax
  const Vector *v13; // rax
  float v14; // xmm1_4
  CDOTABaseAbility *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  const Vector *v17; // r12
  CDOTA_BaseNPC *v18; // rax
  float fDuration; // [rsp+Ch] [rbp-24h]
  float fDurationa; // [rsp+Ch] [rbp-24h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    *v4.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "impact_radius", -1, 0);
    v5 = _mm_cvtsi128_si32(v4);
  }
  else
  {
    v5 = _mm_cvtsi128_si32(0LL);
  }
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "monkey_king_tree_dance", 0);
  if ( AbilityByName != 0 )
  {
    *v8.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "spring_leap_speed", -1, 0);
    v9 = COERCE_FLOAT(_mm_cvtsi128_si32(v8));
  }
  else
  {
    v9 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
  }
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v12 = CDOTA_Buff::GetCaster(this);
  v13 = CBaseEntity::GetAbsOrigin(v12);
  v14 = v13->y - AbsOrigin->y;
  fDuration = v9 / fsqrt(((v13->x - AbsOrigin->x) * (v13->x - AbsOrigin->x)) + (v14 * v14));
  v15 = CDOTA_Buff::GetAbility(this);
  fDurationa = fDuration + (*(v15->_vptr_IHandleEntity + 225))(v15);
  v16 = CDOTA_Buff::GetParent(this);
  v17 = CBaseEntity::GetAbsOrigin(v16);
  v18 = CDOTA_Buff::GetCaster(this);
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_TORRENT,
    v18->m_iTeamNum.m_Value,
    v17,
    *&v5,
    fDurationa,
    1);
}


// CDOTA_Modifier_MonkeyKing_Spring_Thinker::OnDestroy  (line 2466, @0x0000000002c1d600, libserver.so)
void __fastcall CDOTA_Modifier_MonkeyKing_Spring_Thinker::OnDestroy(
        CDOTA_Modifier_MonkeyKing_Spring_Thinker *const this)
{
  ;
}


// CDOTA_Modifier_MonkeyKing_TreeJump_Hidden::~CDOTA_Modifier_MonkeyKing_TreeJump_Hidden  (line 2480, @0x0000000002c91970, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_MonkeyKing_TreeJump_Hidden::~CDOTA_Modifier_MonkeyKing_TreeJump_Hidden(
        CDOTA_Modifier_MonkeyKing_TreeJump_Hidden *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E2CB0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_MonkeyKing_TreeJump_Hidden::~CDOTA_Modifier_MonkeyKing_TreeJump_Hidden  (line 2480, @0x0000000002c91990, libserver.so)  // inlines: ~CDOTA_Modifier_MonkeyKing_TreeJump_Hidden
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_MonkeyKing_TreeJump_Hidden::~CDOTA_Modifier_MonkeyKing_TreeJump_Hidden(
        CDOTA_Modifier_MonkeyKing_TreeJump_Hidden *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E2CB0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_MonkeyKing_TreeJump_Hidden::IsHidden  (line 2485, @0x0000000002c8aec0, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_TreeJump_Hidden::IsHidden(
        CDOTA_Modifier_MonkeyKing_TreeJump_Hidden *const this)
{
  return 1;
}


// CDOTA_Modifier_MonkeyKing_TreeJump_Hidden::IsPurgable  (line 2486, @0x0000000002c8aed0, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_TreeJump_Hidden::IsPurgable(
        CDOTA_Modifier_MonkeyKing_TreeJump_Hidden *const this)
{
  return 0;
}


// CDOTA_Modifier_MonkeyKing_TreeJump_Hidden::DeclareFunctions  (line 2496, @0x0000000002c1d610, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_MonkeyKing_TreeJump_Hidden::OnAttackStart(CModifierParams const&)
void __fastcall CDOTA_Modifier_MonkeyKing_TreeJump_Hidden::DeclareFunctions(
        CDOTA_Modifier_MonkeyKing_TreeJump_Hidden *const this)
{
  this->m_Functions[119].__pfn = CDOTA_Modifier_MonkeyKing_TreeJump_Hidden::OnAttackStart;
  this->m_Functions[119].__delta = 0;
}


// CDOTA_Modifier_MonkeyKing_TreeJump_Hidden::OnAttackStart  (line 2503, @0x0000000002c2d3c0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_TreeJump_Hidden::OnAttackStart(
        CDOTA_Modifier_MonkeyKing_TreeJump_Hidden *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1uLL;
  v4 = &v3[params->hattacker.m_Index & 0x1FF];
  if ( v4 == 0 || m_Index != v4->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC || CDOTA_Buff::GetParent(this) != m_pInstance )
    return 1uLL;
  CDOTA_Buff::Destroy(this, 0, 0, 0);
  return 1uLL;
}


// CDOTA_Modifier_MonkeyKing_BouncePerch::OnCreated  (line 2523, @0x0000000002c5a2c0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetEHandle, GetEntryIndex, GetForModify, GetLevelSpecialValueFor<float>, GetSerialNumber, IncrementRefCount, IsStolen, NetworkStateChanged, Set, SetPerchedTree, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_MonkeyKing_Spring::OnRefCountModified, KeyValues::GetPtr, CDOTA_Buff::GetParent, CDOTALocomotor::ApplyHorizontalMotionController, CBaseEntity::GetAbsOrigin, CBaseEntity::SetAbsOrigin, __dynamic_cast, CEntityInstance::GetEntityIndex (15 total)
// strings: "perched_vision", "monkey_king_primal_spring"
// globals: `typeinfo for'CDOTA_Unit_Hero_MonkeyKing
void __fastcall CDOTA_Modifier_MonkeyKing_BouncePerch::OnCreated(
        CDOTA_Modifier_MonkeyKing_BouncePerch *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Ability_MonkeyKing_Spring *AbilityByName; // rax
  void *Ptr; // r12
  __int64 v8; // rax
  __int64 v9; // rax
  __int16 v10; // si
  int v11; // edx
  CDOTA_BaseNPC *v12; // rax
  CDOTALocomotor *v13; // rax
  const CBaseEntity *v14; // rax
  const CEntityInstance *v15; // r13
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v17; // rax
  float v18; // xmm1_4
  _DWORD *v19; // r12
  CEntityIndex v20; // eax
  DotaTreeId_t UnitOrderTreeIdForEntityIndex; // r13d
  Vector vPos; // [rsp+0h] [rbp-30h] BYREF

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->perched_vision = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "perched_vision", -1, 0);
  else
    this->perched_vision = 0.0;
  this->m_bAbilityIsStolen = CDOTA_Buff::GetAbility(this)->m_bStolen.m_Value;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "monkey_king_primal_spring", 0);
  if ( AbilityByName != 0 )
  {
    ++AbilityByName->m_nRefCount;
    CDOTA_Ability_MonkeyKing_Spring::OnRefCountModified(AbilityByName);
  }
  Ptr = KeyValues::GetPtr(pKV, "tree", 0);
  v8 = (*(*Ptr + 64LL))(Ptr);
  if ( v8 != 0 && (v9 = *(v8 + 8)) != 0 )
  {
    v10 = 0x7FFF;
    v11 = (*(v9 + 16) >> 15) - (*(v9 + 48) & 1);
    if ( *(v9 + 16) != -1 )
      v10 = *(v9 + 16) & 0x7FFF;
    LOWORD(this->m_hTree.m_Index) = v10 | this->m_hTree.m_Index & 0x8000;
    this->m_hTree.m_Index = (v11 << 15) | this->m_hTree.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hTree.m_Index = -1;
  }
  if ( CDOTA_Buff::GetParent(this) != 0
    && (v12 = CDOTA_Buff::GetParent(this),
        v13 = (*(v12->_vptr_IHandleEntity + 376))(v12),
        CDOTALocomotor::ApplyHorizontalMotionController(v13, &this->CHorizontalMotionController, 0)) )
  {
    v14 = (*(*Ptr + 64LL))(Ptr);
    v15 = v14;
    if ( v14 != 0 )
    {
      vPos = *CBaseEntity::GetAbsOrigin(v14);
      Parent = CDOTA_Buff::GetParent(this);
      CBaseEntity::SetAbsOrigin(Parent, &vPos);
    }
    v17 = CDOTA_Buff::GetParent(this);
    if ( v17 != 0 )
    {
      v19 = __dynamic_cast(v17, &`typeinfo for'CDOTA_BaseNPC, &`typeinfo for'CDOTA_Unit_Hero_MonkeyKing, 0);
      if ( v19 != 0 )
      {
        v20.m_Data = CEntityInstance::GetEntityIndex(v15).m_Data;
        UnitOrderTreeIdForEntityIndex = GetUnitOrderTreeIdForEntityIndex(v20);
        (*(*v19 + 176LL))(v19, 5876, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v19[1469] = UnitOrderTreeIdForEntityIndex;
      }
    }
    CDOTA_Buff::StartIntervalThink(this, 0.050000001, v18);
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_MonkeyKing_BouncePerch::OnDestroy  (line 2582, @0x0000000002c49730, libserver.so)  // inlines: DecrementRefCount, GetForModify, NetworkStateChanged, SetPerchedTree
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_Buff::GetParent, CDOTALocomotor::RemoveHorizontalMotionController, __dynamic_cast, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_MonkeyKing_Spring::OnRefCountModified
// strings: "modifier_monkey_king_transform", "modifier_monkey_king_tree_dance_hidden", "monkey_king_primal_spring"
// globals: `typeinfo for'CDOTA_Unit_Hero_MonkeyKing
void __fastcall CDOTA_Modifier_MonkeyKing_BouncePerch::OnDestroy(CDOTA_Modifier_MonkeyKing_BouncePerch *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  _DWORD *v7; // rax
  _DWORD *v8; // r12
  CDOTA_BaseNPC *v9; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_Ability_MonkeyKing_Spring *v11; // rbx
  int v12; // r12d
  int v13; // eax

  Caster = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_monkey_king_transform");
  v3 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v3, "modifier_monkey_king_tree_dance_hidden");
  Parent = CDOTA_Buff::GetParent(this);
  v5 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveHorizontalMotionController(v5, &this->CHorizontalMotionController);
  v6 = CDOTA_Buff::GetParent(this);
  if ( v6 != 0 )
  {
    v7 = __dynamic_cast(v6, &`typeinfo for'CDOTA_BaseNPC, &`typeinfo for'CDOTA_Unit_Hero_MonkeyKing, 0);
    v8 = v7;
    if ( v7 != 0 )
    {
      (*(*v7 + 176LL))(v7, 5876, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v8[1469] = -1;
    }
  }
  v9 = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v9, "monkey_king_primal_spring", 0);
  v11 = AbilityByName;
  if ( AbilityByName != 0 )
  {
    v12 = 0;
    v13 = LODWORD(AbilityByName[1].m_iszPrivateVScripts.u.m_Id) - 1;
    if ( v13 < 0 )
      v13 = 0;
    v11->m_nRefCount = v13;
    CDOTA_Ability_MonkeyKing_Spring::OnRefCountModified(v11);
    if ( v11->m_nRefCount - 1 >= 0 )
      v12 = v11->m_nRefCount - 1;
    v11->m_nRefCount = v12;
    CDOTA_Ability_MonkeyKing_Spring::OnRefCountModified(v11);
  }
}


// CDOTA_Modifier_MonkeyKing_BouncePerch::CheckState  (line 2607, @0x0000000002c1f610, libserver.so)  // inlines: Enable
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_monkey_king_bounce"
void __fastcall CDOTA_Modifier_MonkeyKing_BouncePerch::CheckState(
        CDOTA_Modifier_MonkeyKing_BouncePerch *const this,
        CDOTABuffState *const buffState)
{
  CDOTA_BaseNPC *Parent; // rax
  uint64 m_nDisabledStateMask; // rax

  Parent = CDOTA_Buff::GetParent(this);
  if ( CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_monkey_king_bounce", 0) != 0 )
  {
    m_nDisabledStateMask = buffState->m_nDisabledStateMask;
    buffState->m_nEnabledStateMask |= 0x1000002uLL;
    buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFEFFFFFDLL;
  }
}


// CDOTA_Modifier_MonkeyKing_BouncePerch::OnHorizontalMotionInterrupted  (line 2622, @0x0000000002c1f760, libserver.so)
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_MonkeyKing_BouncePerch::OnHorizontalMotionInterrupted(
        CDOTA_Modifier_MonkeyKing_BouncePerch *const this)
{
  CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_MonkeyKing_BouncePerch::OnIntervalThink  (line 2631, @0x0000000002c525e0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetForceAttackTarget, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, VectorAdd, operator CBaseEntity*, operator CEntityInstance*, operator+
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::Destroy, RandomFloat, CBaseEntity::GetAbsOrigin, GetGroundHeight, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues (16 total)
// strings: "modifier_monkey_king_bounce_leap", "modifier_monkey_king_bounce", "modifier_monkey_king_arc_to_ground", "vPosX", "vPosY", "vPosZ" (8 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_MonkeyKing_BouncePerch::OnIntervalThink(
        CDOTA_Modifier_MonkeyKing_BouncePerch *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CConcreteEntityList *v3; // rcx
  uint32 m_Index; // edx
  unsigned __int16 v5; // si
  CEntityIdentity *v6; // rax
  CEntityIdentity *v7; // rax
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // r12
  CDOTA_BaseNPC *v15; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *v17; // rax
  float v18; // xmm1_4
  float v19; // xmm1_4
  float v20; // xmm1_4
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v23; // rax
  CEntityInstance *v24; // r13
  char *v25; // r14
  char *v26; // rax
  char *v27; // rdx
  CDOTA_BaseNPC *v28; // rax
  CDOTA_BaseNPC *v29; // rax
  CDOTABaseAbility *v30; // rax
  float v31; // xmm1_4
  CDOTABaseAbility *v32; // r14
  CDOTA_BaseNPC *v33; // r13
  CDOTA_BaseNPC *v34; // rax
  CEntityInstance *m_pInstance; // rax
  float unperched_stunned_duration; // [rsp+1Ch] [rbp-44h] BYREF
  KeyValues kv; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v38; // [rsp+38h] [rbp-28h]

  v38 = __readfsqword(0x28u);
  Parent = CDOTA_Buff::GetParent(this);
  v3 = CEntityHandle::gm_pEntityList;
  m_Index = Parent->m_hForceAttackTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = Parent->m_hForceAttackTarget.m_Index;
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[v5 & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
      {
        m_pInstance = v7->m_pInstance;
        if ( m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
          goto LABEL_15;
      }
    }
  }
  if ( this->m_bAbilityIsStolen )
  {
    v12 = CDOTA_Buff::GetParent(this);
    if ( CDOTA_BaseNPC::FindModifierByName(v12, "modifier_monkey_king_bounce", 0) == 0 )
    {
      RandomFloat(-200.0, 200.0);
      RandomFloat(-200.0, 200.0);
      v14 = CDOTA_Buff::GetParent(this);
      v15 = CDOTA_Buff::GetParent(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v15);
      GetGroundHeight(AbsOrigin, v14);
      v17 = CDOTA_Buff::GetParent(this);
      CBaseEntity::GetAbsOrigin(v17);
      KeyValues::KeyValues(&kv, "modifier_monkey_king_arc_to_ground");
      KeyValues::SetFloat(&kv, "vPosX", v18);
      KeyValues::SetFloat(&kv, "vPosY", v19);
      KeyValues::SetFloat(&kv, "vPosZ", v20);
      Ability = CDOTA_Buff::GetAbility(this);
      Caster = CDOTA_Buff::GetCaster(this);
      v23 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::AddNewModifier(v23, Caster, Ability, "modifier_monkey_king_arc_to_ground", &kv, 0);
      CDOTA_Buff::Destroy(this, 0, 0, 0);
LABEL_17:
      KeyValues::~KeyValues(&kv);
      return;
    }
    v3 = CEntityHandle::gm_pEntityList;
  }
  v8 = this->m_hTree.m_Index;
  if ( v8 + 2 <= 1
    || (v9 = v3->m_pIdentityChunks[(LOWORD(this->m_hTree.m_Index) >> 9) & 0x3F]) == 0
    || (v10 = &v9[this->m_hTree.m_Index & 0x1FF]) == 0
    || v8 != v10->m_EHandle.m_Index
    || (v24 = v10->m_pInstance, v10->m_pInstance == 0) )
  {
    v11 = CDOTA_Buff::GetCaster(this);
    if ( CDOTA_BaseNPC::FindModifierByName(v11, "modifier_monkey_king_bounce_leap", 0) != 0 )
      return;
    v13 = CDOTA_Buff::GetCaster(this);
    if ( CDOTA_BaseNPC::FindModifierByName(v13, "modifier_monkey_king_arc_to_ground", 0) != 0 )
      return;
    goto LABEL_15;
  }
  v25 = __dynamic_cast(v10->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_TempTree, 0);
  v26 = __dynamic_cast(v24, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_MapTree, 0);
  if ( v26 == 0 )
  {
    if ( v25 != 0 )
    {
      v27 = v25 + 1216;
      goto LABEL_21;
    }
LABEL_15:
    CDOTA_Buff::Destroy(this, 0, 0, 0);
    return;
  }
  v27 = v26 + 784;
LABEL_21:
  if ( v27[20] == 0 )
  {
    v28 = CDOTA_Buff::GetCaster(this);
    if ( CDOTA_BaseNPC::FindModifierByName(v28, "modifier_monkey_king_bounce_leap", 0) == 0 )
    {
      v29 = CDOTA_Buff::GetCaster(this);
      if ( CDOTA_BaseNPC::FindModifierByName(v29, "modifier_monkey_king_arc_to_ground", 0) == 0 )
      {
        CDOTA_Buff::Destroy(this, 0, 0, 0);
        v30 = CDOTA_Buff::GetAbility(this);
        DotaRetrieveAbilityValue<float>(v30, &unperched_stunned_duration, "unperched_stunned_duration");
        KeyValues::KeyValues(&kv, "modifier_monkey_king_unperched_stunned");
        KeyValues::SetFloat(&kv, "duration", v31);
        v32 = CDOTA_Buff::GetAbility(this);
        v33 = CDOTA_Buff::GetParent(this);
        v34 = CDOTA_Buff::GetParent(this);
        CDOTA_BaseNPC::AddNewModifier(v34, v33, v32, "modifier_monkey_king_unperched_stunned", &kv, 0);
        goto LABEL_17;
      }
    }
  }
}


// CDOTA_Modifier_MonkeyKing_BouncePerch::DeclareFunctions  (line 2706, @0x0000000002c1d630, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_MonkeyKing_BouncePerch::GetModifierMoveSpeed_Limit(CModifierParams const&), CDOTA_Modifier_MonkeyKing_BouncePerch::OnAbilityExecuted(CModifierParams const&), CDOTA_Modifier_MonkeyKing_BouncePerch::GetVisualZDelta(CModifierParams const&), CDOTA_Modifier_MonkeyKing_BouncePerch::GetModifierTranslateActivityModifiers(CModifierParams const&), CDOTA_Modifier_MonkeyKing_BouncePerch::GetFixedVision(CModifierParams const&)
void __fastcall CDOTA_Modifier_MonkeyKing_BouncePerch::DeclareFunctions(
        CDOTA_Modifier_MonkeyKing_BouncePerch *const this)
{
  this->m_Functions[20].__pfn = CDOTA_Modifier_MonkeyKing_BouncePerch::GetModifierMoveSpeed_Limit;
  this->m_Functions[20].__delta = 0;
  this->m_Functions[128].__delta = 0;
  this->m_Functions[128].__pfn = CDOTA_Modifier_MonkeyKing_BouncePerch::OnAbilityExecuted;
  this->m_Functions[171].__pfn = CDOTA_Modifier_MonkeyKing_BouncePerch::GetVisualZDelta;
  this->m_Functions[155].__pfn = CDOTA_Modifier_MonkeyKing_BouncePerch::GetModifierTranslateActivityModifiers;
  this->m_Functions[171].__delta = 0;
  this->m_Functions[155].__delta = 0;
  this->m_Functions[100].__pfn = CDOTA_Modifier_MonkeyKing_BouncePerch::GetFixedVision;
  this->m_Functions[100].__delta = 0;
  this->m_Functions[101].__pfn = CDOTA_Modifier_MonkeyKing_BouncePerch::GetFixedVision;
  this->m_Functions[101].__delta = 0;
}


// CDOTA_Modifier_MonkeyKing_BouncePerch::GetModifierMoveSpeed_Limit  (line 2718, @0x0000000002c1d6d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_BouncePerch::GetModifierMoveSpeed_Limit(
        CDOTA_Modifier_MonkeyKing_BouncePerch *const this,
        const CModifierParams *const params)
{
  return 0x3DCCCCCD00000001uLL;
}


// CDOTA_Modifier_MonkeyKing_BouncePerch::OnAbilityExecuted  (line 2725, @0x0000000002c32cf0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, VectorAdd, VectorMultiply, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::FindItemInInventory, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsAngles, AngleVectors, CBaseEntity::GetAbsOrigin, FindClearSpaceForUnit, CDOTA_Buff::Destroy
// strings: "item_blink", "monkey_king_wukongs_command"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_BouncePerch::OnAbilityExecuted(
        CDOTA_Modifier_MonkeyKing_BouncePerch *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // ecx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CDOTA_BaseNPC *v12; // rdi
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInInventory; // rax
  CEntityIdentity *v15; // rsi
  CEntityIdentity *v16; // rsi
  uint32 v17; // eax
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CDOTA_BaseNPC *v20; // rdi
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v22; // rsi
  CDOTABaseAbility *v23; // rdi
  CEntityIdentity *v24; // rcx
  CEntityIdentity *v25; // rcx
  CDOTA_BaseNPC *Caster; // rax
  const QAngle *AbsAngles; // rax
  __m128i x_low; // xmm3
  __m128i y_low; // xmm4
  float v30; // ebx
  float v31; // r13d
  CDOTA_BaseNPC *v32; // rax
  const Vector *AbsOrigin; // rax
  vec_t v34; // xmm0_4
  vec_t v35; // xmm2_4
  CDOTA_BaseNPC *v36; // rax
  float v37; // [rsp+Ch] [rbp-44h]
  Vector vDir; // [rsp+10h] [rbp-40h] BYREF
  Vector vDropPos; // [rsp+20h] [rbp-30h]
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1 )
    goto LABEL_5;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    goto LABEL_5;
  v5 = &v4[params->hunit.m_Index & 0x1FF];
  if ( v5 == 0 )
    goto LABEL_5;
  if ( m_Index != v5->m_EHandle.m_Index )
    goto LABEL_5;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC || CDOTA_Buff::GetParent(this) != m_pInstance )
    goto LABEL_5;
  v9 = params->hunit.m_Index;
  if ( v9 + 2 <= 1
    || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F]) == 0
    || (v11 = &v10[params->hunit.m_Index & 0x1FF]) == 0
    || v9 != v11->m_EHandle.m_Index
    || (v12 = v11->m_pInstance, v11->m_pInstance == 0)
    || !v12->m_bIsDOTANPC )
  {
    v12 = 0;
  }
  Inventory = CDOTA_BaseNPC::GetInventory(v12);
  ItemInInventory = CDOTA_UnitInventory::FindItemInInventory(Inventory, "item_blink", 3, 0, -1);
  if ( ItemInInventory != 0 && params->ability.m_Index + 2 > 1 )
  {
    v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->ability.m_Index) >> 9) & 0x3F];
    if ( v15 != 0 )
    {
      v16 = &v15[params->ability.m_Index & 0x1FF];
      if ( v16 != 0 && params->ability.m_Index == v16->m_EHandle.m_Index && ItemInInventory == v16->m_pInstance )
      {
LABEL_32:
        CDOTA_Buff::Destroy(this, 0, 0, 0);
LABEL_5:
        *&result.m_eType = 1;
        goto LABEL_6;
      }
    }
  }
  v17 = params->hunit.m_Index;
  if ( v17 + 2 <= 1
    || (v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F]) == 0
    || (v19 = &v18[params->hunit.m_Index & 0x1FF]) == 0
    || v17 != v19->m_EHandle.m_Index
    || (v20 = v19->m_pInstance, v19->m_pInstance == 0)
    || !v20->m_bIsDOTANPC )
  {
    v20 = 0;
  }
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v20, "monkey_king_wukongs_command", 0);
  v22 = 0;
  v23 = AbilityByName;
  if ( params->ability.m_Index + 2 > 1 )
  {
    v24 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->ability.m_Index) >> 9) & 0x3F];
    if ( v24 != 0 )
    {
      v25 = &v24[params->ability.m_Index & 0x1FF];
      if ( v25 != 0 && params->ability.m_Index == v25->m_EHandle.m_Index )
        v22 = v25->m_pInstance;
    }
  }
  *&result.m_eType = 1;
  if ( v23 == v22 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(Caster);
    AngleVectors(AbsAngles, &vDir, 0, 0);
    x_low = LODWORD(vDir.x);
    y_low = LODWORD(vDir.y);
    *x_low.m128i_i32 = vDir.x * 32.0;
    *y_low.m128i_i32 = vDir.y * 32.0;
    v30 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
    v31 = COERCE_FLOAT(_mm_cvtsi128_si32(y_low));
    v37 = 32.0 * vDir.z;
    v32 = CDOTA_Buff::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v32);
    v34 = v37 + AbsOrigin->z;
    v35 = v30 + AbsOrigin->x;
    vDropPos.y = v31 + AbsOrigin->y;
    vDropPos.z = v34;
    vDropPos.x = v35;
    v36 = CDOTA_Buff::GetCaster(this);
    FindClearSpaceForUnit(v36, vDropPos, 0);
    goto LABEL_32;
  }
LABEL_6:
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_MonkeyKing_BouncePerch::GetVisualZDelta  (line 2756, @0x0000000002c1d6f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_BouncePerch::GetVisualZDelta(
        CDOTA_Modifier_MonkeyKing_BouncePerch *const this,
        const CModifierParams *const params)
{
  return 0x437A000000000001uLL;
}


// CDOTA_Modifier_MonkeyKing_BouncePerch::GetModifierTranslateActivityModifiers  (line 2763, @0x0000000002c1d710, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_BouncePerch::GetModifierTranslateActivityModifiers(
        CDOTA_Modifier_MonkeyKing_BouncePerch *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "perch";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_MonkeyKing_BouncePerch::GetFixedVision  (line 2770, @0x0000000002c1d730, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_BouncePerch::GetFixedVision(
        CDOTA_Modifier_MonkeyKing_BouncePerch *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(this->perched_vision) << 32) | 1;
  return result;
}


// CDOTA_Modifier_MonkeyKing_UnperchedStunned::~CDOTA_Modifier_MonkeyKing_UnperchedStunned  (line 2781, @0x0000000002c91860, libserver.so)  // inlines: ~CDOTA_Modifier_Stunned
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_MonkeyKing_UnperchedStunned::~CDOTA_Modifier_MonkeyKing_UnperchedStunned(
        CDOTA_Modifier_MonkeyKing_UnperchedStunned *const this)
{
  this->_vptr_CDOTA_Buff = &off_411CD70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_MonkeyKing_UnperchedStunned::~CDOTA_Modifier_MonkeyKing_UnperchedStunned  (line 2781, @0x0000000002c91880, libserver.so)  // inlines: ~CDOTA_Modifier_MonkeyKing_UnperchedStunned, ~CDOTA_Modifier_Stunned
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_MonkeyKing_UnperchedStunned::~CDOTA_Modifier_MonkeyKing_UnperchedStunned(
        CDOTA_Modifier_MonkeyKing_UnperchedStunned *const this)
{
  this->_vptr_CDOTA_Buff = &off_411CD70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_MonkeyKing_UnperchedStunned::DeclareFunctions  (line 2795, @0x0000000002c1d750, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_MonkeyKing_UnperchedStunned::GetModifierTranslateActivityModifiers(CModifierParams const&), CDOTA_Modifier_MonkeyKing_UnperchedStunned::GetOverrideAnimation(CModifierParams const&)
void __fastcall CDOTA_Modifier_MonkeyKing_UnperchedStunned::DeclareFunctions(
        CDOTA_Modifier_MonkeyKing_UnperchedStunned *const this)
{
  this->m_Functions[155].__pfn = CDOTA_Modifier_MonkeyKing_UnperchedStunned::GetModifierTranslateActivityModifiers;
  this->m_Functions[155].__delta = 0;
  this->m_Functions[90].__delta = 0;
  this->m_Functions[90].__pfn = CDOTA_Modifier_MonkeyKing_UnperchedStunned::GetOverrideAnimation;
}


// CDOTA_Modifier_MonkeyKing_UnperchedStunned::GetModifierTranslateActivityModifiers  (line 2803, @0x0000000002c1d790, libserver.so)
// strings: "unperched_stunned"
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_UnperchedStunned::GetModifierTranslateActivityModifiers(
        CDOTA_Modifier_MonkeyKing_UnperchedStunned *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "unperched_stunned";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_MonkeyKing_UnperchedStunned::GetOverrideAnimation  (line 2810, @0x0000000002c1d7b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_UnperchedStunned::GetOverrideAnimation(
        CDOTA_Modifier_MonkeyKing_UnperchedStunned *const this,
        const CModifierParams *const params)
{
  return 0x44BCA00000000001uLL;
}


// CDOTA_Modifier_MonkeyKing_ArcToGround::~CDOTA_Modifier_MonkeyKing_ArcToGround  (line 2823, @0x0000000002c917e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_MonkeyKing_ArcToGround::~CDOTA_Modifier_MonkeyKing_ArcToGround(
        CDOTA_Modifier_MonkeyKing_ArcToGround *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E3670;
  this->_vptr_CHorizontalMotionController = &off_45E3978;
  this->_vptr_CVerticalMotionController = &off_45E39B8;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_MonkeyKing_ArcToGround::~CDOTA_Modifier_MonkeyKing_ArcToGround  (line 2823, @0x0000000002c91810, libserver.so)  // inlines: ~CDOTA_Modifier_MonkeyKing_ArcToGround
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_MonkeyKing_ArcToGround::~CDOTA_Modifier_MonkeyKing_ArcToGround(
        CDOTA_Modifier_MonkeyKing_ArcToGround *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E3670;
  this->_vptr_CHorizontalMotionController = &off_45E3978;
  this->_vptr_CVerticalMotionController = &off_45E39B8;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_MonkeyKing_ArcToGround::IsPurgable  (line 2835, @0x0000000002c8aee0, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_ArcToGround::IsPurgable(CDOTA_Modifier_MonkeyKing_ArcToGround *const this)
{
  return 0;
}


// CDOTA_Modifier_MonkeyKing_ArcToGround::IsHidden  (line 2839, @0x0000000002c8aef0, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_ArcToGround::IsHidden(CDOTA_Modifier_MonkeyKing_ArcToGround *const this)
{
  return 1;
}


// CDOTA_Modifier_MonkeyKing_ArcToGround::IsHorizontalMotionValidToApply  (line 2845, @0x0000000002c8af00, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_MonkeyKing_ArcToGround::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_MonkeyKing_ArcToGround *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_MonkeyKing_ArcToGround::IsVerticalMotionValidToApply  (line 2846, @0x0000000002c8af30, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_MonkeyKing_ArcToGround::IsVerticalMotionValidToApply(
        CDOTA_Modifier_MonkeyKing_ArcToGround *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_MonkeyKing_ArcToGround::IsMotionController  (line 2848, @0x0000000002c8af60, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_ArcToGround::IsMotionController(
        CDOTA_Modifier_MonkeyKing_ArcToGround *const this)
{
  return 1;
}


// CDOTA_Modifier_MonkeyKing_ArcToGround::OnCreated  (line 2885, @0x0000000002c5a500, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, FastSqrt, GetBool, GetIdealSpeed, GetLevelSpecialValueFor<float>, Length2D, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::Destroy, KeyValues::GetInt, CBaseEntity::GetAbsOrigin, GetGroundHeight, KeyValues::GetFloat, CDOTA_Buff::CreateBuffParticleEffect, CDOTA_Buff::GetCaster, GetParticleManager (22 total)
// strings: "give_up_distance", "modifier_monkey_king_bounce_leap", "rightclick_hop", "modifier_monkey_king_bounce_perch", "vPosZ", "vPosY" (11 total)
void __fastcall CDOTA_Modifier_MonkeyKing_ArcToGround::OnCreated(
        CDOTA_Modifier_MonkeyKing_ArcToGround *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_BaseNPC *v8; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *v10; // r13
  CDOTA_BaseNPC *v11; // rax
  const Vector *v12; // rax
  __m128i v13; // xmm0
  vec_t v14; // r14d
  CDOTA_BaseNPC *v15; // rax
  CDOTA_Buff *v16; // rax
  float m_flOriginalHeight; // xmm0_4
  CDOTA_BaseNPC *v18; // rax
  vec_t v19; // xmm1_4
  vec_t v20; // xmm0_4
  vec_t v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm2_4
  float v26; // xmm3_4
  float v27; // xmm5_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  CDOTA_BaseNPC *v30; // rax
  CDOTA_BaseNPC *Caster; // rax
  int m_nFXIndex; // r12d
  const CBaseAnimating *v33; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v35; // rax
  CDOTA_BaseNPC *v36; // rax
  CDOTALocomotor *v37; // rax
  CDOTA_BaseNPC *v38; // rax
  CDOTALocomotor *v39; // rax
  float v40; // xmm1_4
  float v41; // xmm0_4
  float v42; // xmm1_4
  CDOTABaseAbility *v43; // r14
  CDOTA_BaseNPC *v44; // r13
  CDOTA_BaseNPC *v45; // rax
  float z; // [rsp+14h] [rbp-5Ch]
  float Float; // [rsp+14h] [rbp-5Ch]
  float fDuration; // [rsp+18h] [rbp-58h]
  float x; // [rsp+1Ch] [rbp-54h]
  float v50[4]; // [rsp+20h] [rbp-50h] BYREF
  KeyValues kv; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v52; // [rsp+48h] [rbp-28h]

  v52 = __readfsqword(0x28u);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->leap_speed = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "leap_speed", -1, 0);
  else
    this->leap_speed = 0.0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
    this->give_up_distance = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "give_up_distance", -1, 0);
  else
    this->give_up_distance = 0.0;
  Parent = CDOTA_Buff::GetParent(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_monkey_king_bounce_leap", 0);
  if ( ModifierByName != 0 )
    CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
  this->m_bRightClickHop = KeyValues::GetInt(pKV, "rightclick_hop", 0) != 0;
  v8 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
  x = AbsOrigin->x;
  z = AbsOrigin->z;
  fDuration = AbsOrigin->y;
  v10 = CDOTA_Buff::GetParent(this);
  v11 = CDOTA_Buff::GetParent(this);
  v12 = CBaseEntity::GetAbsOrigin(v11);
  *v13.m128i_i32 = GetGroundHeight(v12, v10);
  v14 = COERCE_FLOAT(_mm_cvtsi128_si32(v13));
  this->m_flOriginalHeight = z;
  v15 = CDOTA_Buff::GetParent(this);
  v16 = CDOTA_BaseNPC::FindModifierByName(v15, "modifier_monkey_king_bounce_perch", 0);
  m_flOriginalHeight = 250.0;
  if ( v16 == 0 )
    m_flOriginalHeight = this->m_flOriginalHeight;
  this->m_flOriginalZDelta = m_flOriginalHeight;
  this->m_flZDelta = m_flOriginalHeight;
  this->m_vStart.y = fDuration;
  this->m_vStart.x = x;
  this->m_vStart.z = v14;
  v18 = CDOTA_Buff::GetParent(this);
  (*(v18->_vptr_IHandleEntity + 61))(v18, v50, 0, 0);
  v19 = (v50[1] * 225.0) + this->m_vStart.y;
  v20 = (v50[2] * 225.0) + this->m_vStart.z;
  v21 = (225.0 * v50[0]) + this->m_vStart.x;
  this->m_vTargetPos.y = v19;
  this->m_vTargetPos.z = v20;
  this->m_vTargetPos.x = v21;
  KeyValues::GetFloat(pKV, "vPosZ", v19);
  Float = KeyValues::GetFloat(pKV, "vPosY", v22);
  v24 = KeyValues::GetFloat(pKV, "vPosX", v23);
  v25 = Float;
  v26 = v24;
  v27 = v24 - x;
  v28 = Float - fDuration;
  v29 = fsqrt((v27 * v27) + (v28 * v28));
  if ( v29 > 225.0 )
  {
    v26 = x + (v27 * (225.0 / v29));
    v25 = ((225.0 / v29) * v28) + fDuration;
  }
  this->m_vTargetPos.x = v26;
  this->m_vTargetPos.y = v25;
  this->m_vTargetPos.z = v14;
  v30 = CDOTA_Buff::GetParent(this);
  this->m_nFXIndex = CDOTA_Buff::CreateBuffParticleEffect(
                       this,
                       "particles/units/heroes/hero_monkey_king/monkey_king_jump_trail.vpcf",
                       1,
                       v30,
                       0);
  Caster = CDOTA_Buff::GetCaster(this);
  m_nFXIndex = this->m_nFXIndex;
  v33 = Caster;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, m_nFXIndex, 1, v33, 5, "attach_hitloc", vec3_invalid, 1);
  v35 = CDOTA_Buff::GetParent(this);
  this->m_nFXIndex2 = CDOTA_Buff::CreateBuffParticleEffect(
                        this,
                        "particles/units/heroes/hero_monkey_king/monkey_king_jump_launch_ring.vpcf",
                        0,
                        v35,
                        0);
  v36 = CDOTA_Buff::GetParent(this);
  v37 = (*(v36->_vptr_IHandleEntity + 376))(v36);
  if ( CDOTALocomotor::ApplyHorizontalMotionController(v37, &this->CHorizontalMotionController, 0)
    && (v38 = CDOTA_Buff::GetParent(this),
        v39 = (*(v38->_vptr_IHandleEntity + 376))(v38),
        CDOTALocomotor::ApplyVerticalMotionController(v39, &this->CVerticalMotionController, 0)) )
  {
    if ( this->m_bRightClickHop )
    {
      v41 = this->leap_speed * 0.7;
      this->m_flSpeed = v41;
      KeyValues::KeyValues(&kv, "modifier_monkey_king_right_click_jump_activity");
      KeyValues::SetFloat(&kv, "duration", v42);
      v43 = CDOTA_Buff::GetAbility(this);
      v44 = CDOTA_Buff::GetCaster(this);
      v45 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v45, v44, v43, "modifier_monkey_king_right_click_jump_activity", &kv, 0);
      KeyValues::~KeyValues(&kv);
    }
    else
    {
      this->m_flSpeed = this->leap_speed;
    }
    CDOTA_Buff::StartIntervalThink(this, 0.1, v40);
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_MonkeyKing_ArcToGround::CheckState  (line 2952, @0x0000000002c1d7d0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_MonkeyKing_ArcToGround::CheckState(
        CDOTA_Modifier_MonkeyKing_ArcToGround *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x20uLL;
  buffState->m_nDisabledStateMask &= ~0x20uLL;
}


// CDOTA_Modifier_MonkeyKing_ArcToGround::DeclareFunctions  (line 2963, @0x0000000002c1d7e0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_MonkeyKing_ArcToGround::GetVisualZDelta(CModifierParams const&)
void __fastcall CDOTA_Modifier_MonkeyKing_ArcToGround::DeclareFunctions(
        CDOTA_Modifier_MonkeyKing_ArcToGround *const this)
{
  this->m_Functions[171].__pfn = CDOTA_Modifier_MonkeyKing_ArcToGround::GetVisualZDelta;
  this->m_Functions[171].__delta = 0;
}


// CDOTA_Modifier_MonkeyKing_ArcToGround::CalculateZDelta  (line 2969, @0x0000000002c49890, libserver.so)  // inlines: FastSqrt, GetTargetPosition, Length2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin
// callers: CDOTA_Modifier_MonkeyKing_ArcToGround::OnIntervalThink
float __fastcall CDOTA_Modifier_MonkeyKing_ArcToGround::CalculateZDelta(
        CDOTA_Modifier_MonkeyKing_ArcToGround *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  float x; // [rsp+0h] [rbp-20h]
  float vTotalDelta; // [rsp+4h] [rbp-1Ch]
  float vTotalDelta_4; // [rsp+8h] [rbp-18h]
  float vTotalDelta_8; // [rsp+Ch] [rbp-14h]

  x = this->m_vTargetPos.x;
  vTotalDelta_4 = this->m_vTargetPos.y;
  vTotalDelta = x - this->m_vStart.x;
  vTotalDelta_8 = vTotalDelta_4 - this->m_vStart.y;
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  return (1.0
        - (1.0
         - (fsqrt(
              ((x - AbsOrigin->x) * (x - AbsOrigin->x))
            + ((vTotalDelta_4 - AbsOrigin->y) * (vTotalDelta_4 - AbsOrigin->y)))
          / fsqrt((vTotalDelta * vTotalDelta) + (vTotalDelta_8 * vTotalDelta_8)))))
       * this->m_flOriginalZDelta;
}


// CDOTA_Modifier_MonkeyKing_ArcToGround::GetVisualZDelta  (line 2985, @0x0000000002c1d800, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_ArcToGround::GetVisualZDelta(
        CDOTA_Modifier_MonkeyKing_ArcToGround *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(this->m_flZDelta) << 32) | 1;
  return result;
}


// CDOTA_Modifier_MonkeyKing_ArcToGround::OnIntervalThink  (line 2992, @0x0000000002c49980, libserver.so)
// calls: CDOTA_Modifier_MonkeyKing_ArcToGround::CalculateZDelta, CDOTA_Buff::SendBuffRefreshToClients
void __fastcall CDOTA_Modifier_MonkeyKing_ArcToGround::OnIntervalThink(
        CDOTA_Modifier_MonkeyKing_ArcToGround *const this)
{
  this->m_flZDelta = CDOTA_Modifier_MonkeyKing_ArcToGround::CalculateZDelta(this);
  CDOTA_Buff::SendBuffRefreshToClients(this);
}


// CDOTA_Modifier_MonkeyKing_ArcToGround::AddCustomTransmiterData  (line 3001, @0x0000000002c21e10, libserver.so)  // inlines: set_fade_time, set_has_fade_time
// calls: CDOTA_Buff::AddCustomTransmiterData
void __fastcall CDOTA_Modifier_MonkeyKing_ArcToGround::AddCustomTransmiterData(
        CDOTA_Modifier_MonkeyKing_ArcToGround *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  float m_flZDelta; // xmm0_4

  m_flZDelta = this->m_flZDelta;
  *(entry + 4) |= 0x1000u;
  *(entry + 18) = m_flZDelta;
  CDOTA_Buff::AddCustomTransmiterData(this, entry);
}


// CDOTA_Modifier_MonkeyKing_ArcToGround::GetIdealSpeed  (line 3021, @0x0000000002c499b0, libserver.so)
float __fastcall CDOTA_Modifier_MonkeyKing_ArcToGround::GetIdealSpeed(
        CDOTA_Modifier_MonkeyKing_ArcToGround *const this)
{
  if ( this->m_bRightClickHop )
    return this->leap_speed * 0.7;
  else
    return this->leap_speed;
}


// CDOTA_Modifier_MonkeyKing_ArcToGround::UpdateHorizontalMotion  (line 3032, @0x0000000002c24940, libserver.so)  // inlines: FastSqrt, GetIdealSpeed, Length2D, Max<float>, NormalizeInPlace, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-
// calls: CBaseEntity::GetAbsOrigin, VectorNormalize, VectorAngles, CDOTA_Buff::GetCaster, CBaseEntity::SetAbsAngles, CDOTA_Buff::GetParent, CDOTALocomotor::IsLeashedMovementPrevented, CBaseEntity::SetAbsOrigin, GetGroundHeight, CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_MonkeyKing_ArcToGround::UpdateHorizontalMotion(
        CDOTA_Modifier_MonkeyKing_ArcToGround *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  const Vector *AbsOrigin; // rax
  vec_t v7; // xmm0_4
  vec_t v8; // xmm1_4
  float v9; // xmm0_4
  float leap_speed; // xmm2_4
  CDOTA_BaseNPC *Caster; // rax
  float m_flSpeed; // xmm3_4
  const Vector *v13; // rax
  vec_t v14; // xmm4_4
  vec_t v15; // xmm3_4
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v17; // rax
  float flLeapDist; // [rsp+0h] [rbp-60h]
  float v19; // [rsp+4h] [rbp-5Ch]
  float v20; // [rsp+8h] [rbp-58h]
  float dtb; // [rsp+Ch] [rbp-54h]
  Vector vDelta; // [rsp+10h] [rbp-50h] BYREF
  QAngle faceTargetAngles; // [rsp+20h] [rbp-40h] BYREF
  Vector vNewLocation; // [rsp+30h] [rbp-30h] BYREF

  AbsOrigin = CBaseEntity::GetAbsOrigin(me);
  v7 = this->m_vTargetPos.y - AbsOrigin->y;
  v8 = this->m_vTargetPos.x - AbsOrigin->x;
  vDelta.z = 0.0;
  vDelta.y = v7;
  vDelta.x = v8;
  v9 = VectorNormalize(&vDelta);
  if ( v9 > this->give_up_distance )
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
  else
  {
    if ( this->m_bRightClickHop )
      leap_speed = this->leap_speed * 0.7;
    else
      leap_speed = this->leap_speed;
    flLeapDist = v9;
    this->m_flSpeed = fmaxf(this->m_flSpeed, leap_speed);
    VectorAngles(&vDelta, &faceTargetAngles);
    Caster = CDOTA_Buff::GetCaster(this);
    CBaseEntity::SetAbsAngles(Caster, &faceTargetAngles);
    m_flSpeed = this->m_flSpeed;
    v19 = (vDelta.x * m_flSpeed) * a3;
    v20 = (vDelta.y * m_flSpeed) * a3;
    dtb = (m_flSpeed * vDelta.z) * a3;
    v13 = CBaseEntity::GetAbsOrigin(me);
    v14 = v13->y + v20;
    v15 = dtb + v13->z;
    vNewLocation.x = v19 + v13->x;
    vNewLocation.y = v14;
    vNewLocation.z = v15;
    vNewLocation.z = CBaseEntity::GetAbsOrigin(me)->z;
    if ( ((me->m_flHullRadius + 5.0) + fsqrt((v19 * v19) + (v20 * v20))) >= flLeapDist )
    {
      vNewLocation.z = GetGroundHeight(&vNewLocation, me);
      CDOTA_Buff::Destroy(this, 0, 0, 0);
    }
    Parent = CDOTA_Buff::GetParent(this);
    v17 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
    if ( !CDOTALocomotor::IsLeashedMovementPrevented(v17, *&vNewLocation.x) )
      CBaseEntity::SetAbsOrigin(me, &vNewLocation);
  }
}


// CDOTA_Modifier_MonkeyKing_ArcToGround::UpdateVerticalMotion  (line 3079, @0x0000000002c25050, libserver.so)  // inlines: FastSqrt, GetTargetPosition, Length2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CBaseEntity::GetAbsOrigin, sin, GetGroundHeight, CBaseEntity::SetAbsOrigin
void __fastcall CDOTA_Modifier_MonkeyKing_ArcToGround::UpdateVerticalMotion(
        CDOTA_Modifier_MonkeyKing_ArcToGround *const this,
        CDOTA_BaseNPC *me,
        double a3,
        float dt)
{
  float v6; // r14d
  const Vector *AbsOrigin; // rax
  float v8; // xmm3_4
  float v9; // xmm0_4
  const Vector *v10; // rax
  float v11; // xmm2_4
  double v12; // xmm0_8
  __m128d v13; // xmm1
  vec_t v14; // xmm5_4
  float GroundHeight; // xmm0_4
  float flTotalDist; // [rsp+Ch] [rbp-44h]
  float v17; // [rsp+10h] [rbp-40h]
  float z; // [rsp+10h] [rbp-40h]
  float y; // [rsp+14h] [rbp-3Ch]
  float v20; // [rsp+14h] [rbp-3Ch]
  float v21; // [rsp+14h] [rbp-3Ch]
  float flProgressa; // [rsp+18h] [rbp-38h]
  float flProgressb; // [rsp+18h] [rbp-38h]
  double flProgress; // [rsp+18h] [rbp-38h]
  Vector vNewPos; // [rsp+20h] [rbp-30h] BYREF

  flTotalDist = this->m_vTargetPos.x;
  y = this->m_vTargetPos.y;
  v6 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(this->m_vTargetPos.z)));
  v17 = flTotalDist - this->m_vStart.x;
  flProgressa = y - this->m_vStart.y;
  AbsOrigin = CBaseEntity::GetAbsOrigin(me);
  v8 = fsqrt((v17 * v17) + (flProgressa * flProgressa));
  v9 = fsqrt(((flTotalDist - AbsOrigin->x) * (flTotalDist - AbsOrigin->x)) + ((y - AbsOrigin->y) * (y - AbsOrigin->y)))
     / v8;
  v20 = v8;
  flProgressb = 1.0 - v9;
  v10 = CBaseEntity::GetAbsOrigin(me);
  v11 = flProgressb;
  *&vNewPos.x = *&v10->x;
  if ( v20 >= 600.0 )
    flProgress = 200.0;
  else
    flProgress = ((v20 / 600.0) * 200.0);
  v21 = v11;
  z = this->m_vStart.z;
  v12 = sin(v11 * 3.141592653589793);
  v13.m128d_f64[1] = (((v6 - z) * v21) + z);
  v13.m128d_f64[0] = v13.m128d_f64[1] + v12 * flProgress;
  v14 = _mm_movedup_pd(v13).m128d_f64[0];
  vNewPos.z = v14;
  GroundHeight = GetGroundHeight(&vNewPos, me);
  if ( GroundHeight > vNewPos.z )
    vNewPos.z = GroundHeight;
  CBaseEntity::SetAbsOrigin(me, &vNewPos);
}


// CDOTA_Modifier_MonkeyKing_ArcToGround::OnHorizontalMotionInterrupted  (line 3117, @0x0000000002c1f780, libserver.so)
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_MonkeyKing_ArcToGround::OnHorizontalMotionInterrupted(
        CDOTA_Modifier_MonkeyKing_ArcToGround *const this)
{
  CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_MonkeyKing_ArcToGround::OnVerticalMotionInterrupted  (line 3126, @0x0000000002c1f7a0, libserver.so)
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_MonkeyKing_ArcToGround::OnVerticalMotionInterrupted(
        CDOTA_Modifier_MonkeyKing_ArcToGround *const this)
{
  CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_MonkeyKing_ArcToGround::OnDestroy  (line 3135, @0x0000000002c25220, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_Buff::GetParent, CDOTALocomotor::RemoveHorizontalMotionController, CDOTALocomotor::RemoveVerticalMotionController
void __fastcall CDOTA_Modifier_MonkeyKing_ArcToGround::OnDestroy(CDOTA_Modifier_MonkeyKing_ArcToGround *const this)
{
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  int v4; // r12d
  CDOTA_ParticleManager *v5; // rax
  int m_nFXIndex2; // r12d
  CDOTA_ParticleManager *v7; // rax
  int v8; // r12d
  CDOTA_ParticleManager *v9; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTALocomotor *v13; // rax

  m_nFXIndex = this->m_nFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 0);
  v4 = this->m_nFXIndex;
  v5 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v5, v4);
  m_nFXIndex2 = this->m_nFXIndex2;
  v7 = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(v7, m_nFXIndex2, 0);
  v8 = this->m_nFXIndex2;
  v9 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v9, v8);
  Parent = CDOTA_Buff::GetParent(this);
  v11 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveHorizontalMotionController(v11, &this->CHorizontalMotionController);
  v12 = CDOTA_Buff::GetParent(this);
  v13 = (*(v12->_vptr_IHandleEntity + 376))(v12);
  CDOTALocomotor::RemoveVerticalMotionController(v13, &this->CVerticalMotionController);
}


// CDOTA_Ability_MonkeyKing_Transform::~CDOTA_Ability_MonkeyKing_Transform  (line 3156, @0x0000000002c98fe0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_MonkeyKing_Transform::~CDOTA_Ability_MonkeyKing_Transform(
        CDOTA_Ability_MonkeyKing_Transform *const this)
{
  this->_vptr_IHandleEntity = &off_45E3A70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_MonkeyKing_Transform::~CDOTA_Ability_MonkeyKing_Transform  (line 3156, @0x0000000002c99000, libserver.so)  // inlines: ~CDOTA_Ability_MonkeyKing_Transform
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_MonkeyKing_Transform::~CDOTA_Ability_MonkeyKing_Transform(
        CDOTA_Ability_MonkeyKing_Transform *const this)
{
  this->_vptr_IHandleEntity = &off_45E3A70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_MonkeyKing_Transform::Schema_DynamicBinding  (line 3158, @0x0000000002c8af70, libserver.so)
// globals: CDOTA_Ability_MonkeyKing_Transform::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_MonkeyKing_Transform::Schema_DynamicBinding(
        const CDOTA_Ability_MonkeyKing_Transform *const this)
{
  return CDOTA_Ability_MonkeyKing_Transform::s_pSchemaBinding;
}


// CDOTA_Ability_MonkeyKing_Transform::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 3158, @0x0000000002c8af80, libserver.so)
// globals: CDOTA_Ability_MonkeyKing_Transform::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_MonkeyKing_Transform::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_MonkeyKing_Transform::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_MonkeyKing_Transform::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_MonkeyKing_Transform::CEntityInstanceEntityClass::DestructInstance  (line 3158, @0x0000000002c8af90, libserver.so)  // inlines: Destruct<CDOTA_Ability_MonkeyKing_Transform>
void __fastcall CDOTA_Ability_MonkeyKing_Transform::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_MonkeyKing_Transform::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_MonkeyKing_Transform::CEntityInstanceEntityClass::FreeInstance  (line 3158, @0x0000000002c8afb0, libserver.so)
void __fastcall CDOTA_Ability_MonkeyKing_Transform::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_MonkeyKing_Transform::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_MonkeyKing_Transform::CEntityInstanceEntityClass::CanAllocate  (line 3158, @0x0000000002c8afd0, libserver.so)
bool __fastcall CDOTA_Ability_MonkeyKing_Transform::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_MonkeyKing_Transform::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_MonkeyKing_Transform::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 3158, @0x0000000002c8afe0, libserver.so)
// globals: CDOTA_Ability_MonkeyKing_Transform::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_MonkeyKing_Transform::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_MonkeyKing_Transform::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_MonkeyKing_Transform::s_pSchemaBinding;
}


// CDOTA_Ability_MonkeyKing_Transform::CEntityInstanceEntityClass::AllocateInstance  (line 3158, @0x0000000002c90660, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_MonkeyKing_Transform::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_MonkeyKing_Transform::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_MonkeyKing_Transform::CEntityInstanceEntityClass::ConstructInstance  (line 3158, @0x0000000002c95180, libserver.so)  // inlines: CDOTA_Ability_MonkeyKing_Transform, Construct<CDOTA_Ability_MonkeyKing_Transform>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_MonkeyKing_Transform::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_MonkeyKing_Transform::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45E3A70;
  }
  return p;
}


// CDOTA_Ability_MonkeyKing_Transform::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3158, @0x0000000002ca2ca0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_MonkeyKing_Transform::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_MonkeyKing_Transform::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_MonkeyKing_Transform::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3158, @0x0000000002ca2cc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_MonkeyKing_Transform::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_MonkeyKing_Transform::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal  (line 3158, @0x0000000002cc17b0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "monkey_king_mischief", "CDOTA_Ability_MonkeyKing_Transform"
// globals: `guard variable for'CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass, CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_MonkeyKing_Transform::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClassInfo, CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClassInfo
CEntityClass *__cdecl CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass) != 0 )
  {
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_pClassInfo = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_flags = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_pInputs = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_nInputCount = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_pOutputs = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_nOutputCount = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_pGameClass = 0;
    CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass._vptr_CEntityClass = off_45E39F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass);
    __cxa_atexit(
      CDOTA_Ability_MonkeyKing_Transform::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_MonkeyKing_TransformClass != 0 )
    return &CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass;
  if ( `guard variable for'CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClassInfo,
      "CDOTA_Ability_MonkeyKing_Transform",
      "monkey_king_mischief",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClassInfo);
  }
  CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_pClassInfo = &CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClassInfo;
  CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_pBaseClassInfo = CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_MonkeyKing_TransformClass = &CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass;
  CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClassInfo.m_pClass = &CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass;
  CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_MonkeyKing_TransformClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_MonkeyKing_Transform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_TransformClass;
}


// CDOTA_Ability_MonkeyKing_Transform::GetAssociatedSecondaryAbilities  (line 3160, @0x0000000002c8aff0, libserver.so)
// strings: "monkey_king_untransform"
const char *__fastcall CDOTA_Ability_MonkeyKing_Transform::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_MonkeyKing_Transform *const this)
{
  return "monkey_king_untransform";
}


// CDOTA_Ability_MonkeyKing_Transform::IsStealable  (line 3166, @0x0000000002c8b000, libserver.so)
bool __fastcall CDOTA_Ability_MonkeyKing_Transform::IsStealable(CDOTA_Ability_MonkeyKing_Transform *const this)
{
  return 0;
}


// CDOTA_Ability_MonkeyKing_Transform::ProcsMagicStick  (line 3167, @0x0000000002c8b010, libserver.so)
bool __fastcall CDOTA_Ability_MonkeyKing_Transform::ProcsMagicStick(CDOTA_Ability_MonkeyKing_Transform *const this)
{
  return 0;
}


// CDOTA_Ability_MonkeyKing_Transform::Spawn  (line 3173, @0x0000000002c20fe0, libserver.so)
// calls: CDOTABaseAbility::Spawn
void __fastcall CDOTA_Ability_MonkeyKing_Transform::Spawn(
        CDOTA_Ability_MonkeyKing_Transform *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTABaseAbility::Spawn(this, pKeyValues);
  (*(this->_vptr_IHandleEntity + 212))(this, 1);
}


// CDOTA_Ability_MonkeyKing_Transform::OnSpellStart  (line 3183, @0x0000000002c2b320, libserver.so)  // inlines: NetworkStateChanged, Set, SetSelectionRingVisibility, operator=<bool>
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::StartGesture, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "monkey_king_mischief", "modifier_monkey_king_transform"
void __fastcall CDOTA_Ability_MonkeyKing_Transform::OnSpellStart(CDOTA_Ability_MonkeyKing_Transform *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // r13
  CDOTA_BaseNPC *v4; // r13
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "monkey_king_mischief");
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = Caster;
  if ( Caster->m_bSelectionRingVisible.m_Value )
  {
    (*(Caster->_vptr_IHandleEntity + 22))(Caster, 2096, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v3->m_bSelectionRingVisible.m_Value = 0;
  }
  v4 = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v5, v4, this, "modifier_monkey_king_transform", &kv, 0);
  v6 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v6, 1597, 0.1, 0.1, 9, 0, 1.0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_MonkeyKing_Transform::OnLoadState  (line 3197, @0x0000000002c21330, libserver.so)
// calls: CDOTABaseAbility::OnLoadState, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::SwapAbilities
// strings: "monkey_king_untransform", "monkey_king_mischief"
bool __fastcall CDOTA_Ability_MonkeyKing_Transform::OnLoadState(
        CDOTA_Ability_MonkeyKing_Transform *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rax

  CDOTABaseAbility::OnLoadState(this, pKV);
  if ( this != 0 && this->m_bHidden.m_Value )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::SwapAbilities(Caster, "monkey_king_mischief", "monkey_king_untransform", 1, 0);
  }
  return 1;
}


// CDOTA_Modifier_MonkeyKing_Transform::~CDOTA_Modifier_MonkeyKing_Transform  (line 3221, @0x0000000002c93c80, libserver.so)  // inlines: ~CUtlString
// calls: CUtlString::FreeMemoryBlock, CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_MonkeyKing_Transform::~CDOTA_Modifier_MonkeyKing_Transform(
        CDOTA_Modifier_MonkeyKing_Transform *const this)
{
  CUtlString *p_m_strDisguise; // rdi

  p_m_strDisguise = &this->m_strDisguise;
  p_m_strDisguise[-373].m_pString = &off_45E4530;
  if ( this->m_strDisguise.m_pString != 0 )
    CUtlString::FreeMemoryBlock(p_m_strDisguise);
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_MonkeyKing_Transform::~CDOTA_Modifier_MonkeyKing_Transform  (line 3221, @0x0000000002ca0b90, libserver.so)  // inlines: ~CDOTA_Modifier_MonkeyKing_Transform, ~CUtlString
// calls: CUtlString::FreeMemoryBlock, CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_MonkeyKing_Transform::~CDOTA_Modifier_MonkeyKing_Transform(
        CDOTA_Modifier_MonkeyKing_Transform *const this)
{
  CUtlString *p_m_strDisguise; // rdi

  p_m_strDisguise = &this->m_strDisguise;
  p_m_strDisguise[-373].m_pString = &off_45E4530;
  if ( this->m_strDisguise.m_pString != 0 )
    CUtlString::FreeMemoryBlock(p_m_strDisguise);
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_MonkeyKing_Transform::GetDisableAutoAttack  (line 3239, @0x0000000002c8b020, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_Transform::GetDisableAutoAttack(
        CDOTA_Modifier_MonkeyKing_Transform *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_MonkeyKing_Transform::CanParentBeAutoAttacked  (line 3240, @0x0000000002c8b040, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_Transform::CanParentBeAutoAttacked(
        CDOTA_Modifier_MonkeyKing_Transform *const this)
{
  return 0;
}


// CDOTA_Modifier_MonkeyKing_Transform::GetTexture  (line 3245, @0x0000000002c8b050, libserver.so)
// strings: "monkey_king_mischief"
const char *__fastcall CDOTA_Modifier_MonkeyKing_Transform::GetTexture(CDOTA_Modifier_MonkeyKing_Transform *const this)
{
  return "monkey_king_mischief";
}


// CDOTA_Modifier_MonkeyKing_Transform::AddCustomTransmiterData  (line 3270, @0x0000000002c21ef0, libserver.so)  // inlines: set_active, set_aura, set_has_active, set_has_aura, set_has_movement_speed, set_has_subtle, set_movement_speed, set_subtle
// calls: CDOTA_Buff::AddCustomTransmiterData
void __fastcall CDOTA_Modifier_MonkeyKing_Transform::AddCustomTransmiterData(
        CDOTA_Modifier_MonkeyKing_Transform *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  int v2; // eax
  bool m_bIsFlyingCourier; // dl
  bool m_bIsRune; // dl
  bool m_bIsBanana; // dl

  v2 = *(entry + 4);
  *(entry + 32) = this->m_nDisguisedSpeed;
  *(entry + 4) = v2 | 0x200000;
  m_bIsFlyingCourier = this->m_bIsFlyingCourier;
  *(entry + 4) = v2 | 0x20200000;
  *(entry + 134) = m_bIsFlyingCourier;
  m_bIsRune = this->m_bIsRune;
  *(entry + 4) = v2 | 0x20202000;
  *(entry + 132) = m_bIsRune;
  m_bIsBanana = this->m_bIsBanana;
  *(entry + 4) = v2 | 0x20602000;
  *(entry + 133) = m_bIsBanana;
  CDOTA_Buff::AddCustomTransmiterData(this, entry);
}


// CDOTA_Modifier_MonkeyKing_Transform::OnCreated  (line 3291, @0x0000000002c5dc00, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, FastSqrt, GetEHandle, GetEntryIndex, GetSerialNumber, GetTeamNumber, Init, Invalidate, Length2D, NetworkStateChanged, Purge, RemoveAll, Set, SetAlpha, SetBlue, SetColor, SetComponent, SetGreen, SetRed, SetRenderColor, SetVal, String, ToCStr, Vector, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, a, operator!=, operator-, operator=, operator=<unsigned int>, operator==, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::SetHideParticles, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, RandomInt, CUtlString::operator=, CUtlString::IsEqual_CaseSensitive, CDOTA_Modifier_MonkeyKing_Transform::CreateDisguiseParticle (33 total)
// strings: "modifier_monkey_king_quadruple_tap_bonuses", "reveal_radius", "models/props_gameplay/rune_doubledamage01.vmdl", "particles/generic_gameplay/rune_doubledamage_owner.vpcf", "monkey_king_untransform", "monkey_king_mischief" (27 total)
// globals: `guard variable for'CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vRoshanPitPosition, `guard variable for'CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vTopRunePosition, `guard variable for'CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vBotRunePosition, `guard variable for'CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vRadiantTopBountyPos, `guard variable for'CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vRadiantBotBountyPos, `guard variable for'CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vDireTopBountyPos, `guard variable for'CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vDireBotBountyPos, CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vRoshanPitPosition (17 total)
void __fastcall CDOTA_Modifier_MonkeyKing_Transform::OnCreated(
        CDOTA_Modifier_MonkeyKing_Transform *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTABaseAbility *v7; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v9; // rax
  const Vector *AbsOrigin; // rax
  float z; // xmm3_4
  float x; // r13d
  float y; // r12d
  float v14; // xmm0_4
  float v15; // xmm1_4
  int movespeed; // r15d
  int v17; // eax
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  int BuffParticleEffect; // r12d
  CDOTA_BaseNPC *v21; // rax
  const Vector *v22; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC *v26; // r12
  unsigned __int8 v27; // r13
  CDOTA_BaseNPC *v28; // rax
  int v29; // eax
  const CEntityInstance *v30; // rax
  CEntityIndex v31; // eax
  DotaTreeId_t UnitOrderTreeIdForEntityIndex; // r13d
  CDOTA_BaseNPC *v33; // rax
  _DWORD *v34; // rax
  _DWORD *v35; // r12
  CDOTA_RoshanSpawner *RoshanSpawner; // rax
  char m_CScriptComponent_high; // r13
  CEntityInstance *v38; // rax
  const CBaseEntity *v39; // r12
  int v40; // eax
  CDOTA_BaseNPC *v41; // rax
  char *v42; // rsi
  CEntityIdentity *m_pEntity; // rax
  int v44; // edx
  __int16 v45; // cx
  vec_t vPosition; // [rsp+4h] [rbp-FCh]
  char *src; // [rsp+10h] [rbp-F0h] BYREF
  Vector v48; // [rsp+20h] [rbp-E0h]
  EntityInstanceByClassIter_t_0 courierIter; // [rsp+30h] [rbp-D0h] BYREF
  GridNavTreeStackVec_t vNearbyTrees; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v51; // [rsp+C8h] [rbp-38h]
  Vector v52; // 0:xmm0_8.8,8:xmm1_4.4

  v51 = __readfsqword(0x28u);
  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->movespeed, "movespeed");
  if ( CDOTA_Buff::GetCaster(this) != 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_monkey_king_quadruple_tap_bonuses", 0);
    if ( ModifierByName != 0 )
      CDOTA_Buff::SetHideParticles(ModifierByName, 1);
  }
  this->m_bIsRune = 0;
  this->m_bIsBanana = 0;
  this->m_bIsFlyingCourier = 0;
  CDOTA_Buff::StartIntervalThink(this, 0.1, v4);
  v7 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v7, &this->reveal_radius, "reveal_radius");
  Parent = CDOTA_Buff::GetParent(this);
  (*(Parent->_vptr_IHandleEntity + 222))(Parent, 1.0);
  v9 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
  z = AbsOrigin->z;
  x = AbsOrigin->x;
  y = AbsOrigin->y;
  vPosition = z;
  v48 = *AbsOrigin;
  if ( `guard variable for'CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vRoshanPitPosition == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vRoshanPitPosition) != 0 )
  {
    CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vRoshanPitPosition.x = -2369.0;
    CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vRoshanPitPosition.y = 1803.0;
    CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vRoshanPitPosition.z = 160.0;
    __cxa_guard_release(&`guard variable for'CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vRoshanPitPosition);
  }
  if ( `guard variable for'CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vTopRunePosition == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vTopRunePosition) != 0 )
  {
    CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vTopRunePosition.x = -1760.0;
    CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vTopRunePosition.y = 1216.0;
    CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vTopRunePosition.z = 128.0;
    __cxa_guard_release(&`guard variable for'CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vTopRunePosition);
  }
  if ( `guard variable for'CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vBotRunePosition == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vBotRunePosition) != 0 )
  {
    CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vBotRunePosition.x = 2618.0;
    CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vBotRunePosition.y = -2003.0;
    CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vBotRunePosition.z = 128.0;
    __cxa_guard_release(&`guard variable for'CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vBotRunePosition);
  }
  if ( `guard variable for'CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vRadiantTopBountyPos == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vRadiantTopBountyPos) != 0 )
  {
    CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vRadiantTopBountyPos.x = -4336.0;
    CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vRadiantTopBountyPos.y = 192.0;
    CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vRadiantTopBountyPos.z = 256.0;
    __cxa_guard_release(&`guard variable for'CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vRadiantTopBountyPos);
  }
  if ( `guard variable for'CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vRadiantBotBountyPos == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vRadiantBotBountyPos) != 0 )
  {
    CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vRadiantBotBountyPos.x = 1318.0;
    CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vRadiantBotBountyPos.y = -4232.0;
    CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vRadiantBotBountyPos.z = 384.0;
    __cxa_guard_release(&`guard variable for'CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vRadiantBotBountyPos);
  }
  if ( `guard variable for'CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vDireTopBountyPos == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vDireTopBountyPos) != 0 )
  {
    CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vDireTopBountyPos.x = -2784.0;
    CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vDireTopBountyPos.y = 4144.0;
    CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vDireTopBountyPos.z = 384.0;
    __cxa_guard_release(&`guard variable for'CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vDireTopBountyPos);
  }
  if ( `guard variable for'CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vDireBotBountyPos == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vDireBotBountyPos) != 0 )
  {
    CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vDireBotBountyPos.x = 3488.0;
    CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vDireBotBountyPos.y = 288.0;
    CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vDireBotBountyPos.z = 384.0;
    __cxa_guard_release(&`guard variable for'CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vDireBotBountyPos);
  }
  vNearbyTrees.m_Size = 0;
  v14 = x - CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vRoshanPitPosition.x;
  vNearbyTrees.m_Memory.m_nAllocationCount = 10;
  v15 = y - CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vRoshanPitPosition.y;
  vNearbyTrees.m_Memory.m_nGrowSize = 0x80000000;
  vNearbyTrees.m_Memory.m_pMemory = &vNearbyTrees.m_FixedMemory;
  movespeed = this->movespeed;
  this->m_hCourierToClone.m_Index = -1;
  if ( fsqrt((v14 * v14) + (v15 * v15)) < 450.0 )
  {
    RoshanSpawner = GetRoshanSpawner();
    if ( RoshanSpawner != 0 && CDOTA_RoshanSpawner::GetRoshanSpawnCount(RoshanSpawner) > 2 )
    {
      if ( RandomInt(1, 2) == 2 )
        CUtlString::operator=(&this->m_strDisguise, "models/props_gameplay/cheese.vmdl");
      else
        CUtlString::operator=(&this->m_strDisguise, "models/props_gameplay/aegis.vmdl");
    }
    else
    {
      CUtlString::operator=(&this->m_strDisguise, "models/props_gameplay/aegis.vmdl");
      CDOTA_Modifier_MonkeyKing_Transform::CreateDisguiseParticle(this, "particles/generic_gameplay/dropped_aegis.vpcf");
    }
    goto LABEL_16;
  }
  if ( fsqrt(
         ((x - CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vTopRunePosition.x)
        * (x - CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vTopRunePosition.x))
       + ((y - CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vTopRunePosition.y)
        * (y - CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vTopRunePosition.y))) < 325.0
    || fsqrt(
         ((x - CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vBotRunePosition.x)
        * (x - CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vBotRunePosition.x))
       + ((y - CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vBotRunePosition.y)
        * (y - CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vBotRunePosition.y))) < 325.0 )
  {
    v17 = RandomInt(0, 4);
    CUtlString::operator=(&this->m_strDisguise, s_pszPowerupRuneDisguises[v17]);
    if ( CUtlString::IsEqual_CaseSensitive(&this->m_strDisguise, "models/props_gameplay/rune_doubledamage01.vmdl") )
    {
      CDOTA_Modifier_MonkeyKing_Transform::CreateDisguiseParticle(
        this,
        "particles/generic_gameplay/rune_doubledamage_owner.vpcf");
    }
    else if ( CUtlString::IsEqual_CaseSensitive(&this->m_strDisguise, "models/props_gameplay/rune_haste01.vmdl") )
    {
      CDOTA_Modifier_MonkeyKing_Transform::CreateDisguiseParticle(
        this,
        "particles/generic_gameplay/rune_haste_owner.vpcf");
    }
    else if ( CUtlString::IsEqual_CaseSensitive(&this->m_strDisguise, "models/props_gameplay/rune_illusion01.vmdl") )
    {
      CDOTA_Modifier_MonkeyKing_Transform::CreateDisguiseParticle(this, "particles/generic_gameplay/rune_illusion.vpcf");
    }
    else if ( CUtlString::IsEqual_CaseSensitive(&this->m_strDisguise, "models/props_gameplay/rune_invisibility01.vmdl") )
    {
      CDOTA_Modifier_MonkeyKing_Transform::CreateDisguiseParticle(
        this,
        "particles/generic_gameplay/rune_invisibility.vpcf");
    }
    else if ( CUtlString::IsEqual_CaseSensitive(&this->m_strDisguise, "models/props_gameplay/rune_regeneration01.vmdl") )
    {
      CDOTA_Modifier_MonkeyKing_Transform::CreateDisguiseParticle(
        this,
        "particles/generic_gameplay/rune_regen_owner.vpcf");
    }
    goto LABEL_15;
  }
  if ( fsqrt(
         ((x - CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vRadiantTopBountyPos.x)
        * (x - CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vRadiantTopBountyPos.x))
       + ((y - CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vRadiantTopBountyPos.y)
        * (y - CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vRadiantTopBountyPos.y))) < 325.0
    || fsqrt(
         ((x - CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vRadiantBotBountyPos.x)
        * (x - CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vRadiantBotBountyPos.x))
       + ((y - CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vRadiantBotBountyPos.y)
        * (y - CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vRadiantBotBountyPos.y))) < 325.0
    || fsqrt(
         ((x - CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vDireTopBountyPos.x)
        * (x - CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vDireTopBountyPos.x))
       + ((y - CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vDireTopBountyPos.y)
        * (y - CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vDireTopBountyPos.y))) < 325.0
    || fsqrt(
         ((x - CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vDireBotBountyPos.x)
        * (x - CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vDireBotBountyPos.x))
       + ((y - CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vDireBotBountyPos.y)
        * (y - CDOTA_Modifier_MonkeyKing_Transform::OnCreated(KeyValues *)::vDireBotBountyPos.y))) < 325.0 )
  {
    CUtlString::operator=(&this->m_strDisguise, "models/props_gameplay/rune_goldxp.vmdl");
    CDOTA_Modifier_MonkeyKing_Transform::CreateDisguiseParticle(this, "particles/generic_gameplay/rune_bounty.vpcf");
LABEL_15:
    this->m_bIsRune = 1;
    goto LABEL_16;
  }
  *&v48.x = __PAIR64__(LODWORD(y), LODWORD(x));
  *&v52.x = __PAIR64__(LODWORD(y), LODWORD(x));
  v52.z = vPosition;
  v48.z = vPosition;
  if ( CGridNav::GetNearbyTrees(&g_GridNav, 0, &vNearbyTrees, v52, 350.0, z) )
  {
    CUtlString::operator=(&this->m_strDisguise, "models/heroes/monkey_king/transform_invisiblebox.vmdl");
    v29 = RandomInt(0, (vNearbyTrees.m_Size - 1));
    v30 = (*(vNearbyTrees.m_Memory.m_pMemory[v29]->_vptr_CObstructionObject + 8))(vNearbyTrees.m_Memory.m_pMemory[v29]);
    v31.m_Data = CEntityInstance::GetEntityIndex(v30).m_Data;
    UnitOrderTreeIdForEntityIndex = GetUnitOrderTreeIdForEntityIndex(v31);
    v33 = CDOTA_Buff::GetCaster(this);
    if ( v33 != 0 )
    {
      v34 = __dynamic_cast(v33, &`typeinfo for'CDOTA_BaseNPC, &`typeinfo for'CDOTA_Unit_Hero_MonkeyKing, 0);
      v35 = v34;
      if ( v34 != 0 && UnitOrderTreeIdForEntityIndex != v34[1468] )
      {
        (*(*v34 + 176LL))(v34, 5872, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v35[1468] = UnitOrderTreeIdForEntityIndex;
      }
    }
  }
  else if ( RandomInt(1, 10) <= 7 )
  {
    v40 = RandomInt(0, 6);
    CUtlString::operator=(&this->m_strDisguise, s_pszMiscDisguises[v40]);
    if ( CUtlString::IsEqual_CaseSensitive(&this->m_strDisguise, "models/props_gameplay/banana_prop_closed.vmdl")
      || CUtlString::IsEqual_CaseSensitive(&this->m_strDisguise, "models/props_gameplay/banana_prop_open.vmdl") )
    {
      this->m_bIsBanana = 1;
      v41 = CDOTA_Buff::GetParent(this);
      (*(v41->_vptr_IHandleEntity + 222))(v41, 1.5);
    }
    else
    {
      CDOTA_Modifier_MonkeyKing_Transform::CreateDisguiseParticle(this, "particles/generic_gameplay/dropped_item.vpcf");
    }
  }
  else
  {
    CUtlString::operator=(&this->m_strDisguise, "models/props_gameplay/donkey.vmdl");
    EntityInstanceByClassIter_t::EntityInstanceByClassIter_t(
      &courierIter,
      0,
      "npc_dota_courier",
      0,
      EntityIterType_t::ENTITY_ENUM_ITERATE_NON_DORMANT_ONLY);
    while ( 1 )
    {
      v38 = EntityInstanceByClassIter_t::Next(&courierIter);
      v39 = v38;
      if ( v38 == 0 )
        break;
      m_CScriptComponent_high = HIBYTE(v38[7].m_CScriptComponent);
      if ( m_CScriptComponent_high == CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value )
      {
        CBaseEntity::GetModelName(&src, v39);
        v42 = "";
        if ( src != 0 )
          v42 = src;
        CUtlString::operator=(&this->m_strDisguise, v42);
        m_pEntity = v39->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v44 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          v45 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v45 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(this->m_hCourierToClone.m_Index) = v45 | this->m_hCourierToClone.m_Index & 0x8000;
          this->m_hCourierToClone.m_Index = (v44 << 15) | this->m_hCourierToClone.m_Index & 0x7FFF;
        }
        else
        {
          this->m_hCourierToClone.m_Index = -1;
        }
        this->m_bIsFlyingCourier = (*(v39->_vptr_IHandleEntity + 489))(v39);
        break;
      }
    }
    movespeed = 350;
  }
LABEL_16:
  this->m_nDisguisedSpeed = movespeed;
  v18 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::SwapAbilities(v18, "monkey_king_mischief", "monkey_king_untransform", 0, 1);
  if ( CDOTA_Buff::GetParent(this) != 0 )
  {
    v19 = CDOTA_Buff::GetCaster(this);
    BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                           this,
                           "particles/units/heroes/hero_monkey_king/monkey_king_disguise.vpcf",
                           2,
                           v19,
                           0);
    v21 = CDOTA_Buff::GetParent(this);
    v22 = CBaseEntity::GetAbsOrigin(v21);
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(ParticleManager, BuffParticleEffect, 0, *&v22->x, v22->z);
    v24 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v24, BuffParticleEffect);
    v25 = CDOTA_Buff::GetParent(this);
    v26 = v25;
    v27 = v25->m_clrRender.m_Value._color[3];
    if ( v25->m_clrRender.m_Value._color[0] != 0xFF )
    {
      (*(v25->_vptr_IHandleEntity + 22))(v25, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v26->m_clrRender.m_Value._color[0] = -1;
    }
    if ( v26->m_clrRender.m_Value._color[1] != 0xFF )
    {
      (*(v26->_vptr_IHandleEntity + 22))(v26, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v26->m_clrRender.m_Value._color[1] = -1;
    }
    if ( v26->m_clrRender.m_Value._color[2] != 0xFF )
    {
      (*(v26->_vptr_IHandleEntity + 22))(v26, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v26->m_clrRender.m_Value._color[2] = -1;
    }
    if ( v27 != v26->m_clrRender.m_Value._color[3] )
    {
      (*(v26->_vptr_IHandleEntity + 22))(v26, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v26->m_clrRender.m_Value._color[3] = v27;
    }
    v28 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::UnitEmitSound(v28, "Hero_MonkeyKing.Transform.On", 0.0, 0, 0);
  }
  vNearbyTrees.m_Size = 0;
  if ( (vNearbyTrees.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_Tree *,int>::Purge(&vNearbyTrees.m_Memory);
    if ( (vNearbyTrees.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_Tree *,int>::Purge(&vNearbyTrees.m_Memory);
  }
}


// CDOTA_Modifier_MonkeyKing_Transform::GetVisualZDelta  (line 3435, @0x0000000002c25d20, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_Transform::GetVisualZDelta(
        CDOTA_Modifier_MonkeyKing_Transform *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  *&result.m_eType = 0x4316000000000001LL;
  if ( !this->m_bIsFlyingCourier )
  {
    *&result.m_eType = 0x4240000000000001LL;
    if ( !this->m_bIsRune )
    {
      *&result.m_eType = 0x4120000000000001LL;
      if ( !this->m_bIsBanana )
        *&result.m_eType = 1;
    }
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_MonkeyKing_Transform::OnIntervalThink  (line 3454, @0x0000000002c37a50, libserver.so)  // inlines: AttachedParticleFilter_t, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Get, GetInstance, Invalidate, Purge, RemoveAll, String, ToDOTABaseNPC, operator CBaseEntity*, operator[], ~AttachedParticleFilter_t, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::GetGeneratingEconItem, CEconItemView::GetAttachedParticles, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::GetCaster, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle, CUtlString::FreeMemoryBlock, CDOTA_Buff::StartIntervalThink, CUtlMemory<AttachedParticlesOnItem_t, int>::Purge, _Unwind_Resume
void __fastcall CDOTA_Modifier_MonkeyKing_Transform::OnIntervalThink(CDOTA_Modifier_MonkeyKing_Transform *const this)
{
  CDOTA_BaseNPC *v1; // rax
  float v2; // xmm1_4
  CBaseEntity *v3; // r15
  CEconItemView *GeneratingEconItem; // rbx
  unsigned __int64 v5; // rbx
  __int64 v6; // r12
  const attachedparticlesystem_t *m_pAttachedSystem; // r13
  bool m_bIsFakeSystem; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // eax
  const char *m_pAsString; // r14
  int v12; // r13d
  const attachedparticlesystem_t *v13; // rax
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *pEnt; // [rsp+18h] [rbp-88h]
  int iAttachType; // [rsp+24h] [rbp-7Ch]
  AttachedParticleFilter_t filter; // [rsp+30h] [rbp-70h] BYREF
  CUtlVector<AttachedParticlesOnItem_t,CUtlMemory<AttachedParticlesOnItem_t,int> > particleSystems; // [rsp+50h] [rbp-50h] BYREF

  v1 = CEntityHandle::operator CEntityInstance *(&this->m_hCourierToClone);
  v3 = v1;
  if ( v1 != 0 && v1->m_bIsDOTANPC )
  {
    GeneratingEconItem = CDOTA_BaseNPC::GetGeneratingEconItem(v1);
    if ( GeneratingEconItem != 0 )
    {
      memset(&filter, 0, 20);
      (*(v3->_vptr_IHandleEntity + 481))(v3, &filter);
      particleSystems.m_Size = 0;
      particleSystems.m_Memory.m_pMemory = 0;
      particleSystems.m_Memory.m_nAllocationCount = 0;
      particleSystems.m_Memory.m_nGrowSize = 0;
      CEconItemView::GetAttachedParticles(GeneratingEconItem, &particleSystems, &filter);
      if ( particleSystems.m_Size > 0 )
      {
        v5 = 0;
        v6 = 16 * ((particleSystems.m_Size - 1) + 1LL);
        do
        {
          while ( 1 )
          {
            m_pAttachedSystem = particleSystems.m_Memory.m_pMemory[v5 / 0x10].m_pAttachedSystem;
            if ( m_pAttachedSystem->iCustomType == 0 )
              break;
            v5 += 16LL;
            if ( v5 == v6 )
              goto LABEL_11;
          }
          m_bIsFakeSystem = particleSystems.m_Memory.m_pMemory[v5 / 0x10].m_bIsFakeSystem;
          ParticleManager = GetParticleManager();
          Particle = CDOTA_ParticleManager::CreateParticle(ParticleManager, m_pAttachedSystem, m_bIsFakeSystem, v3, v3);
          m_pAsString = "";
          v12 = Particle;
          v13 = particleSystems.m_Memory.m_pMemory[v5 / 0x10].m_pAttachedSystem;
          if ( v13->symAttachmentName.u.m_Id != 0 )
            m_pAsString = v13->symAttachmentName.u.m_pAsString;
          iAttachType = v13->nRootAttachType;
          pEnt = CDOTA_Buff::GetCaster(this);
          v14 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v14, v12, 0, pEnt, iAttachType, m_pAsString, vec3_invalid, 1);
          CDOTA_Buff::AddParticle(this, v12, 0, 0, -1, 0, 0);
          v5 += 16LL;
        }
        while ( v5 != v6 );
      }
LABEL_11:
      particleSystems.m_Size = 0;
      if ( (particleSystems.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<AttachedParticlesOnItem_t,int>::Purge(&particleSystems.m_Memory);
        if ( (particleSystems.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<AttachedParticlesOnItem_t,int>::Purge(&particleSystems.m_Memory);
      }
      if ( filter.m_unitName.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&filter.m_unitName);
    }
    this->m_hCourierToClone.m_Index = -1;
  }
  CDOTA_Buff::StartIntervalThink(this, 0.1, v2);
}


// CDOTA_Modifier_MonkeyKing_Transform::CreateDisguiseParticle  (line 3490, @0x0000000002c499f0, libserver.so)
// calls: CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControl
// callers: CDOTA_Modifier_MonkeyKing_Transform::OnCreated
void __fastcall CDOTA_Modifier_MonkeyKing_Transform::CreateDisguiseParticle(
        CDOTA_Modifier_MonkeyKing_Transform *const this,
        const char *sDisguiseParticle)
{
  CDOTA_Modifier_MonkeyKing_Transform *v3; // rbx
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v6; // rax
  const Vector *AbsOrigin; // rax
  const Vector *v8; // r12
  CDOTA_ParticleManager *v9; // rax

  v3 = this;
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  v3->m_nDisguiseEffectIndex = CDOTA_ParticleManager::CreateParticle(
                                 ParticleManager,
                                 sDisguiseParticle,
                                 1,
                                 Parent,
                                 0,
                                 0);
  v6 = CDOTA_Buff::GetParent(v3);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
  LODWORD(v3) = v3->m_nDisguiseEffectIndex;
  v8 = AbsOrigin;
  v9 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v9, v3, 0, *&v8->x, v8->z);
}


// CDOTA_Modifier_MonkeyKing_Transform::OnDestroy  (line 3498, @0x0000000002c2c550, libserver.so)  // inlines: Init, NetworkStateChanged, Set, SetAlpha, SetBlue, SetColor, SetComponent, SetGreen, SetRed, SetRenderColor, SetSelectionRingVisibility, SetVal, a, operator=<bool>, operator=<unsigned int>
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::SetHideParticles, CDOTA_BaseNPC::SwapAbilities, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::UnitEmitSound, CDOTA_Buff::CreateBuffParticleEffect, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControl (13 total)
// strings: "modifier_monkey_king_quadruple_tap_bonuses", "monkey_king_mischief", "monkey_king_untransform", "Hero_MonkeyKing.Transform.Off", "particles/units/heroes/hero_monkey_king/monkey_king_disguise.vpcf"
// globals: `typeinfo for'CDOTA_Unit_Hero_MonkeyKing
void __fastcall CDOTA_Modifier_MonkeyKing_Transform::OnDestroy(CDOTA_Modifier_MonkeyKing_Transform *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // r12
  CDOTA_BaseNPC *Parent; // rax
  int m_nDisguiseEffectIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  int v10; // r12d
  CDOTA_ParticleManager *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  int BuffParticleEffect; // r12d
  CDOTA_BaseNPC *v15; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  CDOTA_BaseNPC *v20; // r12
  unsigned __int8 v21; // r13
  CDOTA_BaseNPC *v22; // rax
  _DWORD *v23; // rax
  _DWORD *v24; // rbx

  if ( CDOTA_Buff::GetCaster(this) != 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_monkey_king_quadruple_tap_bonuses", 0);
    if ( ModifierByName != 0 )
      CDOTA_Buff::SetHideParticles(ModifierByName, 0);
  }
  v4 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::SwapAbilities(v4, "monkey_king_untransform", "monkey_king_mischief", 0, 1);
  v5 = CDOTA_Buff::GetCaster(this);
  v6 = v5;
  if ( !v5->m_bSelectionRingVisible.m_Value )
  {
    (*(v5->_vptr_IHandleEntity + 22))(v5, 2096, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v6->m_bSelectionRingVisible.m_Value = 1;
  }
  Parent = CDOTA_Buff::GetParent(this);
  (*(Parent->_vptr_IHandleEntity + 222))(Parent, 0.81);
  m_nDisguiseEffectIndex = this->m_nDisguiseEffectIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nDisguiseEffectIndex, 0);
  v10 = this->m_nDisguiseEffectIndex;
  v11 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v11, v10);
  v12 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v12, "Hero_MonkeyKing.Transform.Off", 0.0, 0, 0);
  if ( CDOTA_Buff::GetParent(this) != 0 )
  {
    v13 = CDOTA_Buff::GetCaster(this);
    BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                           this,
                           "particles/units/heroes/hero_monkey_king/monkey_king_disguise.vpcf",
                           2,
                           v13,
                           0);
    v15 = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v15);
    v17 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v17, BuffParticleEffect, 0, *&AbsOrigin->x, AbsOrigin->z);
    v18 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v18, BuffParticleEffect);
    v19 = CDOTA_Buff::GetParent(this);
    v20 = v19;
    v21 = v19->m_clrRender.m_Value._color[3];
    if ( v19->m_clrRender.m_Value._color[0] != 0xFF )
    {
      (*(v19->_vptr_IHandleEntity + 22))(v19, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v20->m_clrRender.m_Value._color[0] = -1;
    }
    if ( v20->m_clrRender.m_Value._color[1] != 0xFF )
    {
      (*(v20->_vptr_IHandleEntity + 22))(v20, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v20->m_clrRender.m_Value._color[1] = -1;
    }
    if ( v20->m_clrRender.m_Value._color[2] != 0xFF )
    {
      (*(v20->_vptr_IHandleEntity + 22))(v20, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v20->m_clrRender.m_Value._color[2] = -1;
    }
    if ( v21 != v20->m_clrRender.m_Value._color[3] )
    {
      (*(v20->_vptr_IHandleEntity + 22))(v20, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v20->m_clrRender.m_Value._color[3] = v21;
    }
  }
  v22 = CDOTA_Buff::GetCaster(this);
  if ( v22 != 0 )
  {
    v23 = __dynamic_cast(v22, &`typeinfo for'CDOTA_BaseNPC, &`typeinfo for'CDOTA_Unit_Hero_MonkeyKing, 0);
    v24 = v23;
    if ( v23 != 0 && v23[1468] != -1 )
    {
      (*(*v23 + 176LL))(v23, 5872, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v24[1468] = -1;
    }
  }
}


// CDOTA_Modifier_MonkeyKing_Transform::DeclareFunctions  (line 3533, @0x0000000002c1d820, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_MonkeyKing_Transform::OnAbilityExecuted(CModifierParams const&), CDOTA_Modifier_MonkeyKing_Transform::OnAttackStart(CModifierParams const&), CDOTA_Modifier_MonkeyKing_Transform::OnTakeDamage(CModifierParams const&), CDOTA_Modifier_MonkeyKing_Transform::OnModelChange(CModifierParams const&), CDOTA_Modifier_MonkeyKing_Transform::GetModifierModelChange(CModifierParams const&), CDOTA_Modifier_MonkeyKing_Transform::GetModifierPersistentInvisibility(CModifierParams const&), CDOTA_Modifier_MonkeyKing_Transform::GetMoveSpeedModifier(CModifierParams const&), CDOTA_Modifier_MonkeyKing_Transform::GetVisualZDelta(CModifierParams const&)
void __fastcall CDOTA_Modifier_MonkeyKing_Transform::DeclareFunctions(CDOTA_Modifier_MonkeyKing_Transform *const this)
{
  this->m_Functions[128].__pfn = CDOTA_Modifier_MonkeyKing_Transform::OnAbilityExecuted;
  this->m_Functions[128].__delta = 0;
  this->m_Functions[119].__delta = 0;
  this->m_Functions[119].__pfn = CDOTA_Modifier_MonkeyKing_Transform::OnAttackStart;
  this->m_Functions[134].__pfn = CDOTA_Modifier_MonkeyKing_Transform::OnTakeDamage;
  this->m_Functions[150].__pfn = CDOTA_Modifier_MonkeyKing_Transform::OnModelChange;
  this->m_Functions[152].__pfn = CDOTA_Modifier_MonkeyKing_Transform::GetModifierModelChange;
  this->m_Functions[10].__pfn = CDOTA_Modifier_MonkeyKing_Transform::GetModifierPersistentInvisibility;
  this->m_Functions[18].__pfn = CDOTA_Modifier_MonkeyKing_Transform::GetMoveSpeedModifier;
  this->m_Functions[134].__delta = 0;
  this->m_Functions[150].__delta = 0;
  this->m_Functions[152].__delta = 0;
  this->m_Functions[10].__delta = 0;
  this->m_Functions[18].__delta = 0;
  this->m_Functions[95].__pfn = (&stru_10 + 697);
  this->m_Functions[95].__delta = 0;
  this->m_Functions[171].__pfn = CDOTA_Modifier_MonkeyKing_Transform::GetVisualZDelta;
  this->m_Functions[171].__delta = 0;
}


// CDOTA_Modifier_MonkeyKing_Transform::OnAbilityExecuted  (line 3548, @0x0000000002c2d1c0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_Transform::OnAbilityExecuted(
        CDOTA_Modifier_MonkeyKing_Transform *const this,
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


// CDOTA_Modifier_MonkeyKing_Transform::OnAttackStart  (line 3559, @0x0000000002c2d310, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_Transform::OnAttackStart(
        CDOTA_Modifier_MonkeyKing_Transform *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1uLL;
  v4 = &v3[params->hattacker.m_Index & 0x1FF];
  if ( v4 == 0 || m_Index != v4->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC || CDOTA_Buff::GetParent(this) != m_pInstance )
    return 1uLL;
  CDOTA_Buff::Destroy(this, 0, 0, 0);
  return 1uLL;
}


// CDOTA_Modifier_MonkeyKing_Transform::OnTakeDamage  (line 3570, @0x0000000002c2f490, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_Transform::OnTakeDamage(
        CDOTA_Modifier_MonkeyKing_Transform *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // ecx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CEntityInstance *v12; // rax

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->hunit.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == m_pInstance )
        {
          v9 = params->hattacker.m_Index;
          if ( v9 + 2 > 1 )
          {
            v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
            if ( v10 != 0 )
            {
              v11 = &v10[params->hattacker.m_Index & 0x1FF];
              if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
              {
                v12 = v11->m_pInstance;
                if ( v12 != 0 && BYTE3(v12[7]._vptr_IHandleEntity) != 0 && params->fDamage > 0.0 )
                  CDOTA_Buff::Destroy(this, 0, 0, 0);
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_MonkeyKing_Transform::OnModelChange  (line 3589, @0x0000000002c2df30, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseAnimating::GetSkin, CDOTA_Buff::GetParent, CBaseAnimating::SetSkin
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_Transform::OnModelChange(
        CDOTA_Modifier_MonkeyKing_Transform *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rcx
  CEntityIdentity *v5; // rdx
  const CBaseAnimating *m_pInstance; // rdi
  CUtlStringToken v8; // r12d
  CDOTA_BaseNPC *Parent; // rax

  m_Index = this->m_hCourierToClone.m_Index;
  if ( m_Index == -1 )
    return 1uLL;
  if ( m_Index == -2 )
    return 1uLL;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hCourierToClone.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    return 1uLL;
  v5 = &v4[this->m_hCourierToClone.m_Index & 0x1FF];
  if ( v5 == 0 )
    return 1uLL;
  if ( m_Index != v5->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC )
    return 1uLL;
  v8.m_nHashCode = CBaseAnimating::GetSkin(m_pInstance).m_nHashCode;
  Parent = CDOTA_Buff::GetParent(this);
  CBaseAnimating::SetSkin(Parent, v8);
  return 1uLL;
}


// CDOTA_Modifier_MonkeyKing_Transform::GetModifierModelChange  (line 3608, @0x0000000002c1e760, libserver.so)
// calls: CUtlString::Get
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_Transform::GetModifierModelChange(
        CDOTA_Modifier_MonkeyKing_Transform *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = CUtlString::Get(&this->m_strDisguise);
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_MonkeyKing_Transform::GetModifierPersistentInvisibility  (line 3615, @0x0000000002c1d910, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_Transform::GetModifierPersistentInvisibility(
        CDOTA_Modifier_MonkeyKing_Transform *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_MonkeyKing_Transform::GetMoveSpeedModifier  (line 3622, @0x0000000002c1d930, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_Transform::GetMoveSpeedModifier(
        CDOTA_Modifier_MonkeyKing_Transform *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->m_nDisguisedSpeed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_MonkeyKing_Transform::CheckState  (line 3629, @0x0000000002c1d950, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_MonkeyKing_Transform::CheckState(
        CDOTA_Modifier_MonkeyKing_Transform *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0xE00000uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFF1FFFFFLL;
}


// CDOTA_Ability_MonkeyKing_UnTransform::~CDOTA_Ability_MonkeyKing_UnTransform  (line 3647, @0x0000000002c99030, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_MonkeyKing_UnTransform::~CDOTA_Ability_MonkeyKing_UnTransform(
        CDOTA_Ability_MonkeyKing_UnTransform *const this)
{
  this->_vptr_IHandleEntity = &off_45E4890;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_MonkeyKing_UnTransform::~CDOTA_Ability_MonkeyKing_UnTransform  (line 3647, @0x0000000002c99050, libserver.so)  // inlines: ~CDOTA_Ability_MonkeyKing_UnTransform
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_MonkeyKing_UnTransform::~CDOTA_Ability_MonkeyKing_UnTransform(
        CDOTA_Ability_MonkeyKing_UnTransform *const this)
{
  this->_vptr_IHandleEntity = &off_45E4890;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_MonkeyKing_UnTransform::Schema_DynamicBinding  (line 3649, @0x0000000002c8b060, libserver.so)
// globals: CDOTA_Ability_MonkeyKing_UnTransform::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_MonkeyKing_UnTransform::Schema_DynamicBinding(
        const CDOTA_Ability_MonkeyKing_UnTransform *const this)
{
  return CDOTA_Ability_MonkeyKing_UnTransform::s_pSchemaBinding;
}


// CDOTA_Ability_MonkeyKing_UnTransform::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 3649, @0x0000000002c8b070, libserver.so)
// globals: CDOTA_Ability_MonkeyKing_UnTransform::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_MonkeyKing_UnTransform::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_MonkeyKing_UnTransform::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_MonkeyKing_UnTransform::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_MonkeyKing_UnTransform::CEntityInstanceEntityClass::DestructInstance  (line 3649, @0x0000000002c8b080, libserver.so)  // inlines: Destruct<CDOTA_Ability_MonkeyKing_UnTransform>
void __fastcall CDOTA_Ability_MonkeyKing_UnTransform::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_MonkeyKing_UnTransform::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_MonkeyKing_UnTransform::CEntityInstanceEntityClass::FreeInstance  (line 3649, @0x0000000002c8b0a0, libserver.so)
void __fastcall CDOTA_Ability_MonkeyKing_UnTransform::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_MonkeyKing_UnTransform::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_MonkeyKing_UnTransform::CEntityInstanceEntityClass::CanAllocate  (line 3649, @0x0000000002c8b0c0, libserver.so)
bool __fastcall CDOTA_Ability_MonkeyKing_UnTransform::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_MonkeyKing_UnTransform::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_MonkeyKing_UnTransform::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 3649, @0x0000000002c8b0d0, libserver.so)
// globals: CDOTA_Ability_MonkeyKing_UnTransform::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_MonkeyKing_UnTransform::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_MonkeyKing_UnTransform::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_MonkeyKing_UnTransform::s_pSchemaBinding;
}


// CDOTA_Ability_MonkeyKing_UnTransform::CEntityInstanceEntityClass::AllocateInstance  (line 3649, @0x0000000002c906a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_MonkeyKing_UnTransform::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_MonkeyKing_UnTransform::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_MonkeyKing_UnTransform::CEntityInstanceEntityClass::ConstructInstance  (line 3649, @0x0000000002c951b0, libserver.so)  // inlines: CDOTA_Ability_MonkeyKing_UnTransform, Construct<CDOTA_Ability_MonkeyKing_UnTransform>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_MonkeyKing_UnTransform::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_MonkeyKing_UnTransform::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45E4890;
  }
  return p;
}


// CDOTA_Ability_MonkeyKing_UnTransform::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3649, @0x0000000002ca2cf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_MonkeyKing_UnTransform::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_MonkeyKing_UnTransform::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_MonkeyKing_UnTransform::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3649, @0x0000000002ca2d10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_MonkeyKing_UnTransform::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_MonkeyKing_UnTransform::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_MonkeyKing_UnTransform::GetEntityClassInternal  (line 3649, @0x0000000002cbb8b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "monkey_king_untransform", "CDOTA_Ability_MonkeyKing_UnTransform"
// globals: `guard variable for'CDOTA_Ability_MonkeyKing_UnTransform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_UnTransformClass, CDOTA_Ability_MonkeyKing_UnTransform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_UnTransformClass, __dso_handle, CDOTA_Ability_MonkeyKing_UnTransform::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_MonkeyKing_UnTransform::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_UnTransformClassInfo, CDOTA_Ability_MonkeyKing_UnTransform::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_UnTransformClassInfo
CEntityClass *__cdecl CDOTA_Ability_MonkeyKing_UnTransform::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_MonkeyKing_UnTransform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_UnTransformClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_MonkeyKing_UnTransform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_UnTransformClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_MonkeyKing_UnTransform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_UnTransformClass);
    CDOTA_Ability_MonkeyKing_UnTransform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_UnTransformClass._vptr_CEntityClass = off_45E4810;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_MonkeyKing_UnTransform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_UnTransformClass);
    __cxa_atexit(
      CDOTA_Ability_MonkeyKing_UnTransform::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_MonkeyKing_UnTransform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_UnTransformClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_MonkeyKing_UnTransformClass != 0 )
    return &CDOTA_Ability_MonkeyKing_UnTransform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_UnTransformClass;
  if ( `guard variable for'CDOTA_Ability_MonkeyKing_UnTransform::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_UnTransformClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_MonkeyKing_UnTransform::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_UnTransformClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_MonkeyKing_UnTransform::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_UnTransformClassInfo,
      "CDOTA_Ability_MonkeyKing_UnTransform",
      "monkey_king_untransform",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_MonkeyKing_UnTransform::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_UnTransformClassInfo);
  }
  CDOTA_Ability_MonkeyKing_UnTransform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_UnTransformClass.m_pClassInfo = &CDOTA_Ability_MonkeyKing_UnTransform::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_UnTransformClassInfo;
  CDOTA_Ability_MonkeyKing_UnTransform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_UnTransformClass.m_pBaseClassInfo = CDOTA_Ability_MonkeyKing_UnTransform::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_UnTransformClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_MonkeyKing_UnTransformClass = &CDOTA_Ability_MonkeyKing_UnTransform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_UnTransformClass;
  CDOTA_Ability_MonkeyKing_UnTransform::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_UnTransformClassInfo.m_pClass = &CDOTA_Ability_MonkeyKing_UnTransform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_UnTransformClass;
  CDOTA_Ability_MonkeyKing_UnTransform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_UnTransformClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_MonkeyKing_UnTransformClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_MonkeyKing_UnTransform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_UnTransformClass;
}


// CDOTA_Ability_MonkeyKing_UnTransform::GetAssociatedPrimaryAbilities  (line 3652, @0x0000000002c8b0e0, libserver.so)
// strings: "monkey_king_mischief"
const char *__fastcall CDOTA_Ability_MonkeyKing_UnTransform::GetAssociatedPrimaryAbilities(
        CDOTA_Ability_MonkeyKing_UnTransform *const this)
{
  return "monkey_king_mischief";
}


// CDOTA_Ability_MonkeyKing_UnTransform::IsStealable  (line 3656, @0x0000000002c8b0f0, libserver.so)
bool __fastcall CDOTA_Ability_MonkeyKing_UnTransform::IsStealable(CDOTA_Ability_MonkeyKing_UnTransform *const this)
{
  return 0;
}


// CDOTA_Ability_MonkeyKing_UnTransform::ProcsMagicStick  (line 3657, @0x0000000002c8b100, libserver.so)
bool __fastcall CDOTA_Ability_MonkeyKing_UnTransform::ProcsMagicStick(CDOTA_Ability_MonkeyKing_UnTransform *const this)
{
  return 0;
}


// CDOTA_Ability_MonkeyKing_UnTransform::Spawn  (line 3664, @0x0000000002c21010, libserver.so)
// calls: CDOTABaseAbility::Spawn
void __fastcall CDOTA_Ability_MonkeyKing_UnTransform::Spawn(
        CDOTA_Ability_MonkeyKing_UnTransform *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTABaseAbility::Spawn(this, pKeyValues);
  (*(this->_vptr_IHandleEntity + 212))(this, 1);
}


// CDOTA_Ability_MonkeyKing_FurArmy::~CDOTA_Ability_MonkeyKing_FurArmy  (line 3682, @0x0000000002cb6aa0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_MonkeyKing_FurArmy::~CDOTA_Ability_MonkeyKing_FurArmy(
        CDOTA_Ability_MonkeyKing_FurArmy *const this)
{
  this->_vptr_IHandleEntity = &off_45E5390;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_vecSoldiers);
  if ( (this->m_vecSoldiers.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vecSoldiers.m_Memory),
        (this->m_vecSoldiers.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vecSoldiers.m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_MonkeyKing_FurArmy::~CDOTA_Ability_MonkeyKing_FurArmy  (line 3682, @0x0000000002cb7450, libserver.so)  // inlines: Purge, ~CDOTA_Ability_MonkeyKing_FurArmy, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_MonkeyKing_FurArmy::~CDOTA_Ability_MonkeyKing_FurArmy(
        CDOTA_Ability_MonkeyKing_FurArmy *const this)
{
  this->_vptr_IHandleEntity = &off_45E5390;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_vecSoldiers);
  if ( (this->m_vecSoldiers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vecSoldiers.m_Memory);
    if ( (this->m_vecSoldiers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vecSoldiers.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_MonkeyKing_FurArmy::Schema_DynamicBinding  (line 3684, @0x0000000002c8b110, libserver.so)
// globals: CDOTA_Ability_MonkeyKing_FurArmy::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_MonkeyKing_FurArmy::Schema_DynamicBinding(
        const CDOTA_Ability_MonkeyKing_FurArmy *const this)
{
  return CDOTA_Ability_MonkeyKing_FurArmy::s_pSchemaBinding;
}


// CDOTA_Ability_MonkeyKing_FurArmy::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 3684, @0x0000000002c8b120, libserver.so)
// globals: CDOTA_Ability_MonkeyKing_FurArmy::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_MonkeyKing_FurArmy::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_MonkeyKing_FurArmy::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_MonkeyKing_FurArmy::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_MonkeyKing_FurArmy::CEntityInstanceEntityClass::DestructInstance  (line 3684, @0x0000000002c8b130, libserver.so)  // inlines: Destruct<CDOTA_Ability_MonkeyKing_FurArmy>
void __fastcall CDOTA_Ability_MonkeyKing_FurArmy::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_MonkeyKing_FurArmy::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_MonkeyKing_FurArmy::CEntityInstanceEntityClass::FreeInstance  (line 3684, @0x0000000002c8b150, libserver.so)
void __fastcall CDOTA_Ability_MonkeyKing_FurArmy::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_MonkeyKing_FurArmy::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_MonkeyKing_FurArmy::CEntityInstanceEntityClass::CanAllocate  (line 3684, @0x0000000002c8b170, libserver.so)
bool __fastcall CDOTA_Ability_MonkeyKing_FurArmy::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_MonkeyKing_FurArmy::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_MonkeyKing_FurArmy::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 3684, @0x0000000002c8b180, libserver.so)
// globals: CDOTA_Ability_MonkeyKing_FurArmy::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_MonkeyKing_FurArmy::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_MonkeyKing_FurArmy::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_MonkeyKing_FurArmy::s_pSchemaBinding;
}


// CDOTA_Ability_MonkeyKing_FurArmy::CEntityInstanceEntityClass::AllocateInstance  (line 3684, @0x0000000002c906e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_MonkeyKing_FurArmy::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_MonkeyKing_FurArmy::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 960);
  memset(v1, 0, 0x3C0u);
  return v1;
}


// CDOTA_Ability_MonkeyKing_FurArmy::CEntityInstanceEntityClass::ConstructInstance  (line 3684, @0x0000000002ca00f0, libserver.so)  // inlines: CDOTA_Ability_MonkeyKing_FurArmy, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_MonkeyKing_FurArmy>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_MonkeyKing_FurArmy::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_MonkeyKing_FurArmy::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = -1;
    *p = &off_45E5390;
    *(p + 234) = 0;
    *(p + 118) = 0;
    *(p + 238) = 0;
    *(p + 239) = 0;
    *(p + 928) = 0;
  }
  return p;
}


// CDOTA_Ability_MonkeyKing_FurArmy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3684, @0x0000000002ca2d40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_MonkeyKing_FurArmy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_MonkeyKing_FurArmy::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_MonkeyKing_FurArmy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3684, @0x0000000002ca2d60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_MonkeyKing_FurArmy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_MonkeyKing_FurArmy::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal  (line 3684, @0x0000000002cc1e50, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "monkey_king_wukongs_command", "CDOTA_Ability_MonkeyKing_FurArmy"
// globals: `guard variable for'CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass, CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_MonkeyKing_FurArmy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClassInfo, CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClassInfo
CEntityClass *__cdecl CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass) != 0 )
  {
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_pClassInfo = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_flags = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_pInputs = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_nInputCount = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_pOutputs = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_nOutputCount = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_pGameClass = 0;
    CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass._vptr_CEntityClass = off_45E5310;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass);
    __cxa_atexit(
      CDOTA_Ability_MonkeyKing_FurArmy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_MonkeyKing_FurArmyClass != 0 )
    return &CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass;
  if ( `guard variable for'CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClassInfo,
      "CDOTA_Ability_MonkeyKing_FurArmy",
      "monkey_king_wukongs_command",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClassInfo);
  }
  CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_pClassInfo = &CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClassInfo;
  CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_pBaseClassInfo = CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_MonkeyKing_FurArmyClass = &CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass;
  CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClassInfo.m_pClass = &CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass;
  CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_MonkeyKing_FurArmyClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_MonkeyKing_FurArmy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_FurArmyClass;
}


// CDOTA_Ability_MonkeyKing_FurArmy::GetCastAnimation  (line 3718, @0x0000000002c8b190, libserver.so)
Activity __fastcall CDOTA_Ability_MonkeyKing_FurArmy::GetCastAnimation(CDOTA_Ability_MonkeyKing_FurArmy *const this)
{
  return 1722;
}


// CDOTA_Ability_MonkeyKing_FurArmy::YouForgotToImplementOrDeclareServerClass  (line 3734, @0x0000000002c1d970, libserver.so)
int __fastcall CDOTA_Ability_MonkeyKing_FurArmy::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_MonkeyKing_FurArmy *const this)
{
  return 0;
}


// CDOTA_Ability_MonkeyKing_FurArmy::GetServerClass  (line 3734, @0x0000000002c357b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_MonkeyKing_FurArmy::GetServerClass(CDOTA_Ability_MonkeyKing_FurArmy *const this)
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


// CDOTA_Ability_MonkeyKing_FurArmy::OnUpgrade  (line 3744, @0x0000000002c2c050, libserver.so)  // inlines: GetModifier_Constant_First, IsListeningToEvent, IsTempestDouble, curtime
// calls: CDOTABaseAbility::GetCaster, CDOTA_ModifierManager::GetModifier_Constant_First_Internal
void __fastcall CDOTA_Ability_MonkeyKing_FurArmy::OnUpgrade(CDOTA_Ability_MonkeyKing_FurArmy *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  __int64 v3; // rdx
  CGlobalVars *v4; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v6; // xmm0_4

  if ( this->m_vecSoldiers.m_Size > 14
    || (Caster = CDOTABaseAbility::GetCaster(this), (v3 = Caster->m_ModifierManager.m_buffsForModifiers[166]) != 0xFF)
    && Caster->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v3].m_Size > 0
    && CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
         &Caster->m_ModifierManager,
         modifierfunction::MODIFIER_PROPERTY_TEMPEST_DOUBLE,
         &CModifierParams::s_Default) == 1.0
    || CDOTABaseAbility::GetCaster(this)->m_bIsIllusion.m_Value )
  {
    this->m_bCreateMonkeys = 0;
  }
  else
  {
    this->m_bCreateMonkeys = 1;
    v4 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      v6 = v4->m_flCurrentTime + 1.0;
    }
    else
    {
      v6 = 1.0;
    }
    this->m_flNextCreationTime = v6;
  }
}


// CDOTA_Ability_MonkeyKing_FurArmy::Think  (line 3761, @0x0000000002c7db90, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetClassNameAsCStr, GetClassname, GetEHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetModifier_Constant_First, GetOwnerEntity, GetSerialNumber, GetTeamNumber, GrowMemory, IndexToIdentity, Init, IsListeningToEvent, IsTempestDouble, LookupEntity, Set, String, curtime, operator[]
// calls: CDOTABaseAbility::GetCaster, CDOTA_ModifierManager::GetModifier_Constant_First_Internal, CBaseEntity::SetNextThink, CDOTABaseAbility::Think, DevMsg(char const*,...), CBaseEntity::GetAbsOrigin, DOTA_Character_ScriptSpawn_Synchronous, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CUtlMemory<CHandle<CBaseEntity>, int>::Grow (14 total)
// strings: "Creating monkey at %f\n", "modifier_monkey_king_fur_army_soldier_hidden"
void __fastcall CDOTA_Ability_MonkeyKing_FurArmy::Think(CDOTA_Ability_MonkeyKing_FurArmy *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  double v3; // xmm0_8
  __int64 v4; // rdx
  double v5; // xmm1_8
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v7; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CDOTA_BaseNPC *v9; // rax
  unsigned __int16 v10; // dx
  int v11; // esi
  CBaseEntity *m_pInstance; // r13
  int v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  int m_Value; // r14d
  CDOTA_BaseNPC *v17; // rax
  Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v19; // rax
  const char *m_pAsString; // rdi
  CEntityIdentity *m_pEntity; // rax
  CDOTA_BaseNPC *v22; // r13
  float v23; // xmm1_4
  CDOTA_BaseNPC *v24; // rax
  CEntityIdentity *v25; // rax
  __int16 v26; // cx
  __int64 m_Size; // r13
  int v28; // eax
  int v29; // edx
  CHandle<CBaseEntity> *m_pMemory; // rax
  CHandle<CBaseEntity> *v31; // rax
  float v32; // [rsp+Ch] [rbp-54h]
  int v33; // [rsp+10h] [rbp-50h]
  KeyValues kv; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v35; // [rsp+38h] [rbp-28h]

  v35 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = Caster->m_ModifierManager.m_buffsForModifiers[166];
  if ( v4 == 0xFF
    || Caster->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v4].m_Size <= 0
    || (*&v3 = CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
                 &Caster->m_ModifierManager,
                 modifierfunction::MODIFIER_PROPERTY_TEMPEST_DOUBLE,
                 &CModifierParams::s_Default),
        *&v3 != 1.0) )
  {
    if ( this->m_vecSoldiers.m_Size > 13 )
      this->m_bCreateMonkeys = 0;
    m_flCurrentTime = 0.0;
    v7 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, v3, 0.0);
      }
      m_flCurrentTime = v7->m_flCurrentTime;
    }
    if ( this->m_bCreateMonkeys && m_flCurrentTime >= this->m_flNextCreationTime )
    {
      v32 = m_flCurrentTime;
      DevMsg("Creating monkey at %f\n", m_flCurrentTime);
      this->m_flNextCreationTime = v32 + 1.0;
      v9 = CDOTABaseAbility::GetCaster(this);
      if ( v9->m_hOwnerEntity.m_Value.m_Index == -1 )
      {
        v10 = 0x7FFF;
        v11 = 0x7FFF;
      }
      else
      {
        v10 = v9->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
        v11 = v10;
      }
      m_pInstance = 0;
      v13 = (v9->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v10 & 0x7FFF;
      if ( (v13 + 2) > 1 )
      {
        v14 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v11 >> 9];
        if ( v14 != 0 )
        {
          v15 = &v14[v11 & 0x1FF];
          if ( v15 != 0 && v13 == v15->m_EHandle.m_Index )
            m_pInstance = v15->m_pInstance;
        }
      }
      m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
      v17 = CDOTABaseAbility::GetCaster(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v17);
      v19 = CDOTABaseAbility::GetCaster(this);
      m_pAsString = "";
      m_pEntity = v19->m_pEntity;
      if ( m_pEntity->m_designerName.u.m_Id != 0 )
        m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
      v22 = DOTA_Character_ScriptSpawn_Synchronous(m_pAsString, m_Value, m_pInstance, 0, 0, *AbsOrigin);
      if ( v22 != 0 )
      {
        KeyValues::KeyValues(&kv, "modifier_monkey_king_fur_army_soldier_hidden");
        KeyValues::SetFloat(&kv, "duration", v23);
        v24 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v22, v24, this, "modifier_monkey_king_fur_army_soldier_hidden", &kv, 0);
        v33 = -1;
        v25 = v22->m_pEntity;
        if ( v25 != 0 )
        {
          v26 = 0x7FFF;
          if ( v25->m_EHandle.m_Index != -1 )
            v26 = v25->m_EHandle.m_Index & 0x7FFF;
          v33 = (((v25->m_EHandle.m_Index >> 15) - (v25->m_flags & 1)) << 15) | v26 & 0x7FFF;
        }
        m_Size = this->m_vecSoldiers.m_Size;
        v28 = this->m_vecSoldiers.m_Size;
        if ( m_Size == this->m_vecSoldiers.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_vecSoldiers.m_Memory, 1);
          v28 = this->m_vecSoldiers.m_Size;
        }
        v29 = v28 + 1;
        m_pMemory = this->m_vecSoldiers.m_Memory.m_pMemory;
        this->m_vecSoldiers.m_Size = v29;
        v31 = &m_pMemory[m_Size];
        if ( v31 != 0 )
        {
          v31->m_Index = v33;
          v29 = this->m_vecSoldiers.m_Size;
        }
        if ( v29 == 14 )
          this->m_bCreateMonkeys = 0;
        KeyValues::~KeyValues(&kv);
      }
    }
    CDOTABaseAbility::Think(this);
  }
  else
  {
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v5, 0);
  }
}


// CDOTA_Ability_MonkeyKing_FurArmy::OnUnStolen  (line 3801, @0x0000000002c2e6c0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_obliterate_soldier"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_MonkeyKing_FurArmy::OnUnStolen(CDOTA_Ability_MonkeyKing_FurArmy *const this)
{
  __int64 v1; // r13
  int v2; // r12d
  CHandle<CBaseEntity> *v4; // rdx
  uint32 m_Index; // eax
  __int16 v6; // cx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CDOTA_BaseNPC *m_pInstance; // r15
  float v10; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 i; // [rsp+18h] [rbp-38h]

  v1 = 0;
  v2 = 0;
  for ( i = __readfsqword(0x28u); this->m_vecSoldiers.m_Size > v2; ++v1 )
  {
    v4 = &this->m_vecSoldiers.m_Memory.m_pMemory[v1];
    m_Index = v4->m_Index;
    if ( v4->m_Index + 2 > 1 )
    {
      v6 = v4->m_Index;
      v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v4->m_Index) >> 9) & 0x3F];
      if ( v7 != 0 )
      {
        v8 = &v7[v6 & 0x1FF];
        if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        {
          m_pInstance = v8->m_pInstance;
          if ( v8->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
          {
            KeyValues::KeyValues(&kv, "modifier_obliterate_soldier");
            KeyValues::SetFloat(&kv, "duration", v10);
            Caster = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(m_pInstance, Caster, this, "modifier_obliterate_soldier", &kv, 0);
            KeyValues::~KeyValues(&kv);
          }
        }
      }
    }
    ++v2;
  }
}


// CDOTA_Ability_MonkeyKing_FurArmy::GetCastRange  (line 3819, @0x0000000002c61810, libserver.so)  // inlines: GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "modifier_monkey_king_bounce_perch"
int __fastcall CDOTA_Ability_MonkeyKing_FurArmy::GetCastRange(
        CDOTA_Ability_MonkeyKing_FurArmy *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // r12
  int LevelSpecialValue; // eax
  int v7; // edx

  Caster = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_monkey_king_bounce_perch", 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "cast_range", -1, 0);
  v7 = 0;
  if ( ModifierByName == 0 )
    return LevelSpecialValue;
  return v7;
}


// CDOTA_Ability_MonkeyKing_FurArmy::OnAbilityPhaseStart  (line 3865, @0x0000000002c20d30, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::UnitEmitSound, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CBaseEntity::GetAbsOrigin
// strings: "Hero_MonkeyKing.FurArmy.Channel", "particles/units/heroes/hero_monkey_king/monkey_king_fur_army_cast.vpcf", "attach_hitloc"
bool __fastcall CDOTA_Ability_MonkeyKing_FurArmy::OnAbilityPhaseStart(CDOTA_Ability_MonkeyKing_FurArmy *const this)
{
  CDOTA_Ability_MonkeyKing_FurArmy *v1; // rbx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v5; // rax
  const CBaseAnimating *v6; // r13
  CDOTA_ParticleManager *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v10; // rax
  const CBaseAnimating *v11; // r13
  CDOTA_ParticleManager *v12; // rax

  v1 = this;
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(Caster, "Hero_MonkeyKing.FurArmy.Channel", 0.0, 0, 0);
  v3 = CDOTABaseAbility::GetCaster(v1);
  ParticleManager = GetParticleManager();
  v1->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(
                     ParticleManager,
                     "particles/units/heroes/hero_monkey_king/monkey_king_fur_army_cast.vpcf",
                     2,
                     v3,
                     0,
                     0);
  v5 = CDOTABaseAbility::GetCaster(v1);
  LODWORD(v3) = v1->m_nFXIndex;
  v6 = v5;
  v7 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v7, v3, 0, v6, 1, 0, vec3_invalid, 1);
  v8 = CDOTABaseAbility::GetCaster(v1);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
  v10 = CDOTABaseAbility::GetCaster(v1);
  LODWORD(v1) = v1->m_nFXIndex;
  v11 = v10;
  v12 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v12, v1, 1, v11, 5, "attach_hitloc", *AbsOrigin, 1);
  return 1;
}


// CDOTA_Ability_MonkeyKing_FurArmy::OnAbilityPhaseInterrupted  (line 3882, @0x0000000002c202b0, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTABaseAbility::GetCaster, CBaseEntity::StopSound
// strings: "Hero_MonkeyKing.FurArmy.Channel"
void __fastcall CDOTA_Ability_MonkeyKing_FurArmy::OnAbilityPhaseInterrupted(
        CDOTA_Ability_MonkeyKing_FurArmy *const this)
{
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Caster; // rax

  m_nFXIndex = this->m_nFXIndex;
  if ( m_nFXIndex != -1 )
  {
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 1);
  }
  Caster = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::StopSound(Caster, "Hero_MonkeyKing.FurArmy.Channel");
}


// CDOTA_Ability_MonkeyKing_FurArmy::OnSpellStart  (line 3896, @0x0000000002c61860, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, VectorAdd, VectorMultiply, VectorNormalize2D, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator-, operator=
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCursorPosition, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, VectorNormalize, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat (21 total)
// strings: "particles/units/heroes/hero_monkey_king/monkey_king_fur_army_start.vpcf", "attach_hitloc", "modifier_monkey_king_fur_army_thinker", "vDirX", "vDirY"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_MonkeyKing_FurArmy::OnSpellStart(CDOTA_Ability_MonkeyKing_FurArmy *const this)
{
  int LevelSpecialValue; // r13d
  int v3; // r14d
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rax
  vec_t v6; // xmm1_4
  vec_t v7; // xmm0_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  CDOTA_BaseNPC *v10; // rax
  const Vector *v11; // rax
  CDOTA_BaseNPC *v12; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v14; // r13
  CDOTA_ParticleManager *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  const Vector *v17; // r14
  CDOTA_BaseNPC *v18; // r13
  CDOTA_ParticleManager *v19; // rax
  CDOTA_ParticleManager *v20; // rax
  float v21; // xmm1_4
  float v22; // xmm1_4
  float v23; // xmm1_4
  uint32 m_Index; // eax
  CEntityIdentity *v25; // rdx
  CEntityIdentity *v26; // rdx
  int m_Value; // r13d
  CDOTA_BaseNPC *v28; // rax
  CDOTA_BaseNPC *v29; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v31; // eax
  __int16 v32; // cx
  int m_nFXIndex; // ebx
  CDOTA_ParticleManager *v34; // rax
  CDOTA_BaseNPC *v35; // rax
  const QAngle *AbsAngles; // rax
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTA_Buff *ModifierByName; // rdi
  float vOrigina; // [rsp+14h] [rbp-6Ch]
  float vOrigin; // [rsp+14h] [rbp-6Ch]
  float v41; // [rsp+18h] [rbp-68h]
  float v42; // [rsp+18h] [rbp-68h]
  float v43; // [rsp+1Ch] [rbp-64h]
  float v44; // [rsp+1Ch] [rbp-64h]
  Vector vDir; // [rsp+30h] [rbp-50h] BYREF
  KeyValues kv; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v47; // [rsp+58h] [rbp-28h]
  Vector CursorPosition; // 0:kr00_12.12
  Vector v49; // 0:xmm0_8.8,8:xmm1_4.4

  v47 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "cast_range", -1, 0);
  v3 = (*(this->_vptr_IHandleEntity + 228))(this);
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  v6 = CursorPosition.x - AbsOrigin->x;
  v7 = CursorPosition.y - AbsOrigin->y;
  vDir.z = 0.0;
  vDir.x = v6;
  vDir.y = v7;
  v8 = VectorNormalize(&vDir);
  if ( v8 < 0.0099999998 )
  {
    v35 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v35);
    AngleVectors(AbsAngles, &vDir, 0, 0);
    v9 = 1.0;
  }
  else
  {
    v9 = fminf((v3 + LevelSpecialValue), v8);
  }
  v43 = vDir.x * v9;
  v41 = vDir.y * v9;
  vOrigina = v9 * vDir.z;
  v10 = CDOTABaseAbility::GetCaster(this);
  v11 = CBaseEntity::GetAbsOrigin(v10);
  v44 = v43 + v11->x;
  v42 = v41 + v11->y;
  vOrigin = vOrigina + v11->z;
  v12 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v12) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_monkey_king/monkey_king_fur_army_start.vpcf",
                   2,
                   v12,
                   0,
                   0);
  v14 = CDOTABaseAbility::GetCaster(this);
  v15 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v15, v12, 0, v14, 1, 0, vec3_invalid, 1);
  v16 = CDOTABaseAbility::GetCaster(this);
  v17 = CBaseEntity::GetAbsOrigin(v16);
  v18 = CDOTABaseAbility::GetCaster(this);
  v19 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v19, v12, 1, v18, 5, "attach_hitloc", *v17, 1);
  v20 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v20, v12);
  KeyValues::KeyValues(&kv, "modifier_monkey_king_fur_army_thinker");
  CDOTABaseAbility::GetDuration(this);
  KeyValues::SetFloat(&kv, "duration", v21);
  KeyValues::SetFloat(&kv, "vDirX", v22);
  KeyValues::SetFloat(&kv, "vDirY", v23);
  m_Index = this->m_hThinker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hThinker.m_Index) >> 9) & 0x3F];
    if ( v25 != 0 )
    {
      v26 = &v25[this->m_hThinker.m_Index & 0x1FF];
      if ( v26 != 0 && m_Index == v26->m_EHandle.m_Index )
      {
        m_pInstance = v26->m_pInstance;
        if ( v26->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          ModifierByName = CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_monkey_king_fur_army_thinker", 0);
          if ( ModifierByName != 0 )
            CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
        }
      }
    }
  }
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  v28 = CDOTABaseAbility::GetCaster(this);
  *&v49.x = __PAIR64__(LODWORD(v42), LODWORD(v44));
  v49.z = vOrigin;
  v29 = Thinker_Create(v28, this, "modifier_monkey_king_fur_army_thinker", &kv, v49, m_Value, 0, 0, 0);
  if ( v29 != 0 && (m_pEntity = v29->m_pEntity) != 0 )
  {
    v31 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v32 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v32 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hThinker.m_Index) = v32 | this->m_hThinker.m_Index & 0x8000;
    this->m_hThinker.m_Index = (v31 << 15) | this->m_hThinker.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hThinker.m_Index = -1;
  }
  m_nFXIndex = this->m_nFXIndex;
  if ( m_nFXIndex != -1 )
  {
    v34 = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(v34, m_nFXIndex, 0);
  }
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_MonkeyKing_FurArmyThinker::~CDOTA_Modifier_MonkeyKing_FurArmyThinker  (line 3957, @0x0000000002ca1270, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, CUtlMemory<Vector, int>::Purge
void __fastcall CDOTA_Modifier_MonkeyKing_FurArmyThinker::~CDOTA_Modifier_MonkeyKing_FurArmyThinker(
        CDOTA_Modifier_MonkeyKing_FurArmyThinker *const this)
{
  bool v2; // zf
  CUtlVectorBase<Vector,CUtlMemory<Vector,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vTargetPositions.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_45E5E50;
  this->m_vTargetPositions.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_vTargetPositions.m_Memory,
        CUtlMemory<Vector,int>::Purge(&this->m_vTargetPositions.m_Memory),
        (this->m_vTargetPositions.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<Vector,int>::Purge(p_m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_MonkeyKing_FurArmyThinker::~CDOTA_Modifier_MonkeyKing_FurArmyThinker  (line 3957, @0x0000000002ca12e0, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Modifier_MonkeyKing_FurArmyThinker, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<Vector, int>::Purge
void __fastcall CDOTA_Modifier_MonkeyKing_FurArmyThinker::~CDOTA_Modifier_MonkeyKing_FurArmyThinker(
        CDOTA_Modifier_MonkeyKing_FurArmyThinker *const this)
{
  bool v2; // zf
  CUtlVectorBase<Vector,CUtlMemory<Vector,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vTargetPositions.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_45E5E50;
  this->m_vTargetPositions.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_vTargetPositions.m_Memory;
    CUtlMemory<Vector,int>::Purge(&this->m_vTargetPositions.m_Memory);
    if ( (this->m_vTargetPositions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(p_m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_MonkeyKing_FurArmyThinker::IsHidden  (line 3962, @0x0000000002c8b1a0, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_FurArmyThinker::IsHidden(
        CDOTA_Modifier_MonkeyKing_FurArmyThinker *const this)
{
  return 1;
}


// CDOTA_Modifier_MonkeyKing_FurArmyThinker::OnCreated  (line 3995, @0x0000000002c859b0, libserver.so)  // inlines: DOTAGameRules, GetGameTime, Vector, operator=
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, KeyValues::GetFloat, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, CDOTA_Modifier_MonkeyKing_FurArmyThinker::CreateSoldierPositions, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, CDOTA_Buff::CreateBuffParticleEffect, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::SetParticleControl (17 total)
// strings: "first_radius", "num_first_soldiers", "second_radius", "num_second_soldiers", "modifier_monkey_king_fur_army_bonus_damage", "particles/units/heroes/hero_monkey_king/monkey_king_furarmy_ring.vpcf" (7 total)
void __fastcall CDOTA_Modifier_MonkeyKing_FurArmyThinker::OnCreated(
        CDOTA_Modifier_MonkeyKing_FurArmyThinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  float v8; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  float v10; // xmm0_4
  int num_second_soldiers; // edx
  int second_radius; // esi
  CDOTABaseAbility *v13; // r14
  CDOTA_BaseNPC *v14; // r13
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v19; // rax
  float v20; // xmm1_4
  CDOTA_BaseNPC *v21; // rax
  double v22; // [rsp+0h] [rbp-50h]
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-28h]

  v24 = __readfsqword(0x28u);
  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->first_radius, "first_radius");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->num_first_soldiers, "num_first_soldiers");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &this->second_radius, "second_radius");
  v7 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v7, &this->num_second_soldiers, "num_second_soldiers");
  this->m_nSoldiersCreated = 0;
  this->m_fDuration = KeyValues::GetFloat(pKV, "duration", v8);
  Caster = CDOTA_Buff::GetCaster(this);
  this->m_vInitialPos = *CBaseEntity::GetAbsOrigin(Caster);
  v10 = 0.0;
  if ( g_pGameRules != 0 )
    v10 = *&g_pGameRules[18].m_szQuestName[20];
  num_second_soldiers = this->num_second_soldiers;
  second_radius = this->second_radius;
  this->m_fTimeThinkerCreated = v10;
  CDOTA_Modifier_MonkeyKing_FurArmyThinker::CreateSoldierPositions(this, second_radius, num_second_soldiers);
  CDOTA_Modifier_MonkeyKing_FurArmyThinker::CreateSoldierPositions(this, this->first_radius, this->num_first_soldiers);
  KeyValues::KeyValues(&kv, "modifier_monkey_king_fur_army_bonus_damage");
  v13 = CDOTA_Buff::GetAbility(this);
  v14 = CDOTA_Buff::GetCaster(this);
  v15 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v15, v14, v13, "modifier_monkey_king_fur_army_bonus_damage", &kv, 0);
  this->m_nRingFXIndex = CDOTA_Buff::CreateBuffParticleEffect(
                           this,
                           "particles/units/heroes/hero_monkey_king/monkey_king_furarmy_ring.vpcf",
                           8,
                           0,
                           0);
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  LODWORD(v13) = this->m_nRingFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, v13, 0, *&AbsOrigin->x, AbsOrigin->z);
  LODWORD(AbsOrigin) = this->m_nRingFXIndex;
  *&v22 = this->second_radius;
  *(&v22 + 1) = *&v22;
  v19 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v19, AbsOrigin, 1, v22, *&v22);
  (*(this->_vptr_CDOTA_Buff + 56))(this);
  CDOTA_Buff::StartIntervalThink(this, 0.0099999998, v20);
  v21 = CDOTA_Buff::GetCaster(this);
  DOTA_EmitSound(2, "Hero_MonkeyKing.FurArmy", v21);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_MonkeyKing_FurArmyThinker::OnDestroy  (line 4029, @0x0000000002c20e50, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::UnitEmitSound, CBaseEntity::StopSound, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_Buff::GetParent, UTIL_Remove
// strings: "Hero_MonkeyKing.FurArmy.End", "Hero_MonkeyKing.FurArmy", "modifier_monkey_king_fur_army_bonus_damage"
void __fastcall CDOTA_Modifier_MonkeyKing_FurArmyThinker::OnDestroy(
        CDOTA_Modifier_MonkeyKing_FurArmyThinker *const this)
{
  int m_nRingFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  int v4; // r12d
  CDOTA_ParticleManager *v5; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *Parent; // rax

  m_nRingFXIndex = this->m_nRingFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nRingFXIndex, 0);
  v4 = this->m_nRingFXIndex;
  v5 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v5, v4);
  Caster = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(Caster, "Hero_MonkeyKing.FurArmy.End", 0.0, 0, 0);
  v7 = CDOTA_Buff::GetCaster(this);
  CBaseEntity::StopSound(v7, "Hero_MonkeyKing.FurArmy");
  v8 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v8, "modifier_monkey_king_fur_army_bonus_damage");
  Parent = CDOTA_Buff::GetParent(this);
  UTIL_Remove(Parent);
  this->m_nSoldiersCreated = 0;
}


// CDOTA_Modifier_MonkeyKing_FurArmyThinker::OnIntervalThink  (line 4048, @0x0000000002c7a1d0, libserver.so)  // inlines: DOTAGameRules, DotaRetrieveAbilityValue<int>, FastSqrt, GetGameTime, GetLevelSpecialValueFor<int>, Length2D, Remove, ShiftElementsLeft, V_memmove, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, memmove, operator-
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetCaster, CDOTA_Modifier_MonkeyKing_FurArmyThinker::CreateSoldier, CDOTA_Buff::Destroy, memmove
// strings: "leadership_radius"
void __fastcall CDOTA_Modifier_MonkeyKing_FurArmyThinker::OnIntervalThink(
        CDOTA_Modifier_MonkeyKing_FurArmyThinker *const this)
{
  int LevelSpecialValue; // r13d
  CDOTABaseAbility *Ability; // rax
  float v4; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *Caster; // rax
  const Vector *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  int m_Size; // eax
  Vector *m_pMemory; // rdi
  int v12; // edx
  int v13; // eax
  CGameRules *v14; // rax
  float v15; // xmm0_4
  CDOTA_BaseNPC *v16; // rax
  Vector vTargetPos; // [rsp+10h] [rbp-30h]

  LevelSpecialValue = 0;
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "leadership_radius", -1, 0);
  v4 = 0.0;
  if ( g_pGameRules != 0 )
    v4 = *&g_pGameRules[18].m_szQuestName[20];
  if ( (v4 - this->m_fTimeThinkerCreated) > 1.0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
    Caster = CDOTA_Buff::GetCaster(this);
    v8 = CBaseEntity::GetAbsOrigin(Caster);
    if ( fsqrt(((v8->x - AbsOrigin->x) * (v8->x - AbsOrigin->x)) + ((v8->y - AbsOrigin->y) * (v8->y - AbsOrigin->y))) > LevelSpecialValue )
      CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
  v9 = CDOTA_Buff::GetCaster(this);
  if ( (*(v9->_vptr_IHandleEntity + 408))(v9) == 0 )
  {
    v16 = CDOTA_Buff::GetCaster(this);
    if ( (*(v16->_vptr_IHandleEntity + 438))(v16) == 0 )
      CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
  m_Size = this->m_vTargetPositions.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_vTargetPositions.m_Memory.m_pMemory;
    vTargetPos = *m_pMemory;
    v12 = 0;
    v13 = m_Size - 1;
    if ( v13 != 0 )
    {
      memmove(m_pMemory, &m_pMemory[1], 12LL * v13);
      v12 = this->m_vTargetPositions.m_Size - 1;
    }
    v14 = g_pGameRules;
    this->m_vTargetPositions.m_Size = v12;
    v15 = 0.0;
    if ( v14 != 0 )
      v15 = *&v14[18].m_szQuestName[20];
    CDOTA_Modifier_MonkeyKing_FurArmyThinker::CreateSoldier(
      this,
      this->m_vInitialPos,
      vTargetPos,
      (this->m_fTimeThinkerCreated - v15) + this->m_fDuration,
      this->m_nSoldiersCreated);
    ++this->m_nSoldiersCreated;
  }
}


// CDOTA_Modifier_MonkeyKing_FurArmyThinker::CreateSoldier  (line 4081, @0x0000000002c797a0, libserver.so)  // inlines: CEntityHandle, CHandle, FStrEq, Get, GetAbilityName, GetBaseAgility, GetBaseIntellect, GetBaseStrength, GetClassNameAsCStr, GetClassname, GetEHandle, GetEntryIndex, GetInstance, GetOwnerEntity, GetPlayerOwnerID, GetSerialNumber, GetTeamNumber, IsCombineLocked, Lerp<Vector>, NetworkStateChanged, NormalizeInPlace, Set, SetAbilityPoints, SetBaseAgility, SetBaseIntellect, SetBaseStrength, SetCombineLocked, SetIsClonedItemProxy, SetPlayerOwnerID, SetSelectionRingVisibility, SetShareability, String, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorAdd, VectorMultiply, VectorSubtract, _V_strcmp, operator CBaseEntity*, operator*, operator+, operator-, operator=<bool>, operator=<float>, operator=<int>
// calls: CDOTA_Buff::GetAbility, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::GetCaster, FindClearSpaceForUnit, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetParent, KeyValues::SetPtr, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::GetAbilityCount (32 total)
// callers: CDOTA_Modifier_MonkeyKing_FurArmyThinker::OnIntervalThink
// strings: "modifier_monkey_king_fur_army_soldier_hidden", "modifier_monkey_king_fur_army_soldier", "vPosX", "vPosY", "vPosZ", "<NoAbilityName>" (11 total)
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_Modifier_MonkeyKing_FurArmyThinker::CreateSoldier(
        CDOTA_Modifier_MonkeyKing_FurArmyThinker *const this,
        Vector vSpawnPos,
        Vector vTargetPos,
        float fSoldierDuration,
        int nSoldiersCreated)
{
  __int64 v5; // r15
  float x; // r13d
  CDOTABaseAbility *Ability; // rax
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *v9; // rbx
  CEntityInstance *v10; // rax
  CDOTA_BaseNPC_Hero *v11; // r15
  CDOTA_BaseNPC *v12; // rax
  float *v13; // r12
  float v14; // xmm1_4
  float v15; // xmm1_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *v19; // rbx
  CDOTA_BaseNPC *v20; // rax
  void (__fastcall *v21)(CDOTA_BaseNPC_Hero *, _QWORD); // rbx
  CDOTA_BaseNPC *v22; // rax
  float v23; // ebx
  float v24; // ebx
  float v25; // ebx
  int i; // r13d
  CDOTA_BaseNPC *v27; // rax
  CDOTA_BaseNPC *v28; // rax
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTABaseAbility *v30; // r12
  DOTAAbilityData_t *v31; // rax
  const char *v32; // rsi
  const char *m_pszAbilityName; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v35; // rbx
  const char **v36; // rax
  const char *v37; // rsi
  CDOTA_BaseNPC *v38; // rax
  CDOTA_Buff *ModifierByName; // rbx
  CDOTA_BaseNPC *v40; // rax
  CDOTA_BaseNPC_Hero *v41; // rsi
  const Vector *AbsOrigin; // rax
  float v43; // xmm1_4
  float v44; // xmm0_4
  vec_t v45; // xmm0_4
  int j; // ebx
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // r12
  CDOTA_UnitInventory *v49; // rax
  int k; // ebx
  char *v51; // rsi
  CDOTA_BaseNPC *v52; // rax
  CDOTA_UnitInventory *v53; // rax
  CDOTA_Item *v54; // rax
  CDOTA_Item *v55; // r12
  char **m_pAbilityData; // rax
  int v57; // r13d
  CDOTA_BaseNPC *v58; // rax
  int v59; // eax
  const char **p_m_pszAbilityName; // rcx
  const char *v61; // rdi
  CDOTA_Item *Item; // r13
  CDOTA_BaseNPC *v63; // rax
  CDOTA_UnitInventory *v64; // rax
  CDOTA_BaseNPC *Caster; // rax
  CBaseEntity *HandleEntity; // r15
  int m_Value; // r12d
  CDOTA_BaseNPC *v68; // rax
  const char *m_pAsString; // rdi
  CEntityIdentity *m_pEntity; // rax
  CDOTA_BaseNPC *v71; // rax
  CEntityIdentity *v72; // rdx
  __int16 v73; // cx
  float v74; // xmm1_4
  CDOTABaseAbility *v75; // rbx
  CDOTA_BaseNPC *v76; // rax
  float y; // [rsp+18h] [rbp-C8h]
  float z; // [rsp+1Ch] [rbp-C4h]
  int v79; // [rsp+1Ch] [rbp-C4h]
  int v80; // [rsp+1Ch] [rbp-C4h]
  int v81; // [rsp+1Ch] [rbp-C4h]
  int v82; // [rsp+1Ch] [rbp-C4h]
  bool v83; // [rsp+1Ch] [rbp-C4h]
  Vector vFaceDirection; // [rsp+40h] [rbp-A0h] BYREF
  QAngle angles; // [rsp+50h] [rbp-90h] BYREF
  Vector hSoldier; // [rsp+60h] [rbp-80h] OVERLAPPED BYREF
  KeyValues kv; // [rsp+70h] [rbp-70h] BYREF
  KeyValues kv2; // [rsp+90h] [rbp-50h] BYREF
  unsigned __int64 v89; // [rsp+A8h] [rbp-38h]

  v5 = nSoldiersCreated;
  z = vTargetPos.z;
  v89 = __readfsqword(0x28u);
  x = vTargetPos.x;
  y = vTargetPos.y;
  Ability = CDOTA_Buff::GetAbility(this);
  v9 = Ability;
  if ( Ability == 0 || SLODWORD(Ability[1].m_iszPrivateVScripts.u.m_Id) <= v5 )
    goto LABEL_74;
  hSoldier.x = *(*&Ability[1].m_worldGroupId.m_nHashCode + 4 * v5);
  v10 = CEntityHandle::operator CEntityInstance *(&hSoldier);
  v11 = v10;
  if ( v10 == 0 || BYTE3(v10[7]._vptr_IHandleEntity) == 0 || (v10[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
    v11 = 0;
  if ( CDOTA_BaseNPC::FindModifierByName(v11, "modifier_monkey_king_fur_army_soldier_hidden", 0) == 0 || v11 == 0 )
  {
LABEL_74:
    Caster = CDOTA_Buff::GetCaster(this);
    HandleEntity = CEntityHandle::GetHandleEntity(&Caster->m_hOwnerEntity.m_Value);
    m_Value = CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value;
    hSoldier.x = ((x - vSpawnPos.x) * 0.1) + vSpawnPos.x;
    hSoldier.y = ((y - vSpawnPos.y) * 0.1) + vSpawnPos.y;
    hSoldier.z = ((z - vSpawnPos.z) * 0.1) + vSpawnPos.z;
    v68 = CDOTA_Buff::GetCaster(this);
    m_pAsString = "";
    m_pEntity = v68->m_pEntity;
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    v71 = DOTA_Character_ScriptSpawn_Synchronous(m_pAsString, m_Value, HandleEntity, 0, 0, hSoldier);
    v11 = v71;
    if ( v71 != 0 )
    {
      if ( (v71->m_iUnitType & 1) != 0 )
      {
        if ( v9 != 0 )
        {
          angles.x = NAN;
          v72 = v71->m_pEntity;
          if ( v72 != 0 )
          {
            v73 = 0x7FFF;
            if ( v72->m_EHandle.m_Index != -1 )
              v73 = v72->m_EHandle.m_Index & 0x7FFF;
            LODWORD(angles.x) = (((v72->m_EHandle.m_Index >> 15) - (v72->m_flags & 1)) << 15) | v73 & 0x7FFF;
          }
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::AddToTail(v9 + 39, &angles);
        }
      }
      else
      {
        v11 = 0;
      }
    }
  }
  v12 = CDOTA_Buff::GetCaster(this);
  v13 = v12;
  if ( v12 != 0 && (v12->m_iUnitType & 1) != 0 && v11 != 0 )
  {
    FindClearSpaceForUnit(v11, vSpawnPos, 1);
    KeyValues::KeyValues(&kv, "modifier_monkey_king_fur_army_soldier");
    KeyValues::SetFloat(&kv, "duration", v14);
    KeyValues::SetFloat(&kv, "vPosX", v15);
    KeyValues::SetFloat(&kv, "vPosY", v16);
    KeyValues::SetFloat(&kv, "vPosZ", v17);
    Parent = CDOTA_Buff::GetParent(this);
    if ( Parent == 0 || !Parent->m_bIsDOTANPC )
      Parent = 0;
    KeyValues::SetPtr(&kv, "thinker", Parent);
    CDOTA_BaseNPC::RemoveModifierByName(v11, "modifier_monkey_king_fur_army_soldier_hidden");
    v19 = CDOTA_Buff::GetAbility(this);
    v20 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v11, v20, v19, "modifier_monkey_king_fur_army_soldier", &kv, 0);
    v21 = *(v11->_vptr_IHandleEntity + 388);
    v22 = CDOTA_Buff::GetCaster(this);
    v21(v11, v22->m_iCurrentLevel.m_Value);
    v23 = v13[1158];
    if ( v23 != v11->m_flStrength.m_Value )
    {
      (*(v11->_vptr_IHandleEntity + 22))(v11, 4632, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v11->m_flStrength.m_Value = v23;
    }
    v24 = v13[1159];
    if ( v24 != v11->m_flAgility.m_Value )
    {
      (*(v11->_vptr_IHandleEntity + 22))(v11, 4636, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v11->m_flAgility.m_Value = v24;
    }
    v25 = v13[1160];
    if ( v25 != v11->m_flIntellect.m_Value )
    {
      (*(v11->_vptr_IHandleEntity + 22))(v11, 4640, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v11->m_flIntellect.m_Value = v25;
    }
    for ( i = 0; ; ++i )
    {
      v27 = CDOTA_Buff::GetCaster(this);
      if ( i >= CDOTA_BaseNPC::GetAbilityCount(v27) )
      {
        for ( j = 0; j != 9; ++j )
        {
          Inventory = CDOTA_BaseNPC::GetInventory(v11);
          ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, j);
          if ( ItemInSlot != 0 )
          {
            v49 = CDOTA_BaseNPC::GetInventory(v11);
            CDOTA_UnitInventory::RemoveItem(v49, ItemInSlot, 1, 0);
          }
        }
        for ( k = 0; k != 9; ++k )
        {
          v52 = CDOTA_Buff::GetCaster(this);
          v53 = CDOTA_BaseNPC::GetInventory(v52);
          v54 = CDOTA_UnitInventory::GetItemInSlot(v53, k);
          v55 = v54;
          if ( v54 != 0 )
          {
            m_pAbilityData = v54->m_pAbilityData;
            if ( m_pAbilityData == 0
              || (v51 = *m_pAbilityData, *m_pAbilityData == 0)
              || v51 != "item_aegis" && strcmp(v51, "item_aegis") != 0 )
            {
              v57 = v55->m_iPlayerOwnerID.m_Value;
              v58 = CDOTA_Buff::GetCaster(this);
              if ( (*(v58->_vptr_IHandleEntity + 414))(v58) == v57 || (*(v55->_vptr_IHandleEntity + 355))(v55) != 2 )
              {
                v59 = (*(v11->_vptr_IHandleEntity + 414))(v11);
                p_m_pszAbilityName = &v55->m_pAbilityData->m_pszAbilityName;
                v61 = "<NoAbilityName>";
                if ( p_m_pszAbilityName != 0 && *p_m_pszAbilityName != 0 )
                  v61 = *p_m_pszAbilityName;
                Item = DOTA_CreateItem(v61, v11, v59);
                if ( Item != 0 )
                {
                  v79 = v55->m_iPlayerOwnerID.m_Value;
                  v63 = CDOTA_Buff::GetCaster(this);
                  if ( (*(v63->_vptr_IHandleEntity + 414))(v63) != v79 )
                  {
                    v80 = v55->m_iPlayerOwnerID.m_Value;
                    if ( v80 != Item->m_iPlayerOwnerID.m_Value )
                    {
                      (*(Item->_vptr_IHandleEntity + 22))(Item, 988, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                      Item->m_iPlayerOwnerID.m_Value = v80;
                    }
                  }
                  v81 = (*(v55->_vptr_IHandleEntity + 355))(v55);
                  if ( v81 != (*(Item->_vptr_IHandleEntity + 355))(Item) )
                  {
                    v82 = (*(v55->_vptr_IHandleEntity + 355))(v55);
                    if ( v82 != Item->m_iSharability.m_Value )
                    {
                      (*(Item->_vptr_IHandleEntity + 22))(Item, 924, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                      Item->m_iSharability.m_Value = v82;
                    }
                  }
                  v83 = v55->m_bCombineLocked.m_Value;
                  if ( v83 != Item->m_bCombineLocked.m_Value )
                  {
                    (*(Item->_vptr_IHandleEntity + 22))(Item, 980, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                    Item->m_bCombineLocked.m_Value = v83;
                  }
                  v64 = CDOTA_BaseNPC::GetInventory(v11);
                  CDOTA_UnitInventory::AddItem(v64, Item, 1, k, 0, 1);
                  (*(Item->_vptr_IHandleEntity + 343))(Item, v55);
                  Item->m_bIsClonedItemProxy = 1;
                }
              }
            }
          }
        }
        v38 = CDOTA_Buff::GetCaster(this);
        ModifierByName = CDOTA_BaseNPC::FindModifierByName(v38, "modifier_item_ultimate_scepter_consumed", 0);
        if ( ModifierByName != 0
          && CDOTA_BaseNPC::FindModifierByName(v11, "modifier_item_ultimate_scepter_consumed", 0) == 0 )
        {
          KeyValues::KeyValues(&kv2, "modifier_item_ultimate_scepter_consumed");
          KeyValues::SetFloat(&kv, "duration", v74);
          KeyValues::SetInt(&kv, "bonus_all_stats", 10);
          KeyValues::SetInt(&kv, "bonus_health", 175);
          KeyValues::SetInt(&kv, "bonus_mana", 175);
          v75 = CDOTA_Buff::GetAbility(ModifierByName);
          v76 = CDOTA_Buff::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(v11, v76, v75, "modifier_item_ultimate_scepter_consumed", &kv2, 0);
          KeyValues::~KeyValues(&kv2);
        }
        if ( v11->m_iAbilityPoints.m_Value != 0 )
        {
          (*(v11->_vptr_IHandleEntity + 22))(v11, 4772, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          v11->m_iAbilityPoints.m_Value = 0;
        }
        (*(v11->_vptr_IHandleEntity + 490))(v11);
        v40 = CDOTA_Buff::GetCaster(this);
        if ( v40 != 0 && (v40->m_iUnitType & 1) != 0 )
          v41 = v40;
        else
          v41 = 0;
        CDOTA_BaseNPC_Hero::ReplicateModelFromOtherHero(v11, v41);
        if ( v11->m_bSelectionRingVisible.m_Value )
        {
          (*(v11->_vptr_IHandleEntity + 22))(v11, 2096, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          v11->m_bSelectionRingVisible.m_Value = 0;
        }
        AbsOrigin = CBaseEntity::GetAbsOrigin(v11);
        v43 = AbsOrigin->x;
        v44 = AbsOrigin->y;
        vFaceDirection.z = 0.0;
        v45 = v44 - this->m_vInitialPos.y;
        vFaceDirection.x = v43 - this->m_vInitialPos.x;
        vFaceDirection.y = v45;
        VectorNormalize(&vFaceDirection);
        VectorAngles(&vFaceDirection, &angles);
        angles.x = 0.0;
        angles.z = 0.0;
        CBaseEntity::SetAbsAngles(v11, &angles);
        KeyValues::~KeyValues(&kv);
        return;
      }
      v28 = CDOTA_Buff::GetCaster(this);
      AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(v28, i);
      v30 = AbilityByIndex;
      if ( AbilityByIndex != 0 )
      {
        v31 = AbilityByIndex->m_pAbilityData;
        v32 = "<NoAbilityName>";
        if ( v31 != 0 )
        {
          m_pszAbilityName = v31->m_pszAbilityName;
          if ( m_pszAbilityName != 0 )
            v32 = m_pszAbilityName;
        }
        AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v11, v32, 0);
        v35 = AbilityByName;
        if ( AbilityByName != 0 )
        {
          v36 = &AbilityByName->m_pAbilityData->m_pszAbilityName;
          if ( v36 == 0 )
            goto LABEL_33;
          v37 = *v36;
          if ( *v36 == 0 )
            goto LABEL_33;
          if ( v37 != "monkey_king_wukongs_command"
            && strcmp(v37, "monkey_king_wukongs_command") != 0
            && v35->m_iLevel.m_Value < v30->m_iLevel.m_Value )
          {
            break;
          }
        }
      }
LABEL_20:
      ;
    }
    while ( 1 )
    {
      CDOTABaseAbility::UpgradeAbility(v35, 0);
LABEL_33:
      if ( v35->m_iLevel.m_Value >= v30->m_iLevel.m_Value )
        goto LABEL_20;
    }
  }
}


// CDOTA_Modifier_MonkeyKing_FurArmyThinker::CreateSoldierPositions  (line 4220, @0x0000000002c85840, libserver.so)  // inlines: AddToTail, CopyConstruct<Vector>, Element, GrowMemory, VectorAdd, operator+, operator[]
// calls: sincos, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, GetGroundHeight, CUtlMemory<Vector, int>::Grow
// callers: CDOTA_Modifier_MonkeyKing_FurArmyThinker::OnCreated
void __fastcall CDOTA_Modifier_MonkeyKing_FurArmyThinker::CreateSoldierPositions(
        CDOTA_Modifier_MonkeyKing_FurArmyThinker *const this,
        int nRadius,
        int nSoldiers)
{
  int v5; // r12d
  Vector *v6; // rax
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  float v9; // xmm0_4
  vec_t v10; // xmm0_4
  float v11; // xmm1_4
  vec_t v12; // xmm1_4
  float GroundHeight; // xmm0_4
  __int64 m_Size; // rax
  int v15; // esi
  CUtlVectorBase<Vector,CUtlMemory<Vector,int> >::CAllocator *p_m_Memory; // [rsp+0h] [rbp-80h]
  double v17; // [rsp+10h] [rbp-70h]
  double v18; // [rsp+18h] [rbp-68h]
  double v19; // [rsp+20h] [rbp-60h]
  double v20; // [rsp+28h] [rbp-58h]
  int v21; // [rsp+28h] [rbp-58h]
  double cosx; // [rsp+30h] [rbp-50h] BYREF
  double sinx; // [rsp+38h] [rbp-48h] BYREF
  Vector vSoldierPos; // [rsp+40h] [rbp-40h] BYREF

  if ( nSoldiers > 0 )
  {
    v5 = 0;
    v18 = nRadius;
    v17 = nSoldiers;
    p_m_Memory = &this->m_vTargetPositions.m_Memory;
    do
    {
      sincos(v5 * 6.283185307179586 / v17, &sinx, &cosx);
      v19 = cosx;
      v20 = sinx;
      Parent = CDOTA_Buff::GetParent(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
      v9 = v19 * v18;
      v10 = v9 + AbsOrigin->y;
      v11 = v20 * v18;
      v12 = v11 + AbsOrigin->x;
      vSoldierPos.z = AbsOrigin->z + 0.0;
      vSoldierPos.y = v10;
      vSoldierPos.x = v12;
      GroundHeight = GetGroundHeight(&vSoldierPos, 0);
      m_Size = this->m_vTargetPositions.m_Size;
      vSoldierPos.z = GroundHeight;
      v15 = m_Size;
      if ( m_Size == this->m_vTargetPositions.m_Memory.m_nAllocationCount )
      {
        v21 = m_Size;
        CUtlMemory<Vector,int>::Grow(p_m_Memory, 1);
        v15 = this->m_vTargetPositions.m_Size;
        m_Size = v21;
      }
      this->m_vTargetPositions.m_Size = v15 + 1;
      v6 = &this->m_vTargetPositions.m_Memory.m_pMemory[m_Size];
      if ( v6 != 0 )
        *v6 = vSoldierPos;
      ++v5;
    }
    while ( v5 != nSoldiers );
  }
}


// CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::~CDOTA_Modifier_MonkeyKing_FurArmy_Soldier  (line 4245, @0x0000000002c91790, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::~CDOTA_Modifier_MonkeyKing_FurArmy_Soldier(
        CDOTA_Modifier_MonkeyKing_FurArmy_Soldier *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E6170;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::~CDOTA_Modifier_MonkeyKing_FurArmy_Soldier  (line 4245, @0x0000000002c917b0, libserver.so)  // inlines: ~CDOTA_Modifier_MonkeyKing_FurArmy_Soldier
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::~CDOTA_Modifier_MonkeyKing_FurArmy_Soldier(
        CDOTA_Modifier_MonkeyKing_FurArmy_Soldier *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E6170;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::IsHidden  (line 4250, @0x0000000002c8b1b0, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::IsHidden(
        CDOTA_Modifier_MonkeyKing_FurArmy_Soldier *const this)
{
  return 1;
}


// CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::IsPurgable  (line 4252, @0x0000000002c8b1c0, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::IsPurgable(
        CDOTA_Modifier_MonkeyKing_FurArmy_Soldier *const this)
{
  return 0;
}


// CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::RemoveOnDeath  (line 4253, @0x0000000002c8b1d0, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::RemoveOnDeath(
        CDOTA_Modifier_MonkeyKing_FurArmy_Soldier *const this)
{
  return 1;
}


// CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::GetPriority  (line 4255, @0x0000000002c8b1e0, libserver.so)
int __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::GetPriority(
        CDOTA_Modifier_MonkeyKing_FurArmy_Soldier *const this)
{
  return 2;
}


// CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::DeclareFunctions  (line 4287, @0x0000000002c1d980, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::GetModifierAttackRangeBonus(CModifierParams const&), CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::GetModifierMoveSpeed_Absolute(CModifierParams const&), CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::GetModifierMoveSpeed_Max(CModifierParams const&), CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::GetModifierTranslateActivityModifiers(CModifierParams const&), CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::GetFixedVision(CModifierParams const&), CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::GetModifierTempestDouble(CModifierParams const&), CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::OnDeath(CModifierParams const&)
void __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::DeclareFunctions(
        CDOTA_Modifier_MonkeyKing_FurArmy_Soldier *const this)
{
  this->m_Functions[69].__pfn = CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::GetModifierAttackRangeBonus;
  this->m_Functions[0].__pfn = (&stru_10 + 697);
  this->m_Functions[0].__delta = 0;
  this->m_Functions[18].__pfn = CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::GetModifierMoveSpeed_Absolute;
  this->m_Functions[21].__pfn = CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::GetModifierMoveSpeed_Max;
  this->m_Functions[155].__pfn = CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::GetModifierTranslateActivityModifiers;
  this->m_Functions[100].__pfn = CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::GetFixedVision;
  this->m_Functions[101].__pfn = CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::GetFixedVision;
  this->m_Functions[166].__pfn = CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::GetModifierTempestDouble;
  this->m_Functions[69].__delta = 0;
  this->m_Functions[18].__delta = 0;
  this->m_Functions[21].__delta = 0;
  this->m_Functions[155].__delta = 0;
  this->m_Functions[100].__delta = 0;
  this->m_Functions[101].__delta = 0;
  this->m_Functions[95].__pfn = (&stru_10 + 705);
  this->m_Functions[95].__delta = 0;
  this->m_Functions[166].__delta = 0;
  this->m_Functions[138].__pfn = CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::OnDeath;
  this->m_Functions[138].__delta = 0;
}


// CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::GetModifierPreAttack_BonusDamage  (line 4303, @0x0000000002c1da80, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_MonkeyKing_FurArmy_Soldier *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::GetModifierAttackRangeBonus  (line 4310, @0x0000000002c1daa0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::GetModifierAttackRangeBonus(
        CDOTA_Modifier_MonkeyKing_FurArmy_Soldier *const this,
        const CModifierParams *const params)
{
  return 1uLL;
}


// CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::GetModifierMoveSpeed_Absolute  (line 4317, @0x0000000002c1dab0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::GetModifierMoveSpeed_Absolute(
        CDOTA_Modifier_MonkeyKing_FurArmy_Soldier *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->move_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::GetModifierMoveSpeed_Max  (line 4324, @0x0000000002c1dad0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::GetModifierMoveSpeed_Max(
        CDOTA_Modifier_MonkeyKing_FurArmy_Soldier *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->move_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::GetModifierTranslateActivityModifiers  (line 4331, @0x0000000002c1daf0, libserver.so)
// strings: "fur_army_soldier"
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::GetModifierTranslateActivityModifiers(
        CDOTA_Modifier_MonkeyKing_FurArmy_Soldier *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "fur_army_soldier";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::GetFixedVision  (line 4338, @0x0000000002c1db10, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::GetFixedVision(
        CDOTA_Modifier_MonkeyKing_FurArmy_Soldier *const this,
        const CModifierParams *const params)
{
  return 0x43FA000000000001uLL;
}


// CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::GetDisableAutoAttack  (line 4345, @0x0000000002c1db30, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::GetDisableAutoAttack(
        CDOTA_Modifier_MonkeyKing_FurArmy_Soldier *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::GetModifierTempestDouble  (line 4352, @0x0000000002c1db50, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::GetModifierTempestDouble(
        CDOTA_Modifier_MonkeyKing_FurArmy_Soldier *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::OnDeath  (line 4359, @0x0000000002c1db70, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::OnDeath(
        CDOTA_Modifier_MonkeyKing_FurArmy_Soldier *const this,
        const CModifierParams *const params)
{
  return 1uLL;
}


// CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::OnCreated  (line 4366, @0x0000000002c824d0, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, ClearAlertTarget, ClearAngerTarget, CopyConstruct<CEntityIndex>, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Normalized, Purge, RemoveAll, Reset, Set, VectorMultiply, VectorSubtract, entindex, operator*, operator-, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, KeyValues::GetPtr, KeyValues::GetFloat, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, VectorNormalize, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_BaseNPC::ClearQueuedOrders, CDOTA_BaseNPC::Interrupt (25 total)
// strings: "vPosZ", "vPosY", "vPosX", "particles/units/heroes/hero_monkey_king/monkey_king_fur_army_positions.vpcf", "modifier_monkey_king_fur_army_soldier_inactive"
void __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::OnCreated(
        CDOTA_Modifier_MonkeyKing_FurArmy_Soldier *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  _QWORD *Ptr; // rax
  float v7; // xmm1_4
  __int64 v8; // rdx
  int v9; // eax
  __int16 v10; // cx
  __m128i v11; // xmm0
  vec_t v12; // r13d
  float v13; // xmm1_4
  __m128i v14; // xmm0
  vec_t v15; // r14d
  float v16; // xmm1_4
  vec_t Float; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  vec_t v20; // xmm0_4
  vec_t v21; // xmm1_4
  int BuffParticleEffect; // eax
  int v23; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v29; // rax
  CEntityIndex v30; // eax
  __int64 m_Size; // r12
  int32 m_Data; // r14d
  int v33; // eax
  CEntityIndex *v34; // rdx
  float v35; // xmm3_4
  vec_t v36; // xmm0_4
  float x; // xmm2_4
  CDOTA_BaseNPC *v38; // rax
  CDOTABaseAbility *v39; // r15
  CDOTA_BaseNPC *v40; // r14
  CDOTA_BaseNPC *v41; // rax
  float v42; // xmm1_4
  CUnitOrders newOrders; // [rsp+0h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v45; // [rsp+58h] [rbp-38h]

  v45 = __readfsqword(0x28u);
  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->bonus_damage, "bonus_damage");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->move_speed, "move_speed");
  Ptr = KeyValues::GetPtr(pKV, "thinker", 0);
  if ( Ptr != 0 && (v8 = Ptr[1]) != 0 )
  {
    v9 = (*(v8 + 16) >> 15) - (*(v8 + 48) & 1);
    v10 = 0x7FFF;
    if ( *(v8 + 16) != -1 )
      v10 = *(v8 + 16) & 0x7FFF;
    LOWORD(this->m_hThinker.m_Index) = v10 | this->m_hThinker.m_Index & 0x8000;
    this->m_hThinker.m_Index = (v9 << 15) | this->m_hThinker.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hThinker.m_Index = -1;
  }
  this->m_bIsInPosition = 0;
  *v11.m128i_i32 = KeyValues::GetFloat(pKV, "vPosZ", v7);
  v12 = COERCE_FLOAT(_mm_cvtsi128_si32(v11));
  *v14.m128i_i32 = KeyValues::GetFloat(pKV, "vPosY", v13);
  v15 = COERCE_FLOAT(_mm_cvtsi128_si32(v14));
  Float = KeyValues::GetFloat(pKV, "vPosX", v16);
  this->m_vTargetPos.z = v12;
  this->m_vTargetPos.x = Float;
  this->m_vTargetPos.y = v15;
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v20 = this->m_vTargetPos.y - AbsOrigin->y;
  v21 = this->m_vTargetPos.x - AbsOrigin->x;
  this->m_vDirection.z = 0.0;
  newOrders.m_nUnits.m_Size = 0;
  this->m_vDirection.y = v20;
  this->m_vDirection.x = v21;
  *&newOrders.m_nIssuerPlayerIndex = *&this->m_vDirection.x;
  VectorNormalize(&newOrders);
  *&this->m_vDirection.x = *&newOrders.m_nIssuerPlayerIndex;
  LODWORD(this->m_vDirection.z) = newOrders.m_nUnits.m_Size;
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/units/heroes/hero_monkey_king/monkey_king_fur_army_positions.vpcf",
                         8,
                         0,
                         0);
  this->m_nFXIndex = BuffParticleEffect;
  v23 = BuffParticleEffect;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, v23, 0, *&this->m_vTargetPos.x, this->m_vTargetPos.z);
  v25 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::ClearQueuedOrders(v25);
  CDOTA_Buff::GetParent(this)->m_hAngerTarget.m_Index = -1;
  CDOTA_Buff::GetParent(this)->m_hAlertTarget.m_Index = -1;
  v26 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::Interrupt(v26);
  newOrders.m_nUnits.m_Size = 0;
  memset(&newOrders.m_nUnits.m_Memory, 0, 28);
  newOrders.m_bQueue = 0;
  newOrders.m_vPosition.x = vec3_origin.x;
  y = vec3_origin.y;
  newOrders.m_nOrderSequenceNumber = 0;
  newOrders.m_vPosition.y = y;
  z = vec3_origin.z;
  newOrders.m_nIssuerPlayerIndex = -1;
  newOrders.m_vPosition.z = z;
  v29 = CDOTA_Buff::GetParent(this);
  v30.m_Data = CEntityInstance::GetEntityIndex(v29).m_Data;
  m_Size = newOrders.m_nUnits.m_Size;
  m_Data = v30.m_Data;
  v33 = newOrders.m_nUnits.m_Size;
  if ( newOrders.m_nUnits.m_Size == newOrders.m_nUnits.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CEntityIndex,int>::Grow(&newOrders.m_nUnits.m_Memory, 1);
    v33 = newOrders.m_nUnits.m_Size;
  }
  newOrders.m_nUnits.m_Size = v33 + 1;
  v34 = &newOrders.m_nUnits.m_Memory.m_pMemory[m_Size];
  if ( v34 != 0 )
    v34->m_Data = m_Data;
  newOrders.m_nOrderType = 1;
  while ( !CGridNavBase::IsPositionValidForMovement(&g_GridNav, this->m_vTargetPos) )
  {
    v35 = 50.0 * this->m_vDirection.x;
    v36 = this->m_vTargetPos.z - (50.0 * this->m_vDirection.z);
    x = this->m_vTargetPos.x;
    this->m_vTargetPos.y = this->m_vTargetPos.y - (50.0 * this->m_vDirection.y);
    this->m_vTargetPos.z = v36;
    this->m_vTargetPos.x = x - v35;
  }
  newOrders.m_vPosition = this->m_vTargetPos;
  DOTA_ExecuteOrders(&newOrders, 0, 0, 0);
  v38 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::SetPseudoQueuedOrder(v38, &newOrders);
  KeyValues::KeyValues(&kv, "modifier_monkey_king_fur_army_soldier_inactive");
  v39 = CDOTA_Buff::GetAbility(this);
  v40 = CDOTA_Buff::GetParent(this);
  v41 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::AddNewModifier(v41, v40, v39, "modifier_monkey_king_fur_army_soldier_inactive", &kv, 0);
  CDOTA_Buff::StartIntervalThink(this, 0.1, v42);
  KeyValues::~KeyValues(&kv);
  newOrders.m_nUnits.m_Size = 0;
  if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
    if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
  }
}


// CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::OnDestroy  (line 4417, @0x0000000002c20300, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_ParticleManager::ReleaseParticleIndex, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::RemoveModifierByName, KeyValues::~KeyValues, __stack_chk_fail (13 total)
// strings: "modifier_monkey_king_fur_army_soldier_hidden", "modifier_monkey_king_fur_army_soldier_inactive", "modifier_monkey_king_fur_army_soldier_in_position"
void __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::OnDestroy(
        CDOTA_Modifier_MonkeyKing_FurArmy_Soldier *const this)
{
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  int v4; // r12d
  CDOTA_ParticleManager *v5; // rax
  float v6; // xmm1_4
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-28h]

  v13 = __readfsqword(0x28u);
  m_nFXIndex = this->m_nFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 0);
  v4 = this->m_nFXIndex;
  v5 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v5, v4);
  KeyValues::KeyValues(&kv, "modifier_monkey_king_fur_army_soldier_hidden");
  KeyValues::SetFloat(&kv, "duration", v6);
  Ability = CDOTA_Buff::GetAbility(this);
  Caster = CDOTA_Buff::GetCaster(this);
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::AddNewModifier(Parent, Caster, Ability, "modifier_monkey_king_fur_army_soldier_hidden", &kv, 0);
  v10 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveModifierByName(v10, "modifier_monkey_king_fur_army_soldier_inactive");
  v11 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveModifierByName(v11, "modifier_monkey_king_fur_army_soldier_in_position");
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::CheckState  (line 4444, @0x0000000002c1db80, libserver.so)  // inlines: Disable, Enable
void __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::CheckState(
        CDOTA_Modifier_MonkeyKing_FurArmy_Soldier *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nEnabledStateMask; // rax
  uint64 v3; // rdx

  m_nEnabledStateMask = buffState->m_nEnabledStateMask;
  v3 = buffState->m_nDisabledStateMask & 0xFFFFFFFD7D6FBEFFLL;
  LOBYTE(m_nEnabledStateMask) = buffState->m_nEnabledStateMask & 0x7F;
  LOBYTE(v3) = LOBYTE(buffState->m_nDisabledStateMask) | 0x80;
  buffState->m_nDisabledStateMask = v3;
  buffState->m_nEnabledStateMask = m_nEnabledStateMask | 0x282904100LL;
}


// CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::OnIntervalThink  (line 4462, @0x0000000002c32af0, libserver.so)  // inlines: FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, Length2D, LookupEntity, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator void*, operator-
// calls: CDOTA_Buff::Destroy, __stack_chk_fail, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, KeyValues::KeyValues, KeyValues::SetPtr, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, _Unwind_Resume
// strings: "modifier_monkey_king_fur_army_soldier_in_position"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::OnIntervalThink(
        CDOTA_Modifier_MonkeyKing_FurArmy_Soldier *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  float v7; // xmm1_4
  uint32 v8; // ecx
  CEntityInstance *m_pInstance; // rdx
  unsigned __int64 v10; // rax
  CEntityIdentity *v11; // rdx
  __int64 v12; // rax
  bool v13; // zf
  CEntityIdentity *v14; // rax
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v17; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-28h]

  v19 = __readfsqword(0x28u);
  m_Index = this->m_hThinker.m_Index;
  if ( m_Index + 2 > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hThinker.m_Index) >> 9) & 0x3F]) != 0
    && (v4 = &v3[this->m_hThinker.m_Index & 0x1FF]) != 0
    && m_Index == v4->m_EHandle.m_Index
    && v4->m_pInstance != 0
    && BYTE3(v4->m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    if ( !this->m_bIsInPosition )
    {
      Parent = CDOTA_Buff::GetParent(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
      v7 = this->m_vTargetPos.y - AbsOrigin->y;
      if ( fsqrt(((this->m_vTargetPos.x - AbsOrigin->x) * (this->m_vTargetPos.x - AbsOrigin->x)) + (v7 * v7)) < 30.0 )
      {
        this->m_bIsInPosition = 1;
        KeyValues::KeyValues(&kv, "modifier_monkey_king_fur_army_soldier_in_position");
        v8 = this->m_hThinker.m_Index;
        m_pInstance = 0;
        if ( v8 + 2 > 1 )
        {
          v10 = this->m_hThinker.m_Index & 0x7FFF;
          v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v10 >> 9)];
          if ( v11 != 0 )
          {
            v12 = v10 & 0x1FF;
            v13 = &v11[v12] == 0;
            v14 = &v11[v12];
            m_pInstance = 0;
            if ( !v13 && v8 == v14->m_EHandle.m_Index )
              m_pInstance = v14->m_pInstance;
          }
          else
          {
            m_pInstance = 0;
          }
        }
        KeyValues::SetPtr(&kv, "thinker", m_pInstance);
        Ability = CDOTA_Buff::GetAbility(this);
        Caster = CDOTA_Buff::GetCaster(this);
        v17 = CDOTA_Buff::GetParent(this);
        CDOTA_BaseNPC::AddNewModifier(v17, Caster, Ability, "modifier_monkey_king_fur_army_soldier_in_position", &kv, 0);
        KeyValues::~KeyValues(&kv);
      }
    }
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition::~CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition  (line 4487, @0x0000000002c91740, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition::~CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition(
        CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E64B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition::~CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition  (line 4487, @0x0000000002c91760, libserver.so)  // inlines: ~CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition::~CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition(
        CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E64B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition::IsHidden  (line 4492, @0x0000000002c8b1f0, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition::IsHidden(
        CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition *const this)
{
  return 1;
}


// CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition::IsPurgable  (line 4494, @0x0000000002c8b200, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition::IsPurgable(
        CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition *const this)
{
  return 0;
}


// CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition::RemoveOnDeath  (line 4495, @0x0000000002c8b210, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition::RemoveOnDeath(
        CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition *const this)
{
  return 1;
}


// CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition::OnCreated  (line 4523, @0x0000000002c72db0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, Set, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::GetPtr, CDOTA_Buff::StartIntervalThink
// strings: "second_radius", "outer_attack_buffer"
void __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition::OnCreated(
        CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  _QWORD *Ptr; // rax
  float v8; // xmm1_4
  __int64 v9; // rdx
  int v10; // eax
  __int16 v11; // cx

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "attack_speed", -1, 0);
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_3;
LABEL_12:
    this->second_radius = 0;
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_4;
LABEL_13:
    this->outer_attack_buffer = 0;
    goto LABEL_5;
  }
  this->attack_speed = 0.0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_12;
LABEL_3:
  this->second_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "second_radius", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_13;
LABEL_4:
  this->outer_attack_buffer = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "outer_attack_buffer", -1, 0);
LABEL_5:
  Ptr = KeyValues::GetPtr(pKV, "thinker", 0);
  if ( Ptr != 0 && (v9 = Ptr[1]) != 0 )
  {
    v10 = (*(v9 + 16) >> 15) - (*(v9 + 48) & 1);
    if ( *(v9 + 16) == -1 )
      v11 = 0x7FFF;
    else
      v11 = *(v9 + 16) & 0x7FFF;
    LOWORD(this->m_hThinker.m_Index) = v11 | this->m_hThinker.m_Index & 0x8000;
    this->m_hThinker.m_Index = (v10 << 15) | this->m_hThinker.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hThinker.m_Index = -1;
  }
  this->m_hAttackTarget.m_Index = -1;
  this->m_bDisarmed = 0;
  this->m_flNextAttackTime = -1.0;
  CDOTA_Buff::StartIntervalThink(this, 0.1, v8);
}


// CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition::OnDestroy  (line 4540, @0x0000000002c2bc20, libserver.so)  // inlines: Set, SetForceAttackTarget, operator=
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_Buff::GetParent, CDOTA_BaseNPC::Interrupt, CDOTA_BaseNPC::UpdatePseudoQueuedOrder
void __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition::OnDestroy(
        CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition *const this)
{
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  int v4; // r12d
  CDOTA_ParticleManager *v5; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v7; // rax

  m_nFXIndex = this->m_nFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 0);
  v4 = this->m_nFXIndex;
  v5 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v5, v4);
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::Interrupt(Parent);
  v7 = CDOTA_Buff::GetParent(this);
  v7->m_hForceAttackTarget.m_Index = -1;
  v7->m_bAllowAllyForceAttack = 0;
  CDOTA_BaseNPC::UpdatePseudoQueuedOrder(v7, 1);
}


// CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition::DeclareFunctions  (line 4552, @0x0000000002c1dbb0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition::DeclareFunctions(
        CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition *const this)
{
  this->m_Functions[121].__pfn = (&stru_10 + 697);
  this->m_Functions[121].__delta = 0;
}


// CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition::CheckState  (line 4559, @0x0000000002c1dbd0, libserver.so)  // inlines: Disable, Enable
void __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition::CheckState(
        CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nEnabledStateMask; // rax
  uint64 m_nDisabledStateMask; // rcx

  m_nEnabledStateMask = buffState->m_nEnabledStateMask;
  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x80001uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFF7FFFELL;
  if ( this->m_bDisarmed )
  {
    buffState->m_nEnabledStateMask = m_nEnabledStateMask | 0x80003;
    buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFF7FFFCLL;
  }
  else
  {
    buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFF7FFFCLL | 2;
    buffState->m_nEnabledStateMask = m_nEnabledStateMask & 0xFFFFFFFFFFF7FFFCLL | 0x80001;
  }
}


// CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition::OnAttackLanded  (line 4580, @0x0000000002c2db20, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::GetCastPoint
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition::OnAttackLanded(
        CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  float attack_speed; // r12d
  CDOTA_BaseNPC *Parent; // rax
  float CastPoint; // xmm0_4
  float v11; // [rsp+Ch] [rbp-14h]

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    return 1uLL;
  v5 = &v4[params->hattacker.m_Index & 0x1FF];
  if ( v5 == 0 )
    return 1uLL;
  if ( m_Index != v5->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC || CDOTA_Buff::GetParent(this) != m_pInstance )
    return 1uLL;
  this->m_bDisarmed = 1;
  attack_speed = this->attack_speed;
  v11 = *&g_pGameRules[18].m_szQuestName[20];
  Parent = CDOTA_Buff::GetParent(this);
  CastPoint = CDOTA_BaseNPC::GetCastPoint(Parent, 1);
  this->m_flNextAttackTime = v11 + (attack_speed - (CastPoint + 0.1));
  return 1uLL;
}


// CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition::OnIntervalThink  (line 4597, @0x0000000002c4fd20, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetAttackRange, GetEHandle, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetModifier_Constant_Additive, GetModifier_Constant_Highest, GetSerialNumber, GetTeamNumber, IndexToIdentity, IsListeningToEvent, IsValid, Length2D, LookupEntity, Set, SetForceAttackTarget, SetIdleAcquire, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator bool, operator!, operator-, operator=, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetParent, CEntityHandle::operator CEntityInstance*, CDOTA_Buff::Destroy, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTA_BaseNPC::FindModifierByName, KeyValues::KeyValues, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CBaseEntity::GetAbsOrigin, FindUnitsInRadius (23 total)
// strings: "modifier_monkey_king_fur_army_soldier_inactive", "particles/units/heroes/hero_monkey_king/monkey_king_fur_army_attack.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition::OnIntervalThink(
        CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CEntityInstance *v3; // rax
  const CBaseEntity *v4; // r15
  CDOTA_BaseNPC *v5; // rax
  float Modifier_Constant_Highest_Internal; // xmm3_4
  CDOTA_ModifierManager *p_m_ModifierManager; // r14
  CDOTA_BaseNPC *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  float Modifier_Constant_Additive_Internal; // xmm0_4
  float m_iAttackRange; // xmm2_4
  __int64 v13; // rax
  float v14; // xmm2_4
  float v15; // xmm0_4
  __int64 v16; // rax
  float v17; // xmm0_4
  float v18; // xmm1_4
  __int64 v19; // rax
  float v20; // xmm1_4
  float v21; // xmm0_4
  int v22; // r13d
  uint32 m_Index; // eax
  CEntityIdentity *v24; // rdx
  CEntityIdentity *v25; // rdx
  __m128i v26; // xmm4
  CDOTA_BaseNPC *v27; // rax
  CDOTA_Buff *ModifierByName; // rax
  uint32 v29; // edx
  CEntityIdentity *v30; // rcx
  CEntityIdentity *v31; // rcx
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *v33; // r13
  CDOTA_BaseNPC *v34; // rax
  __int64 v35; // rax
  float v36; // r13d
  CDOTA_BaseNPC *v37; // r14
  CDOTA_BaseNPC *v38; // rax
  const Vector *v39; // rbx
  CDOTA_BaseNPC *v40; // rax
  __int64 v41; // rbx
  CHandle<CBaseEntity> *v42; // rdx
  uint32 v43; // eax
  __int16 v44; // cx
  CEntityIdentity *v45; // rdx
  CEntityIdentity *v46; // rdx
  const CBaseEntity *m_pInstance; // r14
  const Vector *v48; // r13
  const Vector *v49; // rax
  CDOTA_BaseNPC *v50; // rax
  CDOTA_BaseNPC *v51; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v53; // ecx
  __int16 v54; // si
  __int64 v55; // rax
  __int64 v56; // rdx
  int v57; // eax
  __int16 v58; // cx
  CEntityInstance *v59; // rdi
  CDOTA_BaseNPC *v60; // r14
  CDOTA_BaseNPC *v61; // rax
  CDOTA_BaseNPC *v62; // rax
  CDOTA_BaseNPC *v63; // rax
  const Vector *v64; // rax
  CDOTA_BaseNPC *v65; // rax
  int BuffParticleEffect; // ebx
  CDOTA_BaseNPC *v67; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v69; // rax
  float v70; // [rsp+20h] [rbp-80h]
  float v71; // [rsp+20h] [rbp-80h]
  float v72; // [rsp+28h] [rbp-78h]
  float v73; // [rsp+28h] [rbp-78h]
  float v74; // [rsp+28h] [rbp-78h]
  float v75; // [rsp+28h] [rbp-78h]
  const Vector *AbsOrigin; // [rsp+28h] [rbp-78h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+30h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v79; // [rsp+68h] [rbp-38h]

  v79 = __readfsqword(0x28u);
  Parent = CDOTA_Buff::GetParent(this);
  if ( (*(Parent->_vptr_IHandleEntity + 408))(Parent) != 0
    && (v3 = CEntityHandle::operator CEntityInstance *(&this->m_hThinker), v4 = v3, v3 != 0)
    && BYTE3(v3[7]._vptr_IHandleEntity) != 0 )
  {
    v5 = CDOTA_Buff::GetParent(this);
    Modifier_Constant_Highest_Internal = 0.0;
    p_m_ModifierManager = &v5->m_ModifierManager;
    v8 = v5;
    v9 = v5->m_ModifierManager.m_buffsForModifiers[71];
    if ( v9 != 0xFF && v8->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v9].m_Size > 0 )
      Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                             p_m_ModifierManager,
                                             modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                                             &CModifierParams::s_Default);
    v10 = v8->m_ModifierManager.m_buffsForModifiers[69];
    Modifier_Constant_Additive_Internal = 0.0;
    m_iAttackRange = v8->m_iAttackRange;
    if ( v10 != 0xFF && v8->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v10].m_Size > 0 )
    {
      v70 = Modifier_Constant_Highest_Internal;
      v72 = v8->m_iAttackRange;
      Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                              p_m_ModifierManager,
                                              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
                                              &CModifierParams::s_Default);
      Modifier_Constant_Highest_Internal = v70;
      m_iAttackRange = v72;
    }
    v13 = v8->m_ModifierManager.m_buffsForModifiers[70];
    v14 = m_iAttackRange + Modifier_Constant_Additive_Internal;
    v15 = 0.0;
    if ( v13 != 0xFF && v8->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v13].m_Size > 0 )
    {
      v71 = Modifier_Constant_Highest_Internal;
      v73 = v14;
      v15 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
              p_m_ModifierManager,
              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
              &CModifierParams::s_Default);
      Modifier_Constant_Highest_Internal = v71;
      v14 = v73;
    }
    if ( Modifier_Constant_Highest_Internal > (v14 + v15) )
    {
      v35 = v8->m_ModifierManager.m_buffsForModifiers[71];
      v22 = 0;
      if ( v35 != 0xFF && v8->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v35].m_Size > 0 )
        v22 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                p_m_ModifierManager,
                modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                &CModifierParams::s_Default);
    }
    else
    {
      v16 = v8->m_ModifierManager.m_buffsForModifiers[69];
      v17 = 0.0;
      v18 = v8->m_iAttackRange;
      if ( v16 != 0xFF && v8->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v16].m_Size > 0 )
      {
        v74 = v8->m_iAttackRange;
        v17 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                p_m_ModifierManager,
                modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
                &CModifierParams::s_Default);
        v18 = v74;
      }
      v19 = v8->m_ModifierManager.m_buffsForModifiers[70];
      v20 = v18 + v17;
      v21 = 0.0;
      if ( v19 != 0xFF && v8->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v19].m_Size > 0 )
      {
        v75 = v20;
        v21 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                p_m_ModifierManager,
                modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
                &CModifierParams::s_Default);
        v20 = v75;
      }
      v22 = (v21 + v20);
    }
    if ( *&g_pGameRules[18].m_szQuestName[20] >= this->m_flNextAttackTime )
      this->m_bDisarmed = 0;
    m_Index = this->m_hAttackTarget.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v24 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAttackTarget.m_Index) >> 9) & 0x3F];
      if ( v24 != 0 )
      {
        v25 = &v24[this->m_hAttackTarget.m_Index & 0x1FF];
        if ( v25 != 0 && m_Index == v25->m_EHandle.m_Index )
        {
          v59 = CEntityHandle::operator CEntityInstance *(&this->m_hAttackTarget);
          if ( v59 == 0
            || (v60 = __dynamic_cast(v59, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_BaseNPC, 0)) == 0
            || (v61 = CDOTA_Buff::GetParent(this), CDOTA_BaseNPC::GetRangeToUnit(v61, v60) > v22)
            || (*(v60->_vptr_IHandleEntity + 408))(v60) == 0
            || (v60->m_nUnitState64.m_Value & 4) != 0
            || (AbsOrigin = CBaseEntity::GetAbsOrigin(v4),
                v64 = CBaseEntity::GetAbsOrigin(v60),
                fsqrt(
                  ((v64->x - AbsOrigin->x) * (v64->x - AbsOrigin->x))
                + ((v64->y - AbsOrigin->y) * (v64->y - AbsOrigin->y))) > (this->outer_attack_buffer + this->second_radius)) )
          {
            this->m_hAttackTarget.m_Index = -1;
            v62 = CDOTA_Buff::GetParent(this);
            CDOTA_BaseNPC::Interrupt(v62);
            v63 = CDOTA_Buff::GetParent(this);
            v63->m_hForceAttackTarget.m_Index = -1;
            v63->m_bAllowAllyForceAttack = 0;
            CDOTA_BaseNPC::UpdatePseudoQueuedOrder(v63, 1);
          }
        }
      }
    }
    if ( CEntityHandle::operator CEntityInstance *(&this->m_hAttackTarget) == 0 && !this->m_bDisarmed )
    {
      *v26.m128i_i32 = v22;
      hEntities.m_Size = 0;
      hEntities.m_Memory.m_pMemory = 0;
      hEntities.m_Memory.m_nAllocationCount = 0;
      hEntities.m_Memory.m_nGrowSize = 0;
      v36 = COERCE_FLOAT(_mm_cvtsi128_si32(v26));
      v37 = CDOTA_Buff::GetParent(this);
      v38 = CDOTA_Buff::GetParent(this);
      v39 = CBaseEntity::GetAbsOrigin(v38);
      v40 = CDOTA_Buff::GetParent(this);
      FindUnitsInRadius(v40->m_iTeamNum.m_Value, v39, v37, v36, &hEntities, 2, 1, 400, 0, 0);
      if ( hEntities.m_Size > 0 )
      {
        v41 = 0;
        while ( 1 )
        {
          v42 = &hEntities.m_Memory.m_pMemory[v41];
          v43 = v42->m_Index;
          if ( v42->m_Index + 2 > 1 )
          {
            v44 = v42->m_Index;
            v45 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v42->m_Index) >> 9) & 0x3F];
            if ( v45 != 0 )
            {
              v46 = &v45[v44 & 0x1FF];
              if ( v46 != 0 && v43 == v46->m_EHandle.m_Index )
              {
                m_pInstance = v46->m_pInstance;
                if ( v46->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                {
                  v48 = CBaseEntity::GetAbsOrigin(v4);
                  v49 = CBaseEntity::GetAbsOrigin(m_pInstance);
                  if ( fsqrt(((v49->x - v48->x) * (v49->x - v48->x)) + ((v49->y - v48->y) * (v49->y - v48->y))) <= this->second_radius )
                    break;
                }
              }
            }
          }
          if ( hEntities.m_Size <= ++v41 )
            goto LABEL_59;
        }
        v50 = CDOTA_Buff::GetParent(this);
        CDOTA_BaseNPC::Interrupt(v50);
        CDOTA_Buff::GetParent(this)->m_bIdleAcquire = 1;
        v51 = CDOTA_Buff::GetParent(this);
        m_pEntity = m_pInstance->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v53 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          if ( m_pEntity->m_EHandle.m_Index == -1 )
            v54 = 0x7FFF;
          else
            v54 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(v51->m_hForceAttackTarget.m_Index) = v54 | v51->m_hForceAttackTarget.m_Index & 0x8000;
          v51->m_hForceAttackTarget.m_Index = (v53 << 15) | v51->m_hForceAttackTarget.m_Index & 0x7FFF;
        }
        else
        {
          v51->m_hForceAttackTarget.m_Index = -1;
        }
        v51->m_bAllowAllyForceAttack = 0;
        CDOTA_BaseNPC::UpdatePseudoQueuedOrder(v51, 1);
        v55 = (*(m_pInstance->_vptr_IHandleEntity + 373))(m_pInstance);
        if ( v55 != 0 && (v56 = *(v55 + 8)) != 0 )
        {
          v57 = (*(v56 + 16) >> 15) - (*(v56 + 48) & 1);
          v58 = 0x7FFF;
          if ( *(v56 + 16) != -1 )
            v58 = *(v56 + 16) & 0x7FFF;
          LOWORD(this->m_hAttackTarget.m_Index) = v58 | this->m_hAttackTarget.m_Index & 0x8000;
          this->m_hAttackTarget.m_Index = (v57 << 15) | this->m_hAttackTarget.m_Index & 0x7FFF;
        }
        else
        {
          this->m_hAttackTarget.m_Index = -1;
        }
      }
LABEL_59:
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
    }
    v27 = CDOTA_Buff::GetParent(this);
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(v27, "modifier_monkey_king_fur_army_soldier_inactive", 0);
    v29 = this->m_hAttackTarget.m_Index;
    if ( v29 + 2 > 1
      && (v30 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAttackTarget.m_Index) >> 9) & 0x3F]) != 0
      && (v31 = &v30[this->m_hAttackTarget.m_Index & 0x1FF]) != 0
      && v29 == v31->m_EHandle.m_Index )
    {
      if ( ModifierByName != 0 )
      {
        CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
        v65 = CDOTA_Buff::GetParent(this);
        BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                               this,
                               "particles/units/heroes/hero_monkey_king/monkey_king_fur_army_attack.vpcf",
                               2,
                               v65,
                               0);
        v67 = CDOTA_Buff::GetParent(this);
        ParticleManager = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, BuffParticleEffect, 0, v67, 1, 0, vec3_invalid, 1);
        v69 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v69, BuffParticleEffect);
      }
    }
    else if ( ModifierByName == 0 )
    {
      KeyValues::KeyValues(&kv, "modifier_monkey_king_fur_army_soldier_inactive");
      Ability = CDOTA_Buff::GetAbility(this);
      v33 = CDOTA_Buff::GetParent(this);
      v34 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::AddNewModifier(v34, v33, Ability, "modifier_monkey_king_fur_army_soldier_inactive", &kv, 0);
      KeyValues::~KeyValues(&kv);
    }
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInactive::~CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInactive  (line 4706, @0x0000000002c93b40, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInactive::~CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInactive(
        CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInactive *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E6790;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInactive::~CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInactive  (line 4706, @0x0000000002c93b60, libserver.so)  // inlines: ~CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInactive
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInactive::~CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInactive(
        CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInactive *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E6790;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInactive::IsHidden  (line 4711, @0x0000000002c8b220, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInactive::IsHidden(
        CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInactive *const this)
{
  return 1;
}


// CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInactive::GetStatusEffectName  (line 4713, @0x0000000002c8b230, libserver.so)
// strings: "particles/status_fx/status_effect_monkey_king_fur_army.vpcf"
const char *__fastcall CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInactive::GetStatusEffectName(
        CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInactive *const this)
{
  return "particles/status_fx/status_effect_monkey_king_fur_army.vpcf";
}


// CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInactive::StatusEffectPriority  (line 4714, @0x0000000002c8b240, libserver.so)
int __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInactive::StatusEffectPriority(
        CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInactive *const this)
{
  return 90;
}


// CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden::~CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden  (line 4721, @0x0000000002c916f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden::~CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden(
        CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E6AF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden::~CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden  (line 4721, @0x0000000002c91710, libserver.so)  // inlines: ~CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden::~CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden(
        CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E6AF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden::IsPermanent  (line 4726, @0x0000000002c8b250, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden::IsPermanent(
        CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden *const this)
{
  return 1;
}


// CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden::IsHidden  (line 4727, @0x0000000002c8b260, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden::IsHidden(
        CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden *const this)
{
  return 1;
}


// CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden::OnCreated  (line 4745, @0x0000000002c23830, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTA_Buff::GetParent, CBaseEntity::AddEffects, CDOTAGamerules::GetFountain, CBaseEntity::GetAbsOrigin, FindClearSpaceForUnit
void __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden::OnCreated(
        CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *Fountain; // rax
  Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v7; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::AddEffects(Parent, 32);
  v4 = CDOTA_Buff::GetParent(this);
  Fountain = CDOTAGamerules::GetFountain(g_pGameRules, v4->m_iTeamNum.m_Value);
  if ( Fountain != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(Fountain);
    v7 = CDOTA_Buff::GetParent(this);
    FindClearSpaceForUnit(v7, *AbsOrigin, 1);
  }
}


// CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden::OnDestroy  (line 4758, @0x0000000002c2b060, libserver.so)  // inlines: MarkPVSInformationDirty, RemoveEffects
// calls: CDOTA_Buff::GetParent, CBaseEntity::DispatchUpdateTransmitState
void __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden::OnDestroy(
        CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden *const this)
{
  CDOTA_BaseNPC *Parent; // rbx

  Parent = CDOTA_Buff::GetParent(this);
  (*(Parent->_vptr_IHandleEntity + 188))(Parent, Parent->m_fEffects.m_Value & 0xFFFFFFDF);
  Parent->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  CBaseEntity::DispatchUpdateTransmitState(Parent);
}


// CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden::DeclareFunctions  (line 4763, @0x0000000002c1dc40, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden::GetModifierTempestDouble(CModifierParams const&), CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden::GetDisableAutoAttack(CModifierParams const&), CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden::GetFixedVision(CModifierParams const&)
void __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden::DeclareFunctions(
        CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden *const this)
{
  this->m_Functions[166].__pfn = CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden::GetModifierTempestDouble;
  this->m_Functions[166].__delta = 0;
  this->m_Functions[95].__delta = 0;
  this->m_Functions[95].__pfn = CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden::GetDisableAutoAttack;
  this->m_Functions[100].__pfn = CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden::GetFixedVision;
  this->m_Functions[100].__delta = 0;
  this->m_Functions[101].__pfn = CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden::GetFixedVision;
  this->m_Functions[101].__delta = 0;
}


// CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden::GetFixedVision  (line 4771, @0x0000000002c1dcb0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden::GetFixedVision(
        CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden::GetModifierTempestDouble  (line 4776, @0x0000000002c1dcd0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden::GetModifierTempestDouble(
        CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden::GetDisableAutoAttack  (line 4781, @0x0000000002c1dcf0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden::GetDisableAutoAttack(
        CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden::CheckState  (line 4788, @0x0000000002c1dd10, libserver.so)  // inlines: Disable, Enable
void __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden::CheckState(
        CDOTA_Modifier_MonkeyKing_FurArmy_SoldierHidden *const this,
        CDOTABuffState *const buffState)
{
  uint64 v2; // rax

  v2 = buffState->m_nEnabledStateMask & 0xFFFFFFFFFEFFFFFFLL;
  buffState->m_nDisabledStateMask = buffState->m_nDisabledStateMask & 0xFFFFFFFF7C67BCF8LL | 0x1000000;
  buffState->m_nEnabledStateMask = v2 | 0x82984307;
}


// CDOTA_Modifier_ObliterateSoldier::~CDOTA_Modifier_ObliterateSoldier  (line 4811, @0x0000000002c916a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_ObliterateSoldier::~CDOTA_Modifier_ObliterateSoldier(
        CDOTA_Modifier_ObliterateSoldier *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E6E10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_ObliterateSoldier::~CDOTA_Modifier_ObliterateSoldier  (line 4811, @0x0000000002c916c0, libserver.so)  // inlines: ~CDOTA_Modifier_ObliterateSoldier
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_ObliterateSoldier::~CDOTA_Modifier_ObliterateSoldier(
        CDOTA_Modifier_ObliterateSoldier *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E6E10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_ObliterateSoldier::IsDebuff  (line 4816, @0x0000000002c8b270, libserver.so)
bool __fastcall CDOTA_Modifier_ObliterateSoldier::IsDebuff(CDOTA_Modifier_ObliterateSoldier *const this)
{
  return 1;
}


// CDOTA_Modifier_ObliterateSoldier::IsHidden  (line 4817, @0x0000000002c8b280, libserver.so)
bool __fastcall CDOTA_Modifier_ObliterateSoldier::IsHidden(CDOTA_Modifier_ObliterateSoldier *const this)
{
  return 1;
}


// CDOTA_Modifier_ObliterateSoldier::IsPurgable  (line 4818, @0x0000000002c8b290, libserver.so)
bool __fastcall CDOTA_Modifier_ObliterateSoldier::IsPurgable(CDOTA_Modifier_ObliterateSoldier *const this)
{
  return 0;
}


// CDOTA_Modifier_ObliterateSoldier::CheckState  (line 4832, @0x0000000002c1dd50, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_ObliterateSoldier::CheckState(
        CDOTA_Modifier_ObliterateSoldier *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x282984120uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFD7D67BEDFLL;
}


// CDOTA_Modifier_ObliterateSoldier::DeclareFunctions  (line 4851, @0x0000000002c1dd80, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_ObliterateSoldier::GetModifierTempestDouble(CModifierParams const&)
void __fastcall CDOTA_Modifier_ObliterateSoldier::DeclareFunctions(CDOTA_Modifier_ObliterateSoldier *const this)
{
  this->m_Functions[166].__pfn = CDOTA_Modifier_ObliterateSoldier::GetModifierTempestDouble;
  this->m_Functions[166].__delta = 0;
}


// CDOTA_Modifier_ObliterateSoldier::GetModifierTempestDouble  (line 4858, @0x0000000002c1dda0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_ObliterateSoldier::GetModifierTempestDouble(
        CDOTA_Modifier_ObliterateSoldier *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_ObliterateSoldier::OnDestroy  (line 4865, @0x0000000002c20530, libserver.so)
// calls: CDOTA_Buff::GetParent, UTIL_Remove
void __fastcall CDOTA_Modifier_ObliterateSoldier::OnDestroy(CDOTA_Modifier_ObliterateSoldier *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  UTIL_Remove(Parent);
}


// CDOTA_Modifier_MonkeyKing_FurArmy_BonusDamage::~CDOTA_Modifier_MonkeyKing_FurArmy_BonusDamage  (line 4878, @0x0000000002c91650, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_BonusDamage::~CDOTA_Modifier_MonkeyKing_FurArmy_BonusDamage(
        CDOTA_Modifier_MonkeyKing_FurArmy_BonusDamage *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E7130;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_MonkeyKing_FurArmy_BonusDamage::~CDOTA_Modifier_MonkeyKing_FurArmy_BonusDamage  (line 4878, @0x0000000002c91670, libserver.so)  // inlines: ~CDOTA_Modifier_MonkeyKing_FurArmy_BonusDamage
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_BonusDamage::~CDOTA_Modifier_MonkeyKing_FurArmy_BonusDamage(
        CDOTA_Modifier_MonkeyKing_FurArmy_BonusDamage *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E7130;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_MonkeyKing_FurArmy_BonusDamage::IsPurgable  (line 4886, @0x0000000002c8b2a0, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_BonusDamage::IsPurgable(
        CDOTA_Modifier_MonkeyKing_FurArmy_BonusDamage *const this)
{
  return 0;
}


// CDOTA_Modifier_MonkeyKing_FurArmy_BonusDamage::OnCreated  (line 4898, @0x0000000002c707d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_BonusDamage::OnCreated(
        CDOTA_Modifier_MonkeyKing_FurArmy_BonusDamage *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage", -1, 0);
  else
    this->bonus_damage = 0;
}


// CDOTA_Modifier_MonkeyKing_FurArmy_BonusDamage::OnRefresh  (line 4905, @0x0000000002c705f0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_BonusDamage::OnRefresh(
        CDOTA_Modifier_MonkeyKing_FurArmy_BonusDamage *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage", -1, 0);
  else
    this->bonus_damage = 0;
}


// CDOTA_Modifier_MonkeyKing_FurArmy_BonusDamage::DeclareFunctions  (line 4912, @0x0000000002c1ddc0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_BonusDamage::DeclareFunctions(
        CDOTA_Modifier_MonkeyKing_FurArmy_BonusDamage *const this)
{
  this->m_Functions[0].__pfn = (&stru_10 + 697);
  this->m_Functions[0].__delta = 0;
}


// CDOTA_Modifier_MonkeyKing_FurArmy_BonusDamage::GetModifierPreAttack_BonusDamage  (line 4919, @0x0000000002c1dde0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_FurArmy_BonusDamage::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_MonkeyKing_FurArmy_BonusDamage *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_MonkeyKing_QuadrupleTap::~CDOTA_Ability_MonkeyKing_QuadrupleTap  (line 4933, @0x0000000002c99080, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_MonkeyKing_QuadrupleTap::~CDOTA_Ability_MonkeyKing_QuadrupleTap(
        CDOTA_Ability_MonkeyKing_QuadrupleTap *const this)
{
  this->_vptr_IHandleEntity = &off_45E7490;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_MonkeyKing_QuadrupleTap::~CDOTA_Ability_MonkeyKing_QuadrupleTap  (line 4933, @0x0000000002c990a0, libserver.so)  // inlines: ~CDOTA_Ability_MonkeyKing_QuadrupleTap
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_MonkeyKing_QuadrupleTap::~CDOTA_Ability_MonkeyKing_QuadrupleTap(
        CDOTA_Ability_MonkeyKing_QuadrupleTap *const this)
{
  this->_vptr_IHandleEntity = &off_45E7490;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_MonkeyKing_QuadrupleTap::Schema_DynamicBinding  (line 4935, @0x0000000002c8b2b0, libserver.so)
// globals: CDOTA_Ability_MonkeyKing_QuadrupleTap::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_MonkeyKing_QuadrupleTap::Schema_DynamicBinding(
        const CDOTA_Ability_MonkeyKing_QuadrupleTap *const this)
{
  return CDOTA_Ability_MonkeyKing_QuadrupleTap::s_pSchemaBinding;
}


// CDOTA_Ability_MonkeyKing_QuadrupleTap::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 4935, @0x0000000002c8b2c0, libserver.so)
// globals: CDOTA_Ability_MonkeyKing_QuadrupleTap::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_MonkeyKing_QuadrupleTap::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_MonkeyKing_QuadrupleTap::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_MonkeyKing_QuadrupleTap::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_MonkeyKing_QuadrupleTap::CEntityInstanceEntityClass::DestructInstance  (line 4935, @0x0000000002c8b2d0, libserver.so)  // inlines: Destruct<CDOTA_Ability_MonkeyKing_QuadrupleTap>
void __fastcall CDOTA_Ability_MonkeyKing_QuadrupleTap::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_MonkeyKing_QuadrupleTap::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_MonkeyKing_QuadrupleTap::CEntityInstanceEntityClass::FreeInstance  (line 4935, @0x0000000002c8b2f0, libserver.so)
void __fastcall CDOTA_Ability_MonkeyKing_QuadrupleTap::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_MonkeyKing_QuadrupleTap::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_MonkeyKing_QuadrupleTap::CEntityInstanceEntityClass::CanAllocate  (line 4935, @0x0000000002c8b310, libserver.so)
bool __fastcall CDOTA_Ability_MonkeyKing_QuadrupleTap::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_MonkeyKing_QuadrupleTap::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_MonkeyKing_QuadrupleTap::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 4935, @0x0000000002c8b320, libserver.so)
// globals: CDOTA_Ability_MonkeyKing_QuadrupleTap::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_MonkeyKing_QuadrupleTap::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_MonkeyKing_QuadrupleTap::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_MonkeyKing_QuadrupleTap::s_pSchemaBinding;
}


// CDOTA_Ability_MonkeyKing_QuadrupleTap::CEntityInstanceEntityClass::AllocateInstance  (line 4935, @0x0000000002c90720, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_MonkeyKing_QuadrupleTap::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_MonkeyKing_QuadrupleTap::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_MonkeyKing_QuadrupleTap::CEntityInstanceEntityClass::ConstructInstance  (line 4935, @0x0000000002c951e0, libserver.so)  // inlines: CDOTA_Ability_MonkeyKing_QuadrupleTap, Construct<CDOTA_Ability_MonkeyKing_QuadrupleTap>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_MonkeyKing_QuadrupleTap::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_MonkeyKing_QuadrupleTap::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45E7490;
  }
  return p;
}


// CDOTA_Ability_MonkeyKing_QuadrupleTap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 4935, @0x0000000002ca2d90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_MonkeyKing_QuadrupleTap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_MonkeyKing_QuadrupleTap::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_MonkeyKing_QuadrupleTap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 4935, @0x0000000002ca2db0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_MonkeyKing_QuadrupleTap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_MonkeyKing_QuadrupleTap::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_MonkeyKing_QuadrupleTap::GetEntityClassInternal  (line 4935, @0x0000000002cbba00, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "monkey_king_jingu_mastery", "CDOTA_Ability_MonkeyKing_QuadrupleTap"
// globals: `guard variable for'CDOTA_Ability_MonkeyKing_QuadrupleTap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_QuadrupleTapClass, CDOTA_Ability_MonkeyKing_QuadrupleTap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_QuadrupleTapClass, __dso_handle, CDOTA_Ability_MonkeyKing_QuadrupleTap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_MonkeyKing_QuadrupleTap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_QuadrupleTapClassInfo, CDOTA_Ability_MonkeyKing_QuadrupleTap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_QuadrupleTapClassInfo
CEntityClass *__cdecl CDOTA_Ability_MonkeyKing_QuadrupleTap::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_MonkeyKing_QuadrupleTap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_QuadrupleTapClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_MonkeyKing_QuadrupleTap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_QuadrupleTapClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_MonkeyKing_QuadrupleTap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_QuadrupleTapClass);
    CDOTA_Ability_MonkeyKing_QuadrupleTap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_QuadrupleTapClass._vptr_CEntityClass = off_45E7410;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_MonkeyKing_QuadrupleTap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_QuadrupleTapClass);
    __cxa_atexit(
      CDOTA_Ability_MonkeyKing_QuadrupleTap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_MonkeyKing_QuadrupleTap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_QuadrupleTapClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_MonkeyKing_QuadrupleTapClass != 0 )
    return &CDOTA_Ability_MonkeyKing_QuadrupleTap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_QuadrupleTapClass;
  if ( `guard variable for'CDOTA_Ability_MonkeyKing_QuadrupleTap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_QuadrupleTapClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_MonkeyKing_QuadrupleTap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_QuadrupleTapClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_MonkeyKing_QuadrupleTap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_QuadrupleTapClassInfo,
      "CDOTA_Ability_MonkeyKing_QuadrupleTap",
      "monkey_king_jingu_mastery",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_MonkeyKing_QuadrupleTap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_QuadrupleTapClassInfo);
  }
  CDOTA_Ability_MonkeyKing_QuadrupleTap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_QuadrupleTapClass.m_pClassInfo = &CDOTA_Ability_MonkeyKing_QuadrupleTap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_QuadrupleTapClassInfo;
  CDOTA_Ability_MonkeyKing_QuadrupleTap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_QuadrupleTapClass.m_pBaseClassInfo = CDOTA_Ability_MonkeyKing_QuadrupleTap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_QuadrupleTapClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_MonkeyKing_QuadrupleTapClass = &CDOTA_Ability_MonkeyKing_QuadrupleTap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_QuadrupleTapClass;
  CDOTA_Ability_MonkeyKing_QuadrupleTap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_MonkeyKing_QuadrupleTapClassInfo.m_pClass = &CDOTA_Ability_MonkeyKing_QuadrupleTap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_QuadrupleTapClass;
  CDOTA_Ability_MonkeyKing_QuadrupleTap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_QuadrupleTapClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_MonkeyKing_QuadrupleTapClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_MonkeyKing_QuadrupleTap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_MonkeyKing_QuadrupleTapClass;
}


// CDOTA_Ability_MonkeyKing_QuadrupleTap::GetIntrinsicModifierName  (line 4938, @0x0000000002c8b330, libserver.so)
// strings: "modifier_monkey_king_quadruple_tap"
const char *__fastcall CDOTA_Ability_MonkeyKing_QuadrupleTap::GetIntrinsicModifierName(
        CDOTA_Ability_MonkeyKing_QuadrupleTap *const this)
{
  return "modifier_monkey_king_quadruple_tap";
}


// CDOTA_Modifier_MonkeyKing_QuadrupleTap::~CDOTA_Modifier_MonkeyKing_QuadrupleTap  (line 4949, @0x0000000002c91600, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_MonkeyKing_QuadrupleTap::~CDOTA_Modifier_MonkeyKing_QuadrupleTap(
        CDOTA_Modifier_MonkeyKing_QuadrupleTap *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E7F50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_MonkeyKing_QuadrupleTap::~CDOTA_Modifier_MonkeyKing_QuadrupleTap  (line 4949, @0x0000000002c91620, libserver.so)  // inlines: ~CDOTA_Modifier_MonkeyKing_QuadrupleTap
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_MonkeyKing_QuadrupleTap::~CDOTA_Modifier_MonkeyKing_QuadrupleTap(
        CDOTA_Modifier_MonkeyKing_QuadrupleTap *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E7F50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_MonkeyKing_QuadrupleTap::IsHidden  (line 4954, @0x0000000002c8b340, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_QuadrupleTap::IsHidden(CDOTA_Modifier_MonkeyKing_QuadrupleTap *const this)
{
  return 1;
}


// CDOTA_Modifier_MonkeyKing_QuadrupleTap::OnCreated  (line 4970, @0x0000000002c714e0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "counter_duration", "required_hits"
void __fastcall CDOTA_Modifier_MonkeyKing_QuadrupleTap::OnCreated(
        CDOTA_Modifier_MonkeyKing_QuadrupleTap *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->counter_duration = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "counter_duration", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->required_hits = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "required_hits", -1, 0);
      return;
    }
  }
  else
  {
    this->counter_duration = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->required_hits = 0;
}


// CDOTA_Modifier_MonkeyKing_QuadrupleTap::DeclareFunctions  (line 4978, @0x0000000002c1de00, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_MonkeyKing_QuadrupleTap::DeclareFunctions(
        CDOTA_Modifier_MonkeyKing_QuadrupleTap *const this)
{
  this->m_Functions[137].__pfn = (&stru_10 + 697);
  this->m_Functions[137].__delta = 0;
}


// CDOTA_Modifier_MonkeyKing_QuadrupleTap::OnAttacked  (line 4985, @0x0000000002c36700, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsRealHero, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::RemoveModifierByName, KeyValues::KeyValues, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, KeyValues::SetFloat, _Unwind_Resume
// strings: "modifier_monkey_king_quadruple_tap_bonuses", "modifier_monkey_king_quadruple_tap_counter"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_QuadrupleTap::OnAttacked(
        CDOTA_Modifier_MonkeyKing_QuadrupleTap *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *Caster; // rax
  CEntityInstance *v12; // rax
  CEntityInstance *v13; // rbx
  char m_CScriptComponent_high; // r13
  CDOTA_Buff *ModifierByName; // r13
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *v17; // rbx
  CDOTA_BaseNPC *v18; // rax
  float v19; // xmm1_4
  CDOTABaseAbility *v20; // r14
  CDOTA_BaseNPC *v21; // rax
  CDOTA_Buff *v22; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+18h] [rbp-28h]
  ModifierVariant_t result; // 0:rax.16

  v24 = __readfsqword(0x28u);
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
          Parent = CDOTA_Buff::GetParent(this);
          if ( (Parent->m_iUnitType & 1) != 0 && !Parent->m_bIsIllusion.m_Value )
          {
            v10 = CDOTA_Buff::GetParent(this);
            if ( !v10->m_bIsWaitingToSpawn.m_Value && (v10->m_nUnitState64.m_Value & 0x100) == 0 )
            {
              result.m_szVal = CDOTA_Buff::GetParent(this);
              *&result.m_eType = 1;
              if ( (result.m_szVal[2787] & 0x10) != 0 )
                goto LABEL_6;
              Caster = CDOTA_Buff::GetCaster(this);
              if ( CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_monkey_king_quadruple_tap_bonuses", 0) == 0 )
              {
                v12 = CEntityHandle::operator CEntityInstance *(&params->htarget);
                v13 = v12;
                if ( v12 != 0 && BYTE3(v12[7]._vptr_IHandleEntity) != 0 )
                {
                  m_CScriptComponent_high = HIBYTE(v12[7].m_CScriptComponent);
                  if ( m_CScriptComponent_high != CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value
                    && (v13[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
                    && LOBYTE(v13[71].m_pEntity) == 0 )
                  {
                    ModifierByName = CDOTA_BaseNPC::FindModifierByName(
                                       v13,
                                       "modifier_monkey_king_quadruple_tap_counter",
                                       0);
                    if ( ModifierByName != 0 )
                    {
                      (*(ModifierByName->_vptr_CDOTA_Buff + 25))(ModifierByName);
                      if ( (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName) < this->required_hits )
                      {
                        (*(ModifierByName->_vptr_CDOTA_Buff + 63))(ModifierByName, 1, this->counter_duration);
                        goto LABEL_5;
                      }
                      CDOTA_BaseNPC::RemoveModifierByName(v13, "modifier_monkey_king_quadruple_tap_counter");
                      KeyValues::KeyValues(&kv, "modifier_monkey_king_quadruple_tap_bonuses");
                      Ability = CDOTA_Buff::GetAbility(this);
                      v17 = CDOTA_Buff::GetCaster(this);
                      v18 = CDOTA_Buff::GetCaster(this);
                      CDOTA_BaseNPC::AddNewModifier(
                        v18,
                        v17,
                        Ability,
                        "modifier_monkey_king_quadruple_tap_bonuses",
                        &kv,
                        0);
                    }
                    else
                    {
                      KeyValues::KeyValues(&kv, "modifier_monkey_king_quadruple_tap_counter");
                      KeyValues::SetFloat(&kv, "duration", v19);
                      v20 = CDOTA_Buff::GetAbility(this);
                      v21 = CDOTA_Buff::GetCaster(this);
                      v22 = CDOTA_BaseNPC::AddNewModifier(
                              v13,
                              v21,
                              v20,
                              "modifier_monkey_king_quadruple_tap_counter",
                              &kv,
                              0);
                      if ( v22 != 0 )
                        (*(v22->_vptr_CDOTA_Buff + 28))(v22, 1);
                    }
                    KeyValues::~KeyValues(&kv);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_5:
  *&result.m_eType = 1;
LABEL_6:
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_MonkeyKing_QuadrupleTap_Counter::~CDOTA_Modifier_MonkeyKing_QuadrupleTap_Counter  (line 5040, @0x0000000002c915b0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_MonkeyKing_QuadrupleTap_Counter::~CDOTA_Modifier_MonkeyKing_QuadrupleTap_Counter(
        CDOTA_Modifier_MonkeyKing_QuadrupleTap_Counter *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E8270;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_MonkeyKing_QuadrupleTap_Counter::~CDOTA_Modifier_MonkeyKing_QuadrupleTap_Counter  (line 5040, @0x0000000002c915d0, libserver.so)  // inlines: ~CDOTA_Modifier_MonkeyKing_QuadrupleTap_Counter
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_MonkeyKing_QuadrupleTap_Counter::~CDOTA_Modifier_MonkeyKing_QuadrupleTap_Counter(
        CDOTA_Modifier_MonkeyKing_QuadrupleTap_Counter *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E8270;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_MonkeyKing_QuadrupleTap_Counter::IsDebuff  (line 5045, @0x0000000002c8b350, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_QuadrupleTap_Counter::IsDebuff(
        CDOTA_Modifier_MonkeyKing_QuadrupleTap_Counter *const this)
{
  return 1;
}


// CDOTA_Modifier_MonkeyKing_QuadrupleTap_Counter::IsPurgable  (line 5046, @0x0000000002c8b360, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_QuadrupleTap_Counter::IsPurgable(
        CDOTA_Modifier_MonkeyKing_QuadrupleTap_Counter *const this)
{
  return 0;
}


// CDOTA_Modifier_MonkeyKing_QuadrupleTap_Counter::ShouldUseOverheadOffset  (line 5055, @0x0000000002c8b370, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_QuadrupleTap_Counter::ShouldUseOverheadOffset(
        CDOTA_Modifier_MonkeyKing_QuadrupleTap_Counter *const this)
{
  return 1;
}


// CDOTA_Modifier_MonkeyKing_QuadrupleTap_Counter::OnCreated  (line 5063, @0x0000000002c1de20, libserver.so)
void __fastcall CDOTA_Modifier_MonkeyKing_QuadrupleTap_Counter::OnCreated(
        CDOTA_Modifier_MonkeyKing_QuadrupleTap_Counter *const this,
        KeyValues *pKV)
{
  ;
}


// CDOTA_Modifier_MonkeyKing_QuadrupleTap_Counter::OnRefresh  (line 5079, @0x0000000002c1de30, libserver.so)
void __fastcall CDOTA_Modifier_MonkeyKing_QuadrupleTap_Counter::OnRefresh(
        CDOTA_Modifier_MonkeyKing_QuadrupleTap_Counter *const this,
        KeyValues *pKV)
{
  ;
}


// CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses::~CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses  (line 5098, @0x0000000002c91560, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses::~CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses(
        CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E8590;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses::~CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses  (line 5098, @0x0000000002c91580, libserver.so)  // inlines: ~CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses::~CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses(
        CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E8590;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses::ShouldUseOverheadOffset  (line 5119, @0x0000000002c8b380, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses::ShouldUseOverheadOffset(
        CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses *const this)
{
  return 1;
}


// CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses::OnCreated  (line 5134, @0x0000000002c5b670, libserver.so)
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::UnitEmitSound, CDOTA_Buff::GetParent, CDOTA_Buff::AddParticle
// strings: "modifier_monkey_king_boundless_strike_crit", "particles/units/heroes/hero_monkey_king/monkey_king_quad_tap_start.vpcf", "attach_hitloc", "Hero_MonkeyKing.IronCudgel", "particles/units/heroes/hero_monkey_king/monkey_king_tap_buff.vpcf", "attach_weapon_top" (7 total)
void __fastcall CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses::OnCreated(
        CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_BaseNPC *v8; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v10; // r13
  CDOTA_ParticleManager *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v14; // r14
  CDOTA_ParticleManager *v15; // rax
  CDOTA_ParticleManager *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  const Vector *v22; // r12
  CDOTA_BaseNPC *v23; // rax
  const CBaseAnimating *v24; // r14
  CDOTA_ParticleManager *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  const Vector *v27; // r12
  CDOTA_BaseNPC *v28; // rax
  const CBaseAnimating *v29; // r14
  CDOTA_ParticleManager *v30; // rax
  CDOTA_BaseNPC *v31; // rax
  const Vector *v32; // r12
  CDOTA_BaseNPC *v33; // rax
  const CBaseAnimating *v34; // r14
  CDOTA_ParticleManager *v35; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->charges, "charges");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->bonus_damage, "bonus_damage");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->lifesteal, "lifesteal");
  this->m_bIsAttackAnim = 0;
  Caster = CDOTA_Buff::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_monkey_king_boundless_strike_crit", 0);
  if ( ModifierByName != 0 )
    this->m_nIgnoreStrikeIndex = ModifierByName->m_iIndex;
  else
    this->m_nIgnoreStrikeIndex = -1;
  (*(this->_vptr_CDOTA_Buff + 28))(this, this->charges);
  v8 = CDOTA_Buff::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v8) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/units/heroes/hero_monkey_king/monkey_king_quad_tap_start.vpcf",
                  2,
                  v8,
                  0,
                  0);
  v10 = CDOTA_Buff::GetCaster(this);
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v11, v8, 0, v10, 1, 0, vec3_invalid, 1);
  v12 = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v12);
  v14 = CDOTA_Buff::GetCaster(this);
  v15 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v15, v8, 1, v14, 5, "attach_hitloc", *AbsOrigin, 1);
  v16 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v16, v8);
  v17 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v17, "Hero_MonkeyKing.IronCudgel", 0.0, 0, 0);
  if ( this->m_nFXIndex == -1 )
  {
    v18 = CDOTA_Buff::GetCaster(this);
    Parent = CDOTA_Buff::GetParent(this);
    v20 = GetParticleManager();
    this->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(
                         v20,
                         "particles/units/heroes/hero_monkey_king/monkey_king_tap_buff.vpcf",
                         1,
                         Parent,
                         0,
                         v18);
    v21 = CDOTA_Buff::GetParent(this);
    v22 = CBaseEntity::GetAbsOrigin(v21);
    v23 = CDOTA_Buff::GetParent(this);
    LODWORD(v18) = this->m_nFXIndex;
    v24 = v23;
    v25 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v25, v18, 1, v24, 5, "attach_hitloc", *v22, 1);
    v26 = CDOTA_Buff::GetParent(this);
    v27 = CBaseEntity::GetAbsOrigin(v26);
    v28 = CDOTA_Buff::GetParent(this);
    LODWORD(v18) = this->m_nFXIndex;
    v29 = v28;
    v30 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v30, v18, 2, v29, 5, "attach_weapon_top", *v27, 1);
    v31 = CDOTA_Buff::GetParent(this);
    v32 = CBaseEntity::GetAbsOrigin(v31);
    v33 = CDOTA_Buff::GetParent(this);
    LODWORD(v18) = this->m_nFXIndex;
    v34 = v33;
    v35 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v35, v18, 3, v34, 5, "attach_weapon_bot", *v32, 1);
    CDOTA_Buff::AddParticle(this, this->m_nFXIndex, 0, 0, -1, 0, 0);
  }
}


// CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses::OnRefresh  (line 5176, @0x0000000002c1de40, libserver.so)
void __fastcall CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses::OnRefresh(
        CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses *const this,
        KeyValues *pKV)
{
  (*(this->_vptr_CDOTA_Buff + 57))(this, pKV);
}


// CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses::OnDestroy  (line 5183, @0x0000000002c49a70, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect
void __fastcall CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses::OnDestroy(
        CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses *const this,
        KeyValues *pKV)
{
  int m_nFXIndex; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax

  m_nFXIndex = this->m_nFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 1);
}


// CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses::DeclareFunctions  (line 5192, @0x0000000002c1de60, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses::OnAttacked(CModifierParams const&), CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses::OnAttackFinished(CModifierParams const&)
void __fastcall CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses::DeclareFunctions(
        CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses *const this)
{
  this->m_Functions[137].__pfn = CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses::OnAttacked;
  this->m_Functions[119].__pfn = (&stru_10 + 697);
  this->m_Functions[119].__delta = 0;
  this->m_Functions[0].__pfn = (&stru_10 + 705);
  this->m_Functions[0].__delta = 0;
  this->m_Functions[155].__pfn = (&stru_10 + 713);
  this->m_Functions[155].__delta = 0;
  this->m_Functions[137].__delta = 0;
  this->m_Functions[168].__pfn = CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses::OnAttackFinished;
  this->m_Functions[168].__delta = 0;
}


// CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses::OnAttackStart  (line 5203, @0x0000000002c2d890, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses::OnAttackStart(
        CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  ModifierVariant_t result; // 0:rax.16

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
  if ( v5->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC || CDOTA_Buff::GetParent(this) != m_pInstance )
    goto LABEL_5;
  if ( CDOTA_Buff::GetCaster(this) == 0
    || (result.m_szVal = CDOTA_Buff::GetCaster(this), *&result.m_eType = 1, (result.m_szVal[2787] & 0x10) == 0) )
  {
    this->m_bIsAttackAnim = 1;
LABEL_5:
    *&result.m_eType = 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses::GetModifierPreAttack_BonusDamage  (line 5220, @0x0000000002c2eda0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_monkey_king_boundless_strike_crit"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses *const this,
        const CModifierParams *const params)
{
  __m128i v4; // xmm0
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CDOTA_BaseNPC *Caster; // rax
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetCaster(this) != 0 )
  {
    result.m_szVal = CDOTA_Buff::GetCaster(this);
    *&result.m_eType = 1;
    if ( (result.m_szVal[2787] & 0x10) != 0 )
      goto LABEL_3;
  }
  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
  if ( v7 == 0 )
    return 1uLL;
  v8 = &v7[params->htarget.m_Index & 0x1FF];
  if ( v8 == 0
    || m_Index != v8->m_EHandle.m_Index
    || v8->m_pInstance == 0
    || BYTE3(v8->m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    return 1uLL;
  }
  if ( this->m_nIgnoreStrikeIndex >= 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    result.m_szVal = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_monkey_king_boundless_strike_crit", 0);
    if ( result.m_szVal != 0 )
    {
      *&result.m_eType = 1;
      if ( *(result.m_szVal + 18) == this->m_nIgnoreStrikeIndex )
      {
LABEL_3:
        result.m_szVal = 0;
        return result;
      }
    }
  }
  *v4.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v4) << 32) | 1;
  return result;
}


// CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses::OnAttacked  (line 5245, @0x0000000002c369e0, libserver.so)  // inlines: Attacker, AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetHealth, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::Heal
// strings: "modifier_monkey_king_boundless_strike_crit", "particles/units/heroes/hero_monkey_king/monkey_king_quad_tap_hit.vpcf", "attach_weapon_top", "attach_hitloc", "particles/generic_gameplay/generic_lifesteal_lanecreeps.vpcf", "particles/generic_gameplay/generic_lifesteal.vpcf"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses::OnAttacked(
        CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *Caster; // rax
  CEntityInstance *v10; // rax
  CEntityInstance *v11; // r13
  CEntityInstance *v12; // rax
  CEntityInstance *v13; // r14
  int lifesteal; // r15d
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  CDOTA_ParticleManager *v19; // rax
  CDOTA_BaseNPC *Parent; // rbx
  CDOTA_ParticleManager *v21; // rax
  int v22; // ebx
  CDOTA_ParticleManager *v23; // rax
  CDOTABaseAbility *Ability; // rbx
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC *v26; // rbx
  CDOTA_ParticleManager *v27; // rax
  const Vector *AbsOrigin; // [rsp+10h] [rbp-40h]
  const Vector *v29; // [rsp+10h] [rbp-40h]
  float fDamage; // [rsp+1Ch] [rbp-34h]
  float Health; // [rsp+1Ch] [rbp-34h]
  ModifierVariant_t result; // 0:rax.16

  m_pInstance = 0;
  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[params->hattacker.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetParent(this) != m_pInstance )
    goto LABEL_7;
  if ( this->m_nIgnoreStrikeIndex < 0
    || (Caster = CDOTA_Buff::GetCaster(this),
        result.m_szVal = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_monkey_king_boundless_strike_crit", 0),
        result.m_szVal == 0)
    || (*&result.m_eType = 1, *(result.m_szVal + 18) != this->m_nIgnoreStrikeIndex) )
  {
    if ( CDOTA_Buff::GetCaster(this) == 0
      || (result.m_szVal = CDOTA_Buff::GetCaster(this), *&result.m_eType = 1, (result.m_szVal[2787] & 0x10) == 0) )
    {
      v10 = CEntityHandle::operator CEntityInstance *(&params->htarget);
      if ( v10 == 0 || (v11 = v10, BYTE3(v10[7]._vptr_IHandleEntity) == 0) )
        v11 = 0;
      v12 = CEntityHandle::operator CEntityInstance *(&params->hattacker);
      if ( v12 != 0 && BYTE3(v12[7]._vptr_IHandleEntity) != 0 )
        v13 = v12;
      else
        v13 = 0;
      if ( v11 != 0 && params->bProcessProcs )
      {
        fDamage = params->fDamage;
        if ( CBaseEntity::GetHealth(v11) <= fDamage )
          Health = CBaseEntity::GetHealth(v11);
        else
          Health = params->fDamage;
        lifesteal = this->lifesteal;
        if ( HIBYTE(v13[7].m_CScriptComponent) != HIBYTE(v11[7].m_CScriptComponent)
          && (v11[43].m_iszPrivateVScripts.u.m_Id & 0x10) == 0 )
        {
          ParticleManager = GetParticleManager();
          Particle = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_monkey_king/monkey_king_quad_tap_hit.vpcf",
                       2,
                       v13,
                       0,
                       0);
          AbsOrigin = CBaseEntity::GetAbsOrigin(v13);
          v17 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v17, Particle, 0, v13, 5, "attach_weapon_top", *AbsOrigin, 1);
          v29 = CBaseEntity::GetAbsOrigin(v11);
          v18 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v18, Particle, 1, v11, 5, "attach_hitloc", *v29, 1);
          v19 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v19, Particle);
          if ( (v13[43].m_iszPrivateVScripts.u.m_Id & 0x400) != 0 )
          {
            Parent = CDOTA_Buff::GetParent(this);
            v21 = GetParticleManager();
            v22 = CDOTA_ParticleManager::CreateParticle(
                    v21,
                    "particles/generic_gameplay/generic_lifesteal_lanecreeps.vpcf",
                    1,
                    Parent,
                    0,
                    0);
          }
          else
          {
            v26 = CDOTA_Buff::GetParent(this);
            v27 = GetParticleManager();
            v22 = CDOTA_ParticleManager::CreateParticle(
                    v27,
                    "particles/generic_gameplay/generic_lifesteal.vpcf",
                    1,
                    v26,
                    0,
                    0);
          }
          v23 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v23, v22);
          if ( LOBYTE(v11[71].m_pEntity) == 0 && LOBYTE(v13[71].m_pEntity) == 0 )
          {
            Ability = CDOTA_Buff::GetAbility(this);
            v25 = CDOTA_Buff::GetParent(this);
            CDOTA_BaseNPC::Heal(v25, (lifesteal * Health) / 100.0, Ability, 1, 1);
          }
        }
        if ( CDOTA_BaseNPC::FindModifierByName(v13, "modifier_monkey_king_boundless_strike_crit", 0) == 0 )
          (*(this->_vptr_CDOTA_Buff + 26))(this);
      }
LABEL_7:
      *&result.m_eType = 1;
    }
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses::OnAttackFinished  (line 5317, @0x0000000002c2d470, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses::OnAttackFinished(
        CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  int (**vptr_CDOTA_Buff)(...); // rax
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 > 1
    && (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) != 0
    && (v5 = &v4[params->hattacker.m_Index & 0x1FF]) != 0
    && m_Index == v5->m_EHandle.m_Index
    && (m_pInstance = v5->m_pInstance, v5->m_pInstance != 0)
    && m_pInstance->m_bIsDOTANPC
    && CDOTA_Buff::GetParent(this) == m_pInstance
    && (vptr_CDOTA_Buff = this->_vptr_CDOTA_Buff, this->m_bIsAttackAnim = 0, vptr_CDOTA_Buff[27](this) <= 0) )
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
    *&result.m_eType = 1;
  }
  else
  {
    *&result.m_eType = 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses::GetActivityTranslationModifiers  (line 5338, @0x0000000002c25db0, libserver.so)
// strings: "iron_cudgel_charged_attack"
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses::GetActivityTranslationModifiers(
        CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  *&result.m_eType = 2;
  if ( !this->m_bIsAttackAnim || (result.m_szVal = "iron_cudgel_charged_attack", params->nActivity != 1503) )
    result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses::GetEffectName  (line 5355, @0x0000000002c1dee0, libserver.so)
// strings: "particles/units/heroes/hero_monkey_king/monkey_king_quad_tap_overhead.vpcf"
const char *__fastcall CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses::GetEffectName(
        CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses *const this)
{
  return "particles/units/heroes/hero_monkey_king/monkey_king_quad_tap_overhead.vpcf";
}


// CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses::GetEffectAttachType  (line 5362, @0x0000000002c1def0, libserver.so)
int __fastcall CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses::GetEffectAttachType(
        CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses *const this)
{
  return 7;
}


// CDOTA_Modifier_MonkeyKing_CloudRun::~CDOTA_Modifier_MonkeyKing_CloudRun  (line 5373, @0x0000000002c91510, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_MonkeyKing_CloudRun::~CDOTA_Modifier_MonkeyKing_CloudRun(
        CDOTA_Modifier_MonkeyKing_CloudRun *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E88D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_MonkeyKing_CloudRun::~CDOTA_Modifier_MonkeyKing_CloudRun  (line 5373, @0x0000000002c91530, libserver.so)  // inlines: ~CDOTA_Modifier_MonkeyKing_CloudRun
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_MonkeyKing_CloudRun::~CDOTA_Modifier_MonkeyKing_CloudRun(
        CDOTA_Modifier_MonkeyKing_CloudRun *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E88D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_MonkeyKing_CloudRun::IsDebuff  (line 5378, @0x0000000002c8b390, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_CloudRun::IsDebuff(CDOTA_Modifier_MonkeyKing_CloudRun *const this)
{
  return 0;
}


// CDOTA_Modifier_MonkeyKing_CloudRun::IsPurgable  (line 5379, @0x0000000002c8b3a0, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_CloudRun::IsPurgable(CDOTA_Modifier_MonkeyKing_CloudRun *const this)
{
  return 0;
}


// CDOTA_Modifier_MonkeyKing_CloudRun::IsHidden  (line 5381, @0x0000000002c8b3b0, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_CloudRun::IsHidden(CDOTA_Modifier_MonkeyKing_CloudRun *const this)
{
  return 1;
}


// CDOTA_Modifier_MonkeyKing_CloudRun::GetEffectAttachType  (line 5387, @0x0000000002c8b3c0, libserver.so)
int __fastcall CDOTA_Modifier_MonkeyKing_CloudRun::GetEffectAttachType(CDOTA_Modifier_MonkeyKing_CloudRun *const this)
{
  return 1;
}


// CDOTA_Modifier_MonkeyKing_CloudRun::DeclareFunctions  (line 5395, @0x0000000002c1df00, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_MonkeyKing_CloudRun::GetActivityModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_MonkeyKing_CloudRun::DeclareFunctions(CDOTA_Modifier_MonkeyKing_CloudRun *const this)
{
  this->m_Functions[155].__pfn = CDOTA_Modifier_MonkeyKing_CloudRun::GetActivityModifiers;
  this->m_Functions[155].__delta = 0;
}


// CDOTA_Modifier_MonkeyKing_CloudRun::OnCreated  (line 5403, @0x0000000002c20680, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::CreateBuffParticleEffect, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle
// strings: "particles/econ/items/monkey_king/arcana/monkey_arcana_cloud.vpcf", "attach_cloud"
void __fastcall CDOTA_Modifier_MonkeyKing_CloudRun::OnCreated(
        CDOTA_Modifier_MonkeyKing_CloudRun *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax
  int BuffParticleEffect; // r12d
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v7; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v9; // r13
  CDOTA_ParticleManager *v10; // rax

  Parent = CDOTA_Buff::GetParent(this);
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/econ/items/monkey_king/arcana/monkey_arcana_cloud.vpcf",
                         2,
                         Parent,
                         0);
  v5 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(
    ParticleManager,
    BuffParticleEffect,
    0,
    v7,
    5,
    "attach_cloud",
    *AbsOrigin,
    1);
  v9 = CDOTA_Buff::GetParent(this);
  v10 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v10, BuffParticleEffect, 1, v9, 1, 0, vec3_invalid, 1);
  CDOTA_Buff::AddParticle(this, BuffParticleEffect, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_MonkeyKing_CloudRun::GetActivityModifiers  (line 5417, @0x0000000002c1df20, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_CloudRun::GetActivityModifiers(
        CDOTA_Modifier_MonkeyKing_CloudRun *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "cloudrun";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_MonkeyKing_CloudRunStart::~CDOTA_Modifier_MonkeyKing_CloudRunStart  (line 5427, @0x0000000002c914c0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_MonkeyKing_CloudRunStart::~CDOTA_Modifier_MonkeyKing_CloudRunStart(
        CDOTA_Modifier_MonkeyKing_CloudRunStart *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E8BF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_MonkeyKing_CloudRunStart::~CDOTA_Modifier_MonkeyKing_CloudRunStart  (line 5427, @0x0000000002c914e0, libserver.so)  // inlines: ~CDOTA_Modifier_MonkeyKing_CloudRunStart
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_MonkeyKing_CloudRunStart::~CDOTA_Modifier_MonkeyKing_CloudRunStart(
        CDOTA_Modifier_MonkeyKing_CloudRunStart *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E8BF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_MonkeyKing_CloudRunStart::IsDebuff  (line 5432, @0x0000000002c8b3d0, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_CloudRunStart::IsDebuff(CDOTA_Modifier_MonkeyKing_CloudRunStart *const this)
{
  return 0;
}


// CDOTA_Modifier_MonkeyKing_CloudRunStart::IsPurgable  (line 5433, @0x0000000002c8b3e0, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_CloudRunStart::IsPurgable(
        CDOTA_Modifier_MonkeyKing_CloudRunStart *const this)
{
  return 0;
}


// CDOTA_Modifier_MonkeyKing_CloudRunStart::IsHidden  (line 5435, @0x0000000002c8b3f0, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_CloudRunStart::IsHidden(CDOTA_Modifier_MonkeyKing_CloudRunStart *const this)
{
  return 1;
}


// CDOTA_Modifier_MonkeyKing_CloudRunStart::DeclareFunctions  (line 5449, @0x0000000002c1df40, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_MonkeyKing_CloudRunStart::GetActivityModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_MonkeyKing_CloudRunStart::DeclareFunctions(
        CDOTA_Modifier_MonkeyKing_CloudRunStart *const this)
{
  this->m_Functions[155].__pfn = CDOTA_Modifier_MonkeyKing_CloudRunStart::GetActivityModifiers;
  this->m_Functions[155].__delta = 0;
}


// CDOTA_Modifier_MonkeyKing_CloudRunStart::GetActivityModifiers  (line 5456, @0x0000000002c1df60, libserver.so)
// strings: "cloudrun_start"
ModifierVariant_t __fastcall CDOTA_Modifier_MonkeyKing_CloudRunStart::GetActivityModifiers(
        CDOTA_Modifier_MonkeyKing_CloudRunStart *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "cloudrun_start";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_MonkeyKing_CloudRunStart::OnCreated  (line 5463, @0x0000000002c1ee10, libserver.so)
// calls: CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_MonkeyKing_CloudRunStart::OnCreated(
        CDOTA_Modifier_MonkeyKing_CloudRunStart *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4

  CDOTA_Buff::StartIntervalThink(this, 0.5, v2);
}


// CDOTA_Modifier_MonkeyKing_CloudRunStart::OnIntervalThink  (line 5472, @0x0000000002c1f000, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_monkeyking_cloudrunstart"
void __fastcall CDOTA_Modifier_MonkeyKing_CloudRunStart::OnIntervalThink(
        CDOTA_Modifier_MonkeyKing_CloudRunStart *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveModifierByName(Parent, "modifier_monkeyking_cloudrunstart");
}


