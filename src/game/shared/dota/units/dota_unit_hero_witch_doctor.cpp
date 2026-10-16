// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_witch_doctor.cpp:36
class CDOTA_Unit_Hero_WitchDoctor : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_WitchDoctor(CDOTA_Unit_Hero_WitchDoctor &);
	CDOTA_Unit_Hero_WitchDoctor(CDOTA_Unit_Hero_WitchDoctor &);
	CDOTA_Unit_Hero_WitchDoctor();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual ~CDOTA_Unit_Hero_WitchDoctor();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_witch_doctor.cpp:45
class C_CDOTA_Unit_Hero_WitchDoctor_MapInstall {
	C_CDOTA_Unit_Hero_WitchDoctor_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_witch_doctor.cpp:66
class CDOTA_Ability_WitchDoctor_ParalyzingCask : public CDOTABaseAbility {
public:

private:

	int m_iBounces;  // +0x390
	int bounces;  // +0x394
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
	CDOTA_Ability_WitchDoctor_ParalyzingCask(CDOTA_Ability_WitchDoctor_ParalyzingCask &);
	CDOTA_Ability_WitchDoctor_ParalyzingCask(CDOTA_Ability_WitchDoctor_ParalyzingCask &);
	CDOTA_Ability_WitchDoctor_ParalyzingCask();
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
	virtual float GetAvoidRadius();
	virtual bool IsAvoidMagical();
	virtual float GetAvoidStrength(CDOTA_Bot *);
	virtual const char * GetStolenActivityModifier();
	virtual int GetConceptRecipientType();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_WitchDoctor_ParalyzingCask();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[290] OnProjectileHit_ExtraData
	// vtable[327] GetAvoidRadius
	// vtable[328] IsAvoidMagical
	// vtable[330] GetAvoidStrength
	// vtable[310] GetStolenActivityModifier
	// vtable[299] GetConceptRecipientType
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_witch_doctor.cpp:93
class C_CDOTA_Ability_WitchDoctor_ParalyzingCask_MapInstall {
	C_CDOTA_Ability_WitchDoctor_ParalyzingCask_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_witch_doctor.cpp:255
class CDOTA_Modifier_WitchDoctor_Cask_Thinker : public CDOTA_Buff {
public:

private:

	EHANDLE m_hTarget;  // +0xba8
	EHANDLE m_hAvoidTarget;  // +0xbac
	CDOTA_Modifier_WitchDoctor_Cask_Thinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_WitchDoctor_Cask_Thinker();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[11] IsHidden
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_witch_doctor.cpp:319
class CDOTA_Ability_WitchDoctor_VoodooRestoration : public CDOTABaseAbility {
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
	CDOTA_Ability_WitchDoctor_VoodooRestoration(CDOTA_Ability_WitchDoctor_VoodooRestoration &);
	CDOTA_Ability_WitchDoctor_VoodooRestoration(CDOTA_Ability_WitchDoctor_VoodooRestoration &);
	CDOTA_Ability_WitchDoctor_VoodooRestoration();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetStolenActivityModifier();
	virtual void OnToggle();
	virtual bool ProcsMagicStick();
	virtual ~CDOTA_Ability_WitchDoctor_VoodooRestoration();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[310] GetStolenActivityModifier
	// vtable[270] OnToggle
	// vtable[239] ProcsMagicStick
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_witch_doctor.cpp:341
class C_CDOTA_Ability_WitchDoctor_VoodooRestoration_MapInstall {
	C_CDOTA_Ability_WitchDoctor_VoodooRestoration_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_witch_doctor.cpp:394
class CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Aura : public CDOTA_Buff {
public:

private:

	CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Aura();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Aura();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[11] IsHidden
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_witch_doctor.cpp:447
class CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal : public CDOTA_Buff {
public:

private:

	int heal;  // +0xba8
	int mana_per_second;  // +0xbac
	float heal_interval;  // +0xbb0
	CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_witch_doctor.cpp:537
class CDOTA_Ability_WitchDoctor_Maledict : public CDOTABaseAbility {
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
	CDOTA_Ability_WitchDoctor_Maledict(CDOTA_Ability_WitchDoctor_Maledict &);
	CDOTA_Ability_WitchDoctor_Maledict(CDOTA_Ability_WitchDoctor_Maledict &);
	CDOTA_Ability_WitchDoctor_Maledict();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual const char * GetStolenActivityModifier();
	virtual bool ShouldSpeakAbilityConcept();
	virtual ~CDOTA_Ability_WitchDoctor_Maledict();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[310] GetStolenActivityModifier
	// vtable[333] ShouldSpeakAbilityConcept
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_witch_doctor.cpp:560
class C_CDOTA_Ability_WitchDoctor_Maledict_MapInstall {
	C_CDOTA_Ability_WitchDoctor_Maledict_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_witch_doctor.cpp:632
class CDOTA_Modifier_WitchDoctor_Maledict : public CDOTA_Buff {
public:

private:

	int m_iStartHealth;  // +0xba8
	int bonus_damage;  // +0xbac
	int bonus_damage_threshold;  // +0xbb0
	int ticks;  // +0xbb4
	int iCurrentTick;  // +0xbb8
	CDOTA_Modifier_WitchDoctor_Maledict();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_WitchDoctor_Maledict();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[14] IsPurgable
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_witch_doctor.cpp:741
class CDOTA_NPC_WitchDoctor_Ward : public CDOTA_BaseNPC_Additive {
	class NetworkVar_m_nTargetType {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	typedef CDOTA_NPC_WitchDoctor_Ward ThisClass;

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
	CDOTA_NPC_WitchDoctor_Ward(CDOTA_NPC_WitchDoctor_Ward &);
	CDOTA_NPC_WitchDoctor_Ward(CDOTA_NPC_WitchDoctor_Ward &);
	CDOTA_NPC_WitchDoctor_Ward();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool CanAcceptTargetToAttack(CDOTA_BaseNPC *);
	virtual bool AlwaysAutoAttack();
	virtual ~CDOTA_NPC_WitchDoctor_Ward();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[391] CanAcceptTargetToAttack
	// vtable[448] AlwaysAutoAttack
	// sizeof = 4512
};

// src/game/shared/dota/units/dota_unit_hero_witch_doctor.cpp:793
class C_CDOTA_NPC_WitchDoctor_Ward_MapInstall {
	C_CDOTA_NPC_WitchDoctor_Ward_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_witch_doctor.cpp:861
struct sBounceInfo {
private:

	int iAttackIndex;  // +0x0
	int iBounceCount;  // +0x4
	sBounceInfo();

	~sBounceInfo();
	sBounceInfo & operator=(const sBounceInfo &);

	// sizeof = 32
};

// src/game/shared/dota/units/dota_unit_hero_witch_doctor.cpp:872
class CDOTA_Ability_WitchDoctor_DeathWard : public CDOTABaseAbility {
public:

private:

	int m_iDamage;  // +0x390
	int m_iBounceRadius;  // +0x394
	int m_iBounces;  // +0x398
	int m_iProjectileSpeed;  // +0x39c
	EHANDLE m_hWard;  // +0x3a0
	float m_fWardExpireTime;  // +0x3a4
	int m_nFXIndex;  // +0x3a8
	int m_iAttackIndex;  // +0x3ac
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
	CDOTA_Ability_WitchDoctor_DeathWard(CDOTA_Ability_WitchDoctor_DeathWard &);
	CDOTA_Ability_WitchDoctor_DeathWard(CDOTA_Ability_WitchDoctor_DeathWard &);
	CDOTA_Ability_WitchDoctor_DeathWard();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual bool OnAbilityPhaseStart();
	virtual void OnAbilityPhaseInterrupted();
	virtual void OnSpellStart();
	virtual void OnChannelFinish(bool);
	virtual void Think();
	virtual const char * GetStolenActivityModifier();
	virtual bool OnProjectileHit_ExtraData(EHANDLE, const Vector &, KeyValues *);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_WitchDoctor_DeathWard();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[266] OnSpellStart
	// vtable[267] OnChannelFinish
	// vtable[117] Think
	// vtable[310] GetStolenActivityModifier
	// vtable[290] OnProjectileHit_ExtraData
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 968
};

// src/game/shared/dota/units/dota_unit_hero_witch_doctor.cpp:1170
class CDOTA_Modifier_WitchDoctor_DeathWard : public CDOTA_Buff {
public:

private:

	int m_iBounces;  // +0xba8
	int m_iBounceRadius;  // +0xbac
	CDOTA_Modifier_WitchDoctor_DeathWard();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	virtual bool RemoveOnDeath();
	ModifierVariant_t GetModifierAttackRangeBonus(const CModifierParams &);
	virtual int GetNumAvoidLocations();
	virtual Vector GetAvoidLocation(int);
	virtual float AvoidStrength(CDOTA_Bot *);
	virtual float GetAvoidRadius(int);
	virtual bool IsAvoidMagical();
	virtual bool IsPersistentAvoidance();
	virtual ~CDOTA_Modifier_WitchDoctor_DeathWard();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// vtable[54] RemoveOnDeath
	// vtable[74] GetNumAvoidLocations
	// vtable[75] GetAvoidLocation
	// vtable[77] AvoidStrength
	// vtable[78] GetAvoidRadius
	// vtable[79] IsAvoidMagical
	// vtable[81] IsPersistentAvoidance
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_WitchDoctor::~CDOTA_Unit_Hero_WitchDoctor  (line 36, @0x0000000002b1db30, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_WitchDoctor::~CDOTA_Unit_Hero_WitchDoctor(CDOTA_Unit_Hero_WitchDoctor *const this)
{
  this->_vptr_IHandleEntity = &off_4456ED0;
  this->_vptr_INextBotEventResponder = &off_4457EB0;
  this->_vptr_CObstructionObject = &off_44581E0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_WitchDoctor::~CDOTA_Unit_Hero_WitchDoctor  (line 36, @0x0000000002b1db70, libserver.so)  // inlines: ~CDOTA_Unit_Hero_WitchDoctor
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_WitchDoctor::~CDOTA_Unit_Hero_WitchDoctor(CDOTA_Unit_Hero_WitchDoctor *const this)
{
  this->_vptr_IHandleEntity = &off_4456ED0;
  this->_vptr_INextBotEventResponder = &off_4457EB0;
  this->_vptr_CObstructionObject = &off_44581E0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_WitchDoctor::Schema_DynamicBinding  (line 38, @0x0000000002b15340, libserver.so)
// globals: CDOTA_Unit_Hero_WitchDoctor::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_WitchDoctor::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_WitchDoctor *const this)
{
  return CDOTA_Unit_Hero_WitchDoctor::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_WitchDoctor::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 38, @0x0000000002b15370, libserver.so)
// globals: CDOTA_Unit_Hero_WitchDoctor::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_WitchDoctor::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_WitchDoctor::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_WitchDoctor::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_WitchDoctor::CEntityInstanceEntityClass::DestructInstance  (line 38, @0x0000000002b15380, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_WitchDoctor>
void __fastcall CDOTA_Unit_Hero_WitchDoctor::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_WitchDoctor::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_WitchDoctor::CEntityInstanceEntityClass::FreeInstance  (line 38, @0x0000000002b153a0, libserver.so)
void __fastcall CDOTA_Unit_Hero_WitchDoctor::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_WitchDoctor::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_WitchDoctor::CEntityInstanceEntityClass::CanAllocate  (line 38, @0x0000000002b153c0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_WitchDoctor::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_WitchDoctor::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_WitchDoctor::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 38, @0x0000000002b153d0, libserver.so)
// globals: CDOTA_Unit_Hero_WitchDoctor::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_WitchDoctor::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_WitchDoctor::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_WitchDoctor::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_WitchDoctor::CEntityInstanceEntityClass::AllocateInstance  (line 38, @0x0000000002b18e70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_WitchDoctor::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_WitchDoctor::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_WitchDoctor::CEntityInstanceEntityClass::ConstructInstance  (line 38, @0x0000000002b1b330, libserver.so)  // inlines: CDOTA_Unit_Hero_WitchDoctor, Construct<CDOTA_Unit_Hero_WitchDoctor>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_WitchDoctor::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_WitchDoctor::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_4456ED0;
    *(p + 236) = &off_4457EB0;
    *(p + 257) = &off_44581E0;
  }
  return p;
}


// CDOTA_Unit_Hero_WitchDoctor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 38, @0x0000000002b227e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_WitchDoctor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_WitchDoctor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_WitchDoctor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 38, @0x0000000002b229c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_WitchDoctor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_WitchDoctor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_WitchDoctor::GetEntityClassInternal  (line 38, @0x0000000002b2a590, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "npc_dota_hero_witch_doctor", "CDOTA_Unit_Hero_WitchDoctor"
// globals: `guard variable for'CDOTA_Unit_Hero_WitchDoctor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WitchDoctorClass, CDOTA_Unit_Hero_WitchDoctor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WitchDoctorClass, __dso_handle, CDOTA_Unit_Hero_WitchDoctor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_WitchDoctor::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WitchDoctorClassInfo, CDOTA_Unit_Hero_WitchDoctor::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WitchDoctorClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_WitchDoctor::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_WitchDoctor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WitchDoctorClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_WitchDoctor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WitchDoctorClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_WitchDoctor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WitchDoctorClass);
    CDOTA_Unit_Hero_WitchDoctor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WitchDoctorClass._vptr_CEntityClass = off_4456E50;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_WitchDoctor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WitchDoctorClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_WitchDoctor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_WitchDoctor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WitchDoctorClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_WitchDoctorClass != 0 )
    return &CDOTA_Unit_Hero_WitchDoctor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WitchDoctorClass;
  if ( `guard variable for'CDOTA_Unit_Hero_WitchDoctor::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WitchDoctorClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_WitchDoctor::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WitchDoctorClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_WitchDoctor::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WitchDoctorClassInfo,
      "CDOTA_Unit_Hero_WitchDoctor",
      "npc_dota_hero_witch_doctor",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_WitchDoctor::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WitchDoctorClassInfo);
  }
  CDOTA_Unit_Hero_WitchDoctor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WitchDoctorClass.m_pClassInfo = &CDOTA_Unit_Hero_WitchDoctor::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WitchDoctorClassInfo;
  CDOTA_Unit_Hero_WitchDoctor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WitchDoctorClass.m_pBaseClassInfo = CDOTA_Unit_Hero_WitchDoctor::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WitchDoctorClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_WitchDoctorClass = &CDOTA_Unit_Hero_WitchDoctor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WitchDoctorClass;
  CDOTA_Unit_Hero_WitchDoctor::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WitchDoctorClassInfo.m_pClass = &CDOTA_Unit_Hero_WitchDoctor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WitchDoctorClass;
  CDOTA_Unit_Hero_WitchDoctor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WitchDoctorClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_WitchDoctorClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_WitchDoctor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WitchDoctorClass;
}


// CDOTA_Unit_Hero_WitchDoctor::YouForgotToImplementOrDeclareServerClass  (line 45, @0x0000000002ae79b0, libserver.so)
int __fastcall CDOTA_Unit_Hero_WitchDoctor::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_WitchDoctor *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_WitchDoctor::GetServerClass  (line 45, @0x0000000002af2cb0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_WitchDoctor::GetServerClass(CDOTA_Unit_Hero_WitchDoctor *const this)
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


// CDOTA_Unit_Hero_WitchDoctor::Spawn  (line 54, @0x0000000002ae87f0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Spawn
void __fastcall CDOTA_Unit_Hero_WitchDoctor::Spawn(
        CDOTA_Unit_Hero_WitchDoctor *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTA_BaseNPC_Hero::Spawn(this, pKeyValues);
}


// CDOTA_Ability_WitchDoctor_ParalyzingCask::~CDOTA_Ability_WitchDoctor_ParalyzingCask  (line 66, @0x0000000002b1c190, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_WitchDoctor_ParalyzingCask::~CDOTA_Ability_WitchDoctor_ParalyzingCask(
        CDOTA_Ability_WitchDoctor_ParalyzingCask *const this)
{
  this->_vptr_IHandleEntity = &off_44582B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_WitchDoctor_ParalyzingCask::~CDOTA_Ability_WitchDoctor_ParalyzingCask  (line 66, @0x0000000002b1c1b0, libserver.so)  // inlines: ~CDOTA_Ability_WitchDoctor_ParalyzingCask
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_WitchDoctor_ParalyzingCask::~CDOTA_Ability_WitchDoctor_ParalyzingCask(
        CDOTA_Ability_WitchDoctor_ParalyzingCask *const this)
{
  this->_vptr_IHandleEntity = &off_44582B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_WitchDoctor_ParalyzingCask::Schema_DynamicBinding  (line 68, @0x0000000002b153e0, libserver.so)
// globals: CDOTA_Ability_WitchDoctor_ParalyzingCask::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_WitchDoctor_ParalyzingCask::Schema_DynamicBinding(
        const CDOTA_Ability_WitchDoctor_ParalyzingCask *const this)
{
  return CDOTA_Ability_WitchDoctor_ParalyzingCask::s_pSchemaBinding;
}


// CDOTA_Ability_WitchDoctor_ParalyzingCask::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 68, @0x0000000002b153f0, libserver.so)
// globals: CDOTA_Ability_WitchDoctor_ParalyzingCask::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_WitchDoctor_ParalyzingCask::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_WitchDoctor_ParalyzingCask::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_WitchDoctor_ParalyzingCask::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_WitchDoctor_ParalyzingCask::CEntityInstanceEntityClass::DestructInstance  (line 68, @0x0000000002b15400, libserver.so)  // inlines: Destruct<CDOTA_Ability_WitchDoctor_ParalyzingCask>
void __fastcall CDOTA_Ability_WitchDoctor_ParalyzingCask::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_WitchDoctor_ParalyzingCask::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_WitchDoctor_ParalyzingCask::CEntityInstanceEntityClass::FreeInstance  (line 68, @0x0000000002b15420, libserver.so)
void __fastcall CDOTA_Ability_WitchDoctor_ParalyzingCask::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_WitchDoctor_ParalyzingCask::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_WitchDoctor_ParalyzingCask::CEntityInstanceEntityClass::CanAllocate  (line 68, @0x0000000002b15440, libserver.so)
bool __fastcall CDOTA_Ability_WitchDoctor_ParalyzingCask::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_WitchDoctor_ParalyzingCask::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_WitchDoctor_ParalyzingCask::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 68, @0x0000000002b15450, libserver.so)
// globals: CDOTA_Ability_WitchDoctor_ParalyzingCask::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_WitchDoctor_ParalyzingCask::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_WitchDoctor_ParalyzingCask::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_WitchDoctor_ParalyzingCask::s_pSchemaBinding;
}


// CDOTA_Ability_WitchDoctor_ParalyzingCask::CEntityInstanceEntityClass::AllocateInstance  (line 68, @0x0000000002b18eb0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_WitchDoctor_ParalyzingCask::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_WitchDoctor_ParalyzingCask::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_WitchDoctor_ParalyzingCask::CEntityInstanceEntityClass::ConstructInstance  (line 68, @0x0000000002b1b6a0, libserver.so)  // inlines: CDOTA_Ability_WitchDoctor_ParalyzingCask, Construct<CDOTA_Ability_WitchDoctor_ParalyzingCask>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_WitchDoctor_ParalyzingCask::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_WitchDoctor_ParalyzingCask::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44582B0;
  }
  return p;
}


// CDOTA_Ability_WitchDoctor_ParalyzingCask::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 68, @0x0000000002b21f00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_WitchDoctor_ParalyzingCask::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_WitchDoctor_ParalyzingCask::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_WitchDoctor_ParalyzingCask::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 68, @0x0000000002b21f20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_WitchDoctor_ParalyzingCask::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_WitchDoctor_ParalyzingCask::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_WitchDoctor_ParalyzingCask::GetEntityClassInternal  (line 68, @0x0000000002b2a6e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "witch_doctor_paralyzing_cask", "CDOTA_Ability_WitchDoctor_ParalyzingCask"
// globals: `guard variable for'CDOTA_Ability_WitchDoctor_ParalyzingCask::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_ParalyzingCaskClass, CDOTA_Ability_WitchDoctor_ParalyzingCask::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_ParalyzingCaskClass, __dso_handle, CDOTA_Ability_WitchDoctor_ParalyzingCask::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_WitchDoctor_ParalyzingCask::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_WitchDoctor_ParalyzingCaskClassInfo, CDOTA_Ability_WitchDoctor_ParalyzingCask::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_WitchDoctor_ParalyzingCaskClassInfo
CEntityClass *__cdecl CDOTA_Ability_WitchDoctor_ParalyzingCask::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_WitchDoctor_ParalyzingCask::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_ParalyzingCaskClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_WitchDoctor_ParalyzingCask::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_ParalyzingCaskClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_WitchDoctor_ParalyzingCask::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_ParalyzingCaskClass);
    CDOTA_Ability_WitchDoctor_ParalyzingCask::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_ParalyzingCaskClass._vptr_CEntityClass = off_4458230;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_WitchDoctor_ParalyzingCask::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_ParalyzingCaskClass);
    __cxa_atexit(
      CDOTA_Ability_WitchDoctor_ParalyzingCask::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_WitchDoctor_ParalyzingCask::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_ParalyzingCaskClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_WitchDoctor_ParalyzingCaskClass != 0 )
    return &CDOTA_Ability_WitchDoctor_ParalyzingCask::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_ParalyzingCaskClass;
  if ( `guard variable for'CDOTA_Ability_WitchDoctor_ParalyzingCask::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_WitchDoctor_ParalyzingCaskClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_WitchDoctor_ParalyzingCask::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_WitchDoctor_ParalyzingCaskClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_WitchDoctor_ParalyzingCask::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_WitchDoctor_ParalyzingCaskClassInfo,
      "CDOTA_Ability_WitchDoctor_ParalyzingCask",
      "witch_doctor_paralyzing_cask",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_WitchDoctor_ParalyzingCask::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_WitchDoctor_ParalyzingCaskClassInfo);
  }
  CDOTA_Ability_WitchDoctor_ParalyzingCask::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_ParalyzingCaskClass.m_pClassInfo = &CDOTA_Ability_WitchDoctor_ParalyzingCask::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_WitchDoctor_ParalyzingCaskClassInfo;
  CDOTA_Ability_WitchDoctor_ParalyzingCask::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_ParalyzingCaskClass.m_pBaseClassInfo = CDOTA_Ability_WitchDoctor_ParalyzingCask::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_WitchDoctor_ParalyzingCaskClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_WitchDoctor_ParalyzingCaskClass = &CDOTA_Ability_WitchDoctor_ParalyzingCask::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_ParalyzingCaskClass;
  CDOTA_Ability_WitchDoctor_ParalyzingCask::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_WitchDoctor_ParalyzingCaskClassInfo.m_pClass = &CDOTA_Ability_WitchDoctor_ParalyzingCask::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_ParalyzingCaskClass;
  CDOTA_Ability_WitchDoctor_ParalyzingCask::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_ParalyzingCaskClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_WitchDoctor_ParalyzingCaskClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_WitchDoctor_ParalyzingCask::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_ParalyzingCaskClass;
}


// CDOTA_Ability_WitchDoctor_ParalyzingCask::GetAvoidRadius  (line 76, @0x0000000002b31d50, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bounce_range"
float __fastcall CDOTA_Ability_WitchDoctor_ParalyzingCask::GetAvoidRadius(
        CDOTA_Ability_WitchDoctor_ParalyzingCask *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bounce_range", -1, 0) + 150.0;
}


// CDOTA_Ability_WitchDoctor_ParalyzingCask::IsAvoidMagical  (line 77, @0x0000000002b15460, libserver.so)
bool __fastcall CDOTA_Ability_WitchDoctor_ParalyzingCask::IsAvoidMagical(
        CDOTA_Ability_WitchDoctor_ParalyzingCask *const this)
{
  return 1;
}


// CDOTA_Ability_WitchDoctor_ParalyzingCask::GetAvoidStrength  (line 78, @0x0000000002b22c00, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, RemapValClamped, ToDOTABaseNPC, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHealth
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Ability_WitchDoctor_ParalyzingCask::GetAvoidStrength(
        CDOTA_Ability_WitchDoctor_ParalyzingCask *const this,
        CDOTA_Bot *pBot)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  const CBaseEntity *m_pInstance; // rdi
  float v6; // xmm1_4
  float result; // xmm0_4

  m_Index = pBot->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pBot->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[pBot->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v6 = (CBaseEntity::GetHealth(m_pInstance) - 400.0) / 1100.0;
  if ( v6 < 0.0 )
    return 0.80000001;
  result = 0.60000002;
  if ( v6 <= 1.0 )
    return (v6 * -0.19999999) + 0.80000001;
  return result;
}


// CDOTA_Ability_WitchDoctor_ParalyzingCask::GetStolenActivityModifier  (line 81, @0x0000000002b15470, libserver.so)
const char *__fastcall CDOTA_Ability_WitchDoctor_ParalyzingCask::GetStolenActivityModifier(
        CDOTA_Ability_WitchDoctor_ParalyzingCask *const this)
{
  return "cask";
}


// CDOTA_Ability_WitchDoctor_ParalyzingCask::GetConceptRecipientType  (line 83, @0x0000000002b15480, libserver.so)
int __fastcall CDOTA_Ability_WitchDoctor_ParalyzingCask::GetConceptRecipientType(
        CDOTA_Ability_WitchDoctor_ParalyzingCask *const this)
{
  return 4;
}


// CDOTA_Ability_WitchDoctor_ParalyzingCask::YouForgotToImplementOrDeclareServerClass  (line 93, @0x0000000002ae79c0, libserver.so)
int __fastcall CDOTA_Ability_WitchDoctor_ParalyzingCask::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_WitchDoctor_ParalyzingCask *const this)
{
  return 0;
}


// CDOTA_Ability_WitchDoctor_ParalyzingCask::GetServerClass  (line 93, @0x0000000002af2eb0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_WitchDoctor_ParalyzingCask::GetServerClass(
        CDOTA_Ability_WitchDoctor_ParalyzingCask *const this)
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


// CDOTA_Ability_WitchDoctor_ParalyzingCask::OnSpellStart  (line 102, @0x0000000002b06710, libserver.so)  // inlines: GetLevelSpecialValueFor<int>, GetTeamNumber
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::KeyValues, CDOTABaseAbility::GetCursorTarget, KeyValues::SetPtr, CDOTABaseAbility::GetCaster, KeyValues::SetFloat, GetProjectileAttachmentName, CBaseAnimating::GetAttachment, Thinker_Create, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, __stack_chk_fail (13 total)
// strings: "modifier_witchdoctor_cask_thinker", "avoid_target", "Hero_WitchDoctor.Paralyzing_Cask_Cast"
void __fastcall CDOTA_Ability_WitchDoctor_ParalyzingCask::OnSpellStart(
        CDOTA_Ability_WitchDoctor_ParalyzingCask *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *Caster; // rax
  float v4; // xmm1_4
  const char *ProjectileAttachmentName; // r13
  CDOTA_BaseNPC *v6; // rax
  const CBaseAnimating *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  Vector vecOrigin; // [rsp+10h] [rbp-50h] BYREF
  KeyValues kv; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-28h]

  this->m_iBounces = 0;
  v12 = __readfsqword(0x28u);
  this->bounces = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bounces", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_witchdoctor_cask_thinker");
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  KeyValues::SetPtr(&kv, "target", CursorTarget);
  Caster = CDOTABaseAbility::GetCaster(this);
  KeyValues::SetPtr(&kv, "avoid_target", Caster);
  KeyValues::SetFloat(&kv, "delay", v4);
  ProjectileAttachmentName = GetProjectileAttachmentName(3);
  v6 = CDOTABaseAbility::GetCaster(this);
  v7 = (*(v6->_vptr_IHandleEntity + 43))(v6);
  CBaseAnimating::GetAttachment(v7, ProjectileAttachmentName, &vecOrigin);
  LODWORD(ProjectileAttachmentName) = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  v8 = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(v8, this, "modifier_witchdoctor_cask_thinker", &kv, vecOrigin, ProjectileAttachmentName, 0, 0, 0);
  v9 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v9, "Hero_WitchDoctor.Paralyzing_Cask_Cast", 0.0, 0, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_WitchDoctor_ParalyzingCask::OnProjectileHit_ExtraData  (line 123, @0x0000000002b0c580, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, InState, IndexToIdentity, IsConsideredHero, IsInvulnerable, IsValid, LookupEntity, Purge, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: __stack_chk_fail, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::FindAndRemove, RandomInt, CEntityHandle::operator CEntityInstance*, KeyValues::KeyValues, KeyValues::SetPtr, KeyValues::SetFloat (26 total)
// strings: "bounce_delay", "bounce_range", "modifier_witchdoctor_cask_thinker", "modifier_stun", "modifier_stunned", "Hero_WitchDoctor.Paralyzing_Cask_Bounce"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
__int64 __fastcall CDOTA_Ability_WitchDoctor_ParalyzingCask::OnProjectileHit_ExtraData(
        CDOTA_Ability_WitchDoctor_ParalyzingCask *const this,
        _WORD *hTarget,
        const Vector *const vLocation,
        KeyValues *pExtraData)
{
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC_Hero *m_pInstance; // r12
  uint32 m_iUnitType; // eax
  unsigned __int64 m_Value; // rax
  __m128i v12; // xmm3
  float v13; // r13d
  CDOTA_BaseNPC *v14; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v16; // cx
  int v17; // eax
  CEntityInstance *v18; // rax
  float v19; // xmm1_4
  const CBaseAnimating *v20; // rax
  int v21; // r12d
  CDOTA_BaseNPC *v22; // rax
  float v23; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC_Hero *v26; // rdi
  int LevelSpecialValue; // eax
  __m128i v28; // xmm2
  float v29; // r14d
  CDOTA_BaseNPC *v30; // rax
  CDOTA_BaseNPC *v31; // rax
  const char *ReplacementSound; // rax
  CDOTA_BaseNPC *pNewTarget; // [rsp+20h] [rbp-90h]
  const char *bounce_delay; // [rsp+28h] [rbp-88h]
  Vector vecOrigin; // [rsp+30h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v38; // [rsp+78h] [rbp-38h]

  v38 = __readfsqword(0x28u);
  if ( (*hTarget + 2) > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[*hTarget & 0x1FF];
      if ( v7 != 0 && *hTarget == v7->m_EHandle.m_Index )
      {
        m_pInstance = v7->m_pInstance;
        if ( v7->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          CBaseEntity::GetAbsOrigin(v7->m_pInstance);
          CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "creep_duration", -1, 0);
          if ( !m_pInstance->m_bIsIllusion.m_Value )
          {
            m_iUnitType = m_pInstance->m_iUnitType;
            if ( (m_iUnitType & 1) != 0 || (m_iUnitType & 0x802) != 0 )
              CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "hero_duration", -1, 0);
          }
          if ( !m_pInstance->m_bIsWaitingToSpawn.m_Value )
          {
            m_Value = m_pInstance->m_nUnitState64.m_Value;
            if ( (m_Value & 0x100) == 0
              && (m_Value & 0x200) == 0
              && !CDOTA_BaseNPC::TriggerSpellAbsorb(m_pInstance, this, this->m_iBounces == 0) )
            {
              KeyValues::KeyValues(&kv, "modifier_stun");
              KeyValues::SetFloat(&kv, "duration", v23);
              Caster = CDOTABaseAbility::GetCaster(this);
              CDOTA_BaseNPC::AddNewModifier(m_pInstance, Caster, this, "modifier_stunned", &kv, 0);
              if ( (m_pInstance->m_iUnitType & 1) != 0 && !m_pInstance->m_bIsIllusion.m_Value )
              {
                v25 = CDOTABaseAbility::GetCaster(this);
                if ( v25 != 0 && (v25->m_iUnitType & 1) != 0 )
                  v26 = v25;
                else
                  v26 = 0;
                EconEntity_OnOwnerKillEaterEvent(
                  v26,
                  m_pInstance,
                  kill_eater_event_t::kKillEaterEventType_WitchDoctor_CaskStuns,
                  1,
                  INVALID_ITEM_DEF_INDEX);
              }
              LevelSpecialValue = (*(this->_vptr_IHandleEntity + 247))(this);
              if ( (m_pInstance->m_iUnitType & 3) != 0 )
                LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "hero_damage", -1, 0);
              *v28.m128i_i32 = LevelSpecialValue;
              v29 = COERCE_FLOAT(_mm_cvtsi128_si32(v28));
              v30 = CDOTABaseAbility::GetCaster(this);
              ApplyDamage(v30, m_pInstance, this, v29, 2, 0);
              v31 = CDOTABaseAbility::GetCaster(this);
              ReplacementSound = CDOTA_BaseNPC::FindReplacementSound(v31, "Hero_WitchDoctor.Paralyzing_Cask_Bounce");
              CDOTA_BaseNPC::UnitEmitSound(m_pInstance, ReplacementSound, 0.0, 0, 0);
              KeyValues::~KeyValues(&kv);
            }
          }
          ++this->m_iBounces;
          CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "bounce_delay", -1, 0);
          if ( this->m_iBounces < this->bounces )
          {
            entities.m_Size = 0;
            *v12.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bounce_range", -1, 0);
            entities.m_Memory.m_pMemory = 0;
            entities.m_Memory.m_nAllocationCount = 0;
            entities.m_Memory.m_nGrowSize = 0;
            v13 = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
            v14 = CDOTABaseAbility::GetCaster(this);
            FindUnitsInRadius(v14->m_iTeamNum.m_Value, vLocation, m_pInstance, v13, &entities, 2, 3, 272, 0, 0);
            vecOrigin.x = NAN;
            m_pEntity = m_pInstance->m_pEntity;
            if ( m_pEntity != 0 )
            {
              v16 = 0x7FFF;
              if ( m_pEntity->m_EHandle.m_Index != -1 )
                v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
              LODWORD(vecOrigin.x) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                   | v16 & 0x7FFF;
            }
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::FindAndRemove(
              &entities,
              &vecOrigin);
            if ( entities.m_Size > 0 )
            {
              v17 = RandomInt(0, (entities.m_Size - 1));
              v18 = CEntityHandle::operator CEntityInstance *(&entities.m_Memory.m_pMemory[v17]);
              pNewTarget = v18;
              if ( v18 != 0 && BYTE3(v18[7]._vptr_IHandleEntity) != 0 )
              {
                KeyValues::KeyValues(&kv, "modifier_witchdoctor_cask_thinker");
                KeyValues::SetPtr(&kv, "target", pNewTarget);
                KeyValues::SetFloat(&kv, "delay", v19);
                bounce_delay = GetProjectileAttachmentName(3);
                v20 = (*(m_pInstance->_vptr_IHandleEntity + 43))(m_pInstance);
                CBaseAnimating::GetAttachment(v20, bounce_delay, &vecOrigin);
                v21 = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
                v22 = CDOTABaseAbility::GetCaster(this);
                Thinker_Create(v22, this, "modifier_witchdoctor_cask_thinker", &kv, vecOrigin, v21, 0, 0, 0);
                KeyValues::~KeyValues(&kv);
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
      }
    }
  }
  return 1;
}


// CDOTA_Ability_WitchDoctor_ParalyzingCask::GetAbilityDamageToTargetOverInterval  (line 222, @0x0000000002b08d90, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, __cxa_guard_acquire, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::GetCaster, CDOTA_Bot::GetNearbyCreeps, CDOTA_Bot::GetNearbyHeroes, CDOTA_BaseNPC::GetArmorReductionForDamageType, __cxa_guard_release, __cxa_atexit
// strings: "bounce_range"
// globals: `guard variable for'CDOTA_Ability_WitchDoctor_ParalyzingCask::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities, CDOTA_Ability_WitchDoctor_ParalyzingCask::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities, __dso_handle, CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector()
__int64 __fastcall CDOTA_Ability_WitchDoctor_ParalyzingCask::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_WitchDoctor_ParalyzingCask *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r13d
  float v8; // xmm3_4
  int v9; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v11; // rax
  int v12; // eax
  int v13; // ebx
  float v14; // [rsp-2Ch] [rbp-2Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bounce_range", -1, 0);
    if ( `guard variable for'CDOTA_Ability_WitchDoctor_ParalyzingCask::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_WitchDoctor_ParalyzingCask::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities) != 0 )
    {
      CDOTA_Ability_WitchDoctor_ParalyzingCask::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Size = 0;
      CDOTA_Ability_WitchDoctor_ParalyzingCask::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Memory.m_pMemory = 0;
      CDOTA_Ability_WitchDoctor_ParalyzingCask::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Memory.m_nAllocationCount = 0;
      CDOTA_Ability_WitchDoctor_ParalyzingCask::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Memory.m_nGrowSize = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_Ability_WitchDoctor_ParalyzingCask::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities);
      __cxa_atexit(
        CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector,
        &CDOTA_Ability_WitchDoctor_ParalyzingCask::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities,
        &_dso_handle);
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&CDOTA_Ability_WitchDoctor_ParalyzingCask::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities);
    v8 = LevelSpecialValue;
    v9 = 1;
    v14 = v8;
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_Bot::GetNearbyCreeps(
      Caster->m_pBot,
      DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
      &CDOTA_Ability_WitchDoctor_ParalyzingCask::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities,
      v14);
    v11 = CDOTABaseAbility::GetCaster(this);
    CDOTA_Bot::GetNearbyHeroes(
      v11->m_pBot,
      DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
      &CDOTA_Ability_WitchDoctor_ParalyzingCask::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities,
      v14);
    v12 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bounces", -1, 0);
    if ( CDOTA_Ability_WitchDoctor_ParalyzingCask::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Size > 1 )
      v9 = v12
         / CDOTA_Ability_WitchDoctor_ParalyzingCask::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Size;
    v13 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "hero_damage", -1, 1);
    return ((v13 * v9) * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Ability_WitchDoctor_ParalyzingCask::GetStunDuration  (line 247, @0x0000000002b03d50, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_WitchDoctor_ParalyzingCask::GetStunDuration(
        CDOTA_Ability_WitchDoctor_ParalyzingCask *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_duration", -1, 1);
}


// CDOTA_Modifier_WitchDoctor_Cask_Thinker::~CDOTA_Modifier_WitchDoctor_Cask_Thinker  (line 255, @0x0000000002b1ab50, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_WitchDoctor_Cask_Thinker::~CDOTA_Modifier_WitchDoctor_Cask_Thinker(
        CDOTA_Modifier_WitchDoctor_Cask_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4458D70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_WitchDoctor_Cask_Thinker::~CDOTA_Modifier_WitchDoctor_Cask_Thinker  (line 255, @0x0000000002b1ab70, libserver.so)  // inlines: ~CDOTA_Modifier_WitchDoctor_Cask_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_WitchDoctor_Cask_Thinker::~CDOTA_Modifier_WitchDoctor_Cask_Thinker(
        CDOTA_Modifier_WitchDoctor_Cask_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4458D70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_WitchDoctor_Cask_Thinker::IsHidden  (line 263, @0x0000000002b15490, libserver.so)
bool __fastcall CDOTA_Modifier_WitchDoctor_Cask_Thinker::IsHidden(CDOTA_Modifier_WitchDoctor_Cask_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_WitchDoctor_Cask_Thinker::OnCreated  (line 275, @0x0000000002ae8ff0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// calls: KeyValues::GetPtr, KeyValues::GetFloat, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_WitchDoctor_Cask_Thinker::OnCreated(
        CDOTA_Modifier_WitchDoctor_Cask_Thinker *const this,
        KeyValues *pKV)
{
  _QWORD *Ptr; // rax
  float v5; // xmm1_4
  __int64 v6; // rdx
  int v7; // eax
  __int16 v8; // cx
  float Float; // xmm0_4
  float v10; // xmm1_4

  Ptr = KeyValues::GetPtr(pKV, "target", 0);
  if ( Ptr != 0 && (v6 = Ptr[1]) != 0 )
  {
    v7 = (*(v6 + 16) >> 15) - (*(v6 + 48) & 1);
    if ( *(v6 + 16) == -1 )
      v8 = 0x7FFF;
    else
      v8 = *(v6 + 16) & 0x7FFF;
    LOWORD(this->m_hTarget.m_Index) = v8 | this->m_hTarget.m_Index & 0x8000;
    this->m_hTarget.m_Index = (v7 << 15) | this->m_hTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hTarget.m_Index = -1;
  }
  Float = KeyValues::GetFloat(pKV, "delay", v5);
  CDOTA_Buff::StartIntervalThink(this, Float, v10);
}


// CDOTA_Modifier_WitchDoctor_Cask_Thinker::OnIntervalThink  (line 285, @0x0000000002b0c1b0, libserver.so)  // inlines: CEntityHandle, CHandle, Color, DotaRetrieveAbilityValue<int>, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, sTrackingProjectileCreateInfo
// calls: CDOTA_Buff::GetParent, UTIL_Remove, __stack_chk_fail, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, GetParticleManager, CDOTA_Buff::GetCaster, CDOTA_ParticleManager::GetParticleReplacement, CBaseEntity::GetAbsOrigin, CDOTA_ProjectileManager::CreateTrackingProjectile
// strings: "particles/units/heroes/hero_witchdoctor/witchdoctor_cask.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_WitchDoctor_Cask_Thinker::OnIntervalThink(
        CDOTA_Modifier_WitchDoctor_Cask_Thinker *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *v5; // rax
  CEntityInstance *m_pInstance; // r13
  CDOTABaseAbility *Ability; // rdi
  int LevelSpecialValue; // r12d
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *Parent; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v13; // cx
  CDOTA_BaseNPC *v14; // rax
  sTrackingProjectileCreateInfo info; // [rsp+0h] [rbp-90h] BYREF
  unsigned __int64 v16; // [rsp+68h] [rbp-28h]

  v16 = __readfsqword(0x28u);
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v4 = &v3[this->m_hTarget.m_Index & 0x1FF]) != 0
    && m_Index == v4->m_EHandle.m_Index
    && (m_pInstance = v4->m_pInstance, v4->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    if ( Ability != 0 )
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "speed", -1, 0);
    else
      LevelSpecialValue = 0;
    info.hSource.m_Index = -1;
    info.hTarget.m_Index = -1;
    info.colorGemColor = 0;
    memset(&info, 0, 28);
    info.vSourceLoc.x = vec3_origin.x;
    info.vSourceLoc.y = vec3_origin.y;
    z = vec3_origin.z;
    info.iSourceAttachment = 1;
    info.vSourceLoc.z = z;
    info.bProvidesVision = 0;
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
    GetParticleManager();
    Caster = CDOTA_Buff::GetCaster(this);
    info.pszEffectName = CDOTA_ParticleManager::GetParticleReplacement(
                           "particles/units/heroes/hero_witchdoctor/witchdoctor_cask.vpcf",
                           Caster);
    info.iMoveSpeed = LevelSpecialValue;
    info.pAbility = CDOTA_Buff::GetAbility(this);
    Parent = CDOTA_Buff::GetParent(this);
    info.vSourceLoc = *CBaseEntity::GetAbsOrigin(Parent);
    m_pEntity = m_pInstance->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v13 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      info.hTarget.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v13 & 0x7FFF;
    }
    else
    {
      info.hTarget.m_Index = -1;
    }
    info.bDodgeable = 0;
    CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
    v14 = CDOTA_Buff::GetParent(this);
    UTIL_Remove(v14);
  }
  else
  {
    v5 = CDOTA_Buff::GetParent(this);
    UTIL_Remove(v5);
  }
}


// CDOTA_Ability_WitchDoctor_VoodooRestoration::~CDOTA_Ability_WitchDoctor_VoodooRestoration  (line 319, @0x0000000002b1c1e0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_WitchDoctor_VoodooRestoration::~CDOTA_Ability_WitchDoctor_VoodooRestoration(
        CDOTA_Ability_WitchDoctor_VoodooRestoration *const this)
{
  this->_vptr_IHandleEntity = &off_44590D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_WitchDoctor_VoodooRestoration::~CDOTA_Ability_WitchDoctor_VoodooRestoration  (line 319, @0x0000000002b1c200, libserver.so)  // inlines: ~CDOTA_Ability_WitchDoctor_VoodooRestoration
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_WitchDoctor_VoodooRestoration::~CDOTA_Ability_WitchDoctor_VoodooRestoration(
        CDOTA_Ability_WitchDoctor_VoodooRestoration *const this)
{
  this->_vptr_IHandleEntity = &off_44590D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_WitchDoctor_VoodooRestoration::Schema_DynamicBinding  (line 321, @0x0000000002b154a0, libserver.so)
// globals: CDOTA_Ability_WitchDoctor_VoodooRestoration::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_WitchDoctor_VoodooRestoration::Schema_DynamicBinding(
        const CDOTA_Ability_WitchDoctor_VoodooRestoration *const this)
{
  return CDOTA_Ability_WitchDoctor_VoodooRestoration::s_pSchemaBinding;
}


// CDOTA_Ability_WitchDoctor_VoodooRestoration::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 321, @0x0000000002b154b0, libserver.so)
// globals: CDOTA_Ability_WitchDoctor_VoodooRestoration::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_WitchDoctor_VoodooRestoration::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_WitchDoctor_VoodooRestoration::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_WitchDoctor_VoodooRestoration::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_WitchDoctor_VoodooRestoration::CEntityInstanceEntityClass::DestructInstance  (line 321, @0x0000000002b154c0, libserver.so)  // inlines: Destruct<CDOTA_Ability_WitchDoctor_VoodooRestoration>
void __fastcall CDOTA_Ability_WitchDoctor_VoodooRestoration::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_WitchDoctor_VoodooRestoration::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_WitchDoctor_VoodooRestoration::CEntityInstanceEntityClass::FreeInstance  (line 321, @0x0000000002b154e0, libserver.so)
void __fastcall CDOTA_Ability_WitchDoctor_VoodooRestoration::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_WitchDoctor_VoodooRestoration::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_WitchDoctor_VoodooRestoration::CEntityInstanceEntityClass::CanAllocate  (line 321, @0x0000000002b15500, libserver.so)
bool __fastcall CDOTA_Ability_WitchDoctor_VoodooRestoration::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_WitchDoctor_VoodooRestoration::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_WitchDoctor_VoodooRestoration::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 321, @0x0000000002b15510, libserver.so)
// globals: CDOTA_Ability_WitchDoctor_VoodooRestoration::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_WitchDoctor_VoodooRestoration::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_WitchDoctor_VoodooRestoration::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_WitchDoctor_VoodooRestoration::s_pSchemaBinding;
}


// CDOTA_Ability_WitchDoctor_VoodooRestoration::CEntityInstanceEntityClass::AllocateInstance  (line 321, @0x0000000002b18ef0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_WitchDoctor_VoodooRestoration::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_WitchDoctor_VoodooRestoration::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_WitchDoctor_VoodooRestoration::CEntityInstanceEntityClass::ConstructInstance  (line 321, @0x0000000002b1b6d0, libserver.so)  // inlines: CDOTA_Ability_WitchDoctor_VoodooRestoration, Construct<CDOTA_Ability_WitchDoctor_VoodooRestoration>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_WitchDoctor_VoodooRestoration::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_WitchDoctor_VoodooRestoration::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44590D0;
  }
  return p;
}


// CDOTA_Ability_WitchDoctor_VoodooRestoration::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 321, @0x0000000002b21f50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_WitchDoctor_VoodooRestoration::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_WitchDoctor_VoodooRestoration::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_WitchDoctor_VoodooRestoration::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 321, @0x0000000002b21f70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_WitchDoctor_VoodooRestoration::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_WitchDoctor_VoodooRestoration::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_WitchDoctor_VoodooRestoration::GetEntityClassInternal  (line 321, @0x0000000002b2a830, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "witch_doctor_voodoo_restoration", "CDOTA_Ability_WitchDoctor_VoodooRestoration"
// globals: `guard variable for'CDOTA_Ability_WitchDoctor_VoodooRestoration::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_VoodooRestorationClass, CDOTA_Ability_WitchDoctor_VoodooRestoration::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_VoodooRestorationClass, __dso_handle, CDOTA_Ability_WitchDoctor_VoodooRestoration::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_WitchDoctor_VoodooRestoration::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_WitchDoctor_VoodooRestorationClassInfo, CDOTA_Ability_WitchDoctor_VoodooRestoration::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_WitchDoctor_VoodooRestorationClassInfo
CEntityClass *__cdecl CDOTA_Ability_WitchDoctor_VoodooRestoration::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_WitchDoctor_VoodooRestoration::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_VoodooRestorationClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_WitchDoctor_VoodooRestoration::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_VoodooRestorationClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_WitchDoctor_VoodooRestoration::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_VoodooRestorationClass);
    CDOTA_Ability_WitchDoctor_VoodooRestoration::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_VoodooRestorationClass._vptr_CEntityClass = off_4459050;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_WitchDoctor_VoodooRestoration::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_VoodooRestorationClass);
    __cxa_atexit(
      CDOTA_Ability_WitchDoctor_VoodooRestoration::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_WitchDoctor_VoodooRestoration::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_VoodooRestorationClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_WitchDoctor_VoodooRestorationClass != 0 )
    return &CDOTA_Ability_WitchDoctor_VoodooRestoration::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_VoodooRestorationClass;
  if ( `guard variable for'CDOTA_Ability_WitchDoctor_VoodooRestoration::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_WitchDoctor_VoodooRestorationClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_WitchDoctor_VoodooRestoration::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_WitchDoctor_VoodooRestorationClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_WitchDoctor_VoodooRestoration::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_WitchDoctor_VoodooRestorationClassInfo,
      "CDOTA_Ability_WitchDoctor_VoodooRestoration",
      "witch_doctor_voodoo_restoration",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_WitchDoctor_VoodooRestoration::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_WitchDoctor_VoodooRestorationClassInfo);
  }
  CDOTA_Ability_WitchDoctor_VoodooRestoration::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_VoodooRestorationClass.m_pClassInfo = &CDOTA_Ability_WitchDoctor_VoodooRestoration::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_WitchDoctor_VoodooRestorationClassInfo;
  CDOTA_Ability_WitchDoctor_VoodooRestoration::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_VoodooRestorationClass.m_pBaseClassInfo = CDOTA_Ability_WitchDoctor_VoodooRestoration::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_WitchDoctor_VoodooRestorationClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_WitchDoctor_VoodooRestorationClass = &CDOTA_Ability_WitchDoctor_VoodooRestoration::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_VoodooRestorationClass;
  CDOTA_Ability_WitchDoctor_VoodooRestoration::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_WitchDoctor_VoodooRestorationClassInfo.m_pClass = &CDOTA_Ability_WitchDoctor_VoodooRestoration::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_VoodooRestorationClass;
  CDOTA_Ability_WitchDoctor_VoodooRestoration::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_VoodooRestorationClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_WitchDoctor_VoodooRestorationClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_WitchDoctor_VoodooRestoration::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_VoodooRestorationClass;
}


// CDOTA_Ability_WitchDoctor_VoodooRestoration::GetStolenActivityModifier  (line 335, @0x0000000002b15520, libserver.so)
// strings: "restoration"
const char *__fastcall CDOTA_Ability_WitchDoctor_VoodooRestoration::GetStolenActivityModifier(
        CDOTA_Ability_WitchDoctor_VoodooRestoration *const this)
{
  return "restoration";
}


// CDOTA_Ability_WitchDoctor_VoodooRestoration::ProcsMagicStick  (line 338, @0x0000000002b15530, libserver.so)
bool __fastcall CDOTA_Ability_WitchDoctor_VoodooRestoration::ProcsMagicStick(
        CDOTA_Ability_WitchDoctor_VoodooRestoration *const this)
{
  return 0;
}


// CDOTA_Ability_WitchDoctor_VoodooRestoration::YouForgotToImplementOrDeclareServerClass  (line 341, @0x0000000002ae79d0, libserver.so)
int __fastcall CDOTA_Ability_WitchDoctor_VoodooRestoration::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_WitchDoctor_VoodooRestoration *const this)
{
  return 0;
}


// CDOTA_Ability_WitchDoctor_VoodooRestoration::GetServerClass  (line 341, @0x0000000002af28b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_WitchDoctor_VoodooRestoration::GetServerClass(
        CDOTA_Ability_WitchDoctor_VoodooRestoration *const this)
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


// CDOTA_Ability_WitchDoctor_VoodooRestoration::OnToggle  (line 350, @0x0000000002b08f20, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, GetTeamNumber, Purge, QueueConcept, SetBool, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::OnToggle, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::KeyValues, KeyValues::SetInt, KeyValues::SetString, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTA_Speech::QueueConcept (21 total)
// strings: "modifier_witchdoctor_voodoorestoration", "modifier_voodoo_restoration_heal", "aura_apply_modifier", "aura_search_team", "aura_search_type", "aura_search_flags" (12 total)
void __fastcall CDOTA_Ability_WitchDoctor_VoodooRestoration::OnToggle(
        CDOTA_Ability_WitchDoctor_VoodooRestoration *const this)
{
  int LevelSpecialValue; // r13d
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // r14
  CDOTA_BaseNPC *v6; // rax
  const Vector *AbsOrigin; // r15
  CDOTA_BaseNPC *v8; // rax
  CDOTA_Speech *m_pSpeech; // rdi
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+20h] [rbp-B0h] BYREF
  CResponseCriteriaSet criteria; // [rsp+40h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+80h] [rbp-50h] BYREF
  unsigned __int64 v16; // [rsp+98h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  CDOTABaseAbility::OnToggle(this);
  if ( this->m_bToggleState.m_Value )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_witchdoctor_voodoorestoration");
    KeyValues::SetInt(&kv, "aura", 1);
    KeyValues::SetString(&kv, "aura_apply_modifier", "modifier_voodoo_restoration_heal");
    KeyValues::SetInt(&kv, "aura_radius", LevelSpecialValue);
    KeyValues::SetInt(&kv, "aura_search_team", 1);
    KeyValues::SetInt(&kv, "aura_search_type", 19);
    KeyValues::SetInt(&kv, "aura_search_flags", 16);
    KeyValues::SetInt(&kv, "aura_is_heal", 1);
    Caster = CDOTABaseAbility::GetCaster(this);
    v4 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_voodoo_restoration_aura", &kv, 0);
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    v5 = CDOTABaseAbility::GetCaster(this);
    v6 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
    v8 = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(v8->m_iTeamNum.m_Value, AbsOrigin, v5, (2 * LevelSpecialValue), &entities, 1, 1, 0, 0, 0);
    if ( entities.m_Size > 1 )
    {
      CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
      CResponseCriteriaSet::AppendCriteria(&criteria, "abilityname", "witch_doctor_voodoo_restoration", 1.0);
      m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
      if ( m_pSpeech != 0 )
        CDOTA_Speech::QueueConcept(m_pSpeech, 18, 0.5, &criteria, 3, 1, 0, 0, 0);
      CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
    }
    v10 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(10, "Hero_WitchDoctor.Voodoo_Restoration", v10);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
      if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    }
    KeyValues::~KeyValues(&kv);
  }
  else
  {
    v11 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::RemoveModifierByName(v11, "modifier_voodoo_restoration_aura");
    v12 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(10, "Hero_WitchDoctor.Voodoo_Restoration.Off", v12);
  }
}


// CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Aura::~CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Aura  (line 394, @0x0000000002b1ab00, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Aura::~CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Aura(
        CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4459B90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Aura::~CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Aura  (line 394, @0x0000000002b1ab20, libserver.so)  // inlines: ~CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Aura::~CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Aura(
        CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4459B90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Aura::IsHidden  (line 407, @0x0000000002b15540, libserver.so)
bool __fastcall CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Aura::IsHidden(
        CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Aura::OnCreated  (line 418, @0x0000000002ae79e0, libserver.so)
void __fastcall CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Aura::OnCreated(
        CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Aura *const this,
        KeyValues *pKV)
{
  ;
}


// CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Aura::OnDestroy  (line 436, @0x0000000002ae79f0, libserver.so)
void __fastcall CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Aura::OnDestroy(
        CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Aura *const this)
{
  ;
}


// CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal::~CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal  (line 447, @0x0000000002b1aab0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal::~CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal(
        CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal *const this)
{
  this->_vptr_CDOTA_Buff = &off_4459EB0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal::~CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal  (line 447, @0x0000000002b1aad0, libserver.so)  // inlines: ~CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal::~CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal(
        CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal *const this)
{
  this->_vptr_CDOTA_Buff = &off_4459EB0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal::OnCreated  (line 468, @0x0000000002b0ae10, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "mana_per_second"
void __fastcall CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal::OnCreated(
        CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  float v6; // xmm1_4
  float LevelSpecialValue; // xmm0_4
  float v8; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->heal = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "heal", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->mana_per_second = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->heal = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->mana_per_second = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "mana_per_second", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "heal_interval", -1, 0);
    this->heal_interval = LevelSpecialValue;
    CDOTA_Buff::StartIntervalThink(this, LevelSpecialValue, v8);
    return;
  }
LABEL_7:
  this->heal_interval = 0.0;
  CDOTA_Buff::StartIntervalThink(this, 0.0, v6);
}


// CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal::OnRefresh  (line 479, @0x0000000002b0a2c0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "mana_per_second"
void __fastcall CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal::OnRefresh(
        CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->heal = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "heal", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->mana_per_second = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "mana_per_second", -1, 0);
      return;
    }
  }
  else
  {
    this->heal = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->mana_per_second = 0;
}


// CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal::OnIntervalThink  (line 487, @0x0000000002b08140, libserver.so)  // inlines: ToDOTABaseNPCHero
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_BaseNPC::Heal, EconEntity_OnOwnerKillEaterEvent, CBaseEntity::GetHealth, SendOverheadEventMessage, CDOTA_BaseNPC::SpendMana, CDOTABaseAbility::ToggleAbility
// strings: "special_bonus_unique_witch_doctor_2"
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal::OnIntervalThink(
        CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int LevelSpecialValue; // eax
  CDOTABaseAbility *Ability; // r12
  CDOTA_BaseNPC *Parent; // rax
  int v7; // r12d
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC_Hero *v9; // rdi
  CDOTA_BaseNPC *v10; // r12
  CDOTA_BaseNPC *v11; // rax
  int Health; // r13d
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // r13
  CDOTA_BaseNPC *v15; // rax
  CDOTAPlayer *v16; // rax
  CDOTA_BaseNPC *v17; // r13
  CDOTA_BaseNPC *v18; // r13
  CDOTA_BaseNPC *v19; // rax
  CDOTAPlayer *v20; // rax
  CDOTABaseAbility *v21; // r12
  CDOTA_BaseNPC *v22; // rax
  CDOTABaseAbility *v23; // rax
  float flHealAmount; // [rsp+Ch] [rbp-24h]
  float flHealAmounta; // [rsp+Ch] [rbp-24h]

  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_witch_doctor_2", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  else
    LevelSpecialValue = 0;
  flHealAmount = (this->heal + LevelSpecialValue) * this->heal_interval;
  Ability = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::Heal(Parent, flHealAmount, Ability, 0, 1);
  v7 = flHealAmount;
  v8 = CDOTA_Buff::GetCaster(this);
  if ( v8 != 0 && (v8->m_iUnitType & 1) != 0 )
    v9 = v8;
  else
    v9 = 0;
  EconEntity_OnOwnerKillEaterEvent(
    v9,
    0,
    kill_eater_event_t::kKillEaterEventType_WitchDoctor_VoodooHealed,
    v7,
    INVALID_ITEM_DEF_INDEX);
  if ( (CDOTA_Buff::GetParent(this)->m_iUnitType & 1) != 0 )
  {
    v11 = CDOTA_Buff::GetParent(this);
    Health = CBaseEntity::GetHealth(v11);
    v13 = CDOTA_Buff::GetParent(this);
    if ( Health < (*(v13->_vptr_IHandleEntity + 156))(v13) )
    {
      v14 = CDOTA_Buff::GetParent(this);
      v15 = CDOTA_Buff::GetCaster(this);
      v16 = (*(v15->_vptr_IHandleEntity + 413))(v15);
      SendOverheadEventMessage(v16, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, v14, v7, 0);
      v17 = CDOTA_Buff::GetParent(this);
      if ( v17 != CDOTA_Buff::GetCaster(this) )
      {
        v18 = CDOTA_Buff::GetParent(this);
        v19 = CDOTA_Buff::GetParent(this);
        v20 = (*(v19->_vptr_IHandleEntity + 413))(v19);
        SendOverheadEventMessage(v20, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, v18, v7, 0);
      }
    }
  }
  v10 = CDOTA_Buff::GetParent(this);
  if ( v10 == CDOTA_Buff::GetCaster(this) )
  {
    v21 = CDOTA_Buff::GetAbility(this);
    flHealAmounta = this->mana_per_second * this->heal_interval;
    v22 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::SpendMana(v22, flHealAmounta, v21, 0);
    if ( (this->mana_per_second * this->heal_interval) > CDOTA_Buff::GetParent(this)->m_flMana.m_Value
      && CDOTA_Buff::GetAbility(this)->m_bToggleState.m_Value )
    {
      v23 = CDOTA_Buff::GetAbility(this);
      CDOTABaseAbility::ToggleAbility(v23);
    }
  }
}


// CDOTA_Ability_WitchDoctor_Maledict::~CDOTA_Ability_WitchDoctor_Maledict  (line 537, @0x0000000002b1c230, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_WitchDoctor_Maledict::~CDOTA_Ability_WitchDoctor_Maledict(
        CDOTA_Ability_WitchDoctor_Maledict *const this)
{
  this->_vptr_IHandleEntity = &off_445A210;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_WitchDoctor_Maledict::~CDOTA_Ability_WitchDoctor_Maledict  (line 537, @0x0000000002b1c250, libserver.so)  // inlines: ~CDOTA_Ability_WitchDoctor_Maledict
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_WitchDoctor_Maledict::~CDOTA_Ability_WitchDoctor_Maledict(
        CDOTA_Ability_WitchDoctor_Maledict *const this)
{
  this->_vptr_IHandleEntity = &off_445A210;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_WitchDoctor_Maledict::Schema_DynamicBinding  (line 539, @0x0000000002b15550, libserver.so)
// globals: CDOTA_Ability_WitchDoctor_Maledict::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_WitchDoctor_Maledict::Schema_DynamicBinding(
        const CDOTA_Ability_WitchDoctor_Maledict *const this)
{
  return CDOTA_Ability_WitchDoctor_Maledict::s_pSchemaBinding;
}


// CDOTA_Ability_WitchDoctor_Maledict::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 539, @0x0000000002b15560, libserver.so)
// globals: CDOTA_Ability_WitchDoctor_Maledict::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_WitchDoctor_Maledict::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_WitchDoctor_Maledict::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_WitchDoctor_Maledict::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_WitchDoctor_Maledict::CEntityInstanceEntityClass::DestructInstance  (line 539, @0x0000000002b15570, libserver.so)  // inlines: Destruct<CDOTA_Ability_WitchDoctor_Maledict>
void __fastcall CDOTA_Ability_WitchDoctor_Maledict::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_WitchDoctor_Maledict::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_WitchDoctor_Maledict::CEntityInstanceEntityClass::FreeInstance  (line 539, @0x0000000002b15590, libserver.so)
void __fastcall CDOTA_Ability_WitchDoctor_Maledict::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_WitchDoctor_Maledict::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_WitchDoctor_Maledict::CEntityInstanceEntityClass::CanAllocate  (line 539, @0x0000000002b155b0, libserver.so)
bool __fastcall CDOTA_Ability_WitchDoctor_Maledict::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_WitchDoctor_Maledict::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_WitchDoctor_Maledict::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 539, @0x0000000002b155c0, libserver.so)
// globals: CDOTA_Ability_WitchDoctor_Maledict::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_WitchDoctor_Maledict::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_WitchDoctor_Maledict::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_WitchDoctor_Maledict::s_pSchemaBinding;
}


// CDOTA_Ability_WitchDoctor_Maledict::CEntityInstanceEntityClass::AllocateInstance  (line 539, @0x0000000002b18f30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_WitchDoctor_Maledict::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_WitchDoctor_Maledict::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_WitchDoctor_Maledict::CEntityInstanceEntityClass::ConstructInstance  (line 539, @0x0000000002b1b700, libserver.so)  // inlines: CDOTA_Ability_WitchDoctor_Maledict, Construct<CDOTA_Ability_WitchDoctor_Maledict>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_WitchDoctor_Maledict::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_WitchDoctor_Maledict::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_445A210;
  }
  return p;
}


// CDOTA_Ability_WitchDoctor_Maledict::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 539, @0x0000000002b21fa0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_WitchDoctor_Maledict::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_WitchDoctor_Maledict::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_WitchDoctor_Maledict::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 539, @0x0000000002b21fc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_WitchDoctor_Maledict::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_WitchDoctor_Maledict::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_WitchDoctor_Maledict::GetEntityClassInternal  (line 539, @0x0000000002b2a980, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "witch_doctor_maledict", "CDOTA_Ability_WitchDoctor_Maledict"
// globals: `guard variable for'CDOTA_Ability_WitchDoctor_Maledict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_MaledictClass, CDOTA_Ability_WitchDoctor_Maledict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_MaledictClass, __dso_handle, CDOTA_Ability_WitchDoctor_Maledict::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_WitchDoctor_Maledict::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_WitchDoctor_MaledictClassInfo, CDOTA_Ability_WitchDoctor_Maledict::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_WitchDoctor_MaledictClassInfo
CEntityClass *__cdecl CDOTA_Ability_WitchDoctor_Maledict::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_WitchDoctor_Maledict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_MaledictClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_WitchDoctor_Maledict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_MaledictClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_WitchDoctor_Maledict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_MaledictClass);
    CDOTA_Ability_WitchDoctor_Maledict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_MaledictClass._vptr_CEntityClass = off_445A190;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_WitchDoctor_Maledict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_MaledictClass);
    __cxa_atexit(
      CDOTA_Ability_WitchDoctor_Maledict::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_WitchDoctor_Maledict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_MaledictClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_WitchDoctor_MaledictClass != 0 )
    return &CDOTA_Ability_WitchDoctor_Maledict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_MaledictClass;
  if ( `guard variable for'CDOTA_Ability_WitchDoctor_Maledict::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_WitchDoctor_MaledictClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_WitchDoctor_Maledict::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_WitchDoctor_MaledictClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_WitchDoctor_Maledict::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_WitchDoctor_MaledictClassInfo,
      "CDOTA_Ability_WitchDoctor_Maledict",
      "witch_doctor_maledict",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_WitchDoctor_Maledict::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_WitchDoctor_MaledictClassInfo);
  }
  CDOTA_Ability_WitchDoctor_Maledict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_MaledictClass.m_pClassInfo = &CDOTA_Ability_WitchDoctor_Maledict::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_WitchDoctor_MaledictClassInfo;
  CDOTA_Ability_WitchDoctor_Maledict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_MaledictClass.m_pBaseClassInfo = CDOTA_Ability_WitchDoctor_Maledict::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_WitchDoctor_MaledictClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_WitchDoctor_MaledictClass = &CDOTA_Ability_WitchDoctor_Maledict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_MaledictClass;
  CDOTA_Ability_WitchDoctor_Maledict::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_WitchDoctor_MaledictClassInfo.m_pClass = &CDOTA_Ability_WitchDoctor_Maledict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_MaledictClass;
  CDOTA_Ability_WitchDoctor_Maledict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_MaledictClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_WitchDoctor_MaledictClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_WitchDoctor_Maledict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_MaledictClass;
}


// CDOTA_Ability_WitchDoctor_Maledict::GetStolenActivityModifier  (line 555, @0x0000000002b155d0, libserver.so)
const char *__fastcall CDOTA_Ability_WitchDoctor_Maledict::GetStolenActivityModifier(
        CDOTA_Ability_WitchDoctor_Maledict *const this)
{
  return "maledict";
}


// CDOTA_Ability_WitchDoctor_Maledict::ShouldSpeakAbilityConcept  (line 557, @0x0000000002b155e0, libserver.so)
bool __fastcall CDOTA_Ability_WitchDoctor_Maledict::ShouldSpeakAbilityConcept(
        CDOTA_Ability_WitchDoctor_Maledict *const this)
{
  return 0;
}


// CDOTA_Ability_WitchDoctor_Maledict::YouForgotToImplementOrDeclareServerClass  (line 560, @0x0000000002ae7a00, libserver.so)
int __fastcall CDOTA_Ability_WitchDoctor_Maledict::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_WitchDoctor_Maledict *const this)
{
  return 0;
}


// CDOTA_Ability_WitchDoctor_Maledict::GetServerClass  (line 560, @0x0000000002af2d70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_WitchDoctor_Maledict::GetServerClass(
        CDOTA_Ability_WitchDoctor_Maledict *const this)
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


// CDOTA_Ability_WitchDoctor_Maledict::OnSpellStart  (line 569, @0x0000000002b09260, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetAbilityData, GetAbilityName, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsHero, IsValid, LookupEntity, QueueConcept, ToDOTABaseNPC, ToDOTABaseNPCHero, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorPosition, FindUnitsInRadius, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, CResponseCriteriaSet::CResponseCriteriaSet, CDOTA_BaseNPC::UnitEmitSound, CResponseCriteriaSet::AppendCriteria, CDOTA_Speech::QueueConcept (24 total)
// strings: "particles/units/heroes/hero_witchdoctor/witchdoctor_maledict_aoe.vpcf", "Hero_WitchDoctor.Maledict_Cast", "<NoAbilityName>", "abilityname", "maledicttargets", "modifier_maledict" (7 total)
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_WitchDoctor_Maledict::OnSpellStart(CDOTA_Ability_WitchDoctor_Maledict *const this)
{
  int LevelSpecialValue; // eax
  __m128i v3; // xmm2
  DOTAAbilityData_t *m_pAbilityData; // rdx
  int v5; // r14d
  int m_iAbilityTargetType; // r13d
  float v7; // r14d
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_BaseNPC *v9; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v11; // rax
  CDOTA_ParticleManager *v12; // rax
  CDOTA_ParticleManager *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  DOTAAbilityData_t *v15; // rax
  const char *v16; // rdx
  const char *m_pszAbilityName; // rax
  float v18; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  __int64 v20; // r13
  int v21; // r14d
  CHandle<CBaseEntity> *v22; // rdx
  uint32 m_Index; // eax
  __int16 v24; // cx
  CEntityIdentity *v25; // rdx
  CEntityIdentity *v26; // rdx
  CDOTA_BaseNPC *m_pInstance; // r15
  float v28; // xmm1_4
  int v29; // eax
  CDOTA_BaseNPC *v30; // rax
  CDOTA_BaseNPC *v31; // rax
  CDOTA_BaseNPC_Hero *v32; // rdi
  CDOTA_BaseNPC *v33; // rax
  int nAffectedHeroes; // [rsp+2Ch] [rbp-C4h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-B0h] BYREF
  CResponseCriteriaSet criteria; // [rsp+60h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+A0h] [rbp-50h] BYREF
  unsigned __int64 v38; // [rsp+B8h] [rbp-38h]
  Vector CursorPosition; // 0:kr14_12.12

  v38 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  m_pAbilityData = this->m_pAbilityData;
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  v5 = LevelSpecialValue;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  *v3.m128i_i32 = v5;
  m_iAbilityTargetType = m_pAbilityData->m_iAbilityTargetType;
  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  Caster = CDOTABaseAbility::GetCaster(this);
  *&criteria._vptr_CResponseCriteriaSet = CDOTABaseAbility::GetCursorPosition(this);
  v9 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v9->m_iTeamNum.m_Value, &criteria, Caster, v7, &entities, 2, m_iAbilityTargetType, 16, 0, 0);
  ParticleManager = GetParticleManager();
  LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_witchdoctor/witchdoctor_maledict_aoe.vpcf",
                      2,
                      0,
                      0,
                      0);
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v11, Caster, 0, *&CursorPosition.x, CursorPosition.z);
  criteria._vptr_CResponseCriteriaSet = LODWORD(v7);
  LODWORD(criteria.m_Lookup.m_LessFunc) = 0;
  v12 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(
    v12,
    Caster,
    1,
    *&criteria._vptr_CResponseCriteriaSet,
    *&criteria.m_Lookup.m_LessFunc);
  v13 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v13, Caster);
  CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
  if ( entities.m_Size <= 0 )
  {
    v33 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v33, "Hero_WitchDoctor.Maledict_CastFail", 0.0, 0, 0);
  }
  else
  {
    v14 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v14, "Hero_WitchDoctor.Maledict_Cast", 0.0, 0, 0);
  }
  v15 = this->m_pAbilityData;
  v16 = "<NoAbilityName>";
  if ( v15 != 0 )
  {
    m_pszAbilityName = v15->m_pszAbilityName;
    v16 = "<NoAbilityName>";
    if ( m_pszAbilityName != 0 )
      v16 = m_pszAbilityName;
  }
  CResponseCriteriaSet::AppendCriteria(&criteria, "abilityname", v16, 1.0);
  CResponseCriteriaSet::AppendCriteria(&criteria, "maledicttargets", 1.0, v18);
  m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
  if ( m_pSpeech != 0 )
    CDOTA_Speech::QueueConcept(m_pSpeech, 4, 0.25, &criteria, 4, 1, 0, 0, 0);
  if ( entities.m_Size > 0 )
  {
    nAffectedHeroes = 0;
    v20 = 0;
    v21 = 0;
    do
    {
      v22 = &entities.m_Memory.m_pMemory[v20];
      m_Index = entities.m_Memory.m_pMemory[v20].m_Index;
      if ( m_Index + 2 > 1 )
      {
        v24 = v22->m_Index;
        v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v22->m_Index) >> 9) & 0x3F];
        if ( v25 != 0 )
        {
          v26 = &v25[v24 & 0x1FF];
          if ( v26 != 0 && m_Index == v26->m_EHandle.m_Index )
          {
            m_pInstance = v26->m_pInstance;
            if ( v26->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
            {
              nAffectedHeroes -= ((m_pInstance->m_iUnitType & 1) == 0) - 1;
              KeyValues::KeyValues(&kv, "maledict");
              CDOTABaseAbility::GetDuration(this);
              KeyValues::SetFloat(&kv, "duration", v28);
              v29 = (*(this->_vptr_IHandleEntity + 247))(this);
              KeyValues::SetInt(&kv, "dot_damage", v29);
              KeyValues::SetInt(&kv, "dot_interval", 1);
              v30 = CDOTABaseAbility::GetCaster(this);
              CDOTA_BaseNPC::AddNewModifier(m_pInstance, v30, this, "modifier_maledict", &kv, 0);
              KeyValues::~KeyValues(&kv);
            }
          }
        }
      }
      ++v21;
      ++v20;
    }
    while ( entities.m_Size > v21 );
    if ( nAffectedHeroes > 1 )
    {
      v31 = CDOTABaseAbility::GetCaster(this);
      if ( v31 != 0 && (v31->m_iUnitType & 1) != 0 )
        v32 = v31;
      else
        v32 = 0;
      EconEntity_OnOwnerKillEaterEvent(
        v32,
        0,
        kill_eater_event_t::kKillEaterEventType_WitchDoctor_MultiHeroMaledicts,
        1,
        INVALID_ITEM_DEF_INDEX);
    }
  }
  CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Modifier_WitchDoctor_Maledict::~CDOTA_Modifier_WitchDoctor_Maledict  (line 632, @0x0000000002b1aa60, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_WitchDoctor_Maledict::~CDOTA_Modifier_WitchDoctor_Maledict(
        CDOTA_Modifier_WitchDoctor_Maledict *const this)
{
  this->_vptr_CDOTA_Buff = &off_445ACD0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_WitchDoctor_Maledict::~CDOTA_Modifier_WitchDoctor_Maledict  (line 632, @0x0000000002b1aa80, libserver.so)  // inlines: ~CDOTA_Modifier_WitchDoctor_Maledict
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_WitchDoctor_Maledict::~CDOTA_Modifier_WitchDoctor_Maledict(
        CDOTA_Modifier_WitchDoctor_Maledict *const this)
{
  this->_vptr_CDOTA_Buff = &off_445ACD0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_WitchDoctor_Maledict::IsPurgable  (line 645, @0x0000000002b155f0, libserver.so)
bool __fastcall CDOTA_Modifier_WitchDoctor_Maledict::IsPurgable(CDOTA_Modifier_WitchDoctor_Maledict *const this)
{
  return 0;
}


// CDOTA_Modifier_WitchDoctor_Maledict::OnCreated  (line 662, @0x0000000002b0b950, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
// strings: "bonus_damage_threshold"
void __fastcall CDOTA_Modifier_WitchDoctor_Maledict::OnCreated(
        CDOTA_Modifier_WitchDoctor_Maledict *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  float v7; // xmm0_4

  Parent = CDOTA_Buff::GetParent(this);
  this->m_iStartHealth = CBaseEntity::GetHealth(Parent);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage", -1, 0);
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_3;
LABEL_7:
    this->bonus_damage_threshold = 0;
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_4;
LABEL_8:
    this->ticks = 0;
    goto LABEL_5;
  }
  this->bonus_damage = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_7;
LABEL_3:
  this->bonus_damage_threshold = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_damage_threshold", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_8;
LABEL_4:
  this->ticks = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "ticks", -1, 0);
LABEL_5:
  this->iCurrentTick = 0;
  v7 = (*(this->_vptr_CDOTA_Buff + 31))(this);
  CDOTA_Buff::StartIntervalThink(this, (v7 - 0.1) / this->ticks, this->ticks);
}


// CDOTA_Modifier_WitchDoctor_Maledict::OnIntervalThink  (line 695, @0x0000000002af0390, libserver.so)  // inlines: SpeakConcept, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, ApplyDamage, SendOverheadEventMessage, CDOTA_BaseNPC::UnitEmitSound, CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTA_Speech::SpeakConcept, EconEntity_OnOwnerKillEaterEvent, CResponseCriteriaSet::~CResponseCriteriaSet (13 total)
// strings: "Hero_WitchDoctor.Maledict_Tick", "maledictunit_state", "maledictunit_fraction", "maledictunit_currenttick"
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_WitchDoctor_Maledict::OnIntervalThink(CDOTA_Modifier_WitchDoctor_Maledict *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  int v3; // eax
  int v4; // r13d
  CDOTA_BaseNPC *v5; // rax
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *v7; // r14
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  float v12; // xmm2_4
  float v13; // xmm2_4
  float v14; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC_Hero *v18; // r13
  CDOTA_BaseNPC *v19; // rax
  CDOTA_BaseNPC_Hero *v20; // rdi
  CResponseCriteriaSet criteria; // [rsp+20h] [rbp-70h] BYREF

  Parent = CDOTA_Buff::GetParent(this);
  v3 = this->m_iStartHealth - CBaseEntity::GetHealth(Parent);
  if ( v3 < 0 )
    v3 = 0;
  v4 = ((v3 / this->bonus_damage_threshold) * this->bonus_damage);
  v5 = CDOTA_Buff::GetParent(this);
  (*(v5->_vptr_IHandleEntity + 156))(v5);
  ++this->iCurrentTick;
  Ability = CDOTA_Buff::GetAbility(this);
  v7 = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, v7, Ability, v4, 2, 0);
  v9 = CDOTA_Buff::GetParent(this);
  SendOverheadEventMessage(0, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_BONUS_SPELL_DAMAGE, v9, v4, 0);
  v10 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(v10, "Hero_WitchDoctor.Maledict_Tick", 0.0, 0, 0);
  CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
  v11 = CDOTA_Buff::GetParent(this);
  (*(v11->_vptr_IHandleEntity + 408))(v11);
  CResponseCriteriaSet::AppendCriteria(&criteria, "maledictunit_state", 1.0, v12);
  CResponseCriteriaSet::AppendCriteria(&criteria, "maledictunit_fraction", 1.0, v13);
  CResponseCriteriaSet::AppendCriteria(&criteria, "maledictunit_currenttick", 1.0, v14);
  if ( CDOTA_Buff::GetCaster(this) != 0 )
  {
    m_pSpeech = CDOTA_Buff::GetCaster(this)->m_Speech.m_pSpeech;
    if ( m_pSpeech != 0 )
      CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 3, 0, 0, 0, 0);
  }
  v16 = CDOTA_Buff::GetParent(this);
  if ( (*(v16->_vptr_IHandleEntity + 408))(v16) == 0 )
  {
    v17 = CDOTA_Buff::GetParent(this);
    v18 = 0;
    if ( v17 != 0 && v17->m_bIsDOTANPC && (v17->m_iUnitType & 1) != 0 && !v17->m_bIsIllusion.m_Value )
      v18 = v17;
    v19 = CDOTA_Buff::GetCaster(this);
    if ( v19 != 0 && (v19->m_iUnitType & 1) != 0 )
      v20 = v19;
    else
      v20 = 0;
    EconEntity_OnOwnerKillEaterEvent(
      v20,
      v18,
      kill_eater_event_t::kKillEaterEventType_WitchDoctor_MaledictKills,
      1,
      INVALID_ITEM_DEF_INDEX);
  }
  CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
}


// CDOTA_Modifier_WitchDoctor_Maledict::OnDestroy  (line 734, @0x0000000002ae7a10, libserver.so)
void __fastcall CDOTA_Modifier_WitchDoctor_Maledict::OnDestroy(CDOTA_Modifier_WitchDoctor_Maledict *const this)
{
  ;
}


// CDOTA_NPC_WitchDoctor_Ward::~CDOTA_NPC_WitchDoctor_Ward  (line 741, @0x0000000002b19b70, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_NPC_WitchDoctor_Ward::~CDOTA_NPC_WitchDoctor_Ward(CDOTA_NPC_WitchDoctor_Ward *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_NPC_WitchDoctor_Ward::~CDOTA_NPC_WitchDoctor_Ward  (line 741, @0x0000000002b19bc0, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_NPC_WitchDoctor_Ward
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_NPC_WitchDoctor_Ward::~CDOTA_NPC_WitchDoctor_Ward(CDOTA_NPC_WitchDoctor_Ward *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_NPC_WitchDoctor_Ward::Schema_DynamicBinding  (line 743, @0x0000000002b15600, libserver.so)
// globals: CDOTA_NPC_WitchDoctor_Ward::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_NPC_WitchDoctor_Ward::Schema_DynamicBinding(
        const CDOTA_NPC_WitchDoctor_Ward *const this)
{
  return CDOTA_NPC_WitchDoctor_Ward::s_pSchemaBinding;
}


// CDOTA_NPC_WitchDoctor_Ward::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 743, @0x0000000002b15630, libserver.so)
// globals: CDOTA_NPC_WitchDoctor_Ward::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_NPC_WitchDoctor_Ward::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_NPC_WitchDoctor_Ward::CEntityInstanceEntityClass *const this)
{
  return CDOTA_NPC_WitchDoctor_Ward::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_NPC_WitchDoctor_Ward::CEntityInstanceEntityClass::DestructInstance  (line 743, @0x0000000002b15640, libserver.so)  // inlines: Destruct<CDOTA_NPC_WitchDoctor_Ward>
void __fastcall CDOTA_NPC_WitchDoctor_Ward::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_NPC_WitchDoctor_Ward::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_NPC_WitchDoctor_Ward::CEntityInstanceEntityClass::FreeInstance  (line 743, @0x0000000002b15660, libserver.so)
void __fastcall CDOTA_NPC_WitchDoctor_Ward::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_NPC_WitchDoctor_Ward::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_NPC_WitchDoctor_Ward::CEntityInstanceEntityClass::CanAllocate  (line 743, @0x0000000002b15680, libserver.so)
bool __fastcall CDOTA_NPC_WitchDoctor_Ward::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_NPC_WitchDoctor_Ward::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_NPC_WitchDoctor_Ward::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 743, @0x0000000002b15690, libserver.so)
// globals: CDOTA_NPC_WitchDoctor_Ward::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_NPC_WitchDoctor_Ward::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_NPC_WitchDoctor_Ward::CEntityInstanceEntityClass *const this)
{
  return CDOTA_NPC_WitchDoctor_Ward::s_pSchemaBinding;
}


// CDOTA_NPC_WitchDoctor_Ward::CEntityInstanceEntityClass::AllocateInstance  (line 743, @0x0000000002b18f70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_NPC_WitchDoctor_Ward::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_NPC_WitchDoctor_Ward::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4512);
  memset(v1, 0, 0x11A0u);
  return v1;
}


// CDOTA_NPC_WitchDoctor_Ward::CEntityInstanceEntityClass::ConstructInstance  (line 743, @0x0000000002b19900, libserver.so)  // inlines: CDOTA_BaseNPC_Additive, CDOTA_NPC_WitchDoctor_Ward, CNetworkVarBase, Construct<CDOTA_NPC_WitchDoctor_Ward>, EnsureValidValue<int>
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_NPC_WitchDoctor_Ward::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_NPC_WitchDoctor_Ward::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *(p + 1126) = 0;
    *p = &off_445B030;
    *(p + 236) = &off_445BF90;
    *(p + 257) = &off_445C2C0;
  }
  return p;
}


// CDOTA_NPC_WitchDoctor_Ward::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 743, @0x0000000002b22760, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_NPC_WitchDoctor_Ward::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_NPC_WitchDoctor_Ward::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_NPC_WitchDoctor_Ward::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 743, @0x0000000002b22900, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_NPC_WitchDoctor_Ward::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_NPC_WitchDoctor_Ward::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_NPC_WitchDoctor_Ward::GetEntityClassInternal  (line 743, @0x0000000002b2aad0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC::InitScriptDesc, CDOTA_BaseNPC_Additive::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "npc_dota_witch_doctor_death_ward", "CDOTA_NPC_WitchDoctor_Ward"
// globals: `guard variable for'CDOTA_NPC_WitchDoctor_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_WitchDoctor_WardClass, CDOTA_NPC_WitchDoctor_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_WitchDoctor_WardClass, __dso_handle, CDOTA_NPC_WitchDoctor_Ward::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_NPC_WitchDoctor_Ward::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_WitchDoctor_WardClassInfo, CDOTA_NPC_WitchDoctor_Ward::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_WitchDoctor_WardClassInfo
CEntityClass *__cdecl CDOTA_NPC_WitchDoctor_Ward::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_NPC_WitchDoctor_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_WitchDoctor_WardClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_NPC_WitchDoctor_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_WitchDoctor_WardClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_NPC_WitchDoctor_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_WitchDoctor_WardClass);
    CDOTA_NPC_WitchDoctor_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_WitchDoctor_WardClass._vptr_CEntityClass = off_445AFB0;
    __cxa_guard_release(&`guard variable for'CDOTA_NPC_WitchDoctor_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_WitchDoctor_WardClass);
    __cxa_atexit(
      CDOTA_NPC_WitchDoctor_Ward::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_NPC_WitchDoctor_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_WitchDoctor_WardClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_NPC_WitchDoctor_WardClass != 0 )
    return &CDOTA_NPC_WitchDoctor_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_WitchDoctor_WardClass;
  if ( `guard variable for'CDOTA_NPC_WitchDoctor_Ward::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_WitchDoctor_WardClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_NPC_WitchDoctor_Ward::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_WitchDoctor_WardClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Additive::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_NPC_WitchDoctor_Ward::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_WitchDoctor_WardClassInfo,
      "CDOTA_NPC_WitchDoctor_Ward",
      "npc_dota_witch_doctor_death_ward",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_NPC_WitchDoctor_Ward::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_WitchDoctor_WardClassInfo);
  }
  CDOTA_NPC_WitchDoctor_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_WitchDoctor_WardClass.m_pClassInfo = &CDOTA_NPC_WitchDoctor_Ward::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_WitchDoctor_WardClassInfo;
  CDOTA_NPC_WitchDoctor_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_WitchDoctor_WardClass.m_pBaseClassInfo = CDOTA_NPC_WitchDoctor_Ward::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_WitchDoctor_WardClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_NPC_WitchDoctor_WardClass = &CDOTA_NPC_WitchDoctor_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_WitchDoctor_WardClass;
  CDOTA_NPC_WitchDoctor_Ward::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_WitchDoctor_WardClassInfo.m_pClass = &CDOTA_NPC_WitchDoctor_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_WitchDoctor_WardClass;
  CDOTA_NPC_WitchDoctor_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_WitchDoctor_WardClass.m_pScriptClassDesc = CDOTA_BaseNPC::InitScriptDesc();
  g_pEntityCDOTA_NPC_WitchDoctor_WardClass->m_pComponentOverrides = 0;
  return &CDOTA_NPC_WitchDoctor_Ward::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_WitchDoctor_WardClass;
}


// CDOTA_NPC_WitchDoctor_Ward::AlwaysAutoAttack  (line 750, @0x0000000002b156a0, libserver.so)
bool __fastcall CDOTA_NPC_WitchDoctor_Ward::AlwaysAutoAttack(CDOTA_NPC_WitchDoctor_Ward *const this)
{
  return 1;
}


// CDOTA_NPC_WitchDoctor_Ward::YouForgotToImplementOrDeclareServerClass  (line 793, @0x0000000002ae7a20, libserver.so)
int __fastcall CDOTA_NPC_WitchDoctor_Ward::YouForgotToImplementOrDeclareServerClass(
        CDOTA_NPC_WitchDoctor_Ward *const this)
{
  return 0;
}


// CDOTA_NPC_WitchDoctor_Ward::GetServerClass  (line 793, @0x0000000002af2c70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_NPC_WitchDoctor_Ward::GetServerClass(CDOTA_NPC_WitchDoctor_Ward *const this)
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


// CDOTA_NPC_WitchDoctor_Ward::CanAcceptTargetToAttack  (line 823, @0x0000000002ae99b0, libserver.so)
// calls: UnitFilter
bool __fastcall CDOTA_NPC_WitchDoctor_Ward::CanAcceptTargetToAttack(
        CDOTA_NPC_WitchDoctor_Ward *const this,
        CDOTA_BaseNPC *pTargetNPC)
{
  return UnitFilter(pTargetNPC, 2, this->m_nTargetType.m_Value, &stru_20010, this->m_iTeamNum.m_Value) == 0;
}


// CDOTA_Ability_WitchDoctor_DeathWard::~CDOTA_Ability_WitchDoctor_DeathWard  (line 872, @0x0000000002b2feb0, libserver.so)  // inlines: Destruct<sBounceInfo>, Element, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~sBounceInfo
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<sBounceInfo, int>::Purge
void __fastcall CDOTA_Ability_WitchDoctor_DeathWard::~CDOTA_Ability_WitchDoctor_DeathWard(
        CDOTA_Ability_WitchDoctor_DeathWard *const this)
{
  int m_Size; // r12d
  __int64 i; // r13
  char *v4; // rbx
  bool v5; // zf

  this->_vptr_IHandleEntity = &off_445C390;
  m_Size = this->m_BounceInfo.m_Size;
  for ( i = 32LL * m_Size - 32; --m_Size >= 0; i -= 32 )
  {
    v4 = this->m_BounceInfo.m_Memory.m_pMemory + i;
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll((v4 + 8));
    if ( (*(v4 + 7) & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(v4 + 1);
      if ( (*(v4 + 7) & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(v4 + 1);
    }
  }
  v5 = (this->m_BounceInfo.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_BounceInfo.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<sBounceInfo,int>::Purge(&this->m_BounceInfo.m_Memory);
    if ( (this->m_BounceInfo.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<sBounceInfo,int>::Purge(&this->m_BounceInfo.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_WitchDoctor_DeathWard::~CDOTA_Ability_WitchDoctor_DeathWard  (line 872, @0x0000000002b30130, libserver.so)  // inlines: Destruct<sBounceInfo>, Element, Purge, RemoveAll, operator[], ~CDOTA_Ability_WitchDoctor_DeathWard, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~sBounceInfo
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<sBounceInfo, int>::Purge
void __fastcall CDOTA_Ability_WitchDoctor_DeathWard::~CDOTA_Ability_WitchDoctor_DeathWard(
        CDOTA_Ability_WitchDoctor_DeathWard *const this)
{
  int m_Size; // r12d
  __int64 i; // r13
  char *v4; // rbx
  bool v5; // zf

  this->_vptr_IHandleEntity = &off_445C390;
  m_Size = this->m_BounceInfo.m_Size;
  for ( i = 32LL * m_Size - 32; --m_Size >= 0; i -= 32 )
  {
    v4 = this->m_BounceInfo.m_Memory.m_pMemory + i;
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll((v4 + 8));
    if ( (*(v4 + 7) & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(v4 + 1);
      if ( (*(v4 + 7) & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(v4 + 1);
    }
  }
  v5 = (this->m_BounceInfo.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_BounceInfo.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<sBounceInfo,int>::Purge(&this->m_BounceInfo.m_Memory);
    if ( (this->m_BounceInfo.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<sBounceInfo,int>::Purge(&this->m_BounceInfo.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_WitchDoctor_DeathWard::Schema_DynamicBinding  (line 874, @0x0000000002b156b0, libserver.so)
// globals: CDOTA_Ability_WitchDoctor_DeathWard::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_WitchDoctor_DeathWard::Schema_DynamicBinding(
        const CDOTA_Ability_WitchDoctor_DeathWard *const this)
{
  return CDOTA_Ability_WitchDoctor_DeathWard::s_pSchemaBinding;
}


// CDOTA_Ability_WitchDoctor_DeathWard::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 874, @0x0000000002b156c0, libserver.so)
// globals: CDOTA_Ability_WitchDoctor_DeathWard::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_WitchDoctor_DeathWard::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_WitchDoctor_DeathWard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_WitchDoctor_DeathWard::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_WitchDoctor_DeathWard::CEntityInstanceEntityClass::DestructInstance  (line 874, @0x0000000002b156d0, libserver.so)  // inlines: Destruct<CDOTA_Ability_WitchDoctor_DeathWard>
void __fastcall CDOTA_Ability_WitchDoctor_DeathWard::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_WitchDoctor_DeathWard::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_WitchDoctor_DeathWard::CEntityInstanceEntityClass::FreeInstance  (line 874, @0x0000000002b156f0, libserver.so)
void __fastcall CDOTA_Ability_WitchDoctor_DeathWard::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_WitchDoctor_DeathWard::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_WitchDoctor_DeathWard::CEntityInstanceEntityClass::CanAllocate  (line 874, @0x0000000002b15710, libserver.so)
bool __fastcall CDOTA_Ability_WitchDoctor_DeathWard::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_WitchDoctor_DeathWard::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_WitchDoctor_DeathWard::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 874, @0x0000000002b15720, libserver.so)
// globals: CDOTA_Ability_WitchDoctor_DeathWard::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_WitchDoctor_DeathWard::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_WitchDoctor_DeathWard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_WitchDoctor_DeathWard::s_pSchemaBinding;
}


// CDOTA_Ability_WitchDoctor_DeathWard::CEntityInstanceEntityClass::AllocateInstance  (line 874, @0x0000000002b18fb0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_WitchDoctor_DeathWard::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_WitchDoctor_DeathWard::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 968);
  memset(v1, 0, 0x3C8u);
  return v1;
}


// CDOTA_Ability_WitchDoctor_DeathWard::CEntityInstanceEntityClass::ConstructInstance  (line 874, @0x0000000002b213c0, libserver.so)  // inlines: CDOTA_Ability_WitchDoctor_DeathWard, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_WitchDoctor_DeathWard>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_WitchDoctor_DeathWard::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_WitchDoctor_DeathWard::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 232) = -1;
    *p = &off_445C390;
    *(p + 236) = 0;
    *(p + 119) = 0;
    *(p + 240) = 0;
    *(p + 241) = 0;
  }
  return p;
}


// CDOTA_Ability_WitchDoctor_DeathWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 874, @0x0000000002b21ff0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_WitchDoctor_DeathWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_WitchDoctor_DeathWard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_WitchDoctor_DeathWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 874, @0x0000000002b22010, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_WitchDoctor_DeathWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_WitchDoctor_DeathWard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_WitchDoctor_DeathWard::GetEntityClassInternal  (line 874, @0x0000000002b2ac20, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "witch_doctor_death_ward", "CDOTA_Ability_WitchDoctor_DeathWard"
// globals: `guard variable for'CDOTA_Ability_WitchDoctor_DeathWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_DeathWardClass, CDOTA_Ability_WitchDoctor_DeathWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_DeathWardClass, __dso_handle, CDOTA_Ability_WitchDoctor_DeathWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_WitchDoctor_DeathWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_WitchDoctor_DeathWardClassInfo, CDOTA_Ability_WitchDoctor_DeathWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_WitchDoctor_DeathWardClassInfo
CEntityClass *__cdecl CDOTA_Ability_WitchDoctor_DeathWard::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_WitchDoctor_DeathWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_DeathWardClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_WitchDoctor_DeathWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_DeathWardClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_WitchDoctor_DeathWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_DeathWardClass);
    CDOTA_Ability_WitchDoctor_DeathWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_DeathWardClass._vptr_CEntityClass = off_445C310;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_WitchDoctor_DeathWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_DeathWardClass);
    __cxa_atexit(
      CDOTA_Ability_WitchDoctor_DeathWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_WitchDoctor_DeathWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_DeathWardClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_WitchDoctor_DeathWardClass != 0 )
    return &CDOTA_Ability_WitchDoctor_DeathWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_DeathWardClass;
  if ( `guard variable for'CDOTA_Ability_WitchDoctor_DeathWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_WitchDoctor_DeathWardClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_WitchDoctor_DeathWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_WitchDoctor_DeathWardClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_WitchDoctor_DeathWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_WitchDoctor_DeathWardClassInfo,
      "CDOTA_Ability_WitchDoctor_DeathWard",
      "witch_doctor_death_ward",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_WitchDoctor_DeathWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_WitchDoctor_DeathWardClassInfo);
  }
  CDOTA_Ability_WitchDoctor_DeathWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_DeathWardClass.m_pClassInfo = &CDOTA_Ability_WitchDoctor_DeathWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_WitchDoctor_DeathWardClassInfo;
  CDOTA_Ability_WitchDoctor_DeathWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_DeathWardClass.m_pBaseClassInfo = CDOTA_Ability_WitchDoctor_DeathWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_WitchDoctor_DeathWardClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_WitchDoctor_DeathWardClass = &CDOTA_Ability_WitchDoctor_DeathWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_DeathWardClass;
  CDOTA_Ability_WitchDoctor_DeathWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_WitchDoctor_DeathWardClassInfo.m_pClass = &CDOTA_Ability_WitchDoctor_DeathWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_DeathWardClass;
  CDOTA_Ability_WitchDoctor_DeathWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_DeathWardClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_WitchDoctor_DeathWardClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_WitchDoctor_DeathWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_WitchDoctor_DeathWardClass;
}


// CDOTA_Ability_WitchDoctor_DeathWard::GetStolenActivityModifier  (line 883, @0x0000000002b15730, libserver.so)
// strings: "particles/items2_fx/ward.vpcf"
const char *__fastcall CDOTA_Ability_WitchDoctor_DeathWard::GetStolenActivityModifier(
        CDOTA_Ability_WitchDoctor_DeathWard *const this)
{
  return "particles/items2_fx/ward.vpcf";
}


// CDOTA_Ability_WitchDoctor_DeathWard::OnAbilityPhaseStart  (line 905, @0x0000000002ae8800, libserver.so)  // inlines: ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle
// strings: "particles/units/heroes/hero_witchdoctor/witchdoctor_ward_cast_staff_fire.vpcf"
bool __fastcall CDOTA_Ability_WitchDoctor_DeathWard::OnAbilityPhaseStart(
        CDOTA_Ability_WitchDoctor_DeathWard *const this)
{
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v4; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  this->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_witchdoctor/witchdoctor_ward_cast_staff_fire.vpcf",
                       1,
                       Caster,
                       0,
                       0);
  v4 = CDOTABaseAbility::GetCaster(this);
  if ( v4 == 0 || !v4->m_bIsDOTANPC )
    return 1;
  (*(v4->_vptr_IHandleEntity + 206))(v4, this->m_nFXIndex, 0);
  return 1;
}


// CDOTA_Ability_WitchDoctor_DeathWard::OnAbilityPhaseInterrupted  (line 920, @0x0000000002ae9a10, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect
void __fastcall CDOTA_Ability_WitchDoctor_DeathWard::OnAbilityPhaseInterrupted(
        CDOTA_Ability_WitchDoctor_DeathWard *const this)
{
  int m_nFXIndex; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax

  m_nFXIndex = this->m_nFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 0);
}


// CDOTA_Ability_WitchDoctor_DeathWard::OnSpellStart  (line 929, @0x0000000002b083b0, libserver.so)  // inlines: Get, GetAbilityData, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetModifier_Constant_Additive, GetProjectileSpeed, GetSerialNumber, GetTeamNumber, IndexToIdentity, IsListeningToEvent, IsValid, LookupEntity, NetworkStateChanged, Set, SetBaseDamageMax, SetBaseDamageMin, ToDOTABaseNPC, operator CBaseEntity*, operator bool, operator=, operator=<int>
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorPosition, DOTA_CreateUnitByName, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, CDOTA_BaseNPC::SetControllableByPlayer, FindClearSpaceForUnit, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::HasScepter, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, KeyValues::~KeyValues (18 total)
// strings: "npc_dota_witch_doctor_death_ward", "modifier_witch_doctor_death_ward", "Hero_WitchDoctor.Death_WardBuild", "bounce_radius", "bounces_scepter"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_WitchDoctor_DeathWard::OnSpellStart(CDOTA_Ability_WitchDoctor_DeathWard *const this)
{
  int m_Value; // r13d
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v4; // r14
  CDOTA_BaseNPC *v5; // r12
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityTargetType; // r13d
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  int v10; // eax
  int LevelSpecialValue; // eax
  CConcreteEntityList *v12; // rsi
  uint32 m_Index; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CEntityIdentity *m_pEntity; // rax
  int v17; // edx
  __int16 v18; // cx
  CDOTA_BaseNPC *v19; // rax
  int v20; // eax
  __int64 v21; // rax
  float Modifier_Constant_Additive_Internal; // xmm0_4
  double v23; // xmm0_8
  DOTAAbilityData_t *v24; // rax
  float v25; // xmm2_4
  int m_iAbilityID; // r12d
  CDOTA_BaseNPC *v27; // rax
  float v28; // xmm3_4
  CDOTA_BaseNPC *v29; // rax
  float m_iProjectileMoveSpeed; // [rsp+Ch] [rbp-64h]
  float v31; // [rsp+Ch] [rbp-64h]
  float v32; // [rsp+Ch] [rbp-64h]
  Vector vLocation; // [rsp+20h] [rbp-50h] BYREF
  KeyValues kv; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v35; // [rsp+48h] [rbp-28h]
  Vector CursorPosition; // 0:xmm0_8.8,8:xmm1_4.4

  v35 = __readfsqword(0x28u);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  vLocation = CDOTABaseAbility::GetCursorPosition(this);
  v5 = DOTA_CreateUnitByName("npc_dota_witch_doctor_death_ward", &vLocation, 1, v4, Caster, m_Value);
  if ( v5 != 0 )
  {
    m_pAbilityData = this->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(this, 0);
      m_pAbilityData = this->m_pAbilityData;
    }
    m_iAbilityTargetType = m_pAbilityData->m_iAbilityTargetType;
    if ( m_iAbilityTargetType != LODWORD(v5[1]._vptr_IHandleEntity) )
    {
      (*(v5->_vptr_IHandleEntity + 22))(v5, 4504, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      LODWORD(v5[1]._vptr_IHandleEntity) = m_iAbilityTargetType;
    }
    KeyValues::KeyValues(&kv, "modifier_witch_doctor_death_ward");
    v8 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v5, v8, this, "modifier_witch_doctor_death_ward", &kv, 0);
    CDOTA_BaseNPC::UnitEmitSound(v5, "Hero_WitchDoctor.Death_WardBuild", 0.0, 0, 0);
    v9 = CDOTABaseAbility::GetCaster(this);
    v10 = (*(v9->_vptr_IHandleEntity + 414))(v9);
    CDOTA_BaseNPC::SetControllableByPlayer(v5, v10, 0);
    CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
    FindClearSpaceForUnit(v5, CursorPosition, 1);
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0);
    this->m_iDamage = LevelSpecialValue;
    v12 = CEntityHandle::gm_pEntityList;
    v5->m_iBaseDamageMin = LevelSpecialValue;
    v5->m_iBaseDamageMax = this->m_iDamage;
    m_Index = this->m_hWard.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v14 = v12->m_pIdentityChunks[(LOWORD(this->m_hWard.m_Index) >> 9) & 0x3F];
      if ( v14 != 0 )
      {
        v15 = &v14[this->m_hWard.m_Index & 0x1FF];
        if ( v15 != 0 && m_Index == v15->m_EHandle.m_Index )
        {
          v29 = CEntityHandle::operator CEntityInstance *(&this->m_hWard);
          if ( v29 != 0 && v29->m_bIsDOTANPC )
            CDOTA_BaseNPC::ForceKill(v29, 0);
        }
      }
    }
    m_pEntity = v5->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v17 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v18 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v18 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hWard.m_Index) = v18 | this->m_hWard.m_Index & 0x8000;
      this->m_hWard.m_Index = (v17 << 15) | this->m_hWard.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hWard.m_Index = -1;
    }
    this->m_fWardExpireTime = -1.0;
    this->m_iBounceRadius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bounce_radius", -1, 0);
    v19 = CDOTABaseAbility::GetCaster(this);
    if ( CDOTA_BaseNPC::HasScepter(v19) )
      v20 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bounces_scepter", -1, 0);
    else
      v20 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bounces", -1, 0);
    this->m_iBounces = v20;
    v21 = v5->m_ModifierManager.m_buffsForModifiers[72];
    m_iProjectileMoveSpeed = v5->m_iProjectileMoveSpeed;
    if ( v21 == 0xFF || v5->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v21].m_Size <= 0 )
      Modifier_Constant_Additive_Internal = 0.0;
    else
      Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                              &v5->m_ModifierManager,
                                              modifierfunction::MODIFIER_PROPERTY_PROJECTILE_SPEED_BONUS,
                                              &CModifierParams::s_Default);
    this->m_iProjectileSpeed = (Modifier_Constant_Additive_Internal + m_iProjectileMoveSpeed);
    KeyValues::~KeyValues(&kv);
  }
  v23 = (*(this->_vptr_IHandleEntity + 225))(this);
  v24 = this->m_pAbilityData;
  v25 = *&v23;
  if ( v24 == 0 )
  {
    v32 = *&v23;
    CDOTABaseAbility::LoadAbilityData(this, 0);
    v24 = this->m_pAbilityData;
    v25 = v32;
  }
  v31 = v25;
  m_iAbilityID = v24->m_iAbilityID;
  vLocation = CDOTABaseAbility::GetCursorPosition(this);
  v27 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(
    g_pGameRules,
    v27,
    0,
    m_iAbilityID,
    0,
    0,
    *&vLocation.x,
    vLocation.z,
    v31,
    v28);
}


// CDOTA_Ability_WitchDoctor_DeathWard::OnProjectileHit_ExtraData  (line 980, @0x0000000002b10480, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Color, Construct<sBounceInfo>, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetAbilityData, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Purge, Set, SetRawColor, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], sBounceInfo, sTrackingProjectileCreateInfo, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: KeyValues::GetInt, Warning, CDOTABaseAbility::GetCaster, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::FindAndRemove, CUtlVectorBase<sBounceInfo, CUtlMemory<sBounceInfo, int> >::FastRemove, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CEntityHandle::operator CEntityInstance*, KeyValues::KeyValues, KeyValues::SetInt, GetParticleManager (23 total)
// strings: "attack_index", "Failed to find bounce info?\n", "ward_onprojectilehit", "particles/units/heroes/hero_witchdoctor/witchdoctor_ward_attack.vpcf", "Invalid unit in FindUnitsInRadius?\n"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
__int64 __fastcall CDOTA_Ability_WitchDoctor_DeathWard::OnProjectileHit_ExtraData(
        CDOTA_Ability_WitchDoctor_DeathWard *const this,
        _WORD *hTarget,
        const Vector *const vLocation,
        KeyValues *pExtraData)
{
  int Int; // eax
  int m_Size; // edx
  sBounceInfo *m_pMemory; // r12
  int v9; // ebx
  char v11; // cl
  __int64 v12; // rax
  sBounceInfo *v13; // r12
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  int v16; // eax
  __int64 v17; // r14
  int v18; // eax
  CHandle<CBaseEntity> *v19; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityTargetType; // r14d
  CDOTA_BaseNPC *v22; // rax
  __int64 v23; // r14
  int i; // r15d
  const CHandle<CBaseEntity> *v25; // rsi
  CEntityInstance *v26; // rax
  CEntityInstance *v27; // rbx
  CDOTA_BaseNPC *v28; // rax
  int m_iProjectileSpeed; // eax
  CEntityIdentity *m_pEntity; // rax
  int v31; // edx
  __int16 v32; // cx
  CDOTA_BaseNPC *v33; // rax
  int v34; // eax
  sBounceInfo *v35; // rcx
  __int64 v36; // rax
  sBounceInfo *v37; // rdx
  int m_iAttackIndex; // edx
  CDOTA_BaseNPC *m_pInstance; // r14
  CDOTA_BaseNPC *v40; // rax
  double v41; // xmm0_8
  CDOTA_BaseNPC_Hero *v42; // rsi
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC_Hero *v44; // rdi
  float flRadius; // [rsp+24h] [rbp-FCh]
  CDOTA_BaseNPC *pCacheNPC; // [rsp+30h] [rbp-F0h]
  int m_iDamage; // [rsp+38h] [rbp-E8h]
  CDOTA_BaseNPC_Hero *v49; // [rsp+38h] [rbp-E8h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+40h] [rbp-E0h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-C0h] BYREF
  sTrackingProjectileCreateInfo info; // [rsp+80h] [rbp-A0h] BYREF
  unsigned __int64 v53; // [rsp+E8h] [rbp-38h]

  v53 = __readfsqword(0x28u);
  if ( pExtraData != 0 )
  {
    Int = KeyValues::GetInt(pExtraData, "attack_index", 0);
    m_Size = this->m_BounceInfo.m_Size;
    if ( m_Size <= 0 )
    {
LABEL_7:
      Warning("Failed to find bounce info?\n");
      return 1;
    }
    m_pMemory = this->m_BounceInfo.m_Memory.m_pMemory;
    if ( Int != m_pMemory->iAttackIndex )
    {
      v9 = 0;
      while ( ++v9 != m_Size )
      {
        ++m_pMemory;
        if ( Int == m_pMemory->iAttackIndex )
        {
          v11 = 1;
          goto LABEL_10;
        }
      }
      goto LABEL_7;
    }
    v12 = 0;
    v9 = 0;
    v11 = 1;
  }
  else
  {
    v9 = this->m_BounceInfo.m_Size;
    v34 = v9;
    if ( v9 == this->m_BounceInfo.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<sBounceInfo,int>::Grow(&this->m_BounceInfo.m_Memory, 1);
      v34 = this->m_BounceInfo.m_Size;
    }
    v35 = 0;
    this->m_BounceInfo.m_Size = v34 + 1;
    v36 = v9;
    v37 = &this->m_BounceInfo.m_Memory.m_pMemory[v36];
    if ( v37 != 0 )
    {
      v37->hAlreadyHitList.m_Size = 0;
      v37->hAlreadyHitList.m_Memory.m_pMemory = 0;
      v37->hAlreadyHitList.m_Memory.m_nAllocationCount = 0;
      v37->hAlreadyHitList.m_Memory.m_nGrowSize = 0;
      v35 = &this->m_BounceInfo.m_Memory.m_pMemory[v36];
    }
    m_iAttackIndex = this->m_iAttackIndex;
    this->m_iAttackIndex = m_iAttackIndex + 1;
    v35->iAttackIndex = m_iAttackIndex;
    v11 = 0;
    this->m_BounceInfo.m_Memory.m_pMemory[v36].iBounceCount = 0;
LABEL_10:
    if ( v9 == -1 )
      goto LABEL_7;
    m_pMemory = this->m_BounceInfo.m_Memory.m_pMemory;
    v12 = v9;
  }
  v13 = &m_pMemory[v12];
  pCacheNPC = 0;
  if ( (*hTarget + 2) > 1 )
  {
    v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
    if ( v14 != 0 )
    {
      v15 = &v14[*hTarget & 0x1FF];
      if ( v15 != 0 && *hTarget == v15->m_EHandle.m_Index )
      {
        m_pInstance = v15->m_pInstance;
        if ( v15->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          pCacheNPC = v15->m_pInstance;
          if ( v11 != 0 )
          {
            CDOTABaseAbility::GetCaster(this);
            m_iDamage = this->m_iDamage;
            v40 = CEntityHandle::operator CEntityInstance *(&this->m_hWard);
            if ( v40 != 0 && v40->m_bIsDOTANPC )
              v41 = ApplyDamage(v40, m_pInstance, this, m_iDamage, 1, 256);
            if ( (m_pInstance->m_iUnitType & 1) != 0
              && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance, v41) == 0 )
            {
              if ( !m_pInstance->m_bIsDOTANPC
                || (m_pInstance->m_iUnitType & 1) == 0
                || (v42 = m_pInstance, m_pInstance->m_bIsIllusion.m_Value) )
              {
                v42 = 0;
              }
              v49 = v42;
              Caster = CDOTABaseAbility::GetCaster(this);
              if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
                v44 = Caster;
              else
                v44 = 0;
              EconEntity_OnOwnerKillEaterEvent(
                v44,
                v49,
                kill_eater_event_t::kKillEaterEventType_WitchDoctor_DeathWardKills,
                1,
                INVALID_ITEM_DEF_INDEX);
            }
            pCacheNPC = m_pInstance;
          }
        }
      }
    }
  }
  v16 = v13->iBounceCount + 1;
  v13->iBounceCount = v16;
  if ( v16 > this->m_iBounces )
  {
    CUtlVectorBase<sBounceInfo,CUtlMemory<sBounceInfo,int>>::FastRemove(&this->m_BounceInfo, v9);
  }
  else
  {
    v17 = v13->hAlreadyHitList.m_Size;
    v18 = v13->hAlreadyHitList.m_Size;
    if ( v17 == v13->hAlreadyHitList.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&v13->hAlreadyHitList.m_Memory, 1);
      v18 = v13->hAlreadyHitList.m_Size;
    }
    v13->hAlreadyHitList.m_Size = v18 + 1;
    v19 = &v13->hAlreadyHitList.m_Memory.m_pMemory[v17];
    if ( v19 != 0 )
      v19->m_Index = *hTarget;
    m_pAbilityData = this->m_pAbilityData;
    hEntities.m_Size = 0;
    hEntities.m_Memory.m_pMemory = 0;
    hEntities.m_Memory.m_nAllocationCount = 0;
    hEntities.m_Memory.m_nGrowSize = 0;
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(this, 0);
      m_pAbilityData = this->m_pAbilityData;
    }
    m_iAbilityTargetType = m_pAbilityData->m_iAbilityTargetType;
    flRadius = this->m_iBounceRadius;
    v22 = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(
      v22->m_iTeamNum.m_Value,
      vLocation,
      pCacheNPC,
      flRadius,
      &hEntities,
      2,
      m_iAbilityTargetType,
      147856,
      1,
      0);
    v23 = 0;
    for ( i = 0; v13->hAlreadyHitList.m_Size > i; ++i )
    {
      v25 = &v13->hAlreadyHitList.m_Memory.m_pMemory[v23++];
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::FindAndRemove(&hEntities, v25);
    }
    if ( hEntities.m_Size != 0 )
    {
      v26 = CEntityHandle::operator CEntityInstance *(hEntities.m_Memory.m_pMemory);
      v27 = v26;
      if ( v26 != 0 && BYTE3(v26[7]._vptr_IHandleEntity) != 0 )
      {
        KeyValues::KeyValues(&kv, "ward_onprojectilehit");
        KeyValues::SetInt(&kv, "attack_index", v13->iAttackIndex);
        info.hTarget.m_Index = -1;
        info.hSource.m_Index = -1;
        info.colorGemColor = 0;
        memset(&info, 0, 28);
        info.bProvidesVision = 0;
        info.vSourceLoc = vec3_origin;
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
        GetParticleManager();
        v28 = CDOTABaseAbility::GetCaster(this);
        info.pszEffectName = CDOTA_ParticleManager::GetParticleReplacement(
                               "particles/units/heroes/hero_witchdoctor/witchdoctor_ward_attack.vpcf",
                               v28);
        m_iProjectileSpeed = this->m_iProjectileSpeed;
        info.pAbility = this;
        info.iMoveSpeed = m_iProjectileSpeed;
        info.vSourceLoc = *vLocation;
        m_pEntity = v27->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v31 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          v32 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v32 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(info.hTarget.m_Index) = v32 | info.hTarget.m_Index & 0x8000;
          info.hTarget.m_Index = (v31 << 15) | info.hTarget.m_Index & 0x7FFF;
        }
        else
        {
          info.hTarget.m_Index = -1;
        }
        info.pKVExtraData = &kv;
        v33 = CDOTABaseAbility::GetCaster(this);
        if ( v33 != 0 && v33->m_bIsDOTANPC )
          info.colorGemColor = v33->m_colorGemColor;
        CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
        KeyValues::~KeyValues(&kv);
      }
      else
      {
        Warning("Invalid unit in FindUnitsInRadius?\n");
      }
    }
    else
    {
      CUtlVectorBase<sBounceInfo,CUtlMemory<sBounceInfo,int>>::FastRemove(&this->m_BounceInfo, v9);
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hEntities);
    if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
      if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
    }
  }
  return 1;
}


// CDOTA_Ability_WitchDoctor_DeathWard::OnChannelFinish  (line 1094, @0x0000000002af1230, libserver.so)  // inlines: DOTAGameRules, Get, GetAbilityData, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, curtime, operator CBaseEntity*, operator CEntityInstance*
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTABaseAbility::GetCaster, CDOTAGamerules::SendProjectionAbilityEndChannelMessage, CDOTABaseAbility::LoadAbilityData, __stack_chk_fail, CBaseEntity::StopSound, CBaseEntity::AddEffects, CDOTA_ParticleManager::DestroyAllParticleEffectsInvolving, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, CBaseEntity::SetNextThink (14 total)
// strings: "Hero_WitchDoctor.Death_WardBuild", "modifier_stunned", "modifier_phased"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_WitchDoctor_DeathWard::OnChannelFinish(
        CDOTA_Ability_WitchDoctor_DeathWard *const this,
        bool bInterrupted)
{
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_ParticleManager *v12; // rax
  double v13; // xmm1_8
  CGlobalVars *v14; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v16; // xmm0_8
  float v17; // xmm0_4
  KeyValues kvStunned; // [rsp+0h] [rbp-60h] BYREF
  KeyValues kvPhased; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-28h]

  v20 = __readfsqword(0x28u);
  m_nFXIndex = this->m_nFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 0);
  m_Index = this->m_hWard.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hWard.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[this->m_hWard.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
      {
        m_pInstance = v7->m_pInstance;
        if ( v7->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          CBaseEntity::StopSound(v7->m_pInstance, "Hero_WitchDoctor.Death_WardBuild");
          CBaseEntity::AddEffects(m_pInstance, 32);
          v12 = GetParticleManager();
          CDOTA_ParticleManager::DestroyAllParticleEffectsInvolving(v12, m_pInstance, 1);
          KeyValues::KeyValues(&kvStunned, "modifier_stunned");
          CDOTA_BaseNPC::AddNewModifier(m_pInstance, m_pInstance, this, "modifier_stunned", &kvStunned, 0);
          KeyValues::KeyValues(&kvPhased, "modifier_phased");
          CDOTA_BaseNPC::AddNewModifier(m_pInstance, m_pInstance, this, "modifier_phased", &kvPhased, 0);
          v14 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
            }
            HIDWORD(v16) = 0;
            *&v16 = v14->m_flCurrentTime + 5.0999999;
          }
          else
          {
            *&v16 = 1084437299;
          }
          CBaseEntity::SetNextThink(this, v16, v13, 0);
          v17 = 5.0;
          if ( g_pGameRules != 0 )
            v17 = *&g_pGameRules[18].m_szQuestName[20] + 5.0;
          this->m_fWardExpireTime = v17;
          KeyValues::~KeyValues(&kvPhased);
          KeyValues::~KeyValues(&kvStunned);
        }
      }
    }
  }
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityEndChannelMessage(g_pGameRules, Caster, m_iAbilityID);
}


// CDOTA_Ability_WitchDoctor_DeathWard::Think  (line 1121, @0x0000000002af0ee0, libserver.so)  // inlines: DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, curtime, operator CBaseEntity*, operator CEntityInstance*, operator bool, operator=
// calls: CDOTABaseAbility::Think, CDOTA_BaseNPC::ForceKill, CBaseEntity::SetNextThink
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_WitchDoctor_DeathWard::Think(CDOTA_Ability_WitchDoctor_DeathWard *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  double v5; // xmm1_8
  float v6; // xmm0_4
  CDOTA_BaseNPC *m_pInstance; // rdi
  CGlobalVars *v8; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v10; // xmm0_8

  CDOTABaseAbility::Think(this);
  m_Index = this->m_hWard.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hWard.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hWard.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        *&v5 = LODWORD(this->m_fWardExpireTime);
        v6 = 0.0;
        if ( *&v5 > 0.0 )
        {
          if ( g_pGameRules != 0 )
            v6 = *&g_pGameRules[18].m_szQuestName[20];
          if ( v6 < *&v5 )
          {
            v8 = gpGlobals;
            if ( gpGlobals != 0 )
            {
              if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
              {
                m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
                if ( m_pfnWarningFunc != 0 )
                  m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
              }
              HIDWORD(v10) = 0;
              *&v10 = v8->m_flCurrentTime + 5.0;
            }
            else
            {
              *&v10 = 1084227584;
            }
            CBaseEntity::SetNextThink(this, v10, v5, 0);
          }
          else
          {
            m_pInstance = v4->m_pInstance;
            if ( v4->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
            {
              CDOTA_BaseNPC::ForceKill(m_pInstance, 0);
              this->m_hWard.m_Index = -1;
            }
            this->m_fWardExpireTime = -1.0;
            CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v5, 0);
          }
        }
      }
    }
  }
}


// CDOTA_Ability_WitchDoctor_DeathWard::GetAbilityDamageToTargetOverInterval  (line 1150, @0x0000000002b087e0, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_WitchDoctor_DeathWard::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_WitchDoctor_DeathWard *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_BaseNPC *Caster; // rax
  bool HasScepter; // al
  const char *v9; // rsi
  int v10; // r13d
  float fIntervala; // [rsp+0h] [rbp-2Ch]
  float fIntervalb; // [rsp+0h] [rbp-2Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    fIntervala = fminf(fInterval, (*(this->_vptr_IHandleEntity + 225))(this));
    Caster = CDOTABaseAbility::GetCaster(this);
    HasScepter = CDOTA_BaseNPC::HasScepter(Caster);
    v9 = "damage_scepter";
    if ( !HasScepter )
      v9 = "damage";
    v10 = 4 * CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, v9, -1, 1);
    fIntervalb = (fIntervala / (*(this->_vptr_IHandleEntity + 225))(this)) * v10;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 1)) * fIntervalb);
  }
  return result;
}


// CDOTA_Modifier_WitchDoctor_DeathWard::~CDOTA_Modifier_WitchDoctor_DeathWard  (line 1170, @0x0000000002b1aa10, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_WitchDoctor_DeathWard::~CDOTA_Modifier_WitchDoctor_DeathWard(
        CDOTA_Modifier_WitchDoctor_DeathWard *const this)
{
  this->_vptr_CDOTA_Buff = &off_445CE50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_WitchDoctor_DeathWard::~CDOTA_Modifier_WitchDoctor_DeathWard  (line 1170, @0x0000000002b1aa30, libserver.so)  // inlines: ~CDOTA_Modifier_WitchDoctor_DeathWard
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_WitchDoctor_DeathWard::~CDOTA_Modifier_WitchDoctor_DeathWard(
        CDOTA_Modifier_WitchDoctor_DeathWard *const this)
{
  this->_vptr_CDOTA_Buff = &off_445CE50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_WitchDoctor_DeathWard::IsHidden  (line 1175, @0x0000000002b15740, libserver.so)
bool __fastcall CDOTA_Modifier_WitchDoctor_DeathWard::IsHidden(CDOTA_Modifier_WitchDoctor_DeathWard *const this)
{
  return 1;
}


// CDOTA_Modifier_WitchDoctor_DeathWard::RemoveOnDeath  (line 1183, @0x0000000002b15750, libserver.so)
bool __fastcall CDOTA_Modifier_WitchDoctor_DeathWard::RemoveOnDeath(CDOTA_Modifier_WitchDoctor_DeathWard *const this)
{
  return 0;
}


// CDOTA_Modifier_WitchDoctor_DeathWard::GetNumAvoidLocations  (line 1187, @0x0000000002b15760, libserver.so)
int __fastcall CDOTA_Modifier_WitchDoctor_DeathWard::GetNumAvoidLocations(
        CDOTA_Modifier_WitchDoctor_DeathWard *const this)
{
  return 1;
}


// CDOTA_Modifier_WitchDoctor_DeathWard::GetAvoidLocation  (line 1188, @0x0000000002b1bb00, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin
Vector __fastcall CDOTA_Modifier_WitchDoctor_DeathWard::GetAvoidLocation(
        CDOTA_Modifier_WitchDoctor_DeathWard *const this,
        int iAvoid)
{
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  *&result.x = *&AbsOrigin->x;
  result.z = AbsOrigin->z;
  return result;
}


// CDOTA_Modifier_WitchDoctor_DeathWard::AvoidStrength  (line 1189, @0x0000000002b22cd0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetHealthPercent, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, RemapValClamped, ToDOTABaseNPC, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHealth
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Modifier_WitchDoctor_DeathWard::AvoidStrength(
        CDOTA_Modifier_WitchDoctor_DeathWard *const this,
        CDOTA_Bot *pBot)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  const CBaseEntity *m_pInstance; // rbx
  __int64 v6; // r12
  int v7; // eax
  __int64 v8; // rcx
  float v9; // xmm1_4
  float result; // xmm0_4

  m_Index = pBot->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pBot->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[pBot->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v6 = 100LL * CBaseEntity::GetHealth(m_pInstance);
  v7 = (*(m_pInstance->_vptr_IHandleEntity + 156))(m_pInstance);
  v8 = 1;
  if ( v7 > 0 )
    v8 = v7;
  v9 = ((v6 / v8) - 400.0) / 1100.0;
  if ( v9 < 0.0 )
    return 1.0;
  result = 0.69999999;
  if ( v9 <= 1.0 )
    return (v9 * -0.30000001) + 1.0;
  return result;
}


// CDOTA_Modifier_WitchDoctor_DeathWard::GetAvoidRadius  (line 1190, @0x0000000002b15770, libserver.so)
float __fastcall CDOTA_Modifier_WitchDoctor_DeathWard::GetAvoidRadius(
        CDOTA_Modifier_WitchDoctor_DeathWard *const this,
        int iAvoid)
{
  return 800.0;
}


// CDOTA_Modifier_WitchDoctor_DeathWard::IsAvoidMagical  (line 1191, @0x0000000002b15780, libserver.so)
bool __fastcall CDOTA_Modifier_WitchDoctor_DeathWard::IsAvoidMagical(CDOTA_Modifier_WitchDoctor_DeathWard *const this)
{
  return 1;
}


// CDOTA_Modifier_WitchDoctor_DeathWard::IsPersistentAvoidance  (line 1192, @0x0000000002b15790, libserver.so)
bool __fastcall CDOTA_Modifier_WitchDoctor_DeathWard::IsPersistentAvoidance(
        CDOTA_Modifier_WitchDoctor_DeathWard *const this)
{
  return 1;
}


// CDOTA_Modifier_WitchDoctor_DeathWard::OnCreated  (line 1205, @0x0000000002b088b0, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter
// strings: "bounce_radius", "bounces_scepter"
void __fastcall CDOTA_Modifier_WitchDoctor_DeathWard::OnCreated(
        CDOTA_Modifier_WitchDoctor_DeathWard *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  this->m_iBounceRadius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bounce_radius", -1, 0);
  Caster = CDOTA_Buff::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
  {
    v6 = CDOTA_Buff::GetAbility(this);
    this->m_iBounces = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "bounces_scepter", -1, 0);
  }
  else
  {
    v5 = CDOTA_Buff::GetAbility(this);
    this->m_iBounces = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bounces", -1, 0);
  }
}


// CDOTA_Modifier_WitchDoctor_DeathWard::DeclareFunctions  (line 1222, @0x0000000002ae7a30, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_WitchDoctor_DeathWard::OnAttackLanded(CModifierParams const&), CDOTA_Modifier_WitchDoctor_DeathWard::GetModifierAttackRangeBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_WitchDoctor_DeathWard::DeclareFunctions(
        CDOTA_Modifier_WitchDoctor_DeathWard *const this)
{
  this->m_Functions[121].__pfn = CDOTA_Modifier_WitchDoctor_DeathWard::OnAttackLanded;
  this->m_Functions[121].__delta = 0;
  this->m_Functions[69].__delta = 0;
  this->m_Functions[69].__pfn = CDOTA_Modifier_WitchDoctor_DeathWard::GetModifierAttackRangeBonus;
}


// CDOTA_Modifier_WitchDoctor_DeathWard::OnAttackLanded  (line 1228, @0x0000000002af21d0, libserver.so)  // inlines: AttackerNPC, CEntityHandle, CHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, Set, TargetNPC, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, GetProjectileAttachmentName, CBaseAnimating::GetAttachment, CDOTA_Buff::GetCaster, EconEntity_OnOwnerKillEaterEvent
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
ModifierVariant_t __fastcall CDOTA_Modifier_WitchDoctor_DeathWard::OnAttackLanded(
        CDOTA_Modifier_WitchDoctor_DeathWard *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTABaseAbility *Ability; // r13
  uint32 v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CDOTA_BaseNPC_Hero *v13; // r14
  const char *ProjectileAttachmentName; // r15
  const CBaseAnimating *v15; // rax
  CEntityIdentity *m_pEntity; // rdx
  int (**vptr_IHandleEntity)(...); // rax
  int (*v18)(...); // rax
  __int16 v19; // r8
  CDOTA_BaseNPC_Hero *v20; // rbx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC_Hero *v22; // rdi
  int v23[4]; // [rsp+0h] [rbp-50h] BYREF
  Vector vecOrigin; // [rsp+10h] [rbp-40h] BYREF

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
          && this->m_iBounces > 0
          && !params->bNoCooldown
          && params->nDamageCategory == 1 )
        {
          Ability = CDOTA_Buff::GetAbility(this);
          if ( Ability != 0 )
          {
            v10 = params->htarget.m_Index;
            if ( v10 + 2 > 1 )
            {
              v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
              if ( v11 != 0 )
              {
                v12 = &v11[params->htarget.m_Index & 0x1FF];
                if ( v12 != 0 && v10 == v12->m_EHandle.m_Index )
                {
                  v13 = v12->m_pInstance;
                  if ( v12->m_pInstance != 0 && v13->m_bIsDOTANPC )
                  {
                    ProjectileAttachmentName = GetProjectileAttachmentName(3);
                    v15 = (*(v13->_vptr_IHandleEntity + 43))(v13);
                    CBaseAnimating::GetAttachment(v15, ProjectileAttachmentName, &vecOrigin);
                    m_pEntity = v13->m_pEntity;
                    vptr_IHandleEntity = Ability->_vptr_IHandleEntity;
                    v23[0] = -1;
                    v18 = vptr_IHandleEntity[290];
                    if ( m_pEntity != 0 )
                    {
                      v19 = 0x7FFF;
                      if ( m_pEntity->m_EHandle.m_Index != -1 )
                        v19 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                      v23[0] = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v19 & 0x7FFF;
                    }
                    v18(Ability, v23, &vecOrigin, 0);
                    if ( (*(v13->_vptr_IHandleEntity + 408))(v13) == 0 )
                    {
                      v20 = 0;
                      if ( v13->m_bIsDOTANPC && (v13->m_iUnitType & 1) != 0 && !v13->m_bIsIllusion.m_Value )
                        v20 = v13;
                      Caster = CDOTA_Buff::GetCaster(this);
                      v22 = 0;
                      if ( Caster != 0
                        && Caster->m_bIsDOTANPC
                        && (Caster->m_iUnitType & 1) != 0
                        && !Caster->m_bIsIllusion.m_Value )
                      {
                        v22 = Caster;
                      }
                      EconEntity_OnOwnerKillEaterEvent(
                        v22,
                        v20,
                        kill_eater_event_t::kKillEaterEventType_WitchDoctor_DeathWardKills,
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
  }
  return 1uLL;
}


// CDOTA_Modifier_WitchDoctor_DeathWard::GetModifierAttackRangeBonus  (line 1257, @0x0000000002b08950, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_witch_doctor_1"
ModifierVariant_t __fastcall CDOTA_Modifier_WitchDoctor_DeathWard::GetModifierAttackRangeBonus(
        CDOTA_Modifier_WitchDoctor_DeathWard *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int LevelSpecialValue; // eax
  __m128i v5; // xmm0
  ModifierVariant_t result; // 0:rax.16

  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_witch_doctor_1", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
    result.m_szVal = 0;
    *v5.m128i_i32 = LevelSpecialValue;
    *&result.m_eType = (_mm_cvtsi128_si32(v5) << 32) | 1;
  }
  else
  {
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(0LL) << 32) | 1;
  }
  return result;
}


// CDOTA_Modifier_WitchDoctor_DeathWard::CheckState  (line 1272, @0x0000000002ae7a70, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_WitchDoctor_DeathWard::CheckState(
        CDOTA_Modifier_WitchDoctor_DeathWard *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x800300uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFF7FFCFFLL;
}


