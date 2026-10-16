// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_tiny.cpp:54
class CDOTA_Tiny_ScepterTree : public CDOTAWearableItem {
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
	CDOTA_Tiny_ScepterTree(CDOTA_Tiny_ScepterTree &);
	CDOTA_Tiny_ScepterTree(CDOTA_Tiny_ScepterTree &);
	CDOTA_Tiny_ScepterTree();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CDOTA_Tiny_ScepterTree();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 1712
};

// src/game/shared/dota/units/dota_unit_hero_tiny.cpp:65
class C_CDOTA_Tiny_ScepterTree_MapInstall {
	C_CDOTA_Tiny_ScepterTree_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_tiny.cpp:75
class CDOTA_Unit_Hero_Tiny : public CDOTA_BaseNPC_Hero {
	class NetworkVar_m_hIllusionOwner {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	EHANDLE m_hTreeWearable;  // +0x16ec
	int m_nFXIndexScepterAmbient;  // +0x16f0
	typedef CDOTA_Unit_Hero_Tiny ThisClass;

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
	CDOTA_Unit_Hero_Tiny(CDOTA_Unit_Hero_Tiny &);
	CDOTA_Unit_Hero_Tiny(CDOTA_Unit_Hero_Tiny &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnAlive();
	virtual void OnIllusionPostSpawn(CDOTA_BaseNPC *);
	virtual void OnDying();
	virtual const char * GetDeathEffectName();
	virtual void GainedModifier(CDOTA_Buff *);
	virtual bool LostModifier(CDOTA_Buff *);
	virtual void Event_Killed(const CTakeDamageInfo &);
	virtual const char * GetSoundSet();
	virtual void UpdateOnModelChange(bool);
	virtual void CalculateActivityModifiers(Activity);
	CDOTA_Unit_Hero_Tiny();
	virtual ~CDOTA_Unit_Hero_Tiny();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[471] OnAlive
	// vtable[491] OnIllusionPostSpawn
	// vtable[469] OnDying
	// vtable[502] GetDeathEffectName
	// vtable[449] GainedModifier
	// vtable[450] LostModifier
	// vtable[92] Event_Killed
	// vtable[460] GetSoundSet
	// vtable[473] UpdateOnModelChange
	// vtable[442] CalculateActivityModifiers
	// sizeof = 5880
};

// src/game/shared/dota/units/dota_unit_hero_tiny.cpp:120
class C_CDOTA_Unit_Hero_Tiny_MapInstall {
	C_CDOTA_Unit_Hero_Tiny_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_tiny.cpp:378
class CDOTA_Ability_Tiny_Avalanche : public CDOTABaseAbility {
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
	CDOTA_Ability_Tiny_Avalanche(CDOTA_Ability_Tiny_Avalanche &);
	CDOTA_Ability_Tiny_Avalanche(CDOTA_Ability_Tiny_Avalanche &);
	CDOTA_Ability_Tiny_Avalanche();
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
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_Tiny_Avalanche();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[333] GetAOERadius
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// sizeof = 928
};

// src/game/shared/dota/units/dota_unit_hero_tiny.cpp:397
class C_CDOTA_Ability_Tiny_Avalanche_MapInstall {
	C_CDOTA_Ability_Tiny_Avalanche_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_tiny.cpp:483
class CDOTA_Modifier_Tiny_Avalanche_Stun : public CDOTA_Modifier_Stunned {
public:

	CDOTA_Modifier_Tiny_Avalanche_Stun(CDOTA_Modifier_Tiny_Avalanche_Stun &);
	CDOTA_Modifier_Tiny_Avalanche_Stun(const CDOTA_Modifier_Tiny_Avalanche_Stun &);
	CDOTA_Modifier_Tiny_Avalanche_Stun();
	virtual ~CDOTA_Modifier_Tiny_Avalanche_Stun();

	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_tiny.cpp:496
class CDOTA_Modifier_Tiny_Avalanche : public CDOTA_Buff {
public:

private:

	int m_nTicks;  // +0xba8
	int radius;  // +0xbac
	int num_ticks;  // +0xbb0
	float stun_duration;  // +0xbb4
	int m_damage;  // +0xbb8
	CDOTA_Modifier_Tiny_Avalanche();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Tiny_Avalanche();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_tiny.cpp:603
class CDOTA_Ability_Tiny_Toss : public CDOTABaseAbility {
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
	CDOTA_Ability_Tiny_Toss(CDOTA_Ability_Tiny_Toss &);
	CDOTA_Ability_Tiny_Toss(CDOTA_Ability_Tiny_Toss &);
	CDOTA_Ability_Tiny_Toss();
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
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Tiny_Toss();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[333] GetAOERadius
	// vtable[266] OnSpellStart
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_tiny.cpp:622
class C_CDOTA_Ability_Tiny_Toss_MapInstall {
	C_CDOTA_Ability_Tiny_Toss_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_tiny.cpp:731
class CDOTA_Modifier_Tiny_Toss : public CDOTA_Buff, public CHorizontalMotionController, public CVerticalMotionController {
public:

private:

	EHANDLE m_hTarget;  // +0xbc4
	float m_flPredictedTotalTime;  // +0xbc8
	float m_flCurrentTimeHoriz;  // +0xbd8
	float m_flCurrentTimeVert;  // +0xbdc
	bool m_bHorizontalMotionInterrupted;  // +0xbe0
	bool m_bDamageApplied;  // +0xbe1
	bool m_bTargetTeleported;  // +0xbe2

	float m_flInitialVelocityZ;  // +0xbfc
	int radius;  // +0xc00
	int toss_damage;  // +0xc04
	CDOTA_Modifier_Tiny_Toss();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsHidden();
	virtual bool IsStunDebuff();
	virtual bool IsPurgable();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void UpdateVerticalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual void OnVerticalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual bool IsVerticalMotionValidToApply();
	virtual bool IsMotionController();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual bool RemoveOnDeath();
	void DamageNearbyUnits();
	void TryToDamageSelf();
	virtual ~CDOTA_Modifier_Tiny_Toss();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[5] CheckState
	// vtable[11] IsHidden
	// vtable[16] IsStunDebuff
	// vtable[14] IsPurgable
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] UpdateVerticalMotion
	// vtable[91] OnHorizontalMotionInterrupted
	// vtable[92] OnVerticalMotionInterrupted
	// vtable[93] IsHorizontalMotionValidToApply
	// vtable[94] IsVerticalMotionValidToApply
	// vtable[21] IsMotionController
	// vtable[67] GetEffectName
	// vtable[54] RemoveOnDeath
	// sizeof = 3080
};

// src/game/shared/dota/units/dota_unit_hero_tiny.cpp:1080
class CDOTA_Ability_Tiny_CraggyExterior : public CDOTABaseAbility {
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
	CDOTA_Ability_Tiny_CraggyExterior(CDOTA_Ability_Tiny_CraggyExterior &);
	CDOTA_Ability_Tiny_CraggyExterior(CDOTA_Ability_Tiny_CraggyExterior &);
	CDOTA_Ability_Tiny_CraggyExterior();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Tiny_CraggyExterior();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_tiny.cpp:1099
class C_CDOTA_Ability_Tiny_CraggyExterior_MapInstall {
	C_CDOTA_Ability_Tiny_CraggyExterior_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_tiny.cpp:1110
class CDOTA_Modifier_Tiny_CraggyExterior : public CDOTA_Buff {
public:

private:

	int stun_chance;  // +0xba8
	float stun_duration;  // +0xbac
	int bonus_armor;  // +0xbb0
	int radius;  // +0xbb4
	int damage;  // +0xbb8
	CDOTA_Modifier_Tiny_CraggyExterior();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t OnAttackLanded(const CModifierParams &);
	virtual ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual ~CDOTA_Modifier_Tiny_CraggyExterior();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// vtable[89] OnAttackLanded
	// vtable[90] GetModifierPhysicalArmorBonus
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_tiny.cpp:1222
class CDOTA_Ability_Tiny_Grow : public CDOTABaseAbility {
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
	CDOTA_Ability_Tiny_Grow(CDOTA_Ability_Tiny_Grow &);
	CDOTA_Ability_Tiny_Grow(CDOTA_Ability_Tiny_Grow &);
	CDOTA_Ability_Tiny_Grow();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual bool IsHiddenWhenStolen();
	virtual const char * GetIntrinsicModifierName();
	virtual void OnStolen(CDOTABaseAbility *);
	virtual ~CDOTA_Ability_Tiny_Grow();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[306] IsHiddenWhenStolen
	// vtable[280] GetIntrinsicModifierName
	// vtable[307] OnStolen
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_tiny.cpp:1248
class CDOTA_Modifier_Tiny_Grow : public CDOTA_Buff {
public:

private:

	int bonus_damage;  // +0xba8
	int bonus_attack_speed;  // +0xbac
	int bonus_movement_speed;  // +0xbb0
	int bonus_range_scepter;  // +0xbb4
	int cleave_starting_width;  // +0xbb8
	int cleave_ending_width;  // +0xbbc
	int cleave_distance;  // +0xbc0
	int bonus_cleave_damage_scepter;  // +0xbc4
	int bonus_building_damage_scepter;  // +0xbc8
	int m_nFXIndex;  // +0xbcc
	CDOTA_Modifier_Tiny_Grow();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsHidden();
	virtual int GetPriority();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierBaseAttack_BonusDamage(const CModifierParams &);
	virtual ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Constant(const CModifierParams &);
	virtual ModifierVariant_t GetModifierModelChange(const CModifierParams &);
	virtual ModifierVariant_t GetModifierAttackRangeBonus(const CModifierParams &);
	virtual ModifierVariant_t OnAttackLanded(const CModifierParams &);
	virtual ModifierVariant_t GetModifierDamageOutgoing_Percentage(const CModifierParams &);
	virtual bool RemoveOnDeath();
	virtual ~CDOTA_Modifier_Tiny_Grow();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[11] IsHidden
	// vtable[6] GetPriority
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierBaseAttack_BonusDamage
	// vtable[90] GetModifierAttackSpeedBonus_Constant
	// vtable[91] GetModifierMoveSpeedBonus_Constant
	// vtable[92] GetModifierModelChange
	// vtable[93] GetModifierAttackRangeBonus
	// vtable[94] OnAttackLanded
	// vtable[95] GetModifierDamageOutgoing_Percentage
	// vtable[54] RemoveOnDeath
	// sizeof = 3024
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Tiny_ScepterTree::~CDOTA_Tiny_ScepterTree  (line 54, @0x0000000002a683c0, libserver.so)  // inlines: ~CDOTAWearableItem, ~CEconWearable
// calls: CEconEntity::~CEconEntity
void __fastcall CDOTA_Tiny_ScepterTree::~CDOTA_Tiny_ScepterTree(CDOTA_Tiny_ScepterTree *const this)
{
  this->_vptr_IHandleEntity = &off_47A96B0;
  this->_vptr_IHasAttributes = &off_47A9F78;
  CEconEntity::~CEconEntity(this);
}


// CDOTA_Tiny_ScepterTree::~CDOTA_Tiny_ScepterTree  (line 54, @0x0000000002a683f0, libserver.so)  // inlines: ~CDOTAWearableItem, ~CDOTA_Tiny_ScepterTree, ~CEconWearable
// calls: CEconEntity::~CEconEntity, CBaseEntity::operator delete
void __fastcall CDOTA_Tiny_ScepterTree::~CDOTA_Tiny_ScepterTree(CDOTA_Tiny_ScepterTree *const this)
{
  this->_vptr_IHandleEntity = &off_47A96B0;
  this->_vptr_IHasAttributes = &off_47A9F78;
  CEconEntity::~CEconEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Tiny_ScepterTree::Schema_DynamicBinding  (line 56, @0x0000000002a61830, libserver.so)
// globals: CDOTA_Tiny_ScepterTree::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Tiny_ScepterTree::Schema_DynamicBinding(
        const CDOTA_Tiny_ScepterTree *const this)
{
  return CDOTA_Tiny_ScepterTree::s_pSchemaBinding;
}


// CDOTA_Tiny_ScepterTree::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 56, @0x0000000002a61850, libserver.so)
// globals: CDOTA_Tiny_ScepterTree::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Tiny_ScepterTree::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Tiny_ScepterTree::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Tiny_ScepterTree::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Tiny_ScepterTree::CEntityInstanceEntityClass::DestructInstance  (line 56, @0x0000000002a61860, libserver.so)  // inlines: Destruct<CDOTA_Tiny_ScepterTree>
void __fastcall CDOTA_Tiny_ScepterTree::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Tiny_ScepterTree::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Tiny_ScepterTree::CEntityInstanceEntityClass::FreeInstance  (line 56, @0x0000000002a61880, libserver.so)
void __fastcall CDOTA_Tiny_ScepterTree::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Tiny_ScepterTree::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Tiny_ScepterTree::CEntityInstanceEntityClass::CanAllocate  (line 56, @0x0000000002a618a0, libserver.so)
bool __fastcall CDOTA_Tiny_ScepterTree::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Tiny_ScepterTree::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Tiny_ScepterTree::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 56, @0x0000000002a618b0, libserver.so)
// globals: CDOTA_Tiny_ScepterTree::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Tiny_ScepterTree::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Tiny_ScepterTree::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Tiny_ScepterTree::s_pSchemaBinding;
}


// CDOTA_Tiny_ScepterTree::CEntityInstanceEntityClass::AllocateInstance  (line 56, @0x0000000002a641f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Tiny_ScepterTree::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Tiny_ScepterTree::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1712);
  memset(v1, 0, 0x6B0u);
  return v1;
}


// CDOTA_Tiny_ScepterTree::CEntityInstanceEntityClass::ConstructInstance  (line 56, @0x0000000002a67d40, libserver.so)  // inlines: CDOTA_Tiny_ScepterTree, Construct<CDOTA_Tiny_ScepterTree>
// calls: CDOTAWearableItem::CDOTAWearableItem
CEntityInstance *__fastcall CDOTA_Tiny_ScepterTree::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Tiny_ScepterTree::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTAWearableItem::CDOTAWearableItem(p);
    *p = &off_43ACF70;
    *(p + 170) = &off_43AD838;
  }
  return p;
}


// CDOTA_Tiny_ScepterTree::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 56, @0x0000000002a6a820, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Tiny_ScepterTree::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Tiny_ScepterTree::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Tiny_ScepterTree::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 56, @0x0000000002a6b470, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Tiny_ScepterTree::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Tiny_ScepterTree::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Tiny_ScepterTree::GetEntityClassInternal  (line 56, @0x0000000002a73890, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseFlex::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CEconWearable::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "npc_dota_tiny_sceptertree", "CDOTA_Tiny_ScepterTree", "dota_item_wearable", "CDOTAWearableItem"
// globals: `guard variable for'CDOTA_Tiny_ScepterTree::GetEntityClassInternal(void)::g_EntityCDOTA_Tiny_ScepterTreeClass, CDOTA_Tiny_ScepterTree::GetEntityClassInternal(void)::g_EntityCDOTA_Tiny_ScepterTreeClass, __dso_handle, CDOTA_Tiny_ScepterTree::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Tiny_ScepterTree::GetEntityClassInfo(void)::g_EntityCDOTA_Tiny_ScepterTreeClassInfo, CDOTA_Tiny_ScepterTree::GetEntityClassInfo(void)::g_EntityCDOTA_Tiny_ScepterTreeClassInfo, `guard variable for'CDOTAWearableItem::GetEntityClassInfo(void)::g_EntityCDOTAWearableItemClassInfo, CDOTAWearableItem::GetEntityClassInfo(void)::g_EntityCDOTAWearableItemClassInfo
CEntityClass *__cdecl CDOTA_Tiny_ScepterTree::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Tiny_ScepterTree::GetEntityClassInternal(void)::g_EntityCDOTA_Tiny_ScepterTreeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Tiny_ScepterTree::GetEntityClassInternal(void)::g_EntityCDOTA_Tiny_ScepterTreeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Tiny_ScepterTree::GetEntityClassInternal(void)::g_EntityCDOTA_Tiny_ScepterTreeClass);
    CDOTA_Tiny_ScepterTree::GetEntityClassInternal(void)::g_EntityCDOTA_Tiny_ScepterTreeClass._vptr_CEntityClass = off_43ACEF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Tiny_ScepterTree::GetEntityClassInternal(void)::g_EntityCDOTA_Tiny_ScepterTreeClass);
    __cxa_atexit(
      CDOTA_Tiny_ScepterTree::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Tiny_ScepterTree::GetEntityClassInternal(void)::g_EntityCDOTA_Tiny_ScepterTreeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Tiny_ScepterTreeClass != 0 )
    return &CDOTA_Tiny_ScepterTree::GetEntityClassInternal(void)::g_EntityCDOTA_Tiny_ScepterTreeClass;
  if ( `guard variable for'CDOTA_Tiny_ScepterTree::GetEntityClassInfo(void)::g_EntityCDOTA_Tiny_ScepterTreeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Tiny_ScepterTree::GetEntityClassInfo(void)::g_EntityCDOTA_Tiny_ScepterTreeClassInfo) != 0 )
  {
    if ( `guard variable for'CDOTAWearableItem::GetEntityClassInfo(void)::g_EntityCDOTAWearableItemClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTAWearableItem::GetEntityClassInfo(void)::g_EntityCDOTAWearableItemClassInfo) != 0 )
    {
      EntityClassInfo = CEconWearable::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CDOTAWearableItem::GetEntityClassInfo(void)::g_EntityCDOTAWearableItemClassInfo,
        "CDOTAWearableItem",
        "dota_item_wearable",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CDOTAWearableItem::GetEntityClassInfo(void)::g_EntityCDOTAWearableItemClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Tiny_ScepterTree::GetEntityClassInfo(void)::g_EntityCDOTA_Tiny_ScepterTreeClassInfo,
      "CDOTA_Tiny_ScepterTree",
      "npc_dota_tiny_sceptertree",
      0,
      &CDOTAWearableItem::GetEntityClassInfo(void)::g_EntityCDOTAWearableItemClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Tiny_ScepterTree::GetEntityClassInfo(void)::g_EntityCDOTA_Tiny_ScepterTreeClassInfo);
  }
  CDOTA_Tiny_ScepterTree::GetEntityClassInternal(void)::g_EntityCDOTA_Tiny_ScepterTreeClass.m_pClassInfo = &CDOTA_Tiny_ScepterTree::GetEntityClassInfo(void)::g_EntityCDOTA_Tiny_ScepterTreeClassInfo;
  CDOTA_Tiny_ScepterTree::GetEntityClassInternal(void)::g_EntityCDOTA_Tiny_ScepterTreeClass.m_pBaseClassInfo = CDOTA_Tiny_ScepterTree::GetEntityClassInfo(void)::g_EntityCDOTA_Tiny_ScepterTreeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Tiny_ScepterTreeClass = &CDOTA_Tiny_ScepterTree::GetEntityClassInternal(void)::g_EntityCDOTA_Tiny_ScepterTreeClass;
  CDOTA_Tiny_ScepterTree::GetEntityClassInfo(void)::g_EntityCDOTA_Tiny_ScepterTreeClassInfo.m_pClass = &CDOTA_Tiny_ScepterTree::GetEntityClassInternal(void)::g_EntityCDOTA_Tiny_ScepterTreeClass;
  CDOTA_Tiny_ScepterTree::GetEntityClassInternal(void)::g_EntityCDOTA_Tiny_ScepterTreeClass.m_pScriptClassDesc = CBaseFlex::InitScriptDesc();
  g_pEntityCDOTA_Tiny_ScepterTreeClass->m_pComponentOverrides = 0;
  return &CDOTA_Tiny_ScepterTree::GetEntityClassInternal(void)::g_EntityCDOTA_Tiny_ScepterTreeClass;
}


// CDOTA_Tiny_ScepterTree::YouForgotToImplementOrDeclareServerClass  (line 65, @0x0000000002a3f870, libserver.so)
int __fastcall CDOTA_Tiny_ScepterTree::YouForgotToImplementOrDeclareServerClass(CDOTA_Tiny_ScepterTree *const this)
{
  return 0;
}


// CDOTA_Tiny_ScepterTree::GetServerClass  (line 65, @0x0000000002a484f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Tiny_ScepterTree::GetServerClass(CDOTA_Tiny_ScepterTree *const this)
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


// CDOTA_Unit_Hero_Tiny::~CDOTA_Unit_Hero_Tiny  (line 75, @0x0000000002a680a0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Tiny::~CDOTA_Unit_Hero_Tiny(CDOTA_Unit_Hero_Tiny *const this)
{
  this->_vptr_IHandleEntity = &off_43AD910;
  this->_vptr_INextBotEventResponder = &off_43AE8F0;
  this->_vptr_CObstructionObject = &off_43AEC20;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Tiny::~CDOTA_Unit_Hero_Tiny  (line 75, @0x0000000002a680e0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Tiny
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Tiny::~CDOTA_Unit_Hero_Tiny(CDOTA_Unit_Hero_Tiny *const this)
{
  this->_vptr_IHandleEntity = &off_43AD910;
  this->_vptr_INextBotEventResponder = &off_43AE8F0;
  this->_vptr_CObstructionObject = &off_43AEC20;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Tiny::Schema_DynamicBinding  (line 77, @0x0000000002a618c0, libserver.so)
// globals: CDOTA_Unit_Hero_Tiny::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Tiny::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Tiny *const this)
{
  return CDOTA_Unit_Hero_Tiny::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Tiny::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 77, @0x0000000002a618f0, libserver.so)
// globals: CDOTA_Unit_Hero_Tiny::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Tiny::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Tiny::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Tiny::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Tiny::CEntityInstanceEntityClass::DestructInstance  (line 77, @0x0000000002a61900, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Tiny>
void __fastcall CDOTA_Unit_Hero_Tiny::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Tiny::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Tiny::CEntityInstanceEntityClass::FreeInstance  (line 77, @0x0000000002a61920, libserver.so)
void __fastcall CDOTA_Unit_Hero_Tiny::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Tiny::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Tiny::CEntityInstanceEntityClass::CanAllocate  (line 77, @0x0000000002a61940, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Tiny::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Tiny::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Tiny::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 77, @0x0000000002a61950, libserver.so)
// globals: CDOTA_Unit_Hero_Tiny::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Tiny::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Tiny::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Tiny::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Tiny::CEntityInstanceEntityClass::AllocateInstance  (line 77, @0x0000000002a64230, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Tiny::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Tiny::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5880);
  memset(v1, 0, 0x16F8u);
  return v1;
}


// CDOTA_Unit_Hero_Tiny::CEntityInstanceEntityClass::ConstructInstance  (line 77, @0x0000000002a6a410, libserver.so)  // inlines: CDOTA_Unit_Hero_Tiny, CEntityHandle, CHandle, CNetworkHandleBase, CNetworkVarBase, Construct<CDOTA_Unit_Hero_Tiny>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Tiny::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Tiny::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *(p + 1467) = -1;
    *p = &off_43AD910;
    *(p + 236) = &off_43AE8F0;
    *(p + 257) = &off_43AEC20;
    *(p + 1469) = -1;
  }
  return p;
}


// CDOTA_Unit_Hero_Tiny::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 77, @0x0000000002a6b4e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Tiny::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Tiny::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Tiny::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 77, @0x0000000002a6b720, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Tiny::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Tiny::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Tiny::GetEntityClassInternal  (line 77, @0x0000000002a73a20, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "npc_dota_hero_tiny", "CDOTA_Unit_Hero_Tiny"
// globals: `guard variable for'CDOTA_Unit_Hero_Tiny::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TinyClass, CDOTA_Unit_Hero_Tiny::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TinyClass, __dso_handle, CDOTA_Unit_Hero_Tiny::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Tiny::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TinyClassInfo, CDOTA_Unit_Hero_Tiny::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TinyClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Tiny::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Tiny::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TinyClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Tiny::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TinyClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Tiny::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TinyClass);
    CDOTA_Unit_Hero_Tiny::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TinyClass._vptr_CEntityClass = off_43AD890;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Tiny::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TinyClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Tiny::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Tiny::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TinyClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_TinyClass != 0 )
    return &CDOTA_Unit_Hero_Tiny::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TinyClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Tiny::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TinyClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Tiny::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TinyClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Tiny::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TinyClassInfo,
      "CDOTA_Unit_Hero_Tiny",
      "npc_dota_hero_tiny",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Tiny::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TinyClassInfo);
  }
  CDOTA_Unit_Hero_Tiny::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TinyClass.m_pClassInfo = &CDOTA_Unit_Hero_Tiny::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TinyClassInfo;
  CDOTA_Unit_Hero_Tiny::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TinyClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Tiny::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TinyClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_TinyClass = &CDOTA_Unit_Hero_Tiny::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TinyClass;
  CDOTA_Unit_Hero_Tiny::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TinyClassInfo.m_pClass = &CDOTA_Unit_Hero_Tiny::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TinyClass;
  CDOTA_Unit_Hero_Tiny::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TinyClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_TinyClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Tiny::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TinyClass;
}


// CDOTA_Unit_Hero_Tiny::GetDeathEffectName  (line 89, @0x0000000002a61960, libserver.so)
const char *__fastcall CDOTA_Unit_Hero_Tiny::GetDeathEffectName(CDOTA_Unit_Hero_Tiny *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Tiny::YouForgotToImplementOrDeclareServerClass  (line 120, @0x0000000002a3f880, libserver.so)
int __fastcall CDOTA_Unit_Hero_Tiny::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Tiny *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Tiny::GetServerClass  (line 120, @0x0000000002a48730, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Tiny::GetServerClass(CDOTA_Unit_Hero_Tiny *const this)
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


// CDOTA_Unit_Hero_Tiny::UpdateOnModelChange  (line 129, @0x0000000002a41630, libserver.so)  // inlines: CWeakHandle, GetLevel, Init, String, ToCStr, _V_strcmp
// calls: CDOTA_BaseNPC::UpdateOnModelChange, CDOTA_BaseNPC::FindAbilityByName, CBaseEntity::GetModelName, CDOTA_BaseNPC_Hero::SetWearableModelIndex, strcmp
// globals: g_pszTinyModels
void __fastcall CDOTA_Unit_Hero_Tiny::UpdateOnModelChange(CDOTA_Unit_Hero_Tiny *const this, bool bOriginalModel)
{
  CDOTABaseAbility *AbilityByName; // rax
  unsigned int m_Value; // r12d
  const char *v5; // r15
  const char *m_pBinding; // r14
  HModel nGrowModelIndex; // [rsp+0h] [rbp-50h] BYREF
  HModel nBaseModelIndex; // [rsp+10h] [rbp-40h] BYREF

  CDOTA_BaseNPC::UpdateOnModelChange(this, bOriginalModel);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "tiny_grow", 0);
  if ( AbilityByName != 0 && !AbilityByName->m_bStolen.m_Value )
  {
    m_Value = AbilityByName->m_iLevel.m_Value;
    v5 = g_pszTinyModels[m_Value];
    CBaseEntity::GetModelName(&nBaseModelIndex, this);
    if ( nBaseModelIndex.m_pBinding != 0 )
    {
      m_pBinding = nBaseModelIndex.m_pBinding;
      (*(modelinfo->_vptr_IAppSystem + 13))(&nGrowModelIndex, modelinfo, v5);
      if ( *m_pBinding == 0 )
        goto LABEL_5;
    }
    else
    {
      m_pBinding = "";
      (*(modelinfo->_vptr_IAppSystem + 13))(&nGrowModelIndex, modelinfo, v5);
      if ( asc_32DB004[2] == 0 )
      {
LABEL_5:
        nBaseModelIndex.m_pBinding = nGrowModelIndex.m_pBinding;
        CDOTA_BaseNPC_Hero::SetWearableModelIndex(this, m_Value, &nBaseModelIndex);
        return;
      }
    }
    if ( strcmp(m_pBinding, v5) == 0 )
      goto LABEL_5;
  }
}


// CDOTA_Unit_Hero_Tiny::OnAlive  (line 155, @0x0000000002a3f890, libserver.so)
void __fastcall CDOTA_Unit_Hero_Tiny::OnAlive(CDOTA_Unit_Hero_Tiny *const this)
{
  ;
}


// CDOTA_Unit_Hero_Tiny::OnIllusionPostSpawn  (line 201, @0x0000000002a44e90, libserver.so)  // inlines: GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator!=, operator=
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Unit_Hero_Tiny::OnIllusionPostSpawn(CDOTA_Unit_Hero_Tiny *const this, CDOTA_BaseNPC *pOriginal)
{
  CDOTA_BaseNPC *m_pInstance; // rcx
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *m_pEntity; // rdx
  int v9; // eax
  __int16 v10; // cx

  m_pInstance = 0;
  m_Index = this->m_hIllusionOwner.m_Value.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hIllusionOwner.m_Value.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[this->m_hIllusionOwner.m_Value.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( pOriginal != m_pInstance )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 5876, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    if ( pOriginal != 0 && (m_pEntity = pOriginal->m_pEntity) != 0 )
    {
      v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v10 = 0x7FFF;
      else
        v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hIllusionOwner.m_Value.m_Index) = v10 | this->m_hIllusionOwner.m_Value.m_Index & 0x8000;
      this->m_hIllusionOwner.m_Value.m_Index = (v9 << 15) | this->m_hIllusionOwner.m_Value.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hIllusionOwner.m_Value.m_Index = -1;
    }
  }
}


// CDOTA_Unit_Hero_Tiny::Event_Killed  (line 211, @0x0000000002a41730, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Event_Killed, CBaseEntity::AddEffects, CDOTA_BaseNPC::FindAbilityByName, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_BaseNPC::UnitEmitSound, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "particles/units/heroes/hero_tiny/tiny04_death.vpcf", "Hero_Tiny.Death_04", "particles/units/heroes/hero_tiny/tiny03_death.vpcf", "Hero_Tiny.Death_03", "particles/units/heroes/hero_tiny/tiny01_death.vpcf", "Hero_Tiny.Death_01" (8 total)
void __fastcall CDOTA_Unit_Hero_Tiny::Event_Killed(CDOTA_Unit_Hero_Tiny *const this, const CTakeDamageInfo *const info)
{
  CDOTABaseAbility *AbilityByName; // rax
  int m_Value; // eax
  CDOTA_ParticleManager *v5; // rax
  int Particle; // r12d
  const Vector *AbsOrigin; // r13
  CDOTA_ParticleManager *v8; // rax
  CDOTA_ParticleManager *v9; // rax
  CDOTA_ParticleManager *v10; // rax
  CDOTA_ParticleManager *v11; // rax
  CDOTA_ParticleManager *ParticleManager; // rax

  CDOTA_BaseNPC_Hero::Event_Killed(this, info);
  if ( !this->m_bIsIllusion.m_Value )
  {
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "tiny_grow", 0);
    if ( AbilityByName != 0 && !AbilityByName->m_bStolen.m_Value )
    {
      m_Value = AbilityByName->m_iLevel.m_Value;
      if ( m_Value == 1 )
      {
        ParticleManager = GetParticleManager();
        Particle = CDOTA_ParticleManager::CreateParticle(
                     ParticleManager,
                     "particles/units/heroes/hero_tiny/tiny02_death.vpcf",
                     2,
                     0,
                     0,
                     0);
        CDOTA_BaseNPC::UnitEmitSound(this, "Hero_Tiny.Death_02", 0.0, 0, 0);
      }
      else if ( m_Value <= 1 )
      {
        if ( m_Value != 0 )
          goto LABEL_2;
        v11 = GetParticleManager();
        Particle = CDOTA_ParticleManager::CreateParticle(
                     v11,
                     "particles/units/heroes/hero_tiny/tiny01_death.vpcf",
                     2,
                     0,
                     0,
                     0);
        CDOTA_BaseNPC::UnitEmitSound(this, "Hero_Tiny.Death_01", 0.0, 0, 0);
      }
      else if ( m_Value == 2 )
      {
        v10 = GetParticleManager();
        Particle = CDOTA_ParticleManager::CreateParticle(
                     v10,
                     "particles/units/heroes/hero_tiny/tiny03_death.vpcf",
                     2,
                     0,
                     0,
                     0);
        CDOTA_BaseNPC::UnitEmitSound(this, "Hero_Tiny.Death_03", 0.0, 0, 0);
      }
      else
      {
        if ( m_Value != 3 )
          goto LABEL_2;
        v5 = GetParticleManager();
        Particle = CDOTA_ParticleManager::CreateParticle(
                     v5,
                     "particles/units/heroes/hero_tiny/tiny04_death.vpcf",
                     2,
                     0,
                     0,
                     0);
        CDOTA_BaseNPC::UnitEmitSound(this, "Hero_Tiny.Death_04", 0.0, 0, 0);
      }
      if ( Particle != -1 )
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(this);
        v8 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v8, Particle, 0, this, 0, 0, *AbsOrigin, 1);
        v9 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v9, Particle);
      }
    }
  }
LABEL_2:
  CBaseEntity::AddEffects(this, 32);
}


// CDOTA_Unit_Hero_Tiny::OnDying  (line 253, @0x0000000002a3f8a0, libserver.so)
void __fastcall CDOTA_Unit_Hero_Tiny::OnDying(CDOTA_Unit_Hero_Tiny *const this)
{
  ;
}


// CDOTA_Unit_Hero_Tiny::CalculateActivityModifiers  (line 265, @0x0000000002a41910, libserver.so)
// calls: CDOTA_BaseNPC::CalculateActivityModifiers, CDOTA_BaseNPC::HasScepter, CDOTA_BaseNPC::AddActivityModifier
void __fastcall CDOTA_Unit_Hero_Tiny::CalculateActivityModifiers(CDOTA_Unit_Hero_Tiny *const this, Activity iActivity)
{
  UtlSymId_t v3[16]; // [rsp+0h] [rbp-20h] BYREF

  CDOTA_BaseNPC::CalculateActivityModifiers(this, iActivity);
  if ( CDOTA_BaseNPC::HasScepter(this) )
    CDOTA_BaseNPC::AddActivityModifier(v3, this, "tree");
}


// CDOTA_Unit_Hero_Tiny::GainedModifier  (line 276, @0x0000000002a41950, libserver.so)
// calls: CDOTA_BaseNPC_Hero::GainedModifier
void __fastcall CDOTA_Unit_Hero_Tiny::GainedModifier(CDOTA_Unit_Hero_Tiny *const this, CDOTA_Buff *pBuff)
{
  CDOTA_BaseNPC_Hero::GainedModifier(this, pBuff);
}


// CDOTA_Unit_Hero_Tiny::LostModifier  (line 303, @0x0000000002a45c30, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, SetOriginalModel, operator CEntityInstance*, operator=
// calls: CDOTA_BaseNPC_Hero::LostModifier, CBaseEntity::GetModelName, CDOTABody::GetAnimation
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Unit_Hero_Tiny::LostModifier(CDOTA_Unit_Hero_Tiny *const this, CDOTA_Buff *pBuff)
{
  bool v4; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  void (__fastcall *v9)(CDOTA_Unit_Hero_Tiny *const, _QWORD); // r14
  const CDOTABody *v10; // rax
  unsigned int Animation; // eax
  UtlSymLargeId_t v12[6]; // [rsp+0h] [rbp-30h] BYREF

  v4 = CDOTA_BaseNPC_Hero::LostModifier(this, pBuff);
  m_Index = this->m_hTreeWearable.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTreeWearable.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[this->m_hTreeWearable.m_Index & 0x1FF];
      if ( v7 != 0
        && m_Index == v7->m_EHandle.m_Index
        && v7->m_pInstance != 0
        && !this->m_bIsIllusion.m_Value
        && pBuff->m_Functions[154].__pfn != 0 )
      {
        v9 = *(this->_vptr_IHandleEntity + 442);
        v10 = (*(this->_vptr_IHandleEntity + 377))(this);
        Animation = CDOTABody::GetAnimation(v10);
        v9(this, Animation);
      }
    }
  }
  if ( pBuff->m_Functions[152].__pfn != 0 )
  {
    CBaseEntity::GetModelName(v12, this);
    this->m_iszOriginalModel.u.m_Id = v12[0];
    (*(this->_vptr_IHandleEntity + 476))(this, 1);
  }
  return v4;
}


// CDOTA_Unit_Hero_Tiny::GetSoundSet  (line 361, @0x0000000002a40680, libserver.so)
// calls: CDOTA_BaseNPC::HasScepter, CDOTA_BaseNPC::GetSoundSet
// strings: "Hero_Tiny_Tree"
const char *__fastcall CDOTA_Unit_Hero_Tiny::GetSoundSet(CDOTA_Unit_Hero_Tiny *const this)
{
  if ( CDOTA_BaseNPC::HasScepter(this) )
    return "Hero_Tiny_Tree";
  else
    return CDOTA_BaseNPC::GetSoundSet(this);
}


// CDOTA_Ability_Tiny_Avalanche::~CDOTA_Ability_Tiny_Avalanche  (line 378, @0x0000000002a67730, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Tiny_Avalanche::~CDOTA_Ability_Tiny_Avalanche(CDOTA_Ability_Tiny_Avalanche *const this)
{
  this->_vptr_IHandleEntity = &off_43AECF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Tiny_Avalanche::~CDOTA_Ability_Tiny_Avalanche  (line 378, @0x0000000002a67750, libserver.so)  // inlines: ~CDOTA_Ability_Tiny_Avalanche
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Tiny_Avalanche::~CDOTA_Ability_Tiny_Avalanche(CDOTA_Ability_Tiny_Avalanche *const this)
{
  this->_vptr_IHandleEntity = &off_43AECF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Tiny_Avalanche::Schema_DynamicBinding  (line 380, @0x0000000002a61970, libserver.so)
// globals: CDOTA_Ability_Tiny_Avalanche::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tiny_Avalanche::Schema_DynamicBinding(
        const CDOTA_Ability_Tiny_Avalanche *const this)
{
  return CDOTA_Ability_Tiny_Avalanche::s_pSchemaBinding;
}


// CDOTA_Ability_Tiny_Avalanche::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 380, @0x0000000002a61980, libserver.so)
// globals: CDOTA_Ability_Tiny_Avalanche::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tiny_Avalanche::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Tiny_Avalanche::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tiny_Avalanche::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Tiny_Avalanche::CEntityInstanceEntityClass::DestructInstance  (line 380, @0x0000000002a61990, libserver.so)  // inlines: Destruct<CDOTA_Ability_Tiny_Avalanche>
void __fastcall CDOTA_Ability_Tiny_Avalanche::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Tiny_Avalanche::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Tiny_Avalanche::CEntityInstanceEntityClass::FreeInstance  (line 380, @0x0000000002a619b0, libserver.so)
void __fastcall CDOTA_Ability_Tiny_Avalanche::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Tiny_Avalanche::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Tiny_Avalanche::CEntityInstanceEntityClass::CanAllocate  (line 380, @0x0000000002a619d0, libserver.so)
bool __fastcall CDOTA_Ability_Tiny_Avalanche::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Tiny_Avalanche::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Tiny_Avalanche::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 380, @0x0000000002a619e0, libserver.so)
// globals: CDOTA_Ability_Tiny_Avalanche::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Tiny_Avalanche::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Tiny_Avalanche::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tiny_Avalanche::s_pSchemaBinding;
}


// CDOTA_Ability_Tiny_Avalanche::CEntityInstanceEntityClass::AllocateInstance  (line 380, @0x0000000002a64270, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Tiny_Avalanche::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Tiny_Avalanche::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CDOTA_Ability_Tiny_Avalanche::CEntityInstanceEntityClass::ConstructInstance  (line 380, @0x0000000002a66280, libserver.so)  // inlines: CDOTA_Ability_Tiny_Avalanche, Construct<CDOTA_Ability_Tiny_Avalanche>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Tiny_Avalanche::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Tiny_Avalanche::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43AECF0;
  }
  return p;
}


// CDOTA_Ability_Tiny_Avalanche::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 380, @0x0000000002a6aed0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Tiny_Avalanche::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tiny_Avalanche::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Tiny_Avalanche::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 380, @0x0000000002a6aef0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Tiny_Avalanche::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tiny_Avalanche::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Tiny_Avalanche::GetEntityClassInternal  (line 380, @0x0000000002a73b70, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "CDOTA_Ability_Tiny_Avalanche"
// globals: `guard variable for'CDOTA_Ability_Tiny_Avalanche::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_AvalancheClass, CDOTA_Ability_Tiny_Avalanche::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_AvalancheClass, __dso_handle, CDOTA_Ability_Tiny_Avalanche::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Tiny_Avalanche::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tiny_AvalancheClassInfo, CDOTA_Ability_Tiny_Avalanche::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tiny_AvalancheClassInfo
CEntityClass *__cdecl CDOTA_Ability_Tiny_Avalanche::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Tiny_Avalanche::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_AvalancheClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tiny_Avalanche::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_AvalancheClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Tiny_Avalanche::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_AvalancheClass);
    CDOTA_Ability_Tiny_Avalanche::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_AvalancheClass._vptr_CEntityClass = off_43AEC70;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tiny_Avalanche::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_AvalancheClass);
    __cxa_atexit(
      CDOTA_Ability_Tiny_Avalanche::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Tiny_Avalanche::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_AvalancheClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Tiny_AvalancheClass != 0 )
    return &CDOTA_Ability_Tiny_Avalanche::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_AvalancheClass;
  if ( `guard variable for'CDOTA_Ability_Tiny_Avalanche::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tiny_AvalancheClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tiny_Avalanche::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tiny_AvalancheClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Tiny_Avalanche::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tiny_AvalancheClassInfo,
      "CDOTA_Ability_Tiny_Avalanche",
      "tiny_avalanche",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tiny_Avalanche::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tiny_AvalancheClassInfo);
  }
  CDOTA_Ability_Tiny_Avalanche::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_AvalancheClass.m_pClassInfo = &CDOTA_Ability_Tiny_Avalanche::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tiny_AvalancheClassInfo;
  CDOTA_Ability_Tiny_Avalanche::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_AvalancheClass.m_pBaseClassInfo = CDOTA_Ability_Tiny_Avalanche::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tiny_AvalancheClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Tiny_AvalancheClass = &CDOTA_Ability_Tiny_Avalanche::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_AvalancheClass;
  CDOTA_Ability_Tiny_Avalanche::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tiny_AvalancheClassInfo.m_pClass = &CDOTA_Ability_Tiny_Avalanche::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_AvalancheClass;
  CDOTA_Ability_Tiny_Avalanche::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_AvalancheClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Tiny_AvalancheClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Tiny_Avalanche::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_AvalancheClass;
}


// CDOTA_Ability_Tiny_Avalanche::GetAOERadius  (line 384, @0x0000000002a771a0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_Tiny_Avalanche::GetAOERadius(CDOTA_Ability_Tiny_Avalanche *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
}


// CDOTA_Ability_Tiny_Avalanche::YouForgotToImplementOrDeclareServerClass  (line 397, @0x0000000002a3f8b0, libserver.so)
int __fastcall CDOTA_Ability_Tiny_Avalanche::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Tiny_Avalanche *const this)
{
  return 0;
}


// CDOTA_Ability_Tiny_Avalanche::GetServerClass  (line 397, @0x0000000002a48630, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Tiny_Avalanche::GetServerClass(CDOTA_Ability_Tiny_Avalanche *const this)
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


// CDOTA_Ability_Tiny_Avalanche::OnSpellStart  (line 407, @0x0000000002a57d20, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetSerialNumber, NormalizeInPlace, Set, VectorMultiply, VectorSubtract, operator*, operator-, operator=, sLinearProjectileCreateInfo
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCursorPosition, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, VectorNormalize, CDOTA_BaseNPC::StartGesture, CDOTA_ProjectileManager::CreateLinearProjectile, CDOTA_BaseNPC::UnitEmitSound, CBaseEntity::GetAbsAngles, AngleVectors
// strings: "projectile_duration", "particles/units/heroes/hero_tiny/tiny_avalanche_projectile.vpcf", "Ability.Avalanche"
void __fastcall CDOTA_Ability_Tiny_Avalanche::OnSpellStart(CDOTA_Ability_Tiny_Avalanche *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rax
  vec_t v4; // xmm0_4
  vec_t v5; // xmm1_4
  float v6; // xmm3_4
  CDOTA_BaseNPC *v7; // rax
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v10; // rax
  const Vector *v11; // rax
  vec_t v12; // xmm0_4
  CDOTA_BaseNPC *v13; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v15; // eax
  __int16 v16; // cx
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  const QAngle *AbsAngles; // rax
  float fLength; // [rsp+8h] [rbp-A8h]
  float projectile_duration; // [rsp+Ch] [rbp-A4h]
  Vector vDirection; // [rsp+10h] [rbp-A0h] BYREF
  sLinearProjectileCreateInfo info; // [rsp+20h] [rbp-90h] BYREF
  Vector CursorPosition; // 0:kr00_12.12

  projectile_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "projectile_duration", -1, 0);
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  info.pszEffectName = *&CursorPosition.x;
  this->m_vTargetLoc.z = CursorPosition.z;
  *&info.pAbility = CursorPosition.z;
  this->m_vTargetLoc.x = CursorPosition.x;
  this->m_vTargetLoc.y = *(&info.pszEffectName + 1);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  v4 = this->m_vTargetLoc.y - AbsOrigin->y;
  v5 = this->m_vTargetLoc.x - AbsOrigin->x;
  vDirection.z = 0.0;
  vDirection.y = v4;
  vDirection.x = v5;
  v6 = VectorNormalize(&vDirection);
  if ( v6 < 0.0099999998 )
  {
    v18 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v18);
    AngleVectors(AbsAngles, &vDirection, 0, 0);
    v6 = 1.0;
  }
  fLength = v6;
  v7 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v7, 1558, 0.2, 0.2, 9, 0, 1.0);
  info.hSource.m_Index = -1;
  info.fDistance = 0.0;
  info.fStartRadius = 0.0;
  info.fEndRadius = 0.0;
  y = vec3_origin.y;
  info.bHasFrontalCone = 1;
  z = vec3_origin.z;
  info.bCheckStartPosition = 0;
  info.vSpawnOrigin.x = vec3_origin.x;
  info.vSpawnOrigin.y = y;
  info.vSpawnOrigin.z = z;
  info.vVelocity.x = vec3_origin.x;
  info.vVelocity.y = y;
  info.vVelocity.z = z;
  info.vAcceleration.x = vec3_origin.x;
  info.vAcceleration.y = y;
  info.vAcceleration.z = z;
  info.pszEffectName = "particles/units/heroes/hero_tiny/tiny_avalanche_projectile.vpcf";
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
  v10 = CDOTABaseAbility::GetCaster(this);
  v11 = CBaseEntity::GetAbsOrigin(v10);
  info.vSpawnOrigin.x = v11->x;
  info.vSpawnOrigin.y = v11->y;
  v12 = v11->z;
  info.fDistance = fLength;
  info.vSpawnOrigin.z = v12;
  info.vVelocity.y = vDirection.y * (fLength / projectile_duration);
  info.vVelocity.z = vDirection.z * (fLength / projectile_duration);
  info.vVelocity.x = (fLength / projectile_duration) * vDirection.x;
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
  CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  v17 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v17, "Ability.Avalanche", 0.0, 0, 0);
}


// CDOTA_Ability_Tiny_Avalanche::OnProjectileHit  (line 445, @0x0000000002a45740, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator==<CBaseEntity>
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetCaster, Thinker_Create, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_tiny_avalanche"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Tiny_Avalanche::OnProjectileHit(
        CDOTA_Ability_Tiny_Avalanche *const this,
        _DWORD *hTarget,
        const Vector *const vLocation)
{
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  int m_Value; // r13d
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-28h]

  v10 = __readfsqword(0x28u);
  if ( (*hTarget + 2) <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F]) == 0
    || (v5 = &v4[*hTarget & 0x1FF]) == 0
    || *hTarget != v5->m_EHandle.m_Index
    || v5->m_pInstance == 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_tiny_avalanche");
    m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
    Caster = CDOTABaseAbility::GetCaster(this);
    Thinker_Create(Caster, this, "modifier_tiny_avalanche", &kv, this->m_vTargetLoc, m_Value, 0, 0, 0);
    KeyValues::~KeyValues(&kv);
  }
  return 1;
}


// CDOTA_Ability_Tiny_Avalanche::GetAbilityDamageToTargetOverInterval  (line 460, @0x0000000002a52b90, libserver.so)  // inlines: GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "avalanche_damage"
__int64 __fastcall CDOTA_Ability_Tiny_Avalanche::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Tiny_Avalanche *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "avalanche_damage", -1, 0);
    return (LevelSpecialValue * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Ability_Tiny_Avalanche::GetStunDuration  (line 474, @0x0000000002a40f80, libserver.so)
// calls: CDOTABaseAbility::GetDuration
float __fastcall CDOTA_Ability_Tiny_Avalanche::GetStunDuration(CDOTA_Ability_Tiny_Avalanche *const this)
{
  return CDOTABaseAbility::GetDuration(this);
}


// CDOTA_Modifier_Tiny_Avalanche_Stun::~CDOTA_Modifier_Tiny_Avalanche_Stun  (line 483, @0x0000000002a65a90, libserver.so)  // inlines: ~CDOTA_Modifier_Stunned
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Tiny_Avalanche_Stun::~CDOTA_Modifier_Tiny_Avalanche_Stun(
        CDOTA_Modifier_Tiny_Avalanche_Stun *const this)
{
  this->_vptr_CDOTA_Buff = &off_411CD70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Tiny_Avalanche_Stun::~CDOTA_Modifier_Tiny_Avalanche_Stun  (line 483, @0x0000000002a65ab0, libserver.so)  // inlines: ~CDOTA_Modifier_Stunned, ~CDOTA_Modifier_Tiny_Avalanche_Stun
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Tiny_Avalanche_Stun::~CDOTA_Modifier_Tiny_Avalanche_Stun(
        CDOTA_Modifier_Tiny_Avalanche_Stun *const this)
{
  this->_vptr_CDOTA_Buff = &off_411CD70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Tiny_Avalanche::~CDOTA_Modifier_Tiny_Avalanche  (line 496, @0x0000000002a650a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Tiny_Avalanche::~CDOTA_Modifier_Tiny_Avalanche(
        CDOTA_Modifier_Tiny_Avalanche *const this)
{
  this->_vptr_CDOTA_Buff = &off_43AFAD0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Tiny_Avalanche::~CDOTA_Modifier_Tiny_Avalanche  (line 496, @0x0000000002a650c0, libserver.so)  // inlines: ~CDOTA_Modifier_Tiny_Avalanche
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Tiny_Avalanche::~CDOTA_Modifier_Tiny_Avalanche(
        CDOTA_Modifier_Tiny_Avalanche *const this)
{
  this->_vptr_CDOTA_Buff = &off_43AFAD0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Tiny_Avalanche::IsHidden  (line 501, @0x0000000002a619f0, libserver.so)
bool __fastcall CDOTA_Modifier_Tiny_Avalanche::IsHidden(CDOTA_Modifier_Tiny_Avalanche *const this)
{
  return 1;
}


// CDOTA_Modifier_Tiny_Avalanche::OnCreated  (line 521, @0x0000000002a5df20, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>, NormalizeInPlace, Vector, VectorSubtract, operator-
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetParent, VectorNormalize, GetParticleManager, CDOTA_ParticleManager::CreateParticle (15 total)
// strings: "num_ticks", "avalanche_damage", "special_bonus_unique_tiny", "particles/units/heroes/hero_tiny/tiny_avalanche.vpcf"
void __fastcall CDOTA_Modifier_Tiny_Avalanche::OnCreated(CDOTA_Modifier_Tiny_Avalanche *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float num_ticks; // xmm0_4
  CDOTABaseAbility *v10; // rax
  float v11; // xmm1_4
  float LevelSpecialValue; // xmm0_4
  CDOTA_BaseNPC *v13; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *Parent; // rax
  const Vector *v16; // rax
  vec_t v17; // xmm1_4
  vec_t v18; // xmm0_4
  vec_t v19; // xmm0_4
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v21; // rax
  const Vector *v22; // r13
  CDOTA_ParticleManager *v23; // rax
  CDOTA_ParticleManager *v24; // rax
  CDOTA_ParticleManager *v25; // rax
  float flDamage; // [rsp+Ch] [rbp-54h]
  int avalanche_damage; // [rsp+1Ch] [rbp-44h] BYREF
  Vector vecFwd; // [rsp+20h] [rbp-40h] BYREF
  Vector vecRadius; // [rsp+30h] [rbp-30h]

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->radius, "radius");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->num_ticks, "num_ticks");
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
    this->stun_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "stun_duration", -1, 0);
  else
    this->stun_duration = 0.0;
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &avalanche_damage, "avalanche_damage");
  flDamage = avalanche_damage;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_tiny", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    flDamage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1) + flDamage;
  num_ticks = this->num_ticks;
  this->m_nTicks = 0;
  this->m_damage = (flDamage / num_ticks);
  v10 = CDOTA_Buff::GetAbility(this);
  LevelSpecialValue = 0.0;
  if ( v10 != 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v10, "tick_interval", -1, 0);
  CDOTA_Buff::StartIntervalThink(this, LevelSpecialValue, v11);
  (*(this->_vptr_CDOTA_Buff + 56))(this);
  v13 = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v13);
  Parent = CDOTA_Buff::GetParent(this);
  v16 = CBaseEntity::GetAbsOrigin(Parent);
  v17 = v16->y - AbsOrigin->y;
  v18 = v16->z - AbsOrigin->z;
  vecFwd.x = v16->x - AbsOrigin->x;
  vecFwd.y = v17;
  vecFwd.z = v18;
  VectorNormalize(&vecFwd);
  v19 = this->radius * 0.72;
  vecRadius.x = v19;
  vecRadius.y = v19;
  vecRadius.z = v19;
  ParticleManager = GetParticleManager();
  LODWORD(AbsOrigin) = CDOTA_ParticleManager::CreateParticle(
                         ParticleManager,
                         "particles/units/heroes/hero_tiny/tiny_avalanche.vpcf",
                         2,
                         0,
                         0,
                         0);
  v21 = CDOTA_Buff::GetParent(this);
  v22 = CBaseEntity::GetAbsOrigin(v21);
  v23 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v23, AbsOrigin, 0, *&v22->x, v22->z);
  v24 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v24, AbsOrigin, 1, *&vecRadius.x, vecRadius.z);
  v25 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlForward(v25, AbsOrigin, 0, *&vecFwd.x, vecFwd.z);
  CDOTA_Buff::AddParticle(this, AbsOrigin, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_Tiny_Avalanche::OnIntervalThink  (line 560, @0x0000000002a4fc10, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, ApplyDamage, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase (15 total)
// strings: "modifier_tiny_avalanche_stun", "modifier_tiny_toss"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Tiny_Avalanche::OnIntervalThink(CDOTA_Modifier_Tiny_Avalanche *const this)
{
  __m128i v1; // xmm2
  float v3; // r12d
  CDOTA_BaseNPC *Parent; // rbx
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rax
  float v7; // xmm1_4
  __int64 v8; // rbx
  CHandle<CBaseEntity> *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  int m_damage; // r14d
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *v18; // r14
  CDOTA_BaseNPC *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  float flDamage; // [rsp+2Ch] [rbp-74h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v24; // [rsp+68h] [rbp-38h]

  entities.m_Size = 0;
  *v1.m128i_i32 = this->radius;
  entities.m_Memory.m_pMemory = 0;
  ++this->m_nTicks;
  entities.m_Memory.m_nAllocationCount = 0;
  v24 = __readfsqword(0x28u);
  entities.m_Memory.m_nGrowSize = 0;
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  Parent = CDOTA_Buff::GetParent(this);
  v5 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  FindUnitsInRadius(this->m_iTeam, AbsOrigin, Parent, v3, &entities, 2, 19, 0, 0, 0);
  KeyValues::KeyValues(&kv, "modifier_tiny_avalanche_stun");
  KeyValues::SetFloat(&kv, "duration", v7);
  if ( entities.m_Size > 0 )
  {
    v8 = 0;
    do
    {
      while ( 1 )
      {
        v9 = &entities.m_Memory.m_pMemory[v8];
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
                m_damage = this->m_damage;
                if ( CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_tiny_toss", 0) != 0 )
                  m_damage *= 2;
                flDamage = m_damage;
                Ability = CDOTA_Buff::GetAbility(this);
                Caster = CDOTA_Buff::GetCaster(this);
                ApplyDamage(Caster, m_pInstance, Ability, flDamage, 2, 0);
                if ( CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_tiny_avalanche_stun", 0) == 0
                  && CDOTA_Buff::GetCaster(this) != 0 )
                {
                  break;
                }
              }
            }
          }
        }
        if ( ++v8 >= entities.m_Size )
          goto LABEL_15;
      }
      v18 = CDOTA_Buff::GetAbility(this);
      v19 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v19, v18, "modifier_tiny_avalanche_stun", &kv, 0);
      ++v8;
    }
    while ( v8 < entities.m_Size );
  }
LABEL_15:
  if ( this->m_nTicks == this->num_ticks )
  {
    v20 = CDOTA_Buff::GetParent(this);
    UTIL_Remove(v20);
  }
  KeyValues::~KeyValues(&kv);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Ability_Tiny_Toss::~CDOTA_Ability_Tiny_Toss  (line 603, @0x0000000002a67780, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Tiny_Toss::~CDOTA_Ability_Tiny_Toss(CDOTA_Ability_Tiny_Toss *const this)
{
  this->_vptr_IHandleEntity = &off_43AFE30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Tiny_Toss::~CDOTA_Ability_Tiny_Toss  (line 603, @0x0000000002a677a0, libserver.so)  // inlines: ~CDOTA_Ability_Tiny_Toss
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Tiny_Toss::~CDOTA_Ability_Tiny_Toss(CDOTA_Ability_Tiny_Toss *const this)
{
  this->_vptr_IHandleEntity = &off_43AFE30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Tiny_Toss::Schema_DynamicBinding  (line 605, @0x0000000002a61a00, libserver.so)
// globals: CDOTA_Ability_Tiny_Toss::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tiny_Toss::Schema_DynamicBinding(
        const CDOTA_Ability_Tiny_Toss *const this)
{
  return CDOTA_Ability_Tiny_Toss::s_pSchemaBinding;
}


// CDOTA_Ability_Tiny_Toss::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 605, @0x0000000002a61a10, libserver.so)
// globals: CDOTA_Ability_Tiny_Toss::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tiny_Toss::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Tiny_Toss::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tiny_Toss::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Tiny_Toss::CEntityInstanceEntityClass::DestructInstance  (line 605, @0x0000000002a61a20, libserver.so)  // inlines: Destruct<CDOTA_Ability_Tiny_Toss>
void __fastcall CDOTA_Ability_Tiny_Toss::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Tiny_Toss::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Tiny_Toss::CEntityInstanceEntityClass::FreeInstance  (line 605, @0x0000000002a61a40, libserver.so)
void __fastcall CDOTA_Ability_Tiny_Toss::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Tiny_Toss::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Tiny_Toss::CEntityInstanceEntityClass::CanAllocate  (line 605, @0x0000000002a61a60, libserver.so)
bool __fastcall CDOTA_Ability_Tiny_Toss::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Tiny_Toss::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Tiny_Toss::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 605, @0x0000000002a61a70, libserver.so)
// globals: CDOTA_Ability_Tiny_Toss::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Tiny_Toss::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Tiny_Toss::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tiny_Toss::s_pSchemaBinding;
}


// CDOTA_Ability_Tiny_Toss::CEntityInstanceEntityClass::AllocateInstance  (line 605, @0x0000000002a642b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Tiny_Toss::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Tiny_Toss::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Tiny_Toss::CEntityInstanceEntityClass::ConstructInstance  (line 605, @0x0000000002a662b0, libserver.so)  // inlines: CDOTA_Ability_Tiny_Toss, Construct<CDOTA_Ability_Tiny_Toss>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Tiny_Toss::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Tiny_Toss::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43AFE30;
  }
  return p;
}


// CDOTA_Ability_Tiny_Toss::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 605, @0x0000000002a6af20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Tiny_Toss::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tiny_Toss::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Tiny_Toss::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 605, @0x0000000002a6af40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Tiny_Toss::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tiny_Toss::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Tiny_Toss::GetEntityClassInternal  (line 605, @0x0000000002a73cc0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "CDOTA_Ability_Tiny_Toss"
// globals: `guard variable for'CDOTA_Ability_Tiny_Toss::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_TossClass, CDOTA_Ability_Tiny_Toss::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_TossClass, __dso_handle, CDOTA_Ability_Tiny_Toss::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Tiny_Toss::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tiny_TossClassInfo, CDOTA_Ability_Tiny_Toss::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tiny_TossClassInfo
CEntityClass *__cdecl CDOTA_Ability_Tiny_Toss::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Tiny_Toss::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_TossClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tiny_Toss::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_TossClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Tiny_Toss::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_TossClass);
    CDOTA_Ability_Tiny_Toss::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_TossClass._vptr_CEntityClass = off_43AFDB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tiny_Toss::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_TossClass);
    __cxa_atexit(
      CDOTA_Ability_Tiny_Toss::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Tiny_Toss::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_TossClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Tiny_TossClass != 0 )
    return &CDOTA_Ability_Tiny_Toss::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_TossClass;
  if ( `guard variable for'CDOTA_Ability_Tiny_Toss::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tiny_TossClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tiny_Toss::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tiny_TossClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Tiny_Toss::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tiny_TossClassInfo,
      "CDOTA_Ability_Tiny_Toss",
      "tiny_toss",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tiny_Toss::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tiny_TossClassInfo);
  }
  CDOTA_Ability_Tiny_Toss::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_TossClass.m_pClassInfo = &CDOTA_Ability_Tiny_Toss::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tiny_TossClassInfo;
  CDOTA_Ability_Tiny_Toss::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_TossClass.m_pBaseClassInfo = CDOTA_Ability_Tiny_Toss::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tiny_TossClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Tiny_TossClass = &CDOTA_Ability_Tiny_Toss::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_TossClass;
  CDOTA_Ability_Tiny_Toss::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tiny_TossClassInfo.m_pClass = &CDOTA_Ability_Tiny_Toss::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_TossClass;
  CDOTA_Ability_Tiny_Toss::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_TossClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Tiny_TossClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Tiny_Toss::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_TossClass;
}


// CDOTA_Ability_Tiny_Toss::GetAOERadius  (line 609, @0x0000000002a771c0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_Tiny_Toss::GetAOERadius(CDOTA_Ability_Tiny_Toss *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
}


// CDOTA_Ability_Tiny_Toss::GetAssociatedSecondaryAbilities  (line 613, @0x0000000002a61a80, libserver.so)
const char *__fastcall CDOTA_Ability_Tiny_Toss::GetAssociatedSecondaryAbilities(CDOTA_Ability_Tiny_Toss *const this)
{
  return "tiny_grow";
}


// CDOTA_Ability_Tiny_Toss::YouForgotToImplementOrDeclareServerClass  (line 622, @0x0000000002a3f8c0, libserver.so)
int __fastcall CDOTA_Ability_Tiny_Toss::YouForgotToImplementOrDeclareServerClass(CDOTA_Ability_Tiny_Toss *const this)
{
  return 0;
}


// CDOTA_Ability_Tiny_Toss::GetServerClass  (line 622, @0x0000000002a48830, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Tiny_Toss::GetServerClass(CDOTA_Ability_Tiny_Toss *const this)
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


// CDOTA_Ability_Tiny_Toss::OnSpellStart  (line 631, @0x0000000002a54a90, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEHandle, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, Purge, Set, ToDOTABaseNPC, operator CBaseEntity*, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::FindAndFastRemove, SortEHANDLEVectorByLocation, CDOTABaseAbility::SpeakAbilityConcept, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::StartGesture, CDOTA_BaseNPC::UnitEmitSound, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll (21 total)
// strings: "Ability.TossThrow", "#dota_hud_error_cant_toss", "modifier_tiny_toss"
void __fastcall CDOTA_Ability_Tiny_Toss::OnSpellStart(CDOTA_Ability_Tiny_Toss *const this)
{
  CBaseEntity *CursorTarget; // r13
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // r15
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v9; // cx
  CDOTA_BaseNPC *v10; // rax
  const Vector *v11; // rax
  CEntityInstance *v12; // rax
  CDOTA_BaseNPC *v13; // r14
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  float flRadius; // [rsp+1Ch] [rbp-84h]
  CHandle<CBaseEntity> src; // [rsp+20h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v22; // [rsp+68h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  if ( CursorTarget != 0 )
  {
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    flRadius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "grab_radius", -1, 0);
    Caster = CDOTABaseAbility::GetCaster(this);
    v4 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
    v6 = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(v6->m_iTeamNum.m_Value, AbsOrigin, Caster, flRadius, &entities, 3, 3, 784, 1, 0);
    v7 = CDOTABaseAbility::GetCaster(this);
    src.m_Index = -1;
    if ( v7 != 0 )
    {
      m_pEntity = v7->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v9 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        src.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v9 & 0x7FFF;
      }
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::FindAndFastRemove(&entities, &src);
    if ( entities.m_Size != 0 )
    {
      v10 = CDOTABaseAbility::GetCaster(this);
      v11 = CBaseEntity::GetAbsOrigin(v10);
      SortEHANDLEVectorByLocation(&entities, v11, 0);
      CDOTABaseAbility::SpeakAbilityConcept(this, 18);
      v12 = CEntityHandle::operator CEntityInstance *(entities.m_Memory.m_pMemory);
      v13 = v12;
      if ( v12 != 0 && BYTE3(v12[7]._vptr_IHandleEntity) != 0 )
      {
        KeyValues::KeyValues(&kv, "modifier_tiny_toss");
        KeyValues::SetPtr(&kv, "target", CursorTarget);
        v17 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v13, v17, this, "modifier_tiny_toss", &kv, 0);
        KeyValues::~KeyValues(&kv);
      }
      v14 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::StartGesture(v14, 1559, 0.2, 0.2, 9, 0, 1.0);
      v15 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::UnitEmitSound(v15, "Ability.TossThrow", 0.0, 0, 0);
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
      if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
        if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          goto LABEL_15;
      }
    }
    else
    {
      v16 = CDOTABaseAbility::GetCaster(this);
      SendHudErrorToPlayer("#dota_hud_error_cant_toss", v16);
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
      if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
        if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
LABEL_15:
          CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
      }
    }
  }
}


// CDOTA_Ability_Tiny_Toss::CastFilterResult  (line 672, @0x0000000002a54db0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, Purge, Set, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::FindAndFastRemove, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, UnitFilter, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
int __fastcall CDOTA_Ability_Tiny_Toss::CastFilterResult(CDOTA_Ability_Tiny_Toss *const this, CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v10; // cx
  int v11; // r13d
  CDOTA_BaseNPC *v13; // rax
  float flRadius; // [rsp+1Ch] [rbp-64h]
  CHandle<CBaseEntity> src; // [rsp+20h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-50h] BYREF

  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  flRadius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "grab_radius", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v7->m_iTeamNum.m_Value, AbsOrigin, Caster, flRadius, &entities, 3, 3, 784, 1, 0);
  v8 = CDOTABaseAbility::GetCaster(this);
  src.m_Index = -1;
  if ( v8 != 0 )
  {
    m_pEntity = v8->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v10 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      src.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v10 & 0x7FFF;
    }
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::FindAndFastRemove(&entities, &src);
  if ( entities.m_Size == 0
    || (v13 = CDOTABaseAbility::GetCaster(this), (v11 = UnitFilter(pTarget, 3, 3, 0, v13->m_iTeamNum.m_Value)) == 0)
    && pTarget == CDOTABaseAbility::GetCaster(this) )
  {
    v11 = 23;
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
  if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
  }
  return v11;
}


// CDOTA_Ability_Tiny_Toss::GetCustomCastError  (line 701, @0x0000000002a3ff30, libserver.so)
// calls: CDOTABaseAbility::GetCaster
// strings: "#dota_hud_error_cant_cast_on_self", "#dota_hud_error_cant_toss"
const char *__fastcall CDOTA_Ability_Tiny_Toss::GetCustomCastError(
        CDOTA_Ability_Tiny_Toss *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  const char *v4; // rdx

  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = "#dota_hud_error_cant_cast_on_self";
  if ( Caster != pTarget )
    return "#dota_hud_error_cant_toss";
  return v4;
}


// CDOTA_Ability_Tiny_Toss::GetAbilityDamageToTargetOverInterval  (line 711, @0x0000000002a53800, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "toss_damage"
__int64 __fastcall CDOTA_Ability_Tiny_Toss::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Tiny_Toss *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "toss_damage", -1, 0);
    return (LevelSpecialValue * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Modifier_Tiny_Toss::~CDOTA_Modifier_Tiny_Toss  (line 731, @0x0000000002a65020, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Tiny_Toss::~CDOTA_Modifier_Tiny_Toss(CDOTA_Modifier_Tiny_Toss *const this)
{
  this->_vptr_CDOTA_Buff = &off_43B08F0;
  this->_vptr_CHorizontalMotionController = &off_43B0BF8;
  this->_vptr_CVerticalMotionController = &off_43B0C38;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Tiny_Toss::~CDOTA_Modifier_Tiny_Toss  (line 731, @0x0000000002a65050, libserver.so)  // inlines: ~CDOTA_Modifier_Tiny_Toss
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Tiny_Toss::~CDOTA_Modifier_Tiny_Toss(CDOTA_Modifier_Tiny_Toss *const this)
{
  this->_vptr_CDOTA_Buff = &off_43B08F0;
  this->_vptr_CHorizontalMotionController = &off_43B0BF8;
  this->_vptr_CVerticalMotionController = &off_43B0C38;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Tiny_Toss::IsHidden  (line 746, @0x0000000002a61a90, libserver.so)
bool __fastcall CDOTA_Modifier_Tiny_Toss::IsHidden(CDOTA_Modifier_Tiny_Toss *const this)
{
  return 1;
}


// CDOTA_Modifier_Tiny_Toss::IsStunDebuff  (line 747, @0x0000000002a61aa0, libserver.so)
bool __fastcall CDOTA_Modifier_Tiny_Toss::IsStunDebuff(CDOTA_Modifier_Tiny_Toss *const this)
{
  return 1;
}


// CDOTA_Modifier_Tiny_Toss::IsPurgable  (line 749, @0x0000000002a61ab0, libserver.so)
bool __fastcall CDOTA_Modifier_Tiny_Toss::IsPurgable(CDOTA_Modifier_Tiny_Toss *const this)
{
  return 0;
}


// CDOTA_Modifier_Tiny_Toss::IsHorizontalMotionValidToApply  (line 755, @0x0000000002a61ac0, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Tiny_Toss::IsHorizontalMotionValidToApply(CDOTA_Modifier_Tiny_Toss *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Tiny_Toss::IsVerticalMotionValidToApply  (line 756, @0x0000000002a61af0, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Tiny_Toss::IsVerticalMotionValidToApply(CDOTA_Modifier_Tiny_Toss *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Tiny_Toss::IsMotionController  (line 758, @0x0000000002a61b20, libserver.so)
bool __fastcall CDOTA_Modifier_Tiny_Toss::IsMotionController(CDOTA_Modifier_Tiny_Toss *const this)
{
  return 1;
}


// CDOTA_Modifier_Tiny_Toss::GetEffectName  (line 763, @0x0000000002a61b30, libserver.so)
// strings: "particles/units/heroes/hero_tiny/tiny_toss_blur.vpcf"
const char *__fastcall CDOTA_Modifier_Tiny_Toss::GetEffectName(CDOTA_Modifier_Tiny_Toss *const this)
{
  return "particles/units/heroes/hero_tiny/tiny_toss_blur.vpcf";
}


// CDOTA_Modifier_Tiny_Toss::RemoveOnDeath  (line 765, @0x0000000002a61b40, libserver.so)
bool __fastcall CDOTA_Modifier_Tiny_Toss::RemoveOnDeath(CDOTA_Modifier_Tiny_Toss *const this)
{
  return 0;
}


// CDOTA_Modifier_Tiny_Toss::DeclareFunctions  (line 794, @0x0000000002a3f8d0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Tiny_Toss::GetOverrideAnimation(CModifierParams const&)
void __fastcall CDOTA_Modifier_Tiny_Toss::DeclareFunctions(CDOTA_Modifier_Tiny_Toss *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_Tiny_Toss::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
}


// CDOTA_Modifier_Tiny_Toss::GetOverrideAnimation  (line 801, @0x0000000002a3f8f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Tiny_Toss::GetOverrideAnimation(
        CDOTA_Modifier_Tiny_Toss *const this,
        const CModifierParams *const params)
{
  return 0x44BC800000000001uLL;
}


// CDOTA_Modifier_Tiny_Toss::CheckState  (line 808, @0x0000000002a3f910, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Tiny_Toss::CheckState(
        CDOTA_Modifier_Tiny_Toss *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x20uLL;
  buffState->m_nDisabledStateMask &= ~0x20uLL;
}


// CDOTA_Modifier_Tiny_Toss::OnCreated  (line 817, @0x0000000002a5e1c0, libserver.so)  // inlines: DotaRetrieveAbilityValue<float>, Get, GetEHandle, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetSerialNumber, Set, Square<float>, VectorDivide, VectorSubtract, operator-, operator/, operator=
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetParent, CDOTALocomotor::ApplyHorizontalMotionController, CDOTA_Buff::Destroy, CDOTALocomotor::ApplyVerticalMotionController, CBaseEntity::GetAbsOrigin, GetPositionOnGround, DOTA_EmitSound, KeyValues::GetPtr, CEntityHandle::operator CEntityInstance*, CDOTABaseAbility::GetLevelSpecialValueFor<float> (14 total)
// strings: "toss_damage", "Hero_Tiny.Toss.Target"
// globals: MINIMUM_HEIGHT_ABOVE_LOWEST, MINIMUM_HEIGHT_ABOVE_HIGHEST, ACCELERATION_Z
void __fastcall CDOTA_Modifier_Tiny_Toss::OnCreated(CDOTA_Modifier_Tiny_Toss *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTALocomotor *v9; // rax
  CDOTA_BaseNPC *v10; // r13
  CDOTA_BaseNPC *v11; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *v13; // rax
  _QWORD *Ptr; // rax
  __int64 v15; // rdx
  int v16; // eax
  __int16 v17; // cx
  CDOTA_BaseNPC *v18; // r12
  const CBaseEntity *v19; // rax
  const Vector *p_m_vStartPosition; // rdi
  CDOTABaseAbility *v21; // rax
  float LevelSpecialValue; // xmm0_4
  __m128d z_low; // xmm2
  float v24; // xmm4_4
  float z; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  float v29; // xmm0_4
  double v30; // xmm0_8
  float v31; // xmm3_4
  float m_flInitialVelocityZ; // xmm0_4
  float v33; // xmm2_4
  float v34; // xmm0_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm2_4
  vec_t v38; // xmm0_4

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->radius, "radius");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->toss_damage, "toss_damage");
  this->m_bHorizontalMotionInterrupted = 0;
  this->m_bDamageApplied = 0;
  this->m_bTargetTeleported = 0;
  Parent = CDOTA_Buff::GetParent(this);
  v7 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  if ( CDOTALocomotor::ApplyHorizontalMotionController(v7, &this->CHorizontalMotionController, 0)
    && (v8 = CDOTA_Buff::GetParent(this),
        v9 = (*(v8->_vptr_IHandleEntity + 376))(v8),
        CDOTALocomotor::ApplyVerticalMotionController(v9, &this->CVerticalMotionController, 0)) )
  {
    v10 = CDOTA_Buff::GetParent(this);
    v11 = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v11);
    this->m_vStartPosition = GetPositionOnGround(AbsOrigin, v10);
    v13 = CDOTA_Buff::GetParent(this);
    DOTA_EmitSound(8, "Hero_Tiny.Toss.Target", v13);
    this->m_flCurrentTimeHoriz = 0.0;
    this->m_flCurrentTimeVert = 0.0;
    Ptr = KeyValues::GetPtr(pKV, "target", 0);
    if ( Ptr != 0 && (v15 = Ptr[1]) != 0 )
    {
      v16 = (*(v15 + 16) >> 15) - (*(v15 + 48) & 1);
      v17 = 0x7FFF;
      if ( *(v15 + 16) != -1 )
        v17 = *(v15 + 16) & 0x7FFF;
      LOWORD(this->m_hTarget.m_Index) = v17 | this->m_hTarget.m_Index & 0x8000;
      this->m_hTarget.m_Index = (v16 << 15) | this->m_hTarget.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hTarget.m_Index = -1;
    }
    v18 = CDOTA_Buff::GetParent(this);
    v19 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
    p_m_vStartPosition = &this->m_vStartPosition;
    if ( v19 != 0 )
      p_m_vStartPosition = CBaseEntity::GetAbsOrigin(v19);
    this->m_vLastKnownTargetPosition = GetPositionOnGround(p_m_vStartPosition, v18);
    v21 = CDOTA_Buff::GetAbility(this);
    if ( v21 != 0 )
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v21, "duration", -1, 0);
    else
      LevelSpecialValue = 0.0;
    z_low = LODWORD(this->m_vLastKnownTargetPosition.z);
    v24 = (MINIMUM_HEIGHT_ABOVE_LOWEST * LevelSpecialValue) * LevelSpecialValue;
    z = this->m_vStartPosition.z;
    v26 = fmaxf(
            fminf(*z_low.m128d_f64, z) + v24,
            fmaxf(this->m_vLastKnownTargetPosition.z, z) + MINIMUM_HEIGHT_ABOVE_HIGHEST);
    v27 = fsqrt(((v26 - z) + (v26 - z)) * ACCELERATION_Z);
    v28 = ACCELERATION_Z;
    this->m_flInitialVelocityZ = v27;
    v29 = (v27 * v27) - ((v28 + v28) * (*z_low.m128d_f64 - this->m_vStartPosition.z));
    if ( v29 < 0.0 )
      v30 = 0.0;
    else
      v30 = v29;
    z_low.m128d_f64[0] = sqrt(v30);
    this->m_vHorizontalVelocity.z = 0.0;
    v31 = _mm_movedup_pd(z_low).m128d_f64[0];
    m_flInitialVelocityZ = this->m_flInitialVelocityZ;
    v33 = (m_flInitialVelocityZ - v31) / v28;
    v34 = (m_flInitialVelocityZ + v31) / v28;
    v35 = this->m_vLastKnownTargetPosition.y - this->m_vStartPosition.y;
    v36 = fmaxf(v34, v33);
    v37 = 1.0 / v36;
    this->m_flPredictedTotalTime = v36;
    v38 = (this->m_vLastKnownTargetPosition.x - this->m_vStartPosition.x) * (1.0 / v36);
    this->m_vHorizontalVelocity.y = v35 * v37;
    this->m_vHorizontalVelocity.x = v38;
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Tiny_Toss::UpdateHorizontalMotion  (line 885, @0x0000000002a46b00, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NormalizeInPlace, VectorAdd, VectorDivide, VectorMultiply, VectorSubtract, operator CEntityInstance*, operator*, operator+, operator-, operator/, operator=
// calls: CBaseEntity::GetAbsOrigin, VectorNormalize, CBaseEntity::SetAbsOrigin
// globals: CEntityHandle::gm_pEntityList, MAX_HORIZONTAL_ACCELERATION
void __fastcall CDOTA_Modifier_Tiny_Toss::UpdateHorizontalMotion(
        CDOTA_Modifier_Tiny_Toss *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  float v4; // xmm1_4
  uint32 m_Index; // eax
  float m_flPredictedTotalTime; // xmm4_4
  CConcreteEntityList *v9; // rsi
  float m_flCurrentTimeHoriz; // xmm2_4
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  float x; // xmm0_4
  float y; // xmm3_4
  float v15; // xmm2_4
  const Vector *v16; // rax
  float v17; // xmm2_4
  float v18; // xmm3_4
  vec_t v19; // xmm4_4
  vec_t v20; // xmm0_4
  float v21; // xmm0_4
  vec_t v22; // xmm3_4
  vec_t v23; // xmm2_4
  vec_t v24; // xmm0_4
  const Vector *AbsOrigin; // rax
  float vDesiredPos; // [rsp+Ch] [rbp-44h]
  float vDesiredPos_4; // [rsp+10h] [rbp-40h]
  float vDesiredPos_8; // [rsp+14h] [rbp-3Ch]
  float vDesiredPos_8a; // [rsp+14h] [rbp-3Ch]
  float v30; // [rsp+18h] [rbp-38h]
  float v31; // [rsp+18h] [rbp-38h]
  float dta; // [rsp+1Ch] [rbp-34h]
  Vector vVelDif; // [rsp+20h] [rbp-30h] BYREF
  Vector vNewPos; // [rsp+30h] [rbp-20h] BYREF

  v4 = a3;
  m_Index = this->m_hTarget.m_Index;
  m_flPredictedTotalTime = this->m_flPredictedTotalTime;
  v9 = CEntityHandle::gm_pEntityList;
  m_flCurrentTimeHoriz = fminf(this->m_flCurrentTimeHoriz + a3, m_flPredictedTotalTime);
  this->m_flCurrentTimeHoriz = m_flCurrentTimeHoriz;
  if ( m_Index + 2 > 1
    && (v11 = v9->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v12 = &v11[this->m_hTarget.m_Index & 0x1FF]) != 0
    && m_Index == v12->m_EHandle.m_Index
    && v12->m_pInstance != 0
    && !this->m_bTargetTeleported )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(v12->m_pInstance);
    m_flPredictedTotalTime = this->m_flPredictedTotalTime;
    x = AbsOrigin->x;
    v4 = a3;
    this->m_vLastKnownTargetPosition.x = AbsOrigin->x;
    y = AbsOrigin->y;
    this->m_vLastKnownTargetPosition.y = y;
    this->m_vLastKnownTargetPosition.z = AbsOrigin->z;
    m_flCurrentTimeHoriz = this->m_flCurrentTimeHoriz;
  }
  else
  {
    x = this->m_vLastKnownTargetPosition.x;
    y = this->m_vLastKnownTargetPosition.y;
  }
  v15 = m_flCurrentTimeHoriz / m_flPredictedTotalTime;
  vDesiredPos_8 = v4;
  vDesiredPos = ((x - this->m_vStartPosition.x) * v15) + this->m_vStartPosition.x;
  v30 = ((y - this->m_vStartPosition.y) * v15) + this->m_vStartPosition.y;
  v16 = CBaseEntity::GetAbsOrigin(me);
  vDesiredPos_4 = vDesiredPos_8;
  v17 = 1.0 / vDesiredPos_8;
  v18 = v30;
  v31 = v16->x;
  vDesiredPos_8a = v16->y;
  dta = v16->z;
  v19 = (0.0 * v17) - this->m_vHorizontalVelocity.z;
  v20 = ((vDesiredPos - v16->x) * v17) - this->m_vHorizontalVelocity.x;
  vVelDif.y = ((v18 - vDesiredPos_8a) * v17) - this->m_vHorizontalVelocity.y;
  vVelDif.z = v19;
  vVelDif.x = v20;
  v21 = fminf(VectorNormalize(&vVelDif), MAX_HORIZONTAL_ACCELERATION);
  v22 = ((vVelDif.x * v21) * vDesiredPos_4) + this->m_vHorizontalVelocity.x;
  v23 = ((vVelDif.y * v21) * vDesiredPos_4) + this->m_vHorizontalVelocity.y;
  v24 = ((v21 * vVelDif.z) * vDesiredPos_4) + this->m_vHorizontalVelocity.z;
  this->m_vHorizontalVelocity.x = v22;
  this->m_vHorizontalVelocity.y = v23;
  this->m_vHorizontalVelocity.z = v24;
  vNewPos.x = (v22 * vDesiredPos_4) + v31;
  vNewPos.y = (v23 * vDesiredPos_4) + vDesiredPos_8a;
  vNewPos.z = (vDesiredPos_4 * v24) + dta;
  CBaseEntity::SetAbsOrigin(me, &vNewPos);
}


// CDOTA_Modifier_Tiny_Toss::UpdateVerticalMotion  (line 915, @0x0000000002a53a70, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Square<float>, ToDOTABaseNPC, TryToDamageSelf, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetParent, GetGroundHeight, CBaseEntity::SetAbsOrigin, CDOTA_Buff::Destroy, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::TriggerSpellReflect, CDOTA_Modifier_Tiny_Toss::DamageNearbyUnits, DOTA_EmitSoundLocation, CDOTA_Modifier_Tiny_Toss::TryToDamageSelf
// strings: "Ability.TossImpact"
// globals: ACCELERATION_Z, CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Tiny_Toss::UpdateVerticalMotion(
        CDOTA_Modifier_Tiny_Toss *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  float v6; // xmm2_4
  float v7; // r14d
  const Vector *AbsOrigin; // rax
  float m_flCurrentTimeVert; // xmm0_4
  float v10; // xmm3_4
  float v11; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax
  float GroundHeight; // xmm0_4
  uint32 m_Index; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTABaseAbility *Ability; // rax
  float v19; // [rsp+8h] [rbp-38h]
  float v20; // [rsp+Ch] [rbp-34h]
  Vector vNewPos; // [rsp+10h] [rbp-30h] BYREF

  v6 = this->m_flCurrentTimeVert + a3;
  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(this->m_flInitialVelocityZ)));
  v19 = ACCELERATION_Z;
  this->m_flCurrentTimeVert = v6;
  v20 = v6;
  AbsOrigin = CBaseEntity::GetAbsOrigin(me);
  m_flCurrentTimeVert = this->m_flCurrentTimeVert;
  v10 = m_flCurrentTimeVert * m_flCurrentTimeVert;
  v11 = m_flCurrentTimeVert * this->m_flInitialVelocityZ;
  *&vNewPos.x = *&AbsOrigin->x;
  vNewPos.z = (((-0.5 * ACCELERATION_Z) * v10) + this->m_vStartPosition.z) + v11;
  Parent = CDOTA_Buff::GetParent(this);
  GroundHeight = GetGroundHeight(&vNewPos, Parent);
  if ( GroundHeight > vNewPos.z && (v7 - (v20 * v19)) < 0.0 )
  {
    vNewPos.z = GroundHeight;
    CBaseEntity::SetAbsOrigin(me, &vNewPos);
    if ( !this->m_bHorizontalMotionInterrupted )
    {
      CDOTA_Modifier_Tiny_Toss::DamageNearbyUnits(this);
      if ( !this->m_bDamageApplied )
        CDOTA_Modifier_Tiny_Toss::TryToDamageSelf(this);
      DOTA_EmitSoundLocation(&vNewPos, "Ability.TossImpact", 1);
    }
    CDOTA_Buff::Destroy(this, 0, 0, 0);
    m_Index = this->m_hTarget.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
      if ( v15 != 0 )
      {
        v16 = &v15[this->m_hTarget.m_Index & 0x1FF];
        if ( v16 != 0 && m_Index == v16->m_EHandle.m_Index )
        {
          m_pInstance = v16->m_pInstance;
          if ( v16->m_pInstance != 0
            && m_pInstance->m_bIsDOTANPC
            && (*(m_pInstance->_vptr_IHandleEntity + 408))(v16->m_pInstance) != 0 )
          {
            Ability = CDOTA_Buff::GetAbility(this);
            CDOTA_BaseNPC::TriggerSpellReflect(m_pInstance, Ability);
          }
        }
      }
    }
  }
  else
  {
    CBaseEntity::SetAbsOrigin(me, &vNewPos);
  }
}


// CDOTA_Modifier_Tiny_Toss::OnHorizontalMotionInterrupted  (line 959, @0x0000000002a3f920, libserver.so)
void __fastcall CDOTA_Modifier_Tiny_Toss::OnHorizontalMotionInterrupted(CDOTA_Modifier_Tiny_Toss *const this)
{
  this->m_bHorizontalMotionInterrupted = 1;
}


// CDOTA_Modifier_Tiny_Toss::OnVerticalMotionInterrupted  (line 968, @0x0000000002a40560, libserver.so)
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Tiny_Toss::OnVerticalMotionInterrupted(CDOTA_Modifier_Tiny_Toss *const this)
{
  CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Tiny_Toss::OnDestroy  (line 977, @0x0000000002a53a00, libserver.so)  // inlines: TryToDamageSelf
// calls: CDOTA_Modifier_Tiny_Toss::TryToDamageSelf, CDOTA_Buff::GetParent, CDOTALocomotor::RemoveHorizontalMotionController, CDOTALocomotor::RemoveVerticalMotionController
void __fastcall CDOTA_Modifier_Tiny_Toss::OnDestroy(CDOTA_Modifier_Tiny_Toss *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v3; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTALocomotor *v5; // rax

  if ( !this->m_bDamageApplied )
    CDOTA_Modifier_Tiny_Toss::TryToDamageSelf(this);
  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveHorizontalMotionController(v3, &this->CHorizontalMotionController);
  v4 = CDOTA_Buff::GetParent(this);
  v5 = (*(v4->_vptr_IHandleEntity + 376))(v4);
  CDOTALocomotor::RemoveVerticalMotionController(v5, &this->CVerticalMotionController);
}


// CDOTA_Modifier_Tiny_Toss::DamageNearbyUnits  (line 989, @0x0000000002a4fed0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CGridNav::DestroyTreesAroundPoint, FindUnitsInRadius, CDOTA_Buff::GetAbility, ApplyDamage, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_Modifier_Tiny_Toss::UpdateVerticalMotion
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Tiny_Toss::DamageNearbyUnits(CDOTA_Modifier_Tiny_Toss *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v3; // ebx
  CDOTA_BaseNPC *Parent; // rax
  float v5; // xmm3_4
  __m128i v6; // xmm5
  float v7; // r14d
  CDOTA_BaseNPC *v8; // r12
  CDOTA_BaseNPC *v9; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v11; // rax
  __int64 v12; // rbx
  CHandle<CBaseEntity> *v13; // rdx
  uint32 m_Index; // eax
  __int16 v15; // cx
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  CEntityInstance *m_pInstance; // r12
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *v20; // rax
  float flDamage; // [rsp+1Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+20h] [rbp-50h] BYREF
  Vector v23; // 0:xmm0_8.8,8:xmm1_4.4

  Caster = CDOTA_Buff::GetCaster(this);
  v3 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
  Parent = CDOTA_Buff::GetParent(this);
  v23 = *CBaseEntity::GetAbsOrigin(Parent);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v3, v23, 300.0, v5);
  entities.m_Size = 0;
  *v6.m128i_i32 = this->radius;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
  v8 = CDOTA_Buff::GetParent(this);
  v9 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
  v11 = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(v11->m_iTeamNum.m_Value, AbsOrigin, v8, v7, &entities, 2, 7, 0, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v12 = 0;
    do
    {
      while ( 1 )
      {
        v13 = &entities.m_Memory.m_pMemory[v12];
        m_Index = v13->m_Index;
        if ( v13->m_Index + 2 <= 1
          || (v15 = v13->m_Index,
              (v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v13->m_Index) >> 9) & 0x3F]) == 0)
          || (v17 = &v16[v15 & 0x1FF]) == 0
          || m_Index != v17->m_EHandle.m_Index
          || (m_pInstance = v17->m_pInstance, v17->m_pInstance == 0)
          || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
        {
          m_pInstance = 0;
        }
        if ( CDOTA_Buff::GetParent(this) != m_pInstance )
        {
          flDamage = this->toss_damage;
          if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x10) != 0 )
            flDamage = this->toss_damage / 3.0;
          if ( (CDOTA_Buff::GetCaster(this)->m_iUnitType & 1) != 0 )
            break;
        }
        if ( entities.m_Size <= ++v12 )
          goto LABEL_14;
      }
      Ability = CDOTA_Buff::GetAbility(this);
      v20 = CDOTA_Buff::GetCaster(this);
      ApplyDamage(v20, m_pInstance, Ability, flDamage, 2, 0);
      ++v12;
    }
    while ( entities.m_Size > v12 );
  }
LABEL_14:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Modifier_Tiny_Toss::TryToDamageSelf  (line 1027, @0x0000000002a53860, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::HasScepter, CDOTA_Buff::GetAbility, ApplyDamage, DotaRetrieveAbilityValue<int>
// callers: CDOTA_Modifier_Tiny_Toss::TryToDamageSelf, CDOTA_Modifier_Tiny_Toss::OnDestroy, CDOTA_Modifier_Tiny_Toss::UpdateVerticalMotion
// strings: "grow_bonus_damage_pct", "grow_bonus_damage_pct_scepter"
void __fastcall CDOTA_Modifier_Tiny_Toss::TryToDamageSelf(CDOTA_Modifier_Tiny_Toss *const this)
{
  unsigned __int8 m_Value; // r13
  unsigned __int8 v3; // r14
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v6; // r12
  int EffectiveLevel; // eax
  int LevelSpecialValue; // r15d
  CDOTA_BaseNPC *v9; // rax
  int v10; // r12d
  int toss_damage; // r13d
  CDOTABaseAbility *v12; // r14
  CDOTA_BaseNPC *Parent; // r15
  CDOTA_BaseNPC *v14; // rax
  CDOTABaseAbility *Ability; // rax
  int v16; // eax
  int bonus_damage_pct[13]; // [rsp+Ch] [rbp-34h] BYREF

  this->m_bDamageApplied = 1;
  m_Value = CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value;
  v3 = CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "tiny_grow", 0);
  v6 = AbilityByName;
  if ( AbilityByName != 0 && CDOTABaseAbility::GetEffectiveLevel(AbilityByName) >= 0 )
  {
    EffectiveLevel = CDOTABaseAbility::GetEffectiveLevel(v6);
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "grow_bonus_damage_pct", EffectiveLevel, 0);
    v9 = CDOTA_Buff::GetCaster(this);
    if ( CDOTA_BaseNPC::HasScepter(v9) )
    {
      v16 = CDOTABaseAbility::GetEffectiveLevel(v6);
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "grow_bonus_damage_pct_scepter", v16, 0);
    }
    v10 = LevelSpecialValue + 100;
  }
  else
  {
    Ability = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<int>(Ability, bonus_damage_pct, "bonus_damage_pct");
    v10 = bonus_damage_pct[0] + 100;
  }
  if ( m_Value != v3 )
  {
    toss_damage = this->toss_damage;
    if ( (CDOTA_Buff::GetCaster(this)->m_iUnitType & 1) != 0 )
    {
      v12 = CDOTA_Buff::GetAbility(this);
      Parent = CDOTA_Buff::GetParent(this);
      v14 = CDOTA_Buff::GetCaster(this);
      ApplyDamage(v14, Parent, v12, (toss_damage * v10 / 100), 2, 0);
    }
  }
}


// CDOTA_Modifier_Tiny_Toss::TryToDamageSelf  (line 1027, @0x0000000002a539e0, libserver.so)
// calls: CDOTA_Modifier_Tiny_Toss::TryToDamageSelf
void __fastcall CDOTA_Modifier_Tiny_Toss::TryToDamageSelf(CDOTA_Modifier_Tiny_Toss *const this)
{
  if ( !this->m_bDamageApplied )
    CDOTA_Modifier_Tiny_Toss::TryToDamageSelf(this);
}


// CDOTA_Ability_Tiny_CraggyExterior::~CDOTA_Ability_Tiny_CraggyExterior  (line 1080, @0x0000000002a677d0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Tiny_CraggyExterior::~CDOTA_Ability_Tiny_CraggyExterior(
        CDOTA_Ability_Tiny_CraggyExterior *const this)
{
  this->_vptr_IHandleEntity = &off_43B0CF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Tiny_CraggyExterior::~CDOTA_Ability_Tiny_CraggyExterior  (line 1080, @0x0000000002a677f0, libserver.so)  // inlines: ~CDOTA_Ability_Tiny_CraggyExterior
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Tiny_CraggyExterior::~CDOTA_Ability_Tiny_CraggyExterior(
        CDOTA_Ability_Tiny_CraggyExterior *const this)
{
  this->_vptr_IHandleEntity = &off_43B0CF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Tiny_CraggyExterior::Schema_DynamicBinding  (line 1082, @0x0000000002a61b50, libserver.so)
// globals: CDOTA_Ability_Tiny_CraggyExterior::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tiny_CraggyExterior::Schema_DynamicBinding(
        const CDOTA_Ability_Tiny_CraggyExterior *const this)
{
  return CDOTA_Ability_Tiny_CraggyExterior::s_pSchemaBinding;
}


// CDOTA_Ability_Tiny_CraggyExterior::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1082, @0x0000000002a61b60, libserver.so)
// globals: CDOTA_Ability_Tiny_CraggyExterior::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tiny_CraggyExterior::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Tiny_CraggyExterior::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tiny_CraggyExterior::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Tiny_CraggyExterior::CEntityInstanceEntityClass::DestructInstance  (line 1082, @0x0000000002a61b70, libserver.so)  // inlines: Destruct<CDOTA_Ability_Tiny_CraggyExterior>
void __fastcall CDOTA_Ability_Tiny_CraggyExterior::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Tiny_CraggyExterior::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Tiny_CraggyExterior::CEntityInstanceEntityClass::FreeInstance  (line 1082, @0x0000000002a61b90, libserver.so)
void __fastcall CDOTA_Ability_Tiny_CraggyExterior::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Tiny_CraggyExterior::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Tiny_CraggyExterior::CEntityInstanceEntityClass::CanAllocate  (line 1082, @0x0000000002a61bb0, libserver.so)
bool __fastcall CDOTA_Ability_Tiny_CraggyExterior::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Tiny_CraggyExterior::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Tiny_CraggyExterior::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1082, @0x0000000002a61bc0, libserver.so)
// globals: CDOTA_Ability_Tiny_CraggyExterior::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Tiny_CraggyExterior::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Tiny_CraggyExterior::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tiny_CraggyExterior::s_pSchemaBinding;
}


// CDOTA_Ability_Tiny_CraggyExterior::CEntityInstanceEntityClass::AllocateInstance  (line 1082, @0x0000000002a642f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Tiny_CraggyExterior::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Tiny_CraggyExterior::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Tiny_CraggyExterior::CEntityInstanceEntityClass::ConstructInstance  (line 1082, @0x0000000002a662e0, libserver.so)  // inlines: CDOTA_Ability_Tiny_CraggyExterior, Construct<CDOTA_Ability_Tiny_CraggyExterior>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Tiny_CraggyExterior::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Tiny_CraggyExterior::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43B0CF0;
  }
  return p;
}


// CDOTA_Ability_Tiny_CraggyExterior::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1082, @0x0000000002a6af70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Tiny_CraggyExterior::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tiny_CraggyExterior::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Tiny_CraggyExterior::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1082, @0x0000000002a6af90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Tiny_CraggyExterior::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tiny_CraggyExterior::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Tiny_CraggyExterior::GetEntityClassInternal  (line 1082, @0x0000000002a73e10, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "CDOTA_Ability_Tiny_CraggyExterior"
// globals: `guard variable for'CDOTA_Ability_Tiny_CraggyExterior::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_CraggyExteriorClass, CDOTA_Ability_Tiny_CraggyExterior::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_CraggyExteriorClass, __dso_handle, CDOTA_Ability_Tiny_CraggyExterior::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Tiny_CraggyExterior::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tiny_CraggyExteriorClassInfo, CDOTA_Ability_Tiny_CraggyExterior::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tiny_CraggyExteriorClassInfo
CEntityClass *__cdecl CDOTA_Ability_Tiny_CraggyExterior::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Tiny_CraggyExterior::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_CraggyExteriorClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tiny_CraggyExterior::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_CraggyExteriorClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Tiny_CraggyExterior::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_CraggyExteriorClass);
    CDOTA_Ability_Tiny_CraggyExterior::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_CraggyExteriorClass._vptr_CEntityClass = off_43B0C70;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tiny_CraggyExterior::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_CraggyExteriorClass);
    __cxa_atexit(
      CDOTA_Ability_Tiny_CraggyExterior::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Tiny_CraggyExterior::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_CraggyExteriorClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Tiny_CraggyExteriorClass != 0 )
    return &CDOTA_Ability_Tiny_CraggyExterior::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_CraggyExteriorClass;
  if ( `guard variable for'CDOTA_Ability_Tiny_CraggyExterior::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tiny_CraggyExteriorClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tiny_CraggyExterior::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tiny_CraggyExteriorClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Tiny_CraggyExterior::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tiny_CraggyExteriorClassInfo,
      "CDOTA_Ability_Tiny_CraggyExterior",
      "tiny_craggy_exterior",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tiny_CraggyExterior::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tiny_CraggyExteriorClassInfo);
  }
  CDOTA_Ability_Tiny_CraggyExterior::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_CraggyExteriorClass.m_pClassInfo = &CDOTA_Ability_Tiny_CraggyExterior::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tiny_CraggyExteriorClassInfo;
  CDOTA_Ability_Tiny_CraggyExterior::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_CraggyExteriorClass.m_pBaseClassInfo = CDOTA_Ability_Tiny_CraggyExterior::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tiny_CraggyExteriorClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Tiny_CraggyExteriorClass = &CDOTA_Ability_Tiny_CraggyExterior::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_CraggyExteriorClass;
  CDOTA_Ability_Tiny_CraggyExterior::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tiny_CraggyExteriorClassInfo.m_pClass = &CDOTA_Ability_Tiny_CraggyExterior::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_CraggyExteriorClass;
  CDOTA_Ability_Tiny_CraggyExterior::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_CraggyExteriorClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Tiny_CraggyExteriorClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Tiny_CraggyExterior::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_CraggyExteriorClass;
}


// CDOTA_Ability_Tiny_CraggyExterior::GetIntrinsicModifierName  (line 1096, @0x0000000002a61bd0, libserver.so)
// strings: "modifier_tiny_craggy_exterior"
const char *__fastcall CDOTA_Ability_Tiny_CraggyExterior::GetIntrinsicModifierName(
        CDOTA_Ability_Tiny_CraggyExterior *const this)
{
  return "modifier_tiny_craggy_exterior";
}


// CDOTA_Ability_Tiny_CraggyExterior::YouForgotToImplementOrDeclareServerClass  (line 1099, @0x0000000002a3f940, libserver.so)
int __fastcall CDOTA_Ability_Tiny_CraggyExterior::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Tiny_CraggyExterior *const this)
{
  return 0;
}


// CDOTA_Ability_Tiny_CraggyExterior::GetServerClass  (line 1099, @0x0000000002a488b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Tiny_CraggyExterior::GetServerClass(
        CDOTA_Ability_Tiny_CraggyExterior *const this)
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


// CDOTA_Modifier_Tiny_CraggyExterior::~CDOTA_Modifier_Tiny_CraggyExterior  (line 1110, @0x0000000002a64fd0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Tiny_CraggyExterior::~CDOTA_Modifier_Tiny_CraggyExterior(
        CDOTA_Modifier_Tiny_CraggyExterior *const this)
{
  this->_vptr_CDOTA_Buff = &off_43B17B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Tiny_CraggyExterior::~CDOTA_Modifier_Tiny_CraggyExterior  (line 1110, @0x0000000002a64ff0, libserver.so)  // inlines: ~CDOTA_Modifier_Tiny_CraggyExterior
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Tiny_CraggyExterior::~CDOTA_Modifier_Tiny_CraggyExterior(
        CDOTA_Modifier_Tiny_CraggyExterior *const this)
{
  this->_vptr_CDOTA_Buff = &off_43B17B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Tiny_CraggyExterior::IsHidden  (line 1118, @0x0000000002a61be0, libserver.so)
bool __fastcall CDOTA_Modifier_Tiny_CraggyExterior::IsHidden(CDOTA_Modifier_Tiny_CraggyExterior *const this)
{
  return 1;
}


// CDOTA_Modifier_Tiny_CraggyExterior::OnCreated  (line 1137, @0x0000000002a5d710, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "stun_chance"
void __fastcall CDOTA_Modifier_Tiny_CraggyExterior::OnCreated(
        CDOTA_Modifier_Tiny_CraggyExterior *const this,
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
    this->stun_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "stun_chance", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->stun_chance = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->stun_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "stun_duration", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_9;
    }
  }
  this->stun_duration = 0.0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->bonus_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_armor", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
LABEL_10:
    this->radius = 0;
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
    goto LABEL_11;
  }
LABEL_9:
  this->bonus_armor = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_10;
LABEL_5:
  this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "radius", -1, 0);
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
  {
LABEL_6:
    this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "damage", -1, 0);
    return;
  }
LABEL_11:
  this->damage = 0;
}


// CDOTA_Modifier_Tiny_CraggyExterior::OnRefresh  (line 1148, @0x0000000002a5d890, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "stun_chance"
void __fastcall CDOTA_Modifier_Tiny_CraggyExterior::OnRefresh(
        CDOTA_Modifier_Tiny_CraggyExterior *const this,
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
    this->stun_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "stun_chance", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->stun_chance = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->stun_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "stun_duration", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_9;
    }
  }
  this->stun_duration = 0.0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->bonus_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_armor", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
LABEL_10:
    this->radius = 0;
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
    goto LABEL_11;
  }
LABEL_9:
  this->bonus_armor = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_10;
LABEL_5:
  this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "radius", -1, 0);
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
  {
LABEL_6:
    this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "damage", -1, 0);
    return;
  }
LABEL_11:
  this->damage = 0;
}


// CDOTA_Modifier_Tiny_CraggyExterior::DeclareFunctions  (line 1159, @0x0000000002a3f950, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Tiny_CraggyExterior::DeclareFunctions(CDOTA_Modifier_Tiny_CraggyExterior *const this)
{
  this->m_Functions[121].__pfn = (&stru_10 + 697);
  this->m_Functions[121].__delta = 0;
  this->m_Functions[45].__pfn = (&stru_10 + 705);
  this->m_Functions[45].__delta = 0;
}


// CDOTA_Modifier_Tiny_CraggyExterior::OnAttackLanded  (line 1167, @0x0000000002a49280, libserver.so)  // inlines: AttackerNPC, FastRSqrt, FastRSqrtFast, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, VectorNormalizeFast, VectorSubtract, _mm_load_ss, _mm_rsqrt_ss, _mm_set_ss, operator CBaseEntity*, operator CEntityInstance*, operator-
// calls: __stack_chk_fail, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, RollPseudoRandomPercentage, CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetAbility, ApplyDamage, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, GetParticleManager, CDOTA_ParticleManager::CreateParticle (20 total)
// strings: "modifier_stunned", "particles/units/heroes/hero_tiny/tiny_craggy_hit.vpcf", "attach_hitloc", "Hero_Tiny.CraggyExterior"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Tiny_CraggyExterior::OnAttackLanded(
        CDOTA_Modifier_Tiny_CraggyExterior *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_BaseNPC *Caster; // rax
  CEntityInstance *v10; // rax
  CDOTA_BaseNPC *v11; // rbx
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *v13; // rax
  float v14; // xmm1_4
  CDOTABaseAbility *v15; // r13
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v19; // r15
  CDOTA_ParticleManager *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  const Vector *AbsOrigin; // r12
  const Vector *v23; // rax
  float v24; // xmm4_4
  float v25; // xmm3_4
  float v26; // xmm2_4
  float v27; // xmm5_4
  float v28; // xmm1_4
  CDOTA_ParticleManager *v29; // rax
  CDOTA_ParticleManager *v30; // rax
  float flDamage; // [rsp+Ch] [rbp-84h]
  Vector vecFwd; // [rsp+10h] [rbp-80h] BYREF
  Vector vecRight; // [rsp+20h] [rbp-70h] BYREF
  Vector vecUp; // [rsp+30h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v36; // [rsp+58h] [rbp-38h]
  ModifierVariant_t result; // 0:rax.16

  v36 = __readfsqword(0x28u);
  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->htarget.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0
          && m_pInstance->m_bIsDOTANPC
          && CDOTA_Buff::GetParent(this) == m_pInstance
          && !CDOTA_Buff::GetCaster(this)->m_bIsIllusion.m_Value )
        {
          result.m_szVal = CDOTA_Buff::GetParent(this);
          *&result.m_eType = 1;
          if ( (result.m_szVal[2787] & 0x10) != 0 )
            goto LABEL_6;
          Caster = CDOTA_Buff::GetCaster(this);
          if ( RollPseudoRandomPercentage(
                 this->stun_chance,
                 DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_TINY_CRAGGY,
                 Caster) )
          {
            v10 = CEntityHandle::operator CEntityInstance *(&params->hattacker);
            v11 = v10;
            if ( v10 != 0
              && BYTE3(v10[7]._vptr_IHandleEntity) != 0
              && (BYTE1(v10[58]._vptr_IHandleEntity) & 2) == 0
              && (v10[43].m_iszPrivateVScripts.u.m_Id & 0x10) == 0
              && (*(&v10[50].m_worldGroupId + 1) & 2) == 0 )
            {
              flDamage = this->damage;
              Ability = CDOTA_Buff::GetAbility(this);
              v13 = CDOTA_Buff::GetCaster(this);
              ApplyDamage(v13, v11, Ability, flDamage, 2, 0);
              KeyValues::KeyValues(&kv, "modifier_stunned");
              KeyValues::SetFloat(&kv, "duration", v14);
              v15 = CDOTA_Buff::GetAbility(this);
              v16 = CDOTA_Buff::GetCaster(this);
              CDOTA_BaseNPC::AddNewModifier(v11, v16, v15, "modifier_stunned", &kv, 0);
              Parent = CDOTA_Buff::GetParent(this);
              ParticleManager = GetParticleManager();
              LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                                  ParticleManager,
                                  "particles/units/heroes/hero_tiny/tiny_craggy_hit.vpcf",
                                  2,
                                  Parent,
                                  0,
                                  0);
              v19 = CDOTA_Buff::GetCaster(this);
              v20 = GetParticleManager();
              CDOTA_ParticleManager::SetParticleControlEnt(v20, Parent, 0, v19, 5, "attach_hitloc", vec3_invalid, 1);
              v21 = CDOTA_Buff::GetCaster(this);
              AbsOrigin = CBaseEntity::GetAbsOrigin(v21);
              v23 = CBaseEntity::GetAbsOrigin(v11);
              v24 = v23->x - AbsOrigin->x;
              v25 = v23->y - AbsOrigin->y;
              v26 = v23->z - AbsOrigin->z;
              v27 = 1.0 / fsqrt((((v24 * v24) + 0.00000011920929) + (v25 * v25)) + (v26 * v26));
              v28 = (0.5 * v27)
                  * (3.0 - ((((((v24 * v24) + 0.00000011920929) + (v25 * v25)) + (v26 * v26)) * v27) * v27));
              vecFwd.x = v24 * v28;
              vecFwd.y = v25 * v28;
              vecFwd.z = v28 * v26;
              VectorVectors(&vecFwd, &vecRight, &vecUp);
              v29 = GetParticleManager();
              CDOTA_ParticleManager::SetParticleControlOrientation(
                v29,
                Parent,
                1,
                *&vecFwd.x,
                vecFwd.z,
                *&vecRight.x,
                vecRight.z,
                *&vecUp.x,
                vecUp.z);
              v30 = GetParticleManager();
              CDOTA_ParticleManager::ReleaseParticleIndex(v30, Parent);
              DOTA_EmitSound(10, "Hero_Tiny.CraggyExterior", v11);
              KeyValues::~KeyValues(&kv);
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


// CDOTA_Modifier_Tiny_CraggyExterior::GetModifierPhysicalArmorBonus  (line 1206, @0x0000000002a42a20, libserver.so)
// calls: CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_Tiny_CraggyExterior::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Tiny_CraggyExterior *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) != 0 )
    return 1uLL;
  *v3.m128i_i32 = this->bonus_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Ability_Tiny_Grow::~CDOTA_Ability_Tiny_Grow  (line 1222, @0x0000000002a67820, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Tiny_Grow::~CDOTA_Ability_Tiny_Grow(CDOTA_Ability_Tiny_Grow *const this)
{
  this->_vptr_IHandleEntity = &off_43B1B30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Tiny_Grow::~CDOTA_Ability_Tiny_Grow  (line 1222, @0x0000000002a67840, libserver.so)  // inlines: ~CDOTA_Ability_Tiny_Grow
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Tiny_Grow::~CDOTA_Ability_Tiny_Grow(CDOTA_Ability_Tiny_Grow *const this)
{
  this->_vptr_IHandleEntity = &off_43B1B30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Tiny_Grow::Schema_DynamicBinding  (line 1224, @0x0000000002a61bf0, libserver.so)
// globals: CDOTA_Ability_Tiny_Grow::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tiny_Grow::Schema_DynamicBinding(
        const CDOTA_Ability_Tiny_Grow *const this)
{
  return CDOTA_Ability_Tiny_Grow::s_pSchemaBinding;
}


// CDOTA_Ability_Tiny_Grow::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1224, @0x0000000002a61c00, libserver.so)
// globals: CDOTA_Ability_Tiny_Grow::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tiny_Grow::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Tiny_Grow::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tiny_Grow::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Tiny_Grow::CEntityInstanceEntityClass::DestructInstance  (line 1224, @0x0000000002a61c10, libserver.so)  // inlines: Destruct<CDOTA_Ability_Tiny_Grow>
void __fastcall CDOTA_Ability_Tiny_Grow::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Tiny_Grow::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Tiny_Grow::CEntityInstanceEntityClass::FreeInstance  (line 1224, @0x0000000002a61c30, libserver.so)
void __fastcall CDOTA_Ability_Tiny_Grow::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Tiny_Grow::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Tiny_Grow::CEntityInstanceEntityClass::CanAllocate  (line 1224, @0x0000000002a61c50, libserver.so)
bool __fastcall CDOTA_Ability_Tiny_Grow::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Tiny_Grow::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Tiny_Grow::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1224, @0x0000000002a61c60, libserver.so)
// globals: CDOTA_Ability_Tiny_Grow::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Tiny_Grow::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Tiny_Grow::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tiny_Grow::s_pSchemaBinding;
}


// CDOTA_Ability_Tiny_Grow::CEntityInstanceEntityClass::AllocateInstance  (line 1224, @0x0000000002a64330, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Tiny_Grow::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Tiny_Grow::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Tiny_Grow::CEntityInstanceEntityClass::ConstructInstance  (line 1224, @0x0000000002a66310, libserver.so)  // inlines: CDOTA_Ability_Tiny_Grow, Construct<CDOTA_Ability_Tiny_Grow>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Tiny_Grow::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Tiny_Grow::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43B1B30;
  }
  return p;
}


// CDOTA_Ability_Tiny_Grow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1224, @0x0000000002a6afc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Tiny_Grow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tiny_Grow::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Tiny_Grow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1224, @0x0000000002a6afe0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Tiny_Grow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tiny_Grow::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Tiny_Grow::GetEntityClassInternal  (line 1224, @0x0000000002a73f60, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "CDOTA_Ability_Tiny_Grow"
// globals: `guard variable for'CDOTA_Ability_Tiny_Grow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_GrowClass, CDOTA_Ability_Tiny_Grow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_GrowClass, __dso_handle, CDOTA_Ability_Tiny_Grow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Tiny_Grow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tiny_GrowClassInfo, CDOTA_Ability_Tiny_Grow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tiny_GrowClassInfo
CEntityClass *__cdecl CDOTA_Ability_Tiny_Grow::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Tiny_Grow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_GrowClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tiny_Grow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_GrowClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Tiny_Grow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_GrowClass);
    CDOTA_Ability_Tiny_Grow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_GrowClass._vptr_CEntityClass = off_43B1AB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tiny_Grow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_GrowClass);
    __cxa_atexit(
      CDOTA_Ability_Tiny_Grow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Tiny_Grow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_GrowClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Tiny_GrowClass != 0 )
    return &CDOTA_Ability_Tiny_Grow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_GrowClass;
  if ( `guard variable for'CDOTA_Ability_Tiny_Grow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tiny_GrowClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tiny_Grow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tiny_GrowClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Tiny_Grow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tiny_GrowClassInfo,
      "CDOTA_Ability_Tiny_Grow",
      "tiny_grow",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tiny_Grow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tiny_GrowClassInfo);
  }
  CDOTA_Ability_Tiny_Grow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_GrowClass.m_pClassInfo = &CDOTA_Ability_Tiny_Grow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tiny_GrowClassInfo;
  CDOTA_Ability_Tiny_Grow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_GrowClass.m_pBaseClassInfo = CDOTA_Ability_Tiny_Grow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tiny_GrowClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Tiny_GrowClass = &CDOTA_Ability_Tiny_Grow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_GrowClass;
  CDOTA_Ability_Tiny_Grow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tiny_GrowClassInfo.m_pClass = &CDOTA_Ability_Tiny_Grow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_GrowClass;
  CDOTA_Ability_Tiny_Grow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_GrowClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Tiny_GrowClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Tiny_Grow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tiny_GrowClass;
}


// CDOTA_Ability_Tiny_Grow::IsHiddenWhenStolen  (line 1227, @0x0000000002a61c70, libserver.so)
bool __fastcall CDOTA_Ability_Tiny_Grow::IsHiddenWhenStolen(CDOTA_Ability_Tiny_Grow *const this)
{
  return 1;
}


// CDOTA_Ability_Tiny_Grow::GetIntrinsicModifierName  (line 1229, @0x0000000002a61c80, libserver.so)
// strings: "modifier_tiny_grow"
const char *__fastcall CDOTA_Ability_Tiny_Grow::GetIntrinsicModifierName(CDOTA_Ability_Tiny_Grow *const this)
{
  return "modifier_tiny_grow";
}


// CDOTA_Ability_Tiny_Grow::OnStolen  (line 1237, @0x0000000002a41a70, libserver.so)
// calls: CDOTABaseAbility::SetActivated
void __fastcall CDOTA_Ability_Tiny_Grow::OnStolen(
        CDOTA_Ability_Tiny_Grow *const this,
        CDOTABaseAbility *pSourceAbility)
{
  CDOTABaseAbility::SetActivated(this, !this->m_bHidden.m_Value);
}


// CDOTA_Modifier_Tiny_Grow::~CDOTA_Modifier_Tiny_Grow  (line 1248, @0x0000000002a64f80, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Tiny_Grow::~CDOTA_Modifier_Tiny_Grow(CDOTA_Modifier_Tiny_Grow *const this)
{
  this->_vptr_CDOTA_Buff = &off_43B25F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Tiny_Grow::~CDOTA_Modifier_Tiny_Grow  (line 1248, @0x0000000002a64fa0, libserver.so)  // inlines: ~CDOTA_Modifier_Tiny_Grow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Tiny_Grow::~CDOTA_Modifier_Tiny_Grow(CDOTA_Modifier_Tiny_Grow *const this)
{
  this->_vptr_CDOTA_Buff = &off_43B25F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Tiny_Grow::IsHidden  (line 1256, @0x0000000002a61c90, libserver.so)
bool __fastcall CDOTA_Modifier_Tiny_Grow::IsHidden(CDOTA_Modifier_Tiny_Grow *const this)
{
  return 1;
}


// CDOTA_Modifier_Tiny_Grow::RemoveOnDeath  (line 1268, @0x0000000002a61ca0, libserver.so)
bool __fastcall CDOTA_Modifier_Tiny_Grow::RemoveOnDeath(CDOTA_Modifier_Tiny_Grow *const this)
{
  return 0;
}


// CDOTA_Modifier_Tiny_Grow::OnCreated  (line 1289, @0x0000000002a51740, libserver.so)  // inlines: FStrEq, GetUnitName, SetOriginalModel, String, ToCStr, _V_strcmp, operator=
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetParent, CDOTA_BaseNPC::ManageModelChanges, MakeEntitySystemString, CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_Buff::AddParticle, CDOTA_BaseNPC::StartGesture, CDOTA_BaseNPC::UnitEmitSound
// strings: "bonus_range_scepter", "cleave_starting_width", "cleave_ending_width", "cleave_distance", "bonus_cleave_damage_scepter", "bonus_building_damage_scepter" (10 total)
// globals: g_pszTinyModels
void __fastcall CDOTA_Modifier_Tiny_Grow::OnCreated(CDOTA_Modifier_Tiny_Grow *const this, KeyValues *pKV)
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
  CDOTA_BaseNPC *v12; // rax
  const char *m_pAsString; // rsi
  const char *v14; // r12
  CDOTA_BaseNPC *v15; // r13
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v19; // rax
  CDOTA_BaseNPC *v20; // r12
  CDOTA_ParticleManager *v21; // rax
  CDOTABaseAbility *v22; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v24; // rax
  UtlSymLargeId_t v25; // [rsp+10h] [rbp-30h]

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->bonus_damage, "bonus_damage");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->bonus_attack_speed, "bonus_attack_speed");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->bonus_movement_speed, "bonus_movement_speed");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &this->bonus_range_scepter, "bonus_range_scepter");
  v7 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v7, &this->cleave_starting_width, "cleave_starting_width");
  v8 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v8, &this->cleave_ending_width, "cleave_ending_width");
  v9 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v9, &this->cleave_distance, "cleave_distance");
  v10 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v10, &this->bonus_cleave_damage_scepter, "bonus_cleave_damage_scepter");
  v11 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v11, &this->bonus_building_damage_scepter, "bonus_building_damage_scepter");
  if ( !CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    ParticleManager = GetParticleManager();
    LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                        ParticleManager,
                        "particles/units/heroes/hero_tiny/tiny_transform.vpcf",
                        1,
                        Caster,
                        0,
                        0);
    v19 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v19, Caster);
    v20 = CDOTA_Buff::GetCaster(this);
    v21 = GetParticleManager();
    this->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(
                         v21,
                         "particles/units/heroes/hero_tiny/tiny_grow_hero_effect.vpcf",
                         2,
                         v20,
                         0,
                         0);
    v22 = CDOTA_Buff::GetAbility(this);
    CDOTA_Buff::AddParticle(this, this->m_nFXIndex, 0, 0, 10 * v22->m_iLevel.m_Value, 1, 0);
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::StartGesture(Parent, 1560, 0.2, 0.2, 9, 0, 1.0);
    v24 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::UnitEmitSound(v24, "Tiny.Grow", 0.0, 0, 0);
  }
  v12 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::ManageModelChanges(v12);
  m_pAsString = CDOTA_Buff::GetParent(this)->m_iszUnitName.m_Value.u.m_pAsString;
  if ( m_pAsString != 0 && (m_pAsString == "npc_dota_hero_tiny" || strcmp(m_pAsString, "npc_dota_hero_tiny") == 0) )
  {
    v14 = g_pszTinyModels[CDOTA_Buff::GetAbility(this)->m_iLevel.m_Value];
    v15 = CDOTA_Buff::GetParent(this);
    MakeEntitySystemString(v14);
    v15->m_iszOriginalModel.u.m_Id = v25;
  }
  v16 = CDOTA_Buff::GetParent(this);
  (*(v16->_vptr_IHandleEntity + 476))(v16, 1);
}


// CDOTA_Modifier_Tiny_Grow::OnRefresh  (line 1325, @0x0000000002a51a10, libserver.so)  // inlines: DOTAGameRules, FStrEq, GetUnitName, SetOriginalModel, String, ToCStr, _V_strcmp, operator=
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetParent, CDOTA_BaseNPC::StartGesture, CDOTA_BaseNPC::UnitEmitSound, GetParticleManager, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_Buff::GetCaster, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::AddParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_BaseNPC::ManageModelChanges (16 total)
// strings: "bonus_range_scepter", "cleave_starting_width", "cleave_ending_width", "cleave_distance", "bonus_cleave_damage_scepter", "bonus_building_damage_scepter" (13 total)
void __fastcall CDOTA_Modifier_Tiny_Grow::OnRefresh(CDOTA_Modifier_Tiny_Grow *const this, KeyValues *pKV)
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
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v13; // rax
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v16; // r12
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  CDOTA_BaseNPC *v19; // r12
  CDOTA_ParticleManager *v20; // rax
  CDOTABaseAbility *v21; // rax
  CDOTA_BaseNPC *v22; // r12
  CDOTA_ParticleManager *v23; // rax
  CDOTA_BaseNPC *v24; // r14
  CDOTA_ParticleManager *v25; // rax
  __int64 v26; // r13
  CDOTA_BaseNPC *v27; // r14
  CDOTA_ParticleManager *v28; // rax
  CDOTA_ParticleManager *v29; // rax
  CDOTA_BaseNPC *v30; // rax
  CDOTA_BaseNPC *v31; // r12
  CDOTA_BaseNPC *v32; // rax
  const char *m_pAsString; // rsi
  CDOTAGameManager *v34; // rax
  KeyValues *HeroDataByName; // rdi
  float v36; // xmm1_4
  CDOTA_BaseNPC *Caster; // r12
  void (__fastcall *v38)(CDOTA_BaseNPC *, float); // r13
  CDOTABaseAbility *v39; // rax
  vec_t fOriginalScale; // [rsp+Ch] [rbp-34h]
  float fOriginalScalea; // [rsp+Ch] [rbp-34h]
  UtlSymLargeId_t v42[6]; // [rsp+10h] [rbp-30h] BYREF
  Vector v43; // 0:xmm0_8.8,8:xmm1_4.4

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->bonus_damage, "bonus_damage");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->bonus_attack_speed, "bonus_attack_speed");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->bonus_movement_speed, "bonus_movement_speed");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &this->bonus_range_scepter, "bonus_range_scepter");
  v7 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v7, &this->cleave_starting_width, "cleave_starting_width");
  v8 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v8, &this->cleave_ending_width, "cleave_ending_width");
  v9 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v9, &this->cleave_distance, "cleave_distance");
  v10 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v10, &this->bonus_cleave_damage_scepter, "bonus_cleave_damage_scepter");
  v11 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v11, &this->bonus_building_damage_scepter, "bonus_building_damage_scepter");
  if ( !CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value )
  {
    if ( g_pGameRules != 0 && *&g_pGameRules[6].m_szQuestName[68] == 18 )
    {
      m_pAsString = CDOTA_Buff::GetCaster(this)->m_iszUnitName.m_Value.u.m_pAsString;
      if ( m_pAsString == 0 || m_pAsString != "npc_dota_hero_tiny" && strcmp(m_pAsString, "npc_dota_hero_tiny") != 0 )
      {
        v34 = DOTAGameManager();
        HeroDataByName = CDOTAGameManager::GetHeroDataByName(v34, "npc_dota_hero_tiny");
        if ( HeroDataByName != 0 )
        {
          fOriginalScalea = KeyValues::GetFloat(HeroDataByName, "ModelScale", v36);
          Caster = CDOTA_Buff::GetCaster(this);
          v38 = *(Caster->_vptr_IHandleEntity + 222);
          v39 = CDOTA_Buff::GetAbility(this);
          v38(Caster, ((v39->m_iLevel.m_Value * 0.1) + 1.0) * fOriginalScalea);
        }
      }
    }
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::StartGesture(Parent, 1560, 0.2, 0.2, 9, 0, 1.0);
    v13 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::UnitEmitSound(v13, "Tiny.Grow", 0.0, 0, 0);
    m_nFXIndex = this->m_nFXIndex;
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(ParticleManager, m_nFXIndex);
    v16 = CDOTA_Buff::GetCaster(this);
    v17 = GetParticleManager();
    LODWORD(v16) = CDOTA_ParticleManager::CreateParticle(
                     v17,
                     "particles/units/heroes/hero_tiny/tiny_transform.vpcf",
                     1,
                     v16,
                     0,
                     0);
    v18 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v18, v16);
    v19 = CDOTA_Buff::GetCaster(this);
    v20 = GetParticleManager();
    this->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(
                         v20,
                         "particles/units/heroes/hero_tiny/tiny_grow_hero_effect.vpcf",
                         2,
                         v19,
                         0,
                         0);
    v21 = CDOTA_Buff::GetAbility(this);
    CDOTA_Buff::AddParticle(this, this->m_nFXIndex, 0, 0, 10 * v21->m_iLevel.m_Value, 1, 0);
    v22 = CDOTA_Buff::GetCaster(this);
    v23 = GetParticleManager();
    LODWORD(v22) = CDOTA_ParticleManager::CreateParticle(
                     v23,
                     "particles/units/heroes/hero_tiny/tiny_eye_glow.vpcf",
                     2,
                     v22,
                     0,
                     0);
    v24 = CDOTA_Buff::GetCaster(this);
    v25 = GetParticleManager();
    v26 = *&vec3_invalid.x;
    fOriginalScale = vec3_invalid.z;
    CDOTA_ParticleManager::SetParticleControlEnt(v25, v22, 0, v24, 5, "attach_eye_r", vec3_invalid, 1);
    v27 = CDOTA_Buff::GetCaster(this);
    v28 = GetParticleManager();
    *&v43.x = v26;
    v43.z = fOriginalScale;
    CDOTA_ParticleManager::SetParticleControlEnt(v28, v22, 1, v27, 5, "attach_eye_l", v43, 1);
    v29 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v29, v22);
  }
  v30 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::ManageModelChanges(v30);
  v31 = CDOTA_Buff::GetParent(this);
  CBaseEntity::GetModelName(v42, v31);
  v31->m_iszOriginalModel.u.m_Id = v42[0];
  v32 = CDOTA_Buff::GetParent(this);
  (*(v32->_vptr_IHandleEntity + 476))(v32, 1);
}


// CDOTA_Modifier_Tiny_Grow::DeclareFunctions  (line 1376, @0x0000000002a403c0, libserver.so)  // inlines: FStrEq, GetUnitName, SetFunction, String, ToCStr, _V_strcmp
// calls: CDOTA_Buff::GetCaster
// strings: "npc_dota_hero_tiny"
void __fastcall CDOTA_Modifier_Tiny_Grow::DeclareFunctions(CDOTA_Modifier_Tiny_Grow *const this)
{
  const char *m_pAsString; // rsi

  this->m_Functions[3].__pfn = (&stru_10 + 697);
  this->m_Functions[3].__delta = 0;
  this->m_Functions[24].__pfn = (&stru_10 + 705);
  this->m_Functions[24].__delta = 0;
  this->m_Functions[11].__pfn = (&stru_10 + 713);
  this->m_Functions[11].__delta = 0;
  this->m_Functions[69].__pfn = (&stru_10 + 729);
  this->m_Functions[69].__delta = 0;
  m_pAsString = CDOTA_Buff::GetCaster(this)->m_iszUnitName.m_Value.u.m_pAsString;
  if ( m_pAsString != 0 && (m_pAsString == "npc_dota_hero_tiny" || strcmp(m_pAsString, "npc_dota_hero_tiny") == 0) )
  {
    this->m_Functions[152].__pfn = (&stru_10 + 721);
    this->m_Functions[152].__delta = 0;
  }
  this->m_Functions[121].__pfn = (&stru_10 + 737);
  this->m_Functions[121].__delta = 0;
  this->m_Functions[28].__pfn = (&stru_10 + 745);
  this->m_Functions[28].__delta = 0;
}


// CDOTA_Modifier_Tiny_Grow::GetModifierBaseAttack_BonusDamage  (line 1395, @0x0000000002a3f990, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Tiny_Grow::GetModifierBaseAttack_BonusDamage(
        CDOTA_Modifier_Tiny_Grow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Tiny_Grow::GetModifierAttackSpeedBonus_Constant  (line 1402, @0x0000000002a3f9b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Tiny_Grow::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Tiny_Grow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Tiny_Grow::GetModifierMoveSpeedBonus_Constant  (line 1409, @0x0000000002a3f9d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Tiny_Grow::GetModifierMoveSpeedBonus_Constant(
        CDOTA_Modifier_Tiny_Grow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Tiny_Grow::GetModifierAttackRangeBonus  (line 1416, @0x0000000002a42490, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::HasScepter
ModifierVariant_t __fastcall CDOTA_Modifier_Tiny_Grow::GetModifierAttackRangeBonus(
        CDOTA_Modifier_Tiny_Grow *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  bool HasScepter; // al
  __m128i v5; // xmm0
  unsigned __int64 v6; // rdx

  Parent = CDOTA_Buff::GetParent(this);
  HasScepter = CDOTA_BaseNPC::HasScepter(Parent);
  v6 = 1;
  if ( HasScepter )
  {
    *v5.m128i_i32 = this->bonus_range_scepter;
    return ((_mm_cvtsi128_si32(v5) << 32) | 1);
  }
  return v6;
}


// CDOTA_Modifier_Tiny_Grow::GetModifierModelChange  (line 1428, @0x0000000002a40390, libserver.so)
// calls: CDOTA_Buff::GetAbility
// globals: g_pszTinyModels
ModifierVariant_t __fastcall CDOTA_Modifier_Tiny_Grow::GetModifierModelChange(
        CDOTA_Modifier_Tiny_Grow *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = g_pszTinyModels[CDOTA_Buff::GetAbility(this)->m_iLevel.m_Value];
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_Tiny_Grow::OnAttackLanded  (line 1435, @0x0000000002a48e90, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTA_BaseNPC::FindModifierByName, CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetAbility, DoCleaveAttack
// strings: "modifier_monkey_king_boundless_strike_crit", "particles/units/heroes/hero_tiny/tiny_grow_cleave.vpcf"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Tiny_Grow::OnAttackLanded(
        CDOTA_Modifier_Tiny_Grow *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *Parent; // rax
  CEntityInstance *v11; // rax
  CEntityInstance *v12; // r13
  char m_CScriptComponent_high; // r14
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *v15; // rax
  float flCleaveDamage; // [rsp+0h] [rbp-30h]
  float flDistance; // [rsp+4h] [rbp-2Ch]
  float flEndingWidth; // [rsp+8h] [rbp-28h]
  float flStartingWidth; // [rsp+Ch] [rbp-24h]
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
          && !CDOTA_Buff::GetCaster(this)->m_bIsIllusion.m_Value )
        {
          Caster = CDOTA_Buff::GetCaster(this);
          if ( CDOTA_BaseNPC::HasScepter(Caster) )
          {
            Parent = CDOTA_Buff::GetParent(this);
            result.m_szVal = CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_monkey_king_boundless_strike_crit", 0);
            *&result.m_eType = 1;
            if ( result.m_szVal != 0 )
              goto LABEL_6;
            v11 = CEntityHandle::operator CEntityInstance *(&params->htarget);
            v12 = v11;
            if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
            {
              m_CScriptComponent_high = HIBYTE(v11[7].m_CScriptComponent);
              if ( m_CScriptComponent_high != CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value
                && (v12[43].m_iszPrivateVScripts.u.m_Id & 0x10) == 0 )
              {
                flDistance = this->cleave_distance;
                flEndingWidth = this->cleave_ending_width;
                flStartingWidth = this->cleave_starting_width;
                flCleaveDamage = (this->bonus_cleave_damage_scepter * params->fDamage) / 100.0;
                Ability = CDOTA_Buff::GetAbility(this);
                v15 = CDOTA_Buff::GetCaster(this);
                DoCleaveAttack(
                  v15,
                  v12,
                  Ability,
                  flCleaveDamage,
                  flStartingWidth,
                  flEndingWidth,
                  flDistance,
                  "particles/units/heroes/hero_tiny/tiny_grow_cleave.vpcf",
                  params);
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


// CDOTA_Modifier_Tiny_Grow::GetModifierDamageOutgoing_Percentage  (line 1460, @0x0000000002a459b0, libserver.so)  // inlines: AttackerNPC, FindModifierByName, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::HasScepter, ModifierFactoryDictionary, CModifieractoryDictionary::FindFactory, CDOTA_ModifierManager::FindModifierByName
// strings: "modifier_backdoor_protection_active"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Tiny_Grow::GetModifierDamageOutgoing_Percentage(
        CDOTA_Modifier_Tiny_Grow *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rbx
  uint32 v7; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTA_BaseNPC *v12; // rdi
  CModifieractoryDictionary *v13; // rax
  IModifierFactory *Factory; // rax
  __m128i v15; // xmm0
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->htarget.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  v7 = params->hattacker.m_Index;
  if ( v7 + 2 > 1
    && (m_Index_low = LOWORD(params->hattacker.m_Index),
        (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) != 0)
    && (v10 = &v9[m_Index_low & 0x1FF]) != 0
    && v7 == v10->m_EHandle.m_Index
    && (v12 = v10->m_pInstance, v10->m_pInstance != 0)
    && v12->m_bIsDOTANPC
    && m_pInstance != 0
    && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x10) != 0
    && v12->m_iTeamNum.m_Value != HIBYTE(m_pInstance[7].m_CScriptComponent)
    && !v12->m_bIsIllusion.m_Value
    && CDOTA_BaseNPC::HasScepter(v12)
    && (v13 = ModifierFactoryDictionary(),
        Factory = CModifieractoryDictionary::FindFactory(v13, "modifier_backdoor_protection_active"),
        CDOTA_ModifierManager::FindModifierByName(
          &m_pInstance[64].m_worldGroupId,
          Factory,
          "modifier_backdoor_protection_active",
          0) == 0) )
  {
    *v15.m128i_i32 = this->bonus_building_damage_scepter;
    *&result.m_eType = (_mm_cvtsi128_si32(v15) << 32) | 1;
  }
  else
  {
    *&result.m_eType = 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Tiny_Grow::GetPriority  (line 1493, @0x0000000002a3f9f0, libserver.so)
int __fastcall CDOTA_Modifier_Tiny_Grow::GetPriority(CDOTA_Modifier_Tiny_Grow *const this)
{
  return 0;
}


