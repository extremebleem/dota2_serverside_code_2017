// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_shadow_demon.cpp:35
class CDOTA_Unit_Hero_Shadow_Demon : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Shadow_Demon(CDOTA_Unit_Hero_Shadow_Demon &);
	CDOTA_Unit_Hero_Shadow_Demon(CDOTA_Unit_Hero_Shadow_Demon &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Unit_Hero_Shadow_Demon();
	virtual bool IsDemon();
	virtual ~CDOTA_Unit_Hero_Shadow_Demon();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[402] IsDemon
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_shadow_demon.cpp:48
class C_CDOTA_Unit_Hero_Shadow_Demon_MapInstall {
	C_CDOTA_Unit_Hero_Shadow_Demon_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_shadow_demon.cpp:61
class CDOTA_Ability_Shadow_Demon_Disruption : public CDOTABaseAbility {
public:

private:

	EHANDLE m_hDisruptedUnit;  // +0x390
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
	CDOTA_Ability_Shadow_Demon_Disruption(CDOTA_Ability_Shadow_Demon_Disruption &);
	CDOTA_Ability_Shadow_Demon_Disruption(CDOTA_Ability_Shadow_Demon_Disruption &);
	CDOTA_Ability_Shadow_Demon_Disruption();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	EHANDLE GetDisruptedUnit();
	virtual EAbilityAbuseType GetPotentialAbuseType();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual bool ShouldSpeakAbilityConcept(int);
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_Shadow_Demon_Disruption();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[240] GetPotentialAbuseType
	// vtable[256] CastFilterResult
	// vtable[298] ShouldSpeakAbilityConcept
	// vtable[322] GetStunDuration
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_shadow_demon.cpp:83
class C_CDOTA_Ability_Shadow_Demon_Disruption_MapInstall {
	C_CDOTA_Ability_Shadow_Demon_Disruption_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_shadow_demon.cpp:173
class CDOTA_Modifier_Shadow_Demon_Disruption : public CDOTA_Buff {
public:

	CDOTA_Modifier_Shadow_Demon_Disruption();
	virtual bool IsPurgable();
	virtual void CheckState(CDOTABuffState &);
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual int GetEffectAttachType();
	virtual ~CDOTA_Modifier_Shadow_Demon_Disruption();

	// vtable[14] IsPurgable
	// vtable[5] CheckState
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[68] GetEffectAttachType
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_shadow_demon.cpp:333
class CDOTA_Ability_Shadow_Demon_Soul_Catcher : public CDOTABaseAbility {
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
	CDOTA_Ability_Shadow_Demon_Soul_Catcher(CDOTA_Ability_Shadow_Demon_Soul_Catcher &);
	CDOTA_Ability_Shadow_Demon_Soul_Catcher(CDOTA_Ability_Shadow_Demon_Soul_Catcher &);
	CDOTA_Ability_Shadow_Demon_Soul_Catcher();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual bool ShouldSpeakAbilityConcept(int);
	virtual ~CDOTA_Ability_Shadow_Demon_Soul_Catcher();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[298] ShouldSpeakAbilityConcept
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_shadow_demon.cpp:355
class C_CDOTA_Ability_Shadow_Demon_Soul_Catcher_MapInstall {
	C_CDOTA_Ability_Shadow_Demon_Soul_Catcher_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_shadow_demon.cpp:440
class CDOTA_Modifier_Shadow_Demon_Soul_Catcher : public CDOTA_Buff {
public:

private:

	int bonus_damage_taken;  // +0xba8
	CDOTA_Modifier_Shadow_Demon_Soul_Catcher();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual const char * GetEffectName();
	virtual int GetAttributes();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierIncomingDamage_Percentage(const CModifierParams &);
	ModifierVariant_t OnTooltip(const CModifierParams &);
	virtual ~CDOTA_Modifier_Shadow_Demon_Soul_Catcher();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[67] GetEffectName
	// vtable[7] GetAttributes
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierIncomingDamage_Percentage
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_shadow_demon.cpp:506
class CDOTA_Ability_Shadow_Demon_Shadow_Poison : public CDOTABaseAbility {
public:

private:

	bool m_bHitDisruptedUnit;  // +0x3a8

	int radius;  // +0x3ac
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
	CDOTA_Ability_Shadow_Demon_Shadow_Poison(CDOTA_Ability_Shadow_Demon_Shadow_Poison &);
	CDOTA_Ability_Shadow_Demon_Shadow_Poison(CDOTA_Ability_Shadow_Demon_Shadow_Poison &);
	CDOTA_Ability_Shadow_Demon_Shadow_Poison();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnUpgrade();
	virtual void OnSpellStart();
	virtual void OnProjectileThink(const Vector &);
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	void ReleasePoison();
	void DoPoisonReleaseDamage(int, CDOTA_BaseNPC *);
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetCooldown(int);
	virtual ~CDOTA_Ability_Shadow_Demon_Shadow_Poison();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[268] OnUpgrade
	// vtable[266] OnSpellStart
	// vtable[291] OnProjectileThink
	// vtable[289] OnProjectileHit
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[242] GetCooldown
	// sizeof = 976
};

// src/game/shared/dota/units/dota_unit_hero_shadow_demon.cpp:536
class C_CDOTA_Ability_Shadow_Demon_Shadow_Poison_MapInstall {
	C_CDOTA_Ability_Shadow_Demon_Shadow_Poison_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_shadow_demon.cpp:824
class CDOTA_Modifier_Shadow_Demon_Shadow_Poison : public CDOTA_Buff {
public:

private:

	float stack_damage;  // +0xba8
	float bonus_stack_damage;  // +0xbac
	int max_multiply_stacks;  // +0xbb0
	int m_nFXStackIndex;  // +0xbb4
	CDOTA_Modifier_Shadow_Demon_Shadow_Poison();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	ModifierVariant_t OnTooltip(const CModifierParams &);
	virtual bool IsDebuff();
	virtual int GetAttributes();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Shadow_Demon_Shadow_Poison();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[12] IsDebuff
	// vtable[7] GetAttributes
	// vtable[71] StatusEffectPriority
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_shadow_demon.cpp:941
class CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release : public CDOTABaseAbility {
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
	CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release(CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release &);
	CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release(CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release &);
	CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool IsStealable();
	virtual bool ProcsMagicStick();
	virtual const char * GetAssociatedPrimaryAbilities();
	virtual ~CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[305] IsStealable
	// vtable[239] ProcsMagicStick
	// vtable[303] GetAssociatedPrimaryAbilities
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_shadow_demon.cpp:974
class CDOTA_Modifier_Shadow_Demon_DemonicPurge_ChargeCounter : public CDOTA_Buff {
public:

private:

	int max_charges;  // +0xba8
	float charge_restore_time;  // +0xbac
	bool m_bIsThinking;  // +0xbb0
	CDOTA_Modifier_Shadow_Demon_DemonicPurge_ChargeCounter();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual bool IsPermanent();
	virtual bool DestroyOnExpire();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	void SetThinking(bool);
	bool IsThinking();
	virtual ~CDOTA_Modifier_Shadow_Demon_DemonicPurge_ChargeCounter();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[23] IsPermanent
	// vtable[61] DestroyOnExpire
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_shadow_demon.cpp:1053
class CDOTA_Ability_Shadow_Demon_Demonic_Purge : public CDOTABaseAbility {
public:

private:

	int max_charges;  // +0x390
	float charge_restore_time;  // +0x394
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
	CDOTA_Ability_Shadow_Demon_Demonic_Purge(CDOTA_Ability_Shadow_Demon_Demonic_Purge &);
	CDOTA_Ability_Shadow_Demon_Demonic_Purge(CDOTA_Ability_Shadow_Demon_Demonic_Purge &);
	CDOTA_Ability_Shadow_Demon_Demonic_Purge();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual const char * GetIntrinsicModifierName();
	virtual bool IsRefreshable();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual float GetCooldown(int);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Shadow_Demon_Demonic_Purge();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[280] GetIntrinsicModifierName
	// vtable[217] IsRefreshable
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// vtable[242] GetCooldown
	// vtable[321] GetSlowDuration
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_shadow_demon.cpp:1187
class CDOTA_Modifier_Shadow_Demon_Purge_Slow : public CDOTA_Buff {
public:

private:

	int slow_rate;  // +0xba8
	CDOTA_Modifier_Shadow_Demon_Purge_Slow();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsPurgable();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsDebuff();
	virtual int GetAttributes();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Shadow_Demon_Purge_Slow();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[14] IsPurgable
	// vtable[5] CheckState
	// vtable[12] IsDebuff
	// vtable[7] GetAttributes
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Shadow_Demon::~CDOTA_Unit_Hero_Shadow_Demon  (line 35, @0x0000000002c07190, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Shadow_Demon::~CDOTA_Unit_Hero_Shadow_Demon(CDOTA_Unit_Hero_Shadow_Demon *const this)
{
  this->_vptr_IHandleEntity = &off_4554150;
  this->_vptr_INextBotEventResponder = &off_4555130;
  this->_vptr_CObstructionObject = &off_4555460;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Shadow_Demon::~CDOTA_Unit_Hero_Shadow_Demon  (line 35, @0x0000000002c071d0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Shadow_Demon
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Shadow_Demon::~CDOTA_Unit_Hero_Shadow_Demon(CDOTA_Unit_Hero_Shadow_Demon *const this)
{
  this->_vptr_IHandleEntity = &off_4554150;
  this->_vptr_INextBotEventResponder = &off_4555130;
  this->_vptr_CObstructionObject = &off_4555460;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Shadow_Demon::Schema_DynamicBinding  (line 37, @0x0000000002bff4f0, libserver.so)
// globals: CDOTA_Unit_Hero_Shadow_Demon::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Shadow_Demon::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Shadow_Demon *const this)
{
  return CDOTA_Unit_Hero_Shadow_Demon::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Shadow_Demon::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 37, @0x0000000002bff520, libserver.so)
// globals: CDOTA_Unit_Hero_Shadow_Demon::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Shadow_Demon::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Shadow_Demon::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Shadow_Demon::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Shadow_Demon::CEntityInstanceEntityClass::DestructInstance  (line 37, @0x0000000002bff530, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Shadow_Demon>
void __fastcall CDOTA_Unit_Hero_Shadow_Demon::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Shadow_Demon::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Shadow_Demon::CEntityInstanceEntityClass::FreeInstance  (line 37, @0x0000000002bff550, libserver.so)
void __fastcall CDOTA_Unit_Hero_Shadow_Demon::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Shadow_Demon::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Shadow_Demon::CEntityInstanceEntityClass::CanAllocate  (line 37, @0x0000000002bff570, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Shadow_Demon::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Shadow_Demon::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Shadow_Demon::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 37, @0x0000000002bff580, libserver.so)
// globals: CDOTA_Unit_Hero_Shadow_Demon::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Shadow_Demon::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Shadow_Demon::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Shadow_Demon::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Shadow_Demon::CEntityInstanceEntityClass::AllocateInstance  (line 37, @0x0000000002c02630, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Shadow_Demon::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Shadow_Demon::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Shadow_Demon::CEntityInstanceEntityClass::ConstructInstance  (line 37, @0x0000000002c045f0, libserver.so)  // inlines: CDOTA_Unit_Hero_Shadow_Demon, Construct<CDOTA_Unit_Hero_Shadow_Demon>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Shadow_Demon::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Shadow_Demon::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_4554150;
    *(p + 236) = &off_4555130;
    *(p + 257) = &off_4555460;
  }
  return p;
}


// CDOTA_Unit_Hero_Shadow_Demon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 37, @0x0000000002c0b460, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Shadow_Demon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Shadow_Demon::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Shadow_Demon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 37, @0x0000000002c0b670, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Shadow_Demon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Shadow_Demon::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Shadow_Demon::GetEntityClassInternal  (line 37, @0x0000000002c152b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "npc_dota_hero_shadow_demon", "CDOTA_Unit_Hero_Shadow_Demon"
// globals: `guard variable for'CDOTA_Unit_Hero_Shadow_Demon::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Shadow_DemonClass, CDOTA_Unit_Hero_Shadow_Demon::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Shadow_DemonClass, __dso_handle, CDOTA_Unit_Hero_Shadow_Demon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Shadow_Demon::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Shadow_DemonClassInfo, CDOTA_Unit_Hero_Shadow_Demon::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Shadow_DemonClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Shadow_Demon::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Shadow_Demon::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Shadow_DemonClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Shadow_Demon::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Shadow_DemonClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Shadow_Demon::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Shadow_DemonClass);
    CDOTA_Unit_Hero_Shadow_Demon::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Shadow_DemonClass._vptr_CEntityClass = off_45540D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Shadow_Demon::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Shadow_DemonClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Shadow_Demon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Shadow_Demon::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Shadow_DemonClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_Shadow_DemonClass != 0 )
    return &CDOTA_Unit_Hero_Shadow_Demon::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Shadow_DemonClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Shadow_Demon::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Shadow_DemonClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Shadow_Demon::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Shadow_DemonClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Shadow_Demon::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Shadow_DemonClassInfo,
      "CDOTA_Unit_Hero_Shadow_Demon",
      "npc_dota_hero_shadow_demon",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Shadow_Demon::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Shadow_DemonClassInfo);
  }
  CDOTA_Unit_Hero_Shadow_Demon::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Shadow_DemonClass.m_pClassInfo = &CDOTA_Unit_Hero_Shadow_Demon::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Shadow_DemonClassInfo;
  CDOTA_Unit_Hero_Shadow_Demon::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Shadow_DemonClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Shadow_Demon::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Shadow_DemonClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_Shadow_DemonClass = &CDOTA_Unit_Hero_Shadow_Demon::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Shadow_DemonClass;
  CDOTA_Unit_Hero_Shadow_Demon::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Shadow_DemonClassInfo.m_pClass = &CDOTA_Unit_Hero_Shadow_Demon::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Shadow_DemonClass;
  CDOTA_Unit_Hero_Shadow_Demon::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Shadow_DemonClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_Shadow_DemonClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Shadow_Demon::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Shadow_DemonClass;
}


// CDOTA_Unit_Hero_Shadow_Demon::IsDemon  (line 45, @0x0000000002bff590, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Shadow_Demon::IsDemon(const CDOTA_Unit_Hero_Shadow_Demon *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Shadow_Demon::YouForgotToImplementOrDeclareServerClass  (line 48, @0x0000000002bd36b0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Shadow_Demon::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_Shadow_Demon *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Shadow_Demon::GetServerClass  (line 48, @0x0000000002bdc5f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Shadow_Demon::GetServerClass(CDOTA_Unit_Hero_Shadow_Demon *const this)
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


// CDOTA_Ability_Shadow_Demon_Disruption::~CDOTA_Ability_Shadow_Demon_Disruption  (line 61, @0x0000000002c05710, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Shadow_Demon_Disruption::~CDOTA_Ability_Shadow_Demon_Disruption(
        CDOTA_Ability_Shadow_Demon_Disruption *const this)
{
  this->_vptr_IHandleEntity = &off_4555530;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Shadow_Demon_Disruption::~CDOTA_Ability_Shadow_Demon_Disruption  (line 61, @0x0000000002c05730, libserver.so)  // inlines: ~CDOTA_Ability_Shadow_Demon_Disruption
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Shadow_Demon_Disruption::~CDOTA_Ability_Shadow_Demon_Disruption(
        CDOTA_Ability_Shadow_Demon_Disruption *const this)
{
  this->_vptr_IHandleEntity = &off_4555530;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Shadow_Demon_Disruption::Schema_DynamicBinding  (line 63, @0x0000000002bff5a0, libserver.so)
// globals: CDOTA_Ability_Shadow_Demon_Disruption::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Shadow_Demon_Disruption::Schema_DynamicBinding(
        const CDOTA_Ability_Shadow_Demon_Disruption *const this)
{
  return CDOTA_Ability_Shadow_Demon_Disruption::s_pSchemaBinding;
}


// CDOTA_Ability_Shadow_Demon_Disruption::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 63, @0x0000000002bff5b0, libserver.so)
// globals: CDOTA_Ability_Shadow_Demon_Disruption::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Shadow_Demon_Disruption::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Shadow_Demon_Disruption::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Shadow_Demon_Disruption::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Shadow_Demon_Disruption::CEntityInstanceEntityClass::DestructInstance  (line 63, @0x0000000002bff5c0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Shadow_Demon_Disruption>
void __fastcall CDOTA_Ability_Shadow_Demon_Disruption::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Shadow_Demon_Disruption::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Shadow_Demon_Disruption::CEntityInstanceEntityClass::FreeInstance  (line 63, @0x0000000002bff5e0, libserver.so)
void __fastcall CDOTA_Ability_Shadow_Demon_Disruption::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Shadow_Demon_Disruption::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Shadow_Demon_Disruption::CEntityInstanceEntityClass::CanAllocate  (line 63, @0x0000000002bff600, libserver.so)
bool __fastcall CDOTA_Ability_Shadow_Demon_Disruption::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Shadow_Demon_Disruption::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Shadow_Demon_Disruption::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 63, @0x0000000002bff610, libserver.so)
// globals: CDOTA_Ability_Shadow_Demon_Disruption::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Shadow_Demon_Disruption::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Shadow_Demon_Disruption::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Shadow_Demon_Disruption::s_pSchemaBinding;
}


// CDOTA_Ability_Shadow_Demon_Disruption::CEntityInstanceEntityClass::AllocateInstance  (line 63, @0x0000000002c02670, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Shadow_Demon_Disruption::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Shadow_Demon_Disruption::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Shadow_Demon_Disruption::CEntityInstanceEntityClass::ConstructInstance  (line 63, @0x0000000002c04c00, libserver.so)  // inlines: CDOTA_Ability_Shadow_Demon_Disruption, CEntityHandle, CHandle, Construct<CDOTA_Ability_Shadow_Demon_Disruption>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Shadow_Demon_Disruption::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Shadow_Demon_Disruption::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = -1;
    *p = &off_4555530;
  }
  return p;
}


// CDOTA_Ability_Shadow_Demon_Disruption::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 63, @0x0000000002c0ad20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Shadow_Demon_Disruption::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Shadow_Demon_Disruption::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Shadow_Demon_Disruption::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 63, @0x0000000002c0ad40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Shadow_Demon_Disruption::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Shadow_Demon_Disruption::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Shadow_Demon_Disruption::GetEntityClassInternal  (line 63, @0x0000000002c15400, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "shadow_demon_disruption", "CDOTA_Ability_Shadow_Demon_Disruption"
// globals: `guard variable for'CDOTA_Ability_Shadow_Demon_Disruption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_DisruptionClass, CDOTA_Ability_Shadow_Demon_Disruption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_DisruptionClass, __dso_handle, CDOTA_Ability_Shadow_Demon_Disruption::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Shadow_Demon_Disruption::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_DisruptionClassInfo, CDOTA_Ability_Shadow_Demon_Disruption::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_DisruptionClassInfo
CEntityClass *__cdecl CDOTA_Ability_Shadow_Demon_Disruption::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Shadow_Demon_Disruption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_DisruptionClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Shadow_Demon_Disruption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_DisruptionClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Shadow_Demon_Disruption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_DisruptionClass);
    CDOTA_Ability_Shadow_Demon_Disruption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_DisruptionClass._vptr_CEntityClass = off_45554B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Shadow_Demon_Disruption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_DisruptionClass);
    __cxa_atexit(
      CDOTA_Ability_Shadow_Demon_Disruption::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Shadow_Demon_Disruption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_DisruptionClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Shadow_Demon_DisruptionClass != 0 )
    return &CDOTA_Ability_Shadow_Demon_Disruption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_DisruptionClass;
  if ( `guard variable for'CDOTA_Ability_Shadow_Demon_Disruption::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_DisruptionClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Shadow_Demon_Disruption::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_DisruptionClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Shadow_Demon_Disruption::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_DisruptionClassInfo,
      "CDOTA_Ability_Shadow_Demon_Disruption",
      "shadow_demon_disruption",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Shadow_Demon_Disruption::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_DisruptionClassInfo);
  }
  CDOTA_Ability_Shadow_Demon_Disruption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_DisruptionClass.m_pClassInfo = &CDOTA_Ability_Shadow_Demon_Disruption::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_DisruptionClassInfo;
  CDOTA_Ability_Shadow_Demon_Disruption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_DisruptionClass.m_pBaseClassInfo = CDOTA_Ability_Shadow_Demon_Disruption::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_DisruptionClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Shadow_Demon_DisruptionClass = &CDOTA_Ability_Shadow_Demon_Disruption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_DisruptionClass;
  CDOTA_Ability_Shadow_Demon_Disruption::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_DisruptionClassInfo.m_pClass = &CDOTA_Ability_Shadow_Demon_Disruption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_DisruptionClass;
  CDOTA_Ability_Shadow_Demon_Disruption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_DisruptionClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Shadow_Demon_DisruptionClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Shadow_Demon_Disruption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_DisruptionClass;
}


// CDOTA_Ability_Shadow_Demon_Disruption::GetPotentialAbuseType  (line 71, @0x0000000002bff620, libserver.so)
EAbilityAbuseType __fastcall CDOTA_Ability_Shadow_Demon_Disruption::GetPotentialAbuseType(
        CDOTA_Ability_Shadow_Demon_Disruption *const this)
{
  return EAbilityAbuseType::k_EAbilityAbuseType_Shadow_Demon_Disruption;
}


// CDOTA_Ability_Shadow_Demon_Disruption::ShouldSpeakAbilityConcept  (line 75, @0x0000000002bff630, libserver.so)
bool __fastcall CDOTA_Ability_Shadow_Demon_Disruption::ShouldSpeakAbilityConcept(
        CDOTA_Ability_Shadow_Demon_Disruption *const this,
        int iConcept)
{
  return 0;
}


// CDOTA_Ability_Shadow_Demon_Disruption::YouForgotToImplementOrDeclareServerClass  (line 83, @0x0000000002bd36c0, libserver.so)
int __fastcall CDOTA_Ability_Shadow_Demon_Disruption::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Shadow_Demon_Disruption *const this)
{
  return 0;
}


// CDOTA_Ability_Shadow_Demon_Disruption::GetServerClass  (line 83, @0x0000000002bdc970, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Shadow_Demon_Disruption::GetServerClass(
        CDOTA_Ability_Shadow_Demon_Disruption *const this)
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


// CDOTA_Ability_Shadow_Demon_Disruption::OnSpellStart  (line 92, @0x0000000002bd9010, libserver.so)  // inlines: GetAbilityName, GetEHandle, GetEntryIndex, GetSerialNumber, GetTeamNumber, InState, IsInvulnerable, QueueConcept, Set, ToDOTABaseNPC, operator=
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetDuration, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTA_Speech::QueueConcept, CResponseCriteriaSet::~CResponseCriteriaSet (15 total)
// strings: "modifier_shadow_demon_disruption", "Hero_ShadowDemon.Disruption.Cast", "<NoAbilityName>", "abilityname", "disruption_target"
void __fastcall CDOTA_Ability_Shadow_Demon_Disruption::OnSpellStart(CDOTA_Ability_Shadow_Demon_Disruption *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  __int64 v4; // rax
  float v5; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v7; // rax
  unsigned __int8 m_Value; // r13
  CEntityIdentity *m_pEntity; // rdx
  int v10; // eax
  __int16 v11; // cx
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *v13; // rdx
  const char *m_pszAbilityName; // rax
  float v15; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  CResponseCriteriaSet criteria; // [rsp+20h] [rbp-80h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-40h] BYREF
  unsigned __int64 v19; // [rsp+78h] [rbp-28h]

  v19 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0 )
  {
    v4 = *&CursorTarget[3].m_vecVelocity.m_Value.x;
    if ( (v4 & 0x100) == 0 && (v4 & 0x200) == 0 && !CDOTA_BaseNPC::TriggerSpellAbsorb(v3, this, 1) )
    {
      CDOTABaseAbility::GetDuration(this);
      KeyValues::KeyValues(&kv, "modifier_shadow_demon_disruption");
      KeyValues::SetFloat(&kv, "duration", v5);
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_shadow_demon_disruption", &kv, 0);
      v7 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::UnitEmitSound(v7, "Hero_ShadowDemon.Disruption.Cast", 0.0, 0, 0);
      m_Value = v3->m_iTeamNum.m_Value;
      if ( m_Value != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
      {
        m_pEntity = v3->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v10 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          v11 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(this->m_hDisruptedUnit.m_Index) = v11 | this->m_hDisruptedUnit.m_Index & 0x8000;
          this->m_hDisruptedUnit.m_Index = (v10 << 15) | this->m_hDisruptedUnit.m_Index & 0x7FFF;
        }
        else
        {
          this->m_hDisruptedUnit.m_Index = -1;
        }
      }
      CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
      m_pAbilityData = this->m_pAbilityData;
      v13 = "<NoAbilityName>";
      if ( m_pAbilityData != 0 )
      {
        m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
        if ( m_pszAbilityName != 0 )
          v13 = m_pszAbilityName;
      }
      CResponseCriteriaSet::AppendCriteria(&criteria, "abilityname", v13, 1.0);
      if ( v3 != CDOTABaseAbility::GetCaster(this) )
        CDOTABaseAbility::GetCaster(this);
      CResponseCriteriaSet::AppendCriteria(&criteria, "disruption_target", 1.0, v15);
      m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
      if ( m_pSpeech != 0 )
        CDOTA_Speech::QueueConcept(m_pSpeech, 4, 0.5, &criteria, 4, 1, 0, 0, 0);
      CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Ability_Shadow_Demon_Disruption::CastFilterResult  (line 123, @0x0000000002bd67c0, libserver.so)  // inlines: GetTeamNumber, IsConsideredHero
// calls: CDOTABaseAbility::CastFilterResult, CDOTABaseAbility::GetCaster, CDOTA_PlayerResource::IsDisableHelpSetForPlayerID
int __fastcall CDOTA_Ability_Shadow_Demon_Disruption::CastFilterResult(
        CDOTA_Ability_Shadow_Demon_Disruption *const this,
        CDOTA_BaseNPC *pTarget)
{
  int result; // eax
  uint32 m_iUnitType; // eax
  unsigned __int8 m_Value; // r13
  CDOTA_BaseNPC *Caster; // rax
  bool IsDisableHelpSetForPlayerID; // dl

  result = CDOTABaseAbility::CastFilterResult(this, pTarget);
  if ( result == 0 )
  {
    m_iUnitType = pTarget->m_iUnitType;
    if ( (m_iUnitType & 1) == 0 )
    {
LABEL_3:
      if ( (m_iUnitType & 2) != 0 )
        return 4;
      return 0;
    }
    m_Value = pTarget->m_iTeamNum.m_Value;
    if ( m_Value != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value
      || (Caster = CDOTABaseAbility::GetCaster(this),
          IsDisableHelpSetForPlayerID = CDOTA_PlayerResource::IsDisableHelpSetForPlayerID(
                                          g_pDOTAPlayerResource,
                                          pTarget->m_nControllingPlayerID,
                                          Caster->m_nControllingPlayerID),
          result = 25,
          !IsDisableHelpSetForPlayerID) )
    {
      m_iUnitType = pTarget->m_iUnitType;
      if ( (m_iUnitType & 1) != 0 )
        return 0;
      goto LABEL_3;
    }
  }
  return result;
}


// CDOTA_Ability_Shadow_Demon_Disruption::GetDisruptedUnit  (line 148, @0x0000000002be0a90, libserver.so)  // inlines: CEntityHandle, CHandle, FindModifierByName, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CEntityInstance*, operator bool
// calls: ModifierFactoryDictionary, CModifieractoryDictionary::FindFactory, CDOTA_ModifierManager::FindModifierByName
// callers: CDOTA_Ability_Shadow_Demon_Shadow_Poison::OnProjectileThink, CDOTA_Ability_Shadow_Demon_Soul_Catcher::OnSpellStart
// strings: "modifier_shadow_demon_disruption"
// globals: CEntityHandle::gm_pEntityList
uint32 *__fastcall CDOTA_Ability_Shadow_Demon_Disruption::GetDisruptedUnit(
        uint32 *a1,
        CDOTA_Ability_Shadow_Demon_Disruption *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r13
  CModifieractoryDictionary *v9; // rax
  IModifierFactory *Factory; // rax

  m_Index = this->m_hDisruptedUnit.m_Index;
  if ( m_Index + 2 > 1
    && (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hDisruptedUnit.m_Index) >> 9) & 0x3F]) != 0
    && (v6 = &v5[this->m_hDisruptedUnit.m_Index & 0x1FF]) != 0
    && m_Index == v6->m_EHandle.m_Index
    && (m_pInstance = v6->m_pInstance, v6->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
    && (v9 = ModifierFactoryDictionary(),
        Factory = CModifieractoryDictionary::FindFactory(v9, "modifier_shadow_demon_disruption"),
        CDOTA_ModifierManager::FindModifierByName(
          &m_pInstance[64].m_worldGroupId,
          Factory,
          "modifier_shadow_demon_disruption",
          0) != 0) )
  {
    *a1 = this->m_hDisruptedUnit.m_Index;
    return a1;
  }
  else
  {
    *a1 = -1;
    return a1;
  }
}


// CDOTA_Ability_Shadow_Demon_Disruption::GetStunDuration  (line 165, @0x0000000002befc80, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "disruption_duration"
float __fastcall CDOTA_Ability_Shadow_Demon_Disruption::GetStunDuration(
        CDOTA_Ability_Shadow_Demon_Disruption *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "disruption_duration", -1, 0);
}


// CDOTA_Modifier_Shadow_Demon_Disruption::~CDOTA_Modifier_Shadow_Demon_Disruption  (line 173, @0x0000000002c03680, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Shadow_Demon_Disruption::~CDOTA_Modifier_Shadow_Demon_Disruption(
        CDOTA_Modifier_Shadow_Demon_Disruption *const this)
{
  this->_vptr_CDOTA_Buff = &off_4555FF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Shadow_Demon_Disruption::~CDOTA_Modifier_Shadow_Demon_Disruption  (line 173, @0x0000000002c036a0, libserver.so)  // inlines: ~CDOTA_Modifier_Shadow_Demon_Disruption
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Shadow_Demon_Disruption::~CDOTA_Modifier_Shadow_Demon_Disruption(
        CDOTA_Modifier_Shadow_Demon_Disruption *const this)
{
  this->_vptr_CDOTA_Buff = &off_4555FF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Shadow_Demon_Disruption::IsPurgable  (line 178, @0x0000000002bff640, libserver.so)
bool __fastcall CDOTA_Modifier_Shadow_Demon_Disruption::IsPurgable(CDOTA_Modifier_Shadow_Demon_Disruption *const this)
{
  return 0;
}


// CDOTA_Modifier_Shadow_Demon_Disruption::GetEffectAttachType  (line 185, @0x0000000002bff650, libserver.so)
int __fastcall CDOTA_Modifier_Shadow_Demon_Disruption::GetEffectAttachType(
        CDOTA_Modifier_Shadow_Demon_Disruption *const this)
{
  return 0;
}


// CDOTA_Modifier_Shadow_Demon_Disruption::CheckState  (line 192, @0x0000000002bd36d0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Shadow_Demon_Disruption::CheckState(
        CDOTA_Modifier_Shadow_Demon_Disruption *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x80844120uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFF7F7BBEDFLL;
}


// CDOTA_Modifier_Shadow_Demon_Disruption::OnCreated  (line 206, @0x0000000002bd4b50, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::AddEffects, CDOTA_BaseNPC::UnitEmitSound
// strings: "Hero_ShadowDemon.Disruption"
void __fastcall CDOTA_Modifier_Shadow_Demon_Disruption::OnCreated(
        CDOTA_Modifier_Shadow_Demon_Disruption *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v4; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::AddEffects(Parent, 32);
  v4 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(v4, "Hero_ShadowDemon.Disruption", 0.0, 0, 0);
}


// CDOTA_Modifier_Shadow_Demon_Disruption::OnDestroy  (line 241, @0x0000000002bfb690, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, Get, GetInstance, GetPaddedCollisionRadius, GetTeamNumber, GrowMemory, MarkPVSInformationDirty, Purge, QueueConcept, RemoveAll, RemoveEffects, Reset, ToDOTABaseNPC, entindex, operator CBaseEntity*, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetParent, CBaseEntity::DispatchUpdateTransmitState, CDOTA_BaseNPC::RemoveState, CDOTA_BaseNPC::UnitEmitSound, CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<float>, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, CDOTA_Buff::GetCaster, DOTA_CreateIllusions, CEntityHandle::operator CEntityInstance* (29 total)
// strings: "Hero_ShadowDemon.Disruption.End", "illusion_outgoing_damage", "illusion_incoming_damage", "illusion_duration", "dark_seer_wall_illusion", "illusion_" (7 total)
void __fastcall CDOTA_Modifier_Shadow_Demon_Disruption::OnDestroy(CDOTA_Modifier_Shadow_Demon_Disruption *const this)
{
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v9; // rax
  CDOTABaseAbility *v10; // rax
  float v11; // xmm1_4
  CDOTA_BaseNPC *pCaster; // r12
  CDOTA_BaseNPC *v13; // rax
  int v14; // r15d
  CDOTA_BaseNPC *v15; // rax
  unsigned __int8 m_Value; // r12
  CHandle<CBaseEntity> *m_pMemory; // r12
  CEntityInstance *v18; // rax
  CDOTA_BaseNPC *v19; // r15
  CDOTA_BaseNPC *v20; // rax
  int y_low; // xmm0_4
  int m_LessFunc; // eax
  CEntityIndex *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  CEntityInstance *v25; // rax
  CDOTA_BaseNPC *v26; // r15
  CDOTA_BaseNPC *v27; // rax
  int v28; // xmm0_4
  int v29; // eax
  CEntityIndex *v30; // rax
  CDOTA_BaseNPC *v31; // rax
  CDOTA_BaseNPC *Caster; // r12
  float v33; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  CEntityIndex v35; // [rsp+18h] [rbp-C8h]
  CEntityIndex v36; // [rsp+18h] [rbp-C8h]
  int v37; // [rsp+1Ch] [rbp-C4h]
  int v38; // [rsp+1Ch] [rbp-C4h]
  float illusion_outgoing_damage; // [rsp+24h] [rbp-BCh] BYREF
  float illusion_incoming_damage; // [rsp+28h] [rbp-B8h] BYREF
  float illusion_duration; // [rsp+2Ch] [rbp-B4h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hImageList; // [rsp+30h] [rbp-B0h] BYREF
  CResponseCriteriaSet criteria; // [rsp+50h] [rbp-90h] BYREF
  char v44; // [rsp+88h] [rbp-58h]
  KeyValues kv; // [rsp+90h] [rbp-50h] BYREF
  unsigned __int64 v46; // [rsp+A8h] [rbp-38h]

  v46 = __readfsqword(0x28u);
  Parent = CDOTA_Buff::GetParent(this);
  (*(Parent->_vptr_IHandleEntity + 188))(Parent, Parent->m_fEffects.m_Value & 0xFFFFFFDF);
  Parent->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  CBaseEntity::DispatchUpdateTransmitState(Parent);
  v3 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveState(v3, 0xEu);
  v4 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveState(v4, 8u);
  v5 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveState(v5, 0x1Fu);
  v6 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(v6, "Hero_ShadowDemon.Disruption.End", 0.0, 0, 0);
  v7 = CDOTA_Buff::GetParent(this);
  if ( (*(v7->_vptr_IHandleEntity + 408))(v7) != 0 )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<float>(Ability, &illusion_outgoing_damage, "illusion_outgoing_damage");
    v9 = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<float>(v9, &illusion_incoming_damage, "illusion_incoming_damage");
    v10 = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<float>(v10, &illusion_duration, "illusion_duration");
    KeyValues::KeyValues(&kv, "dark_seer_wall_illusion");
    KeyValues::SetFloat(&kv, "duration", v11);
    KeyValues::SetInt(&kv, "outgoing_damage", illusion_outgoing_damage);
    KeyValues::SetInt(&kv, "incoming_damage", illusion_incoming_damage);
    hImageList.m_Size = 0;
    hImageList.m_Memory.m_pMemory = 0;
    hImageList.m_Memory.m_nAllocationCount = 0;
    hImageList.m_Memory.m_nGrowSize = 0;
    pCaster = CDOTA_Buff::GetCaster(this);
    v13 = CDOTA_Buff::GetParent(this);
    v14 = ((v13->m_flHullRadius + v13->m_flCollisionPadding) + (v13->m_flHullRadius + v13->m_flCollisionPadding));
    v15 = CDOTA_Buff::GetParent(this);
    DOTA_CreateIllusions(v15, 2, v14, 0, &kv, &hImageList, pCaster, "illusion_", 1);
    if ( hImageList.m_Size > 0 )
    {
      m_Value = CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value;
      if ( m_Value != CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value )
      {
        m_pMemory = hImageList.m_Memory.m_pMemory;
        v18 = CEntityHandle::operator CEntityInstance *(hImageList.m_Memory.m_pMemory);
        v19 = v18;
        if ( v18 != 0 && BYTE3(v18[7]._vptr_IHandleEntity) != 0 )
        {
          v20 = CDOTA_Buff::GetParent(this);
          FindClearSpaceForUnitAroundEntity(v20, v19);
          v44 = 0;
          memset(&criteria.m_Lookup.m_Elements, 0, 28);
          LODWORD(criteria.m_Lookup.m_LessFunc) = 0;
          HIDWORD(criteria.m_Lookup.m_pElements) = LODWORD(vec3_origin.x);
          y_low = LODWORD(vec3_origin.y);
          criteria._vptr_CResponseCriteriaSet = 0xFFFFFFFFLL;
          criteria.m_nNumPrefixedContexts = y_low;
          *&criteria.m_bOverrideOnAppend = vec3_origin.z;
          v35.m_Data = CEntityInstance::GetEntityIndex(v19).m_Data;
          m_LessFunc = criteria.m_Lookup.m_LessFunc;
          v37 = criteria.m_Lookup.m_LessFunc;
          if ( LODWORD(criteria.m_Lookup.m_LessFunc) == criteria.m_Lookup.m_Elements.m_nAllocationCount )
          {
            CUtlMemory<CEntityIndex,int>::Grow(&criteria.m_Lookup.m_Elements, 1);
            m_LessFunc = criteria.m_Lookup.m_LessFunc;
          }
          LODWORD(criteria.m_Lookup.m_LessFunc) = m_LessFunc + 1;
          v23 = (criteria.m_Lookup.m_Elements.m_pMemory + 4 * v37);
          if ( v23 != 0 )
            v23->m_Data = v35.m_Data;
          *&criteria.m_Lookup.m_Root = 4;
          v24 = CDOTA_Buff::GetParent(this);
          *&criteria.m_Lookup.m_FirstFree = CEntityInstance::GetEntityIndex(v24);
          DOTA_ExecuteOrders(&criteria, 0, 0, 0);
          CDOTA_BaseNPC::SetPseudoQueuedOrder(v19, &criteria);
          LODWORD(criteria.m_Lookup.m_LessFunc) = 0;
          if ( (criteria.m_Lookup.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
          {
            CUtlMemory<CEntityIndex,int>::Purge(&criteria.m_Lookup.m_Elements);
            if ( (criteria.m_Lookup.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
              CUtlMemory<CEntityIndex,int>::Purge(&criteria.m_Lookup.m_Elements);
          }
          m_pMemory = hImageList.m_Memory.m_pMemory;
        }
        v25 = CEntityHandle::operator CEntityInstance *(m_pMemory + 1);
        v26 = v25;
        if ( v25 != 0 && BYTE3(v25[7]._vptr_IHandleEntity) != 0 )
        {
          v27 = CDOTA_Buff::GetParent(this);
          FindClearSpaceForUnitAroundEntity(v27, v26);
          v44 = 0;
          memset(&criteria.m_Lookup.m_Elements, 0, 28);
          LODWORD(criteria.m_Lookup.m_LessFunc) = 0;
          HIDWORD(criteria.m_Lookup.m_pElements) = LODWORD(vec3_origin.x);
          v28 = LODWORD(vec3_origin.y);
          criteria._vptr_CResponseCriteriaSet = 0xFFFFFFFFLL;
          criteria.m_nNumPrefixedContexts = v28;
          *&criteria.m_bOverrideOnAppend = vec3_origin.z;
          v36.m_Data = CEntityInstance::GetEntityIndex(v26).m_Data;
          v29 = criteria.m_Lookup.m_LessFunc;
          v38 = criteria.m_Lookup.m_LessFunc;
          if ( LODWORD(criteria.m_Lookup.m_LessFunc) == criteria.m_Lookup.m_Elements.m_nAllocationCount )
          {
            CUtlMemory<CEntityIndex,int>::Grow(&criteria.m_Lookup.m_Elements, 1);
            v29 = criteria.m_Lookup.m_LessFunc;
          }
          LODWORD(criteria.m_Lookup.m_LessFunc) = v29 + 1;
          v30 = (criteria.m_Lookup.m_Elements.m_pMemory + 4 * v38);
          if ( v30 != 0 )
            v30->m_Data = v36.m_Data;
          *&criteria.m_Lookup.m_Root = 4;
          v31 = CDOTA_Buff::GetParent(this);
          *&criteria.m_Lookup.m_FirstFree = CEntityInstance::GetEntityIndex(v31);
          DOTA_ExecuteOrders(&criteria, 0, 0, 0);
          CDOTA_BaseNPC::SetPseudoQueuedOrder(v26, &criteria);
          LODWORD(criteria.m_Lookup.m_LessFunc) = 0;
          if ( (criteria.m_Lookup.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
          {
            CUtlMemory<CEntityIndex,int>::Purge(&criteria.m_Lookup.m_Elements);
            if ( (criteria.m_Lookup.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
              CUtlMemory<CEntityIndex,int>::Purge(&criteria.m_Lookup.m_Elements);
          }
        }
      }
    }
    Caster = CDOTA_Buff::GetCaster(this);
    if ( Caster != CDOTA_Buff::GetParent(this) )
    {
      CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
      CDOTA_Buff::GetParent(this);
      CDOTA_Buff::GetCaster(this);
      CResponseCriteriaSet::AppendCriteria(&criteria, "disruption_unit_return", 1.0, v33);
      m_pSpeech = CDOTA_Buff::GetCaster(this)->m_Speech.m_pSpeech;
      if ( m_pSpeech != 0 )
        CDOTA_Speech::QueueConcept(m_pSpeech, 18, 0.5, &criteria, 4, 1, 0, 0, 0);
      CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hImageList);
    if ( (hImageList.m_Memory.m_nGrowSize & 0xC0000000) != 0
      || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hImageList.m_Memory),
          (hImageList.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
    {
      KeyValues::~KeyValues(&kv);
    }
    else
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hImageList.m_Memory);
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Ability_Shadow_Demon_Soul_Catcher::~CDOTA_Ability_Shadow_Demon_Soul_Catcher  (line 333, @0x0000000002c05760, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Shadow_Demon_Soul_Catcher::~CDOTA_Ability_Shadow_Demon_Soul_Catcher(
        CDOTA_Ability_Shadow_Demon_Soul_Catcher *const this)
{
  this->_vptr_IHandleEntity = &off_4556350;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Shadow_Demon_Soul_Catcher::~CDOTA_Ability_Shadow_Demon_Soul_Catcher  (line 333, @0x0000000002c05780, libserver.so)  // inlines: ~CDOTA_Ability_Shadow_Demon_Soul_Catcher
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Shadow_Demon_Soul_Catcher::~CDOTA_Ability_Shadow_Demon_Soul_Catcher(
        CDOTA_Ability_Shadow_Demon_Soul_Catcher *const this)
{
  this->_vptr_IHandleEntity = &off_4556350;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Shadow_Demon_Soul_Catcher::Schema_DynamicBinding  (line 335, @0x0000000002bff660, libserver.so)
// globals: CDOTA_Ability_Shadow_Demon_Soul_Catcher::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Shadow_Demon_Soul_Catcher::Schema_DynamicBinding(
        const CDOTA_Ability_Shadow_Demon_Soul_Catcher *const this)
{
  return CDOTA_Ability_Shadow_Demon_Soul_Catcher::s_pSchemaBinding;
}


// CDOTA_Ability_Shadow_Demon_Soul_Catcher::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 335, @0x0000000002bff670, libserver.so)
// globals: CDOTA_Ability_Shadow_Demon_Soul_Catcher::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Shadow_Demon_Soul_Catcher::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Shadow_Demon_Soul_Catcher::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Shadow_Demon_Soul_Catcher::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Shadow_Demon_Soul_Catcher::CEntityInstanceEntityClass::DestructInstance  (line 335, @0x0000000002bff680, libserver.so)  // inlines: Destruct<CDOTA_Ability_Shadow_Demon_Soul_Catcher>
void __fastcall CDOTA_Ability_Shadow_Demon_Soul_Catcher::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Shadow_Demon_Soul_Catcher::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Shadow_Demon_Soul_Catcher::CEntityInstanceEntityClass::FreeInstance  (line 335, @0x0000000002bff6a0, libserver.so)
void __fastcall CDOTA_Ability_Shadow_Demon_Soul_Catcher::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Shadow_Demon_Soul_Catcher::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Shadow_Demon_Soul_Catcher::CEntityInstanceEntityClass::CanAllocate  (line 335, @0x0000000002bff6c0, libserver.so)
bool __fastcall CDOTA_Ability_Shadow_Demon_Soul_Catcher::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Shadow_Demon_Soul_Catcher::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Shadow_Demon_Soul_Catcher::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 335, @0x0000000002bff6d0, libserver.so)
// globals: CDOTA_Ability_Shadow_Demon_Soul_Catcher::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Shadow_Demon_Soul_Catcher::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Shadow_Demon_Soul_Catcher::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Shadow_Demon_Soul_Catcher::s_pSchemaBinding;
}


// CDOTA_Ability_Shadow_Demon_Soul_Catcher::CEntityInstanceEntityClass::AllocateInstance  (line 335, @0x0000000002c026b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Shadow_Demon_Soul_Catcher::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Shadow_Demon_Soul_Catcher::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Shadow_Demon_Soul_Catcher::CEntityInstanceEntityClass::ConstructInstance  (line 335, @0x0000000002c04c40, libserver.so)  // inlines: CDOTA_Ability_Shadow_Demon_Soul_Catcher, Construct<CDOTA_Ability_Shadow_Demon_Soul_Catcher>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Shadow_Demon_Soul_Catcher::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Shadow_Demon_Soul_Catcher::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4556350;
  }
  return p;
}


// CDOTA_Ability_Shadow_Demon_Soul_Catcher::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 335, @0x0000000002c0ad70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Shadow_Demon_Soul_Catcher::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Shadow_Demon_Soul_Catcher::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Shadow_Demon_Soul_Catcher::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 335, @0x0000000002c0ad90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Shadow_Demon_Soul_Catcher::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Shadow_Demon_Soul_Catcher::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Shadow_Demon_Soul_Catcher::GetEntityClassInternal  (line 335, @0x0000000002c15550, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "shadow_demon_soul_catcher", "CDOTA_Ability_Shadow_Demon_Soul_Catcher"
// globals: `guard variable for'CDOTA_Ability_Shadow_Demon_Soul_Catcher::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Soul_CatcherClass, CDOTA_Ability_Shadow_Demon_Soul_Catcher::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Soul_CatcherClass, __dso_handle, CDOTA_Ability_Shadow_Demon_Soul_Catcher::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Shadow_Demon_Soul_Catcher::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_Soul_CatcherClassInfo, CDOTA_Ability_Shadow_Demon_Soul_Catcher::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_Soul_CatcherClassInfo
CEntityClass *__cdecl CDOTA_Ability_Shadow_Demon_Soul_Catcher::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Shadow_Demon_Soul_Catcher::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Soul_CatcherClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Shadow_Demon_Soul_Catcher::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Soul_CatcherClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Shadow_Demon_Soul_Catcher::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Soul_CatcherClass);
    CDOTA_Ability_Shadow_Demon_Soul_Catcher::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Soul_CatcherClass._vptr_CEntityClass = off_45562D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Shadow_Demon_Soul_Catcher::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Soul_CatcherClass);
    __cxa_atexit(
      CDOTA_Ability_Shadow_Demon_Soul_Catcher::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Shadow_Demon_Soul_Catcher::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Soul_CatcherClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Shadow_Demon_Soul_CatcherClass != 0 )
    return &CDOTA_Ability_Shadow_Demon_Soul_Catcher::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Soul_CatcherClass;
  if ( `guard variable for'CDOTA_Ability_Shadow_Demon_Soul_Catcher::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_Soul_CatcherClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Shadow_Demon_Soul_Catcher::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_Soul_CatcherClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Shadow_Demon_Soul_Catcher::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_Soul_CatcherClassInfo,
      "CDOTA_Ability_Shadow_Demon_Soul_Catcher",
      "shadow_demon_soul_catcher",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Shadow_Demon_Soul_Catcher::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_Soul_CatcherClassInfo);
  }
  CDOTA_Ability_Shadow_Demon_Soul_Catcher::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Soul_CatcherClass.m_pClassInfo = &CDOTA_Ability_Shadow_Demon_Soul_Catcher::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_Soul_CatcherClassInfo;
  CDOTA_Ability_Shadow_Demon_Soul_Catcher::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Soul_CatcherClass.m_pBaseClassInfo = CDOTA_Ability_Shadow_Demon_Soul_Catcher::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_Soul_CatcherClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Shadow_Demon_Soul_CatcherClass = &CDOTA_Ability_Shadow_Demon_Soul_Catcher::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Soul_CatcherClass;
  CDOTA_Ability_Shadow_Demon_Soul_Catcher::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_Soul_CatcherClassInfo.m_pClass = &CDOTA_Ability_Shadow_Demon_Soul_Catcher::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Soul_CatcherClass;
  CDOTA_Ability_Shadow_Demon_Soul_Catcher::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Soul_CatcherClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Shadow_Demon_Soul_CatcherClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Shadow_Demon_Soul_Catcher::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Soul_CatcherClass;
}


// CDOTA_Ability_Shadow_Demon_Soul_Catcher::ShouldSpeakAbilityConcept  (line 351, @0x0000000002bff6e0, libserver.so)
bool __fastcall CDOTA_Ability_Shadow_Demon_Soul_Catcher::ShouldSpeakAbilityConcept(
        CDOTA_Ability_Shadow_Demon_Soul_Catcher *const this,
        int iConcept)
{
  return 0;
}


// CDOTA_Ability_Shadow_Demon_Soul_Catcher::YouForgotToImplementOrDeclareServerClass  (line 355, @0x0000000002bd3700, libserver.so)
int __fastcall CDOTA_Ability_Shadow_Demon_Soul_Catcher::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Shadow_Demon_Soul_Catcher *const this)
{
  return 0;
}


// CDOTA_Ability_Shadow_Demon_Soul_Catcher::GetServerClass  (line 355, @0x0000000002bdc7b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Shadow_Demon_Soul_Catcher::GetServerClass(
        CDOTA_Ability_Shadow_Demon_Soul_Catcher *const this)
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


// CDOTA_Ability_Shadow_Demon_Soul_Catcher::OnSpellStart  (line 364, @0x0000000002bf84c0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetTeamNumber, GrowMemory, IndexToIdentity, IsHero, IsValid, Length2D, LookupEntity, Purge, QueueConcept, ToDOTABaseNPC, Vector, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::UnitEmitSound, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCursorPosition, FindUnitsInRadius, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_Shadow_Demon_Disruption::GetDisruptedUnit, RandomInt, CEntityHandle::operator CEntityInstance*, KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat (30 total)
// strings: "Hero_ShadowDemon.Soul_Catcher.Cast", "shadow_demon_disruption", "modifier_shadow_demon_soul_catcher", "particles/units/heroes/hero_shadow_demon/shadow_demon_soul_catcher.vpcf", "attach_hitloc", "attach_attack1" (10 total)
// globals: CEntityHandle::gm_pEntityList
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_Ability_Shadow_Demon_Soul_Catcher::OnSpellStart(
        CDOTA_Ability_Shadow_Demon_Soul_Catcher *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // r14
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_Ability_Shadow_Demon_Disruption *AbilityByName; // rax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  int v9; // esi
  int v10; // eax
  CEntityInstance *v11; // rax
  float v12; // xmm1_4
  CDOTA_BaseNPC *v13; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v15; // r15
  CDOTA_ParticleManager *v16; // rax
  const Vector *v17; // r15
  CDOTA_ParticleManager *v18; // rax
  CDOTA_ParticleManager *v19; // rax
  CDOTA_ParticleManager *v20; // rax
  CDOTA_BaseNPC *v21; // r15
  CDOTA_ParticleManager *v22; // rax
  CDOTA_BaseNPC *v23; // r15
  CDOTA_ParticleManager *v24; // rax
  CDOTA_ParticleManager *v25; // rax
  CDOTA_ParticleManager *v26; // rax
  int Particle; // r14d
  CDOTA_ParticleManager *v28; // rax
  CDOTA_ParticleManager *v29; // rax
  float v30; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  CEntityInstance *m_pInstance; // r14
  const Vector *AbsOrigin; // rax
  __int64 m_Size; // r14
  int v35; // esi
  vec_t *p_m_Index; // rax
  CDOTA_BaseNPC *v37; // [rsp+20h] [rbp-E0h]
  int iSoulCatcherImpact; // [rsp+28h] [rbp-D8h]
  float flRadius; // [rsp+2Ch] [rbp-D4h]
  Vector hDisruptedUnit; // [rsp+40h] [rbp-C0h] OVERLAPPED BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+50h] [rbp-B0h] BYREF
  CResponseCriteriaSet criteria; // [rsp+70h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v44; // [rsp+C8h] [rbp-38h]
  Vector CursorPosition; // 0:kr14_12.12

  v44 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(Caster, "Hero_ShadowDemon.Soul_Catcher.Cast", 0.0, 0, 0);
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  flRadius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  v3 = CDOTABaseAbility::GetCaster(this);
  *&criteria._vptr_CResponseCriteriaSet = CDOTABaseAbility::GetCursorPosition(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v4->m_iTeamNum.m_Value, &criteria, v3, flRadius, &entities, 2, 3, 512, 0, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v5, "shadow_demon_disruption", 0);
  if ( AbilityByName == 0 )
    goto LABEL_6;
  CDOTA_Ability_Shadow_Demon_Disruption::GetDisruptedUnit(&hDisruptedUnit, AbilityByName);
  if ( (LODWORD(hDisruptedUnit.x) + 2) <= 1 )
    goto LABEL_6;
  v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hDisruptedUnit.x) >> 9) & 0x3F];
  if ( v7 == 0 )
    goto LABEL_6;
  v8 = &v7[LOWORD(hDisruptedUnit.x) & 0x1FF];
  if ( v8 == 0 )
    goto LABEL_6;
  if ( LODWORD(hDisruptedUnit.x) != v8->m_EHandle.m_Index )
    goto LABEL_6;
  m_pInstance = v8->m_pInstance;
  if ( v8->m_pInstance == 0 )
    goto LABEL_6;
  if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    goto LABEL_6;
  *&criteria._vptr_CResponseCriteriaSet = CDOTABaseAbility::GetCursorPosition(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
  if ( (flRadius + *(&m_pInstance[48]._vptr_IHandleEntity + 1)) < fsqrt(
                                                                    ((AbsOrigin->x
                                                                    - *&criteria._vptr_CResponseCriteriaSet)
                                                                   * (AbsOrigin->x
                                                                    - *&criteria._vptr_CResponseCriteriaSet))
                                                                  + ((AbsOrigin->y
                                                                    - *(&criteria._vptr_CResponseCriteriaSet + 1))
                                                                   * (AbsOrigin->y
                                                                    - *(&criteria._vptr_CResponseCriteriaSet + 1)))) )
    goto LABEL_6;
  m_Size = entities.m_Size;
  v35 = entities.m_Size;
  if ( entities.m_Size == entities.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&entities.m_Memory, 1);
    v35 = entities.m_Size;
  }
  v9 = v35 + 1;
  entities.m_Size = v9;
  p_m_Index = &entities.m_Memory.m_pMemory[m_Size].m_Index;
  if ( p_m_Index != 0 )
  {
    *p_m_Index = hDisruptedUnit.x;
LABEL_6:
    v9 = entities.m_Size;
  }
  if ( v9 != 0 )
  {
    v10 = RandomInt(0, (v9 - 1));
    v11 = CEntityHandle::operator CEntityInstance *(&entities.m_Memory.m_pMemory[v10]);
    v37 = v11;
    if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    {
      KeyValues::KeyValues(&kv, "modifier_shadow_demon_soul_catcher");
      CDOTABaseAbility::GetDuration(this);
      KeyValues::SetFloat(&kv, "duration", v12);
      v13 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v37, v13, this, "modifier_shadow_demon_soul_catcher", &kv, 0);
      ParticleManager = GetParticleManager();
      iSoulCatcherImpact = CDOTA_ParticleManager::CreateParticle(
                             ParticleManager,
                             "particles/units/heroes/hero_shadow_demon/shadow_demon_soul_catcher.vpcf",
                             2,
                             0,
                             0,
                             0);
      v15 = CDOTABaseAbility::GetCaster(this);
      v16 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v16, iSoulCatcherImpact, 0, v15, 5, "attach_hitloc", vec3_invalid, 1);
      v17 = CBaseEntity::GetAbsOrigin(v37);
      v18 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v18, iSoulCatcherImpact, 1, v37, 5, "attach_hitloc", *v17, 1);
      CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
      v19 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v19, iSoulCatcherImpact, 2, *&CursorPosition.x, CursorPosition.z);
      *&criteria._vptr_CResponseCriteriaSet = flRadius;
      *(&criteria._vptr_CResponseCriteriaSet + 1) = flRadius;
      *&criteria.m_Lookup.m_LessFunc = flRadius;
      v20 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(
        v20,
        iSoulCatcherImpact,
        3,
        *&criteria._vptr_CResponseCriteriaSet,
        *&criteria.m_Lookup.m_LessFunc);
      v21 = CDOTABaseAbility::GetCaster(this);
      v22 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(
        v22,
        iSoulCatcherImpact,
        4,
        v21,
        5,
        "attach_attack1",
        vec3_invalid,
        1);
      v23 = CDOTABaseAbility::GetCaster(this);
      v24 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(
        v24,
        iSoulCatcherImpact,
        5,
        v23,
        5,
        "attach_attack2",
        vec3_invalid,
        1);
      v25 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v25, iSoulCatcherImpact);
      CDOTA_BaseNPC::UnitEmitSound(v37, "Hero_ShadowDemon.Soul_Catcher", 0.0, 0, 0);
      KeyValues::~KeyValues(&kv);
    }
  }
  else
  {
    v26 = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 v26,
                 "particles/units/heroes/hero_shadow_demon/shadow_demon_soul_catcher_v2_projected_ground.vpcf",
                 2,
                 0,
                 0,
                 0);
    hDisruptedUnit = CDOTABaseAbility::GetCursorPosition(this);
    v28 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v28, Particle, 2, *&hDisruptedUnit.x, hDisruptedUnit.z);
    *&criteria._vptr_CResponseCriteriaSet = flRadius;
    *(&criteria._vptr_CResponseCriteriaSet + 1) = flRadius;
    *&criteria.m_Lookup.m_LessFunc = flRadius;
    v29 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(
      v29,
      Particle,
      3,
      *&criteria._vptr_CResponseCriteriaSet,
      *&criteria.m_Lookup.m_LessFunc);
  }
  CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
  CResponseCriteriaSet::AppendCriteria(&criteria, "soul_catcher_hit_hero", 1.0, v30);
  m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
  if ( m_pSpeech != 0 )
    CDOTA_Speech::QueueConcept(m_pSpeech, 18, 0.5, &criteria, 4, 1, 0, 0, 0);
  CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
  if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
  }
}


// CDOTA_Modifier_Shadow_Demon_Soul_Catcher::~CDOTA_Modifier_Shadow_Demon_Soul_Catcher  (line 440, @0x0000000002c03630, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Shadow_Demon_Soul_Catcher::~CDOTA_Modifier_Shadow_Demon_Soul_Catcher(
        CDOTA_Modifier_Shadow_Demon_Soul_Catcher *const this)
{
  this->_vptr_CDOTA_Buff = &off_4556E10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Shadow_Demon_Soul_Catcher::~CDOTA_Modifier_Shadow_Demon_Soul_Catcher  (line 440, @0x0000000002c03650, libserver.so)  // inlines: ~CDOTA_Modifier_Shadow_Demon_Soul_Catcher
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Shadow_Demon_Soul_Catcher::~CDOTA_Modifier_Shadow_Demon_Soul_Catcher(
        CDOTA_Modifier_Shadow_Demon_Soul_Catcher *const this)
{
  this->_vptr_CDOTA_Buff = &off_4556E10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Shadow_Demon_Soul_Catcher::IsDebuff  (line 445, @0x0000000002bff6f0, libserver.so)
bool __fastcall CDOTA_Modifier_Shadow_Demon_Soul_Catcher::IsDebuff(
        CDOTA_Modifier_Shadow_Demon_Soul_Catcher *const this)
{
  return 1;
}


// CDOTA_Modifier_Shadow_Demon_Soul_Catcher::GetEffectName  (line 450, @0x0000000002bff700, libserver.so)
// strings: "particles/units/heroes/hero_shadow_demon/shadow_demon_soul_catcher_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Shadow_Demon_Soul_Catcher::GetEffectName(
        CDOTA_Modifier_Shadow_Demon_Soul_Catcher *const this)
{
  return "particles/units/heroes/hero_shadow_demon/shadow_demon_soul_catcher_debuff.vpcf";
}


// CDOTA_Modifier_Shadow_Demon_Soul_Catcher::GetAttributes  (line 451, @0x0000000002bff710, libserver.so)
int __fastcall CDOTA_Modifier_Shadow_Demon_Soul_Catcher::GetAttributes(
        CDOTA_Modifier_Shadow_Demon_Soul_Catcher *const this)
{
  return 4;
}


// CDOTA_Modifier_Shadow_Demon_Soul_Catcher::OnCreated  (line 466, @0x0000000002beaf80, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_damage_taken"
void __fastcall CDOTA_Modifier_Shadow_Demon_Soul_Catcher::OnCreated(
        CDOTA_Modifier_Shadow_Demon_Soul_Catcher *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_damage_taken = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage_taken", -1, 0);
  else
    this->bonus_damage_taken = 0;
}


// CDOTA_Modifier_Shadow_Demon_Soul_Catcher::OnRefresh  (line 473, @0x0000000002beb100, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_damage_taken"
void __fastcall CDOTA_Modifier_Shadow_Demon_Soul_Catcher::OnRefresh(
        CDOTA_Modifier_Shadow_Demon_Soul_Catcher *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_damage_taken = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage_taken", -1, 0);
  else
    this->bonus_damage_taken = 0;
}


// CDOTA_Modifier_Shadow_Demon_Soul_Catcher::DeclareFunctions  (line 480, @0x0000000002bd3710, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Shadow_Demon_Soul_Catcher::OnTooltip(CModifierParams const&)
void __fastcall CDOTA_Modifier_Shadow_Demon_Soul_Catcher::DeclareFunctions(
        CDOTA_Modifier_Shadow_Demon_Soul_Catcher *const this)
{
  this->m_Functions[36].__pfn = (&stru_10 + 697);
  this->m_Functions[36].__delta = 0;
  this->m_Functions[151].__pfn = CDOTA_Modifier_Shadow_Demon_Soul_Catcher::OnTooltip;
  this->m_Functions[151].__delta = 0;
}


// CDOTA_Modifier_Shadow_Demon_Soul_Catcher::GetModifierIncomingDamage_Percentage  (line 488, @0x0000000002bd3750, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Shadow_Demon_Soul_Catcher::GetModifierIncomingDamage_Percentage(
        CDOTA_Modifier_Shadow_Demon_Soul_Catcher *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage_taken;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Shadow_Demon_Soul_Catcher::OnTooltip  (line 495, @0x0000000002bd3770, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Shadow_Demon_Soul_Catcher::OnTooltip(
        CDOTA_Modifier_Shadow_Demon_Soul_Catcher *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage_taken;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison::~CDOTA_Ability_Shadow_Demon_Shadow_Poison  (line 506, @0x0000000002c1a090, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison::~CDOTA_Ability_Shadow_Demon_Shadow_Poison(
        CDOTA_Ability_Shadow_Demon_Shadow_Poison *const this)
{
  this->_vptr_IHandleEntity = &off_4557170;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitUnits);
  if ( (this->m_hHitUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitUnits.m_Memory);
    if ( (this->m_hHitUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitUnits.m_Memory);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hPoisonedUnits);
  if ( (this->m_hPoisonedUnits.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hPoisonedUnits.m_Memory),
        (this->m_hPoisonedUnits.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hPoisonedUnits.m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison::~CDOTA_Ability_Shadow_Demon_Shadow_Poison  (line 506, @0x0000000002c1a140, libserver.so)  // inlines: Purge, ~CDOTA_Ability_Shadow_Demon_Shadow_Poison, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison::~CDOTA_Ability_Shadow_Demon_Shadow_Poison(
        CDOTA_Ability_Shadow_Demon_Shadow_Poison *const this)
{
  this->_vptr_IHandleEntity = &off_4557170;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitUnits);
  if ( (this->m_hHitUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitUnits.m_Memory);
    if ( (this->m_hHitUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitUnits.m_Memory);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hPoisonedUnits);
  if ( (this->m_hPoisonedUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hPoisonedUnits.m_Memory);
    if ( (this->m_hPoisonedUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hPoisonedUnits.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison::Schema_DynamicBinding  (line 508, @0x0000000002bff720, libserver.so)
// globals: CDOTA_Ability_Shadow_Demon_Shadow_Poison::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison::Schema_DynamicBinding(
        const CDOTA_Ability_Shadow_Demon_Shadow_Poison *const this)
{
  return CDOTA_Ability_Shadow_Demon_Shadow_Poison::s_pSchemaBinding;
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 508, @0x0000000002bff730, libserver.so)
// globals: CDOTA_Ability_Shadow_Demon_Shadow_Poison::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Shadow_Demon_Shadow_Poison::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Shadow_Demon_Shadow_Poison::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison::CEntityInstanceEntityClass::DestructInstance  (line 508, @0x0000000002bff740, libserver.so)  // inlines: Destruct<CDOTA_Ability_Shadow_Demon_Shadow_Poison>
void __fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Shadow_Demon_Shadow_Poison::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison::CEntityInstanceEntityClass::FreeInstance  (line 508, @0x0000000002bff760, libserver.so)
void __fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Shadow_Demon_Shadow_Poison::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison::CEntityInstanceEntityClass::CanAllocate  (line 508, @0x0000000002bff780, libserver.so)
bool __fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Shadow_Demon_Shadow_Poison::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 508, @0x0000000002bff790, libserver.so)
// globals: CDOTA_Ability_Shadow_Demon_Shadow_Poison::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Shadow_Demon_Shadow_Poison::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Shadow_Demon_Shadow_Poison::s_pSchemaBinding;
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison::CEntityInstanceEntityClass::AllocateInstance  (line 508, @0x0000000002c026f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Shadow_Demon_Shadow_Poison::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 976);
  memset(v1, 0, 0x3D0u);
  return v1;
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 508, @0x0000000002c0adc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Shadow_Demon_Shadow_Poison::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 508, @0x0000000002c0ade0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Shadow_Demon_Shadow_Poison::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison::GetEntityClassInternal  (line 508, @0x0000000002c156a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "shadow_demon_shadow_poison", "CDOTA_Ability_Shadow_Demon_Shadow_Poison"
// globals: `guard variable for'CDOTA_Ability_Shadow_Demon_Shadow_Poison::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_PoisonClass, CDOTA_Ability_Shadow_Demon_Shadow_Poison::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_PoisonClass, __dso_handle, CDOTA_Ability_Shadow_Demon_Shadow_Poison::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Shadow_Demon_Shadow_Poison::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_PoisonClassInfo, CDOTA_Ability_Shadow_Demon_Shadow_Poison::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_PoisonClassInfo
CEntityClass *__cdecl CDOTA_Ability_Shadow_Demon_Shadow_Poison::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Shadow_Demon_Shadow_Poison::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_PoisonClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Shadow_Demon_Shadow_Poison::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_PoisonClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Shadow_Demon_Shadow_Poison::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_PoisonClass);
    CDOTA_Ability_Shadow_Demon_Shadow_Poison::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_PoisonClass._vptr_CEntityClass = off_45570F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Shadow_Demon_Shadow_Poison::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_PoisonClass);
    __cxa_atexit(
      CDOTA_Ability_Shadow_Demon_Shadow_Poison::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Shadow_Demon_Shadow_Poison::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_PoisonClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Shadow_Demon_Shadow_PoisonClass != 0 )
    return &CDOTA_Ability_Shadow_Demon_Shadow_Poison::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_PoisonClass;
  if ( `guard variable for'CDOTA_Ability_Shadow_Demon_Shadow_Poison::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_PoisonClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Shadow_Demon_Shadow_Poison::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_PoisonClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Shadow_Demon_Shadow_Poison::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_PoisonClassInfo,
      "CDOTA_Ability_Shadow_Demon_Shadow_Poison",
      "shadow_demon_shadow_poison",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Shadow_Demon_Shadow_Poison::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_PoisonClassInfo);
  }
  CDOTA_Ability_Shadow_Demon_Shadow_Poison::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_PoisonClass.m_pClassInfo = &CDOTA_Ability_Shadow_Demon_Shadow_Poison::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_PoisonClassInfo;
  CDOTA_Ability_Shadow_Demon_Shadow_Poison::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_PoisonClass.m_pBaseClassInfo = CDOTA_Ability_Shadow_Demon_Shadow_Poison::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_PoisonClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Shadow_Demon_Shadow_PoisonClass = &CDOTA_Ability_Shadow_Demon_Shadow_Poison::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_PoisonClass;
  CDOTA_Ability_Shadow_Demon_Shadow_Poison::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_PoisonClassInfo.m_pClass = &CDOTA_Ability_Shadow_Demon_Shadow_Poison::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_PoisonClass;
  CDOTA_Ability_Shadow_Demon_Shadow_Poison::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_PoisonClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Shadow_Demon_Shadow_PoisonClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Shadow_Demon_Shadow_Poison::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_PoisonClass;
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison::CEntityInstanceEntityClass::ConstructInstance  (line 508, @0x0000000002c19320, libserver.so)  // inlines: CDOTA_Ability_Shadow_Demon_Shadow_Poison, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_Shadow_Demon_Shadow_Poison>, InValidate, SndOpEventGuid_t, SoundEventGuid_t
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Shadow_Demon_Shadow_Poison::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = 0;
    *p = &off_4557170;
    *(p + 115) = 0;
    *(p + 232) = 0;
    *(p + 233) = 0;
    *(p + 236) = 0;
    *(p + 119) = 0;
    *(p + 240) = 0;
    *(p + 241) = 0;
    *(p + 242) = 0;
    *(p + 243) = -1;
  }
  return p;
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison::GetAssociatedSecondaryAbilities  (line 520, @0x0000000002bff7a0, libserver.so)
// strings: "shadow_demon_shadow_poison_release"
const char *__fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Shadow_Demon_Shadow_Poison *const this)
{
  return "shadow_demon_shadow_poison_release";
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison::YouForgotToImplementOrDeclareServerClass  (line 536, @0x0000000002bd3790, libserver.so)
int __fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Shadow_Demon_Shadow_Poison *const this)
{
  return 0;
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison::GetServerClass  (line 536, @0x0000000002bdcb30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison::GetServerClass(
        CDOTA_Ability_Shadow_Demon_Shadow_Poison *const this)
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


// CDOTA_Ability_Shadow_Demon_Shadow_Poison::GetCooldown  (line 546, @0x0000000002be9520, libserver.so)
// calls: CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_shadow_demon_2"
float __fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison::GetCooldown(
        CDOTA_Ability_Shadow_Demon_Shadow_Poison *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float result; // xmm0_4
  float flCooldown; // [rsp+Ch] [rbp-14h]

  flCooldown = CDOTABaseAbility::GetCooldown(this, iLevel);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_shadow_demon_2", 0);
  result = flCooldown;
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    return flCooldown - CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  return result;
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison::OnUpgrade  (line 561, @0x0000000002be8100, libserver.so)  // inlines: GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "shadow_demon_shadow_poison_release"
void __fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison::OnUpgrade(
        CDOTA_Ability_Shadow_Demon_Shadow_Poison *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "shadow_demon_shadow_poison_release", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value == 0 )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison::OnSpellStart  (line 577, @0x0000000002be8170, libserver.so)  // inlines: CBroadcastRecipientFilter, CEntityHandle, CHandle, CPASAttenuationFilter, CPASFilter, CReliableBroadcastRecipientFilter, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<int>, GetParent, GetSerialNumber, GetTeamNumber, InValidate, NormalizeInPlace, Set, StopSoundEvent, VectorMultiply, VectorSubtract, operator*, operator-, operator=, sLinearProjectileCreateInfo, ~CBroadcastRecipientFilter, ~CPASAttenuationFilter, ~CPASFilter, ~CReliableBroadcastRecipientFilter
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::UnitEmitSound, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorPosition, VectorNormalize, CBaseAnimating::GetAttachment, CDOTA_ProjectileManager::CreateLinearProjectile, CGameSceneNode::GetOwnerEntity, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS (21 total)
// strings: "Hero_ShadowDemon.ShadowPoison.Cast", "attach_hitloc", "particles/units/heroes/hero_shadow_demon/shadow_demon_shadow_poison_projectile.vpcf", "Hero_ShadowDemon.ShadowPoison"
void __fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison::OnSpellStart(
        CDOTA_Ability_Shadow_Demon_Shadow_Poison *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  int LevelSpecialValue; // eax
  int v4; // r12d
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // r13
  vec_t v7; // xmm0_4
  vec_t v8; // xmm1_4
  vec_t z; // eax
  CDOTA_BaseNPC *v10; // rax
  vec_t v11; // xmm0_4
  vec_t y; // xmm1_4
  int (**vptr_IHandleEntity)(...); // rax
  CDOTA_BaseNPC *v14; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v16; // eax
  __int16 v17; // cx
  int m_Value; // eax
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  float v21; // xmm1_4
  CSoundOpGameSystem *v22; // r14
  CDOTA_BaseNPC *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  const QAngle *AbsAngles; // rax
  Vector vDirection; // [rsp+0h] [rbp-350h] BYREF
  Vector vecStartPos; // [rsp+10h] [rbp-340h] BYREF
  Vector vPos; // [rsp+20h] [rbp-330h] BYREF
  sLinearProjectileCreateInfo info; // [rsp+30h] [rbp-320h] BYREF
  CPASAttenuationFilter filter; // [rsp+B0h] [rbp-2A0h] BYREF
  CRecipientFilter v31; // [rsp+1F0h] [rbp-160h] BYREF
  unsigned __int64 v32; // [rsp+328h] [rbp-28h]

  v32 = __readfsqword(0x28u);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitUnits);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(Caster, "Hero_ShadowDemon.ShadowPoison.Cast", 0.0, 0, 0);
  this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
  this->m_bHitDisruptedUnit = 0;
  v4 = LevelSpecialValue;
  v5 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  *&info.pszEffectName = CDOTABaseAbility::GetCursorPosition(this);
  v7 = *(&info.pszEffectName + 1) - AbsOrigin->y;
  v8 = *&info.pszEffectName - AbsOrigin->x;
  vDirection.z = 0.0;
  vDirection.y = v7;
  vDirection.x = v8;
  if ( VectorNormalize(&vDirection) < 0.0099999998 )
  {
    v24 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v24);
    AngleVectors(AbsAngles, &vDirection, 0, 0);
  }
  z = vec3_invalid.z;
  *&vecStartPos.x = *&vec3_invalid.x;
  vecStartPos.z = z;
  v10 = CDOTABaseAbility::GetCaster(this);
  CBaseAnimating::GetAttachment(v10, "attach_hitloc", &vecStartPos);
  info.hSource.m_Index = -1;
  info.pszEffectName = "particles/units/heroes/hero_shadow_demon/shadow_demon_shadow_poison_projectile.vpcf";
  info.fDistance = 0.0;
  v11 = vec3_origin.z;
  info.bHasFrontalCone = 1;
  y = vec3_origin.y;
  info.fStartRadius = 0.0;
  info.vAcceleration.z = v11;
  info.vAcceleration.y = y;
  info.vAcceleration.x = vec3_origin.x;
  info.vSpawnOrigin = vecStartPos;
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
  info.pKVExtraData = 0;
  info.fExpireTime = 0.0;
  info.fMaxSpeed = 0.0;
  info.bStickyFoWReveal = 1;
  info.pAbility = this;
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  info.vVelocity.y = vDirection.y * v4;
  info.vVelocity.z = vDirection.z * v4;
  info.vVelocity.x = v4 * vDirection.x;
  info.fDistance = vptr_IHandleEntity[229](this, &vec3_origin, 0);
  info.fStartRadius = this->radius;
  info.fEndRadius = info.fStartRadius;
  v14 = CDOTABaseAbility::GetCaster(this);
  if ( v14 != 0 && (m_pEntity = v14->m_pEntity) != 0 )
  {
    v16 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v17 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(info.hSource.m_Index) = v17 | info.hSource.m_Index & 0x8000;
    info.hSource.m_Index = (v16 << 15) | info.hSource.m_Index & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  info.iUnitTargetTeam = 2;
  info.iUnitTargetType = 19;
  info.bProvidesVision = 1;
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  info.iVisionRadius = 400;
  info.iVisionTeamNumber = m_Value;
  CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  m_pParent = this->m_pGameSceneNode->m_pParent;
  OwnerEntity = 0;
  if ( m_pParent != 0 )
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
  vPos = *CBaseEntity::GetAbsOrigin(OwnerEntity);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS(&filter, &vPos);
  filter._vptr_IRecipientFilter = &off_3FECD70;
  CPASAttenuationFilter::Filter(&filter, &vPos, 0.80000001, v21);
  v22 = g_pSoundOpGameSystem;
  if ( this->m_SoundEventGuid.m_nGuid.m_Data != 0 )
  {
    CRecipientFilter::CRecipientFilter(&v31);
    v31._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&v31);
    v31._vptr_IRecipientFilter = &off_3FCB130;
    CRecipientFilter::MakeReliable(&v31);
    CSoundOpGameSystem::StopSoundEvent(v22, &v31, this->m_SoundEventGuid);
    v31._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&v31);
    this->m_SoundEventGuid.m_nGuid.m_Data = 0;
    this->m_SoundEventGuid.m_hStackHash = -1;
  }
  v23 = CDOTABaseAbility::GetCaster(this);
  this->m_SoundEventGuid = CDOTA_BaseNPC::UnitEmitSound(v23, "Hero_ShadowDemon.ShadowPoison", 0.0, 0, 0);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison::ReleasePoison  (line 631, @0x0000000002be4a70, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_ModifierManager::RemoveModifierByName, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll
// callers: CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::OnSpellStart
// strings: "modifier_shadow_demon_shadow_poison"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison::ReleasePoison(
        CDOTA_Ability_Shadow_Demon_Shadow_Poison *const this)
{
  __int64 v2; // r12
  int i; // ebx
  CHandle<CBaseEntity> *v4; // rdx
  uint32 m_Index; // eax
  __int16 v6; // cx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityInstance *m_pInstance; // rdi

  v2 = 0;
  for ( i = 0; this->m_hPoisonedUnits.m_Size > i; ++i )
  {
    while ( 1 )
    {
      v4 = &this->m_hPoisonedUnits.m_Memory.m_pMemory[v2];
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
            if ( v8->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
              break;
          }
        }
      }
      ++i;
      ++v2;
      if ( this->m_hPoisonedUnits.m_Size <= i )
        goto LABEL_11;
    }
    ++v2;
    CDOTA_ModifierManager::RemoveModifierByName(&m_pInstance[64].m_worldGroupId, "modifier_shadow_demon_shadow_poison");
  }
LABEL_11:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hPoisonedUnits);
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison::DoPoisonReleaseDamage  (line 648, @0x0000000002bee310, libserver.so)  // inlines: GetClassNameAsCStr, GetClassname, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, String, Vector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::FindModifierByName, pow, CDOTABaseAbility::GetCaster, ApplyDamage, SendOverheadEventMessage, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControl (18 total)
// callers: CDOTA_Modifier_Shadow_Demon_Shadow_Poison::OnDestroy
// strings: "bonus_stack_damage", "max_multiply_stacks", "modifier_shadow_demon_disruption", "particles/units/heroes/hero_shadow_demon/shadow_demon_shadow_poison_release.vpcf", "attach_attack1", "attach_attack2" (9 total)
void __fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison::DoPoisonReleaseDamage(
        CDOTA_Ability_Shadow_Demon_Shadow_Poison *const this,
        int nStackCount,
        CDOTA_BaseNPC *pTarget)
{
  int LevelSpecialValue; // eax
  int v7; // r14d
  CDOTA_Buff *ModifierByName; // rax
  double v9; // xmm0_8
  CDOTA_Buff *v10; // rax
  int v11; // r15d
  int v12; // r14d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v14; // rax
  CDOTAPlayer *v15; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r14d
  CDOTA_ParticleManager *v18; // rax
  __int64 v19; // r15
  CDOTA_ParticleManager *v20; // rax
  const Vector *AbsOrigin; // r15
  CDOTA_ParticleManager *v22; // rax
  CDOTA_ParticleManager *v23; // rax
  CDOTA_ParticleManager *v24; // rax
  double v25; // xmm0_8
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rdx
  float v28; // xmm2_4
  CDOTA_BaseNPC_Hero *v29; // rax
  CDOTA_Buff *v30; // [rsp+8h] [rbp-88h]
  float bonus_stack_damage; // [rsp+10h] [rbp-80h]
  vec_t bonus_stack_damagea; // [rsp+10h] [rbp-80h]
  CDOTA_Buff *bonus_stack_damageb; // [rsp+10h] [rbp-80h]
  float stack_damage; // [rsp+18h] [rbp-78h]
  double stack_damagea; // [rsp+18h] [rbp-78h]
  CDOTA_BaseNPC *stack_damageb; // [rsp+18h] [rbp-78h]
  CDOTA_BaseNPC *stack_damagec; // [rsp+18h] [rbp-78h]
  CResponseCriteriaSet criteria; // [rsp+20h] [rbp-70h] BYREF
  Vector v39; // 0:xmm0_8.8,8:xmm1_4.4

  stack_damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stack_damage", -1, 0);
  bonus_stack_damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "bonus_stack_damage", -1, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "max_multiply_stacks", -1, 0);
  if ( nStackCount > 0 )
  {
    v7 = LevelSpecialValue;
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(pTarget, "modifier_shadow_demon_disruption", 0);
    stack_damagea = stack_damage;
    if ( nStackCount < v7 )
    {
      bonus_stack_damageb = ModifierByName;
      v25 = pow(2.0, (nStackCount - 1));
      v10 = bonus_stack_damageb;
      v11 = (v25 * stack_damagea);
    }
    else
    {
      v30 = ModifierByName;
      v9 = pow(2.0, (v7 - 1));
      v10 = v30;
      v11 = (v9 * stack_damagea);
      if ( nStackCount > v7 )
        v11 = (v11 + ((nStackCount - v7) * bonus_stack_damage));
    }
    v12 = -(v10 == 0);
    Caster = CDOTABaseAbility::GetCaster(this);
    ApplyDamage(Caster, pTarget, this, v11, 2, ~v12 & 4);
    v14 = CDOTABaseAbility::GetCaster(this);
    v15 = (*(v14->_vptr_IHandleEntity + 413))(v14);
    SendOverheadEventMessage(v15, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_BONUS_SPELL_DAMAGE, pTarget, v11, 0);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_shadow_demon/shadow_demon_shadow_poison_release.vpcf",
                 2,
                 0,
                 0,
                 0);
    stack_damageb = CDOTABaseAbility::GetCaster(this);
    v18 = GetParticleManager();
    v19 = *&vec3_invalid.x;
    bonus_stack_damagea = vec3_invalid.z;
    CDOTA_ParticleManager::SetParticleControlEnt(v18, Particle, 0, stack_damageb, 5, "attach_attack1", vec3_invalid, 1);
    stack_damagec = CDOTABaseAbility::GetCaster(this);
    v20 = GetParticleManager();
    *&v39.x = v19;
    v39.z = bonus_stack_damagea;
    CDOTA_ParticleManager::SetParticleControlEnt(v20, Particle, 1, stack_damagec, 5, "attach_attack2", v39, 1);
    AbsOrigin = CBaseEntity::GetAbsOrigin(pTarget);
    v22 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v22, Particle, 2, pTarget, 5, "attach_hitloc", *AbsOrigin, 1);
    *&criteria._vptr_CResponseCriteriaSet = nStackCount;
    *(&criteria._vptr_CResponseCriteriaSet + 1) = nStackCount;
    *&criteria.m_Lookup.m_LessFunc = nStackCount;
    v23 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v23, Particle, 3, *&criteria._vptr_CResponseCriteriaSet, nStackCount);
    v24 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v24, Particle);
    if ( (pTarget->m_iUnitType & 1) != 0 && (*(pTarget->_vptr_IHandleEntity + 408))(pTarget) == 0 )
    {
      CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
      m_pEntity = this->m_pEntity;
      m_pAsString = "";
      if ( m_pEntity->m_designerName.u.m_Id != 0 )
        m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
      CResponseCriteriaSet::AppendCriteria(&criteria, "abilityname", m_pAsString, 1.0);
      CResponseCriteriaSet::AppendCriteria(&criteria, "shadow_poison_release_kill", 1.0, v28);
      v29 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC_Hero::SetKillCriteria(v29, &criteria);
      CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
    }
  }
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison::OnProjectileThink  (line 704, @0x0000000002be0b70, libserver.so)  // inlines: AllocateData, CBroadcastRecipientFilter, CEntityHandle, CHandle, CSosFieldData, CSosFieldDataFloat3, ClearData, FastSqrt, Get, GetDataPtr, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, Init, IsValid, Length2D, LookupEntity, SetValue, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, ~CBroadcastRecipientFilter, ~CSosFieldData, ~CSosFieldDataFloat3
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_Shadow_Demon_Disruption::GetDisruptedUnit, CRecipientFilter::~CRecipientFilter, operator new [], CBaseEntity::GetAbsOrigin, __stack_chk_fail, _Unwind_Resume (13 total)
// strings: "shadow_demon_disruption"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison::OnProjectileThink(
        CDOTA_Ability_Shadow_Demon_Shadow_Poison *const this,
        const Vector *const vLocation)
{
  vec_t x; // xmm4_4
  int v5; // r15d
  int v6; // r14d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Ability_Shadow_Demon_Disruption *AbilityByName; // rax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  SosFieldValueMem_t *v11; // rax
  const CBaseEntity *m_pInstance; // r15
  const Vector *AbsOrigin; // rax
  int (**vptr_IHandleEntity)(...); // rax
  int (*v15)(...); // rax
  vec_t v16; // [rsp+Ch] [rbp-1A4h]
  EHANDLE hDisruptedUnit; // [rsp+10h] [rbp-1A0h] BYREF
  CSosFieldData fieldData; // [rsp+20h] [rbp-190h] BYREF
  CBroadcastRecipientFilter filter; // [rsp+40h] [rbp-170h] BYREF
  unsigned __int64 v20; // [rsp+178h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  fieldData.m_nAllocSize = 0;
  x = vLocation->x;
  fieldData.m_pData = 0;
  v16 = x;
  v5 = _mm_cvtsi128_si32(LODWORD(vLocation->z));
  v6 = _mm_cvtsi128_si32(LODWORD(vLocation->y));
  fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 10);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT_3;
  v11 = operator new[](0xCu);
  fieldData.m_pData = v11;
  fieldData.m_nAllocSize = 12;
  *(v11 + 1) = v6;
  *(v11 + 2) = v5;
  *v11 = v16;
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
  if ( !this->m_bHitDisruptedUnit )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "shadow_demon_disruption", 0);
    if ( AbilityByName != 0 )
    {
      CDOTA_Ability_Shadow_Demon_Disruption::GetDisruptedUnit(&hDisruptedUnit.m_Index, AbilityByName);
      if ( hDisruptedUnit.m_Index + 2 > 1 )
      {
        v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hDisruptedUnit.m_Index) >> 9) & 0x3F];
        if ( v9 != 0 )
        {
          v10 = &v9[hDisruptedUnit.m_Index & 0x1FF];
          if ( v10 != 0 && hDisruptedUnit.m_Index == v10->m_EHandle.m_Index )
          {
            m_pInstance = v10->m_pInstance;
            if ( v10->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
            {
              AbsOrigin = CBaseEntity::GetAbsOrigin(v10->m_pInstance);
              if ( (this->radius + *&m_pInstance[2].m_bNetworkQuantizeOriginAndAngles) >= fsqrt(
                                                                                            ((AbsOrigin->x - vLocation->x)
                                                                                           * (AbsOrigin->x - vLocation->x))
                                                                                          + ((AbsOrigin->y - vLocation->y)
                                                                                           * (AbsOrigin->y - vLocation->y))) )
              {
                vptr_IHandleEntity = this->_vptr_IHandleEntity;
                this->m_bHitDisruptedUnit = 1;
                v15 = vptr_IHandleEntity[289];
                *&fieldData.m_fieldDataType = hDisruptedUnit;
                v15(this, &fieldData, vLocation);
              }
            }
          }
        }
      }
    }
  }
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison::OnProjectileHit  (line 731, @0x0000000002bf5ce0, libserver.so)  // inlines: AddToTail, CBroadcastRecipientFilter, CEntityHandle, CHandle, CReliableBroadcastRecipientFilter, CopyConstruct<CHandle<CBaseEntity> >, Element, FindModifierByName, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, GrowMemory, InValidate, IndexToIdentity, IsValid, LookupEntity, Set, StopSoundEvent, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CDOTABaseAbility::GetCaster, CDOTAFogOfWarSystem::AddTempViewer, __stack_chk_fail, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CDOTABaseAbility::GetDuration, ModifierFactoryDictionary, CModifieractoryDictionary::FindFactory, CDOTA_ModifierManager::FindModifierByName, CDOTA_BaseNPC::FindModifierByName, ApplyDamage, GetParticleManager, CDOTA_ParticleManager::CreateParticle (26 total)
// strings: "modifier_shadow_demon_shadow_poison", "modifier_shadow_demon_disruption", "particles/units/heroes/hero_shadow_demon/shadow_demon_shadow_poison_impact.vpcf", "Hero_ShadowDemon.ShadowPoison.Impact"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison::OnProjectileHit(
        CDOTA_Ability_Shadow_Demon_Shadow_Poison *const this,
        _DWORD *hTarget,
        const CFieldPath *vLocation)
{
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *m_pInstance; // r13
  CEntityIdentity *m_pEntity; // r12
  __int16 v11; // cx
  __int16 v12; // cx
  int v13; // eax
  __int64 m_Size; // r12
  int v15; // eax
  CHandle<CBaseEntity> *v16; // rax
  CModifieractoryDictionary *v17; // rax
  IModifierFactory *Factory; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Buff *v20; // r12
  int v21; // r12d
  int v22; // r15d
  CDOTA_BaseNPC *v23; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_ParticleManager *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  CSoundOpGameSystem *v28; // r13
  float v29; // xmm1_4
  CDOTA_BaseNPC *v30; // rax
  CDOTA_Buff *v31; // rax
  CEntityIdentity *v32; // rdx
  __int16 v33; // si
  int v34; // eax
  int v35; // eax
  __int16 v36; // cx
  __int64 v37; // r15
  int v38; // eax
  CHandle<CBaseEntity> *v39; // rax
  float duration; // [rsp+8h] [rbp-188h]
  CEntityIdentity *durationa; // [rsp+8h] [rbp-188h]
  CHandle<CBaseEntity> src; // [rsp+10h] [rbp-180h] BYREF
  KeyValues kv; // [rsp+20h] [rbp-170h] BYREF
  unsigned __int64 v44; // [rsp+158h] [rbp-38h]

  v44 = __readfsqword(0x28u);
  if ( (*hTarget + 2) <= 1
    || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F]) == 0
    || (v6 = &v5[*hTarget & 0x1FF]) == 0
    || *hTarget != v6->m_EHandle.m_Index
    || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
LABEL_5:
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTAFogOfWarSystem::AddTempViewer(
      &g_DOTAFogOfWarSystem,
      FoWViewerType_t::FOWVIEWERTYPE_SHADOW_POISON,
      Caster->m_iTeamNum.m_Value,
      vLocation,
      300.0,
      3.3399999,
      0);
    return 0;
  }
  src.m_Index = -1;
  m_pEntity = m_pInstance->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v11 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    src.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v11 & 0x7FFF;
  }
  if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(&this->m_hHitUnits, &src) == -1 )
  {
    src.m_Index = -1;
    if ( m_pEntity != 0 )
    {
      v12 = 0x7FFF;
      v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(src.m_Index) = v12 | src.m_Index & 0x8000;
      src.m_Index = (v13 << 15) | src.m_Index & 0x7FFF;
    }
    m_Size = this->m_hHitUnits.m_Size;
    v15 = this->m_hHitUnits.m_Size;
    if ( m_Size == this->m_hHitUnits.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hHitUnits.m_Memory, 1);
      v15 = this->m_hHitUnits.m_Size;
    }
    this->m_hHitUnits.m_Size = v15 + 1;
    v16 = &this->m_hHitUnits.m_Memory.m_pMemory[m_Size];
    if ( v16 != 0 )
      v16->m_Index = src.m_Index;
    duration = CDOTABaseAbility::GetDuration(this);
    v17 = ModifierFactoryDictionary();
    Factory = CModifieractoryDictionary::FindFactory(v17, "modifier_shadow_demon_shadow_poison");
    ModifierByName = CDOTA_ModifierManager::FindModifierByName(
                       &m_pInstance->m_ModifierManager,
                       Factory,
                       "modifier_shadow_demon_shadow_poison",
                       0);
    v20 = ModifierByName;
    if ( ModifierByName != 0 )
    {
      (*(ModifierByName->_vptr_CDOTA_Buff + 25))(ModifierByName, duration);
      (*(v20->_vptr_CDOTA_Buff + 63))(v20, 1, duration);
    }
    else
    {
      KeyValues::KeyValues(&kv, "modifier_shadow_demon_shadow_poison");
      KeyValues::SetFloat(&kv, "duration", v29);
      v30 = CDOTABaseAbility::GetCaster(this);
      v31 = CDOTA_BaseNPC::AddNewModifier(m_pInstance, v30, this, "modifier_shadow_demon_shadow_poison", &kv, 0);
      if ( v31 != 0 )
        (*(v31->_vptr_CDOTA_Buff + 28))(v31, 1);
      src.m_Index = -1;
      v32 = m_pInstance->m_pEntity;
      if ( v32 != 0 )
      {
        v33 = 0x7FFF;
        v34 = (v32->m_EHandle.m_Index >> 15) - (v32->m_flags & 1);
        if ( v32->m_EHandle.m_Index != -1 )
          v33 = v32->m_EHandle.m_Index & 0x7FFF;
        LOWORD(src.m_Index) = v33 | src.m_Index & 0x8000;
        src.m_Index = (v34 << 15) | src.m_Index & 0x7FFF;
      }
      durationa = v32;
      if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
             &this->m_hPoisonedUnits,
             &src) == -1 )
      {
        src.m_Index = -1;
        if ( durationa != 0 )
        {
          v35 = (durationa->m_EHandle.m_Index >> 15) - (durationa->m_flags & 1);
          v36 = 0x7FFF;
          if ( durationa->m_EHandle.m_Index != -1 )
            v36 = durationa->m_EHandle.m_Index & 0x7FFF;
          LOWORD(src.m_Index) = v36 | src.m_Index & 0x8000;
          src.m_Index = (v35 << 15) | src.m_Index & 0x7FFF;
        }
        v37 = this->m_hPoisonedUnits.m_Size;
        v38 = this->m_hPoisonedUnits.m_Size;
        if ( v37 == this->m_hPoisonedUnits.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hPoisonedUnits.m_Memory, 1);
          v38 = this->m_hPoisonedUnits.m_Size;
        }
        this->m_hPoisonedUnits.m_Size = v38 + 1;
        v39 = &this->m_hPoisonedUnits.m_Memory.m_pMemory[v37];
        if ( v39 != 0 )
          v39->m_Index = src.m_Index;
      }
      KeyValues::~KeyValues(&kv);
    }
    v21 = CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_shadow_demon_disruption", 0) == 0 ? 0 : 4;
    v22 = (*(this->_vptr_IHandleEntity + 247))(this);
    v23 = CDOTABaseAbility::GetCaster(this);
    ApplyDamage(v23, m_pInstance, this, v22, 2, v21);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_shadow_demon/shadow_demon_shadow_poison_impact.vpcf",
                 2,
                 0,
                 0,
                 0);
    v26 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v26, Particle, 0, m_pInstance, 1, 0, vec3_invalid, 1);
    v27 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v27, Particle);
    CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_ShadowDemon.ShadowPoison.Impact", 0.0, 0, 0);
    v28 = g_pSoundOpGameSystem;
    if ( this->m_SoundEventGuid.m_nGuid.m_Data != 0 )
    {
      CRecipientFilter::CRecipientFilter(&kv);
      kv.m_uValue = &off_3FB63F0;
      CRecipientFilter::AddAllPlayers(&kv);
      kv.m_uValue = &off_3FCB130;
      CRecipientFilter::MakeReliable(&kv);
      CSoundOpGameSystem::StopSoundEvent(v28, &kv, this->m_SoundEventGuid);
      kv.m_uValue = &off_3FB63F0;
      CRecipientFilter::~CRecipientFilter(&kv);
      this->m_SoundEventGuid.m_nGuid.m_Data = 0;
      this->m_SoundEventGuid.m_hStackHash = -1;
    }
    goto LABEL_5;
  }
  return 0;
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison::GetAbilityDamageToTargetOverInterval  (line 791, @0x0000000002be9590, libserver.so)
// calls: CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, pow, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "modifier_shadow_demon_shadow_poison", "max_multiply_stacks", "bonus_stack_damages"
__int64 __fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Shadow_Demon_Shadow_Poison *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int v5; // r13d
  CDOTA_Buff *ModifierByName; // rax
  int LevelSpecialValue; // r13d
  int v10; // ebx
  double v11; // [rsp-30h] [rbp-30h]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    v5 = 0;
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(pTarget, "modifier_shadow_demon_shadow_poison", 0);
    if ( ModifierByName != 0 )
      v5 = (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName);
    if ( CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "max_multiply_stacks", -1, 0) <= v5 )
    {
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bonus_stack_damages", -1, 0);
    }
    else
    {
      v11 = pow(2.0, v5);
      LevelSpecialValue = (CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "stack_damage", -1, 0) * v11);
    }
    v10 = (*(this->_vptr_IHandleEntity + 247))(this);
    return ((LevelSpecialValue + v10) * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Modifier_Shadow_Demon_Shadow_Poison::~CDOTA_Modifier_Shadow_Demon_Shadow_Poison  (line 824, @0x0000000002c035e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Shadow_Demon_Shadow_Poison::~CDOTA_Modifier_Shadow_Demon_Shadow_Poison(
        CDOTA_Modifier_Shadow_Demon_Shadow_Poison *const this)
{
  this->_vptr_CDOTA_Buff = &off_4557C30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Shadow_Demon_Shadow_Poison::~CDOTA_Modifier_Shadow_Demon_Shadow_Poison  (line 824, @0x0000000002c03600, libserver.so)  // inlines: ~CDOTA_Modifier_Shadow_Demon_Shadow_Poison
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Shadow_Demon_Shadow_Poison::~CDOTA_Modifier_Shadow_Demon_Shadow_Poison(
        CDOTA_Modifier_Shadow_Demon_Shadow_Poison *const this)
{
  this->_vptr_CDOTA_Buff = &off_4557C30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Shadow_Demon_Shadow_Poison::IsDebuff  (line 835, @0x0000000002bff7b0, libserver.so)
bool __fastcall CDOTA_Modifier_Shadow_Demon_Shadow_Poison::IsDebuff(
        CDOTA_Modifier_Shadow_Demon_Shadow_Poison *const this)
{
  return 1;
}


// CDOTA_Modifier_Shadow_Demon_Shadow_Poison::GetAttributes  (line 837, @0x0000000002bff7c0, libserver.so)
int __fastcall CDOTA_Modifier_Shadow_Demon_Shadow_Poison::GetAttributes(
        CDOTA_Modifier_Shadow_Demon_Shadow_Poison *const this)
{
  return 4;
}


// CDOTA_Modifier_Shadow_Demon_Shadow_Poison::StatusEffectPriority  (line 841, @0x0000000002bff7d0, libserver.so)
int __fastcall CDOTA_Modifier_Shadow_Demon_Shadow_Poison::StatusEffectPriority(
        CDOTA_Modifier_Shadow_Demon_Shadow_Poison *const this)
{
  return 50;
}


// CDOTA_Modifier_Shadow_Demon_Shadow_Poison::OnCreated  (line 855, @0x0000000002bf2da0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_stack_damage", "max_multiply_stacks"
void __fastcall CDOTA_Modifier_Shadow_Demon_Shadow_Poison::OnCreated(
        CDOTA_Modifier_Shadow_Demon_Shadow_Poison *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->stack_damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "stack_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->bonus_stack_damage = 0.0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->stack_damage = 0.0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->bonus_stack_damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "bonus_stack_damage", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->max_multiply_stacks = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "max_multiply_stacks", -1, 0);
    return;
  }
LABEL_7:
  this->max_multiply_stacks = 0;
}


// CDOTA_Modifier_Shadow_Demon_Shadow_Poison::OnRefresh  (line 874, @0x0000000002bf3010, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_stack_damage", "max_multiply_stacks"
void __fastcall CDOTA_Modifier_Shadow_Demon_Shadow_Poison::OnRefresh(
        CDOTA_Modifier_Shadow_Demon_Shadow_Poison *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->stack_damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "stack_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->bonus_stack_damage = 0.0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->stack_damage = 0.0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->bonus_stack_damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "bonus_stack_damage", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->max_multiply_stacks = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "max_multiply_stacks", -1, 0);
    return;
  }
LABEL_7:
  this->max_multiply_stacks = 0;
}


// CDOTA_Modifier_Shadow_Demon_Shadow_Poison::DeclareFunctions  (line 897, @0x0000000002bd37a0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Shadow_Demon_Shadow_Poison::OnTooltip(CModifierParams const&)
void __fastcall CDOTA_Modifier_Shadow_Demon_Shadow_Poison::DeclareFunctions(
        CDOTA_Modifier_Shadow_Demon_Shadow_Poison *const this)
{
  this->m_Functions[151].__pfn = CDOTA_Modifier_Shadow_Demon_Shadow_Poison::OnTooltip;
  this->m_Functions[151].__delta = 0;
}


// CDOTA_Modifier_Shadow_Demon_Shadow_Poison::OnDestroy  (line 904, @0x0000000002bee690, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Buff::GetParent, CDOTA_Ability_Shadow_Demon_Shadow_Poison::DoPoisonReleaseDamage, CDOTA_BaseNPC::UnitEmitSound
// strings: "shadow_demon_shadow_poison", "Hero_ShadowDemon.ShadowPoison.Release"
void __fastcall CDOTA_Modifier_Shadow_Demon_Shadow_Poison::OnDestroy(
        CDOTA_Modifier_Shadow_Demon_Shadow_Poison *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Ability_Shadow_Demon_Shadow_Poison *AbilityByName; // r12
  CDOTA_BaseNPC *Parent; // r13
  int v5; // eax
  CDOTA_BaseNPC *v6; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "shadow_demon_shadow_poison", 0);
  if ( AbilityByName != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this);
    CDOTA_Ability_Shadow_Demon_Shadow_Poison::DoPoisonReleaseDamage(AbilityByName, v5, Parent);
    v6 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::UnitEmitSound(v6, "Hero_ShadowDemon.ShadowPoison.Release", 0.0, 0, 0);
  }
}


// CDOTA_Modifier_Shadow_Demon_Shadow_Poison::OnTooltip  (line 921, @0x0000000002bd5dc0, libserver.so)
// calls: pow
ModifierVariant_t __fastcall CDOTA_Modifier_Shadow_Demon_Shadow_Poison::OnTooltip(
        CDOTA_Modifier_Shadow_Demon_Shadow_Poison *const this,
        const CModifierParams *const params)
{
  int v3; // r12d
  int max_multiply_stacks; // eax
  int v5; // eax
  double v6; // xmm0_8
  __m128i v7; // xmm3
  int v8; // edx
  int v9; // eax
  double stack_damage; // [rsp+8h] [rbp-18h]
  ModifierVariant_t result; // 0:rax.16

  v3 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
  max_multiply_stacks = this->max_multiply_stacks;
  stack_damage = this->stack_damage;
  if ( v3 < max_multiply_stacks )
    v5 = v3 - 1;
  else
    v5 = max_multiply_stacks - 1;
  v6 = pow(2.0, v5);
  v8 = this->max_multiply_stacks;
  v9 = (v6 * stack_damage);
  if ( v3 > v8 )
    v9 = (v9 + ((v3 - v8) * this->bonus_stack_damage));
  *v7.m128i_i32 = v9;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v7) << 32) | 1;
  return result;
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::~CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release  (line 941, @0x0000000002c057b0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::~CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release(
        CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release *const this)
{
  this->_vptr_IHandleEntity = &off_4557F90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::~CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release  (line 941, @0x0000000002c057d0, libserver.so)  // inlines: ~CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::~CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release(
        CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release *const this)
{
  this->_vptr_IHandleEntity = &off_4557F90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::Schema_DynamicBinding  (line 943, @0x0000000002bff7e0, libserver.so)
// globals: CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::Schema_DynamicBinding(
        const CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release *const this)
{
  return CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::s_pSchemaBinding;
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 943, @0x0000000002bff7f0, libserver.so)
// globals: CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::CEntityInstanceEntityClass::DestructInstance  (line 943, @0x0000000002bff800, libserver.so)  // inlines: Destruct<CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release>
void __fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::CEntityInstanceEntityClass::FreeInstance  (line 943, @0x0000000002bff820, libserver.so)
void __fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::CEntityInstanceEntityClass::CanAllocate  (line 943, @0x0000000002bff840, libserver.so)
bool __fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 943, @0x0000000002bff850, libserver.so)
// globals: CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::s_pSchemaBinding;
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::CEntityInstanceEntityClass::AllocateInstance  (line 943, @0x0000000002c02730, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::CEntityInstanceEntityClass::ConstructInstance  (line 943, @0x0000000002c04c70, libserver.so)  // inlines: CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release, Construct<CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4557F90;
  }
  return p;
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 943, @0x0000000002c0ae10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 943, @0x0000000002c0ae30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::GetEntityClassInternal  (line 943, @0x0000000002c157f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "shadow_demon_shadow_poison_release", "CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release"
// globals: `guard variable for'CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_Poison_ReleaseClas, CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_Poison_ReleaseClass, __dso_handle, CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_Poison_ReleaseClassInf, CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_Poison_ReleaseClassInfo
CEntityClass *__cdecl CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_Poison_ReleaseClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_Poison_ReleaseClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_Poison_ReleaseClass);
    CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_Poison_ReleaseClass._vptr_CEntityClass = off_4557F10;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_Poison_ReleaseClass);
    __cxa_atexit(
      CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_Poison_ReleaseClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Shadow_Demon_Shadow_Poison_ReleaseClass != 0 )
    return &CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_Poison_ReleaseClass;
  if ( `guard variable for'CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_Poison_ReleaseClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_Poison_ReleaseClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_Poison_ReleaseClassInfo,
      "CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release",
      "shadow_demon_shadow_poison_release",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_Poison_ReleaseClassInfo);
  }
  CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_Poison_ReleaseClass.m_pClassInfo = &CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_Poison_ReleaseClassInfo;
  CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_Poison_ReleaseClass.m_pBaseClassInfo = CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_Poison_ReleaseClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Shadow_Demon_Shadow_Poison_ReleaseClass = &CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_Poison_ReleaseClass;
  CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_Poison_ReleaseClassInfo.m_pClass = &CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_Poison_ReleaseClass;
  CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_Poison_ReleaseClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Shadow_Demon_Shadow_Poison_ReleaseClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Shadow_Poison_ReleaseClass;
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::IsStealable  (line 947, @0x0000000002bff860, libserver.so)
bool __fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::IsStealable(
        CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release *const this)
{
  return 0;
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::ProcsMagicStick  (line 949, @0x0000000002bff870, libserver.so)
bool __fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::ProcsMagicStick(
        CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release *const this)
{
  return 0;
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::GetAssociatedPrimaryAbilities  (line 951, @0x0000000002bff880, libserver.so)
// strings: "shadow_demon_shadow_poison"
const char *__fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::GetAssociatedPrimaryAbilities(
        CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release *const this)
{
  return "shadow_demon_shadow_poison";
}


// CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::OnSpellStart  (line 959, @0x0000000002be4b50, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_Shadow_Demon_Shadow_Poison::ReleasePoison
// strings: "shadow_demon_shadow_poison"
void __fastcall CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::OnSpellStart(
        CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Ability_Shadow_Demon_Shadow_Poison *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "shadow_demon_shadow_poison", 0);
  if ( AbilityByName != 0 )
    CDOTA_Ability_Shadow_Demon_Shadow_Poison::ReleasePoison(AbilityByName);
}


// CDOTA_Modifier_Shadow_Demon_DemonicPurge_ChargeCounter::~CDOTA_Modifier_Shadow_Demon_DemonicPurge_ChargeCounter  (line 974, @0x0000000002c03590, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Shadow_Demon_DemonicPurge_ChargeCounter::~CDOTA_Modifier_Shadow_Demon_DemonicPurge_ChargeCounter(
        CDOTA_Modifier_Shadow_Demon_DemonicPurge_ChargeCounter *const this)
{
  this->_vptr_CDOTA_Buff = &off_4558A50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Shadow_Demon_DemonicPurge_ChargeCounter::~CDOTA_Modifier_Shadow_Demon_DemonicPurge_ChargeCounter  (line 974, @0x0000000002c035b0, libserver.so)  // inlines: ~CDOTA_Modifier_Shadow_Demon_DemonicPurge_ChargeCounter
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Shadow_Demon_DemonicPurge_ChargeCounter::~CDOTA_Modifier_Shadow_Demon_DemonicPurge_ChargeCounter(
        CDOTA_Modifier_Shadow_Demon_DemonicPurge_ChargeCounter *const this)
{
  this->_vptr_CDOTA_Buff = &off_4558A50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Shadow_Demon_DemonicPurge_ChargeCounter::IsHidden  (line 979, @0x0000000002c05e50, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter
bool __fastcall CDOTA_Modifier_Shadow_Demon_DemonicPurge_ChargeCounter::IsHidden(
        CDOTA_Modifier_Shadow_Demon_DemonicPurge_ChargeCounter *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  return !CDOTA_BaseNPC::HasScepter(Caster);
}


// CDOTA_Modifier_Shadow_Demon_DemonicPurge_ChargeCounter::IsPurgable  (line 980, @0x0000000002bff890, libserver.so)
bool __fastcall CDOTA_Modifier_Shadow_Demon_DemonicPurge_ChargeCounter::IsPurgable(
        CDOTA_Modifier_Shadow_Demon_DemonicPurge_ChargeCounter *const this)
{
  return 0;
}


// CDOTA_Modifier_Shadow_Demon_DemonicPurge_ChargeCounter::IsPermanent  (line 981, @0x0000000002bff8a0, libserver.so)
bool __fastcall CDOTA_Modifier_Shadow_Demon_DemonicPurge_ChargeCounter::IsPermanent(
        CDOTA_Modifier_Shadow_Demon_DemonicPurge_ChargeCounter *const this)
{
  return 1;
}


// CDOTA_Modifier_Shadow_Demon_DemonicPurge_ChargeCounter::DestroyOnExpire  (line 982, @0x0000000002bff8b0, libserver.so)
bool __fastcall CDOTA_Modifier_Shadow_Demon_DemonicPurge_ChargeCounter::DestroyOnExpire(
        CDOTA_Modifier_Shadow_Demon_DemonicPurge_ChargeCounter *const this)
{
  return 0;
}


// CDOTA_Modifier_Shadow_Demon_DemonicPurge_ChargeCounter::OnCreated  (line 1004, @0x0000000002bf2c20, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "max_charges", "charge_restore_time"
void __fastcall CDOTA_Modifier_Shadow_Demon_DemonicPurge_ChargeCounter::OnCreated(
        CDOTA_Modifier_Shadow_Demon_DemonicPurge_ChargeCounter *const this,
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


// CDOTA_Modifier_Shadow_Demon_DemonicPurge_ChargeCounter::OnRefresh  (line 1016, @0x0000000002beb1c0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "max_charges"
void __fastcall CDOTA_Modifier_Shadow_Demon_DemonicPurge_ChargeCounter::OnRefresh(
        CDOTA_Modifier_Shadow_Demon_DemonicPurge_ChargeCounter *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->max_charges = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "max_charges", -1, 0);
  else
    this->max_charges = 0;
}


// CDOTA_Modifier_Shadow_Demon_DemonicPurge_ChargeCounter::OnIntervalThink  (line 1022, @0x0000000002bd4750, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Shadow_Demon_DemonicPurge_ChargeCounter::OnIntervalThink(
        CDOTA_Modifier_Shadow_Demon_DemonicPurge_ChargeCounter *const this)
{
  float v2; // xmm1_4
  void (__fastcall *v3)(CDOTA_Modifier_Shadow_Demon_DemonicPurge_ChargeCounter *const, __int64, float); // r12
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


// CDOTA_Ability_Shadow_Demon_Demonic_Purge::~CDOTA_Ability_Shadow_Demon_Demonic_Purge  (line 1053, @0x0000000002c05800, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Shadow_Demon_Demonic_Purge::~CDOTA_Ability_Shadow_Demon_Demonic_Purge(
        CDOTA_Ability_Shadow_Demon_Demonic_Purge *const this)
{
  this->_vptr_IHandleEntity = &off_4558DB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Shadow_Demon_Demonic_Purge::~CDOTA_Ability_Shadow_Demon_Demonic_Purge  (line 1053, @0x0000000002c05820, libserver.so)  // inlines: ~CDOTA_Ability_Shadow_Demon_Demonic_Purge
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Shadow_Demon_Demonic_Purge::~CDOTA_Ability_Shadow_Demon_Demonic_Purge(
        CDOTA_Ability_Shadow_Demon_Demonic_Purge *const this)
{
  this->_vptr_IHandleEntity = &off_4558DB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Shadow_Demon_Demonic_Purge::Schema_DynamicBinding  (line 1055, @0x0000000002bff8c0, libserver.so)
// globals: CDOTA_Ability_Shadow_Demon_Demonic_Purge::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Shadow_Demon_Demonic_Purge::Schema_DynamicBinding(
        const CDOTA_Ability_Shadow_Demon_Demonic_Purge *const this)
{
  return CDOTA_Ability_Shadow_Demon_Demonic_Purge::s_pSchemaBinding;
}


// CDOTA_Ability_Shadow_Demon_Demonic_Purge::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1055, @0x0000000002bff8d0, libserver.so)
// globals: CDOTA_Ability_Shadow_Demon_Demonic_Purge::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Shadow_Demon_Demonic_Purge::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Shadow_Demon_Demonic_Purge::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Shadow_Demon_Demonic_Purge::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Shadow_Demon_Demonic_Purge::CEntityInstanceEntityClass::DestructInstance  (line 1055, @0x0000000002bff8e0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Shadow_Demon_Demonic_Purge>
void __fastcall CDOTA_Ability_Shadow_Demon_Demonic_Purge::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Shadow_Demon_Demonic_Purge::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Shadow_Demon_Demonic_Purge::CEntityInstanceEntityClass::FreeInstance  (line 1055, @0x0000000002bff900, libserver.so)
void __fastcall CDOTA_Ability_Shadow_Demon_Demonic_Purge::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Shadow_Demon_Demonic_Purge::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Shadow_Demon_Demonic_Purge::CEntityInstanceEntityClass::CanAllocate  (line 1055, @0x0000000002bff920, libserver.so)
bool __fastcall CDOTA_Ability_Shadow_Demon_Demonic_Purge::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Shadow_Demon_Demonic_Purge::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Shadow_Demon_Demonic_Purge::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1055, @0x0000000002bff930, libserver.so)
// globals: CDOTA_Ability_Shadow_Demon_Demonic_Purge::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Shadow_Demon_Demonic_Purge::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Shadow_Demon_Demonic_Purge::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Shadow_Demon_Demonic_Purge::s_pSchemaBinding;
}


// CDOTA_Ability_Shadow_Demon_Demonic_Purge::CEntityInstanceEntityClass::AllocateInstance  (line 1055, @0x0000000002c02770, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Shadow_Demon_Demonic_Purge::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Shadow_Demon_Demonic_Purge::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Shadow_Demon_Demonic_Purge::CEntityInstanceEntityClass::ConstructInstance  (line 1055, @0x0000000002c04ca0, libserver.so)  // inlines: CDOTA_Ability_Shadow_Demon_Demonic_Purge, Construct<CDOTA_Ability_Shadow_Demon_Demonic_Purge>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Shadow_Demon_Demonic_Purge::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Shadow_Demon_Demonic_Purge::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4558DB0;
  }
  return p;
}


// CDOTA_Ability_Shadow_Demon_Demonic_Purge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1055, @0x0000000002c0ae60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Shadow_Demon_Demonic_Purge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Shadow_Demon_Demonic_Purge::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Shadow_Demon_Demonic_Purge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1055, @0x0000000002c0ae80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Shadow_Demon_Demonic_Purge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Shadow_Demon_Demonic_Purge::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Shadow_Demon_Demonic_Purge::GetEntityClassInternal  (line 1055, @0x0000000002c15940, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "shadow_demon_demonic_purge", "CDOTA_Ability_Shadow_Demon_Demonic_Purge"
// globals: `guard variable for'CDOTA_Ability_Shadow_Demon_Demonic_Purge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Demonic_PurgeClass, CDOTA_Ability_Shadow_Demon_Demonic_Purge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Demonic_PurgeClass, __dso_handle, CDOTA_Ability_Shadow_Demon_Demonic_Purge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Shadow_Demon_Demonic_Purge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_Demonic_PurgeClassInfo, CDOTA_Ability_Shadow_Demon_Demonic_Purge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_Demonic_PurgeClassInfo
CEntityClass *__cdecl CDOTA_Ability_Shadow_Demon_Demonic_Purge::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Shadow_Demon_Demonic_Purge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Demonic_PurgeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Shadow_Demon_Demonic_Purge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Demonic_PurgeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Shadow_Demon_Demonic_Purge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Demonic_PurgeClass);
    CDOTA_Ability_Shadow_Demon_Demonic_Purge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Demonic_PurgeClass._vptr_CEntityClass = off_4558D30;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Shadow_Demon_Demonic_Purge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Demonic_PurgeClass);
    __cxa_atexit(
      CDOTA_Ability_Shadow_Demon_Demonic_Purge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Shadow_Demon_Demonic_Purge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Demonic_PurgeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Shadow_Demon_Demonic_PurgeClass != 0 )
    return &CDOTA_Ability_Shadow_Demon_Demonic_Purge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Demonic_PurgeClass;
  if ( `guard variable for'CDOTA_Ability_Shadow_Demon_Demonic_Purge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_Demonic_PurgeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Shadow_Demon_Demonic_Purge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_Demonic_PurgeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Shadow_Demon_Demonic_Purge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_Demonic_PurgeClassInfo,
      "CDOTA_Ability_Shadow_Demon_Demonic_Purge",
      "shadow_demon_demonic_purge",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Shadow_Demon_Demonic_Purge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_Demonic_PurgeClassInfo);
  }
  CDOTA_Ability_Shadow_Demon_Demonic_Purge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Demonic_PurgeClass.m_pClassInfo = &CDOTA_Ability_Shadow_Demon_Demonic_Purge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_Demonic_PurgeClassInfo;
  CDOTA_Ability_Shadow_Demon_Demonic_Purge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Demonic_PurgeClass.m_pBaseClassInfo = CDOTA_Ability_Shadow_Demon_Demonic_Purge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_Demonic_PurgeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Shadow_Demon_Demonic_PurgeClass = &CDOTA_Ability_Shadow_Demon_Demonic_Purge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Demonic_PurgeClass;
  CDOTA_Ability_Shadow_Demon_Demonic_Purge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shadow_Demon_Demonic_PurgeClassInfo.m_pClass = &CDOTA_Ability_Shadow_Demon_Demonic_Purge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Demonic_PurgeClass;
  CDOTA_Ability_Shadow_Demon_Demonic_Purge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Demonic_PurgeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Shadow_Demon_Demonic_PurgeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Shadow_Demon_Demonic_Purge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shadow_Demon_Demonic_PurgeClass;
}


// CDOTA_Ability_Shadow_Demon_Demonic_Purge::GetIntrinsicModifierName  (line 1060, @0x0000000002bff940, libserver.so)
// strings: "modifier_shadow_demon_demonic_purge_charge_counter"
const char *__fastcall CDOTA_Ability_Shadow_Demon_Demonic_Purge::GetIntrinsicModifierName(
        CDOTA_Ability_Shadow_Demon_Demonic_Purge *const this)
{
  const char *result; // rax

  result = 0;
  if ( !this->m_bReflection )
    return "modifier_shadow_demon_demonic_purge_charge_counter";
  return result;
}


// CDOTA_Ability_Shadow_Demon_Demonic_Purge::IsRefreshable  (line 1062, @0x0000000002c05e70, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter
bool __fastcall CDOTA_Ability_Shadow_Demon_Demonic_Purge::IsRefreshable(
        CDOTA_Ability_Shadow_Demon_Demonic_Purge *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  return !CDOTA_BaseNPC::HasScepter(Caster);
}


// CDOTA_Ability_Shadow_Demon_Demonic_Purge::GetCooldown  (line 1080, @0x0000000002bd4330, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::GetCooldown
float __fastcall CDOTA_Ability_Shadow_Demon_Demonic_Purge::GetCooldown(
        CDOTA_Ability_Shadow_Demon_Demonic_Purge *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) && CDOTABaseAbility::GetEffectiveLevel(this) >= 0 )
    return 0.0;
  else
    return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Ability_Shadow_Demon_Demonic_Purge::CastFilterResult  (line 1087, @0x0000000002bd4d40, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::CastFilterResult
// strings: "modifier_shadow_demon_demonic_purge_charge_counter"
int __fastcall CDOTA_Ability_Shadow_Demon_Demonic_Purge::CastFilterResult(
        CDOTA_Ability_Shadow_Demon_Demonic_Purge *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_shadow_demon_demonic_purge_charge_counter", 0);
  if ( ModifierByName == 0 || (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName) != 0 )
    return CDOTABaseAbility::CastFilterResult(this, pTarget);
  else
    return 23;
}


// CDOTA_Ability_Shadow_Demon_Demonic_Purge::GetCustomCastError  (line 1103, @0x0000000002bd37c0, libserver.so)
// strings: "dota_hud_error_demonic_purge_no_charges"
const char *__fastcall CDOTA_Ability_Shadow_Demon_Demonic_Purge::GetCustomCastError(
        CDOTA_Ability_Shadow_Demon_Demonic_Purge *const this,
        CDOTA_BaseNPC *pTarget)
{
  return "dota_hud_error_demonic_purge_no_charges";
}


// CDOTA_Ability_Shadow_Demon_Demonic_Purge::OnSpellStart  (line 1110, @0x0000000002bee710, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetParent, InState, IsConsideredHero, IsInvulnerable, SetThinking, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::UnitEmitSound, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, Purge, KeyValues::KeyValues (22 total)
// strings: "max_charges", "charge_restore_time", "Hero_ShadowDemon.DemonicPurge.Cast", "particles/units/heroes/hero_shadow_demon/shadow_demon_demonic_purge_cast.vpcf", "attach_hitloc", "attach_attack1" (12 total)
void __fastcall CDOTA_Ability_Shadow_Demon_Demonic_Purge::OnSpellStart(
        CDOTA_Ability_Shadow_Demon_Demonic_Purge *const this)
{
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v3; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  CDOTA_BaseNPC *v7; // r15
  CDOTA_ParticleManager *v8; // rax
  __int64 v9; // r14
  CDOTA_ParticleManager *v10; // rax
  CDOTA_BaseNPC *v11; // r15
  CDOTA_ParticleManager *v12; // rax
  CDOTA_BaseNPC *v13; // r15
  CDOTA_ParticleManager *v14; // rax
  CDOTA_ParticleManager *v15; // rax
  float v16; // xmm1_4
  CGameSceneNode *v17; // rdi
  CBaseEntity *v18; // rsi
  CDOTA_BaseNPC *v19; // rax
  CDOTA_Buff *ModifierByName; // r12
  CDOTA_BaseNPC *v21; // rax
  float v22; // xmm0_4
  float v23; // xmm1_4
  int (**vptr_CDOTA_Buff)(...); // rax
  int (*v25)(...); // r13
  float v26; // xmm0_4
  void (__fastcall *v27)(CDOTA_Ability_Shadow_Demon_Demonic_Purge *const); // r13
  float v28; // xmm1_4
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rsi
  vec_t creep_root_duration; // [rsp+Ch] [rbp-54h]
  float creep_root_durationa; // [rsp+Ch] [rbp-54h]
  float creep_root_durationb; // [rsp+Ch] [rbp-54h]
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v35; // [rsp+28h] [rbp-38h]
  Vector v36; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v37; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v38; // 0:xmm0_8.8,8:xmm1_4.4

  v35 = __readfsqword(0x28u);
  this->max_charges = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "max_charges", -1, 0);
  this->charge_restore_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "charge_restore_time", -1, 0);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0
    && (BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 1) == 0 )
  {
    if ( !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
    {
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::UnitEmitSound(Caster, "Hero_ShadowDemon.DemonicPurge.Cast", 0.0, 0, 0);
      ParticleManager = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_shadow_demon/shadow_demon_demonic_purge_cast.vpcf",
                   2,
                   0,
                   0,
                   0);
      v7 = CDOTABaseAbility::GetCaster(this);
      v8 = GetParticleManager();
      v9 = *&vec3_invalid.x;
      creep_root_duration = vec3_invalid.z;
      CDOTA_ParticleManager::SetParticleControlEnt(v8, Particle, 0, v7, 5, "attach_hitloc", vec3_invalid, 1);
      v10 = GetParticleManager();
      v36.z = creep_root_duration;
      *&v36.x = v9;
      CDOTA_ParticleManager::SetParticleControlEnt(v10, Particle, 1, v3, 5, "attach_hitloc", v36, 1);
      v11 = CDOTABaseAbility::GetCaster(this);
      v12 = GetParticleManager();
      v37.z = creep_root_duration;
      *&v37.x = v9;
      CDOTA_ParticleManager::SetParticleControlEnt(v12, Particle, 2, v11, 5, "attach_attack1", v37, 1);
      v13 = CDOTABaseAbility::GetCaster(this);
      v14 = GetParticleManager();
      v38.z = creep_root_duration;
      *&v38.x = v9;
      CDOTA_ParticleManager::SetParticleControlEnt(v14, Particle, 3, v13, 5, "attach_attack2", v38, 1);
      v15 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v15, Particle);
      CDOTA_BaseNPC::UnitEmitSound(v3, "Hero_ShadowDemon.DemonicPurge.Impact", 0.0, 0, 0);
      Purge(v3, this, 2);
      if ( (v3[2].m_hEffectEntity.m_Value.m_Index & 3) == 0 )
      {
        CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "creep_root_duration", -1, 0);
        KeyValues::KeyValues(&kv, "modifier_rooted");
        KeyValues::SetFloat(&kv, "duration", v28);
        m_pParent = this->m_pGameSceneNode->m_pParent;
        if ( m_pParent != 0 )
          OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
        else
          OwnerEntity = 0;
        CDOTA_BaseNPC::AddNewModifier(v3, OwnerEntity, this, "modifier_rooted", &kv, 0);
        KeyValues::~KeyValues(&kv);
      }
      KeyValues::KeyValues(&kv, "modifier_shadow_demon_purge_slow");
      CDOTABaseAbility::GetDuration(this);
      KeyValues::SetFloat(&kv, "duration", v16);
      v17 = this->m_pGameSceneNode->m_pParent;
      if ( v17 != 0 )
        v18 = CGameSceneNode::GetOwnerEntity(v17);
      else
        v18 = 0;
      CDOTA_BaseNPC::AddNewModifier(v3, v18, this, "modifier_shadow_demon_purge_slow", &kv, 0);
      KeyValues::~KeyValues(&kv);
    }
    v19 = CDOTABaseAbility::GetCaster(this);
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(v19, "modifier_shadow_demon_demonic_purge_charge_counter", 0);
    if ( ModifierByName != 0 )
    {
      v21 = CDOTABaseAbility::GetCaster(this);
      if ( CDOTA_BaseNPC::HasScepter(v21) )
      {
        (*(ModifierByName->_vptr_CDOTA_Buff + 26))(ModifierByName);
        if ( (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName) == 0 )
        {
          v27 = *(this->_vptr_IHandleEntity + 241);
          (*(ModifierByName->_vptr_CDOTA_Buff + 33))(ModifierByName);
          v27(this);
        }
        if ( LOBYTE(ModifierByName[1].m_References.m_pHead) == 0 )
        {
          creep_root_durationa = this->charge_restore_time;
          v22 = (*(this->_vptr_IHandleEntity + 243))(this, 0xFFFFFFFFLL);
          CDOTA_Buff::StartIntervalThink(ModifierByName, v22 * creep_root_durationa, v23);
          vptr_CDOTA_Buff = ModifierByName->_vptr_CDOTA_Buff;
          LOBYTE(ModifierByName[1].m_References.m_pHead) = 1;
          v25 = vptr_CDOTA_Buff[63];
          creep_root_durationb = this->charge_restore_time;
          v26 = (*(this->_vptr_IHandleEntity + 243))(this, 0xFFFFFFFFLL);
          v25(ModifierByName, 1, v26 * creep_root_durationb);
        }
      }
    }
  }
}


// CDOTA_Ability_Shadow_Demon_Demonic_Purge::GetSlowDuration  (line 1179, @0x0000000002bd5c40, libserver.so)
// calls: CDOTABaseAbility::GetDuration
float __fastcall CDOTA_Ability_Shadow_Demon_Demonic_Purge::GetSlowDuration(
        CDOTA_Ability_Shadow_Demon_Demonic_Purge *const this)
{
  return CDOTABaseAbility::GetDuration(this);
}


// CDOTA_Modifier_Shadow_Demon_Purge_Slow::~CDOTA_Modifier_Shadow_Demon_Purge_Slow  (line 1187, @0x0000000002c03540, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Shadow_Demon_Purge_Slow::~CDOTA_Modifier_Shadow_Demon_Purge_Slow(
        CDOTA_Modifier_Shadow_Demon_Purge_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_4559870;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Shadow_Demon_Purge_Slow::~CDOTA_Modifier_Shadow_Demon_Purge_Slow  (line 1187, @0x0000000002c03560, libserver.so)  // inlines: ~CDOTA_Modifier_Shadow_Demon_Purge_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Shadow_Demon_Purge_Slow::~CDOTA_Modifier_Shadow_Demon_Purge_Slow(
        CDOTA_Modifier_Shadow_Demon_Purge_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_4559870;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Shadow_Demon_Purge_Slow::IsPurgable  (line 1194, @0x0000000002bff960, libserver.so)
bool __fastcall CDOTA_Modifier_Shadow_Demon_Purge_Slow::IsPurgable(CDOTA_Modifier_Shadow_Demon_Purge_Slow *const this)
{
  return 0;
}


// CDOTA_Modifier_Shadow_Demon_Purge_Slow::IsDebuff  (line 1198, @0x0000000002bff970, libserver.so)
bool __fastcall CDOTA_Modifier_Shadow_Demon_Purge_Slow::IsDebuff(CDOTA_Modifier_Shadow_Demon_Purge_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_Shadow_Demon_Purge_Slow::GetAttributes  (line 1202, @0x0000000002bff980, libserver.so)
int __fastcall CDOTA_Modifier_Shadow_Demon_Purge_Slow::GetAttributes(
        CDOTA_Modifier_Shadow_Demon_Purge_Slow *const this)
{
  return 2;
}


// CDOTA_Modifier_Shadow_Demon_Purge_Slow::CheckState  (line 1216, @0x0000000002bd6780, libserver.so)  // inlines: Enable
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter
void __fastcall CDOTA_Modifier_Shadow_Demon_Purge_Slow::CheckState(
        CDOTA_Modifier_Shadow_Demon_Purge_Slow *const this,
        CDOTABuffState *const buffState)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
  {
    buffState->m_nEnabledStateMask |= 0x10000000uLL;
    buffState->m_nDisabledStateMask &= ~0x10000000uLL;
  }
}


// CDOTA_Modifier_Shadow_Demon_Purge_Slow::OnCreated  (line 1229, @0x0000000002beb340, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "slow_rate"
void __fastcall CDOTA_Modifier_Shadow_Demon_Purge_Slow::OnCreated(
        CDOTA_Modifier_Shadow_Demon_Purge_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->slow_rate = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "slow_rate", -1, 0);
  else
    this->slow_rate = 0;
}


// CDOTA_Modifier_Shadow_Demon_Purge_Slow::OnDestroy  (line 1254, @0x0000000002bec5a0, libserver.so)  // inlines: DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, ApplyDamage, CDOTA_BaseNPC::UnitEmitSound
// strings: "modifier_shadow_demon_disruption", "purge_damage", "special_bonus_unique_shadow_demon_1", "Hero_ShadowDemon.DemonicPurge.Damage"
void __fastcall CDOTA_Modifier_Shadow_Demon_Purge_Slow::OnDestroy(CDOTA_Modifier_Shadow_Demon_Purge_Slow *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_Buff *ModifierByName; // r12
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v7; // r14
  CDOTA_BaseNPC *v8; // r13
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  float flDamage; // [rsp+Ch] [rbp-24h]

  Parent = CDOTA_Buff::GetParent(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_shadow_demon_disruption", 0);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    flDamage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "purge_damage", -1, 0);
  else
    flDamage = 0.0;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_shadow_demon_1", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    flDamage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1) + flDamage;
  v7 = CDOTA_Buff::GetAbility(this);
  v8 = CDOTA_Buff::GetParent(this);
  v9 = CDOTA_Buff::GetCaster(this);
  ApplyDamage(v9, v8, v7, flDamage, 2, ModifierByName != 0 ? 4 : 0);
  v10 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(v10, "Hero_ShadowDemon.DemonicPurge.Damage", 0.0, 0, 0);
}


// CDOTA_Modifier_Shadow_Demon_Purge_Slow::DeclareFunctions  (line 1283, @0x0000000002bd37d0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Shadow_Demon_Purge_Slow::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Shadow_Demon_Purge_Slow::DeclareFunctions(
        CDOTA_Modifier_Shadow_Demon_Purge_Slow *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Shadow_Demon_Purge_Slow::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Shadow_Demon_Purge_Slow::GetModifierMoveSpeedBonus_Percentage  (line 1290, @0x0000000002bd37f0, libserver.so)  // inlines: DOTAGameRules, GetGameTime
ModifierVariant_t __fastcall CDOTA_Modifier_Shadow_Demon_Purge_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Shadow_Demon_Purge_Slow *const this,
        const CModifierParams *const params)
{
  float v3; // xmm0_4
  float v4; // xmm3_4
  float v5; // xmm0_4
  float slow_rate; // xmm2_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  __m128 v9; // xmm0
  __m128i v10; // xmm0
  __m128 v11; // xmm0
  float flCurrentTime; // [rsp+Ch] [rbp-14h]
  float flCurrentTimea; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  flCurrentTime = (*(this->_vptr_CDOTA_Buff + 31))(this, params);
  (*(this->_vptr_CDOTA_Buff + 30))(this);
  v4 = 0.0;
  if ( g_pGameRules != 0 )
    v4 = *&g_pGameRules[18].m_szQuestName[20];
  flCurrentTimea = flCurrentTime - (v3 - v4);
  v5 = (*(this->_vptr_CDOTA_Buff + 31))(this);
  slow_rate = this->slow_rate;
  v7 = v5 / slow_rate;
  if ( v7 > flCurrentTimea )
  {
    v10 = 0xC2C80000;
  }
  else if ( (v7 + v7) > flCurrentTimea )
  {
    v11 = 0x42C80000u;
    v11.m128_f32[0] = 100.0 - (100.0 / slow_rate);
    v10 = _mm_xor_ps(v11, 0x80000000);
  }
  else
  {
    if ( (3.0 * v7) > flCurrentTimea )
    {
      v8 = 200.0;
    }
    else if ( (v7 * 4.0) > flCurrentTimea )
    {
      v8 = 300.0;
    }
    else
    {
      v8 = 400.0;
    }
    v9 = 0x42C80000u;
    v9.m128_f32[0] = 100.0 - (v8 / slow_rate);
    v10 = _mm_xor_ps(v9, 0x80000000);
  }
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v10) << 32) | 1;
  return result;
}


