// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_vengeful_spirit.cpp:34
class CDOTA_Unit_Hero_VengefulSpirit : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_VengefulSpirit(CDOTA_Unit_Hero_VengefulSpirit &);
	CDOTA_Unit_Hero_VengefulSpirit(CDOTA_Unit_Hero_VengefulSpirit &);
	CDOTA_Unit_Hero_VengefulSpirit();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual ~CDOTA_Unit_Hero_VengefulSpirit();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[6] Precache
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_vengeful_spirit.cpp:47
class C_CDOTA_Unit_Hero_VengefulSpirit_MapInstall {
	C_CDOTA_Unit_Hero_VengefulSpirit_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_vengeful_spirit.cpp:69
class CDOTA_Ability_VengefulSpirit_Magic_Missile : public CDOTABaseAbility {
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
	CDOTA_Ability_VengefulSpirit_Magic_Missile(CDOTA_Ability_VengefulSpirit_Magic_Missile &);
	CDOTA_Ability_VengefulSpirit_Magic_Missile(CDOTA_Ability_VengefulSpirit_Magic_Missile &);
	CDOTA_Ability_VengefulSpirit_Magic_Missile();
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
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual ~CDOTA_Ability_VengefulSpirit_Magic_Missile();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// vtable[256] CastFilterResult
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_vengeful_spirit.cpp:84
class C_CDOTA_Ability_VengefulSpirit_Magic_Missile_MapInstall {
	C_CDOTA_Ability_VengefulSpirit_Magic_Missile_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_vengeful_spirit.cpp:205
class CDOTA_Ability_VengefulSpirit_WaveOfTerror : public CDOTABaseAbility {
public:

private:

	int wave_width;  // +0x390
	float wave_speed;  // +0x394
	int m_iProjectile;  // +0x398
	float vision_aoe;  // +0x39c
	float vision_duration;  // +0x3a0
	int m_iNumHeroesHit;  // +0x3a4

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
	CDOTA_Ability_VengefulSpirit_WaveOfTerror(CDOTA_Ability_VengefulSpirit_WaveOfTerror &);
	CDOTA_Ability_VengefulSpirit_WaveOfTerror(CDOTA_Ability_VengefulSpirit_WaveOfTerror &);
	CDOTA_Ability_VengefulSpirit_WaveOfTerror();
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
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual void OnProjectileThink(const Vector &);
	virtual int GetConceptRecipientType();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_VengefulSpirit_WaveOfTerror();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[268] OnUpgrade
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[291] OnProjectileThink
	// vtable[299] GetConceptRecipientType
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 968
};

// src/game/shared/dota/units/dota_unit_hero_vengeful_spirit.cpp:236
class C_CDOTA_Ability_VengefulSpirit_WaveOfTerror_MapInstall {
	C_CDOTA_Ability_VengefulSpirit_WaveOfTerror_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_vengeful_spirit.cpp:364
class CDOTA_Modifier_VengefulSpirit_WaveOfTerror : public CDOTA_Buff {
public:

private:

	int armor_reduction;  // +0xba8
	int damage_reduction_pct;  // +0xbac
	CDOTA_Modifier_VengefulSpirit_WaveOfTerror();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual const char * GetEffectName();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierBaseDamageOutgoing_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual ~CDOTA_Modifier_VengefulSpirit_WaveOfTerror();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[67] GetEffectName
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_vengeful_spirit.cpp:422
class CDOTA_Ability_VengefulSpirit_Command_Aura : public CDOTABaseAbility {
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
	CDOTA_Ability_VengefulSpirit_Command_Aura(CDOTA_Ability_VengefulSpirit_Command_Aura &);
	CDOTA_Ability_VengefulSpirit_Command_Aura(CDOTA_Ability_VengefulSpirit_Command_Aura &);
	CDOTA_Ability_VengefulSpirit_Command_Aura();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_VengefulSpirit_Command_Aura();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_vengeful_spirit.cpp:436
class CDOTA_Modifier_VengefulSpirit_Command_Aura : public CDOTA_Buff {
public:

private:

	int aura_radius;  // +0xba8
	CDOTA_Modifier_VengefulSpirit_Command_Aura();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual ~CDOTA_Modifier_VengefulSpirit_Command_Aura();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_vengeful_spirit.cpp:528
class CDOTA_Modifier_VengefulSpirit_Command_Aura_Effect : public CDOTA_Buff {
public:

private:

	int bonus_damage_pct;  // +0xba8
	CDOTA_Modifier_VengefulSpirit_Command_Aura_Effect();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierBaseDamageOutgoing_Percentage(const CModifierParams &);
	virtual int GetAttributes();
	virtual ~CDOTA_Modifier_VengefulSpirit_Command_Aura_Effect();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[7] GetAttributes
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_vengeful_spirit.cpp:591
class CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura : public CDOTA_Buff {
public:

private:

	int aura_radius;  // +0xba8
	CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual void OnIntervalThink();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual bool IsHidden();
	virtual int GetAttributes();
	virtual ~CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[56] OnIntervalThink
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[11] IsHidden
	// vtable[7] GetAttributes
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_vengeful_spirit.cpp:651
class CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura_Effect : public CDOTA_Buff {
public:

private:

	int bonus_damage_pct;  // +0xba8
	CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura_Effect();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierBaseDamageOutgoing_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura_Effect();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_vengeful_spirit.cpp:713
class CDOTA_Ability_VengefulSpirit_Nether_Swap : public CDOTABaseAbility {
	class NetworkVar_m_hScepterIllusion {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	int m_nFXIndex;  // +0x390
	typedef CDOTA_Ability_VengefulSpirit_Nether_Swap ThisClass;

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
	CDOTA_Ability_VengefulSpirit_Nether_Swap(CDOTA_Ability_VengefulSpirit_Nether_Swap &);
	CDOTA_Ability_VengefulSpirit_Nether_Swap(CDOTA_Ability_VengefulSpirit_Nether_Swap &);
	CDOTA_Ability_VengefulSpirit_Nether_Swap();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual float GetCooldown(int);
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual ~CDOTA_Ability_VengefulSpirit_Nether_Swap();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// vtable[242] GetCooldown
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_vengeful_spirit.cpp:747
class C_CDOTA_Ability_VengefulSpirit_Nether_Swap_MapInstall {
	C_CDOTA_Ability_VengefulSpirit_Nether_Swap_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_vengeful_spirit.cpp:856
class CDOTA_Modifier_VengefulSpirit_NetherSwap : public CDOTA_Buff {
public:

	CDOTA_Modifier_VengefulSpirit_NetherSwap();
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual ~CDOTA_Modifier_VengefulSpirit_NetherSwap();

	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_vengeful_spirit.cpp:963
class CDOTA_Modifier_VengefulSpirit_Nether_Swap_PathingFix : public CDOTA_Buff {
public:

	CDOTA_Modifier_VengefulSpirit_Nether_Swap_PathingFix();
	virtual void OnDestroy();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_VengefulSpirit_Nether_Swap_PathingFix();

	// vtable[60] OnDestroy
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_vengeful_spirit.cpp:1030
class CDOTA_Modifier_VengefulSpirit_Hybrid_Special : public CDOTA_Buff {
public:

private:

	bool m_bLeftoverHybrid;  // +0xba8
	CDOTA_Modifier_VengefulSpirit_Hybrid_Special();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierSuperIllusion(const CModifierParams &);
	ModifierVariant_t GetModifierSuperIllusionWithUltimate(const CModifierParams &);
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual void OnThinkInternal();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_VengefulSpirit_Hybrid_Special();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[62] OnThinkInternal
	// vtable[5] CheckState
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_VengefulSpirit::~CDOTA_Unit_Hero_VengefulSpirit  (line 34, @0x0000000002a68140, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_VengefulSpirit::~CDOTA_Unit_Hero_VengefulSpirit(
        CDOTA_Unit_Hero_VengefulSpirit *const this)
{
  this->_vptr_IHandleEntity = &off_43B3110;
  this->_vptr_INextBotEventResponder = &off_43B40F0;
  this->_vptr_CObstructionObject = &off_43B4420;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_VengefulSpirit::~CDOTA_Unit_Hero_VengefulSpirit  (line 34, @0x0000000002a68180, libserver.so)  // inlines: ~CDOTA_Unit_Hero_VengefulSpirit
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_VengefulSpirit::~CDOTA_Unit_Hero_VengefulSpirit(
        CDOTA_Unit_Hero_VengefulSpirit *const this)
{
  this->_vptr_IHandleEntity = &off_43B3110;
  this->_vptr_INextBotEventResponder = &off_43B40F0;
  this->_vptr_CObstructionObject = &off_43B4420;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_VengefulSpirit::Schema_DynamicBinding  (line 36, @0x0000000002a61cb0, libserver.so)
// globals: CDOTA_Unit_Hero_VengefulSpirit::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_VengefulSpirit::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_VengefulSpirit *const this)
{
  return CDOTA_Unit_Hero_VengefulSpirit::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_VengefulSpirit::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 36, @0x0000000002a61ce0, libserver.so)
// globals: CDOTA_Unit_Hero_VengefulSpirit::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_VengefulSpirit::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_VengefulSpirit::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_VengefulSpirit::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_VengefulSpirit::CEntityInstanceEntityClass::DestructInstance  (line 36, @0x0000000002a61cf0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_VengefulSpirit>
void __fastcall CDOTA_Unit_Hero_VengefulSpirit::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_VengefulSpirit::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_VengefulSpirit::CEntityInstanceEntityClass::FreeInstance  (line 36, @0x0000000002a61d10, libserver.so)
void __fastcall CDOTA_Unit_Hero_VengefulSpirit::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_VengefulSpirit::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_VengefulSpirit::CEntityInstanceEntityClass::CanAllocate  (line 36, @0x0000000002a61d30, libserver.so)
bool __fastcall CDOTA_Unit_Hero_VengefulSpirit::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_VengefulSpirit::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_VengefulSpirit::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 36, @0x0000000002a61d40, libserver.so)
// globals: CDOTA_Unit_Hero_VengefulSpirit::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_VengefulSpirit::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_VengefulSpirit::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_VengefulSpirit::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_VengefulSpirit::CEntityInstanceEntityClass::AllocateInstance  (line 36, @0x0000000002a64370, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_VengefulSpirit::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_VengefulSpirit::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_VengefulSpirit::CEntityInstanceEntityClass::ConstructInstance  (line 36, @0x0000000002a65d70, libserver.so)  // inlines: CDOTA_Unit_Hero_VengefulSpirit, Construct<CDOTA_Unit_Hero_VengefulSpirit>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_VengefulSpirit::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_VengefulSpirit::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_43B3110;
    *(p + 236) = &off_43B40F0;
    *(p + 257) = &off_43B4420;
  }
  return p;
}


// CDOTA_Unit_Hero_VengefulSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 36, @0x0000000002a6b560, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_VengefulSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_VengefulSpirit::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_VengefulSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 36, @0x0000000002a6b6f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_VengefulSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_VengefulSpirit::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_VengefulSpirit::GetEntityClassInternal  (line 36, @0x0000000002a746c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "npc_dota_hero_vengefulspirit", "CDOTA_Unit_Hero_VengefulSpirit"
// globals: `guard variable for'CDOTA_Unit_Hero_VengefulSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VengefulSpiritClass, CDOTA_Unit_Hero_VengefulSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VengefulSpiritClass, __dso_handle, CDOTA_Unit_Hero_VengefulSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_VengefulSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_VengefulSpiritClassInfo, CDOTA_Unit_Hero_VengefulSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_VengefulSpiritClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_VengefulSpirit::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_VengefulSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VengefulSpiritClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_VengefulSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VengefulSpiritClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_VengefulSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VengefulSpiritClass);
    CDOTA_Unit_Hero_VengefulSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VengefulSpiritClass._vptr_CEntityClass = off_43B3090;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_VengefulSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VengefulSpiritClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_VengefulSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_VengefulSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VengefulSpiritClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_VengefulSpiritClass != 0 )
    return &CDOTA_Unit_Hero_VengefulSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VengefulSpiritClass;
  if ( `guard variable for'CDOTA_Unit_Hero_VengefulSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_VengefulSpiritClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_VengefulSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_VengefulSpiritClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_VengefulSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_VengefulSpiritClassInfo,
      "CDOTA_Unit_Hero_VengefulSpirit",
      "npc_dota_hero_vengefulspirit",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_VengefulSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_VengefulSpiritClassInfo);
  }
  CDOTA_Unit_Hero_VengefulSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VengefulSpiritClass.m_pClassInfo = &CDOTA_Unit_Hero_VengefulSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_VengefulSpiritClassInfo;
  CDOTA_Unit_Hero_VengefulSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VengefulSpiritClass.m_pBaseClassInfo = CDOTA_Unit_Hero_VengefulSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_VengefulSpiritClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_VengefulSpiritClass = &CDOTA_Unit_Hero_VengefulSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VengefulSpiritClass;
  CDOTA_Unit_Hero_VengefulSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_VengefulSpiritClassInfo.m_pClass = &CDOTA_Unit_Hero_VengefulSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VengefulSpiritClass;
  CDOTA_Unit_Hero_VengefulSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VengefulSpiritClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_VengefulSpiritClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_VengefulSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VengefulSpiritClass;
}


// CDOTA_Unit_Hero_VengefulSpirit::YouForgotToImplementOrDeclareServerClass  (line 47, @0x0000000002a3fa00, libserver.so)
int __fastcall CDOTA_Unit_Hero_VengefulSpirit::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_VengefulSpirit *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_VengefulSpirit::GetServerClass  (line 47, @0x0000000002a48ab0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_VengefulSpirit::GetServerClass(CDOTA_Unit_Hero_VengefulSpirit *const this)
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


// CDOTA_Unit_Hero_VengefulSpirit::Precache  (line 55, @0x0000000002a41a90, libserver.so)
// calls: PrecacheParticleSystem, CDOTA_BaseNPC_Hero::Precache
// strings: "particles/status_fx/status_effect_dark_seer_illusion.vpcf"
void __fastcall CDOTA_Unit_Hero_VengefulSpirit::Precache(
        CDOTA_Unit_Hero_VengefulSpirit *const this,
        const CEntityPrecacheContext *pContext)
{
  PrecacheParticleSystem("particles/status_fx/status_effect_dark_seer_illusion.vpcf", pContext);
  CDOTA_BaseNPC_Hero::Precache(this, pContext);
}


// CDOTA_Ability_VengefulSpirit_Magic_Missile::~CDOTA_Ability_VengefulSpirit_Magic_Missile  (line 69, @0x0000000002a67870, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_VengefulSpirit_Magic_Missile::~CDOTA_Ability_VengefulSpirit_Magic_Missile(
        CDOTA_Ability_VengefulSpirit_Magic_Missile *const this)
{
  this->_vptr_IHandleEntity = &off_43B44F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_VengefulSpirit_Magic_Missile::~CDOTA_Ability_VengefulSpirit_Magic_Missile  (line 69, @0x0000000002a67890, libserver.so)  // inlines: ~CDOTA_Ability_VengefulSpirit_Magic_Missile
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_VengefulSpirit_Magic_Missile::~CDOTA_Ability_VengefulSpirit_Magic_Missile(
        CDOTA_Ability_VengefulSpirit_Magic_Missile *const this)
{
  this->_vptr_IHandleEntity = &off_43B44F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_VengefulSpirit_Magic_Missile::Schema_DynamicBinding  (line 71, @0x0000000002a61d50, libserver.so)
// globals: CDOTA_Ability_VengefulSpirit_Magic_Missile::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_VengefulSpirit_Magic_Missile::Schema_DynamicBinding(
        const CDOTA_Ability_VengefulSpirit_Magic_Missile *const this)
{
  return CDOTA_Ability_VengefulSpirit_Magic_Missile::s_pSchemaBinding;
}


// CDOTA_Ability_VengefulSpirit_Magic_Missile::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 71, @0x0000000002a61d60, libserver.so)
// globals: CDOTA_Ability_VengefulSpirit_Magic_Missile::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_VengefulSpirit_Magic_Missile::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_VengefulSpirit_Magic_Missile::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_VengefulSpirit_Magic_Missile::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_VengefulSpirit_Magic_Missile::CEntityInstanceEntityClass::DestructInstance  (line 71, @0x0000000002a61d70, libserver.so)  // inlines: Destruct<CDOTA_Ability_VengefulSpirit_Magic_Missile>
void __fastcall CDOTA_Ability_VengefulSpirit_Magic_Missile::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_VengefulSpirit_Magic_Missile::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_VengefulSpirit_Magic_Missile::CEntityInstanceEntityClass::FreeInstance  (line 71, @0x0000000002a61d90, libserver.so)
void __fastcall CDOTA_Ability_VengefulSpirit_Magic_Missile::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_VengefulSpirit_Magic_Missile::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_VengefulSpirit_Magic_Missile::CEntityInstanceEntityClass::CanAllocate  (line 71, @0x0000000002a61db0, libserver.so)
bool __fastcall CDOTA_Ability_VengefulSpirit_Magic_Missile::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_VengefulSpirit_Magic_Missile::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_VengefulSpirit_Magic_Missile::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 71, @0x0000000002a61dc0, libserver.so)
// globals: CDOTA_Ability_VengefulSpirit_Magic_Missile::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_VengefulSpirit_Magic_Missile::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_VengefulSpirit_Magic_Missile::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_VengefulSpirit_Magic_Missile::s_pSchemaBinding;
}


// CDOTA_Ability_VengefulSpirit_Magic_Missile::CEntityInstanceEntityClass::AllocateInstance  (line 71, @0x0000000002a643b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_VengefulSpirit_Magic_Missile::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_VengefulSpirit_Magic_Missile::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_VengefulSpirit_Magic_Missile::CEntityInstanceEntityClass::ConstructInstance  (line 71, @0x0000000002a66340, libserver.so)  // inlines: CDOTA_Ability_VengefulSpirit_Magic_Missile, Construct<CDOTA_Ability_VengefulSpirit_Magic_Missile>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_VengefulSpirit_Magic_Missile::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_VengefulSpirit_Magic_Missile::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43B44F0;
  }
  return p;
}


// CDOTA_Ability_VengefulSpirit_Magic_Missile::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 71, @0x0000000002a6b010, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_VengefulSpirit_Magic_Missile::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_VengefulSpirit_Magic_Missile::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_VengefulSpirit_Magic_Missile::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 71, @0x0000000002a6b030, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_VengefulSpirit_Magic_Missile::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_VengefulSpirit_Magic_Missile::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_VengefulSpirit_Magic_Missile::GetEntityClassInternal  (line 71, @0x0000000002a74810, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "vengefulspirit_magic_missile", "CDOTA_Ability_VengefulSpirit_Magic_Missile"
// globals: `guard variable for'CDOTA_Ability_VengefulSpirit_Magic_Missile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Magic_MissileClass, CDOTA_Ability_VengefulSpirit_Magic_Missile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Magic_MissileClass, __dso_handle, CDOTA_Ability_VengefulSpirit_Magic_Missile::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_VengefulSpirit_Magic_Missile::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_VengefulSpirit_Magic_MissileClassInfo, CDOTA_Ability_VengefulSpirit_Magic_Missile::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_VengefulSpirit_Magic_MissileClassInfo
CEntityClass *__cdecl CDOTA_Ability_VengefulSpirit_Magic_Missile::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_VengefulSpirit_Magic_Missile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Magic_MissileClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_VengefulSpirit_Magic_Missile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Magic_MissileClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_VengefulSpirit_Magic_Missile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Magic_MissileClass);
    CDOTA_Ability_VengefulSpirit_Magic_Missile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Magic_MissileClass._vptr_CEntityClass = off_43B4470;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_VengefulSpirit_Magic_Missile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Magic_MissileClass);
    __cxa_atexit(
      CDOTA_Ability_VengefulSpirit_Magic_Missile::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_VengefulSpirit_Magic_Missile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Magic_MissileClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_VengefulSpirit_Magic_MissileClass != 0 )
    return &CDOTA_Ability_VengefulSpirit_Magic_Missile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Magic_MissileClass;
  if ( `guard variable for'CDOTA_Ability_VengefulSpirit_Magic_Missile::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_VengefulSpirit_Magic_MissileClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_VengefulSpirit_Magic_Missile::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_VengefulSpirit_Magic_MissileClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_VengefulSpirit_Magic_Missile::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_VengefulSpirit_Magic_MissileClassInfo,
      "CDOTA_Ability_VengefulSpirit_Magic_Missile",
      "vengefulspirit_magic_missile",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_VengefulSpirit_Magic_Missile::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_VengefulSpirit_Magic_MissileClassInfo);
  }
  CDOTA_Ability_VengefulSpirit_Magic_Missile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Magic_MissileClass.m_pClassInfo = &CDOTA_Ability_VengefulSpirit_Magic_Missile::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_VengefulSpirit_Magic_MissileClassInfo;
  CDOTA_Ability_VengefulSpirit_Magic_Missile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Magic_MissileClass.m_pBaseClassInfo = CDOTA_Ability_VengefulSpirit_Magic_Missile::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_VengefulSpirit_Magic_MissileClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_VengefulSpirit_Magic_MissileClass = &CDOTA_Ability_VengefulSpirit_Magic_Missile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Magic_MissileClass;
  CDOTA_Ability_VengefulSpirit_Magic_Missile::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_VengefulSpirit_Magic_MissileClassInfo.m_pClass = &CDOTA_Ability_VengefulSpirit_Magic_Missile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Magic_MissileClass;
  CDOTA_Ability_VengefulSpirit_Magic_Missile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Magic_MissileClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_VengefulSpirit_Magic_MissileClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_VengefulSpirit_Magic_Missile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Magic_MissileClass;
}


// CDOTA_Ability_VengefulSpirit_Magic_Missile::YouForgotToImplementOrDeclareServerClass  (line 84, @0x0000000002a3fa10, libserver.so)
int __fastcall CDOTA_Ability_VengefulSpirit_Magic_Missile::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_VengefulSpirit_Magic_Missile *const this)
{
  return 0;
}


// CDOTA_Ability_VengefulSpirit_Magic_Missile::GetServerClass  (line 84, @0x0000000002a489b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_VengefulSpirit_Magic_Missile::GetServerClass(
        CDOTA_Ability_VengefulSpirit_Magic_Missile *const this)
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


// CDOTA_Ability_VengefulSpirit_Magic_Missile::CastFilterResult  (line 94, @0x0000000002a419f0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, UnitFilter
// strings: "special_bonus_unique_vengeful_spirit_3"
int __fastcall CDOTA_Ability_VengefulSpirit_Magic_Missile::CastFilterResult(
        CDOTA_Ability_VengefulSpirit_Magic_Missile *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int v6; // r13d
  CDOTA_BaseNPC *v7; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_vengeful_spirit_3", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    v6 = 16;
  else
    v6 = 0;
  v7 = CDOTABaseAbility::GetCaster(this);
  return UnitFilter(pTarget, 2, 19, v6, v7->m_iTeamNum.m_Value);
}


// CDOTA_Ability_VengefulSpirit_Magic_Missile::OnSpellStart  (line 113, @0x0000000002a53c80, libserver.so)  // inlines: CEntityHandle, CHandle, Color, GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=, sTrackingProjectileCreateInfo
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorTarget, CDOTA_ProjectileManager::CreateTrackingProjectile, CDOTA_BaseNPC::UnitEmitSound, __stack_chk_fail
// strings: "magic_missile_speed", "particles/units/heroes/hero_vengeful/vengeful_magic_missle.vpcf", "Hero_VengefulSpirit.MagicMissile"
void __fastcall CDOTA_Ability_VengefulSpirit_Magic_Missile::OnSpellStart(
        CDOTA_Ability_VengefulSpirit_Magic_Missile *const this)
{
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v6; // cx
  CBaseEntity *CursorTarget; // rax
  CEntityIdentity *v8; // rdx
  __int16 v9; // cx
  CDOTA_BaseNPC *v10; // rax
  sTrackingProjectileCreateInfo info; // [rsp+0h] [rbp-80h] BYREF
  unsigned __int64 v12; // [rsp+68h] [rbp-18h]

  info.pAbility = this;
  v12 = __readfsqword(0x28u);
  info.hSource.m_Index = -1;
  info.hTarget.m_Index = -1;
  info.colorGemColor = 0;
  info.pAttackRecord = 0;
  info.iMoveSpeed = 0;
  info.iSourceAttachment = 1;
  info.vSourceLoc.x = vec3_origin.x;
  y = vec3_origin.y;
  info.bProvidesVision = 0;
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
  info.pszEffectName = "particles/units/heroes/hero_vengeful/vengeful_magic_missle.vpcf";
  info.iMoveSpeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "magic_missile_speed", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( Caster != 0 && (m_pEntity = Caster->m_pEntity) != 0 )
  {
    v6 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF;
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    if ( CursorTarget == 0 )
      goto LABEL_13;
  }
  else
  {
    info.hSource.m_Index = -1;
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    if ( CursorTarget == 0 )
      goto LABEL_13;
  }
  v8 = CursorTarget->m_pEntity;
  if ( v8 == 0 )
  {
LABEL_13:
    info.hTarget.m_Index = -1;
    goto LABEL_10;
  }
  if ( v8->m_EHandle.m_Index == -1 )
    v9 = 0x7FFF;
  else
    v9 = v8->m_EHandle.m_Index & 0x7FFF;
  info.hTarget.m_Index = (((v8->m_EHandle.m_Index >> 15) - (v8->m_flags & 1)) << 15) | v9 & 0x7FFF;
LABEL_10:
  info.iSourceAttachment = 2;
  CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
  v10 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v10, "Hero_VengefulSpirit.MagicMissile", 0.0, 0, 0);
}


// CDOTA_Ability_VengefulSpirit_Magic_Missile::OnProjectileHit  (line 132, @0x0000000002a58060, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, InState, IndexToIdentity, IsInvulnerable, IsRealHero, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, __stack_chk_fail, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, ApplyDamage, CDOTA_BaseNPC::UnitEmitSound, EconEntity_OnOwnerKillEaterEvent (14 total)
// strings: "special_bonus_unique_vengeful_spirit_3", "magic_missile_stun", "magic_missile_damage", "special_bonus_unique_vengeful_spirit_1", "modifier_stun", "modifier_stunned" (7 total)
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
__int64 __fastcall CDOTA_Ability_VengefulSpirit_Magic_Missile::OnProjectileHit(
        CDOTA_Ability_VengefulSpirit_Magic_Missile *const this,
        _WORD *hTarget,
        const Vector *const vLocation)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  bool v7; // di
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityInstance *m_pInstance; // r12
  int (**vptr_IHandleEntity)(...); // rax
  CDOTA_BaseNPC *v13; // rax
  CDOTABaseAbility *v14; // rax
  float v15; // xmm1_4
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC_Hero *v19; // rdi
  float flDamage; // [rsp+Ch] [rbp-44h]
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-28h]

  v22 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_vengeful_spirit_3", 0);
  v7 = AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0;
  if ( (*hTarget + 2) > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[*hTarget & 0x1FF];
      if ( v9 != 0 && *hTarget == v9->m_EHandle.m_Index )
      {
        m_pInstance = v9->m_pInstance;
        if ( v9->m_pInstance != 0
          && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0 )
        {
          vptr_IHandleEntity = m_pInstance[58]._vptr_IHandleEntity;
          if ( (BYTE1(vptr_IHandleEntity) & 1) == 0
            && (v7 || (BYTE1(vptr_IHandleEntity) & 2) == 0)
            && !CDOTA_BaseNPC::TriggerSpellAbsorb(m_pInstance, this, 1) )
          {
            CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "magic_missile_stun", -1, 0);
            flDamage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "magic_missile_damage", -1, 0);
            v13 = CDOTABaseAbility::GetCaster(this);
            v14 = CDOTA_BaseNPC::FindAbilityByName(v13, "special_bonus_unique_vengeful_spirit_1", 0);
            if ( v14 != 0 && v14->m_iLevel.m_Value > 0 )
              flDamage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v14, "value", 1, 1) + flDamage;
            KeyValues::KeyValues(&kv, "modifier_stun");
            KeyValues::SetFloat(&kv, "duration", v15);
            v16 = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(m_pInstance, v16, this, "modifier_stunned", &kv, 0);
            v17 = CDOTABaseAbility::GetCaster(this);
            ApplyDamage(v17, m_pInstance, this, flDamage, 2, 0);
            CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_VengefulSpirit.MagicMissileImpact", 0.0, 0, 0);
            if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
            {
              v18 = CDOTABaseAbility::GetCaster(this);
              if ( v18 != 0 && (v18->m_iUnitType & 1) != 0 )
                v19 = v18;
              else
                v19 = 0;
              EconEntity_OnOwnerKillEaterEvent(
                v19,
                0,
                kill_eater_event_t::kKillEaterEvent_VengefulSpirit_EnemiesStunned,
                1,
                INVALID_ITEM_DEF_INDEX);
            }
            KeyValues::~KeyValues(&kv);
          }
        }
      }
    }
  }
  return 1;
}


// CDOTA_Ability_VengefulSpirit_Magic_Missile::GetAbilityDamageToTargetOverInterval  (line 180, @0x0000000002a52bf0, libserver.so)  // inlines: GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "magic_missile_damage"
__int64 __fastcall CDOTA_Ability_VengefulSpirit_Magic_Missile::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_VengefulSpirit_Magic_Missile *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "magic_missile_damage", -1, 0);
    return (LevelSpecialValue * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Ability_VengefulSpirit_Magic_Missile::GetStunDuration  (line 194, @0x0000000002a59900, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "magic_missile_stun"
float __fastcall CDOTA_Ability_VengefulSpirit_Magic_Missile::GetStunDuration(
        CDOTA_Ability_VengefulSpirit_Magic_Missile *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "magic_missile_stun", -1, 1);
}


// CDOTA_Ability_VengefulSpirit_WaveOfTerror::~CDOTA_Ability_VengefulSpirit_WaveOfTerror  (line 205, @0x0000000002a678c0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_VengefulSpirit_WaveOfTerror::~CDOTA_Ability_VengefulSpirit_WaveOfTerror(
        CDOTA_Ability_VengefulSpirit_WaveOfTerror *const this)
{
  this->_vptr_IHandleEntity = &off_43B4FF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_VengefulSpirit_WaveOfTerror::~CDOTA_Ability_VengefulSpirit_WaveOfTerror  (line 205, @0x0000000002a678e0, libserver.so)  // inlines: ~CDOTA_Ability_VengefulSpirit_WaveOfTerror
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_VengefulSpirit_WaveOfTerror::~CDOTA_Ability_VengefulSpirit_WaveOfTerror(
        CDOTA_Ability_VengefulSpirit_WaveOfTerror *const this)
{
  this->_vptr_IHandleEntity = &off_43B4FF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_VengefulSpirit_WaveOfTerror::Schema_DynamicBinding  (line 207, @0x0000000002a61dd0, libserver.so)
// globals: CDOTA_Ability_VengefulSpirit_WaveOfTerror::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_VengefulSpirit_WaveOfTerror::Schema_DynamicBinding(
        const CDOTA_Ability_VengefulSpirit_WaveOfTerror *const this)
{
  return CDOTA_Ability_VengefulSpirit_WaveOfTerror::s_pSchemaBinding;
}


// CDOTA_Ability_VengefulSpirit_WaveOfTerror::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 207, @0x0000000002a61de0, libserver.so)
// globals: CDOTA_Ability_VengefulSpirit_WaveOfTerror::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_VengefulSpirit_WaveOfTerror::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_VengefulSpirit_WaveOfTerror::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_VengefulSpirit_WaveOfTerror::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_VengefulSpirit_WaveOfTerror::CEntityInstanceEntityClass::DestructInstance  (line 207, @0x0000000002a61df0, libserver.so)  // inlines: Destruct<CDOTA_Ability_VengefulSpirit_WaveOfTerror>
void __fastcall CDOTA_Ability_VengefulSpirit_WaveOfTerror::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_VengefulSpirit_WaveOfTerror::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_VengefulSpirit_WaveOfTerror::CEntityInstanceEntityClass::FreeInstance  (line 207, @0x0000000002a61e10, libserver.so)
void __fastcall CDOTA_Ability_VengefulSpirit_WaveOfTerror::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_VengefulSpirit_WaveOfTerror::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_VengefulSpirit_WaveOfTerror::CEntityInstanceEntityClass::CanAllocate  (line 207, @0x0000000002a61e30, libserver.so)
bool __fastcall CDOTA_Ability_VengefulSpirit_WaveOfTerror::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_VengefulSpirit_WaveOfTerror::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_VengefulSpirit_WaveOfTerror::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 207, @0x0000000002a61e40, libserver.so)
// globals: CDOTA_Ability_VengefulSpirit_WaveOfTerror::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_VengefulSpirit_WaveOfTerror::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_VengefulSpirit_WaveOfTerror::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_VengefulSpirit_WaveOfTerror::s_pSchemaBinding;
}


// CDOTA_Ability_VengefulSpirit_WaveOfTerror::CEntityInstanceEntityClass::AllocateInstance  (line 207, @0x0000000002a643f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_VengefulSpirit_WaveOfTerror::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_VengefulSpirit_WaveOfTerror::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 968);
  memset(v1, 0, 0x3C8u);
  return v1;
}


// CDOTA_Ability_VengefulSpirit_WaveOfTerror::CEntityInstanceEntityClass::ConstructInstance  (line 207, @0x0000000002a6a300, libserver.so)  // inlines: CDOTA_Ability_VengefulSpirit_WaveOfTerror, Construct<CDOTA_Ability_VengefulSpirit_WaveOfTerror>, InValidate, SndOpEventGuid_t, SoundEventGuid_t
// calls: CDOTABaseAbility::CDOTABaseAbility, CountdownTimer::CountdownTimer, CDOTABaseAbility::~CDOTABaseAbility, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_Ability_VengefulSpirit_WaveOfTerror::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_VengefulSpirit_WaveOfTerror::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43B4FF0;
    CountdownTimer::CountdownTimer(p + 39);
    *(p + 240) = 0;
    *(p + 241) = -1;
  }
  return p;
}


// CDOTA_Ability_VengefulSpirit_WaveOfTerror::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 207, @0x0000000002a6b060, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_VengefulSpirit_WaveOfTerror::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_VengefulSpirit_WaveOfTerror::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_VengefulSpirit_WaveOfTerror::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 207, @0x0000000002a6b080, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_VengefulSpirit_WaveOfTerror::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_VengefulSpirit_WaveOfTerror::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_VengefulSpirit_WaveOfTerror::GetEntityClassInternal  (line 207, @0x0000000002a74960, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "vengefulspirit_wave_of_terror", "CDOTA_Ability_VengefulSpirit_WaveOfTerror"
// globals: `guard variable for'CDOTA_Ability_VengefulSpirit_WaveOfTerror::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_WaveOfTerrorClass, CDOTA_Ability_VengefulSpirit_WaveOfTerror::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_WaveOfTerrorClass, __dso_handle, CDOTA_Ability_VengefulSpirit_WaveOfTerror::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_VengefulSpirit_WaveOfTerror::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_VengefulSpirit_WaveOfTerrorClassInfo, CDOTA_Ability_VengefulSpirit_WaveOfTerror::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_VengefulSpirit_WaveOfTerrorClassInfo
CEntityClass *__cdecl CDOTA_Ability_VengefulSpirit_WaveOfTerror::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_VengefulSpirit_WaveOfTerror::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_WaveOfTerrorClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_VengefulSpirit_WaveOfTerror::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_WaveOfTerrorClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_VengefulSpirit_WaveOfTerror::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_WaveOfTerrorClass);
    CDOTA_Ability_VengefulSpirit_WaveOfTerror::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_WaveOfTerrorClass._vptr_CEntityClass = off_43B4F70;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_VengefulSpirit_WaveOfTerror::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_WaveOfTerrorClass);
    __cxa_atexit(
      CDOTA_Ability_VengefulSpirit_WaveOfTerror::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_VengefulSpirit_WaveOfTerror::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_WaveOfTerrorClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_VengefulSpirit_WaveOfTerrorClass != 0 )
    return &CDOTA_Ability_VengefulSpirit_WaveOfTerror::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_WaveOfTerrorClass;
  if ( `guard variable for'CDOTA_Ability_VengefulSpirit_WaveOfTerror::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_VengefulSpirit_WaveOfTerrorClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_VengefulSpirit_WaveOfTerror::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_VengefulSpirit_WaveOfTerrorClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_VengefulSpirit_WaveOfTerror::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_VengefulSpirit_WaveOfTerrorClassInfo,
      "CDOTA_Ability_VengefulSpirit_WaveOfTerror",
      "vengefulspirit_wave_of_terror",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_VengefulSpirit_WaveOfTerror::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_VengefulSpirit_WaveOfTerrorClassInfo);
  }
  CDOTA_Ability_VengefulSpirit_WaveOfTerror::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_WaveOfTerrorClass.m_pClassInfo = &CDOTA_Ability_VengefulSpirit_WaveOfTerror::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_VengefulSpirit_WaveOfTerrorClassInfo;
  CDOTA_Ability_VengefulSpirit_WaveOfTerror::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_WaveOfTerrorClass.m_pBaseClassInfo = CDOTA_Ability_VengefulSpirit_WaveOfTerror::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_VengefulSpirit_WaveOfTerrorClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_VengefulSpirit_WaveOfTerrorClass = &CDOTA_Ability_VengefulSpirit_WaveOfTerror::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_WaveOfTerrorClass;
  CDOTA_Ability_VengefulSpirit_WaveOfTerror::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_VengefulSpirit_WaveOfTerrorClassInfo.m_pClass = &CDOTA_Ability_VengefulSpirit_WaveOfTerror::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_WaveOfTerrorClass;
  CDOTA_Ability_VengefulSpirit_WaveOfTerror::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_WaveOfTerrorClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_VengefulSpirit_WaveOfTerrorClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_VengefulSpirit_WaveOfTerror::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_WaveOfTerrorClass;
}


// CDOTA_Ability_VengefulSpirit_WaveOfTerror::GetConceptRecipientType  (line 217, @0x0000000002a61e50, libserver.so)
int __fastcall CDOTA_Ability_VengefulSpirit_WaveOfTerror::GetConceptRecipientType(
        CDOTA_Ability_VengefulSpirit_WaveOfTerror *const this)
{
  return 4;
}


// CDOTA_Ability_VengefulSpirit_WaveOfTerror::YouForgotToImplementOrDeclareServerClass  (line 236, @0x0000000002a3fa20, libserver.so)
int __fastcall CDOTA_Ability_VengefulSpirit_WaveOfTerror::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_VengefulSpirit_WaveOfTerror *const this)
{
  return 0;
}


// CDOTA_Ability_VengefulSpirit_WaveOfTerror::GetServerClass  (line 236, @0x0000000002a48b30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_VengefulSpirit_WaveOfTerror::GetServerClass(
        CDOTA_Ability_VengefulSpirit_WaveOfTerror *const this)
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


// CDOTA_Ability_VengefulSpirit_WaveOfTerror::OnUpgrade  (line 245, @0x0000000002a582f0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::OnUpgrade
// strings: "wave_width", "wave_speed", "vision_aoe"
void __fastcall CDOTA_Ability_VengefulSpirit_WaveOfTerror::OnUpgrade(
        CDOTA_Ability_VengefulSpirit_WaveOfTerror *const this)
{
  this->wave_width = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "wave_width", -1, 0);
  this->wave_speed = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "wave_speed", -1, 0);
  this->vision_aoe = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "vision_aoe", -1, 0);
  this->vision_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "vision_duration", -1, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_VengefulSpirit_WaveOfTerror::OnSpellStart  (line 256, @0x0000000002a45230, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, GetTeamNumber, NetworkStateChanged, Set, Start, VectorMultiply, VectorNormalize2D, VectorSubtract, operator*, operator-, operator=, operator=<float>, sLinearProjectileCreateInfo
// calls: CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorPosition, VectorNormalize, DOTA_EmitSoundLocation, CDOTA_ProjectileManager::CreateLinearProjectile, CountdownTimer::Now, CBaseEntity::GetAbsAngles, AngleVectors
// strings: "Hero_VengefulSpirit.WaveOfTerror", "particles/units/heroes/hero_vengeful/vengeful_wave_of_terror.vpcf"
void __fastcall CDOTA_Ability_VengefulSpirit_WaveOfTerror::OnSpellStart(
        CDOTA_Ability_VengefulSpirit_WaveOfTerror *const this)
{
  __m128i v2; // xmm3
  float v3; // r14d
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r13
  vec_t v6; // xmm0_4
  vec_t v7; // xmm1_4
  float v8; // xmm0_4
  CDOTA_BaseNPC *v9; // rax
  const Vector *v10; // rax
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v14; // rax
  const Vector *v15; // rax
  vec_t v16; // xmm0_4
  float wave_speed; // xmm0_4
  CDOTA_BaseNPC *v18; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v20; // eax
  __int16 v21; // cx
  CDOTA_BaseNPC *v22; // rax
  float vision_aoe; // xmm0_4
  int v24; // eax
  float wave_width; // xmm1_4
  float v26; // xmm0_4
  float v27; // xmm1_4
  float v28; // xmm0_4
  CDOTA_BaseNPC *v29; // rax
  const QAngle *AbsAngles; // rax
  float v31; // [rsp+8h] [rbp-B8h]
  float v32; // [rsp+Ch] [rbp-B4h]
  float v33; // [rsp+Ch] [rbp-B4h]
  Vector vDirection; // [rsp+10h] [rbp-B0h] BYREF
  sLinearProjectileCreateInfo info; // [rsp+20h] [rbp-A0h] BYREF
  SndOpEventGuid_t v36; // 0:rax.8

  *v2.m128i_i32 = (*(this->_vptr_IHandleEntity + 229))(this, &vec3_origin, 0);
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  *&info.pszEffectName = CDOTABaseAbility::GetCursorPosition(this);
  v6 = *(&info.pszEffectName + 1) - AbsOrigin->y;
  v7 = *&info.pszEffectName - AbsOrigin->x;
  vDirection.z = 0.0;
  vDirection.y = v6;
  vDirection.x = v7;
  v8 = VectorNormalize(&vDirection);
  this->m_iNumHeroesHit = 0;
  if ( v8 < 0.0099999998 )
  {
    v29 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v29);
    AngleVectors(AbsAngles, &vDirection, 0, 0);
  }
  v9 = CDOTABaseAbility::GetCaster(this);
  v10 = CBaseEntity::GetAbsOrigin(v9);
  v36 = DOTA_EmitSoundLocation(v10, "Hero_VengefulSpirit.WaveOfTerror", 0);
  x = vec3_origin.x;
  y = vec3_origin.y;
  this->m_SoundEventGuid = v36;
  z = vec3_origin.z;
  info.vSpawnOrigin.x = x;
  info.vSpawnOrigin.y = y;
  info.vSpawnOrigin.z = z;
  info.vVelocity.x = x;
  info.vVelocity.y = y;
  info.vVelocity.z = z;
  info.vAcceleration.x = x;
  info.vAcceleration.y = y;
  info.vAcceleration.z = z;
  info.pszEffectName = "particles/units/heroes/hero_vengeful/vengeful_wave_of_terror.vpcf";
  info.hSource.m_Index = -1;
  info.fDistance = 0.0;
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
  info.fDistance = v3;
  info.vSpawnOrigin.z = v16;
  wave_speed = this->wave_speed;
  info.vVelocity.y = vDirection.y * wave_speed;
  info.vVelocity.z = vDirection.z * wave_speed;
  info.vVelocity.x = wave_speed * vDirection.x;
  info.fStartRadius = this->wave_width;
  info.fEndRadius = info.fStartRadius;
  v18 = CDOTABaseAbility::GetCaster(this);
  if ( v18 != 0 && (m_pEntity = v18->m_pEntity) != 0 )
  {
    v20 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v21 = 0x7FFF;
    else
      v21 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(info.hSource.m_Index) = v21 | info.hSource.m_Index & 0x8000;
    info.hSource.m_Index = (v20 << 15) | info.hSource.m_Index & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  info.iUnitTargetTeam = 2;
  info.iUnitTargetType = 3;
  info.iUnitTargetFlags = 16;
  info.bProvidesVision = 1;
  v22 = CDOTABaseAbility::GetCaster(this);
  vision_aoe = this->vision_aoe;
  info.iVisionTeamNumber = v22->m_iTeamNum.m_Value;
  info.iVisionRadius = vision_aoe;
  v24 = CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  wave_width = this->wave_width;
  this->m_iProjectile = v24;
  v32 = wave_width / this->wave_speed;
  v26 = CountdownTimer::Now(&this->m_ViewerTimer);
  v27 = v32;
  v28 = v26 + v32;
  if ( v28 != this->m_ViewerTimer.m_timestamp.m_Value )
  {
    v31 = v28;
    (*(this->m_ViewerTimer._vptr_CountdownTimer + 2))(&this->m_ViewerTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v27 = v32;
    this->m_ViewerTimer.m_timestamp.m_Value = v31;
  }
  if ( v27 != this->m_ViewerTimer.m_duration.m_Value )
  {
    v33 = v27;
    (*(this->m_ViewerTimer._vptr_CountdownTimer + 2))(&this->m_ViewerTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_ViewerTimer.m_duration.m_Value = v33;
  }
}


// CDOTA_Ability_VengefulSpirit_WaveOfTerror::OnProjectileHit  (line 299, @0x0000000002a468d0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsRealHero, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator==<CBaseEntity>
// calls: CDOTABaseAbility::GetCaster, EconEntity_OnOwnerKillEaterEvent, __stack_chk_fail, KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, ApplyDamage, KeyValues::~KeyValues, _Unwind_Resume
// strings: "modifier_vengefulspirit_wave_of_terror"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
__int64 __fastcall CDOTA_Ability_VengefulSpirit_WaveOfTerror::OnProjectileHit(
        CDOTA_Ability_VengefulSpirit_WaveOfTerror *const this,
        unsigned __int16 *hTarget,
        const Vector *const vLocation)
{
  int v5; // eax
  unsigned int v6; // esi
  unsigned __int64 v7; // rdx
  CEntityIdentity *v8; // rcx
  CEntityIdentity *v9; // rsi
  CEntityIdentity *v10; // rcx
  int m_iNumHeroesHit; // r12d
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC_Hero *v14; // rdi
  CEntityInstance *m_pInstance; // r13
  float v16; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v18; // rax
  float flDamage; // [rsp+Ch] [rbp-44h]
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-28h]

  v21 = __readfsqword(0x28u);
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
      KeyValues::KeyValues(&kv, "modifier_vengefulspirit_wave_of_terror");
      CDOTABaseAbility::GetDuration(this);
      KeyValues::SetFloat(&kv, "duration", v16);
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, Caster, this, "modifier_vengefulspirit_wave_of_terror", &kv, 0);
      flDamage = (*(this->_vptr_IHandleEntity + 247))(this);
      v18 = CDOTABaseAbility::GetCaster(this);
      ApplyDamage(v18, m_pInstance, this, flDamage, 2, 0);
      if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
        ++this->m_iNumHeroesHit;
      KeyValues::~KeyValues(&kv);
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
    m_iNumHeroesHit = this->m_iNumHeroesHit;
    if ( m_iNumHeroesHit > 2 )
    {
      v13 = CDOTABaseAbility::GetCaster(this);
      if ( v13 != 0 && (v13->m_iUnitType & 1) != 0 )
        v14 = v13;
      else
        v14 = 0;
      EconEntity_OnOwnerKillEaterEvent(
        v14,
        0,
        kill_eater_event_t::kKillEaterEvent_VengefulSpirit_MultiTerrors,
        m_iNumHeroesHit,
        INVALID_ITEM_DEF_INDEX);
      this->m_iNumHeroesHit = 0;
    }
  }
  return 0;
}


// CDOTA_Ability_VengefulSpirit_WaveOfTerror::OnProjectileThink  (line 333, @0x0000000002a48000, libserver.so)  // inlines: AllocateData, CBroadcastRecipientFilter, CSosFieldData, CSosFieldDataFloat3, ClearData, GetCountdownDuration, GetDataPtr, GetTeamNumber, Init, IsElapsed, NetworkStateChanged, Reset, Set, SetValue, VectorAdd, VectorMultiply, operator*, operator+, operator=<float>, ~CBroadcastRecipientFilter, ~CSosFieldData, ~CSosFieldDataFloat3
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CountdownTimer::Now, CDOTA_ProjectileManager::GetLinearProjectileVelocity, CDOTABaseAbility::GetCaster, CDOTAFogOfWarSystem::AddTempViewer, CRecipientFilter::~CRecipientFilter, operator new [], __stack_chk_fail, _Unwind_Resume (13 total)
void __fastcall CDOTA_Ability_VengefulSpirit_WaveOfTerror::OnProjectileThink(
        CDOTA_Ability_VengefulSpirit_WaveOfTerror *const this,
        const Vector *const vLocation)
{
  vec_t x; // r15d
  vec_t y; // r14d
  float m_Value; // xmm2_4
  uint v7; // xmm1_4
  uint v8; // xmm0_4
  float v9; // xmm2_4
  CDOTA_BaseNPC *Caster; // rax
  __m128i v11; // xmm0
  __m128i v12; // xmm5
  float v13; // r12d
  SosFieldValueMem_t *v14; // rax
  float flRadius; // [rsp+8h] [rbp-1A8h]
  vec_t flDurationa; // [rsp+Ch] [rbp-1A4h]
  float flDuration; // [rsp+Ch] [rbp-1A4h]
  Vector vVelocity; // [rsp+10h] [rbp-1A0h] BYREF
  CSosFieldData fieldData; // [rsp+20h] [rbp-190h] BYREF
  CBroadcastRecipientFilter filter; // [rsp+40h] [rbp-170h] BYREF
  unsigned __int64 v21; // [rsp+178h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  x = vLocation->x;
  fieldData.m_nAllocSize = 0;
  y = vLocation->y;
  fieldData.m_pData = 0;
  flDurationa = vLocation->z;
  fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 10);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT_3;
  v14 = operator new[](0xCu);
  fieldData.m_pData = v14;
  fieldData.m_nAllocSize = 12;
  *v14 = x;
  *(v14 + 1) = y;
  *(v14 + 2) = flDurationa;
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
  if ( CountdownTimer::Now(&this->m_ViewerTimer) >= this->m_ViewerTimer.m_timestamp.m_Value )
  {
    CDOTA_ProjectileManager::GetLinearProjectileVelocity(&g_DOTAProjectileManager, this->m_iProjectile, &vVelocity);
    m_Value = 0.0;
    flDuration = this->vision_duration;
    flRadius = this->vision_aoe;
    if ( this->m_ViewerTimer.m_timestamp.m_Value > 0.0 )
      m_Value = this->m_ViewerTimer.m_duration.m_Value;
    *&v7 = (vVelocity.y * m_Value) + vLocation->y;
    *&v8 = (vVelocity.z * m_Value) + vLocation->z;
    v9 = (m_Value * vVelocity.x) + vLocation->x;
    fieldData.m_nFieldDataSize = v7;
    fieldData.m_nAllocSize = v8;
    *&fieldData.m_fieldDataType = v9;
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTAFogOfWarSystem::AddTempViewer(
      &g_DOTAFogOfWarSystem,
      FoWViewerType_t::FOWVIEWERTYPE_WAVEOFTERROR,
      Caster->m_iTeamNum.m_Value,
      &fieldData,
      flRadius,
      flDuration,
      1);
    *v11.m128i_i32 = CountdownTimer::Now(&this->m_ViewerTimer);
    v12 = v11;
    *v12.m128i_i32 = *v11.m128i_i32 + this->m_ViewerTimer.m_duration.m_Value;
    v13 = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
    if ( *v12.m128i_i32 != this->m_ViewerTimer.m_timestamp.m_Value )
    {
      (*(this->m_ViewerTimer._vptr_CountdownTimer + 2))(&this->m_ViewerTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_ViewerTimer.m_timestamp.m_Value = v13;
    }
  }
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CDOTA_Ability_VengefulSpirit_WaveOfTerror::GetAbilityDamageToTargetOverInterval  (line 352, @0x0000000002a41f70, libserver.so)
int __fastcall CDOTA_Ability_VengefulSpirit_WaveOfTerror::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_VengefulSpirit_WaveOfTerror *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PURE )
    return (*(this->_vptr_IHandleEntity + 247))(this, pTarget, fInterval);
  else
    return 0;
}


// CDOTA_Modifier_VengefulSpirit_WaveOfTerror::~CDOTA_Modifier_VengefulSpirit_WaveOfTerror  (line 364, @0x0000000002a64f30, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_VengefulSpirit_WaveOfTerror::~CDOTA_Modifier_VengefulSpirit_WaveOfTerror(
        CDOTA_Modifier_VengefulSpirit_WaveOfTerror *const this)
{
  this->_vptr_CDOTA_Buff = &off_43B5AB0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_VengefulSpirit_WaveOfTerror::~CDOTA_Modifier_VengefulSpirit_WaveOfTerror  (line 364, @0x0000000002a64f50, libserver.so)  // inlines: ~CDOTA_Modifier_VengefulSpirit_WaveOfTerror
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_VengefulSpirit_WaveOfTerror::~CDOTA_Modifier_VengefulSpirit_WaveOfTerror(
        CDOTA_Modifier_VengefulSpirit_WaveOfTerror *const this)
{
  this->_vptr_CDOTA_Buff = &off_43B5AB0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_VengefulSpirit_WaveOfTerror::IsDebuff  (line 369, @0x0000000002a61e60, libserver.so)
bool __fastcall CDOTA_Modifier_VengefulSpirit_WaveOfTerror::IsDebuff(
        CDOTA_Modifier_VengefulSpirit_WaveOfTerror *const this)
{
  return 1;
}


// CDOTA_Modifier_VengefulSpirit_WaveOfTerror::GetEffectName  (line 373, @0x0000000002a61e70, libserver.so)
// strings: "particles/units/heroes/hero_vengeful/vengeful_wave_of_terror_recipient.vpcf"
const char *__fastcall CDOTA_Modifier_VengefulSpirit_WaveOfTerror::GetEffectName(
        CDOTA_Modifier_VengefulSpirit_WaveOfTerror *const this)
{
  return "particles/units/heroes/hero_vengeful/vengeful_wave_of_terror_recipient.vpcf";
}


// CDOTA_Modifier_VengefulSpirit_WaveOfTerror::OnCreated  (line 389, @0x0000000002a55230, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_VengefulSpirit_WaveOfTerror::OnCreated(
        CDOTA_Modifier_VengefulSpirit_WaveOfTerror *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->armor_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "armor_reduction", -1, 0);
  else
    this->armor_reduction = 0;
}


// CDOTA_Modifier_VengefulSpirit_WaveOfTerror::OnRefresh  (line 396, @0x0000000002a55710, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_VengefulSpirit_WaveOfTerror::OnRefresh(
        CDOTA_Modifier_VengefulSpirit_WaveOfTerror *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->armor_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "armor_reduction", -1, 0);
  else
    this->armor_reduction = 0;
}


// CDOTA_Modifier_VengefulSpirit_WaveOfTerror::DeclareFunctions  (line 403, @0x0000000002a3fa30, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_VengefulSpirit_WaveOfTerror::GetModifierPhysicalArmorBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_VengefulSpirit_WaveOfTerror::DeclareFunctions(
        CDOTA_Modifier_VengefulSpirit_WaveOfTerror *const this)
{
  this->m_Functions[45].__pfn = CDOTA_Modifier_VengefulSpirit_WaveOfTerror::GetModifierPhysicalArmorBonus;
  this->m_Functions[45].__delta = 0;
}


// CDOTA_Modifier_VengefulSpirit_WaveOfTerror::GetModifierPhysicalArmorBonus  (line 410, @0x0000000002a3fa50, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_VengefulSpirit_WaveOfTerror::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_VengefulSpirit_WaveOfTerror *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->armor_reduction;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_VengefulSpirit_Command_Aura::~CDOTA_Ability_VengefulSpirit_Command_Aura  (line 422, @0x0000000002a67910, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_VengefulSpirit_Command_Aura::~CDOTA_Ability_VengefulSpirit_Command_Aura(
        CDOTA_Ability_VengefulSpirit_Command_Aura *const this)
{
  this->_vptr_IHandleEntity = &off_43B5E10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_VengefulSpirit_Command_Aura::~CDOTA_Ability_VengefulSpirit_Command_Aura  (line 422, @0x0000000002a67930, libserver.so)  // inlines: ~CDOTA_Ability_VengefulSpirit_Command_Aura
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_VengefulSpirit_Command_Aura::~CDOTA_Ability_VengefulSpirit_Command_Aura(
        CDOTA_Ability_VengefulSpirit_Command_Aura *const this)
{
  this->_vptr_IHandleEntity = &off_43B5E10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_VengefulSpirit_Command_Aura::Schema_DynamicBinding  (line 424, @0x0000000002a61e80, libserver.so)
// globals: CDOTA_Ability_VengefulSpirit_Command_Aura::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_VengefulSpirit_Command_Aura::Schema_DynamicBinding(
        const CDOTA_Ability_VengefulSpirit_Command_Aura *const this)
{
  return CDOTA_Ability_VengefulSpirit_Command_Aura::s_pSchemaBinding;
}


// CDOTA_Ability_VengefulSpirit_Command_Aura::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 424, @0x0000000002a61e90, libserver.so)
// globals: CDOTA_Ability_VengefulSpirit_Command_Aura::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_VengefulSpirit_Command_Aura::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_VengefulSpirit_Command_Aura::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_VengefulSpirit_Command_Aura::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_VengefulSpirit_Command_Aura::CEntityInstanceEntityClass::DestructInstance  (line 424, @0x0000000002a61ea0, libserver.so)  // inlines: Destruct<CDOTA_Ability_VengefulSpirit_Command_Aura>
void __fastcall CDOTA_Ability_VengefulSpirit_Command_Aura::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_VengefulSpirit_Command_Aura::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_VengefulSpirit_Command_Aura::CEntityInstanceEntityClass::FreeInstance  (line 424, @0x0000000002a61ec0, libserver.so)
void __fastcall CDOTA_Ability_VengefulSpirit_Command_Aura::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_VengefulSpirit_Command_Aura::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_VengefulSpirit_Command_Aura::CEntityInstanceEntityClass::CanAllocate  (line 424, @0x0000000002a61ee0, libserver.so)
bool __fastcall CDOTA_Ability_VengefulSpirit_Command_Aura::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_VengefulSpirit_Command_Aura::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_VengefulSpirit_Command_Aura::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 424, @0x0000000002a61ef0, libserver.so)
// globals: CDOTA_Ability_VengefulSpirit_Command_Aura::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_VengefulSpirit_Command_Aura::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_VengefulSpirit_Command_Aura::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_VengefulSpirit_Command_Aura::s_pSchemaBinding;
}


// CDOTA_Ability_VengefulSpirit_Command_Aura::CEntityInstanceEntityClass::AllocateInstance  (line 424, @0x0000000002a64430, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_VengefulSpirit_Command_Aura::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_VengefulSpirit_Command_Aura::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_VengefulSpirit_Command_Aura::CEntityInstanceEntityClass::ConstructInstance  (line 424, @0x0000000002a66370, libserver.so)  // inlines: CDOTA_Ability_VengefulSpirit_Command_Aura, Construct<CDOTA_Ability_VengefulSpirit_Command_Aura>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_VengefulSpirit_Command_Aura::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_VengefulSpirit_Command_Aura::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43B5E10;
  }
  return p;
}


// CDOTA_Ability_VengefulSpirit_Command_Aura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 424, @0x0000000002a6b0b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_VengefulSpirit_Command_Aura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_VengefulSpirit_Command_Aura::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_VengefulSpirit_Command_Aura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 424, @0x0000000002a6b0d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_VengefulSpirit_Command_Aura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_VengefulSpirit_Command_Aura::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_VengefulSpirit_Command_Aura::GetEntityClassInternal  (line 424, @0x0000000002a74ab0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "vengefulspirit_command_aura", "CDOTA_Ability_VengefulSpirit_Command_Aura"
// globals: `guard variable for'CDOTA_Ability_VengefulSpirit_Command_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Command_AuraClass, CDOTA_Ability_VengefulSpirit_Command_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Command_AuraClass, __dso_handle, CDOTA_Ability_VengefulSpirit_Command_Aura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_VengefulSpirit_Command_Aura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_VengefulSpirit_Command_AuraClassInfo, CDOTA_Ability_VengefulSpirit_Command_Aura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_VengefulSpirit_Command_AuraClassInfo
CEntityClass *__cdecl CDOTA_Ability_VengefulSpirit_Command_Aura::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_VengefulSpirit_Command_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Command_AuraClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_VengefulSpirit_Command_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Command_AuraClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_VengefulSpirit_Command_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Command_AuraClass);
    CDOTA_Ability_VengefulSpirit_Command_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Command_AuraClass._vptr_CEntityClass = off_43B5D90;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_VengefulSpirit_Command_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Command_AuraClass);
    __cxa_atexit(
      CDOTA_Ability_VengefulSpirit_Command_Aura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_VengefulSpirit_Command_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Command_AuraClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_VengefulSpirit_Command_AuraClass != 0 )
    return &CDOTA_Ability_VengefulSpirit_Command_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Command_AuraClass;
  if ( `guard variable for'CDOTA_Ability_VengefulSpirit_Command_Aura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_VengefulSpirit_Command_AuraClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_VengefulSpirit_Command_Aura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_VengefulSpirit_Command_AuraClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_VengefulSpirit_Command_Aura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_VengefulSpirit_Command_AuraClassInfo,
      "CDOTA_Ability_VengefulSpirit_Command_Aura",
      "vengefulspirit_command_aura",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_VengefulSpirit_Command_Aura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_VengefulSpirit_Command_AuraClassInfo);
  }
  CDOTA_Ability_VengefulSpirit_Command_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Command_AuraClass.m_pClassInfo = &CDOTA_Ability_VengefulSpirit_Command_Aura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_VengefulSpirit_Command_AuraClassInfo;
  CDOTA_Ability_VengefulSpirit_Command_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Command_AuraClass.m_pBaseClassInfo = CDOTA_Ability_VengefulSpirit_Command_Aura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_VengefulSpirit_Command_AuraClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_VengefulSpirit_Command_AuraClass = &CDOTA_Ability_VengefulSpirit_Command_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Command_AuraClass;
  CDOTA_Ability_VengefulSpirit_Command_Aura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_VengefulSpirit_Command_AuraClassInfo.m_pClass = &CDOTA_Ability_VengefulSpirit_Command_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Command_AuraClass;
  CDOTA_Ability_VengefulSpirit_Command_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Command_AuraClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_VengefulSpirit_Command_AuraClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_VengefulSpirit_Command_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Command_AuraClass;
}


// CDOTA_Ability_VengefulSpirit_Command_Aura::GetIntrinsicModifierName  (line 427, @0x0000000002a61f00, libserver.so)
// strings: "modifier_vengefulspirit_command_aura"
const char *__fastcall CDOTA_Ability_VengefulSpirit_Command_Aura::GetIntrinsicModifierName(
        CDOTA_Ability_VengefulSpirit_Command_Aura *const this)
{
  return "modifier_vengefulspirit_command_aura";
}


// CDOTA_Modifier_VengefulSpirit_Command_Aura::~CDOTA_Modifier_VengefulSpirit_Command_Aura  (line 436, @0x0000000002a64ee0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_VengefulSpirit_Command_Aura::~CDOTA_Modifier_VengefulSpirit_Command_Aura(
        CDOTA_Modifier_VengefulSpirit_Command_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_43B68D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_VengefulSpirit_Command_Aura::~CDOTA_Modifier_VengefulSpirit_Command_Aura  (line 436, @0x0000000002a64f00, libserver.so)  // inlines: ~CDOTA_Modifier_VengefulSpirit_Command_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_VengefulSpirit_Command_Aura::~CDOTA_Modifier_VengefulSpirit_Command_Aura(
        CDOTA_Modifier_VengefulSpirit_Command_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_43B68D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_VengefulSpirit_Command_Aura::IsAura  (line 444, @0x0000000002a61f10, libserver.so)
bool __fastcall CDOTA_Modifier_VengefulSpirit_Command_Aura::IsAura(
        CDOTA_Modifier_VengefulSpirit_Command_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_VengefulSpirit_Command_Aura::GetModifierAura  (line 445, @0x0000000002a61f20, libserver.so)
// strings: "modifier_vengefulspirit_command_aura_effect"
const char *__fastcall CDOTA_Modifier_VengefulSpirit_Command_Aura::GetModifierAura(
        CDOTA_Modifier_VengefulSpirit_Command_Aura *const this)
{
  return "modifier_vengefulspirit_command_aura_effect";
}


// CDOTA_Modifier_VengefulSpirit_Command_Aura::GetAuraSearchTeam  (line 447, @0x0000000002a61f30, libserver.so)
int __fastcall CDOTA_Modifier_VengefulSpirit_Command_Aura::GetAuraSearchTeam(
        CDOTA_Modifier_VengefulSpirit_Command_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_VengefulSpirit_Command_Aura::GetAuraSearchType  (line 448, @0x0000000002a61f40, libserver.so)
int __fastcall CDOTA_Modifier_VengefulSpirit_Command_Aura::GetAuraSearchType(
        CDOTA_Modifier_VengefulSpirit_Command_Aura *const this)
{
  return 3;
}


// CDOTA_Modifier_VengefulSpirit_Command_Aura::GetAuraSearchFlags  (line 449, @0x0000000002a61f50, libserver.so)
int __fastcall CDOTA_Modifier_VengefulSpirit_Command_Aura::GetAuraSearchFlags(
        CDOTA_Modifier_VengefulSpirit_Command_Aura *const this)
{
  return 80;
}


// CDOTA_Modifier_VengefulSpirit_Command_Aura::GetAuraRadius  (line 450, @0x0000000002a61f60, libserver.so)
int __fastcall CDOTA_Modifier_VengefulSpirit_Command_Aura::GetAuraRadius(
        CDOTA_Modifier_VengefulSpirit_Command_Aura *const this)
{
  return this->aura_radius;
}


// CDOTA_Modifier_VengefulSpirit_Command_Aura::IsHidden  (line 452, @0x0000000002a61f70, libserver.so)
bool __fastcall CDOTA_Modifier_VengefulSpirit_Command_Aura::IsHidden(
        CDOTA_Modifier_VengefulSpirit_Command_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_VengefulSpirit_Command_Aura::OnCreated  (line 466, @0x0000000002a55470, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_VengefulSpirit_Command_Aura::OnCreated(
        CDOTA_Modifier_VengefulSpirit_Command_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->aura_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "aura_radius", -1, 0);
  else
    this->aura_radius = 0;
}


// CDOTA_Modifier_VengefulSpirit_Command_Aura::OnRefresh  (line 473, @0x0000000002a555f0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_VengefulSpirit_Command_Aura::OnRefresh(
        CDOTA_Modifier_VengefulSpirit_Command_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->aura_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "aura_radius", -1, 0);
  else
    this->aura_radius = 0;
}


// CDOTA_Modifier_VengefulSpirit_Command_Aura::DeclareFunctions  (line 480, @0x0000000002a3fa70, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_VengefulSpirit_Command_Aura::OnDeath(CModifierParams const&)
void __fastcall CDOTA_Modifier_VengefulSpirit_Command_Aura::DeclareFunctions(
        CDOTA_Modifier_VengefulSpirit_Command_Aura *const this)
{
  this->m_Functions[138].__pfn = CDOTA_Modifier_VengefulSpirit_Command_Aura::OnDeath;
  this->m_Functions[138].__delta = 0;
}


// CDOTA_Modifier_VengefulSpirit_Command_Aura::OnDeath  (line 486, @0x0000000002a49630, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetGameMode, GetInstance, GetModifier_Constant_First, IndexToIdentity, IsListeningToEvent, IsSpecialIllusion, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_ModifierManager::GetModifier_Constant_First_Internal, CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CEntityHandle::operator CEntityInstance*, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt (16 total)
// strings: "modifier_vengefulspirit_command_negative_aura", "particles/units/heroes/hero_vengeful/vengeful_negative_aura.vpcf"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_VengefulSpirit_Command_Aura::OnDeath(
        CDOTA_Modifier_VengefulSpirit_Command_Aura *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r14
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTA_BaseNPC *v11; // r12
  CDOTA_BaseNPC *Caster; // r13
  __int64 v14; // rax
  int v15; // eax
  CEntityInstance *v16; // rax
  CDOTA_BaseNPC *v17; // r15
  float v18; // xmm1_4
  CDOTABaseAbility *Ability; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  const Vector *AbsOrigin; // r14
  CDOTA_ParticleManager *v23; // rax
  CDOTA_ParticleManager *v24; // rax
  CEntityHandle v25; // [rsp+10h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-38h]

  v27 = __readfsqword(0x28u);
  if ( *&g_pGameRules[6].m_szQuestName[68] != 20
    && (CDOTA_Buff::GetCaster(this) == 0 || (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 0x10000000) == 0) )
  {
    m_Index = params->hattacker.m_Index;
    if ( m_Index + 2 <= 1
      || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
      || (v6 = &v5[params->hattacker.m_Index & 0x1FF]) == 0
      || m_Index != v6->m_EHandle.m_Index
      || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    v8 = params->hunit.m_Index;
    if ( v8 + 2 <= 1
      || (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F]) == 0
      || (v10 = &v9[params->hunit.m_Index & 0x1FF]) == 0
      || v8 != v10->m_EHandle.m_Index
      || (v11 = v10->m_pInstance, v10->m_pInstance == 0)
      || !v11->m_bIsDOTANPC )
    {
      v11 = 0;
    }
    Caster = CDOTA_Buff::GetCaster(this);
    if ( Caster == v11 && m_pInstance != 0 && v11 != 0 && !v11->m_bIsIllusion.m_Value )
    {
      v14 = v11->m_ModifierManager.m_buffsForModifiers[108];
      if ( v14 == 0xFF
        || v11->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v14].m_Size <= 0
        || CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
             &v11->m_ModifierManager,
             modifierfunction::MODIFIER_PROPERTY_SUPER_ILLUSION,
             &CModifierParams::s_Default) != 1.0 )
      {
        if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
          && (v17 = m_pInstance, LOBYTE(m_pInstance[71].m_pEntity) == 0)
          || (v15 = (*(m_pInstance->_vptr_IHandleEntity + 414))(m_pInstance),
              CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(&v25, g_pDOTAPlayerResource, v15),
              v16 = CEntityHandle::operator CEntityInstance *(&v25),
              v17 = v16,
              v16 != 0)
          && BYTE3(v16[7]._vptr_IHandleEntity) != 0
          && (v16[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        {
          if ( Caster->m_iTeamNum.m_Value != v17->m_iTeamNum.m_Value )
          {
            KeyValues::KeyValues(&kv, "modifier_vengefulspirit_command_negative_aura");
            KeyValues::SetFloat(&kv, "duration", v18);
            Ability = CDOTA_Buff::GetAbility(this);
            CDOTA_BaseNPC::AddNewModifier(v17, Caster, Ability, "modifier_vengefulspirit_command_negative_aura", &kv, 0);
            ParticleManager = GetParticleManager();
            Particle = CDOTA_ParticleManager::CreateParticle(
                         ParticleManager,
                         "particles/units/heroes/hero_vengeful/vengeful_negative_aura.vpcf",
                         1,
                         m_pInstance,
                         0,
                         0);
            AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
            v23 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControlEnt(v23, Particle, 1, Caster, 1, 0, *AbsOrigin, 1);
            v24 = GetParticleManager();
            CDOTA_ParticleManager::ReleaseParticleIndex(v24, Particle);
            KeyValues::~KeyValues(&kv);
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_VengefulSpirit_Command_Aura_Effect::~CDOTA_Modifier_VengefulSpirit_Command_Aura_Effect  (line 528, @0x0000000002a64e90, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_VengefulSpirit_Command_Aura_Effect::~CDOTA_Modifier_VengefulSpirit_Command_Aura_Effect(
        CDOTA_Modifier_VengefulSpirit_Command_Aura_Effect *const this)
{
  this->_vptr_CDOTA_Buff = &off_43B6BF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_VengefulSpirit_Command_Aura_Effect::~CDOTA_Modifier_VengefulSpirit_Command_Aura_Effect  (line 528, @0x0000000002a64eb0, libserver.so)  // inlines: ~CDOTA_Modifier_VengefulSpirit_Command_Aura_Effect
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_VengefulSpirit_Command_Aura_Effect::~CDOTA_Modifier_VengefulSpirit_Command_Aura_Effect(
        CDOTA_Modifier_VengefulSpirit_Command_Aura_Effect *const this)
{
  this->_vptr_CDOTA_Buff = &off_43B6BF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_VengefulSpirit_Command_Aura_Effect::GetAttributes  (line 539, @0x0000000002a65bc0, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_VengefulSpirit_Command_Aura_Effect::GetAttributes(
        CDOTA_Modifier_VengefulSpirit_Command_Aura_Effect *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 4;
}


// CDOTA_Modifier_VengefulSpirit_Command_Aura_Effect::OnCreated  (line 550, @0x0000000002a55590, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_VengefulSpirit_Command_Aura_Effect::OnCreated(
        CDOTA_Modifier_VengefulSpirit_Command_Aura_Effect *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_damage_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage_pct", -1, 0);
  else
    this->bonus_damage_pct = 0;
}


// CDOTA_Modifier_VengefulSpirit_Command_Aura_Effect::OnRefresh  (line 557, @0x0000000002a54f90, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_VengefulSpirit_Command_Aura_Effect::OnRefresh(
        CDOTA_Modifier_VengefulSpirit_Command_Aura_Effect *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_damage_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage_pct", -1, 0);
  else
    this->bonus_damage_pct = 0;
}


// CDOTA_Modifier_VengefulSpirit_Command_Aura_Effect::DeclareFunctions  (line 564, @0x0000000002a3fa90, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_VengefulSpirit_Command_Aura_Effect::GetModifierBaseDamageOutgoing_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_VengefulSpirit_Command_Aura_Effect::DeclareFunctions(
        CDOTA_Modifier_VengefulSpirit_Command_Aura_Effect *const this)
{
  this->m_Functions[34].__pfn = CDOTA_Modifier_VengefulSpirit_Command_Aura_Effect::GetModifierBaseDamageOutgoing_Percentage;
  this->m_Functions[34].__delta = 0;
}


// CDOTA_Modifier_VengefulSpirit_Command_Aura_Effect::GetModifierBaseDamageOutgoing_Percentage  (line 571, @0x0000000002a53eb0, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_vengeful_spirit_2"
ModifierVariant_t __fastcall CDOTA_Modifier_VengefulSpirit_Command_Aura_Effect::GetModifierBaseDamageOutgoing_Percentage(
        CDOTA_Modifier_VengefulSpirit_Command_Aura_Effect *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float flAmount; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetCaster(this) != 0
    && (result.m_szVal = CDOTA_Buff::GetCaster(this), *&result.m_eType = 1, (result.m_szVal[2787] & 0x10) != 0) )
  {
    result.m_szVal = 0;
  }
  else
  {
    flAmount = this->bonus_damage_pct;
    if ( CDOTA_Buff::GetCaster(this) != 0 )
    {
      Caster = CDOTA_Buff::GetCaster(this);
      AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_vengeful_spirit_2", 0);
      if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
        flAmount = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1) + flAmount;
    }
    result.m_szVal = 0;
    *&result.m_eType = (LODWORD(flAmount) << 32) | 1;
  }
  return result;
}


// CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura::~CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura  (line 591, @0x0000000002a64e40, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura::~CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura(
        CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_43B6F10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura::~CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura  (line 591, @0x0000000002a64e60, libserver.so)  // inlines: ~CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura::~CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura(
        CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_43B6F10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura::IsAura  (line 599, @0x0000000002a61f80, libserver.so)
bool __fastcall CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura::IsAura(
        CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura::GetModifierAura  (line 600, @0x0000000002a61f90, libserver.so)
// strings: "modifier_vengefulspirit_command_negative_aura_effect"
const char *__fastcall CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura::GetModifierAura(
        CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura *const this)
{
  return "modifier_vengefulspirit_command_negative_aura_effect";
}


// CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura::GetAuraSearchTeam  (line 603, @0x0000000002a61fa0, libserver.so)
int __fastcall CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura::GetAuraSearchTeam(
        CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura::GetAuraSearchType  (line 604, @0x0000000002a61fb0, libserver.so)
int __fastcall CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura::GetAuraSearchType(
        CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura *const this)
{
  return 3;
}


// CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura::GetAuraSearchFlags  (line 605, @0x0000000002a61fc0, libserver.so)
int __fastcall CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura::GetAuraSearchFlags(
        CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura *const this)
{
  return 16;
}


// CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura::GetAuraRadius  (line 606, @0x0000000002a61fd0, libserver.so)
int __fastcall CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura::GetAuraRadius(
        CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura *const this)
{
  return this->aura_radius;
}


// CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura::IsHidden  (line 608, @0x0000000002a61fe0, libserver.so)
bool __fastcall CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura::IsHidden(
        CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura::GetAttributes  (line 609, @0x0000000002a65bd0, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura::GetAttributes(
        CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 4;
}


// CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura::OnCreated  (line 621, @0x0000000002a55770, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura::OnCreated(
        CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v4; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->aura_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "aura_radius", -1, 0);
  else
    this->aura_radius = 0;
  CDOTA_Buff::StartIntervalThink(this, 0.1, v4);
}


// CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura::OnRefresh  (line 629, @0x0000000002a55650, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura::OnRefresh(
        CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->aura_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "aura_radius", -1, 0);
  else
    this->aura_radius = 0;
}


// CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura::OnIntervalThink  (line 636, @0x0000000002a40580, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura::OnIntervalThink(
        CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  if ( CDOTA_Buff::GetCaster(this) == 0
    || (Caster = CDOTA_Buff::GetCaster(this), (*(Caster->_vptr_IHandleEntity + 408))(Caster) != 0) )
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura_Effect::~CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura_Effect  (line 651, @0x0000000002a64df0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura_Effect::~CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura_Effect(
        CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura_Effect *const this)
{
  this->_vptr_CDOTA_Buff = &off_43B7230;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura_Effect::~CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura_Effect  (line 651, @0x0000000002a64e10, libserver.so)  // inlines: ~CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura_Effect
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura_Effect::~CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura_Effect(
        CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura_Effect *const this)
{
  this->_vptr_CDOTA_Buff = &off_43B7230;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura_Effect::OnCreated  (line 671, @0x0000000002a55530, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura_Effect::OnCreated(
        CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura_Effect *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_damage_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage_pct", -1, 0);
  else
    this->bonus_damage_pct = 0;
}


// CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura_Effect::OnRefresh  (line 678, @0x0000000002a556b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura_Effect::OnRefresh(
        CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura_Effect *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_damage_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage_pct", -1, 0);
  else
    this->bonus_damage_pct = 0;
}


// CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura_Effect::DeclareFunctions  (line 685, @0x0000000002a3fab0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura_Effect::GetModifierBaseDamageOutgoing_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura_Effect::DeclareFunctions(
        CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura_Effect *const this)
{
  this->m_Functions[34].__pfn = CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura_Effect::GetModifierBaseDamageOutgoing_Percentage;
  this->m_Functions[34].__delta = 0;
}


// CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura_Effect::GetModifierBaseDamageOutgoing_Percentage  (line 692, @0x0000000002a53f70, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_vengeful_spirit_2"
ModifierVariant_t __fastcall CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura_Effect::GetModifierBaseDamageOutgoing_Percentage(
        CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura_Effect *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float flAmount; // [rsp+Ch] [rbp-4h]
  ModifierVariant_t result; // 0:rax.16

  flAmount = this->bonus_damage_pct;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_vengeful_spirit_2", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    flAmount = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1) + flAmount;
  result.m_szVal = 0;
  *&result.m_eType = ((LODWORD(flAmount) ^ 0x80000000LL) << 32) | 1;
  return result;
}


// CDOTA_Ability_VengefulSpirit_Nether_Swap::~CDOTA_Ability_VengefulSpirit_Nether_Swap  (line 713, @0x0000000002a67960, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_VengefulSpirit_Nether_Swap::~CDOTA_Ability_VengefulSpirit_Nether_Swap(
        CDOTA_Ability_VengefulSpirit_Nether_Swap *const this)
{
  this->_vptr_IHandleEntity = &off_43B7590;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_VengefulSpirit_Nether_Swap::~CDOTA_Ability_VengefulSpirit_Nether_Swap  (line 713, @0x0000000002a67980, libserver.so)  // inlines: ~CDOTA_Ability_VengefulSpirit_Nether_Swap
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_VengefulSpirit_Nether_Swap::~CDOTA_Ability_VengefulSpirit_Nether_Swap(
        CDOTA_Ability_VengefulSpirit_Nether_Swap *const this)
{
  this->_vptr_IHandleEntity = &off_43B7590;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_VengefulSpirit_Nether_Swap::Schema_DynamicBinding  (line 715, @0x0000000002a61ff0, libserver.so)
// globals: CDOTA_Ability_VengefulSpirit_Nether_Swap::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_VengefulSpirit_Nether_Swap::Schema_DynamicBinding(
        const CDOTA_Ability_VengefulSpirit_Nether_Swap *const this)
{
  return CDOTA_Ability_VengefulSpirit_Nether_Swap::s_pSchemaBinding;
}


// CDOTA_Ability_VengefulSpirit_Nether_Swap::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 715, @0x0000000002a62000, libserver.so)
// globals: CDOTA_Ability_VengefulSpirit_Nether_Swap::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_VengefulSpirit_Nether_Swap::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_VengefulSpirit_Nether_Swap::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_VengefulSpirit_Nether_Swap::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_VengefulSpirit_Nether_Swap::CEntityInstanceEntityClass::DestructInstance  (line 715, @0x0000000002a62010, libserver.so)  // inlines: Destruct<CDOTA_Ability_VengefulSpirit_Nether_Swap>
void __fastcall CDOTA_Ability_VengefulSpirit_Nether_Swap::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_VengefulSpirit_Nether_Swap::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_VengefulSpirit_Nether_Swap::CEntityInstanceEntityClass::FreeInstance  (line 715, @0x0000000002a62030, libserver.so)
void __fastcall CDOTA_Ability_VengefulSpirit_Nether_Swap::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_VengefulSpirit_Nether_Swap::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_VengefulSpirit_Nether_Swap::CEntityInstanceEntityClass::CanAllocate  (line 715, @0x0000000002a62050, libserver.so)
bool __fastcall CDOTA_Ability_VengefulSpirit_Nether_Swap::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_VengefulSpirit_Nether_Swap::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_VengefulSpirit_Nether_Swap::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 715, @0x0000000002a62060, libserver.so)
// globals: CDOTA_Ability_VengefulSpirit_Nether_Swap::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_VengefulSpirit_Nether_Swap::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_VengefulSpirit_Nether_Swap::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_VengefulSpirit_Nether_Swap::s_pSchemaBinding;
}


// CDOTA_Ability_VengefulSpirit_Nether_Swap::CEntityInstanceEntityClass::AllocateInstance  (line 715, @0x0000000002a64470, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_VengefulSpirit_Nether_Swap::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_VengefulSpirit_Nether_Swap::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_VengefulSpirit_Nether_Swap::CEntityInstanceEntityClass::ConstructInstance  (line 715, @0x0000000002a6a3d0, libserver.so)  // inlines: CDOTA_Ability_VengefulSpirit_Nether_Swap, CEntityHandle, CNetworkHandleBase, CNetworkVarBase, Construct<CDOTA_Ability_VengefulSpirit_Nether_Swap>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_VengefulSpirit_Nether_Swap::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_VengefulSpirit_Nether_Swap::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 229) = -1;
    *p = &off_43B7590;
  }
  return p;
}


// CDOTA_Ability_VengefulSpirit_Nether_Swap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 715, @0x0000000002a6b100, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_VengefulSpirit_Nether_Swap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_VengefulSpirit_Nether_Swap::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_VengefulSpirit_Nether_Swap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 715, @0x0000000002a6b120, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_VengefulSpirit_Nether_Swap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_VengefulSpirit_Nether_Swap::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_VengefulSpirit_Nether_Swap::GetEntityClassInternal  (line 715, @0x0000000002a74c00, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "vengefulspirit_nether_swap", "CDOTA_Ability_VengefulSpirit_Nether_Swap"
// globals: `guard variable for'CDOTA_Ability_VengefulSpirit_Nether_Swap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Nether_SwapClass, CDOTA_Ability_VengefulSpirit_Nether_Swap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Nether_SwapClass, __dso_handle, CDOTA_Ability_VengefulSpirit_Nether_Swap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_VengefulSpirit_Nether_Swap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_VengefulSpirit_Nether_SwapClassInfo, CDOTA_Ability_VengefulSpirit_Nether_Swap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_VengefulSpirit_Nether_SwapClassInfo
CEntityClass *__cdecl CDOTA_Ability_VengefulSpirit_Nether_Swap::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_VengefulSpirit_Nether_Swap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Nether_SwapClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_VengefulSpirit_Nether_Swap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Nether_SwapClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_VengefulSpirit_Nether_Swap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Nether_SwapClass);
    CDOTA_Ability_VengefulSpirit_Nether_Swap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Nether_SwapClass._vptr_CEntityClass = off_43B7510;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_VengefulSpirit_Nether_Swap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Nether_SwapClass);
    __cxa_atexit(
      CDOTA_Ability_VengefulSpirit_Nether_Swap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_VengefulSpirit_Nether_Swap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Nether_SwapClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_VengefulSpirit_Nether_SwapClass != 0 )
    return &CDOTA_Ability_VengefulSpirit_Nether_Swap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Nether_SwapClass;
  if ( `guard variable for'CDOTA_Ability_VengefulSpirit_Nether_Swap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_VengefulSpirit_Nether_SwapClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_VengefulSpirit_Nether_Swap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_VengefulSpirit_Nether_SwapClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_VengefulSpirit_Nether_Swap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_VengefulSpirit_Nether_SwapClassInfo,
      "CDOTA_Ability_VengefulSpirit_Nether_Swap",
      "vengefulspirit_nether_swap",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_VengefulSpirit_Nether_Swap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_VengefulSpirit_Nether_SwapClassInfo);
  }
  CDOTA_Ability_VengefulSpirit_Nether_Swap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Nether_SwapClass.m_pClassInfo = &CDOTA_Ability_VengefulSpirit_Nether_Swap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_VengefulSpirit_Nether_SwapClassInfo;
  CDOTA_Ability_VengefulSpirit_Nether_Swap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Nether_SwapClass.m_pBaseClassInfo = CDOTA_Ability_VengefulSpirit_Nether_Swap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_VengefulSpirit_Nether_SwapClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_VengefulSpirit_Nether_SwapClass = &CDOTA_Ability_VengefulSpirit_Nether_Swap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Nether_SwapClass;
  CDOTA_Ability_VengefulSpirit_Nether_Swap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_VengefulSpirit_Nether_SwapClassInfo.m_pClass = &CDOTA_Ability_VengefulSpirit_Nether_Swap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Nether_SwapClass;
  CDOTA_Ability_VengefulSpirit_Nether_Swap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Nether_SwapClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_VengefulSpirit_Nether_SwapClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_VengefulSpirit_Nether_Swap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_VengefulSpirit_Nether_SwapClass;
}


// CDOTA_Ability_VengefulSpirit_Nether_Swap::GetIntrinsicModifierName  (line 719, @0x0000000002a62070, libserver.so)
// strings: "modifier_vengefulspirit_nether_swap"
const char *__fastcall CDOTA_Ability_VengefulSpirit_Nether_Swap::GetIntrinsicModifierName(
        CDOTA_Ability_VengefulSpirit_Nether_Swap *const this)
{
  return "modifier_vengefulspirit_nether_swap";
}


// CDOTA_Ability_VengefulSpirit_Nether_Swap::YouForgotToImplementOrDeclareServerClass  (line 747, @0x0000000002a3fad0, libserver.so)
int __fastcall CDOTA_Ability_VengefulSpirit_Nether_Swap::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_VengefulSpirit_Nether_Swap *const this)
{
  return 0;
}


// CDOTA_Ability_VengefulSpirit_Nether_Swap::GetServerClass  (line 747, @0x0000000002a48930, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_VengefulSpirit_Nether_Swap::GetServerClass(
        CDOTA_Ability_VengefulSpirit_Nether_Swap *const this)
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


// CDOTA_Ability_VengefulSpirit_Nether_Swap::GetCooldown  (line 761, @0x0000000002a59920, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "nether_swap_cooldown_scepter"
float __fastcall CDOTA_Ability_VengefulSpirit_Nether_Swap::GetCooldown(
        CDOTA_Ability_VengefulSpirit_Nether_Swap *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "nether_swap_cooldown_scepter", iLevel, 0);
  else
    return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Ability_VengefulSpirit_Nether_Swap::OnSpellStart  (line 773, @0x0000000002a41b30, libserver.so)  // inlines: IsRealHero, ToDOTABaseNPC, ToDOTABaseNPCHero, entindex
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CEntityInstance::GetEntityIndex, CreateUnitEvent, CBaseEntity::GetAbsOrigin, CGridNav::DestroyTreesAroundPoint, CDOTAGamerules::IsPointInBadResultPosition, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues (23 total)
// strings: "modifier_vengefulspirit_nether_swap_pathingfix", "particles/units/heroes/hero_vengeful/vengeful_nether_swap.vpcf", "particles/units/heroes/hero_vengeful/vengeful_nether_swap_target.vpcf", "Hero_VengefulSpirit.NetherSwap"
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_VengefulSpirit_Nether_Swap::OnSpellStart(
        CDOTA_Ability_VengefulSpirit_Nether_Swap *const this)
{
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *CursorTarget; // rax
  CDOTA_BaseNPC *v4; // rbx
  CEntityIndex v5; // r14d
  CEntityIndex v6; // eax
  CDOTA_BaseNPC *v7; // rax
  unsigned int v8; // r14d
  float v9; // xmm3_4
  CDOTA_BaseNPC *v10; // rax
  unsigned int v11; // r15d
  float v12; // xmm3_4
  const Vector *AbsOrigin; // rax
  float v14; // xmm1_4
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r14d
  CDOTA_ParticleManager *v17; // rax
  __int64 v18; // r15
  CDOTA_ParticleManager *v19; // rax
  CDOTA_ParticleManager *v20; // rax
  int v21; // r14d
  CDOTA_ParticleManager *v22; // rax
  CDOTA_ParticleManager *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  CDOTA_BaseNPC_Hero *v25; // rdi
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-54h]
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+28h] [rbp-38h]
  Vector v29; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v30; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v31; // 0:xmm0_8.8,8:xmm1_4.4

  v28 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v4 = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && Caster != 0
    && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
  {
    v5.m_Data = CEntityInstance::GetEntityIndex(v4).m_Data;
    v6.m_Data = CEntityInstance::GetEntityIndex(Caster).m_Data;
    CreateUnitEvent(v6, v5, 25, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_IMPORTANT_ABILITY);
    v7 = CDOTABaseAbility::GetCaster(this);
    v8 = (*(v7->_vptr_IHandleEntity + 414))(v7);
    v29 = *CBaseEntity::GetAbsOrigin(Caster);
    CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v8, v29, 300.0, v9);
    v10 = CDOTABaseAbility::GetCaster(this);
    v11 = (*(v10->_vptr_IHandleEntity + 414))(v10);
    v30 = *CBaseEntity::GetAbsOrigin(v4);
    CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v11, v30, 300.0, v12);
    AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
    if ( CDOTAGamerules::IsPointInBadResultPosition(g_pGameRules, AbsOrigin) )
    {
      KeyValues::KeyValues(&kv, "modifier_vengefulspirit_nether_swap_pathingfix");
      KeyValues::SetFloat(&kv, "duration", v14);
      CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_vengefulspirit_nether_swap_pathingfix", &kv, 0);
      KeyValues::~KeyValues(&kv);
    }
    SwapUnitPositions(Caster, v4);
    CDOTA_BaseNPC::Interrupt(v4);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_vengeful/vengeful_nether_swap.vpcf",
                 1,
                 Caster,
                 0,
                 0);
    v17 = GetParticleManager();
    v18 = *&vec3_invalid.x;
    vecFallbackPosition = vec3_invalid.z;
    CDOTA_ParticleManager::SetParticleControlEnt(v17, Particle, 1, v4, 1, 0, vec3_invalid, 1);
    v19 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v19, Particle);
    v20 = GetParticleManager();
    v21 = CDOTA_ParticleManager::CreateParticle(
            v20,
            "particles/units/heroes/hero_vengeful/vengeful_nether_swap_target.vpcf",
            1,
            v4,
            0,
            0);
    v22 = GetParticleManager();
    *&v31.x = v18;
    v31.z = vecFallbackPosition;
    CDOTA_ParticleManager::SetParticleControlEnt(v22, v21, 1, Caster, 1, 0, v31, 1);
    v23 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v23, v21);
    CDOTA_BaseNPC::UnitEmitSound(v4, "Hero_VengefulSpirit.NetherSwap", 0.0, 0, 0);
    CDOTA_BaseNPC::UnitEmitSound(Caster, "Hero_VengefulSpirit.NetherSwap", 0.0, 0, 0);
    CDOTA_BaseNPC::StartGesture(Caster, 1529, 0.1, 0.1, 9, 0, 1.0);
    if ( v4->m_iTeamNum.m_Value != Caster->m_iTeamNum.m_Value
      && (v4->m_iUnitType & 1) != 0
      && !v4->m_bIsIllusion.m_Value )
    {
      v24 = CDOTABaseAbility::GetCaster(this);
      if ( v24 == 0 || (v25 = v24, (v24->m_iUnitType & 1) == 0) )
        v25 = 0;
      EconEntity_OnOwnerKillEaterEvent(
        v25,
        0,
        kill_eater_event_t::kKillEaterEvent_VengefulSpirit_EnemiesSwapped,
        1,
        INVALID_ITEM_DEF_INDEX);
    }
  }
}


// CDOTA_Ability_VengefulSpirit_Nether_Swap::CastFilterResult  (line 821, @0x0000000002a41960, libserver.so)
// calls: CDOTABaseAbility::GetCaster, UnitFilter, CDOTA_BaseNPC::HasScepter
int __fastcall CDOTA_Ability_VengefulSpirit_Nether_Swap::CastFilterResult(
        CDOTA_Ability_VengefulSpirit_Nether_Swap *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  int result; // eax
  CDOTA_BaseNPC *v6; // rdx
  CDOTA_BaseNPC *v7; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  result = UnitFilter(pTarget, 3, 3, 16, Caster->m_iTeamNum.m_Value);
  if ( result == 0 )
  {
    v6 = CDOTABaseAbility::GetCaster(this);
    result = 23;
    if ( pTarget != v6 )
    {
      if ( SLOBYTE(pTarget->m_iUnitType) < 0 )
      {
        v7 = CDOTABaseAbility::GetCaster(this);
        if ( !CDOTA_BaseNPC::HasScepter(v7) )
          return 23;
      }
      result = 0;
      if ( pTarget->m_bIsAncient.m_Value )
        return 23;
    }
  }
  return result;
}


// CDOTA_Ability_VengefulSpirit_Nether_Swap::GetCustomCastError  (line 838, @0x0000000002a406c0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter
// strings: "#dota_hud_error_cant_cast_on_ancient", "#dota_hud_error_cant_cast_on_creep", "#dota_hud_error_cant_cast_on_self"
const char *__fastcall CDOTA_Ability_VengefulSpirit_Nether_Swap::GetCustomCastError(
        CDOTA_Ability_VengefulSpirit_Nether_Swap *const this,
        CDOTA_BaseNPC *pTarget)
{
  const char *result; // rax
  CDOTA_BaseNPC *Caster; // rax

  if ( CDOTABaseAbility::GetCaster(this) == pTarget )
    return "#dota_hud_error_cant_cast_on_self";
  result = "#dota_hud_error_cant_cast_on_ancient";
  if ( !pTarget->m_bIsAncient.m_Value )
  {
    if ( SLOBYTE(pTarget->m_iUnitType) >= 0 )
      return "";
    Caster = CDOTABaseAbility::GetCaster(this);
    if ( CDOTA_BaseNPC::HasScepter(Caster) )
      return "";
    else
      return "#dota_hud_error_cant_cast_on_creep";
  }
  return result;
}


// CDOTA_Modifier_VengefulSpirit_NetherSwap::~CDOTA_Modifier_VengefulSpirit_NetherSwap  (line 856, @0x0000000002a64da0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_VengefulSpirit_NetherSwap::~CDOTA_Modifier_VengefulSpirit_NetherSwap(
        CDOTA_Modifier_VengefulSpirit_NetherSwap *const this)
{
  this->_vptr_CDOTA_Buff = &off_43B8050;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_VengefulSpirit_NetherSwap::~CDOTA_Modifier_VengefulSpirit_NetherSwap  (line 856, @0x0000000002a64dc0, libserver.so)  // inlines: ~CDOTA_Modifier_VengefulSpirit_NetherSwap
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_VengefulSpirit_NetherSwap::~CDOTA_Modifier_VengefulSpirit_NetherSwap(
        CDOTA_Modifier_VengefulSpirit_NetherSwap *const this)
{
  this->_vptr_CDOTA_Buff = &off_43B8050;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_VengefulSpirit_NetherSwap::IsHidden  (line 861, @0x0000000002a62080, libserver.so)
bool __fastcall CDOTA_Modifier_VengefulSpirit_NetherSwap::IsHidden(
        CDOTA_Modifier_VengefulSpirit_NetherSwap *const this)
{
  return 1;
}


// CDOTA_Modifier_VengefulSpirit_NetherSwap::DeclareFunctions  (line 871, @0x0000000002a3fae0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_VengefulSpirit_NetherSwap::OnDeath(CModifierParams const&)
void __fastcall CDOTA_Modifier_VengefulSpirit_NetherSwap::DeclareFunctions(
        CDOTA_Modifier_VengefulSpirit_NetherSwap *const this)
{
  this->m_Functions[138].__pfn = CDOTA_Modifier_VengefulSpirit_NetherSwap::OnDeath;
  this->m_Functions[138].__delta = 0;
}


// CDOTA_Modifier_VengefulSpirit_NetherSwap::OnDeath  (line 877, @0x0000000002a51e60, libserver.so)  // inlines: AttackerNPC, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetGameMode, GetInstance, GetPaddedCollisionRadius, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Purge, Set, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*, operator!=, operator=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, DOTA_CreateIllusions, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::Heal, CDOTA_BaseNPC::GiveMana (18 total)
// strings: "illusion_damage_out_pct_scepter", "illusion_damage_in_pct_scepter", "vengefulspirit_hybrid_illusions", "illusion_", "modifier_vengefulspirit_hybrid_special"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_VengefulSpirit_NetherSwap::OnDeath(
        CDOTA_Modifier_VengefulSpirit_NetherSwap *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r13
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTA_BaseNPC *v11; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v15; // rax
  float v16; // xmm1_4
  CDOTA_BaseNPC *pCaster; // r14
  CDOTA_BaseNPC *v18; // rax
  int v19; // r15d
  CDOTA_BaseNPC *v20; // rax
  CEntityInstance *v21; // rax
  CDOTA_BaseNPC *v22; // r14
  CDOTA_BaseNPC *v23; // rax
  int v24; // eax
  CDOTABaseAbility *v25; // rax
  CDOTABaseAbility *v26; // rbx
  int vptr_IHandleEntity_high; // eax
  CEntityIdentity *v28; // rdx
  CEntityIdentity *v29; // rdx
  CEntityIdentity *m_pEntity; // rdx
  int v31; // eax
  __int16 v32; // cx
  CDOTABaseAbility *pAbility; // [rsp+18h] [rbp-A8h]
  CDOTABaseAbility *pAbilitya; // [rsp+18h] [rbp-A8h]
  int illusion_damage_out_pct_scepter; // [rsp+28h] [rbp-98h] BYREF
  int illusion_damage_in_pct_scepter; // [rsp+2Ch] [rbp-94h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hImageList; // [rsp+30h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-70h] BYREF
  KeyValues kv2; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v40; // [rsp+88h] [rbp-38h]

  v40 = __readfsqword(0x28u);
  if ( *&g_pGameRules[6].m_szQuestName[68] != 20
    && (CDOTA_Buff::GetCaster(this) == 0 || (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 0x10000000) == 0) )
  {
    m_Index = params->hattacker.m_Index;
    if ( m_Index + 2 <= 1
      || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
      || (v6 = &v5[params->hattacker.m_Index & 0x1FF]) == 0
      || m_Index != v6->m_EHandle.m_Index
      || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    v8 = params->hunit.m_Index;
    if ( v8 + 2 <= 1
      || (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F]) == 0
      || (v10 = &v9[params->hunit.m_Index & 0x1FF]) == 0
      || v8 != v10->m_EHandle.m_Index
      || (v11 = v10->m_pInstance, v10->m_pInstance == 0)
      || !v11->m_bIsDOTANPC )
    {
      v11 = 0;
    }
    if ( CDOTA_Buff::GetCaster(this) == v11
      && m_pInstance != 0
      && v11 != 0
      && (*(v11->_vptr_IHandleEntity + 436))(v11) == 0 )
    {
      Caster = CDOTA_Buff::GetCaster(this);
      if ( CDOTA_BaseNPC::HasScepter(Caster) )
      {
        Ability = CDOTA_Buff::GetAbility(this);
        DotaRetrieveAbilityValue<int>(Ability, &illusion_damage_out_pct_scepter, "illusion_damage_out_pct_scepter");
        v15 = CDOTA_Buff::GetAbility(this);
        DotaRetrieveAbilityValue<int>(v15, &illusion_damage_in_pct_scepter, "illusion_damage_in_pct_scepter");
        KeyValues::KeyValues(&kv, "vengefulspirit_hybrid_illusions");
        KeyValues::SetFloat(&kv, "duration", v16);
        KeyValues::SetInt(&kv, "outgoing_damage", illusion_damage_out_pct_scepter - 100);
        KeyValues::SetInt(&kv, "incoming_damage", illusion_damage_in_pct_scepter - 100);
        hImageList.m_Size = 0;
        hImageList.m_Memory.m_nAllocationCount = 0;
        hImageList.m_Memory.m_pMemory = 0;
        hImageList.m_Memory.m_nGrowSize = 0;
        pCaster = CDOTA_Buff::GetCaster(this);
        v18 = CDOTA_Buff::GetCaster(this);
        v19 = ((v18->m_flHullRadius + v18->m_flCollisionPadding) + (v18->m_flHullRadius + v18->m_flCollisionPadding));
        v20 = CDOTA_Buff::GetCaster(this);
        DOTA_CreateIllusions(v20, 1, v19, 0, &kv, &hImageList, pCaster, "illusion_", 1);
        if ( hImageList.m_Size > 0 )
        {
          v21 = CEntityHandle::operator CEntityInstance *(hImageList.m_Memory.m_pMemory);
          if ( v21 != 0 && BYTE3(v21[7]._vptr_IHandleEntity) != 0 )
            v22 = v21;
          else
            v22 = 0;
          KeyValues::KeyValues(&kv2, "modifier_vengefulspirit_hybrid_special");
          pAbility = CDOTA_Buff::GetAbility(this);
          v23 = CDOTA_Buff::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(v22, v23, pAbility, "modifier_vengefulspirit_hybrid_special", &kv2, 0);
          pAbilitya = CDOTA_Buff::GetAbility(this);
          v24 = (*(v22->_vptr_IHandleEntity + 156))(v22);
          CDOTA_BaseNPC::Heal(v22, v24, pAbilitya, 0, 1);
          CDOTA_BaseNPC::GiveMana(v22, v22->m_flMaxMana.m_Value, 0, 1);
          v25 = CDOTA_Buff::GetAbility(this);
          v26 = v25;
          if ( v25 != 0 )
          {
            vptr_IHandleEntity_high = HIDWORD(v25[1]._vptr_IHandleEntity);
            if ( (vptr_IHandleEntity_high + 2) <= 1
              || (v28 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(WORD2(v26[1]._vptr_IHandleEntity) >> 9) & 0x3F]) == 0
              || (v29 = &v28[WORD2(v26[1]._vptr_IHandleEntity) & 0x1FF]) == 0
              || vptr_IHandleEntity_high != v29->m_EHandle.m_Index
              || v22 != v29->m_pInstance )
            {
              (*(v26->_vptr_IHandleEntity + 22))(v26, 916, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
              m_pEntity = v22->m_pEntity;
              if ( m_pEntity != 0 )
              {
                v31 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                if ( m_pEntity->m_EHandle.m_Index == -1 )
                  v32 = 0x7FFF;
                else
                  v32 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                WORD2(v26[1]._vptr_IHandleEntity) = v32 | WORD2(v26[1]._vptr_IHandleEntity) & 0x8000;
                HIDWORD(v26[1]._vptr_IHandleEntity) = (v31 << 15) | HIDWORD(v26[1]._vptr_IHandleEntity) & 0x7FFF;
              }
              else
              {
                HIDWORD(v26[1]._vptr_IHandleEntity) = -1;
              }
            }
          }
          KeyValues::~KeyValues(&kv2);
        }
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hImageList);
        if ( (hImageList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hImageList.m_Memory);
          if ( (hImageList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hImageList.m_Memory);
        }
        KeyValues::~KeyValues(&kv);
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_VengefulSpirit_Nether_Swap_PathingFix::~CDOTA_Modifier_VengefulSpirit_Nether_Swap_PathingFix  (line 963, @0x0000000002a64d50, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_VengefulSpirit_Nether_Swap_PathingFix::~CDOTA_Modifier_VengefulSpirit_Nether_Swap_PathingFix(
        CDOTA_Modifier_VengefulSpirit_Nether_Swap_PathingFix *const this)
{
  this->_vptr_CDOTA_Buff = &off_43B8370;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_VengefulSpirit_Nether_Swap_PathingFix::~CDOTA_Modifier_VengefulSpirit_Nether_Swap_PathingFix  (line 963, @0x0000000002a64d70, libserver.so)  // inlines: ~CDOTA_Modifier_VengefulSpirit_Nether_Swap_PathingFix
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_VengefulSpirit_Nether_Swap_PathingFix::~CDOTA_Modifier_VengefulSpirit_Nether_Swap_PathingFix(
        CDOTA_Modifier_VengefulSpirit_Nether_Swap_PathingFix *const this)
{
  this->_vptr_CDOTA_Buff = &off_43B8370;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_VengefulSpirit_Nether_Swap_PathingFix::IsHidden  (line 969, @0x0000000002a62090, libserver.so)
bool __fastcall CDOTA_Modifier_VengefulSpirit_Nether_Swap_PathingFix::IsHidden(
        CDOTA_Modifier_VengefulSpirit_Nether_Swap_PathingFix *const this)
{
  return 1;
}


// CDOTA_Modifier_VengefulSpirit_Nether_Swap_PathingFix::IsPurgable  (line 970, @0x0000000002a620a0, libserver.so)
bool __fastcall CDOTA_Modifier_VengefulSpirit_Nether_Swap_PathingFix::IsPurgable(
        CDOTA_Modifier_VengefulSpirit_Nether_Swap_PathingFix *const this)
{
  return 0;
}


// CDOTA_Modifier_VengefulSpirit_Nether_Swap_PathingFix::OnCreated  (line 982, @0x0000000002a40540, libserver.so)
// calls: CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_VengefulSpirit_Nether_Swap_PathingFix::OnCreated(
        CDOTA_Modifier_VengefulSpirit_Nether_Swap_PathingFix *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4

  CDOTA_Buff::StartIntervalThink(this, 0.5, v2);
}


// CDOTA_Modifier_VengefulSpirit_Nether_Swap_PathingFix::OnIntervalThink  (line 991, @0x0000000002a41ac0, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTAGamerules::IsPointInBadResultPosition, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_VengefulSpirit_Nether_Swap_PathingFix::OnIntervalThink(
        CDOTA_Modifier_VengefulSpirit_Nether_Swap_PathingFix *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  float v4; // xmm1_4

  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  if ( !CDOTAGamerules::IsPointInBadResultPosition(g_pGameRules, AbsOrigin) )
  {
    (*(this->_vptr_CDOTA_Buff + 63))(this, 1, 0.5);
    CDOTA_Buff::StartIntervalThink(this, -1.0, v4);
  }
}


// CDOTA_Modifier_VengefulSpirit_Nether_Swap_PathingFix::CheckState  (line 1005, @0x0000000002a3fb00, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_VengefulSpirit_Nether_Swap_PathingFix::CheckState(
        CDOTA_Modifier_VengefulSpirit_Nether_Swap_PathingFix *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x202000000uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFDFDFFFFFFLL;
}


// CDOTA_Modifier_VengefulSpirit_Nether_Swap_PathingFix::OnDestroy  (line 1015, @0x0000000002a405d0, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindClearSpaceForUnit
void __fastcall CDOTA_Modifier_VengefulSpirit_Nether_Swap_PathingFix::OnDestroy(
        CDOTA_Modifier_VengefulSpirit_Nether_Swap_PathingFix *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v4; // rax

  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v4 = CDOTA_Buff::GetParent(this);
  FindClearSpaceForUnit(v4, *AbsOrigin, 0);
}


// CDOTA_Modifier_VengefulSpirit_Hybrid_Special::~CDOTA_Modifier_VengefulSpirit_Hybrid_Special  (line 1030, @0x0000000002a64d00, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_VengefulSpirit_Hybrid_Special::~CDOTA_Modifier_VengefulSpirit_Hybrid_Special(
        CDOTA_Modifier_VengefulSpirit_Hybrid_Special *const this)
{
  this->_vptr_CDOTA_Buff = &off_43B8690;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_VengefulSpirit_Hybrid_Special::~CDOTA_Modifier_VengefulSpirit_Hybrid_Special  (line 1030, @0x0000000002a64d20, libserver.so)  // inlines: ~CDOTA_Modifier_VengefulSpirit_Hybrid_Special
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_VengefulSpirit_Hybrid_Special::~CDOTA_Modifier_VengefulSpirit_Hybrid_Special(
        CDOTA_Modifier_VengefulSpirit_Hybrid_Special *const this)
{
  this->_vptr_CDOTA_Buff = &off_43B8690;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_VengefulSpirit_Hybrid_Special::IsHidden  (line 1035, @0x0000000002a620b0, libserver.so)
bool __fastcall CDOTA_Modifier_VengefulSpirit_Hybrid_Special::IsHidden(
        CDOTA_Modifier_VengefulSpirit_Hybrid_Special *const this)
{
  return 1;
}


// CDOTA_Modifier_VengefulSpirit_Hybrid_Special::IsPurgable  (line 1036, @0x0000000002a620c0, libserver.so)
bool __fastcall CDOTA_Modifier_VengefulSpirit_Hybrid_Special::IsPurgable(
        CDOTA_Modifier_VengefulSpirit_Hybrid_Special *const this)
{
  return 0;
}


// CDOTA_Modifier_VengefulSpirit_Hybrid_Special::GetStatusEffectName  (line 1043, @0x0000000002a620d0, libserver.so)
// strings: "particles/status_fx/status_effect_dark_seer_illusion.vpcf"
const char *__fastcall CDOTA_Modifier_VengefulSpirit_Hybrid_Special::GetStatusEffectName(
        CDOTA_Modifier_VengefulSpirit_Hybrid_Special *const this)
{
  return "particles/status_fx/status_effect_dark_seer_illusion.vpcf";
}


// CDOTA_Modifier_VengefulSpirit_Hybrid_Special::StatusEffectPriority  (line 1044, @0x0000000002a620e0, libserver.so)
int __fastcall CDOTA_Modifier_VengefulSpirit_Hybrid_Special::StatusEffectPriority(
        CDOTA_Modifier_VengefulSpirit_Hybrid_Special *const this)
{
  return 10010;
}


// CDOTA_Modifier_VengefulSpirit_Hybrid_Special::OnCreated  (line 1058, @0x0000000002a3fb30, libserver.so)
void __fastcall CDOTA_Modifier_VengefulSpirit_Hybrid_Special::OnCreated(
        CDOTA_Modifier_VengefulSpirit_Hybrid_Special *const this,
        KeyValues *pKV)
{
  this->m_bLeftoverHybrid = 0;
}


// CDOTA_Modifier_VengefulSpirit_Hybrid_Special::DeclareFunctions  (line 1067, @0x0000000002a3fb40, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_VengefulSpirit_Hybrid_Special::GetModifierSuperIllusion(CModifierParams const&), CDOTA_Modifier_VengefulSpirit_Hybrid_Special::GetModifierSuperIllusionWithUltimate(CModifierParams const&)
void __fastcall CDOTA_Modifier_VengefulSpirit_Hybrid_Special::DeclareFunctions(
        CDOTA_Modifier_VengefulSpirit_Hybrid_Special *const this)
{
  this->m_Functions[108].__pfn = CDOTA_Modifier_VengefulSpirit_Hybrid_Special::GetModifierSuperIllusion;
  this->m_Functions[108].__delta = 0;
  this->m_Functions[109].__delta = 0;
  this->m_Functions[109].__pfn = CDOTA_Modifier_VengefulSpirit_Hybrid_Special::GetModifierSuperIllusionWithUltimate;
}


// CDOTA_Modifier_VengefulSpirit_Hybrid_Special::GetModifierSuperIllusion  (line 1075, @0x0000000002a3fb80, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_VengefulSpirit_Hybrid_Special::GetModifierSuperIllusion(
        CDOTA_Modifier_VengefulSpirit_Hybrid_Special *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_VengefulSpirit_Hybrid_Special::GetModifierSuperIllusionWithUltimate  (line 1082, @0x0000000002a3fba0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_VengefulSpirit_Hybrid_Special::GetModifierSuperIllusionWithUltimate(
        CDOTA_Modifier_VengefulSpirit_Hybrid_Special *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_VengefulSpirit_Hybrid_Special::OnThinkInternal  (line 1090, @0x0000000002a42820, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::GetAbilityCount, CDOTA_BaseNPC::GetAbilityByIndex, CDOTA_ModifierManager::GetBuffByIndex, CDOTA_Buff::Destroy, CDOTA_BaseNPC::ForceKill, UTIL_Remove
// strings: "modifier_illusion"
void __fastcall CDOTA_Modifier_VengefulSpirit_Hybrid_Special::OnThinkInternal(
        CDOTA_Modifier_VengefulSpirit_Hybrid_Special *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  int AbilityCount; // r13d
  int i; // r12d
  CDOTA_BaseNPC *v8; // rax
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTA_ModifierManager *p_m_ModifierManager; // r13
  int v12; // r12d
  CDOTA_Modifier_VengefulSpirit_Hybrid_Special *BuffByIndex; // rax
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *Parent; // rax

  if ( !this->m_bLeftoverHybrid && CDOTA_Buff::GetCaster(this) != 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    if ( (*(Caster->_vptr_IHandleEntity + 408))(Caster) != 0 )
    {
      Parent = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::ForceKill(Parent, 0);
    }
    v3 = CDOTA_Buff::GetParent(this);
    if ( CDOTA_BaseNPC::FindModifierByName(v3, "modifier_illusion", 0) != 0
      && (v4 = CDOTA_Buff::GetParent(this), (*(v4->_vptr_IHandleEntity + 408))(v4) != 0) )
    {
      if ( CDOTA_Buff::GetParent(this) != 0 )
        CDOTA_Buff::GetCaster(this);
    }
    else
    {
      v5 = CDOTA_Buff::GetParent(this);
      AbilityCount = CDOTA_BaseNPC::GetAbilityCount(v5);
      if ( AbilityCount > 0 )
      {
        for ( i = 0; i != AbilityCount; ++i )
        {
          v8 = CDOTA_Buff::GetParent(this);
          AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(v8, i);
          if ( AbilityByIndex != 0 )
            (*(AbilityByIndex->_vptr_IHandleEntity + 308))(AbilityByIndex);
        }
      }
      v10 = CDOTA_Buff::GetParent(this);
      p_m_ModifierManager = &v10->m_ModifierManager;
      v12 = v10->m_ModifierManager.m_bufflist.m_Size - 1;
      if ( v12 >= 0 )
      {
        do
        {
          BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(p_m_ModifierManager, v12, 0);
          if ( this != BuffByIndex && BuffByIndex != 0 )
            CDOTA_Buff::Destroy(BuffByIndex, 0, 0, 0);
          --v12;
        }
        while ( v12 != -1 );
      }
      v14 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::ForceKill(v14, 0);
      v15 = CDOTA_Buff::GetParent(this);
      UTIL_Remove(v15);
      this->m_bLeftoverHybrid = 1;
    }
  }
}


// CDOTA_Modifier_VengefulSpirit_Hybrid_Special::CheckState  (line 1134, @0x0000000002a42570, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_VengefulSpirit_Hybrid_Special::CheckState(
        CDOTA_Modifier_VengefulSpirit_Hybrid_Special *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  if ( this->m_bLeftoverHybrid )
  {
    m_nDisabledStateMask = buffState->m_nDisabledStateMask;
    buffState->m_nEnabledStateMask |= 0xD0844386uLL;
    buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFF2F7BBC79LL;
  }
}


