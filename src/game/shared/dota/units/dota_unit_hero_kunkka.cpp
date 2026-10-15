// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_kunkka.cpp:38
class CDOTA_Unit_Hero_Kunkka : public CDOTA_BaseNPC_Hero {
public:

private:

	int m_nFXIndex;  // +0x16ec
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
	CDOTA_Unit_Hero_Kunkka(CDOTA_Unit_Hero_Kunkka &);
	CDOTA_Unit_Hero_Kunkka(CDOTA_Unit_Hero_Kunkka &);
	CDOTA_Unit_Hero_Kunkka();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool OnLoadState(KeyValues *);
	virtual ~CDOTA_Unit_Hero_Kunkka();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[467] OnLoadState
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_kunkka.cpp:50
class C_CDOTA_Unit_Hero_Kunkka_MapInstall {
	C_CDOTA_Unit_Hero_Kunkka_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_kunkka.cpp:82
class CDOTA_Ability_Kunkka_Torrent : public CDOTABaseAbility {
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
	CDOTA_Ability_Kunkka_Torrent(CDOTA_Ability_Kunkka_Torrent &);
	CDOTA_Ability_Kunkka_Torrent(CDOTA_Ability_Kunkka_Torrent &);
	CDOTA_Ability_Kunkka_Torrent();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual float GetAOERadius();
	virtual bool RequiresFacing();
	virtual void OnSpellStart();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_Kunkka_Torrent();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[333] GetAOERadius
	// vtable[302] RequiresFacing
	// vtable[266] OnSpellStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_kunkka.cpp:109
class C_CDOTA_Ability_Kunkka_Torrent_MapInstall {
	C_CDOTA_Ability_Kunkka_Torrent_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_kunkka.cpp:161
class CDOTA_Modifier_Kunkka_Torrent_Thinker : public CDOTA_Buff {
public:

	CDOTA_Modifier_Kunkka_Torrent_Thinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Kunkka_Torrent_Thinker();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[11] IsHidden
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_kunkka.cpp:302
class CDOTA_Modifier_Kunkka_Torrent : public CDOTA_Buff, public CVerticalMotionController {
public:

private:

	float m_flStartZ;  // +0xbb4
	float m_flCurTime;  // +0xbb8
	CDOTA_Modifier_Kunkka_Torrent();
	virtual void CheckState(CDOTABuffState &);
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	virtual bool IsStunDebuff();
	virtual void UpdateVerticalMotion(CDOTA_BaseNPC *, float);
	virtual void OnVerticalMotionInterrupted();
	virtual bool IsVerticalMotionValidToApply();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual ~CDOTA_Modifier_Kunkka_Torrent();

	// vtable[5] CheckState
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[16] IsStunDebuff
	// vtable[89] UpdateVerticalMotion
	// vtable[90] OnVerticalMotionInterrupted
	// vtable[91] IsVerticalMotionValidToApply
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_kunkka.cpp:426
class CDOTA_Modifier_Kunkka_Torrent_Slow : public CDOTA_Buff {
public:

private:

	int movespeed_bonus;  // +0xba8
	CDOTA_Modifier_Kunkka_Torrent_Slow();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Kunkka_Torrent_Slow();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMoveSpeedBonus_Percentage
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_kunkka.cpp:470
class CDOTA_Ability_Kunkka_Tidebringer : public CDOTABaseAbility {
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
	CDOTA_Ability_Kunkka_Tidebringer(CDOTA_Ability_Kunkka_Tidebringer &);
	CDOTA_Ability_Kunkka_Tidebringer(CDOTA_Ability_Kunkka_Tidebringer &);
	CDOTA_Ability_Kunkka_Tidebringer();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool ProcsMagicStick();
	virtual bool IsStealable();
	virtual const char * GetIntrinsicModifierName();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Kunkka_Tidebringer();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[239] ProcsMagicStick
	// vtable[305] IsStealable
	// vtable[280] GetIntrinsicModifierName
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_kunkka.cpp:483
class C_CDOTA_Ability_Kunkka_Tidebringer_MapInstall {
	C_CDOTA_Ability_Kunkka_Tidebringer_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_kunkka.cpp:504
class CDOTA_Modifier_Kunkka_Tidebringer : public CDOTA_Buff {
public:

private:

	bool m_bTidebringerAttack;  // +0xba8

	int cleave_starting_width;  // +0xbac
	int cleave_ending_width;  // +0xbb0
	int cleave_distance;  // +0xbb4
	int damage_bonus;  // +0xbb8
	int m_nFXIndex;  // +0xbbc
	int cleave_damage;  // +0xbc0
	CDOTA_Modifier_Kunkka_Tidebringer();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	ModifierVariant_t OnAttackStart(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	ModifierVariant_t GetAttackSound(const CModifierParams &);
	virtual ~CDOTA_Modifier_Kunkka_Tidebringer();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// sizeof = 3024
};

// src/game/shared/dota/units/dota_unit_hero_kunkka.cpp:760
class CDOTA_Ability_Kunkka_XMarksTheSpot : public CDOTABaseAbility {
public:

private:

	EHANDLE m_hThinker;  // +0x390
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
	CDOTA_Ability_Kunkka_XMarksTheSpot(CDOTA_Ability_Kunkka_XMarksTheSpot &);
	CDOTA_Ability_Kunkka_XMarksTheSpot(CDOTA_Ability_Kunkka_XMarksTheSpot &);
	CDOTA_Ability_Kunkka_XMarksTheSpot();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnUpgrade();
	virtual void OnSpellStart();
	virtual void OnUnStolen();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual ~CDOTA_Ability_Kunkka_XMarksTheSpot();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[268] OnUpgrade
	// vtable[266] OnSpellStart
	// vtable[308] OnUnStolen
	// vtable[256] CastFilterResult
	// vtable[304] GetAssociatedSecondaryAbilities
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_kunkka.cpp:871
class CDOTA_Modifier_Kunkka_XMarksTheSpot : public CDOTA_Buff {
public:

private:

	CDOTA_Modifier_Kunkka_XMarksTheSpot();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Kunkka_XMarksTheSpot();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[14] IsPurgable
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_kunkka.cpp:914
class CDOTA_Modifier_Kunkka_XMarksTheSpot_Thinker : public CDOTA_Buff {
public:

private:

	EHANDLE m_hEntity;  // +0xbb4
	CDOTA_Modifier_Kunkka_XMarksTheSpot_Thinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Kunkka_XMarksTheSpot_Thinker();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_kunkka.cpp:998
class CDOTA_Ability_Kunkka_Return : public CDOTABaseAbility {
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
	CDOTA_Ability_Kunkka_Return(CDOTA_Ability_Kunkka_Return &);
	CDOTA_Ability_Kunkka_Return(CDOTA_Ability_Kunkka_Return &);
	CDOTA_Ability_Kunkka_Return();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnUpgrade();
	virtual void OnSpellStart();
	virtual const char * GetAssociatedPrimaryAbilities();
	virtual bool IsHiddenWhenStolen();
	virtual ~CDOTA_Ability_Kunkka_Return();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[268] OnUpgrade
	// vtable[266] OnSpellStart
	// vtable[303] GetAssociatedPrimaryAbilities
	// vtable[306] IsHiddenWhenStolen
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_kunkka.cpp:1061
class CDOTA_Ability_Kunkka_GhostShip : public CDOTABaseAbility {
public:

private:

	float buff_duration;  // +0x390
	float stun_duration;  // +0x394
	int ghostship_width;  // +0x398
	int ghostship_width_scepter;  // +0x39c
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
	CDOTA_Ability_Kunkka_GhostShip(CDOTA_Ability_Kunkka_GhostShip &);
	CDOTA_Ability_Kunkka_GhostShip(CDOTA_Ability_Kunkka_GhostShip &);
	CDOTA_Ability_Kunkka_GhostShip();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual bool OnProjectileHit_ExtraData(EHANDLE, const Vector &, KeyValues *);
	virtual void OnProjectileThink(const Vector &);
	virtual Activity GetGestureBasedActivity();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual float GetAvoidRadius();
	virtual bool IsAvoidMagical();
	virtual float GetAvoidStrength(CDOTA_Bot *);
	virtual ~CDOTA_Ability_Kunkka_GhostShip();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[290] OnProjectileHit_ExtraData
	// vtable[291] OnProjectileThink
	// vtable[211] GetGestureBasedActivity
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// vtable[327] GetAvoidRadius
	// vtable[328] IsAvoidMagical
	// vtable[330] GetAvoidStrength
	// sizeof = 960
};

// src/game/shared/dota/units/dota_unit_hero_kunkka.cpp:1092
class C_CDOTA_Ability_Kunkka_GhostShip_MapInstall {
	C_CDOTA_Ability_Kunkka_GhostShip_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_kunkka.cpp:1384
class CDOTA_Modifier_Kunkka_GhostShip_Knockback : public CDOTA_Modifier_Knockback {
public:

	CDOTA_Modifier_Kunkka_GhostShip_Knockback();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsHidden();
	virtual bool IsStunDebuff();
	virtual void OnDestroy();
	virtual ~CDOTA_Modifier_Kunkka_GhostShip_Knockback();

	// vtable[5] CheckState
	// vtable[11] IsHidden
	// vtable[16] IsStunDebuff
	// vtable[60] OnDestroy
	// sizeof = 3072
};

// src/game/shared/dota/units/dota_unit_hero_kunkka.cpp:1422
class CDOTA_Modifier_Kunkka_GhostShip_Loaded : public CDOTA_Buff {
public:

	CDOTA_Modifier_Kunkka_GhostShip_Loaded();
	virtual bool IsPurgable();
	virtual void CheckState(CDOTABuffState &);
	virtual ModifierVariant_t GetModifierInvisibilityLevel(const CModifierParams &);
	virtual void DeclareFunctions();
	ModifierVariant_t ModelScale(const CModifierParams &);
	virtual ~CDOTA_Modifier_Kunkka_GhostShip_Loaded();

	// vtable[14] IsPurgable
	// vtable[5] CheckState
	// vtable[89] GetModifierInvisibilityLevel
	// vtable[65] DeclareFunctions
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_kunkka.cpp:1472
class CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb : public CDOTA_Buff {
public:

private:

	int m_iAccumulatedDamage;  // +0xba8
	int movespeed_bonus;  // +0xbac
	float ghostship_absorb;  // +0xbb0
	CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierTotal_ConstantBlock(const CModifierParams &);
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierTotal_ConstantBlock
	// vtable[90] GetModifierMoveSpeedBonus_Percentage
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_kunkka.cpp:1560
class CDOTA_Modifier_Kunkka_GhostShip_DamageDelay : public CDOTA_Buff {
public:

private:

	int m_iAccumulatedDamage;  // +0xba8
	float m_flDuration;  // +0xbac
	CDOTA_Modifier_Kunkka_GhostShip_DamageDelay();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Kunkka_GhostShip_DamageDelay();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[14] IsPurgable
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Kunkka::~CDOTA_Unit_Hero_Kunkka  (line 38, @0x0000000002a18890, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Kunkka::~CDOTA_Unit_Hero_Kunkka(CDOTA_Unit_Hero_Kunkka *const this)
{
  this->_vptr_IHandleEntity = &off_4344FB0;
  this->_vptr_INextBotEventResponder = &off_4345F90;
  this->_vptr_CObstructionObject = &off_43462C0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Kunkka::~CDOTA_Unit_Hero_Kunkka  (line 38, @0x0000000002a188d0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Kunkka
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Kunkka::~CDOTA_Unit_Hero_Kunkka(CDOTA_Unit_Hero_Kunkka *const this)
{
  this->_vptr_IHandleEntity = &off_4344FB0;
  this->_vptr_INextBotEventResponder = &off_4345F90;
  this->_vptr_CObstructionObject = &off_43462C0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Kunkka::Schema_DynamicBinding  (line 40, @0x0000000002a094d0, libserver.so)
// globals: CDOTA_Unit_Hero_Kunkka::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Kunkka::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Kunkka *const this)
{
  return CDOTA_Unit_Hero_Kunkka::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Kunkka::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 40, @0x0000000002a09500, libserver.so)
// globals: CDOTA_Unit_Hero_Kunkka::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Kunkka::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Kunkka::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Kunkka::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Kunkka::CEntityInstanceEntityClass::DestructInstance  (line 40, @0x0000000002a09510, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Kunkka>
void __fastcall CDOTA_Unit_Hero_Kunkka::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Kunkka::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Kunkka::CEntityInstanceEntityClass::FreeInstance  (line 40, @0x0000000002a09530, libserver.so)
void __fastcall CDOTA_Unit_Hero_Kunkka::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Kunkka::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Kunkka::CEntityInstanceEntityClass::CanAllocate  (line 40, @0x0000000002a09550, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Kunkka::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Kunkka::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Kunkka::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 40, @0x0000000002a09560, libserver.so)
// globals: CDOTA_Unit_Hero_Kunkka::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Kunkka::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Kunkka::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Kunkka::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Kunkka::CEntityInstanceEntityClass::AllocateInstance  (line 40, @0x0000000002a0f800, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Kunkka::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Kunkka::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Kunkka::CEntityInstanceEntityClass::ConstructInstance  (line 40, @0x0000000002a134e0, libserver.so)  // inlines: CDOTA_Unit_Hero_Kunkka, Construct<CDOTA_Unit_Hero_Kunkka>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Kunkka::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Kunkka::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_4344FB0;
    *(p + 236) = &off_4345F90;
    *(p + 257) = &off_43462C0;
  }
  return p;
}


// CDOTA_Unit_Hero_Kunkka::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002a20810, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Kunkka::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Kunkka::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Kunkka::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002a20970, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Kunkka::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Kunkka::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Kunkka::GetEntityClassInternal  (line 40, @0x0000000002a3ca10, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "npc_dota_hero_kunkka", "CDOTA_Unit_Hero_Kunkka"
// globals: `guard variable for'CDOTA_Unit_Hero_Kunkka::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_KunkkaClass, CDOTA_Unit_Hero_Kunkka::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_KunkkaClass, __dso_handle, CDOTA_Unit_Hero_Kunkka::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Kunkka::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_KunkkaClassInfo, CDOTA_Unit_Hero_Kunkka::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_KunkkaClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Kunkka::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Kunkka::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_KunkkaClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Kunkka::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_KunkkaClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Kunkka::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_KunkkaClass);
    CDOTA_Unit_Hero_Kunkka::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_KunkkaClass._vptr_CEntityClass = off_4344F30;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Kunkka::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_KunkkaClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Kunkka::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Kunkka::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_KunkkaClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_KunkkaClass != 0 )
    return &CDOTA_Unit_Hero_Kunkka::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_KunkkaClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Kunkka::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_KunkkaClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Kunkka::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_KunkkaClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Kunkka::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_KunkkaClassInfo,
      "CDOTA_Unit_Hero_Kunkka",
      "npc_dota_hero_kunkka",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Kunkka::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_KunkkaClassInfo);
  }
  CDOTA_Unit_Hero_Kunkka::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_KunkkaClass.m_pClassInfo = &CDOTA_Unit_Hero_Kunkka::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_KunkkaClassInfo;
  CDOTA_Unit_Hero_Kunkka::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_KunkkaClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Kunkka::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_KunkkaClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_KunkkaClass = &CDOTA_Unit_Hero_Kunkka::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_KunkkaClass;
  CDOTA_Unit_Hero_Kunkka::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_KunkkaClassInfo.m_pClass = &CDOTA_Unit_Hero_Kunkka::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_KunkkaClass;
  CDOTA_Unit_Hero_Kunkka::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_KunkkaClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_KunkkaClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Kunkka::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_KunkkaClass;
}


// CDOTA_Unit_Hero_Kunkka::YouForgotToImplementOrDeclareServerClass  (line 50, @0x00000000029b4f40, libserver.so)
int __fastcall CDOTA_Unit_Hero_Kunkka::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Kunkka *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Kunkka::GetServerClass  (line 50, @0x00000000029c9f30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Kunkka::GetServerClass(CDOTA_Unit_Hero_Kunkka *const this)
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


// CDOTA_Unit_Hero_Kunkka::OnLoadState  (line 59, @0x00000000029b6710, libserver.so)
// calls: CDOTA_BaseNPC_Hero::OnLoadState, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::SwapAbilities
// strings: "kunkka_x_marks_the_spot", "kunkka_return"
bool __fastcall CDOTA_Unit_Hero_Kunkka::OnLoadState(CDOTA_Unit_Hero_Kunkka *const this, KeyValues *pKV)
{
  CDOTABaseAbility *AbilityByName; // rax

  CDOTA_BaseNPC_Hero::OnLoadState(this, pKV);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "kunkka_x_marks_the_spot", 0);
  if ( AbilityByName != 0 && AbilityByName->m_bHidden.m_Value )
    CDOTA_BaseNPC::SwapAbilities(this, "kunkka_x_marks_the_spot", "kunkka_return", 1, 0);
  return 1;
}


// CDOTA_Ability_Kunkka_Torrent::~CDOTA_Ability_Kunkka_Torrent  (line 82, @0x0000000002a17150, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Kunkka_Torrent::~CDOTA_Ability_Kunkka_Torrent(CDOTA_Ability_Kunkka_Torrent *const this)
{
  this->_vptr_IHandleEntity = &off_4346390;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Kunkka_Torrent::~CDOTA_Ability_Kunkka_Torrent  (line 82, @0x0000000002a17170, libserver.so)  // inlines: ~CDOTA_Ability_Kunkka_Torrent
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Kunkka_Torrent::~CDOTA_Ability_Kunkka_Torrent(CDOTA_Ability_Kunkka_Torrent *const this)
{
  this->_vptr_IHandleEntity = &off_4346390;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Kunkka_Torrent::Schema_DynamicBinding  (line 84, @0x0000000002a09570, libserver.so)
// globals: CDOTA_Ability_Kunkka_Torrent::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Kunkka_Torrent::Schema_DynamicBinding(
        const CDOTA_Ability_Kunkka_Torrent *const this)
{
  return CDOTA_Ability_Kunkka_Torrent::s_pSchemaBinding;
}


// CDOTA_Ability_Kunkka_Torrent::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 84, @0x0000000002a09580, libserver.so)
// globals: CDOTA_Ability_Kunkka_Torrent::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Kunkka_Torrent::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Kunkka_Torrent::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Kunkka_Torrent::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Kunkka_Torrent::CEntityInstanceEntityClass::DestructInstance  (line 84, @0x0000000002a09590, libserver.so)  // inlines: Destruct<CDOTA_Ability_Kunkka_Torrent>
void __fastcall CDOTA_Ability_Kunkka_Torrent::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Kunkka_Torrent::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Kunkka_Torrent::CEntityInstanceEntityClass::FreeInstance  (line 84, @0x0000000002a095b0, libserver.so)
void __fastcall CDOTA_Ability_Kunkka_Torrent::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Kunkka_Torrent::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Kunkka_Torrent::CEntityInstanceEntityClass::CanAllocate  (line 84, @0x0000000002a095d0, libserver.so)
bool __fastcall CDOTA_Ability_Kunkka_Torrent::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Kunkka_Torrent::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Kunkka_Torrent::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 84, @0x0000000002a095e0, libserver.so)
// globals: CDOTA_Ability_Kunkka_Torrent::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Kunkka_Torrent::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Kunkka_Torrent::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Kunkka_Torrent::s_pSchemaBinding;
}


// CDOTA_Ability_Kunkka_Torrent::CEntityInstanceEntityClass::AllocateInstance  (line 84, @0x0000000002a0f840, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Kunkka_Torrent::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Kunkka_Torrent::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Kunkka_Torrent::CEntityInstanceEntityClass::ConstructInstance  (line 84, @0x0000000002a140b0, libserver.so)  // inlines: CDOTA_Ability_Kunkka_Torrent, Construct<CDOTA_Ability_Kunkka_Torrent>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Kunkka_Torrent::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Kunkka_Torrent::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4346390;
  }
  return p;
}


// CDOTA_Ability_Kunkka_Torrent::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 84, @0x0000000002a1f540, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Kunkka_Torrent::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Kunkka_Torrent::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Kunkka_Torrent::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 84, @0x0000000002a1f560, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Kunkka_Torrent::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Kunkka_Torrent::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Kunkka_Torrent::GetEntityClassInternal  (line 84, @0x0000000002a36f80, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "CDOTA_Ability_Kunkka_Torrent"
// globals: `guard variable for'CDOTA_Ability_Kunkka_Torrent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_TorrentClass, CDOTA_Ability_Kunkka_Torrent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_TorrentClass, __dso_handle, CDOTA_Ability_Kunkka_Torrent::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Kunkka_Torrent::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_TorrentClassInfo, CDOTA_Ability_Kunkka_Torrent::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_TorrentClassInfo
CEntityClass *__cdecl CDOTA_Ability_Kunkka_Torrent::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Kunkka_Torrent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_TorrentClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Kunkka_Torrent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_TorrentClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Kunkka_Torrent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_TorrentClass);
    CDOTA_Ability_Kunkka_Torrent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_TorrentClass._vptr_CEntityClass = off_4346310;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Kunkka_Torrent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_TorrentClass);
    __cxa_atexit(
      CDOTA_Ability_Kunkka_Torrent::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Kunkka_Torrent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_TorrentClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Kunkka_TorrentClass != 0 )
    return &CDOTA_Ability_Kunkka_Torrent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_TorrentClass;
  if ( `guard variable for'CDOTA_Ability_Kunkka_Torrent::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_TorrentClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Kunkka_Torrent::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_TorrentClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Kunkka_Torrent::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_TorrentClassInfo,
      "CDOTA_Ability_Kunkka_Torrent",
      "kunkka_torrent",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Kunkka_Torrent::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_TorrentClassInfo);
  }
  CDOTA_Ability_Kunkka_Torrent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_TorrentClass.m_pClassInfo = &CDOTA_Ability_Kunkka_Torrent::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_TorrentClassInfo;
  CDOTA_Ability_Kunkka_Torrent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_TorrentClass.m_pBaseClassInfo = CDOTA_Ability_Kunkka_Torrent::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_TorrentClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Kunkka_TorrentClass = &CDOTA_Ability_Kunkka_Torrent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_TorrentClass;
  CDOTA_Ability_Kunkka_Torrent::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_TorrentClassInfo.m_pClass = &CDOTA_Ability_Kunkka_Torrent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_TorrentClass;
  CDOTA_Ability_Kunkka_Torrent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_TorrentClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Kunkka_TorrentClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Kunkka_Torrent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_TorrentClass;
}


// CDOTA_Ability_Kunkka_Torrent::GetAOERadius  (line 89, @0x0000000002a33ab0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName
// strings: "special_bonus_unique_kunkka"
float __fastcall CDOTA_Ability_Kunkka_Torrent::GetAOERadius(CDOTA_Ability_Kunkka_Torrent *const this)
{
  int LevelSpecialValue; // ebx
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_kunkka", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    LevelSpecialValue += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  return LevelSpecialValue;
}


// CDOTA_Ability_Kunkka_Torrent::RequiresFacing  (line 102, @0x0000000002a095f0, libserver.so)
bool __fastcall CDOTA_Ability_Kunkka_Torrent::RequiresFacing(CDOTA_Ability_Kunkka_Torrent *const this)
{
  return 0;
}


// CDOTA_Ability_Kunkka_Torrent::YouForgotToImplementOrDeclareServerClass  (line 109, @0x00000000029b4f50, libserver.so)
int __fastcall CDOTA_Ability_Kunkka_Torrent::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Kunkka_Torrent *const this)
{
  return 0;
}


// CDOTA_Ability_Kunkka_Torrent::GetServerClass  (line 109, @0x00000000029c9b70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Kunkka_Torrent::GetServerClass(CDOTA_Ability_Kunkka_Torrent *const this)
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


// CDOTA_Ability_Kunkka_Torrent::OnSpellStart  (line 118, @0x00000000029d98e0, libserver.so)  // inlines: CEntityIndex, CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlVector, CUtlVectorBase, EmitSound_t, GetTeamNumber, Purge, RemoveAll, SoundEventGuid_t, ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorPosition, Thinker_Create, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CBaseEntity::GetTeam, CRecipientFilter::RemoveRecipientsNotOnTeam, GetGlobalTeam, CRecipientFilter::AddRecipientsByTeam, CBaseEntity::EmitSound (18 total)
// strings: "modifier_kunkka_torrent_thinker", "Ability.pre.Torrent"
void __fastcall CDOTA_Ability_Kunkka_Torrent::OnSpellStart(CDOTA_Ability_Kunkka_Torrent *const this)
{
  int m_Value; // ebx
  CDOTA_BaseNPC *Caster; // rax
  float v4; // xmm1_4
  CDOTA_BaseNPC *v5; // rax
  CTeam *Team; // rax
  CTeam *GlobalTeam; // rax
  Vector vPos; // [rsp+10h] [rbp-200h] BYREF
  Vector vOrigin; // [rsp+20h] [rbp-1F0h]
  EmitSound_t ep; // [rsp+30h] [rbp-1E0h] BYREF
  KeyValues kv; // [rsp+90h] [rbp-180h] BYREF
  CPASAttenuationFilter filter; // [rsp+B0h] [rbp-160h] BYREF
  unsigned __int64 v13; // [rsp+1E8h] [rbp-28h]

  v13 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_kunkka_torrent_thinker");
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  vOrigin = CDOTABaseAbility::GetCursorPosition(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(Caster, this, "modifier_kunkka_torrent_thinker", &kv, vOrigin, m_Value, 0, 1, 0);
  vPos = CDOTABaseAbility::GetCursorPosition(this);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS(&filter, &vPos);
  filter._vptr_IRecipientFilter = &off_3FECD70;
  CPASAttenuationFilter::Filter(&filter, &vPos, 0.80000001, v4);
  v5 = CDOTABaseAbility::GetCaster(this);
  Team = CBaseEntity::GetTeam(v5);
  CRecipientFilter::RemoveRecipientsNotOnTeam(&filter, Team);
  GlobalTeam = GetGlobalTeam(1);
  CRecipientFilter::AddRecipientsByTeam(&filter, GlobalTeam);
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
  ep.m_pSoundName = "Ability.pre.Torrent";
  ep.m_pOrigin = &vPos;
  CBaseEntity::EmitSound(&filter, 0, &ep);
  ep.m_UtlVecSoundOrigin.m_Size = 0;
  if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
    if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
  }
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(&filter);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Kunkka_Torrent::GetAbilityDamageToTargetOverInterval  (line 142, @0x00000000029bb3d0, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Kunkka_Torrent::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Kunkka_Torrent *const this,
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


// CDOTA_Ability_Kunkka_Torrent::GetStunDuration  (line 152, @0x00000000029ded50, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Kunkka_Torrent::GetStunDuration(CDOTA_Ability_Kunkka_Torrent *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_duration", -1, 1);
}


// CDOTA_Modifier_Kunkka_Torrent_Thinker::~CDOTA_Modifier_Kunkka_Torrent_Thinker  (line 161, @0x0000000002a11fe0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Kunkka_Torrent_Thinker::~CDOTA_Modifier_Kunkka_Torrent_Thinker(
        CDOTA_Modifier_Kunkka_Torrent_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4346E50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Kunkka_Torrent_Thinker::~CDOTA_Modifier_Kunkka_Torrent_Thinker  (line 161, @0x0000000002a12000, libserver.so)  // inlines: ~CDOTA_Modifier_Kunkka_Torrent_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Kunkka_Torrent_Thinker::~CDOTA_Modifier_Kunkka_Torrent_Thinker(
        CDOTA_Modifier_Kunkka_Torrent_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4346E50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Kunkka_Torrent_Thinker::IsHidden  (line 169, @0x0000000002a09600, libserver.so)
bool __fastcall CDOTA_Modifier_Kunkka_Torrent_Thinker::IsHidden(CDOTA_Modifier_Kunkka_Torrent_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Kunkka_Torrent_Thinker::OnCreated  (line 177, @0x00000000029e7540, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>, GetTeamNumber, Vector, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::GetOpposingTeamNumber, GetGlobalTeam, CRecipientFilter::RemoveRecipientsByTeam, CRecipientFilter::AddRecipientsByTeam, CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink (24 total)
// strings: "special_bonus_unique_kunkka", "particles/units/heroes/hero_kunkka/kunkka_spell_torrent_bubbles_bonus.vpcf"
void __fastcall CDOTA_Modifier_Kunkka_Torrent_Thinker::OnCreated(
        CDOTA_Modifier_Kunkka_Torrent_Thinker *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rax
  int OpposingTeamNumber; // eax
  CTeam *GlobalTeam; // rax
  CTeam *v6; // rax
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax
  float v10; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int LevelSpecialValue; // eax
  CDOTA_BaseNPC *v17; // r14
  CDOTA_BaseNPC *v18; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v20; // rax
  float stun_duration; // [rsp+8h] [rbp-188h]
  float delay; // [rsp+Ch] [rbp-184h]
  int radius; // [rsp+1Ch] [rbp-174h] BYREF
  double v24; // [rsp+20h] [rbp-170h]
  float v25; // [rsp+28h] [rbp-168h]
  CReliableBroadcastRecipientFilter filter; // [rsp+30h] [rbp-160h] BYREF
  unsigned __int64 v27; // [rsp+168h] [rbp-28h]

  v27 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filter);
  Caster = CDOTA_Buff::GetCaster(this);
  OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(Caster);
  GlobalTeam = GetGlobalTeam(OpposingTeamNumber);
  CRecipientFilter::RemoveRecipientsByTeam(&filter, GlobalTeam);
  v6 = GetGlobalTeam(1);
  CRecipientFilter::AddRecipientsByTeam(&filter, v6);
  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &radius, "radius");
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 != 0 )
    delay = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v8, "delay", -1, 0);
  else
    delay = 0.0;
  v9 = CDOTA_Buff::GetAbility(this);
  if ( v9 != 0 )
    stun_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v9, "stun_duration", -1, 0);
  else
    stun_duration = 0.0;
  CDOTA_Buff::StartIntervalThink(this, delay, v10);
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v13 = CDOTA_Buff::GetCaster(this);
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_TORRENT,
    v13->m_iTeamNum.m_Value,
    AbsOrigin,
    400.0,
    delay + stun_duration,
    1);
  v14 = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v14, "special_bonus_unique_kunkka", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
    radius += LevelSpecialValue;
    v17 = CDOTA_Buff::GetCaster(this);
    v18 = CDOTA_Buff::GetParent(this);
    ParticleManager = GetParticleManager();
    LODWORD(v18) = CDOTA_ParticleManager::CreateParticle(
                     ParticleManager,
                     "particles/units/heroes/hero_kunkka/kunkka_spell_torrent_bubbles_bonus.vpcf",
                     0,
                     v18,
                     &filter,
                     v17);
    *&v24 = radius;
    *(&v24 + 1) = radius;
    v25 = radius;
    v20 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v20, v18, 1, v24, v25);
    CDOTA_Buff::AddParticle(this, v18, 0, 0, -1, 0, 0);
  }
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CDOTA_Modifier_Kunkka_Torrent_Thinker::OnIntervalThink  (line 218, @0x00000000029f5430, libserver.so)  // inlines: CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsRealHero, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CPASAttenuationFilter, ~CPASFilter, ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, DotaRetrieveAbilityValue<float>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier (27 total)
// strings: "special_bonus_unique_kunkka", "modifier_kunkka_torrent", "modifier_kunkka_torrent_slow", "particles/units/heroes/hero_kunkka/kunkka_spell_torrent_splash.vpcf", "particles/units/heroes/hero_kunkka/kunkka_spell_torrent_splash_bonus.vpcf", "Ability.Torrent"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_Kunkka_Torrent_Thinker::OnIntervalThink(
        CDOTA_Modifier_Kunkka_Torrent_Thinker *const this)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v3; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  __m128i v7; // xmm2
  float v8; // r12d
  CDOTA_BaseNPC *Parent; // rbx
  CDOTA_BaseNPC *v10; // rax
  const Vector *AbsOrigin; // rax
  float v12; // xmm1_4
  float v13; // xmm1_4
  __int64 v14; // rbx
  CHandle<CBaseEntity> *v15; // rdx
  uint32 m_Index; // eax
  __int16 v17; // cx
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CEntityInstance *m_pInstance; // r12
  CDOTABaseAbility *v21; // r14
  CDOTA_BaseNPC *v22; // rax
  CDOTABaseAbility *v23; // r14
  CDOTA_BaseNPC *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC_Hero *v26; // rdi
  CDOTA_BaseNPC *v27; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_BaseNPC *v30; // rax
  const Vector *v31; // rbx
  CDOTA_ParticleManager *v32; // rax
  CDOTA_ParticleManager *v33; // rax
  CDOTA_BaseNPC *v34; // rbx
  CDOTA_ParticleManager *v35; // rax
  int v36; // r12d
  CDOTA_BaseNPC *v37; // rax
  const Vector *v38; // rbx
  CDOTA_ParticleManager *v39; // rax
  CDOTA_ParticleManager *v40; // rax
  CDOTA_ParticleManager *v41; // rax
  CDOTA_BaseNPC *v42; // rax
  const Vector *v43; // r12
  float v44; // xmm1_4
  CDOTA_BaseNPC *v45; // rax
  CDOTA_BaseNPC *v46; // rax
  CDOTA_BaseNPC *v47; // rax
  int nSpecialAbilityBonus; // [rsp+20h] [rbp-300h]
  int nEnemyHeroesHit; // [rsp+24h] [rbp-2FCh]
  int radius; // [rsp+34h] [rbp-2ECh] BYREF
  float stun_duration; // [rsp+38h] [rbp-2E8h] BYREF
  float slow_duration; // [rsp+3Ch] [rbp-2E4h] BYREF
  Vector vPos; // [rsp+40h] [rbp-2E0h] BYREF
  KeyValues kv_stun; // [rsp+50h] [rbp-2D0h] BYREF
  KeyValues kv_slow; // [rsp+70h] [rbp-2B0h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> hEntities; // [rsp+90h] [rbp-290h] BYREF
  CPASAttenuationFilter filter; // [rsp+1B0h] [rbp-170h] BYREF
  unsigned __int64 v58; // [rsp+2E8h] [rbp-38h]

  v58 = __readfsqword(0x28u);
  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &radius, "radius");
  v3 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v3, &stun_duration, "stun_duration");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v4, &slow_duration, "slow_duration");
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_kunkka", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    nSpecialAbilityBonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  else
    nSpecialAbilityBonus = 0;
  hEntities.m_Size = 0;
  hEntities.m_Memory.m_nAllocationCount = 64;
  hEntities.m_Memory.m_pMemory = &hEntities.m_FixedMemory;
  hEntities.m_Memory.m_nGrowSize = 0x80000000;
  *v7.m128i_i32 = (radius + nSpecialAbilityBonus);
  radius += nSpecialAbilityBonus;
  v8 = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
  Parent = CDOTA_Buff::GetParent(this);
  v10 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
  FindUnitsInRadius(this->m_iTeam, AbsOrigin, Parent, v8, &hEntities, 2, 19, 0, 0, 0);
  KeyValues::KeyValues(&kv_stun, "modifier_kunkka_torrent");
  KeyValues::SetFloat(&kv_stun, "duration", v12);
  KeyValues::KeyValues(&kv_slow, "modifier_kunkka_torrent_slow");
  KeyValues::SetFloat(&kv_slow, "duration", v13);
  if ( hEntities.m_Size > 0 )
  {
    nEnemyHeroesHit = 0;
    v14 = 0;
    do
    {
      while ( 1 )
      {
        v15 = &hEntities.m_Memory.m_pMemory[v14];
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
                v21 = CDOTA_Buff::GetAbility(this);
                v22 = CDOTA_Buff::GetCaster(this);
                CDOTA_BaseNPC::AddNewModifier(m_pInstance, v22, v21, "modifier_kunkka_torrent", &kv_stun, 0);
                v23 = CDOTA_Buff::GetAbility(this);
                v24 = CDOTA_Buff::GetCaster(this);
                CDOTA_BaseNPC::AddNewModifier(m_pInstance, v24, v23, "modifier_kunkka_torrent_slow", &kv_slow, 0);
                if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                  break;
              }
            }
          }
        }
        if ( hEntities.m_Size <= ++v14 )
          goto LABEL_15;
      }
      nEnemyHeroesHit += LOBYTE(m_pInstance[71].m_pEntity) == 0;
      ++v14;
    }
    while ( hEntities.m_Size > v14 );
LABEL_15:
    if ( nEnemyHeroesHit > 1 )
    {
      v25 = CDOTA_Buff::GetCaster(this);
      if ( v25 != 0 && (v25->m_iUnitType & 1) != 0 )
        v26 = v25;
      else
        v26 = 0;
      EconEntity_OnOwnerKillEaterEvent(
        v26,
        0,
        kill_eater_event_t::kKillEaterEventType_Kunkka_DoubleHeroTorrents,
        1,
        INVALID_ITEM_DEF_INDEX);
    }
  }
  v27 = CDOTA_Buff::GetCaster(this);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_kunkka/kunkka_spell_torrent_splash.vpcf",
               2,
               0,
               0,
               v27);
  v30 = CDOTA_Buff::GetParent(this);
  v31 = CBaseEntity::GetAbsOrigin(v30);
  v32 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v32, Particle, 0, *&v31->x, v31->z);
  v33 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v33, Particle);
  if ( nSpecialAbilityBonus > 0 )
  {
    v34 = CDOTA_Buff::GetCaster(this);
    v35 = GetParticleManager();
    v36 = CDOTA_ParticleManager::CreateParticle(
            v35,
            "particles/units/heroes/hero_kunkka/kunkka_spell_torrent_splash_bonus.vpcf",
            2,
            0,
            0,
            v34);
    v37 = CDOTA_Buff::GetParent(this);
    v38 = CBaseEntity::GetAbsOrigin(v37);
    v39 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v39, v36, 0, *&v38->x, v38->z);
    vPos.x = radius;
    vPos.y = radius;
    vPos.z = radius;
    v40 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v40, v36, 1, *&vPos.x, vPos.z);
    v41 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v41, v36);
  }
  v42 = CDOTA_Buff::GetParent(this);
  v43 = CBaseEntity::GetAbsOrigin(v42);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS(&filter, v43);
  filter._vptr_IRecipientFilter = &off_3FECD70;
  CPASAttenuationFilter::Filter(&filter, v43, 0.80000001, v44);
  v45 = CDOTA_Buff::GetParent(this);
  vPos = *CBaseEntity::GetAbsOrigin(v45);
  v46 = CDOTA_Buff::GetCaster(this);
  DOTA_EmitSoundLocationWithCaster(&vPos, "Ability.Torrent", v46);
  v47 = CDOTA_Buff::GetParent(this);
  UTIL_Remove(v47);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(&filter);
  KeyValues::~KeyValues(&kv_slow);
  KeyValues::~KeyValues(&kv_stun);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
}


// CDOTA_Modifier_Kunkka_Torrent::~CDOTA_Modifier_Kunkka_Torrent  (line 302, @0x0000000002a11f70, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Kunkka_Torrent::~CDOTA_Modifier_Kunkka_Torrent(
        CDOTA_Modifier_Kunkka_Torrent *const this)
{
  this->_vptr_CDOTA_Buff = &off_4347170;
  this->_vptr_CVerticalMotionController = &off_4347460;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Kunkka_Torrent::~CDOTA_Modifier_Kunkka_Torrent  (line 302, @0x0000000002a11fa0, libserver.so)  // inlines: ~CDOTA_Modifier_Kunkka_Torrent
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Kunkka_Torrent::~CDOTA_Modifier_Kunkka_Torrent(
        CDOTA_Modifier_Kunkka_Torrent *const this)
{
  this->_vptr_CDOTA_Buff = &off_4347170;
  this->_vptr_CVerticalMotionController = &off_4347460;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Kunkka_Torrent::IsStunDebuff  (line 319, @0x0000000002a09610, libserver.so)
bool __fastcall CDOTA_Modifier_Kunkka_Torrent::IsStunDebuff(CDOTA_Modifier_Kunkka_Torrent *const this)
{
  return 1;
}


// CDOTA_Modifier_Kunkka_Torrent::IsVerticalMotionValidToApply  (line 323, @0x0000000002a09620, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Kunkka_Torrent::IsVerticalMotionValidToApply(CDOTA_Modifier_Kunkka_Torrent *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Kunkka_Torrent::GetEffectName  (line 328, @0x0000000002a09650, libserver.so)
// strings: "particles/generic_gameplay/generic_stunned.vpcf"
const char *__fastcall CDOTA_Modifier_Kunkka_Torrent::GetEffectName(CDOTA_Modifier_Kunkka_Torrent *const this)
{
  return "particles/generic_gameplay/generic_stunned.vpcf";
}


// CDOTA_Modifier_Kunkka_Torrent::GetEffectAttachType  (line 329, @0x0000000002a09660, libserver.so)
int __fastcall CDOTA_Modifier_Kunkka_Torrent::GetEffectAttachType(CDOTA_Modifier_Kunkka_Torrent *const this)
{
  return 7;
}


// CDOTA_Modifier_Kunkka_Torrent::CheckState  (line 343, @0x00000000029b4f60, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Kunkka_Torrent::CheckState(
        CDOTA_Modifier_Kunkka_Torrent *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x20uLL;
  buffState->m_nDisabledStateMask &= ~0x20uLL;
}


// CDOTA_Modifier_Kunkka_Torrent::DeclareFunctions  (line 352, @0x00000000029b4f70, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Kunkka_Torrent::GetOverrideAnimation(CModifierParams const&)
void __fastcall CDOTA_Modifier_Kunkka_Torrent::DeclareFunctions(CDOTA_Modifier_Kunkka_Torrent *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_Kunkka_Torrent::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
}


// CDOTA_Modifier_Kunkka_Torrent::GetOverrideAnimation  (line 359, @0x00000000029b4f90, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Kunkka_Torrent::GetOverrideAnimation(
        CDOTA_Modifier_Kunkka_Torrent *const this,
        const CModifierParams *const params)
{
  return 0x44BCA00000000001uLL;
}


// CDOTA_Modifier_Kunkka_Torrent::OnCreated  (line 366, @0x00000000029b9450, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, GetGroundHeight, CDOTALocomotor::ApplyVerticalMotionController, CDOTA_BaseNPC::StartGesture, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Kunkka_Torrent::OnCreated(CDOTA_Modifier_Kunkka_Torrent *const this, KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTALocomotor *v7; // rax
  float v8; // xmm1_4
  CDOTA_BaseNPC *v9; // rax

  this->m_flCurTime = 0.0;
  Parent = CDOTA_Buff::GetParent(this);
  v4 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
  this->m_flStartZ = GetGroundHeight(AbsOrigin, Parent);
  v6 = CDOTA_Buff::GetParent(this);
  v7 = (*(v6->_vptr_IHandleEntity + 376))(v6);
  if ( CDOTALocomotor::ApplyVerticalMotionController(v7, &this->CVerticalMotionController, 0) )
  {
    v9 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::StartGesture(v9, 1508, 0.2, 0.2, 0, 0, 1.0);
  }
  CDOTA_Buff::StartIntervalThink(this, 0.2, v8);
}


// CDOTA_Modifier_Kunkka_Torrent::OnIntervalThink  (line 382, @0x00000000029b7650, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage
void __fastcall CDOTA_Modifier_Kunkka_Torrent::OnIntervalThink(CDOTA_Modifier_Kunkka_Torrent *const this)
{
  CDOTABaseAbility *Ability; // rax
  int v3; // r14d
  CDOTABaseAbility *v4; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  v3 = (*(Ability->_vptr_IHandleEntity + 247))(Ability);
  v4 = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, Parent, v4, v3 * 0.125, 2, 0);
}


// CDOTA_Modifier_Kunkka_Torrent::UpdateVerticalMotion  (line 391, @0x00000000029bb9d0, libserver.so)
// calls: CVerticalMotionController::UpdateSimpleAirTime, CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveGesture
void __fastcall CDOTA_Modifier_Kunkka_Torrent::UpdateVerticalMotion(
        CDOTA_Modifier_Kunkka_Torrent *const this,
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

  v8 = &this->CVerticalMotionController;
  v9 = *&v8[1]._vptr_CVerticalMotionController + a3;
  v10 = *(&v8->m_nPriority + 1);
  *&v8[1]._vptr_CVerticalMotionController = v9;
  if ( CVerticalMotionController::UpdateSimpleAirTime(v8, me, v10, v9, 1.2, 350.0, a7) != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::RemoveGesture(Parent, 1508);
  }
}


// CDOTA_Modifier_Kunkka_Torrent::OnVerticalMotionInterrupted  (line 405, @0x00000000029ba8d0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveGesture
void __fastcall CDOTA_Modifier_Kunkka_Torrent::OnVerticalMotionInterrupted(CDOTA_Modifier_Kunkka_Torrent *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveGesture(Parent, 1508);
}


// CDOTA_Modifier_Kunkka_Torrent::OnDestroy  (line 414, @0x00000000029ba900, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::RemoveVerticalMotionController, CDOTA_BaseNPC::RemoveGesture
void __fastcall CDOTA_Modifier_Kunkka_Torrent::OnDestroy(CDOTA_Modifier_Kunkka_Torrent *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v3; // rax
  CDOTA_BaseNPC *v4; // rax

  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveVerticalMotionController(v3, &this->CVerticalMotionController);
  v4 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveGesture(v4, 1508);
}


// CDOTA_Modifier_Kunkka_Torrent_Slow::~CDOTA_Modifier_Kunkka_Torrent_Slow  (line 426, @0x0000000002a11f20, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Kunkka_Torrent_Slow::~CDOTA_Modifier_Kunkka_Torrent_Slow(
        CDOTA_Modifier_Kunkka_Torrent_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_43474F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Kunkka_Torrent_Slow::~CDOTA_Modifier_Kunkka_Torrent_Slow  (line 426, @0x0000000002a11f40, libserver.so)  // inlines: ~CDOTA_Modifier_Kunkka_Torrent_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Kunkka_Torrent_Slow::~CDOTA_Modifier_Kunkka_Torrent_Slow(
        CDOTA_Modifier_Kunkka_Torrent_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_43474F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Kunkka_Torrent_Slow::OnCreated  (line 445, @0x00000000029f7220, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "movespeed_bonus"
void __fastcall CDOTA_Modifier_Kunkka_Torrent_Slow::OnCreated(
        CDOTA_Modifier_Kunkka_Torrent_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->movespeed_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "movespeed_bonus", -1, 0);
  else
    this->movespeed_bonus = 0;
}


// CDOTA_Modifier_Kunkka_Torrent_Slow::DeclareFunctions  (line 452, @0x00000000029b4fb0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Kunkka_Torrent_Slow::DeclareFunctions(CDOTA_Modifier_Kunkka_Torrent_Slow *const this)
{
  this->m_Functions[13].__pfn = (&stru_10 + 697);
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Kunkka_Torrent_Slow::GetModifierMoveSpeedBonus_Percentage  (line 459, @0x00000000029b4fd0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Kunkka_Torrent_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Kunkka_Torrent_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->movespeed_bonus;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Kunkka_Tidebringer::~CDOTA_Ability_Kunkka_Tidebringer  (line 470, @0x0000000002a171a0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Kunkka_Tidebringer::~CDOTA_Ability_Kunkka_Tidebringer(
        CDOTA_Ability_Kunkka_Tidebringer *const this)
{
  this->_vptr_IHandleEntity = &off_4347850;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Kunkka_Tidebringer::~CDOTA_Ability_Kunkka_Tidebringer  (line 470, @0x0000000002a171c0, libserver.so)  // inlines: ~CDOTA_Ability_Kunkka_Tidebringer
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Kunkka_Tidebringer::~CDOTA_Ability_Kunkka_Tidebringer(
        CDOTA_Ability_Kunkka_Tidebringer *const this)
{
  this->_vptr_IHandleEntity = &off_4347850;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Kunkka_Tidebringer::Schema_DynamicBinding  (line 472, @0x0000000002a09670, libserver.so)
// globals: CDOTA_Ability_Kunkka_Tidebringer::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Kunkka_Tidebringer::Schema_DynamicBinding(
        const CDOTA_Ability_Kunkka_Tidebringer *const this)
{
  return CDOTA_Ability_Kunkka_Tidebringer::s_pSchemaBinding;
}


// CDOTA_Ability_Kunkka_Tidebringer::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 472, @0x0000000002a09680, libserver.so)
// globals: CDOTA_Ability_Kunkka_Tidebringer::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Kunkka_Tidebringer::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Kunkka_Tidebringer::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Kunkka_Tidebringer::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Kunkka_Tidebringer::CEntityInstanceEntityClass::DestructInstance  (line 472, @0x0000000002a09690, libserver.so)  // inlines: Destruct<CDOTA_Ability_Kunkka_Tidebringer>
void __fastcall CDOTA_Ability_Kunkka_Tidebringer::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Kunkka_Tidebringer::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Kunkka_Tidebringer::CEntityInstanceEntityClass::FreeInstance  (line 472, @0x0000000002a096b0, libserver.so)
void __fastcall CDOTA_Ability_Kunkka_Tidebringer::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Kunkka_Tidebringer::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Kunkka_Tidebringer::CEntityInstanceEntityClass::CanAllocate  (line 472, @0x0000000002a096d0, libserver.so)
bool __fastcall CDOTA_Ability_Kunkka_Tidebringer::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Kunkka_Tidebringer::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Kunkka_Tidebringer::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 472, @0x0000000002a096e0, libserver.so)
// globals: CDOTA_Ability_Kunkka_Tidebringer::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Kunkka_Tidebringer::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Kunkka_Tidebringer::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Kunkka_Tidebringer::s_pSchemaBinding;
}


// CDOTA_Ability_Kunkka_Tidebringer::CEntityInstanceEntityClass::AllocateInstance  (line 472, @0x0000000002a0f880, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Kunkka_Tidebringer::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Kunkka_Tidebringer::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Kunkka_Tidebringer::CEntityInstanceEntityClass::ConstructInstance  (line 472, @0x0000000002a140e0, libserver.so)  // inlines: CDOTA_Ability_Kunkka_Tidebringer, Construct<CDOTA_Ability_Kunkka_Tidebringer>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Kunkka_Tidebringer::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Kunkka_Tidebringer::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4347850;
  }
  return p;
}


// CDOTA_Ability_Kunkka_Tidebringer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 472, @0x0000000002a1f590, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Kunkka_Tidebringer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Kunkka_Tidebringer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Kunkka_Tidebringer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 472, @0x0000000002a1f5b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Kunkka_Tidebringer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Kunkka_Tidebringer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Kunkka_Tidebringer::GetEntityClassInternal  (line 472, @0x0000000002a370d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "CDOTA_Ability_Kunkka_Tidebringer"
// globals: `guard variable for'CDOTA_Ability_Kunkka_Tidebringer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_TidebringerClass, CDOTA_Ability_Kunkka_Tidebringer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_TidebringerClass, __dso_handle, CDOTA_Ability_Kunkka_Tidebringer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Kunkka_Tidebringer::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_TidebringerClassInfo, CDOTA_Ability_Kunkka_Tidebringer::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_TidebringerClassInfo
CEntityClass *__cdecl CDOTA_Ability_Kunkka_Tidebringer::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Kunkka_Tidebringer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_TidebringerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Kunkka_Tidebringer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_TidebringerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Kunkka_Tidebringer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_TidebringerClass);
    CDOTA_Ability_Kunkka_Tidebringer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_TidebringerClass._vptr_CEntityClass = off_43477D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Kunkka_Tidebringer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_TidebringerClass);
    __cxa_atexit(
      CDOTA_Ability_Kunkka_Tidebringer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Kunkka_Tidebringer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_TidebringerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Kunkka_TidebringerClass != 0 )
    return &CDOTA_Ability_Kunkka_Tidebringer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_TidebringerClass;
  if ( `guard variable for'CDOTA_Ability_Kunkka_Tidebringer::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_TidebringerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Kunkka_Tidebringer::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_TidebringerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Kunkka_Tidebringer::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_TidebringerClassInfo,
      "CDOTA_Ability_Kunkka_Tidebringer",
      "kunkka_tidebringer",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Kunkka_Tidebringer::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_TidebringerClassInfo);
  }
  CDOTA_Ability_Kunkka_Tidebringer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_TidebringerClass.m_pClassInfo = &CDOTA_Ability_Kunkka_Tidebringer::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_TidebringerClassInfo;
  CDOTA_Ability_Kunkka_Tidebringer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_TidebringerClass.m_pBaseClassInfo = CDOTA_Ability_Kunkka_Tidebringer::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_TidebringerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Kunkka_TidebringerClass = &CDOTA_Ability_Kunkka_Tidebringer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_TidebringerClass;
  CDOTA_Ability_Kunkka_Tidebringer::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_TidebringerClassInfo.m_pClass = &CDOTA_Ability_Kunkka_Tidebringer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_TidebringerClass;
  CDOTA_Ability_Kunkka_Tidebringer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_TidebringerClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Kunkka_TidebringerClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Kunkka_Tidebringer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_TidebringerClass;
}


// CDOTA_Ability_Kunkka_Tidebringer::ProcsMagicStick  (line 476, @0x0000000002a096f0, libserver.so)
bool __fastcall CDOTA_Ability_Kunkka_Tidebringer::ProcsMagicStick(CDOTA_Ability_Kunkka_Tidebringer *const this)
{
  return 0;
}


// CDOTA_Ability_Kunkka_Tidebringer::IsStealable  (line 477, @0x0000000002a09700, libserver.so)
bool __fastcall CDOTA_Ability_Kunkka_Tidebringer::IsStealable(CDOTA_Ability_Kunkka_Tidebringer *const this)
{
  return 0;
}


// CDOTA_Ability_Kunkka_Tidebringer::GetIntrinsicModifierName  (line 478, @0x0000000002a09710, libserver.so)
// strings: "modifier_kunkka_tidebringer"
const char *__fastcall CDOTA_Ability_Kunkka_Tidebringer::GetIntrinsicModifierName(
        CDOTA_Ability_Kunkka_Tidebringer *const this)
{
  return "modifier_kunkka_tidebringer";
}


// CDOTA_Ability_Kunkka_Tidebringer::YouForgotToImplementOrDeclareServerClass  (line 483, @0x00000000029b4ff0, libserver.so)
int __fastcall CDOTA_Ability_Kunkka_Tidebringer::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Kunkka_Tidebringer *const this)
{
  return 0;
}


// CDOTA_Ability_Kunkka_Tidebringer::GetServerClass  (line 483, @0x00000000029ca130, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Kunkka_Tidebringer::GetServerClass(CDOTA_Ability_Kunkka_Tidebringer *const this)
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


// CDOTA_Ability_Kunkka_Tidebringer::GetAbilityDamageToTargetOverInterval  (line 492, @0x00000000029bb430, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Kunkka_Tidebringer::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Kunkka_Tidebringer *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int v6; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    v6 = (*(this->_vptr_IHandleEntity + 247))(this, fInterval);
    return (v6 * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 1)));
  }
  return result;
}


// CDOTA_Modifier_Kunkka_Tidebringer::~CDOTA_Modifier_Kunkka_Tidebringer  (line 504, @0x0000000002a11ed0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Kunkka_Tidebringer::~CDOTA_Modifier_Kunkka_Tidebringer(
        CDOTA_Modifier_Kunkka_Tidebringer *const this)
{
  this->_vptr_CDOTA_Buff = &off_4348310;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Kunkka_Tidebringer::~CDOTA_Modifier_Kunkka_Tidebringer  (line 504, @0x0000000002a11ef0, libserver.so)  // inlines: ~CDOTA_Modifier_Kunkka_Tidebringer
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Kunkka_Tidebringer::~CDOTA_Modifier_Kunkka_Tidebringer(
        CDOTA_Modifier_Kunkka_Tidebringer *const this)
{
  this->_vptr_CDOTA_Buff = &off_4348310;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Kunkka_Tidebringer::OnCreated  (line 547, @0x00000000029fafb0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>, NetworkStateChanged, Set, ToggleAutoCast, operator=<bool>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
// strings: "cleave_starting_width", "cleave_ending_width", "cleave_distance"
void __fastcall CDOTA_Modifier_Kunkka_Tidebringer::OnCreated(
        CDOTA_Modifier_Kunkka_Tidebringer *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  float v8; // xmm1_4
  CDOTABaseAbility *v9; // rbx
  unsigned __int8 m_Value; // al
  char v11; // r12

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->cleave_starting_width = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                    Ability,
                                    "cleave_starting_width",
                                    -1,
                                    0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->cleave_starting_width = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->cleave_ending_width = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "cleave_ending_width", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_12;
    }
  }
  this->cleave_ending_width = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->cleave_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "cleave_distance", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
LABEL_13:
    this->damage_bonus = 0;
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
    goto LABEL_14;
  }
LABEL_12:
  this->cleave_distance = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_13;
LABEL_5:
  this->damage_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "damage_bonus", -1, 0);
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
  {
LABEL_6:
    this->cleave_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "cleave_damage", -1, 0);
    goto LABEL_7;
  }
LABEL_14:
  this->cleave_damage = 0;
LABEL_7:
  this->m_nFXIndex = -1;
  this->m_bTidebringerAttack = 0;
  CDOTA_Buff::StartIntervalThink(this, 0.1, v8);
  v9 = CDOTA_Buff::GetAbility(this);
  m_Value = v9->m_bAutoCastState.m_Value;
  v11 = m_Value ^ 1;
  if ( m_Value != (m_Value ^ 1) )
  {
    (*(v9->_vptr_IHandleEntity + 22))(v9, 836, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v9->m_bAutoCastState.m_Value = v11;
  }
}


// CDOTA_Modifier_Kunkka_Tidebringer::OnDestroy  (line 564, @0x00000000029b5000, libserver.so)
void __fastcall CDOTA_Modifier_Kunkka_Tidebringer::OnDestroy(CDOTA_Modifier_Kunkka_Tidebringer *const this)
{
  ;
}


// CDOTA_Modifier_Kunkka_Tidebringer::OnRefresh  (line 580, @0x00000000029f9f30, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
// strings: "cleave_starting_width", "cleave_ending_width", "cleave_distance"
void __fastcall CDOTA_Modifier_Kunkka_Tidebringer::OnRefresh(
        CDOTA_Modifier_Kunkka_Tidebringer *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  float v8; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->cleave_starting_width = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                    Ability,
                                    "cleave_starting_width",
                                    -1,
                                    0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->cleave_starting_width = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->cleave_ending_width = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "cleave_ending_width", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_10;
    }
  }
  this->cleave_ending_width = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->cleave_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "cleave_distance", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
LABEL_11:
    this->damage_bonus = 0;
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
LABEL_12:
    this->cleave_damage = 0;
    goto LABEL_7;
  }
LABEL_10:
  this->cleave_distance = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_11;
LABEL_5:
  this->damage_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "damage_bonus", -1, 0);
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 == 0 )
    goto LABEL_12;
LABEL_6:
  this->cleave_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "cleave_damage", -1, 0);
LABEL_7:
  CDOTA_Buff::StartIntervalThink(this, 0.1, v8);
}


// CDOTA_Modifier_Kunkka_Tidebringer::OnIntervalThink  (line 593, @0x00000000029b5010, libserver.so)
void __fastcall CDOTA_Modifier_Kunkka_Tidebringer::OnIntervalThink(CDOTA_Modifier_Kunkka_Tidebringer *const this)
{
  ;
}


// CDOTA_Modifier_Kunkka_Tidebringer::DeclareFunctions  (line 629, @0x00000000029b5020, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Kunkka_Tidebringer::OnAttackStart(CModifierParams const&), CDOTA_Modifier_Kunkka_Tidebringer::OnAttackLanded(CModifierParams const&), CDOTA_Modifier_Kunkka_Tidebringer::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Kunkka_Tidebringer::GetActivityTranslationModifiers(CModifierParams const&), CDOTA_Modifier_Kunkka_Tidebringer::GetAttackSound(CModifierParams const&)
void __fastcall CDOTA_Modifier_Kunkka_Tidebringer::DeclareFunctions(CDOTA_Modifier_Kunkka_Tidebringer *const this)
{
  this->m_Functions[119].__pfn = CDOTA_Modifier_Kunkka_Tidebringer::OnAttackStart;
  this->m_Functions[119].__delta = 0;
  this->m_Functions[121].__delta = 0;
  this->m_Functions[121].__pfn = CDOTA_Modifier_Kunkka_Tidebringer::OnAttackLanded;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Kunkka_Tidebringer::GetModifierPreAttack_BonusDamage;
  this->m_Functions[155].__pfn = CDOTA_Modifier_Kunkka_Tidebringer::GetActivityTranslationModifiers;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[155].__delta = 0;
  this->m_Functions[156].__pfn = CDOTA_Modifier_Kunkka_Tidebringer::GetAttackSound;
  this->m_Functions[156].__delta = 0;
}


// CDOTA_Modifier_Kunkka_Tidebringer::OnAttackStart  (line 640, @0x00000000029c44c0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::GetCurrentActiveAbility, CDOTA_Buff::GetAbility
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Kunkka_Tidebringer::OnAttackStart(
        CDOTA_Modifier_Kunkka_Tidebringer *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 v7; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *v12; // r13
  CDOTA_BaseNPC *Parent; // r14
  CDOTABaseAbility *CurrentActiveAbility; // r12
  int m_Id; // eax
  CDOTABaseAbility *Ability; // rax

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->hattacker.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v7 = params->htarget.m_Index;
  if ( v7 + 2 > 1
    && (m_Index_low = LOWORD(params->htarget.m_Index),
        (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) != 0)
    && (v10 = &v9[m_Index_low & 0x1FF]) != 0
    && v7 == v10->m_EHandle.m_Index
    && (v12 = v10->m_pInstance, v10->m_pInstance != 0)
    && BYTE3(v12[7]._vptr_IHandleEntity) != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    if ( Parent == m_pInstance )
    {
      this->m_bTidebringerAttack = 0;
      CurrentActiveAbility = CDOTA_BaseNPC::GetCurrentActiveAbility(m_pInstance);
      if ( (CurrentActiveAbility == CDOTA_Buff::GetAbility(this)
         || CDOTA_Buff::GetAbility(this)->m_bAutoCastState.m_Value)
        && (Parent->m_nUnitState64.m_Value & 8) == 0 )
      {
        m_Id = v12[43].m_iszPrivateVScripts.u.m_Id;
        if ( (m_Id & 0x10) == 0 && (m_Id & 0x193) != 0 )
        {
          Ability = CDOTA_Buff::GetAbility(this);
          this->m_bTidebringerAttack = (*(Ability->_vptr_IHandleEntity + 245))(Ability);
        }
      }
    }
  }
  else
  {
    CDOTA_Buff::GetParent(this);
  }
  return 1uLL;
}


// CDOTA_Modifier_Kunkka_Tidebringer::OnAttackLanded  (line 671, @0x00000000029ca3c0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetModifier_Constant_Additive, GetTeamNumber, IndexToIdentity, IsListeningToEvent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTA_BaseNPC::GetModifiedAbilityParticleName, DoCleaveAttack, CDOTA_BaseNPC::UnitEmitSound
// strings: "modifier_monkey_king_boundless_strike_crit", "particles/units/heroes/hero_kunkka/kunkka_spell_tidebringer.vpcf", "Hero_Kunkka.TidebringerDamage"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Kunkka_Tidebringer::OnAttackLanded(
        CDOTA_Modifier_Kunkka_Tidebringer *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *Parent; // rax
  CEntityInstance *v10; // rax
  CDOTA_BaseNPC *v11; // r14
  char m_CScriptComponent_high; // r15
  CDOTABaseAbility *v13; // rax
  __int64 v14; // rax
  float Modifier_Constant_Additive_Internal; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  const char *ModifiedAbilityParticleName; // r15
  CDOTABaseAbility *Ability; // r12
  CDOTA_BaseNPC *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  float v21; // [rsp+0h] [rbp-40h]
  float flDistance; // [rsp+4h] [rbp-3Ch]
  float flEndingWidth; // [rsp+8h] [rbp-38h]
  float flDamage; // [rsp+Ch] [rbp-34h]
  float flDamagea; // [rsp+Ch] [rbp-34h]

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1
    || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v6 = &v5[params->hattacker.m_Index & 0x1FF]) == 0
    || m_Index != v6->m_EHandle.m_Index
    || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  if ( CDOTA_Buff::GetParent(this) == m_pInstance && this->m_bTidebringerAttack )
  {
    Parent = CDOTA_Buff::GetParent(this);
    if ( CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_monkey_king_boundless_strike_crit", 0) == 0 )
    {
      v10 = CEntityHandle::operator CEntityInstance *(&params->htarget);
      v11 = v10;
      if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 )
      {
        m_CScriptComponent_high = HIBYTE(v10[7].m_CScriptComponent);
        if ( m_CScriptComponent_high != CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value )
        {
          if ( !m_pInstance->m_bIsIllusion.m_Value )
          {
            v14 = m_pInstance->m_ModifierManager.m_buffsForModifiers[4];
            Modifier_Constant_Additive_Internal = 0.0;
            flDamage = params->fDamage;
            if ( v14 != 0xFF && m_pInstance->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v14].m_Size > 0 )
              Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                                      &m_pInstance->m_ModifierManager,
                                                      modifierfunction::MODIFIER_PROPERTY_PROCATTACK_BONUS_DAMAGE_PHYSICAL,
                                                      params);
            v21 = this->cleave_damage * (Modifier_Constant_Additive_Internal + flDamage);
            Caster = CDOTA_Buff::GetCaster(this);
            ModifiedAbilityParticleName = CDOTA_BaseNPC::GetModifiedAbilityParticleName(
                                            Caster,
                                            "particles/units/heroes/hero_kunkka/kunkka_spell_tidebringer.vpcf");
            flDistance = this->cleave_distance;
            flEndingWidth = this->cleave_ending_width;
            flDamagea = this->cleave_starting_width;
            Ability = CDOTA_Buff::GetAbility(this);
            v19 = CDOTA_Buff::GetParent(this);
            DoCleaveAttack(
              v19,
              v11,
              Ability,
              v21 / 100.0,
              flDamagea,
              flEndingWidth,
              flDistance,
              ModifiedAbilityParticleName,
              params);
            v20 = CDOTA_Buff::GetParent(this);
            CDOTA_BaseNPC::UnitEmitSound(v20, "Hero_Kunkka.TidebringerDamage", 0.0, 0, 0);
          }
          v13 = CDOTA_Buff::GetAbility(this);
          (*(v13->_vptr_IHandleEntity + 241))(v13, -1.0);
        }
      }
      this->m_bTidebringerAttack = 0;
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Kunkka_Tidebringer::GetModifierPreAttack_BonusDamage  (line 712, @0x00000000029bbb20, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Kunkka_Tidebringer::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Kunkka_Tidebringer *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *&result.m_eType = 1;
  if ( this->m_bTidebringerAttack )
  {
    *v2.m128i_i32 = this->damage_bonus;
    *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Kunkka_Tidebringer::GetAttackSound  (line 723, @0x00000000029c2db0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster
// strings: "Hero_Kunkka.Tidebringer.Attack"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Kunkka_Tidebringer::GetAttackSound(
        CDOTA_Modifier_Kunkka_Tidebringer *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax
  char m_CScriptComponent_high; // bl
  bool v8; // zf
  ModifierVariant_t result; // 0:rax.16

  if ( !this->m_bTidebringerAttack )
    return 2uLL;
  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1 )
    return 2uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 2uLL;
  v4 = &v3[params->htarget.m_Index & 0x1FF];
  if ( v4 == 0 )
    return 2uLL;
  if ( m_Index != v4->m_EHandle.m_Index )
    return 2uLL;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    return 2uLL;
  m_CScriptComponent_high = HIBYTE(m_pInstance[7].m_CScriptComponent);
  v8 = m_CScriptComponent_high == CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value;
  *&result.m_eType = 2;
  if ( v8 )
    result.m_szVal = 0;
  else
    result.m_szVal = "Hero_Kunkka.Tidebringer.Attack";
  return result;
}


// CDOTA_Modifier_Kunkka_Tidebringer::GetActivityTranslationModifiers  (line 739, @0x00000000029bbae0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Kunkka_Tidebringer::GetActivityTranslationModifiers(
        CDOTA_Modifier_Kunkka_Tidebringer *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  *&result.m_eType = 2;
  if ( params->nActivity == 1503 )
  {
    result.m_szVal = "tidebringer";
    if ( !this->m_bTidebringerAttack )
      result.m_szVal = 0;
  }
  else
  {
    result.m_szVal = 0;
  }
  return result;
}


// CDOTA_Ability_Kunkka_XMarksTheSpot::~CDOTA_Ability_Kunkka_XMarksTheSpot  (line 760, @0x0000000002a171f0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Kunkka_XMarksTheSpot::~CDOTA_Ability_Kunkka_XMarksTheSpot(
        CDOTA_Ability_Kunkka_XMarksTheSpot *const this)
{
  this->_vptr_IHandleEntity = &off_4348670;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Kunkka_XMarksTheSpot::~CDOTA_Ability_Kunkka_XMarksTheSpot  (line 760, @0x0000000002a17210, libserver.so)  // inlines: ~CDOTA_Ability_Kunkka_XMarksTheSpot
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Kunkka_XMarksTheSpot::~CDOTA_Ability_Kunkka_XMarksTheSpot(
        CDOTA_Ability_Kunkka_XMarksTheSpot *const this)
{
  this->_vptr_IHandleEntity = &off_4348670;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Kunkka_XMarksTheSpot::Schema_DynamicBinding  (line 762, @0x0000000002a09720, libserver.so)
// globals: CDOTA_Ability_Kunkka_XMarksTheSpot::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Kunkka_XMarksTheSpot::Schema_DynamicBinding(
        const CDOTA_Ability_Kunkka_XMarksTheSpot *const this)
{
  return CDOTA_Ability_Kunkka_XMarksTheSpot::s_pSchemaBinding;
}


// CDOTA_Ability_Kunkka_XMarksTheSpot::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 762, @0x0000000002a09730, libserver.so)
// globals: CDOTA_Ability_Kunkka_XMarksTheSpot::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Kunkka_XMarksTheSpot::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Kunkka_XMarksTheSpot::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Kunkka_XMarksTheSpot::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Kunkka_XMarksTheSpot::CEntityInstanceEntityClass::DestructInstance  (line 762, @0x0000000002a09740, libserver.so)  // inlines: Destruct<CDOTA_Ability_Kunkka_XMarksTheSpot>
void __fastcall CDOTA_Ability_Kunkka_XMarksTheSpot::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Kunkka_XMarksTheSpot::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Kunkka_XMarksTheSpot::CEntityInstanceEntityClass::FreeInstance  (line 762, @0x0000000002a09760, libserver.so)
void __fastcall CDOTA_Ability_Kunkka_XMarksTheSpot::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Kunkka_XMarksTheSpot::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Kunkka_XMarksTheSpot::CEntityInstanceEntityClass::CanAllocate  (line 762, @0x0000000002a09780, libserver.so)
bool __fastcall CDOTA_Ability_Kunkka_XMarksTheSpot::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Kunkka_XMarksTheSpot::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Kunkka_XMarksTheSpot::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 762, @0x0000000002a09790, libserver.so)
// globals: CDOTA_Ability_Kunkka_XMarksTheSpot::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Kunkka_XMarksTheSpot::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Kunkka_XMarksTheSpot::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Kunkka_XMarksTheSpot::s_pSchemaBinding;
}


// CDOTA_Ability_Kunkka_XMarksTheSpot::CEntityInstanceEntityClass::AllocateInstance  (line 762, @0x0000000002a0f8c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Kunkka_XMarksTheSpot::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Kunkka_XMarksTheSpot::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Kunkka_XMarksTheSpot::CEntityInstanceEntityClass::ConstructInstance  (line 762, @0x0000000002a14110, libserver.so)  // inlines: CDOTA_Ability_Kunkka_XMarksTheSpot, CEntityHandle, CHandle, Construct<CDOTA_Ability_Kunkka_XMarksTheSpot>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Kunkka_XMarksTheSpot::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Kunkka_XMarksTheSpot::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = -1;
    *p = &off_4348670;
  }
  return p;
}


// CDOTA_Ability_Kunkka_XMarksTheSpot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 762, @0x0000000002a1f5e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Kunkka_XMarksTheSpot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Kunkka_XMarksTheSpot::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Kunkka_XMarksTheSpot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 762, @0x0000000002a1f600, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Kunkka_XMarksTheSpot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Kunkka_XMarksTheSpot::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Kunkka_XMarksTheSpot::GetEntityClassInternal  (line 762, @0x0000000002a37220, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "kunkka_x_marks_the_spot", "CDOTA_Ability_Kunkka_XMarksTheSpot"
// globals: `guard variable for'CDOTA_Ability_Kunkka_XMarksTheSpot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_XMarksTheSpotClass, CDOTA_Ability_Kunkka_XMarksTheSpot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_XMarksTheSpotClass, __dso_handle, CDOTA_Ability_Kunkka_XMarksTheSpot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Kunkka_XMarksTheSpot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_XMarksTheSpotClassInfo, CDOTA_Ability_Kunkka_XMarksTheSpot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_XMarksTheSpotClassInfo
CEntityClass *__cdecl CDOTA_Ability_Kunkka_XMarksTheSpot::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Kunkka_XMarksTheSpot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_XMarksTheSpotClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Kunkka_XMarksTheSpot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_XMarksTheSpotClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Kunkka_XMarksTheSpot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_XMarksTheSpotClass);
    CDOTA_Ability_Kunkka_XMarksTheSpot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_XMarksTheSpotClass._vptr_CEntityClass = off_43485F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Kunkka_XMarksTheSpot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_XMarksTheSpotClass);
    __cxa_atexit(
      CDOTA_Ability_Kunkka_XMarksTheSpot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Kunkka_XMarksTheSpot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_XMarksTheSpotClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Kunkka_XMarksTheSpotClass != 0 )
    return &CDOTA_Ability_Kunkka_XMarksTheSpot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_XMarksTheSpotClass;
  if ( `guard variable for'CDOTA_Ability_Kunkka_XMarksTheSpot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_XMarksTheSpotClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Kunkka_XMarksTheSpot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_XMarksTheSpotClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Kunkka_XMarksTheSpot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_XMarksTheSpotClassInfo,
      "CDOTA_Ability_Kunkka_XMarksTheSpot",
      "kunkka_x_marks_the_spot",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Kunkka_XMarksTheSpot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_XMarksTheSpotClassInfo);
  }
  CDOTA_Ability_Kunkka_XMarksTheSpot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_XMarksTheSpotClass.m_pClassInfo = &CDOTA_Ability_Kunkka_XMarksTheSpot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_XMarksTheSpotClassInfo;
  CDOTA_Ability_Kunkka_XMarksTheSpot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_XMarksTheSpotClass.m_pBaseClassInfo = CDOTA_Ability_Kunkka_XMarksTheSpot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_XMarksTheSpotClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Kunkka_XMarksTheSpotClass = &CDOTA_Ability_Kunkka_XMarksTheSpot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_XMarksTheSpotClass;
  CDOTA_Ability_Kunkka_XMarksTheSpot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_XMarksTheSpotClassInfo.m_pClass = &CDOTA_Ability_Kunkka_XMarksTheSpot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_XMarksTheSpotClass;
  CDOTA_Ability_Kunkka_XMarksTheSpot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_XMarksTheSpotClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Kunkka_XMarksTheSpotClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Kunkka_XMarksTheSpot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_XMarksTheSpotClass;
}


// CDOTA_Ability_Kunkka_XMarksTheSpot::GetAssociatedSecondaryAbilities  (line 770, @0x0000000002a097a0, libserver.so)
// strings: "kunkka_return"
const char *__fastcall CDOTA_Ability_Kunkka_XMarksTheSpot::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Kunkka_XMarksTheSpot *const this)
{
  return "kunkka_return";
}


// CDOTA_Ability_Kunkka_XMarksTheSpot::OnUpgrade  (line 779, @0x00000000029b7d50, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "kunkka_return"
void __fastcall CDOTA_Ability_Kunkka_XMarksTheSpot::OnUpgrade(CDOTA_Ability_Kunkka_XMarksTheSpot *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "kunkka_return", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value < this->m_iLevel.m_Value )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Kunkka_XMarksTheSpot::CastFilterResult  (line 793, @0x00000000029b9c70, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTABaseAbility::CastFilterResult, CDOTABaseAbility::GetCaster, CDOTA_PlayerResource::IsDisableHelpSetForPlayerID
int __fastcall CDOTA_Ability_Kunkka_XMarksTheSpot::CastFilterResult(
        CDOTA_Ability_Kunkka_XMarksTheSpot *const this,
        CDOTA_BaseNPC *pTarget)
{
  unsigned __int8 m_Value; // r13
  CDOTA_BaseNPC *Caster; // rax

  if ( (pTarget->m_iUnitType & 1) != 0
    && (m_Value = pTarget->m_iTeamNum.m_Value) == CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value
    && (Caster = CDOTABaseAbility::GetCaster(this),
        CDOTA_PlayerResource::IsDisableHelpSetForPlayerID(
          g_pDOTAPlayerResource,
          pTarget->m_nControllingPlayerID,
          Caster->m_nControllingPlayerID)) )
  {
    return 25;
  }
  else
  {
    return CDOTABaseAbility::CastFilterResult(this, pTarget);
  }
}


// CDOTA_Ability_Kunkka_XMarksTheSpot::OnSpellStart  (line 809, @0x00000000029e98b0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, Set, ToDOTABaseNPC, operator=
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, KeyValues::KeyValues, KeyValues::SetPtr, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, Thinker_Create, CDOTA_BaseNPC::SwapAbilities, CDOTA_BaseNPC::UnitEmitSound, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier (17 total)
// strings: "modifier_kunkka_x_marks_the_spot_thinker", "kunkka_return", "kunkka_x_marks_the_spot", "Ability.XMarksTheSpot.Target", "modifier_kunkka_x_marks_the_spot", "fow_duration" (7 total)
void __fastcall CDOTA_Ability_Kunkka_XMarksTheSpot::OnSpellStart(CDOTA_Ability_Kunkka_XMarksTheSpot *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  int m_Value; // r15d
  Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v7; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v9; // eax
  __int16 v10; // cx
  CDOTA_BaseNPC *v11; // rax
  float v12; // xmm1_4
  CDOTA_BaseNPC *v13; // rax
  __m128i v14; // xmm0
  float v15; // r15d
  __m128i v16; // xmm2
  float v17; // r14d
  const Vector *v18; // r12
  CDOTA_BaseNPC *v19; // rax
  unsigned __int8 v20; // r13
  KeyValues kv; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && ((BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 2) == 0
     || (v20 = CursorTarget->m_iTeamNum.m_Value) == CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value)
    && !CDOTA_BaseNPC::TriggerSpellAbsorb(v3, this, 1) )
  {
    KeyValues::KeyValues(&kv, "modifier_kunkka_x_marks_the_spot_thinker");
    KeyValues::SetPtr(&kv, "target", v3);
    m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
    Caster = CDOTABaseAbility::GetCaster(this);
    v7 = Thinker_Create(Caster, this, "modifier_kunkka_x_marks_the_spot_thinker", &kv, *AbsOrigin, m_Value, 0, 0, 0);
    if ( v7 != 0 && (m_pEntity = v7->m_pEntity) != 0 )
    {
      v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v10 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hThinker.m_Index) = v10 | this->m_hThinker.m_Index & 0x8000;
      this->m_hThinker.m_Index = (v9 << 15) | this->m_hThinker.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hThinker.m_Index = -1;
    }
    v11 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::SwapAbilities(v11, "kunkka_x_marks_the_spot", "kunkka_return", 0, 1);
    CDOTA_BaseNPC::UnitEmitSound(v3, "Ability.XMarksTheSpot.Target", 0.0, 0, 0);
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    CDOTABaseAbility::GetCaster(this);
    KeyValues::SetFloat(&kv, "duration", v12);
    v13 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, v13, this, "modifier_kunkka_x_marks_the_spot", &kv, 0);
    *v14.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "fow_duration", -1, 0);
    v15 = COERCE_FLOAT(_mm_cvtsi128_si32(v14));
    *v16.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "fow_range", -1, 0);
    v17 = COERCE_FLOAT(_mm_cvtsi128_si32(v16));
    v18 = CBaseEntity::GetAbsOrigin(v3);
    v19 = CDOTABaseAbility::GetCaster(this);
    CDOTAFogOfWarSystem::AddTempViewer(
      &g_DOTAFogOfWarSystem,
      FoWViewerType_t::FOWVIEWERTYPE_XMARKSTHESPOT,
      v19->m_iTeamNum.m_Value,
      v18,
      v17,
      v15,
      1);
    KeyValues::~KeyValues(&kv);
  }
}


// GetXMarksTheSpotLocation  (line 842, @0x00000000029d1e90, libserver.so)
// calls: CBaseEntity::GetAbsOrigin
// callers: CDOTA_Bot_AbilityUsage_Kunkka_Torrent::GetCurrentUsageDesire
Vector __fastcall GetXMarksTheSpotLocation(CDOTABaseAbility *pAbility)
{
  const Vector *AbsOrigin; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  AbsOrigin = CBaseEntity::GetAbsOrigin(pAbility);
  *&result.x = *&AbsOrigin->x;
  result.z = AbsOrigin->z;
  return result;
}


// CDOTA_Ability_Kunkka_XMarksTheSpot::OnUnStolen  (line 850, @0x00000000029c3070, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::OnUnStolen, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_kunkka_x_marks_the_spot_thinker"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Kunkka_XMarksTheSpot::OnUnStolen(CDOTA_Ability_Kunkka_XMarksTheSpot *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTA_Buff *ModifierByName; // rax

  CDOTABaseAbility::OnUnStolen(this);
  m_Index = this->m_hThinker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hThinker.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hThinker.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          ModifierByName = CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_kunkka_x_marks_the_spot_thinker", 0);
          if ( ModifierByName != 0 )
            (*(ModifierByName->_vptr_CDOTA_Buff + 56))(ModifierByName);
        }
      }
    }
  }
}


// CDOTA_Modifier_Kunkka_XMarksTheSpot::~CDOTA_Modifier_Kunkka_XMarksTheSpot  (line 871, @0x0000000002a11e80, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Kunkka_XMarksTheSpot::~CDOTA_Modifier_Kunkka_XMarksTheSpot(
        CDOTA_Modifier_Kunkka_XMarksTheSpot *const this)
{
  this->_vptr_CDOTA_Buff = &off_4349130;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Kunkka_XMarksTheSpot::~CDOTA_Modifier_Kunkka_XMarksTheSpot  (line 871, @0x0000000002a11ea0, libserver.so)  // inlines: ~CDOTA_Modifier_Kunkka_XMarksTheSpot
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Kunkka_XMarksTheSpot::~CDOTA_Modifier_Kunkka_XMarksTheSpot(
        CDOTA_Modifier_Kunkka_XMarksTheSpot *const this)
{
  this->_vptr_CDOTA_Buff = &off_4349130;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Kunkka_XMarksTheSpot::IsPurgable  (line 883, @0x0000000002a097b0, libserver.so)
bool __fastcall CDOTA_Modifier_Kunkka_XMarksTheSpot::IsPurgable(CDOTA_Modifier_Kunkka_XMarksTheSpot *const this)
{
  return 0;
}


// CDOTA_Modifier_Kunkka_XMarksTheSpot::OnCreated  (line 894, @0x00000000029b50b0, libserver.so)
void __fastcall CDOTA_Modifier_Kunkka_XMarksTheSpot::OnCreated(
        CDOTA_Modifier_Kunkka_XMarksTheSpot *const this,
        KeyValues *pKV)
{
  ;
}


// CDOTA_Modifier_Kunkka_XMarksTheSpot::OnDestroy  (line 903, @0x00000000029b50c0, libserver.so)
void __fastcall CDOTA_Modifier_Kunkka_XMarksTheSpot::OnDestroy(CDOTA_Modifier_Kunkka_XMarksTheSpot *const this)
{
  ;
}


// CDOTA_Modifier_Kunkka_XMarksTheSpot_Thinker::~CDOTA_Modifier_Kunkka_XMarksTheSpot_Thinker  (line 914, @0x0000000002a11e30, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Kunkka_XMarksTheSpot_Thinker::~CDOTA_Modifier_Kunkka_XMarksTheSpot_Thinker(
        CDOTA_Modifier_Kunkka_XMarksTheSpot_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4349450;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Kunkka_XMarksTheSpot_Thinker::~CDOTA_Modifier_Kunkka_XMarksTheSpot_Thinker  (line 914, @0x0000000002a11e50, libserver.so)  // inlines: ~CDOTA_Modifier_Kunkka_XMarksTheSpot_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Kunkka_XMarksTheSpot_Thinker::~CDOTA_Modifier_Kunkka_XMarksTheSpot_Thinker(
        CDOTA_Modifier_Kunkka_XMarksTheSpot_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4349450;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Kunkka_XMarksTheSpot_Thinker::OnCreated  (line 933, @0x00000000029e0cb0, libserver.so)  // inlines: DotaRetrieveAbilityValue<float>, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetSerialNumber, Set, ToDOTABaseNPC, operator=
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, KeyValues::GetPtr, CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "particles/units/heroes/hero_kunkka/kunkka_spell_x_spot.vpcf"
void __fastcall CDOTA_Modifier_Kunkka_XMarksTheSpot_Thinker::OnCreated(
        CDOTA_Modifier_Kunkka_XMarksTheSpot_Thinker *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax
  _QWORD *Ptr; // rax
  __int64 v6; // rdx
  int v7; // eax
  __int16 v8; // cx
  const CBaseAnimating *v9; // rax
  const CBaseAnimating *v10; // r12
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_ParticleManager *v14; // rax
  CDOTABaseAbility *Ability; // rax
  float v16; // xmm1_4
  float LevelSpecialValue; // xmm0_4
  CDOTA_BaseNPC *v18; // rax
  float duration; // [rsp+Ch] [rbp-24h]

  Parent = CDOTA_Buff::GetParent(this);
  this->m_vStartLoc = *CBaseEntity::GetAbsOrigin(Parent);
  Ptr = KeyValues::GetPtr(pKV, "target", 0);
  if ( Ptr != 0 && (v6 = Ptr[1]) != 0 )
  {
    v7 = (*(v6 + 16) >> 15) - (*(v6 + 48) & 1);
    v8 = 0x7FFF;
    if ( *(v6 + 16) != -1 )
      v8 = *(v6 + 16) & 0x7FFF;
    LOWORD(this->m_hEntity.m_Index) = v8 | this->m_hEntity.m_Index & 0x8000;
    this->m_hEntity.m_Index = (v7 << 15) | this->m_hEntity.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hEntity.m_Index = -1;
  }
  v9 = KeyValues::GetPtr(pKV, "target", 0);
  if ( v9 != 0 && v9->m_bIsDOTANPC )
    v10 = v9;
  else
    v10 = 0;
  Caster = CDOTA_Buff::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_kunkka/kunkka_spell_x_spot.vpcf",
                      2,
                      0,
                      0,
                      Caster);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
  v14 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v14, Caster, 0, v10, 1, 0, *AbsOrigin, 1);
  CDOTA_Buff::AddParticle(this, Caster, 0, 0, -1, 0, 0);
  Ability = CDOTA_Buff::GetAbility(this);
  LevelSpecialValue = 0.0;
  if ( Ability != 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "duration", -1, 0);
  if ( v10 != 0 )
  {
    duration = LevelSpecialValue;
    v18 = CDOTA_Buff::GetCaster(this);
    LevelSpecialValue = duration;
    if ( v18->m_iTeamNum.m_Value == v10->m_iTeamNum.m_Value )
      LevelSpecialValue = duration + duration;
  }
  CDOTA_Buff::StartIntervalThink(this, LevelSpecialValue, v16);
}


// CDOTA_Modifier_Kunkka_XMarksTheSpot_Thinker::OnIntervalThink  (line 957, @0x00000000029c6580, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, SpeakConcept, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::SwapAbilities, CDOTA_Buff::GetParent, UTIL_Remove, CDOTA_BaseNPC::FindModifierByName, FindClearSpaceForUnit, CDOTA_BaseNPC::UnitEmitSound, CDOTA_BaseNPC::Interrupt, CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTA_Speech::SpeakConcept, CDOTA_Buff::Destroy (14 total)
// strings: "kunkka_return", "kunkka_x_marks_the_spot", "modifier_kunkka_x_marks_the_spot", "Ability.XMarksTheSpot.Return", "x_return"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Kunkka_XMarksTheSpot_Thinker::OnIntervalThink(
        CDOTA_Modifier_Kunkka_XMarksTheSpot_Thinker *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *Parent; // rax
  CEntityInstance *m_pInstance; // r12
  CDOTA_Buff *ModifierByName; // r13
  float v9; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  CResponseCriteriaSet criteria; // [rsp+10h] [rbp-60h] BYREF

  m_Index = this->m_hEntity.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEntity.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hEntity.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0
          && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && ((BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 2) == 0
           || CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value == HIBYTE(m_pInstance[7].m_CScriptComponent))
          && LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0
          && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 1) == 0 )
        {
          ModifierByName = CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_kunkka_x_marks_the_spot", 0);
          if ( ModifierByName != 0 )
          {
            FindClearSpaceForUnit(m_pInstance, this->m_vStartLoc, 1);
            CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Ability.XMarksTheSpot.Return", 0.0, 0, 0);
            CDOTA_BaseNPC::Interrupt(m_pInstance);
            CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
            CResponseCriteriaSet::AppendCriteria(&criteria, "x_return", 1.0, v9);
            if ( CDOTA_Buff::GetCaster(this) != 0 )
            {
              m_pSpeech = CDOTA_Buff::GetCaster(this)->m_Speech.m_pSpeech;
              if ( m_pSpeech != 0 )
                CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 4, 0, 0, 0, 0);
            }
            CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
            CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
          }
        }
      }
    }
  }
  Caster = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::SwapAbilities(Caster, "kunkka_x_marks_the_spot", "kunkka_return", 1, 0);
  Parent = CDOTA_Buff::GetParent(this);
  UTIL_Remove(Parent);
}


// CDOTA_Ability_Kunkka_Return::~CDOTA_Ability_Kunkka_Return  (line 998, @0x0000000002a17240, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Kunkka_Return::~CDOTA_Ability_Kunkka_Return(CDOTA_Ability_Kunkka_Return *const this)
{
  this->_vptr_IHandleEntity = &off_43497B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Kunkka_Return::~CDOTA_Ability_Kunkka_Return  (line 998, @0x0000000002a17260, libserver.so)  // inlines: ~CDOTA_Ability_Kunkka_Return
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Kunkka_Return::~CDOTA_Ability_Kunkka_Return(CDOTA_Ability_Kunkka_Return *const this)
{
  this->_vptr_IHandleEntity = &off_43497B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Kunkka_Return::Schema_DynamicBinding  (line 1000, @0x0000000002a097c0, libserver.so)
// globals: CDOTA_Ability_Kunkka_Return::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Kunkka_Return::Schema_DynamicBinding(
        const CDOTA_Ability_Kunkka_Return *const this)
{
  return CDOTA_Ability_Kunkka_Return::s_pSchemaBinding;
}


// CDOTA_Ability_Kunkka_Return::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1000, @0x0000000002a097d0, libserver.so)
// globals: CDOTA_Ability_Kunkka_Return::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Kunkka_Return::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Kunkka_Return::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Kunkka_Return::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Kunkka_Return::CEntityInstanceEntityClass::DestructInstance  (line 1000, @0x0000000002a097e0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Kunkka_Return>
void __fastcall CDOTA_Ability_Kunkka_Return::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Kunkka_Return::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Kunkka_Return::CEntityInstanceEntityClass::FreeInstance  (line 1000, @0x0000000002a09800, libserver.so)
void __fastcall CDOTA_Ability_Kunkka_Return::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Kunkka_Return::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Kunkka_Return::CEntityInstanceEntityClass::CanAllocate  (line 1000, @0x0000000002a09820, libserver.so)
bool __fastcall CDOTA_Ability_Kunkka_Return::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Kunkka_Return::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Kunkka_Return::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1000, @0x0000000002a09830, libserver.so)
// globals: CDOTA_Ability_Kunkka_Return::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Kunkka_Return::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Kunkka_Return::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Kunkka_Return::s_pSchemaBinding;
}


// CDOTA_Ability_Kunkka_Return::CEntityInstanceEntityClass::AllocateInstance  (line 1000, @0x0000000002a0f900, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Kunkka_Return::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Kunkka_Return::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Kunkka_Return::CEntityInstanceEntityClass::ConstructInstance  (line 1000, @0x0000000002a14150, libserver.so)  // inlines: CDOTA_Ability_Kunkka_Return, Construct<CDOTA_Ability_Kunkka_Return>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Kunkka_Return::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Kunkka_Return::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43497B0;
  }
  return p;
}


// CDOTA_Ability_Kunkka_Return::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1000, @0x0000000002a1f630, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Kunkka_Return::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Kunkka_Return::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Kunkka_Return::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1000, @0x0000000002a1f650, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Kunkka_Return::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Kunkka_Return::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Kunkka_Return::GetEntityClassInternal  (line 1000, @0x0000000002a37370, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "kunkka_return", "CDOTA_Ability_Kunkka_Return"
// globals: `guard variable for'CDOTA_Ability_Kunkka_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_ReturnClass, CDOTA_Ability_Kunkka_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_ReturnClass, __dso_handle, CDOTA_Ability_Kunkka_Return::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Kunkka_Return::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_ReturnClassInfo, CDOTA_Ability_Kunkka_Return::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_ReturnClassInfo
CEntityClass *__cdecl CDOTA_Ability_Kunkka_Return::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Kunkka_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_ReturnClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Kunkka_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_ReturnClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Kunkka_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_ReturnClass);
    CDOTA_Ability_Kunkka_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_ReturnClass._vptr_CEntityClass = off_4349730;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Kunkka_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_ReturnClass);
    __cxa_atexit(
      CDOTA_Ability_Kunkka_Return::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Kunkka_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_ReturnClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Kunkka_ReturnClass != 0 )
    return &CDOTA_Ability_Kunkka_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_ReturnClass;
  if ( `guard variable for'CDOTA_Ability_Kunkka_Return::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_ReturnClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Kunkka_Return::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_ReturnClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Kunkka_Return::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_ReturnClassInfo,
      "CDOTA_Ability_Kunkka_Return",
      "kunkka_return",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Kunkka_Return::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_ReturnClassInfo);
  }
  CDOTA_Ability_Kunkka_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_ReturnClass.m_pClassInfo = &CDOTA_Ability_Kunkka_Return::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_ReturnClassInfo;
  CDOTA_Ability_Kunkka_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_ReturnClass.m_pBaseClassInfo = CDOTA_Ability_Kunkka_Return::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_ReturnClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Kunkka_ReturnClass = &CDOTA_Ability_Kunkka_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_ReturnClass;
  CDOTA_Ability_Kunkka_Return::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_ReturnClassInfo.m_pClass = &CDOTA_Ability_Kunkka_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_ReturnClass;
  CDOTA_Ability_Kunkka_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_ReturnClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Kunkka_ReturnClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Kunkka_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_ReturnClass;
}


// CDOTA_Ability_Kunkka_Return::GetAssociatedPrimaryAbilities  (line 1006, @0x0000000002a09840, libserver.so)
// strings: "kunkka_x_marks_the_spot"
const char *__fastcall CDOTA_Ability_Kunkka_Return::GetAssociatedPrimaryAbilities(
        CDOTA_Ability_Kunkka_Return *const this)
{
  return "kunkka_x_marks_the_spot";
}


// CDOTA_Ability_Kunkka_Return::IsHiddenWhenStolen  (line 1007, @0x0000000002a09850, libserver.so)
bool __fastcall CDOTA_Ability_Kunkka_Return::IsHiddenWhenStolen(CDOTA_Ability_Kunkka_Return *const this)
{
  return 1;
}


// CDOTA_Ability_Kunkka_Return::OnUpgrade  (line 1014, @0x00000000029b7da0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "kunkka_x_marks_the_spot"
void __fastcall CDOTA_Ability_Kunkka_Return::OnUpgrade(CDOTA_Ability_Kunkka_Return *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "kunkka_x_marks_the_spot", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value < this->m_iLevel.m_Value )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Kunkka_Return::OnSpellStart  (line 1028, @0x00000000029c43c0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::SwapAbilities, CDOTA_BaseNPC::FindModifierByName
// strings: "kunkka_x_marks_the_spot", "kunkka_return", "modifier_kunkka_x_marks_the_spot_thinker"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Kunkka_Return::OnSpellStart(CDOTA_Ability_Kunkka_Return *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int vptr_IHandleEntity; // edx
  unsigned __int16 v5; // cx
  CEntityIdentity *v6; // rax
  CEntityIdentity *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTA_Buff *ModifierByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "kunkka_x_marks_the_spot", 0);
  if ( AbilityByName != 0 )
  {
    vptr_IHandleEntity = AbilityByName[1]._vptr_IHandleEntity;
    if ( (vptr_IHandleEntity + 2) > 1
      && (v5 = AbilityByName[1]._vptr_IHandleEntity,
          (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F]) != 0)
      && (v7 = &v6[v5 & 0x1FF]) != 0
      && vptr_IHandleEntity == v7->m_EHandle.m_Index
      && (m_pInstance = v7->m_pInstance, v7->m_pInstance != 0)
      && m_pInstance->m_bIsDOTANPC )
    {
      ModifierByName = CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_kunkka_x_marks_the_spot_thinker", 0);
      if ( ModifierByName != 0 )
        (*(ModifierByName->_vptr_CDOTA_Buff + 56))(ModifierByName);
    }
    else if ( !this->m_bHidden.m_Value )
    {
      v8 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::SwapAbilities(v8, "kunkka_x_marks_the_spot", "kunkka_return", 1, 0);
    }
  }
}


// CDOTA_Ability_Kunkka_GhostShip::~CDOTA_Ability_Kunkka_GhostShip  (line 1061, @0x0000000002a17290, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Kunkka_GhostShip::~CDOTA_Ability_Kunkka_GhostShip(
        CDOTA_Ability_Kunkka_GhostShip *const this)
{
  this->_vptr_IHandleEntity = &off_434A2B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Kunkka_GhostShip::~CDOTA_Ability_Kunkka_GhostShip  (line 1061, @0x0000000002a172b0, libserver.so)  // inlines: ~CDOTA_Ability_Kunkka_GhostShip
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Kunkka_GhostShip::~CDOTA_Ability_Kunkka_GhostShip(
        CDOTA_Ability_Kunkka_GhostShip *const this)
{
  this->_vptr_IHandleEntity = &off_434A2B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Kunkka_GhostShip::Schema_DynamicBinding  (line 1063, @0x0000000002a09860, libserver.so)
// globals: CDOTA_Ability_Kunkka_GhostShip::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Kunkka_GhostShip::Schema_DynamicBinding(
        const CDOTA_Ability_Kunkka_GhostShip *const this)
{
  return CDOTA_Ability_Kunkka_GhostShip::s_pSchemaBinding;
}


// CDOTA_Ability_Kunkka_GhostShip::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1063, @0x0000000002a09870, libserver.so)
// globals: CDOTA_Ability_Kunkka_GhostShip::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Kunkka_GhostShip::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Kunkka_GhostShip::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Kunkka_GhostShip::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Kunkka_GhostShip::CEntityInstanceEntityClass::DestructInstance  (line 1063, @0x0000000002a09880, libserver.so)  // inlines: Destruct<CDOTA_Ability_Kunkka_GhostShip>
void __fastcall CDOTA_Ability_Kunkka_GhostShip::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Kunkka_GhostShip::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Kunkka_GhostShip::CEntityInstanceEntityClass::FreeInstance  (line 1063, @0x0000000002a098a0, libserver.so)
void __fastcall CDOTA_Ability_Kunkka_GhostShip::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Kunkka_GhostShip::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Kunkka_GhostShip::CEntityInstanceEntityClass::CanAllocate  (line 1063, @0x0000000002a098c0, libserver.so)
bool __fastcall CDOTA_Ability_Kunkka_GhostShip::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Kunkka_GhostShip::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Kunkka_GhostShip::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1063, @0x0000000002a098d0, libserver.so)
// globals: CDOTA_Ability_Kunkka_GhostShip::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Kunkka_GhostShip::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Kunkka_GhostShip::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Kunkka_GhostShip::s_pSchemaBinding;
}


// CDOTA_Ability_Kunkka_GhostShip::CEntityInstanceEntityClass::AllocateInstance  (line 1063, @0x0000000002a0f940, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Kunkka_GhostShip::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Kunkka_GhostShip::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 960);
  memset(v1, 0, 0x3C0u);
  return v1;
}


// CDOTA_Ability_Kunkka_GhostShip::CEntityInstanceEntityClass::ConstructInstance  (line 1063, @0x0000000002a14180, libserver.so)  // inlines: CDOTA_Ability_Kunkka_GhostShip, Construct<CDOTA_Ability_Kunkka_GhostShip>, InValidate, SndOpEventGuid_t, SoundEventGuid_t
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Kunkka_GhostShip::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Kunkka_GhostShip::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 238) = 0;
    *p = &off_434A2B0;
    *(p + 239) = -1;
  }
  return p;
}


// CDOTA_Ability_Kunkka_GhostShip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1063, @0x0000000002a1f680, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Kunkka_GhostShip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Kunkka_GhostShip::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Kunkka_GhostShip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1063, @0x0000000002a1f6a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Kunkka_GhostShip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Kunkka_GhostShip::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Kunkka_GhostShip::GetEntityClassInternal  (line 1063, @0x0000000002a374c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "kunkka_ghostship", "CDOTA_Ability_Kunkka_GhostShip"
// globals: `guard variable for'CDOTA_Ability_Kunkka_GhostShip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_GhostShipClass, CDOTA_Ability_Kunkka_GhostShip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_GhostShipClass, __dso_handle, CDOTA_Ability_Kunkka_GhostShip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Kunkka_GhostShip::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_GhostShipClassInfo, CDOTA_Ability_Kunkka_GhostShip::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_GhostShipClassInfo
CEntityClass *__cdecl CDOTA_Ability_Kunkka_GhostShip::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Kunkka_GhostShip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_GhostShipClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Kunkka_GhostShip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_GhostShipClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Kunkka_GhostShip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_GhostShipClass);
    CDOTA_Ability_Kunkka_GhostShip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_GhostShipClass._vptr_CEntityClass = off_434A230;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Kunkka_GhostShip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_GhostShipClass);
    __cxa_atexit(
      CDOTA_Ability_Kunkka_GhostShip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Kunkka_GhostShip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_GhostShipClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Kunkka_GhostShipClass != 0 )
    return &CDOTA_Ability_Kunkka_GhostShip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_GhostShipClass;
  if ( `guard variable for'CDOTA_Ability_Kunkka_GhostShip::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_GhostShipClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Kunkka_GhostShip::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_GhostShipClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Kunkka_GhostShip::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_GhostShipClassInfo,
      "CDOTA_Ability_Kunkka_GhostShip",
      "kunkka_ghostship",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Kunkka_GhostShip::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_GhostShipClassInfo);
  }
  CDOTA_Ability_Kunkka_GhostShip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_GhostShipClass.m_pClassInfo = &CDOTA_Ability_Kunkka_GhostShip::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_GhostShipClassInfo;
  CDOTA_Ability_Kunkka_GhostShip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_GhostShipClass.m_pBaseClassInfo = CDOTA_Ability_Kunkka_GhostShip::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_GhostShipClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Kunkka_GhostShipClass = &CDOTA_Ability_Kunkka_GhostShip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_GhostShipClass;
  CDOTA_Ability_Kunkka_GhostShip::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Kunkka_GhostShipClassInfo.m_pClass = &CDOTA_Ability_Kunkka_GhostShip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_GhostShipClass;
  CDOTA_Ability_Kunkka_GhostShip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_GhostShipClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Kunkka_GhostShipClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Kunkka_GhostShip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Kunkka_GhostShipClass;
}


// CDOTA_Ability_Kunkka_GhostShip::GetGestureBasedActivity  (line 1071, @0x0000000002a098e0, libserver.so)
Activity __fastcall CDOTA_Ability_Kunkka_GhostShip::GetGestureBasedActivity(CDOTA_Ability_Kunkka_GhostShip *const this)
{
  return 1708;
}


// CDOTA_Ability_Kunkka_GhostShip::GetAvoidRadius  (line 1076, @0x0000000002a33b20, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "ghostship_width"
float __fastcall CDOTA_Ability_Kunkka_GhostShip::GetAvoidRadius(CDOTA_Ability_Kunkka_GhostShip *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "ghostship_width", -1, 0) + 200.0;
}


// CDOTA_Ability_Kunkka_GhostShip::IsAvoidMagical  (line 1077, @0x0000000002a098f0, libserver.so)
bool __fastcall CDOTA_Ability_Kunkka_GhostShip::IsAvoidMagical(CDOTA_Ability_Kunkka_GhostShip *const this)
{
  return 1;
}


// CDOTA_Ability_Kunkka_GhostShip::GetAvoidStrength  (line 1078, @0x0000000002a09900, libserver.so)
float __fastcall CDOTA_Ability_Kunkka_GhostShip::GetAvoidStrength(
        CDOTA_Ability_Kunkka_GhostShip *const this,
        CDOTA_Bot *pBot)
{
  return 0.75;
}


// CDOTA_Ability_Kunkka_GhostShip::YouForgotToImplementOrDeclareServerClass  (line 1092, @0x00000000029b50d0, libserver.so)
int __fastcall CDOTA_Ability_Kunkka_GhostShip::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Kunkka_GhostShip *const this)
{
  return 0;
}


// CDOTA_Ability_Kunkka_GhostShip::GetServerClass  (line 1092, @0x00000000029c90f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Kunkka_GhostShip::GetServerClass(CDOTA_Ability_Kunkka_GhostShip *const this)
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


// CDOTA_Ability_Kunkka_GhostShip::OnSpellStart  (line 1102, @0x00000000029e9bd0, libserver.so)  // inlines: CBroadcastRecipientFilter, CEntityHandle, CEntityIndex, CHandle, CPASAttenuationFilter, CPASFilter, CReliableBroadcastRecipientFilter, CUtlMemory, CUtlVector, CUtlVectorBase, DOTAGameRules, EmitSound_t, GetAbilityData, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetParent, GetSerialNumber, GetTeamNumber, InValidate, NormalizeInPlace, Purge, RemoveAll, Set, SetBool, SoundEventGuid_t, StopSoundEvent, Vector, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator+=, operator-, operator=, sLinearProjectileCreateInfo, ~CBroadcastRecipientFilter, ~CPASAttenuationFilter, ~CPASFilter, ~CReliableBroadcastRecipientFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorPosition, VectorNormalize, CGridNavBase::IsInWorld, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CDOTA_BaseNPC::GetOpposingTeamNumber (40 total)
// strings: "ghostship_width", "ghostship_width_scepter", "ghostship_speed", "ghostship_speed_scepter", "ghostship_distance", "particles/units/heroes/hero_kunkka/kunkka_ghostship_marker.vpcf" (12 total)
void __fastcall CDOTA_Ability_Kunkka_GhostShip::OnSpellStart(CDOTA_Ability_Kunkka_GhostShip *const this)
{
  int LevelSpecialValue; // r13d
  int v3; // r12d
  CDOTA_BaseNPC *Caster; // rax
  int v5; // r12d
  CDOTA_BaseNPC *v6; // rax
  const Vector *AbsOrigin; // r14
  vec_t v8; // xmm0_4
  vec_t v9; // xmm1_4
  CDOTA_BaseNPC *v10; // rax
  const Vector *v11; // rax
  float v12; // xmm4_4
  int v13; // xmm3_4
  bool v14; // al
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  int OpposingTeamNumber; // eax
  CTeam *GlobalTeam; // rax
  CTeam *v19; // rax
  float x; // xmm6_4
  float v21; // xmm6_4
  float v22; // xmm1_4
  CDOTA_BaseNPC *v23; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  int v25; // r14d
  CDOTA_ParticleManager *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  vec_t y; // xmm1_4
  vec_t v29; // xmm0_4
  CDOTA_BaseNPC *v30; // rax
  float ghostship_width; // xmm0_4
  CDOTA_BaseNPC *v32; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v34; // eax
  __int16 v35; // cx
  int m_Value; // eax
  CDOTA_BaseNPC *v37; // rax
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rdi
  float v40; // xmm1_4
  CGameSceneNode *v41; // rdi
  CBaseEntity *v42; // rdi
  CTeam *Team; // rax
  CTeam *v44; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r12d
  CDOTA_BaseNPC *v47; // rax
  float v48; // xmm3_4
  CDOTA_BaseNPC *v49; // rax
  CDOTA_BaseNPC *v50; // rax
  const QAngle *AbsAngles; // rax
  vec_t v52; // xmm1_4
  vec_t v53; // xmm0_4
  float ghostship_width_scepter; // xmm0_4
  CDOTA_BaseNPC *v55; // rax
  CEntityIdentity *v56; // rdx
  int v57; // eax
  __int16 v58; // cx
  int v59; // eax
  float v60; // [rsp+Ch] [rbp-4F4h]
  float v61; // [rsp+10h] [rbp-4F0h]
  float v62; // [rsp+14h] [rbp-4ECh]
  float v63; // [rsp+20h] [rbp-4E0h]
  float v64; // [rsp+24h] [rbp-4DCh]
  float flfxZcoord; // [rsp+28h] [rbp-4D8h]
  float flShipTravelDistanceb; // [rsp+2Ch] [rbp-4D4h]
  float flShipTravelDistance; // [rsp+2Ch] [rbp-4D4h]
  float flShipTravelDistancea; // [rsp+2Ch] [rbp-4D4h]
  Vector v69; // [rsp+30h] [rbp-4D0h]
  float v70; // [rsp+34h] [rbp-4CCh]
  float v71; // [rsp+38h] [rbp-4C8h]
  CSoundOpGameSystem *v72; // [rsp+38h] [rbp-4C8h]
  Vector vDirection; // [rsp+40h] [rbp-4C0h] BYREF
  Vector v74; // [rsp+50h] [rbp-4B0h]
  Vector vfxLocation; // [rsp+60h] [rbp-4A0h]
  unsigned __int64 v76; // [rsp+70h] [rbp-490h]
  vec_t z; // [rsp+78h] [rbp-488h]
  Vector vPos; // [rsp+80h] [rbp-480h] BYREF
  sLinearProjectileCreateInfo info; // [rsp+90h] [rbp-470h] BYREF
  CReliableBroadcastRecipientFilter teamfilter; // [rsp+110h] [rbp-3F0h] BYREF
  CPASAttenuationFilter filter; // [rsp+250h] [rbp-2B0h] BYREF
  KeyValues kv; // [rsp+390h] [rbp-170h] BYREF
  unsigned __int64 v83; // [rsp+4C8h] [rbp-38h]
  Vector CursorPosition; // 0:kr14_12.12

  v83 = __readfsqword(0x28u);
  this->buff_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "buff_duration", -1, 0);
  this->stun_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_duration", -1, 0);
  this->ghostship_width = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "ghostship_width", -1, 0);
  this->ghostship_width_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "ghostship_width_scepter", -1, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "ghostship_speed", -1, 0);
  v3 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "ghostship_speed_scepter", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    LevelSpecialValue = v3;
  v5 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "ghostship_distance", -1, 0);
  v6 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
  *&info.pszEffectName = CDOTABaseAbility::GetCursorPosition(this);
  v8 = *(&info.pszEffectName + 1) - AbsOrigin->y;
  v9 = *&info.pszEffectName - AbsOrigin->x;
  vDirection.z = 0.0;
  vDirection.y = v8;
  vDirection.x = v9;
  if ( VectorNormalize(&vDirection) < 0.0099999998 )
  {
    v50 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v50);
    AngleVectors(AbsAngles, &vDirection, 0, 0);
  }
  v62 = LevelSpecialValue * vDirection.x;
  v60 = LevelSpecialValue * vDirection.z;
  v61 = LevelSpecialValue * vDirection.y;
  flShipTravelDistanceb = vDirection.z * v5;
  v71 = vDirection.x * v5;
  v70 = vDirection.y * v5;
  v10 = CDOTABaseAbility::GetCaster(this);
  v11 = CBaseEntity::GetAbsOrigin(v10);
  v69.x = v11->x - v71;
  v69.y = v11->y - v70;
  v69.z = v11->z - flShipTravelDistanceb;
  flShipTravelDistance = v5 + v5;
  if ( flShipTravelDistance > 0.0 )
  {
    v12 = v5 + v5;
    *&v13 = 10.0;
    do
    {
      flShipTravelDistancea = v12;
      flfxZcoord = *&v13;
      v74 = v69;
      v14 = CGridNavBase::IsInWorld(&g_GridNav, v69, 0.5);
      v12 = flShipTravelDistancea;
      if ( v14 )
        break;
      *&v13 = flfxZcoord;
      v12 = flShipTravelDistancea - flfxZcoord;
      v69.x = (vDirection.x * flfxZcoord) + v69.x;
      v69.y = (vDirection.y * flfxZcoord) + v69.y;
      v69.z = (vDirection.z * flfxZcoord) + v69.z;
    }
    while ( (flShipTravelDistancea - flfxZcoord) > 0.0 );
    flShipTravelDistance = v12;
  }
  v15 = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(v15) )
  {
    flShipTravelDistance = flShipTravelDistance * 0.5;
    v49 = CDOTABaseAbility::GetCaster(this);
    v69 = *CBaseEntity::GetAbsOrigin(v49);
  }
  CRecipientFilter::CRecipientFilter(&teamfilter);
  teamfilter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&teamfilter);
  teamfilter._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&teamfilter);
  v16 = CDOTABaseAbility::GetCaster(this);
  OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v16);
  GlobalTeam = GetGlobalTeam(OpposingTeamNumber);
  CRecipientFilter::RemoveRecipientsByTeam(&teamfilter, GlobalTeam);
  v19 = GetGlobalTeam(1);
  CRecipientFilter::AddRecipientsByTeam(&teamfilter, v19);
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  vfxLocation.z = CursorPosition.z;
  x = vDirection.x;
  this->m_vFinalDestination.z = CursorPosition.z;
  *&vfxLocation.x = *&CursorPosition.x;
  v21 = x * flShipTravelDistance;
  v22 = flShipTravelDistance * vDirection.y;
  this->m_vStartingPoint = v69;
  this->m_vFinalDestination.x = v21 + v69.x;
  this->m_vFinalDestination.y = v22 + v69.y;
  v64 = v21 + v69.x;
  v63 = v22 + v69.y;
  v23 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  v25 = CDOTA_ParticleManager::CreateParticle(
          ParticleManager,
          "particles/units/heroes/hero_kunkka/kunkka_ghostship_marker.vpcf",
          2,
          0,
          &teamfilter,
          v23);
  v26 = GetParticleManager();
  v76 = __PAIR64__(LODWORD(v63), LODWORD(v64));
  z = CursorPosition.z;
  CDOTA_ParticleManager::SetParticleControl(
    v26,
    v25,
    0,
    COERCE_DOUBLE(__PAIR64__(LODWORD(v63), LODWORD(v64))),
    CursorPosition.z);
  *&info.pszEffectName = this->ghostship_width;
  HIDWORD(info.pszEffectName) = info.pszEffectName;
  LODWORD(info.pAbility) = info.pszEffectName;
  v27 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v27, v25, 1, *&info.pszEffectName, *&info.pAbility);
  info.hSource.m_Index = -1;
  info.pszEffectName = 0;
  info.pAbility = 0;
  info.fDistance = 0.0;
  info.bHasFrontalCone = 1;
  y = vec3_origin.y;
  info.fStartRadius = 0.0;
  v29 = vec3_origin.z;
  info.vSpawnOrigin.x = vec3_origin.x;
  info.vSpawnOrigin.y = y;
  info.vSpawnOrigin.z = v29;
  info.vVelocity.x = vec3_origin.x;
  info.vVelocity.y = y;
  info.vVelocity.z = v29;
  info.vAcceleration.x = vec3_origin.x;
  info.vAcceleration.y = y;
  info.vAcceleration.z = v29;
  info.fEndRadius = 0.0;
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
  info.bStickyFoWReveal = 0;
  info.pKVExtraData = 0;
  info.fExpireTime = 0.0;
  info.fMaxSpeed = 0.0;
  v30 = CDOTABaseAbility::GetCaster(this);
  info.pszEffectName = CDOTA_BaseNPC::GetModifiedAbilityParticleName(
                         v30,
                         "particles/units/heroes/hero_kunkka/kunkka_ghost_ship.vpcf");
  info.bStickyFoWReveal = 1;
  ghostship_width = this->ghostship_width;
  info.vVelocity.x = v62;
  info.pAbility = this;
  info.vVelocity.y = v61;
  info.vSpawnOrigin = v69;
  info.fDistance = flShipTravelDistance;
  info.vVelocity.z = v60;
  info.fStartRadius = ghostship_width;
  info.fEndRadius = ghostship_width;
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
  info.iUnitTargetTeam = 3;
  info.iUnitTargetType = 19;
  info.bProvidesVision = 1;
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  info.iVisionRadius = 400;
  info.iVisionTeamNumber = m_Value;
  KeyValues::KeyValues(&kv, "ghost_ship");
  KeyValues::SetInt(&kv, "dragenemies", 0);
  KeyValues::SetInt(&kv, "fxIndex", v25);
  info.pKVExtraData = &kv;
  CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  KeyValues::~KeyValues(&kv);
  v37 = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(v37) )
  {
    v52 = vec3_origin.y;
    info.bHasFrontalCone = 1;
    info.bCheckStartPosition = 0;
    info.vAcceleration.y = v52;
    v53 = vec3_origin.z;
    info.vSpawnOrigin = v69;
    info.vAcceleration.z = v53;
    info.hSource.m_Index = -1;
    info.vVelocity.x = v62;
    info.pszEffectName = 0;
    info.vAcceleration.x = vec3_origin.x;
    info.iUnitTargetTeam = 0;
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
    info.vVelocity.y = v61;
    ghostship_width_scepter = this->ghostship_width_scepter;
    info.vVelocity.z = v60;
    info.fDistance = flShipTravelDistance;
    info.fStartRadius = ghostship_width_scepter;
    info.fEndRadius = ghostship_width_scepter;
    v55 = CDOTABaseAbility::GetCaster(this);
    if ( v55 != 0 && (v56 = v55->m_pEntity) != 0 )
    {
      v57 = (v56->m_EHandle.m_Index >> 15) - (v56->m_flags & 1);
      v58 = 0x7FFF;
      if ( v56->m_EHandle.m_Index != -1 )
        v58 = v56->m_EHandle.m_Index & 0x7FFF;
      LOWORD(info.hSource.m_Index) = v58 | info.hSource.m_Index & 0x8000;
      info.hSource.m_Index = (v57 << 15) | info.hSource.m_Index & 0x7FFF;
    }
    else
    {
      info.hSource.m_Index = -1;
    }
    info.iUnitTargetTeam = 2;
    info.iUnitTargetType = 19;
    info.bProvidesVision = 1;
    v59 = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
    info.iVisionRadius = 400;
    info.iVisionTeamNumber = v59;
    KeyValues::KeyValues(&kv, "ghost_ship");
    KeyValues::SetInt(&kv, "dragenemies", 1);
    info.pKVExtraData = &kv;
    CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
    KeyValues::~KeyValues(&kv);
    m_pParent = this->m_pGameSceneNode->m_pParent;
    if ( m_pParent != 0 )
      goto LABEL_19;
  }
  else
  {
    m_pParent = this->m_pGameSceneNode->m_pParent;
    if ( m_pParent != 0 )
    {
LABEL_19:
      OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
      goto LABEL_20;
    }
  }
  OwnerEntity = 0;
LABEL_20:
  vPos = *CBaseEntity::GetAbsOrigin(OwnerEntity);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS(&filter, &vPos);
  filter._vptr_IRecipientFilter = &off_3FECD70;
  CPASAttenuationFilter::Filter(&filter, &vPos, 0.80000001, v40);
  v72 = g_pSoundOpGameSystem;
  if ( this->m_SoundEventGuid.m_nGuid.m_Data != 0 )
  {
    CRecipientFilter::CRecipientFilter(&kv);
    kv.m_uValue = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&kv);
    kv.m_uValue = &off_3FCB130;
    CRecipientFilter::MakeReliable(&kv);
    CSoundOpGameSystem::StopSoundEvent(v72, &kv, this->m_SoundEventGuid);
    kv.m_uValue = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&kv);
    this->m_SoundEventGuid.m_nGuid.m_Data = 0;
    this->m_SoundEventGuid.m_hStackHash = -1;
  }
  this->m_SoundEventGuid = DOTA_EmitSoundLocation(&vPos, "Ability.Ghostship", 0);
  v41 = this->m_pGameSceneNode->m_pParent;
  if ( v41 != 0 )
    v42 = CGameSceneNode::GetOwnerEntity(v41);
  else
    v42 = 0;
  Team = CBaseEntity::GetTeam(v42);
  CRecipientFilter::RemoveRecipientsNotOnTeam(&filter, Team);
  v44 = GetGlobalTeam(1);
  CRecipientFilter::AddRecipientsByTeam(&filter, v44);
  info.vSpawnOrigin.x = 1.0;
  info.vSpawnOrigin.y = 0.0;
  info.vSpawnOrigin.z = 0.0;
  LODWORD(info.vVelocity.x) = 100;
  info.vAcceleration.x = 0.0;
  *&info.vAcceleration.z = 0;
  LOWORD(info.fStartRadius) = 1;
  BYTE2(info.fStartRadius) = 0;
  info.fEndRadius = NAN;
  *&info.bHasFrontalCone = 0;
  memset(&info.iUnitTargetTeam, 0, 21);
  LODWORD(info.pszEffectName) = 6;
  info.pAbility = "Ability.Ghostship.bell";
  *&info.vVelocity.y = &vPos;
  CBaseEntity::EmitSound(&filter, 0, &info);
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  v47 = CDOTABaseAbility::GetCaster(this);
  v76 = __PAIR64__(LODWORD(v63), LODWORD(v64));
  z = CursorPosition.z;
  CDOTAGamerules::SendProjectionAbilityMessage(
    g_pGameRules,
    v47,
    0,
    m_iAbilityID,
    0,
    0,
    COERCE_DOUBLE(__PAIR64__(LODWORD(v63), LODWORD(v64))),
    CursorPosition.z,
    -1.0,
    v48);
  *&info.bHasFrontalCone = 0;
  if ( (*&info.bProvidesVision & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&info.iUnitTargetTeam);
    if ( (*&info.bProvidesVision & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&info.iUnitTargetTeam);
  }
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(&filter);
  teamfilter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&teamfilter);
}


// CDOTA_Ability_Kunkka_GhostShip::OnProjectileHit_ExtraData  (line 1247, @0x00000000029f1680, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetBool, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetTeamNumber, InValidate, IndexToIdentity, IsRealHero, IsValid, Length2D, LookupEntity, QueueConcept, StopSoundEvent, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator-, operator[], ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter, ~CUtlVector
// calls: KeyValues::GetInt, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTABaseAbility::GetCaster, FindUnitsInRadius, ApplyDamage, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetAbsOrigin (26 total)
// strings: "dragenemies", "fxIndex", "modifier_stunned", "ghostship_speed_scepter", "modifier_kunkka_ghost_ship_knockback", "center_x" (13 total)
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
__int64 __fastcall CDOTA_Ability_Kunkka_GhostShip::OnProjectileHit_ExtraData(
        CDOTA_Ability_Kunkka_GhostShip *const this,
        _DWORD *hTarget,
        const Vector *const vLocation,
        KeyValues *pExtraData)
{
  int Int; // eax
  CEntityIdentity *v8; // rcx
  CEntityIdentity *v9; // rcx
  int v10; // r12d
  __m128i v11; // xmm7
  CDOTA_ParticleManager *ParticleManager; // rax
  float v13; // r13d
  CDOTA_BaseNPC *v14; // r12
  CDOTA_BaseNPC *v15; // rax
  __int64 v16; // r13
  int v17; // r14d
  CHandle<CBaseEntity> *v18; // rdx
  uint32 m_Index; // eax
  __int16 v20; // cx
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // rdx
  CEntityInstance *m_pInstance; // r12
  CDOTA_BaseNPC *v24; // rax
  float v25; // xmm1_4
  CDOTA_BaseNPC *v26; // rax
  CEntityInstance *v27; // r12
  float v28; // xmm1_4
  float v29; // xmm1_4
  float v30; // xmm1_4
  float v31; // xmm1_4
  float v32; // xmm1_4
  float v33; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  float v35; // xmm1_4
  CDOTA_BaseNPC *v36; // rax
  CDOTA_BaseNPC *v38; // rax
  CDOTA_BaseNPC_Hero *v39; // rdi
  float v40; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  CSoundOpGameSystem *v42; // r14
  char m_CScriptComponent_high; // r13
  float v44; // xmm1_4
  CDOTA_BaseNPC *v45; // rax
  int iNumHeroes; // [rsp+2Ch] [rbp-204h]
  int iNumEntities; // [rsp+38h] [rbp-1F8h]
  float flDuration; // [rsp+3Ch] [rbp-1F4h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+40h] [rbp-1F0h] BYREF
  CResponseCriteriaSet criteria; // [rsp+60h] [rbp-1D0h] BYREF
  KeyValues kv; // [rsp+A0h] [rbp-190h] BYREF
  KeyValues kv_0; // [rsp+C0h] [rbp-170h] BYREF
  unsigned __int64 v54; // [rsp+1F8h] [rbp-38h]

  v54 = __readfsqword(0x28u);
  Int = KeyValues::GetInt(pExtraData, "dragenemies", 0);
  if ( (*hTarget + 2) > 1
    && (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F]) != 0
    && (v9 = &v8[*hTarget & 0x1FF]) != 0
    && *hTarget == v9->m_EHandle.m_Index
    && (v27 = v9->m_pInstance, v9->m_pInstance != 0)
    && BYTE3(v27[7]._vptr_IHandleEntity) != 0 )
  {
    if ( Int != 0 )
    {
      if ( (v27[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
      {
        CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "ghostship_speed_scepter", -1, 0);
        CBaseEntity::GetAbsOrigin(v27);
        CBaseEntity::GetAbsOrigin(v27);
        KeyValues::KeyValues(&kv, "modifier_kunkka_ghost_ship_knockback");
        KeyValues::SetFloat(&kv, "center_x", v28);
        KeyValues::SetFloat(&kv, "center_y", v29);
        KeyValues::SetFloat(&kv, "center_z", v30);
        KeyValues::SetFloat(&kv, "duration", v31);
        KeyValues::SetFloat(&kv, "knockback_duration", v32);
        KeyValues::SetFloat(&kv, "knockback_distance", v33);
        Caster = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v27, Caster, this, "modifier_kunkka_ghost_ship_knockback", &kv, 0);
        KeyValues::KeyValues(&kv_0, "modifier_kunkka_ghost_ship_loaded");
        KeyValues::SetFloat(&kv_0, "duration", v35);
        v36 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v27, v36, this, "modifier_kunkka_ghost_ship_loaded", &kv_0, 0);
        KeyValues::~KeyValues(&kv_0);
        KeyValues::~KeyValues(&kv);
      }
    }
    else if ( (v27[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 && LOBYTE(v27[71].m_pEntity) == 0 )
    {
      m_CScriptComponent_high = HIBYTE(v27[7].m_CScriptComponent);
      if ( m_CScriptComponent_high == CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
      {
        KeyValues::KeyValues(&kv_0, "modifier_kunkka_ghost_ship_movespeed");
        KeyValues::SetFloat(&kv_0, "duration", v44);
        v45 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v27, v45, this, "modifier_kunkka_ghost_ship_damage_absorb", &kv_0, 0);
        KeyValues::~KeyValues(&kv_0);
      }
    }
  }
  else if ( Int == 0 )
  {
    v10 = KeyValues::GetInt(pExtraData, "fxIndex", -1);
    if ( v10 != -1 )
    {
      ParticleManager = GetParticleManager();
      CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, v10, 0);
    }
    *v11.m128i_i32 = this->ghostship_width;
    hEntities.m_Size = 0;
    hEntities.m_Memory.m_pMemory = 0;
    hEntities.m_Memory.m_nAllocationCount = 0;
    hEntities.m_Memory.m_nGrowSize = 0;
    v13 = COERCE_FLOAT(_mm_cvtsi128_si32(v11));
    v14 = CDOTABaseAbility::GetCaster(this);
    v15 = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(v15->m_iTeamNum.m_Value, vLocation, v14, v13, &hEntities, 2, 19, 0, 0, 0);
    if ( hEntities.m_Size > 0 )
    {
      iNumHeroes = 0;
      v16 = 0;
      v17 = 0;
      iNumEntities = 0;
      do
      {
        v18 = &hEntities.m_Memory.m_pMemory[v16];
        m_Index = hEntities.m_Memory.m_pMemory[v16].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v20 = v18->m_Index;
          v21 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v18->m_Index) >> 9) & 0x3F];
          if ( v21 != 0 )
          {
            v22 = &v21[v20 & 0x1FF];
            if ( v22 != 0 && m_Index == v22->m_EHandle.m_Index )
            {
              m_pInstance = v22->m_pInstance;
              if ( v22->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
              {
                flDuration = (*(this->_vptr_IHandleEntity + 247))(this);
                v24 = CDOTABaseAbility::GetCaster(this);
                ApplyDamage(v24, m_pInstance, this, flDuration, 2, 0);
                KeyValues::KeyValues(&kv_0, "modifier_stunned");
                KeyValues::SetFloat(&kv_0, "duration", v25);
                v26 = CDOTABaseAbility::GetCaster(this);
                CDOTA_BaseNPC::AddNewModifier(m_pInstance, v26, this, "modifier_stunned", &kv_0, 0);
                ++iNumEntities;
                if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                  iNumHeroes += LOBYTE(m_pInstance[71].m_pEntity) == 0;
                KeyValues::~KeyValues(&kv_0);
              }
            }
          }
        }
        ++v17;
        ++v16;
      }
      while ( hEntities.m_Size > v17 );
      if ( iNumHeroes > 2 )
      {
        v38 = CDOTABaseAbility::GetCaster(this);
        if ( v38 != 0 && (v38->m_iUnitType & 1) != 0 )
          v39 = v38;
        else
          v39 = 0;
        EconEntity_OnOwnerKillEaterEvent(
          v39,
          0,
          kill_eater_event_t::kKillEaterEventType_Kunkka_TripleHeroGhostShips,
          1,
          INVALID_ITEM_DEF_INDEX);
      }
    }
    CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
    CResponseCriteriaSet::AppendCriteria(&criteria, "boat_victim_heroes", 1.0, v40);
    if ( CDOTABaseAbility::GetCaster(this) != 0 )
    {
      m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
      if ( m_pSpeech != 0 )
        CDOTA_Speech::QueueConcept(m_pSpeech, 18, 0.5, &criteria, 4, 1, 0, 0, 0);
    }
    DOTA_EmitSoundLocation(vLocation, "Ability.Ghostship.crash", 1);
    v42 = g_pSoundOpGameSystem;
    if ( this->m_SoundEventGuid.m_nGuid.m_Data != 0 )
    {
      CRecipientFilter::CRecipientFilter(&kv_0);
      kv_0.m_uValue = &off_3FB63F0;
      CRecipientFilter::AddAllPlayers(&kv_0);
      kv_0.m_uValue = &off_3FCB130;
      CRecipientFilter::MakeReliable(&kv_0);
      CSoundOpGameSystem::StopSoundEvent(v42, &kv_0, this->m_SoundEventGuid);
      kv_0.m_uValue = &off_3FB63F0;
      CRecipientFilter::~CRecipientFilter(&kv_0);
      this->m_SoundEventGuid.m_nGuid.m_Data = 0;
      this->m_SoundEventGuid.m_hStackHash = -1;
    }
    CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
  }
  return 0;
}


// CDOTA_Ability_Kunkka_GhostShip::OnProjectileThink  (line 1355, @0x00000000029c8750, libserver.so)  // inlines: AllocateData, CBroadcastRecipientFilter, CSosFieldData, CSosFieldDataFloat3, ClearData, GetDataPtr, Init, SetValue, ~CBroadcastRecipientFilter, ~CSosFieldData, ~CSosFieldDataFloat3
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CRecipientFilter::~CRecipientFilter, operator new [], __stack_chk_fail, CSosFieldData::ClearData, _Unwind_Resume
void __fastcall CDOTA_Ability_Kunkka_GhostShip::OnProjectileThink(
        CDOTA_Ability_Kunkka_GhostShip *const this,
        const Vector *const vLocation)
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
  z_low = LODWORD(vLocation->z);
  fieldData.m_pData = 0;
  y_low = LODWORD(vLocation->y);
  v6 = _mm_cvtsi128_si32(z_low);
  *&vLocation = vLocation->x;
  v7 = _mm_cvtsi128_si32(y_low);
  fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 10);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT_3;
  v8 = operator new[](0xCu);
  fieldData.m_pData = v8;
  fieldData.m_nAllocSize = 12;
  *v8 = vLocation;
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


// CDOTA_Ability_Kunkka_GhostShip::GetAbilityDamageToTargetOverInterval  (line 1365, @0x00000000029bb490, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Kunkka_GhostShip::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Kunkka_GhostShip *const this,
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


// CDOTA_Ability_Kunkka_GhostShip::GetStunDuration  (line 1375, @0x00000000029ded70, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Kunkka_GhostShip::GetStunDuration(CDOTA_Ability_Kunkka_GhostShip *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_duration", -1, 1);
}


// CDOTA_Modifier_Kunkka_GhostShip_Knockback::~CDOTA_Modifier_Kunkka_GhostShip_Knockback  (line 1384, @0x0000000002a11d10, libserver.so)  // inlines: ~CDOTA_Modifier_Knockback
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Kunkka_GhostShip_Knockback::~CDOTA_Modifier_Kunkka_GhostShip_Knockback(
        CDOTA_Modifier_Kunkka_GhostShip_Knockback *const this)
{
  this->_vptr_CDOTA_Buff = &off_4122C50;
  this->_vptr_CHorizontalMotionController = &off_4122F58;
  this->_vptr_CVerticalMotionController = &off_4122F98;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Kunkka_GhostShip_Knockback::~CDOTA_Modifier_Kunkka_GhostShip_Knockback  (line 1384, @0x0000000002a11d50, libserver.so)  // inlines: ~CDOTA_Modifier_Knockback, ~CDOTA_Modifier_Kunkka_GhostShip_Knockback
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Kunkka_GhostShip_Knockback::~CDOTA_Modifier_Kunkka_GhostShip_Knockback(
        CDOTA_Modifier_Kunkka_GhostShip_Knockback *const this)
{
  this->_vptr_CDOTA_Buff = &off_4122C50;
  this->_vptr_CHorizontalMotionController = &off_4122F58;
  this->_vptr_CVerticalMotionController = &off_4122F98;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Kunkka_GhostShip_Knockback::IsHidden  (line 1390, @0x0000000002a09910, libserver.so)
bool __fastcall CDOTA_Modifier_Kunkka_GhostShip_Knockback::IsHidden(
        CDOTA_Modifier_Kunkka_GhostShip_Knockback *const this)
{
  return 1;
}


// CDOTA_Modifier_Kunkka_GhostShip_Knockback::IsStunDebuff  (line 1391, @0x0000000002a09920, libserver.so)
bool __fastcall CDOTA_Modifier_Kunkka_GhostShip_Knockback::IsStunDebuff(
        CDOTA_Modifier_Kunkka_GhostShip_Knockback *const this)
{
  return 0;
}


// CDOTA_Modifier_Kunkka_GhostShip_Knockback::CheckState  (line 1399, @0x00000000029b50e0, libserver.so)
void __fastcall CDOTA_Modifier_Kunkka_GhostShip_Knockback::CheckState(
        CDOTA_Modifier_Kunkka_GhostShip_Knockback *const this,
        CDOTABuffState *const buffState)
{
  ;
}


// CDOTA_Modifier_Kunkka_GhostShip_Knockback::OnDestroy  (line 1407, @0x00000000029ba260, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CGridNav::DestroyTreesAroundPoint, CDOTA_Modifier_Knockback::OnDestroy
void __fastcall CDOTA_Modifier_Kunkka_GhostShip_Knockback::OnDestroy(
        CDOTA_Modifier_Kunkka_GhostShip_Knockback *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v3; // r12d
  CDOTA_BaseNPC *Parent; // rax
  float v5; // xmm3_4
  Vector v6; // 0:xmm0_8.8,8:xmm1_4.4

  Caster = CDOTA_Buff::GetCaster(this);
  v3 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
  Parent = CDOTA_Buff::GetParent(this);
  v6 = *CBaseEntity::GetAbsOrigin(Parent);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v3, v6, 150.0, v5);
  CDOTA_Modifier_Knockback::OnDestroy(this);
}


// CDOTA_Modifier_Kunkka_GhostShip_Loaded::~CDOTA_Modifier_Kunkka_GhostShip_Loaded  (line 1422, @0x0000000002a11cc0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Kunkka_GhostShip_Loaded::~CDOTA_Modifier_Kunkka_GhostShip_Loaded(
        CDOTA_Modifier_Kunkka_GhostShip_Loaded *const this)
{
  this->_vptr_CDOTA_Buff = &off_434B130;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Kunkka_GhostShip_Loaded::~CDOTA_Modifier_Kunkka_GhostShip_Loaded  (line 1422, @0x0000000002a11ce0, libserver.so)  // inlines: ~CDOTA_Modifier_Kunkka_GhostShip_Loaded
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Kunkka_GhostShip_Loaded::~CDOTA_Modifier_Kunkka_GhostShip_Loaded(
        CDOTA_Modifier_Kunkka_GhostShip_Loaded *const this)
{
  this->_vptr_CDOTA_Buff = &off_434B130;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Kunkka_GhostShip_Loaded::IsPurgable  (line 1427, @0x0000000002a09930, libserver.so)
bool __fastcall CDOTA_Modifier_Kunkka_GhostShip_Loaded::IsPurgable(CDOTA_Modifier_Kunkka_GhostShip_Loaded *const this)
{
  return 0;
}


// CDOTA_Modifier_Kunkka_GhostShip_Loaded::GetModifierInvisibilityLevel  (line 1430, @0x0000000002a09940, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Kunkka_GhostShip_Loaded::GetModifierInvisibilityLevel(
        CDOTA_Modifier_Kunkka_GhostShip_Loaded *const this,
        const CModifierParams *const params)
{
  return 0x3F66666600000001uLL;
}


// CDOTA_Modifier_Kunkka_GhostShip_Loaded::CheckState  (line 1441, @0x00000000029b50f0, libserver.so)
void __fastcall CDOTA_Modifier_Kunkka_GhostShip_Loaded::CheckState(
        CDOTA_Modifier_Kunkka_GhostShip_Loaded *const this,
        CDOTABuffState *const buffState)
{
  ;
}


// CDOTA_Modifier_Kunkka_GhostShip_Loaded::DeclareFunctions  (line 1453, @0x00000000029b5100, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Kunkka_GhostShip_Loaded::ModelScale(CModifierParams const&)
void __fastcall CDOTA_Modifier_Kunkka_GhostShip_Loaded::DeclareFunctions(
        CDOTA_Modifier_Kunkka_GhostShip_Loaded *const this)
{
  this->m_Functions[153].__pfn = CDOTA_Modifier_Kunkka_GhostShip_Loaded::ModelScale;
  this->m_Functions[153].__delta = 0;
}


// CDOTA_Modifier_Kunkka_GhostShip_Loaded::ModelScale  (line 1460, @0x00000000029b5120, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Kunkka_GhostShip_Loaded::ModelScale(
        CDOTA_Modifier_Kunkka_GhostShip_Loaded *const this,
        const CModifierParams *const params)
{
  return 0xC1C8000000000001LL;
}


// CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb::~CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb  (line 1472, @0x0000000002a11c70, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb::~CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb(
        CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb *const this)
{
  this->_vptr_CDOTA_Buff = &off_434B450;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb::~CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb  (line 1472, @0x0000000002a11c90, libserver.so)  // inlines: ~CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb::~CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb(
        CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb *const this)
{
  this->_vptr_CDOTA_Buff = &off_434B450;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb::IsPurgable  (line 1479, @0x0000000002a09960, libserver.so)
bool __fastcall CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb::IsPurgable(
        CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb *const this)
{
  return 0;
}


// CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb::GetStatusEffectName  (line 1485, @0x0000000002a09970, libserver.so)
// strings: "particles/status_fx/status_effect_rum.vpcf"
const char *__fastcall CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb::GetStatusEffectName(
        CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb *const this)
{
  return "particles/status_fx/status_effect_rum.vpcf";
}


// CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb::StatusEffectPriority  (line 1486, @0x0000000002a09980, libserver.so)
int __fastcall CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb::StatusEffectPriority(
        CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb *const this)
{
  return 8;
}


// CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb::OnCreated  (line 1499, @0x00000000029f7f90, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "movespeed_bonus", "ghostship_absorb"
void __fastcall CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb::OnCreated(
        CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  this->m_iAccumulatedDamage = 0;
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->movespeed_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "movespeed_bonus", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->ghostship_absorb = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "ghostship_absorb", -1, 0);
      return;
    }
  }
  else
  {
    this->movespeed_bonus = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->ghostship_absorb = 0.0;
}


// CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb::OnDestroy  (line 1508, @0x00000000029e0b80, libserver.so)  // inlines: DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_kunkka_ghost_ship_damage_delay"
void __fastcall CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb::OnDestroy(
        CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *Ability; // rax
  float v4; // xmm1_4
  CDOTABaseAbility *v5; // r14
  CDOTA_BaseNPC *v6; // r13
  CDOTA_BaseNPC *v7; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  Parent = CDOTA_Buff::GetParent(this);
  if ( CBaseEntity::GetHealth(Parent) > 0 && this->m_iAccumulatedDamage > 0 )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    if ( Ability != 0 )
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "buff_duration", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_kunkka_ghost_ship_damage_delay");
    KeyValues::SetFloat(&kv, "duration", v4);
    KeyValues::SetInt(&kv, "damage", this->m_iAccumulatedDamage);
    v5 = CDOTA_Buff::GetAbility(this);
    v6 = CDOTA_Buff::GetParent(this);
    v7 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::AddNewModifier(v7, v6, v5, "modifier_kunkka_ghost_ship_damage_delay", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb::DeclareFunctions  (line 1527, @0x00000000029b5140, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb::DeclareFunctions(
        CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb *const this)
{
  this->m_Functions[89].__pfn = (&stru_10 + 697);
  this->m_Functions[89].__delta = 0;
  this->m_Functions[13].__pfn = (&stru_10 + 705);
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb::GetModifierMoveSpeedBonus_Percentage  (line 1535, @0x00000000029b5180, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->movespeed_bonus;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb::GetModifierTotal_ConstantBlock  (line 1542, @0x00000000029b51a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb::GetModifierTotal_ConstantBlock(
        CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm1
  float v3; // xmm0_4
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  v3 = (params->fDamage * this->ghostship_absorb) / 100.0;
  this->m_iAccumulatedDamage += v3;
  *v2.m128i_i32 = v3;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Kunkka_GhostShip_DamageDelay::~CDOTA_Modifier_Kunkka_GhostShip_DamageDelay  (line 1560, @0x0000000002a11c20, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Kunkka_GhostShip_DamageDelay::~CDOTA_Modifier_Kunkka_GhostShip_DamageDelay(
        CDOTA_Modifier_Kunkka_GhostShip_DamageDelay *const this)
{
  this->_vptr_CDOTA_Buff = &off_434B790;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Kunkka_GhostShip_DamageDelay::~CDOTA_Modifier_Kunkka_GhostShip_DamageDelay  (line 1560, @0x0000000002a11c40, libserver.so)  // inlines: ~CDOTA_Modifier_Kunkka_GhostShip_DamageDelay
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Kunkka_GhostShip_DamageDelay::~CDOTA_Modifier_Kunkka_GhostShip_DamageDelay(
        CDOTA_Modifier_Kunkka_GhostShip_DamageDelay *const this)
{
  this->_vptr_CDOTA_Buff = &off_434B790;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Kunkka_GhostShip_DamageDelay::IsPurgable  (line 1568, @0x0000000002a09990, libserver.so)
bool __fastcall CDOTA_Modifier_Kunkka_GhostShip_DamageDelay::IsPurgable(
        CDOTA_Modifier_Kunkka_GhostShip_DamageDelay *const this)
{
  return 0;
}


// CDOTA_Modifier_Kunkka_GhostShip_DamageDelay::OnCreated  (line 1580, @0x00000000029b6a60, libserver.so)
// calls: KeyValues::GetInt, KeyValues::GetFloat, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Kunkka_GhostShip_DamageDelay::OnCreated(
        CDOTA_Modifier_Kunkka_GhostShip_DamageDelay *const this,
        KeyValues *pKV)
{
  float v4; // xmm1_4
  float v5; // xmm1_4

  this->m_iAccumulatedDamage = KeyValues::GetInt(pKV, "damage", 0);
  this->m_flDuration = KeyValues::GetFloat(pKV, "duration", v4);
  CDOTA_Buff::StartIntervalThink(this, 1.0, v5);
}


// CDOTA_Modifier_Kunkka_GhostShip_DamageDelay::OnIntervalThink  (line 1592, @0x00000000029bab10, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::ModifyHealth
void __fastcall CDOTA_Modifier_Kunkka_GhostShip_DamageDelay::OnIntervalThink(
        CDOTA_Modifier_Kunkka_GhostShip_DamageDelay *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *v4; // rax
  int v5; // r12d
  CDOTA_BaseNPC *v6; // rax

  Parent = CDOTA_Buff::GetParent(this);
  if ( CBaseEntity::GetHealth(Parent) > 0 && this->m_iAccumulatedDamage > 0 )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    v4 = CDOTA_Buff::GetParent(this);
    v5 = (CBaseEntity::GetHealth(v4) - (this->m_iAccumulatedDamage / this->m_flDuration));
    v6 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::ModifyHealth(v6, v5, Ability, 0, 32);
  }
}


