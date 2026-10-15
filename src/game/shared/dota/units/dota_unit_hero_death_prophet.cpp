// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_death_prophet.cpp:70
class CDOTA_Unit_Hero_DeathProphet : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_DeathProphet(CDOTA_Unit_Hero_DeathProphet &);
	CDOTA_Unit_Hero_DeathProphet(CDOTA_Unit_Hero_DeathProphet &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void OnDying();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual const char * GetDeathEffectName();
	CDOTA_Unit_Hero_DeathProphet();
	virtual ~CDOTA_Unit_Hero_DeathProphet();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[469] OnDying
	// vtable[6] Precache
	// vtable[502] GetDeathEffectName
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_death_prophet.cpp:87
class C_CDOTA_Unit_Hero_DeathProphet_MapInstall {
	C_CDOTA_Unit_Hero_DeathProphet_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_death_prophet.cpp:135
class CDOTA_Ability_DeathProphet_CarrionSwarm : public CDOTABaseAbility {
public:

private:

	int start_radius;  // +0x390
	int end_radius;  // +0x394
	float m_fStartTime;  // +0x398
	float m_fTotalTime;  // +0x39c
	int m_nProjectileHandle;  // +0x3a0
	int m_nFXIndex;  // +0x3a4
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
	CDOTA_Ability_DeathProphet_CarrionSwarm(CDOTA_Ability_DeathProphet_CarrionSwarm &);
	CDOTA_Ability_DeathProphet_CarrionSwarm(CDOTA_Ability_DeathProphet_CarrionSwarm &);
	CDOTA_Ability_DeathProphet_CarrionSwarm();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual void OnProjectileThink(int);
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual int GetManaCost(int);
	virtual float GetCooldown(int);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_DeathProphet_CarrionSwarm();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[292] OnProjectileThink
	// vtable[289] OnProjectileHit
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[273] GetManaCost
	// vtable[242] GetCooldown
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 936
};

// src/game/shared/dota/units/dota_unit_hero_death_prophet.cpp:163
class C_CDOTA_Ability_DeathProphet_CarrionSwarm_MapInstall {
	C_CDOTA_Ability_DeathProphet_CarrionSwarm_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_death_prophet.cpp:319
class CDOTA_Ability_DeathProphet_Silence : public CDOTABaseAbility {
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
	CDOTA_Ability_DeathProphet_Silence(CDOTA_Ability_DeathProphet_Silence &);
	CDOTA_Ability_DeathProphet_Silence(CDOTA_Ability_DeathProphet_Silence &);
	CDOTA_Ability_DeathProphet_Silence();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual int GetManaCost(int);
	virtual float GetCooldown(int);
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual void OnSpellStart();
	virtual bool HasSilence();
	virtual ~CDOTA_Ability_DeathProphet_Silence();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[273] GetManaCost
	// vtable[242] GetCooldown
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[266] OnSpellStart
	// vtable[325] HasSilence
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_death_prophet.cpp:345
class C_CDOTA_Ability_DeathProphet_Silence_MapInstall {
	C_CDOTA_Ability_DeathProphet_Silence_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_death_prophet.cpp:453
class CDOTA_Ability_DeathProphet_Witchcraft : public CDOTABaseAbility {
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
	CDOTA_Ability_DeathProphet_Witchcraft(CDOTA_Ability_DeathProphet_Witchcraft &);
	CDOTA_Ability_DeathProphet_Witchcraft(CDOTA_Ability_DeathProphet_Witchcraft &);
	CDOTA_Ability_DeathProphet_Witchcraft();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual bool IsHiddenWhenStolen();
	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_DeathProphet_Witchcraft();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[306] IsHiddenWhenStolen
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_death_prophet.cpp:468
class CDOTA_Modifier_DeathProphet_Witchcraft : public CDOTA_Buff {
public:

private:

	int bonus_movement_speed;  // +0xba8
	CDOTA_Modifier_DeathProphet_Witchcraft();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_DeathProphet_Witchcraft();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_death_prophet.cpp:521
class CDOTA_Modifier_DeathProphet_SpiritSiphon_ChargeCounter : public CDOTA_Buff {
public:

private:

	int max_charges;  // +0xba8
	float charge_restore_time;  // +0xbac
	bool m_bIsThinking;  // +0xbb0
	CDOTA_Modifier_DeathProphet_SpiritSiphon_ChargeCounter();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual bool IsPermanent();
	virtual bool DestroyOnExpire();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	void SetThinking(bool);
	bool IsThinking();
	virtual ~CDOTA_Modifier_DeathProphet_SpiritSiphon_ChargeCounter();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[23] IsPermanent
	// vtable[61] DestroyOnExpire
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_death_prophet.cpp:594
class CDOTA_Ability_DeathProphet_SpiritSiphon : public CDOTABaseAbility {
public:

private:

	int m_iArrowProjectile;  // +0x39c
	int m_nFXIndex;  // +0x3a0
	float charge_restore_time;  // +0x3a4
	int max_charges;  // +0x3a8
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
	CDOTA_Ability_DeathProphet_SpiritSiphon(CDOTA_Ability_DeathProphet_SpiritSiphon &);
	CDOTA_Ability_DeathProphet_SpiritSiphon(CDOTA_Ability_DeathProphet_SpiritSiphon &);
	CDOTA_Ability_DeathProphet_SpiritSiphon();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual void OnUpgrade();
	virtual void OnUnStolen();
	virtual bool IsRefreshable();
	virtual void RefreshCharges();
	virtual Activity GetGestureBasedActivity();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_DeathProphet_SpiritSiphon();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// vtable[268] OnUpgrade
	// vtable[308] OnUnStolen
	// vtable[217] IsRefreshable
	// vtable[318] RefreshCharges
	// vtable[211] GetGestureBasedActivity
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 944
};

// src/game/shared/dota/units/dota_unit_hero_death_prophet.cpp:791
class CDOTA_Modifier_DeathProphet_SpiritSiphon : public CDOTA_Buff {
public:

private:

	float flSmoothness;  // +0xba8
	float damage;  // +0xbac
	float damage_pct;  // +0xbb0
	int drain_range;  // +0xbb4
	float haunt_duration;  // +0xbb8
	int siphon_buffer;  // +0xbbc
	EHANDLE m_hTarget;  // +0xbc0
	int m_iLinkIndex;  // +0xbc4
	CDOTA_Modifier_DeathProphet_SpiritSiphon();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual void OnDestroy();
	virtual int GetAttributes();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_DeathProphet_SpiritSiphon();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[60] OnDestroy
	// vtable[7] GetAttributes
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_death_prophet.cpp:914
class CDOTA_Modifier_DeathProphet_SpiritSiphon_Slow : public CDOTA_Buff {
public:

private:

	int movement_slow;  // +0xba8
	CDOTA_Modifier_DeathProphet_SpiritSiphon_Slow();
	virtual void OnCreated(KeyValues *);
	virtual bool IsDebuff();
	virtual int GetAttributes();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_DeathProphet_SpiritSiphon_Slow();

	// vtable[57] OnCreated
	// vtable[12] IsDebuff
	// vtable[7] GetAttributes
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_death_prophet.cpp:954
class CDOTA_DeathProphet_Exorcism_Spirit : public CBaseAnimating {
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
	CDOTA_DeathProphet_Exorcism_Spirit(CDOTA_DeathProphet_Exorcism_Spirit &);
	CDOTA_DeathProphet_Exorcism_Spirit(CDOTA_DeathProphet_Exorcism_Spirit &);
	CDOTA_DeathProphet_Exorcism_Spirit();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual bool IsPartOfFOWSystem();
	virtual int ShouldTransmit(const CGameCheckTransmitInfo *);
	virtual ~CDOTA_DeathProphet_Exorcism_Spirit();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[212] IsPartOfFOWSystem
	// vtable[65] ShouldTransmit
	// sizeof = 1216
};

// src/game/shared/dota/units/dota_unit_hero_death_prophet.cpp:982
class C_CDOTA_DeathProphet_Exorcism_Spirit_MapInstall {
	C_CDOTA_DeathProphet_Exorcism_Spirit_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_death_prophet.cpp:1041
class C_CDOTA_Ability_DeathProphet_Exorcism_MapInstall {
	C_CDOTA_Ability_DeathProphet_Exorcism_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_death_prophet.cpp:1159
class CDOTA_Modifier_DeathProphet_Exorcism : public CDOTA_Buff {
public:

	int radius;  // +0xba8
	int spirit_speed;  // +0xbac
	int max_distance;  // +0xbb0
	int give_up_distance;  // +0xbb4
	int min_damage;  // +0xbb8
	int max_damage;  // +0xbbc
	int heal_percent;  // +0xbc0
	int spirit_duration;  // +0xbc4
	float ghost_spawn_rate;  // +0xbc8
	int m_iSpirits;  // +0xbcc
	float m_fStartTime;  // +0xbd0
	float m_fLastThinkTime;  // +0xbd4
	float m_fSpawnTime;  // +0xbd8
	bool m_bFirstSpawn;  // +0xbdc
	bool m_bCommentedOnExpired;  // +0xbdd
	bool m_bForceExpired;  // +0xbde

	CDOTA_Modifier_DeathProphet_Exorcism();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsPurgable();
	virtual int GetAttributes();
	virtual void OnIntervalThink();
	void DoHeal();
	void ForceExpire();
	virtual void DeclareFunctions();
	ModifierVariant_t OnBuildingKilled(const CModifierParams &);
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	virtual ~CDOTA_Modifier_DeathProphet_Exorcism();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[14] IsPurgable
	// vtable[7] GetAttributes
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[10] AddCustomTransmiterData
	// sizeof = 3072
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// RandomVectorOffset  (line 52, @0x0000000002a8f880, libserver.so)  // inlines: QAngle, operator*=
// calls: RandomInt, AngleVectors, RandomFloat, sqrt
// callers: CDOTA_Ability_DeathProphet_Exorcism::ActivateSpirit, CDOTA_Modifier_DeathProphet_Exorcism::OnIntervalThink
__int64 __fastcall RandomVectorOffset(float a1, float fScale)
{
  float v2; // xmm0_4
  QAngle angle; // [rsp+20h] [rbp-30h] BYREF
  Vector offset; // [rsp+30h] [rbp-20h] BYREF

  angle.x = 0.0;
  angle.z = 0.0;
  angle.y = RandomInt(0, 360);
  AngleVectors(&angle, &offset, 0, 0);
  v2 = a1 * sqrt(RandomFloat(0.0, 1.0));
  return COERCE_UNSIGNED_INT(v2 * offset.z);
}


// CDOTA_Unit_Hero_DeathProphet::~CDOTA_Unit_Hero_DeathProphet  (line 70, @0x0000000002ac65d0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_DeathProphet::~CDOTA_Unit_Hero_DeathProphet(CDOTA_Unit_Hero_DeathProphet *const this)
{
  this->_vptr_IHandleEntity = &off_43E9050;
  this->_vptr_INextBotEventResponder = &off_43EA030;
  this->_vptr_CObstructionObject = &off_43EA360;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_DeathProphet::~CDOTA_Unit_Hero_DeathProphet  (line 70, @0x0000000002ac6610, libserver.so)  // inlines: ~CDOTA_Unit_Hero_DeathProphet
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_DeathProphet::~CDOTA_Unit_Hero_DeathProphet(CDOTA_Unit_Hero_DeathProphet *const this)
{
  this->_vptr_IHandleEntity = &off_43E9050;
  this->_vptr_INextBotEventResponder = &off_43EA030;
  this->_vptr_CObstructionObject = &off_43EA360;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_DeathProphet::Schema_DynamicBinding  (line 72, @0x0000000002ab8440, libserver.so)
// globals: CDOTA_Unit_Hero_DeathProphet::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_DeathProphet::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_DeathProphet *const this)
{
  return CDOTA_Unit_Hero_DeathProphet::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_DeathProphet::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 72, @0x0000000002ab8470, libserver.so)
// globals: CDOTA_Unit_Hero_DeathProphet::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_DeathProphet::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_DeathProphet::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_DeathProphet::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_DeathProphet::CEntityInstanceEntityClass::DestructInstance  (line 72, @0x0000000002ab8480, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_DeathProphet>
void __fastcall CDOTA_Unit_Hero_DeathProphet::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_DeathProphet::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_DeathProphet::CEntityInstanceEntityClass::FreeInstance  (line 72, @0x0000000002ab84a0, libserver.so)
void __fastcall CDOTA_Unit_Hero_DeathProphet::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_DeathProphet::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_DeathProphet::CEntityInstanceEntityClass::CanAllocate  (line 72, @0x0000000002ab84c0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_DeathProphet::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_DeathProphet::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_DeathProphet::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 72, @0x0000000002ab84d0, libserver.so)
// globals: CDOTA_Unit_Hero_DeathProphet::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_DeathProphet::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_DeathProphet::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_DeathProphet::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_DeathProphet::CEntityInstanceEntityClass::AllocateInstance  (line 72, @0x0000000002abea80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_DeathProphet::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_DeathProphet::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_DeathProphet::CEntityInstanceEntityClass::ConstructInstance  (line 72, @0x0000000002ac4850, libserver.so)  // inlines: CDOTA_Unit_Hero_DeathProphet, Construct<CDOTA_Unit_Hero_DeathProphet>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_DeathProphet::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_DeathProphet::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_43E9050;
    *(p + 236) = &off_43EA030;
    *(p + 257) = &off_43EA360;
  }
  return p;
}


// CDOTA_Unit_Hero_DeathProphet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 72, @0x0000000002acd0d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_DeathProphet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_DeathProphet::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_DeathProphet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 72, @0x0000000002acd3b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_DeathProphet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_DeathProphet::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_DeathProphet::GetEntityClassInternal  (line 72, @0x0000000002ada290, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "npc_dota_hero_death_prophet", "CDOTA_Unit_Hero_DeathProphet"
// globals: `guard variable for'CDOTA_Unit_Hero_DeathProphet::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DeathProphetClass, CDOTA_Unit_Hero_DeathProphet::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DeathProphetClass, __dso_handle, CDOTA_Unit_Hero_DeathProphet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_DeathProphet::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DeathProphetClassInfo, CDOTA_Unit_Hero_DeathProphet::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DeathProphetClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_DeathProphet::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_DeathProphet::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DeathProphetClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_DeathProphet::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DeathProphetClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_DeathProphet::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DeathProphetClass);
    CDOTA_Unit_Hero_DeathProphet::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DeathProphetClass._vptr_CEntityClass = off_43E8FD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_DeathProphet::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DeathProphetClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_DeathProphet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_DeathProphet::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DeathProphetClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_DeathProphetClass != 0 )
    return &CDOTA_Unit_Hero_DeathProphet::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DeathProphetClass;
  if ( `guard variable for'CDOTA_Unit_Hero_DeathProphet::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DeathProphetClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_DeathProphet::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DeathProphetClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_DeathProphet::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DeathProphetClassInfo,
      "CDOTA_Unit_Hero_DeathProphet",
      "npc_dota_hero_death_prophet",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_DeathProphet::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DeathProphetClassInfo);
  }
  CDOTA_Unit_Hero_DeathProphet::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DeathProphetClass.m_pClassInfo = &CDOTA_Unit_Hero_DeathProphet::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DeathProphetClassInfo;
  CDOTA_Unit_Hero_DeathProphet::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DeathProphetClass.m_pBaseClassInfo = CDOTA_Unit_Hero_DeathProphet::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DeathProphetClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_DeathProphetClass = &CDOTA_Unit_Hero_DeathProphet::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DeathProphetClass;
  CDOTA_Unit_Hero_DeathProphet::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DeathProphetClassInfo.m_pClass = &CDOTA_Unit_Hero_DeathProphet::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DeathProphetClass;
  CDOTA_Unit_Hero_DeathProphet::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DeathProphetClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_DeathProphetClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_DeathProphet::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DeathProphetClass;
}


// CDOTA_Unit_Hero_DeathProphet::GetDeathEffectName  (line 80, @0x0000000002ab84e0, libserver.so)
// strings: "particles/units/heroes/hero_death_prophet/death_prophet_death.vpcf"
const char *__fastcall CDOTA_Unit_Hero_DeathProphet::GetDeathEffectName(CDOTA_Unit_Hero_DeathProphet *const this)
{
  return "particles/units/heroes/hero_death_prophet/death_prophet_death.vpcf";
}


// CDOTA_Unit_Hero_DeathProphet::YouForgotToImplementOrDeclareServerClass  (line 87, @0x0000000002a77740, libserver.so)
int __fastcall CDOTA_Unit_Hero_DeathProphet::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_DeathProphet *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_DeathProphet::GetServerClass  (line 87, @0x0000000002a8a4b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_DeathProphet::GetServerClass(CDOTA_Unit_Hero_DeathProphet *const this)
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


// CDOTA_Unit_Hero_DeathProphet::Precache  (line 95, @0x0000000002a7b1d0, libserver.so)
// calls: PrecacheParticleSystem, CDOTA_BaseNPC_Hero::Precache
// strings: "particles/units/heroes/hero_razor/razor_static_link.vpcf"
void __fastcall CDOTA_Unit_Hero_DeathProphet::Precache(
        CDOTA_Unit_Hero_DeathProphet *const this,
        const CEntityPrecacheContext *pContext)
{
  PrecacheParticleSystem("particles/units/heroes/hero_razor/razor_static_link.vpcf", pContext);
  CDOTA_BaseNPC_Hero::Precache(this, pContext);
}


// CDOTA_Unit_Hero_DeathProphet::Spawn  (line 105, @0x0000000002a7a1a0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Spawn, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "particles/units/heroes/hero_death_prophet/death_prophet_spawn.vpcf", "attach_hitloc"
void __fastcall CDOTA_Unit_Hero_DeathProphet::Spawn(
        CDOTA_Unit_Hero_DeathProphet *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  const Vector *AbsOrigin; // r13
  CDOTA_ParticleManager *v6; // rax
  CDOTA_ParticleManager *v7; // rax

  CDOTA_BaseNPC_Hero::Spawn(this, pKeyValues);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_death_prophet/death_prophet_spawn.vpcf",
               2,
               this,
               0,
               0);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v6 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v6, Particle, 0, this, 5, "attach_hitloc", *AbsOrigin, 1);
  v7 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v7, Particle);
}


// CDOTA_Unit_Hero_DeathProphet::OnDying  (line 116, @0x0000000002a7a3f0, libserver.so)
// calls: CBaseEntity::AddEffects, CDOTA_BaseNPC::UnitEmitSound
// strings: "Hero_DeathProphet.Death"
void __fastcall CDOTA_Unit_Hero_DeathProphet::OnDying(CDOTA_Unit_Hero_DeathProphet *const this)
{
  if ( !this->m_bCustomKillEffect.m_Value )
    CBaseEntity::AddEffects(this, 32);
  CDOTA_BaseNPC::UnitEmitSound(this, "Hero_DeathProphet.Death", 0.0, 0, 0);
}


// CDOTA_Ability_DeathProphet_CarrionSwarm::~CDOTA_Ability_DeathProphet_CarrionSwarm  (line 135, @0x0000000002ac5280, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_DeathProphet_CarrionSwarm::~CDOTA_Ability_DeathProphet_CarrionSwarm(
        CDOTA_Ability_DeathProphet_CarrionSwarm *const this)
{
  this->_vptr_IHandleEntity = &off_43EA430;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_DeathProphet_CarrionSwarm::~CDOTA_Ability_DeathProphet_CarrionSwarm  (line 135, @0x0000000002ac52a0, libserver.so)  // inlines: ~CDOTA_Ability_DeathProphet_CarrionSwarm
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_DeathProphet_CarrionSwarm::~CDOTA_Ability_DeathProphet_CarrionSwarm(
        CDOTA_Ability_DeathProphet_CarrionSwarm *const this)
{
  this->_vptr_IHandleEntity = &off_43EA430;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_DeathProphet_CarrionSwarm::Schema_DynamicBinding  (line 137, @0x0000000002ab84f0, libserver.so)
// globals: CDOTA_Ability_DeathProphet_CarrionSwarm::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DeathProphet_CarrionSwarm::Schema_DynamicBinding(
        const CDOTA_Ability_DeathProphet_CarrionSwarm *const this)
{
  return CDOTA_Ability_DeathProphet_CarrionSwarm::s_pSchemaBinding;
}


// CDOTA_Ability_DeathProphet_CarrionSwarm::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 137, @0x0000000002ab8500, libserver.so)
// globals: CDOTA_Ability_DeathProphet_CarrionSwarm::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DeathProphet_CarrionSwarm::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_DeathProphet_CarrionSwarm::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DeathProphet_CarrionSwarm::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_DeathProphet_CarrionSwarm::CEntityInstanceEntityClass::DestructInstance  (line 137, @0x0000000002ab8510, libserver.so)  // inlines: Destruct<CDOTA_Ability_DeathProphet_CarrionSwarm>
void __fastcall CDOTA_Ability_DeathProphet_CarrionSwarm::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_DeathProphet_CarrionSwarm::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_DeathProphet_CarrionSwarm::CEntityInstanceEntityClass::FreeInstance  (line 137, @0x0000000002ab8530, libserver.so)
void __fastcall CDOTA_Ability_DeathProphet_CarrionSwarm::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_DeathProphet_CarrionSwarm::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_DeathProphet_CarrionSwarm::CEntityInstanceEntityClass::CanAllocate  (line 137, @0x0000000002ab8550, libserver.so)
bool __fastcall CDOTA_Ability_DeathProphet_CarrionSwarm::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_DeathProphet_CarrionSwarm::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_DeathProphet_CarrionSwarm::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 137, @0x0000000002ab8560, libserver.so)
// globals: CDOTA_Ability_DeathProphet_CarrionSwarm::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_DeathProphet_CarrionSwarm::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_DeathProphet_CarrionSwarm::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DeathProphet_CarrionSwarm::s_pSchemaBinding;
}


// CDOTA_Ability_DeathProphet_CarrionSwarm::CEntityInstanceEntityClass::AllocateInstance  (line 137, @0x0000000002abeac0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_DeathProphet_CarrionSwarm::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_DeathProphet_CarrionSwarm::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 936);
  memset(v1, 0, 0x3A8u);
  return v1;
}


// CDOTA_Ability_DeathProphet_CarrionSwarm::CEntityInstanceEntityClass::ConstructInstance  (line 137, @0x0000000002ac28a0, libserver.so)  // inlines: CDOTA_Ability_DeathProphet_CarrionSwarm, Construct<CDOTA_Ability_DeathProphet_CarrionSwarm>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_DeathProphet_CarrionSwarm::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_DeathProphet_CarrionSwarm::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43EA430;
  }
  return p;
}


// CDOTA_Ability_DeathProphet_CarrionSwarm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 137, @0x0000000002acbc50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_DeathProphet_CarrionSwarm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DeathProphet_CarrionSwarm::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_DeathProphet_CarrionSwarm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 137, @0x0000000002acbc70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_DeathProphet_CarrionSwarm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DeathProphet_CarrionSwarm::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_DeathProphet_CarrionSwarm::GetEntityClassInternal  (line 137, @0x0000000002ada3e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "death_prophet_carrion_swarm", "CDOTA_Ability_DeathProphet_CarrionSwarm"
// globals: `guard variable for'CDOTA_Ability_DeathProphet_CarrionSwarm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_CarrionSwarmClass, CDOTA_Ability_DeathProphet_CarrionSwarm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_CarrionSwarmClass, __dso_handle, CDOTA_Ability_DeathProphet_CarrionSwarm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_DeathProphet_CarrionSwarm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_CarrionSwarmClassInfo, CDOTA_Ability_DeathProphet_CarrionSwarm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_CarrionSwarmClassInfo
CEntityClass *__cdecl CDOTA_Ability_DeathProphet_CarrionSwarm::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_DeathProphet_CarrionSwarm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_CarrionSwarmClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DeathProphet_CarrionSwarm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_CarrionSwarmClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_DeathProphet_CarrionSwarm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_CarrionSwarmClass);
    CDOTA_Ability_DeathProphet_CarrionSwarm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_CarrionSwarmClass._vptr_CEntityClass = off_43EA3B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DeathProphet_CarrionSwarm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_CarrionSwarmClass);
    __cxa_atexit(
      CDOTA_Ability_DeathProphet_CarrionSwarm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_DeathProphet_CarrionSwarm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_CarrionSwarmClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_DeathProphet_CarrionSwarmClass != 0 )
    return &CDOTA_Ability_DeathProphet_CarrionSwarm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_CarrionSwarmClass;
  if ( `guard variable for'CDOTA_Ability_DeathProphet_CarrionSwarm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_CarrionSwarmClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DeathProphet_CarrionSwarm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_CarrionSwarmClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_DeathProphet_CarrionSwarm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_CarrionSwarmClassInfo,
      "CDOTA_Ability_DeathProphet_CarrionSwarm",
      "death_prophet_carrion_swarm",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DeathProphet_CarrionSwarm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_CarrionSwarmClassInfo);
  }
  CDOTA_Ability_DeathProphet_CarrionSwarm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_CarrionSwarmClass.m_pClassInfo = &CDOTA_Ability_DeathProphet_CarrionSwarm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_CarrionSwarmClassInfo;
  CDOTA_Ability_DeathProphet_CarrionSwarm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_CarrionSwarmClass.m_pBaseClassInfo = CDOTA_Ability_DeathProphet_CarrionSwarm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_CarrionSwarmClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_DeathProphet_CarrionSwarmClass = &CDOTA_Ability_DeathProphet_CarrionSwarm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_CarrionSwarmClass;
  CDOTA_Ability_DeathProphet_CarrionSwarm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_CarrionSwarmClassInfo.m_pClass = &CDOTA_Ability_DeathProphet_CarrionSwarm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_CarrionSwarmClass;
  CDOTA_Ability_DeathProphet_CarrionSwarm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_CarrionSwarmClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_DeathProphet_CarrionSwarmClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_DeathProphet_CarrionSwarm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_CarrionSwarmClass;
}


// CDOTA_Ability_DeathProphet_CarrionSwarm::GetAssociatedSecondaryAbilities  (line 145, @0x0000000002ab8570, libserver.so)
// strings: "death_prophet_witchcraft"
const char *__fastcall CDOTA_Ability_DeathProphet_CarrionSwarm::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_DeathProphet_CarrionSwarm *const this)
{
  return "death_prophet_witchcraft";
}


// CDOTA_Ability_DeathProphet_CarrionSwarm::YouForgotToImplementOrDeclareServerClass  (line 163, @0x0000000002a77750, libserver.so)
int __fastcall CDOTA_Ability_DeathProphet_CarrionSwarm::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_DeathProphet_CarrionSwarm *const this)
{
  return 0;
}


// CDOTA_Ability_DeathProphet_CarrionSwarm::GetServerClass  (line 163, @0x0000000002a8a370, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_DeathProphet_CarrionSwarm::GetServerClass(
        CDOTA_Ability_DeathProphet_CarrionSwarm *const this)
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


// CDOTA_Ability_DeathProphet_CarrionSwarm::OnSpellStart  (line 172, @0x0000000002a9f360, libserver.so)  // inlines: CEntityHandle, CHandle, DOTAGameRules, GetEHandle, GetEntryIndex, GetGameTime, GetLevelSpecialValueFor<int>, GetSerialNumber, Set, Vector, VectorMultiply, VectorNormalize2D, VectorSubtract, operator*, operator-, operator=, sLinearProjectileCreateInfo
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCursorTarget, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCaster, VectorNormalize, CDOTA_ProjectileManager::CreateLinearProjectile, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_BaseNPC::UnitEmitSound, CBaseEntity::GetAbsAngles, AngleVectors (13 total)
// strings: "start_radius", "end_radius", "particles/units/heroes/hero_death_prophet/death_prophet_carrion_swarm.vpcf", "Hero_DeathProphet.CarrionSwarm"
void __fastcall CDOTA_Ability_DeathProphet_CarrionSwarm::OnSpellStart(
        CDOTA_Ability_DeathProphet_CarrionSwarm *const this)
{
  int LevelSpecialValue; // r12d
  int v3; // r13d
  int v4; // r12d
  CBaseEntity *CursorTarget; // rax
  const Vector *AbsOrigin; // rax
  float v7; // r14d
  float v8; // r15d
  CDOTA_BaseNPC *Caster; // rax
  const Vector *v10; // rax
  vec_t v11; // xmm1_4
  vec_t v12; // xmm0_4
  int v13; // edx
  float v14; // xmm0_4
  float v15; // r14d
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v18; // rax
  const Vector *v19; // rax
  vec_t v20; // xmm0_4
  CDOTA_BaseNPC *v21; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v23; // eax
  __int16 v24; // cx
  CDOTA_BaseNPC *v25; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v27; // rax
  const Vector *v28; // rax
  int m_nFXIndex; // r13d
  const Vector *v30; // r12
  CDOTA_ParticleManager *v31; // rax
  CDOTA_ParticleManager *v32; // rax
  float start_radius; // xmm0_4
  CDOTA_ParticleManager *v34; // rax
  CDOTA_ParticleManager *v35; // rax
  CDOTA_BaseNPC *v36; // rax
  CDOTA_BaseNPC *v37; // rax
  const QAngle *AbsAngles; // rax
  float v39; // [rsp+Ch] [rbp-F4h]
  Vector vCastDir; // [rsp+20h] [rbp-E0h] BYREF
  double v41[2]; // [rsp+30h] [rbp-D0h]
  double v42; // [rsp+40h] [rbp-C0h]
  float v43; // [rsp+48h] [rbp-B8h]
  sLinearProjectileCreateInfo info; // [rsp+50h] [rbp-B0h] BYREF
  Vector CursorPosition; // 0:kr00_12.12

  this->start_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "start_radius", -1, 0);
  this->end_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "end_radius", -1, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "range", -1, 0);
  v3 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
  v4 = (*(this->_vptr_IHandleEntity + 228))(this) + LevelSpecialValue;
  if ( CDOTABaseAbility::GetCursorTarget(this) != 0 )
  {
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(CursorTarget);
    v7 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(AbsOrigin->x)));
    v8 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(AbsOrigin->y)));
  }
  else
  {
    CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
    v7 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(CursorPosition.x)));
    v8 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(CursorPosition.y)));
  }
  Caster = CDOTABaseAbility::GetCaster(this);
  v10 = CBaseEntity::GetAbsOrigin(Caster);
  v11 = v7 - v10->x;
  v12 = v8 - v10->y;
  vCastDir.z = 0.0;
  vCastDir.x = v11;
  vCastDir.y = v12;
  if ( VectorNormalize(&vCastDir) < 0.0099999998 )
  {
    v37 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v37);
    AngleVectors(AbsAngles, &vCastDir, 0, 0);
  }
  v13 = (v3 * (v4 / (v4 - this->start_radius)));
  if ( g_pGameRules != 0 )
  {
    v14 = *&g_pGameRules[18].m_szQuestName[20];
    v15 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
  }
  else
  {
    v15 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
    v14 = 0.0;
  }
  this->m_fStartTime = v14;
  info.bHasFrontalCone = 1;
  info.hSource.m_Index = -1;
  info.bCheckStartPosition = 0;
  v39 = v13;
  y = vec3_origin.y;
  info.fDistance = 0.0;
  info.vSpawnOrigin.x = vec3_origin.x;
  info.vSpawnOrigin.y = y;
  info.vVelocity.x = vec3_origin.x;
  info.vVelocity.y = y;
  info.vAcceleration.x = vec3_origin.x;
  info.vAcceleration.y = y;
  info.pszEffectName = 0;
  info.fStartRadius = 0.0;
  info.fEndRadius = 0.0;
  info.iUnitTargetTeam = 0;
  info.iUnitTargetType = 0;
  info.iUnitTargetFlags = 0;
  info.bProvidesVision = 0;
  info.iVisionTeamNumber = -1;
  info.iVisionRadius = -1;
  this->m_fTotalTime = v4 / v13;
  z = vec3_origin.z;
  info.bDrawsOnMinimap = 0;
  info.vSpawnOrigin.z = z;
  info.vVelocity.z = z;
  info.vAcceleration.z = z;
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
  info.fDistance = v4;
  info.vVelocity.y = vCastDir.y * v39;
  info.vSpawnOrigin.z = v20;
  info.vVelocity.x = vCastDir.x * v39;
  info.vVelocity.z = vCastDir.z * v39;
  info.fStartRadius = this->start_radius;
  info.fEndRadius = this->end_radius;
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
  this->m_nProjectileHandle = CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  v25 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  this->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_death_prophet/death_prophet_carrion_swarm.vpcf",
                       2,
                       0,
                       0,
                       v25);
  v27 = CDOTABaseAbility::GetCaster(this);
  v28 = CBaseEntity::GetAbsOrigin(v27);
  m_nFXIndex = this->m_nFXIndex;
  v30 = v28;
  v31 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v31, m_nFXIndex, 0, *&v30->x, v30->z);
  LODWORD(v30) = this->m_nFXIndex;
  *(&v42 + 1) = vCastDir.y * v39;
  v43 = vCastDir.z * v39;
  *&v42 = v39 * vCastDir.x;
  v32 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v32, v30, 1, v42, v43);
  start_radius = this->start_radius;
  LODWORD(v41[1]) = 0;
  LODWORD(v30) = this->m_nFXIndex;
  *v41 = start_radius;
  *(v41 + 1) = start_radius;
  v34 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v34, v30, 2, v41[0], *&v41[1]);
  *(v41 + 4) = 0.0;
  LODWORD(v30) = this->m_nFXIndex;
  *v41 = this->m_fTotalTime + 1.0;
  v35 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v35, v30, 4, v41[0], *&v41[1]);
  v36 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v36, "Hero_DeathProphet.CarrionSwarm", v15, 0, 0);
}


// CDOTA_Ability_DeathProphet_CarrionSwarm::OnProjectileThink  (line 228, @0x0000000002a7b270, libserver.so)  // inlines: Vector
// calls: CDOTA_ProjectileManager::GetLinearProjectileRadius, GetParticleManager, CDOTA_ParticleManager::SetParticleControl
void __fastcall CDOTA_Ability_DeathProphet_CarrionSwarm::OnProjectileThink(
        CDOTA_Ability_DeathProphet_CarrionSwarm *const this,
        int iProjectileHandle)
{
  CDOTA_Ability_DeathProphet_CarrionSwarm *v2; // rbx
  float LinearProjectileRadius; // xmm0_4
  CDOTA_ParticleManager *ParticleManager; // rax
  double fRadius; // [rsp+0h] [rbp-20h]

  v2 = this;
  LinearProjectileRadius = CDOTA_ProjectileManager::GetLinearProjectileRadius(
                             &g_DOTAProjectileManager,
                             this->m_nProjectileHandle);
  LODWORD(v2) = v2->m_nFXIndex;
  *&fRadius = LinearProjectileRadius;
  *(&fRadius + 1) = LinearProjectileRadius;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, v2, 2, fRadius, 0.0);
}


// CDOTA_Ability_DeathProphet_CarrionSwarm::OnProjectileHit  (line 238, @0x0000000002a863d0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsRealHero, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator CBaseEntity*, operator CEntityInstance*, operator==<CBaseEntity>
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTABaseAbility::GetCaster, ApplyDamage, EconEntity_OnOwnerKillEaterEvent, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::FindReplacementSound, CDOTA_BaseNPC::UnitEmitSound
// strings: "particles/units/heroes/hero_death_prophet/death_prophet_carrion_swarm_impact.vpcf", "attach_hitloc", "Hero_DeathProphet.CarrionSwarm.Damage"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
__int64 __fastcall CDOTA_Ability_DeathProphet_CarrionSwarm::OnProjectileHit(
        CDOTA_Ability_DeathProphet_CarrionSwarm *const this,
        unsigned __int16 *hTarget,
        const Vector *const vLocation)
{
  int v5; // eax
  unsigned int v6; // esi
  unsigned __int64 v7; // rdx
  CEntityIdentity *v8; // rcx
  CEntityIdentity *v9; // rsi
  CEntityIdentity *v10; // rcx
  int m_nFXIndex; // ebx
  CDOTA_ParticleManager *v12; // rax
  CEntityInstance *m_pInstance; // rbx
  int v15; // r14d
  CDOTA_BaseNPC *Caster; // rax
  double v17; // xmm0_8
  CDOTA_BaseNPC_Hero *v18; // r14
  CDOTA_BaseNPC *v19; // rax
  CDOTA_BaseNPC_Hero *v20; // rdi
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r14d
  CDOTA_ParticleManager *v23; // rax
  CDOTA_ParticleManager *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  const char *ReplacementSound; // rax

  v5 = *hTarget;
  if ( (*hTarget + 2) <= 1 )
    goto LABEL_7;
  v6 = *hTarget;
  v7 = v6;
  LOWORD(v7) = v6 & 0x7FFF;
  v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v7 >> 9) & 0x3F];
  if ( v8 == 0 )
    goto LABEL_7;
  v9 = &v8[v6 & 0x1FF];
  if ( v9 != 0 && v5 == v9->m_EHandle.m_Index )
  {
    m_pInstance = v9->m_pInstance;
    if ( v9->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
    {
      v15 = (*(this->_vptr_IHandleEntity + 247))(this);
      Caster = CDOTABaseAbility::GetCaster(this);
      v17 = ApplyDamage(Caster, m_pInstance, this, v15, 2, 0);
      if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
        && LOBYTE(m_pInstance[71].m_pEntity) == 0
        && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance, v17) == 0 )
      {
        v18 = 0;
        if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
          && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
        {
          v18 = m_pInstance;
        }
        v19 = CDOTABaseAbility::GetCaster(this);
        v20 = 0;
        if ( v19 != 0 && v19->m_bIsDOTANPC && (v19->m_iUnitType & 1) != 0 && !v19->m_bIsIllusion.m_Value )
          v20 = v19;
        EconEntity_OnOwnerKillEaterEvent(
          v20,
          v18,
          kill_eater_event_t::kKillEaterEventType_DeathProphet_CryptSwarmKills,
          1,
          INVALID_ITEM_DEF_INDEX);
      }
      ParticleManager = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_death_prophet/death_prophet_carrion_swarm_impact.vpcf",
                   2,
                   m_pInstance,
                   0,
                   0);
      v23 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v23, Particle, 0, m_pInstance, 5, "attach_hitloc", vec3_invalid, 1);
      v24 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v24, Particle);
      v25 = CDOTABaseAbility::GetCaster(this);
      ReplacementSound = CDOTA_BaseNPC::FindReplacementSound(v25, "Hero_DeathProphet.CarrionSwarm.Damage");
      CDOTA_BaseNPC::UnitEmitSound(m_pInstance, ReplacementSound, 0.0, 0, 0);
      v5 = *hTarget;
      if ( (*hTarget + 2) <= 1 )
        goto LABEL_7;
      LOWORD(v7) = *hTarget & 0x7FFF;
      v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[v7 >> 9];
      if ( v8 == 0 )
        goto LABEL_7;
    }
  }
  v10 = &v8[v7 & 0x1FF];
  if ( v10 == 0 || v5 != v10->m_EHandle.m_Index || v10->m_pInstance == 0 )
  {
LABEL_7:
    m_nFXIndex = this->m_nFXIndex;
    v12 = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(v12, m_nFXIndex, 0);
  }
  return 0;
}


// CDOTA_Ability_DeathProphet_CarrionSwarm::GetManaCost  (line 267, @0x0000000002aa0770, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetManaCost
// strings: "death_prophet_witchcraft", "carrion_swarm_mana_cost_adjust"
int __fastcall CDOTA_Ability_DeathProphet_CarrionSwarm::GetManaCost(
        CDOTA_Ability_DeathProphet_CarrionSwarm *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int LevelSpecialValue; // r13d

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "death_prophet_witchcraft", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                          AbilityByName,
                          "carrion_swarm_mana_cost_adjust",
                          -1,
                          1);
  else
    LevelSpecialValue = 0;
  return LevelSpecialValue + CDOTABaseAbility::GetManaCost(this, iLevel);
}


// CDOTA_Ability_DeathProphet_CarrionSwarm::GetCooldown  (line 286, @0x0000000002a9b200, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCooldown
// strings: "death_prophet_witchcraft", "carrion_swarm_cooldown_adjust"
float __fastcall CDOTA_Ability_DeathProphet_CarrionSwarm::GetCooldown(
        CDOTA_Ability_DeathProphet_CarrionSwarm *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float fAdjustment; // [rsp+Ch] [rbp-14h]

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "death_prophet_witchcraft", 0);
  if ( AbilityByName != 0 )
  {
    if ( AbilityByName->m_iLevel.m_Value <= 0 )
      fAdjustment = 0.0;
    else
      fAdjustment = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                      AbilityByName,
                      "carrion_swarm_cooldown_adjust",
                      -1,
                      1);
  }
  else
  {
    fAdjustment = 0.0;
  }
  return CDOTABaseAbility::GetCooldown(this, iLevel) + fAdjustment;
}


// CDOTA_Ability_DeathProphet_CarrionSwarm::GetAbilityDamageToTargetOverInterval  (line 305, @0x0000000002a7c7a0, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_DeathProphet_CarrionSwarm::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_DeathProphet_CarrionSwarm *const this,
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


// CDOTA_Ability_DeathProphet_Silence::~CDOTA_Ability_DeathProphet_Silence  (line 319, @0x0000000002ac52d0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_DeathProphet_Silence::~CDOTA_Ability_DeathProphet_Silence(
        CDOTA_Ability_DeathProphet_Silence *const this)
{
  this->_vptr_IHandleEntity = &off_43EAF30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_DeathProphet_Silence::~CDOTA_Ability_DeathProphet_Silence  (line 319, @0x0000000002ac52f0, libserver.so)  // inlines: ~CDOTA_Ability_DeathProphet_Silence
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_DeathProphet_Silence::~CDOTA_Ability_DeathProphet_Silence(
        CDOTA_Ability_DeathProphet_Silence *const this)
{
  this->_vptr_IHandleEntity = &off_43EAF30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_DeathProphet_Silence::Schema_DynamicBinding  (line 321, @0x0000000002ab8580, libserver.so)
// globals: CDOTA_Ability_DeathProphet_Silence::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DeathProphet_Silence::Schema_DynamicBinding(
        const CDOTA_Ability_DeathProphet_Silence *const this)
{
  return CDOTA_Ability_DeathProphet_Silence::s_pSchemaBinding;
}


// CDOTA_Ability_DeathProphet_Silence::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 321, @0x0000000002ab8590, libserver.so)
// globals: CDOTA_Ability_DeathProphet_Silence::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DeathProphet_Silence::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_DeathProphet_Silence::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DeathProphet_Silence::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_DeathProphet_Silence::CEntityInstanceEntityClass::DestructInstance  (line 321, @0x0000000002ab85a0, libserver.so)  // inlines: Destruct<CDOTA_Ability_DeathProphet_Silence>
void __fastcall CDOTA_Ability_DeathProphet_Silence::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_DeathProphet_Silence::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_DeathProphet_Silence::CEntityInstanceEntityClass::FreeInstance  (line 321, @0x0000000002ab85c0, libserver.so)
void __fastcall CDOTA_Ability_DeathProphet_Silence::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_DeathProphet_Silence::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_DeathProphet_Silence::CEntityInstanceEntityClass::CanAllocate  (line 321, @0x0000000002ab85e0, libserver.so)
bool __fastcall CDOTA_Ability_DeathProphet_Silence::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_DeathProphet_Silence::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_DeathProphet_Silence::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 321, @0x0000000002ab85f0, libserver.so)
// globals: CDOTA_Ability_DeathProphet_Silence::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_DeathProphet_Silence::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_DeathProphet_Silence::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DeathProphet_Silence::s_pSchemaBinding;
}


// CDOTA_Ability_DeathProphet_Silence::CEntityInstanceEntityClass::AllocateInstance  (line 321, @0x0000000002abeb00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_DeathProphet_Silence::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_DeathProphet_Silence::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_DeathProphet_Silence::CEntityInstanceEntityClass::ConstructInstance  (line 321, @0x0000000002ac28d0, libserver.so)  // inlines: CDOTA_Ability_DeathProphet_Silence, Construct<CDOTA_Ability_DeathProphet_Silence>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_DeathProphet_Silence::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_DeathProphet_Silence::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43EAF30;
  }
  return p;
}


// CDOTA_Ability_DeathProphet_Silence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 321, @0x0000000002acbca0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_DeathProphet_Silence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DeathProphet_Silence::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_DeathProphet_Silence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 321, @0x0000000002acbcc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_DeathProphet_Silence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DeathProphet_Silence::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_DeathProphet_Silence::GetEntityClassInternal  (line 321, @0x0000000002ada530, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "death_prophet_silence", "CDOTA_Ability_DeathProphet_Silence"
// globals: `guard variable for'CDOTA_Ability_DeathProphet_Silence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_SilenceClass, CDOTA_Ability_DeathProphet_Silence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_SilenceClass, __dso_handle, CDOTA_Ability_DeathProphet_Silence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_DeathProphet_Silence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_SilenceClassInfo, CDOTA_Ability_DeathProphet_Silence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_SilenceClassInfo
CEntityClass *__cdecl CDOTA_Ability_DeathProphet_Silence::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_DeathProphet_Silence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_SilenceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DeathProphet_Silence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_SilenceClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_DeathProphet_Silence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_SilenceClass);
    CDOTA_Ability_DeathProphet_Silence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_SilenceClass._vptr_CEntityClass = off_43EAEB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DeathProphet_Silence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_SilenceClass);
    __cxa_atexit(
      CDOTA_Ability_DeathProphet_Silence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_DeathProphet_Silence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_SilenceClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_DeathProphet_SilenceClass != 0 )
    return &CDOTA_Ability_DeathProphet_Silence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_SilenceClass;
  if ( `guard variable for'CDOTA_Ability_DeathProphet_Silence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_SilenceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DeathProphet_Silence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_SilenceClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_DeathProphet_Silence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_SilenceClassInfo,
      "CDOTA_Ability_DeathProphet_Silence",
      "death_prophet_silence",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DeathProphet_Silence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_SilenceClassInfo);
  }
  CDOTA_Ability_DeathProphet_Silence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_SilenceClass.m_pClassInfo = &CDOTA_Ability_DeathProphet_Silence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_SilenceClassInfo;
  CDOTA_Ability_DeathProphet_Silence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_SilenceClass.m_pBaseClassInfo = CDOTA_Ability_DeathProphet_Silence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_SilenceClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_DeathProphet_SilenceClass = &CDOTA_Ability_DeathProphet_Silence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_SilenceClass;
  CDOTA_Ability_DeathProphet_Silence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_SilenceClassInfo.m_pClass = &CDOTA_Ability_DeathProphet_Silence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_SilenceClass;
  CDOTA_Ability_DeathProphet_Silence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_SilenceClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_DeathProphet_SilenceClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_DeathProphet_Silence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_SilenceClass;
}


// CDOTA_Ability_DeathProphet_Silence::GetAssociatedSecondaryAbilities  (line 338, @0x0000000002ab8600, libserver.so)
// strings: "death_prophet_witchcraft"
const char *__fastcall CDOTA_Ability_DeathProphet_Silence::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_DeathProphet_Silence *const this)
{
  return "death_prophet_witchcraft";
}


// CDOTA_Ability_DeathProphet_Silence::HasSilence  (line 342, @0x0000000002ab8610, libserver.so)
bool __fastcall CDOTA_Ability_DeathProphet_Silence::HasSilence(CDOTA_Ability_DeathProphet_Silence *const this)
{
  return 1;
}


// CDOTA_Ability_DeathProphet_Silence::YouForgotToImplementOrDeclareServerClass  (line 345, @0x0000000002a77760, libserver.so)
int __fastcall CDOTA_Ability_DeathProphet_Silence::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_DeathProphet_Silence *const this)
{
  return 0;
}


// CDOTA_Ability_DeathProphet_Silence::GetServerClass  (line 345, @0x0000000002a8a5b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_DeathProphet_Silence::GetServerClass(
        CDOTA_Ability_DeathProphet_Silence *const this)
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


// CDOTA_Ability_DeathProphet_Silence::OnSpellStart  (line 354, @0x0000000002aa5470, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsRealHero, IsValid, LookupEntity, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorPosition, FindUnitsInRadius, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_ParticleManager::SetParticleControl, KeyValues::KeyValues, CDOTABaseAbility::GetDuration (21 total)
// strings: "particles/units/heroes/hero_death_prophet/death_prophet_silence_cast.vpcf", "attach_attack1", "particles/units/heroes/hero_death_prophet/death_prophet_silence.vpcf", "modifier_silence", "particles/units/heroes/hero_death_prophet/death_prophet_silence_impact.vpcf", "attach_hitloc" (7 total)
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_DeathProphet_Silence::OnSpellStart(CDOTA_Ability_DeathProphet_Silence *const this)
{
  __m128i v2; // xmm2
  float v3; // r14d
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v8; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v10; // r13
  CDOTA_ParticleManager *v11; // rax
  CDOTA_ParticleManager *v12; // rax
  CDOTA_ParticleManager *v13; // rax
  CDOTA_ParticleManager *v14; // rax
  CDOTA_ParticleManager *v15; // rax
  CDOTA_ParticleManager *v16; // rax
  __int64 v17; // r12
  CHandle<CBaseEntity> *v18; // rdx
  uint32 m_Index; // eax
  __int16 v20; // cx
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // rdx
  CEntityInstance *m_pInstance; // rbx
  float v24; // xmm1_4
  CDOTA_BaseNPC *v25; // rax
  CDOTA_ParticleManager *v26; // rax
  int Particle; // r14d
  const Vector *v28; // r15
  CDOTA_ParticleManager *v29; // rax
  CDOTA_ParticleManager *v30; // rax
  CDOTA_BaseNPC *v31; // rax
  CDOTA_BaseNPC_Hero *v32; // rax
  int nHeroesSilenced; // [rsp+24h] [rbp-9Ch]
  Vector vPos; // [rsp+30h] [rbp-90h] BYREF
  Vector vPosition; // [rsp+40h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+50h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v39; // [rsp+88h] [rbp-38h]

  v39 = __readfsqword(0x28u);
  entities.m_Size = 0;
  *v2.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  Caster = CDOTABaseAbility::GetCaster(this);
  vPosition = CDOTABaseAbility::GetCursorPosition(this);
  v5 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v5->m_iTeamNum.m_Value, &vPosition, Caster, v3, &entities, 2, 3, 0, 0, 0);
  v6 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v6) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/units/heroes/hero_death_prophet/death_prophet_silence_cast.vpcf",
                  2,
                  v6,
                  0,
                  0);
  v8 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
  v10 = CDOTABaseAbility::GetCaster(this);
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v11, v6, 0, v10, 5, "attach_attack1", *AbsOrigin, 1);
  v12 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v12, v6);
  v13 = GetParticleManager();
  LODWORD(v6) = CDOTA_ParticleManager::CreateParticle(
                  v13,
                  "particles/units/heroes/hero_death_prophet/death_prophet_silence.vpcf",
                  2,
                  0,
                  0,
                  0);
  vPosition = CDOTABaseAbility::GetCursorPosition(this);
  v14 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v14, v6, 0, *&vPosition.x, vPosition.z);
  *&vPos.x = LODWORD(v3);
  vPos.z = 0.0;
  v15 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v15, v6, 1, COERCE_DOUBLE(LODWORD(v3)), 0.0);
  v16 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v16, v6);
  if ( entities.m_Size > 0 )
  {
    nHeroesSilenced = 0;
    v17 = 0;
    do
    {
      while ( 1 )
      {
        v18 = &entities.m_Memory.m_pMemory[v17];
        m_Index = v18->m_Index;
        if ( v18->m_Index + 2 > 1 )
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
                break;
            }
          }
        }
        if ( entities.m_Size <= ++v17 )
          goto LABEL_13;
      }
      KeyValues::KeyValues(&kv, "modifier_silence");
      CDOTABaseAbility::GetDuration(this);
      KeyValues::SetFloat(&kv, "duration", v24);
      v25 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v25, this, "modifier_silence", &kv, 0);
      v26 = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   v26,
                   "particles/units/heroes/hero_death_prophet/death_prophet_silence_impact.vpcf",
                   2,
                   m_pInstance,
                   0,
                   0);
      v28 = CBaseEntity::GetAbsOrigin(m_pInstance);
      v29 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v29, Particle, 0, m_pInstance, 5, "attach_hitloc", *v28, 1);
      v30 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v30, Particle);
      if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        nHeroesSilenced += LOBYTE(m_pInstance[71].m_pEntity) == 0;
      KeyValues::~KeyValues(&kv);
      ++v17;
    }
    while ( entities.m_Size > v17 );
LABEL_13:
    if ( nHeroesSilenced > 1 )
    {
      v31 = CDOTABaseAbility::GetCaster(this);
      v32 = ToDOTABaseNPCRealHero(v31);
      EconEntity_OnOwnerKillEaterEvent(
        v32,
        0,
        kill_eater_event_t::kKillEaterEventType_DeathProphet_MultiHeroSilences,
        1,
        INVALID_ITEM_DEF_INDEX);
    }
  }
  vPos = CDOTABaseAbility::GetCursorPosition(this);
  DOTA_EmitSoundLocation(&vPos, "Hero_DeathProphet.Silence", 1);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Ability_DeathProphet_Silence::GetManaCost  (line 411, @0x0000000002aa07f0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetManaCost
// strings: "death_prophet_witchcraft", "silence_mana_cost_adjust"
int __fastcall CDOTA_Ability_DeathProphet_Silence::GetManaCost(
        CDOTA_Ability_DeathProphet_Silence *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int LevelSpecialValue; // r13d

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "death_prophet_witchcraft", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "silence_mana_cost_adjust", -1, 1);
  else
    LevelSpecialValue = 0;
  return LevelSpecialValue + CDOTABaseAbility::GetManaCost(this, iLevel);
}


// CDOTA_Ability_DeathProphet_Silence::GetCooldown  (line 430, @0x0000000002a9b290, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCooldown
// strings: "death_prophet_witchcraft", "silence_cooldown_adjust"
float __fastcall CDOTA_Ability_DeathProphet_Silence::GetCooldown(
        CDOTA_Ability_DeathProphet_Silence *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float fAdjustment; // [rsp+Ch] [rbp-14h]

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "death_prophet_witchcraft", 0);
  if ( AbilityByName != 0 )
  {
    if ( AbilityByName->m_iLevel.m_Value <= 0 )
      fAdjustment = 0.0;
    else
      fAdjustment = CDOTABaseAbility::GetLevelSpecialValueFor<float>(AbilityByName, "silence_cooldown_adjust", -1, 1);
  }
  else
  {
    fAdjustment = 0.0;
  }
  return CDOTABaseAbility::GetCooldown(this, iLevel) + fAdjustment;
}


// CDOTA_Ability_DeathProphet_Witchcraft::~CDOTA_Ability_DeathProphet_Witchcraft  (line 453, @0x0000000002ac5320, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_DeathProphet_Witchcraft::~CDOTA_Ability_DeathProphet_Witchcraft(
        CDOTA_Ability_DeathProphet_Witchcraft *const this)
{
  this->_vptr_IHandleEntity = &off_43EBA30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_DeathProphet_Witchcraft::~CDOTA_Ability_DeathProphet_Witchcraft  (line 453, @0x0000000002ac5340, libserver.so)  // inlines: ~CDOTA_Ability_DeathProphet_Witchcraft
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_DeathProphet_Witchcraft::~CDOTA_Ability_DeathProphet_Witchcraft(
        CDOTA_Ability_DeathProphet_Witchcraft *const this)
{
  this->_vptr_IHandleEntity = &off_43EBA30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_DeathProphet_Witchcraft::Schema_DynamicBinding  (line 455, @0x0000000002ab8620, libserver.so)
// globals: CDOTA_Ability_DeathProphet_Witchcraft::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DeathProphet_Witchcraft::Schema_DynamicBinding(
        const CDOTA_Ability_DeathProphet_Witchcraft *const this)
{
  return CDOTA_Ability_DeathProphet_Witchcraft::s_pSchemaBinding;
}


// CDOTA_Ability_DeathProphet_Witchcraft::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 455, @0x0000000002ab8630, libserver.so)
// globals: CDOTA_Ability_DeathProphet_Witchcraft::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DeathProphet_Witchcraft::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_DeathProphet_Witchcraft::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DeathProphet_Witchcraft::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_DeathProphet_Witchcraft::CEntityInstanceEntityClass::DestructInstance  (line 455, @0x0000000002ab8640, libserver.so)  // inlines: Destruct<CDOTA_Ability_DeathProphet_Witchcraft>
void __fastcall CDOTA_Ability_DeathProphet_Witchcraft::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_DeathProphet_Witchcraft::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_DeathProphet_Witchcraft::CEntityInstanceEntityClass::FreeInstance  (line 455, @0x0000000002ab8660, libserver.so)
void __fastcall CDOTA_Ability_DeathProphet_Witchcraft::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_DeathProphet_Witchcraft::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_DeathProphet_Witchcraft::CEntityInstanceEntityClass::CanAllocate  (line 455, @0x0000000002ab8680, libserver.so)
bool __fastcall CDOTA_Ability_DeathProphet_Witchcraft::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_DeathProphet_Witchcraft::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_DeathProphet_Witchcraft::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 455, @0x0000000002ab8690, libserver.so)
// globals: CDOTA_Ability_DeathProphet_Witchcraft::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_DeathProphet_Witchcraft::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_DeathProphet_Witchcraft::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DeathProphet_Witchcraft::s_pSchemaBinding;
}


// CDOTA_Ability_DeathProphet_Witchcraft::CEntityInstanceEntityClass::AllocateInstance  (line 455, @0x0000000002abeb40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_DeathProphet_Witchcraft::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_DeathProphet_Witchcraft::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_DeathProphet_Witchcraft::CEntityInstanceEntityClass::ConstructInstance  (line 455, @0x0000000002ac2900, libserver.so)  // inlines: CDOTA_Ability_DeathProphet_Witchcraft, Construct<CDOTA_Ability_DeathProphet_Witchcraft>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_DeathProphet_Witchcraft::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_DeathProphet_Witchcraft::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43EBA30;
  }
  return p;
}


// CDOTA_Ability_DeathProphet_Witchcraft::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 455, @0x0000000002acbcf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_DeathProphet_Witchcraft::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DeathProphet_Witchcraft::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_DeathProphet_Witchcraft::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 455, @0x0000000002acbd10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_DeathProphet_Witchcraft::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DeathProphet_Witchcraft::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_DeathProphet_Witchcraft::GetEntityClassInternal  (line 455, @0x0000000002ada680, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "death_prophet_witchcraft", "CDOTA_Ability_DeathProphet_Witchcraft"
// globals: `guard variable for'CDOTA_Ability_DeathProphet_Witchcraft::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_WitchcraftClass, CDOTA_Ability_DeathProphet_Witchcraft::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_WitchcraftClass, __dso_handle, CDOTA_Ability_DeathProphet_Witchcraft::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_DeathProphet_Witchcraft::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_WitchcraftClassInfo, CDOTA_Ability_DeathProphet_Witchcraft::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_WitchcraftClassInfo
CEntityClass *__cdecl CDOTA_Ability_DeathProphet_Witchcraft::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_DeathProphet_Witchcraft::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_WitchcraftClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DeathProphet_Witchcraft::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_WitchcraftClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_DeathProphet_Witchcraft::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_WitchcraftClass);
    CDOTA_Ability_DeathProphet_Witchcraft::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_WitchcraftClass._vptr_CEntityClass = off_43EB9B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DeathProphet_Witchcraft::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_WitchcraftClass);
    __cxa_atexit(
      CDOTA_Ability_DeathProphet_Witchcraft::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_DeathProphet_Witchcraft::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_WitchcraftClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_DeathProphet_WitchcraftClass != 0 )
    return &CDOTA_Ability_DeathProphet_Witchcraft::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_WitchcraftClass;
  if ( `guard variable for'CDOTA_Ability_DeathProphet_Witchcraft::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_WitchcraftClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DeathProphet_Witchcraft::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_WitchcraftClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_DeathProphet_Witchcraft::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_WitchcraftClassInfo,
      "CDOTA_Ability_DeathProphet_Witchcraft",
      "death_prophet_witchcraft",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DeathProphet_Witchcraft::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_WitchcraftClassInfo);
  }
  CDOTA_Ability_DeathProphet_Witchcraft::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_WitchcraftClass.m_pClassInfo = &CDOTA_Ability_DeathProphet_Witchcraft::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_WitchcraftClassInfo;
  CDOTA_Ability_DeathProphet_Witchcraft::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_WitchcraftClass.m_pBaseClassInfo = CDOTA_Ability_DeathProphet_Witchcraft::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_WitchcraftClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_DeathProphet_WitchcraftClass = &CDOTA_Ability_DeathProphet_Witchcraft::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_WitchcraftClass;
  CDOTA_Ability_DeathProphet_Witchcraft::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_WitchcraftClassInfo.m_pClass = &CDOTA_Ability_DeathProphet_Witchcraft::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_WitchcraftClass;
  CDOTA_Ability_DeathProphet_Witchcraft::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_WitchcraftClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_DeathProphet_WitchcraftClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_DeathProphet_Witchcraft::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_WitchcraftClass;
}


// CDOTA_Ability_DeathProphet_Witchcraft::IsHiddenWhenStolen  (line 458, @0x0000000002ab86a0, libserver.so)
bool __fastcall CDOTA_Ability_DeathProphet_Witchcraft::IsHiddenWhenStolen(
        CDOTA_Ability_DeathProphet_Witchcraft *const this)
{
  return 1;
}


// CDOTA_Ability_DeathProphet_Witchcraft::GetIntrinsicModifierName  (line 459, @0x0000000002ab86b0, libserver.so)
// strings: "modifier_death_prophet_witchcraft"
const char *__fastcall CDOTA_Ability_DeathProphet_Witchcraft::GetIntrinsicModifierName(
        CDOTA_Ability_DeathProphet_Witchcraft *const this)
{
  const char *result; // rax

  result = 0;
  if ( !this->m_bStolen.m_Value )
    return "modifier_death_prophet_witchcraft";
  return result;
}


// CDOTA_Modifier_DeathProphet_Witchcraft::~CDOTA_Modifier_DeathProphet_Witchcraft  (line 468, @0x0000000002ac1cf0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_DeathProphet_Witchcraft::~CDOTA_Modifier_DeathProphet_Witchcraft(
        CDOTA_Modifier_DeathProphet_Witchcraft *const this)
{
  this->_vptr_CDOTA_Buff = &off_43EC4F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_DeathProphet_Witchcraft::~CDOTA_Modifier_DeathProphet_Witchcraft  (line 468, @0x0000000002ac1d10, libserver.so)  // inlines: ~CDOTA_Modifier_DeathProphet_Witchcraft
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_DeathProphet_Witchcraft::~CDOTA_Modifier_DeathProphet_Witchcraft(
        CDOTA_Modifier_DeathProphet_Witchcraft *const this)
{
  this->_vptr_CDOTA_Buff = &off_43EC4F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_DeathProphet_Witchcraft::IsHidden  (line 473, @0x0000000002ab86d0, libserver.so)
bool __fastcall CDOTA_Modifier_DeathProphet_Witchcraft::IsHidden(CDOTA_Modifier_DeathProphet_Witchcraft *const this)
{
  return 1;
}


// CDOTA_Modifier_DeathProphet_Witchcraft::OnCreated  (line 490, @0x0000000002aa9d40, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_DeathProphet_Witchcraft::OnCreated(
        CDOTA_Modifier_DeathProphet_Witchcraft *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_movement_speed", -1, 0);
  else
    this->bonus_movement_speed = 0;
}


// CDOTA_Modifier_DeathProphet_Witchcraft::OnRefresh  (line 497, @0x0000000002aaa220, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_DeathProphet_Witchcraft::OnRefresh(
        CDOTA_Modifier_DeathProphet_Witchcraft *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_movement_speed", -1, 0);
  else
    this->bonus_movement_speed = 0;
}


// CDOTA_Modifier_DeathProphet_Witchcraft::DeclareFunctions  (line 504, @0x0000000002a77770, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_DeathProphet_Witchcraft::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_DeathProphet_Witchcraft::DeclareFunctions(
        CDOTA_Modifier_DeathProphet_Witchcraft *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_DeathProphet_Witchcraft::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_DeathProphet_Witchcraft::GetModifierMoveSpeedBonus_Percentage  (line 511, @0x0000000002a77790, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DeathProphet_Witchcraft::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_DeathProphet_Witchcraft *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_DeathProphet_SpiritSiphon_ChargeCounter::~CDOTA_Modifier_DeathProphet_SpiritSiphon_ChargeCounter  (line 521, @0x0000000002ac1ca0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_DeathProphet_SpiritSiphon_ChargeCounter::~CDOTA_Modifier_DeathProphet_SpiritSiphon_ChargeCounter(
        CDOTA_Modifier_DeathProphet_SpiritSiphon_ChargeCounter *const this)
{
  this->_vptr_CDOTA_Buff = &off_43EC810;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_DeathProphet_SpiritSiphon_ChargeCounter::~CDOTA_Modifier_DeathProphet_SpiritSiphon_ChargeCounter  (line 521, @0x0000000002ac1cc0, libserver.so)  // inlines: ~CDOTA_Modifier_DeathProphet_SpiritSiphon_ChargeCounter
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_DeathProphet_SpiritSiphon_ChargeCounter::~CDOTA_Modifier_DeathProphet_SpiritSiphon_ChargeCounter(
        CDOTA_Modifier_DeathProphet_SpiritSiphon_ChargeCounter *const this)
{
  this->_vptr_CDOTA_Buff = &off_43EC810;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_DeathProphet_SpiritSiphon_ChargeCounter::IsHidden  (line 526, @0x0000000002ab86e0, libserver.so)
bool __fastcall CDOTA_Modifier_DeathProphet_SpiritSiphon_ChargeCounter::IsHidden(
        CDOTA_Modifier_DeathProphet_SpiritSiphon_ChargeCounter *const this)
{
  return 0;
}


// CDOTA_Modifier_DeathProphet_SpiritSiphon_ChargeCounter::IsPurgable  (line 527, @0x0000000002ab86f0, libserver.so)
bool __fastcall CDOTA_Modifier_DeathProphet_SpiritSiphon_ChargeCounter::IsPurgable(
        CDOTA_Modifier_DeathProphet_SpiritSiphon_ChargeCounter *const this)
{
  return 0;
}


// CDOTA_Modifier_DeathProphet_SpiritSiphon_ChargeCounter::IsPermanent  (line 528, @0x0000000002ab8700, libserver.so)
bool __fastcall CDOTA_Modifier_DeathProphet_SpiritSiphon_ChargeCounter::IsPermanent(
        CDOTA_Modifier_DeathProphet_SpiritSiphon_ChargeCounter *const this)
{
  return 1;
}


// CDOTA_Modifier_DeathProphet_SpiritSiphon_ChargeCounter::DestroyOnExpire  (line 529, @0x0000000002ab8710, libserver.so)
bool __fastcall CDOTA_Modifier_DeathProphet_SpiritSiphon_ChargeCounter::DestroyOnExpire(
        CDOTA_Modifier_DeathProphet_SpiritSiphon_ChargeCounter *const this)
{
  return 0;
}


// CDOTA_Modifier_DeathProphet_SpiritSiphon_ChargeCounter::OnCreated  (line 550, @0x0000000002aaadf0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "max_charges", "charge_restore_time"
void __fastcall CDOTA_Modifier_DeathProphet_SpiritSiphon_ChargeCounter::OnCreated(
        CDOTA_Modifier_DeathProphet_SpiritSiphon_ChargeCounter *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->max_charges = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->charge_restore_time = 0.0;
    goto LABEL_4;
  }
  this->max_charges = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "max_charges", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->charge_restore_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "charge_restore_time", -1, 0);
LABEL_4:
  (*(this->_vptr_CDOTA_Buff + 28))(this, this->max_charges);
  this->m_bIsThinking = 0;
}


// CDOTA_Modifier_DeathProphet_SpiritSiphon_ChargeCounter::OnIntervalThink  (line 561, @0x0000000002aac460, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "max_charges", "charge_restore_time"
void __fastcall CDOTA_Modifier_DeathProphet_SpiritSiphon_ChargeCounter::OnIntervalThink(
        CDOTA_Modifier_DeathProphet_SpiritSiphon_ChargeCounter *const this)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v3; // rax
  float v4; // xmm1_4
  void (__fastcall *v5)(CDOTA_Modifier_DeathProphet_SpiritSiphon_ChargeCounter *const, __int64, float); // r12
  CDOTABaseAbility *v6; // rax
  float v7; // xmm0_4
  CDOTABaseAbility *v8; // rax
  float v9; // xmm0_4
  float v10; // xmm1_4
  float charge_restore_time; // [rsp+Ch] [rbp-14h]
  float v12; // [rsp+Ch] [rbp-14h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->max_charges = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "max_charges", -1, 0);
  else
    this->max_charges = 0;
  v3 = CDOTA_Buff::GetAbility(this);
  if ( v3 != 0 )
    this->charge_restore_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v3, "charge_restore_time", -1, 0);
  else
    this->charge_restore_time = 0.0;
  if ( (*(this->_vptr_CDOTA_Buff + 27))(this) >= this->max_charges
    || ((*(this->_vptr_CDOTA_Buff + 25))(this), (*(this->_vptr_CDOTA_Buff + 27))(this) == this->max_charges) )
  {
    CDOTA_Buff::StartIntervalThink(this, -1.0, v4);
    this->m_bIsThinking = 0;
  }
  else
  {
    charge_restore_time = this->charge_restore_time;
    v5 = *(this->_vptr_CDOTA_Buff + 63);
    v6 = CDOTA_Buff::GetAbility(this);
    v7 = (*(v6->_vptr_IHandleEntity + 243))(v6, 0xFFFFFFFFLL);
    v5(this, 1, v7 * charge_restore_time);
    v12 = this->charge_restore_time;
    v8 = CDOTA_Buff::GetAbility(this);
    v9 = (*(v8->_vptr_IHandleEntity + 243))(v8, 0xFFFFFFFFLL);
    CDOTA_Buff::StartIntervalThink(this, v9 * v12, v10);
  }
}


// CDOTA_Ability_DeathProphet_SpiritSiphon::~CDOTA_Ability_DeathProphet_SpiritSiphon  (line 594, @0x0000000002ac5370, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_DeathProphet_SpiritSiphon::~CDOTA_Ability_DeathProphet_SpiritSiphon(
        CDOTA_Ability_DeathProphet_SpiritSiphon *const this)
{
  this->_vptr_IHandleEntity = &off_43ECB70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_DeathProphet_SpiritSiphon::~CDOTA_Ability_DeathProphet_SpiritSiphon  (line 594, @0x0000000002ac5390, libserver.so)  // inlines: ~CDOTA_Ability_DeathProphet_SpiritSiphon
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_DeathProphet_SpiritSiphon::~CDOTA_Ability_DeathProphet_SpiritSiphon(
        CDOTA_Ability_DeathProphet_SpiritSiphon *const this)
{
  this->_vptr_IHandleEntity = &off_43ECB70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_DeathProphet_SpiritSiphon::Schema_DynamicBinding  (line 596, @0x0000000002ab8720, libserver.so)
// globals: CDOTA_Ability_DeathProphet_SpiritSiphon::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DeathProphet_SpiritSiphon::Schema_DynamicBinding(
        const CDOTA_Ability_DeathProphet_SpiritSiphon *const this)
{
  return CDOTA_Ability_DeathProphet_SpiritSiphon::s_pSchemaBinding;
}


// CDOTA_Ability_DeathProphet_SpiritSiphon::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 596, @0x0000000002ab8730, libserver.so)
// globals: CDOTA_Ability_DeathProphet_SpiritSiphon::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DeathProphet_SpiritSiphon::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_DeathProphet_SpiritSiphon::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DeathProphet_SpiritSiphon::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_DeathProphet_SpiritSiphon::CEntityInstanceEntityClass::DestructInstance  (line 596, @0x0000000002ab8740, libserver.so)  // inlines: Destruct<CDOTA_Ability_DeathProphet_SpiritSiphon>
void __fastcall CDOTA_Ability_DeathProphet_SpiritSiphon::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_DeathProphet_SpiritSiphon::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_DeathProphet_SpiritSiphon::CEntityInstanceEntityClass::FreeInstance  (line 596, @0x0000000002ab8760, libserver.so)
void __fastcall CDOTA_Ability_DeathProphet_SpiritSiphon::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_DeathProphet_SpiritSiphon::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_DeathProphet_SpiritSiphon::CEntityInstanceEntityClass::CanAllocate  (line 596, @0x0000000002ab8780, libserver.so)
bool __fastcall CDOTA_Ability_DeathProphet_SpiritSiphon::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_DeathProphet_SpiritSiphon::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_DeathProphet_SpiritSiphon::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 596, @0x0000000002ab8790, libserver.so)
// globals: CDOTA_Ability_DeathProphet_SpiritSiphon::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_DeathProphet_SpiritSiphon::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_DeathProphet_SpiritSiphon::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DeathProphet_SpiritSiphon::s_pSchemaBinding;
}


// CDOTA_Ability_DeathProphet_SpiritSiphon::CEntityInstanceEntityClass::AllocateInstance  (line 596, @0x0000000002abeb80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_DeathProphet_SpiritSiphon::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_DeathProphet_SpiritSiphon::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 944);
  memset(v1, 0, 0x3B0u);
  return v1;
}


// CDOTA_Ability_DeathProphet_SpiritSiphon::CEntityInstanceEntityClass::ConstructInstance  (line 596, @0x0000000002ac2930, libserver.so)  // inlines: CDOTA_Ability_DeathProphet_SpiritSiphon, Construct<CDOTA_Ability_DeathProphet_SpiritSiphon>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_DeathProphet_SpiritSiphon::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_DeathProphet_SpiritSiphon::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43ECB70;
  }
  return p;
}


// CDOTA_Ability_DeathProphet_SpiritSiphon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 596, @0x0000000002acbd40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_DeathProphet_SpiritSiphon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DeathProphet_SpiritSiphon::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_DeathProphet_SpiritSiphon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 596, @0x0000000002acbd60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_DeathProphet_SpiritSiphon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DeathProphet_SpiritSiphon::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_DeathProphet_SpiritSiphon::GetEntityClassInternal  (line 596, @0x0000000002ada7d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "death_prophet_spirit_siphon", "CDOTA_Ability_DeathProphet_SpiritSiphon"
// globals: `guard variable for'CDOTA_Ability_DeathProphet_SpiritSiphon::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_SpiritSiphonClass, CDOTA_Ability_DeathProphet_SpiritSiphon::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_SpiritSiphonClass, __dso_handle, CDOTA_Ability_DeathProphet_SpiritSiphon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_DeathProphet_SpiritSiphon::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_SpiritSiphonClassInfo, CDOTA_Ability_DeathProphet_SpiritSiphon::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_SpiritSiphonClassInfo
CEntityClass *__cdecl CDOTA_Ability_DeathProphet_SpiritSiphon::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_DeathProphet_SpiritSiphon::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_SpiritSiphonClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DeathProphet_SpiritSiphon::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_SpiritSiphonClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_DeathProphet_SpiritSiphon::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_SpiritSiphonClass);
    CDOTA_Ability_DeathProphet_SpiritSiphon::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_SpiritSiphonClass._vptr_CEntityClass = off_43ECAF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DeathProphet_SpiritSiphon::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_SpiritSiphonClass);
    __cxa_atexit(
      CDOTA_Ability_DeathProphet_SpiritSiphon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_DeathProphet_SpiritSiphon::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_SpiritSiphonClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_DeathProphet_SpiritSiphonClass != 0 )
    return &CDOTA_Ability_DeathProphet_SpiritSiphon::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_SpiritSiphonClass;
  if ( `guard variable for'CDOTA_Ability_DeathProphet_SpiritSiphon::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_SpiritSiphonClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DeathProphet_SpiritSiphon::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_SpiritSiphonClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_DeathProphet_SpiritSiphon::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_SpiritSiphonClassInfo,
      "CDOTA_Ability_DeathProphet_SpiritSiphon",
      "death_prophet_spirit_siphon",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DeathProphet_SpiritSiphon::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_SpiritSiphonClassInfo);
  }
  CDOTA_Ability_DeathProphet_SpiritSiphon::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_SpiritSiphonClass.m_pClassInfo = &CDOTA_Ability_DeathProphet_SpiritSiphon::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_SpiritSiphonClassInfo;
  CDOTA_Ability_DeathProphet_SpiritSiphon::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_SpiritSiphonClass.m_pBaseClassInfo = CDOTA_Ability_DeathProphet_SpiritSiphon::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_SpiritSiphonClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_DeathProphet_SpiritSiphonClass = &CDOTA_Ability_DeathProphet_SpiritSiphon::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_SpiritSiphonClass;
  CDOTA_Ability_DeathProphet_SpiritSiphon::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DeathProphet_SpiritSiphonClassInfo.m_pClass = &CDOTA_Ability_DeathProphet_SpiritSiphon::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_SpiritSiphonClass;
  CDOTA_Ability_DeathProphet_SpiritSiphon::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_SpiritSiphonClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_DeathProphet_SpiritSiphonClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_DeathProphet_SpiritSiphon::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DeathProphet_SpiritSiphonClass;
}


// CDOTA_Ability_DeathProphet_SpiritSiphon::IsRefreshable  (line 606, @0x0000000002ab87a0, libserver.so)
bool __fastcall CDOTA_Ability_DeathProphet_SpiritSiphon::IsRefreshable(
        CDOTA_Ability_DeathProphet_SpiritSiphon *const this)
{
  return 0;
}


// CDOTA_Ability_DeathProphet_SpiritSiphon::GetGestureBasedActivity  (line 609, @0x0000000002ab87b0, libserver.so)
Activity __fastcall CDOTA_Ability_DeathProphet_SpiritSiphon::GetGestureBasedActivity(
        CDOTA_Ability_DeathProphet_SpiritSiphon *const this)
{
  return 1712;
}


// CDOTA_Ability_DeathProphet_SpiritSiphon::CastFilterResult  (line 628, @0x0000000002a7cdd0, libserver.so)  // inlines: IsBoss
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_death_prophet_spirit_siphon_charge_counter", "modifier_death_prophet_spirit_siphon_slow"
int __fastcall CDOTA_Ability_DeathProphet_SpiritSiphon::CastFilterResult(
        CDOTA_Ability_DeathProphet_SpiritSiphon *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_death_prophet_spirit_siphon_charge_counter", 0);
  if ( ModifierByName != 0 && (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName) == 0
    || CDOTA_BaseNPC::FindModifierByName(pTarget, "modifier_death_prophet_spirit_siphon_slow", 0) != 0 )
  {
    return 23;
  }
  else
  {
    return ((pTarget->m_iUnitType << 20) >> 31) & 0x17;
  }
}


// CDOTA_Ability_DeathProphet_SpiritSiphon::OnUnStolen  (line 654, @0x0000000002a7adb0, libserver.so)
// calls: CDOTABaseAbility::OnUnStolen, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_death_prophet_spirit_siphon_charge_counter"
void __fastcall CDOTA_Ability_DeathProphet_SpiritSiphon::OnUnStolen(
        CDOTA_Ability_DeathProphet_SpiritSiphon *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  CDOTABaseAbility::OnUnStolen(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_death_prophet_spirit_siphon_charge_counter");
}


// CDOTA_Ability_DeathProphet_SpiritSiphon::GetCustomCastError  (line 665, @0x0000000002a7ce40, libserver.so)
// calls: CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_death_prophet_spirit_siphon_slow", "dota_hud_error_spirit_siphon_already_haunting", "dota_hud_error_spirit_siphon_no_charges", "dota_hud_error_cant_cast_on_roshan"
const char *__fastcall CDOTA_Ability_DeathProphet_SpiritSiphon::GetCustomCastError(
        CDOTA_Ability_DeathProphet_SpiritSiphon *const this,
        CDOTA_BaseNPC *pTarget)
{
  const char *v4; // rdx

  if ( CDOTA_BaseNPC::FindModifierByName(pTarget, "modifier_death_prophet_spirit_siphon_slow", 0) != 0 )
    return "dota_hud_error_spirit_siphon_already_haunting";
  v4 = "dota_hud_error_cant_cast_on_roshan";
  if ( (pTarget->m_iUnitType & 0x800) == 0 )
    return "dota_hud_error_spirit_siphon_no_charges";
  return v4;
}


// CDOTA_Ability_DeathProphet_SpiritSiphon::RefreshCharges  (line 681, @0x0000000002a9f950, libserver.so)  // inlines: GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName
// strings: "max_charges", "modifier_death_prophet_spirit_siphon_charge_counter"
void __fastcall CDOTA_Ability_DeathProphet_SpiritSiphon::RefreshCharges(
        CDOTA_Ability_DeathProphet_SpiritSiphon *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax

  this->max_charges = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "max_charges", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_death_prophet_spirit_siphon_charge_counter", 0);
  if ( ModifierByName != 0 )
    (*(ModifierByName->_vptr_CDOTA_Buff + 28))(ModifierByName, this->max_charges);
  (*(this->_vptr_IHandleEntity + 297))(this);
}


// CDOTA_Ability_DeathProphet_SpiritSiphon::OnSpellStart  (line 696, @0x0000000002a9a080, libserver.so)  // inlines: GetBool, GetInt, GetLevelSpecialValueFor<float>, InState, IsInvulnerable, SetThinking, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetPtr, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::StartIntervalThink, __stack_chk_fail (13 total)
// strings: "charge_restore_time", "haunt_duration", "modifier_death_prophet_spirit_siphon", "modifier_death_prophet_spirit_siphon_charge_counter"
void __fastcall CDOTA_Ability_DeathProphet_SpiritSiphon::OnSpellStart(
        CDOTA_Ability_DeathProphet_SpiritSiphon *const this)
{
  CBaseEntity *CursorTarget; // rax
  float v3; // xmm1_4
  CBaseEntity *v4; // rax
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Buff *v9; // r12
  void (__fastcall *v10)(CDOTA_Ability_DeathProphet_SpiritSiphon *const); // r13
  float v11; // xmm0_4
  float v12; // xmm1_4
  int (**vptr_CDOTA_Buff)(...); // rax
  int (*v14)(...); // r13
  float v15; // xmm0_4
  float haunt_duration; // [rsp+Ch] [rbp-44h]
  float haunt_durationa; // [rsp+Ch] [rbp-44h]
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-28h]

  v19 = __readfsqword(0x28u);
  this->charge_restore_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "charge_restore_time", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "haunt_duration", -1, 0);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0
    && (BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 1) == 0
    && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
  {
    KeyValues::KeyValues(&kv, "modifier_death_prophet_spirit_siphon");
    KeyValues::SetFloat(&kv, "duration", v3);
    v4 = CDOTABaseAbility::GetCursorTarget(this);
    KeyValues::SetPtr(&kv, "target", v4);
    Caster = CDOTABaseAbility::GetCaster(this);
    v6 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v6, Caster, this, "modifier_death_prophet_spirit_siphon", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
  if ( dota_ability_debug.m_pParent->m_Value.m_nValue == 0 )
  {
    v7 = CDOTABaseAbility::GetCaster(this);
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(v7, "modifier_death_prophet_spirit_siphon_charge_counter", 0);
    v9 = ModifierByName;
    if ( ModifierByName != 0 )
    {
      (*(ModifierByName->_vptr_CDOTA_Buff + 26))(ModifierByName);
      if ( LOBYTE(v9[1].m_References.m_pHead) == 0 )
      {
        haunt_duration = this->charge_restore_time;
        v11 = (*(this->_vptr_IHandleEntity + 243))(this, 0xFFFFFFFFLL);
        CDOTA_Buff::StartIntervalThink(v9, v11 * haunt_duration, v12);
        vptr_CDOTA_Buff = v9->_vptr_CDOTA_Buff;
        LOBYTE(v9[1].m_References.m_pHead) = 1;
        v14 = vptr_CDOTA_Buff[63];
        haunt_durationa = this->charge_restore_time;
        v15 = (*(this->_vptr_IHandleEntity + 243))(this, 0xFFFFFFFFLL);
        v14(v9, 1, v15 * haunt_durationa);
      }
      if ( (*(v9->_vptr_CDOTA_Buff + 27))(v9) == 0 )
      {
        v10 = *(this->_vptr_IHandleEntity + 241);
        (*(v9->_vptr_CDOTA_Buff + 33))(v9);
        v10(this);
      }
    }
  }
}


// CDOTA_Ability_DeathProphet_SpiritSiphon::OnUpgrade  (line 743, @0x0000000002aa2ac0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, SetThinking
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::OnUpgrade, CDOTA_Buff::StartIntervalThink, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "charge_restore_time", "max_charges", "modifier_death_prophet_spirit_siphon_charge_counter", "modifier_sniper_shrapnel_charge_counter"
void __fastcall CDOTA_Ability_DeathProphet_SpiritSiphon::OnUpgrade(CDOTA_Ability_DeathProphet_SpiritSiphon *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // r12
  float v4; // xmm0_4
  float v5; // xmm1_4
  int (**vptr_CDOTA_Buff)(...); // rax
  int (*v7)(...); // r13
  float v8; // xmm0_4
  CDOTA_BaseNPC *v9; // r12
  CDOTA_BaseNPC *v10; // rax
  float charge_restore_time; // [rsp+Ch] [rbp-44h]
  float v12; // [rsp+Ch] [rbp-44h]
  KeyValues kv_counter; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-28h]

  v14 = __readfsqword(0x28u);
  if ( !this->m_bReflection )
  {
    this->charge_restore_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "charge_restore_time", -1, 0);
    this->max_charges = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "max_charges", -1, 0);
    Caster = CDOTABaseAbility::GetCaster(this);
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_death_prophet_spirit_siphon_charge_counter", 0);
    if ( ModifierByName != 0
      || (KeyValues::KeyValues(&kv_counter, "modifier_sniper_shrapnel_charge_counter"),
          v9 = CDOTABaseAbility::GetCaster(this),
          v10 = CDOTABaseAbility::GetCaster(this),
          ModifierByName = CDOTA_BaseNPC::AddNewModifier(
                             v10,
                             v9,
                             this,
                             "modifier_death_prophet_spirit_siphon_charge_counter",
                             &kv_counter,
                             0),
          KeyValues::~KeyValues(&kv_counter),
          ModifierByName != 0) )
    {
      if ( LOBYTE(ModifierByName[1].m_References.m_pHead) == 0
        && (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName) < this->max_charges )
      {
        charge_restore_time = this->charge_restore_time;
        v4 = (*(this->_vptr_IHandleEntity + 243))(this, 0xFFFFFFFFLL);
        CDOTA_Buff::StartIntervalThink(ModifierByName, v4 * charge_restore_time, v5);
        vptr_CDOTA_Buff = ModifierByName->_vptr_CDOTA_Buff;
        LOBYTE(ModifierByName[1].m_References.m_pHead) = 1;
        v7 = vptr_CDOTA_Buff[63];
        v12 = this->charge_restore_time;
        v8 = (*(this->_vptr_IHandleEntity + 243))(this, 0xFFFFFFFFLL);
        v7(ModifierByName, 1, v8 * v12);
      }
    }
    CDOTABaseAbility::OnUpgrade(this);
  }
}


// CDOTA_Ability_DeathProphet_SpiritSiphon::GetAbilityDamageToTargetOverInterval  (line 776, @0x0000000002a9b320, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "haunt_duration"
__int64 __fastcall CDOTA_Ability_DeathProphet_SpiritSiphon::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_DeathProphet_SpiritSiphon *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int v7; // r13d
  float LevelSpecialValue; // [rsp-4h] [rbp-30h]
  float fIntervala; // [rsp+0h] [rbp-2Ch]
  float fIntervalb; // [rsp+0h] [rbp-2Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    fIntervala = fminf(fInterval, CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "haunt_duration", -1, 1));
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "damage", -1, 0);
    v7 = (*(pTarget->_vptr_IHandleEntity + 156))(pTarget);
    fIntervalb = (LevelSpecialValue
                + ((v7 * CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "damage_pct", -1, 0)) / 100.0))
               * fIntervala;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fIntervalb);
  }
  return result;
}


// CDOTA_Modifier_DeathProphet_SpiritSiphon::~CDOTA_Modifier_DeathProphet_SpiritSiphon  (line 791, @0x0000000002ac1c50, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_DeathProphet_SpiritSiphon::~CDOTA_Modifier_DeathProphet_SpiritSiphon(
        CDOTA_Modifier_DeathProphet_SpiritSiphon *const this)
{
  this->_vptr_CDOTA_Buff = &off_43ED630;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_DeathProphet_SpiritSiphon::~CDOTA_Modifier_DeathProphet_SpiritSiphon  (line 791, @0x0000000002ac1c70, libserver.so)  // inlines: ~CDOTA_Modifier_DeathProphet_SpiritSiphon
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_DeathProphet_SpiritSiphon::~CDOTA_Modifier_DeathProphet_SpiritSiphon(
        CDOTA_Modifier_DeathProphet_SpiritSiphon *const this)
{
  this->_vptr_CDOTA_Buff = &off_43ED630;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_DeathProphet_SpiritSiphon::GetAttributes  (line 800, @0x0000000002ac47b0, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_DeathProphet_SpiritSiphon::GetAttributes(
        CDOTA_Modifier_DeathProphet_SpiritSiphon *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 6;
}


// CDOTA_Modifier_DeathProphet_SpiritSiphon::IsHidden  (line 802, @0x0000000002ab87c0, libserver.so)
bool __fastcall CDOTA_Modifier_DeathProphet_SpiritSiphon::IsHidden(
        CDOTA_Modifier_DeathProphet_SpiritSiphon *const this)
{
  return 1;
}


// CDOTA_Modifier_DeathProphet_SpiritSiphon::IsPurgable  (line 803, @0x0000000002ab87d0, libserver.so)
bool __fastcall CDOTA_Modifier_DeathProphet_SpiritSiphon::IsPurgable(
        CDOTA_Modifier_DeathProphet_SpiritSiphon *const this)
{
  return 0;
}


// CDOTA_Modifier_DeathProphet_SpiritSiphon::OnCreated  (line 822, @0x0000000002a9d940, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: KeyValues::GetPtr, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, DotaRetrieveAbilityValue<int>, CDOTA_Buff::StartIntervalThink, __stack_chk_fail, CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl (19 total)
// strings: "haunt_duration", "siphon_buffer", "particles/units/heroes/hero_death_prophet/death_prophet_spiritsiphon.vpcf", "attach_hitloc", "modifier_death_prophet_spirit_siphon_slow", "Hero_DeathProphet.SpiritSiphon.Cast" (7 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_DeathProphet_SpiritSiphon::OnCreated(
        CDOTA_Modifier_DeathProphet_SpiritSiphon *const this,
        KeyValues *pKV)
{
  _QWORD *Ptr; // rax
  __int64 v4; // rdx
  int v5; // eax
  __int16 v6; // cx
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax
  CDOTABaseAbility *v10; // rax
  CDOTABaseAbility *v11; // rax
  CDOTABaseAbility *v12; // rax
  int v13; // eax
  float flSmoothness; // xmm0_4
  float v15; // xmm1_4
  uint32 m_Index; // eax
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_BaseNPC *v21; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v23; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v25; // rax
  const CBaseAnimating *v26; // r15
  CDOTA_ParticleManager *v27; // rax
  CDOTA_ParticleManager *v28; // rax
  CDOTA_ParticleManager *v29; // rax
  float v30; // xmm1_4
  CDOTABaseAbility *v31; // r14
  CDOTA_BaseNPC *v32; // rax
  CDOTA_BaseNPC *v33; // rax
  double v34; // [rsp+10h] [rbp-60h]
  KeyValues kv; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v36; // [rsp+38h] [rbp-38h]

  v36 = __readfsqword(0x28u);
  Ptr = KeyValues::GetPtr(pKV, "target", 0);
  if ( Ptr != 0 && (v4 = Ptr[1]) != 0 )
  {
    v5 = (*(v4 + 16) >> 15) - (*(v4 + 48) & 1);
    v6 = 0x7FFF;
    if ( *(v4 + 16) != -1 )
      v6 = *(v4 + 16) & 0x7FFF;
    LOWORD(this->m_hTarget.m_Index) = v6 | this->m_hTarget.m_Index & 0x8000;
    this->m_hTarget.m_Index = (v5 << 15) | this->m_hTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hTarget.m_Index = -1;
  }
  this->flSmoothness = 0.25;
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->haunt_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "haunt_duration", -1, 0);
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_8;
LABEL_18:
    this->damage = 0.0;
    v9 = CDOTA_Buff::GetAbility(this);
    if ( v9 != 0 )
      goto LABEL_9;
    goto LABEL_19;
  }
  this->haunt_duration = 0.0;
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 == 0 )
    goto LABEL_18;
LABEL_8:
  this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v8, "damage", -1, 0);
  v9 = CDOTA_Buff::GetAbility(this);
  if ( v9 != 0 )
  {
LABEL_9:
    this->damage_pct = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v9, "damage_pct", -1, 0);
    goto LABEL_10;
  }
LABEL_19:
  this->damage_pct = 0.0;
LABEL_10:
  v10 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v10, &this->siphon_buffer, "siphon_buffer");
  v11 = CDOTA_Buff::GetAbility(this);
  if ( v11 != 0 )
    this->haunt_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v11, "haunt_duration", -1, 0);
  else
    this->haunt_duration = 0.0;
  v12 = CDOTA_Buff::GetAbility(this);
  v13 = (*(v12->_vptr_IHandleEntity + 229))(v12, &vec3_origin, 0);
  flSmoothness = this->flSmoothness;
  this->drain_range = this->siphon_buffer + v13;
  CDOTA_Buff::StartIntervalThink(this, flSmoothness, v15);
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v17 != 0 )
    {
      v18 = &v17[this->m_hTarget.m_Index & 0x1FF];
      if ( v18 != 0 && m_Index == v18->m_EHandle.m_Index )
      {
        m_pInstance = v18->m_pInstance;
        if ( v18->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          Caster = CDOTA_Buff::GetCaster(this);
          v21 = CDOTA_Buff::GetCaster(this);
          ParticleManager = GetParticleManager();
          this->m_iLinkIndex = CDOTA_ParticleManager::CreateParticle(
                                 ParticleManager,
                                 "particles/units/heroes/hero_death_prophet/death_prophet_spiritsiphon.vpcf",
                                 2,
                                 v21,
                                 0,
                                 Caster);
          v23 = CDOTA_Buff::GetCaster(this);
          AbsOrigin = CBaseEntity::GetAbsOrigin(v23);
          v25 = CDOTA_Buff::GetCaster(this);
          LODWORD(Caster) = this->m_iLinkIndex;
          v26 = v25;
          v27 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v27, Caster, 0, v26, 5, "attach_hitloc", *AbsOrigin, 1);
          LODWORD(AbsOrigin) = this->m_iLinkIndex;
          v28 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(
            v28,
            AbsOrigin,
            1,
            m_pInstance,
            5,
            "attach_hitloc",
            vec3_invalid,
            1);
          LODWORD(AbsOrigin) = this->m_iLinkIndex;
          *&v34 = LODWORD(this->haunt_duration);
          v29 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControl(v29, AbsOrigin, 5, v34, 0.0);
          CDOTA_Buff::AddParticle(this, this->m_iLinkIndex, 0, 0, -1, 0, 0);
          KeyValues::KeyValues(&kv, "modifier_death_prophet_spirit_siphon_slow");
          KeyValues::SetFloat(&kv, "duration", v30);
          v31 = CDOTA_Buff::GetAbility(this);
          v32 = CDOTA_Buff::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(m_pInstance, v32, v31, "modifier_death_prophet_spirit_siphon_slow", &kv, 0);
          v33 = CDOTA_Buff::GetCaster(this);
          CDOTA_BaseNPC::UnitEmitSound(v33, "Hero_DeathProphet.SpiritSiphon.Cast", 0.0, 0, 0);
          CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_DeathProphet.SpiritSiphon.Target", 0.0, 0, 0);
          KeyValues::~KeyValues(&kv);
        }
      }
    }
  }
}


// CDOTA_Modifier_DeathProphet_SpiritSiphon::OnRefresh  (line 861, @0x0000000002aabef0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "haunt_duration", "siphon_buffer"
void __fastcall CDOTA_Modifier_DeathProphet_SpiritSiphon::OnRefresh(
        CDOTA_Modifier_DeathProphet_SpiritSiphon *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->haunt_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "haunt_duration", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->haunt_duration = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "damage", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_8:
      this->siphon_buffer = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->damage = 0.0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->siphon_buffer = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "siphon_buffer", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->haunt_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "haunt_duration", -1, 0);
    return;
  }
LABEL_9:
  this->haunt_duration = 0.0;
}


// CDOTA_Modifier_DeathProphet_SpiritSiphon::OnIntervalThink  (line 871, @0x0000000002a84900, libserver.so)  // inlines: FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, Length2D, LookupEntity, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-
// calls: CDOTA_Buff::Destroy, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, ApplyDamage, CDOTA_BaseNPC::Heal
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_DeathProphet_SpiritSiphon::OnIntervalThink(
        CDOTA_Modifier_DeathProphet_SpiritSiphon *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // r13
  const Vector *v8; // rax
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *v11; // r12
  CDOTA_BaseNPC *v12; // rax
  float flDamage; // [rsp+8h] [rbp-28h]
  float damage; // [rsp+Ch] [rbp-24h]
  float v15; // [rsp+Ch] [rbp-24h]
  float v16; // [rsp+Ch] [rbp-24h]

  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v4 = &v3[this->m_hTarget.m_Index & 0x1FF]) != 0
    && m_Index == v4->m_EHandle.m_Index
    && (m_pInstance = v4->m_pInstance, v4->m_pInstance != 0)
    && m_pInstance->m_bIsDOTANPC
    && (*(m_pInstance->_vptr_IHandleEntity + 408))(v4->m_pInstance) != 0
    && (Parent = CDOTA_Buff::GetParent(this),
        AbsOrigin = CBaseEntity::GetAbsOrigin(Parent),
        v8 = CBaseEntity::GetAbsOrigin(m_pInstance),
        fsqrt(((v8->x - AbsOrigin->x) * (v8->x - AbsOrigin->x)) + ((v8->y - AbsOrigin->y) * (v8->y - AbsOrigin->y))) <= this->drain_range) )
  {
    damage = this->damage;
    flDamage = damage + (((*(m_pInstance->_vptr_IHandleEntity + 156))(m_pInstance) * this->damage_pct) / 100.0);
    v15 = flDamage * this->flSmoothness;
    Ability = CDOTA_Buff::GetAbility(this);
    Caster = CDOTA_Buff::GetCaster(this);
    ApplyDamage(Caster, m_pInstance, Ability, v15, 2, 0);
    v11 = CDOTA_Buff::GetAbility(this);
    v16 = flDamage * this->flSmoothness;
    v12 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::Heal(v12, v16, v11, 0, 1);
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_DeathProphet_SpiritSiphon::OnDestroy  (line 897, @0x0000000002a839c0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CBaseEntity::StopSound, CDOTA_BaseNPC::RemoveModifierByName
// strings: "Hero_DeathProphet.SpiritSiphon.Cast", "modifier_death_prophet_spirit_siphon_slow", "Hero_DeathProphet.SpiritSiphon.Target"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_DeathProphet_SpiritSiphon::OnDestroy(
        CDOTA_Modifier_DeathProphet_SpiritSiphon *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *m_pInstance; // r12

  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hTarget.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          CDOTA_BaseNPC::RemoveModifierByName(v4->m_pInstance, "modifier_death_prophet_spirit_siphon_slow");
          CBaseEntity::StopSound(m_pInstance, "Hero_DeathProphet.SpiritSiphon.Target");
        }
      }
    }
  }
  Caster = CDOTA_Buff::GetCaster(this);
  CBaseEntity::StopSound(Caster, "Hero_DeathProphet.SpiritSiphon.Cast");
}


// CDOTA_Modifier_DeathProphet_SpiritSiphon_Slow::~CDOTA_Modifier_DeathProphet_SpiritSiphon_Slow  (line 914, @0x0000000002ac1c00, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_DeathProphet_SpiritSiphon_Slow::~CDOTA_Modifier_DeathProphet_SpiritSiphon_Slow(
        CDOTA_Modifier_DeathProphet_SpiritSiphon_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_43ED950;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_DeathProphet_SpiritSiphon_Slow::~CDOTA_Modifier_DeathProphet_SpiritSiphon_Slow  (line 914, @0x0000000002ac1c20, libserver.so)  // inlines: ~CDOTA_Modifier_DeathProphet_SpiritSiphon_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_DeathProphet_SpiritSiphon_Slow::~CDOTA_Modifier_DeathProphet_SpiritSiphon_Slow(
        CDOTA_Modifier_DeathProphet_SpiritSiphon_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_43ED950;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_DeathProphet_SpiritSiphon_Slow::IsDebuff  (line 919, @0x0000000002ab87e0, libserver.so)
bool __fastcall CDOTA_Modifier_DeathProphet_SpiritSiphon_Slow::IsDebuff(
        CDOTA_Modifier_DeathProphet_SpiritSiphon_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_DeathProphet_SpiritSiphon_Slow::GetAttributes  (line 920, @0x0000000002ab87f0, libserver.so)
int __fastcall CDOTA_Modifier_DeathProphet_SpiritSiphon_Slow::GetAttributes(
        CDOTA_Modifier_DeathProphet_SpiritSiphon_Slow *const this)
{
  return 4;
}


// CDOTA_Modifier_DeathProphet_SpiritSiphon_Slow::OnCreated  (line 933, @0x0000000002aa9b60, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_DeathProphet_SpiritSiphon_Slow::OnCreated(
        CDOTA_Modifier_DeathProphet_SpiritSiphon_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->movement_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "movement_slow", -1, 0);
  else
    this->movement_slow = 0;
}


// CDOTA_Modifier_DeathProphet_SpiritSiphon_Slow::DeclareFunctions  (line 940, @0x0000000002a777b0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_DeathProphet_SpiritSiphon_Slow::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_DeathProphet_SpiritSiphon_Slow::DeclareFunctions(
        CDOTA_Modifier_DeathProphet_SpiritSiphon_Slow *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_DeathProphet_SpiritSiphon_Slow::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_DeathProphet_SpiritSiphon_Slow::GetModifierMoveSpeedBonus_Percentage  (line 947, @0x0000000002a777d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DeathProphet_SpiritSiphon_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_DeathProphet_SpiritSiphon_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->movement_slow;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_DeathProphet_Exorcism_Spirit::~CDOTA_DeathProphet_Exorcism_Spirit  (line 954, @0x0000000002ac0490, libserver.so)  // inlines: ~CBaseAnimating
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CDOTA_DeathProphet_Exorcism_Spirit::~CDOTA_DeathProphet_Exorcism_Spirit(
        CDOTA_DeathProphet_Exorcism_Spirit *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CDOTA_DeathProphet_Exorcism_Spirit::~CDOTA_DeathProphet_Exorcism_Spirit  (line 954, @0x0000000002ac04d0, libserver.so)  // inlines: ~CBaseAnimating, ~CDOTA_DeathProphet_Exorcism_Spirit
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CDOTA_DeathProphet_Exorcism_Spirit::~CDOTA_DeathProphet_Exorcism_Spirit(
        CDOTA_DeathProphet_Exorcism_Spirit *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_DeathProphet_Exorcism_Spirit::Schema_DynamicBinding  (line 956, @0x0000000002ab8800, libserver.so)
// globals: CDOTA_DeathProphet_Exorcism_Spirit::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_DeathProphet_Exorcism_Spirit::Schema_DynamicBinding(
        const CDOTA_DeathProphet_Exorcism_Spirit *const this)
{
  return CDOTA_DeathProphet_Exorcism_Spirit::s_pSchemaBinding;
}


// CDOTA_DeathProphet_Exorcism_Spirit::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 956, @0x0000000002ab8810, libserver.so)
// globals: CDOTA_DeathProphet_Exorcism_Spirit::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_DeathProphet_Exorcism_Spirit::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_DeathProphet_Exorcism_Spirit::CEntityInstanceEntityClass *const this)
{
  return CDOTA_DeathProphet_Exorcism_Spirit::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_DeathProphet_Exorcism_Spirit::CEntityInstanceEntityClass::DestructInstance  (line 956, @0x0000000002ab8820, libserver.so)  // inlines: Destruct<CDOTA_DeathProphet_Exorcism_Spirit>
void __fastcall CDOTA_DeathProphet_Exorcism_Spirit::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_DeathProphet_Exorcism_Spirit::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_DeathProphet_Exorcism_Spirit::CEntityInstanceEntityClass::FreeInstance  (line 956, @0x0000000002ab8840, libserver.so)
void __fastcall CDOTA_DeathProphet_Exorcism_Spirit::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_DeathProphet_Exorcism_Spirit::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_DeathProphet_Exorcism_Spirit::CEntityInstanceEntityClass::CanAllocate  (line 956, @0x0000000002ab8860, libserver.so)
bool __fastcall CDOTA_DeathProphet_Exorcism_Spirit::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_DeathProphet_Exorcism_Spirit::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_DeathProphet_Exorcism_Spirit::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 956, @0x0000000002ab8870, libserver.so)
// globals: CDOTA_DeathProphet_Exorcism_Spirit::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_DeathProphet_Exorcism_Spirit::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_DeathProphet_Exorcism_Spirit::CEntityInstanceEntityClass *const this)
{
  return CDOTA_DeathProphet_Exorcism_Spirit::s_pSchemaBinding;
}


// CDOTA_DeathProphet_Exorcism_Spirit::CEntityInstanceEntityClass::AllocateInstance  (line 956, @0x0000000002abebc0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_DeathProphet_Exorcism_Spirit::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_DeathProphet_Exorcism_Spirit::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1216);
  memset(v1, 0, 0x4C0u);
  return v1;
}


// CDOTA_DeathProphet_Exorcism_Spirit::CEntityInstanceEntityClass::ConstructInstance  (line 956, @0x0000000002ac03e0, libserver.so)  // inlines: CDOTA_DeathProphet_Exorcism_Spirit, Construct<CDOTA_DeathProphet_Exorcism_Spirit>
// calls: CBaseAnimating::CBaseAnimating
CEntityInstance *__fastcall CDOTA_DeathProphet_Exorcism_Spirit::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_DeathProphet_Exorcism_Spirit::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseAnimating::CBaseAnimating(p);
    *p = &off_43EDCB0;
  }
  return p;
}


// CDOTA_DeathProphet_Exorcism_Spirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 956, @0x0000000002acb6b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_DeathProphet_Exorcism_Spirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_DeathProphet_Exorcism_Spirit::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_DeathProphet_Exorcism_Spirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 956, @0x0000000002acb6d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_DeathProphet_Exorcism_Spirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_DeathProphet_Exorcism_Spirit::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_DeathProphet_Exorcism_Spirit::GetEntityClassInternal  (line 956, @0x0000000002ada920, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CBaseAnimating::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "dota_death_prophet_exorcism_spirit", "CDOTA_DeathProphet_Exorcism_Spirit"
// globals: `guard variable for'CDOTA_DeathProphet_Exorcism_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_DeathProphet_Exorcism_SpiritClass, CDOTA_DeathProphet_Exorcism_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_DeathProphet_Exorcism_SpiritClass, __dso_handle, CDOTA_DeathProphet_Exorcism_Spirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_DeathProphet_Exorcism_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_DeathProphet_Exorcism_SpiritClassInfo, CDOTA_DeathProphet_Exorcism_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_DeathProphet_Exorcism_SpiritClassInfo
CEntityClass *__cdecl CDOTA_DeathProphet_Exorcism_Spirit::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_DeathProphet_Exorcism_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_DeathProphet_Exorcism_SpiritClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_DeathProphet_Exorcism_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_DeathProphet_Exorcism_SpiritClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_DeathProphet_Exorcism_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_DeathProphet_Exorcism_SpiritClass);
    CDOTA_DeathProphet_Exorcism_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_DeathProphet_Exorcism_SpiritClass._vptr_CEntityClass = off_43EDC30;
    __cxa_guard_release(&`guard variable for'CDOTA_DeathProphet_Exorcism_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_DeathProphet_Exorcism_SpiritClass);
    __cxa_atexit(
      CDOTA_DeathProphet_Exorcism_Spirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_DeathProphet_Exorcism_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_DeathProphet_Exorcism_SpiritClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_DeathProphet_Exorcism_SpiritClass != 0 )
    return &CDOTA_DeathProphet_Exorcism_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_DeathProphet_Exorcism_SpiritClass;
  if ( `guard variable for'CDOTA_DeathProphet_Exorcism_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_DeathProphet_Exorcism_SpiritClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_DeathProphet_Exorcism_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_DeathProphet_Exorcism_SpiritClassInfo) != 0 )
  {
    EntityClassInfo = CBaseAnimating::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_DeathProphet_Exorcism_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_DeathProphet_Exorcism_SpiritClassInfo,
      "CDOTA_DeathProphet_Exorcism_Spirit",
      "dota_death_prophet_exorcism_spirit",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_DeathProphet_Exorcism_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_DeathProphet_Exorcism_SpiritClassInfo);
  }
  CDOTA_DeathProphet_Exorcism_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_DeathProphet_Exorcism_SpiritClass.m_pClassInfo = &CDOTA_DeathProphet_Exorcism_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_DeathProphet_Exorcism_SpiritClassInfo;
  CDOTA_DeathProphet_Exorcism_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_DeathProphet_Exorcism_SpiritClass.m_pBaseClassInfo = CDOTA_DeathProphet_Exorcism_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_DeathProphet_Exorcism_SpiritClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_DeathProphet_Exorcism_SpiritClass = &CDOTA_DeathProphet_Exorcism_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_DeathProphet_Exorcism_SpiritClass;
  CDOTA_DeathProphet_Exorcism_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_DeathProphet_Exorcism_SpiritClassInfo.m_pClass = &CDOTA_DeathProphet_Exorcism_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_DeathProphet_Exorcism_SpiritClass;
  CDOTA_DeathProphet_Exorcism_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_DeathProphet_Exorcism_SpiritClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCDOTA_DeathProphet_Exorcism_SpiritClass->m_pComponentOverrides = 0;
  return &CDOTA_DeathProphet_Exorcism_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_DeathProphet_Exorcism_SpiritClass;
}


// CDOTA_DeathProphet_Exorcism_Spirit::IsPartOfFOWSystem  (line 965, @0x0000000002ab8880, libserver.so)
bool __fastcall CDOTA_DeathProphet_Exorcism_Spirit::IsPartOfFOWSystem(CDOTA_DeathProphet_Exorcism_Spirit *const this)
{
  return 1;
}


// CDOTA_DeathProphet_Exorcism_Spirit::ShouldTransmit  (line 974, @0x0000000002a7b540, libserver.so)  // inlines: CEntityIndex, GetRaw
// calls: CBaseEntity::ShouldTransmit, CBaseEntity::ShouldBeSentToClient
int __fastcall CDOTA_DeathProphet_Exorcism_Spirit::ShouldTransmit(
        CDOTA_DeathProphet_Exorcism_Spirit *const this,
        const CGameCheckTransmitInfo *pInfo)
{
  int ShouldTransmit; // eax

  ShouldTransmit = CBaseEntity::ShouldTransmit(this, pInfo);
  return CBaseEntity::ShouldBeSentToClient(this, pInfo->m_pInfo->m_nClientEntityIndex, ShouldTransmit);
}


// CDOTA_DeathProphet_Exorcism_Spirit::YouForgotToImplementOrDeclareServerClass  (line 982, @0x0000000002a777f0, libserver.so)
int __fastcall CDOTA_DeathProphet_Exorcism_Spirit::YouForgotToImplementOrDeclareServerClass(
        CDOTA_DeathProphet_Exorcism_Spirit *const this)
{
  return 0;
}


// CDOTA_DeathProphet_Exorcism_Spirit::GetServerClass  (line 982, @0x0000000002a8a170, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_DeathProphet_Exorcism_Spirit::GetServerClass(
        CDOTA_DeathProphet_Exorcism_Spirit *const this)
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


// CDOTA_DeathProphet_Exorcism_Spirit::Spawn  (line 1007, @0x0000000002a81b40, libserver.so)  // inlines: AddSolidFlags, MarkPVSInformationDirty, RemoveEffects, SetPlaybackRate, SetSolid
// calls: CBaseAnimating::Spawn, CBaseModelEntity::SetModel, CBaseEntity::DispatchUpdateTransmitState, CCollisionProperty::SetSolidFlags, CBaseEntity::SetMoveType, CBaseAnimating::UseClientSideAnimation, CBaseAnimating::SelectWeightedSequence, CBaseAnimating::SetSequence, CBaseAnimating::GetBaseAnimatingController
// strings: "models/heroes/death_prophet/death_prophet_ghost.vmdl"
void __fastcall CDOTA_DeathProphet_Exorcism_Spirit::Spawn(
        CDOTA_DeathProphet_Exorcism_Spirit *const this,
        const CEntityKeyValues *pKeyValues)
{
  HSequence v3; // eax
  CBaseAnimatingController *BaseAnimatingController; // rax

  CBaseAnimating::Spawn(this, pKeyValues);
  CBaseModelEntity::SetModel(this, "models/heroes/death_prophet/death_prophet_ghost.vmdl");
  (*(this->_vptr_IHandleEntity + 188))(this, this->m_fEffects.m_Value & 0xFFFFFFDF);
  this->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  CBaseEntity::DispatchUpdateTransmitState(this);
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 2);
  CCollisionProperty::SetSolidFlags(&this->m_Collision, this->m_Collision.m_usSolidFlags.m_Value | 1);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NOCLIP, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  CBaseAnimating::UseClientSideAnimation(this, 1);
  v3.m_Data = CBaseAnimating::SelectWeightedSequence(this, 1502).m_Data;
  CBaseAnimating::SetSequence(this, v3, SetSequenceBehavior_t::SET_SEQUENCE_PRESERVE_CYCLE);
  BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this);
  (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 22))(BaseAnimatingController, 1.0);
}


// CDOTA_Ability_DeathProphet_Exorcism::YouForgotToImplementOrDeclareServerClass  (line 1041, @0x0000000002a77800, libserver.so)
int __fastcall CDOTA_Ability_DeathProphet_Exorcism::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_DeathProphet_Exorcism *const this)
{
  return 0;
}


// CDOTA_Ability_DeathProphet_Exorcism::GetServerClass  (line 1041, @0x0000000002a8a530, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_DeathProphet_Exorcism::GetServerClass(
        CDOTA_Ability_DeathProphet_Exorcism *const this)
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


// CDOTA_Ability_DeathProphet_Exorcism::~CDOTA_Ability_DeathProphet_Exorcism  (line 1049, @0x0000000002a81d90, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<sSpiritInfo*, int>::Purge
void __fastcall CDOTA_Ability_DeathProphet_Exorcism::~CDOTA_Ability_DeathProphet_Exorcism(
        CDOTA_Ability_DeathProphet_Exorcism *const this)
{
  bool v2; // zf
  CUtlVectorBase<sSpiritInfo*,CUtlMemory<sSpiritInfo*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_SpiritInfos.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_43EE4B0;
  this->m_SpiritInfos.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_SpiritInfos.m_Memory,
        CUtlMemory<sSpiritInfo *,int>::Purge(&this->m_SpiritInfos.m_Memory),
        (this->m_SpiritInfos.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<sSpiritInfo *,int>::Purge(p_m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_DeathProphet_Exorcism::~CDOTA_Ability_DeathProphet_Exorcism  (line 1049, @0x0000000002a81e00, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Ability_DeathProphet_Exorcism, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<sSpiritInfo*, int>::Purge
void __fastcall CDOTA_Ability_DeathProphet_Exorcism::~CDOTA_Ability_DeathProphet_Exorcism(
        CDOTA_Ability_DeathProphet_Exorcism *const this)
{
  bool v2; // zf
  CUtlVectorBase<sSpiritInfo*,CUtlMemory<sSpiritInfo*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_SpiritInfos.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_43EE4B0;
  this->m_SpiritInfos.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_SpiritInfos.m_Memory;
    CUtlMemory<sSpiritInfo *,int>::Purge(&this->m_SpiritInfos.m_Memory);
    if ( (this->m_SpiritInfos.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<sSpiritInfo *,int>::Purge(p_m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_DeathProphet_Exorcism::Spawn  (line 1055, @0x0000000002a7a920, libserver.so)
// calls: CDOTABaseAbility::Spawn
void __fastcall CDOTA_Ability_DeathProphet_Exorcism::Spawn(
        CDOTA_Ability_DeathProphet_Exorcism *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTABaseAbility::Spawn(this, pKeyValues);
}


// sSpiritInfo::Init  (line 1062, @0x0000000002ab3190, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, Add, AddKeyValue<char const*>, AddToTail, Allocate, Base, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CMicroProfilerGuard, CMicroProfilerSample, CUtlString, CVProfScope, CopyData, Element, EnterScope, ExitScope, FindKeyHash, Free, Get, GetClassInfo, GetEHandle, GetElapsed, GetEntityClass, GetEntityIdentity, GetEntityModel, GetEntryIndex, GetInstance, GetModifier, GetSerialNumber, GetTimebaseRegister, InTargetThread, IndexToIdentity, Init, InvokeCallbacks, IsEmpty, IsEnabled, LookupEntity, OverrideAllocator, PLAT_CPU_TIME, Release, ReleaseEntitySpawnerEntityVariantAllocator, Set, SetClassName, SetPlaybackRate, SetValue, Spawn, memcpy, operator CDOTA_DeathProphet_Exorcism_Spirit*, operator CEntityInstance*, operator!, operator(), operator=, operator[], ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CMicroProfilerGuard, ~CUtlString, ~CVProfScope
// calls: CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntitySystem::FindClassByDesignName, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, CUtlString::Get, CEntitySystem::CreateEntity, CEntitySystem::QueueSpawnEntity, CBaseEntity::AddEffects, FindAssetModifier<CDOTA_BaseNPC, CEntityModelModifier>, CBaseModelEntity::SetModel (33 total)
// callers: CDOTA_Ability_DeathProphet_Exorcism::ActivateSpirit, CDOTA_Ability_DeathProphet_Exorcism::FreeSpirit
// strings: "dota_death_prophet_exorcism_spirit", "Attempted to set attribute %s as if it was a non-attribute key!\n", "Spawn", "Server Simulation"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride, CEntityHandle::gm_pEntityList
void __fastcall sSpiritInfo::Init(sSpiritInfo *const this, CDOTA_BaseNPC *pCaster, bool bSpawnEntity)
{
  CEntitySystem *v4; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v6; // rdx
  char v7; // al
  CEntityKeyValues *m_pEntityKeyValues; // rbx
  CEntityClass *ClassByDesignName; // rax
  CEntityKeyValues *v10; // rdi
  int m_enabled; // eax
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v13; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v15; // si
  CEntitySpawnerContext<CDOTA_DeathProphet_Exorcism_Spirit> *m_pContext; // rbx
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v19; // rdi
  CEntityIdentity *v20; // rax
  CDOTA_DeathProphet_Exorcism_Spirit *m_pInstance; // rdi
  CEntityIdentity *v22; // rax
  const CEntityModelModifier *Asset; // rax
  const char *v24; // rax
  HSequence v25; // eax
  CBaseAnimatingController *BaseAnimatingController; // rax
  CUtlScratchMemoryPool *v27; // rdi
  CEntityKeyValues *v28; // rbx
  const char *m_pszClassname; // rdx
  unsigned __int64 v31; // rbx
  uint64 v32; // rcx
  unsigned __int64 v33; // rbx
  uint64 m_numTimeBaseTicks; // rcx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v36; // cx
  __int64 v37; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v38; // rdx
  int m_nEntitySpawnerDataUseCount; // ecx
  CVProfNode *m_pParent; // rax
  __int16 v41; // r15
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v44; // rax
  __int64 v45; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v46; // r15
  uint16 m_flags; // ax
  char *v48; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v49; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v50; // rdx
  __int64 v51; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v53; // rax
  __int64 v54; // rbx
  __int16 v55; // ax
  char *v56; // rax
  bool v57; // [rsp+27h] [rbp-109h]
  CEntityKeyValues *i; // [rsp+28h] [rbp-108h]
  CEntityInstance *pEntity; // [rsp+38h] [rbp-F8h]
  CEntityInstance *pEntityb; // [rsp+38h] [rbp-F8h]
  CEntityInstance *pEntityc; // [rsp+38h] [rbp-F8h]
  CEntityInstance *pEntitya; // [rsp+38h] [rbp-F8h]
  int v64; // [rsp+40h] [rbp-F0h]
  _QWORD v65[2]; // [rsp+50h] [rbp-E0h] BYREF
  CEntitySpawner<CDOTA_DeathProphet_Exorcism_Spirit> spawner; // [rsp+60h] [rbp-D0h] BYREF

  if ( !bSpawnEntity )
    goto LABEL_2;
  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner._vptr_CEntitySpawnerBase = off_43EEF50;
  spawner.m_scriptClassName.m_pString = 0;
  spawner.m_pContext = 0;
  v4 = g_pEntitySystem;
  spawner.m_pSpawnBatch = 0;
  spawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v4->m_entitySpawnerData;
  spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v4);
  SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
  v6 = *&SpawnOriginOffset->m_flMatVal[0][2];
  spawner.m_pEntityKeyValues = 0;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v6;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
  spawner.m_pEntityClass = g_pEntityCDOTA_DeathProphet_Exorcism_SpiritClass;
  if ( g_pApplication != 0 )
    v7 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v7 = 0;
  spawner.m_bValidateKeys = v7;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount <= 0 )
  {
    m_nCount = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_63:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
      v41 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
      m_nAllocated = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
      if ( m_nAllocated != 0 )
      {
        if ( m_nAllocated <= 9 )
          m_pElements = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        else
          m_pElements = m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      m_pElements[v41] = -971301790;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v44 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v44 = 0;
      v45 = v41;
      v46 = &v44[v45];
      pEntitya = (v45 * 24);
      m_flags = v44[v45].m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v46->m_value.m_flags = m_flags & 0xFFFE;
      v46->m_value.m_uint64 = 0;
      v46->m_value.m_type = 30;
      v48 = CEntityVariantAllocator::Allocate(0x23u);
      v46->m_value.m_uint64 = v48;
      strcpy(v48, "dota_death_prophet_exorcism_spirit");
      v46->m_value.m_flags |= 1u;
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v49 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v49 = 0;
      *(&pEntitya->m_hPrivateScope.m_hScope + v49) = 0;
      goto LABEL_6;
    }
    v36 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v37 = 0;
    while ( 1 )
    {
      if ( v36 != 0 )
      {
        v38 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v36 > 9 )
          v38 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v38 = 0;
      }
      if ( v38[v37] == -971301790 )
        break;
      if ( m_nCount <= ++v37 )
        goto LABEL_63;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v50 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v51 = v37;
      if ( v50[v51].m_pAttributeName != 0 )
      {
LABEL_75:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v50[v51].m_pAttributeName);
        goto LABEL_6;
      }
      v54 = &v50[v51];
    }
    else
    {
      v51 = v37;
      v50 = 0;
      v54 = v51 * 24;
      if ( *(v51 * 24 + 16) != 0 )
        goto LABEL_75;
    }
    v55 = *(v54 + 10);
    if ( (v55 & 1) != 0 )
      *(v54 + 10) = v55 & 0xFFFE;
    *v54 = 0;
    *(v54 + 8) = 30;
    v56 = CEntityVariantAllocator::Allocate(0x23u);
    *v54 = v56;
    strcpy(v56, "dota_death_prophet_exorcism_spirit");
    *(v54 + 10) |= 1u;
  }
LABEL_6:
  ClassByDesignName = CEntitySystem::FindClassByDesignName(
                        g_pEntitySystem,
                        "dota_death_prophet_exorcism_spirit",
                        &spawner.m_scriptClassName);
  v10 = spawner.m_pEntityKeyValues;
  spawner.m_pEntityClass = ClassByDesignName;
  v64 = -1;
  if ( spawner.m_pEntityKeyValues == 0 )
    goto LABEL_41;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v57 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    v33 = __rdtsc();
    pEntityc = g_VProfCurrentProfile.m_TargetThreadId;
    if ( pEntityc == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "Spawn" )
      {
        m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "Spawn", 0, "Server Simulation", 4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v53 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v53->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    v10 = spawner.m_pEntityKeyValues;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v33 + __rdtsc();
  }
  if ( !CEntityKeyValues::HasValue(v10, -971301790) )
  {
    m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
    if ( m_pszClassname != 0 )
      CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
  }
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  m_nMode = spawner.m_nMode;
  v13 = CUtlString::Get(&spawner.m_scriptClassName);
  pEntity = CEntitySystem::CreateEntity(
              g_pEntitySystem,
              spawner.m_hSpawnGroupHandle,
              spawner.m_pEntityClass,
              v13,
              m_nMode,
              -1,
              -1,
              0,
              0);
  if ( pEntity != 0 )
  {
    m_pEntity = pEntity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v15 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v64 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v15 & 0x7FFF;
    }
    v65[0] = pEntity->m_pEntity;
    v65[1] = spawner.m_pEntityKeyValues;
    (*(*g_pGameResourceService + 280LL))(
      g_pGameResourceService,
      spawner.m_hSpawnGroupHandle,
      1,
      v65,
      &spawner.m_mSpawnGroupToWorld);
    CEntitySystem::QueueSpawnEntity(g_pEntitySystem, pEntity, spawner.m_pEntityKeyValues);
    if ( spawner.m_pSpawnBatch == 0 )
      CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
    m_pContext = spawner.m_pContext;
    for ( i = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
    {
      m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
      pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
      if ( m_pthis != 0 || pfn != 0 )
      {
        v19 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
        if ( (pfn & 1) != 0 )
          pfn = *(pfn + *v19 - 1);
        (pfn)(v19, pEntity, i);
      }
    }
  }
  if ( v57 )
  {
    v31 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
    {
      pEntityb = g_VProfCurrentProfile.m_TargetThreadId;
      if ( pEntityb == ThreadGetCurrentId() )
      {
        if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode->m_pParent;
          if ( m_pParent != 0 )
            g_VProfCurrentProfile.m_pCurNode = m_pParent;
          else
            m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        else
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
      }
    }
    v32 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v32 - v31 + __rdtsc();
  }
  if ( (v64 + 2) > 1 && (v20 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v64 >> 9) & 0x3F]) != 0 )
  {
    m_pInstance = 0;
    v22 = &v20[v64 & 0x1FF];
    if ( v22 != 0 && v64 == v22->m_EHandle.m_Index )
      m_pInstance = v22->m_pInstance;
  }
  else
  {
LABEL_41:
    m_pInstance = 0;
  }
  this->pSpirit = m_pInstance;
  CBaseEntity::AddEffects(m_pInstance, 32);
  Asset = FindAssetModifier<CDOTA_BaseNPC,CEntityModelModifier>(pCaster, "dota_death_prophet_exorcism_spirit");
  if ( Asset != 0 )
  {
    v24 = CUtlString::Get(&Asset->m_strModifier);
    CBaseModelEntity::SetModel(this->pSpirit, v24);
    v25.m_Data = CBaseAnimating::SelectWeightedSequence(this->pSpirit, 1502).m_Data;
    CBaseAnimating::SetSequence(this->pSpirit, v25, SetSequenceBehavior_t::SET_SEQUENCE_PRESERVE_CYCLE);
    BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this->pSpirit);
    (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 22))(BaseAnimatingController, 1.0);
  }
  v27 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  spawner._vptr_CEntitySpawnerBase = off_43EEF30;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
  if ( v27 == &g_pEntitySystem->m_entitySpawnerData )
  {
    m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
    if ( m_nEntitySpawnerDataUseCount == 1 )
      CUtlScratchMemoryPool::FreeAll(v27);
  }
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    v28 = spawner.m_pEntityKeyValues;
    if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
    {
      CEntityKeyValues::~CEntityKeyValues(v28);
      operator delete(v28);
    }
  }
  if ( spawner.m_scriptClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
LABEL_2:
  this->bHit = 0;
  this->hTarget.m_Index = -1;
  this->iHealAmount = 0;
  this->nFXAmbientIndex = -1;
  this->vTargetLoc = vec3_origin;
}


// CDOTA_Ability_DeathProphet_Exorcism::ActivateSpirit  (line 1088, @0x0000000002ab3bc0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<sSpiritInfo*>, Element, GetEffects, GrowMemory, MarkPVSInformationDirty, QAngle, RemoveEffects, end, operator[], sSpiritInfo
// calls: CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, RandomVectorOffset, CBaseEntity::SetAbsVelocity, RandomFloat, CBaseEntity::SetAbsAngles, CBaseEntity::DispatchUpdateTransmitState, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, operator new, sSpiritInfo::Init (13 total)
// callers: CDOTA_Modifier_DeathProphet_Exorcism::OnIntervalThink
// strings: "particles/units/heroes/hero_death_prophet/death_prophet_spirit_glow.vpcf", "attach_hitloc"
sSpiritInfo *__fastcall CDOTA_Ability_DeathProphet_Exorcism::ActivateSpirit(
        CDOTA_Ability_DeathProphet_Exorcism *const this,
        float a2,
        float fSpeed)
{
  sSpiritInfo **m_pMemory; // rdx
  sSpiritInfo **v5; // rcx
  sSpiritInfo *v6; // rbx
  CDOTA_BaseNPC *v7; // rax
  float v8; // xmm1_4
  __int64 v9; // xmm0_8
  vec_t v10; // xmm1_4
  vec_t v11; // xmm0_4
  CBaseEntity *pSpirit; // r12
  CBaseEntity *v13; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // eax
  const CBaseAnimating *v16; // r15
  int v17; // r14d
  CDOTA_ParticleManager *v18; // rax
  __int64 v19; // r12
  CDOTA_BaseNPC *v20; // rax
  int nFXAmbientIndex; // r13d
  const CBaseAnimating *v22; // r14
  CDOTA_ParticleManager *v23; // rax
  sSpiritInfo *v25; // rax
  CDOTA_BaseNPC *Caster; // rax
  __int64 m_Size; // r12
  int v28; // eax
  sSpiritInfo **v29; // rax
  float fSpeedb; // [rsp+Ch] [rbp-54h]
  vec_t fSpeedc; // [rsp+Ch] [rbp-54h]
  float fSpeeda; // [rsp+Ch] [rbp-54h]
  Vector vOrigin; // [rsp+10h] [rbp-50h] BYREF
  Vector vAbsVelocity; // [rsp+20h] [rbp-40h] BYREF
  Vector v35; // 0:xmm0_8.8,8:xmm1_4.4

  m_pMemory = this->m_SpiritInfos.m_Memory.m_pMemory;
  v5 = &m_pMemory[this->m_SpiritInfos.m_Size];
  if ( m_pMemory == v5 )
  {
LABEL_6:
    fSpeeda = a2;
    v25 = operator new(0x28u);
    v25->hTarget.m_Index = -1;
    v6 = v25;
    Caster = CDOTABaseAbility::GetCaster(this);
    sSpiritInfo::Init(v6, Caster, 1);
    m_Size = this->m_SpiritInfos.m_Size;
    a2 = fSpeeda;
    if ( m_Size == this->m_SpiritInfos.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<sSpiritInfo *,int>::Grow(&this->m_SpiritInfos.m_Memory, 1);
      v28 = this->m_SpiritInfos.m_Size;
      a2 = fSpeeda;
    }
    else
    {
      v28 = this->m_SpiritInfos.m_Size;
    }
    this->m_SpiritInfos.m_Size = v28 + 1;
    v29 = &this->m_SpiritInfos.m_Memory.m_pMemory[m_Size];
    if ( v29 != 0 )
      *v29 = v6;
  }
  else
  {
    while ( 1 )
    {
      v6 = *m_pMemory;
      if ( ((*m_pMemory)->pSpirit->m_fEffects.m_Value & 0x20) != 0 )
        break;
      if ( ++m_pMemory == v5 )
        goto LABEL_6;
    }
  }
  fSpeedb = a2;
  v7 = CDOTABaseAbility::GetCaster(this);
  vOrigin = *CBaseEntity::GetAbsOrigin(v7);
  (*(v6->pSpirit->_vptr_IHandleEntity + 128))(v6->pSpirit, &vOrigin, 0, 0);
  RandomVectorOffset(fSpeedb, v8);
  *&vAbsVelocity.x = v9;
  vAbsVelocity.z = v10;
  CBaseEntity::SetAbsVelocity(v6->pSpirit, &vAbsVelocity);
  v11 = RandomFloat(0.0, 360.0);
  vAbsVelocity.x = 0.0;
  vAbsVelocity.y = v11;
  vAbsVelocity.z = 0.0;
  CBaseEntity::SetAbsAngles(v6->pSpirit, &vAbsVelocity);
  pSpirit = v6->pSpirit;
  (*(v6->pSpirit->_vptr_IHandleEntity + 188))(v6->pSpirit, v6->pSpirit->m_fEffects.m_Value & 0xFFFFFFDF);
  pSpirit->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  CBaseEntity::DispatchUpdateTransmitState(pSpirit);
  v13 = v6->pSpirit;
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_death_prophet/death_prophet_spirit_glow.vpcf",
               2,
               v13,
               0,
               0);
  v16 = v6->pSpirit;
  v6->nFXAmbientIndex = Particle;
  v17 = Particle;
  v18 = GetParticleManager();
  v19 = *&vec3_invalid.x;
  fSpeedc = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(v18, v17, 0, v16, 1, 0, vec3_invalid, 1);
  v20 = CDOTABaseAbility::GetCaster(this);
  nFXAmbientIndex = v6->nFXAmbientIndex;
  v22 = v20;
  v23 = GetParticleManager();
  *&v35.x = v19;
  v35.z = fSpeedc;
  CDOTA_ParticleManager::SetParticleControlEnt(v23, nFXAmbientIndex, 1, v22, 5, "attach_hitloc", v35, 1);
  return v6;
}


// CDOTA_Ability_DeathProphet_Exorcism::FreeSpirit  (line 1127, @0x0000000002ab3e30, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CBaseEntity::AddEffects, CDOTABaseAbility::GetCaster, sSpiritInfo::Init
// callers: CDOTA_Modifier_DeathProphet_Exorcism::OnDestroy, CDOTA_Modifier_DeathProphet_Exorcism::OnIntervalThink
void __fastcall CDOTA_Ability_DeathProphet_Exorcism::FreeSpirit(
        CDOTA_Ability_DeathProphet_Exorcism *const this,
        sSpiritInfo *pInfo)
{
  int nFXAmbientIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Caster; // rax

  nFXAmbientIndex = pInfo->nFXAmbientIndex;
  if ( nFXAmbientIndex != -1 )
  {
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, nFXAmbientIndex, 0);
  }
  CBaseEntity::AddEffects(pInfo->pSpirit, 32);
  Caster = CDOTABaseAbility::GetCaster(this);
  sSpiritInfo::Init(pInfo, Caster, 0);
}


// CDOTA_Ability_DeathProphet_Exorcism::UpdateOnRemove  (line 1138, @0x0000000002a81500, libserver.so)  // inlines: Purge, PurgeAndDeleteElements, RemoveAll
// calls: CDOTABaseAbility::UpdateOnRemove, operator delete, CUtlMemory<sSpiritInfo*, int>::Purge
void __fastcall CDOTA_Ability_DeathProphet_Exorcism::UpdateOnRemove(CDOTA_Ability_DeathProphet_Exorcism *const this)
{
  __int64 v2; // r12
  int v3; // ebx
  sSpiritInfo *v4; // rdi
  bool v5; // zf

  v2 = 0;
  v3 = 0;
  CDOTABaseAbility::UpdateOnRemove(this);
  if ( this->m_SpiritInfos.m_Size > 0 )
  {
    do
    {
      ++v3;
      v4 = this->m_SpiritInfos.m_Memory.m_pMemory[v2++];
      operator delete(v4);
    }
    while ( v3 < this->m_SpiritInfos.m_Size );
  }
  v5 = (this->m_SpiritInfos.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_SpiritInfos.m_Size = 0;
  if ( v5 )
    CUtlMemory<sSpiritInfo *,int>::Purge(&this->m_SpiritInfos.m_Memory);
}


// CDOTA_Ability_DeathProphet_Exorcism::GetAbilityDamageToTargetOverInterval  (line 1147, @0x0000000002aa09c0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Ability_DeathProphet_Exorcism::GetSpiritCount, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "max_damage"
__int64 __fastcall CDOTA_Ability_DeathProphet_Exorcism::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_DeathProphet_Exorcism *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_Ability_DeathProphet_Exorcism *v6; // rbx
  int LevelSpecialValue; // r13d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    v6 = this;
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "max_damage", -1, 1);
    LODWORD(v6) = CDOTA_Ability_DeathProphet_Exorcism::GetSpiritCount(v6);
    return ((2 * LevelSpecialValue * v6) * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 1)));
  }
  return result;
}


// CDOTA_Modifier_DeathProphet_Exorcism::~CDOTA_Modifier_DeathProphet_Exorcism  (line 1159, @0x0000000002acb1d0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, CUtlMemory<sSpiritInfo*, int>::Purge
void __fastcall CDOTA_Modifier_DeathProphet_Exorcism::~CDOTA_Modifier_DeathProphet_Exorcism(
        CDOTA_Modifier_DeathProphet_Exorcism *const this)
{
  bool v2; // zf
  CUtlVectorBase<sSpiritInfo*,CUtlMemory<sSpiritInfo*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vecSpirits.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_43EEFB0;
  this->m_vecSpirits.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_vecSpirits.m_Memory,
        CUtlMemory<sSpiritInfo *,int>::Purge(&this->m_vecSpirits.m_Memory),
        (this->m_vecSpirits.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<sSpiritInfo *,int>::Purge(p_m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_DeathProphet_Exorcism::~CDOTA_Modifier_DeathProphet_Exorcism  (line 1159, @0x0000000002acb320, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Modifier_DeathProphet_Exorcism, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<sSpiritInfo*, int>::Purge
void __fastcall CDOTA_Modifier_DeathProphet_Exorcism::~CDOTA_Modifier_DeathProphet_Exorcism(
        CDOTA_Modifier_DeathProphet_Exorcism *const this)
{
  bool v2; // zf
  CUtlVectorBase<sSpiritInfo*,CUtlMemory<sSpiritInfo*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vecSpirits.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_43EEFB0;
  this->m_vecSpirits.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_vecSpirits.m_Memory;
    CUtlMemory<sSpiritInfo *,int>::Purge(&this->m_vecSpirits.m_Memory);
    if ( (this->m_vecSpirits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<sSpiritInfo *,int>::Purge(p_m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_DeathProphet_Exorcism::IsHidden  (line 1169, @0x0000000002ab8890, libserver.so)
bool __fastcall CDOTA_Modifier_DeathProphet_Exorcism::IsHidden(CDOTA_Modifier_DeathProphet_Exorcism *const this)
{
  return 0;
}


// CDOTA_Modifier_DeathProphet_Exorcism::IsPurgable  (line 1174, @0x0000000002ab88a0, libserver.so)
bool __fastcall CDOTA_Modifier_DeathProphet_Exorcism::IsPurgable(CDOTA_Modifier_DeathProphet_Exorcism *const this)
{
  return 0;
}


// CDOTA_Modifier_DeathProphet_Exorcism::GetAttributes  (line 1176, @0x0000000002ac47c0, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_DeathProphet_Exorcism::GetAttributes(CDOTA_Modifier_DeathProphet_Exorcism *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 6;
}


// CDOTA_Ability_DeathProphet_Exorcism::OnSpellStart  (line 1226, @0x0000000002a89340, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, ForceExpire, GetAbilityData, Purge, RemoveAll, end, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetCaster, CDOTA_ModifierManager::FindModifiersOfName, KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, CBaseEntity::GetAbsOrigin, CDOTAGamerules::SendProjectionAbilityMessage, KeyValues::~KeyValues, CUtlMemory<CDOTA_Buff*, int>::Purge, CDOTABaseAbility::LoadAbilityData (14 total)
// strings: "modifier_death_prophet_exorcism", "spirit_duration", "Hero_DeathProphet.Exorcism.Cast"
void __fastcall CDOTA_Ability_DeathProphet_Exorcism::OnSpellStart(CDOTA_Ability_DeathProphet_Exorcism *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff **m_pMemory; // rax
  CDOTA_Buff **v4; // rcx
  __int64 v5; // rdx
  float v6; // xmm1_4
  CDOTA_BaseNPC *v7; // r13
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  float Duration; // xmm0_4
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r15d
  CDOTA_BaseNPC *v13; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v15; // rax
  float v16; // xmm3_4
  float v17; // [rsp+Ch] [rbp-74h]
  CUtlVector<CDOTA_Buff*,CUtlMemory<CDOTA_Buff*,int> > vecExistingExorcisms; // [rsp+10h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp-38h]

  vecExistingExorcisms.m_Size = 0;
  v20 = __readfsqword(0x28u);
  vecExistingExorcisms.m_Memory.m_pMemory = 0;
  vecExistingExorcisms.m_Memory.m_nAllocationCount = 0;
  vecExistingExorcisms.m_Memory.m_nGrowSize = 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_ModifierManager::FindModifiersOfName(
    &Caster->m_ModifierManager,
    "modifier_death_prophet_exorcism",
    &vecExistingExorcisms);
  m_pMemory = vecExistingExorcisms.m_Memory.m_pMemory;
  v4 = &vecExistingExorcisms.m_Memory.m_pMemory[vecExistingExorcisms.m_Size];
  if ( vecExistingExorcisms.m_Memory.m_pMemory != v4 )
  {
    do
    {
      v5 = *m_pMemory++;
      *(v5 + 3038) = 1;
    }
    while ( v4 != m_pMemory );
  }
  KeyValues::KeyValues(&kv, "modifier_death_prophet_exorcism");
  CDOTABaseAbility::GetDuration(this);
  KeyValues::SetFloat(&kv, "spirit_duration", v6);
  v7 = CDOTABaseAbility::GetCaster(this);
  v8 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v8, v7, this, "modifier_death_prophet_exorcism", &kv, 0);
  v9 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v9, "Hero_DeathProphet.Exorcism.Cast", 0.0, 0, 0);
  Duration = CDOTABaseAbility::GetDuration(this);
  m_pAbilityData = this->m_pAbilityData;
  v17 = Duration;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  v13 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v13);
  v15 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(
    g_pGameRules,
    v15,
    1,
    m_iAbilityID,
    0,
    0,
    *&AbsOrigin->x,
    AbsOrigin->z,
    v17,
    v16);
  KeyValues::~KeyValues(&kv);
  vecExistingExorcisms.m_Size = 0;
  if ( (vecExistingExorcisms.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_Buff *,int>::Purge(&vecExistingExorcisms.m_Memory);
    if ( (vecExistingExorcisms.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_Buff *,int>::Purge(&vecExistingExorcisms.m_Memory);
  }
}


// CDOTA_Ability_DeathProphet_Exorcism::GetSpiritCount  (line 1261, @0x0000000002aa0870, libserver.so)  // inlines: GetInt, GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName
// callers: CDOTA_Ability_DeathProphet_Exorcism::GetAbilityDamageToTargetOverInterval, CDOTA_Modifier_DeathProphet_Exorcism::OnCreated
// strings: "death_prophet_witchcraft", "special_bonus_unique_death_prophet", "exorcism_2_extra_spirits", "exorcism_1_extra_spirits", "exorcism_3_extra_spirits"
int __fastcall CDOTA_Ability_DeathProphet_Exorcism::GetSpiritCount(CDOTA_Ability_DeathProphet_Exorcism *const this)
{
  int LevelSpecialValue; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v5; // rdi
  int m_Value; // eax
  int m_nValue; // ebx
  CDOTA_BaseNPC *v8; // rax
  CDOTABaseAbility *v9; // rax

  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "spirits", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "death_prophet_witchcraft", 0);
  v5 = AbilityByName;
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
  {
    m_Value = this->m_iLevel.m_Value;
    switch ( m_Value )
    {
      case 2:
        LevelSpecialValue += CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "exorcism_2_extra_spirits", -1, 1);
        break;
      case 3:
        LevelSpecialValue += CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "exorcism_3_extra_spirits", -1, 1);
        break;
      case 1:
        LevelSpecialValue += CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "exorcism_1_extra_spirits", -1, 1);
        break;
      default:
        break;
    }
  }
  m_nValue = dp_spirits.m_pParent->m_Value.m_nValue;
  if ( m_nValue <= 0 )
    m_nValue = LevelSpecialValue;
  v8 = CDOTABaseAbility::GetCaster(this);
  v9 = CDOTA_BaseNPC::FindAbilityByName(v8, "special_bonus_unique_death_prophet", 0);
  if ( v9 != 0 && v9->m_iLevel.m_Value > 0 )
    return m_nValue + CDOTABaseAbility::GetLevelSpecialValueFor<int>(v9, "value", 1, 1);
  else
    return m_nValue;
}


// CDOTA_Modifier_DeathProphet_Exorcism::OnCreated  (line 1300, @0x0000000002aad6d0, libserver.so)  // inlines: AssignTo, DOTAGameRules, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetGameTime, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::GetFloat, CDOTA_Ability_DeathProphet_Exorcism::GetSpiritCount, CDOTA_Buff::StartIntervalThink
// strings: "spirit_speed", "give_up_distance", "min_damage", "max_damage", "heal_percent", "ghost_spawn_rate" (7 total)
void __fastcall CDOTA_Modifier_DeathProphet_Exorcism::OnCreated(
        CDOTA_Modifier_DeathProphet_Exorcism *const this,
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
  CGameRules *v13; // rax
  float v14; // xmm0_4
  CDOTA_Ability_DeathProphet_Exorcism *v15; // rax
  float v16; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->radius, "radius");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->spirit_speed, "spirit_speed");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &this->max_distance, "max_distance");
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
    this->give_up_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "give_up_distance", -1, 0);
  else
    this->give_up_distance = 0;
  v8 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v8, &this->min_damage, "min_damage");
  v9 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v9, &this->max_damage, "max_damage");
  v10 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v10, &this->heal_percent, "heal_percent");
  v11 = CDOTA_Buff::GetAbility(this);
  if ( v11 != 0 )
    this->ghost_spawn_rate = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v11, "ghost_spawn_rate", -1, 0);
  else
    this->ghost_spawn_rate = 0.0;
  this->spirit_duration = KeyValues::GetFloat(pKV, "spirit_duration", v12);
  v13 = g_pGameRules;
  if ( g_pGameRules != 0 )
  {
    this->m_fStartTime = *&g_pGameRules[18].m_szQuestName[20];
    this->m_fLastThinkTime = *&v13[18].m_szQuestName[20];
    v14 = *&v13[18].m_szQuestName[20];
  }
  else
  {
    v14 = 0.0;
    this->m_fStartTime = 0.0;
    this->m_fLastThinkTime = 0.0;
  }
  this->m_fSpawnTime = v14;
  this->m_bFirstSpawn = 1;
  this->m_bForceExpired = 0;
  this->m_bCommentedOnExpired = 0;
  v15 = CDOTA_Buff::GetAbility(this);
  this->m_iSpirits = CDOTA_Ability_DeathProphet_Exorcism::GetSpiritCount(v15);
  CDOTA_Buff::StartIntervalThink(this, 0.0, v16);
}


// CDOTA_Modifier_DeathProphet_Exorcism::OnRefresh  (line 1341, @0x0000000002a79580, libserver.so)
// calls: KeyValues::GetFloat
// strings: "spirit_duration"
void __fastcall CDOTA_Modifier_DeathProphet_Exorcism::OnRefresh(
        CDOTA_Modifier_DeathProphet_Exorcism *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4

  this->spirit_duration = KeyValues::GetFloat(pKV, "spirit_duration", v2);
}


// CDOTA_Modifier_DeathProphet_Exorcism::OnDestroy  (line 1350, @0x0000000002ab3e90, libserver.so)  // inlines: end
// calls: CDOTA_Buff::GetAbility, CDOTA_Ability_DeathProphet_Exorcism::FreeSpirit
void __fastcall CDOTA_Modifier_DeathProphet_Exorcism::OnDestroy(CDOTA_Modifier_DeathProphet_Exorcism *const this)
{
  CDOTA_Ability_DeathProphet_Exorcism *Ability; // r12
  sSpiritInfo **m_pMemory; // rbx
  sSpiritInfo **v4; // r13
  sSpiritInfo *v5; // rsi

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    m_pMemory = this->m_vecSpirits.m_Memory.m_pMemory;
    v4 = &m_pMemory[this->m_vecSpirits.m_Size];
    while ( v4 != m_pMemory )
    {
      v5 = *m_pMemory++;
      CDOTA_Ability_DeathProphet_Exorcism::FreeSpirit(Ability, v5);
    }
  }
}


// CDOTA_Modifier_DeathProphet_Exorcism::DeclareFunctions  (line 1370, @0x0000000002a77810, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_DeathProphet_Exorcism::OnBuildingKilled(CModifierParams const&)
void __fastcall CDOTA_Modifier_DeathProphet_Exorcism::DeclareFunctions(
        CDOTA_Modifier_DeathProphet_Exorcism *const this)
{
  this->m_Functions[149].__pfn = CDOTA_Modifier_DeathProphet_Exorcism::OnBuildingKilled;
  this->m_Functions[149].__delta = 0;
}


// CDOTA_Modifier_DeathProphet_Exorcism::OnBuildingKilled  (line 1375, @0x0000000002a84eb0, libserver.so)  // inlines: AttackerNPC, FStrEq, Get, GetClassNameAsCStr, GetClassname, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, String, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, EconEntity_OnOwnerKillEaterEvent
// strings: "death_prophet_exorcism"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
ModifierVariant_t __fastcall CDOTA_Modifier_DeathProphet_Exorcism::OnBuildingKilled(
        CDOTA_Modifier_DeathProphet_Exorcism *const this,
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
  const char *m_pAsString; // rsi
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC_Hero *v15; // rdi

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
          v9 = params->inflictor.m_Index;
          if ( v9 + 2 > 1 )
          {
            v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->inflictor.m_Index) >> 9) & 0x3F];
            if ( v10 != 0 )
            {
              v11 = &v10[params->inflictor.m_Index & 0x1FF];
              if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
              {
                v12 = v11->m_pInstance;
                if ( v12 != 0 )
                {
                  m_pAsString = v12->m_pEntity->m_designerName.u.m_pAsString;
                  if ( m_pAsString != 0
                    && (m_pAsString == "death_prophet_exorcism" || strcmp(m_pAsString, "death_prophet_exorcism") == 0) )
                  {
                    Caster = CDOTA_Buff::GetCaster(this);
                    if ( Caster != 0 )
                    {
                      v15 = 0;
                      if ( Caster->m_bIsDOTANPC && (Caster->m_iUnitType & 1) != 0 && !Caster->m_bIsIllusion.m_Value )
                        v15 = Caster;
                    }
                    else
                    {
                      v15 = 0;
                    }
                    EconEntity_OnOwnerKillEaterEvent(
                      v15,
                      0,
                      kill_eater_event_t::kKillEaterEventType_DeathProphet_ExorcismBuildingKills,
                      1,
                      INVALID_ITEM_DEF_INDEX);
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


// CDOTA_Modifier_DeathProphet_Exorcism::AddCustomTransmiterData  (line 1390, @0x0000000002a7b570, libserver.so)  // inlines: set_duration, set_has_duration
// calls: CDOTA_Buff::AddCustomTransmiterData
void __fastcall CDOTA_Modifier_DeathProphet_Exorcism::AddCustomTransmiterData(
        CDOTA_Modifier_DeathProphet_Exorcism *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  float spirit_duration; // xmm0_4

  spirit_duration = this->spirit_duration;
  *(entry + 4) |= 0x100u;
  *(entry + 14) = spirit_duration;
  CDOTA_Buff::AddCustomTransmiterData(this, entry);
}


// CDOTA_Modifier_DeathProphet_Exorcism::OnIntervalThink  (line 1411, @0x0000000002ab3ef0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<sSpiritInfo*>, DOTAGameRules, Element, FastSqrt, Get, GetAbsVelocity, GetEHandle, GetEntityIdentity, GetEntryIndex, GetFloat, GetGameTime, GetInstance, GetNPCAttackTarget, GetSerialNumber, GetTeamNumber, GrowMemory, IndexToIdentity, IsValid, Length2D, LookupEntity, Purge, Random, RemoveAll, Set, SpeakConcept, ToDOTABaseNPC, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, end, operator CBaseEntity*, operator bool, operator*, operator*=, operator+, operator-, operator->, operator=, operator==, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetAbility, CBaseEntity::GetAbsOrigin, CBaseEntity::SetAbsOrigin, CBaseEntity::CalcAbsoluteVelocity, CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTA_Buff::GetParent, CDOTA_Speech::SpeakConcept, CResponseCriteriaSet::~CResponseCriteriaSet, CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect (40 total)
// strings: "exorcismend", "Hero_DeathProphet.Exorcism.Heal", "particles/units/heroes/hero_death_prophet/death_prophet_exorcism_attack.vpcf", "attach_hitloc", "Hero_DeathProphet.Exorcism.Damage", "particles/units/heroes/hero_death_prophet/death_prophet_exorcism_attack_building.vpcf" (7 total)
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_DeathProphet_Exorcism::OnIntervalThink(CDOTA_Modifier_DeathProphet_Exorcism *const this)
{
  CDOTA_Modifier_DeathProphet_Exorcism *v1; // rbx
  float max_distance; // xmm1_4
  CGameRules *v3; // rax
  sSpiritInfo **m_pMemory; // rdx
  sSpiritInfo **v5; // r15
  sSpiritInfo **v6; // r13
  const Vector *AbsOrigin; // rax
  float v8; // xmm0_4
  int v9; // xmm1_4
  CBaseEntity *const *v10; // rbx
  CDOTA_DeathProphet_Exorcism_Spirit *pSpirit; // r14
  const CBaseEntity *v12; // rdi
  float frametime; // xmm0_4
  float m_fLastThinkTime; // xmm0_4
  bool v15; // zf
  float v16; // xmm0_4
  float v17; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  const CEntityHandle **v19; // r14
  __int64 m_Size; // rax
  sSpiritInfo *v21; // r13
  uint32 m_Index; // eax
  const CEntityHandle *v23; // r15
  CEntityIdentity *v24; // rdx
  CEntityIdentity *v25; // rdx
  CDOTA_BaseNPC *Caster; // rax
  const Vector *v27; // rax
  int nFXAmbientIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  const Vector *v30; // rax
  vec_t v31; // xmm1_4
  vec_t v32; // xmm0_4
  const Vector *v33; // r12
  CDOTA_BaseNPC *v34; // rax
  const Vector *v35; // rax
  float x; // xmm0_4
  float y; // xmm1_4
  CEntityInstance *v38; // r12
  uint32 v39; // eax
  CEntityIdentity *v40; // rdx
  CEntityIdentity *v41; // rdx
  CDOTA_BaseNPC *v42; // rax
  CEntityInstance *v43; // rax
  CDOTA_BaseNPC *v44; // rax
  CEntityInstance *v45; // rax
  CDOTA_BaseNPC *v46; // rax
  CDOTA_BaseNPC *v47; // rax
  CEntityInstance *v48; // rax
  const CBaseEntity *v49; // rdi
  const Vector *v50; // rax
  CDOTA_BaseNPC *v51; // rax
  CEntityInstance *v52; // rax
  float v53; // xmm1_4
  int v54; // eax
  unsigned __int64 v55; // rdx
  CEntityIdentity *v56; // rcx
  CEntityIdentity *v57; // rdx
  __int64 v58; // xmm0_8
  int v59; // xmm1_4
  CDOTA_BaseNPC *v60; // rax
  const Vector *v61; // rax
  vec_t v62; // xmm0_4
  vec_t v63; // xmm2_4
  CDOTA_BaseNPC *v64; // r12
  float v65; // xmm0_4
  float v66; // xmm0_4
  float spirit_speed; // xmm0_4
  bool v68; // al
  float v69; // xmm0_4
  float v70; // xmm0_4
  float v71; // xmm0_4
  sSpiritInfo *v72; // rax
  __int64 v73; // r12
  sSpiritInfo *v74; // r13
  int v75; // eax
  sSpiritInfo **v76; // rax
  CDOTA_BaseNPC *v77; // rax
  CDOTA_BaseNPC_Hero *v78; // rax
  float v79; // xmm7_4
  CDOTA_BaseNPC *v80; // r14
  CDOTA_BaseNPC *v81; // rax
  const Vector *v82; // r15
  CDOTA_BaseNPC *v83; // rax
  float v84; // xmm1_4
  uint32 v85; // eax
  sSpiritInfo **v86; // r13
  sSpiritInfo **v87; // r14
  CDOTA_BaseNPC *v88; // rax
  CDOTA_BaseNPC *v89; // rax
  const Vector *v90; // rax
  CEntityIdentity *v91; // rsi
  __int64 v92; // xmm0_8
  float v93; // xmm1_4
  __m128i v94; // xmm6
  float v95; // r12d
  CDOTA_BaseNPC *v96; // rax
  const Vector *v97; // rax
  vec_t v98; // xmm0_4
  vec_t v99; // xmm2_4
  CDOTABaseAbility *Ability; // rax
  __m128i v101; // xmm7
  CBaseEntity *v102; // r15
  float v103; // r12d
  CDOTA_BaseNPC *v104; // rax
  CDOTA_BaseNPC *v105; // rax
  __int64 v106; // r12
  int v107; // eax
  sSpiritInfo **v108; // rax
  CDOTA_BaseNPC *v109; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v111; // eax
  __int16 v112; // cx
  CDOTA_BaseNPC *v113; // rax
  const Vector *v114; // rax
  const CBaseEntity *v115; // rdi
  const Vector *v116; // rax
  vec_t v117; // xmm2_4
  float radius; // xmm7_4
  CDOTA_BaseNPC *v119; // rax
  CDOTA_BaseNPC *v120; // rax
  uint32 v121; // eax
  float v122; // xmm0_4
  CEntityIdentity *v123; // rdx
  int v124; // eax
  __int16 v125; // cx
  CDOTA_BaseNPC *v126; // rax
  CDOTA_BaseNPC *v127; // rax
  vec_t v128; // xmm1_4
  __int64 v129; // xmm0_8
  CDOTA_BaseNPC *v130; // rax
  const Vector *v131; // rax
  vec_t v132; // xmm1_4
  vec_t v133; // xmm0_4
  vec_t v134; // xmm2_4
  CDOTA_BaseNPC *v135; // rax
  CDOTA_ParticleManager *v136; // rax
  CDOTA_ParticleManager *v137; // rax
  const CBaseEntity *v138; // rax
  CDOTA_ParticleManager *v139; // rax
  CDOTA_ParticleManager *v140; // rax
  CDOTA_BaseNPC *v141; // rax
  CDOTA_ParticleManager *v142; // rax
  CDOTA_ParticleManager *v143; // rax
  const CBaseEntity *v144; // rax
  CDOTA_ParticleManager *v145; // rax
  CDOTA_ParticleManager *v146; // rax
  const CBaseEntity *v147; // rax
  CEntityInstance *v148; // rax
  const CBaseEntity *v149; // rax
  const CBaseAnimating *pEnt; // [rsp+18h] [rbp-118h]
  const CBaseAnimating *pEnta; // [rsp+18h] [rbp-118h]
  const CBaseAnimating *pEntb; // [rsp+18h] [rbp-118h]
  const CBaseAnimating *pEntc; // [rsp+18h] [rbp-118h]
  Vector *vPosition; // [rsp+28h] [rbp-108h]
  Vector *vPositiona; // [rsp+28h] [rbp-108h]
  Vector *vPositionb; // [rsp+28h] [rbp-108h]
  Vector *vPositionc; // [rsp+28h] [rbp-108h]
  CDOTABaseAbility *vPositiond; // [rsp+28h] [rbp-108h]
  Vector *vPositione; // [rsp+28h] [rbp-108h]
  Vector *vPositionf; // [rsp+28h] [rbp-108h]
  float nFxIndex; // [rsp+30h] [rbp-100h]
  CDOTA_BaseNPC *nFxIndexa; // [rsp+30h] [rbp-100h]
  CDOTA_BaseNPC *nFxIndexb; // [rsp+30h] [rbp-100h]
  int nFxIndexc; // [rsp+30h] [rbp-100h]
  int nFxIndexd; // [rsp+30h] [rbp-100h]
  CDOTA_Ability_DeathProphet_Exorcism *pExorcismAbility; // [rsp+38h] [rbp-F8h]
  CDOTA_Modifier_DeathProphet_Exorcism *thisa; // [rsp+40h] [rbp-F0h]
  char thisb; // [rsp+40h] [rbp-F0h]
  float nActiveSpiritsa; // [rsp+4Ch] [rbp-E4h]
  int nActiveSpirits; // [rsp+4Ch] [rbp-E4h]
  float v171; // [rsp+50h] [rbp-E0h]
  const CEntityHandle **v172; // [rsp+50h] [rbp-E0h]
  float iDamaged; // [rsp+58h] [rbp-D8h]
  float iDamagee; // [rsp+58h] [rbp-D8h]
  CDOTA_BaseNPC *iDamagef; // [rsp+58h] [rbp-D8h]
  char iDamageg; // [rsp+58h] [rbp-D8h]
  const Vector *iDamage; // [rsp+58h] [rbp-D8h]
  float iDamagea; // [rsp+58h] [rbp-D8h]
  float iDamageh; // [rsp+58h] [rbp-D8h]
  float iDamageb; // [rsp+58h] [rbp-D8h]
  float iDamagei; // [rsp+58h] [rbp-D8h]
  float iDamagej; // [rsp+58h] [rbp-D8h]
  float iDamagek; // [rsp+58h] [rbp-D8h]
  int iDamagec; // [rsp+58h] [rbp-D8h]
  Vector vSpiritToTarget; // [rsp+60h] [rbp-D0h] BYREF
  QAngle angle; // [rsp+70h] [rbp-C0h] BYREF
  QAngle targetAngle; // [rsp+80h] [rbp-B0h] BYREF
  Vector vForward; // [rsp+90h] [rbp-A0h] BYREF
  CUtlVector<sSpiritInfo*,CUtlMemory<sSpiritInfo*,int> > vecSpiritsToRemove; // [rsp+A0h] [rbp-90h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+C0h] [rbp-70h] BYREF

  v1 = this;
  pExorcismAbility = CDOTA_Buff::GetAbility(this);
  v3 = g_pGameRules;
  if ( g_pGameRules != 0 && *&g_pGameRules[6].m_szQuestName[68] == 15 )
  {
    m_fLastThinkTime = v1->m_fLastThinkTime;
  }
  else
  {
    m_pMemory = v1->m_vecSpirits.m_Memory.m_pMemory;
    v5 = &m_pMemory[v1->m_vecSpirits.m_Size];
    if ( m_pMemory != v5 )
    {
      v6 = v1->m_vecSpirits.m_Memory.m_pMemory;
      thisa = v1;
      do
      {
        v10 = *v6;
        pSpirit = (*v6)->pSpirit;
        v12 = pSpirit;
        frametime = gpGlobals->frametime;
        if ( (pSpirit->m_iEFlags & 0x1000) != 0 )
        {
          iDamagee = gpGlobals->frametime;
          CBaseEntity::CalcAbsoluteVelocity(pSpirit);
          v12 = *v10;
          frametime = iDamagee;
        }
        ++v6;
        nActiveSpiritsa = pSpirit->m_vecAbsVelocity.m_Value.x * frametime;
        v171 = pSpirit->m_vecAbsVelocity.m_Value.y * frametime;
        iDamaged = frametime * pSpirit->m_vecAbsVelocity.m_Value.z;
        AbsOrigin = CBaseEntity::GetAbsOrigin(v12);
        v8 = iDamaged + AbsOrigin->z;
        *&v9 = nActiveSpiritsa + AbsOrigin->x;
        *(&hEntities.m_Size + 1) = v171 + AbsOrigin->y;
        *&hEntities.m_Memory.m_pMemory = v8;
        hEntities.m_Size = v9;
        CBaseEntity::SetAbsOrigin(*v10, &hEntities);
      }
      while ( v5 != v6 );
      v1 = thisa;
      v3 = g_pGameRules;
    }
    m_fLastThinkTime = v1->m_fLastThinkTime;
    if ( v3 == 0 )
    {
      if ( m_fLastThinkTime > -0.1 )
        return;
      v15 = !v1->m_bForceExpired;
      v16 = 0.0;
      v1->m_fLastThinkTime = 0.0;
      if ( !v15 )
        goto LABEL_14;
      goto LABEL_13;
    }
  }
  max_distance = *&v3[18].m_szQuestName[20];
  if ( m_fLastThinkTime > (max_distance - 0.1) )
    return;
  v15 = !v1->m_bForceExpired;
  v1->m_fLastThinkTime = max_distance;
  if ( !v15 )
    goto LABEL_14;
  v16 = *&v3[18].m_szQuestName[20];
LABEL_13:
  max_distance = v1->spirit_duration + v1->m_fStartTime;
  if ( v16 > max_distance )
  {
LABEL_14:
    if ( v1->m_bCommentedOnExpired )
    {
      thisb = 1;
    }
    else
    {
      CResponseCriteriaSet::CResponseCriteriaSet(&hEntities);
      CResponseCriteriaSet::AppendCriteria(&hEntities, "exorcismend", 1.0, v17);
      m_pSpeech = CDOTA_Buff::GetParent(v1)->m_Speech.m_pSpeech;
      if ( m_pSpeech != 0 )
        CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &hEntities, 0, 0, 0, 0, 0);
      v1->m_bCommentedOnExpired = 1;
      CResponseCriteriaSet::~CResponseCriteriaSet(&hEntities);
      thisb = 1;
    }
    goto LABEL_19;
  }
  thisb = 0;
LABEL_19:
  v19 = v1->m_vecSpirits.m_Memory.m_pMemory;
  vecSpiritsToRemove.m_Size = 0;
  m_Size = v1->m_vecSpirits.m_Size;
  vecSpiritsToRemove.m_Memory.m_nAllocationCount = 0;
  vecSpiritsToRemove.m_Memory.m_pMemory = 0;
  vecSpiritsToRemove.m_Memory.m_nGrowSize = 0;
  nActiveSpirits = 0;
  v172 = &v19[m_Size];
  if ( v19 != v172 )
  {
    while ( 1 )
    {
      v21 = *v19;
      m_Index = (*v19)[5].m_Index;
      v23 = *v19 + 5;
      if ( m_Index + 2 > 1 )
      {
        v24 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v21->hTarget.m_Index) >> 9) & 0x3F];
        if ( v24 != 0 )
        {
          v25 = &v24[v21->hTarget.m_Index & 0x1FF];
          if ( v25 != 0 && m_Index == v25->m_EHandle.m_Index )
          {
            v148 = CEntityHandle::operator CEntityInstance *(*v19 + 5);
            if ( (*(v148->_vptr_IHandleEntity + 139))(v148) != 0 )
            {
              if ( v21->bHit )
              {
                v149 = CEntityHandle::operator CEntityInstance *(v23);
                v21->vTargetLoc = *CBaseEntity::GetAbsOrigin(v149);
              }
            }
            else
            {
              v21->hTarget.m_Index = -1;
            }
          }
        }
      }
      Caster = CDOTA_Buff::GetCaster(v1);
      v27 = CBaseEntity::GetAbsOrigin(Caster);
      if ( fsqrt(
             ((v21->vTargetLoc.x - v27->x) * (v21->vTargetLoc.x - v27->x))
           + ((v21->vTargetLoc.y - v27->y) * (v21->vTargetLoc.y - v27->y))) > v1->give_up_distance )
      {
        nFXAmbientIndex = v21->nFXAmbientIndex;
        if ( nFXAmbientIndex != -1 )
        {
          ParticleManager = GetParticleManager();
          CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, nFXAmbientIndex, 0);
          v21->nFXAmbientIndex = -1;
        }
        v21->hTarget.m_Index = -1;
      }
      v30 = CBaseEntity::GetAbsOrigin(v21->pSpirit);
      v31 = v21->vTargetLoc.y - v30->y;
      v32 = v21->vTargetLoc.z - v30->z;
      vSpiritToTarget.x = v21->vTargetLoc.x - v30->x;
      vSpiritToTarget.y = v31;
      vSpiritToTarget.z = v32;
      v33 = CBaseEntity::GetAbsOrigin(v21->pSpirit);
      v34 = CDOTA_Buff::GetCaster(v1);
      v35 = CBaseEntity::GetAbsOrigin(v34);
      max_distance = v1->max_distance;
      if ( fsqrt(((v35->x - v33->x) * (v35->x - v33->x)) + ((v35->y - v33->y) * (v35->y - v33->y))) > max_distance )
        goto LABEL_105;
      ++nActiveSpirits;
      if ( thisb != 0 )
      {
        v109 = CDOTA_Buff::GetCaster(v1);
        if ( v109 != 0 && (m_pEntity = v109->m_pEntity) != 0 )
        {
          v111 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          v112 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v112 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(v21->hTarget.m_Index) = v112 | v21->hTarget.m_Index & 0x8000;
          v21->hTarget.m_Index = (v111 << 15) | v21->hTarget.m_Index & 0x7FFF;
        }
        else
        {
          v21->hTarget.m_Index = -1;
        }
        v113 = CDOTA_Buff::GetCaster(v1);
        v114 = CBaseEntity::GetAbsOrigin(v113);
        v115 = v21->pSpirit;
        v21->vTargetLoc = *v114;
        v116 = CBaseEntity::GetAbsOrigin(v115);
        x = v21->vTargetLoc.x - v116->x;
        y = v21->vTargetLoc.y - v116->y;
        v117 = v21->vTargetLoc.z - v116->z;
        vSpiritToTarget.x = x;
        vSpiritToTarget.y = y;
        vSpiritToTarget.z = v117;
      }
      else
      {
        x = vSpiritToTarget.x;
        y = vSpiritToTarget.y;
      }
      if ( dp_radius.m_pParent->m_Value.m_fValue > fsqrt((x * x) + (y * y)) )
        break;
LABEL_60:
      angle = *CBaseEntity::GetAbsAngles(v21->pSpirit);
      VectorAngles(&vSpiritToTarget, &targetAngle);
      for ( iDamagea = targetAngle.y - angle.y; iDamagea > 180.0; iDamagea = iDamagea - 360.0 )
        ;
      for ( ; iDamagea < -180.0; iDamagea = iDamagea + 360.0 )
        ;
      v64 = CDOTA_Buff::GetCaster(v1);
      if ( v64 == CEntityHandle::operator CEntityInstance *(v23) )
      {
        v122 = (dp_pull.m_pParent->m_Value.m_fValue + dp_pull.m_pParent->m_Value.m_fValue) * iDamagea;
        if ( v122 > 40.0 )
          v66 = 40.0;
        else
          v66 = fmaxf(-40.0, v122);
      }
      else
      {
        v65 = iDamagea * dp_pull.m_pParent->m_Value.m_fValue;
        if ( v65 > 25.0 )
          v66 = 25.0;
        else
          v66 = fmaxf(-25.0, v65);
      }
      angle.y = v66 + angle.y;
      AngleVectors(&angle, &vForward, 0, 0);
      spirit_speed = v1->spirit_speed;
      vForward.z = 0.0;
      vForward.x = vForward.x * spirit_speed;
      vForward.y = spirit_speed * vForward.y;
      CBaseEntity::SetAbsAngles(v21->pSpirit, &angle);
      CBaseEntity::SetAbsVelocity(v21->pSpirit, &vForward);
      *&hEntities.m_Size = *CBaseEntity::GetAbsOrigin(v21->pSpirit);
      LODWORD(hEntities.m_Memory.m_pMemory) = GetGroundHeight(&hEntities, 0);
      CBaseEntity::SetAbsOrigin(v21->pSpirit, &hEntities);
LABEL_68:
      if ( v172 == ++v19 )
        goto LABEL_69;
    }
    iDamagef = CDOTA_Buff::GetCaster(v1);
    v38 = CEntityHandle::operator CEntityInstance *(v23);
    if ( iDamagef == v38 )
    {
      Ability = CDOTA_Buff::GetAbility(v1);
      *v101.m128i_i32 = v21->iHealAmount;
      v102 = Ability;
      v103 = COERCE_FLOAT(_mm_cvtsi128_si32(v101));
      v104 = CDOTA_Buff::GetCaster(v1);
      CDOTA_BaseNPC::Heal(v104, v103, v102, 0, 1);
      v105 = CDOTA_Buff::GetCaster(v1);
      CDOTA_BaseNPC::UnitEmitSound(v105, "Hero_DeathProphet.Exorcism.Heal", 0.0, 0, 0);
LABEL_105:
      v106 = vecSpiritsToRemove.m_Size;
      v107 = vecSpiritsToRemove.m_Size;
      if ( vecSpiritsToRemove.m_Size == vecSpiritsToRemove.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<sSpiritInfo *,int>::Grow(&vecSpiritsToRemove.m_Memory, 1);
        v107 = vecSpiritsToRemove.m_Size;
      }
      vecSpiritsToRemove.m_Size = v107 + 1;
      v108 = &vecSpiritsToRemove.m_Memory.m_pMemory[v106];
      if ( v108 != 0 )
        *v108 = v21;
      goto LABEL_68;
    }
    if ( v21->bHit )
    {
      v39 = v21->hTarget.m_Index;
      if ( v39 + 2 > 1 )
      {
        v40 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v21->hTarget.m_Index) >> 9) & 0x3F];
        if ( v40 != 0 )
        {
          v41 = &v40[v21->hTarget.m_Index & 0x1FF];
          if ( v41 != 0 && v39 == v41->m_EHandle.m_Index )
          {
            if ( v38 != 0 && BYTE3(v38[7]._vptr_IHandleEntity) != 0 )
            {
              v135 = CDOTA_Buff::GetCaster(v1);
              if ( !CDOTA_BaseNPC::IsInvisibleTo(v38, v135) )
              {
                iDamagek = RandomInt(v1->min_damage, v1->max_damage);
                iDamagec = (GetUnitCombatProficiency(0, v38[50].m_hPrivateScope.m_hScope) * iDamagek);
                if ( (v38[43].m_iszPrivateVScripts.u.m_Id & 0x10) != 0 )
                {
                  v142 = GetParticleManager();
                  nFxIndexd = CDOTA_ParticleManager::CreateParticle(
                                v142,
                                "particles/units/heroes/hero_death_prophet/death_prophet_exorcism_attack_building.vpcf",
                                2,
                                0,
                                0,
                                0);
                  vPositione = CBaseEntity::GetAbsOrigin(v21->pSpirit);
                  pEntb = v21->pSpirit;
                  v143 = GetParticleManager();
                  CDOTA_ParticleManager::SetParticleControlEnt(v143, nFxIndexd, 0, pEntb, 1, 0, *vPositione, 1);
                  v144 = CEntityHandle::operator CEntityInstance *(v23);
                  vPositionf = CBaseEntity::GetAbsOrigin(v144);
                  pEntc = CEntityHandle::operator CEntityInstance *(v23);
                  v145 = GetParticleManager();
                  CDOTA_ParticleManager::SetParticleControlEnt(
                    v145,
                    nFxIndexd,
                    1,
                    pEntc,
                    5,
                    "attach_hitloc",
                    *vPositionf,
                    1);
                  v146 = GetParticleManager();
                  CDOTA_ParticleManager::ReleaseParticleIndex(v146, nFxIndexd);
                  CDOTA_BaseNPC::UnitEmitSound(v38, "Damage_Melee.Building", 0.0, 0, 0);
                }
                else
                {
                  v136 = GetParticleManager();
                  nFxIndexc = CDOTA_ParticleManager::CreateParticle(
                                v136,
                                "particles/units/heroes/hero_death_prophet/death_prophet_exorcism_attack.vpcf",
                                2,
                                0,
                                0,
                                0);
                  vPositionb = CBaseEntity::GetAbsOrigin(v21->pSpirit);
                  pEnt = v21->pSpirit;
                  v137 = GetParticleManager();
                  CDOTA_ParticleManager::SetParticleControlEnt(v137, nFxIndexc, 0, pEnt, 1, 0, *vPositionb, 1);
                  v138 = CEntityHandle::operator CEntityInstance *(v23);
                  vPositionc = CBaseEntity::GetAbsOrigin(v138);
                  pEnta = CEntityHandle::operator CEntityInstance *(v23);
                  v139 = GetParticleManager();
                  CDOTA_ParticleManager::SetParticleControlEnt(
                    v139,
                    nFxIndexc,
                    1,
                    pEnta,
                    5,
                    "attach_hitloc",
                    *vPositionc,
                    1);
                  v140 = GetParticleManager();
                  CDOTA_ParticleManager::ReleaseParticleIndex(v140, nFxIndexc);
                }
                vPositiond = CDOTA_Buff::GetAbility(v1);
                v141 = CDOTA_Buff::GetCaster(v1);
                ApplyDamage(v141, v38, vPositiond, iDamagec, 1, 8);
                v21->iHealAmount += v1->heal_percent * iDamagec / 100;
                CDOTA_BaseNPC::UnitEmitSound(v38, "Hero_DeathProphet.Exorcism.Damage", 0.0, 0, 0);
              }
            }
            v38 = CEntityHandle::operator CEntityInstance *(v23);
          }
        }
      }
    }
    if ( v38 == 0 || BYTE3(v38[7]._vptr_IHandleEntity) == 0 )
      v38 = 0;
    v42 = CDOTA_Buff::GetCaster(v1);
    v43 = CEntityHandle::operator CEntityInstance *(&v42->m_hAttackTarget);
    if ( v43 != 0 && BYTE3(v43[7]._vptr_IHandleEntity) != 0 )
    {
      v44 = CDOTA_Buff::GetCaster(v1);
      v45 = CEntityHandle::operator CEntityInstance *(&v44->m_hAttackTarget);
      if ( v45 == 0 || BYTE3(v45[7]._vptr_IHandleEntity) == 0 )
        v45 = 0;
      iDamageg = HIBYTE(v45[7].m_CScriptComponent);
      if ( iDamageg != CDOTA_Buff::GetCaster(v1)->m_iTeamNum.m_Value )
      {
        v46 = CDOTA_Buff::GetCaster(v1);
        iDamage = CBaseEntity::GetAbsOrigin(v46);
        v47 = CDOTA_Buff::GetCaster(v1);
        v48 = CEntityHandle::operator CEntityInstance *(&v47->m_hAttackTarget);
        if ( v48 != 0 && BYTE3(v48[7]._vptr_IHandleEntity) != 0 )
          v49 = v48;
        else
          v49 = 0;
        v50 = CBaseEntity::GetAbsOrigin(v49);
        if ( v1->radius > fsqrt(
                            ((v50->x - iDamage->x) * (v50->x - iDamage->x))
                          + ((v50->y - iDamage->y) * (v50->y - iDamage->y))) )
        {
          v51 = CDOTA_Buff::GetCaster(v1);
          v52 = CEntityHandle::operator CEntityInstance *(&v51->m_hAttackTarget);
          if ( v52 != 0 && BYTE3(v52[7]._vptr_IHandleEntity) != 0 && (v123 = v52->m_pEntity) != 0 )
          {
            v124 = (v123->m_EHandle.m_Index >> 15) - (v123->m_flags & 1);
            v125 = 0x7FFF;
            if ( v123->m_EHandle.m_Index != -1 )
              v125 = v123->m_EHandle.m_Index & 0x7FFF;
            LOWORD(v21->hTarget.m_Index) = v125 | v21->hTarget.m_Index & 0x8000;
            v54 = (v124 << 15) | v21->hTarget.m_Index & 0x7FFF;
            v21->hTarget.m_Index = v54;
          }
          else
          {
            v21->hTarget.m_Index = -1;
            v54 = -1;
          }
          if ( !v21->bHit )
          {
LABEL_55:
            if ( (v54 + 2) > 1 )
            {
              v55 = v21->hTarget.m_Index & 0x7FFF;
              v56 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v55 >> 9)];
              if ( v56 != 0 )
              {
LABEL_57:
                v57 = &v56[v55 & 0x1FF];
                if ( v57 != 0 && v54 == v57->m_EHandle.m_Index )
                {
                  v21->bHit = 1;
                  v147 = CEntityHandle::operator CEntityInstance *(v23);
                  v21->vTargetLoc = *CBaseEntity::GetAbsOrigin(v147);
                  goto LABEL_60;
                }
                goto LABEL_59;
              }
            }
            goto LABEL_59;
          }
LABEL_99:
          if ( (v54 + 2) > 1 )
          {
            v55 = v21->hTarget.m_Index & 0x7FFF;
            v56 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v55 >> 9)];
            if ( v56 != 0 )
            {
              v91 = &v56[v21->hTarget.m_Index & 0x1FF];
              if ( v91 != 0 && v91->m_EHandle.m_Index == v54 )
              {
                v21->bHit = 0;
                RandomVectorOffset(v1->radius, v53);
                *&hEntities.m_Size = v92;
                *&hEntities.m_Memory.m_pMemory = v93;
                v94 = HIDWORD(v92);
                *v94.m128i_i32 = *(&v92 + 1) * 0.5;
                nFxIndex = v93 * 0.5;
                iDamagei = *&v92 * 0.5;
                v95 = COERCE_FLOAT(_mm_cvtsi128_si32(v94));
                v96 = CDOTA_Buff::GetCaster(v1);
                v97 = CBaseEntity::GetAbsOrigin(v96);
                v98 = nFxIndex + v97->z;
                v99 = iDamagei + v97->x;
                v21->vTargetLoc.y = v95 + v97->y;
                v21->vTargetLoc.z = v98;
                v21->vTargetLoc.x = v99;
                goto LABEL_60;
              }
              goto LABEL_57;
            }
          }
LABEL_59:
          v21->bHit = 0;
          RandomVectorOffset(v1->radius, v53);
          *&hEntities.m_Size = v58;
          LODWORD(hEntities.m_Memory.m_pMemory) = v59;
          v60 = CDOTA_Buff::GetCaster(v1);
          v61 = CBaseEntity::GetAbsOrigin(v60);
          v62 = v61->z + *&hEntities.m_Memory.m_pMemory;
          v63 = v61->x + *&hEntities.m_Size;
          v21->vTargetLoc.y = v61->y + *(&hEntities.m_Size + 1);
          v21->vTargetLoc.z = v62;
          v21->vTargetLoc.x = v63;
          goto LABEL_60;
        }
      }
    }
    if ( v38 == 0 || (v88 = CDOTA_Buff::GetCaster(v1), CDOTA_BaseNPC::IsInvisibleTo(v38, v88)) )
    {
      hEntities.m_Size = 0;
      radius = v1->radius;
      hEntities.m_Memory.m_pMemory = 0;
      hEntities.m_Memory.m_nAllocationCount = 0;
      hEntities.m_Memory.m_nGrowSize = 0;
      iDamagej = radius;
      nFxIndexa = CDOTA_Buff::GetCaster(v1);
      v119 = CDOTA_Buff::GetCaster(v1);
      vPosition = CBaseEntity::GetAbsOrigin(v119);
      v120 = CDOTA_Buff::GetCaster(v1);
      FindUnitsInRadius(v120->m_iTeamNum.m_Value, vPosition, nFxIndexa, iDamagej, &hEntities, 2, 55, 16656, 0, 0);
      if ( hEntities.m_Size <= 0 )
      {
        v21->hTarget.m_Index = -1;
        v21->bHit = 0;
      }
      else
      {
        v121 = hEntities.m_Memory.m_pMemory[RandomInt(0, (hEntities.m_Size - 1))].m_Index;
        v21->bHit = 0;
        v21->hTarget.m_Index = v121;
      }
    }
    else
    {
      v89 = CDOTA_Buff::GetCaster(v1);
      v90 = CBaseEntity::GetAbsOrigin(v89);
      v53 = (v21->vTargetLoc.y - v90->y) * (v21->vTargetLoc.y - v90->y);
      iDamageb = v1->radius;
      if ( fsqrt(((v21->vTargetLoc.x - v90->x) * (v21->vTargetLoc.x - v90->x)) + v53) <= iDamageb )
        goto LABEL_98;
      hEntities.m_Size = 0;
      hEntities.m_Memory.m_pMemory = 0;
      hEntities.m_Memory.m_nAllocationCount = 0;
      hEntities.m_Memory.m_nGrowSize = 0;
      nFxIndexb = CDOTA_Buff::GetCaster(v1);
      v126 = CDOTA_Buff::GetCaster(v1);
      vPositiona = CBaseEntity::GetAbsOrigin(v126);
      v127 = CDOTA_Buff::GetCaster(v1);
      FindUnitsInRadius(v127->m_iTeamNum.m_Value, vPositiona, nFxIndexb, iDamageb, &hEntities, 2, 55, 16656, 0, 0);
      if ( hEntities.m_Size <= 0 )
        v21->hTarget.m_Index = -1;
      else
        v21->hTarget.m_Index = hEntities.m_Memory.m_pMemory[RandomInt(0, (hEntities.m_Size - 1))].m_Index;
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
LABEL_98:
    v54 = v21->hTarget.m_Index;
    if ( !v21->bHit )
      goto LABEL_55;
    goto LABEL_99;
  }
LABEL_69:
  v68 = 1;
  if ( !v1->m_bFirstSpawn )
  {
    v69 = 0.0;
    max_distance = v1->m_fSpawnTime;
    if ( g_pGameRules != 0 )
      v69 = *&g_pGameRules[18].m_szQuestName[20];
    v68 = (v69 - v1->ghost_spawn_rate) >= max_distance;
  }
  if ( v1->m_iSpirits > nActiveSpirits && v68 && thisb == 0 )
  {
    v70 = 0.0;
    if ( g_pGameRules != 0 )
      v70 = *&g_pGameRules[18].m_szQuestName[20];
    v1->m_fSpawnTime = v70;
    v71 = v1->spirit_speed;
    v1->m_bFirstSpawn = 0;
    v72 = CDOTA_Ability_DeathProphet_Exorcism::ActivateSpirit(pExorcismAbility, v71, max_distance);
    v73 = v1->m_vecSpirits.m_Size;
    v74 = v72;
    v75 = v1->m_vecSpirits.m_Size;
    if ( v73 == v1->m_vecSpirits.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<sSpiritInfo *,int>::Grow(&v1->m_vecSpirits.m_Memory, 1);
      v75 = v1->m_vecSpirits.m_Size;
    }
    v1->m_vecSpirits.m_Size = v75 + 1;
    v76 = &v1->m_vecSpirits.m_Memory.m_pMemory[v73];
    if ( v76 != 0 )
      *v76 = v74;
    v77 = CDOTA_Buff::GetCaster(v1);
    v78 = ToDOTABaseNPCRealHero(v77);
    EconEntity_OnOwnerKillEaterEvent(
      v78,
      0,
      kill_eater_event_t::kKillEaterEventType_DeathProphet_ExorcismSpiritsSummoned,
      1,
      INVALID_ITEM_DEF_INDEX);
    hEntities.m_Size = 0;
    v79 = v1->radius;
    hEntities.m_Memory.m_pMemory = 0;
    hEntities.m_Memory.m_nAllocationCount = 0;
    hEntities.m_Memory.m_nGrowSize = 0;
    iDamageh = v79;
    v80 = CDOTA_Buff::GetCaster(v1);
    v81 = CDOTA_Buff::GetCaster(v1);
    v82 = CBaseEntity::GetAbsOrigin(v81);
    v83 = CDOTA_Buff::GetCaster(v1);
    FindUnitsInRadius(v83->m_iTeamNum.m_Value, v82, v80, iDamageh, &hEntities, 2, 55, 16640, 0, 0);
    if ( hEntities.m_Size <= 0 )
    {
      RandomVectorOffset(v1->radius, v84);
      vForward.z = v128;
      *&vForward.x = v129;
      v130 = CDOTA_Buff::GetCaster(v1);
      v131 = CBaseEntity::GetAbsOrigin(v130);
      v132 = v131->y + vForward.y;
      v133 = v131->z + vForward.z;
      v134 = v131->x + vForward.x;
      v74->hTarget.m_Index = -1;
      v74->vTargetLoc.y = v132;
      v74->vTargetLoc.z = v133;
      v74->vTargetLoc.x = v134;
      v74->bHit = 0;
    }
    else
    {
      v85 = hEntities.m_Memory.m_pMemory[RandomInt(0, (hEntities.m_Size - 1))].m_Index;
      v74->bHit = 1;
      v74->hTarget.m_Index = v85;
    }
    ++nActiveSpirits;
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
  }
  v86 = vecSpiritsToRemove.m_Memory.m_pMemory;
  v87 = &vecSpiritsToRemove.m_Memory.m_pMemory[vecSpiritsToRemove.m_Size];
  if ( vecSpiritsToRemove.m_Memory.m_pMemory != v87 )
  {
    do
    {
      *&hEntities.m_Size = *v86;
      CUtlVectorBase<sSpiritInfo *,CUtlMemory<sSpiritInfo *,int>>::FindAndRemove(&v1->m_vecSpirits, &hEntities);
      CDOTA_Ability_DeathProphet_Exorcism::FreeSpirit(pExorcismAbility, *&hEntities.m_Size);
      ++v86;
    }
    while ( v87 != v86 );
  }
  if ( nActiveSpirits == 0 && thisb != 0 )
    CDOTA_Buff::Destroy(v1, 0, 0, 0);
  vecSpiritsToRemove.m_Size = 0;
  if ( (vecSpiritsToRemove.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<sSpiritInfo *,int>::Purge(&vecSpiritsToRemove.m_Memory);
    if ( (vecSpiritsToRemove.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<sSpiritInfo *,int>::Purge(&vecSpiritsToRemove.m_Memory);
  }
}


