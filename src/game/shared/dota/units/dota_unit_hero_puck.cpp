// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_puck.cpp:41
class CDOTA_Unit_Hero_Puck : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Puck(CDOTA_Unit_Hero_Puck &);
	CDOTA_Unit_Hero_Puck(CDOTA_Unit_Hero_Puck &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool UsesConstantGesture(bool);
	CDOTA_Unit_Hero_Puck();
	virtual ~CDOTA_Unit_Hero_Puck();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[380] UsesConstantGesture
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_puck.cpp:54
class C_CDOTA_Unit_Hero_Puck_MapInstall {
	C_CDOTA_Unit_Hero_Puck_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_puck.cpp:67
class CDOTA_Ability_Puck_EtherealJaunt : public CDOTABaseAbility {
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
	CDOTA_Ability_Puck_EtherealJaunt(CDOTA_Ability_Puck_EtherealJaunt &);
	CDOTA_Ability_Puck_EtherealJaunt(CDOTA_Ability_Puck_EtherealJaunt &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CDOTA_Ability_Puck_EtherealJaunt();
	virtual bool ProcsMagicStick();
	virtual void OnSpellStart();
	virtual int GetConceptRecipientType();
	virtual const char * GetAssociatedPrimaryAbilities();
	virtual ~CDOTA_Ability_Puck_EtherealJaunt();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[239] ProcsMagicStick
	// vtable[266] OnSpellStart
	// vtable[299] GetConceptRecipientType
	// vtable[303] GetAssociatedPrimaryAbilities
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_puck.cpp:90
class CDOTA_Ability_Puck_IllusoryOrb : public CDOTABaseAbility {
public:

private:

	int m_iProjectile;  // +0x390

	int orb_vision;  // +0x3b0
	float vision_duration;  // +0x3b4
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
	CDOTA_Ability_Puck_IllusoryOrb(CDOTA_Ability_Puck_IllusoryOrb &);
	CDOTA_Ability_Puck_IllusoryOrb(CDOTA_Ability_Puck_IllusoryOrb &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Ability_Puck_IllusoryOrb();
	virtual void OnUpgrade();
	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual void OnProjectileThink(const Vector &);
	virtual void OnUnStolen();
	Vector GetOrbLocation();
	void DestroyOrb();
	bool IsOrbValid();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Puck_IllusoryOrb();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[268] OnUpgrade
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[291] OnProjectileThink
	// vtable[308] OnUnStolen
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 976
};

// src/game/shared/dota/units/dota_unit_hero_puck.cpp:137
class C_CDOTA_Ability_Puck_IllusoryOrb_MapInstall {
	C_CDOTA_Ability_Puck_IllusoryOrb_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_puck.cpp:380
class CDOTA_Ability_Puck_WaningRift : public CDOTABaseAbility {
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
	CDOTA_Ability_Puck_WaningRift(CDOTA_Ability_Puck_WaningRift &);
	CDOTA_Ability_Puck_WaningRift(CDOTA_Ability_Puck_WaningRift &);
	CDOTA_Ability_Puck_WaningRift();
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
	virtual int GetConceptRecipientType();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual bool HasSilence();
	virtual ~CDOTA_Ability_Puck_WaningRift();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[333] GetAOERadius
	// vtable[266] OnSpellStart
	// vtable[299] GetConceptRecipientType
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[325] HasSilence
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_puck.cpp:395
class C_CDOTA_Ability_Puck_WaningRift_MapInstall {
	C_CDOTA_Ability_Puck_WaningRift_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_puck.cpp:467
class CDOTA_Ability_Puck_PhaseShift : public CDOTABaseAbility {
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
	CDOTA_Ability_Puck_PhaseShift(CDOTA_Ability_Puck_PhaseShift &);
	CDOTA_Ability_Puck_PhaseShift(CDOTA_Ability_Puck_PhaseShift &);
	CDOTA_Ability_Puck_PhaseShift();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual int GetConceptRecipientType();
	virtual bool ProcsMagicStick();
	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Puck_PhaseShift();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[299] GetConceptRecipientType
	// vtable[239] ProcsMagicStick
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_puck.cpp:500
class CDOTA_Modifier_Puck_PhaseShift : public CDOTA_Buff {
public:

private:

	CDOTA_Modifier_Puck_PhaseShift();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierInvisibilityLevel(const CModifierParams &);
	virtual ModifierVariant_t OnOrder(const CModifierParams &);
	virtual ModifierVariant_t GetDisableAutoAttack(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Puck_PhaseShift();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierInvisibilityLevel
	// vtable[90] OnOrder
	// vtable[91] GetDisableAutoAttack
	// vtable[5] CheckState
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_puck.cpp:639
class CDOTA_Ability_Puck_DreamCoil : public CDOTABaseAbility {
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
	CDOTA_Ability_Puck_DreamCoil(CDOTA_Ability_Puck_DreamCoil &);
	CDOTA_Ability_Puck_DreamCoil(CDOTA_Ability_Puck_DreamCoil &);
	CDOTA_Ability_Puck_DreamCoil();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual int GetConceptRecipientType();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_Puck_DreamCoil();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[299] GetConceptRecipientType
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_puck.cpp:666
class C_CDOTA_Ability_Puck_DreamCoil_MapInstall {
	C_CDOTA_Ability_Puck_DreamCoil_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_puck.cpp:716
class CDOTA_Modifier_Puck_DreamCoil_Thinker : public CDOTA_Buff {
public:

private:

	int coil_radius;  // +0xbc0
	int coil_break_radius;  // +0xbc4
	float coil_stun_duration;  // +0xbc8
	float coil_stun_duration_scepter;  // +0xbcc
	int coil_break_damage;  // +0xbd0
	int coil_break_damage_scepter;  // +0xbd4
	bool m_bHasScepter;  // +0xbd8

	CDOTA_Modifier_Puck_DreamCoil_Thinker();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Puck_DreamCoil_Thinker();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// sizeof = 3064
};

// src/game/shared/dota/units/dota_unit_hero_puck.cpp:872
class CDOTA_Modifier_Puck_Coiled : public CDOTA_Buff {
public:

	CDOTA_Modifier_Puck_Coiled(CDOTA_Modifier_Puck_Coiled &);
	CDOTA_Modifier_Puck_Coiled(const CDOTA_Modifier_Puck_Coiled &);
	CDOTA_Modifier_Puck_Coiled();
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Puck_Coiled();

	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Puck::~CDOTA_Unit_Hero_Puck  (line 41, @0x0000000002a18cf0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Puck::~CDOTA_Unit_Hero_Puck(CDOTA_Unit_Hero_Puck *const this)
{
  this->_vptr_IHandleEntity = &off_4374E90;
  this->_vptr_INextBotEventResponder = &off_4375E70;
  this->_vptr_CObstructionObject = &off_43761A0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Puck::~CDOTA_Unit_Hero_Puck  (line 41, @0x0000000002a18d30, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Puck
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Puck::~CDOTA_Unit_Hero_Puck(CDOTA_Unit_Hero_Puck *const this)
{
  this->_vptr_IHandleEntity = &off_4374E90;
  this->_vptr_INextBotEventResponder = &off_4375E70;
  this->_vptr_CObstructionObject = &off_43761A0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Puck::Schema_DynamicBinding  (line 43, @0x0000000002a0b630, libserver.so)
// globals: CDOTA_Unit_Hero_Puck::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Puck::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Puck *const this)
{
  return CDOTA_Unit_Hero_Puck::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Puck::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 43, @0x0000000002a0b660, libserver.so)
// globals: CDOTA_Unit_Hero_Puck::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Puck::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Puck::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Puck::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Puck::CEntityInstanceEntityClass::DestructInstance  (line 43, @0x0000000002a0b670, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Puck>
void __fastcall CDOTA_Unit_Hero_Puck::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Puck::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Puck::CEntityInstanceEntityClass::FreeInstance  (line 43, @0x0000000002a0b690, libserver.so)
void __fastcall CDOTA_Unit_Hero_Puck::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Puck::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Puck::CEntityInstanceEntityClass::CanAllocate  (line 43, @0x0000000002a0b6b0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Puck::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Puck::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Puck::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 43, @0x0000000002a0b6c0, libserver.so)
// globals: CDOTA_Unit_Hero_Puck::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Puck::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Puck::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Puck::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Puck::CEntityInstanceEntityClass::AllocateInstance  (line 43, @0x0000000002a10300, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Puck::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Puck::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Puck::CEntityInstanceEntityClass::ConstructInstance  (line 43, @0x0000000002a13720, libserver.so)  // inlines: CDOTA_Unit_Hero_Puck, Construct<CDOTA_Unit_Hero_Puck>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Puck::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Puck::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_4374E90;
    *(p + 236) = &off_4375E70;
    *(p + 257) = &off_43761A0;
  }
  return p;
}


// CDOTA_Unit_Hero_Puck::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 43, @0x0000000002a20630, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Puck::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Puck::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Puck::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 43, @0x0000000002a20b80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Puck::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Puck::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Puck::GetEntityClassInternal  (line 43, @0x0000000002a3c0e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "npc_dota_hero_puck", "CDOTA_Unit_Hero_Puck"
// globals: `guard variable for'CDOTA_Unit_Hero_Puck::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PuckClass, CDOTA_Unit_Hero_Puck::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PuckClass, __dso_handle, CDOTA_Unit_Hero_Puck::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Puck::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PuckClassInfo, CDOTA_Unit_Hero_Puck::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PuckClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Puck::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Puck::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PuckClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Puck::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PuckClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Puck::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PuckClass);
    CDOTA_Unit_Hero_Puck::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PuckClass._vptr_CEntityClass = off_4374E10;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Puck::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PuckClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Puck::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Puck::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PuckClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_PuckClass != 0 )
    return &CDOTA_Unit_Hero_Puck::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PuckClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Puck::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PuckClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Puck::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PuckClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Puck::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PuckClassInfo,
      "CDOTA_Unit_Hero_Puck",
      "npc_dota_hero_puck",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Puck::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PuckClassInfo);
  }
  CDOTA_Unit_Hero_Puck::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PuckClass.m_pClassInfo = &CDOTA_Unit_Hero_Puck::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PuckClassInfo;
  CDOTA_Unit_Hero_Puck::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PuckClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Puck::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PuckClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_PuckClass = &CDOTA_Unit_Hero_Puck::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PuckClass;
  CDOTA_Unit_Hero_Puck::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PuckClassInfo.m_pClass = &CDOTA_Unit_Hero_Puck::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PuckClass;
  CDOTA_Unit_Hero_Puck::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PuckClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_PuckClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Puck::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PuckClass;
}


// CDOTA_Unit_Hero_Puck::UsesConstantGesture  (line 47, @0x0000000002a0b6d0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Puck::UsesConstantGesture(CDOTA_Unit_Hero_Puck *const this, bool bPortrait)
{
  return 1;
}


// CDOTA_Unit_Hero_Puck::YouForgotToImplementOrDeclareServerClass  (line 54, @0x00000000029b5ef0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Puck::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Puck *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Puck::GetServerClass  (line 54, @0x00000000029c9c30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Puck::GetServerClass(CDOTA_Unit_Hero_Puck *const this)
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


// CDOTA_Ability_Puck_EtherealJaunt::~CDOTA_Ability_Puck_EtherealJaunt  (line 67, @0x0000000002a17c10, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Puck_EtherealJaunt::~CDOTA_Ability_Puck_EtherealJaunt(
        CDOTA_Ability_Puck_EtherealJaunt *const this)
{
  this->_vptr_IHandleEntity = &off_4376D70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Puck_EtherealJaunt::~CDOTA_Ability_Puck_EtherealJaunt  (line 67, @0x0000000002a17c30, libserver.so)  // inlines: ~CDOTA_Ability_Puck_EtherealJaunt
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Puck_EtherealJaunt::~CDOTA_Ability_Puck_EtherealJaunt(
        CDOTA_Ability_Puck_EtherealJaunt *const this)
{
  this->_vptr_IHandleEntity = &off_4376D70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Puck_EtherealJaunt::Schema_DynamicBinding  (line 69, @0x0000000002a0b6e0, libserver.so)
// globals: CDOTA_Ability_Puck_EtherealJaunt::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Puck_EtherealJaunt::Schema_DynamicBinding(
        const CDOTA_Ability_Puck_EtherealJaunt *const this)
{
  return CDOTA_Ability_Puck_EtherealJaunt::s_pSchemaBinding;
}


// CDOTA_Ability_Puck_EtherealJaunt::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 69, @0x0000000002a0b6f0, libserver.so)
// globals: CDOTA_Ability_Puck_EtherealJaunt::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Puck_EtherealJaunt::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Puck_EtherealJaunt::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Puck_EtherealJaunt::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Puck_EtherealJaunt::CEntityInstanceEntityClass::DestructInstance  (line 69, @0x0000000002a0b700, libserver.so)  // inlines: Destruct<CDOTA_Ability_Puck_EtherealJaunt>
void __fastcall CDOTA_Ability_Puck_EtherealJaunt::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Puck_EtherealJaunt::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Puck_EtherealJaunt::CEntityInstanceEntityClass::FreeInstance  (line 69, @0x0000000002a0b720, libserver.so)
void __fastcall CDOTA_Ability_Puck_EtherealJaunt::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Puck_EtherealJaunt::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Puck_EtherealJaunt::CEntityInstanceEntityClass::CanAllocate  (line 69, @0x0000000002a0b740, libserver.so)
bool __fastcall CDOTA_Ability_Puck_EtherealJaunt::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Puck_EtherealJaunt::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Puck_EtherealJaunt::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 69, @0x0000000002a0b750, libserver.so)
// globals: CDOTA_Ability_Puck_EtherealJaunt::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Puck_EtherealJaunt::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Puck_EtherealJaunt::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Puck_EtherealJaunt::s_pSchemaBinding;
}


// CDOTA_Ability_Puck_EtherealJaunt::CEntityInstanceEntityClass::AllocateInstance  (line 69, @0x0000000002a10340, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Puck_EtherealJaunt::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Puck_EtherealJaunt::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Puck_EtherealJaunt::CEntityInstanceEntityClass::ConstructInstance  (line 69, @0x0000000002a1e2a0, libserver.so)  // inlines: CDOTA_Ability_Puck_EtherealJaunt, Construct<CDOTA_Ability_Puck_EtherealJaunt>
// calls: CDOTABaseAbility::CDOTABaseAbility, CDOTABaseAbility::SetActivated, CDOTABaseAbility::~CDOTABaseAbility, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_Ability_Puck_EtherealJaunt::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Puck_EtherealJaunt::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4376D70;
    CDOTABaseAbility::SetActivated(p, 0);
  }
  return p;
}


// CDOTA_Ability_Puck_EtherealJaunt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 69, @0x0000000002a200d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Puck_EtherealJaunt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Puck_EtherealJaunt::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Puck_EtherealJaunt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 69, @0x0000000002a200f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Puck_EtherealJaunt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Puck_EtherealJaunt::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Puck_EtherealJaunt::GetEntityClassInternal  (line 69, @0x0000000002a39d70, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "puck_ethereal_jaunt", "CDOTA_Ability_Puck_EtherealJaunt"
// globals: `guard variable for'CDOTA_Ability_Puck_EtherealJaunt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_EtherealJauntClass, CDOTA_Ability_Puck_EtherealJaunt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_EtherealJauntClass, __dso_handle, CDOTA_Ability_Puck_EtherealJaunt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Puck_EtherealJaunt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_EtherealJauntClassInfo, CDOTA_Ability_Puck_EtherealJaunt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_EtherealJauntClassInfo
CEntityClass *__cdecl CDOTA_Ability_Puck_EtherealJaunt::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Puck_EtherealJaunt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_EtherealJauntClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Puck_EtherealJaunt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_EtherealJauntClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Puck_EtherealJaunt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_EtherealJauntClass);
    CDOTA_Ability_Puck_EtherealJaunt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_EtherealJauntClass._vptr_CEntityClass = off_43761F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Puck_EtherealJaunt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_EtherealJauntClass);
    __cxa_atexit(
      CDOTA_Ability_Puck_EtherealJaunt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Puck_EtherealJaunt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_EtherealJauntClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Puck_EtherealJauntClass != 0 )
    return &CDOTA_Ability_Puck_EtherealJaunt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_EtherealJauntClass;
  if ( `guard variable for'CDOTA_Ability_Puck_EtherealJaunt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_EtherealJauntClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Puck_EtherealJaunt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_EtherealJauntClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Puck_EtherealJaunt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_EtherealJauntClassInfo,
      "CDOTA_Ability_Puck_EtherealJaunt",
      "puck_ethereal_jaunt",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Puck_EtherealJaunt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_EtherealJauntClassInfo);
  }
  CDOTA_Ability_Puck_EtherealJaunt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_EtherealJauntClass.m_pClassInfo = &CDOTA_Ability_Puck_EtherealJaunt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_EtherealJauntClassInfo;
  CDOTA_Ability_Puck_EtherealJaunt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_EtherealJauntClass.m_pBaseClassInfo = CDOTA_Ability_Puck_EtherealJaunt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_EtherealJauntClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Puck_EtherealJauntClass = &CDOTA_Ability_Puck_EtherealJaunt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_EtherealJauntClass;
  CDOTA_Ability_Puck_EtherealJaunt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_EtherealJauntClassInfo.m_pClass = &CDOTA_Ability_Puck_EtherealJaunt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_EtherealJauntClass;
  CDOTA_Ability_Puck_EtherealJaunt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_EtherealJauntClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Puck_EtherealJauntClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Puck_EtherealJaunt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_EtherealJauntClass;
}


// CDOTA_Ability_Puck_EtherealJaunt::ProcsMagicStick  (line 75, @0x0000000002a0b760, libserver.so)
bool __fastcall CDOTA_Ability_Puck_EtherealJaunt::ProcsMagicStick(CDOTA_Ability_Puck_EtherealJaunt *const this)
{
  return 0;
}


// CDOTA_Ability_Puck_EtherealJaunt::GetConceptRecipientType  (line 77, @0x0000000002a0b770, libserver.so)
int __fastcall CDOTA_Ability_Puck_EtherealJaunt::GetConceptRecipientType(CDOTA_Ability_Puck_EtherealJaunt *const this)
{
  return 4;
}


// CDOTA_Ability_Puck_EtherealJaunt::GetAssociatedPrimaryAbilities  (line 79, @0x0000000002a0b780, libserver.so)
// strings: "puck_illusory_orb"
const char *__fastcall CDOTA_Ability_Puck_EtherealJaunt::GetAssociatedPrimaryAbilities(
        CDOTA_Ability_Puck_EtherealJaunt *const this)
{
  return "puck_illusory_orb";
}


// CDOTA_Ability_Puck_IllusoryOrb::~CDOTA_Ability_Puck_IllusoryOrb  (line 90, @0x0000000002a17c60, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Puck_IllusoryOrb::~CDOTA_Ability_Puck_IllusoryOrb(
        CDOTA_Ability_Puck_IllusoryOrb *const this)
{
  this->_vptr_IHandleEntity = &off_43762F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Puck_IllusoryOrb::~CDOTA_Ability_Puck_IllusoryOrb  (line 90, @0x0000000002a17c80, libserver.so)  // inlines: ~CDOTA_Ability_Puck_IllusoryOrb
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Puck_IllusoryOrb::~CDOTA_Ability_Puck_IllusoryOrb(
        CDOTA_Ability_Puck_IllusoryOrb *const this)
{
  this->_vptr_IHandleEntity = &off_43762F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Puck_IllusoryOrb::Schema_DynamicBinding  (line 92, @0x0000000002a0b790, libserver.so)
// globals: CDOTA_Ability_Puck_IllusoryOrb::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Puck_IllusoryOrb::Schema_DynamicBinding(
        const CDOTA_Ability_Puck_IllusoryOrb *const this)
{
  return CDOTA_Ability_Puck_IllusoryOrb::s_pSchemaBinding;
}


// CDOTA_Ability_Puck_IllusoryOrb::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 92, @0x0000000002a0b7a0, libserver.so)
// globals: CDOTA_Ability_Puck_IllusoryOrb::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Puck_IllusoryOrb::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Puck_IllusoryOrb::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Puck_IllusoryOrb::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Puck_IllusoryOrb::CEntityInstanceEntityClass::DestructInstance  (line 92, @0x0000000002a0b7b0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Puck_IllusoryOrb>
void __fastcall CDOTA_Ability_Puck_IllusoryOrb::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Puck_IllusoryOrb::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Puck_IllusoryOrb::CEntityInstanceEntityClass::FreeInstance  (line 92, @0x0000000002a0b7d0, libserver.so)
void __fastcall CDOTA_Ability_Puck_IllusoryOrb::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Puck_IllusoryOrb::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Puck_IllusoryOrb::CEntityInstanceEntityClass::CanAllocate  (line 92, @0x0000000002a0b7f0, libserver.so)
bool __fastcall CDOTA_Ability_Puck_IllusoryOrb::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Puck_IllusoryOrb::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Puck_IllusoryOrb::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 92, @0x0000000002a0b800, libserver.so)
// globals: CDOTA_Ability_Puck_IllusoryOrb::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Puck_IllusoryOrb::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Puck_IllusoryOrb::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Puck_IllusoryOrb::s_pSchemaBinding;
}


// CDOTA_Ability_Puck_IllusoryOrb::CEntityInstanceEntityClass::AllocateInstance  (line 92, @0x0000000002a10380, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Puck_IllusoryOrb::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Puck_IllusoryOrb::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 976);
  memset(v1, 0, 0x3D0u);
  return v1;
}


// CDOTA_Ability_Puck_IllusoryOrb::CEntityInstanceEntityClass::ConstructInstance  (line 92, @0x0000000002a1e2f0, libserver.so)  // inlines: CDOTA_Ability_Puck_IllusoryOrb, Construct<CDOTA_Ability_Puck_IllusoryOrb>, InValidate, SndOpEventGuid_t, SoundEventGuid_t
// calls: CDOTABaseAbility::CDOTABaseAbility, CountdownTimer::CountdownTimer, CDOTABaseAbility::~CDOTABaseAbility, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_Ability_Puck_IllusoryOrb::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Puck_IllusoryOrb::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43762F0;
    CountdownTimer::CountdownTimer((p + 920));
    *(p + 242) = 0;
    *(p + 243) = -1;
    *(p + 119) = 0;
    *(p + 120) = 0;
  }
  return p;
}


// CDOTA_Ability_Puck_IllusoryOrb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 92, @0x0000000002a20120, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Puck_IllusoryOrb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Puck_IllusoryOrb::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Puck_IllusoryOrb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 92, @0x0000000002a20140, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Puck_IllusoryOrb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Puck_IllusoryOrb::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Puck_IllusoryOrb::GetEntityClassInternal  (line 92, @0x0000000002a39ec0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "puck_illusory_orb", "CDOTA_Ability_Puck_IllusoryOrb"
// globals: `guard variable for'CDOTA_Ability_Puck_IllusoryOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_IllusoryOrbClass, CDOTA_Ability_Puck_IllusoryOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_IllusoryOrbClass, __dso_handle, CDOTA_Ability_Puck_IllusoryOrb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Puck_IllusoryOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_IllusoryOrbClassInfo, CDOTA_Ability_Puck_IllusoryOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_IllusoryOrbClassInfo
CEntityClass *__cdecl CDOTA_Ability_Puck_IllusoryOrb::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Puck_IllusoryOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_IllusoryOrbClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Puck_IllusoryOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_IllusoryOrbClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Puck_IllusoryOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_IllusoryOrbClass);
    CDOTA_Ability_Puck_IllusoryOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_IllusoryOrbClass._vptr_CEntityClass = off_4376270;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Puck_IllusoryOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_IllusoryOrbClass);
    __cxa_atexit(
      CDOTA_Ability_Puck_IllusoryOrb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Puck_IllusoryOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_IllusoryOrbClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Puck_IllusoryOrbClass != 0 )
    return &CDOTA_Ability_Puck_IllusoryOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_IllusoryOrbClass;
  if ( `guard variable for'CDOTA_Ability_Puck_IllusoryOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_IllusoryOrbClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Puck_IllusoryOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_IllusoryOrbClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Puck_IllusoryOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_IllusoryOrbClassInfo,
      "CDOTA_Ability_Puck_IllusoryOrb",
      "puck_illusory_orb",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Puck_IllusoryOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_IllusoryOrbClassInfo);
  }
  CDOTA_Ability_Puck_IllusoryOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_IllusoryOrbClass.m_pClassInfo = &CDOTA_Ability_Puck_IllusoryOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_IllusoryOrbClassInfo;
  CDOTA_Ability_Puck_IllusoryOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_IllusoryOrbClass.m_pBaseClassInfo = CDOTA_Ability_Puck_IllusoryOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_IllusoryOrbClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Puck_IllusoryOrbClass = &CDOTA_Ability_Puck_IllusoryOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_IllusoryOrbClass;
  CDOTA_Ability_Puck_IllusoryOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_IllusoryOrbClassInfo.m_pClass = &CDOTA_Ability_Puck_IllusoryOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_IllusoryOrbClass;
  CDOTA_Ability_Puck_IllusoryOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_IllusoryOrbClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Puck_IllusoryOrbClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Puck_IllusoryOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_IllusoryOrbClass;
}


// CDOTA_Ability_Puck_IllusoryOrb::GetAssociatedSecondaryAbilities  (line 116, @0x0000000002a0b810, libserver.so)
// strings: "puck_ethereal_jaunt"
const char *__fastcall CDOTA_Ability_Puck_IllusoryOrb::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Puck_IllusoryOrb *const this)
{
  return "puck_ethereal_jaunt";
}


// CDOTA_Ability_Puck_IllusoryOrb::YouForgotToImplementOrDeclareServerClass  (line 137, @0x00000000029b5f00, libserver.so)
int __fastcall CDOTA_Ability_Puck_IllusoryOrb::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Puck_IllusoryOrb *const this)
{
  return 0;
}


// CDOTA_Ability_Puck_IllusoryOrb::GetServerClass  (line 137, @0x00000000029c9a30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Puck_IllusoryOrb::GetServerClass(CDOTA_Ability_Puck_IllusoryOrb *const this)
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


// CDOTA_Ability_Puck_IllusoryOrb::OnUpgrade  (line 146, @0x00000000029b8190, libserver.so)
// calls: CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName
// strings: "puck_ethereal_jaunt"
void __fastcall CDOTA_Ability_Puck_IllusoryOrb::OnUpgrade(CDOTA_Ability_Puck_IllusoryOrb *const this)
{
  CDOTABaseAbility *m_pEtherealJaunt; // rdi
  CDOTA_BaseNPC *Caster; // rax

  m_pEtherealJaunt = this->m_pEtherealJaunt;
  if ( m_pEtherealJaunt != 0
    || (Caster = CDOTABaseAbility::GetCaster(this),
        m_pEtherealJaunt = CDOTA_BaseNPC::FindAbilityByName(Caster, "puck_ethereal_jaunt", 0),
        this->m_pEtherealJaunt = m_pEtherealJaunt,
        m_pEtherealJaunt != 0) )
  {
    if ( m_pEtherealJaunt->m_iLevel.m_Value < this->m_iLevel.m_Value )
      CDOTABaseAbility::UpgradeAbility(m_pEtherealJaunt, 0);
  }
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Puck_IllusoryOrb::OnSpellStart  (line 164, @0x00000000029ec070, libserver.so)  // inlines: CBroadcastRecipientFilter, CEntityHandle, CHandle, CReliableBroadcastRecipientFilter, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, InValidate, NetworkStateChanged, NormalizeInPlace, Set, Start, StopSoundEvent, VectorMultiply, VectorSubtract, operator*, operator-, operator=, operator=<float>, sLinearProjectileCreateInfo, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorPosition, VectorNormalize, CDOTA_BaseNPC::GetModifiedAbilityParticleName, CDOTA_ProjectileManager::CreateLinearProjectile, CountdownTimer::Now, DOTA_EmitSoundLocation, CDOTABaseAbility::SetActivated (21 total)
// strings: "orb_speed", "special_bonus_unique_puck", "orb_vision", "particles/units/heroes/hero_puck/puck_illusory_orb.vpcf", "Hero_Puck.Illusory_Orb", "puck_ethereal_jaunt"
void __fastcall CDOTA_Ability_Puck_IllusoryOrb::OnSpellStart(CDOTA_Ability_Puck_IllusoryOrb *const this)
{
  int LevelSpecialValue; // r14d
  int v3; // r13d
  int v4; // r12d
  CDOTA_BaseNPC *v5; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float v7; // xmm0_4
  CDOTA_BaseNPC *v8; // rax
  const Vector *AbsOrigin; // r15
  vec_t v10; // xmm0_4
  vec_t v11; // xmm1_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v14; // rax
  const char *ModifiedAbilityParticleName; // rax
  CDOTA_BaseNPC *v16; // rax
  const Vector *v17; // rax
  vec_t v18; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  CDOTA_BaseNPC *v20; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v22; // eax
  __int16 v23; // cx
  int v24; // eax
  float orb_vision; // xmm1_4
  float v26; // xmm0_4
  float v27; // xmm1_4
  float v28; // xmm0_4
  CSoundOpGameSystem *v29; // r13
  CDOTA_BaseNPC *v30; // rax
  const Vector *v31; // rax
  CDOTABaseAbility *m_pEtherealJaunt; // rdi
  CDOTA_BaseNPC *v33; // rax
  const QAngle *AbsAngles; // rax
  CDOTA_BaseNPC *Caster; // rax
  float v36; // [rsp+8h] [rbp-208h]
  float v37; // [rsp+Ch] [rbp-204h]
  float v38; // [rsp+Ch] [rbp-204h]
  Vector vDirection; // [rsp+10h] [rbp-200h] BYREF
  sLinearProjectileCreateInfo info; // [rsp+20h] [rbp-1F0h] BYREF
  CRecipientFilter v41; // [rsp+A0h] [rbp-170h] BYREF
  unsigned __int64 v42; // [rsp+1D8h] [rbp-38h]
  SndOpEventGuid_t v43; // 0:rax.8

  v42 = __readfsqword(0x28u);
  if ( this->m_pEtherealJaunt == 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    this->m_pEtherealJaunt = CDOTA_BaseNPC::FindAbilityByName(Caster, "puck_ethereal_jaunt", 0);
  }
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  v3 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "max_distance", -1, 0);
  v4 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "orb_speed", -1, 0);
  this->vision_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "vision_duration", -1, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v5, "special_bonus_unique_puck", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
  {
    v7 = (CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1) / 100.0) + 1.0;
    v3 = (v3 * v7);
    v4 = (v4 * v7);
    this->vision_duration = v7 * this->vision_duration;
  }
  this->orb_vision = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "orb_vision", -1, 0);
  v8 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
  *&info.pszEffectName = CDOTABaseAbility::GetCursorPosition(this);
  v10 = *(&info.pszEffectName + 1) - AbsOrigin->y;
  v11 = *&info.pszEffectName - AbsOrigin->x;
  vDirection.z = 0.0;
  vDirection.y = v10;
  vDirection.x = v11;
  if ( VectorNormalize(&vDirection) < 0.0099999998 )
  {
    v33 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v33);
    AngleVectors(AbsAngles, &vDirection, 0, 0);
  }
  info.hSource.m_Index = -1;
  info.pszEffectName = 0;
  info.pAbility = 0;
  info.fDistance = 0.0;
  info.bHasFrontalCone = 1;
  y = vec3_origin.y;
  info.fStartRadius = 0.0;
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
  v14 = CDOTABaseAbility::GetCaster(this);
  ModifiedAbilityParticleName = CDOTA_BaseNPC::GetModifiedAbilityParticleName(
                                  v14,
                                  "particles/units/heroes/hero_puck/puck_illusory_orb.vpcf");
  info.bStickyFoWReveal = 0;
  info.pszEffectName = ModifiedAbilityParticleName;
  info.pAbility = this;
  v16 = CDOTABaseAbility::GetCaster(this);
  v17 = CBaseEntity::GetAbsOrigin(v16);
  info.vSpawnOrigin.x = v17->x;
  info.vSpawnOrigin.y = v17->y;
  v18 = v17->z;
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  info.vSpawnOrigin.z = v18;
  info.vVelocity.z = vDirection.z * v4;
  info.vVelocity.y = vDirection.y * v4;
  info.vVelocity.x = v4 * vDirection.x;
  info.fDistance = ((vptr_IHandleEntity[228])(this) + v3);
  info.fStartRadius = LevelSpecialValue;
  info.fEndRadius = LevelSpecialValue;
  v20 = CDOTABaseAbility::GetCaster(this);
  if ( v20 != 0 && (m_pEntity = v20->m_pEntity) != 0 )
  {
    v22 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v23 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v23 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(info.hSource.m_Index) = v23 | info.hSource.m_Index & 0x8000;
    info.hSource.m_Index = (v22 << 15) | info.hSource.m_Index & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  info.bHasFrontalCone = 0;
  info.iUnitTargetTeam = 2;
  info.iUnitTargetType = 19;
  info.bProvidesVision = 1;
  info.iVisionTeamNumber = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  info.iVisionRadius = this->orb_vision;
  v24 = CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  orb_vision = this->orb_vision;
  this->m_iProjectile = v24;
  v37 = (orb_vision * 0.5) / v4;
  v26 = CountdownTimer::Now(&this->m_ViewerTimer);
  v27 = v37;
  v28 = v26 + v37;
  if ( v28 != this->m_ViewerTimer.m_timestamp.m_Value )
  {
    v36 = v28;
    (*(this->m_ViewerTimer._vptr_CountdownTimer + 2))(&this->m_ViewerTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v27 = v37;
    this->m_ViewerTimer.m_timestamp.m_Value = v36;
  }
  if ( v27 != this->m_ViewerTimer.m_duration.m_Value )
  {
    v38 = v27;
    (*(this->m_ViewerTimer._vptr_CountdownTimer + 2))(&this->m_ViewerTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_ViewerTimer.m_duration.m_Value = v38;
  }
  v29 = g_pSoundOpGameSystem;
  if ( this->m_SoundEventGuid.m_nGuid.m_Data != 0 )
  {
    CRecipientFilter::CRecipientFilter(&v41);
    v41._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&v41);
    v41._vptr_IRecipientFilter = &off_3FCB130;
    CRecipientFilter::MakeReliable(&v41);
    CSoundOpGameSystem::StopSoundEvent(v29, &v41, this->m_SoundEventGuid);
    v41._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&v41);
    this->m_SoundEventGuid.m_nGuid.m_Data = 0;
    this->m_SoundEventGuid.m_hStackHash = -1;
  }
  v30 = CDOTABaseAbility::GetCaster(this);
  v31 = CBaseEntity::GetAbsOrigin(v30);
  v43 = DOTA_EmitSoundLocation(v31, "Hero_Puck.Illusory_Orb", 0);
  m_pEtherealJaunt = this->m_pEtherealJaunt;
  this->m_SoundEventGuid = v43;
  if ( m_pEtherealJaunt != 0 )
    CDOTABaseAbility::SetActivated(m_pEtherealJaunt, 1);
}


// CDOTA_Ability_Puck_IllusoryOrb::OnProjectileHit  (line 239, @0x00000000029cefa0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsRealHero, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator!
// calls: CDOTABaseAbility::SetActivated, CSoundOpGameSystem::StopSoundEvent, CDOTABaseAbility::GetCaster, ApplyDamage, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::UnitEmitSound, EconEntity_OnOwnerKillEaterEvent
// strings: "particles/units/heroes/hero_puck/puck_orb_damage.vpcf", "Hero_Puck.IIllusory_Orb_Damage"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
__int64 __fastcall CDOTA_Ability_Puck_IllusoryOrb::OnProjectileHit(
        CDOTA_Ability_Puck_IllusoryOrb *const this,
        unsigned __int16 *hTarget,
        const Vector *const vLocation)
{
  CConcreteEntityList *v5; // rsi
  int v6; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rcx
  CDOTABaseAbility *m_pEtherealJaunt; // rdi
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CEntityInstance *m_pInstance; // r13
  int (**vptr_IHandleEntity)(...); // rcx
  int v15; // r14d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v17; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC_Hero *v21; // rdi

  v5 = CEntityHandle::gm_pEntityList;
  v6 = *hTarget;
  if ( (*hTarget + 2) > 1
    && (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget & 0x7FFF) >> 9]) != 0
    && (v8 = &v7[*hTarget & 0x1FF]) != 0
    && v6 == v8->m_EHandle.m_Index
    && (m_pInstance = v8->m_pInstance, v8->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    vptr_IHandleEntity = m_pInstance[58]._vptr_IHandleEntity;
    if ( (BYTE1(vptr_IHandleEntity) & 2) != 0
      || LOBYTE(m_pInstance[71]._vptr_IHandleEntity) != 0
      || (BYTE1(vptr_IHandleEntity) & 1) != 0 )
    {
      v11 = &v7[*hTarget & 0x1FF];
      goto LABEL_11;
    }
    v15 = (*(this->_vptr_IHandleEntity + 247))(this, CEntityHandle::gm_pEntityList);
    Caster = CDOTABaseAbility::GetCaster(this);
    ApplyDamage(Caster, m_pInstance, this, v15, 2, 0);
    v17 = CDOTABaseAbility::GetCaster(this);
    ParticleManager = GetParticleManager();
    LODWORD(v17) = CDOTA_ParticleManager::CreateParticle(
                     ParticleManager,
                     "particles/units/heroes/hero_puck/puck_orb_damage.vpcf",
                     1,
                     m_pInstance,
                     0,
                     v17);
    v19 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v19, v17);
    CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Puck.IIllusory_Orb_Damage", 0.0, 0, 0);
    if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0
      || LOBYTE(m_pInstance[71].m_pEntity) != 0
      || (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) != 0 )
    {
      v5 = CEntityHandle::gm_pEntityList;
    }
    else
    {
      v20 = CDOTABaseAbility::GetCaster(this);
      if ( v20 == 0 || (v21 = v20, (v20->m_iUnitType & 1) == 0) )
        v21 = 0;
      EconEntity_OnOwnerKillEaterEvent(
        v21,
        0,
        kill_eater_event_t::kKillEaterEvent_Puck_OrbKills,
        1,
        INVALID_ITEM_DEF_INDEX);
      v5 = CEntityHandle::gm_pEntityList;
    }
  }
  else
  {
    m_pEtherealJaunt = this->m_pEtherealJaunt;
    if ( m_pEtherealJaunt != 0 )
    {
      CDOTABaseAbility::SetActivated(m_pEtherealJaunt, 0);
      v5 = CEntityHandle::gm_pEntityList;
    }
    this->m_iProjectile = -1;
  }
  v6 = *hTarget;
  if ( (*hTarget + 2) <= 1 )
    goto LABEL_13;
  v10 = v5->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
  if ( v10 == 0 )
    goto LABEL_13;
  v11 = &v10[*hTarget & 0x1FF];
  if ( v11 == 0 )
    goto LABEL_13;
LABEL_11:
  if ( v6 != v11->m_EHandle.m_Index || v11->m_pInstance == 0 )
LABEL_13:
    CSoundOpGameSystem::StopSoundEvent(g_pSoundOpGameSystem, &this->m_SoundEventGuid);
  return 0;
}


// CDOTA_Ability_Puck_IllusoryOrb::OnUnStolen  (line 278, @0x00000000029b83a0, libserver.so)
// calls: CDOTABaseAbility::OnUnStolen
void __fastcall CDOTA_Ability_Puck_IllusoryOrb::OnUnStolen(CDOTA_Ability_Puck_IllusoryOrb *const this)
{
  CDOTABaseAbility::OnUnStolen(this);
  this->m_pEtherealJaunt = 0;
}


// CDOTA_Ability_Puck_IllusoryOrb::OnProjectileThink  (line 289, @0x00000000029c8cf0, libserver.so)  // inlines: AllocateData, CBroadcastRecipientFilter, CSosFieldData, CSosFieldDataFloat3, ClearData, GetDataPtr, GetTeamNumber, Init, IsElapsed, NetworkStateChanged, Reset, Set, SetValue, operator=<float>, ~CBroadcastRecipientFilter, ~CSosFieldData, ~CSosFieldDataFloat3
// calls: CountdownTimer::Now, CDOTABaseAbility::GetCaster, CDOTAFogOfWarSystem::AddTempViewer, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, operator delete [], operator new [], CSoundOpGameSystem::SetSoundEventParam, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, CSosFieldData::ClearData, _Unwind_Resume
void __fastcall CDOTA_Ability_Puck_IllusoryOrb::OnProjectileThink(
        CDOTA_Ability_Puck_IllusoryOrb *const this,
        const Vector *const vLocation)
{
  CountdownTimer *p_m_ViewerTimer; // r13
  float v5; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  __m128i z_low; // xmm2
  __m128i y_low; // xmm3
  int v9; // r14d
  vec_t x; // r12d
  int v11; // r15d
  SosFieldValueMem_t *v12; // rax
  float flDuration; // [rsp+8h] [rbp-198h]
  float flRadiusa; // [rsp+Ch] [rbp-194h]
  float flRadius; // [rsp+Ch] [rbp-194h]
  CSosFieldData fieldData; // [rsp+10h] [rbp-190h] BYREF
  CBroadcastRecipientFilter filter; // [rsp+30h] [rbp-170h] BYREF
  unsigned __int64 v18; // [rsp+168h] [rbp-38h]

  p_m_ViewerTimer = &this->m_ViewerTimer;
  v18 = __readfsqword(0x28u);
  if ( CountdownTimer::Now(&this->m_ViewerTimer) >= this->m_ViewerTimer.m_timestamp.m_Value )
  {
    v5 = CountdownTimer::Now(p_m_ViewerTimer) + this->m_ViewerTimer.m_duration.m_Value;
    if ( v5 != this->m_ViewerTimer.m_timestamp.m_Value )
    {
      flRadius = v5;
      (*(this->m_ViewerTimer._vptr_CountdownTimer + 2))(p_m_ViewerTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_ViewerTimer.m_timestamp.m_Value = flRadius;
    }
    flDuration = this->vision_duration;
    flRadiusa = this->orb_vision;
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTAFogOfWarSystem::AddTempViewer(
      &g_DOTAFogOfWarSystem,
      FoWViewerType_t::FOWVIEWERTYPE_ILLUSORYORB,
      Caster->m_iTeamNum.m_Value,
      vLocation,
      flRadiusa,
      flDuration,
      0);
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&filter);
    fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
    fieldData.m_nAllocSize = 0;
    z_low = LODWORD(vLocation->z);
    fieldData.m_pData = 0;
    y_low = LODWORD(vLocation->y);
    v9 = _mm_cvtsi128_si32(z_low);
    x = vLocation->x;
    v11 = _mm_cvtsi128_si32(y_low);
    fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 10);
    fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT_3;
    v12 = operator new[](0xCu);
    fieldData.m_pData = v12;
    fieldData.m_nAllocSize = 12;
    *v12 = x;
    *(v12 + 1) = v11;
    *(v12 + 2) = v9;
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
}


// CDOTA_Ability_Puck_IllusoryOrb::GetOrbLocation  (line 306, @0x00000000029d6fe0, libserver.so)
// calls: CDOTA_ProjectileManager::GetLinearProjectileLocation
// callers: CDOTA_Ability_Puck_EtherealJaunt::OnSpellStart
Vector __fastcall CDOTA_Ability_Puck_IllusoryOrb::GetOrbLocation(CDOTA_Ability_Puck_IllusoryOrb *const this)
{
  int m_iProjectile; // esi
  Vector vRet; // [rsp+10h] [rbp-20h] BYREF
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_iProjectile = this->m_iProjectile;
  if ( m_iProjectile == -1 )
  {
    *&result.x = *&vec3_origin.x;
    result.z = vec3_origin.z;
  }
  else
  {
    CDOTA_ProjectileManager::GetLinearProjectileLocation(&g_DOTAProjectileManager, m_iProjectile, &vRet);
    *&result.x = *&vRet.x;
    result.z = vRet.z;
  }
  return result;
}


// CDOTA_Ability_Puck_IllusoryOrb::DestroyOrb  (line 322, @0x00000000029d7050, libserver.so)  // inlines: CEntityHandle, CHandle
// calls: CDOTA_ProjectileManager::DestroyLinearProjectile
// callers: CDOTA_Ability_Puck_EtherealJaunt::OnSpellStart
void __fastcall CDOTA_Ability_Puck_IllusoryOrb::DestroyOrb(CDOTA_Ability_Puck_IllusoryOrb *const this)
{
  int m_iProjectile; // esi
  int (**vptr_IHandleEntity)(...); // rax
  int v4[8]; // [rsp+0h] [rbp-20h] BYREF

  m_iProjectile = this->m_iProjectile;
  if ( m_iProjectile != -1 )
  {
    CDOTA_ProjectileManager::DestroyLinearProjectile(&g_DOTAProjectileManager, m_iProjectile);
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    v4[0] = -1;
    vptr_IHandleEntity[289](this, v4, &vec3_origin);
  }
}


// CDOTA_Ability_Puck_IllusoryOrb::GetAbilityDamageToTargetOverInterval  (line 335, @0x00000000029bb790, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Puck_IllusoryOrb::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Puck_IllusoryOrb *const this,
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


// CDOTA_Ability_Puck_EtherealJaunt::OnSpellStart  (line 345, @0x00000000029d70a0, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetParent, GetSerialNumber, Set
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_Puck_IllusoryOrb::GetOrbLocation, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, CGameSceneNode::GetOwnerEntity, FindClearSpaceForUnit, CDOTA_Ability_Puck_IllusoryOrb::DestroyOrb, CDOTA_BaseNPC::UnitEmitSound (15 total)
// strings: "puck_illusory_orb", "particles/units/heroes/hero_puck/puck_illusory_orb_blink_out.vpcf", "Hero_Puck.EtherealJaunt"
void __fastcall CDOTA_Ability_Puck_EtherealJaunt::OnSpellStart(CDOTA_Ability_Puck_EtherealJaunt *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Ability_Puck_IllusoryOrb *AbilityByName; // rax
  CDOTA_Ability_Puck_IllusoryOrb *v4; // r12
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rax
  vec_t v7; // xmm1_4
  CDOTA_BaseNPC *v8; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v10; // rax
  CDOTA_ParticleManager *v11; // rax
  CGameSceneNode *m_pParent; // rdi
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v17; // cx
  Vector vStartLoc; // [rsp+Ch] [rbp-54h] BYREF
  Vector vOrbLoc; // [rsp+20h] [rbp-40h]
  double v20; // [rsp+30h] [rbp-30h]
  vec_t x; // [rsp+38h] [rbp-28h]

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "puck_illusory_orb", 0);
  v4 = AbilityByName;
  if ( AbilityByName != 0 && AbilityByName->m_iProjectile != -1 )
  {
    vOrbLoc = CDOTA_Ability_Puck_IllusoryOrb::GetOrbLocation(AbilityByName);
    v5 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
    v7 = AbsOrigin->z + 96.0;
    v20 = *&AbsOrigin->x;
    vStartLoc.x = v7;
    v8 = CDOTABaseAbility::GetCaster(this);
    ParticleManager = GetParticleManager();
    LODWORD(v8) = CDOTA_ParticleManager::CreateParticle(
                    ParticleManager,
                    "particles/units/heroes/hero_puck/puck_illusory_orb_blink_out.vpcf",
                    2,
                    0,
                    0,
                    v8);
    v10 = GetParticleManager();
    x = vStartLoc.x;
    CDOTA_ParticleManager::SetParticleControl(v10, v8, 0, v20, vStartLoc.x);
    v11 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v11, v8);
    m_pParent = this->m_pGameSceneNode->m_pParent;
    if ( m_pParent != 0 )
      m_pParent = CGameSceneNode::GetOwnerEntity(m_pParent);
    FindClearSpaceForUnit(m_pParent, vOrbLoc, 1);
    CDOTA_Ability_Puck_IllusoryOrb::DestroyOrb(v4);
    v13 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v13, "Hero_Puck.EtherealJaunt", 0.0, 0, 0);
    v14 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UpdateResumePreviousMovementAfterTeleport(v14, v20, x);
    CDOTABaseAbility::SetActivated(this, 0);
    v15 = CDOTABaseAbility::GetCaster(this);
    vStartLoc.y = NAN;
    if ( v15 != 0 )
    {
      m_pEntity = v15->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v17 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LODWORD(vStartLoc.y) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v17 & 0x7FFF;
      }
    }
    CDOTA_ProjectileManager::ProjectileDodge(&g_DOTAProjectileManager, &vStartLoc.y, 0);
  }
}


// CDOTA_Ability_Puck_WaningRift::~CDOTA_Ability_Puck_WaningRift  (line 380, @0x0000000002a17cb0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Puck_WaningRift::~CDOTA_Ability_Puck_WaningRift(
        CDOTA_Ability_Puck_WaningRift *const this)
{
  this->_vptr_IHandleEntity = &off_4377870;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Puck_WaningRift::~CDOTA_Ability_Puck_WaningRift  (line 380, @0x0000000002a17cd0, libserver.so)  // inlines: ~CDOTA_Ability_Puck_WaningRift
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Puck_WaningRift::~CDOTA_Ability_Puck_WaningRift(
        CDOTA_Ability_Puck_WaningRift *const this)
{
  this->_vptr_IHandleEntity = &off_4377870;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Puck_WaningRift::Schema_DynamicBinding  (line 382, @0x0000000002a0b820, libserver.so)
// globals: CDOTA_Ability_Puck_WaningRift::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Puck_WaningRift::Schema_DynamicBinding(
        const CDOTA_Ability_Puck_WaningRift *const this)
{
  return CDOTA_Ability_Puck_WaningRift::s_pSchemaBinding;
}


// CDOTA_Ability_Puck_WaningRift::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 382, @0x0000000002a0b830, libserver.so)
// globals: CDOTA_Ability_Puck_WaningRift::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Puck_WaningRift::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Puck_WaningRift::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Puck_WaningRift::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Puck_WaningRift::CEntityInstanceEntityClass::DestructInstance  (line 382, @0x0000000002a0b840, libserver.so)  // inlines: Destruct<CDOTA_Ability_Puck_WaningRift>
void __fastcall CDOTA_Ability_Puck_WaningRift::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Puck_WaningRift::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Puck_WaningRift::CEntityInstanceEntityClass::FreeInstance  (line 382, @0x0000000002a0b860, libserver.so)
void __fastcall CDOTA_Ability_Puck_WaningRift::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Puck_WaningRift::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Puck_WaningRift::CEntityInstanceEntityClass::CanAllocate  (line 382, @0x0000000002a0b880, libserver.so)
bool __fastcall CDOTA_Ability_Puck_WaningRift::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Puck_WaningRift::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Puck_WaningRift::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 382, @0x0000000002a0b890, libserver.so)
// globals: CDOTA_Ability_Puck_WaningRift::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Puck_WaningRift::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Puck_WaningRift::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Puck_WaningRift::s_pSchemaBinding;
}


// CDOTA_Ability_Puck_WaningRift::CEntityInstanceEntityClass::AllocateInstance  (line 382, @0x0000000002a103c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Puck_WaningRift::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Puck_WaningRift::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Puck_WaningRift::CEntityInstanceEntityClass::ConstructInstance  (line 382, @0x0000000002a14780, libserver.so)  // inlines: CDOTA_Ability_Puck_WaningRift, Construct<CDOTA_Ability_Puck_WaningRift>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Puck_WaningRift::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Puck_WaningRift::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4377870;
  }
  return p;
}


// CDOTA_Ability_Puck_WaningRift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 382, @0x0000000002a20170, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Puck_WaningRift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Puck_WaningRift::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Puck_WaningRift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 382, @0x0000000002a20190, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Puck_WaningRift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Puck_WaningRift::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Puck_WaningRift::GetEntityClassInternal  (line 382, @0x0000000002a3a010, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "puck_waning_rift", "CDOTA_Ability_Puck_WaningRift"
// globals: `guard variable for'CDOTA_Ability_Puck_WaningRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_WaningRiftClass, CDOTA_Ability_Puck_WaningRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_WaningRiftClass, __dso_handle, CDOTA_Ability_Puck_WaningRift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Puck_WaningRift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_WaningRiftClassInfo, CDOTA_Ability_Puck_WaningRift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_WaningRiftClassInfo
CEntityClass *__cdecl CDOTA_Ability_Puck_WaningRift::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Puck_WaningRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_WaningRiftClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Puck_WaningRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_WaningRiftClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Puck_WaningRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_WaningRiftClass);
    CDOTA_Ability_Puck_WaningRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_WaningRiftClass._vptr_CEntityClass = off_43777F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Puck_WaningRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_WaningRiftClass);
    __cxa_atexit(
      CDOTA_Ability_Puck_WaningRift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Puck_WaningRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_WaningRiftClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Puck_WaningRiftClass != 0 )
    return &CDOTA_Ability_Puck_WaningRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_WaningRiftClass;
  if ( `guard variable for'CDOTA_Ability_Puck_WaningRift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_WaningRiftClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Puck_WaningRift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_WaningRiftClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Puck_WaningRift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_WaningRiftClassInfo,
      "CDOTA_Ability_Puck_WaningRift",
      "puck_waning_rift",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Puck_WaningRift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_WaningRiftClassInfo);
  }
  CDOTA_Ability_Puck_WaningRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_WaningRiftClass.m_pClassInfo = &CDOTA_Ability_Puck_WaningRift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_WaningRiftClassInfo;
  CDOTA_Ability_Puck_WaningRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_WaningRiftClass.m_pBaseClassInfo = CDOTA_Ability_Puck_WaningRift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_WaningRiftClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Puck_WaningRiftClass = &CDOTA_Ability_Puck_WaningRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_WaningRiftClass;
  CDOTA_Ability_Puck_WaningRift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_WaningRiftClassInfo.m_pClass = &CDOTA_Ability_Puck_WaningRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_WaningRiftClass;
  CDOTA_Ability_Puck_WaningRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_WaningRiftClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Puck_WaningRiftClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Puck_WaningRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_WaningRiftClass;
}


// CDOTA_Ability_Puck_WaningRift::GetAOERadius  (line 386, @0x0000000002a33cc0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_Puck_WaningRift::GetAOERadius(CDOTA_Ability_Puck_WaningRift *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
}


// CDOTA_Ability_Puck_WaningRift::GetConceptRecipientType  (line 389, @0x0000000002a0b8a0, libserver.so)
int __fastcall CDOTA_Ability_Puck_WaningRift::GetConceptRecipientType(CDOTA_Ability_Puck_WaningRift *const this)
{
  return 4;
}


// CDOTA_Ability_Puck_WaningRift::HasSilence  (line 392, @0x0000000002a0b8b0, libserver.so)
bool __fastcall CDOTA_Ability_Puck_WaningRift::HasSilence(CDOTA_Ability_Puck_WaningRift *const this)
{
  return 1;
}


// CDOTA_Ability_Puck_WaningRift::YouForgotToImplementOrDeclareServerClass  (line 395, @0x00000000029b5f10, libserver.so)
int __fastcall CDOTA_Ability_Puck_WaningRift::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Puck_WaningRift *const this)
{
  return 0;
}


// CDOTA_Ability_Puck_WaningRift::GetServerClass  (line 395, @0x00000000029c9e30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Puck_WaningRift::GetServerClass(CDOTA_Ability_Puck_WaningRift *const this)
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


// CDOTA_Ability_Puck_WaningRift::OnSpellStart  (line 404, @0x00000000029f46c0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsRealHero, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, ApplyDamage, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat (19 total)
// strings: "particles/units/heroes/hero_puck/puck_waning_rift.vpcf", "silence_duration", "modifier_silence", "Hero_Puck.Waning_Rift"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_Puck_WaningRift::OnSpellStart(CDOTA_Ability_Puck_WaningRift *const this)
{
  __m128i v2; // xmm3
  float v3; // r12d
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // r14
  CDOTA_BaseNPC *v9; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v11; // rax
  CDOTA_ParticleManager *v12; // rax
  __int64 v13; // r13
  int v14; // r14d
  CHandle<CBaseEntity> *v15; // rdx
  uint32 m_Index; // eax
  __int16 v17; // cx
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CEntityInstance *m_pInstance; // r12
  CDOTA_BaseNPC *v21; // rax
  float v22; // xmm1_4
  CDOTA_BaseNPC *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC_Hero *v26; // rdi
  int m_iNumHeroes; // [rsp+28h] [rbp-88h]
  float silence_duration; // [rsp+2Ch] [rbp-84h]
  double v29; // [rsp+30h] [rbp-80h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v32; // [rsp+78h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  hEntities.m_Size = 0;
  *v2.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v7->m_iTeamNum.m_Value, AbsOrigin, Caster, v3, &hEntities, 2, 19, 0, 0, 0);
  v8 = CDOTABaseAbility::GetCaster(this);
  v9 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v9) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/units/heroes/hero_puck/puck_waning_rift.vpcf",
                  1,
                  v9,
                  0,
                  v8);
  *&v29 = v3;
  *(&v29 + 1) = v3;
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v11, v9, 1, v29, v3);
  v12 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v12, v9);
  if ( hEntities.m_Size <= 0 )
  {
    m_iNumHeroes = 0;
  }
  else
  {
    m_iNumHeroes = 0;
    v13 = 0;
    v14 = 0;
    do
    {
      while ( 1 )
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
              if ( v19->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                break;
            }
          }
        }
        ++v14;
        ++v13;
        if ( hEntities.m_Size <= v14 )
          goto LABEL_13;
      }
      silence_duration = (*(this->_vptr_IHandleEntity + 247))(this);
      v21 = CDOTABaseAbility::GetCaster(this);
      ApplyDamage(v21, m_pInstance, this, silence_duration, 2, 0);
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "silence_duration", -1, 0);
      KeyValues::KeyValues(&kv, "modifier_silence");
      KeyValues::SetFloat(&kv, "duration", v22);
      v23 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v23, this, "modifier_silence", &kv, 0);
      if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        m_iNumHeroes += LOBYTE(m_pInstance[71].m_pEntity) == 0;
      ++v14;
      ++v13;
      KeyValues::~KeyValues(&kv);
    }
    while ( hEntities.m_Size > v14 );
  }
LABEL_13:
  v24 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v24, "Hero_Puck.Waning_Rift", 0.0, 0, 0);
  if ( m_iNumHeroes > 2 )
  {
    v25 = CDOTABaseAbility::GetCaster(this);
    if ( v25 != 0 && (v25->m_iUnitType & 1) != 0 )
      v26 = v25;
    else
      v26 = 0;
    EconEntity_OnOwnerKillEaterEvent(
      v26,
      0,
      kill_eater_event_t::kKillEaterEvent_Puck_GoodWaningRifts,
      1,
      INVALID_ITEM_DEF_INDEX);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
}


// CDOTA_Ability_Puck_WaningRift::GetAbilityDamageToTargetOverInterval  (line 453, @0x00000000029bb7f0, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Puck_WaningRift::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Puck_WaningRift *const this,
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


// CDOTA_Ability_Puck_PhaseShift::~CDOTA_Ability_Puck_PhaseShift  (line 467, @0x0000000002a17d00, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Puck_PhaseShift::~CDOTA_Ability_Puck_PhaseShift(
        CDOTA_Ability_Puck_PhaseShift *const this)
{
  this->_vptr_IHandleEntity = &off_4378370;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Puck_PhaseShift::~CDOTA_Ability_Puck_PhaseShift  (line 467, @0x0000000002a17d20, libserver.so)  // inlines: ~CDOTA_Ability_Puck_PhaseShift
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Puck_PhaseShift::~CDOTA_Ability_Puck_PhaseShift(
        CDOTA_Ability_Puck_PhaseShift *const this)
{
  this->_vptr_IHandleEntity = &off_4378370;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Puck_PhaseShift::Schema_DynamicBinding  (line 469, @0x0000000002a0b8c0, libserver.so)
// globals: CDOTA_Ability_Puck_PhaseShift::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Puck_PhaseShift::Schema_DynamicBinding(
        const CDOTA_Ability_Puck_PhaseShift *const this)
{
  return CDOTA_Ability_Puck_PhaseShift::s_pSchemaBinding;
}


// CDOTA_Ability_Puck_PhaseShift::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 469, @0x0000000002a0b8d0, libserver.so)
// globals: CDOTA_Ability_Puck_PhaseShift::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Puck_PhaseShift::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Puck_PhaseShift::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Puck_PhaseShift::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Puck_PhaseShift::CEntityInstanceEntityClass::DestructInstance  (line 469, @0x0000000002a0b8e0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Puck_PhaseShift>
void __fastcall CDOTA_Ability_Puck_PhaseShift::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Puck_PhaseShift::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Puck_PhaseShift::CEntityInstanceEntityClass::FreeInstance  (line 469, @0x0000000002a0b900, libserver.so)
void __fastcall CDOTA_Ability_Puck_PhaseShift::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Puck_PhaseShift::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Puck_PhaseShift::CEntityInstanceEntityClass::CanAllocate  (line 469, @0x0000000002a0b920, libserver.so)
bool __fastcall CDOTA_Ability_Puck_PhaseShift::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Puck_PhaseShift::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Puck_PhaseShift::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 469, @0x0000000002a0b930, libserver.so)
// globals: CDOTA_Ability_Puck_PhaseShift::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Puck_PhaseShift::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Puck_PhaseShift::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Puck_PhaseShift::s_pSchemaBinding;
}


// CDOTA_Ability_Puck_PhaseShift::CEntityInstanceEntityClass::AllocateInstance  (line 469, @0x0000000002a10400, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Puck_PhaseShift::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Puck_PhaseShift::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Puck_PhaseShift::CEntityInstanceEntityClass::ConstructInstance  (line 469, @0x0000000002a147b0, libserver.so)  // inlines: CDOTA_Ability_Puck_PhaseShift, Construct<CDOTA_Ability_Puck_PhaseShift>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Puck_PhaseShift::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Puck_PhaseShift::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4378370;
  }
  return p;
}


// CDOTA_Ability_Puck_PhaseShift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 469, @0x0000000002a201c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Puck_PhaseShift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Puck_PhaseShift::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Puck_PhaseShift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 469, @0x0000000002a201e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Puck_PhaseShift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Puck_PhaseShift::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Puck_PhaseShift::GetEntityClassInternal  (line 469, @0x0000000002a3a160, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "CDOTA_Ability_Puck_PhaseShift"
// globals: `guard variable for'CDOTA_Ability_Puck_PhaseShift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_PhaseShiftClass, CDOTA_Ability_Puck_PhaseShift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_PhaseShiftClass, __dso_handle, CDOTA_Ability_Puck_PhaseShift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Puck_PhaseShift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_PhaseShiftClassInfo, CDOTA_Ability_Puck_PhaseShift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_PhaseShiftClassInfo
CEntityClass *__cdecl CDOTA_Ability_Puck_PhaseShift::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Puck_PhaseShift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_PhaseShiftClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Puck_PhaseShift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_PhaseShiftClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Puck_PhaseShift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_PhaseShiftClass);
    CDOTA_Ability_Puck_PhaseShift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_PhaseShiftClass._vptr_CEntityClass = off_43782F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Puck_PhaseShift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_PhaseShiftClass);
    __cxa_atexit(
      CDOTA_Ability_Puck_PhaseShift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Puck_PhaseShift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_PhaseShiftClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Puck_PhaseShiftClass != 0 )
    return &CDOTA_Ability_Puck_PhaseShift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_PhaseShiftClass;
  if ( `guard variable for'CDOTA_Ability_Puck_PhaseShift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_PhaseShiftClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Puck_PhaseShift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_PhaseShiftClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Puck_PhaseShift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_PhaseShiftClassInfo,
      "CDOTA_Ability_Puck_PhaseShift",
      "puck_phase_shift",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Puck_PhaseShift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_PhaseShiftClassInfo);
  }
  CDOTA_Ability_Puck_PhaseShift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_PhaseShiftClass.m_pClassInfo = &CDOTA_Ability_Puck_PhaseShift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_PhaseShiftClassInfo;
  CDOTA_Ability_Puck_PhaseShift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_PhaseShiftClass.m_pBaseClassInfo = CDOTA_Ability_Puck_PhaseShift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_PhaseShiftClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Puck_PhaseShiftClass = &CDOTA_Ability_Puck_PhaseShift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_PhaseShiftClass;
  CDOTA_Ability_Puck_PhaseShift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_PhaseShiftClassInfo.m_pClass = &CDOTA_Ability_Puck_PhaseShift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_PhaseShiftClass;
  CDOTA_Ability_Puck_PhaseShift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_PhaseShiftClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Puck_PhaseShiftClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Puck_PhaseShift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_PhaseShiftClass;
}


// CDOTA_Ability_Puck_PhaseShift::GetConceptRecipientType  (line 472, @0x0000000002a0b940, libserver.so)
int __fastcall CDOTA_Ability_Puck_PhaseShift::GetConceptRecipientType(CDOTA_Ability_Puck_PhaseShift *const this)
{
  return 4;
}


// CDOTA_Ability_Puck_PhaseShift::ProcsMagicStick  (line 474, @0x0000000002a0b950, libserver.so)
bool __fastcall CDOTA_Ability_Puck_PhaseShift::ProcsMagicStick(CDOTA_Ability_Puck_PhaseShift *const this)
{
  return 0;
}


// CDOTA_Ability_Puck_PhaseShift::OnSpellStart  (line 483, @0x00000000029ddfb0, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetSerialNumber, Set
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_ProjectileManager::ProjectileDodge, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_puck_phase_shift"
void __fastcall CDOTA_Ability_Puck_PhaseShift::OnSpellStart(CDOTA_Ability_Puck_PhaseShift *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v7; // cx
  EHANDLE hTarget; // [rsp+10h] [rbp-50h] BYREF
  KeyValues kv; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-28h]

  v10 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_puck_phase_shift");
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_puck_phase_shift", &kv, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  hTarget.m_Index = -1;
  if ( v5 != 0 )
  {
    m_pEntity = v5->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v7 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      hTarget.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v7 & 0x7FFF;
    }
  }
  CDOTA_ProjectileManager::ProjectileDodge(&g_DOTAProjectileManager, &hTarget, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Puck_PhaseShift::~CDOTA_Modifier_Puck_PhaseShift  (line 500, @0x0000000002a10fc0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Puck_PhaseShift::~CDOTA_Modifier_Puck_PhaseShift(
        CDOTA_Modifier_Puck_PhaseShift *const this)
{
  this->_vptr_CDOTA_Buff = &off_4378E30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Puck_PhaseShift::~CDOTA_Modifier_Puck_PhaseShift  (line 500, @0x0000000002a10fe0, libserver.so)  // inlines: ~CDOTA_Modifier_Puck_PhaseShift
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Puck_PhaseShift::~CDOTA_Modifier_Puck_PhaseShift(
        CDOTA_Modifier_Puck_PhaseShift *const this)
{
  this->_vptr_CDOTA_Buff = &off_4378E30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Puck_PhaseShift::OnCreated  (line 529, @0x00000000029ba650, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CBaseEntity::AddEffects, CDOTA_Buff::GetAbility, Purge, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle
// strings: "particles/units/heroes/hero_puck/puck_phase_shift.vpcf", "particles/status_fx/status_effect_phase_shift.vpcf"
void __fastcall CDOTA_Modifier_Puck_PhaseShift::OnCreated(CDOTA_Modifier_Puck_PhaseShift *const this, KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *Ability; // r12
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v9; // r14
  CDOTA_ParticleManager *v10; // rax
  __int64 v11; // r13
  CDOTA_BaseNPC *v12; // r12
  CDOTA_ParticleManager *v13; // rax
  CDOTA_BaseNPC *v14; // r14
  CDOTA_ParticleManager *v15; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-24h]
  Vector v17; // 0:xmm0_8.8,8:xmm1_4.4

  Parent = CDOTA_Buff::GetParent(this);
  (*(Parent->_vptr_INextBotEventResponder + 57))(&Parent->INextBot, 0);
  Caster = CDOTA_Buff::GetCaster(this);
  CBaseEntity::AddEffects(Caster, 32);
  Ability = CDOTA_Buff::GetAbility(this);
  v6 = CDOTA_Buff::GetCaster(this);
  Purge(v6, Ability, 36);
  v7 = CDOTA_Buff::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v7) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/units/heroes/hero_puck/puck_phase_shift.vpcf",
                  2,
                  0,
                  0,
                  v7);
  v9 = CDOTA_Buff::GetParent(this);
  v10 = GetParticleManager();
  v11 = *&vec3_invalid.x;
  vecFallbackPosition = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(v10, v7, 0, v9, 3, 0, vec3_invalid, 1);
  CDOTA_Buff::AddParticle(this, v7, 0, 0, -1, 0, 0);
  v12 = CDOTA_Buff::GetCaster(this);
  v13 = GetParticleManager();
  LODWORD(v12) = CDOTA_ParticleManager::CreateParticle(
                   v13,
                   "particles/status_fx/status_effect_phase_shift.vpcf",
                   2,
                   0,
                   0,
                   v12);
  v14 = CDOTA_Buff::GetParent(this);
  v15 = GetParticleManager();
  *&v17.x = v11;
  v17.z = vecFallbackPosition;
  CDOTA_ParticleManager::SetParticleControlEnt(v15, v12, 0, v14, 3, 0, v17, 1);
  CDOTA_Buff::AddParticle(this, v12, 0, 1, 75, 0, 0);
}


// CDOTA_Modifier_Puck_PhaseShift::OnDestroy  (line 551, @0x00000000029c0a50, libserver.so)  // inlines: MarkPVSInformationDirty, RemoveEffects
// calls: CDOTA_Buff::GetCaster, CBaseEntity::DispatchUpdateTransmitState
void __fastcall CDOTA_Modifier_Puck_PhaseShift::OnDestroy(CDOTA_Modifier_Puck_PhaseShift *const this)
{
  CDOTA_BaseNPC *Caster; // rbx

  Caster = CDOTA_Buff::GetCaster(this);
  (*(Caster->_vptr_IHandleEntity + 188))(Caster, Caster->m_fEffects.m_Value & 0xFFFFFFDF);
  Caster->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  CBaseEntity::DispatchUpdateTransmitState(Caster);
}


// CDOTA_Modifier_Puck_PhaseShift::DeclareFunctions  (line 563, @0x00000000029b5f20, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Puck_PhaseShift::DeclareFunctions(CDOTA_Modifier_Puck_PhaseShift *const this)
{
  this->m_Functions[9].__pfn = (&stru_10 + 697);
  this->m_Functions[9].__delta = 0;
  this->m_Functions[125].__pfn = (&stru_10 + 705);
  this->m_Functions[125].__delta = 0;
  this->m_Functions[95].__pfn = (&stru_10 + 713);
  this->m_Functions[95].__delta = 0;
}


// CDOTA_Modifier_Puck_PhaseShift::GetModifierInvisibilityLevel  (line 572, @0x00000000029b5f70, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Puck_PhaseShift::GetModifierInvisibilityLevel(
        CDOTA_Modifier_Puck_PhaseShift *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Puck_PhaseShift::OnOrder  (line 586, @0x00000000029c2a70, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Puck_PhaseShift::OnOrder(
        CDOTA_Modifier_Puck_PhaseShift *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  unsigned int v9; // ecx

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
          v9 = params->nOrdertype - 11;
          if ( v9 > 0x10 || ((1LL << v9) & 0x161E1) == 0 )
            CDOTA_Buff::Destroy(this, 0, 0, 0);
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Puck_PhaseShift::GetDisableAutoAttack  (line 614, @0x00000000029b5f90, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Puck_PhaseShift::GetDisableAutoAttack(
        CDOTA_Modifier_Puck_PhaseShift *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Puck_PhaseShift::CheckState  (line 621, @0x00000000029b5fb0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Puck_PhaseShift::CheckState(
        CDOTA_Modifier_Puck_PhaseShift *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x80804104uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFF7F7FBEFBLL;
}


// CDOTA_Ability_Puck_DreamCoil::~CDOTA_Ability_Puck_DreamCoil  (line 639, @0x0000000002a17d50, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Puck_DreamCoil::~CDOTA_Ability_Puck_DreamCoil(CDOTA_Ability_Puck_DreamCoil *const this)
{
  this->_vptr_IHandleEntity = &off_43791B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Puck_DreamCoil::~CDOTA_Ability_Puck_DreamCoil  (line 639, @0x0000000002a17d70, libserver.so)  // inlines: ~CDOTA_Ability_Puck_DreamCoil
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Puck_DreamCoil::~CDOTA_Ability_Puck_DreamCoil(CDOTA_Ability_Puck_DreamCoil *const this)
{
  this->_vptr_IHandleEntity = &off_43791B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Puck_DreamCoil::Schema_DynamicBinding  (line 641, @0x0000000002a0b960, libserver.so)
// globals: CDOTA_Ability_Puck_DreamCoil::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Puck_DreamCoil::Schema_DynamicBinding(
        const CDOTA_Ability_Puck_DreamCoil *const this)
{
  return CDOTA_Ability_Puck_DreamCoil::s_pSchemaBinding;
}


// CDOTA_Ability_Puck_DreamCoil::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 641, @0x0000000002a0b970, libserver.so)
// globals: CDOTA_Ability_Puck_DreamCoil::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Puck_DreamCoil::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Puck_DreamCoil::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Puck_DreamCoil::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Puck_DreamCoil::CEntityInstanceEntityClass::DestructInstance  (line 641, @0x0000000002a0b980, libserver.so)  // inlines: Destruct<CDOTA_Ability_Puck_DreamCoil>
void __fastcall CDOTA_Ability_Puck_DreamCoil::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Puck_DreamCoil::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Puck_DreamCoil::CEntityInstanceEntityClass::FreeInstance  (line 641, @0x0000000002a0b9a0, libserver.so)
void __fastcall CDOTA_Ability_Puck_DreamCoil::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Puck_DreamCoil::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Puck_DreamCoil::CEntityInstanceEntityClass::CanAllocate  (line 641, @0x0000000002a0b9c0, libserver.so)
bool __fastcall CDOTA_Ability_Puck_DreamCoil::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Puck_DreamCoil::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Puck_DreamCoil::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 641, @0x0000000002a0b9d0, libserver.so)
// globals: CDOTA_Ability_Puck_DreamCoil::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Puck_DreamCoil::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Puck_DreamCoil::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Puck_DreamCoil::s_pSchemaBinding;
}


// CDOTA_Ability_Puck_DreamCoil::CEntityInstanceEntityClass::AllocateInstance  (line 641, @0x0000000002a10440, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Puck_DreamCoil::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Puck_DreamCoil::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Puck_DreamCoil::CEntityInstanceEntityClass::ConstructInstance  (line 641, @0x0000000002a147e0, libserver.so)  // inlines: CDOTA_Ability_Puck_DreamCoil, CEntityHandle, CHandle, Construct<CDOTA_Ability_Puck_DreamCoil>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Puck_DreamCoil::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Puck_DreamCoil::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = -1;
    *p = &off_43791B0;
  }
  return p;
}


// CDOTA_Ability_Puck_DreamCoil::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 641, @0x0000000002a20210, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Puck_DreamCoil::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Puck_DreamCoil::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Puck_DreamCoil::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 641, @0x0000000002a20230, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Puck_DreamCoil::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Puck_DreamCoil::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Puck_DreamCoil::GetEntityClassInternal  (line 641, @0x0000000002a3a2b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "puck_dream_coil", "CDOTA_Ability_Puck_DreamCoil"
// globals: `guard variable for'CDOTA_Ability_Puck_DreamCoil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_DreamCoilClass, CDOTA_Ability_Puck_DreamCoil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_DreamCoilClass, __dso_handle, CDOTA_Ability_Puck_DreamCoil::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Puck_DreamCoil::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_DreamCoilClassInfo, CDOTA_Ability_Puck_DreamCoil::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_DreamCoilClassInfo
CEntityClass *__cdecl CDOTA_Ability_Puck_DreamCoil::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Puck_DreamCoil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_DreamCoilClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Puck_DreamCoil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_DreamCoilClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Puck_DreamCoil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_DreamCoilClass);
    CDOTA_Ability_Puck_DreamCoil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_DreamCoilClass._vptr_CEntityClass = off_4379130;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Puck_DreamCoil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_DreamCoilClass);
    __cxa_atexit(
      CDOTA_Ability_Puck_DreamCoil::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Puck_DreamCoil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_DreamCoilClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Puck_DreamCoilClass != 0 )
    return &CDOTA_Ability_Puck_DreamCoil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_DreamCoilClass;
  if ( `guard variable for'CDOTA_Ability_Puck_DreamCoil::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_DreamCoilClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Puck_DreamCoil::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_DreamCoilClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Puck_DreamCoil::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_DreamCoilClassInfo,
      "CDOTA_Ability_Puck_DreamCoil",
      "puck_dream_coil",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Puck_DreamCoil::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_DreamCoilClassInfo);
  }
  CDOTA_Ability_Puck_DreamCoil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_DreamCoilClass.m_pClassInfo = &CDOTA_Ability_Puck_DreamCoil::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_DreamCoilClassInfo;
  CDOTA_Ability_Puck_DreamCoil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_DreamCoilClass.m_pBaseClassInfo = CDOTA_Ability_Puck_DreamCoil::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_DreamCoilClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Puck_DreamCoilClass = &CDOTA_Ability_Puck_DreamCoil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_DreamCoilClass;
  CDOTA_Ability_Puck_DreamCoil::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Puck_DreamCoilClassInfo.m_pClass = &CDOTA_Ability_Puck_DreamCoil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_DreamCoilClass;
  CDOTA_Ability_Puck_DreamCoil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_DreamCoilClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Puck_DreamCoilClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Puck_DreamCoil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Puck_DreamCoilClass;
}


// CDOTA_Ability_Puck_DreamCoil::GetConceptRecipientType  (line 656, @0x0000000002a0b9e0, libserver.so)
int __fastcall CDOTA_Ability_Puck_DreamCoil::GetConceptRecipientType(CDOTA_Ability_Puck_DreamCoil *const this)
{
  return 4;
}


// CDOTA_Ability_Puck_DreamCoil::YouForgotToImplementOrDeclareServerClass  (line 666, @0x00000000029b5fe0, libserver.so)
int __fastcall CDOTA_Ability_Puck_DreamCoil::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Puck_DreamCoil *const this)
{
  return 0;
}


// CDOTA_Ability_Puck_DreamCoil::GetServerClass  (line 666, @0x00000000029c9270, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Puck_DreamCoil::GetServerClass(CDOTA_Ability_Puck_DreamCoil *const this)
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


// CDOTA_Ability_Puck_DreamCoil::OnSpellStart  (line 675, @0x00000000029de0f0, libserver.so)  // inlines: GetAbilityData, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetSerialNumber, GetTeamNumber, Set, entindex, operator=
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, KeyValues::SetFloat, CDOTABaseAbility::GetCursorPosition, Thinker_Create, CEntityInstance::GetEntityIndex, CreateUnitEvent, CDOTAGamerules::SendProjectionAbilityMessage, KeyValues::~KeyValues, CDOTABaseAbility::LoadAbilityData (14 total)
// strings: "coil_duration", "coil_duration_scepter", "modifier_dream_coil_thinker"
void __fastcall CDOTA_Ability_Puck_DreamCoil::OnSpellStart(CDOTA_Ability_Puck_DreamCoil *const this)
{
  __m128i v2; // xmm0
  float v3; // r14d
  __m128i v4; // xmm0
  int v5; // r13d
  CDOTA_BaseNPC *Caster; // rax
  float v7; // xmm1_4
  int m_Value; // r13d
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v12; // eax
  __int16 v13; // cx
  CDOTA_BaseNPC *v14; // rax
  CEntityIndex v15; // eax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r13d
  CDOTA_BaseNPC *v18; // rax
  float v19; // xmm3_4
  KeyValues kv; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-28h]
  Vector CursorPosition; // 0:kr00_12.12
  Vector v23; // 0:kr14_12.12

  v21 = __readfsqword(0x28u);
  *v2.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "coil_duration", -1, 0);
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  *v4.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "coil_duration_scepter", -1, 0);
  v5 = _mm_cvtsi128_si32(v4);
  KeyValues::KeyValues(&kv, "modifier_dream_coil_thinker");
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    v3 = *&v5;
  KeyValues::SetFloat(&kv, "duration", v7);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  v9 = CDOTABaseAbility::GetCaster(this);
  v10 = Thinker_Create(v9, this, "modifier_dream_coil_thinker", &kv, CursorPosition, m_Value, 0, 1, 0);
  if ( v10 != 0 && (m_pEntity = v10->m_pEntity) != 0 )
  {
    v12 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v13 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hThinker.m_Index) = v13 | this->m_hThinker.m_Index & 0x8000;
    this->m_hThinker.m_Index = (v12 << 15) | this->m_hThinker.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hThinker.m_Index = -1;
  }
  v14 = CDOTABaseAbility::GetCaster(this);
  v15.m_Data = CEntityInstance::GetEntityIndex(v14).m_Data;
  CreateUnitEvent(v15, 0, 25, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_IMPORTANT_ABILITY);
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  v23 = CDOTABaseAbility::GetCursorPosition(this);
  v18 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(g_pGameRules, v18, 0, m_iAbilityID, 0, 0, *&v23.x, v23.z, v3, v19);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Puck_DreamCoil::GetAbilityDamageToTargetOverInterval  (line 698, @0x00000000029e6bb0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "coil_break_damage"
__int64 __fastcall CDOTA_Ability_Puck_DreamCoil::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Puck_DreamCoil *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "coil_break_damage", -1, 0);
    return (LevelSpecialValue * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Ability_Puck_DreamCoil::GetStunDuration  (line 708, @0x00000000029e6c10, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "coil_stun_duration"
float __fastcall CDOTA_Ability_Puck_DreamCoil::GetStunDuration(CDOTA_Ability_Puck_DreamCoil *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "coil_stun_duration", -1, 0);
}


// CDOTA_Modifier_Puck_DreamCoil_Thinker::~CDOTA_Modifier_Puck_DreamCoil_Thinker  (line 716, @0x0000000002a337a0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlMemory<int, int>::Purge
void __fastcall CDOTA_Modifier_Puck_DreamCoil_Thinker::~CDOTA_Modifier_Puck_DreamCoil_Thinker(
        CDOTA_Modifier_Puck_DreamCoil_Thinker *const this)
{
  bool v2; // zf
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_FXIndex.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_4379C70;
  this->m_FXIndex.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_FXIndex.m_Memory;
    CUtlMemory<int,int>::Purge(&this->m_FXIndex.m_Memory);
    if ( (this->m_FXIndex.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(p_m_Memory);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hLinkedEntities);
  if ( (this->m_hLinkedEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hLinkedEntities.m_Memory),
        (this->m_hLinkedEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hLinkedEntities.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Puck_DreamCoil_Thinker::~CDOTA_Modifier_Puck_DreamCoil_Thinker  (line 716, @0x0000000002a33850, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Modifier_Puck_DreamCoil_Thinker, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlMemory<int, int>::Purge
void __fastcall CDOTA_Modifier_Puck_DreamCoil_Thinker::~CDOTA_Modifier_Puck_DreamCoil_Thinker(
        CDOTA_Modifier_Puck_DreamCoil_Thinker *const this)
{
  bool v2; // zf
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_FXIndex.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_4379C70;
  this->m_FXIndex.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_FXIndex.m_Memory;
    CUtlMemory<int,int>::Purge(&this->m_FXIndex.m_Memory);
    if ( (this->m_FXIndex.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(p_m_Memory);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hLinkedEntities);
  if ( (this->m_hLinkedEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hLinkedEntities.m_Memory);
    if ( (this->m_hLinkedEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hLinkedEntities.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Puck_DreamCoil_Thinker::IsHidden  (line 721, @0x0000000002a0b9f0, libserver.so)
bool __fastcall CDOTA_Modifier_Puck_DreamCoil_Thinker::IsHidden(CDOTA_Modifier_Puck_DreamCoil_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Puck_DreamCoil_Thinker::OnCreated  (line 742, @0x0000000002a02020, libserver.so)  // inlines: AddToTail, CopyConstruct<int>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Tail, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, DotaRetrieveAbilityValue<float>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle, FindUnitsInRadius (24 total)
// strings: "coil_radius", "coil_break_radius", "coil_stun_duration", "coil_stun_duration_scepter", "coil_break_damage", "coil_break_damage_scepter" (14 total)
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_Puck_DreamCoil_Thinker::OnCreated(
        CDOTA_Modifier_Puck_DreamCoil_Thinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *v10; // rax
  CDOTA_BaseNPC *v11; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v15; // r14
  CDOTA_ParticleManager *v16; // rax
  CDOTA_BaseNPC *v17; // r13
  CDOTA_BaseNPC *v18; // rax
  const Vector *v19; // r12
  CDOTA_BaseNPC *v20; // rax
  __int64 v21; // r12
  CHandle<CBaseEntity> *v22; // rdx
  uint32 m_Index; // eax
  __int16 v24; // cx
  CEntityIdentity *v25; // rdx
  CEntityIdentity *v26; // rdx
  CEntityInstance *m_pInstance; // r13
  CDOTA_BaseNPC *v28; // r15
  CDOTA_ParticleManager *v29; // rax
  int Particle; // eax
  __int64 m_Size; // r15
  int v32; // edx
  int *v33; // rdx
  CDOTA_BaseNPC *v34; // rax
  const Vector *v35; // r15
  CDOTA_ParticleManager *v36; // rax
  CDOTA_ParticleManager *v37; // rax
  CDOTABaseAbility *v38; // r15
  CDOTA_BaseNPC *v39; // rax
  float v40; // xmm1_4
  CDOTABaseAbility *v41; // r15
  CDOTA_BaseNPC *v42; // rax
  CDOTA_BaseNPC *v43; // rax
  CDOTABaseAbility *v44; // rax
  float v45; // xmm1_4
  CDOTABaseAbility *v46; // r15
  CDOTA_BaseNPC *v47; // rax
  CDOTA_BaseNPC *v48; // rax
  float v49; // xmm1_4
  int v50; // r12d
  CDOTA_BaseNPC *v51; // rax
  CDOTA_BaseNPC_Hero *v52; // rdi
  CDOTA_BaseNPC *v53; // rax
  CDOTA_BaseNPC_Hero *v54; // rdi
  CDOTABaseAbility *v55; // rax
  CDOTA_BaseNPC *pEnt; // [rsp+20h] [rbp-70h]
  float flRadius; // [rsp+2Ch] [rbp-64h]
  int flRadiusa; // [rsp+2Ch] [rbp-64h]
  float flRadiusb; // [rsp+2Ch] [rbp-64h]
  int flRadiusc; // [rsp+2Ch] [rbp-64h]
  float stun_duration; // [rsp+3Ch] [rbp-54h] BYREF
  KeyValues kv; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v63; // [rsp+58h] [rbp-38h]

  v63 = __readfsqword(0x28u);
  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->coil_radius, "coil_radius");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->coil_break_radius, "coil_break_radius");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v5, &this->coil_stun_duration, "coil_stun_duration");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v6, &this->coil_stun_duration_scepter, "coil_stun_duration_scepter");
  v7 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v7, &this->coil_break_damage, "coil_break_damage");
  v8 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v8, &this->coil_break_damage_scepter, "coil_break_damage_scepter");
  Caster = CDOTA_Buff::GetCaster(this);
  this->m_bHasScepter = CDOTA_BaseNPC::HasScepter(Caster);
  v10 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v10, &stun_duration, "stun_duration");
  v11 = CDOTA_Buff::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v11) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_puck/puck_dreamcoil.vpcf",
                   2,
                   0,
                   0,
                   v11);
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v15 = CDOTA_Buff::GetParent(this);
  v16 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v16, v11, 0, v15, 1, 0, *AbsOrigin, 1);
  CDOTA_Buff::AddParticle(this, v11, 0, 0, -1, 0, 0);
  flRadius = this->coil_radius;
  v17 = CDOTA_Buff::GetParent(this);
  v18 = CDOTA_Buff::GetParent(this);
  v19 = CBaseEntity::GetAbsOrigin(v18);
  v20 = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(v20->m_iTeamNum.m_Value, v19, v17, flRadius, &this->m_hLinkedEntities, 2, 1, 16, 0, 0);
  if ( this->m_hLinkedEntities.m_Size > 0 )
  {
    v21 = 0;
    do
    {
      v22 = &this->m_hLinkedEntities.m_Memory.m_pMemory[v21];
      m_Index = v22->m_Index;
      if ( v22->m_Index + 2 > 1 )
      {
        v24 = v22->m_Index;
        v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v22->m_Index) >> 9) & 0x3F];
        if ( v25 != 0 )
        {
          v26 = &v25[v24 & 0x1FF];
          if ( v26 != 0 && m_Index == v26->m_EHandle.m_Index )
          {
            m_pInstance = v26->m_pInstance;
            if ( v26->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
            {
              v28 = CDOTA_Buff::GetCaster(this);
              v29 = GetParticleManager();
              Particle = CDOTA_ParticleManager::CreateParticle(
                           v29,
                           "particles/units/heroes/hero_puck/puck_dreamcoil_tether.vpcf",
                           2,
                           0,
                           0,
                           v28);
              m_Size = this->m_FXIndex.m_Size;
              if ( m_Size == this->m_FXIndex.m_Memory.m_nAllocationCount )
              {
                flRadiusc = Particle;
                CUtlMemory<int,int>::Grow(&this->m_FXIndex.m_Memory, 1);
                v32 = this->m_FXIndex.m_Size;
                Particle = flRadiusc;
              }
              else
              {
                v32 = this->m_FXIndex.m_Size;
              }
              this->m_FXIndex.m_Size = v32 + 1;
              v33 = &this->m_FXIndex.m_Memory.m_pMemory[m_Size];
              if ( v33 != 0 )
                *v33 = Particle;
              v34 = CDOTA_Buff::GetParent(this);
              v35 = CBaseEntity::GetAbsOrigin(v34);
              pEnt = CDOTA_Buff::GetParent(this);
              flRadiusa = this->m_FXIndex.m_Memory.m_pMemory[this->m_FXIndex.m_Size - 1];
              v36 = GetParticleManager();
              CDOTA_ParticleManager::SetParticleControlEnt(v36, flRadiusa, 0, pEnt, 1, 0, *v35, 1);
              LODWORD(v35) = this->m_FXIndex.m_Memory.m_pMemory[this->m_FXIndex.m_Size - 1];
              v37 = GetParticleManager();
              CDOTA_ParticleManager::SetParticleControlEnt(
                v37,
                v35,
                1,
                m_pInstance,
                5,
                "attach_hitloc",
                vec3_invalid,
                1);
              flRadiusb = this->coil_break_damage;
              v38 = CDOTA_Buff::GetAbility(this);
              v39 = CDOTA_Buff::GetCaster(this);
              ApplyDamage(v39, m_pInstance, v38, flRadiusb, 2, 0);
              KeyValues::KeyValues(&kv, "modifier_stunned");
              KeyValues::SetFloat(&kv, "duration", v40);
              if ( (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 2) == 0 )
              {
                v41 = CDOTA_Buff::GetAbility(this);
                v42 = CDOTA_Buff::GetCaster(this);
                CDOTA_BaseNPC::AddNewModifier(m_pInstance, v42, v41, "modifier_stunned", &kv, 0);
              }
              v43 = CDOTA_Buff::GetCaster(this);
              if ( CDOTA_BaseNPC::HasScepter(v43) )
              {
                v44 = CDOTA_Buff::GetAbility(this);
                CDOTABaseAbility::GetLevelSpecialValueFor<float>(v44, "coil_duration_scepter", -1, 0);
              }
              else
              {
                v55 = CDOTA_Buff::GetAbility(this);
                CDOTABaseAbility::GetLevelSpecialValueFor<float>(v55, "coil_duration", -1, 0);
              }
              KeyValues::SetFloat(&kv, "duration", v45);
              v46 = CDOTA_Buff::GetAbility(this);
              v47 = CDOTA_Buff::GetCaster(this);
              CDOTA_BaseNPC::AddNewModifier(m_pInstance, v47, v46, "modifier_puck_coiled", &kv, 0);
              KeyValues::~KeyValues(&kv);
            }
          }
        }
      }
      ++v21;
    }
    while ( this->m_hLinkedEntities.m_Size > v21 );
  }
  v48 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(v48, "Hero_Puck.Dream_Coil", 0.0, 0, 0);
  v50 = this->m_hLinkedEntities.m_Size;
  if ( v50 > 0 )
  {
    v51 = CDOTA_Buff::GetCaster(this);
    if ( v51 != 0 && (v51->m_iUnitType & 1) != 0 )
      v52 = v51;
    else
      v52 = 0;
    EconEntity_OnOwnerKillEaterEvent(
      v52,
      0,
      kill_eater_event_t::kKillEaterEvent_DreamLeague_DreamPoints,
      v50,
      INVALID_ITEM_DEF_INDEX);
    if ( this->m_hLinkedEntities.m_Size > 2 )
    {
      v53 = CDOTA_Buff::GetCaster(this);
      if ( v53 != 0 && (v53->m_iUnitType & 1) != 0 )
        v54 = v53;
      else
        v54 = 0;
      EconEntity_OnOwnerKillEaterEvent(
        v54,
        0,
        kill_eater_event_t::kKillEaterEvent_Puck_GoodCoils,
        1,
        INVALID_ITEM_DEF_INDEX);
    }
  }
  CDOTA_Buff::StartIntervalThink(this, 0.1, v49);
}


// CDOTA_Modifier_Puck_DreamCoil_Thinker::OnDestroy  (line 802, @0x00000000029c3e40, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_Buff::GetParent, UTIL_Remove
// strings: "modifier_puck_coiled"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Puck_DreamCoil_Thinker::OnDestroy(CDOTA_Modifier_Puck_DreamCoil_Thinker *const this)
{
  __int64 v1; // r13
  int v2; // r12d
  int v4; // r14d
  CDOTA_ParticleManager *ParticleManager; // rax
  __int64 v6; // r13
  int i; // r12d
  CHandle<CBaseEntity> *v8; // rdx
  uint32 m_Index; // eax
  __int16 v10; // cx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTA_BaseNPC *Parent; // rax

  v1 = 0;
  v2 = 0;
  while ( this->m_FXIndex.m_Size > v2 )
  {
    ++v2;
    v4 = this->m_FXIndex.m_Memory.m_pMemory[v1++];
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, v4, 0);
  }
  v6 = 0;
  for ( i = 0; this->m_hLinkedEntities.m_Size > i; ++v6 )
  {
    v8 = &this->m_hLinkedEntities.m_Memory.m_pMemory[v6];
    m_Index = v8->m_Index;
    if ( v8->m_Index + 2 > 1 )
    {
      v10 = v8->m_Index;
      v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_Index) >> 9) & 0x3F];
      if ( v11 != 0 )
      {
        v12 = &v11[v10 & 0x1FF];
        if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index )
        {
          m_pInstance = v12->m_pInstance;
          if ( v12->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
            CDOTA_BaseNPC::RemoveModifierByName(m_pInstance, "modifier_puck_coiled");
        }
      }
    }
    ++i;
  }
  Parent = CDOTA_Buff::GetParent(this);
  UTIL_Remove(Parent);
}


// CDOTA_Modifier_Puck_DreamCoil_Thinker::OnIntervalThink  (line 823, @0x00000000029fcd80, libserver.so)  // inlines: FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsValid, Length2D, LookupEntity, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator[]
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, ApplyDamage, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CUtlVectorBase<int, CUtlMemory<int, int> >::Remove, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues (17 total)
// strings: "modifier_stunned", "Hero_Puck.Dream_Coil_Snap", "modifier_puck_coiled"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Puck_DreamCoil_Thinker::OnIntervalThink(
        CDOTA_Modifier_Puck_DreamCoil_Thinker *const this)
{
  int coil_break_damage_scepter; // eax
  int v3; // ebx
  CHandle<CBaseEntity> *v4; // rdx
  uint32 m_Index; // eax
  __int16 v6; // cx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // r14
  const Vector *v12; // rax
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // rax
  int v15; // r14d
  CDOTA_ParticleManager *ParticleManager; // rax
  unsigned __int64 m_Value; // rax
  CDOTABaseAbility *v18; // r14
  CDOTA_BaseNPC *v19; // rax
  int v20; // r13d
  CDOTA_ParticleManager *v21; // rax
  int v22; // esi
  CUtlVector<int,CUtlMemory<int,int> > *p_m_FXIndex; // [rsp+8h] [rbp-68h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *p_m_hLinkedEntities; // [rsp+10h] [rbp-60h]
  int iDamage; // [rsp+18h] [rbp-58h]
  float fDist; // [rsp+1Ch] [rbp-54h]
  KeyValues kv; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-38h]

  v28 = __readfsqword(0x28u);
  coil_break_damage_scepter = this->coil_break_damage_scepter;
  if ( !this->m_bHasScepter )
    coil_break_damage_scepter = this->coil_break_damage;
  iDamage = coil_break_damage_scepter;
  if ( this->m_hLinkedEntities.m_Size > 0 )
  {
    v3 = 0;
    p_m_hLinkedEntities = &this->m_hLinkedEntities;
    p_m_FXIndex = &this->m_FXIndex;
    while ( 1 )
    {
      v4 = &this->m_hLinkedEntities.m_Memory.m_pMemory[v3];
      m_Index = v4->m_Index;
      if ( v4->m_Index + 2 <= 1 )
        goto LABEL_5;
      v6 = v4->m_Index;
      v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v4->m_Index) >> 9) & 0x3F];
      if ( v7 == 0 )
        goto LABEL_5;
      v8 = &v7[v6 & 0x1FF];
      if ( v8 == 0 )
        goto LABEL_5;
      if ( m_Index != v8->m_EHandle.m_Index )
        goto LABEL_5;
      m_pInstance = v8->m_pInstance;
      if ( v8->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC )
        goto LABEL_5;
      Parent = CDOTA_Buff::GetParent(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
      v12 = CBaseEntity::GetAbsOrigin(m_pInstance);
      fDist = fsqrt(
                ((v12->x - AbsOrigin->x) * (v12->x - AbsOrigin->x))
              + ((v12->y - AbsOrigin->y) * (v12->y - AbsOrigin->y)));
      if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) == 0 )
        break;
      if ( fDist <= this->coil_break_radius )
      {
LABEL_5:
        if ( this->m_hLinkedEntities.m_Size <= ++v3 )
          return;
      }
      else
      {
        Ability = CDOTA_Buff::GetAbility(this);
        Caster = CDOTA_Buff::GetCaster(this);
        ApplyDamage(Caster, m_pInstance, Ability, iDamage, 2, 0);
        v15 = this->m_FXIndex.m_Memory.m_pMemory[v3];
        if ( v15 != -1 )
        {
          ParticleManager = GetParticleManager();
          CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, v15, 0);
          CUtlVectorBase<int,CUtlMemory<int,int>>::Remove(p_m_FXIndex, v3);
        }
        if ( this->m_bHasScepter
          || ((m_Value = m_pInstance->m_nUnitState64.m_Value) & 0x200) == 0
          && !m_pInstance->m_bIsWaitingToSpawn.m_Value
          && (m_Value & 0x100) == 0 )
        {
          KeyValues::KeyValues(&kv, "modifier_stunned");
          KeyValues::SetFloat(&kv, "duration", this->coil_stun_duration_scepter);
          v18 = CDOTA_Buff::GetAbility(this);
          v19 = CDOTA_Buff::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(m_pInstance, v19, v18, "modifier_stunned", &kv, 0);
          KeyValues::~KeyValues(&kv);
        }
        CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Puck.Dream_Coil_Snap", 0.0, 0, 0);
        CDOTA_BaseNPC::RemoveModifierByName(m_pInstance, "modifier_puck_coiled");
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(p_m_hLinkedEntities, v3);
        if ( this->m_hLinkedEntities.m_Size <= v3 )
          return;
      }
    }
    v20 = this->m_FXIndex.m_Memory.m_pMemory[v3];
    v21 = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(v21, v20, 0);
    CUtlVectorBase<int,CUtlMemory<int,int>>::Remove(p_m_FXIndex, v3);
    v22 = v3--;
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(p_m_hLinkedEntities, v22);
    goto LABEL_5;
  }
}


// CDOTA_Modifier_Puck_Coiled::~CDOTA_Modifier_Puck_Coiled  (line 872, @0x0000000002a12fe0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Puck_Coiled::~CDOTA_Modifier_Puck_Coiled(CDOTA_Modifier_Puck_Coiled *const this)
{
  this->_vptr_CDOTA_Buff = &off_4379F50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Puck_Coiled::~CDOTA_Modifier_Puck_Coiled  (line 872, @0x0000000002a13000, libserver.so)  // inlines: ~CDOTA_Modifier_Puck_Coiled
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Puck_Coiled::~CDOTA_Modifier_Puck_Coiled(CDOTA_Modifier_Puck_Coiled *const this)
{
  this->_vptr_CDOTA_Buff = &off_4379F50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Puck_Coiled::IsDebuff  (line 877, @0x0000000002a0ba00, libserver.so)
bool __fastcall CDOTA_Modifier_Puck_Coiled::IsDebuff(CDOTA_Modifier_Puck_Coiled *const this)
{
  return 1;
}


// CDOTA_Modifier_Puck_Coiled::IsPurgable  (line 878, @0x0000000002a0ba10, libserver.so)
bool __fastcall CDOTA_Modifier_Puck_Coiled::IsPurgable(CDOTA_Modifier_Puck_Coiled *const this)
{
  return 0;
}


