// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_gyrocopter.cpp:34
class CDOTA_Unit_Hero_Gyrocopter : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Gyrocopter(CDOTA_Unit_Hero_Gyrocopter &);
	CDOTA_Unit_Hero_Gyrocopter(CDOTA_Unit_Hero_Gyrocopter &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual const char * GetDeathEffectName();
	virtual bool UsesConstantGesture(bool);
	virtual void Spawn(const CEntityKeyValues *);
	CDOTA_Unit_Hero_Gyrocopter();
	virtual ~CDOTA_Unit_Hero_Gyrocopter();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[6] Precache
	// vtable[502] GetDeathEffectName
	// vtable[380] UsesConstantGesture
	// vtable[8] Spawn
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_gyrocopter.cpp:65
class C_CDOTA_Unit_Hero_Gyrocopter_MapInstall {
	C_CDOTA_Unit_Hero_Gyrocopter_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_gyrocopter.cpp:88
class CDOTA_Ability_Gyrocopter_Rocket_Barrage : public CDOTABaseAbility {
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
	CDOTA_Ability_Gyrocopter_Rocket_Barrage(CDOTA_Ability_Gyrocopter_Rocket_Barrage &);
	CDOTA_Ability_Gyrocopter_Rocket_Barrage(CDOTA_Ability_Gyrocopter_Rocket_Barrage &);
	CDOTA_Ability_Gyrocopter_Rocket_Barrage();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual float GetAOERadius();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Gyrocopter_Rocket_Barrage();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[333] GetAOERadius
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_gyrocopter.cpp:100
class C_CDOTA_Ability_Gyrocopter_Rocket_Barrage_MapInstall {
	C_CDOTA_Ability_Gyrocopter_Rocket_Barrage_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_gyrocopter.cpp:153
class CDOTA_Modifier_Gyrocopter_Rocket_Barrage : public CDOTA_Buff {
public:

	CDOTA_Modifier_Gyrocopter_Rocket_Barrage();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void OnDestroy();
	virtual ~CDOTA_Modifier_Gyrocopter_Rocket_Barrage();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[60] OnDestroy
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_gyrocopter.cpp:229
class CDOTA_Modifier_Gyrocopter_Homing_Missile_ChargeCounter : public CDOTA_Buff {
public:

private:

	int max_charges;  // +0xba8
	float charge_restore_time;  // +0xbac
	bool m_bIsThinking;  // +0xbb0
	CDOTA_Modifier_Gyrocopter_Homing_Missile_ChargeCounter();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual bool IsPermanent();
	virtual bool DestroyOnExpire();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	void SetThinking(bool);
	bool IsThinking();
	virtual ~CDOTA_Modifier_Gyrocopter_Homing_Missile_ChargeCounter();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[23] IsPermanent
	// vtable[61] DestroyOnExpire
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_gyrocopter.cpp:328
class CDOTA_Ability_Gyrocopter_Homing_Missile : public CDOTABaseAbility {
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
	CDOTA_Ability_Gyrocopter_Homing_Missile(CDOTA_Ability_Gyrocopter_Homing_Missile &);
	CDOTA_Ability_Gyrocopter_Homing_Missile(CDOTA_Ability_Gyrocopter_Homing_Missile &);
	CDOTA_Ability_Gyrocopter_Homing_Missile();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual const char * GetIntrinsicModifierName();
	virtual bool IsRefreshable();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual float GetCooldown(int);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual ~CDOTA_Ability_Gyrocopter_Homing_Missile();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[280] GetIntrinsicModifierName
	// vtable[217] IsRefreshable
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// vtable[242] GetCooldown
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// vtable[304] GetAssociatedSecondaryAbilities
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_gyrocopter.cpp:360
class C_CDOTA_Ability_Gyrocopter_Homing_Missile_MapInstall {
	C_CDOTA_Ability_Gyrocopter_Homing_Missile_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_gyrocopter.cpp:498
class CDOTA_Modifier_Gyrocopter_Homing_Missile : public CDOTA_Buff, public CHorizontalMotionController {
public:

private:

	int m_nFXIndex;  // +0xbb4
	int hero_damage;  // +0xbb8
	int acceleration;  // +0xbbc
	int min_damage;  // +0xbc0
	int max_distance;  // +0xbc4
	int pre_flight_time;  // +0xbc8
	float stun_duration;  // +0xbcc
	int m_nMissileDamage;  // +0xbd0
	int m_nTeamNumber;  // +0xbd4
	float speed;  // +0xbd8
	EHANDLE m_hAttachTarget;  // +0xbdc

	CDOTA_Modifier_Gyrocopter_Homing_Missile();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	ModifierVariant_t GetAbsoluteNoDamagePhysical(const CModifierParams &);
	ModifierVariant_t GetAbsoluteNoDamageMagical(const CModifierParams &);
	ModifierVariant_t GetAbsoluteNoDamagePure(const CModifierParams &);
	ModifierVariant_t OnAttacked(const CModifierParams &);
	virtual void OnIntervalThink();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual bool IsMotionController();
	virtual ~CDOTA_Modifier_Gyrocopter_Homing_Missile();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// vtable[56] OnIntervalThink
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] OnHorizontalMotionInterrupted
	// vtable[91] IsHorizontalMotionValidToApply
	// vtable[21] IsMotionController
	// sizeof = 3104
};

// src/game/shared/dota/units/dota_unit_hero_gyrocopter.cpp:840
class CDOTA_Ability_Gyrocopter_Flak_Cannon : public CDOTABaseAbility {
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
	CDOTA_Ability_Gyrocopter_Flak_Cannon(CDOTA_Ability_Gyrocopter_Flak_Cannon &);
	CDOTA_Ability_Gyrocopter_Flak_Cannon(CDOTA_Ability_Gyrocopter_Flak_Cannon &);
	CDOTA_Ability_Gyrocopter_Flak_Cannon();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Gyrocopter_Flak_Cannon();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_gyrocopter.cpp:853
class C_CDOTA_Ability_Gyrocopter_Flak_Cannon_MapInstall {
	C_CDOTA_Ability_Gyrocopter_Flak_Cannon_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_gyrocopter.cpp:874
class CDOTA_Modifier_Gyrocopter_Flak_Cannon : public CDOTA_Buff {
public:

	int max_attacks;  // +0xba8
	int m_iNumAttacks;  // +0xbac
	int projectile_speed;  // +0xbb0
	int radius;  // +0xbb4
	CDOTA_Modifier_Gyrocopter_Flak_Cannon();
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttack(const CModifierParams &);
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Gyrocopter_Flak_Cannon();

	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_gyrocopter.cpp:978
class CDOTA_Modifier_Gyrocopter_Flak_Cannon_Scepter : public CDOTA_Buff {
public:

private:

	float fire_rate;  // +0xba8
	int scepter_radius;  // +0xbac
	CDOTA_Modifier_Gyrocopter_Flak_Cannon_Scepter();
	virtual bool IsPermanent();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Gyrocopter_Flak_Cannon_Scepter();

	// vtable[23] IsPermanent
	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_gyrocopter.cpp:1057
class CDOTA_Ability_Gyrocopter_Call_Down : public CDOTABaseAbility {
public:

private:

	int range_scepter;  // +0x390
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
	CDOTA_Ability_Gyrocopter_Call_Down(CDOTA_Ability_Gyrocopter_Call_Down &);
	CDOTA_Ability_Gyrocopter_Call_Down(CDOTA_Ability_Gyrocopter_Call_Down &);
	CDOTA_Ability_Gyrocopter_Call_Down();
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
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual bool OnAbilityPhaseStart();
	virtual void OnAbilityPhaseInterrupted();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Gyrocopter_Call_Down();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[333] GetAOERadius
	// vtable[266] OnSpellStart
	// vtable[226] GetCastRange
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[321] GetSlowDuration
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_gyrocopter.cpp:1078
class C_CDOTA_Ability_Gyrocopter_Call_Down_MapInstall {
	C_CDOTA_Ability_Gyrocopter_Call_Down_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_gyrocopter.cpp:1177
class CDOTA_Modifier_Gyrocopter_Call_Down : public CDOTA_Buff {
public:

private:

	int slow_duration_first;  // +0xba8
	int slow_duration_second;  // +0xbac
	int damage_first;  // +0xbb0
	int damage_second;  // +0xbb4
	int damage_second_scepter;  // +0xbb8
	int radius;  // +0xbbc
	float slow_first;  // +0xbc0
	float slow_second;  // +0xbc4
	bool m_bFirstStrike;  // +0xbc8
	CDOTA_Modifier_Gyrocopter_Call_Down();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Gyrocopter_Call_Down();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// sizeof = 3024
};

// src/game/shared/dota/units/dota_unit_hero_gyrocopter.cpp:1288
class CDOTA_Modifier_Gyrocopter_Call_Down_Slow : public CDOTA_Buff {
public:

private:

	int movespeed;  // +0xba8
	CDOTA_Modifier_Gyrocopter_Call_Down_Slow();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	virtual ~CDOTA_Modifier_Gyrocopter_Call_Down_Slow();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMoveSpeedBonus_Percentage
	// vtable[10] AddCustomTransmiterData
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Gyrocopter::~CDOTA_Unit_Hero_Gyrocopter  (line 34, @0x0000000002ba2ba0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Gyrocopter::~CDOTA_Unit_Hero_Gyrocopter(CDOTA_Unit_Hero_Gyrocopter *const this)
{
  this->_vptr_IHandleEntity = &off_44E64D0;
  this->_vptr_INextBotEventResponder = &off_44E74B0;
  this->_vptr_CObstructionObject = &off_44E77E0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Gyrocopter::~CDOTA_Unit_Hero_Gyrocopter  (line 34, @0x0000000002ba2be0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Gyrocopter
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Gyrocopter::~CDOTA_Unit_Hero_Gyrocopter(CDOTA_Unit_Hero_Gyrocopter *const this)
{
  this->_vptr_IHandleEntity = &off_44E64D0;
  this->_vptr_INextBotEventResponder = &off_44E74B0;
  this->_vptr_CObstructionObject = &off_44E77E0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Gyrocopter::Schema_DynamicBinding  (line 36, @0x0000000002b906e0, libserver.so)
// globals: CDOTA_Unit_Hero_Gyrocopter::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Gyrocopter::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Gyrocopter *const this)
{
  return CDOTA_Unit_Hero_Gyrocopter::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Gyrocopter::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 36, @0x0000000002b90710, libserver.so)
// globals: CDOTA_Unit_Hero_Gyrocopter::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Gyrocopter::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Gyrocopter::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Gyrocopter::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Gyrocopter::CEntityInstanceEntityClass::DestructInstance  (line 36, @0x0000000002b90720, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Gyrocopter>
void __fastcall CDOTA_Unit_Hero_Gyrocopter::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Gyrocopter::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Gyrocopter::CEntityInstanceEntityClass::FreeInstance  (line 36, @0x0000000002b90740, libserver.so)
void __fastcall CDOTA_Unit_Hero_Gyrocopter::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Gyrocopter::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Gyrocopter::CEntityInstanceEntityClass::CanAllocate  (line 36, @0x0000000002b90760, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Gyrocopter::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Gyrocopter::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Gyrocopter::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 36, @0x0000000002b90770, libserver.so)
// globals: CDOTA_Unit_Hero_Gyrocopter::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Gyrocopter::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Gyrocopter::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Gyrocopter::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Gyrocopter::CEntityInstanceEntityClass::AllocateInstance  (line 36, @0x0000000002b97d60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Gyrocopter::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Gyrocopter::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Gyrocopter::CEntityInstanceEntityClass::ConstructInstance  (line 36, @0x0000000002b9c6b0, libserver.so)  // inlines: CDOTA_Unit_Hero_Gyrocopter, Construct<CDOTA_Unit_Hero_Gyrocopter>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Gyrocopter::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Gyrocopter::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_44E64D0;
    *(p + 236) = &off_44E74B0;
    *(p + 257) = &off_44E77E0;
  }
  return p;
}


// CDOTA_Unit_Hero_Gyrocopter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 36, @0x0000000002bac010, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Gyrocopter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Gyrocopter::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Gyrocopter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 36, @0x0000000002bac3a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Gyrocopter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Gyrocopter::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Gyrocopter::GetEntityClassInternal  (line 36, @0x0000000002bceab0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "npc_dota_hero_gyrocopter", "CDOTA_Unit_Hero_Gyrocopter"
// globals: `guard variable for'CDOTA_Unit_Hero_Gyrocopter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_GyrocopterClass, CDOTA_Unit_Hero_Gyrocopter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_GyrocopterClass, __dso_handle, CDOTA_Unit_Hero_Gyrocopter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Gyrocopter::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_GyrocopterClassInfo, CDOTA_Unit_Hero_Gyrocopter::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_GyrocopterClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Gyrocopter::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Gyrocopter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_GyrocopterClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Gyrocopter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_GyrocopterClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Gyrocopter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_GyrocopterClass);
    CDOTA_Unit_Hero_Gyrocopter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_GyrocopterClass._vptr_CEntityClass = off_44E6450;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Gyrocopter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_GyrocopterClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Gyrocopter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Gyrocopter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_GyrocopterClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_GyrocopterClass != 0 )
    return &CDOTA_Unit_Hero_Gyrocopter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_GyrocopterClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Gyrocopter::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_GyrocopterClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Gyrocopter::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_GyrocopterClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Gyrocopter::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_GyrocopterClassInfo,
      "CDOTA_Unit_Hero_Gyrocopter",
      "npc_dota_hero_gyrocopter",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Gyrocopter::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_GyrocopterClassInfo);
  }
  CDOTA_Unit_Hero_Gyrocopter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_GyrocopterClass.m_pClassInfo = &CDOTA_Unit_Hero_Gyrocopter::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_GyrocopterClassInfo;
  CDOTA_Unit_Hero_Gyrocopter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_GyrocopterClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Gyrocopter::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_GyrocopterClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_GyrocopterClass = &CDOTA_Unit_Hero_Gyrocopter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_GyrocopterClass;
  CDOTA_Unit_Hero_Gyrocopter::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_GyrocopterClassInfo.m_pClass = &CDOTA_Unit_Hero_Gyrocopter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_GyrocopterClass;
  CDOTA_Unit_Hero_Gyrocopter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_GyrocopterClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_GyrocopterClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Gyrocopter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_GyrocopterClass;
}


// CDOTA_Unit_Hero_Gyrocopter::GetDeathEffectName  (line 41, @0x0000000002b90780, libserver.so)
// strings: "particles/units/heroes/hero_gyrocopter/gyro_death.vpcf"
const char *__fastcall CDOTA_Unit_Hero_Gyrocopter::GetDeathEffectName(CDOTA_Unit_Hero_Gyrocopter *const this)
{
  return "particles/units/heroes/hero_gyrocopter/gyro_death.vpcf";
}


// CDOTA_Unit_Hero_Gyrocopter::UsesConstantGesture  (line 43, @0x0000000002b90790, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Gyrocopter::UsesConstantGesture(CDOTA_Unit_Hero_Gyrocopter *const this, bool bPortrait)
{
  return 1;
}


// CDOTA_Unit_Hero_Gyrocopter::Spawn  (line 47, @0x0000000002ba2240, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Spawn, CDOTA_BaseNPC::FindAbilityByName, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "gyrocopter_flak_cannon", "modifier_gyrocopter_flak_cannon_scepter"
void __fastcall CDOTA_Unit_Hero_Gyrocopter::Spawn(
        CDOTA_Unit_Hero_Gyrocopter *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTABaseAbility *AbilityByName; // r13
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-28h]

  v5 = __readfsqword(0x28u);
  CDOTA_BaseNPC_Hero::Spawn(this, pKeyValues);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "gyrocopter_flak_cannon", 0);
  if ( AbilityByName != 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_gyrocopter_flak_cannon_scepter");
    CDOTA_BaseNPC::AddNewModifier(this, this, AbilityByName, "modifier_gyrocopter_flak_cannon_scepter", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Unit_Hero_Gyrocopter::YouForgotToImplementOrDeclareServerClass  (line 65, @0x0000000002b354d0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Gyrocopter::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_Gyrocopter *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Gyrocopter::GetServerClass  (line 65, @0x0000000002b4c820, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Gyrocopter::GetServerClass(CDOTA_Unit_Hero_Gyrocopter *const this)
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


// CDOTA_Unit_Hero_Gyrocopter::Precache  (line 72, @0x0000000002b3a150, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Precache, DOTA_PrecacheUnitByNameSync
// strings: "npc_dota_gyrocopter_homing_missile"
void __fastcall CDOTA_Unit_Hero_Gyrocopter::Precache(
        CDOTA_Unit_Hero_Gyrocopter *const this,
        const CEntityPrecacheContext *pContext)
{
  CDOTA_BaseNPC_Hero::Precache(this, pContext);
  DOTA_PrecacheUnitByNameSync("npc_dota_gyrocopter_homing_missile", pContext->m_pManifest, -1);
}


// CDOTA_Ability_Gyrocopter_Rocket_Barrage::~CDOTA_Ability_Gyrocopter_Rocket_Barrage  (line 88, @0x0000000002ba13f0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Gyrocopter_Rocket_Barrage::~CDOTA_Ability_Gyrocopter_Rocket_Barrage(
        CDOTA_Ability_Gyrocopter_Rocket_Barrage *const this)
{
  this->_vptr_IHandleEntity = &off_44E78B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Gyrocopter_Rocket_Barrage::~CDOTA_Ability_Gyrocopter_Rocket_Barrage  (line 88, @0x0000000002ba1410, libserver.so)  // inlines: ~CDOTA_Ability_Gyrocopter_Rocket_Barrage
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Gyrocopter_Rocket_Barrage::~CDOTA_Ability_Gyrocopter_Rocket_Barrage(
        CDOTA_Ability_Gyrocopter_Rocket_Barrage *const this)
{
  this->_vptr_IHandleEntity = &off_44E78B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Gyrocopter_Rocket_Barrage::Schema_DynamicBinding  (line 90, @0x0000000002b907a0, libserver.so)
// globals: CDOTA_Ability_Gyrocopter_Rocket_Barrage::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Gyrocopter_Rocket_Barrage::Schema_DynamicBinding(
        const CDOTA_Ability_Gyrocopter_Rocket_Barrage *const this)
{
  return CDOTA_Ability_Gyrocopter_Rocket_Barrage::s_pSchemaBinding;
}


// CDOTA_Ability_Gyrocopter_Rocket_Barrage::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 90, @0x0000000002b907b0, libserver.so)
// globals: CDOTA_Ability_Gyrocopter_Rocket_Barrage::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Gyrocopter_Rocket_Barrage::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Gyrocopter_Rocket_Barrage::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Gyrocopter_Rocket_Barrage::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Gyrocopter_Rocket_Barrage::CEntityInstanceEntityClass::DestructInstance  (line 90, @0x0000000002b907c0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Gyrocopter_Rocket_Barrage>
void __fastcall CDOTA_Ability_Gyrocopter_Rocket_Barrage::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Gyrocopter_Rocket_Barrage::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Gyrocopter_Rocket_Barrage::CEntityInstanceEntityClass::FreeInstance  (line 90, @0x0000000002b907e0, libserver.so)
void __fastcall CDOTA_Ability_Gyrocopter_Rocket_Barrage::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Gyrocopter_Rocket_Barrage::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Gyrocopter_Rocket_Barrage::CEntityInstanceEntityClass::CanAllocate  (line 90, @0x0000000002b90800, libserver.so)
bool __fastcall CDOTA_Ability_Gyrocopter_Rocket_Barrage::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Gyrocopter_Rocket_Barrage::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Gyrocopter_Rocket_Barrage::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 90, @0x0000000002b90810, libserver.so)
// globals: CDOTA_Ability_Gyrocopter_Rocket_Barrage::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Gyrocopter_Rocket_Barrage::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Gyrocopter_Rocket_Barrage::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Gyrocopter_Rocket_Barrage::s_pSchemaBinding;
}


// CDOTA_Ability_Gyrocopter_Rocket_Barrage::CEntityInstanceEntityClass::AllocateInstance  (line 90, @0x0000000002b97da0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Gyrocopter_Rocket_Barrage::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Gyrocopter_Rocket_Barrage::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Gyrocopter_Rocket_Barrage::CEntityInstanceEntityClass::ConstructInstance  (line 90, @0x0000000002b9d440, libserver.so)  // inlines: CDOTA_Ability_Gyrocopter_Rocket_Barrage, Construct<CDOTA_Ability_Gyrocopter_Rocket_Barrage>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Gyrocopter_Rocket_Barrage::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Gyrocopter_Rocket_Barrage::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44E78B0;
  }
  return p;
}


// CDOTA_Ability_Gyrocopter_Rocket_Barrage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 90, @0x0000000002baac00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Gyrocopter_Rocket_Barrage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Gyrocopter_Rocket_Barrage::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Gyrocopter_Rocket_Barrage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 90, @0x0000000002baac20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Gyrocopter_Rocket_Barrage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Gyrocopter_Rocket_Barrage::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetEntityClassInternal  (line 90, @0x0000000002bc92c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "gyrocopter_rocket_barrage", "CDOTA_Ability_Gyrocopter_Rocket_Barrage"
// globals: `guard variable for'CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Rocket_BarrageClass, CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Rocket_BarrageClass, __dso_handle, CDOTA_Ability_Gyrocopter_Rocket_Barrage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Gyrocopter_Rocket_BarrageClassInfo, CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Gyrocopter_Rocket_BarrageClassInfo
CEntityClass *__cdecl CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Rocket_BarrageClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Rocket_BarrageClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Rocket_BarrageClass);
    CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Rocket_BarrageClass._vptr_CEntityClass = off_44E7830;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Rocket_BarrageClass);
    __cxa_atexit(
      CDOTA_Ability_Gyrocopter_Rocket_Barrage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Rocket_BarrageClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Gyrocopter_Rocket_BarrageClass != 0 )
    return &CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Rocket_BarrageClass;
  if ( `guard variable for'CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Gyrocopter_Rocket_BarrageClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Gyrocopter_Rocket_BarrageClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Gyrocopter_Rocket_BarrageClassInfo,
      "CDOTA_Ability_Gyrocopter_Rocket_Barrage",
      "gyrocopter_rocket_barrage",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Gyrocopter_Rocket_BarrageClassInfo);
  }
  CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Rocket_BarrageClass.m_pClassInfo = &CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Gyrocopter_Rocket_BarrageClassInfo;
  CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Rocket_BarrageClass.m_pBaseClassInfo = CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Gyrocopter_Rocket_BarrageClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Gyrocopter_Rocket_BarrageClass = &CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Rocket_BarrageClass;
  CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Gyrocopter_Rocket_BarrageClassInfo.m_pClass = &CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Rocket_BarrageClass;
  CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Rocket_BarrageClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Gyrocopter_Rocket_BarrageClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Rocket_BarrageClass;
}


// CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetAOERadius  (line 96, @0x0000000002bc42e0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetAOERadius(
        CDOTA_Ability_Gyrocopter_Rocket_Barrage *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
}


// CDOTA_Ability_Gyrocopter_Rocket_Barrage::YouForgotToImplementOrDeclareServerClass  (line 100, @0x0000000002b354e0, libserver.so)
int __fastcall CDOTA_Ability_Gyrocopter_Rocket_Barrage::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Gyrocopter_Rocket_Barrage *const this)
{
  return 0;
}


// CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetServerClass  (line 100, @0x0000000002b4cce0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetServerClass(
        CDOTA_Ability_Gyrocopter_Rocket_Barrage *const this)
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


// CDOTA_Ability_Gyrocopter_Rocket_Barrage::OnSpellStart  (line 110, @0x0000000002b3a6e0, libserver.so)
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_gyrocopter_rocket_barrage", "Hero_Gyrocopter.Rocket_Barrage"
void __fastcall CDOTA_Ability_Gyrocopter_Rocket_Barrage::OnSpellStart(
        CDOTA_Ability_Gyrocopter_Rocket_Barrage *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_gyrocopter_rocket_barrage");
  CDOTABaseAbility::GetDuration(this);
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_gyrocopter_rocket_barrage", &kv, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v5, "Hero_Gyrocopter.Rocket_Barrage", 0.0, 0, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetAbilityDamageToTargetOverInterval  (line 123, @0x0000000002b6ba70, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Max<int>, Min<float>
// calls: CDOTABaseAbility::GetDuration, CDOTABaseAbility::GetLevelSpecialValueFor<int>, __cxa_guard_acquire, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::GetCaster, CDOTA_Bot::GetNearbyCreeps, CDOTA_Bot::GetNearbyHeroes, CDOTA_BaseNPC::GetArmorReductionForDamageType, __cxa_guard_release, __cxa_atexit
// strings: "rockets_per_second"
// globals: `guard variable for'CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities, CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities, __dso_handle, CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector()
__int64 __fastcall CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Gyrocopter_Rocket_Barrage *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v9; // rax
  float v10; // xmm1_4
  float m_Size; // xmm0_4
  float v12; // [rsp-Ch] [rbp-30h]
  float v13; // [rsp-8h] [rbp-2Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    v12 = fminf(fInterval, CDOTABaseAbility::GetDuration(this));
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 1);
    if ( `guard variable for'CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities) != 0 )
    {
      CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Size = 0;
      CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Memory.m_pMemory = 0;
      CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Memory.m_nAllocationCount = 0;
      CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Memory.m_nGrowSize = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities);
      __cxa_atexit(
        CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector,
        &CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities,
        &_dso_handle);
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities);
    if ( CDOTABaseAbility::GetCaster(this)->m_pBot != 0 )
    {
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTA_Bot::GetNearbyCreeps(
        Caster->m_pBot,
        DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
        &CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities,
        LevelSpecialValue);
      v9 = CDOTABaseAbility::GetCaster(this);
      CDOTA_Bot::GetNearbyHeroes(
        v9->m_pBot,
        DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
        &CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities,
        LevelSpecialValue);
    }
    v13 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "rockets_per_second", -1, 1) * v12;
    v10 = (*(this->_vptr_IHandleEntity + 247))(this) * v13;
    if ( CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Size <= 0 )
      m_Size = 1.0;
    else
      m_Size = CDOTA_Ability_Gyrocopter_Rocket_Barrage::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Size;
    return ((v10 / m_Size) * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Modifier_Gyrocopter_Rocket_Barrage::~CDOTA_Modifier_Gyrocopter_Rocket_Barrage  (line 153, @0x0000000002b9a9b0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Gyrocopter_Rocket_Barrage::~CDOTA_Modifier_Gyrocopter_Rocket_Barrage(
        CDOTA_Modifier_Gyrocopter_Rocket_Barrage *const this)
{
  this->_vptr_CDOTA_Buff = &off_44E8370;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Gyrocopter_Rocket_Barrage::~CDOTA_Modifier_Gyrocopter_Rocket_Barrage  (line 153, @0x0000000002b9a9d0, libserver.so)  // inlines: ~CDOTA_Modifier_Gyrocopter_Rocket_Barrage
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Gyrocopter_Rocket_Barrage::~CDOTA_Modifier_Gyrocopter_Rocket_Barrage(
        CDOTA_Modifier_Gyrocopter_Rocket_Barrage *const this)
{
  this->_vptr_CDOTA_Buff = &off_44E8370;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Gyrocopter_Rocket_Barrage::OnCreated  (line 167, @0x0000000002b38570, libserver.so)
// calls: CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::StartGesture
void __fastcall CDOTA_Modifier_Gyrocopter_Rocket_Barrage::OnCreated(
        CDOTA_Modifier_Gyrocopter_Rocket_Barrage *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax

  CDOTA_Buff::StartIntervalThink(this, 0.1, v2);
  Caster = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(Caster, 1516, 0.1, 0.1, 9, 0, 1.0);
}


// CDOTA_Modifier_Gyrocopter_Rocket_Barrage::OnDestroy  (line 177, @0x0000000002b38640, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::RemoveGesture
void __fastcall CDOTA_Modifier_Gyrocopter_Rocket_Barrage::OnDestroy(
        CDOTA_Modifier_Gyrocopter_Rocket_Barrage *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::RemoveGesture(Caster, 1516);
}


// CDOTA_Modifier_Gyrocopter_Rocket_Barrage::OnIntervalThink  (line 186, @0x0000000002b6fcb0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, DotaRetrieveAbilityValue<int>, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Purge, Random, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, RandomInt, CDOTA_Buff::GetParent, CDOTA_BaseNPC::UnitEmitSound, ApplyDamage, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt (17 total)
// strings: "rockets_per_second", "Hero_Gyrocopter.Rocket_Barrage.Launch", "Hero_Gyrocopter.Rocket_Barrage.Impact", "particles/units/heroes/hero_gyrocopter/gyro_rocket_barrage.vpcf", "attach_attack1", "attach_attack2" (7 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Gyrocopter_Rocket_Barrage::OnIntervalThink(
        CDOTA_Modifier_Gyrocopter_Rocket_Barrage *const this)
{
  int LevelSpecialValue; // r12d
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  __m128i v5; // xmm2
  float v6; // r15d
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_BaseNPC *v8; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v10; // rax
  CHandle<CBaseEntity> *v11; // rdx
  uint32 m_Index; // eax
  __int16 v13; // cx
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *v18; // rax
  __m128i v19; // xmm3
  float v20; // r15d
  CDOTABaseAbility *v21; // r14
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r14d
  CDOTA_BaseNPC *v26; // rax
  const char *v27; // r15
  CDOTA_BaseNPC *v28; // rbx
  CDOTA_ParticleManager *v29; // rax
  const Vector *v30; // rbx
  CDOTA_ParticleManager *v31; // rax
  CDOTA_ParticleManager *v32; // rax
  const Vector *v33; // [rsp+20h] [rbp-60h]
  int v34; // [rsp+2Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-50h] BYREF

  if ( (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 0x80000000) == 0 )
  {
    LevelSpecialValue = 0;
    Ability = CDOTA_Buff::GetAbility(this);
    if ( Ability != 0 )
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "rockets_per_second", -1, 0);
    *v5.m128i_i32 = LevelSpecialValue;
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    v6 = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
    Caster = CDOTA_Buff::GetCaster(this);
    v8 = CDOTA_Buff::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
    v10 = CDOTA_Buff::GetCaster(this);
    FindUnitsInRadius(v10->m_iTeamNum.m_Value, AbsOrigin, Caster, v6, &entities, 2, 19, 384, 0, 0);
    if ( entities.m_Size != 0 )
    {
      v11 = &entities.m_Memory.m_pMemory[RandomInt(0, (entities.m_Size - 1))];
      m_Index = v11->m_Index;
      if ( v11->m_Index + 2 <= 1
        || (v13 = v11->m_Index,
            (v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v11->m_Index) >> 9) & 0x3F]) == 0)
        || (v15 = &v14[v13 & 0x1FF]) == 0
        || m_Index != v15->m_EHandle.m_Index
        || (m_pInstance = v15->m_pInstance, v15->m_pInstance == 0)
        || !m_pInstance->m_bIsDOTANPC )
      {
        m_pInstance = 0;
      }
      Parent = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::UnitEmitSound(Parent, "Hero_Gyrocopter.Rocket_Barrage.Launch", 0.0, 0, 0);
      if ( m_pInstance != 0 )
      {
        v18 = CDOTA_Buff::GetAbility(this);
        *v19.m128i_i32 = (*(v18->_vptr_IHandleEntity + 247))(v18);
        v20 = COERCE_FLOAT(_mm_cvtsi128_si32(v19));
        v21 = CDOTA_Buff::GetAbility(this);
        v22 = CDOTA_Buff::GetCaster(this);
        ApplyDamage(v22, m_pInstance, v21, v20, 2, 0);
        CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Gyrocopter.Rocket_Barrage.Impact", 0.0, 0, 0);
        v23 = CDOTA_Buff::GetCaster(this);
        ParticleManager = GetParticleManager();
        Particle = CDOTA_ParticleManager::CreateParticle(
                     ParticleManager,
                     "particles/units/heroes/hero_gyrocopter/gyro_rocket_barrage.vpcf",
                     1,
                     v23,
                     0,
                     0);
        v34 = RandomInt(0, 1);
        v26 = CDOTA_Buff::GetCaster(this);
        v33 = CBaseEntity::GetAbsOrigin(v26);
        v27 = "attach_attack1";
        if ( v34 != 1 )
          v27 = "attach_attack2";
        v28 = CDOTA_Buff::GetCaster(this);
        v29 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v29, Particle, 0, v28, 5, v27, *v33, 1);
        v30 = CBaseEntity::GetAbsOrigin(m_pInstance);
        v31 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v31, Particle, 1, m_pInstance, 5, "attach_hitloc", *v30, 1);
        v32 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v32, Particle);
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


// CDOTA_Modifier_Gyrocopter_Homing_Missile_ChargeCounter::~CDOTA_Modifier_Gyrocopter_Homing_Missile_ChargeCounter  (line 229, @0x0000000002b9a960, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Gyrocopter_Homing_Missile_ChargeCounter::~CDOTA_Modifier_Gyrocopter_Homing_Missile_ChargeCounter(
        CDOTA_Modifier_Gyrocopter_Homing_Missile_ChargeCounter *const this)
{
  this->_vptr_CDOTA_Buff = &off_44E8690;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Gyrocopter_Homing_Missile_ChargeCounter::~CDOTA_Modifier_Gyrocopter_Homing_Missile_ChargeCounter  (line 229, @0x0000000002b9a980, libserver.so)  // inlines: ~CDOTA_Modifier_Gyrocopter_Homing_Missile_ChargeCounter
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Gyrocopter_Homing_Missile_ChargeCounter::~CDOTA_Modifier_Gyrocopter_Homing_Missile_ChargeCounter(
        CDOTA_Modifier_Gyrocopter_Homing_Missile_ChargeCounter *const this)
{
  this->_vptr_CDOTA_Buff = &off_44E8690;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Gyrocopter_Homing_Missile_ChargeCounter::IsHidden  (line 234, @0x0000000002b9dff0, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName
// strings: "special_bonus_unique_gyrocopter_1"
bool __fastcall CDOTA_Modifier_Gyrocopter_Homing_Missile_ChargeCounter::IsHidden(
        CDOTA_Modifier_Gyrocopter_Homing_Missile_ChargeCounter *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_gyrocopter_1", 0);
  return AbilityByName == 0 || AbilityByName->m_iLevel.m_Value <= 0;
}


// CDOTA_Modifier_Gyrocopter_Homing_Missile_ChargeCounter::IsPurgable  (line 243, @0x0000000002b90820, libserver.so)
bool __fastcall CDOTA_Modifier_Gyrocopter_Homing_Missile_ChargeCounter::IsPurgable(
        CDOTA_Modifier_Gyrocopter_Homing_Missile_ChargeCounter *const this)
{
  return 0;
}


// CDOTA_Modifier_Gyrocopter_Homing_Missile_ChargeCounter::IsPermanent  (line 244, @0x0000000002b90830, libserver.so)
bool __fastcall CDOTA_Modifier_Gyrocopter_Homing_Missile_ChargeCounter::IsPermanent(
        CDOTA_Modifier_Gyrocopter_Homing_Missile_ChargeCounter *const this)
{
  return 1;
}


// CDOTA_Modifier_Gyrocopter_Homing_Missile_ChargeCounter::DestroyOnExpire  (line 245, @0x0000000002b90840, libserver.so)
bool __fastcall CDOTA_Modifier_Gyrocopter_Homing_Missile_ChargeCounter::DestroyOnExpire(
        CDOTA_Modifier_Gyrocopter_Homing_Missile_ChargeCounter *const this)
{
  return 0;
}


// CDOTA_Modifier_Gyrocopter_Homing_Missile_ChargeCounter::OnCreated  (line 267, @0x0000000002b7e620, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "special_bonus_unique_gyrocopter_1", "charge_restore_time"
void __fastcall CDOTA_Modifier_Gyrocopter_Homing_Missile_ChargeCounter::OnCreated(
        CDOTA_Modifier_Gyrocopter_Homing_Missile_ChargeCounter *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *Ability; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_gyrocopter_1", 0);
  if ( AbilityByName != 0 )
    this->max_charges = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->charge_restore_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "charge_restore_time", -1, 0);
  else
    this->charge_restore_time = 0.0;
  (*(this->_vptr_CDOTA_Buff + 28))(this, this->max_charges);
  this->m_bIsThinking = 0;
}


// CDOTA_Modifier_Gyrocopter_Homing_Missile_ChargeCounter::OnRefresh  (line 285, @0x0000000002b6a1d0, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_gyrocopter_1"
void __fastcall CDOTA_Modifier_Gyrocopter_Homing_Missile_ChargeCounter::OnRefresh(
        CDOTA_Modifier_Gyrocopter_Homing_Missile_ChargeCounter *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_gyrocopter_1", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    this->max_charges = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
}


// CDOTA_Modifier_Gyrocopter_Homing_Missile_ChargeCounter::OnIntervalThink  (line 295, @0x0000000002b36fb0, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Gyrocopter_Homing_Missile_ChargeCounter::OnIntervalThink(
        CDOTA_Modifier_Gyrocopter_Homing_Missile_ChargeCounter *const this)
{
  float v2; // xmm1_4
  void (__fastcall *v3)(CDOTA_Modifier_Gyrocopter_Homing_Missile_ChargeCounter *const, __int64, float); // r12
  CDOTABaseAbility *Ability; // rax
  float v5; // xmm0_4
  CDOTABaseAbility *v6; // rax
  float v7; // xmm0_4
  float v8; // xmm1_4
  float charge_restore_time; // [rsp+Ch] [rbp-14h]
  float v10; // [rsp+Ch] [rbp-14h]

  if ( (*(this->_vptr_CDOTA_Buff + 27))(this) >= this->max_charges
    || ((*(this->_vptr_CDOTA_Buff + 25))(this), (*(this->_vptr_CDOTA_Buff + 27))(this) == this->max_charges) )
  {
    CDOTA_Buff::StartIntervalThink(this, -1.0, v2);
    this->m_bIsThinking = 0;
  }
  else
  {
    charge_restore_time = this->charge_restore_time;
    v3 = *(this->_vptr_CDOTA_Buff + 63);
    Ability = CDOTA_Buff::GetAbility(this);
    v5 = (*(Ability->_vptr_IHandleEntity + 243))(Ability, 0xFFFFFFFFLL);
    v3(this, 1, v5 * charge_restore_time);
    v10 = this->charge_restore_time;
    v6 = CDOTA_Buff::GetAbility(this);
    v7 = (*(v6->_vptr_IHandleEntity + 243))(v6, 0xFFFFFFFFLL);
    CDOTA_Buff::StartIntervalThink(this, v7 * v10, v8);
  }
}


// CDOTA_Ability_Gyrocopter_Homing_Missile::~CDOTA_Ability_Gyrocopter_Homing_Missile  (line 328, @0x0000000002ba1440, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Gyrocopter_Homing_Missile::~CDOTA_Ability_Gyrocopter_Homing_Missile(
        CDOTA_Ability_Gyrocopter_Homing_Missile *const this)
{
  this->_vptr_IHandleEntity = &off_44E89F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Gyrocopter_Homing_Missile::~CDOTA_Ability_Gyrocopter_Homing_Missile  (line 328, @0x0000000002ba1460, libserver.so)  // inlines: ~CDOTA_Ability_Gyrocopter_Homing_Missile
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Gyrocopter_Homing_Missile::~CDOTA_Ability_Gyrocopter_Homing_Missile(
        CDOTA_Ability_Gyrocopter_Homing_Missile *const this)
{
  this->_vptr_IHandleEntity = &off_44E89F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Gyrocopter_Homing_Missile::Schema_DynamicBinding  (line 330, @0x0000000002b90850, libserver.so)
// globals: CDOTA_Ability_Gyrocopter_Homing_Missile::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Gyrocopter_Homing_Missile::Schema_DynamicBinding(
        const CDOTA_Ability_Gyrocopter_Homing_Missile *const this)
{
  return CDOTA_Ability_Gyrocopter_Homing_Missile::s_pSchemaBinding;
}


// CDOTA_Ability_Gyrocopter_Homing_Missile::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 330, @0x0000000002b90860, libserver.so)
// globals: CDOTA_Ability_Gyrocopter_Homing_Missile::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Gyrocopter_Homing_Missile::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Gyrocopter_Homing_Missile::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Gyrocopter_Homing_Missile::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Gyrocopter_Homing_Missile::CEntityInstanceEntityClass::DestructInstance  (line 330, @0x0000000002b90870, libserver.so)  // inlines: Destruct<CDOTA_Ability_Gyrocopter_Homing_Missile>
void __fastcall CDOTA_Ability_Gyrocopter_Homing_Missile::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Gyrocopter_Homing_Missile::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Gyrocopter_Homing_Missile::CEntityInstanceEntityClass::FreeInstance  (line 330, @0x0000000002b90890, libserver.so)
void __fastcall CDOTA_Ability_Gyrocopter_Homing_Missile::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Gyrocopter_Homing_Missile::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Gyrocopter_Homing_Missile::CEntityInstanceEntityClass::CanAllocate  (line 330, @0x0000000002b908b0, libserver.so)
bool __fastcall CDOTA_Ability_Gyrocopter_Homing_Missile::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Gyrocopter_Homing_Missile::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Gyrocopter_Homing_Missile::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 330, @0x0000000002b908c0, libserver.so)
// globals: CDOTA_Ability_Gyrocopter_Homing_Missile::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Gyrocopter_Homing_Missile::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Gyrocopter_Homing_Missile::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Gyrocopter_Homing_Missile::s_pSchemaBinding;
}


// CDOTA_Ability_Gyrocopter_Homing_Missile::CEntityInstanceEntityClass::AllocateInstance  (line 330, @0x0000000002b97de0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Gyrocopter_Homing_Missile::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Gyrocopter_Homing_Missile::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Gyrocopter_Homing_Missile::CEntityInstanceEntityClass::ConstructInstance  (line 330, @0x0000000002b9d470, libserver.so)  // inlines: CDOTA_Ability_Gyrocopter_Homing_Missile, Construct<CDOTA_Ability_Gyrocopter_Homing_Missile>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Gyrocopter_Homing_Missile::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Gyrocopter_Homing_Missile::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44E89F0;
  }
  return p;
}


// CDOTA_Ability_Gyrocopter_Homing_Missile::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 330, @0x0000000002baac50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Gyrocopter_Homing_Missile::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Gyrocopter_Homing_Missile::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Gyrocopter_Homing_Missile::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 330, @0x0000000002baac70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Gyrocopter_Homing_Missile::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Gyrocopter_Homing_Missile::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Gyrocopter_Homing_Missile::GetEntityClassInternal  (line 330, @0x0000000002bc9410, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "gyrocopter_homing_missile", "CDOTA_Ability_Gyrocopter_Homing_Missile"
// globals: `guard variable for'CDOTA_Ability_Gyrocopter_Homing_Missile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Homing_MissileClass, CDOTA_Ability_Gyrocopter_Homing_Missile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Homing_MissileClass, __dso_handle, CDOTA_Ability_Gyrocopter_Homing_Missile::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Gyrocopter_Homing_Missile::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Gyrocopter_Homing_MissileClassInfo, CDOTA_Ability_Gyrocopter_Homing_Missile::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Gyrocopter_Homing_MissileClassInfo
CEntityClass *__cdecl CDOTA_Ability_Gyrocopter_Homing_Missile::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Gyrocopter_Homing_Missile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Homing_MissileClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Gyrocopter_Homing_Missile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Homing_MissileClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Gyrocopter_Homing_Missile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Homing_MissileClass);
    CDOTA_Ability_Gyrocopter_Homing_Missile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Homing_MissileClass._vptr_CEntityClass = off_44E8970;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Gyrocopter_Homing_Missile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Homing_MissileClass);
    __cxa_atexit(
      CDOTA_Ability_Gyrocopter_Homing_Missile::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Gyrocopter_Homing_Missile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Homing_MissileClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Gyrocopter_Homing_MissileClass != 0 )
    return &CDOTA_Ability_Gyrocopter_Homing_Missile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Homing_MissileClass;
  if ( `guard variable for'CDOTA_Ability_Gyrocopter_Homing_Missile::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Gyrocopter_Homing_MissileClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Gyrocopter_Homing_Missile::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Gyrocopter_Homing_MissileClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Gyrocopter_Homing_Missile::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Gyrocopter_Homing_MissileClassInfo,
      "CDOTA_Ability_Gyrocopter_Homing_Missile",
      "gyrocopter_homing_missile",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Gyrocopter_Homing_Missile::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Gyrocopter_Homing_MissileClassInfo);
  }
  CDOTA_Ability_Gyrocopter_Homing_Missile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Homing_MissileClass.m_pClassInfo = &CDOTA_Ability_Gyrocopter_Homing_Missile::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Gyrocopter_Homing_MissileClassInfo;
  CDOTA_Ability_Gyrocopter_Homing_Missile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Homing_MissileClass.m_pBaseClassInfo = CDOTA_Ability_Gyrocopter_Homing_Missile::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Gyrocopter_Homing_MissileClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Gyrocopter_Homing_MissileClass = &CDOTA_Ability_Gyrocopter_Homing_Missile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Homing_MissileClass;
  CDOTA_Ability_Gyrocopter_Homing_Missile::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Gyrocopter_Homing_MissileClassInfo.m_pClass = &CDOTA_Ability_Gyrocopter_Homing_Missile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Homing_MissileClass;
  CDOTA_Ability_Gyrocopter_Homing_Missile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Homing_MissileClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Gyrocopter_Homing_MissileClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Gyrocopter_Homing_Missile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Homing_MissileClass;
}


// CDOTA_Ability_Gyrocopter_Homing_Missile::GetIntrinsicModifierName  (line 336, @0x0000000002b908d0, libserver.so)
// strings: "modifier_gyrocopter_homing_missile_charge_counter"
const char *__fastcall CDOTA_Ability_Gyrocopter_Homing_Missile::GetIntrinsicModifierName(
        CDOTA_Ability_Gyrocopter_Homing_Missile *const this)
{
  const char *result; // rax

  result = 0;
  if ( !this->m_bReflection )
    return "modifier_gyrocopter_homing_missile_charge_counter";
  return result;
}


// CDOTA_Ability_Gyrocopter_Homing_Missile::IsRefreshable  (line 338, @0x0000000002b9dcb0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName
// strings: "special_bonus_unique_gyrocopter_1"
bool __fastcall CDOTA_Ability_Gyrocopter_Homing_Missile::IsRefreshable(
        CDOTA_Ability_Gyrocopter_Homing_Missile *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_gyrocopter_1", 0);
  return AbilityByName == 0 || AbilityByName->m_iLevel.m_Value <= 0;
}


// CDOTA_Ability_Gyrocopter_Homing_Missile::GetAssociatedSecondaryAbilities  (line 355, @0x0000000002b908f0, libserver.so)
// strings: "special_bonus_unique_gyrocopter_1"
const char *__fastcall CDOTA_Ability_Gyrocopter_Homing_Missile::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Gyrocopter_Homing_Missile *const this)
{
  return "special_bonus_unique_gyrocopter_1";
}


// CDOTA_Ability_Gyrocopter_Homing_Missile::YouForgotToImplementOrDeclareServerClass  (line 360, @0x0000000002b354f0, libserver.so)
int __fastcall CDOTA_Ability_Gyrocopter_Homing_Missile::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Gyrocopter_Homing_Missile *const this)
{
  return 0;
}


// CDOTA_Ability_Gyrocopter_Homing_Missile::GetServerClass  (line 360, @0x0000000002b4cae0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Gyrocopter_Homing_Missile::GetServerClass(
        CDOTA_Ability_Gyrocopter_Homing_Missile *const this)
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


// CDOTA_Ability_Gyrocopter_Homing_Missile::GetCooldown  (line 370, @0x0000000002b38830, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetCooldown
// strings: "special_bonus_unique_gyrocopter_1"
float __fastcall CDOTA_Ability_Gyrocopter_Homing_Missile::GetCooldown(
        CDOTA_Ability_Gyrocopter_Homing_Missile *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_gyrocopter_1", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    return 0.0;
  else
    return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Ability_Gyrocopter_Homing_Missile::CastFilterResult  (line 383, @0x0000000002b38a70, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::CastFilterResult
// strings: "modifier_gyrocopter_homing_missile_charge_counter"
int __fastcall CDOTA_Ability_Gyrocopter_Homing_Missile::CastFilterResult(
        CDOTA_Ability_Gyrocopter_Homing_Missile *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_gyrocopter_homing_missile_charge_counter", 0);
  if ( ModifierByName == 0 || (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName) != 0 )
    return CDOTABaseAbility::CastFilterResult(this, pTarget);
  else
    return 23;
}


// CDOTA_Ability_Gyrocopter_Homing_Missile::GetCustomCastError  (line 399, @0x0000000002b35500, libserver.so)
// strings: "dota_hud_error_gyrocopter_no_charges"
const char *__fastcall CDOTA_Ability_Gyrocopter_Homing_Missile::GetCustomCastError(
        CDOTA_Ability_Gyrocopter_Homing_Missile *const this,
        CDOTA_BaseNPC *pTarget)
{
  return "dota_hud_error_gyrocopter_no_charges";
}


// CDOTA_Ability_Gyrocopter_Homing_Missile::OnSpellStart  (line 406, @0x0000000002b67470, libserver.so)  // inlines: GetLevelSpecialValueFor<int>, GetTeamNumber, NormalizeInPlace, SetThinking, ToDOTABaseNPC, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-
// calls: CDOTABaseAbility::GetCursorTarget, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCaster, VectorNormalize, DOTA_Character_ScriptSpawn_Synchronous, KeyValues::KeyValues, KeyValues::SetPtr, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CBaseAnimating::SetBodygroup, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::FindModifierByName (19 total)
// strings: "npc_dota_gyrocopter_homing_missile", "modifier_gyrocopter_homing_missile", "special_bonus_unique_gyrocopter_1", "modifier_gyrocopter_homing_missile_charge_counter", "charge_restore_time"
void __fastcall CDOTA_Ability_Gyrocopter_Homing_Missile::OnSpellStart(
        CDOTA_Ability_Gyrocopter_Homing_Missile *const this)
{
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v3; // r12
  CBaseEntity *v4; // rax
  const Vector *AbsOrigin; // rax
  float x; // r13d
  float y; // r14d
  CDOTA_BaseNPC *Caster; // rax
  const Vector *v9; // rax
  vec_t v10; // xmm1_4
  vec_t v11; // xmm0_4
  CDOTA_BaseNPC *v12; // r14
  int m_Value; // r13d
  CDOTA_BaseNPC *v14; // rax
  const Vector *v15; // rax
  float v16; // xmm0_4
  CDOTA_BaseNPC *v17; // r14
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v22; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Buff *v24; // r12
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  const QAngle *AbsAngles; // rax
  int (**vptr_CDOTA_Buff)(...); // rax
  void (__fastcall *v29)(CDOTA_Ability_Gyrocopter_Homing_Missile *const); // r13
  float v30; // [rsp+4h] [rbp-7Ch]
  float v31; // [rsp+8h] [rbp-78h]
  float v32; // [rsp+Ch] [rbp-74h]
  float LevelSpecialValue; // [rsp+Ch] [rbp-74h]
  Vector vDirection; // [rsp+20h] [rbp-60h] BYREF
  __int64 v35; // [rsp+30h] [rbp-50h]
  vec_t z; // [rsp+38h] [rbp-48h]
  KeyValues kv; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v38; // [rsp+58h] [rbp-28h]
  Vector CursorPosition; // 0:kr00_12.12
  Vector v40; // 0:xmm0_8.8,8:xmm1_4.4

  v38 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    if ( CDOTABaseAbility::GetCursorTarget(this) != 0 )
    {
      v4 = CDOTABaseAbility::GetCursorTarget(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
      x = AbsOrigin->x;
      y = AbsOrigin->y;
    }
    else
    {
      CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
      x = CursorPosition.x;
      y = CursorPosition.y;
    }
    Caster = CDOTABaseAbility::GetCaster(this);
    v9 = CBaseEntity::GetAbsOrigin(Caster);
    v10 = x - v9->x;
    v11 = y - v9->y;
    vDirection.z = 0.0;
    vDirection.x = v10;
    vDirection.y = v11;
    if ( VectorNormalize(&vDirection) < 0.0099999998 )
    {
      v26 = CDOTABaseAbility::GetCaster(this);
      AbsAngles = CBaseEntity::GetAbsAngles(v26);
      AngleVectors(AbsAngles, &vDirection, 0, 0);
    }
    v12 = CDOTABaseAbility::GetCaster(this);
    m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
    v30 = vDirection.x * 150.0;
    v31 = vDirection.y * 150.0;
    v32 = 150.0 * vDirection.z;
    v14 = CDOTABaseAbility::GetCaster(this);
    v15 = CBaseEntity::GetAbsOrigin(v14);
    v16 = v30 + v15->x;
    *(&v35 + 1) = v31 + v15->y;
    v40.z = v32 + v15->z;
    *&v35 = v16;
    *&v40.x = v35;
    z = v40.z;
    v17 = DOTA_Character_ScriptSpawn_Synchronous("npc_dota_gyrocopter_homing_missile", m_Value, v12, 0, 0, v40);
    if ( v17 != 0 )
    {
      KeyValues::KeyValues(&kv, "modifier_gyrocopter_homing_missile");
      KeyValues::SetPtr(&kv, "target", v3);
      v18 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v17, v18, this, "modifier_gyrocopter_homing_missile", &kv, 0);
      KeyValues::~KeyValues(&kv);
    }
  }
  v19 = CDOTABaseAbility::GetCaster(this);
  CBaseAnimating::SetBodygroup(v19, 1, 0);
  v20 = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v20, "special_bonus_unique_gyrocopter_1", 0);
  if ( AbilityByName == 0 || AbilityByName->m_iLevel.m_Value <= 0 )
  {
    v25 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::FindModifierByName(v25, "modifier_gyrocopter_homing_missile_charge_counter", 0);
    return;
  }
  v22 = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(v22, "modifier_gyrocopter_homing_missile_charge_counter", 0);
  v24 = ModifierByName;
  if ( ModifierByName != 0 )
  {
    (*(ModifierByName->_vptr_CDOTA_Buff + 26))(ModifierByName);
    if ( (*(v24->_vptr_CDOTA_Buff + 27))(v24) != 0 )
    {
      if ( LOBYTE(v24[1].m_References.m_pHead) != 0 )
        return;
LABEL_16:
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "charge_restore_time", -1, 0);
      CDOTA_Buff::StartIntervalThink(v24, LevelSpecialValue, LevelSpecialValue);
      vptr_CDOTA_Buff = v24->_vptr_CDOTA_Buff;
      LOBYTE(v24[1].m_References.m_pHead) = 1;
      vptr_CDOTA_Buff[63](v24, 1, LevelSpecialValue);
      return;
    }
    v29 = *(this->_vptr_IHandleEntity + 241);
    (*(v24->_vptr_CDOTA_Buff + 33))(v24);
    v29(this);
    if ( LOBYTE(v24[1].m_References.m_pHead) == 0 )
      goto LABEL_16;
  }
}


// CDOTA_Ability_Gyrocopter_Homing_Missile::GetAbilityDamageToTargetOverInterval  (line 470, @0x0000000002b6a230, libserver.so)  // inlines: FastSqrt, Length2D, RemapValClamped, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, clamp<float, float>, operator-
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "min_damage"
__int64 __fastcall CDOTA_Ability_Gyrocopter_Homing_Missile::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Gyrocopter_Homing_Missile *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r13d
  int v8; // r14d
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *Caster; // rax
  const Vector *v11; // rax
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  __m128 v16; // xmm0
  __m128 v17; // xmm1
  float v18; // xmm2_4
  __m128 v19; // xmm0
  __m128 v20; // xmm1
  float v21; // [rsp-34h] [rbp-34h]
  float v22; // [rsp-30h] [rbp-30h]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "min_damage", -1, 1);
    v8 = (*(this->_vptr_IHandleEntity + 247))(this);
    v21 = LevelSpecialValue;
    v22 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "max_distance", -1, 1);
    AbsOrigin = CBaseEntity::GetAbsOrigin(pTarget);
    Caster = CDOTABaseAbility::GetCaster(this);
    v11 = CBaseEntity::GetAbsOrigin(Caster);
    v12 = v11->y - AbsOrigin->y;
    v13 = v8;
    v14 = ((v11->x - AbsOrigin->x) * (v11->x - AbsOrigin->x)) + (v12 * v12);
    v15 = 0.0;
    v16 = LODWORD(v14);
    v16.m128_f32[0] = fsqrt(v14);
    if ( v22 == 0.0 )
    {
      v19.m128_f32[0] = v16.m128_f32[0] - v22;
      v20 = _mm_cmple_ss(0LL, v19);
      LODWORD(v18) = _mm_andnot_ps(v20, LODWORD(v21)).m128_u32[0] | LODWORD(v13) & v20.m128_i32[0];
    }
    else
    {
      v16.m128_f32[0] = v16.m128_f32[0] / v22;
      if ( v16.m128_f32[0] >= 0.0 )
      {
        v17 = _mm_cmplt_ss(0x3F800000u, v16);
        LODWORD(v15) = _mm_andnot_ps(v17, v16).m128_u32[0] | v17.m128_i32[0] & 0x3F800000;
      }
      v18 = ((v13 - v21) * v15) + v21;
    }
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * v18);
  }
  return result;
}


// CDOTA_Ability_Gyrocopter_Homing_Missile::GetStunDuration  (line 489, @0x0000000002b75d00, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Gyrocopter_Homing_Missile::GetStunDuration(
        CDOTA_Ability_Gyrocopter_Homing_Missile *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_duration", -1, 1);
}


// CDOTA_Modifier_Gyrocopter_Homing_Missile::~CDOTA_Modifier_Gyrocopter_Homing_Missile  (line 498, @0x0000000002b9a8f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Gyrocopter_Homing_Missile::~CDOTA_Modifier_Gyrocopter_Homing_Missile(
        CDOTA_Modifier_Gyrocopter_Homing_Missile *const this)
{
  this->_vptr_CDOTA_Buff = &off_44E94B0;
  this->_vptr_CHorizontalMotionController = &off_44E97A0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Gyrocopter_Homing_Missile::~CDOTA_Modifier_Gyrocopter_Homing_Missile  (line 498, @0x0000000002b9a920, libserver.so)  // inlines: ~CDOTA_Modifier_Gyrocopter_Homing_Missile
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Gyrocopter_Homing_Missile::~CDOTA_Modifier_Gyrocopter_Homing_Missile(
        CDOTA_Modifier_Gyrocopter_Homing_Missile *const this)
{
  this->_vptr_CDOTA_Buff = &off_44E94B0;
  this->_vptr_CHorizontalMotionController = &off_44E97A0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Gyrocopter_Homing_Missile::IsHidden  (line 507, @0x0000000002b90900, libserver.so)
bool __fastcall CDOTA_Modifier_Gyrocopter_Homing_Missile::IsHidden(
        CDOTA_Modifier_Gyrocopter_Homing_Missile *const this)
{
  return 1;
}


// CDOTA_Modifier_Gyrocopter_Homing_Missile::IsHorizontalMotionValidToApply  (line 524, @0x0000000002b90910, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Gyrocopter_Homing_Missile::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_Gyrocopter_Homing_Missile *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Gyrocopter_Homing_Missile::IsMotionController  (line 526, @0x0000000002b90940, libserver.so)
bool __fastcall CDOTA_Modifier_Gyrocopter_Homing_Missile::IsMotionController(
        CDOTA_Modifier_Gyrocopter_Homing_Missile *const this)
{
  return 1;
}


// CDOTA_Modifier_Gyrocopter_Homing_Missile::OnCreated  (line 550, @0x0000000002b81a80, libserver.so)  // inlines: AssignTo, CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, DotaRetrieveAbilityValue<float>, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetSerialNumber, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, Start, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator!, operator-, operator->, operator=, operator=<float>, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetCaster, KeyValues::GetPtr, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::Destroy, __stack_chk_fail, CDOTALocomotor::ApplyHorizontalMotionController, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers (27 total)
// strings: "min_damage", "pre_flight_time", "particles/units/heroes/hero_gyrocopter/gyro_guided_missile_target.vpcf", "enemy_vision_time"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Gyrocopter_Homing_Missile::OnCreated(
        CDOTA_Modifier_Gyrocopter_Homing_Missile *const this,
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
  _QWORD *Ptr; // rax
  __int64 v13; // rdx
  int v14; // eax
  __int16 v15; // cx
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  CConcreteEntityList *v18; // rsi
  vec_t z; // xmm0_4
  uint32 m_Index; // eax
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // rdx
  CDOTA_BaseNPC *v23; // rax
  CDOTALocomotor *v24; // rax
  CDOTA_BaseNPC *Caster; // rax
  int OpposingTeamNumber; // eax
  CTeam *GlobalTeam; // rax
  CTeam *v28; // rax
  CBaseEntity *v29; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  int v31; // eax
  CDOTABaseAbility *v32; // rax
  __m128i v33; // xmm0
  double v34; // xmm1_8
  double v35; // xmm2_8
  double v36; // xmm4_8
  double v37; // xmm5_8
  double v38; // xmm6_8
  __m128i v39; // xmm3
  float v40; // r15d
  __m128i v41; // xmm0
  double v42; // xmm1_8
  double v43; // xmm2_8
  double v44; // xmm3_8
  __m128i v45; // xmm4
  float v46; // r15d
  CDOTA_BaseNPC *v47; // rax
  const Vector *v48; // r14
  const CBaseEntity *v49; // rax
  const Vector *v50; // rax
  vec_t v51; // xmm1_4
  vec_t v52; // xmm0_4
  CDOTA_BaseNPC *v53; // rax
  float v54; // [rsp+Ch] [rbp-1A4h]
  float pre_flight_time; // [rsp+Ch] [rbp-1A4h]
  int enemy_vision_time; // [rsp+1Ch] [rbp-194h] BYREF
  Vector vDirection; // [rsp+20h] [rbp-190h] BYREF
  QAngle Angles; // [rsp+30h] [rbp-180h] BYREF
  CReliableBroadcastRecipientFilter filter; // [rsp+40h] [rbp-170h] BYREF
  unsigned __int64 v60; // [rsp+178h] [rbp-38h]

  v60 = __readfsqword(0x28u);
  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->hero_damage, "hero_damage");
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
    this->speed = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "speed", -1, 0);
  else
    this->speed = 0.0;
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &this->acceleration, "acceleration");
  v7 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v7, &this->min_damage, "min_damage");
  v8 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v8, &this->max_distance, "max_distance");
  v9 = CDOTA_Buff::GetAbility(this);
  if ( v9 != 0 )
    this->stun_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v9, "stun_duration", -1, 0);
  else
    this->stun_duration = 0.0;
  v10 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v10, &this->pre_flight_time, "pre_flight_time");
  v11 = CDOTA_Buff::GetAbility(this);
  this->m_nMissileDamage = (*(v11->_vptr_IHandleEntity + 247))(v11);
  this->m_nTeamNumber = CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value;
  Ptr = KeyValues::GetPtr(pKV, "target", 0);
  if ( Ptr != 0 && (v13 = Ptr[1]) != 0 )
  {
    v14 = (*(v13 + 16) >> 15) - (*(v13 + 48) & 1);
    v15 = 0x7FFF;
    if ( *(v13 + 16) != -1 )
      v15 = *(v13 + 16) & 0x7FFF;
    LOWORD(this->m_hAttachTarget.m_Index) = v15 | this->m_hAttachTarget.m_Index & 0x8000;
    this->m_hAttachTarget.m_Index = (v14 << 15) | this->m_hAttachTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hAttachTarget.m_Index = -1;
  }
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v18 = CEntityHandle::gm_pEntityList;
  this->m_vStartPosition.x = AbsOrigin->x;
  this->m_vStartPosition.y = AbsOrigin->y;
  z = AbsOrigin->z;
  m_Index = this->m_hAttachTarget.m_Index;
  this->m_vStartPosition.z = z;
  if ( m_Index + 2 > 1
    && (v21 = v18->m_pIdentityChunks[(LOWORD(this->m_hAttachTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v22 = &v21[this->m_hAttachTarget.m_Index & 0x1FF]) != 0
    && m_Index == v22->m_EHandle.m_Index
    && v22->m_pInstance != 0
    && (v23 = CDOTA_Buff::GetParent(this),
        v24 = (*(v23->_vptr_IHandleEntity + 376))(v23),
        CDOTALocomotor::ApplyHorizontalMotionController(v24, &this->CHorizontalMotionController, 0)) )
  {
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB130;
    CRecipientFilter::MakeReliable(&filter);
    Caster = CDOTA_Buff::GetCaster(this);
    OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(Caster);
    GlobalTeam = GetGlobalTeam(OpposingTeamNumber);
    CRecipientFilter::RemoveRecipientsByTeam(&filter, GlobalTeam);
    v28 = GetGlobalTeam(1);
    CRecipientFilter::AddRecipientsByTeam(&filter, v28);
    v29 = CEntityHandle::operator CEntityInstance *(&this->m_hAttachTarget);
    ParticleManager = GetParticleManager();
    v31 = CDOTA_ParticleManager::CreateParticle(
            ParticleManager,
            "particles/units/heroes/hero_gyrocopter/gyro_guided_missile_target.vpcf",
            7,
            v29,
            &filter,
            0);
    CDOTA_Buff::AddParticle(this, v31, 0, 0, -1, 0, 0);
    v32 = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<int>(v32, &enemy_vision_time, "enemy_vision_time");
    v54 = enemy_vision_time;
    *v33.m128i_i32 = CountdownTimer::Now(&this->m_EnemyVision);
    v39 = v33;
    *v39.m128i_i32 = *v33.m128i_i32 + v54;
    v40 = COERCE_FLOAT(_mm_cvtsi128_si32(v39));
    if ( (*v33.m128i_i32 + v54) != this->m_EnemyVision.m_timestamp.m_Value )
    {
      (*(this->m_EnemyVision._vptr_CountdownTimer + 2))(&this->m_EnemyVision, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_EnemyVision.m_timestamp.m_Value = v40;
    }
    if ( v54 != this->m_EnemyVision.m_duration.m_Value )
    {
      (*(this->m_EnemyVision._vptr_CountdownTimer + 2))(
        &this->m_EnemyVision,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL,
        *v33.m128i_i64,
        v34,
        v35,
        *v39.m128i_i64,
        v36,
        v37,
        v38,
        v54);
      this->m_EnemyVision.m_duration.m_Value = v54;
    }
    pre_flight_time = this->pre_flight_time;
    *v41.m128i_i32 = CountdownTimer::Now(&this->m_MoveTime);
    v45 = v41;
    *v45.m128i_i32 = *v41.m128i_i32 + pre_flight_time;
    v46 = COERCE_FLOAT(_mm_cvtsi128_si32(v45));
    if ( (*v41.m128i_i32 + pre_flight_time) != this->m_MoveTime.m_timestamp.m_Value )
    {
      (*(this->m_MoveTime._vptr_CountdownTimer + 2))(&this->m_MoveTime, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_MoveTime.m_timestamp.m_Value = v46;
    }
    if ( pre_flight_time != this->m_MoveTime.m_duration.m_Value )
    {
      (*(this->m_MoveTime._vptr_CountdownTimer + 2))(
        &this->m_MoveTime,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL,
        *v41.m128i_i64,
        v42,
        v43,
        v44,
        *v45.m128i_i64,
        pre_flight_time);
      this->m_MoveTime.m_duration.m_Value = pre_flight_time;
    }
    v47 = CDOTA_Buff::GetCaster(this);
    v48 = CBaseEntity::GetAbsOrigin(v47);
    v49 = CEntityHandle::operator CEntityInstance *(&this->m_hAttachTarget);
    v50 = CBaseEntity::GetAbsOrigin(v49);
    v51 = v50->y - v48->y;
    v52 = v50->z - v48->z;
    vDirection.x = v50->x - v48->x;
    vDirection.y = v51;
    vDirection.z = v52;
    VectorNormalize(&vDirection);
    VectorAngles(&vDirection, &Angles);
    Angles.x = 0.0;
    v53 = CDOTA_Buff::GetParent(this);
    CBaseEntity::SetAbsAngles(v53, &Angles);
    this->m_nFXIndex = -1;
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Gyrocopter_Homing_Missile::OnDestroy  (line 616, @0x0000000002b3ad40, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::ForceKill, CBaseEntity::AddEffects, CDOTA_BaseNPC::UnitEmitSound, CDOTALocomotor::RemoveHorizontalMotionController, CDOTA_Buff::GetCaster, CBaseAnimating::SetBodygroup
// strings: "Hero_Gyrocopter.HomingMissile.Destroy"
void __fastcall CDOTA_Modifier_Gyrocopter_Homing_Missile::OnDestroy(
        CDOTA_Modifier_Gyrocopter_Homing_Missile *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTALocomotor *v6; // rax
  CDOTA_BaseNPC *Caster; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::ForceKill(Parent, 0);
  v3 = CDOTA_Buff::GetParent(this);
  CBaseEntity::AddEffects(v3, 32);
  v4 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(v4, "Hero_Gyrocopter.HomingMissile.Destroy", 0.0, 0, 0);
  v5 = CDOTA_Buff::GetParent(this);
  v6 = (*(v5->_vptr_IHandleEntity + 376))(v5);
  CDOTALocomotor::RemoveHorizontalMotionController(v6, &this->CHorizontalMotionController);
  if ( CDOTA_Buff::GetCaster(this) != 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    CBaseAnimating::SetBodygroup(Caster, 1, 1);
  }
}


// CDOTA_Modifier_Gyrocopter_Homing_Missile::CheckState  (line 645, @0x0000000002b3c740, libserver.so)  // inlines: Enable, IsElapsed
// calls: CountdownTimer::Now
void __fastcall CDOTA_Modifier_Gyrocopter_Homing_Missile::CheckState(
        CDOTA_Modifier_Gyrocopter_Homing_Missile *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0xE100200uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFF1EFFDFFLL;
  if ( CountdownTimer::Now(&this->m_EnemyVision) >= this->m_EnemyVision.m_timestamp.m_Value )
  {
    buffState->m_nEnabledStateMask |= 0x400uLL;
    buffState->m_nDisabledStateMask &= ~0x400uLL;
  }
}


// CDOTA_Modifier_Gyrocopter_Homing_Missile::UpdateHorizontalMotion  (line 664, @0x0000000002b48af0, libserver.so)  // inlines: FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetPaddedCollisionRadius, IndexToIdentity, IsElapsed, IsValid, Length2D, LookupEntity, RemapValClamped, ToDOTABaseNPC, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator-
// calls: CountdownTimer::Now, CDOTA_Buff::Destroy, CDOTA_Buff::GetParent, CDOTABody::StartAnimation, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle, GetProjectileAttachmentName, CBaseAnimating::GetAttachment, CBaseEntity::GetAbsOrigin, VectorNormalize (28 total)
// strings: "particles/units/heroes/hero_gyrocopter/gyro_guided_missile.vpcf", "attach_fuse", "Hero_Gyrocopter.HomingMissile.Target", "particles/units/heroes/hero_gyrocopter/gyro_guided_missile_explosion.vpcf", "attach_hitloc", "modifier_stunned"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Gyrocopter_Homing_Missile::UpdateHorizontalMotion(
        CDOTA_Modifier_Gyrocopter_Homing_Missile *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CDOTA_BaseNPC *Parent; // rax
  CDOTABody *v10; // rax
  CDOTA_BaseNPC *v11; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v13; // rax
  const CBaseAnimating *v14; // r14
  CDOTA_ParticleManager *v15; // rax
  CEntityInstance *m_pInstance; // r12
  const char *ProjectileAttachmentName; // r14
  const CBaseAnimating *v18; // rax
  const Vector *AbsOrigin; // rax
  float x; // xmm4_4
  float v21; // xmm3_4
  CDOTA_BaseNPC *v22; // rax
  const Vector *v23; // rax
  CDOTA_ParticleManager *v24; // rax
  int Particle; // r13d
  CDOTA_ParticleManager *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  CDOTABaseAbility *Ability; // rax
  float v29; // xmm1_4
  CDOTABaseAbility *v30; // r14
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v32; // rax
  const Vector *v33; // rax
  __m128i v34; // xmm7
  float v35; // xmm1_4
  float v36; // xmm0_4
  int v37; // edx
  int min_damage; // eax
  float v39; // r15d
  CDOTABaseAbility *v40; // r14
  CDOTA_BaseNPC *v41; // rax
  const Vector *v42; // rax
  float v43; // xmm0_4
  float v44; // xmm2_4
  float y; // [rsp+10h] [rbp-A0h]
  float m_nMissileDamage; // [rsp+10h] [rbp-A0h]
  float v47; // [rsp+14h] [rbp-9Ch]
  float z; // [rsp+18h] [rbp-98h]
  float max_distance; // [rsp+18h] [rbp-98h]
  Vector vecOrigin; // [rsp+20h] [rbp-90h] BYREF
  QAngle Angles; // [rsp+30h] [rbp-80h] BYREF
  Vector vDirection; // [rsp+40h] [rbp-70h] BYREF
  Vector vOrigin; // [rsp+50h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v56; // [rsp+78h] [rbp-38h]

  v56 = __readfsqword(0x28u);
  if ( CountdownTimer::Now(&this->m_MoveTime) >= this->m_MoveTime.m_timestamp.m_Value )
  {
    if ( this->m_nFXIndex == -1 )
    {
      Parent = CDOTA_Buff::GetParent(this);
      v10 = (*(Parent->_vptr_IHandleEntity + 377))(Parent);
      CDOTABody::StartAnimation(v10, 0x5DEu, 0, 1.0);
      v11 = CDOTA_Buff::GetParent(this);
      ParticleManager = GetParticleManager();
      this->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(
                           ParticleManager,
                           "particles/units/heroes/hero_gyrocopter/gyro_guided_missile.vpcf",
                           2,
                           v11,
                           0,
                           0);
      v13 = CDOTA_Buff::GetParent(this);
      LODWORD(v11) = this->m_nFXIndex;
      v14 = v13;
      v15 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v15, v11, 0, v14, 5, "attach_fuse", vec3_invalid, 1);
      CDOTA_Buff::AddParticle(this, this->m_nFXIndex, 0, 0, -1, 0, 0);
    }
    m_Index = this->m_hAttachTarget.m_Index;
    if ( m_Index + 2 > 1
      && (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAttachTarget.m_Index) >> 9) & 0x3F]) != 0
      && (v8 = &v7[this->m_hAttachTarget.m_Index & 0x1FF]) != 0
      && m_Index == v8->m_EHandle.m_Index
      && (m_pInstance = v8->m_pInstance, v8->m_pInstance != 0)
      && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
      && (*(m_pInstance->_vptr_IHandleEntity + 408))(v8->m_pInstance) != 0 )
    {
      ProjectileAttachmentName = GetProjectileAttachmentName(3);
      v18 = (*(m_pInstance->_vptr_IHandleEntity + 43))(m_pInstance);
      CBaseAnimating::GetAttachment(v18, ProjectileAttachmentName, &vecOrigin);
      AbsOrigin = CBaseEntity::GetAbsOrigin(me);
      x = AbsOrigin->x;
      y = AbsOrigin->y;
      vecOrigin.z = AbsOrigin->z;
      v47 = x;
      vDirection.y = vecOrigin.y - y;
      z = vecOrigin.z;
      vDirection.x = vecOrigin.x - x;
      vDirection.z = vecOrigin.z - vecOrigin.z;
      VectorNormalize(&vDirection);
      VectorAngles(&vDirection, &Angles);
      Angles.x = 0.0;
      CBaseEntity::SetAbsAngles(me, &Angles);
      v21 = a3 * this->speed;
      vOrigin.y = (vDirection.y * v21) + y;
      vOrigin.z = (vDirection.z * v21) + z;
      vOrigin.x = (v21 * vDirection.x) + v47;
      CBaseEntity::SetAbsOrigin(me, &vOrigin);
      v22 = CDOTA_Buff::GetParent(this);
      v23 = CBaseEntity::GetAbsOrigin(v22);
      if ( ((*(&m_pInstance[48]._vptr_IHandleEntity + 1) + *&m_pInstance[48].m_pEntity)
          + (*(&m_pInstance[48]._vptr_IHandleEntity + 1) + *&m_pInstance[48].m_pEntity)) >= fsqrt(
                                                                                              ((v23->x - vecOrigin.x)
                                                                                             * (v23->x - vecOrigin.x))
                                                                                            + ((v23->y - vecOrigin.y)
                                                                                             * (v23->y - vecOrigin.y))) )
      {
        if ( (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 2) == 0
          && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) != 0 )
        {
          Ability = CDOTA_Buff::GetAbility(this);
          if ( !CDOTA_BaseNPC::TriggerSpellAbsorb(m_pInstance, Ability, 1) )
          {
            KeyValues::KeyValues(&kv, "modifier_stunned");
            KeyValues::SetFloat(&kv, "duration", v29);
            v30 = CDOTA_Buff::GetAbility(this);
            Caster = CDOTA_Buff::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(m_pInstance, Caster, v30, "modifier_stunned", &kv, 0);
            m_nMissileDamage = this->m_nMissileDamage;
            max_distance = this->max_distance;
            v32 = CDOTA_Buff::GetParent(this);
            v33 = CBaseEntity::GetAbsOrigin(v32);
            v35 = v33->y - this->m_vStartPosition.y;
            v36 = fsqrt(((v33->x - this->m_vStartPosition.x) * (v33->x - this->m_vStartPosition.x)) + (v35 * v35));
            if ( max_distance == 0.0 )
            {
              v37 = 0;
              if ( (v36 - max_distance) >= 0.0 )
                v37 = m_nMissileDamage;
            }
            else
            {
              v43 = v36 / max_distance;
              v44 = 0.0;
              if ( v43 >= 0.0 )
                v44 = fminf(1.0, v43);
              v37 = ((v44 * m_nMissileDamage) + 0.0);
            }
            min_damage = this->min_damage;
            if ( v37 >= min_damage )
              min_damage = v37;
            *v34.m128i_i32 = min_damage;
            v39 = COERCE_FLOAT(_mm_cvtsi128_si32(v34));
            v40 = CDOTA_Buff::GetAbility(this);
            v41 = CDOTA_Buff::GetCaster(this);
            ApplyDamage(v41, m_pInstance, v40, v39, 2, 0);
            v42 = CBaseEntity::GetAbsOrigin(m_pInstance);
            CDOTAFogOfWarSystem::AddTempViewer(
              &g_DOTAFogOfWarSystem,
              FoWViewerType_t::FOWVIEWERTYPE_HOMINGMISSILE,
              this->m_nTeamNumber,
              v42,
              400.0,
              3.4000001,
              0);
            KeyValues::~KeyValues(&kv);
          }
        }
        CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Gyrocopter.HomingMissile.Target", 0.0, 0, 0);
        v24 = GetParticleManager();
        Particle = CDOTA_ParticleManager::CreateParticle(
                     v24,
                     "particles/units/heroes/hero_gyrocopter/gyro_guided_missile_explosion.vpcf",
                     2,
                     m_pInstance,
                     0,
                     0);
        v26 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v26, Particle, 0, m_pInstance, 5, "attach_hitloc", vec3_invalid, 1);
        v27 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v27, Particle);
        CDOTA_Buff::Destroy(this, 0, 0, 0);
      }
      this->speed = (this->acceleration * a3) + this->speed;
    }
    else
    {
      CDOTA_Buff::Destroy(this, 0, 0, 0);
    }
  }
}


// CDOTA_Modifier_Gyrocopter_Homing_Missile::OnHorizontalMotionInterrupted  (line 738, @0x0000000002b377e0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::Destroy
// strings: "modifier_gyrocopter_homing_missile"
void __fastcall CDOTA_Modifier_Gyrocopter_Homing_Missile::OnHorizontalMotionInterrupted(
        CDOTA_Modifier_Gyrocopter_Homing_Missile *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  float v3; // xmm1_4

  Parent = CDOTA_Buff::GetParent(this);
  if ( CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_gyrocopter_homing_missile", 0) != 0 )
    CDOTA_Buff::StartIntervalThink(this, 0.0, v3);
  else
    CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Gyrocopter_Homing_Missile::OnIntervalThink  (line 754, @0x0000000002b471b0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::Destroy, CDOTALocomotor::ApplyHorizontalMotionController
// strings: "modifier_item_forcestaff_active", "modifier_item_hurricane_pike_active", "modifier_item_hurricane_pike_active_alternate"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Gyrocopter_Homing_Missile::OnIntervalThink(
        CDOTA_Modifier_Gyrocopter_Homing_Missile *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // rax
  uint32 m_Index; // ecx
  CEntityIdentity *v6; // rax
  CEntityIdentity *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTALocomotor *v9; // rax

  Parent = CDOTA_Buff::GetParent(this);
  if ( CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_item_forcestaff_active", 0) == 0 )
  {
    v3 = CDOTA_Buff::GetParent(this);
    if ( CDOTA_BaseNPC::FindModifierByName(v3, "modifier_item_hurricane_pike_active", 0) == 0 )
    {
      v4 = CDOTA_Buff::GetParent(this);
      if ( CDOTA_BaseNPC::FindModifierByName(v4, "modifier_item_hurricane_pike_active_alternate", 0) == 0 )
      {
        m_Index = this->m_hAttachTarget.m_Index;
        if ( m_Index + 2 <= 1
          || (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAttachTarget.m_Index) >> 9) & 0x3F]) == 0
          || (v7 = &v6[this->m_hAttachTarget.m_Index & 0x1FF]) == 0
          || m_Index != v7->m_EHandle.m_Index
          || v7->m_pInstance == 0
          || (v8 = CDOTA_Buff::GetParent(this),
              v9 = (*(v8->_vptr_IHandleEntity + 376))(v8),
              !CDOTALocomotor::ApplyHorizontalMotionController(v9, &this->CHorizontalMotionController, 0)) )
        {
          CDOTA_Buff::Destroy(this, 0, 0, 0);
        }
      }
    }
  }
}


// CDOTA_Modifier_Gyrocopter_Homing_Missile::DeclareFunctions  (line 771, @0x0000000002b35510, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Gyrocopter_Homing_Missile::GetAbsoluteNoDamagePhysical(CModifierParams const&), CDOTA_Modifier_Gyrocopter_Homing_Missile::GetAbsoluteNoDamageMagical(CModifierParams const&), CDOTA_Modifier_Gyrocopter_Homing_Missile::GetAbsoluteNoDamagePure(CModifierParams const&), CDOTA_Modifier_Gyrocopter_Homing_Missile::OnAttacked(CModifierParams const&)
void __fastcall CDOTA_Modifier_Gyrocopter_Homing_Missile::DeclareFunctions(
        CDOTA_Modifier_Gyrocopter_Homing_Missile *const this)
{
  this->m_Functions[103].__pfn = CDOTA_Modifier_Gyrocopter_Homing_Missile::GetAbsoluteNoDamagePhysical;
  this->m_Functions[103].__delta = 0;
  this->m_Functions[104].__delta = 0;
  this->m_Functions[104].__pfn = CDOTA_Modifier_Gyrocopter_Homing_Missile::GetAbsoluteNoDamageMagical;
  this->m_Functions[105].__pfn = CDOTA_Modifier_Gyrocopter_Homing_Missile::GetAbsoluteNoDamagePure;
  this->m_Functions[105].__delta = 0;
  this->m_Functions[137].__pfn = CDOTA_Modifier_Gyrocopter_Homing_Missile::OnAttacked;
  this->m_Functions[137].__delta = 0;
}


// CDOTA_Modifier_Gyrocopter_Homing_Missile::GetAbsoluteNoDamagePhysical  (line 781, @0x0000000002b35580, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Gyrocopter_Homing_Missile::GetAbsoluteNoDamagePhysical(
        CDOTA_Modifier_Gyrocopter_Homing_Missile *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Gyrocopter_Homing_Missile::GetAbsoluteNoDamageMagical  (line 788, @0x0000000002b355a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Gyrocopter_Homing_Missile::GetAbsoluteNoDamageMagical(
        CDOTA_Modifier_Gyrocopter_Homing_Missile *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Gyrocopter_Homing_Missile::GetAbsoluteNoDamagePure  (line 795, @0x0000000002b355c0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Gyrocopter_Homing_Missile::GetAbsoluteNoDamagePure(
        CDOTA_Modifier_Gyrocopter_Homing_Missile *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Gyrocopter_Homing_Missile::OnAttacked  (line 802, @0x0000000002b48840, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth, CDOTA_BaseNPC::ModifyHealth, CDOTA_BaseNPC::Kill, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Gyrocopter_Homing_Missile::OnAttacked(
        CDOTA_Modifier_Gyrocopter_Homing_Missile *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // ecx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CDOTA_BaseNPC *v12; // r13
  uint32 m_iUnitType; // edx
  int hero_damage; // ebx
  int v15; // eax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v17; // rax
  int Health; // r13d
  CDOTA_BaseNPC *v19; // rax
  CDOTA_BaseNPC *v20; // rax

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
                if ( v11->m_pInstance != 0 && v12->m_bIsDOTANPC )
                {
                  if ( (v12->m_iUnitType & 5) != 0 )
                  {
                    LOBYTE(m_iUnitType) = v12->m_iUnitType;
                  }
                  else
                  {
                    if ( (*(v12->_vptr_IHandleEntity + 406))(v12) == 0 )
                      return 1uLL;
                    m_iUnitType = v12->m_iUnitType;
                  }
                  hero_damage = this->hero_damage;
                  v15 = hero_damage;
                  if ( (m_iUnitType & 4) == 0 )
                  {
                    if ( (*(v12->_vptr_IHandleEntity + 406))(v12) == 0 )
                    {
LABEL_19:
                      Parent = CDOTA_Buff::GetParent(this);
                      if ( CBaseEntity::GetHealth(Parent) - hero_damage <= 0 )
                      {
                        v20 = CDOTA_Buff::GetParent(this);
                        CDOTA_BaseNPC::Kill(v20, 0, v12, 0.0, 0);
                        CDOTA_Buff::Destroy(this, 0, 0, 0);
                      }
                      else
                      {
                        v17 = CDOTA_Buff::GetParent(this);
                        Health = CBaseEntity::GetHealth(v17);
                        v19 = CDOTA_Buff::GetParent(this);
                        CDOTA_BaseNPC::ModifyHealth(v19, Health - hero_damage, 0, 1, 0);
                      }
                      return 1uLL;
                    }
                    v15 = this->hero_damage;
                  }
                  hero_damage = v15 / 2;
                  goto LABEL_19;
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


// CDOTA_Ability_Gyrocopter_Flak_Cannon::~CDOTA_Ability_Gyrocopter_Flak_Cannon  (line 840, @0x0000000002ba1490, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Gyrocopter_Flak_Cannon::~CDOTA_Ability_Gyrocopter_Flak_Cannon(
        CDOTA_Ability_Gyrocopter_Flak_Cannon *const this)
{
  this->_vptr_IHandleEntity = &off_44E9870;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Gyrocopter_Flak_Cannon::~CDOTA_Ability_Gyrocopter_Flak_Cannon  (line 840, @0x0000000002ba14b0, libserver.so)  // inlines: ~CDOTA_Ability_Gyrocopter_Flak_Cannon
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Gyrocopter_Flak_Cannon::~CDOTA_Ability_Gyrocopter_Flak_Cannon(
        CDOTA_Ability_Gyrocopter_Flak_Cannon *const this)
{
  this->_vptr_IHandleEntity = &off_44E9870;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Gyrocopter_Flak_Cannon::Schema_DynamicBinding  (line 842, @0x0000000002b90950, libserver.so)
// globals: CDOTA_Ability_Gyrocopter_Flak_Cannon::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Gyrocopter_Flak_Cannon::Schema_DynamicBinding(
        const CDOTA_Ability_Gyrocopter_Flak_Cannon *const this)
{
  return CDOTA_Ability_Gyrocopter_Flak_Cannon::s_pSchemaBinding;
}


// CDOTA_Ability_Gyrocopter_Flak_Cannon::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 842, @0x0000000002b90960, libserver.so)
// globals: CDOTA_Ability_Gyrocopter_Flak_Cannon::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Gyrocopter_Flak_Cannon::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Gyrocopter_Flak_Cannon::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Gyrocopter_Flak_Cannon::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Gyrocopter_Flak_Cannon::CEntityInstanceEntityClass::DestructInstance  (line 842, @0x0000000002b90970, libserver.so)  // inlines: Destruct<CDOTA_Ability_Gyrocopter_Flak_Cannon>
void __fastcall CDOTA_Ability_Gyrocopter_Flak_Cannon::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Gyrocopter_Flak_Cannon::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Gyrocopter_Flak_Cannon::CEntityInstanceEntityClass::FreeInstance  (line 842, @0x0000000002b90990, libserver.so)
void __fastcall CDOTA_Ability_Gyrocopter_Flak_Cannon::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Gyrocopter_Flak_Cannon::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Gyrocopter_Flak_Cannon::CEntityInstanceEntityClass::CanAllocate  (line 842, @0x0000000002b909b0, libserver.so)
bool __fastcall CDOTA_Ability_Gyrocopter_Flak_Cannon::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Gyrocopter_Flak_Cannon::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Gyrocopter_Flak_Cannon::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 842, @0x0000000002b909c0, libserver.so)
// globals: CDOTA_Ability_Gyrocopter_Flak_Cannon::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Gyrocopter_Flak_Cannon::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Gyrocopter_Flak_Cannon::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Gyrocopter_Flak_Cannon::s_pSchemaBinding;
}


// CDOTA_Ability_Gyrocopter_Flak_Cannon::CEntityInstanceEntityClass::AllocateInstance  (line 842, @0x0000000002b97e20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Gyrocopter_Flak_Cannon::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Gyrocopter_Flak_Cannon::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Gyrocopter_Flak_Cannon::CEntityInstanceEntityClass::ConstructInstance  (line 842, @0x0000000002b9d4a0, libserver.so)  // inlines: CDOTA_Ability_Gyrocopter_Flak_Cannon, Construct<CDOTA_Ability_Gyrocopter_Flak_Cannon>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Gyrocopter_Flak_Cannon::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Gyrocopter_Flak_Cannon::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44E9870;
  }
  return p;
}


// CDOTA_Ability_Gyrocopter_Flak_Cannon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 842, @0x0000000002baaca0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Gyrocopter_Flak_Cannon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Gyrocopter_Flak_Cannon::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Gyrocopter_Flak_Cannon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 842, @0x0000000002baacc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Gyrocopter_Flak_Cannon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Gyrocopter_Flak_Cannon::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Gyrocopter_Flak_Cannon::GetEntityClassInternal  (line 842, @0x0000000002bc9560, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "gyrocopter_flak_cannon", "CDOTA_Ability_Gyrocopter_Flak_Cannon"
// globals: `guard variable for'CDOTA_Ability_Gyrocopter_Flak_Cannon::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Flak_CannonClass, CDOTA_Ability_Gyrocopter_Flak_Cannon::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Flak_CannonClass, __dso_handle, CDOTA_Ability_Gyrocopter_Flak_Cannon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Gyrocopter_Flak_Cannon::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Gyrocopter_Flak_CannonClassInfo, CDOTA_Ability_Gyrocopter_Flak_Cannon::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Gyrocopter_Flak_CannonClassInfo
CEntityClass *__cdecl CDOTA_Ability_Gyrocopter_Flak_Cannon::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Gyrocopter_Flak_Cannon::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Flak_CannonClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Gyrocopter_Flak_Cannon::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Flak_CannonClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Gyrocopter_Flak_Cannon::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Flak_CannonClass);
    CDOTA_Ability_Gyrocopter_Flak_Cannon::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Flak_CannonClass._vptr_CEntityClass = off_44E97F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Gyrocopter_Flak_Cannon::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Flak_CannonClass);
    __cxa_atexit(
      CDOTA_Ability_Gyrocopter_Flak_Cannon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Gyrocopter_Flak_Cannon::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Flak_CannonClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Gyrocopter_Flak_CannonClass != 0 )
    return &CDOTA_Ability_Gyrocopter_Flak_Cannon::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Flak_CannonClass;
  if ( `guard variable for'CDOTA_Ability_Gyrocopter_Flak_Cannon::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Gyrocopter_Flak_CannonClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Gyrocopter_Flak_Cannon::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Gyrocopter_Flak_CannonClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Gyrocopter_Flak_Cannon::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Gyrocopter_Flak_CannonClassInfo,
      "CDOTA_Ability_Gyrocopter_Flak_Cannon",
      "gyrocopter_flak_cannon",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Gyrocopter_Flak_Cannon::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Gyrocopter_Flak_CannonClassInfo);
  }
  CDOTA_Ability_Gyrocopter_Flak_Cannon::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Flak_CannonClass.m_pClassInfo = &CDOTA_Ability_Gyrocopter_Flak_Cannon::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Gyrocopter_Flak_CannonClassInfo;
  CDOTA_Ability_Gyrocopter_Flak_Cannon::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Flak_CannonClass.m_pBaseClassInfo = CDOTA_Ability_Gyrocopter_Flak_Cannon::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Gyrocopter_Flak_CannonClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Gyrocopter_Flak_CannonClass = &CDOTA_Ability_Gyrocopter_Flak_Cannon::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Flak_CannonClass;
  CDOTA_Ability_Gyrocopter_Flak_Cannon::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Gyrocopter_Flak_CannonClassInfo.m_pClass = &CDOTA_Ability_Gyrocopter_Flak_Cannon::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Flak_CannonClass;
  CDOTA_Ability_Gyrocopter_Flak_Cannon::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Flak_CannonClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Gyrocopter_Flak_CannonClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Gyrocopter_Flak_Cannon::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Flak_CannonClass;
}


// CDOTA_Ability_Gyrocopter_Flak_Cannon::YouForgotToImplementOrDeclareServerClass  (line 853, @0x0000000002b355e0, libserver.so)
int __fastcall CDOTA_Ability_Gyrocopter_Flak_Cannon::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Gyrocopter_Flak_Cannon *const this)
{
  return 0;
}


// CDOTA_Ability_Gyrocopter_Flak_Cannon::GetServerClass  (line 853, @0x0000000002b4cee0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Gyrocopter_Flak_Cannon::GetServerClass(
        CDOTA_Ability_Gyrocopter_Flak_Cannon *const this)
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


// CDOTA_Ability_Gyrocopter_Flak_Cannon::OnSpellStart  (line 861, @0x0000000002b3a7b0, libserver.so)
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_gyrocopter_flak_cannon"
void __fastcall CDOTA_Ability_Gyrocopter_Flak_Cannon::OnSpellStart(CDOTA_Ability_Gyrocopter_Flak_Cannon *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_gyrocopter_flak_cannon");
  CDOTABaseAbility::GetDuration(this);
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_gyrocopter_flak_cannon", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Gyrocopter_Flak_Cannon::~CDOTA_Modifier_Gyrocopter_Flak_Cannon  (line 874, @0x0000000002b9a8a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Gyrocopter_Flak_Cannon::~CDOTA_Modifier_Gyrocopter_Flak_Cannon(
        CDOTA_Modifier_Gyrocopter_Flak_Cannon *const this)
{
  this->_vptr_CDOTA_Buff = &off_44EA330;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Gyrocopter_Flak_Cannon::~CDOTA_Modifier_Gyrocopter_Flak_Cannon  (line 874, @0x0000000002b9a8c0, libserver.so)  // inlines: ~CDOTA_Modifier_Gyrocopter_Flak_Cannon
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Gyrocopter_Flak_Cannon::~CDOTA_Modifier_Gyrocopter_Flak_Cannon(
        CDOTA_Modifier_Gyrocopter_Flak_Cannon *const this)
{
  this->_vptr_CDOTA_Buff = &off_44EA330;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Gyrocopter_Flak_Cannon::IsPurgable  (line 879, @0x0000000002b909d0, libserver.so)
bool __fastcall CDOTA_Modifier_Gyrocopter_Flak_Cannon::IsPurgable(CDOTA_Modifier_Gyrocopter_Flak_Cannon *const this)
{
  return 0;
}


// CDOTA_Modifier_Gyrocopter_Flak_Cannon::OnCreated  (line 895, @0x0000000002b6e520, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName
// strings: "max_attacks", "special_bonus_unique_gyrocopter_2"
void __fastcall CDOTA_Modifier_Gyrocopter_Flak_Cannon::OnCreated(
        CDOTA_Modifier_Gyrocopter_Flak_Cannon *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->max_attacks = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "max_attacks", -1, 0);
  else
    this->max_attacks = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 != 0 )
    this->projectile_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "projectile_speed", -1, 0);
  else
    this->projectile_speed = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "radius", -1, 0);
  else
    this->radius = 0;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_gyrocopter_2", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    this->max_attacks += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  this->m_iNumAttacks = 0;
  (*(this->_vptr_CDOTA_Buff + 28))(this);
}


// CDOTA_Modifier_Gyrocopter_Flak_Cannon::DeclareFunctions  (line 915, @0x0000000002b355f0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Gyrocopter_Flak_Cannon::OnAttack(CModifierParams const&)
void __fastcall CDOTA_Modifier_Gyrocopter_Flak_Cannon::DeclareFunctions(
        CDOTA_Modifier_Gyrocopter_Flak_Cannon *const this)
{
  this->m_Functions[120].__pfn = CDOTA_Modifier_Gyrocopter_Flak_Cannon::OnAttack;
  this->m_Functions[120].__delta = 0;
}


// CDOTA_Modifier_Gyrocopter_Flak_Cannon::OnAttack  (line 921, @0x0000000002b5fc50, libserver.so)  // inlines: AttackerNPC, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetRangedProjectileName, GetTeamNumber, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_BaseNPC::CreateAttackRecord, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_BaseNPC::PerformAttack, CDOTA_BaseNPC::UnitEmitSound, CDOTA_Buff::Destroy, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "modifier_bane_nightmare", "Hero_Gyrocopter.FlackCannon"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Gyrocopter_Flak_Cannon::OnAttack(
        CDOTA_Modifier_Gyrocopter_Flak_Cannon *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *v4; // rax
  __m128i v6; // xmm1
  float v7; // r12d
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v9; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v11; // rax
  __int64 v12; // r13
  int v13; // r12d
  __int16 v14; // cx
  CEntityIdentity *v15; // rdx
  CEntityInstance *v16; // rbx
  CEntityIdentity *v17; // rdx
  CDOTA_BaseNPC *v18; // rax
  CDOTA_AttackRecord *AttackRecord; // r14
  CDOTA_BaseNPC *v20; // rax
  CHandle<CBaseEntity> *v21; // rdx
  uint32 m_Index; // eax
  CDOTA_BaseNPC *v23; // rax
  CDOTA_BaseNPC *m_pInstance; // rax
  CDOTA_BaseNPC *pTarget; // [rsp+28h] [rbp-58h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-50h] BYREF

  v4 = CEntityHandle::operator CEntityInstance *(&params->hattacker);
  if ( v4 != 0 && v4->m_bIsDOTANPC && v4 == CDOTA_Buff::GetParent(this) && !params->bNoCooldown )
  {
    pTarget = CEntityHandle::operator CEntityInstance *(&params->htarget);
    if ( pTarget != 0 && pTarget->m_bIsDOTANPC )
    {
      *v6.m128i_i32 = this->radius;
      entities.m_Size = 0;
      entities.m_Memory.m_pMemory = 0;
      entities.m_Memory.m_nAllocationCount = 0;
      entities.m_Memory.m_nGrowSize = 0;
      v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
      Caster = CDOTA_Buff::GetCaster(this);
      v9 = CDOTA_Buff::GetCaster(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
      v11 = CDOTA_Buff::GetCaster(this);
      FindUnitsInRadius(v11->m_iTeamNum.m_Value, AbsOrigin, Caster, v7, &entities, 2, 3, 400, 0, 0);
      if ( entities.m_Size > 0 )
      {
        v12 = 0;
        v13 = 0;
        while ( 1 )
        {
          v21 = &entities.m_Memory.m_pMemory[v12];
          m_Index = entities.m_Memory.m_pMemory[v12].m_Index;
          if ( m_Index + 2 <= 1 )
            break;
          v14 = v21->m_Index;
          v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v21->m_Index) >> 9) & 0x3F];
          if ( v15 == 0 )
            break;
          v16 = 0;
          v17 = &v15[v14 & 0x1FF];
          if ( v17 == 0 )
            goto LABEL_13;
          if ( m_Index != v17->m_EHandle.m_Index )
            goto LABEL_13;
          m_pInstance = v17->m_pInstance;
          if ( v17->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC )
            goto LABEL_13;
          if ( pTarget != m_pInstance )
          {
            v16 = v17->m_pInstance;
LABEL_13:
            v18 = CDOTA_Buff::GetCaster(this);
            AttackRecord = CDOTA_BaseNPC::CreateAttackRecord(v18, v16, 0, 0, 0, 0, 0);
            if ( AttackRecord != 0 )
            {
              AttackRecord->m_iProjectileSpeed = this->projectile_speed;
              AttackRecord->m_iszAutoAttackRangedParticle.u.m_Id = CDOTA_Buff::GetCaster(this)->m_iszAutoAttackRangedParticle.u.m_Id;
              if ( (BYTE1(v16[58]._vptr_IHandleEntity) & 8) != 0 )
                CDOTA_BaseNPC::RemoveModifierByName(v16, "modifier_bane_nightmare");
              v20 = CDOTA_Buff::GetCaster(this);
              CDOTA_BaseNPC::PerformAttack(v20, AttackRecord, v16, 1, 0, 1, 0);
            }
          }
          ++v13;
          ++v12;
          if ( entities.m_Size <= v13 )
            goto LABEL_20;
        }
        v16 = 0;
        goto LABEL_13;
      }
LABEL_20:
      v23 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::UnitEmitSound(v23, "Hero_Gyrocopter.FlackCannon", 0.0, 0, 0);
      ++this->m_iNumAttacks;
      (*(this->_vptr_CDOTA_Buff + 26))(this);
      if ( this->m_iNumAttacks >= this->max_attacks )
        CDOTA_Buff::Destroy(this, 0, 0, 0);
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Gyrocopter_Flak_Cannon_Scepter::~CDOTA_Modifier_Gyrocopter_Flak_Cannon_Scepter  (line 978, @0x0000000002b9a850, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Gyrocopter_Flak_Cannon_Scepter::~CDOTA_Modifier_Gyrocopter_Flak_Cannon_Scepter(
        CDOTA_Modifier_Gyrocopter_Flak_Cannon_Scepter *const this)
{
  this->_vptr_CDOTA_Buff = &off_44EA650;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Gyrocopter_Flak_Cannon_Scepter::~CDOTA_Modifier_Gyrocopter_Flak_Cannon_Scepter  (line 978, @0x0000000002b9a870, libserver.so)  // inlines: ~CDOTA_Modifier_Gyrocopter_Flak_Cannon_Scepter
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Gyrocopter_Flak_Cannon_Scepter::~CDOTA_Modifier_Gyrocopter_Flak_Cannon_Scepter(
        CDOTA_Modifier_Gyrocopter_Flak_Cannon_Scepter *const this)
{
  this->_vptr_CDOTA_Buff = &off_44EA650;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Gyrocopter_Flak_Cannon_Scepter::IsPermanent  (line 983, @0x0000000002b909e0, libserver.so)
bool __fastcall CDOTA_Modifier_Gyrocopter_Flak_Cannon_Scepter::IsPermanent(
        CDOTA_Modifier_Gyrocopter_Flak_Cannon_Scepter *const this)
{
  return 1;
}


// CDOTA_Modifier_Gyrocopter_Flak_Cannon_Scepter::IsHidden  (line 985, @0x0000000002b909f0, libserver.so)
bool __fastcall CDOTA_Modifier_Gyrocopter_Flak_Cannon_Scepter::IsHidden(
        CDOTA_Modifier_Gyrocopter_Flak_Cannon_Scepter *const this)
{
  return 1;
}


// CDOTA_Modifier_Gyrocopter_Flak_Cannon_Scepter::OnCreated  (line 1002, @0x0000000002b798e0, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
// strings: "fire_rate", "scepter_radius"
void __fastcall CDOTA_Modifier_Gyrocopter_Flak_Cannon_Scepter::OnCreated(
        CDOTA_Modifier_Gyrocopter_Flak_Cannon_Scepter *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  int LevelSpecialValue; // eax
  float fire_rate; // xmm0_4
  float v7; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  this->fire_rate = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "fire_rate", 1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "scepter_radius", 1, 0);
  fire_rate = this->fire_rate;
  this->scepter_radius = LevelSpecialValue;
  CDOTA_Buff::StartIntervalThink(this, fire_rate, v7);
}


// CDOTA_Modifier_Gyrocopter_Flak_Cannon_Scepter::OnIntervalThink  (line 1014, @0x0000000002b5ff60, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_BaseNPC::IsAllowedToBeAttacked, CDOTA_BaseNPC::CreateAttackRecord, CDOTA_BaseNPC::PerformAttack, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Gyrocopter_Flak_Cannon_Scepter::OnIntervalThink(
        CDOTA_Modifier_Gyrocopter_Flak_Cannon_Scepter *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  __m128i v4; // xmm1
  float v5; // r15d
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_BaseNPC *v7; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v9; // rax
  __int64 v10; // r13
  int v11; // r12d
  CHandle<CBaseEntity> *v12; // rdx
  uint32 m_Index; // eax
  __int16 v14; // cx
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CDOTA_BaseNPC *m_pInstance; // r15
  CDOTA_BaseNPC *v18; // rax
  CDOTA_AttackRecord *AttackRecord; // r12
  CDOTA_BaseNPC *v20; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+20h] [rbp-50h] BYREF

  Caster = CDOTA_Buff::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) && !CDOTA_Buff::GetCaster(this)->m_bIsIllusion.m_Value )
  {
    v3 = CDOTA_Buff::GetCaster(this);
    if ( (*(v3->_vptr_IHandleEntity + 408))(v3) != 0
      && SLOBYTE(CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value) >= 0
      && (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 0x80000000) == 0
      && (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 0x10000000) == 0 )
    {
      hEntities.m_Size = 0;
      *v4.m128i_i32 = this->scepter_radius;
      hEntities.m_Memory.m_pMemory = 0;
      hEntities.m_Memory.m_nAllocationCount = 0;
      hEntities.m_Memory.m_nGrowSize = 0;
      v5 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
      Parent = CDOTA_Buff::GetParent(this);
      v7 = CDOTA_Buff::GetParent(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
      v9 = CDOTA_Buff::GetParent(this);
      FindUnitsInRadius(v9->m_iTeamNum.m_Value, AbsOrigin, Parent, v5, &hEntities, 2, 7, 400, 0, 0);
      if ( hEntities.m_Size > 0 )
      {
        v10 = 0;
        v11 = 0;
        while ( 1 )
        {
          v12 = &hEntities.m_Memory.m_pMemory[v10];
          m_Index = hEntities.m_Memory.m_pMemory[v10].m_Index;
          if ( m_Index + 2 > 1 )
          {
            v14 = v12->m_Index;
            v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v12->m_Index) >> 9) & 0x3F];
            if ( v15 != 0 )
            {
              v16 = &v15[v14 & 0x1FF];
              if ( v16 != 0 && m_Index == v16->m_EHandle.m_Index )
              {
                m_pInstance = v16->m_pInstance;
                if ( v16->m_pInstance != 0
                  && m_pInstance->m_bIsDOTANPC
                  && CDOTA_BaseNPC::IsAllowedToBeAttacked(v16->m_pInstance) )
                {
                  break;
                }
              }
            }
          }
          ++v11;
          ++v10;
          if ( hEntities.m_Size <= v11 )
            goto LABEL_20;
        }
        v18 = CDOTA_Buff::GetCaster(this);
        AttackRecord = CDOTA_BaseNPC::CreateAttackRecord(v18, m_pInstance, 0, 1, 0, 0, 1);
        if ( AttackRecord != 0 )
        {
          v20 = CDOTA_Buff::GetCaster(this);
          CDOTA_BaseNPC::PerformAttack(v20, AttackRecord, m_pInstance, 1, 0, 1, 1);
        }
      }
LABEL_20:
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
    }
  }
}


// CDOTA_Ability_Gyrocopter_Call_Down::~CDOTA_Ability_Gyrocopter_Call_Down  (line 1057, @0x0000000002ba14e0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Gyrocopter_Call_Down::~CDOTA_Ability_Gyrocopter_Call_Down(
        CDOTA_Ability_Gyrocopter_Call_Down *const this)
{
  this->_vptr_IHandleEntity = &off_44EA9B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Gyrocopter_Call_Down::~CDOTA_Ability_Gyrocopter_Call_Down  (line 1057, @0x0000000002ba1500, libserver.so)  // inlines: ~CDOTA_Ability_Gyrocopter_Call_Down
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Gyrocopter_Call_Down::~CDOTA_Ability_Gyrocopter_Call_Down(
        CDOTA_Ability_Gyrocopter_Call_Down *const this)
{
  this->_vptr_IHandleEntity = &off_44EA9B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Gyrocopter_Call_Down::Schema_DynamicBinding  (line 1059, @0x0000000002b90a00, libserver.so)
// globals: CDOTA_Ability_Gyrocopter_Call_Down::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Gyrocopter_Call_Down::Schema_DynamicBinding(
        const CDOTA_Ability_Gyrocopter_Call_Down *const this)
{
  return CDOTA_Ability_Gyrocopter_Call_Down::s_pSchemaBinding;
}


// CDOTA_Ability_Gyrocopter_Call_Down::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1059, @0x0000000002b90a10, libserver.so)
// globals: CDOTA_Ability_Gyrocopter_Call_Down::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Gyrocopter_Call_Down::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Gyrocopter_Call_Down::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Gyrocopter_Call_Down::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Gyrocopter_Call_Down::CEntityInstanceEntityClass::DestructInstance  (line 1059, @0x0000000002b90a20, libserver.so)  // inlines: Destruct<CDOTA_Ability_Gyrocopter_Call_Down>
void __fastcall CDOTA_Ability_Gyrocopter_Call_Down::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Gyrocopter_Call_Down::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Gyrocopter_Call_Down::CEntityInstanceEntityClass::FreeInstance  (line 1059, @0x0000000002b90a40, libserver.so)
void __fastcall CDOTA_Ability_Gyrocopter_Call_Down::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Gyrocopter_Call_Down::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Gyrocopter_Call_Down::CEntityInstanceEntityClass::CanAllocate  (line 1059, @0x0000000002b90a60, libserver.so)
bool __fastcall CDOTA_Ability_Gyrocopter_Call_Down::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Gyrocopter_Call_Down::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Gyrocopter_Call_Down::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1059, @0x0000000002b90a70, libserver.so)
// globals: CDOTA_Ability_Gyrocopter_Call_Down::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Gyrocopter_Call_Down::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Gyrocopter_Call_Down::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Gyrocopter_Call_Down::s_pSchemaBinding;
}


// CDOTA_Ability_Gyrocopter_Call_Down::CEntityInstanceEntityClass::AllocateInstance  (line 1059, @0x0000000002b97e60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Gyrocopter_Call_Down::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Gyrocopter_Call_Down::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Gyrocopter_Call_Down::CEntityInstanceEntityClass::ConstructInstance  (line 1059, @0x0000000002b9d4d0, libserver.so)  // inlines: CDOTA_Ability_Gyrocopter_Call_Down, Construct<CDOTA_Ability_Gyrocopter_Call_Down>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Gyrocopter_Call_Down::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Gyrocopter_Call_Down::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44EA9B0;
  }
  return p;
}


// CDOTA_Ability_Gyrocopter_Call_Down::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1059, @0x0000000002baacf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Gyrocopter_Call_Down::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Gyrocopter_Call_Down::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Gyrocopter_Call_Down::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1059, @0x0000000002baad10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Gyrocopter_Call_Down::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Gyrocopter_Call_Down::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Gyrocopter_Call_Down::GetEntityClassInternal  (line 1059, @0x0000000002bc96b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "gyrocopter_call_down", "CDOTA_Ability_Gyrocopter_Call_Down"
// globals: `guard variable for'CDOTA_Ability_Gyrocopter_Call_Down::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Call_DownClass, CDOTA_Ability_Gyrocopter_Call_Down::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Call_DownClass, __dso_handle, CDOTA_Ability_Gyrocopter_Call_Down::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Gyrocopter_Call_Down::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Gyrocopter_Call_DownClassInfo, CDOTA_Ability_Gyrocopter_Call_Down::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Gyrocopter_Call_DownClassInfo
CEntityClass *__cdecl CDOTA_Ability_Gyrocopter_Call_Down::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Gyrocopter_Call_Down::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Call_DownClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Gyrocopter_Call_Down::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Call_DownClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Gyrocopter_Call_Down::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Call_DownClass);
    CDOTA_Ability_Gyrocopter_Call_Down::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Call_DownClass._vptr_CEntityClass = off_44EA930;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Gyrocopter_Call_Down::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Call_DownClass);
    __cxa_atexit(
      CDOTA_Ability_Gyrocopter_Call_Down::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Gyrocopter_Call_Down::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Call_DownClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Gyrocopter_Call_DownClass != 0 )
    return &CDOTA_Ability_Gyrocopter_Call_Down::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Call_DownClass;
  if ( `guard variable for'CDOTA_Ability_Gyrocopter_Call_Down::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Gyrocopter_Call_DownClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Gyrocopter_Call_Down::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Gyrocopter_Call_DownClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Gyrocopter_Call_Down::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Gyrocopter_Call_DownClassInfo,
      "CDOTA_Ability_Gyrocopter_Call_Down",
      "gyrocopter_call_down",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Gyrocopter_Call_Down::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Gyrocopter_Call_DownClassInfo);
  }
  CDOTA_Ability_Gyrocopter_Call_Down::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Call_DownClass.m_pClassInfo = &CDOTA_Ability_Gyrocopter_Call_Down::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Gyrocopter_Call_DownClassInfo;
  CDOTA_Ability_Gyrocopter_Call_Down::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Call_DownClass.m_pBaseClassInfo = CDOTA_Ability_Gyrocopter_Call_Down::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Gyrocopter_Call_DownClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Gyrocopter_Call_DownClass = &CDOTA_Ability_Gyrocopter_Call_Down::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Call_DownClass;
  CDOTA_Ability_Gyrocopter_Call_Down::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Gyrocopter_Call_DownClassInfo.m_pClass = &CDOTA_Ability_Gyrocopter_Call_Down::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Call_DownClass;
  CDOTA_Ability_Gyrocopter_Call_Down::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Call_DownClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Gyrocopter_Call_DownClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Gyrocopter_Call_Down::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Gyrocopter_Call_DownClass;
}


// CDOTA_Ability_Gyrocopter_Call_Down::GetAOERadius  (line 1063, @0x0000000002bc4300, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_Gyrocopter_Call_Down::GetAOERadius(CDOTA_Ability_Gyrocopter_Call_Down *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
}


// CDOTA_Ability_Gyrocopter_Call_Down::YouForgotToImplementOrDeclareServerClass  (line 1078, @0x0000000002b35610, libserver.so)
int __fastcall CDOTA_Ability_Gyrocopter_Call_Down::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Gyrocopter_Call_Down *const this)
{
  return 0;
}


// CDOTA_Ability_Gyrocopter_Call_Down::GetServerClass  (line 1078, @0x0000000002b4c720, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Gyrocopter_Call_Down::GetServerClass(
        CDOTA_Ability_Gyrocopter_Call_Down *const this)
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


// CDOTA_Ability_Gyrocopter_Call_Down::OnAbilityPhaseStart  (line 1086, @0x0000000002b385c0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::StartGesture
bool __fastcall CDOTA_Ability_Gyrocopter_Call_Down::OnAbilityPhaseStart(CDOTA_Ability_Gyrocopter_Call_Down *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(Caster, 1519, 0.1, 0.1, 9, 0, 1.0);
  return 1;
}


// CDOTA_Ability_Gyrocopter_Call_Down::OnAbilityPhaseInterrupted  (line 1096, @0x0000000002b38660, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveGesture
void __fastcall CDOTA_Ability_Gyrocopter_Call_Down::OnAbilityPhaseInterrupted(
        CDOTA_Ability_Gyrocopter_Call_Down *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveGesture(Caster, 1519);
}


// CDOTA_Ability_Gyrocopter_Call_Down::OnSpellStart  (line 1105, @0x0000000002b677e0, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, GetAbilityData, GetLevelSpecialValueFor<int>, GetTeamNumber, Vector, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorPosition, Thinker_Create, CDOTAFogOfWarSystem::AddTempViewer, CDOTABaseAbility::GetLevelSpecialValueFor<int>, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleFoWProperties (26 total)
// strings: "modifier_gyrocopter_call_down_thinker", "particles/units/heroes/hero_gyrocopter/gyro_calldown_first.vpcf", "attach_rocket1", "particles/units/heroes/hero_gyrocopter/gyro_calldown_second.vpcf", "attach_rocket2", "particles/units/heroes/hero_gyrocopter/gyro_calldown_marker.vpcf" (8 total)
void __fastcall CDOTA_Ability_Gyrocopter_Call_Down::OnSpellStart(CDOTA_Ability_Gyrocopter_Call_Down *const this)
{
  int m_Value; // r12d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v4; // rax
  int LevelSpecialValue; // r14d
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_BaseNPC *v8; // rax
  const Vector *AbsOrigin; // r15
  CDOTA_ParticleManager *v10; // rax
  CDOTA_ParticleManager *v11; // rax
  CDOTA_ParticleManager *v12; // rax
  CDOTA_ParticleManager *v13; // rax
  CDOTA_ParticleManager *v14; // rax
  CDOTA_ParticleManager *v15; // rax
  int v16; // r12d
  CDOTA_BaseNPC *v17; // rax
  const Vector *v18; // r14
  CDOTA_BaseNPC *v19; // r15
  CDOTA_ParticleManager *v20; // rax
  CDOTA_ParticleManager *v21; // rax
  CDOTA_ParticleManager *v22; // rax
  CDOTA_ParticleManager *v23; // rax
  CDOTA_ParticleManager *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  int OpposingTeamNumber; // eax
  CTeam *GlobalTeam; // rax
  CDOTA_ParticleManager *v28; // rax
  CDOTA_ParticleManager *v29; // rax
  CDOTA_ParticleManager *v30; // rax
  CDOTA_ParticleManager *v31; // rax
  CDOTA_BaseNPC *v32; // rax
  CDOTA_BaseNPC *v33; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r14d
  CDOTA_BaseNPC *v36; // rax
  float v37; // xmm3_4
  vec_t v38; // [rsp+14h] [rbp-1ECh]
  CDOTA_BaseNPC *pEnt; // [rsp+18h] [rbp-1E8h]
  Vector vLocation; // [rsp+60h] [rbp-1A0h] BYREF
  KeyValues kv; // [rsp+70h] [rbp-190h] BYREF
  CReliableBroadcastRecipientFilter filter; // [rsp+90h] [rbp-170h] BYREF
  unsigned __int64 v43; // [rsp+1C8h] [rbp-38h]
  Vector CursorPosition; // 0:kr00_12.12
  Vector v45; // 0:kr20_12.12
  Vector v46; // 0:kr34_12.12
  Vector v47; // 0:kr40_12.12

  v43 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_gyrocopter_call_down_thinker");
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(Caster, this, "modifier_gyrocopter_call_down_thinker", &kv, CursorPosition, m_Value, 0, 0, 0);
  vLocation = CDOTABaseAbility::GetCursorPosition(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_CALLDOWN,
    v4->m_iTeamNum.m_Value,
    &vLocation,
    350.0,
    4.0,
    0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_gyrocopter/gyro_calldown_first.vpcf",
               2,
               0,
               0,
               0);
  v8 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
  pEnt = CDOTABaseAbility::GetCaster(this);
  v10 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v10, Particle, 0, pEnt, 4, "attach_rocket1", *AbsOrigin, 1);
  v45 = CDOTABaseAbility::GetCursorPosition(this);
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v11, Particle, 1, *&v45.x, v45.z);
  *&pEnt = LevelSpecialValue;
  vLocation.x = LevelSpecialValue;
  v38 = -LevelSpecialValue;
  vLocation.y = v38;
  vLocation.z = v38;
  v12 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v12, Particle, 5, *&vLocation.x, vLocation.z);
  v13 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleFoWProperties(v13, Particle, 1, -1, LevelSpecialValue);
  v14 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v14, Particle);
  v15 = GetParticleManager();
  v16 = CDOTA_ParticleManager::CreateParticle(
          v15,
          "particles/units/heroes/hero_gyrocopter/gyro_calldown_second.vpcf",
          2,
          0,
          0,
          0);
  v17 = CDOTABaseAbility::GetCaster(this);
  v18 = CBaseEntity::GetAbsOrigin(v17);
  v19 = CDOTABaseAbility::GetCaster(this);
  v20 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v20, v16, 0, v19, 4, "attach_rocket2", *v18, 1);
  v46 = CDOTABaseAbility::GetCursorPosition(this);
  v21 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v21, v16, 1, *&v46.x, v46.z);
  *&vLocation.x = __PAIR64__(LODWORD(v38), pEnt);
  vLocation.z = v38;
  v22 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v22, v16, 5, *&vLocation.x, vLocation.z);
  v23 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleFoWProperties(v23, v16, 1, -1, *&pEnt);
  v24 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v24, v16);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filter);
  v25 = CDOTABaseAbility::GetCaster(this);
  OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v25);
  GlobalTeam = GetGlobalTeam(OpposingTeamNumber);
  CRecipientFilter::RemoveRecipientsByTeam(&filter, GlobalTeam);
  v28 = GetParticleManager();
  LODWORD(v18) = CDOTA_ParticleManager::CreateParticle(
                   v28,
                   "particles/units/heroes/hero_gyrocopter/gyro_calldown_marker.vpcf",
                   2,
                   0,
                   &filter,
                   0);
  v47 = CDOTABaseAbility::GetCursorPosition(this);
  v29 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v29, v18, 0, *&v47.x, v47.z);
  *&vLocation.x = __PAIR64__(LODWORD(v38), pEnt);
  vLocation.z = v38;
  v30 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v30, v18, 1, *&vLocation.x, vLocation.z);
  v31 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v31, v18);
  v32 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(24, "Hero_Gyrocopter.CallDown.Fire", v32);
  v33 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(1, "Hero_Gyrocopter.CallDown.Fire.Self", v33);
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  vLocation = CDOTABaseAbility::GetCursorPosition(this);
  v36 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(
    g_pGameRules,
    v36,
    0,
    m_iAbilityID,
    0,
    0,
    *&vLocation.x,
    vLocation.z,
    -1.0,
    v37);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Gyrocopter_Call_Down::GetCastRange  (line 1148, @0x0000000002b38800, libserver.so)
// calls: CDOTABaseAbility::GetCastRange
int __fastcall CDOTA_Ability_Gyrocopter_Call_Down::GetCastRange(
        CDOTA_Ability_Gyrocopter_Call_Down *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  return CDOTABaseAbility::GetCastRange(this, &vec3_origin, 0);
}


// CDOTA_Ability_Gyrocopter_Call_Down::GetAbilityDamageToTargetOverInterval  (line 1158, @0x0000000002b6a3b0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "damage_first", "damage_second"
__int64 __fastcall CDOTA_Ability_Gyrocopter_Call_Down::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Gyrocopter_Call_Down *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_Ability_Gyrocopter_Call_Down *v6; // rbx
  int LevelSpecialValue; // r13d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    v6 = this;
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_first", -1, 1);
    LODWORD(v6) = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "damage_second", -1, 1);
    return ((v6 + LevelSpecialValue) * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Ability_Gyrocopter_Call_Down::GetSlowDuration  (line 1168, @0x0000000002b75d20, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "slow_duration_second"
float __fastcall CDOTA_Ability_Gyrocopter_Call_Down::GetSlowDuration(CDOTA_Ability_Gyrocopter_Call_Down *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "slow_duration_second", -1, 1);
}


// CDOTA_Modifier_Gyrocopter_Call_Down::~CDOTA_Modifier_Gyrocopter_Call_Down  (line 1177, @0x0000000002b9a800, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Gyrocopter_Call_Down::~CDOTA_Modifier_Gyrocopter_Call_Down(
        CDOTA_Modifier_Gyrocopter_Call_Down *const this)
{
  this->_vptr_CDOTA_Buff = &off_44EB470;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Gyrocopter_Call_Down::~CDOTA_Modifier_Gyrocopter_Call_Down  (line 1177, @0x0000000002b9a820, libserver.so)  // inlines: ~CDOTA_Modifier_Gyrocopter_Call_Down
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Gyrocopter_Call_Down::~CDOTA_Modifier_Gyrocopter_Call_Down(
        CDOTA_Modifier_Gyrocopter_Call_Down *const this)
{
  this->_vptr_CDOTA_Buff = &off_44EB470;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Gyrocopter_Call_Down::IsHidden  (line 1182, @0x0000000002b90a80, libserver.so)
bool __fastcall CDOTA_Modifier_Gyrocopter_Call_Down::IsHidden(CDOTA_Modifier_Gyrocopter_Call_Down *const this)
{
  return 1;
}


// CDOTA_Modifier_Gyrocopter_Call_Down::OnCreated  (line 1206, @0x0000000002b7fe10, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "slow_duration_first", "slow_duration_second", "damage_first", "damage_second", "damage_second_scepter", "slow_first" (7 total)
void __fastcall CDOTA_Modifier_Gyrocopter_Call_Down::OnCreated(
        CDOTA_Modifier_Gyrocopter_Call_Down *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax
  CDOTABaseAbility *v10; // rax
  float v11; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->slow_duration_first = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "slow_duration_first", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->slow_duration_first = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->slow_duration_second = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "slow_duration_second", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_13;
    }
  }
  this->slow_duration_second = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->damage_first = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "damage_first", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
    goto LABEL_14;
  }
LABEL_13:
  this->damage_first = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->damage_second = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "damage_second", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
    goto LABEL_15;
  }
LABEL_14:
  this->damage_second = 0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
  {
LABEL_6:
    this->damage_second_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "damage_second_scepter", -1, 0);
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_7;
    goto LABEL_16;
  }
LABEL_15:
  this->damage_second_scepter = 0;
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 != 0 )
  {
LABEL_7:
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v8, "radius", -1, 0);
    v9 = CDOTA_Buff::GetAbility(this);
    if ( v9 != 0 )
      goto LABEL_8;
LABEL_17:
    this->slow_first = 0.0;
    v10 = CDOTA_Buff::GetAbility(this);
    if ( v10 != 0 )
      goto LABEL_9;
LABEL_18:
    this->slow_second = 0.0;
    goto LABEL_10;
  }
LABEL_16:
  this->radius = 0;
  v9 = CDOTA_Buff::GetAbility(this);
  if ( v9 == 0 )
    goto LABEL_17;
LABEL_8:
  this->slow_first = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v9, "slow_first", -1, 0);
  v10 = CDOTA_Buff::GetAbility(this);
  if ( v10 == 0 )
    goto LABEL_18;
LABEL_9:
  this->slow_second = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v10, "slow_second", -1, 0);
LABEL_10:
  this->m_bFirstStrike = 1;
  CDOTA_Buff::StartIntervalThink(this, 2.0, v11);
}


// CDOTA_Modifier_Gyrocopter_Call_Down::OnDestroy  (line 1225, @0x0000000002b37570, libserver.so)
// calls: CDOTA_Buff::GetParent, UTIL_Remove
void __fastcall CDOTA_Modifier_Gyrocopter_Call_Down::OnDestroy(CDOTA_Modifier_Gyrocopter_Call_Down *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  UTIL_Remove(Parent);
}


// CDOTA_Modifier_Gyrocopter_Call_Down::OnIntervalThink  (line 1234, @0x0000000002b62040, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Purge, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, DOTA_EmitSound, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, ApplyDamage (19 total)
// strings: "Hero_Gyrocopter.CallDown.Damage", "modifier_gyrocopter_call_down_slow"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Gyrocopter_Call_Down::OnIntervalThink(CDOTA_Modifier_Gyrocopter_Call_Down *const this)
{
  __m128i v1; // xmm2
  float v3; // r13d
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  float slow_first; // xmm0_4
  bool m_bFirstStrike; // al
  __int64 v11; // r12
  int v12; // ebx
  CHandle<CBaseEntity> *v13; // rdx
  uint32 m_Index; // eax
  __int16 v15; // cx
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  CEntityInstance *m_pInstance; // r13
  float v19; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v21; // rax
  int iSlowPercent; // [rsp+24h] [rbp-8Ch]
  int iDamage; // [rsp+2Ch] [rbp-84h]
  CDOTABaseAbility *pInflictor; // [rsp+30h] [rbp-80h]
  CDOTABaseAbility *pAbility; // [rsp+38h] [rbp-78h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+78h] [rbp-38h]

  hEntities.m_Size = 0;
  *v1.m128i_i32 = this->radius;
  hEntities.m_Memory.m_pMemory = 0;
  v28 = __readfsqword(0x28u);
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  Parent = CDOTA_Buff::GetParent(this);
  v5 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = CDOTA_Buff::GetParent(this);
  FindUnitsInRadius(v7->m_iTeamNum.m_Value, AbsOrigin, Parent, v3, &hEntities, 2, 3, 16, 0, 0);
  v8 = CDOTA_Buff::GetParent(this);
  DOTA_EmitSound(10, "Hero_Gyrocopter.CallDown.Damage", v8);
  slow_first = this->slow_first;
  iDamage = this->damage_first;
  m_bFirstStrike = this->m_bFirstStrike;
  if ( !m_bFirstStrike )
  {
    slow_first = this->slow_second;
    iDamage = this->damage_second;
  }
  iSlowPercent = slow_first;
  if ( hEntities.m_Size > 0 )
  {
    v11 = 0;
    v12 = 0;
    do
    {
      while ( 1 )
      {
        v13 = &hEntities.m_Memory.m_pMemory[v11];
        m_Index = hEntities.m_Memory.m_pMemory[v11].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v15 = v13->m_Index;
          v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v13->m_Index) >> 9) & 0x3F];
          if ( v16 != 0 )
          {
            v17 = &v16[v15 & 0x1FF];
            if ( v17 != 0 && m_Index == v17->m_EHandle.m_Index )
            {
              m_pInstance = v17->m_pInstance;
              if ( v17->m_pInstance != 0
                && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 2) == 0 )
              {
                break;
              }
            }
          }
        }
        ++v12;
        ++v11;
        if ( hEntities.m_Size <= v12 )
          goto LABEL_14;
      }
      KeyValues::KeyValues(&kv, "modifier_gyrocopter_call_down_slow");
      KeyValues::SetFloat(&kv, "duration", v19);
      KeyValues::SetInt(&kv, "movespeed", iSlowPercent);
      CDOTA_BaseNPC::RemoveModifierByName(m_pInstance, "modifier_gyrocopter_call_down_slow");
      pAbility = CDOTA_Buff::GetAbility(this);
      Caster = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, Caster, pAbility, "modifier_gyrocopter_call_down_slow", &kv, 0);
      pInflictor = CDOTA_Buff::GetAbility(this);
      v21 = CDOTA_Buff::GetCaster(this);
      ApplyDamage(v21, m_pInstance, pInflictor, iDamage, 2, 0);
      ++v12;
      ++v11;
      KeyValues::~KeyValues(&kv);
    }
    while ( hEntities.m_Size > v12 );
LABEL_14:
    m_bFirstStrike = this->m_bFirstStrike;
  }
  if ( !m_bFirstStrike )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  this->m_bFirstStrike = 0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hEntities);
  if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
    if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
  }
}


// CDOTA_Modifier_Gyrocopter_Call_Down_Slow::~CDOTA_Modifier_Gyrocopter_Call_Down_Slow  (line 1288, @0x0000000002b9a7b0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Gyrocopter_Call_Down_Slow::~CDOTA_Modifier_Gyrocopter_Call_Down_Slow(
        CDOTA_Modifier_Gyrocopter_Call_Down_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_44EB790;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Gyrocopter_Call_Down_Slow::~CDOTA_Modifier_Gyrocopter_Call_Down_Slow  (line 1288, @0x0000000002b9a7d0, libserver.so)  // inlines: ~CDOTA_Modifier_Gyrocopter_Call_Down_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Gyrocopter_Call_Down_Slow::~CDOTA_Modifier_Gyrocopter_Call_Down_Slow(
        CDOTA_Modifier_Gyrocopter_Call_Down_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_44EB790;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Gyrocopter_Call_Down_Slow::AddCustomTransmiterData  (line 1313, @0x0000000002b39b00, libserver.so)  // inlines: set_has_movement_speed, set_movement_speed
// calls: CDOTA_Buff::AddCustomTransmiterData
void __fastcall CDOTA_Modifier_Gyrocopter_Call_Down_Slow::AddCustomTransmiterData(
        CDOTA_Modifier_Gyrocopter_Call_Down_Slow *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  int movespeed; // eax

  movespeed = this->movespeed;
  *(entry + 4) |= 0x200000u;
  *(entry + 32) = movespeed;
  CDOTA_Buff::AddCustomTransmiterData(this, entry);
}


// CDOTA_Modifier_Gyrocopter_Call_Down_Slow::OnCreated  (line 1327, @0x0000000002b367e0, libserver.so)
// calls: KeyValues::GetInt
void __fastcall CDOTA_Modifier_Gyrocopter_Call_Down_Slow::OnCreated(
        CDOTA_Modifier_Gyrocopter_Call_Down_Slow *const this,
        KeyValues *pKV)
{
  this->movespeed = KeyValues::GetInt(pKV, "movespeed", 0);
}


// CDOTA_Modifier_Gyrocopter_Call_Down_Slow::DeclareFunctions  (line 1336, @0x0000000002b35620, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Gyrocopter_Call_Down_Slow::DeclareFunctions(
        CDOTA_Modifier_Gyrocopter_Call_Down_Slow *const this)
{
  this->m_Functions[13].__pfn = (&stru_10 + 697);
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Gyrocopter_Call_Down_Slow::GetModifierMoveSpeedBonus_Percentage  (line 1343, @0x0000000002b35640, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Gyrocopter_Call_Down_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Gyrocopter_Call_Down_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->movespeed;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


