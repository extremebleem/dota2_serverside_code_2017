// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_magnataur.cpp:38
class CDOTA_Unit_Hero_Magnataur : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Magnataur(CDOTA_Unit_Hero_Magnataur &);
	CDOTA_Unit_Hero_Magnataur(CDOTA_Unit_Hero_Magnataur &);
	CDOTA_Unit_Hero_Magnataur();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CDOTA_Unit_Hero_Magnataur();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_magnataur.cpp:46
class C_CDOTA_Unit_Hero_Magnataur_MapInstall {
	C_CDOTA_Unit_Hero_Magnataur_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_magnataur.cpp:59
class CDOTA_Ability_Magnataur_Shockwave : public CDOTABaseAbility {
public:

private:

	int m_nFXIndex;  // +0x390
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
	CDOTA_Ability_Magnataur_Shockwave(CDOTA_Ability_Magnataur_Shockwave &);
	CDOTA_Ability_Magnataur_Shockwave(CDOTA_Ability_Magnataur_Shockwave &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual void OnProjectileThink(const Vector &);
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual bool OnAbilityPhaseStart();
	virtual void OnAbilityPhaseInterrupted();
	virtual float GetCooldown(int);
	CDOTA_Ability_Magnataur_Shockwave();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Magnataur_Shockwave();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[291] OnProjectileThink
	// vtable[289] OnProjectileHit
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[242] GetCooldown
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 928
};

// src/game/shared/dota/units/dota_unit_hero_magnataur.cpp:86
class C_CDOTA_Ability_Magnataur_Shockwave_MapInstall {
	C_CDOTA_Ability_Magnataur_Shockwave_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_magnataur.cpp:246
class CDOTA_Modifier_Magnataur_Shockwave : public CDOTA_Buff {
public:

private:

	int movement_slow;  // +0xba8
	CDOTA_Modifier_Magnataur_Shockwave();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_Magnataur_Shockwave();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_magnataur.cpp:295
class CDOTA_Ability_Magnataur_Empower : public CDOTABaseAbility {
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
	CDOTA_Ability_Magnataur_Empower(CDOTA_Ability_Magnataur_Empower &);
	CDOTA_Ability_Magnataur_Empower(CDOTA_Ability_Magnataur_Empower &);
	CDOTA_Ability_Magnataur_Empower();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Magnataur_Empower();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_magnataur.cpp:347
class CDOTA_Modifier_Magnataur_Empower_Aura : public CDOTA_Buff {
public:

private:

	int aura_radius;  // +0xba8
	CDOTA_Modifier_Magnataur_Empower_Aura();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsHidden();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual ~CDOTA_Modifier_Magnataur_Empower_Aura();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[11] IsHidden
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_magnataur.cpp:390
class CDOTA_Modifier_Magnataur_Empower : public CDOTA_Buff {
public:

private:

	int bonus_damage_pct;  // +0xba8
	float cleave_damage_pct;  // +0xbac
	int cleave_starting_width;  // +0xbb0
	int cleave_ending_width;  // +0xbb4
	int cleave_distance;  // +0xbb8
	float splash_damage_pct;  // +0xbbc
	int splash_radius;  // +0xbc0
	CDOTA_Modifier_Magnataur_Empower();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual const char * GetEffectName();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierBaseDamageOutgoing_Percentage(const CModifierParams &);
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	ModifierVariant_t Tooltip(const CModifierParams &);
	virtual ~CDOTA_Modifier_Magnataur_Empower();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[67] GetEffectName
	// vtable[65] DeclareFunctions
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_magnataur.cpp:510
class CDOTA_Modifier_Magnataur_Empower_Aura_Buff : public CDOTA_Buff {
public:

private:

	int bonus_damage_pct;  // +0xba8
	float cleave_damage_pct;  // +0xbac
	int cleave_starting_width;  // +0xbb0
	int cleave_ending_width;  // +0xbb4
	int cleave_distance;  // +0xbb8
	float splash_damage_pct;  // +0xbbc
	int splash_radius;  // +0xbc0
	CDOTA_Modifier_Magnataur_Empower_Aura_Buff();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsHidden();
	virtual const char * GetEffectName();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierBaseDamageOutgoing_Percentage(const CModifierParams &);
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	ModifierVariant_t Tooltip(const CModifierParams &);
	virtual ~CDOTA_Modifier_Magnataur_Empower_Aura_Buff();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[11] IsHidden
	// vtable[67] GetEffectName
	// vtable[65] DeclareFunctions
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_magnataur.cpp:639
class CDOTA_Ability_Magnataur_Skewer : public CDOTABaseAbility, public CHorizontalMotionController {
public:

private:

	int skewer_radius;  // +0x39c
	int skewer_speed;  // +0x3a0
	int range;  // +0x3a4
	int tree_radius;  // +0x3a8
	int m_nProjectileID;  // +0x3ac
	int m_nTargetsHit;  // +0x3bc
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
	CDOTA_Ability_Magnataur_Skewer(CDOTA_Ability_Magnataur_Skewer &);
	CDOTA_Ability_Magnataur_Skewer(CDOTA_Ability_Magnataur_Skewer &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Ability_Magnataur_Skewer();
	virtual bool OnAbilityPhaseStart();
	virtual void OnAbilityPhaseInterrupted();
	virtual void OnSpellStart();
	virtual void OnUpgrade();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual void OnProjectileThink(const Vector &);
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual float GetAOERadius();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Magnataur_Skewer();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[266] OnSpellStart
	// vtable[268] OnUpgrade
	// vtable[289] OnProjectileHit
	// vtable[291] OnProjectileThink
	// vtable[333] UpdateHorizontalMotion
	// vtable[334] OnHorizontalMotionInterrupted
	// vtable[335] GetAOERadius
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[321] GetSlowDuration
	// sizeof = 960
};

// src/game/shared/dota/units/dota_unit_hero_magnataur.cpp:680
class C_CDOTA_Ability_Magnataur_Skewer_MapInstall {
	C_CDOTA_Ability_Magnataur_Skewer_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_magnataur.cpp:889
class CDOTA_Modifier_Magnataur_Skewer_Movement : public CDOTA_Buff {
public:

private:

	int m_nProjectileID;  // +0xba8
	CDOTA_Modifier_Magnataur_Skewer_Movement();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	ModifierVariant_t OnTeleported(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Magnataur_Skewer_Movement();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[5] CheckState
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_magnataur.cpp:996
class CDOTA_Modifier_Magnataur_Skewer_Impact : public CDOTA_Buff, public CHorizontalMotionController {
public:

private:

	float slow_duration;  // +0xbb4
	int skewer_damage;  // +0xbb8
	float m_flEndTime;  // +0xbc8
	float m_flCurTime;  // +0xbcc
	CDOTA_Modifier_Magnataur_Skewer_Impact();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual int StatusEffectPriority();
	virtual bool IsMotionController();
	virtual void DeclareFunctions();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	ModifierVariant_t OnTeleported(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Magnataur_Skewer_Impact();

	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] OnHorizontalMotionInterrupted
	// vtable[91] IsHorizontalMotionValidToApply
	// vtable[71] StatusEffectPriority
	// vtable[21] IsMotionController
	// vtable[65] DeclareFunctions
	// vtable[5] CheckState
	// sizeof = 3024
};

// src/game/shared/dota/units/dota_unit_hero_magnataur.cpp:1152
class CDOTA_Modifier_Magnataur_Skewer_Slow : public CDOTA_Buff {
public:

private:

	int slow_pct;  // +0xba8
	CDOTA_Modifier_Magnataur_Skewer_Slow();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual bool IsDebuff();
	virtual ~CDOTA_Modifier_Magnataur_Skewer_Slow();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[12] IsDebuff
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_magnataur.cpp:1208
class CDOTA_Ability_Magnataur_ReversePolarity : public CDOTABaseAbility {
public:

private:

	int m_nFXIndex;  // +0x390
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
	CDOTA_Ability_Magnataur_ReversePolarity(CDOTA_Ability_Magnataur_ReversePolarity &);
	CDOTA_Ability_Magnataur_ReversePolarity(CDOTA_Ability_Magnataur_ReversePolarity &);
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
	CDOTA_Ability_Magnataur_ReversePolarity();
	Vector GetPullLocation();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_Magnataur_ReversePolarity();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// sizeof = 928
};

// src/game/shared/dota/units/dota_unit_hero_magnataur.cpp:1234
class C_CDOTA_Ability_Magnataur_ReversePolarity_MapInstall {
	C_CDOTA_Ability_Magnataur_ReversePolarity_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_magnataur.cpp:1344
class CDOTA_Modifier_Magnataur_ReversePolarity : public CDOTA_Buff {
public:

	CDOTA_Modifier_Magnataur_ReversePolarity();
	virtual void OnCreated(KeyValues *);
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsStunDebuff();
	virtual ~CDOTA_Modifier_Magnataur_ReversePolarity();

	// vtable[57] OnCreated
	// vtable[5] CheckState
	// vtable[16] IsStunDebuff
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_magnataur.cpp:1402
class CDOTA_Ability_Holdout_FriendlySkewer : public CDOTABaseAbility, public CHorizontalMotionController {
public:

private:

	int skewer_radius;  // +0x39c
	int skewer_speed;  // +0x3a0
	int max_targets;  // +0x3a4
	int range;  // +0x3a8
	int tree_radius;  // +0x3ac
	int affects_creeps;  // +0x3b0
	int m_nProjectileID;  // +0x3b4
	int m_nTargetsHit;  // +0x3c4
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
	CDOTA_Ability_Holdout_FriendlySkewer(CDOTA_Ability_Holdout_FriendlySkewer &);
	CDOTA_Ability_Holdout_FriendlySkewer(CDOTA_Ability_Holdout_FriendlySkewer &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CDOTA_Ability_Holdout_FriendlySkewer();
	virtual bool OnAbilityPhaseStart();
	virtual void OnAbilityPhaseInterrupted();
	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual void OnProjectileThink(const Vector &);
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual ~CDOTA_Ability_Holdout_FriendlySkewer();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[291] OnProjectileThink
	// vtable[333] UpdateHorizontalMotion
	// vtable[334] OnHorizontalMotionInterrupted
	// sizeof = 968
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Magnataur::~CDOTA_Unit_Hero_Magnataur  (line 38, @0x0000000002c9a130, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Magnataur::~CDOTA_Unit_Hero_Magnataur(CDOTA_Unit_Hero_Magnataur *const this)
{
  this->_vptr_IHandleEntity = &off_45CBB50;
  this->_vptr_INextBotEventResponder = &off_45CCB30;
  this->_vptr_CObstructionObject = &off_45CCE60;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Magnataur::~CDOTA_Unit_Hero_Magnataur  (line 38, @0x0000000002c9a170, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Magnataur
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Magnataur::~CDOTA_Unit_Hero_Magnataur(CDOTA_Unit_Hero_Magnataur *const this)
{
  this->_vptr_IHandleEntity = &off_45CBB50;
  this->_vptr_INextBotEventResponder = &off_45CCB30;
  this->_vptr_CObstructionObject = &off_45CCE60;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Magnataur::Schema_DynamicBinding  (line 40, @0x0000000002c89e50, libserver.so)
// globals: CDOTA_Unit_Hero_Magnataur::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Magnataur::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Magnataur *const this)
{
  return CDOTA_Unit_Hero_Magnataur::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Magnataur::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 40, @0x0000000002c89e80, libserver.so)
// globals: CDOTA_Unit_Hero_Magnataur::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Magnataur::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Magnataur::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Magnataur::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Magnataur::CEntityInstanceEntityClass::DestructInstance  (line 40, @0x0000000002c89e90, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Magnataur>
void __fastcall CDOTA_Unit_Hero_Magnataur::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Magnataur::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Magnataur::CEntityInstanceEntityClass::FreeInstance  (line 40, @0x0000000002c89eb0, libserver.so)
void __fastcall CDOTA_Unit_Hero_Magnataur::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Magnataur::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Magnataur::CEntityInstanceEntityClass::CanAllocate  (line 40, @0x0000000002c89ed0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Magnataur::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Magnataur::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Magnataur::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 40, @0x0000000002c89ee0, libserver.so)
// globals: CDOTA_Unit_Hero_Magnataur::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Magnataur::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Magnataur::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Magnataur::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Magnataur::CEntityInstanceEntityClass::AllocateInstance  (line 40, @0x0000000002c90120, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Magnataur::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Magnataur::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Magnataur::CEntityInstanceEntityClass::ConstructInstance  (line 40, @0x0000000002c940f0, libserver.so)  // inlines: CDOTA_Unit_Hero_Magnataur, Construct<CDOTA_Unit_Hero_Magnataur>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Magnataur::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Magnataur::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_45CBB50;
    *(p + 236) = &off_45CCB30;
    *(p + 257) = &off_45CCE60;
  }
  return p;
}


// CDOTA_Unit_Hero_Magnataur::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002ca35f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Magnataur::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Magnataur::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Magnataur::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002ca3960, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Magnataur::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Magnataur::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Magnataur::GetEntityClassInternal  (line 40, @0x0000000002cbd2f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "npc_dota_hero_magnataur", "CDOTA_Unit_Hero_Magnataur"
// globals: `guard variable for'CDOTA_Unit_Hero_Magnataur::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MagnataurClass, CDOTA_Unit_Hero_Magnataur::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MagnataurClass, __dso_handle, CDOTA_Unit_Hero_Magnataur::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Magnataur::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MagnataurClassInfo, CDOTA_Unit_Hero_Magnataur::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MagnataurClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Magnataur::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Magnataur::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MagnataurClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Magnataur::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MagnataurClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Magnataur::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MagnataurClass);
    CDOTA_Unit_Hero_Magnataur::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MagnataurClass._vptr_CEntityClass = off_45CBAD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Magnataur::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MagnataurClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Magnataur::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Magnataur::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MagnataurClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_MagnataurClass != 0 )
    return &CDOTA_Unit_Hero_Magnataur::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MagnataurClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Magnataur::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MagnataurClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Magnataur::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MagnataurClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Magnataur::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MagnataurClassInfo,
      "CDOTA_Unit_Hero_Magnataur",
      "npc_dota_hero_magnataur",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Magnataur::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MagnataurClassInfo);
  }
  CDOTA_Unit_Hero_Magnataur::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MagnataurClass.m_pClassInfo = &CDOTA_Unit_Hero_Magnataur::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MagnataurClassInfo;
  CDOTA_Unit_Hero_Magnataur::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MagnataurClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Magnataur::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MagnataurClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_MagnataurClass = &CDOTA_Unit_Hero_Magnataur::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MagnataurClass;
  CDOTA_Unit_Hero_Magnataur::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MagnataurClassInfo.m_pClass = &CDOTA_Unit_Hero_Magnataur::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MagnataurClass;
  CDOTA_Unit_Hero_Magnataur::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MagnataurClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_MagnataurClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Magnataur::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MagnataurClass;
}


// CDOTA_Unit_Hero_Magnataur::YouForgotToImplementOrDeclareServerClass  (line 46, @0x0000000002c1cd70, libserver.so)
int __fastcall CDOTA_Unit_Hero_Magnataur::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_Magnataur *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Magnataur::GetServerClass  (line 46, @0x0000000002c35130, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Magnataur::GetServerClass(CDOTA_Unit_Hero_Magnataur *const this)
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


// CDOTA_Ability_Magnataur_Shockwave::~CDOTA_Ability_Magnataur_Shockwave  (line 59, @0x0000000002c98af0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Magnataur_Shockwave::~CDOTA_Ability_Magnataur_Shockwave(
        CDOTA_Ability_Magnataur_Shockwave *const this)
{
  this->_vptr_IHandleEntity = &off_45CCF30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Magnataur_Shockwave::~CDOTA_Ability_Magnataur_Shockwave  (line 59, @0x0000000002c98b10, libserver.so)  // inlines: ~CDOTA_Ability_Magnataur_Shockwave
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Magnataur_Shockwave::~CDOTA_Ability_Magnataur_Shockwave(
        CDOTA_Ability_Magnataur_Shockwave *const this)
{
  this->_vptr_IHandleEntity = &off_45CCF30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Magnataur_Shockwave::Schema_DynamicBinding  (line 61, @0x0000000002c89ef0, libserver.so)
// globals: CDOTA_Ability_Magnataur_Shockwave::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Magnataur_Shockwave::Schema_DynamicBinding(
        const CDOTA_Ability_Magnataur_Shockwave *const this)
{
  return CDOTA_Ability_Magnataur_Shockwave::s_pSchemaBinding;
}


// CDOTA_Ability_Magnataur_Shockwave::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 61, @0x0000000002c89f00, libserver.so)
// globals: CDOTA_Ability_Magnataur_Shockwave::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Magnataur_Shockwave::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Magnataur_Shockwave::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Magnataur_Shockwave::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Magnataur_Shockwave::CEntityInstanceEntityClass::DestructInstance  (line 61, @0x0000000002c89f10, libserver.so)  // inlines: Destruct<CDOTA_Ability_Magnataur_Shockwave>
void __fastcall CDOTA_Ability_Magnataur_Shockwave::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Magnataur_Shockwave::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Magnataur_Shockwave::CEntityInstanceEntityClass::FreeInstance  (line 61, @0x0000000002c89f30, libserver.so)
void __fastcall CDOTA_Ability_Magnataur_Shockwave::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Magnataur_Shockwave::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Magnataur_Shockwave::CEntityInstanceEntityClass::CanAllocate  (line 61, @0x0000000002c89f50, libserver.so)
bool __fastcall CDOTA_Ability_Magnataur_Shockwave::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Magnataur_Shockwave::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Magnataur_Shockwave::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 61, @0x0000000002c89f60, libserver.so)
// globals: CDOTA_Ability_Magnataur_Shockwave::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Magnataur_Shockwave::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Magnataur_Shockwave::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Magnataur_Shockwave::s_pSchemaBinding;
}


// CDOTA_Ability_Magnataur_Shockwave::CEntityInstanceEntityClass::AllocateInstance  (line 61, @0x0000000002c90160, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Magnataur_Shockwave::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Magnataur_Shockwave::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CDOTA_Ability_Magnataur_Shockwave::CEntityInstanceEntityClass::ConstructInstance  (line 61, @0x0000000002c94e80, libserver.so)  // inlines: CDOTA_Ability_Magnataur_Shockwave, Construct<CDOTA_Ability_Magnataur_Shockwave>, InValidate, SndOpEventGuid_t, SoundEventGuid_t
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Magnataur_Shockwave::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Magnataur_Shockwave::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 229) = 0;
    *p = &off_45CCF30;
    *(p + 230) = -1;
    *(p + 228) = -1;
  }
  return p;
}


// CDOTA_Ability_Magnataur_Shockwave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 61, @0x0000000002ca2750, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Magnataur_Shockwave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Magnataur_Shockwave::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Magnataur_Shockwave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 61, @0x0000000002ca2770, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Magnataur_Shockwave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Magnataur_Shockwave::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal  (line 61, @0x0000000002cc1110, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "CDOTA_Ability_Magnataur_Shockwave"
// globals: `guard variable for'CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass, CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Magnataur_Shockwave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClassInfo, CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClassInfo
CEntityClass *__cdecl CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass) != 0 )
  {
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_pClassInfo = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_flags = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_pInputs = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_nInputCount = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_pOutputs = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_nOutputCount = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_pGameClass = 0;
    CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass._vptr_CEntityClass = off_45CCEB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass);
    __cxa_atexit(
      CDOTA_Ability_Magnataur_Shockwave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Magnataur_ShockwaveClass != 0 )
    return &CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass;
  if ( `guard variable for'CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClassInfo,
      "CDOTA_Ability_Magnataur_Shockwave",
      "magnataur_shockwave",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClassInfo);
  }
  CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_pClassInfo = &CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClassInfo;
  CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_pBaseClassInfo = CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Magnataur_ShockwaveClass = &CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass;
  CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClassInfo.m_pClass = &CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass;
  CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Magnataur_ShockwaveClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Magnataur_Shockwave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ShockwaveClass;
}


// CDOTA_Ability_Magnataur_Shockwave::YouForgotToImplementOrDeclareServerClass  (line 86, @0x0000000002c1cd80, libserver.so)
int __fastcall CDOTA_Ability_Magnataur_Shockwave::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Magnataur_Shockwave *const this)
{
  return 0;
}


// CDOTA_Ability_Magnataur_Shockwave::GetServerClass  (line 86, @0x0000000002c35930, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Magnataur_Shockwave::GetServerClass(
        CDOTA_Ability_Magnataur_Shockwave *const this)
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


// CDOTA_Ability_Magnataur_Shockwave::GetCooldown  (line 96, @0x0000000002c63160, libserver.so)
// calls: CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_magnus"
float __fastcall CDOTA_Ability_Magnataur_Shockwave::GetCooldown(
        CDOTA_Ability_Magnataur_Shockwave *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float result; // xmm0_4
  float flCooldown; // [rsp+Ch] [rbp-14h]

  flCooldown = CDOTABaseAbility::GetCooldown(this, iLevel);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_magnus", 0);
  result = flCooldown;
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    return flCooldown - CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  return result;
}


// CDOTA_Ability_Magnataur_Shockwave::OnAbilityPhaseStart  (line 110, @0x0000000002c200f0, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTABaseAbility::GetCaster, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, DOTA_EmitSound
// strings: "particles/units/heroes/hero_magnataur/magnataur_shockwave_cast.vpcf", "attach_attack1", "Hero_Magnataur.ShockWave.Cast"
bool __fastcall CDOTA_Ability_Magnataur_Shockwave::OnAbilityPhaseStart(CDOTA_Ability_Magnataur_Shockwave *const this)
{
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_ParticleManager *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  const CBaseAnimating *v7; // r13
  CDOTA_ParticleManager *v8; // rax
  CDOTA_BaseNPC *v9; // rax

  m_nFXIndex = this->m_nFXIndex;
  if ( m_nFXIndex != -1 )
  {
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 1);
  }
  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = GetParticleManager();
  this->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(
                       v5,
                       "particles/units/heroes/hero_magnataur/magnataur_shockwave_cast.vpcf",
                       1,
                       Caster,
                       0,
                       0);
  v6 = CDOTABaseAbility::GetCaster(this);
  LODWORD(Caster) = this->m_nFXIndex;
  v7 = v6;
  v8 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v8, Caster, 1, v7, 5, "attach_attack1", vec3_invalid, 1);
  v9 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_Magnataur.ShockWave.Cast", v9);
  return 1;
}


// CDOTA_Ability_Magnataur_Shockwave::OnAbilityPhaseInterrupted  (line 122, @0x0000000002c201d0, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTABaseAbility::GetCaster, CBaseEntity::StopSound
// strings: "Hero_Magnataur.ShockWave.Cast"
void __fastcall CDOTA_Ability_Magnataur_Shockwave::OnAbilityPhaseInterrupted(
        CDOTA_Ability_Magnataur_Shockwave *const this)
{
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Caster; // rax

  m_nFXIndex = this->m_nFXIndex;
  if ( m_nFXIndex != -1 )
  {
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 1);
    this->m_nFXIndex = -1;
    Caster = CDOTABaseAbility::GetCaster(this);
    CBaseEntity::StopSound(Caster, "Hero_Magnataur.ShockWave.Cast");
  }
}


// CDOTA_Ability_Magnataur_Shockwave::OnSpellStart  (line 137, @0x0000000002c5f8f0, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<int>, GetSerialNumber, NormalizeInPlace, Set, VectorMultiply, VectorSubtract, operator*, operator-, operator=, sLinearProjectileCreateInfo
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCursorTarget, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCaster, VectorNormalize, CDOTA_ProjectileManager::CreateLinearProjectile, DOTA_EmitSound, CBaseEntity::GetAbsAngles, AngleVectors, CDOTABaseAbility::GetCursorPosition
// strings: "shock_speed", "shock_width", "particles/units/heroes/hero_magnataur/magnataur_shockwave.vpcf", "Hero_Magnataur.ShockWave.Particle"
void __fastcall CDOTA_Ability_Magnataur_Shockwave::OnSpellStart(CDOTA_Ability_Magnataur_Shockwave *const this)
{
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  int LevelSpecialValue; // r14d
  int v5; // r13d
  CBaseEntity *CursorTarget; // rax
  const Vector *AbsOrigin; // rax
  float x; // r12d
  float v9; // r15d
  CDOTA_BaseNPC *Caster; // rax
  const Vector *v11; // rax
  vec_t v12; // xmm1_4
  vec_t v13; // xmm0_4
  int v14; // r15d
  int v15; // eax
  vec_t y; // xmm2_4
  vec_t z; // xmm1_4
  CDOTA_BaseNPC *v18; // rax
  float v19; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  CDOTA_BaseNPC *v21; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v23; // eax
  __int16 v24; // cx
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  const QAngle *AbsAngles; // rax
  float v28; // [rsp+Ch] [rbp-D4h]
  Vector vDirection; // [rsp+20h] [rbp-C0h] BYREF
  sLinearProjectileCreateInfo info; // [rsp+30h] [rbp-B0h] BYREF
  Vector CursorPosition; // 0:kr00_12.12

  m_nFXIndex = this->m_nFXIndex;
  if ( m_nFXIndex != -1 )
  {
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 0);
    this->m_nFXIndex = -1;
  }
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "shock_speed", -1, 0);
  v5 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "shock_width", -1, 0);
  if ( CDOTABaseAbility::GetCursorTarget(this) != 0 )
  {
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(CursorTarget);
    x = AbsOrigin->x;
    v9 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(AbsOrigin->y)));
  }
  else
  {
    CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
    x = CursorPosition.x;
    v9 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(CursorPosition.y)));
  }
  Caster = CDOTABaseAbility::GetCaster(this);
  v11 = CBaseEntity::GetAbsOrigin(Caster);
  v12 = x - v11->x;
  v13 = v9 - v11->y;
  vDirection.z = 0.0;
  vDirection.x = v12;
  vDirection.y = v13;
  if ( VectorNormalize(&vDirection) < 0.0099999998 )
  {
    v26 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v26);
    AngleVectors(AbsAngles, &vDirection, 0, 0);
  }
  v14 = (*(this->_vptr_IHandleEntity + 229))(this, &vec3_origin, 0);
  v15 = (*(this->_vptr_IHandleEntity + 229))(this, &vec3_origin, 0);
  info.hSource.m_Index = -1;
  info.vSpawnOrigin.x = vec3_origin.x;
  info.vVelocity.x = vec3_origin.x;
  info.vAcceleration.x = vec3_origin.x;
  y = vec3_origin.y;
  info.pszEffectName = "particles/units/heroes/hero_magnataur/magnataur_shockwave.vpcf";
  info.fDistance = 0.0;
  info.vSpawnOrigin.y = y;
  info.vVelocity.y = y;
  info.vAcceleration.y = y;
  info.fStartRadius = 0.0;
  info.fEndRadius = 0.0;
  info.bHasFrontalCone = 1;
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
  z = vec3_origin.z;
  info.bStickyFoWReveal = 0;
  info.pKVExtraData = 0;
  info.vSpawnOrigin.z = z;
  info.vVelocity.z = z;
  v28 = LevelSpecialValue * (v14 / (v15 - v5));
  info.vAcceleration.z = z;
  info.fExpireTime = 0.0;
  info.fMaxSpeed = 0.0;
  info.pAbility = this;
  v18 = CDOTABaseAbility::GetCaster(this);
  info.vSpawnOrigin = *CBaseEntity::GetAbsOrigin(v18);
  v19 = v28;
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  info.vVelocity.y = vDirection.y * v19;
  info.vVelocity.z = vDirection.z * v19;
  info.vVelocity.x = v19 * vDirection.x;
  info.fDistance = vptr_IHandleEntity[229](this, &vec3_origin, 0);
  info.fStartRadius = v5;
  info.fEndRadius = v5;
  v21 = CDOTABaseAbility::GetCaster(this);
  if ( v21 != 0 && (m_pEntity = v21->m_pEntity) != 0 )
  {
    v23 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v24 = 0x7FFF;
    else
      v24 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(info.hSource.m_Index) = v24 | info.hSource.m_Index & 0x8000;
    info.hSource.m_Index = (v23 << 15) | info.hSource.m_Index & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  info.iUnitTargetTeam = 2;
  info.iUnitTargetType = 19;
  CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  v25 = CDOTABaseAbility::GetCaster(this);
  this->m_SoundEventGuid = DOTA_EmitSound(10, "Hero_Magnataur.ShockWave.Particle", v25);
}


// CDOTA_Ability_Magnataur_Shockwave::OnProjectileThink  (line 189, @0x0000000002c346d0, libserver.so)  // inlines: AllocateData, CBroadcastRecipientFilter, CSosFieldData, CSosFieldDataFloat3, ClearData, GetDataPtr, Init, SetValue, ~CBroadcastRecipientFilter, ~CSosFieldData, ~CSosFieldDataFloat3
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CRecipientFilter::~CRecipientFilter, operator new [], __stack_chk_fail, CSosFieldData::ClearData, _Unwind_Resume
void __fastcall CDOTA_Ability_Magnataur_Shockwave::OnProjectileThink(
        CDOTA_Ability_Magnataur_Shockwave *const this,
        const Vector *const vDirection)
{
  __m128i z_low; // xmm0
  __m128i y_low; // xmm1
  int v6; // r14d
  int v7; // r15d
  SosFieldValueMem_t *v8; // rax
  CSosFieldData fieldData; // [rsp+10h] [rbp-190h] BYREF
  CBroadcastRecipientFilter filter; // [rsp+30h] [rbp-170h] BYREF
  unsigned __int64 v11; // [rsp+168h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  fieldData.m_nAllocSize = 0;
  z_low = LODWORD(vDirection->z);
  fieldData.m_pData = 0;
  y_low = LODWORD(vDirection->y);
  v6 = _mm_cvtsi128_si32(z_low);
  *&vDirection = vDirection->x;
  v7 = _mm_cvtsi128_si32(y_low);
  fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 10);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT_3;
  v8 = operator new[](0xCu);
  fieldData.m_pData = v8;
  fieldData.m_nAllocSize = 12;
  *v8 = vDirection;
  *(v8 + 1) = v7;
  *(v8 + 2) = v6;
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
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CDOTA_Ability_Magnataur_Shockwave::OnProjectileHit  (line 211, @0x0000000002c6a140, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, ApplyDamage, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSound
// strings: "shock_damage", "particles/units/heroes/hero_magnataur/magnataur_shockwave_hit.vpcf", "Hero_Magnataur.ShockWave.Target"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Magnataur_Shockwave::OnProjectileHit(
        CDOTA_Ability_Magnataur_Shockwave *const this,
        _DWORD *hTarget,
        const Vector *const vLocation)
{
  int LevelSpecialValue; // r13d
  CEntityIdentity *v6; // rax
  CEntityIdentity *v7; // rax
  CDOTA_BaseNPC *m_pInstance; // r12
  unsigned __int64 m_Value; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v12; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v14; // rax

  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "shock_damage", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "slow_duration", -1, 0);
  if ( (*hTarget + 2) <= 1 )
    return 0;
  v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
  if ( v6 == 0 )
    return 0;
  v7 = &v6[*hTarget & 0x1FF];
  if ( v7 == 0 )
    return 0;
  if ( *hTarget != v7->m_EHandle.m_Index )
    return 0;
  m_pInstance = v7->m_pInstance;
  if ( v7->m_pInstance == 0 )
    return 0;
  if ( !m_pInstance->m_bIsDOTANPC )
    return 0;
  m_Value = m_pInstance->m_nUnitState64.m_Value;
  if ( (m_Value & 0x200) != 0 || m_pInstance->m_bIsWaitingToSpawn.m_Value || (m_Value & 0x100) != 0 )
    return 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  ApplyDamage(Caster, m_pInstance, this, LevelSpecialValue, 2, 0);
  v12 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v12) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_magnataur/magnataur_shockwave_hit.vpcf",
                   1,
                   m_pInstance,
                   0,
                   v12);
  v14 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v14, v12);
  DOTA_EmitSound(10, "Hero_Magnataur.ShockWave.Target", m_pInstance);
  return 0;
}


// CDOTA_Ability_Magnataur_Shockwave::GetAbilityDamageToTargetOverInterval  (line 235, @0x0000000002c631d0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "shock_damage"
__int64 __fastcall CDOTA_Ability_Magnataur_Shockwave::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Magnataur_Shockwave *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "shock_damage", -1, 0);
    return (LevelSpecialValue * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Modifier_Magnataur_Shockwave::~CDOTA_Modifier_Magnataur_Shockwave  (line 246, @0x0000000002c92140, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Magnataur_Shockwave::~CDOTA_Modifier_Magnataur_Shockwave(
        CDOTA_Modifier_Magnataur_Shockwave *const this)
{
  this->_vptr_CDOTA_Buff = &off_45CD9F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Magnataur_Shockwave::~CDOTA_Modifier_Magnataur_Shockwave  (line 246, @0x0000000002c92160, libserver.so)  // inlines: ~CDOTA_Modifier_Magnataur_Shockwave
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Magnataur_Shockwave::~CDOTA_Modifier_Magnataur_Shockwave(
        CDOTA_Modifier_Magnataur_Shockwave *const this)
{
  this->_vptr_CDOTA_Buff = &off_45CD9F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Magnataur_Shockwave::IsDebuff  (line 251, @0x0000000002c89f70, libserver.so)
bool __fastcall CDOTA_Modifier_Magnataur_Shockwave::IsDebuff(CDOTA_Modifier_Magnataur_Shockwave *const this)
{
  return 1;
}


// CDOTA_Modifier_Magnataur_Shockwave::GetEffectName  (line 258, @0x0000000002c89f80, libserver.so)
// strings: "particles/items2_fx/rod_of_atos.vpcf"
const char *__fastcall CDOTA_Modifier_Magnataur_Shockwave::GetEffectName(
        CDOTA_Modifier_Magnataur_Shockwave *const this)
{
  return "particles/items2_fx/rod_of_atos.vpcf";
}


// CDOTA_Modifier_Magnataur_Shockwave::OnCreated  (line 269, @0x0000000002c70830, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Magnataur_Shockwave::OnCreated(
        CDOTA_Modifier_Magnataur_Shockwave *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->movement_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "movement_slow", -1, 0);
  else
    this->movement_slow = 0;
}


// CDOTA_Modifier_Magnataur_Shockwave::DeclareFunctions  (line 276, @0x0000000002c1cd90, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Magnataur_Shockwave::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Magnataur_Shockwave::DeclareFunctions(CDOTA_Modifier_Magnataur_Shockwave *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Magnataur_Shockwave::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Magnataur_Shockwave::GetModifierMoveSpeedBonus_Percentage  (line 283, @0x0000000002c1cdb0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Magnataur_Shockwave::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Magnataur_Shockwave *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->movement_slow;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Magnataur_Empower::~CDOTA_Ability_Magnataur_Empower  (line 295, @0x0000000002c98b40, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Magnataur_Empower::~CDOTA_Ability_Magnataur_Empower(
        CDOTA_Ability_Magnataur_Empower *const this)
{
  this->_vptr_IHandleEntity = &off_45CDD50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Magnataur_Empower::~CDOTA_Ability_Magnataur_Empower  (line 295, @0x0000000002c98b60, libserver.so)  // inlines: ~CDOTA_Ability_Magnataur_Empower
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Magnataur_Empower::~CDOTA_Ability_Magnataur_Empower(
        CDOTA_Ability_Magnataur_Empower *const this)
{
  this->_vptr_IHandleEntity = &off_45CDD50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Magnataur_Empower::Schema_DynamicBinding  (line 297, @0x0000000002c89f90, libserver.so)
// globals: CDOTA_Ability_Magnataur_Empower::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Magnataur_Empower::Schema_DynamicBinding(
        const CDOTA_Ability_Magnataur_Empower *const this)
{
  return CDOTA_Ability_Magnataur_Empower::s_pSchemaBinding;
}


// CDOTA_Ability_Magnataur_Empower::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 297, @0x0000000002c89fa0, libserver.so)
// globals: CDOTA_Ability_Magnataur_Empower::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Magnataur_Empower::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Magnataur_Empower::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Magnataur_Empower::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Magnataur_Empower::CEntityInstanceEntityClass::DestructInstance  (line 297, @0x0000000002c89fb0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Magnataur_Empower>
void __fastcall CDOTA_Ability_Magnataur_Empower::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Magnataur_Empower::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Magnataur_Empower::CEntityInstanceEntityClass::FreeInstance  (line 297, @0x0000000002c89fd0, libserver.so)
void __fastcall CDOTA_Ability_Magnataur_Empower::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Magnataur_Empower::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Magnataur_Empower::CEntityInstanceEntityClass::CanAllocate  (line 297, @0x0000000002c89ff0, libserver.so)
bool __fastcall CDOTA_Ability_Magnataur_Empower::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Magnataur_Empower::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Magnataur_Empower::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 297, @0x0000000002c8a000, libserver.so)
// globals: CDOTA_Ability_Magnataur_Empower::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Magnataur_Empower::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Magnataur_Empower::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Magnataur_Empower::s_pSchemaBinding;
}


// CDOTA_Ability_Magnataur_Empower::CEntityInstanceEntityClass::AllocateInstance  (line 297, @0x0000000002c901a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Magnataur_Empower::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Magnataur_Empower::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Magnataur_Empower::CEntityInstanceEntityClass::ConstructInstance  (line 297, @0x0000000002c94ed0, libserver.so)  // inlines: CDOTA_Ability_Magnataur_Empower, Construct<CDOTA_Ability_Magnataur_Empower>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Magnataur_Empower::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Magnataur_Empower::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45CDD50;
  }
  return p;
}


// CDOTA_Ability_Magnataur_Empower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 297, @0x0000000002ca27a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Magnataur_Empower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Magnataur_Empower::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Magnataur_Empower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 297, @0x0000000002ca27c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Magnataur_Empower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Magnataur_Empower::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Magnataur_Empower::GetEntityClassInternal  (line 297, @0x0000000002cbaa40, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "CDOTA_Ability_Magnataur_Empower"
// globals: `guard variable for'CDOTA_Ability_Magnataur_Empower::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_EmpowerClass, CDOTA_Ability_Magnataur_Empower::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_EmpowerClass, __dso_handle, CDOTA_Ability_Magnataur_Empower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Magnataur_Empower::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Magnataur_EmpowerClassInfo, CDOTA_Ability_Magnataur_Empower::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Magnataur_EmpowerClassInfo
CEntityClass *__cdecl CDOTA_Ability_Magnataur_Empower::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Magnataur_Empower::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_EmpowerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Magnataur_Empower::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_EmpowerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Magnataur_Empower::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_EmpowerClass);
    CDOTA_Ability_Magnataur_Empower::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_EmpowerClass._vptr_CEntityClass = off_45CDCD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Magnataur_Empower::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_EmpowerClass);
    __cxa_atexit(
      CDOTA_Ability_Magnataur_Empower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Magnataur_Empower::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_EmpowerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Magnataur_EmpowerClass != 0 )
    return &CDOTA_Ability_Magnataur_Empower::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_EmpowerClass;
  if ( `guard variable for'CDOTA_Ability_Magnataur_Empower::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Magnataur_EmpowerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Magnataur_Empower::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Magnataur_EmpowerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Magnataur_Empower::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Magnataur_EmpowerClassInfo,
      "CDOTA_Ability_Magnataur_Empower",
      "magnataur_empower",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Magnataur_Empower::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Magnataur_EmpowerClassInfo);
  }
  CDOTA_Ability_Magnataur_Empower::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_EmpowerClass.m_pClassInfo = &CDOTA_Ability_Magnataur_Empower::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Magnataur_EmpowerClassInfo;
  CDOTA_Ability_Magnataur_Empower::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_EmpowerClass.m_pBaseClassInfo = CDOTA_Ability_Magnataur_Empower::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Magnataur_EmpowerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Magnataur_EmpowerClass = &CDOTA_Ability_Magnataur_Empower::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_EmpowerClass;
  CDOTA_Ability_Magnataur_Empower::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Magnataur_EmpowerClassInfo.m_pClass = &CDOTA_Ability_Magnataur_Empower::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_EmpowerClass;
  CDOTA_Ability_Magnataur_Empower::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_EmpowerClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Magnataur_EmpowerClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Magnataur_Empower::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_EmpowerClass;
}


// CDOTA_Ability_Magnataur_Empower::GetIntrinsicModifierName  (line 298, @0x0000000002c8a010, libserver.so)
// strings: "modifier_magnataur_empower_aura"
const char *__fastcall CDOTA_Ability_Magnataur_Empower::GetIntrinsicModifierName(
        CDOTA_Ability_Magnataur_Empower *const this)
{
  return "modifier_magnataur_empower_aura";
}


// CDOTA_Ability_Magnataur_Empower::OnSpellStart  (line 312, @0x0000000002c55060, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCursorTarget, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "empower_duration", "modifier_magnataur_empower", "Hero_Magnataur.Empower.Target", "Hero_Magnataur.Empower.Cast"
void __fastcall CDOTA_Ability_Magnataur_Empower::OnSpellStart(CDOTA_Ability_Magnataur_Empower *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v6; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "empower_duration", -1, 0);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    KeyValues::KeyValues(&kv, "modifier_magnataur_empower");
    KeyValues::SetFloat(&kv, "duration", v4);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_magnataur_empower", &kv, 0);
    DOTA_EmitSound(10, "Hero_Magnataur.Empower.Target", v3);
    KeyValues::~KeyValues(&kv);
  }
  v6 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_Magnataur.Empower.Cast", v6);
}


// CDOTA_Ability_Magnataur_Empower::GetAbilityDamageToTargetOverInterval  (line 333, @0x0000000002c63230, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAttacksPerSecond, CDOTA_BaseNPC::GetAverageTrueAttackDamage, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Magnataur_Empower::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Magnataur_Empower *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v8; // rax
  float fIntervalb; // [rsp+0h] [rbp-1Ch]
  float fIntervalc; // [rsp+0h] [rbp-1Ch]
  float fIntervald; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    fIntervalb = CDOTA_BaseNPC::GetAttacksPerSecond(Caster) * fInterval;
    v8 = CDOTABaseAbility::GetCaster(this);
    fIntervalc = fIntervalb * CDOTA_BaseNPC::GetAverageTrueAttackDamage(v8, pTarget);
    fIntervald = fIntervalc * (CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bonus_damage_pct", -1, 0) / 100.0);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 1)) * fIntervald);
  }
  return result;
}


// CDOTA_Modifier_Magnataur_Empower_Aura::~CDOTA_Modifier_Magnataur_Empower_Aura  (line 347, @0x0000000002c920f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Magnataur_Empower_Aura::~CDOTA_Modifier_Magnataur_Empower_Aura(
        CDOTA_Modifier_Magnataur_Empower_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_45CE810;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Magnataur_Empower_Aura::~CDOTA_Modifier_Magnataur_Empower_Aura  (line 347, @0x0000000002c92110, libserver.so)  // inlines: ~CDOTA_Modifier_Magnataur_Empower_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Magnataur_Empower_Aura::~CDOTA_Modifier_Magnataur_Empower_Aura(
        CDOTA_Modifier_Magnataur_Empower_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_45CE810;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Magnataur_Empower_Aura::IsHidden  (line 355, @0x0000000002c8a020, libserver.so)
bool __fastcall CDOTA_Modifier_Magnataur_Empower_Aura::IsHidden(CDOTA_Modifier_Magnataur_Empower_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Magnataur_Empower_Aura::IsAura  (line 357, @0x0000000002c8a030, libserver.so)
bool __fastcall CDOTA_Modifier_Magnataur_Empower_Aura::IsAura(CDOTA_Modifier_Magnataur_Empower_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Magnataur_Empower_Aura::GetModifierAura  (line 358, @0x0000000002c8a040, libserver.so)
// strings: "modifier_magnataur_empower_aura_buff"
const char *__fastcall CDOTA_Modifier_Magnataur_Empower_Aura::GetModifierAura(
        CDOTA_Modifier_Magnataur_Empower_Aura *const this)
{
  return "modifier_magnataur_empower_aura_buff";
}


// CDOTA_Modifier_Magnataur_Empower_Aura::GetAuraSearchTeam  (line 360, @0x0000000002c97690, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter
int __fastcall CDOTA_Modifier_Magnataur_Empower_Aura::GetAuraSearchTeam(
        CDOTA_Modifier_Magnataur_Empower_Aura *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  return CDOTA_BaseNPC::HasScepter(Caster);
}


// CDOTA_Modifier_Magnataur_Empower_Aura::GetAuraSearchType  (line 361, @0x0000000002c8a050, libserver.so)
int __fastcall CDOTA_Modifier_Magnataur_Empower_Aura::GetAuraSearchType(
        CDOTA_Modifier_Magnataur_Empower_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Magnataur_Empower_Aura::GetAuraSearchFlags  (line 362, @0x0000000002c8a060, libserver.so)
int __fastcall CDOTA_Modifier_Magnataur_Empower_Aura::GetAuraSearchFlags(
        CDOTA_Modifier_Magnataur_Empower_Aura *const this)
{
  return 64;
}


// CDOTA_Modifier_Magnataur_Empower_Aura::GetAuraRadius  (line 363, @0x0000000002c8a070, libserver.so)
int __fastcall CDOTA_Modifier_Magnataur_Empower_Aura::GetAuraRadius(CDOTA_Modifier_Magnataur_Empower_Aura *const this)
{
  return this->aura_radius;
}


// CDOTA_Modifier_Magnataur_Empower_Aura::OnCreated  (line 374, @0x0000000002c70d10, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Magnataur_Empower_Aura::OnCreated(
        CDOTA_Modifier_Magnataur_Empower_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->aura_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "aura_radius", -1, 0);
  else
    this->aura_radius = 0;
}


// CDOTA_Modifier_Magnataur_Empower_Aura::OnRefresh  (line 381, @0x0000000002c70a10, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Magnataur_Empower_Aura::OnRefresh(
        CDOTA_Modifier_Magnataur_Empower_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->aura_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "aura_radius", -1, 0);
  else
    this->aura_radius = 0;
}


// CDOTA_Modifier_Magnataur_Empower::~CDOTA_Modifier_Magnataur_Empower  (line 390, @0x0000000002c920a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Magnataur_Empower::~CDOTA_Modifier_Magnataur_Empower(
        CDOTA_Modifier_Magnataur_Empower *const this)
{
  this->_vptr_CDOTA_Buff = &off_45CEB30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Magnataur_Empower::~CDOTA_Modifier_Magnataur_Empower  (line 390, @0x0000000002c920c0, libserver.so)  // inlines: ~CDOTA_Modifier_Magnataur_Empower
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Magnataur_Empower::~CDOTA_Modifier_Magnataur_Empower(
        CDOTA_Modifier_Magnataur_Empower *const this)
{
  this->_vptr_CDOTA_Buff = &off_45CEB30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Magnataur_Empower::GetEffectName  (line 398, @0x0000000002c8a080, libserver.so)
// strings: "particles/units/heroes/hero_magnataur/magnataur_empower.vpcf"
const char *__fastcall CDOTA_Modifier_Magnataur_Empower::GetEffectName(CDOTA_Modifier_Magnataur_Empower *const this)
{
  return "particles/units/heroes/hero_magnataur/magnataur_empower.vpcf";
}


// CDOTA_Modifier_Magnataur_Empower::OnCreated  (line 419, @0x0000000002c742d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "cleave_damage_pct", "cleave_starting_width", "cleave_ending_width", "cleave_distance", "splash_damage_pct", "splash_radius"
void __fastcall CDOTA_Modifier_Magnataur_Empower::OnCreated(
        CDOTA_Modifier_Magnataur_Empower *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_damage_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage_pct", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->bonus_damage_pct = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->cleave_damage_pct = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "cleave_damage_pct", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_11;
    }
  }
  this->cleave_damage_pct = 0.0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->cleave_starting_width = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "cleave_starting_width", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
    goto LABEL_12;
  }
LABEL_11:
  this->cleave_starting_width = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->cleave_ending_width = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "cleave_ending_width", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
    goto LABEL_13;
  }
LABEL_12:
  this->cleave_ending_width = 0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
  {
LABEL_6:
    this->cleave_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "cleave_distance", -1, 0);
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_7;
LABEL_14:
    this->splash_damage_pct = 0.0;
    v9 = CDOTA_Buff::GetAbility(this);
    if ( v9 != 0 )
      goto LABEL_8;
    goto LABEL_15;
  }
LABEL_13:
  this->cleave_distance = 0;
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 == 0 )
    goto LABEL_14;
LABEL_7:
  this->splash_damage_pct = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v8, "splash_damage_pct", -1, 0);
  v9 = CDOTA_Buff::GetAbility(this);
  if ( v9 != 0 )
  {
LABEL_8:
    this->splash_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v9, "splash_radius", -1, 0);
    return;
  }
LABEL_15:
  this->splash_radius = 0;
}


// CDOTA_Modifier_Magnataur_Empower::OnRefresh  (line 432, @0x0000000002c73d60, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "cleave_damage_pct", "cleave_starting_width", "cleave_ending_width", "cleave_distance", "splash_damage_pct", "splash_radius"
void __fastcall CDOTA_Modifier_Magnataur_Empower::OnRefresh(
        CDOTA_Modifier_Magnataur_Empower *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_damage_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage_pct", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->bonus_damage_pct = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->cleave_damage_pct = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "cleave_damage_pct", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_11;
    }
  }
  this->cleave_damage_pct = 0.0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->cleave_starting_width = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "cleave_starting_width", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
    goto LABEL_12;
  }
LABEL_11:
  this->cleave_starting_width = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->cleave_ending_width = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "cleave_ending_width", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
    goto LABEL_13;
  }
LABEL_12:
  this->cleave_ending_width = 0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
  {
LABEL_6:
    this->cleave_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "cleave_distance", -1, 0);
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_7;
LABEL_14:
    this->splash_damage_pct = 0.0;
    v9 = CDOTA_Buff::GetAbility(this);
    if ( v9 != 0 )
      goto LABEL_8;
    goto LABEL_15;
  }
LABEL_13:
  this->cleave_distance = 0;
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 == 0 )
    goto LABEL_14;
LABEL_7:
  this->splash_damage_pct = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v8, "splash_damage_pct", -1, 0);
  v9 = CDOTA_Buff::GetAbility(this);
  if ( v9 != 0 )
  {
LABEL_8:
    this->splash_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v9, "splash_radius", -1, 0);
    return;
  }
LABEL_15:
  this->splash_radius = 0;
}


// CDOTA_Modifier_Magnataur_Empower::DeclareFunctions  (line 445, @0x0000000002c1cdd0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Magnataur_Empower::GetModifierBaseDamageOutgoing_Percentage(CModifierParams const&), CDOTA_Modifier_Magnataur_Empower::OnAttackLanded(CModifierParams const&), CDOTA_Modifier_Magnataur_Empower::Tooltip(CModifierParams const&)
void __fastcall CDOTA_Modifier_Magnataur_Empower::DeclareFunctions(CDOTA_Modifier_Magnataur_Empower *const this)
{
  this->m_Functions[34].__pfn = CDOTA_Modifier_Magnataur_Empower::GetModifierBaseDamageOutgoing_Percentage;
  this->m_Functions[34].__delta = 0;
  this->m_Functions[121].__delta = 0;
  this->m_Functions[121].__pfn = CDOTA_Modifier_Magnataur_Empower::OnAttackLanded;
  this->m_Functions[151].__pfn = CDOTA_Modifier_Magnataur_Empower::Tooltip;
  this->m_Functions[151].__delta = 0;
}


// CDOTA_Modifier_Magnataur_Empower::GetModifierBaseDamageOutgoing_Percentage  (line 455, @0x0000000002c1ce30, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Magnataur_Empower::GetModifierBaseDamageOutgoing_Percentage(
        CDOTA_Modifier_Magnataur_Empower *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage_pct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Magnataur_Empower::OnAttackLanded  (line 462, @0x0000000002c30bf0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::GetAbility, DoCleaveAttack, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter, DoSplashAttack
// strings: "modifier_monkey_king_boundless_strike_crit", "particles/units/heroes/hero_magnataur/magnataur_empower_cleave_effect.vpcf"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Magnataur_Empower::OnAttackLanded(
        CDOTA_Modifier_Magnataur_Empower *const this,
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
  CDOTA_BaseNPC *v13; // r14
  __int64 iRecord; // r13
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *v18; // r13
  CDOTA_BaseNPC *v19; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *v22; // rax
  float flCleaveDamage; // [rsp+0h] [rbp-30h]
  float flDistance; // [rsp+4h] [rbp-2Ch]
  float flSplashDamage; // [rsp+8h] [rbp-28h]
  float flSplashDamagea; // [rsp+8h] [rbp-28h]
  float flStartingWidth; // [rsp+Ch] [rbp-24h]
  float flStartingWidtha; // [rsp+Ch] [rbp-24h]

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
          && !CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value )
        {
          v9 = params->htarget.m_Index;
          if ( v9 + 2 <= 1
            || (v10 = params->htarget.m_Index & 0x7FFF,
                (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v10 >> 9)]) == 0)
            || (v12 = &v11[v10 & 0x1FF]) == 0
            || v9 != v12->m_EHandle.m_Index
            || (v13 = v12->m_pInstance, v12->m_pInstance == 0)
            || !v13->m_bIsDOTANPC )
          {
            v13 = 0;
          }
          iRecord = params->iRecord;
          AttackRecordsManager = GetAttackRecordsManager();
          RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
          if ( RecordByIndex == 0 || !RecordByIndex->m_bFakeAttack )
          {
            Parent = CDOTA_Buff::GetParent(this);
            if ( CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_monkey_king_boundless_strike_crit", 0) == 0
              && v13 != 0
              && this->m_iTeam != v13->m_iTeamNum.m_Value )
            {
              if ( (CDOTA_Buff::GetParent(this)->m_iAttackCapabilities.m_Value & 2) != 0 )
              {
                if ( CDOTA_Buff::GetCaster(this) != 0 )
                {
                  Caster = CDOTA_Buff::GetCaster(this);
                  if ( CDOTA_BaseNPC::HasScepter(Caster) )
                  {
                    flStartingWidtha = this->splash_radius;
                    flSplashDamagea = (this->splash_damage_pct * params->fDamage) / 100.0;
                    Ability = CDOTA_Buff::GetAbility(this);
                    v22 = CDOTA_Buff::GetParent(this);
                    DoSplashAttack(
                      v22,
                      v13,
                      Ability,
                      flSplashDamagea,
                      flStartingWidtha,
                      "particles/units/heroes/hero_magnataur/magnataur_empower_cleave_effect.vpcf",
                      params);
                  }
                }
              }
              else
              {
                flDistance = this->cleave_distance;
                flSplashDamage = this->cleave_ending_width;
                flStartingWidth = this->cleave_starting_width;
                flCleaveDamage = (this->cleave_damage_pct * params->fDamage) / 100.0;
                v18 = CDOTA_Buff::GetAbility(this);
                v19 = CDOTA_Buff::GetParent(this);
                DoCleaveAttack(
                  v19,
                  v13,
                  v18,
                  flCleaveDamage,
                  flStartingWidth,
                  flSplashDamage,
                  flDistance,
                  "particles/units/heroes/hero_magnataur/magnataur_empower_cleave_effect.vpcf",
                  params);
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Magnataur_Empower::Tooltip  (line 499, @0x0000000002c1ce50, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Magnataur_Empower::Tooltip(
        CDOTA_Modifier_Magnataur_Empower *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(this->cleave_damage_pct) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Magnataur_Empower_Aura_Buff::~CDOTA_Modifier_Magnataur_Empower_Aura_Buff  (line 510, @0x0000000002c92050, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Magnataur_Empower_Aura_Buff::~CDOTA_Modifier_Magnataur_Empower_Aura_Buff(
        CDOTA_Modifier_Magnataur_Empower_Aura_Buff *const this)
{
  this->_vptr_CDOTA_Buff = &off_45CEE50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Magnataur_Empower_Aura_Buff::~CDOTA_Modifier_Magnataur_Empower_Aura_Buff  (line 510, @0x0000000002c92070, libserver.so)  // inlines: ~CDOTA_Modifier_Magnataur_Empower_Aura_Buff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Magnataur_Empower_Aura_Buff::~CDOTA_Modifier_Magnataur_Empower_Aura_Buff(
        CDOTA_Modifier_Magnataur_Empower_Aura_Buff *const this)
{
  this->_vptr_CDOTA_Buff = &off_45CEE50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Magnataur_Empower_Aura_Buff::IsHidden  (line 517, @0x0000000002c95810, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_magnataur_empower"
bool __fastcall CDOTA_Modifier_Magnataur_Empower_Aura_Buff::IsHidden(
        CDOTA_Modifier_Magnataur_Empower_Aura_Buff *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  return CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_magnataur_empower", 0) != 0;
}


// CDOTA_Modifier_Magnataur_Empower_Aura_Buff::GetEffectName  (line 519, @0x0000000002c8a090, libserver.so)
// strings: "particles/units/heroes/hero_magnataur/magnataur_empower.vpcf"
const char *__fastcall CDOTA_Modifier_Magnataur_Empower_Aura_Buff::GetEffectName(
        CDOTA_Modifier_Magnataur_Empower_Aura_Buff *const this)
{
  return "particles/units/heroes/hero_magnataur/magnataur_empower.vpcf";
}


// CDOTA_Modifier_Magnataur_Empower_Aura_Buff::OnCreated  (line 540, @0x0000000002c744e0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "cleave_damage_pct", "cleave_starting_width", "cleave_ending_width", "cleave_distance", "splash_damage_pct", "splash_radius"
void __fastcall CDOTA_Modifier_Magnataur_Empower_Aura_Buff::OnCreated(
        CDOTA_Modifier_Magnataur_Empower_Aura_Buff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_damage_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage_pct", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->bonus_damage_pct = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->cleave_damage_pct = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "cleave_damage_pct", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_11;
    }
  }
  this->cleave_damage_pct = 0.0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->cleave_starting_width = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "cleave_starting_width", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
    goto LABEL_12;
  }
LABEL_11:
  this->cleave_starting_width = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->cleave_ending_width = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "cleave_ending_width", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
    goto LABEL_13;
  }
LABEL_12:
  this->cleave_ending_width = 0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
  {
LABEL_6:
    this->cleave_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "cleave_distance", -1, 0);
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_7;
LABEL_14:
    this->splash_damage_pct = 0.0;
    v9 = CDOTA_Buff::GetAbility(this);
    if ( v9 != 0 )
      goto LABEL_8;
    goto LABEL_15;
  }
LABEL_13:
  this->cleave_distance = 0;
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 == 0 )
    goto LABEL_14;
LABEL_7:
  this->splash_damage_pct = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v8, "splash_damage_pct", -1, 0);
  v9 = CDOTA_Buff::GetAbility(this);
  if ( v9 != 0 )
  {
LABEL_8:
    this->splash_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v9, "splash_radius", -1, 0);
    return;
  }
LABEL_15:
  this->splash_radius = 0;
}


// CDOTA_Modifier_Magnataur_Empower_Aura_Buff::OnRefresh  (line 553, @0x0000000002c73f70, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "cleave_damage_pct", "cleave_starting_width", "cleave_ending_width", "cleave_distance", "splash_damage_pct", "splash_radius"
void __fastcall CDOTA_Modifier_Magnataur_Empower_Aura_Buff::OnRefresh(
        CDOTA_Modifier_Magnataur_Empower_Aura_Buff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_damage_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage_pct", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->bonus_damage_pct = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->cleave_damage_pct = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "cleave_damage_pct", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_11;
    }
  }
  this->cleave_damage_pct = 0.0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->cleave_starting_width = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "cleave_starting_width", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
    goto LABEL_12;
  }
LABEL_11:
  this->cleave_starting_width = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->cleave_ending_width = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "cleave_ending_width", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
    goto LABEL_13;
  }
LABEL_12:
  this->cleave_ending_width = 0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
  {
LABEL_6:
    this->cleave_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "cleave_distance", -1, 0);
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_7;
LABEL_14:
    this->splash_damage_pct = 0.0;
    v9 = CDOTA_Buff::GetAbility(this);
    if ( v9 != 0 )
      goto LABEL_8;
    goto LABEL_15;
  }
LABEL_13:
  this->cleave_distance = 0;
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 == 0 )
    goto LABEL_14;
LABEL_7:
  this->splash_damage_pct = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v8, "splash_damage_pct", -1, 0);
  v9 = CDOTA_Buff::GetAbility(this);
  if ( v9 != 0 )
  {
LABEL_8:
    this->splash_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v9, "splash_radius", -1, 0);
    return;
  }
LABEL_15:
  this->splash_radius = 0;
}


// CDOTA_Modifier_Magnataur_Empower_Aura_Buff::DeclareFunctions  (line 566, @0x0000000002c1ce70, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Magnataur_Empower_Aura_Buff::GetModifierBaseDamageOutgoing_Percentage(CModifierParams const&), CDOTA_Modifier_Magnataur_Empower_Aura_Buff::OnAttackLanded(CModifierParams const&), CDOTA_Modifier_Magnataur_Empower_Aura_Buff::Tooltip(CModifierParams const&)
void __fastcall CDOTA_Modifier_Magnataur_Empower_Aura_Buff::DeclareFunctions(
        CDOTA_Modifier_Magnataur_Empower_Aura_Buff *const this)
{
  this->m_Functions[34].__pfn = CDOTA_Modifier_Magnataur_Empower_Aura_Buff::GetModifierBaseDamageOutgoing_Percentage;
  this->m_Functions[34].__delta = 0;
  this->m_Functions[121].__delta = 0;
  this->m_Functions[121].__pfn = CDOTA_Modifier_Magnataur_Empower_Aura_Buff::OnAttackLanded;
  this->m_Functions[151].__pfn = CDOTA_Modifier_Magnataur_Empower_Aura_Buff::Tooltip;
  this->m_Functions[151].__delta = 0;
}


// CDOTA_Modifier_Magnataur_Empower_Aura_Buff::GetModifierBaseDamageOutgoing_Percentage  (line 576, @0x0000000002c25e80, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_magnataur_empower"
ModifierVariant_t __fastcall CDOTA_Modifier_Magnataur_Empower_Aura_Buff::GetModifierBaseDamageOutgoing_Percentage(
        CDOTA_Modifier_Magnataur_Empower_Aura_Buff *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  __m128i v4; // xmm0
  ModifierVariant_t result; // 0:rax.16

  Parent = CDOTA_Buff::GetParent(this);
  if ( CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_magnataur_empower", 0) != 0 )
    return 1uLL;
  *v4.m128i_i32 = this->bonus_damage_pct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v4) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Magnataur_Empower_Aura_Buff::OnAttackLanded  (line 586, @0x0000000002c36110, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, CEntityHandle::operator CEntityInstance*, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, DoCleaveAttack, CDOTA_BaseNPC::HasScepter, DoSplashAttack
// strings: "modifier_magnataur_empower", "modifier_monkey_king_boundless_strike_crit", "particles/units/heroes/hero_magnataur/magnataur_empower_cleave_effect.vpcf"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Magnataur_Empower_Aura_Buff::OnAttackLanded(
        CDOTA_Modifier_Magnataur_Empower_Aura_Buff *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_BaseNPC *Parent; // rax
  CEntityInstance *v10; // rax
  CDOTA_BaseNPC *v11; // r14
  __int64 iRecord; // r13
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // rax
  CDOTA_BaseNPC *v15; // rax
  unsigned __int8 m_Value; // r13
  CDOTABaseAbility *v17; // r13
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *v21; // rax
  float flCleaveDamage; // [rsp+0h] [rbp-30h]
  float flDistance; // [rsp+4h] [rbp-2Ch]
  float flSplashDamage; // [rsp+8h] [rbp-28h]
  float flSplashDamagea; // [rsp+8h] [rbp-28h]
  float flStartingWidth; // [rsp+Ch] [rbp-24h]
  float flStartingWidtha; // [rsp+Ch] [rbp-24h]
  ModifierVariant_t result; // 0:rax.16

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
          && !CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value )
        {
          Parent = CDOTA_Buff::GetParent(this);
          result.m_szVal = CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_magnataur_empower", 0);
          *&result.m_eType = 1;
          if ( result.m_szVal != 0 )
            goto LABEL_6;
          v10 = CEntityHandle::operator CEntityInstance *(&params->htarget);
          if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 )
            v11 = v10;
          else
            v11 = 0;
          iRecord = params->iRecord;
          AttackRecordsManager = GetAttackRecordsManager();
          RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
          if ( RecordByIndex == 0 || !RecordByIndex->m_bFakeAttack )
          {
            v15 = CDOTA_Buff::GetParent(this);
            if ( CDOTA_BaseNPC::FindModifierByName(v15, "modifier_monkey_king_boundless_strike_crit", 0) == 0
              && v11 != 0 )
            {
              m_Value = v11->m_iTeamNum.m_Value;
              if ( m_Value != CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value )
              {
                if ( (CDOTA_Buff::GetParent(this)->m_iAttackCapabilities.m_Value & 2) != 0 )
                {
                  Caster = CDOTA_Buff::GetCaster(this);
                  if ( CDOTA_BaseNPC::HasScepter(Caster) )
                  {
                    flStartingWidtha = this->splash_radius;
                    flSplashDamagea = (this->splash_damage_pct * params->fDamage) / 100.0;
                    Ability = CDOTA_Buff::GetAbility(this);
                    v21 = CDOTA_Buff::GetParent(this);
                    DoSplashAttack(
                      v21,
                      v11,
                      Ability,
                      flSplashDamagea,
                      flStartingWidtha,
                      "particles/units/heroes/hero_magnataur/magnataur_empower_cleave_effect.vpcf",
                      params);
                  }
                }
                else
                {
                  flDistance = this->cleave_distance;
                  flSplashDamage = this->cleave_ending_width;
                  flStartingWidth = this->cleave_starting_width;
                  flCleaveDamage = (this->cleave_damage_pct * params->fDamage) / 100.0;
                  v17 = CDOTA_Buff::GetAbility(this);
                  v18 = CDOTA_Buff::GetParent(this);
                  DoCleaveAttack(
                    v18,
                    v11,
                    v17,
                    flCleaveDamage,
                    flStartingWidth,
                    flSplashDamage,
                    flDistance,
                    "particles/units/heroes/hero_magnataur/magnataur_empower_cleave_effect.vpcf",
                    params);
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


// CDOTA_Modifier_Magnataur_Empower_Aura_Buff::Tooltip  (line 626, @0x0000000002c1ced0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Magnataur_Empower_Aura_Buff::Tooltip(
        CDOTA_Modifier_Magnataur_Empower_Aura_Buff *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(this->cleave_damage_pct) << 32) | 1;
  return result;
}


// CDOTA_Ability_Magnataur_Skewer::~CDOTA_Ability_Magnataur_Skewer  (line 639, @0x0000000002c98b90, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Magnataur_Skewer::~CDOTA_Ability_Magnataur_Skewer(
        CDOTA_Ability_Magnataur_Skewer *const this)
{
  this->_vptr_IHandleEntity = &off_45CF1B0;
  this->_vptr_CHorizontalMotionController = &off_45CFC40;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Magnataur_Skewer::~CDOTA_Ability_Magnataur_Skewer  (line 639, @0x0000000002c98bc0, libserver.so)  // inlines: ~CDOTA_Ability_Magnataur_Skewer
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Magnataur_Skewer::~CDOTA_Ability_Magnataur_Skewer(
        CDOTA_Ability_Magnataur_Skewer *const this)
{
  this->_vptr_IHandleEntity = &off_45CF1B0;
  this->_vptr_CHorizontalMotionController = &off_45CFC40;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Magnataur_Skewer::Schema_DynamicBinding  (line 641, @0x0000000002c8a0a0, libserver.so)
// globals: CDOTA_Ability_Magnataur_Skewer::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Magnataur_Skewer::Schema_DynamicBinding(
        const CDOTA_Ability_Magnataur_Skewer *const this)
{
  return CDOTA_Ability_Magnataur_Skewer::s_pSchemaBinding;
}


// CDOTA_Ability_Magnataur_Skewer::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 641, @0x0000000002c8a0c0, libserver.so)
// globals: CDOTA_Ability_Magnataur_Skewer::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Magnataur_Skewer::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Magnataur_Skewer::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Magnataur_Skewer::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Magnataur_Skewer::CEntityInstanceEntityClass::DestructInstance  (line 641, @0x0000000002c8a0d0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Magnataur_Skewer>
void __fastcall CDOTA_Ability_Magnataur_Skewer::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Magnataur_Skewer::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Magnataur_Skewer::CEntityInstanceEntityClass::FreeInstance  (line 641, @0x0000000002c8a0f0, libserver.so)
void __fastcall CDOTA_Ability_Magnataur_Skewer::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Magnataur_Skewer::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Magnataur_Skewer::CEntityInstanceEntityClass::CanAllocate  (line 641, @0x0000000002c8a110, libserver.so)
bool __fastcall CDOTA_Ability_Magnataur_Skewer::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Magnataur_Skewer::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Magnataur_Skewer::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 641, @0x0000000002c8a120, libserver.so)
// globals: CDOTA_Ability_Magnataur_Skewer::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Magnataur_Skewer::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Magnataur_Skewer::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Magnataur_Skewer::s_pSchemaBinding;
}


// CDOTA_Ability_Magnataur_Skewer::CEntityInstanceEntityClass::AllocateInstance  (line 641, @0x0000000002c901e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Magnataur_Skewer::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Magnataur_Skewer::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 960);
  memset(v1, 0, 0x3C0u);
  return v1;
}


// CDOTA_Ability_Magnataur_Skewer::CEntityInstanceEntityClass::ConstructInstance  (line 641, @0x0000000002c94f00, libserver.so)  // inlines: CDOTA_Ability_Magnataur_Skewer, CHorizontalMotionController, Construct<CDOTA_Ability_Magnataur_Skewer>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Magnataur_Skewer::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Magnataur_Skewer::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 230) = 2;
    *p = &off_45CF1B0;
    *(p + 114) = &off_45CFC40;
  }
  return p;
}


// CDOTA_Ability_Magnataur_Skewer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 641, @0x0000000002ca27f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Magnataur_Skewer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Magnataur_Skewer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Magnataur_Skewer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 641, @0x0000000002ca2810, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Magnataur_Skewer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Magnataur_Skewer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Magnataur_Skewer::GetEntityClassInternal  (line 641, @0x0000000002cbab90, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "magnataur_skewer", "CDOTA_Ability_Magnataur_Skewer"
// globals: `guard variable for'CDOTA_Ability_Magnataur_Skewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_SkewerClass, CDOTA_Ability_Magnataur_Skewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_SkewerClass, __dso_handle, CDOTA_Ability_Magnataur_Skewer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Magnataur_Skewer::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Magnataur_SkewerClassInfo, CDOTA_Ability_Magnataur_Skewer::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Magnataur_SkewerClassInfo
CEntityClass *__cdecl CDOTA_Ability_Magnataur_Skewer::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Magnataur_Skewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_SkewerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Magnataur_Skewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_SkewerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Magnataur_Skewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_SkewerClass);
    CDOTA_Ability_Magnataur_Skewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_SkewerClass._vptr_CEntityClass = off_45CF130;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Magnataur_Skewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_SkewerClass);
    __cxa_atexit(
      CDOTA_Ability_Magnataur_Skewer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Magnataur_Skewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_SkewerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Magnataur_SkewerClass != 0 )
    return &CDOTA_Ability_Magnataur_Skewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_SkewerClass;
  if ( `guard variable for'CDOTA_Ability_Magnataur_Skewer::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Magnataur_SkewerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Magnataur_Skewer::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Magnataur_SkewerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Magnataur_Skewer::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Magnataur_SkewerClassInfo,
      "CDOTA_Ability_Magnataur_Skewer",
      "magnataur_skewer",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Magnataur_Skewer::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Magnataur_SkewerClassInfo);
  }
  CDOTA_Ability_Magnataur_Skewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_SkewerClass.m_pClassInfo = &CDOTA_Ability_Magnataur_Skewer::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Magnataur_SkewerClassInfo;
  CDOTA_Ability_Magnataur_Skewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_SkewerClass.m_pBaseClassInfo = CDOTA_Ability_Magnataur_Skewer::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Magnataur_SkewerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Magnataur_SkewerClass = &CDOTA_Ability_Magnataur_Skewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_SkewerClass;
  CDOTA_Ability_Magnataur_Skewer::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Magnataur_SkewerClassInfo.m_pClass = &CDOTA_Ability_Magnataur_Skewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_SkewerClass;
  CDOTA_Ability_Magnataur_Skewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_SkewerClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Magnataur_SkewerClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Magnataur_Skewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_SkewerClass;
}


// CDOTA_Ability_Magnataur_Skewer::GetAOERadius  (line 659, @0x0000000002cb7880, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_Magnataur_Skewer::GetAOERadius(CDOTA_Ability_Magnataur_Skewer *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "range", -1, 0);
}


// CDOTA_Ability_Magnataur_Skewer::YouForgotToImplementOrDeclareServerClass  (line 680, @0x0000000002c1cef0, libserver.so)
int __fastcall CDOTA_Ability_Magnataur_Skewer::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Magnataur_Skewer *const this)
{
  return 0;
}


// CDOTA_Ability_Magnataur_Skewer::GetServerClass  (line 680, @0x0000000002c35530, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Magnataur_Skewer::GetServerClass(CDOTA_Ability_Magnataur_Skewer *const this)
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


// CDOTA_Ability_Magnataur_Skewer::UpdateHorizontalMotion  (line 690, @0x0000000002c23e50, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTALocomotor::IsLeashedMovementPrevented, CBaseEntity::SetAbsOrigin
void __fastcall CDOTA_Ability_Magnataur_Skewer::UpdateHorizontalMotion(
        CDOTA_Ability_Magnataur_Skewer *const this,
        CDOTA_BaseNPC *me,
        double a3,
        float dt)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTALocomotor *v7; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  v7 = (*(Caster->_vptr_IHandleEntity + 376))(Caster);
  if ( !CDOTALocomotor::IsLeashedMovementPrevented(v7, *&this->m_vProjectileLocation.x) )
    CBaseEntity::SetAbsOrigin(me, &this->m_vProjectileLocation);
}


// CDOTA_Ability_Magnataur_Skewer::OnHorizontalMotionInterrupted  (line 700, @0x0000000002c230e0, libserver.so)
// calls: CDOTA_ProjectileManager::DestroyLinearProjectile, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName, CDOTALocomotor::RemoveHorizontalMotionController
// strings: "modifier_magnataur_skewer_movement"
void __fastcall CDOTA_Ability_Magnataur_Skewer::OnHorizontalMotionInterrupted(
        CDOTA_Ability_Magnataur_Skewer *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTALocomotor *v4; // rax

  CDOTA_ProjectileManager::DestroyLinearProjectile(&g_DOTAProjectileManager, this->m_nProjectileID);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_magnataur_skewer_movement");
  v3 = CDOTABaseAbility::GetCaster(this);
  v4 = (*(v3->_vptr_IHandleEntity + 376))(v3);
  CDOTALocomotor::RemoveHorizontalMotionController(v4, &this->CHorizontalMotionController);
}


// CDOTA_Ability_Magnataur_Skewer::OnAbilityPhaseStart  (line 711, @0x0000000002c26720, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::StartGesture
bool __fastcall CDOTA_Ability_Magnataur_Skewer::OnAbilityPhaseStart(CDOTA_Ability_Magnataur_Skewer *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  if ( !this->m_bStolen.m_Value )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::StartGesture(Caster, 1605, 0.2, 0.2, 0, 0, 1.0);
  }
  return 1;
}


// CDOTA_Ability_Magnataur_Skewer::OnAbilityPhaseInterrupted  (line 723, @0x0000000002c26770, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveGesture
void __fastcall CDOTA_Ability_Magnataur_Skewer::OnAbilityPhaseInterrupted(CDOTA_Ability_Magnataur_Skewer *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  if ( !this->m_bStolen.m_Value )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::RemoveGesture(Caster, 1605);
  }
}


// CDOTA_Ability_Magnataur_Skewer::OnSpellStart  (line 735, @0x0000000002c5fd00, libserver.so)  // inlines: CEntityHandle, CHandle, FastSqrt, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<int>, GetSerialNumber, Length2D, Set, VectorAdd, VectorMultiply, VectorNormalize2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-, operator=, sLinearProjectileCreateInfo
// calls: CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTALocomotor::ApplyHorizontalMotionController, CDOTA_BaseNPC::StartGesture, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCursorPosition, VectorNormalize, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_ProjectileManager::CreateLinearProjectile, CDOTA_BaseNPC::PrimeResumePreviousMovement (19 total)
// strings: "skewer_speed", "skewer_radius", "tree_radius", "modifier_magnataur_skewer_movement", "Hero_Magnataur.Skewer.Cast"
void __fastcall CDOTA_Ability_Magnataur_Skewer::OnSpellStart(CDOTA_Ability_Magnataur_Skewer *const this)
{
  CDOTA_BaseNPC *v2; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTALocomotor *v4; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v6; // rax
  const Vector *AbsOrigin; // r12
  vec_t v8; // xmm0_4
  vec_t v9; // xmm1_4
  float skewer_speed; // xmm0_4
  __m128i x_low; // xmm6
  vec_t v12; // r15d
  CDOTA_BaseNPC *v13; // rax
  const Vector *v14; // r12
  int (**vptr_IHandleEntity)(...); // rax
  float v16; // xmm0_4
  float v17; // xmm1_4
  __m128i v18; // xmm0
  unsigned int v19; // r13d
  int v20; // eax
  __m128i v21; // xmm6
  float v22; // r14d
  float v23; // xmm1_4
  CDOTA_BaseNPC *v24; // r13
  CDOTA_BaseNPC *v25; // rax
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v28; // rax
  const Vector *v29; // rax
  vec_t v30; // xmm0_4
  float skewer_radius; // xmm0_4
  CDOTA_BaseNPC *v32; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v34; // eax
  __int16 v35; // cx
  CDOTA_BaseNPC *v36; // rax
  __m128i v37; // xmm4
  float v38; // r13d
  CDOTA_BaseNPC *v39; // rax
  const Vector *v40; // rax
  vec_t v41; // xmm0_4
  vec_t v42; // xmm2_4
  CDOTA_BaseNPC *v43; // rax
  Vector *v44; // r13
  CDOTA_BaseNPC *v45; // rax
  CDOTA_BaseNPC *v46; // rax
  int range; // r12d
  __m128i v48; // xmm5
  CDOTA_BaseNPC *v49; // rax
  const QAngle *AbsAngles; // rax
  float v51; // [rsp+4h] [rbp-FCh]
  float v52; // [rsp+8h] [rbp-F8h]
  float v53; // [rsp+8h] [rbp-F8h]
  float v54; // [rsp+Ch] [rbp-F4h]
  float v55; // [rsp+Ch] [rbp-F4h]
  Vector vDir; // [rsp+10h] [rbp-F0h] BYREF
  Vector vTeleportEnd; // [rsp+20h] [rbp-E0h]
  sLinearProjectileCreateInfo info; // [rsp+30h] [rbp-D0h] BYREF
  KeyValues kv; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v60; // [rsp+C8h] [rbp-38h]
  Vector CursorPosition; // 0:kr14_12.12

  v60 = __readfsqword(0x28u);
  if ( !this->m_bStolen.m_Value )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::StartGesture(Caster, 1512, 0.2, 0.2, 0, 0, 1.0);
  }
  this->m_nTargetsHit = 0;
  v2 = CDOTABaseAbility::GetCaster(this);
  this->m_vProjectileLocation = *CBaseEntity::GetAbsOrigin(v2);
  v3 = CDOTABaseAbility::GetCaster(this);
  v4 = (*(v3->_vptr_IHandleEntity + 376))(v3);
  if ( CDOTALocomotor::ApplyHorizontalMotionController(v4, &this->CHorizontalMotionController, 0) )
  {
    this->skewer_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "skewer_speed", -1, 0);
    this->skewer_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "skewer_radius", -1, 0);
    this->range = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "range", -1, 0);
    this->tree_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "tree_radius", -1, 0);
    v6 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
    *&info.pszEffectName = CDOTABaseAbility::GetCursorPosition(this);
    v8 = *(&info.pszEffectName + 1) - AbsOrigin->y;
    v9 = *&info.pszEffectName - AbsOrigin->x;
    vDir.z = 0.0;
    vDir.y = v8;
    vDir.x = v9;
    if ( VectorNormalize(&vDir) < 0.0099999998 )
    {
      v49 = CDOTABaseAbility::GetCaster(this);
      AbsAngles = CBaseEntity::GetAbsAngles(v49);
      AngleVectors(AbsAngles, &vDir, 0, 0);
    }
    skewer_speed = this->skewer_speed;
    x_low = LODWORD(vDir.x);
    *x_low.m128i_i32 = vDir.x * skewer_speed;
    v12 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
    v54 = vDir.y * skewer_speed;
    v52 = skewer_speed * vDir.z;
    v13 = CDOTABaseAbility::GetCaster(this);
    v14 = CBaseEntity::GetAbsOrigin(v13);
    CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    *&info.pszEffectName = CursorPosition;
    v16 = CursorPosition.x - v14->x;
    v17 = CursorPosition.y - v14->y;
    LODWORD(v14) = this->range;
    v51 = (v16 * v16) + (v17 * v17);
    v18 = LODWORD(v51);
    *v18.m128i_i32 = fsqrt(v51);
    v19 = _mm_cvtsi128_si32(v18);
    v20 = vptr_IHandleEntity[228](this);
    v21 = _mm_cvtsi32_si128(v19);
    v22 = COERCE_FLOAT(_mm_cvtsi128_si32(v21));
    if ( *v21.m128i_i32 > (v20 + v14) )
    {
      range = this->range;
      *v48.m128i_i32 = ((*(this->_vptr_IHandleEntity + 228))(this) + range);
      v22 = COERCE_FLOAT(_mm_cvtsi128_si32(v48));
    }
    KeyValues::KeyValues(&kv, "modifier_magnataur_skewer_movement");
    KeyValues::SetFloat(&kv, "duration", v23);
    v24 = CDOTABaseAbility::GetCaster(this);
    v25 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v25, v24, this, "modifier_magnataur_skewer_movement", &kv, 0);
    info.bProvidesVision = 0;
    info.hSource.m_Index = -1;
    info.pszEffectName = 0;
    info.fDistance = 0.0;
    info.bHasFrontalCone = 1;
    y = vec3_origin.y;
    info.bDrawsOnMinimap = 0;
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
    info.fStartRadius = 0.0;
    info.fEndRadius = 0.0;
    info.bCheckStartPosition = 0;
    info.iUnitTargetTeam = 0;
    info.iUnitTargetType = 0;
    info.iUnitTargetFlags = 0;
    info.iVisionTeamNumber = -1;
    info.iVisionRadius = -1;
    info.bVisibleToEnemies = 1;
    info.bIgnoreSource = 0;
    info.bStickyFoWReveal = 0;
    info.pKVExtraData = 0;
    info.fExpireTime = 0.0;
    info.fMaxSpeed = 0.0;
    info.pAbility = this;
    v28 = CDOTABaseAbility::GetCaster(this);
    v29 = CBaseEntity::GetAbsOrigin(v28);
    info.vSpawnOrigin.x = v29->x;
    info.vSpawnOrigin.y = v29->y;
    v30 = v29->z;
    info.vVelocity.x = v12;
    info.vVelocity.y = v54;
    info.vSpawnOrigin.z = v30;
    skewer_radius = this->skewer_radius;
    info.vVelocity.z = v52;
    info.fDistance = v22;
    info.fStartRadius = skewer_radius;
    info.fEndRadius = skewer_radius;
    v32 = CDOTABaseAbility::GetCaster(this);
    if ( v32 != 0 && (m_pEntity = v32->m_pEntity) != 0 )
    {
      v34 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v35 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v35 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(info.hSource.m_Index) = v35 | info.hSource.m_Index & 0x8000;
      info.hSource.m_Index = (v34 << 15) | info.hSource.m_Index & 0x7FFF;
    }
    else
    {
      info.hSource.m_Index = -1;
    }
    info.iUnitTargetTeam = 2;
    info.iUnitTargetType = 1;
    info.bHasFrontalCone = 0;
    this->m_nProjectileID = CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
    v36 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::PrimeResumePreviousMovement(v36);
    v37 = LODWORD(vDir.x);
    *v37.m128i_i32 = vDir.x * v22;
    v38 = COERCE_FLOAT(_mm_cvtsi128_si32(v37));
    v55 = v22 * vDir.y;
    v53 = v22 * vDir.z;
    v39 = CDOTABaseAbility::GetCaster(this);
    v40 = CBaseEntity::GetAbsOrigin(v39);
    v41 = v53 + v40->z;
    v42 = v38 + v40->x;
    vTeleportEnd.y = v55 + v40->y;
    vTeleportEnd.z = v41;
    vTeleportEnd.x = v42;
    v43 = CDOTABaseAbility::GetCaster(this);
    v44 = CBaseEntity::GetAbsOrigin(v43);
    v45 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UpdateResumePreviousMovement(v45, *v44, vTeleportEnd);
    v46 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(10, "Hero_Magnataur.Skewer.Cast", v46);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_Magnataur_Skewer::OnUpgrade  (line 792, @0x0000000002c23280, libserver.so)  // inlines: GetGameMode, IsAddOnGame
// calls: CDOTABaseAbility::OnUpgrade, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::SetActivated
// strings: "holdout_friendly_skewer"
void __fastcall CDOTA_Ability_Magnataur_Skewer::OnUpgrade(CDOTA_Ability_Magnataur_Skewer *const this)
{
  int v2; // eax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // r12

  CDOTABaseAbility::OnUpgrade(this);
  v2 = *&g_pGameRules[6].m_szQuestName[68];
  if ( v2 == 15 || v2 == 19 )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "holdout_friendly_skewer", 0);
    if ( AbilityByName != 0 )
    {
      (*(AbilityByName->_vptr_IHandleEntity + 212))(AbilityByName, this->m_iLevel.m_Value);
      if ( this->m_iLevel.m_Value > 1 )
        CDOTABaseAbility::SetActivated(AbilityByName, 1);
    }
  }
}


// CDOTA_Ability_Magnataur_Skewer::OnProjectileHit  (line 814, @0x0000000002c2e810, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName, CDOTALocomotor::RemoveHorizontalMotionController, CDOTA_BaseNPC::StartGesture, CBaseEntity::GetAbsOrigin, CGridNav::DestroyTreesAroundPoint, __stack_chk_fail, CDOTA_BaseNPC::FindModifierByName, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, CDOTA_BaseNPC::AddNewModifier (15 total)
// strings: "modifier_magnataur_skewer_movement", "modifier_magnataur_skewer_impact", "proj_index", "Hero_Magnataur.Skewer.Target"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Magnataur_Skewer::OnProjectileHit(
        CDOTA_Ability_Magnataur_Skewer *const this,
        _DWORD *hTarget,
        const Vector *const vLocation)
{
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTALocomotor *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  unsigned int v11; // r12d
  CDOTA_BaseNPC *v12; // rax
  float v13; // xmm3_4
  CEntityInstance *m_pInstance; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // r14
  float v18; // xmm1_4
  CDOTA_BaseNPC *v19; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+18h] [rbp-28h]
  Vector v22; // 0:xmm0_8.8,8:xmm1_4.4

  v21 = __readfsqword(0x28u);
  if ( (*hTarget + 2) > 1
    && (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F]) != 0
    && (v5 = &v4[*hTarget & 0x1FF]) != 0
    && *hTarget == v5->m_EHandle.m_Index
    && (m_pInstance = v5->m_pInstance, v5->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x800) == 0 )
    {
      Caster = CDOTABaseAbility::GetCaster(this);
      ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_magnataur_skewer_movement", 0);
      if ( ModifierByName != 0 )
      {
        KeyValues::KeyValues(&kv, "modifier_magnataur_skewer_impact");
        (*(ModifierByName->_vptr_CDOTA_Buff + 33))(ModifierByName);
        KeyValues::SetFloat(&kv, "duration", v18);
        KeyValues::SetInt(&kv, "proj_index", this->m_nProjectileID);
        v19 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(m_pInstance, v19, this, "modifier_magnataur_skewer_impact", &kv, 0);
        DOTA_EmitSound(10, "Hero_Magnataur.Skewer.Target", m_pInstance);
        KeyValues::~KeyValues(&kv);
      }
      ++this->m_nTargetsHit;
    }
  }
  else
  {
    v6 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::RemoveModifierByName(v6, "modifier_magnataur_skewer_movement");
    v7 = CDOTABaseAbility::GetCaster(this);
    v8 = (*(v7->_vptr_IHandleEntity + 376))(v7);
    CDOTALocomotor::RemoveHorizontalMotionController(v8, &this->CHorizontalMotionController);
    v9 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::StartGesture(v9, 1606, 0.2, 0.2, 0, 0, 1.0);
    v10 = CDOTABaseAbility::GetCaster(this);
    v11 = (*(v10->_vptr_IHandleEntity + 414))(v10);
    v12 = CDOTABaseAbility::GetCaster(this);
    v22 = *CBaseEntity::GetAbsOrigin(v12);
    CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v11, v22, 410.0, v13);
  }
  return 0;
}


// CDOTA_Ability_Magnataur_Skewer::OnProjectileThink  (line 847, @0x0000000002c23f30, libserver.so)  // inlines: operator=
// calls: CDOTABaseAbility::GetCaster, CDOTALocomotor::IsLeashedMovementPrevented, CDOTA_ProjectileManager::UpdateLinearProjectileSpeed, CDOTA_BaseNPC::FindModifierByName, CGridNav::DestroyTreesAroundPoint, CDOTA_ProjectileManager::DestroyLinearProjectile, CDOTALocomotor::RemoveHorizontalMotionController
// strings: "modifier_magnataur_skewer_movement"
void __fastcall CDOTA_Ability_Magnataur_Skewer::OnProjectileThink(
        CDOTA_Ability_Magnataur_Skewer *const this,
        const Vector *const vLocation)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTALocomotor *v5; // rax
  float v6; // xmm1_4
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  unsigned int v9; // eax
  float v10; // xmm3_4
  CDOTA_BaseNPC *v11; // rax
  CDOTALocomotor *v12; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = (*(Caster->_vptr_IHandleEntity + 376))(Caster);
  if ( CDOTALocomotor::IsLeashedMovementPrevented(v5, *&vLocation->x) )
  {
    CDOTA_ProjectileManager::UpdateLinearProjectileSpeed(&g_DOTAProjectileManager, this->m_nProjectileID, 0.0, v6);
    v7 = CDOTABaseAbility::GetCaster(this);
    if ( CDOTA_BaseNPC::FindModifierByName(v7, "modifier_magnataur_skewer_movement", 0) == 0 )
    {
      CDOTA_ProjectileManager::DestroyLinearProjectile(&g_DOTAProjectileManager, this->m_nProjectileID);
      v11 = CDOTABaseAbility::GetCaster(this);
      v12 = (*(v11->_vptr_IHandleEntity + 376))(v11);
      CDOTALocomotor::RemoveHorizontalMotionController(v12, &this->CHorizontalMotionController);
    }
  }
  else
  {
    this->m_vProjectileLocation.x = vLocation->x;
    this->m_vProjectileLocation.y = vLocation->y;
    this->m_vProjectileLocation.z = vLocation->z;
    v8 = CDOTABaseAbility::GetCaster(this);
    v9 = (*(v8->_vptr_IHandleEntity + 414))(v8);
    CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v9, *vLocation, this->tree_radius, v10);
  }
}


// CDOTA_Ability_Magnataur_Skewer::GetAbilityDamageToTargetOverInterval  (line 870, @0x0000000002c63300, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "skewer_damage"
__int64 __fastcall CDOTA_Ability_Magnataur_Skewer::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Magnataur_Skewer *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "skewer_damage", -1, 0);
    return (LevelSpecialValue * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Ability_Magnataur_Skewer::GetSlowDuration  (line 880, @0x0000000002c56840, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Magnataur_Skewer::GetSlowDuration(CDOTA_Ability_Magnataur_Skewer *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "slow_duration", -1, 0);
}


// CDOTA_Modifier_Magnataur_Skewer_Movement::~CDOTA_Modifier_Magnataur_Skewer_Movement  (line 889, @0x0000000002c92000, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Magnataur_Skewer_Movement::~CDOTA_Modifier_Magnataur_Skewer_Movement(
        CDOTA_Modifier_Magnataur_Skewer_Movement *const this)
{
  this->_vptr_CDOTA_Buff = &off_45CFCD0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Magnataur_Skewer_Movement::~CDOTA_Modifier_Magnataur_Skewer_Movement  (line 889, @0x0000000002c92020, libserver.so)  // inlines: ~CDOTA_Modifier_Magnataur_Skewer_Movement
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Magnataur_Skewer_Movement::~CDOTA_Modifier_Magnataur_Skewer_Movement(
        CDOTA_Modifier_Magnataur_Skewer_Movement *const this)
{
  this->_vptr_CDOTA_Buff = &off_45CFCD0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Magnataur_Skewer_Movement::IsHidden  (line 903, @0x0000000002c8a130, libserver.so)
bool __fastcall CDOTA_Modifier_Magnataur_Skewer_Movement::IsHidden(
        CDOTA_Modifier_Magnataur_Skewer_Movement *const this)
{
  return 1;
}


// CDOTA_Modifier_Magnataur_Skewer_Movement::IsPurgable  (line 904, @0x0000000002c8a140, libserver.so)
bool __fastcall CDOTA_Modifier_Magnataur_Skewer_Movement::IsPurgable(
        CDOTA_Modifier_Magnataur_Skewer_Movement *const this)
{
  return 0;
}


// CDOTA_Modifier_Magnataur_Skewer_Movement::OnCreated  (line 916, @0x0000000002c20ab0, libserver.so)
// calls: KeyValues::GetInt, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle
// strings: "proj_index", "particles/units/heroes/hero_magnataur/magnataur_skewer.vpcf", "attach_horn"
void __fastcall CDOTA_Modifier_Magnataur_Skewer_Movement::OnCreated(
        CDOTA_Modifier_Magnataur_Skewer_Movement *const this,
        KeyValues *pKV)
{
  double v3; // xmm0_8
  float v4; // xmm1_4
  float v5; // xmm0_4
  float v6; // xmm1_4
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v9; // r13
  CDOTA_ParticleManager *v10; // rax

  this->m_nProjectileID = -1;
  this->m_nProjectileID = KeyValues::GetInt(pKV, "proj_index", 0);
  v3 = (*(this->_vptr_CDOTA_Buff + 31))(this);
  v4 = *&v3;
  v5 = 0.0;
  v6 = v4 - 0.30000001;
  if ( v6 >= 0.0 )
    v5 = (*(this->_vptr_CDOTA_Buff + 31))(this) - 0.30000001;
  CDOTA_Buff::StartIntervalThink(this, v5, v6);
  if ( !CDOTA_Buff::GetAbility(this)->m_bStolen.m_Value )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    ParticleManager = GetParticleManager();
    LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                        ParticleManager,
                        "particles/units/heroes/hero_magnataur/magnataur_skewer.vpcf",
                        1,
                        Caster,
                        0,
                        0);
    v9 = CDOTA_Buff::GetCaster(this);
    v10 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v10, Caster, 1, v9, 5, "attach_horn", vec3_invalid, 1);
    CDOTA_Buff::AddParticle(this, Caster, 0, 0, -1, 0, 0);
  }
}


// CDOTA_Modifier_Magnataur_Skewer_Movement::OnIntervalThink  (line 934, @0x0000000002c1f320, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_BaseNPC::StartGesture, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Magnataur_Skewer_Movement::OnIntervalThink(
        CDOTA_Modifier_Magnataur_Skewer_Movement *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax

  if ( !CDOTA_Buff::GetAbility(this)->m_bStolen.m_Value )
  {
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::StartGesture(Parent, 1606, 0.0, 0.2, 0, 0, 1.0);
  }
  CDOTA_Buff::StartIntervalThink(this, -1.0, v2);
}


// CDOTA_Modifier_Magnataur_Skewer_Movement::OnDestroy  (line 948, @0x0000000002c231c0, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveGesture, CDOTA_ProjectileManager::DestroyLinearProjectile
void __fastcall CDOTA_Modifier_Magnataur_Skewer_Movement::OnDestroy(
        CDOTA_Modifier_Magnataur_Skewer_Movement *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // rax

  if ( !CDOTA_Buff::GetAbility(this)->m_bStolen.m_Value )
  {
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::RemoveGesture(Parent, 1605);
    v3 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::RemoveGesture(v3, 1512);
    v4 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::RemoveGesture(v4, 1606);
    CDOTA_ProjectileManager::DestroyLinearProjectile(&g_DOTAProjectileManager, this->m_nProjectileID);
  }
}


// CDOTA_Modifier_Magnataur_Skewer_Movement::DeclareFunctions  (line 964, @0x0000000002c1cf00, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Magnataur_Skewer_Movement::OnTeleported(CModifierParams const&)
void __fastcall CDOTA_Modifier_Magnataur_Skewer_Movement::DeclareFunctions(
        CDOTA_Modifier_Magnataur_Skewer_Movement *const this)
{
  this->m_Functions[142].__pfn = CDOTA_Modifier_Magnataur_Skewer_Movement::OnTeleported;
  this->m_Functions[142].__delta = 0;
}


// CDOTA_Modifier_Magnataur_Skewer_Movement::OnTeleported  (line 971, @0x0000000002c2cd10, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Unit, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Magnataur_Skewer_Movement::OnTeleported(
        CDOTA_Modifier_Magnataur_Skewer_Movement *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx

  m_pInstance = 0;
  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[params->hunit.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        m_pInstance = v6->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetCaster(this) == m_pInstance )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  return 1uLL;
}


// CDOTA_Modifier_Magnataur_Skewer_Movement::CheckState  (line 985, @0x0000000002c1cf20, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Magnataur_Skewer_Movement::CheckState(
        CDOTA_Modifier_Magnataur_Skewer_Movement *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x22uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFFFFFDDLL;
}


// CDOTA_Modifier_Magnataur_Skewer_Impact::~CDOTA_Modifier_Magnataur_Skewer_Impact  (line 996, @0x0000000002c91f90, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Magnataur_Skewer_Impact::~CDOTA_Modifier_Magnataur_Skewer_Impact(
        CDOTA_Modifier_Magnataur_Skewer_Impact *const this)
{
  this->_vptr_CDOTA_Buff = &off_45CFFF0;
  this->_vptr_CHorizontalMotionController = &off_45D02E0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Magnataur_Skewer_Impact::~CDOTA_Modifier_Magnataur_Skewer_Impact  (line 996, @0x0000000002c91fc0, libserver.so)  // inlines: ~CDOTA_Modifier_Magnataur_Skewer_Impact
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Magnataur_Skewer_Impact::~CDOTA_Modifier_Magnataur_Skewer_Impact(
        CDOTA_Modifier_Magnataur_Skewer_Impact *const this)
{
  this->_vptr_CDOTA_Buff = &off_45CFFF0;
  this->_vptr_CHorizontalMotionController = &off_45D02E0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Magnataur_Skewer_Impact::IsPurgable  (line 1005, @0x0000000002c8a150, libserver.so)
bool __fastcall CDOTA_Modifier_Magnataur_Skewer_Impact::IsPurgable(CDOTA_Modifier_Magnataur_Skewer_Impact *const this)
{
  return 0;
}


// CDOTA_Modifier_Magnataur_Skewer_Impact::IsHorizontalMotionValidToApply  (line 1011, @0x0000000002c8a160, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Magnataur_Skewer_Impact::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_Magnataur_Skewer_Impact *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Magnataur_Skewer_Impact::StatusEffectPriority  (line 1012, @0x0000000002c8a190, libserver.so)
int __fastcall CDOTA_Modifier_Magnataur_Skewer_Impact::StatusEffectPriority(
        CDOTA_Modifier_Magnataur_Skewer_Impact *const this)
{
  return 10;
}


// CDOTA_Modifier_Magnataur_Skewer_Impact::IsMotionController  (line 1014, @0x0000000002c8a1a0, libserver.so)
bool __fastcall CDOTA_Modifier_Magnataur_Skewer_Impact::IsMotionController(
        CDOTA_Modifier_Magnataur_Skewer_Impact *const this)
{
  return 1;
}


// CDOTA_Modifier_Magnataur_Skewer_Impact::OnCreated  (line 1040, @0x0000000002c730e0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, Forward, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, Normalized, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CDOTALocomotor::ApplyHorizontalMotionController, CDOTA_Buff::GetCaster, CBaseEntity::EntityToWorldTransform, VectorNormalize, CDOTA_Buff::Destroy
// strings: "skewer_damage"
void __fastcall CDOTA_Modifier_Magnataur_Skewer_Impact::OnCreated(
        CDOTA_Modifier_Magnataur_Skewer_Impact *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v6; // rax
  CDOTA_BaseNPC *Caster; // rax
  const matrix3x4_t *v8; // rax
  vec_t v9; // xmm1_4
  vec_t v10; // xmm2_4
  vec_t x; // xmm0_4
  Vector vec; // [rsp+0h] [rbp-20h] BYREF

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->slow_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "slow_duration", -1, 0);
  else
    this->slow_duration = 0.0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 != 0 )
    this->skewer_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "skewer_damage", -1, 0);
  else
    this->skewer_damage = 0;
  Parent = CDOTA_Buff::GetParent(this);
  v6 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  if ( CDOTALocomotor::ApplyHorizontalMotionController(v6, &this->CHorizontalMotionController, 0) )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    v8 = CBaseEntity::EntityToWorldTransform(Caster);
    v9 = v8->m_flMatVal[2][0];
    v10 = v8->m_flMatVal[1][0];
    vec.x = v8->m_flMatVal[0][0];
    vec.z = v9;
    vec.y = v10;
    VectorNormalize(&vec);
    x = vec.x;
    this->m_flEndTime = 0.30000001;
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


// CDOTA_Modifier_Magnataur_Skewer_Impact::DeclareFunctions  (line 1059, @0x0000000002c1cf40, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Magnataur_Skewer_Impact::GetOverrideAnimation(CModifierParams const&), CDOTA_Modifier_Magnataur_Skewer_Impact::OnTeleported(CModifierParams const&)
void __fastcall CDOTA_Modifier_Magnataur_Skewer_Impact::DeclareFunctions(
        CDOTA_Modifier_Magnataur_Skewer_Impact *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_Magnataur_Skewer_Impact::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
  this->m_Functions[142].__delta = 0;
  this->m_Functions[142].__pfn = CDOTA_Modifier_Magnataur_Skewer_Impact::OnTeleported;
}


// CDOTA_Modifier_Magnataur_Skewer_Impact::OnDestroy  (line 1067, @0x0000000002c22fb0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::RemoveHorizontalMotionController, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, ApplyDamage, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_magnataur_skewer_slow"
void __fastcall CDOTA_Modifier_Magnataur_Skewer_Impact::OnDestroy(CDOTA_Modifier_Magnataur_Skewer_Impact *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v3; // rax
  float v4; // xmm1_4
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v7; // rax
  CDOTABaseAbility *v8; // r14
  CDOTA_BaseNPC *v9; // r13
  CDOTA_BaseNPC *v10; // rax
  float flDamage; // [rsp+Ch] [rbp-44h]
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-28h]

  v13 = __readfsqword(0x28u);
  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveHorizontalMotionController(v3, &this->CHorizontalMotionController);
  KeyValues::KeyValues(&kv, "modifier_magnataur_skewer_slow");
  KeyValues::SetFloat(&kv, "duration", v4);
  Ability = CDOTA_Buff::GetAbility(this);
  Caster = CDOTA_Buff::GetCaster(this);
  v7 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::AddNewModifier(v7, Caster, Ability, "modifier_magnataur_skewer_slow", &kv, 0);
  flDamage = this->skewer_damage;
  v8 = CDOTA_Buff::GetAbility(this);
  v9 = CDOTA_Buff::GetParent(this);
  v10 = CDOTA_Buff::GetCaster(this);
  ApplyDamage(v10, v9, v8, flDamage, 2, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Magnataur_Skewer_Impact::UpdateHorizontalMotion  (line 1082, @0x0000000002c24170, libserver.so)  // inlines: VectorAdd, VectorMultiply, operator*, operator+
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetParent, CDOTALocomotor::IsLeashedMovementPrevented, CBaseEntity::SetAbsOrigin, CGridNav::DestroyTreesAroundPoint, CDOTA_Buff::Destroy
// strings: "modifier_magnataur_skewer_movement"
void __fastcall CDOTA_Modifier_Magnataur_Skewer_Impact::UpdateHorizontalMotion(
        CDOTA_Modifier_Magnataur_Skewer_Impact *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v6; // rax
  const Vector *AbsOrigin; // rax
  vec_t v8; // xmm1_4
  vec_t v9; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  unsigned int v14; // r12d
  CDOTA_BaseNPC *v15; // rax
  float v16; // xmm3_4
  float v17; // [rsp+4h] [rbp-2Ch]
  float v18; // [rsp+8h] [rbp-28h]
  float v19; // [rsp+Ch] [rbp-24h]
  float m_flHullRadius; // [rsp+Ch] [rbp-24h]
  Vector vNewLocation; // [rsp+10h] [rbp-20h] BYREF
  Vector v22; // 0:xmm0_8.8,8:xmm1_4.4

  this->m_flCurTime = a3 + this->m_flCurTime;
  Caster = CDOTA_Buff::GetCaster(this);
  if ( CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_magnataur_skewer_movement", 0) != 0 )
  {
    v17 = this->m_vDirection.x * 200.0;
    v18 = this->m_vDirection.y * 200.0;
    v19 = 200.0 * this->m_vDirection.z;
    v6 = CDOTA_Buff::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
    v8 = v17 + AbsOrigin->x;
    v9 = v19 + AbsOrigin->z;
    vNewLocation.y = v18 + AbsOrigin->y;
    vNewLocation.x = v8;
    vNewLocation.z = v9;
    Parent = CDOTA_Buff::GetParent(this);
    v11 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
    if ( !CDOTALocomotor::IsLeashedMovementPrevented(v11, *&vNewLocation.x) )
    {
      v12 = CDOTA_Buff::GetParent(this);
      CBaseEntity::SetAbsOrigin(v12, &vNewLocation);
      v13 = CDOTA_Buff::GetCaster(this);
      v14 = (*(v13->_vptr_IHandleEntity + 414))(v13);
      m_flHullRadius = CDOTA_Buff::GetParent(this)->m_flHullRadius;
      v15 = CDOTA_Buff::GetParent(this);
      v22 = *CBaseEntity::GetAbsOrigin(v15);
      CGridNav::DestroyTreesAroundPoint(&g_GridNav, 1, v14, v22, m_flHullRadius, v16);
    }
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Magnataur_Skewer_Impact::OnHorizontalMotionInterrupted  (line 1111, @0x0000000002c1f700, libserver.so)
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Magnataur_Skewer_Impact::OnHorizontalMotionInterrupted(
        CDOTA_Modifier_Magnataur_Skewer_Impact *const this)
{
  CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Magnataur_Skewer_Impact::GetOverrideAnimation  (line 1120, @0x0000000002c1cf80, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Magnataur_Skewer_Impact::GetOverrideAnimation(
        CDOTA_Modifier_Magnataur_Skewer_Impact *const this,
        const CModifierParams *const params)
{
  return 0x44BC800000000001uLL;
}


// CDOTA_Modifier_Magnataur_Skewer_Impact::OnTeleported  (line 1127, @0x0000000002c2eb80, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Unit, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Magnataur_Skewer_Impact::OnTeleported(
        CDOTA_Modifier_Magnataur_Skewer_Impact *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  uint32 v8; // eax
  CDOTA_BaseNPC *v9; // r13
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx

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
  if ( CDOTA_Buff::GetCaster(this) == m_pInstance )
    goto LABEL_14;
  v8 = params->hunit.m_Index;
  v9 = 0;
  if ( v8 + 2 > 1 )
  {
    v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v10 != 0 )
    {
      v11 = &v10[params->hunit.m_Index & 0x1FF];
      if ( v11 != 0 && v8 == v11->m_EHandle.m_Index )
        v9 = v11->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetParent(this) == v9 )
LABEL_14:
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  return 1uLL;
}


// CDOTA_Modifier_Magnataur_Skewer_Impact::CheckState  (line 1141, @0x0000000002c1cfa0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Magnataur_Skewer_Impact::CheckState(
        CDOTA_Modifier_Magnataur_Skewer_Impact *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x20uLL;
  buffState->m_nDisabledStateMask &= ~0x20uLL;
}


// CDOTA_Modifier_Magnataur_Skewer_Slow::~CDOTA_Modifier_Magnataur_Skewer_Slow  (line 1152, @0x0000000002c91f40, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Magnataur_Skewer_Slow::~CDOTA_Modifier_Magnataur_Skewer_Slow(
        CDOTA_Modifier_Magnataur_Skewer_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_45D0370;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Magnataur_Skewer_Slow::~CDOTA_Modifier_Magnataur_Skewer_Slow  (line 1152, @0x0000000002c91f60, libserver.so)  // inlines: ~CDOTA_Modifier_Magnataur_Skewer_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Magnataur_Skewer_Slow::~CDOTA_Modifier_Magnataur_Skewer_Slow(
        CDOTA_Modifier_Magnataur_Skewer_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_45D0370;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Magnataur_Skewer_Slow::GetEffectName  (line 1162, @0x0000000002c8a1b0, libserver.so)
// strings: "particles/units/heroes/hero_magnataur/magnataur_skewer_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Magnataur_Skewer_Slow::GetEffectName(
        CDOTA_Modifier_Magnataur_Skewer_Slow *const this)
{
  return "particles/units/heroes/hero_magnataur/magnataur_skewer_debuff.vpcf";
}


// CDOTA_Modifier_Magnataur_Skewer_Slow::IsDebuff  (line 1164, @0x0000000002c8a1c0, libserver.so)
bool __fastcall CDOTA_Modifier_Magnataur_Skewer_Slow::IsDebuff(CDOTA_Modifier_Magnataur_Skewer_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_Magnataur_Skewer_Slow::OnCreated  (line 1175, @0x0000000002c70a70, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Magnataur_Skewer_Slow::OnCreated(
        CDOTA_Modifier_Magnataur_Skewer_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->slow_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "slow_pct", -1, 0);
  else
    this->slow_pct = 0;
}


// CDOTA_Modifier_Magnataur_Skewer_Slow::DeclareFunctions  (line 1182, @0x0000000002c1cfb0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Magnataur_Skewer_Slow::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_Magnataur_Skewer_Slow::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Magnataur_Skewer_Slow::DeclareFunctions(
        CDOTA_Modifier_Magnataur_Skewer_Slow *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Magnataur_Skewer_Slow::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Magnataur_Skewer_Slow::GetModifierAttackSpeedBonus_Constant;
}


// CDOTA_Modifier_Magnataur_Skewer_Slow::GetModifierMoveSpeedBonus_Percentage  (line 1190, @0x0000000002c1cff0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Magnataur_Skewer_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Magnataur_Skewer_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->slow_pct;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Magnataur_Skewer_Slow::GetModifierAttackSpeedBonus_Constant  (line 1197, @0x0000000002c1d010, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Magnataur_Skewer_Slow::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Magnataur_Skewer_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->slow_pct;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Magnataur_ReversePolarity::~CDOTA_Ability_Magnataur_ReversePolarity  (line 1208, @0x0000000002c98c00, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Magnataur_ReversePolarity::~CDOTA_Ability_Magnataur_ReversePolarity(
        CDOTA_Ability_Magnataur_ReversePolarity *const this)
{
  this->_vptr_IHandleEntity = &off_45D06D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Magnataur_ReversePolarity::~CDOTA_Ability_Magnataur_ReversePolarity  (line 1208, @0x0000000002c98c20, libserver.so)  // inlines: ~CDOTA_Ability_Magnataur_ReversePolarity
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Magnataur_ReversePolarity::~CDOTA_Ability_Magnataur_ReversePolarity(
        CDOTA_Ability_Magnataur_ReversePolarity *const this)
{
  this->_vptr_IHandleEntity = &off_45D06D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Magnataur_ReversePolarity::Schema_DynamicBinding  (line 1210, @0x0000000002c8a1d0, libserver.so)
// globals: CDOTA_Ability_Magnataur_ReversePolarity::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Magnataur_ReversePolarity::Schema_DynamicBinding(
        const CDOTA_Ability_Magnataur_ReversePolarity *const this)
{
  return CDOTA_Ability_Magnataur_ReversePolarity::s_pSchemaBinding;
}


// CDOTA_Ability_Magnataur_ReversePolarity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1210, @0x0000000002c8a1e0, libserver.so)
// globals: CDOTA_Ability_Magnataur_ReversePolarity::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Magnataur_ReversePolarity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Magnataur_ReversePolarity::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Magnataur_ReversePolarity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Magnataur_ReversePolarity::CEntityInstanceEntityClass::DestructInstance  (line 1210, @0x0000000002c8a1f0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Magnataur_ReversePolarity>
void __fastcall CDOTA_Ability_Magnataur_ReversePolarity::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Magnataur_ReversePolarity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Magnataur_ReversePolarity::CEntityInstanceEntityClass::FreeInstance  (line 1210, @0x0000000002c8a210, libserver.so)
void __fastcall CDOTA_Ability_Magnataur_ReversePolarity::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Magnataur_ReversePolarity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Magnataur_ReversePolarity::CEntityInstanceEntityClass::CanAllocate  (line 1210, @0x0000000002c8a230, libserver.so)
bool __fastcall CDOTA_Ability_Magnataur_ReversePolarity::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Magnataur_ReversePolarity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Magnataur_ReversePolarity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1210, @0x0000000002c8a240, libserver.so)
// globals: CDOTA_Ability_Magnataur_ReversePolarity::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Magnataur_ReversePolarity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Magnataur_ReversePolarity::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Magnataur_ReversePolarity::s_pSchemaBinding;
}


// CDOTA_Ability_Magnataur_ReversePolarity::CEntityInstanceEntityClass::AllocateInstance  (line 1210, @0x0000000002c90220, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Magnataur_ReversePolarity::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Magnataur_ReversePolarity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CDOTA_Ability_Magnataur_ReversePolarity::CEntityInstanceEntityClass::ConstructInstance  (line 1210, @0x0000000002c94f50, libserver.so)  // inlines: CDOTA_Ability_Magnataur_ReversePolarity, Construct<CDOTA_Ability_Magnataur_ReversePolarity>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Magnataur_ReversePolarity::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Magnataur_ReversePolarity::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = -1;
    *p = &off_45D06D0;
  }
  return p;
}


// CDOTA_Ability_Magnataur_ReversePolarity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1210, @0x0000000002ca2840, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Magnataur_ReversePolarity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Magnataur_ReversePolarity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Magnataur_ReversePolarity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1210, @0x0000000002ca2860, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Magnataur_ReversePolarity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Magnataur_ReversePolarity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Magnataur_ReversePolarity::GetEntityClassInternal  (line 1210, @0x0000000002cbace0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "magnataur_reverse_polarity", "CDOTA_Ability_Magnataur_ReversePolarity"
// globals: `guard variable for'CDOTA_Ability_Magnataur_ReversePolarity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ReversePolarityClass, CDOTA_Ability_Magnataur_ReversePolarity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ReversePolarityClass, __dso_handle, CDOTA_Ability_Magnataur_ReversePolarity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Magnataur_ReversePolarity::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Magnataur_ReversePolarityClassInfo, CDOTA_Ability_Magnataur_ReversePolarity::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Magnataur_ReversePolarityClassInfo
CEntityClass *__cdecl CDOTA_Ability_Magnataur_ReversePolarity::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Magnataur_ReversePolarity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ReversePolarityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Magnataur_ReversePolarity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ReversePolarityClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Magnataur_ReversePolarity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ReversePolarityClass);
    CDOTA_Ability_Magnataur_ReversePolarity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ReversePolarityClass._vptr_CEntityClass = off_45D0650;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Magnataur_ReversePolarity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ReversePolarityClass);
    __cxa_atexit(
      CDOTA_Ability_Magnataur_ReversePolarity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Magnataur_ReversePolarity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ReversePolarityClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Magnataur_ReversePolarityClass != 0 )
    return &CDOTA_Ability_Magnataur_ReversePolarity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ReversePolarityClass;
  if ( `guard variable for'CDOTA_Ability_Magnataur_ReversePolarity::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Magnataur_ReversePolarityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Magnataur_ReversePolarity::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Magnataur_ReversePolarityClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Magnataur_ReversePolarity::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Magnataur_ReversePolarityClassInfo,
      "CDOTA_Ability_Magnataur_ReversePolarity",
      "magnataur_reverse_polarity",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Magnataur_ReversePolarity::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Magnataur_ReversePolarityClassInfo);
  }
  CDOTA_Ability_Magnataur_ReversePolarity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ReversePolarityClass.m_pClassInfo = &CDOTA_Ability_Magnataur_ReversePolarity::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Magnataur_ReversePolarityClassInfo;
  CDOTA_Ability_Magnataur_ReversePolarity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ReversePolarityClass.m_pBaseClassInfo = CDOTA_Ability_Magnataur_ReversePolarity::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Magnataur_ReversePolarityClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Magnataur_ReversePolarityClass = &CDOTA_Ability_Magnataur_ReversePolarity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ReversePolarityClass;
  CDOTA_Ability_Magnataur_ReversePolarity::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Magnataur_ReversePolarityClassInfo.m_pClass = &CDOTA_Ability_Magnataur_ReversePolarity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ReversePolarityClass;
  CDOTA_Ability_Magnataur_ReversePolarity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ReversePolarityClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Magnataur_ReversePolarityClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Magnataur_ReversePolarity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Magnataur_ReversePolarityClass;
}


// CDOTA_Ability_Magnataur_ReversePolarity::YouForgotToImplementOrDeclareServerClass  (line 1234, @0x0000000002c1d030, libserver.so)
int __fastcall CDOTA_Ability_Magnataur_ReversePolarity::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Magnataur_ReversePolarity *const this)
{
  return 0;
}


// CDOTA_Ability_Magnataur_ReversePolarity::GetServerClass  (line 1234, @0x0000000002c35d30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Magnataur_ReversePolarity::GetServerClass(
        CDOTA_Ability_Magnataur_ReversePolarity *const this)
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


// CDOTA_Ability_Magnataur_ReversePolarity::OnAbilityPhaseStart  (line 1241, @0x0000000002c603c0, libserver.so)  // inlines: GetLevelSpecialValueFor<int>, Vector
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_ParticleManager::CreateParticle, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl
// strings: "pull_radius", "particles/units/heroes/hero_magnataur/magnataur_reverse_polarity.vpcf"
bool __fastcall CDOTA_Ability_Magnataur_ReversePolarity::OnAbilityPhaseStart(
        CDOTA_Ability_Magnataur_ReversePolarity *const this)
{
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  int LevelSpecialValue; // r15d
  CDOTA_ParticleManager *v5; // rax
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v8; // rax
  int v9; // r13d
  const CBaseAnimating *v10; // r14
  CDOTA_ParticleManager *v11; // rax
  CDOTA_ParticleManager *v12; // rax
  unsigned int v13; // xmm0_4
  int v14; // ebx
  CDOTA_ParticleManager *v15; // rax
  double v17; // [rsp+10h] [rbp-40h]

  m_nFXIndex = this->m_nFXIndex;
  if ( m_nFXIndex != -1 )
  {
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 1);
  }
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "pull_radius", -1, 0);
  v5 = GetParticleManager();
  this->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(
                       v5,
                       "particles/units/heroes/hero_magnataur/magnataur_reverse_polarity.vpcf",
                       2,
                       0,
                       0,
                       0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  v8 = CDOTABaseAbility::GetCaster(this);
  v9 = this->m_nFXIndex;
  v10 = v8;
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v11, v9, 3, v10, 1, 0, *AbsOrigin, 1);
  LODWORD(AbsOrigin) = this->m_nFXIndex;
  v12 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(
    v12,
    AbsOrigin,
    1,
    COERCE_DOUBLE(COERCE_UNSIGNED_INT(LevelSpecialValue)),
    0.0);
  *&v13 = (*(this->_vptr_IHandleEntity + 232))(this);
  v14 = this->m_nFXIndex;
  *&v17 = v13;
  v15 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v15, v14, 2, v17, 0.0);
  return 1;
}


// CDOTA_Ability_Magnataur_ReversePolarity::OnAbilityPhaseInterrupted  (line 1260, @0x0000000002c20230, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect
void __fastcall CDOTA_Ability_Magnataur_ReversePolarity::OnAbilityPhaseInterrupted(
        CDOTA_Ability_Magnataur_ReversePolarity *const this)
{
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax

  m_nFXIndex = this->m_nFXIndex;
  if ( m_nFXIndex != -1 )
  {
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 1);
    this->m_nFXIndex = -1;
  }
}


// CDOTA_Ability_Magnataur_ReversePolarity::OnSpellStart  (line 1274, @0x0000000002c6e630, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetAbilityData, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, VectorAdd, VectorMultiply, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator=, operator[], ~CUtlVector
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex (21 total)
// strings: "pull_duration", "pull_radius", "modifier_magnataur_reverse_polarity", "particles/units/heroes/hero_magnataur/magnataur_reverse_polarity_pull.vpcf", "Hero_Magnataur.ReversePolarity.Cast"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Magnataur_ReversePolarity::OnSpellStart(
        CDOTA_Ability_Magnataur_ReversePolarity *const this)
{
  int m_nFXIndex; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  int LevelSpecialValue; // r12d
  float v5; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  __m128i v7; // xmm0
  __m128i x_low; // xmm3
  __m128i y_low; // xmm4
  float v10; // r15d
  float v11; // r14d
  float v12; // ebx
  CDOTA_BaseNPC *v13; // rax
  const Vector *AbsOrigin; // rax
  vec_t v15; // xmm2_4
  vec_t v16; // xmm1_4
  vec_t v17; // xmm0_4
  __m128i v18; // xmm5
  float v19; // r12d
  CDOTA_BaseNPC *v20; // rbx
  CDOTA_BaseNPC *v21; // rax
  const Vector *v22; // r14
  CDOTA_BaseNPC *v23; // rax
  __int64 v24; // rbx
  CHandle<CBaseEntity> *v25; // rdx
  uint32 m_Index; // eax
  __int16 v27; // cx
  CEntityIdentity *v28; // rdx
  CEntityIdentity *v29; // rdx
  CEntityInstance *m_pInstance; // r12
  CDOTA_ParticleManager *v31; // rax
  int Particle; // r14d
  const Vector *v33; // r15
  CDOTA_ParticleManager *v34; // rax
  CDOTA_ParticleManager *v35; // rax
  CDOTA_BaseNPC *v36; // rax
  CDOTA_BaseNPC *v37; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // ebx
  CDOTA_BaseNPC *v40; // rax
  float v41; // xmm3_4
  Vector vFwd; // [rsp+30h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v45; // [rsp+78h] [rbp-38h]

  v45 = __readfsqword(0x28u);
  m_nFXIndex = this->m_nFXIndex;
  if ( m_nFXIndex != -1 )
  {
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 0);
    this->m_nFXIndex = -1;
  }
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "pull_duration", -1, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "pull_radius", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_magnataur_reverse_polarity");
  KeyValues::SetFloat(&kv, "duration", v5);
  Caster = CDOTABaseAbility::GetCaster(this);
  (*(Caster->_vptr_IHandleEntity + 61))(Caster, &vFwd, 0, 0);
  v7 = 0x43160000u;
  x_low = LODWORD(vFwd.x);
  y_low = LODWORD(vFwd.y);
  *x_low.m128i_i32 = vFwd.x * 150.0;
  *y_low.m128i_i32 = vFwd.y * 150.0;
  *v7.m128i_i32 = 150.0 * vFwd.z;
  v10 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
  v11 = COERCE_FLOAT(_mm_cvtsi128_si32(y_low));
  v12 = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
  v13 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v13);
  v15 = v10 + AbsOrigin->x;
  entities.m_Size = 0;
  v16 = v11 + AbsOrigin->y;
  v17 = v12 + AbsOrigin->z;
  entities.m_Memory.m_nAllocationCount = 0;
  *v18.m128i_i32 = LevelSpecialValue;
  entities.m_Memory.m_pMemory = 0;
  this->m_vPullLocation.x = v15;
  this->m_vPullLocation.y = v16;
  this->m_vPullLocation.z = v17;
  entities.m_Memory.m_nGrowSize = 0;
  v19 = COERCE_FLOAT(_mm_cvtsi128_si32(v18));
  v20 = CDOTABaseAbility::GetCaster(this);
  v21 = CDOTABaseAbility::GetCaster(this);
  v22 = CBaseEntity::GetAbsOrigin(v21);
  v23 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v23->m_iTeamNum.m_Value, v22, v20, v19, &entities, 2, 19, 16, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v24 = 0;
    do
    {
      while ( 1 )
      {
        v25 = &entities.m_Memory.m_pMemory[v24];
        m_Index = v25->m_Index;
        if ( v25->m_Index + 2 > 1 )
        {
          v27 = v25->m_Index;
          v28 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v25->m_Index) >> 9) & 0x3F];
          if ( v28 != 0 )
          {
            v29 = &v28[v27 & 0x1FF];
            if ( v29 != 0 && m_Index == v29->m_EHandle.m_Index )
            {
              m_pInstance = v29->m_pInstance;
              if ( v29->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                break;
            }
          }
        }
        if ( entities.m_Size <= ++v24 )
          goto LABEL_15;
      }
      if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x800) == 0 )
      {
        v31 = GetParticleManager();
        Particle = CDOTA_ParticleManager::CreateParticle(
                     v31,
                     "particles/units/heroes/hero_magnataur/magnataur_reverse_polarity_pull.vpcf",
                     1,
                     m_pInstance,
                     0,
                     0);
        v33 = CBaseEntity::GetAbsOrigin(m_pInstance);
        v34 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControl(v34, Particle, 1, *&v33->x, v33->z);
        v35 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v35, Particle);
        FindClearSpaceForUnit(m_pInstance, this->m_vPullLocation, 1);
      }
      v36 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v36, this, "modifier_magnataur_reverse_polarity", &kv, 0);
      ++v24;
    }
    while ( entities.m_Size > v24 );
  }
LABEL_15:
  v37 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_Magnataur.ReversePolarity.Cast", v37);
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  v40 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(
    g_pGameRules,
    v40,
    1,
    m_iAbilityID,
    0,
    0,
    *&vec3_origin.x,
    vec3_origin.z,
    -1.0,
    v41);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Magnataur_ReversePolarity::GetAbilityDamageToTargetOverInterval  (line 1325, @0x0000000002c63360, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "polarity_damage"
__int64 __fastcall CDOTA_Ability_Magnataur_ReversePolarity::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Magnataur_ReversePolarity *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "polarity_damage", -1, 0);
    return (LevelSpecialValue * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Ability_Magnataur_ReversePolarity::GetStunDuration  (line 1335, @0x0000000002c56860, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Magnataur_ReversePolarity::GetStunDuration(
        CDOTA_Ability_Magnataur_ReversePolarity *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "hero_stun_duration", -1, 0);
}


// CDOTA_Modifier_Magnataur_ReversePolarity::~CDOTA_Modifier_Magnataur_ReversePolarity  (line 1344, @0x0000000002c91ef0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Magnataur_ReversePolarity::~CDOTA_Modifier_Magnataur_ReversePolarity(
        CDOTA_Modifier_Magnataur_ReversePolarity *const this)
{
  this->_vptr_CDOTA_Buff = &off_45D1190;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Magnataur_ReversePolarity::~CDOTA_Modifier_Magnataur_ReversePolarity  (line 1344, @0x0000000002c91f10, libserver.so)  // inlines: ~CDOTA_Modifier_Magnataur_ReversePolarity
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Magnataur_ReversePolarity::~CDOTA_Modifier_Magnataur_ReversePolarity(
        CDOTA_Modifier_Magnataur_ReversePolarity *const this)
{
  this->_vptr_CDOTA_Buff = &off_45D1190;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Magnataur_ReversePolarity::IsStunDebuff  (line 1352, @0x0000000002c8a250, libserver.so)
bool __fastcall CDOTA_Modifier_Magnataur_ReversePolarity::IsStunDebuff(
        CDOTA_Modifier_Magnataur_ReversePolarity *const this)
{
  return 1;
}


// CDOTA_Modifier_Magnataur_ReversePolarity::OnCreated  (line 1359, @0x0000000002c75ac0, libserver.so)  // inlines: DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, CDOTA_Buff::GetParent, KeyValues::SetFloat, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, ApplyDamage, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail (13 total)
// strings: "polarity_damage", "creep_stun_duration", "modifier_stunned", "Hero_Magnataur.ReversePolarity.Stun"
void __fastcall CDOTA_Modifier_Magnataur_ReversePolarity::OnCreated(
        CDOTA_Modifier_Magnataur_ReversePolarity *const this,
        KeyValues *pKV)
{
  int LevelSpecialValue; // r13d
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  float v7; // xmm1_4
  CDOTABaseAbility *v8; // r15
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_BaseNPC *Parent; // rax
  __m128i v11; // xmm1
  float v12; // r13d
  CDOTABaseAbility *v13; // r15
  CDOTA_BaseNPC *v14; // r14
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  KeyValues kv; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-38h]

  LevelSpecialValue = 0;
  v18 = __readfsqword(0x28u);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "polarity_damage", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "hero_stun_duration", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 == 0 )
      goto LABEL_6;
  }
  else
  {
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 == 0 )
      goto LABEL_6;
  }
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "creep_stun_duration", -1, 0);
LABEL_6:
  KeyValues::KeyValues(&kv, "modifier_stunned");
  CDOTA_Buff::GetParent(this);
  KeyValues::SetFloat(&kv, "duration", v7);
  v8 = CDOTA_Buff::GetAbility(this);
  Caster = CDOTA_Buff::GetCaster(this);
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::AddNewModifier(Parent, Caster, v8, "modifier_stunned", &kv, 0);
  *v11.m128i_i32 = LevelSpecialValue;
  v12 = COERCE_FLOAT(_mm_cvtsi128_si32(v11));
  v13 = CDOTA_Buff::GetAbility(this);
  v14 = CDOTA_Buff::GetParent(this);
  v15 = CDOTA_Buff::GetCaster(this);
  ApplyDamage(v15, v14, v13, v12, 2, 0);
  v16 = CDOTA_Buff::GetParent(this);
  DOTA_EmitSound(10, "Hero_Magnataur.ReversePolarity.Stun", v16);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Magnataur_ReversePolarity::CheckState  (line 1383, @0x0000000002c1d040, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Magnataur_ReversePolarity::CheckState(
        CDOTA_Modifier_Magnataur_ReversePolarity *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x20uLL;
  buffState->m_nDisabledStateMask &= ~0x20uLL;
}


// CDOTA_Ability_Holdout_FriendlySkewer::~CDOTA_Ability_Holdout_FriendlySkewer  (line 1402, @0x0000000002c98c50, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Holdout_FriendlySkewer::~CDOTA_Ability_Holdout_FriendlySkewer(
        CDOTA_Ability_Holdout_FriendlySkewer *const this)
{
  this->_vptr_IHandleEntity = &off_45D14F0;
  this->_vptr_CHorizontalMotionController = &off_45D1F78;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Holdout_FriendlySkewer::~CDOTA_Ability_Holdout_FriendlySkewer  (line 1402, @0x0000000002c98c80, libserver.so)  // inlines: ~CDOTA_Ability_Holdout_FriendlySkewer
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Holdout_FriendlySkewer::~CDOTA_Ability_Holdout_FriendlySkewer(
        CDOTA_Ability_Holdout_FriendlySkewer *const this)
{
  this->_vptr_IHandleEntity = &off_45D14F0;
  this->_vptr_CHorizontalMotionController = &off_45D1F78;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Holdout_FriendlySkewer::Schema_DynamicBinding  (line 1404, @0x0000000002c8a260, libserver.so)
// globals: CDOTA_Ability_Holdout_FriendlySkewer::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Holdout_FriendlySkewer::Schema_DynamicBinding(
        const CDOTA_Ability_Holdout_FriendlySkewer *const this)
{
  return CDOTA_Ability_Holdout_FriendlySkewer::s_pSchemaBinding;
}


// CDOTA_Ability_Holdout_FriendlySkewer::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1404, @0x0000000002c8a280, libserver.so)
// globals: CDOTA_Ability_Holdout_FriendlySkewer::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Holdout_FriendlySkewer::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Holdout_FriendlySkewer::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Holdout_FriendlySkewer::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Holdout_FriendlySkewer::CEntityInstanceEntityClass::DestructInstance  (line 1404, @0x0000000002c8a290, libserver.so)  // inlines: Destruct<CDOTA_Ability_Holdout_FriendlySkewer>
void __fastcall CDOTA_Ability_Holdout_FriendlySkewer::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Holdout_FriendlySkewer::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Holdout_FriendlySkewer::CEntityInstanceEntityClass::FreeInstance  (line 1404, @0x0000000002c8a2b0, libserver.so)
void __fastcall CDOTA_Ability_Holdout_FriendlySkewer::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Holdout_FriendlySkewer::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Holdout_FriendlySkewer::CEntityInstanceEntityClass::CanAllocate  (line 1404, @0x0000000002c8a2d0, libserver.so)
bool __fastcall CDOTA_Ability_Holdout_FriendlySkewer::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Holdout_FriendlySkewer::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Holdout_FriendlySkewer::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1404, @0x0000000002c8a2e0, libserver.so)
// globals: CDOTA_Ability_Holdout_FriendlySkewer::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Holdout_FriendlySkewer::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Holdout_FriendlySkewer::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Holdout_FriendlySkewer::s_pSchemaBinding;
}


// CDOTA_Ability_Holdout_FriendlySkewer::CEntityInstanceEntityClass::AllocateInstance  (line 1404, @0x0000000002c90260, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Holdout_FriendlySkewer::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Holdout_FriendlySkewer::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 968);
  memset(v1, 0, 0x3C8u);
  return v1;
}


// CDOTA_Ability_Holdout_FriendlySkewer::CEntityInstanceEntityClass::ConstructInstance  (line 1404, @0x0000000002c94f90, libserver.so)  // inlines: CDOTA_Ability_Holdout_FriendlySkewer, CHorizontalMotionController, Construct<CDOTA_Ability_Holdout_FriendlySkewer>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Holdout_FriendlySkewer::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Holdout_FriendlySkewer::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 230) = 2;
    *p = &off_45D14F0;
    *(p + 114) = &off_45D1F78;
  }
  return p;
}


// CDOTA_Ability_Holdout_FriendlySkewer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1404, @0x0000000002ca2890, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Holdout_FriendlySkewer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Holdout_FriendlySkewer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Holdout_FriendlySkewer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1404, @0x0000000002ca28b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Holdout_FriendlySkewer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Holdout_FriendlySkewer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal  (line 1404, @0x0000000002cbfd30, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "holdout_friendly_skewer", "CDOTA_Ability_Holdout_FriendlySkewer"
// globals: `guard variable for'CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass, CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Holdout_FriendlySkewer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClassInfo, CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClassInfo
CEntityClass *__cdecl CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass) != 0 )
  {
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_pClassInfo = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_flags = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_pInputs = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_nInputCount = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_pOutputs = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_nOutputCount = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_pGameClass = 0;
    CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass._vptr_CEntityClass = off_45D1470;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass);
    __cxa_atexit(
      CDOTA_Ability_Holdout_FriendlySkewer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Holdout_FriendlySkewerClass != 0 )
    return &CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass;
  if ( `guard variable for'CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClassInfo,
      "CDOTA_Ability_Holdout_FriendlySkewer",
      "holdout_friendly_skewer",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClassInfo);
  }
  CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_pClassInfo = &CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClassInfo;
  CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_pBaseClassInfo = CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Holdout_FriendlySkewerClass = &CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass;
  CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClassInfo.m_pClass = &CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass;
  CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Holdout_FriendlySkewerClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Holdout_FriendlySkewer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FriendlySkewerClass;
}


// CDOTA_Ability_Holdout_FriendlySkewer::UpdateHorizontalMotion  (line 1442, @0x0000000002c23ec0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTALocomotor::IsLeashedMovementPrevented, CBaseEntity::SetAbsOrigin
void __fastcall CDOTA_Ability_Holdout_FriendlySkewer::UpdateHorizontalMotion(
        CDOTA_Ability_Holdout_FriendlySkewer *const this,
        CDOTA_BaseNPC *me,
        double a3,
        float dt)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTALocomotor *v7; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  v7 = (*(Caster->_vptr_IHandleEntity + 376))(Caster);
  if ( !CDOTALocomotor::IsLeashedMovementPrevented(v7, *&this->m_vProjectileLocation.x) )
    CBaseEntity::SetAbsOrigin(me, &this->m_vProjectileLocation);
}


// CDOTA_Ability_Holdout_FriendlySkewer::OnHorizontalMotionInterrupted  (line 1452, @0x0000000002c23150, libserver.so)
// calls: CDOTA_ProjectileManager::DestroyLinearProjectile, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName, CDOTALocomotor::RemoveHorizontalMotionController
// strings: "modifier_magnataur_skewer_movement"
void __fastcall CDOTA_Ability_Holdout_FriendlySkewer::OnHorizontalMotionInterrupted(
        CDOTA_Ability_Holdout_FriendlySkewer *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTALocomotor *v4; // rax

  CDOTA_ProjectileManager::DestroyLinearProjectile(&g_DOTAProjectileManager, this->m_nProjectileID);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_magnataur_skewer_movement");
  v3 = CDOTABaseAbility::GetCaster(this);
  v4 = (*(v3->_vptr_IHandleEntity + 376))(v3);
  CDOTALocomotor::RemoveHorizontalMotionController(v4, &this->CHorizontalMotionController);
}


// CDOTA_Ability_Holdout_FriendlySkewer::OnAbilityPhaseStart  (line 1463, @0x0000000002c267a0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::StartGesture
bool __fastcall CDOTA_Ability_Holdout_FriendlySkewer::OnAbilityPhaseStart(
        CDOTA_Ability_Holdout_FriendlySkewer *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  if ( !this->m_bStolen.m_Value )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::StartGesture(Caster, 1605, 0.2, 0.2, 0, 0, 1.0);
  }
  return 1;
}


// CDOTA_Ability_Holdout_FriendlySkewer::OnAbilityPhaseInterrupted  (line 1475, @0x0000000002c267f0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveGesture
void __fastcall CDOTA_Ability_Holdout_FriendlySkewer::OnAbilityPhaseInterrupted(
        CDOTA_Ability_Holdout_FriendlySkewer *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  if ( !this->m_bStolen.m_Value )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::RemoveGesture(Caster, 1605);
  }
}


// CDOTA_Ability_Holdout_FriendlySkewer::OnSpellStart  (line 1487, @0x0000000002c60530, libserver.so)  // inlines: CEntityHandle, CHandle, FastSqrt, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<int>, GetSerialNumber, Length2D, Set, VectorAdd, VectorMultiply, VectorNormalize2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-, operator=, sLinearProjectileCreateInfo
// calls: CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTALocomotor::ApplyHorizontalMotionController, CDOTA_BaseNPC::StartGesture, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCursorPosition, VectorNormalize, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_ProjectileManager::CreateLinearProjectile, CDOTA_BaseNPC::PrimeResumePreviousMovement (19 total)
// strings: "skewer_speed", "skewer_radius", "max_targets", "tree_radius", "affects_creeps", "modifier_magnataur_skewer_movement" (7 total)
void __fastcall CDOTA_Ability_Holdout_FriendlySkewer::OnSpellStart(CDOTA_Ability_Holdout_FriendlySkewer *const this)
{
  CDOTA_BaseNPC *v2; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTALocomotor *v4; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v6; // rax
  const Vector *AbsOrigin; // r12
  vec_t v8; // xmm0_4
  vec_t v9; // xmm1_4
  float skewer_speed; // xmm0_4
  CDOTA_BaseNPC *v11; // rax
  const Vector *v12; // r12
  float range; // xmm6_4
  CDOTA_BaseNPC *v14; // r13
  CDOTA_BaseNPC *v15; // rax
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v18; // rax
  const Vector *v19; // rax
  vec_t v20; // xmm0_4
  CDOTA_BaseNPC *v21; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v23; // eax
  __int16 v24; // cx
  int affects_creeps; // eax
  CDOTA_BaseNPC *v26; // rax
  __m128i x_low; // xmm4
  float v28; // r13d
  CDOTA_BaseNPC *v29; // rax
  const Vector *v30; // rax
  vec_t v31; // xmm0_4
  vec_t v32; // xmm2_4
  CDOTA_BaseNPC *v33; // rax
  Vector *v34; // r13
  CDOTA_BaseNPC *v35; // rax
  CDOTA_BaseNPC *v36; // rax
  CDOTA_BaseNPC *v37; // rax
  const QAngle *AbsAngles; // rax
  vec_t vVel; // [rsp+10h] [rbp-F0h]
  vec_t vVel_4; // [rsp+14h] [rbp-ECh]
  vec_t vVel_8; // [rsp+18h] [rbp-E8h]
  float vVel_8a; // [rsp+18h] [rbp-E8h]
  float fRange; // [rsp+1Ch] [rbp-E4h]
  float fRangea; // [rsp+1Ch] [rbp-E4h]
  Vector vDir; // [rsp+20h] [rbp-E0h] BYREF
  Vector vTeleportEnd; // [rsp+30h] [rbp-D0h]
  sLinearProjectileCreateInfo info; // [rsp+40h] [rbp-C0h] BYREF
  KeyValues kv; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v49; // [rsp+D8h] [rbp-28h]
  Vector CursorPosition; // 0:kr14_12.12

  v49 = __readfsqword(0x28u);
  if ( !this->m_bStolen.m_Value )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::StartGesture(Caster, 1512, 0.2, 0.2, 0, 0, 1.0);
  }
  this->m_nTargetsHit = 0;
  v2 = CDOTABaseAbility::GetCaster(this);
  this->m_vProjectileLocation = *CBaseEntity::GetAbsOrigin(v2);
  v3 = CDOTABaseAbility::GetCaster(this);
  v4 = (*(v3->_vptr_IHandleEntity + 376))(v3);
  if ( CDOTALocomotor::ApplyHorizontalMotionController(v4, &this->CHorizontalMotionController, 0) )
  {
    this->skewer_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "skewer_speed", -1, 0);
    this->skewer_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "skewer_radius", -1, 0);
    this->max_targets = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "max_targets", -1, 0);
    this->range = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "range", -1, 0);
    this->tree_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "tree_radius", -1, 0);
    this->affects_creeps = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "affects_creeps", -1, 0);
    v6 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
    *&info.pszEffectName = CDOTABaseAbility::GetCursorPosition(this);
    v8 = *(&info.pszEffectName + 1) - AbsOrigin->y;
    v9 = *&info.pszEffectName - AbsOrigin->x;
    vDir.z = 0.0;
    vDir.y = v8;
    vDir.x = v9;
    if ( VectorNormalize(&vDir) < 0.0099999998 )
    {
      v37 = CDOTABaseAbility::GetCaster(this);
      AbsAngles = CBaseEntity::GetAbsAngles(v37);
      AngleVectors(AbsAngles, &vDir, 0, 0);
    }
    skewer_speed = this->skewer_speed;
    vVel_8 = vDir.x * skewer_speed;
    vVel_4 = vDir.y * skewer_speed;
    vVel = skewer_speed * vDir.z;
    v11 = CDOTABaseAbility::GetCaster(this);
    v12 = CBaseEntity::GetAbsOrigin(v11);
    CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
    range = this->range;
    *&info.pszEffectName = CursorPosition;
    fRange = fminf(
               range,
               fsqrt(
                 ((CursorPosition.x - v12->x) * (CursorPosition.x - v12->x))
               + ((CursorPosition.y - v12->y) * (CursorPosition.y - v12->y))));
    KeyValues::KeyValues(&kv, "modifier_magnataur_skewer_movement");
    KeyValues::SetFloat(&kv, "duration", this->skewer_speed);
    v14 = CDOTABaseAbility::GetCaster(this);
    v15 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v15, v14, this, "modifier_magnataur_skewer_movement", &kv, 0);
    info.bHasFrontalCone = 1;
    info.hSource.m_Index = -1;
    info.pszEffectName = 0;
    info.fDistance = 0.0;
    info.bCheckStartPosition = 0;
    y = vec3_origin.y;
    info.bProvidesVision = 0;
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
    info.fStartRadius = 0.0;
    info.fEndRadius = 0.0;
    info.iUnitTargetTeam = 0;
    info.iUnitTargetType = 0;
    info.iUnitTargetFlags = 0;
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
    v18 = CDOTABaseAbility::GetCaster(this);
    v19 = CBaseEntity::GetAbsOrigin(v18);
    info.vSpawnOrigin.x = v19->x;
    info.vSpawnOrigin.y = v19->y;
    v20 = v19->z;
    info.vVelocity.x = vVel_8;
    info.vVelocity.y = vVel_4;
    info.vSpawnOrigin.z = v20;
    info.fDistance = fRange;
    info.vVelocity.z = vVel;
    info.fStartRadius = this->skewer_radius;
    info.fEndRadius = info.fStartRadius;
    v21 = CDOTABaseAbility::GetCaster(this);
    if ( v21 != 0 && (m_pEntity = v21->m_pEntity) != 0 )
    {
      v23 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v24 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v24 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(info.hSource.m_Index) = v24 | info.hSource.m_Index & 0x8000;
      info.hSource.m_Index = (v23 << 15) | info.hSource.m_Index & 0x7FFF;
    }
    else
    {
      info.hSource.m_Index = -1;
    }
    affects_creeps = this->affects_creeps;
    info.iUnitTargetTeam = 1;
    info.iUnitTargetType = 1;
    if ( affects_creeps != 0 )
      info.iUnitTargetType = 3;
    info.bHasFrontalCone = 0;
    this->m_nProjectileID = CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
    v26 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::PrimeResumePreviousMovement(v26);
    x_low = LODWORD(vDir.x);
    *x_low.m128i_i32 = vDir.x * fRange;
    v28 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
    vVel_8a = fRange * vDir.z;
    fRangea = fRange * vDir.y;
    v29 = CDOTABaseAbility::GetCaster(this);
    v30 = CBaseEntity::GetAbsOrigin(v29);
    v31 = vVel_8a + v30->z;
    v32 = v28 + v30->x;
    vTeleportEnd.y = fRangea + v30->y;
    vTeleportEnd.z = v31;
    vTeleportEnd.x = v32;
    v33 = CDOTABaseAbility::GetCaster(this);
    v34 = CBaseEntity::GetAbsOrigin(v33);
    v35 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UpdateResumePreviousMovement(v35, *v34, vTeleportEnd);
    v36 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(10, "Hero_Magnataur.Skewer.Cast", v36);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_Holdout_FriendlySkewer::OnProjectileHit  (line 1551, @0x0000000002c2dce0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName, CDOTALocomotor::RemoveHorizontalMotionController, CDOTA_BaseNPC::StartGesture, CBaseEntity::GetAbsOrigin, CGridNav::DestroyTreesAroundPoint, __stack_chk_fail, CDOTA_BaseNPC::FindModifierByName, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, CDOTA_BaseNPC::AddNewModifier (15 total)
// strings: "modifier_magnataur_skewer_movement", "modifier_magnataur_skewer_impact", "proj_index", "Hero_Magnataur.Skewer.Target"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Holdout_FriendlySkewer::OnProjectileHit(
        CDOTA_Ability_Holdout_FriendlySkewer *const this,
        _DWORD *hTarget,
        const Vector *const vLocation)
{
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTALocomotor *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  unsigned int v11; // r12d
  CDOTA_BaseNPC *v12; // rax
  float v13; // xmm3_4
  CEntityInstance *m_pInstance; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // r13
  float v18; // xmm1_4
  CDOTA_BaseNPC *v19; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+18h] [rbp-28h]
  Vector v22; // 0:xmm0_8.8,8:xmm1_4.4

  v21 = __readfsqword(0x28u);
  if ( (*hTarget + 2) > 1
    && (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F]) != 0
    && (v5 = &v4[*hTarget & 0x1FF]) != 0
    && *hTarget == v5->m_EHandle.m_Index
    && (m_pInstance = v5->m_pInstance, v5->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x800) == 0 && this->m_nTargetsHit < this->max_targets )
    {
      Caster = CDOTABaseAbility::GetCaster(this);
      ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_magnataur_skewer_movement", 0);
      if ( ModifierByName != 0 && CDOTABaseAbility::GetCaster(this) != m_pInstance )
      {
        KeyValues::KeyValues(&kv, "modifier_magnataur_skewer_impact");
        (*(ModifierByName->_vptr_CDOTA_Buff + 30))(ModifierByName);
        KeyValues::SetFloat(&kv, "duration", v18);
        KeyValues::SetInt(&kv, "proj_index", this->m_nProjectileID);
        v19 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(m_pInstance, v19, this, "modifier_magnataur_skewer_impact", &kv, 0);
        DOTA_EmitSound(10, "Hero_Magnataur.Skewer.Target", m_pInstance);
        KeyValues::~KeyValues(&kv);
      }
      ++this->m_nTargetsHit;
    }
  }
  else
  {
    v6 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::RemoveModifierByName(v6, "modifier_magnataur_skewer_movement");
    v7 = CDOTABaseAbility::GetCaster(this);
    v8 = (*(v7->_vptr_IHandleEntity + 376))(v7);
    CDOTALocomotor::RemoveHorizontalMotionController(v8, &this->CHorizontalMotionController);
    v9 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::StartGesture(v9, 1606, 0.2, 0.2, 0, 0, 1.0);
    v10 = CDOTABaseAbility::GetCaster(this);
    v11 = (*(v10->_vptr_IHandleEntity + 414))(v10);
    v12 = CDOTABaseAbility::GetCaster(this);
    v22 = *CBaseEntity::GetAbsOrigin(v12);
    CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v11, v22, 410.0, v13);
  }
  return 0;
}


// CDOTA_Ability_Holdout_FriendlySkewer::OnProjectileThink  (line 1587, @0x0000000002c24050, libserver.so)  // inlines: operator=
// calls: CDOTABaseAbility::GetCaster, CDOTALocomotor::IsLeashedMovementPrevented, CDOTA_ProjectileManager::UpdateLinearProjectileSpeed, CDOTA_BaseNPC::FindModifierByName, CGridNav::DestroyTreesAroundPoint, CDOTA_ProjectileManager::DestroyLinearProjectile, CDOTALocomotor::RemoveHorizontalMotionController
// strings: "modifier_magnataur_skewer_movement"
void __fastcall CDOTA_Ability_Holdout_FriendlySkewer::OnProjectileThink(
        CDOTA_Ability_Holdout_FriendlySkewer *const this,
        const Vector *const vLocation)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTALocomotor *v5; // rax
  float v6; // xmm1_4
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  unsigned int v9; // eax
  float v10; // xmm3_4
  CDOTA_BaseNPC *v11; // rax
  CDOTALocomotor *v12; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = (*(Caster->_vptr_IHandleEntity + 376))(Caster);
  if ( CDOTALocomotor::IsLeashedMovementPrevented(v5, *&vLocation->x) )
  {
    CDOTA_ProjectileManager::UpdateLinearProjectileSpeed(&g_DOTAProjectileManager, this->m_nProjectileID, 0.0, v6);
    v7 = CDOTABaseAbility::GetCaster(this);
    if ( CDOTA_BaseNPC::FindModifierByName(v7, "modifier_magnataur_skewer_movement", 0) == 0 )
    {
      CDOTA_ProjectileManager::DestroyLinearProjectile(&g_DOTAProjectileManager, this->m_nProjectileID);
      v11 = CDOTABaseAbility::GetCaster(this);
      v12 = (*(v11->_vptr_IHandleEntity + 376))(v11);
      CDOTALocomotor::RemoveHorizontalMotionController(v12, &this->CHorizontalMotionController);
    }
  }
  else
  {
    this->m_vProjectileLocation.x = vLocation->x;
    this->m_vProjectileLocation.y = vLocation->y;
    this->m_vProjectileLocation.z = vLocation->z;
    v8 = CDOTABaseAbility::GetCaster(this);
    v9 = (*(v8->_vptr_IHandleEntity + 414))(v8);
    CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v9, *vLocation, this->tree_radius, v10);
  }
}


