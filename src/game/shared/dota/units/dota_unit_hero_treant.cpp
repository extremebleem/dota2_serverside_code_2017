// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_treant.cpp:41
class CDOTA_Unit_Hero_Treant : public CDOTA_BaseNPC_Hero {
public:

private:

	bool m_bHadScepter;  // +0x16ec
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
	CDOTA_Unit_Hero_Treant(CDOTA_Unit_Hero_Treant &);
	CDOTA_Unit_Hero_Treant(CDOTA_Unit_Hero_Treant &);
	CDOTA_Unit_Hero_Treant();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnItemEquipped(CDOTA_Item *);
	virtual ~CDOTA_Unit_Hero_Treant();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[479] OnItemEquipped
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_treant.cpp:103
class C_CDOTA_Unit_Hero_Treant_MapInstall {
	C_CDOTA_Unit_Hero_Treant_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_treant.cpp:114
class CDOTA_NPC_Treant_EyesInTheForest : public CDOTA_BaseNPC_Additive {
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
	CDOTA_NPC_Treant_EyesInTheForest(CDOTA_NPC_Treant_EyesInTheForest &);
	CDOTA_NPC_Treant_EyesInTheForest(CDOTA_NPC_Treant_EyesInTheForest &);
	CDOTA_NPC_Treant_EyesInTheForest();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool HasFlyingVision();
	virtual bool CanPreventTreeRegrow();
	virtual ~CDOTA_NPC_Treant_EyesInTheForest();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[445] HasFlyingVision
	// vtable[412] CanPreventTreeRegrow
	// sizeof = 4504
};

// src/game/shared/dota/units/dota_unit_hero_treant.cpp:129
class C_CDOTA_NPC_Treant_EyesInTheForest_MapInstall {
	C_CDOTA_NPC_Treant_EyesInTheForest_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_treant.cpp:140
class CDOTA_Ability_Treant_EyesInTheForest : public CDOTABaseAbility {
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
	CDOTA_Ability_Treant_EyesInTheForest(CDOTA_Ability_Treant_EyesInTheForest &);
	CDOTA_Ability_Treant_EyesInTheForest(CDOTA_Ability_Treant_EyesInTheForest &);
	CDOTA_Ability_Treant_EyesInTheForest();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void OnSpellStart();
	virtual void OnUnStolen();
	void CastOvergrowth(int, float);
	void CleanupTrees();
	virtual ~CDOTA_Ability_Treant_EyesInTheForest();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[266] OnSpellStart
	// vtable[308] OnUnStolen
	// sizeof = 936
};

// src/game/shared/dota/units/dota_unit_hero_treant.cpp:165
class C_CDOTA_Ability_Treant_EyesInTheForest_MapInstall {
	C_CDOTA_Ability_Treant_EyesInTheForest_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_treant.cpp:313
class CDOTA_Modifier_Treant_EyesInTheForest_Thinker : public CDOTA_Buff {
public:

private:

	float vision_aoe;  // +0xba8

	EHANDLE m_hTree;  // +0xbb8
	CDOTA_Modifier_Treant_EyesInTheForest_Thinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void OnDestroy();
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierProvidesFOWVision(const CModifierParams &);
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Treant_EyesInTheForest_Thinker();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[60] OnDestroy
	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// vtable[11] IsHidden
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_treant.cpp:449
class CDOTA_Ability_Treant_NaturesGuise : public CDOTABaseAbility {
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
	CDOTA_Ability_Treant_NaturesGuise(CDOTA_Ability_Treant_NaturesGuise &);
	CDOTA_Ability_Treant_NaturesGuise(CDOTA_Ability_Treant_NaturesGuise &);
	CDOTA_Ability_Treant_NaturesGuise();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual bool HasInvisibility();
	virtual ~CDOTA_Ability_Treant_NaturesGuise();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[326] HasInvisibility
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_treant.cpp:465
class CDOTA_Modifier_Treant_NaturesGuise : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	float grace_time;  // +0xbac

	CDOTA_Modifier_Treant_NaturesGuise();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t OnAttack(const CModifierParams &);
	virtual ~CDOTA_Modifier_Treant_NaturesGuise();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[89] OnAttack
	// sizeof = 3040
};

// src/game/shared/dota/units/dota_unit_hero_treant.cpp:600
class CDOTA_Modifier_Treant_NaturesGuise_Invis : public CDOTA_Modifier_Invisible {
public:

private:

	int bonus_move_speed;  // +0xbb4
	CDOTA_Modifier_Treant_NaturesGuise_Invis();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	virtual void CheckState(CDOTABuffState &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ModifierVariant_t OnAbilityExecuted(const CModifierParams &);
	virtual ModifierVariant_t OnAttack(const CModifierParams &);
	ModifierVariant_t OnAttacked(const CModifierParams &);
	virtual ~CDOTA_Modifier_Treant_NaturesGuise_Invis();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[5] CheckState
	// vtable[90] OnAbilityExecuted
	// vtable[91] OnAttack
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_treant.cpp:721
class CDOTA_Ability_Treant_LeechSeed : public CDOTABaseAbility {
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
	CDOTA_Ability_Treant_LeechSeed(CDOTA_Ability_Treant_LeechSeed &);
	CDOTA_Ability_Treant_LeechSeed(CDOTA_Ability_Treant_LeechSeed &);
	CDOTA_Ability_Treant_LeechSeed();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Treant_LeechSeed();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[321] GetSlowDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_treant.cpp:805
class CDOTA_Modifier_Treant_LeechSeed : public CDOTA_Buff {
public:

private:

	float damage_interval;  // +0xba8
	int leech_damage;  // +0xbac
	int movement_slow;  // +0xbb0
	int radius;  // +0xbb4
	int projectile_speed;  // +0xbb8
	CDOTA_Modifier_Treant_LeechSeed();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual void OnIntervalThink();
	virtual bool RemoveOnDeath();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Treant_LeechSeed();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[56] OnIntervalThink
	// vtable[54] RemoveOnDeath
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_treant.cpp:917
class CDOTA_Ability_Treant_LivingArmor : public CDOTABaseAbility {
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
	CDOTA_Ability_Treant_LivingArmor(CDOTA_Ability_Treant_LivingArmor &);
	CDOTA_Ability_Treant_LivingArmor(CDOTA_Ability_Treant_LivingArmor &);
	CDOTA_Ability_Treant_LivingArmor();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Treant_LivingArmor();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_treant.cpp:968
class CDOTA_Modifier_Treant_LivingArmor : public CDOTA_Buff {
public:

private:

	int health_regen;  // +0xba8
	int damage_block;  // +0xbac
	int damage_count;  // +0xbb0
	CDOTA_Modifier_Treant_LivingArmor();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierTotal_ConstantBlock(const CModifierParams &);
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	ModifierVariant_t OnTooltip(const CModifierParams &);
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Treant_LivingArmor();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[56] OnIntervalThink
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_treant.cpp:1124
class CDOTA_Ability_Treant_Overgrowth : public CDOTABaseAbility {
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
	CDOTA_Ability_Treant_Overgrowth(CDOTA_Ability_Treant_Overgrowth &);
	CDOTA_Ability_Treant_Overgrowth(CDOTA_Ability_Treant_Overgrowth &);
	CDOTA_Ability_Treant_Overgrowth();
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
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Treant_Overgrowth();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[333] GetAOERadius
	// vtable[321] GetSlowDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_treant.cpp:1137
class C_CDOTA_Ability_Treant_Overgrowth_MapInstall {
	C_CDOTA_Ability_Treant_Overgrowth_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_treant.cpp:1221
class CDOTA_Modifier_Treant_Overgrowth : public CDOTA_Buff {
public:

private:

	float damage;  // +0xba8
	CDOTA_Modifier_Treant_Overgrowth();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual void CheckState(CDOTABuffState &);
	virtual int GetPriority();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Treant_Overgrowth();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[5] CheckState
	// vtable[6] GetPriority
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Treant::~CDOTA_Unit_Hero_Treant  (line 41, @0x0000000002d2d240, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Treant::~CDOTA_Unit_Hero_Treant(CDOTA_Unit_Hero_Treant *const this)
{
  this->_vptr_IHandleEntity = &off_46424B0;
  this->_vptr_INextBotEventResponder = &off_4643490;
  this->_vptr_CObstructionObject = &off_46437C0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Treant::~CDOTA_Unit_Hero_Treant  (line 41, @0x0000000002d2d280, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Treant
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Treant::~CDOTA_Unit_Hero_Treant(CDOTA_Unit_Hero_Treant *const this)
{
  this->_vptr_IHandleEntity = &off_46424B0;
  this->_vptr_INextBotEventResponder = &off_4643490;
  this->_vptr_CObstructionObject = &off_46437C0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Treant::Schema_DynamicBinding  (line 43, @0x0000000002d1f2b0, libserver.so)
// globals: CDOTA_Unit_Hero_Treant::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Treant::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Treant *const this)
{
  return CDOTA_Unit_Hero_Treant::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Treant::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 43, @0x0000000002d1f2e0, libserver.so)
// globals: CDOTA_Unit_Hero_Treant::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Treant::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Treant::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Treant::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Treant::CEntityInstanceEntityClass::DestructInstance  (line 43, @0x0000000002d1f2f0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Treant>
void __fastcall CDOTA_Unit_Hero_Treant::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Treant::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Treant::CEntityInstanceEntityClass::FreeInstance  (line 43, @0x0000000002d1f310, libserver.so)
void __fastcall CDOTA_Unit_Hero_Treant::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Treant::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Treant::CEntityInstanceEntityClass::CanAllocate  (line 43, @0x0000000002d1f330, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Treant::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Treant::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Treant::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 43, @0x0000000002d1f340, libserver.so)
// globals: CDOTA_Unit_Hero_Treant::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Treant::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Treant::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Treant::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Treant::CEntityInstanceEntityClass::AllocateInstance  (line 43, @0x0000000002d24d90, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Treant::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Treant::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Treant::CEntityInstanceEntityClass::ConstructInstance  (line 43, @0x0000000002d288d0, libserver.so)  // inlines: CDOTA_Unit_Hero_Treant, Construct<CDOTA_Unit_Hero_Treant>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Treant::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Treant::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_46424B0;
    *(p + 236) = &off_4643490;
    *(p + 257) = &off_46437C0;
  }
  return p;
}


// CDOTA_Unit_Hero_Treant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 43, @0x0000000002d35470, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Treant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Treant::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Treant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 43, @0x0000000002d35960, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Treant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Treant::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Treant::GetEntityClassInternal  (line 43, @0x0000000002d4d750, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "npc_dota_hero_treant", "CDOTA_Unit_Hero_Treant"
// globals: `guard variable for'CDOTA_Unit_Hero_Treant::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TreantClass, CDOTA_Unit_Hero_Treant::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TreantClass, __dso_handle, CDOTA_Unit_Hero_Treant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Treant::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TreantClassInfo, CDOTA_Unit_Hero_Treant::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TreantClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Treant::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Treant::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TreantClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Treant::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TreantClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Treant::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TreantClass);
    CDOTA_Unit_Hero_Treant::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TreantClass._vptr_CEntityClass = off_4642430;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Treant::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TreantClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Treant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Treant::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TreantClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_TreantClass != 0 )
    return &CDOTA_Unit_Hero_Treant::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TreantClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Treant::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TreantClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Treant::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TreantClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Treant::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TreantClassInfo,
      "CDOTA_Unit_Hero_Treant",
      "npc_dota_hero_treant",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Treant::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TreantClassInfo);
  }
  CDOTA_Unit_Hero_Treant::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TreantClass.m_pClassInfo = &CDOTA_Unit_Hero_Treant::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TreantClassInfo;
  CDOTA_Unit_Hero_Treant::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TreantClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Treant::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TreantClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_TreantClass = &CDOTA_Unit_Hero_Treant::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TreantClass;
  CDOTA_Unit_Hero_Treant::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TreantClassInfo.m_pClass = &CDOTA_Unit_Hero_Treant::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TreantClass;
  CDOTA_Unit_Hero_Treant::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TreantClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_TreantClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Treant::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TreantClass;
}


// CDOTA_Unit_Hero_Treant::OnItemEquipped  (line 61, @0x0000000002cd7890, libserver.so)  // inlines: FStrEq, GetAbilityName, GetPlayerOwnerID, NetworkStateChanged, Set, SetDroppable, SetSellable, _V_strcmp, operator=<bool>
// calls: CDOTA_BaseNPC::OnItemEquipped, CDOTA_Item::ExpireSellback, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::SetHidden, CDOTABaseAbility::UpgradeAbility
// strings: "item_ultimate_scepter", "treant_eyes_in_the_forest"
void __fastcall CDOTA_Unit_Hero_Treant::OnItemEquipped(CDOTA_Unit_Hero_Treant *const this, CDOTA_Item *pItem)
{
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // rsi
  int m_Value; // r13d
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v8; // rbx

  CDOTA_BaseNPC::OnItemEquipped(this, pItem);
  if ( pItem != 0 && !this->m_bHadScepter )
  {
    m_pAbilityData = pItem->m_pAbilityData;
    if ( m_pAbilityData != 0 )
    {
      m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
      if ( m_pAbilityData->m_pszAbilityName != 0
        && (m_pszAbilityName == "item_ultimate_scepter" || strcmp(m_pszAbilityName, "item_ultimate_scepter") == 0) )
      {
        m_Value = pItem->m_iPlayerOwnerID.m_Value;
        if ( (*(this->_vptr_IHandleEntity + 414))(this) == m_Value )
        {
          if ( pItem->m_bDroppable.m_Value )
          {
            (*(pItem->_vptr_IHandleEntity + 22))(pItem, 928, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            pItem->m_bDroppable.m_Value = 0;
          }
          if ( pItem->m_bSellable.m_Value )
          {
            (*(pItem->_vptr_IHandleEntity + 22))(pItem, 930, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            pItem->m_bSellable.m_Value = 0;
          }
          CDOTA_Item::ExpireSellback(pItem);
          AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "treant_eyes_in_the_forest", 0);
          v8 = AbilityByName;
          if ( AbilityByName != 0 )
          {
            CDOTABaseAbility::SetHidden(AbilityByName, 0);
            CDOTABaseAbility::UpgradeAbility(v8, 0);
          }
          this->m_bHadScepter = 1;
        }
      }
    }
  }
}


// CDOTA_Unit_Hero_Treant::YouForgotToImplementOrDeclareServerClass  (line 103, @0x0000000002cc9ba0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Treant::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Treant *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Treant::GetServerClass  (line 103, @0x0000000002cde530, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Treant::GetServerClass(CDOTA_Unit_Hero_Treant *const this)
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


// CDOTA_NPC_Treant_EyesInTheForest::~CDOTA_NPC_Treant_EyesInTheForest  (line 114, @0x0000000002d25f70, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_NPC_Treant_EyesInTheForest::~CDOTA_NPC_Treant_EyesInTheForest(
        CDOTA_NPC_Treant_EyesInTheForest *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_NPC_Treant_EyesInTheForest::~CDOTA_NPC_Treant_EyesInTheForest  (line 114, @0x0000000002d25fc0, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_NPC_Treant_EyesInTheForest
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_NPC_Treant_EyesInTheForest::~CDOTA_NPC_Treant_EyesInTheForest(
        CDOTA_NPC_Treant_EyesInTheForest *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_NPC_Treant_EyesInTheForest::Schema_DynamicBinding  (line 116, @0x0000000002d1f350, libserver.so)
// globals: CDOTA_NPC_Treant_EyesInTheForest::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_NPC_Treant_EyesInTheForest::Schema_DynamicBinding(
        const CDOTA_NPC_Treant_EyesInTheForest *const this)
{
  return CDOTA_NPC_Treant_EyesInTheForest::s_pSchemaBinding;
}


// CDOTA_NPC_Treant_EyesInTheForest::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 116, @0x0000000002d1f380, libserver.so)
// globals: CDOTA_NPC_Treant_EyesInTheForest::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_NPC_Treant_EyesInTheForest::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_NPC_Treant_EyesInTheForest::CEntityInstanceEntityClass *const this)
{
  return CDOTA_NPC_Treant_EyesInTheForest::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_NPC_Treant_EyesInTheForest::CEntityInstanceEntityClass::DestructInstance  (line 116, @0x0000000002d1f390, libserver.so)  // inlines: Destruct<CDOTA_NPC_Treant_EyesInTheForest>
void __fastcall CDOTA_NPC_Treant_EyesInTheForest::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_NPC_Treant_EyesInTheForest::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_NPC_Treant_EyesInTheForest::CEntityInstanceEntityClass::FreeInstance  (line 116, @0x0000000002d1f3b0, libserver.so)
void __fastcall CDOTA_NPC_Treant_EyesInTheForest::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_NPC_Treant_EyesInTheForest::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_NPC_Treant_EyesInTheForest::CEntityInstanceEntityClass::CanAllocate  (line 116, @0x0000000002d1f3d0, libserver.so)
bool __fastcall CDOTA_NPC_Treant_EyesInTheForest::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_NPC_Treant_EyesInTheForest::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_NPC_Treant_EyesInTheForest::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 116, @0x0000000002d1f3e0, libserver.so)
// globals: CDOTA_NPC_Treant_EyesInTheForest::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_NPC_Treant_EyesInTheForest::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_NPC_Treant_EyesInTheForest::CEntityInstanceEntityClass *const this)
{
  return CDOTA_NPC_Treant_EyesInTheForest::s_pSchemaBinding;
}


// CDOTA_NPC_Treant_EyesInTheForest::CEntityInstanceEntityClass::AllocateInstance  (line 116, @0x0000000002d24dd0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_NPC_Treant_EyesInTheForest::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_NPC_Treant_EyesInTheForest::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4504);
  memset(v1, 0, 0x1198u);
  return v1;
}


// CDOTA_NPC_Treant_EyesInTheForest::CEntityInstanceEntityClass::ConstructInstance  (line 116, @0x0000000002d25b70, libserver.so)  // inlines: CDOTA_BaseNPC_Additive, CDOTA_NPC_Treant_EyesInTheForest, Construct<CDOTA_NPC_Treant_EyesInTheForest>
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_NPC_Treant_EyesInTheForest::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_NPC_Treant_EyesInTheForest::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *p = &off_4643890;
    *(p + 236) = &off_46447F0;
    *(p + 257) = &off_4644B20;
  }
  return p;
}


// CDOTA_NPC_Treant_EyesInTheForest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 116, @0x0000000002d35330, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_NPC_Treant_EyesInTheForest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_NPC_Treant_EyesInTheForest::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_NPC_Treant_EyesInTheForest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 116, @0x0000000002d35690, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_NPC_Treant_EyesInTheForest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_NPC_Treant_EyesInTheForest::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal  (line 116, @0x0000000002d52220, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC::InitScriptDesc, CDOTA_BaseNPC_Additive::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "npc_dota_treant_eyes", "CDOTA_NPC_Treant_EyesInTheForest"
// globals: `guard variable for'CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass, CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_NPC_Treant_EyesInTheForest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClassInfo, CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClassInfo
CEntityClass *__cdecl CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass) != 0 )
  {
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_designerName.u.m_Id = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass._vptr_CEntityClass = off_3F79390;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_AllHelpers.m_Size = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_classInputs.m_Size = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_classOutputs.m_Size = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_requiredEHandle.m_Index = -1;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_hNetworkSerializer = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_pBaseClassInfo = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_pClassInfo = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_flags = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_nAllHelpersFlags = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_pScriptClassDesc = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_pInputs = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_nInputCount = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_pOutputs = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_nOutputCount = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_pGameClass = 0;
    CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass._vptr_CEntityClass = off_4643810;
    __cxa_guard_release(&`guard variable for'CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass);
    __cxa_atexit(
      CDOTA_NPC_Treant_EyesInTheForest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_NPC_Treant_EyesInTheForestClass != 0 )
    return &CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass;
  if ( `guard variable for'CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Additive::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClassInfo,
      "CDOTA_NPC_Treant_EyesInTheForest",
      "npc_dota_treant_eyes",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClassInfo);
  }
  CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_pClassInfo = &CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClassInfo;
  CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_pBaseClassInfo = CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_NPC_Treant_EyesInTheForestClass = &CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass;
  CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClassInfo.m_pClass = &CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass;
  CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass.m_pScriptClassDesc = CDOTA_BaseNPC::InitScriptDesc();
  g_pEntityCDOTA_NPC_Treant_EyesInTheForestClass->m_pComponentOverrides = 0;
  return &CDOTA_NPC_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Treant_EyesInTheForestClass;
}


// CDOTA_NPC_Treant_EyesInTheForest::HasFlyingVision  (line 120, @0x0000000002d1f3f0, libserver.so)
bool __fastcall CDOTA_NPC_Treant_EyesInTheForest::HasFlyingVision(CDOTA_NPC_Treant_EyesInTheForest *const this)
{
  return 1;
}


// CDOTA_NPC_Treant_EyesInTheForest::CanPreventTreeRegrow  (line 123, @0x0000000002d1f400, libserver.so)
bool __fastcall CDOTA_NPC_Treant_EyesInTheForest::CanPreventTreeRegrow(
        const CDOTA_NPC_Treant_EyesInTheForest *const this)
{
  return 0;
}


// CDOTA_NPC_Treant_EyesInTheForest::YouForgotToImplementOrDeclareServerClass  (line 129, @0x0000000002cc9bb0, libserver.so)
int __fastcall CDOTA_NPC_Treant_EyesInTheForest::YouForgotToImplementOrDeclareServerClass(
        CDOTA_NPC_Treant_EyesInTheForest *const this)
{
  return 0;
}


// CDOTA_NPC_Treant_EyesInTheForest::GetServerClass  (line 129, @0x0000000002cddeb0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_NPC_Treant_EyesInTheForest::GetServerClass(CDOTA_NPC_Treant_EyesInTheForest *const this)
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


// CDOTA_Ability_Treant_EyesInTheForest::~CDOTA_Ability_Treant_EyesInTheForest  (line 140, @0x0000000002d462a0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Treant_EyesInTheForest::~CDOTA_Ability_Treant_EyesInTheForest(
        CDOTA_Ability_Treant_EyesInTheForest *const this)
{
  this->_vptr_IHandleEntity = &off_4644BF0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->vTrees);
  if ( (this->vTrees.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->vTrees.m_Memory),
        (this->vTrees.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->vTrees.m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_Treant_EyesInTheForest::~CDOTA_Ability_Treant_EyesInTheForest  (line 140, @0x0000000002d46a40, libserver.so)  // inlines: Purge, ~CDOTA_Ability_Treant_EyesInTheForest, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Treant_EyesInTheForest::~CDOTA_Ability_Treant_EyesInTheForest(
        CDOTA_Ability_Treant_EyesInTheForest *const this)
{
  this->_vptr_IHandleEntity = &off_4644BF0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->vTrees);
  if ( (this->vTrees.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->vTrees.m_Memory);
    if ( (this->vTrees.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->vTrees.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Treant_EyesInTheForest::Schema_DynamicBinding  (line 142, @0x0000000002d1f410, libserver.so)
// globals: CDOTA_Ability_Treant_EyesInTheForest::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Treant_EyesInTheForest::Schema_DynamicBinding(
        const CDOTA_Ability_Treant_EyesInTheForest *const this)
{
  return CDOTA_Ability_Treant_EyesInTheForest::s_pSchemaBinding;
}


// CDOTA_Ability_Treant_EyesInTheForest::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 142, @0x0000000002d1f420, libserver.so)
// globals: CDOTA_Ability_Treant_EyesInTheForest::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Treant_EyesInTheForest::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Treant_EyesInTheForest::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Treant_EyesInTheForest::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Treant_EyesInTheForest::CEntityInstanceEntityClass::DestructInstance  (line 142, @0x0000000002d1f430, libserver.so)  // inlines: Destruct<CDOTA_Ability_Treant_EyesInTheForest>
void __fastcall CDOTA_Ability_Treant_EyesInTheForest::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Treant_EyesInTheForest::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Treant_EyesInTheForest::CEntityInstanceEntityClass::FreeInstance  (line 142, @0x0000000002d1f450, libserver.so)
void __fastcall CDOTA_Ability_Treant_EyesInTheForest::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Treant_EyesInTheForest::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Treant_EyesInTheForest::CEntityInstanceEntityClass::CanAllocate  (line 142, @0x0000000002d1f470, libserver.so)
bool __fastcall CDOTA_Ability_Treant_EyesInTheForest::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Treant_EyesInTheForest::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Treant_EyesInTheForest::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 142, @0x0000000002d1f480, libserver.so)
// globals: CDOTA_Ability_Treant_EyesInTheForest::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Treant_EyesInTheForest::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Treant_EyesInTheForest::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Treant_EyesInTheForest::s_pSchemaBinding;
}


// CDOTA_Ability_Treant_EyesInTheForest::CEntityInstanceEntityClass::AllocateInstance  (line 142, @0x0000000002d24e10, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Treant_EyesInTheForest::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Treant_EyesInTheForest::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 936);
  memset(v1, 0, 0x3A8u);
  return v1;
}


// CDOTA_Ability_Treant_EyesInTheForest::CEntityInstanceEntityClass::ConstructInstance  (line 142, @0x0000000002d320c0, libserver.so)  // inlines: CDOTA_Ability_Treant_EyesInTheForest, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_Treant_EyesInTheForest>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Treant_EyesInTheForest::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Treant_EyesInTheForest::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = 0;
    *p = &off_4644BF0;
    *(p + 115) = 0;
    *(p + 232) = 0;
    *(p + 233) = 0;
  }
  return p;
}


// CDOTA_Ability_Treant_EyesInTheForest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 142, @0x0000000002d34680, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Treant_EyesInTheForest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Treant_EyesInTheForest::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Treant_EyesInTheForest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 142, @0x0000000002d346a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Treant_EyesInTheForest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Treant_EyesInTheForest::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Treant_EyesInTheForest::GetEntityClassInternal  (line 142, @0x0000000002d499a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "treant_eyes_in_the_forest", "CDOTA_Ability_Treant_EyesInTheForest"
// globals: `guard variable for'CDOTA_Ability_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_EyesInTheForestClass, CDOTA_Ability_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_EyesInTheForestClass, __dso_handle, CDOTA_Ability_Treant_EyesInTheForest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Treant_EyesInTheForest::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_EyesInTheForestClassInfo, CDOTA_Ability_Treant_EyesInTheForest::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_EyesInTheForestClassInfo
CEntityClass *__cdecl CDOTA_Ability_Treant_EyesInTheForest::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_EyesInTheForestClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_EyesInTheForestClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_EyesInTheForestClass);
    CDOTA_Ability_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_EyesInTheForestClass._vptr_CEntityClass = off_4644B70;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_EyesInTheForestClass);
    __cxa_atexit(
      CDOTA_Ability_Treant_EyesInTheForest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_EyesInTheForestClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Treant_EyesInTheForestClass != 0 )
    return &CDOTA_Ability_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_EyesInTheForestClass;
  if ( `guard variable for'CDOTA_Ability_Treant_EyesInTheForest::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_EyesInTheForestClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Treant_EyesInTheForest::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_EyesInTheForestClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Treant_EyesInTheForest::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_EyesInTheForestClassInfo,
      "CDOTA_Ability_Treant_EyesInTheForest",
      "treant_eyes_in_the_forest",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Treant_EyesInTheForest::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_EyesInTheForestClassInfo);
  }
  CDOTA_Ability_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_EyesInTheForestClass.m_pClassInfo = &CDOTA_Ability_Treant_EyesInTheForest::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_EyesInTheForestClassInfo;
  CDOTA_Ability_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_EyesInTheForestClass.m_pBaseClassInfo = CDOTA_Ability_Treant_EyesInTheForest::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_EyesInTheForestClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Treant_EyesInTheForestClass = &CDOTA_Ability_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_EyesInTheForestClass;
  CDOTA_Ability_Treant_EyesInTheForest::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_EyesInTheForestClassInfo.m_pClass = &CDOTA_Ability_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_EyesInTheForestClass;
  CDOTA_Ability_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_EyesInTheForestClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Treant_EyesInTheForestClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Treant_EyesInTheForest::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_EyesInTheForestClass;
}


// CDOTA_Ability_Treant_EyesInTheForest::Spawn  (line 146, @0x0000000002d2cce0, libserver.so)
// calls: CDOTABaseAbility::Spawn, CDOTABaseAbility::SetHidden
void __fastcall CDOTA_Ability_Treant_EyesInTheForest::Spawn(
        CDOTA_Ability_Treant_EyesInTheForest *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTABaseAbility::Spawn(this, pKeyValues);
  CDOTABaseAbility::SetHidden(this, 1);
}


// CDOTA_Ability_Treant_EyesInTheForest::YouForgotToImplementOrDeclareServerClass  (line 165, @0x0000000002cc9bc0, libserver.so)
int __fastcall CDOTA_Ability_Treant_EyesInTheForest::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Treant_EyesInTheForest *const this)
{
  return 0;
}


// CDOTA_Ability_Treant_EyesInTheForest::GetServerClass  (line 165, @0x0000000002cde2b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Treant_EyesInTheForest::GetServerClass(
        CDOTA_Ability_Treant_EyesInTheForest *const this)
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


// CDOTA_Ability_Treant_EyesInTheForest::OnSpellStart  (line 174, @0x0000000002d11360, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GetTeamNumber, GrowMemory, NetworkStateChanged, QAngle, Set, SetBlockCreepSpawn, SetShouldDoFlyHeightVisual, VectorNormalize2D, VectorSubtract, entindex, operator-, operator=<bool>, operator[]
// calls: CDOTABaseAbility::GetCursorTarget, __dynamic_cast, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorPosition, DOTA_CreateUnitByName, KeyValues::KeyValues, CEntityInstance::GetEntityIndex, KeyValues::SetInt, KeyValues::SetPtr, CDOTA_BaseNPC::AddNewModifier, CBaseEntity::GetAbsOrigin, VectorNormalize (23 total)
// strings: "npc_dota_treant_eyes", "modifier_treant_eyes_in_the_forest", "tree_entindex", "Hero_Treant.Eyes.Cast"
void __fastcall CDOTA_Ability_Treant_EyesInTheForest::OnSpellStart(CDOTA_Ability_Treant_EyesInTheForest *const this)
{
  CBaseEntity *CursorTarget; // rax
  void *v3; // rax
  void *v4; // r14
  __int64 v5; // rax
  __int64 v6; // rdx
  __int16 v7; // cx
  __int64 m_Size; // r12
  int v9; // eax
  vec_t *p_m_Index; // rax
  int m_Value; // r13d
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // r12
  CBaseEntity *v15; // rax
  const CEntityInstance *v16; // rax
  CEntityIndex v17; // eax
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  const Vector *AbsOrigin; // r14
  vec_t v21; // xmm0_4
  vec_t v22; // xmm1_4
  vec_t v23; // xmm0_4
  CDOTA_BaseNPC *v24; // rax
  int v25; // eax
  CDOTA_BaseNPC *pEconItemOwner; // [rsp+8h] [rbp-88h]
  Vector vDirection; // [rsp+10h] [rbp-80h] BYREF
  QAngle vAngles; // [rsp+20h] [rbp-70h] BYREF
  Vector vLocation; // [rsp+30h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v31; // [rsp+58h] [rbp-38h]

  v31 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  if ( CursorTarget != 0 )
  {
    v3 = __dynamic_cast(CursorTarget, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_Tree, -2);
    v4 = v3;
    if ( v3 != 0 )
    {
      v5 = (*(*v3 + 64LL))(v3);
      vLocation.x = NAN;
      if ( v5 != 0 )
      {
        v6 = *(v5 + 8);
        if ( v6 != 0 )
        {
          v7 = 0x7FFF;
          if ( *(v6 + 16) != -1 )
            v7 = *(v6 + 16) & 0x7FFF;
          LODWORD(vLocation.x) = (((*(v6 + 16) >> 15) - (*(v6 + 48) & 1)) << 15) | v7 & 0x7FFF;
        }
      }
      m_Size = this->vTrees.m_Size;
      v9 = this->vTrees.m_Size;
      if ( m_Size == this->vTrees.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->vTrees.m_Memory, 1);
        v9 = this->vTrees.m_Size;
      }
      this->vTrees.m_Size = v9 + 1;
      p_m_Index = &this->vTrees.m_Memory.m_pMemory[m_Size].m_Index;
      if ( p_m_Index != 0 )
        *p_m_Index = vLocation.x;
    }
  }
  else
  {
    v4 = 0;
  }
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  Caster = CDOTABaseAbility::GetCaster(this);
  pEconItemOwner = CDOTABaseAbility::GetCaster(this);
  vLocation = CDOTABaseAbility::GetCursorPosition(this);
  v13 = DOTA_CreateUnitByName("npc_dota_treant_eyes", &vLocation, 1, pEconItemOwner, Caster, m_Value);
  v14 = v13;
  if ( v13 != 0 )
  {
    if ( v13->m_bShouldDoFlyHeightVisual.m_Value )
    {
      (*(v13->_vptr_IHandleEntity + 22))(v13, 4188, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v14->m_bShouldDoFlyHeightVisual.m_Value = 0;
    }
    KeyValues::KeyValues(&kv, "modifier_treant_eyes_in_the_forest");
    v15 = CDOTABaseAbility::GetCursorTarget(this);
    if ( v15 != 0 && (v16 = __dynamic_cast(v15, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_TempTree, 0)) != 0 )
    {
      v17.m_Data = CEntityInstance::GetEntityIndex(v16).m_Data;
      KeyValues::SetInt(&kv, "tree_entindex", v17.m_Data);
      KeyValues::SetPtr(&kv, "tree", 0);
    }
    else
    {
      KeyValues::SetInt(&kv, "tree_entindex", 0);
      KeyValues::SetPtr(&kv, "tree", v4);
    }
    v18 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v14, v18, this, "modifier_treant_eyes_in_the_forest", &kv, 0);
    v19 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v19);
    vLocation = CDOTABaseAbility::GetCursorPosition(this);
    v21 = vLocation.y - AbsOrigin->y;
    v22 = vLocation.x - AbsOrigin->x;
    vDirection.z = 0.0;
    vDirection.y = v21;
    vDirection.x = v22;
    VectorNormalize(&vDirection);
    v23 = RandomFloat(-135.0, -45.0);
    vAngles.x = 0.0;
    vAngles.y = v23;
    vAngles.z = 0.0;
    CBaseEntity::SetAbsAngles(v14, &vAngles);
    v24 = CDOTABaseAbility::GetCaster(this);
    v25 = (*(v24->_vptr_IHandleEntity + 414))(v24);
    CDOTA_BaseNPC::SetControllableByPlayer(v14, v25, 0);
    CBaseAnimating::SetSkin(v14, 0);
    CDOTA_BaseNPC::UnitEmitSound(v14, "Hero_Treant.Eyes.Cast", 0.0, 0, 0);
    CBaseEntity::PhysicsTouchTriggers(v14, 0);
    v14->m_bBlocksCreepSpawn = 0;
    vLocation = CDOTABaseAbility::GetCursorPosition(this);
    CBaseEntity::SetAbsOrigin(v14, &vLocation);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_Treant_EyesInTheForest::OnUnStolen  (line 230, @0x0000000002cf1430, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, GetUnitName, IndexToIdentity, IsValid, LookupEntity, String, ToCStr, ToDOTABaseNPC, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::OnUnStolen, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_BaseNPC::ForceKill, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "npc_dota_treant_eyes"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Treant_EyesInTheForest::OnUnStolen(CDOTA_Ability_Treant_EyesInTheForest *const this)
{
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v3; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v5; // rax
  __int64 v6; // r12
  int v7; // ebx
  CHandle<CBaseEntity> *v8; // rdx
  uint32 m_Index; // eax
  __int16 v10; // cx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  const char *m_pAsString; // rsi
  __int64 v15; // r14
  CDOTA_BaseNPC *v16; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+20h] [rbp-50h] BYREF

  CDOTABaseAbility::OnUnStolen(this);
  hEntities.m_Size = 0;
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
  v5 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v5->m_iTeamNum.m_Value, AbsOrigin, Caster, -1.0, &hEntities, 1, 32, 1088, 0, 0);
  if ( hEntities.m_Size > 0 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      while ( 1 )
      {
        v8 = &hEntities.m_Memory.m_pMemory[v6];
        m_Index = hEntities.m_Memory.m_pMemory[v6].m_Index;
        if ( m_Index + 2 > 1 )
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
              {
                m_pAsString = m_pInstance->m_iszUnitName.m_Value.u.m_pAsString;
                if ( m_pAsString != 0 && strcmp(m_pAsString, "npc_dota_treant_eyes") == 0 )
                {
                  v15 = (*(m_pInstance->_vptr_IHandleEntity + 413))(v12->m_pInstance);
                  v16 = CDOTABaseAbility::GetCaster(this);
                  if ( v15 == (*(v16->_vptr_IHandleEntity + 413))(v16) )
                    break;
                }
              }
            }
          }
        }
        ++v7;
        ++v6;
        if ( hEntities.m_Size <= v7 )
          goto LABEL_14;
      }
      CDOTA_BaseNPC::ForceKill(m_pInstance, 0);
      ++v7;
      ++v6;
    }
    while ( hEntities.m_Size > v7 );
  }
LABEL_14:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
}


// CDOTA_Ability_Treant_EyesInTheForest::CastOvergrowth  (line 249, @0x0000000002d0e7b0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Purge, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CEntityHandle::operator CEntityInstance*, __dynamic_cast, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, KeyValues::KeyValues, KeyValues::SetFloat, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex (21 total)
// callers: CDOTA_Ability_Treant_Overgrowth::OnSpellStart
// strings: "modifier_treant_overgrowth", "particles/units/heroes/hero_treant/treant_overgrowth_trails.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Treant_EyesInTheForest::CastOvergrowth(
        CDOTA_Ability_Treant_EyesInTheForest *const this,
        int radius,
        double a3,
        float duration)
{
  int v5; // eax
  CEntityInstance *v6; // rax
  const CBaseEntity *v7; // rbx
  char *v8; // r13
  char *v9; // rax
  __m128i v10; // xmm2
  char *v11; // rax
  float v12; // r12d
  CDOTA_BaseNPC *Caster; // r13
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v15; // rax
  float v16; // xmm1_4
  float v17; // xmm1_4
  __int64 v18; // r12
  int v19; // ebx
  CHandle<CBaseEntity> *v20; // rdx
  uint32 m_Index; // eax
  __int16 v22; // cx
  CEntityIdentity *v23; // rdx
  CEntityIdentity *v24; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_BaseNPC *v26; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v28; // rax
  const Vector *v29; // r15
  CDOTA_ParticleManager *v30; // rax
  const Vector *v31; // r15
  CDOTA_ParticleManager *v32; // rax
  CDOTA_ParticleManager *v33; // rax
  CDOTA_BaseNPC *v34; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *p_vTrees; // [rsp+20h] [rbp-A0h]
  __int64 v37; // [rsp+28h] [rbp-98h]
  int x; // [rsp+3Ch] [rbp-84h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+50h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v42; // [rsp+88h] [rbp-38h]

  v42 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "damage", -1, 0);
  v5 = this->vTrees.m_Size - 1;
  x = v5;
  if ( v5 >= 0 )
  {
    v37 = v5;
    p_vTrees = &this->vTrees;
    do
    {
      v6 = CEntityHandle::operator CEntityInstance *(&this->vTrees.m_Memory.m_pMemory[v37]);
      v7 = v6;
      if ( v6 != 0 )
      {
        v8 = __dynamic_cast(v6, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_TempTree, 0);
        v9 = __dynamic_cast(v7, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_MapTree, 0);
        if ( v9 != 0 )
        {
          v11 = v9 + 784;
        }
        else
        {
          if ( v8 == 0 )
            goto LABEL_20;
          v11 = v8 + 1216;
        }
        if ( v11[20] != 0 )
        {
          entities.m_Size = 0;
          *v10.m128i_i32 = radius;
          entities.m_Memory.m_pMemory = 0;
          entities.m_Memory.m_nAllocationCount = 0;
          entities.m_Memory.m_nGrowSize = 0;
          v12 = COERCE_FLOAT(_mm_cvtsi128_si32(v10));
          Caster = CDOTABaseAbility::GetCaster(this);
          AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
          v15 = CDOTABaseAbility::GetCaster(this);
          FindUnitsInRadius(v15->m_iTeamNum.m_Value, AbsOrigin, Caster, v12, &entities, 2, 3, 272, 0, 0);
          KeyValues::KeyValues(&kv, "modifier_treant_overgrowth");
          KeyValues::SetFloat(&kv, "duration", v16);
          KeyValues::SetFloat(&kv, "damage", v17);
          if ( entities.m_Size > 0 )
          {
            v18 = 0;
            v19 = 0;
            do
            {
              while ( 1 )
              {
                v20 = &entities.m_Memory.m_pMemory[v18];
                m_Index = entities.m_Memory.m_pMemory[v18].m_Index;
                if ( m_Index + 2 > 1 )
                {
                  v22 = v20->m_Index;
                  v23 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v20->m_Index) >> 9) & 0x3F];
                  if ( v23 != 0 )
                  {
                    v24 = &v23[v22 & 0x1FF];
                    if ( v24 != 0 && m_Index == v24->m_EHandle.m_Index )
                    {
                      m_pInstance = v24->m_pInstance;
                      if ( v24->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                        break;
                    }
                  }
                }
                ++v19;
                ++v18;
                if ( entities.m_Size <= v19 )
                  goto LABEL_17;
              }
              v26 = CDOTABaseAbility::GetCaster(this);
              ParticleManager = GetParticleManager();
              LODWORD(v26) = CDOTA_ParticleManager::CreateParticle(
                               ParticleManager,
                               "particles/units/heroes/hero_treant/treant_overgrowth_trails.vpcf",
                               2,
                               v26,
                               0,
                               0);
              v28 = CDOTABaseAbility::GetCaster(this);
              v29 = CBaseEntity::GetAbsOrigin(v28);
              v30 = GetParticleManager();
              CDOTA_ParticleManager::SetParticleControl(v30, v26, 0, *&v29->x, v29->z);
              v31 = CBaseEntity::GetAbsOrigin(m_pInstance);
              v32 = GetParticleManager();
              CDOTA_ParticleManager::SetParticleControl(v32, v26, 1, *&v31->x, v31->z);
              v33 = GetParticleManager();
              CDOTA_ParticleManager::ReleaseParticleIndex(v33, v26);
              v34 = CDOTABaseAbility::GetCaster(this);
              CDOTA_BaseNPC::AddNewModifier(m_pInstance, v34, this, "modifier_treant_overgrowth", &kv, 0);
              CDOTA_BaseNPC::Interrupt(m_pInstance);
              ++v19;
              ++v18;
            }
            while ( entities.m_Size > v19 );
          }
LABEL_17:
          KeyValues::~KeyValues(&kv);
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
          if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          {
            CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
            if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
          }
          goto LABEL_21;
        }
      }
LABEL_20:
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(p_vTrees, x);
LABEL_21:
      --x;
      --v37;
    }
    while ( x != -1 );
  }
}


// CDOTA_Ability_Treant_EyesInTheForest::CleanupTrees  (line 293, @0x0000000002d0e1a0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Remove, __dynamic_cast
// callers: CDOTA_Modifier_Treant_EyesInTheForest_Thinker::OnDestroy
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Treant_EyesInTheForest::CleanupTrees(CDOTA_Ability_Treant_EyesInTheForest *const this)
{
  int v2; // r15d
  __int64 v3; // rbx
  int v4; // esi
  CHandle<CBaseEntity> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityInstance *m_pInstance; // r12
  char *v11; // r14
  char *v12; // rax
  char *v13; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *p_vTrees; // [rsp+8h] [rbp-38h]

  v2 = this->vTrees.m_Size - 1;
  v3 = v2;
  p_vTrees = &this->vTrees;
  if ( v2 >= 0 )
  {
    while ( 1 )
    {
      v5 = &this->vTrees.m_Memory.m_pMemory[v3];
      m_Index = v5->m_Index;
      if ( v5->m_Index + 2 <= 1 )
        goto LABEL_3;
      v7 = v5->m_Index;
      v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
      if ( v8 == 0 )
        goto LABEL_3;
      v9 = &v8[v7 & 0x1FF];
      if ( v9 == 0 )
        goto LABEL_3;
      if ( m_Index != v9->m_EHandle.m_Index )
        goto LABEL_3;
      m_pInstance = v9->m_pInstance;
      if ( v9->m_pInstance == 0 )
        goto LABEL_3;
      v11 = __dynamic_cast(m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_TempTree, 0);
      v12 = __dynamic_cast(m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_MapTree, 0);
      if ( v12 != 0 )
      {
        v13 = v12 + 784;
      }
      else
      {
        if ( v11 == 0 )
          goto LABEL_3;
        v13 = v11 + 1216;
      }
      if ( v13[20] != 0 )
      {
        --v2;
        --v3;
        if ( v2 == -1 )
          return;
      }
      else
      {
LABEL_3:
        v4 = v2--;
        --v3;
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(p_vTrees, v4);
        if ( v2 == -1 )
          return;
      }
    }
  }
}


// CDOTA_Modifier_Treant_EyesInTheForest_Thinker::~CDOTA_Modifier_Treant_EyesInTheForest_Thinker  (line 313, @0x0000000002d275c0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Treant_EyesInTheForest_Thinker::~CDOTA_Modifier_Treant_EyesInTheForest_Thinker(
        CDOTA_Modifier_Treant_EyesInTheForest_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_46456B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Treant_EyesInTheForest_Thinker::~CDOTA_Modifier_Treant_EyesInTheForest_Thinker  (line 313, @0x0000000002d275e0, libserver.so)  // inlines: ~CDOTA_Modifier_Treant_EyesInTheForest_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Treant_EyesInTheForest_Thinker::~CDOTA_Modifier_Treant_EyesInTheForest_Thinker(
        CDOTA_Modifier_Treant_EyesInTheForest_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_46456B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Treant_EyesInTheForest_Thinker::IsHidden  (line 327, @0x0000000002d1f490, libserver.so)
bool __fastcall CDOTA_Modifier_Treant_EyesInTheForest_Thinker::IsHidden(
        CDOTA_Modifier_Treant_EyesInTheForest_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Treant_EyesInTheForest_Thinker::DeclareFunctions  (line 339, @0x0000000002cc9bd0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Treant_EyesInTheForest_Thinker::GetModifierProvidesFOWVision(CModifierParams const&)
void __fastcall CDOTA_Modifier_Treant_EyesInTheForest_Thinker::DeclareFunctions(
        CDOTA_Modifier_Treant_EyesInTheForest_Thinker *const this)
{
  this->m_Functions[158].__pfn = CDOTA_Modifier_Treant_EyesInTheForest_Thinker::GetModifierProvidesFOWVision;
  this->m_Functions[158].__delta = 0;
}


// CDOTA_Modifier_Treant_EyesInTheForest_Thinker::GetModifierProvidesFOWVision  (line 346, @0x0000000002cd8e70, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Target, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::IsInvisibleTo
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Treant_EyesInTheForest_Thinker::GetModifierProvidesFOWVision(
        CDOTA_Modifier_Treant_EyesInTheForest_Thinker *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  int m_CScriptComponent_high; // ebx
  CDOTA_BaseNPC *Parent; // rax

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[params->htarget.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index && v4->m_pInstance != 0 )
      {
        m_CScriptComponent_high = HIBYTE(v4->m_pInstance[7].m_CScriptComponent);
        Parent = CDOTA_Buff::GetParent(this);
        if ( CDOTA_BaseNPC::IsInvisibleTo(Parent, m_CScriptComponent_high) )
          return 1uLL;
        return 0x3F80000000000001uLL;
      }
    }
  }
  if ( SLOBYTE(CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value) >= 0 )
    return 0x3F80000000000001uLL;
  return 1uLL;
}


// CDOTA_Modifier_Treant_EyesInTheForest_Thinker::CheckState  (line 366, @0x0000000002ccc630, libserver.so)  // inlines: Enable
// calls: CDOTA_Buff::GetParent
void __fastcall CDOTA_Modifier_Treant_EyesInTheForest_Thinker::CheckState(
        CDOTA_Modifier_Treant_EyesInTheForest_Thinker *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x3804381uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFC7FBC7ELL;
  if ( SLOBYTE(CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value) < 0 )
  {
    buffState->m_nEnabledStateMask |= 0x200000uLL;
    buffState->m_nDisabledStateMask &= ~0x200000uLL;
  }
}


// CDOTA_Modifier_Treant_EyesInTheForest_Thinker::OnCreated  (line 389, @0x0000000002cf7a30, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetEHandle, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetSerialNumber, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, Set, Vector, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::GetPtr, KeyValues::GetInt, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleFoWProperties, CDOTA_Buff::AddParticle, CDOTA_Buff::StartIntervalThink
// strings: "vision_aoe", "tree_entindex", "particles/units/heroes/hero_treant/treant_eyesintheforest.vpcf"
void __fastcall CDOTA_Modifier_Treant_EyesInTheForest_Thinker::OnCreated(
        CDOTA_Modifier_Treant_EyesInTheForest_Thinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  int Int; // eax
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v8; // rax
  CDOTA_ParticleManager *v9; // rax
  float v10; // xmm1_4
  CEntityIdentity *v11; // rcx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *m_pEntity; // rdx
  int v14; // eax
  __int16 v15; // cx
  float flFoWRadius; // [rsp+10h] [rbp-30h]
  double v17; // [rsp+20h] [rbp-20h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->vision_aoe = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "vision_aoe", -1, 0);
  else
    this->vision_aoe = 0.0;
  this->m_Tree = KeyValues::GetPtr(pKV, "tree", 0);
  Int = KeyValues::GetInt(pKV, "tree_entindex", 0);
  if ( Int <= 0x7FFE
    && (v11 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[Int >> 9]) != 0
    && (v12 = &v11[Int & 0x1FF]) != 0
    && (v12->m_EHandle.m_Index & 0x7FFF) == Int
    && v12->m_pInstance != 0
    && (m_pEntity = v12->m_pInstance->m_pEntity) != 0 )
  {
    v14 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v15 = 0x7FFF;
    else
      v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hTree.m_Index) = v15 | this->m_hTree.m_Index & 0x8000;
    this->m_hTree.m_Index = (v14 << 15) | this->m_hTree.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hTree.m_Index = -1;
  }
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_treant/treant_eyesintheforest.vpcf",
                      1,
                      Parent,
                      0,
                      0);
  *&v17 = this->vision_aoe;
  HIDWORD(v17) = LODWORD(v17);
  v8 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v8, Parent, 1, v17, *&v17);
  flFoWRadius = this->vision_aoe;
  v9 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleFoWProperties(v9, Parent, 0, -1, flFoWRadius);
  CDOTA_Buff::AddParticle(this, Parent, 0, 0, -1, 0, 0);
  CDOTA_Buff::StartIntervalThink(this, 0.1, v10);
}


// CDOTA_Modifier_Treant_EyesInTheForest_Thinker::OnIntervalThink  (line 406, @0x0000000002cda480, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::ForceKill
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Treant_EyesInTheForest_Thinker::OnIntervalThink(
        CDOTA_Modifier_Treant_EyesInTheForest_Thinker *const this)
{
  CDOTA_Tree *m_Tree; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *Parent; // rax

  m_Tree = this->m_Tree;
  if ( m_Tree != 0 )
  {
    if ( m_Tree->m_bStanding )
      return;
LABEL_8:
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::ForceKill(Parent, 0);
    return;
  }
  m_Index = this->m_hTree.m_Index;
  if ( m_Index + 2 <= 1 )
    goto LABEL_8;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTree.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    goto LABEL_8;
  v4 = &v3[this->m_hTree.m_Index & 0x1FF];
  if ( v4 == 0 || m_Index != v4->m_EHandle.m_Index || v4->m_pInstance == 0 )
    goto LABEL_8;
}


// CDOTA_Modifier_Treant_EyesInTheForest_Thinker::OnDestroy  (line 427, @0x0000000002d0e2e0, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_Treant_EyesInTheForest::CleanupTrees
// strings: "treant_eyes_in_the_forest"
void __fastcall CDOTA_Modifier_Treant_EyesInTheForest_Thinker::OnDestroy(
        CDOTA_Modifier_Treant_EyesInTheForest_Thinker *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Ability_Treant_EyesInTheForest *AbilityByName; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  if ( Caster != 0 )
  {
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "treant_eyes_in_the_forest", 0);
    if ( AbilityByName != 0 )
      CDOTA_Ability_Treant_EyesInTheForest::CleanupTrees(AbilityByName);
  }
}


// CDOTA_Ability_Treant_NaturesGuise::~CDOTA_Ability_Treant_NaturesGuise  (line 449, @0x0000000002d2c1d0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Treant_NaturesGuise::~CDOTA_Ability_Treant_NaturesGuise(
        CDOTA_Ability_Treant_NaturesGuise *const this)
{
  this->_vptr_IHandleEntity = &off_4645A10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Treant_NaturesGuise::~CDOTA_Ability_Treant_NaturesGuise  (line 449, @0x0000000002d2c1f0, libserver.so)  // inlines: ~CDOTA_Ability_Treant_NaturesGuise
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Treant_NaturesGuise::~CDOTA_Ability_Treant_NaturesGuise(
        CDOTA_Ability_Treant_NaturesGuise *const this)
{
  this->_vptr_IHandleEntity = &off_4645A10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Treant_NaturesGuise::Schema_DynamicBinding  (line 452, @0x0000000002d1f4a0, libserver.so)
// globals: CDOTA_Ability_Treant_NaturesGuise::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Treant_NaturesGuise::Schema_DynamicBinding(
        const CDOTA_Ability_Treant_NaturesGuise *const this)
{
  return CDOTA_Ability_Treant_NaturesGuise::s_pSchemaBinding;
}


// CDOTA_Ability_Treant_NaturesGuise::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 452, @0x0000000002d1f4b0, libserver.so)
// globals: CDOTA_Ability_Treant_NaturesGuise::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Treant_NaturesGuise::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Treant_NaturesGuise::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Treant_NaturesGuise::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Treant_NaturesGuise::CEntityInstanceEntityClass::DestructInstance  (line 452, @0x0000000002d1f4c0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Treant_NaturesGuise>
void __fastcall CDOTA_Ability_Treant_NaturesGuise::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Treant_NaturesGuise::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Treant_NaturesGuise::CEntityInstanceEntityClass::FreeInstance  (line 452, @0x0000000002d1f4e0, libserver.so)
void __fastcall CDOTA_Ability_Treant_NaturesGuise::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Treant_NaturesGuise::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Treant_NaturesGuise::CEntityInstanceEntityClass::CanAllocate  (line 452, @0x0000000002d1f500, libserver.so)
bool __fastcall CDOTA_Ability_Treant_NaturesGuise::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Treant_NaturesGuise::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Treant_NaturesGuise::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 452, @0x0000000002d1f510, libserver.so)
// globals: CDOTA_Ability_Treant_NaturesGuise::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Treant_NaturesGuise::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Treant_NaturesGuise::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Treant_NaturesGuise::s_pSchemaBinding;
}


// CDOTA_Ability_Treant_NaturesGuise::CEntityInstanceEntityClass::AllocateInstance  (line 452, @0x0000000002d24e50, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Treant_NaturesGuise::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Treant_NaturesGuise::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Treant_NaturesGuise::CEntityInstanceEntityClass::ConstructInstance  (line 452, @0x0000000002d29400, libserver.so)  // inlines: CDOTA_Ability_Treant_NaturesGuise, Construct<CDOTA_Ability_Treant_NaturesGuise>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Treant_NaturesGuise::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Treant_NaturesGuise::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4645A10;
  }
  return p;
}


// CDOTA_Ability_Treant_NaturesGuise::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 452, @0x0000000002d346d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Treant_NaturesGuise::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Treant_NaturesGuise::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Treant_NaturesGuise::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 452, @0x0000000002d346f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Treant_NaturesGuise::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Treant_NaturesGuise::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Treant_NaturesGuise::GetEntityClassInternal  (line 452, @0x0000000002d49af0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "CDOTA_Ability_Treant_NaturesGuise"
// globals: `guard variable for'CDOTA_Ability_Treant_NaturesGuise::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_NaturesGuiseClass, CDOTA_Ability_Treant_NaturesGuise::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_NaturesGuiseClass, __dso_handle, CDOTA_Ability_Treant_NaturesGuise::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Treant_NaturesGuise::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_NaturesGuiseClassInfo, CDOTA_Ability_Treant_NaturesGuise::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_NaturesGuiseClassInfo
CEntityClass *__cdecl CDOTA_Ability_Treant_NaturesGuise::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Treant_NaturesGuise::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_NaturesGuiseClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Treant_NaturesGuise::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_NaturesGuiseClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Treant_NaturesGuise::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_NaturesGuiseClass);
    CDOTA_Ability_Treant_NaturesGuise::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_NaturesGuiseClass._vptr_CEntityClass = off_4645990;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Treant_NaturesGuise::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_NaturesGuiseClass);
    __cxa_atexit(
      CDOTA_Ability_Treant_NaturesGuise::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Treant_NaturesGuise::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_NaturesGuiseClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Treant_NaturesGuiseClass != 0 )
    return &CDOTA_Ability_Treant_NaturesGuise::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_NaturesGuiseClass;
  if ( `guard variable for'CDOTA_Ability_Treant_NaturesGuise::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_NaturesGuiseClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Treant_NaturesGuise::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_NaturesGuiseClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Treant_NaturesGuise::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_NaturesGuiseClassInfo,
      "CDOTA_Ability_Treant_NaturesGuise",
      "treant_natures_guise",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Treant_NaturesGuise::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_NaturesGuiseClassInfo);
  }
  CDOTA_Ability_Treant_NaturesGuise::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_NaturesGuiseClass.m_pClassInfo = &CDOTA_Ability_Treant_NaturesGuise::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_NaturesGuiseClassInfo;
  CDOTA_Ability_Treant_NaturesGuise::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_NaturesGuiseClass.m_pBaseClassInfo = CDOTA_Ability_Treant_NaturesGuise::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_NaturesGuiseClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Treant_NaturesGuiseClass = &CDOTA_Ability_Treant_NaturesGuise::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_NaturesGuiseClass;
  CDOTA_Ability_Treant_NaturesGuise::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_NaturesGuiseClassInfo.m_pClass = &CDOTA_Ability_Treant_NaturesGuise::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_NaturesGuiseClass;
  CDOTA_Ability_Treant_NaturesGuise::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_NaturesGuiseClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Treant_NaturesGuiseClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Treant_NaturesGuise::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_NaturesGuiseClass;
}


// CDOTA_Ability_Treant_NaturesGuise::GetIntrinsicModifierName  (line 453, @0x0000000002d1f520, libserver.so)
// strings: "modifier_treant_natures_guise"
const char *__fastcall CDOTA_Ability_Treant_NaturesGuise::GetIntrinsicModifierName(
        CDOTA_Ability_Treant_NaturesGuise *const this)
{
  return "modifier_treant_natures_guise";
}


// CDOTA_Ability_Treant_NaturesGuise::HasInvisibility  (line 454, @0x0000000002d1f530, libserver.so)
bool __fastcall CDOTA_Ability_Treant_NaturesGuise::HasInvisibility(CDOTA_Ability_Treant_NaturesGuise *const this)
{
  return 1;
}


// CDOTA_Modifier_Treant_NaturesGuise::~CDOTA_Modifier_Treant_NaturesGuise  (line 465, @0x0000000002d27570, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Treant_NaturesGuise::~CDOTA_Modifier_Treant_NaturesGuise(
        CDOTA_Modifier_Treant_NaturesGuise *const this)
{
  this->_vptr_CDOTA_Buff = &off_46464D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Treant_NaturesGuise::~CDOTA_Modifier_Treant_NaturesGuise  (line 465, @0x0000000002d27590, libserver.so)  // inlines: ~CDOTA_Modifier_Treant_NaturesGuise
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Treant_NaturesGuise::~CDOTA_Modifier_Treant_NaturesGuise(
        CDOTA_Modifier_Treant_NaturesGuise *const this)
{
  this->_vptr_CDOTA_Buff = &off_46464D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Treant_NaturesGuise::IsHidden  (line 470, @0x0000000002d1f540, libserver.so)
bool __fastcall CDOTA_Modifier_Treant_NaturesGuise::IsHidden(CDOTA_Modifier_Treant_NaturesGuise *const this)
{
  return 1;
}


// CDOTA_Modifier_Treant_NaturesGuise::DeclareFunctions  (line 492, @0x0000000002cc9bf0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Treant_NaturesGuise::DeclareFunctions(CDOTA_Modifier_Treant_NaturesGuise *const this)
{
  this->m_Functions[120].__pfn = (&stru_10 + 697);
  this->m_Functions[120].__delta = 0;
}


// CDOTA_Modifier_Treant_NaturesGuise::OnAttack  (line 499, @0x0000000002cd8560, libserver.so)  // inlines: Attacker, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, Invalidate, IsValid, LookupEntity, NetworkStateChanged, Set, operator CBaseEntity*, operator CEntityInstance*, operator=<float>
// calls: CDOTA_Buff::GetParent
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Treant_NaturesGuise::OnAttack(
        CDOTA_Modifier_Treant_NaturesGuise *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx

  m_pInstance = 0;
  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[params->hattacker.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        m_pInstance = v6->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetParent(this) == m_pInstance && this->m_InvisTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_InvisTimer._vptr_CountdownTimer + 2))(&this->m_InvisTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL, -1.0);
    this->m_InvisTimer.m_timestamp.m_Value = -1.0;
  }
  return 1uLL;
}


// CDOTA_Modifier_Treant_NaturesGuise::OnCreated  (line 511, @0x0000000002d09d90, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "grace_time"
void __fastcall CDOTA_Modifier_Treant_NaturesGuise::OnCreated(
        CDOTA_Modifier_Treant_NaturesGuise *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float v5; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->radius = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->grace_time = 0.0;
    goto LABEL_4;
  }
  this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->grace_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "grace_time", -1, 0);
LABEL_4:
  CDOTA_Buff::StartIntervalThink(this, 0.0099999998, v5);
}


// CDOTA_Modifier_Treant_NaturesGuise::OnIntervalThink  (line 524, @0x0000000002cf36f0, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, Get, GetAttackTarget, GetInstance, Invalidate, IsElapsed, NetworkStateChanged, Set, SetBool, Start, operator=<float>, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::FindModifierByName, CGridNav::IsNearbyTree, CountdownTimer::Now, CDOTA_Buff::GetAbility, CDOTABaseAbility::EndCooldown, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::GetOpposingTeamNumber (32 total)
// strings: "modifier_treant_natures_guise_invis", "particles/units/heroes/hero_treant/treant_naturesguise_cast.vpcf", "attach_attack1", "attach_hitloc", "cancelattack", "Hero_Treant.NaturesGuise.On"
void __fastcall CDOTA_Modifier_Treant_NaturesGuise::OnIntervalThink(CDOTA_Modifier_Treant_NaturesGuise *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  __int64 v4; // rdx
  CDOTA_BaseNPC *v5; // rax
  CDOTA_Buff *ModifierByName; // r12
  float v7; // xmm3_4
  CDOTA_BaseNPC *v8; // rax
  double v9; // xmm0_8
  double v10; // xmm1_8
  double v11; // xmm2_8
  double v12; // xmm3_8
  float v13; // xmm0_4
  float m_Value; // xmm1_4
  CDOTABaseAbility *v15; // rax
  CDOTA_BaseNPC *Caster; // rax
  int OpposingTeamNumber; // eax
  CTeam *GlobalTeam; // rax
  CTeam *v19; // rax
  CDOTA_BaseNPC *v20; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  int v22; // r14d
  CDOTA_BaseNPC *v23; // r15
  CDOTA_ParticleManager *v24; // rax
  CDOTA_BaseNPC *v25; // r15
  CDOTA_ParticleManager *v26; // rax
  CDOTA_BaseNPC *v27; // r15
  CDOTA_ParticleManager *v28; // rax
  CDOTA_ParticleManager *v29; // rax
  CDOTABaseAbility *v30; // r15
  CDOTA_BaseNPC *v31; // r14
  CDOTA_BaseNPC *v32; // rax
  CDOTA_BaseNPC *v33; // rax
  CDOTA_BaseNPC *v34; // rax
  CountdownTimer *p_m_RevealTimer; // rdi
  CDOTABaseAbility *v36; // rax
  CDOTABaseAbility *Ability; // rax
  float v38; // xmm1_4
  CDOTABaseAbility *v39; // rax
  float v40; // [rsp+8h] [rbp-1B8h]
  float grace_time; // [rsp+Ch] [rbp-1B4h]
  float fade_time; // [rsp+1Ch] [rbp-1A4h] BYREF
  Vector vPosition; // [rsp+20h] [rbp-1A0h]
  KeyValues kv; // [rsp+30h] [rbp-190h] BYREF
  CReliableBroadcastRecipientFilter filter; // [rsp+50h] [rbp-170h] BYREF
  unsigned __int64 v46; // [rsp+188h] [rbp-38h]

  v46 = __readfsqword(0x28u);
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v4 = *&AbsOrigin->x;
  *&AbsOrigin = AbsOrigin->z;
  *&vPosition.x = v4;
  LODWORD(vPosition.z) = AbsOrigin;
  v5 = CDOTA_Buff::GetParent(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(v5, "modifier_treant_natures_guise_invis", 0);
  if ( CGridNav::IsNearbyTree(&g_GridNav, 0, vPosition, this->radius, v7) != 0 )
  {
    v8 = CDOTA_Buff::GetParent(this);
    if ( (*(v8->_vptr_IHandleEntity + 408))(v8) != 0 )
    {
      if ( ModifierByName != 0 )
      {
        if ( this->m_RevealTimer.m_timestamp.m_Value != -1.0 )
        {
          (*(this->m_RevealTimer._vptr_CountdownTimer + 2))(&this->m_RevealTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL, -1.0);
          this->m_RevealTimer.m_timestamp.m_Value = -1.0;
        }
      }
      else if ( this->m_InvisTimer.m_timestamp.m_Value <= 0.0 )
      {
        Ability = CDOTA_Buff::GetAbility(this);
        DotaRetrieveAbilityValue<float>(Ability, &fade_time, "fade_time");
        CountdownTimer::Start(&this->m_InvisTimer, fade_time, v38);
        v39 = CDOTA_Buff::GetAbility(this);
        (*(v39->_vptr_IHandleEntity + 241))(v39, fade_time);
      }
      else
      {
        v13 = CountdownTimer::Now(&this->m_InvisTimer);
        m_Value = this->m_InvisTimer.m_timestamp.m_Value;
        if ( v13 >= m_Value )
        {
          if ( m_Value != -1.0 )
          {
            (*(this->m_InvisTimer._vptr_CountdownTimer + 2))(&this->m_InvisTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            this->m_InvisTimer.m_timestamp.m_Value = -1.0;
          }
          v15 = CDOTA_Buff::GetAbility(this);
          CDOTABaseAbility::EndCooldown(v15);
          CRecipientFilter::CRecipientFilter(&filter);
          filter._vptr_IRecipientFilter = &off_3FB63F0;
          CRecipientFilter::AddAllPlayers(&filter);
          filter._vptr_IRecipientFilter = &off_3FCB130;
          CRecipientFilter::MakeReliable(&filter);
          Caster = CDOTA_Buff::GetCaster(this);
          OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(Caster);
          GlobalTeam = GetGlobalTeam(OpposingTeamNumber);
          CRecipientFilter::RemoveRecipientsByTeam(&filter, GlobalTeam);
          v19 = GetGlobalTeam(1);
          CRecipientFilter::AddRecipientsByTeam(&filter, v19);
          v20 = CDOTA_Buff::GetCaster(this);
          ParticleManager = GetParticleManager();
          v22 = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/units/heroes/hero_treant/treant_naturesguise_cast.vpcf",
                  2,
                  v20,
                  &filter,
                  0);
          v23 = CDOTA_Buff::GetCaster(this);
          v24 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v24, v22, 0, v23, 5, "attach_attack1", vec3_invalid, 1);
          v25 = CDOTA_Buff::GetParent(this);
          v26 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v26, v22, 1, v25, 5, "attach_hitloc", vec3_invalid, 1);
          v27 = CDOTA_Buff::GetParent(this);
          v28 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v28, v22, 2, v27, 1, 0, vec3_invalid, 1);
          v29 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v29, v22);
          KeyValues::KeyValues(&kv, "modifier_treant_natures_guise_invis");
          KeyValues::SetInt(&kv, "cancelattack", 0);
          v30 = CDOTA_Buff::GetAbility(this);
          v31 = CDOTA_Buff::GetCaster(this);
          v32 = CDOTA_Buff::GetParent(this);
          CDOTA_BaseNPC::AddNewModifier(v32, v31, v30, "modifier_treant_natures_guise_invis", &kv, 0);
          v33 = CDOTA_Buff::GetParent(this);
          DOTA_EmitSound(8, "Hero_Treant.NaturesGuise.On", v33);
          KeyValues::~KeyValues(&kv);
          filter._vptr_IRecipientFilter = &off_3FB63F0;
          CRecipientFilter::~CRecipientFilter(&filter);
        }
      }
      return;
    }
  }
  if ( ModifierByName == 0 )
  {
    p_m_RevealTimer = &this->m_RevealTimer;
    goto LABEL_21;
  }
  if ( this->m_RevealTimer.m_timestamp.m_Value > 0.0 )
  {
    if ( CountdownTimer::Now(&this->m_RevealTimer) < this->m_RevealTimer.m_timestamp.m_Value )
      return;
    v34 = CDOTA_Buff::GetParent(this);
    if ( CEntityHandle::operator CEntityInstance *(&v34->m_hAttackTarget) != 0 )
      return;
    CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
    p_m_RevealTimer = &this->m_RevealTimer;
LABEL_21:
    CountdownTimer::Invalidate(p_m_RevealTimer);
    CountdownTimer::Invalidate(&this->m_InvisTimer);
    v36 = CDOTA_Buff::GetAbility(this);
    CDOTABaseAbility::EndCooldown(v36);
    return;
  }
  grace_time = this->grace_time;
  *&v9 = CountdownTimer::Now(&this->m_RevealTimer) + grace_time;
  if ( *&v9 != this->m_RevealTimer.m_timestamp.m_Value )
  {
    v40 = *&v9;
    (*(this->m_RevealTimer._vptr_CountdownTimer + 2))(&this->m_RevealTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&v9 = LODWORD(v40);
    this->m_RevealTimer.m_timestamp.m_Value = v40;
  }
  if ( grace_time != this->m_RevealTimer.m_duration.m_Value )
  {
    (*(this->m_RevealTimer._vptr_CountdownTimer + 2))(
      &this->m_RevealTimer,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v9,
      v10,
      v11,
      v12,
      grace_time);
    this->m_RevealTimer.m_duration.m_Value = grace_time;
  }
}


// CDOTA_Modifier_Treant_NaturesGuise_Invis::~CDOTA_Modifier_Treant_NaturesGuise_Invis  (line 600, @0x0000000002d27390, libserver.so)  // inlines: ~CDOTA_Modifier_Invisible
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Treant_NaturesGuise_Invis::~CDOTA_Modifier_Treant_NaturesGuise_Invis(
        CDOTA_Modifier_Treant_NaturesGuise_Invis *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Treant_NaturesGuise_Invis::~CDOTA_Modifier_Treant_NaturesGuise_Invis  (line 600, @0x0000000002d273b0, libserver.so)  // inlines: ~CDOTA_Modifier_Invisible, ~CDOTA_Modifier_Treant_NaturesGuise_Invis
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Treant_NaturesGuise_Invis::~CDOTA_Modifier_Treant_NaturesGuise_Invis(
        CDOTA_Modifier_Treant_NaturesGuise_Invis *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Treant_NaturesGuise_Invis::IsHidden  (line 605, @0x0000000002d1f550, libserver.so)
bool __fastcall CDOTA_Modifier_Treant_NaturesGuise_Invis::IsHidden(
        CDOTA_Modifier_Treant_NaturesGuise_Invis *const this)
{
  return 1;
}


// CDOTA_Modifier_Treant_NaturesGuise_Invis::OnCreated  (line 626, @0x0000000002d09700, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Modifier_Invisible::OnCreated, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_move_speed"
void __fastcall CDOTA_Modifier_Treant_NaturesGuise_Invis::OnCreated(
        CDOTA_Modifier_Treant_NaturesGuise_Invis *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  CDOTA_Modifier_Invisible::OnCreated(this, pKV);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_move_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_move_speed", -1, 0);
  else
    this->bonus_move_speed = 0;
}


// CDOTA_Modifier_Treant_NaturesGuise_Invis::OnDestroy  (line 633, @0x0000000002ccd010, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::StopSound, DOTA_EmitSound
// strings: "Hero_Treant.NaturesGuise.On", "Hero_Treant.NaturesGuise.Off"
void __fastcall CDOTA_Modifier_Treant_NaturesGuise_Invis::OnDestroy(
        CDOTA_Modifier_Treant_NaturesGuise_Invis *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(Parent, "Hero_Treant.NaturesGuise.On");
  v3 = CDOTA_Buff::GetParent(this);
  DOTA_EmitSound(2, "Hero_Treant.NaturesGuise.Off", v3);
}


// CDOTA_Modifier_Treant_NaturesGuise_Invis::DeclareFunctions  (line 643, @0x0000000002cc9c10, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Treant_NaturesGuise_Invis::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_Treant_NaturesGuise_Invis::OnAttacked(CModifierParams const&)
void __fastcall CDOTA_Modifier_Treant_NaturesGuise_Invis::DeclareFunctions(
        CDOTA_Modifier_Treant_NaturesGuise_Invis *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Treant_NaturesGuise_Invis::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[128].__pfn = (&stru_10 + 705);
  this->m_Functions[128].__delta = 0;
  this->m_Functions[120].__pfn = (&stru_10 + 713);
  this->m_Functions[120].__delta = 0;
  this->m_Functions[137].__pfn = CDOTA_Modifier_Treant_NaturesGuise_Invis::OnAttacked;
  this->m_Functions[137].__delta = 0;
  this->m_Functions[9].__pfn = (&stru_10 + 697);
  this->m_Functions[9].__delta = 0;
  this->m_Functions[130].__pfn = (&stru_10 + 721);
  this->m_Functions[130].__delta = 0;
}


// CDOTA_Modifier_Treant_NaturesGuise_Invis::OnAbilityExecuted  (line 654, @0x0000000002cc9ca0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Treant_NaturesGuise_Invis::OnAbilityExecuted(
        CDOTA_Modifier_Treant_NaturesGuise_Invis *const this,
        const CModifierParams *const params)
{
  return 1uLL;
}


// CDOTA_Modifier_Treant_NaturesGuise_Invis::GetModifierMoveSpeedBonus_Percentage  (line 660, @0x0000000002cc9cb0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Treant_NaturesGuise_Invis::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Treant_NaturesGuise_Invis *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_move_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Treant_NaturesGuise_Invis::OnAttack  (line 667, @0x0000000002cc9cd0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Treant_NaturesGuise_Invis::OnAttack(
        CDOTA_Modifier_Treant_NaturesGuise_Invis *const this,
        const CModifierParams *const params)
{
  return 1uLL;
}


// CDOTA_Modifier_Treant_NaturesGuise_Invis::CheckState  (line 675, @0x0000000002cd07d0, libserver.so)  // inlines: Enable
// calls: CDOTA_Modifier_Invisible::CheckState
void __fastcall CDOTA_Modifier_Treant_NaturesGuise_Invis::CheckState(
        CDOTA_Modifier_Treant_NaturesGuise_Invis *const this,
        CDOTABuffState *const buffState)
{
  char v4; // al
  uint64 m_nEnabledStateMask; // rdx
  bool v6; // zf
  uint64 m_nDisabledStateMask; // rax

  CDOTA_Modifier_Invisible::CheckState(this, buffState);
  v4 = (*(this->_vptr_CDOTA_Buff + 93))(this);
  m_nEnabledStateMask = buffState->m_nEnabledStateMask;
  v6 = v4 == 0;
  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  if ( !v6 )
  {
    m_nDisabledStateMask &= ~0x2000000uLL;
    m_nEnabledStateMask |= 0x2000000uLL;
  }
  buffState->m_nEnabledStateMask = m_nEnabledStateMask | 0x10000;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFFEFFFFLL;
}


// CDOTA_Modifier_Treant_NaturesGuise_Invis::OnAttacked  (line 689, @0x0000000002cf7f30, libserver.so)  // inlines: AttackerNPC, DotaRetrieveAbilityValue<float>, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, InState, IndexToIdentity, IsInvulnerable, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_Buff::GetParent, CDOTA_Buff::Destroy, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex (14 total)
// strings: "bash_duration", "modifier_bashed", "DOTA_Item.SkullBasher", "particles/generic_gameplay/generic_minibash.vpcf"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Treant_NaturesGuise_Invis::OnAttacked(
        CDOTA_Modifier_Treant_NaturesGuise_Invis *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // ecx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CEntityInstance *v12; // rbx
  int m_Id; // eax
  CDOTABaseAbility *Ability; // rdi
  float v15; // xmm1_4
  CDOTABaseAbility *v16; // r14
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v18; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v21; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v23; // [rsp+28h] [rbp-28h]

  v23 = __readfsqword(0x28u);
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
          v9 = params->htarget.m_Index;
          if ( v9 + 2 > 1 )
          {
            v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
            if ( v10 != 0 )
            {
              v11 = &v10[params->htarget.m_Index & 0x1FF];
              if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
              {
                v12 = v11->m_pInstance;
                if ( v11->m_pInstance != 0
                  && BYTE3(v12[7]._vptr_IHandleEntity) != 0
                  && LOBYTE(v12[71]._vptr_IHandleEntity) == 0
                  && (BYTE1(v12[58]._vptr_IHandleEntity) & 1) == 0 )
                {
                  m_Id = v12[43].m_iszPrivateVScripts.u.m_Id;
                  if ( (m_Id & 0x10) == 0 && (m_Id & 0x193) != 0 && !CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value )
                  {
                    Ability = CDOTA_Buff::GetAbility(this);
                    if ( Ability != 0 )
                      CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "bash_duration", -1, 0);
                    KeyValues::KeyValues(&kv, "modifier_bashed");
                    KeyValues::SetFloat(&kv, "duration", v15);
                    v16 = CDOTA_Buff::GetAbility(this);
                    Parent = CDOTA_Buff::GetParent(this);
                    CDOTA_BaseNPC::AddNewModifier(v12, Parent, v16, "modifier_bashed", &kv, 0);
                    CDOTA_BaseNPC::UnitEmitSound(v12, "DOTA_Item.SkullBasher", 0.0, 0, 0);
                    v18 = CDOTA_Buff::GetParent(this);
                    ParticleManager = GetParticleManager();
                    Particle = CDOTA_ParticleManager::CreateParticle(
                                 ParticleManager,
                                 "particles/generic_gameplay/generic_minibash.vpcf",
                                 7,
                                 v12,
                                 0,
                                 v18);
                    v21 = GetParticleManager();
                    CDOTA_ParticleManager::ReleaseParticleIndex(v21, Particle);
                    KeyValues::~KeyValues(&kv);
                  }
                }
              }
            }
          }
          CDOTA_Buff::Destroy(this, 0, 0, 0);
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Ability_Treant_LeechSeed::~CDOTA_Ability_Treant_LeechSeed  (line 721, @0x0000000002d2c220, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Treant_LeechSeed::~CDOTA_Ability_Treant_LeechSeed(
        CDOTA_Ability_Treant_LeechSeed *const this)
{
  this->_vptr_IHandleEntity = &off_4646B70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Treant_LeechSeed::~CDOTA_Ability_Treant_LeechSeed  (line 721, @0x0000000002d2c240, libserver.so)  // inlines: ~CDOTA_Ability_Treant_LeechSeed
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Treant_LeechSeed::~CDOTA_Ability_Treant_LeechSeed(
        CDOTA_Ability_Treant_LeechSeed *const this)
{
  this->_vptr_IHandleEntity = &off_4646B70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Treant_LeechSeed::Schema_DynamicBinding  (line 724, @0x0000000002d1f560, libserver.so)
// globals: CDOTA_Ability_Treant_LeechSeed::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Treant_LeechSeed::Schema_DynamicBinding(
        const CDOTA_Ability_Treant_LeechSeed *const this)
{
  return CDOTA_Ability_Treant_LeechSeed::s_pSchemaBinding;
}


// CDOTA_Ability_Treant_LeechSeed::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 724, @0x0000000002d1f570, libserver.so)
// globals: CDOTA_Ability_Treant_LeechSeed::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Treant_LeechSeed::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Treant_LeechSeed::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Treant_LeechSeed::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Treant_LeechSeed::CEntityInstanceEntityClass::DestructInstance  (line 724, @0x0000000002d1f580, libserver.so)  // inlines: Destruct<CDOTA_Ability_Treant_LeechSeed>
void __fastcall CDOTA_Ability_Treant_LeechSeed::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Treant_LeechSeed::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Treant_LeechSeed::CEntityInstanceEntityClass::FreeInstance  (line 724, @0x0000000002d1f5a0, libserver.so)
void __fastcall CDOTA_Ability_Treant_LeechSeed::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Treant_LeechSeed::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Treant_LeechSeed::CEntityInstanceEntityClass::CanAllocate  (line 724, @0x0000000002d1f5c0, libserver.so)
bool __fastcall CDOTA_Ability_Treant_LeechSeed::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Treant_LeechSeed::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Treant_LeechSeed::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 724, @0x0000000002d1f5d0, libserver.so)
// globals: CDOTA_Ability_Treant_LeechSeed::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Treant_LeechSeed::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Treant_LeechSeed::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Treant_LeechSeed::s_pSchemaBinding;
}


// CDOTA_Ability_Treant_LeechSeed::CEntityInstanceEntityClass::AllocateInstance  (line 724, @0x0000000002d24e90, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Treant_LeechSeed::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Treant_LeechSeed::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Treant_LeechSeed::CEntityInstanceEntityClass::ConstructInstance  (line 724, @0x0000000002d29430, libserver.so)  // inlines: CDOTA_Ability_Treant_LeechSeed, Construct<CDOTA_Ability_Treant_LeechSeed>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Treant_LeechSeed::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Treant_LeechSeed::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4646B70;
  }
  return p;
}


// CDOTA_Ability_Treant_LeechSeed::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 724, @0x0000000002d34720, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Treant_LeechSeed::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Treant_LeechSeed::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Treant_LeechSeed::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 724, @0x0000000002d34740, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Treant_LeechSeed::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Treant_LeechSeed::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Treant_LeechSeed::GetEntityClassInternal  (line 724, @0x0000000002d49c40, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "CDOTA_Ability_Treant_LeechSeed"
// globals: `guard variable for'CDOTA_Ability_Treant_LeechSeed::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_LeechSeedClass, CDOTA_Ability_Treant_LeechSeed::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_LeechSeedClass, __dso_handle, CDOTA_Ability_Treant_LeechSeed::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Treant_LeechSeed::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_LeechSeedClassInfo, CDOTA_Ability_Treant_LeechSeed::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_LeechSeedClassInfo
CEntityClass *__cdecl CDOTA_Ability_Treant_LeechSeed::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Treant_LeechSeed::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_LeechSeedClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Treant_LeechSeed::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_LeechSeedClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Treant_LeechSeed::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_LeechSeedClass);
    CDOTA_Ability_Treant_LeechSeed::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_LeechSeedClass._vptr_CEntityClass = off_4646AF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Treant_LeechSeed::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_LeechSeedClass);
    __cxa_atexit(
      CDOTA_Ability_Treant_LeechSeed::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Treant_LeechSeed::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_LeechSeedClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Treant_LeechSeedClass != 0 )
    return &CDOTA_Ability_Treant_LeechSeed::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_LeechSeedClass;
  if ( `guard variable for'CDOTA_Ability_Treant_LeechSeed::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_LeechSeedClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Treant_LeechSeed::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_LeechSeedClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Treant_LeechSeed::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_LeechSeedClassInfo,
      "CDOTA_Ability_Treant_LeechSeed",
      "treant_leech_seed",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Treant_LeechSeed::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_LeechSeedClassInfo);
  }
  CDOTA_Ability_Treant_LeechSeed::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_LeechSeedClass.m_pClassInfo = &CDOTA_Ability_Treant_LeechSeed::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_LeechSeedClassInfo;
  CDOTA_Ability_Treant_LeechSeed::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_LeechSeedClass.m_pBaseClassInfo = CDOTA_Ability_Treant_LeechSeed::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_LeechSeedClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Treant_LeechSeedClass = &CDOTA_Ability_Treant_LeechSeed::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_LeechSeedClass;
  CDOTA_Ability_Treant_LeechSeed::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_LeechSeedClassInfo.m_pClass = &CDOTA_Ability_Treant_LeechSeed::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_LeechSeedClass;
  CDOTA_Ability_Treant_LeechSeed::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_LeechSeedClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Treant_LeechSeedClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Treant_LeechSeed::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_LeechSeedClass;
}


// CDOTA_Ability_Treant_LeechSeed::OnSpellStart  (line 737, @0x0000000002cf4b30, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex (15 total)
// strings: "modifier_treant_leech_seed", "Hero_Treant.LeechSeed.Cast", "Hero_Treant.LeechSeed.Target", "particles/units/heroes/hero_treant/treant_leech_seed.vpcf", "attach_attack1", "attach_hitloc"
void __fastcall CDOTA_Ability_Treant_LeechSeed::OnSpellStart(CDOTA_Ability_Treant_LeechSeed *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  CDOTA_BaseNPC *v10; // r15
  CDOTA_ParticleManager *v11; // rax
  CDOTA_BaseNPC *v12; // r15
  CDOTA_ParticleManager *v13; // rax
  const CBaseAnimating *v14; // rbx
  CDOTA_ParticleManager *v15; // rax
  CDOTA_ParticleManager *v16; // rax
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && (BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 2) == 0
    && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_treant_leech_seed");
    KeyValues::SetFloat(&kv, "duration", v4);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_treant_leech_seed", &kv, 0);
    v6 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(8, "Hero_Treant.LeechSeed.Cast", v6);
    DOTA_EmitSound(8, "Hero_Treant.LeechSeed.Target", v3);
    v7 = CDOTABaseAbility::GetCaster(this);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_treant/treant_leech_seed.vpcf",
                 2,
                 v7,
                 0,
                 0);
    v10 = CDOTABaseAbility::GetCaster(this);
    v11 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v11, Particle, 0, v10, 5, "attach_attack1", vec3_invalid, 1);
    v12 = CDOTABaseAbility::GetCaster(this);
    v13 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v13, Particle, 2, v12, 0, 0, vec3_invalid, 1);
    v14 = CDOTABaseAbility::GetCursorTarget(this);
    v15 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v15, Particle, 1, v14, 5, "attach_hitloc", vec3_invalid, 1);
    v16 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v16, Particle);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_Treant_LeechSeed::OnProjectileHit  (line 765, @0x0000000002cfdbd0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::Heal
// strings: "leech_damage"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Treant_LeechSeed::OnProjectileHit(
        CDOTA_Ability_Treant_LeechSeed *const this,
        _DWORD *hTarget,
        const Vector *const vLocation)
{
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  int LevelSpecialValue; // eax

  if ( (*hTarget + 2) <= 1 )
    return 1;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
  if ( v4 == 0 )
    return 1;
  v5 = &v4[*hTarget & 0x1FF];
  if ( v5 == 0 )
    return 1;
  if ( *hTarget != v5->m_EHandle.m_Index )
    return 1;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC )
    return 1;
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "leech_damage", -1, 0);
  CDOTA_BaseNPC::Heal(m_pInstance, LevelSpecialValue, this, 0, 1);
  return 1;
}


// CDOTA_Ability_Treant_LeechSeed::GetAbilityDamageToTargetOverInterval  (line 783, @0x0000000002d04190, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "leech_damage"
__int64 __fastcall CDOTA_Ability_Treant_LeechSeed::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Treant_LeechSeed *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  float fInstances; // [rsp+0h] [rbp-1Ch]
  float fInstancesa; // [rsp+0h] [rbp-1Ch]
  float fInstancesb; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    fInstances = fminf(fInterval, CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0));
    fInstancesa = fInstances / CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "damage_interval", -1, 0);
    fInstancesb = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "leech_damage", -1, 0) * fInstancesa;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fInstancesb);
  }
  return result;
}


// CDOTA_Ability_Treant_LeechSeed::GetSlowDuration  (line 796, @0x0000000002cf6740, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Treant_LeechSeed::GetSlowDuration(CDOTA_Ability_Treant_LeechSeed *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
}


// CDOTA_Modifier_Treant_LeechSeed::~CDOTA_Modifier_Treant_LeechSeed  (line 805, @0x0000000002d27340, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Treant_LeechSeed::~CDOTA_Modifier_Treant_LeechSeed(
        CDOTA_Modifier_Treant_LeechSeed *const this)
{
  this->_vptr_CDOTA_Buff = &off_4647630;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Treant_LeechSeed::~CDOTA_Modifier_Treant_LeechSeed  (line 805, @0x0000000002d27360, libserver.so)  // inlines: ~CDOTA_Modifier_Treant_LeechSeed
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Treant_LeechSeed::~CDOTA_Modifier_Treant_LeechSeed(
        CDOTA_Modifier_Treant_LeechSeed *const this)
{
  this->_vptr_CDOTA_Buff = &off_4647630;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Treant_LeechSeed::RemoveOnDeath  (line 814, @0x0000000002d1f5e0, libserver.so)
bool __fastcall CDOTA_Modifier_Treant_LeechSeed::RemoveOnDeath(CDOTA_Modifier_Treant_LeechSeed *const this)
{
  return 0;
}


// CDOTA_Modifier_Treant_LeechSeed::OnCreated  (line 830, @0x0000000002d0c630, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
// strings: "leech_damage"
void __fastcall CDOTA_Modifier_Treant_LeechSeed::OnCreated(CDOTA_Modifier_Treant_LeechSeed *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  float v8; // xmm0_4
  float v9; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->damage_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "damage_interval", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->damage_interval = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->leech_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "leech_damage", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_10;
    }
  }
  this->leech_damage = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->movement_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "movement_slow", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
LABEL_11:
    this->radius = 0;
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
LABEL_12:
    this->projectile_speed = 0;
    goto LABEL_7;
  }
LABEL_10:
  this->movement_slow = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_11;
LABEL_5:
  this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "radius", -1, 0);
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 == 0 )
    goto LABEL_12;
LABEL_6:
  this->projectile_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "projectile_speed", -1, 0);
LABEL_7:
  (*(this->_vptr_CDOTA_Buff + 56))(this);
  v8 = this->damage_interval + 0.01;
  CDOTA_Buff::StartIntervalThink(this, v8, v9);
}


// CDOTA_Modifier_Treant_LeechSeed::DeclareFunctions  (line 843, @0x0000000002cc9ce0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Treant_LeechSeed::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Treant_LeechSeed::DeclareFunctions(CDOTA_Modifier_Treant_LeechSeed *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Treant_LeechSeed::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Treant_LeechSeed::OnIntervalThink  (line 850, @0x0000000002cf1620, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Color, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, VectorNormalize2D, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator bool, operator-, operator=, operator[], sTrackingProjectileCreateInfo, ~CUtlVector
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSound, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_ProjectileManager::CreateTrackingProjectile (18 total)
// strings: "particles/units/heroes/hero_treant/treant_leech_seed_damage_pulse.vpcf", "attach_hitloc", "Hero_Treant.LeechSeed.Tick", "particles/units/heroes/hero_treant/treant_leech_seed_projectile.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Treant_LeechSeed::OnIntervalThink(CDOTA_Modifier_Treant_LeechSeed *const this)
{
  CDOTABaseAbility *Ability; // r12
  CDOTA_BaseNPC *Parent; // rbx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v5; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v7; // r13
  CDOTA_ParticleManager *v8; // rax
  __int64 v9; // r12
  CDOTA_BaseNPC *v10; // r13
  CDOTA_ParticleManager *v11; // rax
  CDOTA_ParticleManager *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  __m128i v15; // xmm4
  CEntityIdentity *m_pEntity; // rdx
  __int16 v17; // cx
  float v18; // r13d
  CDOTA_BaseNPC *v19; // r12
  CDOTA_BaseNPC *v20; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v22; // rax
  __int64 v23; // r12
  int v24; // ebx
  CHandle<CBaseEntity> *v25; // rdx
  uint32 m_Index; // eax
  __int16 v27; // cx
  CEntityIdentity *v28; // rdx
  CEntityIdentity *v29; // rdx
  const CBaseEntity *m_pInstance; // r14
  CEntityIdentity *v31; // rdx
  int v32; // eax
  __int16 v33; // cx
  const Vector *v34; // r13
  CDOTA_BaseNPC *v35; // rax
  const Vector *v36; // rax
  vec_t v37; // xmm1_4
  vec_t v38; // xmm0_4
  const QAngle *AbsAngles; // rax
  float flDamage; // [rsp+28h] [rbp-D8h]
  vec_t flDamagea; // [rsp+28h] [rbp-D8h]
  Vector vCastDir; // [rsp+30h] [rbp-D0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hUnits; // [rsp+40h] [rbp-C0h] BYREF
  sTrackingProjectileCreateInfo info; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v45; // [rsp+C8h] [rbp-38h]
  Vector v46; // 0:xmm0_8.8,8:xmm1_4.4

  v45 = __readfsqword(0x28u);
  if ( CDOTA_Buff::GetAbility(this) != 0 )
  {
    if ( CDOTA_Buff::GetParent(this) != 0 )
    {
      flDamage = this->leech_damage;
      Ability = CDOTA_Buff::GetAbility(this);
      Parent = CDOTA_Buff::GetParent(this);
      Caster = CDOTA_Buff::GetCaster(this);
      ApplyDamage(Caster, Parent, Ability, flDamage, 2, 0);
      v5 = CDOTA_Buff::GetParent(this);
      ParticleManager = GetParticleManager();
      LODWORD(v5) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_treant/treant_leech_seed_damage_pulse.vpcf",
                      2,
                      v5,
                      0,
                      0);
      v7 = CDOTA_Buff::GetParent(this);
      v8 = GetParticleManager();
      v9 = *&vec3_invalid.x;
      flDamagea = vec3_invalid.z;
      CDOTA_ParticleManager::SetParticleControlEnt(v8, v5, 0, v7, 5, "attach_hitloc", vec3_invalid, 1);
      v10 = CDOTA_Buff::GetCaster(this);
      v11 = GetParticleManager();
      *&v46.x = v9;
      v46.z = flDamagea;
      CDOTA_ParticleManager::SetParticleControlEnt(v11, v5, 1, v10, 5, "attach_hitloc", v46, 1);
      v12 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v12, v5);
      v13 = CDOTA_Buff::GetParent(this);
      DOTA_EmitSound(10, "Hero_Treant.LeechSeed.Tick", v13);
    }
    info.bProvidesVision = 0;
    info.hSource.m_Index = -1;
    info.hTarget.m_Index = -1;
    info.colorGemColor = 0;
    info.bDrawsOnMinimap = 0;
    memset(&info, 0, 28);
    info.vSourceLoc = vec3_origin;
    info.iSourceAttachment = 1;
    info.iVisionTeamNumber = -1;
    info.iVisionRadius = 0;
    info.bDodgeable = 1;
    info.bIsAttack = 0;
    info.bVisibleToEnemies = 1;
    info.pKVExtraData = 0;
    info.bReplaceExisting = 0;
    info.flExpireTime = 0.0;
    info.flMaxImpactTime = 0.0;
    info.bServerOnly = 0;
    info.pAbility = CDOTA_Buff::GetAbility(this);
    info.iMoveSpeed = this->projectile_speed;
    v14 = CDOTA_Buff::GetParent(this);
    if ( v14 != 0 && (m_pEntity = v14->m_pEntity) != 0 )
    {
      v17 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v17 & 0x7FFF;
    }
    else
    {
      info.hSource.m_Index = -1;
    }
    *v15.m128i_i32 = this->radius;
    info.bDodgeable = 0;
    info.iSourceAttachment = 3;
    info.pszEffectName = "particles/units/heroes/hero_treant/treant_leech_seed_projectile.vpcf";
    hUnits.m_Size = 0;
    hUnits.m_Memory.m_pMemory = 0;
    v18 = COERCE_FLOAT(_mm_cvtsi128_si32(v15));
    hUnits.m_Memory.m_nAllocationCount = 0;
    hUnits.m_Memory.m_nGrowSize = 0;
    v19 = CDOTA_Buff::GetParent(this);
    v20 = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v20);
    v22 = CDOTA_Buff::GetCaster(this);
    FindUnitsInRadius(v22->m_iTeamNum.m_Value, AbsOrigin, v19, v18, &hUnits, 1, 3, 0, 0, 0);
    if ( hUnits.m_Size > 0 )
    {
      v23 = 0;
      v24 = 0;
      do
      {
        while ( 1 )
        {
          v25 = &hUnits.m_Memory.m_pMemory[v23];
          m_Index = hUnits.m_Memory.m_pMemory[v23].m_Index;
          if ( m_Index + 2 > 1 )
          {
            v27 = v25->m_Index;
            v28 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v25->m_Index) >> 9) & 0x3F];
            if ( v28 != 0 )
            {
              v29 = &v28[v27 & 0x1FF];
              if ( v29 != 0 && m_Index == v29->m_EHandle.m_Index )
              {
                m_pInstance = v29->m_pInstance;
                if ( v29->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                {
                  v31 = m_pInstance->m_pEntity;
                  if ( v31 != 0 )
                  {
                    v32 = (v31->m_EHandle.m_Index >> 15) - (v31->m_flags & 1);
                    v33 = 0x7FFF;
                    if ( v31->m_EHandle.m_Index != -1 )
                      v33 = v31->m_EHandle.m_Index & 0x7FFF;
                    LOWORD(info.hTarget.m_Index) = v33 | info.hTarget.m_Index & 0x8000;
                    info.hTarget.m_Index = (v32 << 15) | info.hTarget.m_Index & 0x7FFF;
                  }
                  else
                  {
                    info.hTarget.m_Index = -1;
                  }
                  CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
                  v34 = CBaseEntity::GetAbsOrigin(m_pInstance);
                  v35 = CDOTA_Buff::GetParent(this);
                  v36 = CBaseEntity::GetAbsOrigin(v35);
                  v37 = v36->x - v34->x;
                  v38 = v36->y - v34->y;
                  vCastDir.z = 0.0;
                  vCastDir.x = v37;
                  vCastDir.y = v38;
                  if ( VectorNormalize(&vCastDir) < 0.0099999998 )
                    break;
                }
              }
            }
          }
          ++v24;
          ++v23;
          if ( hUnits.m_Size <= v24 )
            goto LABEL_24;
        }
        AbsAngles = CBaseEntity::GetAbsAngles(m_pInstance);
        AngleVectors(AbsAngles, &vCastDir, 0, 0);
        ++v24;
        ++v23;
      }
      while ( hUnits.m_Size > v24 );
    }
LABEL_24:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hUnits);
  }
}


// CDOTA_Modifier_Treant_LeechSeed::GetModifierMoveSpeedBonus_Percentage  (line 906, @0x0000000002cc9d00, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Treant_LeechSeed::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Treant_LeechSeed *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->movement_slow;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Treant_LivingArmor::~CDOTA_Ability_Treant_LivingArmor  (line 917, @0x0000000002d2c270, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Treant_LivingArmor::~CDOTA_Ability_Treant_LivingArmor(
        CDOTA_Ability_Treant_LivingArmor *const this)
{
  this->_vptr_IHandleEntity = &off_4647990;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Treant_LivingArmor::~CDOTA_Ability_Treant_LivingArmor  (line 917, @0x0000000002d2c290, libserver.so)  // inlines: ~CDOTA_Ability_Treant_LivingArmor
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Treant_LivingArmor::~CDOTA_Ability_Treant_LivingArmor(
        CDOTA_Ability_Treant_LivingArmor *const this)
{
  this->_vptr_IHandleEntity = &off_4647990;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Treant_LivingArmor::Schema_DynamicBinding  (line 919, @0x0000000002d1f5f0, libserver.so)
// globals: CDOTA_Ability_Treant_LivingArmor::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Treant_LivingArmor::Schema_DynamicBinding(
        const CDOTA_Ability_Treant_LivingArmor *const this)
{
  return CDOTA_Ability_Treant_LivingArmor::s_pSchemaBinding;
}


// CDOTA_Ability_Treant_LivingArmor::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 919, @0x0000000002d1f600, libserver.so)
// globals: CDOTA_Ability_Treant_LivingArmor::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Treant_LivingArmor::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Treant_LivingArmor::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Treant_LivingArmor::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Treant_LivingArmor::CEntityInstanceEntityClass::DestructInstance  (line 919, @0x0000000002d1f610, libserver.so)  // inlines: Destruct<CDOTA_Ability_Treant_LivingArmor>
void __fastcall CDOTA_Ability_Treant_LivingArmor::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Treant_LivingArmor::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Treant_LivingArmor::CEntityInstanceEntityClass::FreeInstance  (line 919, @0x0000000002d1f630, libserver.so)
void __fastcall CDOTA_Ability_Treant_LivingArmor::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Treant_LivingArmor::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Treant_LivingArmor::CEntityInstanceEntityClass::CanAllocate  (line 919, @0x0000000002d1f650, libserver.so)
bool __fastcall CDOTA_Ability_Treant_LivingArmor::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Treant_LivingArmor::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Treant_LivingArmor::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 919, @0x0000000002d1f660, libserver.so)
// globals: CDOTA_Ability_Treant_LivingArmor::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Treant_LivingArmor::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Treant_LivingArmor::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Treant_LivingArmor::s_pSchemaBinding;
}


// CDOTA_Ability_Treant_LivingArmor::CEntityInstanceEntityClass::AllocateInstance  (line 919, @0x0000000002d24ed0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Treant_LivingArmor::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Treant_LivingArmor::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Treant_LivingArmor::CEntityInstanceEntityClass::ConstructInstance  (line 919, @0x0000000002d29460, libserver.so)  // inlines: CDOTA_Ability_Treant_LivingArmor, Construct<CDOTA_Ability_Treant_LivingArmor>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Treant_LivingArmor::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Treant_LivingArmor::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4647990;
  }
  return p;
}


// CDOTA_Ability_Treant_LivingArmor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 919, @0x0000000002d34770, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Treant_LivingArmor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Treant_LivingArmor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Treant_LivingArmor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 919, @0x0000000002d34790, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Treant_LivingArmor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Treant_LivingArmor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Treant_LivingArmor::GetEntityClassInternal  (line 919, @0x0000000002d49d90, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "CDOTA_Ability_Treant_LivingArmor"
// globals: `guard variable for'CDOTA_Ability_Treant_LivingArmor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_LivingArmorClass, CDOTA_Ability_Treant_LivingArmor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_LivingArmorClass, __dso_handle, CDOTA_Ability_Treant_LivingArmor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Treant_LivingArmor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_LivingArmorClassInfo, CDOTA_Ability_Treant_LivingArmor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_LivingArmorClassInfo
CEntityClass *__cdecl CDOTA_Ability_Treant_LivingArmor::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Treant_LivingArmor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_LivingArmorClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Treant_LivingArmor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_LivingArmorClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Treant_LivingArmor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_LivingArmorClass);
    CDOTA_Ability_Treant_LivingArmor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_LivingArmorClass._vptr_CEntityClass = off_4647910;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Treant_LivingArmor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_LivingArmorClass);
    __cxa_atexit(
      CDOTA_Ability_Treant_LivingArmor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Treant_LivingArmor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_LivingArmorClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Treant_LivingArmorClass != 0 )
    return &CDOTA_Ability_Treant_LivingArmor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_LivingArmorClass;
  if ( `guard variable for'CDOTA_Ability_Treant_LivingArmor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_LivingArmorClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Treant_LivingArmor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_LivingArmorClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Treant_LivingArmor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_LivingArmorClassInfo,
      "CDOTA_Ability_Treant_LivingArmor",
      "treant_living_armor",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Treant_LivingArmor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_LivingArmorClassInfo);
  }
  CDOTA_Ability_Treant_LivingArmor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_LivingArmorClass.m_pClassInfo = &CDOTA_Ability_Treant_LivingArmor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_LivingArmorClassInfo;
  CDOTA_Ability_Treant_LivingArmor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_LivingArmorClass.m_pBaseClassInfo = CDOTA_Ability_Treant_LivingArmor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_LivingArmorClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Treant_LivingArmorClass = &CDOTA_Ability_Treant_LivingArmor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_LivingArmorClass;
  CDOTA_Ability_Treant_LivingArmor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_LivingArmorClassInfo.m_pClass = &CDOTA_Ability_Treant_LivingArmor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_LivingArmorClass;
  CDOTA_Ability_Treant_LivingArmor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_LivingArmorClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Treant_LivingArmorClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Treant_LivingArmor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_LivingArmorClass;
}


// CDOTA_Ability_Treant_LivingArmor::OnSpellStart  (line 929, @0x0000000002cf6dc0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, LookupEntity, Purge, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetCursorTarget, KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, DOTA_EmitSound, CDOTABaseAbility::GetCursorPosition, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge (15 total)
// strings: "modifier_treant_living_armor", "Hero_Treant.LivingArmor.Cast"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Treant_LivingArmor::OnSpellStart(CDOTA_Ability_Treant_LivingArmor *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *m_pInstance; // r12
  float v4; // xmm1_4
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *Caster; // rax
  int v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  uint32 m_iUnitType; // edx
  Vector vPos; // [rsp+20h] [rbp-70h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+30h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-40h] BYREF
  unsigned __int64 v15; // [rsp+68h] [rbp-28h]

  v15 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  m_pInstance = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
    goto LABEL_3;
  hEntities.m_Size = 0;
  vPos = CDOTABaseAbility::GetCursorPosition(this);
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(Caster->m_iTeamNum.m_Value, &vPos, 0, -1.0, &hEntities, 1, 5, 0, 1, 0);
  if ( hEntities.m_Size <= 0 )
  {
LABEL_12:
    m_pInstance = 0;
  }
  else
  {
    v8 = 0;
    while ( 1 )
    {
      if ( hEntities.m_Memory.m_pMemory->m_Index + 2 > 1 )
      {
        v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(hEntities.m_Memory.m_pMemory->m_Index >> 9) & 0x3F];
        if ( v9 != 0 )
        {
          v10 = &v9[hEntities.m_Memory.m_pMemory->m_Index & 0x1FF];
          if ( v10 != 0 && hEntities.m_Memory.m_pMemory->m_Index == v10->m_EHandle.m_Index )
          {
            m_pInstance = v10->m_pInstance;
            if ( v10->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
            {
              m_iUnitType = m_pInstance->m_iUnitType;
              if ( (m_iUnitType & 1) != 0 || (m_iUnitType & 0x44) != 0 )
                break;
            }
          }
        }
      }
      if ( ++v8 == hEntities.m_Size )
        goto LABEL_12;
    }
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hEntities);
  if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
    if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
  }
  if ( m_pInstance != 0 )
  {
LABEL_3:
    KeyValues::KeyValues(&kv, "modifier_treant_living_armor");
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    KeyValues::SetFloat(&kv, "duration", v4);
    v5 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(m_pInstance, v5, this, "modifier_treant_living_armor", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
  v6 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_Treant.LivingArmor.Cast", v6);
}


// CDOTA_Modifier_Treant_LivingArmor::~CDOTA_Modifier_Treant_LivingArmor  (line 968, @0x0000000002d272f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Treant_LivingArmor::~CDOTA_Modifier_Treant_LivingArmor(
        CDOTA_Modifier_Treant_LivingArmor *const this)
{
  this->_vptr_CDOTA_Buff = &off_4648450;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Treant_LivingArmor::~CDOTA_Modifier_Treant_LivingArmor  (line 968, @0x0000000002d27310, libserver.so)  // inlines: ~CDOTA_Modifier_Treant_LivingArmor
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Treant_LivingArmor::~CDOTA_Modifier_Treant_LivingArmor(
        CDOTA_Modifier_Treant_LivingArmor *const this)
{
  this->_vptr_CDOTA_Buff = &off_4648450;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Treant_LivingArmor::OnCreated  (line 993, @0x0000000002cfec60, libserver.so)
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle, DOTA_EmitSound (13 total)
// strings: "damage_count", "special_bonus_unique_treant", "particles/units/heroes/hero_treant/treant_livingarmor.vpcf", "attach_hitloc", "Hero_Treant.LivingArmor.Target"
void __fastcall CDOTA_Modifier_Treant_LivingArmor::OnCreated(
        CDOTA_Modifier_Treant_LivingArmor *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float v6; // xmm1_4
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v9; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v11; // r14
  CDOTA_ParticleManager *v12; // rax
  CDOTA_BaseNPC *v13; // r13
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  CDOTABaseAbility *v16; // rax
  CDOTABaseAbility *v17; // rax

  if ( CDOTA_Buff::GetAbility(this) != 0 )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<int>(Ability, &this->damage_count, "damage_count");
    Caster = CDOTA_Buff::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_treant", 0);
    if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
      this->damage_count += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
    (*(this->_vptr_CDOTA_Buff + 28))(this);
  }
  if ( CDOTA_Buff::GetParent(this) != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    ParticleManager = GetParticleManager();
    LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                        ParticleManager,
                        "particles/units/heroes/hero_treant/treant_livingarmor.vpcf",
                        2,
                        Parent,
                        0,
                        0);
    v9 = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
    v11 = CDOTA_Buff::GetParent(this);
    v12 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v12, Parent, 0, v11, 5, "attach_hitloc", *AbsOrigin, 1);
    v13 = CDOTA_Buff::GetParent(this);
    v14 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v14, Parent, 1, v13, 1, 0, vec3_invalid, 1);
    CDOTA_Buff::AddParticle(this, Parent, 0, 0, -1, 0, 0);
    v15 = CDOTA_Buff::GetParent(this);
    DOTA_EmitSound(10, "Hero_Treant.LivingArmor.Target", v15);
  }
  CDOTA_Buff::StartIntervalThink(this, 1.0, v6);
  v16 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v16, &this->health_regen, "health_regen");
  v17 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v17, &this->damage_block, "damage_block");
}


// CDOTA_Modifier_Treant_LivingArmor::OnRefresh  (line 1028, @0x0000000002d0bfe0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName
// strings: "damage_count", "special_bonus_unique_treant"
void __fastcall CDOTA_Modifier_Treant_LivingArmor::OnRefresh(
        CDOTA_Modifier_Treant_LivingArmor *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax

  if ( CDOTA_Buff::GetAbility(this) != 0 )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    if ( Ability != 0 )
      this->damage_count = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage_count", -1, 0);
    else
      this->damage_count = 0;
    Caster = CDOTA_Buff::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_treant", 0);
    if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
      this->damage_count += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
    (*(this->_vptr_CDOTA_Buff + 28))(this);
  }
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
    this->health_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "health_regen", -1, 0);
  else
    this->health_regen = 0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
    this->damage_block = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "damage_block", -1, 0);
  else
    this->damage_block = 0;
}


// CDOTA_Modifier_Treant_LivingArmor::DeclareFunctions  (line 1051, @0x0000000002cc9d20, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Treant_LivingArmor::GetModifierTotal_ConstantBlock(CModifierParams const&), CDOTA_Modifier_Treant_LivingArmor::GetModifierConstantHealthRegen(CModifierParams const&), CDOTA_Modifier_Treant_LivingArmor::OnTooltip(CModifierParams const&)
void __fastcall CDOTA_Modifier_Treant_LivingArmor::DeclareFunctions(CDOTA_Modifier_Treant_LivingArmor *const this)
{
  this->m_Functions[89].__pfn = CDOTA_Modifier_Treant_LivingArmor::GetModifierTotal_ConstantBlock;
  this->m_Functions[89].__delta = 0;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[56].__pfn = CDOTA_Modifier_Treant_LivingArmor::GetModifierConstantHealthRegen;
  this->m_Functions[151].__pfn = CDOTA_Modifier_Treant_LivingArmor::OnTooltip;
  this->m_Functions[151].__delta = 0;
}


// CDOTA_Modifier_Treant_LivingArmor::GetModifierTotal_ConstantBlock  (line 1060, @0x0000000002cd88b0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ModifierVariant_t, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Treant_LivingArmor::GetModifierTotal_ConstantBlock(
        CDOTA_Modifier_Treant_LivingArmor *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  __m128i v7; // xmm0
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    return 1uLL;
  v5 = &v4[params->hattacker.m_Index & 0x1FF];
  if ( v5 == 0
    || m_Index != v5->m_EHandle.m_Index
    || v5->m_pInstance == 0
    || BYTE3(v5->m_pInstance[7]._vptr_IHandleEntity) == 0
    || params->fDamage <= 5.0
    || (params->nDamageflags & 0x20) != 0 )
  {
    return 1uLL;
  }
  if ( (*(this->_vptr_CDOTA_Buff + 27))(this) == 1 )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  else
    (*(this->_vptr_CDOTA_Buff + 26))(this);
  *v7.m128i_i32 = this->damage_block;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v7) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Treant_LivingArmor::GetModifierConstantHealthRegen  (line 1083, @0x0000000002cc9d80, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Treant_LivingArmor::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Treant_LivingArmor *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->health_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Treant_LivingArmor::OnTooltip  (line 1090, @0x0000000002cc9da0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Treant_LivingArmor::OnTooltip(
        CDOTA_Modifier_Treant_LivingArmor *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->damage_block;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Treant_LivingArmor::OnIntervalThink  (line 1097, @0x0000000002cd1750, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_CombatLog::AddHealthEvent, SendOverheadEventMessage
void __fastcall CDOTA_Modifier_Treant_LivingArmor::OnIntervalThink(CDOTA_Modifier_Treant_LivingArmor *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  int Health; // r12d
  CDOTA_BaseNPC *v4; // rax
  int v5; // r14d
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *v7; // r12
  CDOTA_BaseNPC *v8; // rax
  int health_regen; // r13d
  CDOTA_BaseNPC *v10; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTAPlayer *v12; // rax
  CDOTA_BaseNPC *v13; // r12
  int v14; // r13d
  CDOTA_BaseNPC *v15; // r12
  CDOTA_BaseNPC *v16; // rax
  CDOTAPlayer *v17; // rax

  if ( (CDOTA_Buff::GetParent(this)->m_iUnitType & 1) != 0 || (CDOTA_Buff::GetParent(this)->m_iUnitType & 0x10) != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    Health = CBaseEntity::GetHealth(Parent);
    v4 = CDOTA_Buff::GetParent(this);
    if ( Health < (*(v4->_vptr_IHandleEntity + 156))(v4) && CDOTA_Buff::GetCaster(this) != 0 )
    {
      health_regen = this->health_regen;
      v10 = CDOTA_Buff::GetParent(this);
      Caster = CDOTA_Buff::GetCaster(this);
      v12 = (*(Caster->_vptr_IHandleEntity + 413))(Caster);
      SendOverheadEventMessage(v12, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, v10, health_regen, 0);
      v13 = CDOTA_Buff::GetParent(this);
      if ( v13 != CDOTA_Buff::GetCaster(this) )
      {
        v14 = this->health_regen;
        v15 = CDOTA_Buff::GetParent(this);
        v16 = CDOTA_Buff::GetParent(this);
        v17 = (*(v16->_vptr_IHandleEntity + 413))(v16);
        SendOverheadEventMessage(v17, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, v15, v14, 0);
      }
    }
    v5 = this->health_regen;
    Ability = CDOTA_Buff::GetAbility(this);
    v7 = CDOTA_Buff::GetCaster(this);
    v8 = CDOTA_Buff::GetParent(this);
    CDOTA_CombatLog::AddHealthEvent(g_pDOTACombatLog, 1, v8, v7, Ability, v5, 0, 0, 0);
  }
}


// CDOTA_Ability_Treant_Overgrowth::~CDOTA_Ability_Treant_Overgrowth  (line 1124, @0x0000000002d2c2c0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Treant_Overgrowth::~CDOTA_Ability_Treant_Overgrowth(
        CDOTA_Ability_Treant_Overgrowth *const this)
{
  this->_vptr_IHandleEntity = &off_46487B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Treant_Overgrowth::~CDOTA_Ability_Treant_Overgrowth  (line 1124, @0x0000000002d2c2e0, libserver.so)  // inlines: ~CDOTA_Ability_Treant_Overgrowth
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Treant_Overgrowth::~CDOTA_Ability_Treant_Overgrowth(
        CDOTA_Ability_Treant_Overgrowth *const this)
{
  this->_vptr_IHandleEntity = &off_46487B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Treant_Overgrowth::Schema_DynamicBinding  (line 1126, @0x0000000002d1f670, libserver.so)
// globals: CDOTA_Ability_Treant_Overgrowth::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Treant_Overgrowth::Schema_DynamicBinding(
        const CDOTA_Ability_Treant_Overgrowth *const this)
{
  return CDOTA_Ability_Treant_Overgrowth::s_pSchemaBinding;
}


// CDOTA_Ability_Treant_Overgrowth::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1126, @0x0000000002d1f680, libserver.so)
// globals: CDOTA_Ability_Treant_Overgrowth::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Treant_Overgrowth::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Treant_Overgrowth::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Treant_Overgrowth::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Treant_Overgrowth::CEntityInstanceEntityClass::DestructInstance  (line 1126, @0x0000000002d1f690, libserver.so)  // inlines: Destruct<CDOTA_Ability_Treant_Overgrowth>
void __fastcall CDOTA_Ability_Treant_Overgrowth::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Treant_Overgrowth::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Treant_Overgrowth::CEntityInstanceEntityClass::FreeInstance  (line 1126, @0x0000000002d1f6b0, libserver.so)
void __fastcall CDOTA_Ability_Treant_Overgrowth::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Treant_Overgrowth::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Treant_Overgrowth::CEntityInstanceEntityClass::CanAllocate  (line 1126, @0x0000000002d1f6d0, libserver.so)
bool __fastcall CDOTA_Ability_Treant_Overgrowth::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Treant_Overgrowth::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Treant_Overgrowth::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1126, @0x0000000002d1f6e0, libserver.so)
// globals: CDOTA_Ability_Treant_Overgrowth::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Treant_Overgrowth::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Treant_Overgrowth::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Treant_Overgrowth::s_pSchemaBinding;
}


// CDOTA_Ability_Treant_Overgrowth::CEntityInstanceEntityClass::AllocateInstance  (line 1126, @0x0000000002d24f10, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Treant_Overgrowth::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Treant_Overgrowth::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Treant_Overgrowth::CEntityInstanceEntityClass::ConstructInstance  (line 1126, @0x0000000002d29490, libserver.so)  // inlines: CDOTA_Ability_Treant_Overgrowth, Construct<CDOTA_Ability_Treant_Overgrowth>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Treant_Overgrowth::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Treant_Overgrowth::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_46487B0;
  }
  return p;
}


// CDOTA_Ability_Treant_Overgrowth::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1126, @0x0000000002d347c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Treant_Overgrowth::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Treant_Overgrowth::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Treant_Overgrowth::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1126, @0x0000000002d347e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Treant_Overgrowth::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Treant_Overgrowth::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Treant_Overgrowth::GetEntityClassInternal  (line 1126, @0x0000000002d49ee0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "CDOTA_Ability_Treant_Overgrowth"
// globals: `guard variable for'CDOTA_Ability_Treant_Overgrowth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_OvergrowthClass, CDOTA_Ability_Treant_Overgrowth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_OvergrowthClass, __dso_handle, CDOTA_Ability_Treant_Overgrowth::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Treant_Overgrowth::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_OvergrowthClassInfo, CDOTA_Ability_Treant_Overgrowth::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_OvergrowthClassInfo
CEntityClass *__cdecl CDOTA_Ability_Treant_Overgrowth::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Treant_Overgrowth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_OvergrowthClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Treant_Overgrowth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_OvergrowthClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Treant_Overgrowth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_OvergrowthClass);
    CDOTA_Ability_Treant_Overgrowth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_OvergrowthClass._vptr_CEntityClass = off_4648730;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Treant_Overgrowth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_OvergrowthClass);
    __cxa_atexit(
      CDOTA_Ability_Treant_Overgrowth::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Treant_Overgrowth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_OvergrowthClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Treant_OvergrowthClass != 0 )
    return &CDOTA_Ability_Treant_Overgrowth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_OvergrowthClass;
  if ( `guard variable for'CDOTA_Ability_Treant_Overgrowth::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_OvergrowthClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Treant_Overgrowth::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_OvergrowthClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Treant_Overgrowth::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_OvergrowthClassInfo,
      "CDOTA_Ability_Treant_Overgrowth",
      "treant_overgrowth",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Treant_Overgrowth::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_OvergrowthClassInfo);
  }
  CDOTA_Ability_Treant_Overgrowth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_OvergrowthClass.m_pClassInfo = &CDOTA_Ability_Treant_Overgrowth::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_OvergrowthClassInfo;
  CDOTA_Ability_Treant_Overgrowth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_OvergrowthClass.m_pBaseClassInfo = CDOTA_Ability_Treant_Overgrowth::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_OvergrowthClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Treant_OvergrowthClass = &CDOTA_Ability_Treant_Overgrowth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_OvergrowthClass;
  CDOTA_Ability_Treant_Overgrowth::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Treant_OvergrowthClassInfo.m_pClass = &CDOTA_Ability_Treant_Overgrowth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_OvergrowthClass;
  CDOTA_Ability_Treant_Overgrowth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_OvergrowthClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Treant_OvergrowthClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Treant_Overgrowth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Treant_OvergrowthClass;
}


// CDOTA_Ability_Treant_Overgrowth::GetAOERadius  (line 1132, @0x0000000002d47150, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_Treant_Overgrowth::GetAOERadius(CDOTA_Ability_Treant_Overgrowth *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
}


// CDOTA_Ability_Treant_Overgrowth::YouForgotToImplementOrDeclareServerClass  (line 1137, @0x0000000002cc9dc0, libserver.so)
int __fastcall CDOTA_Ability_Treant_Overgrowth::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Treant_Overgrowth *const this)
{
  return 0;
}


// CDOTA_Ability_Treant_Overgrowth::GetServerClass  (line 1137, @0x0000000002cde0b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Treant_Overgrowth::GetServerClass(CDOTA_Ability_Treant_Overgrowth *const this)
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


// CDOTA_Ability_Treant_Overgrowth::OnSpellStart  (line 1146, @0x0000000002d0ebf0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetAbilityData, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, entindex, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CEntityInstance::GetEntityIndex, CreateUnitEvent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSound, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_Treant_EyesInTheForest::CastOvergrowth (25 total)
// strings: "eyes_radius", "particles/units/heroes/hero_treant/treant_overgrowth_cast.vpcf", "Hero_Treant.Overgrowth.Cast", "treant_eyes_in_the_forest", "modifier_treant_overgrowth", "particles/units/heroes/hero_treant/treant_overgrowth_trails.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Treant_Overgrowth::OnSpellStart(CDOTA_Ability_Treant_Overgrowth *const this)
{
  int LevelSpecialValue; // r12d
  int v3; // r14d
  CDOTA_BaseNPC *Caster; // rax
  CEntityIndex v5; // eax
  CDOTA_BaseNPC *v6; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v8; // r15
  CDOTA_ParticleManager *v9; // rax
  CDOTA_ParticleManager *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_Ability_Treant_EyesInTheForest *AbilityByName; // rax
  float v14; // xmm1_4
  __m128i v15; // xmm3
  float v16; // r12d
  CDOTA_BaseNPC *v17; // rbx
  CDOTA_BaseNPC *v18; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v20; // rax
  float v21; // xmm1_4
  float v22; // xmm1_4
  __int64 v23; // rbx
  CHandle<CBaseEntity> *v24; // rdx
  uint32 m_Index; // eax
  __int16 v26; // cx
  CEntityIdentity *v27; // rdx
  CEntityIdentity *v28; // rdx
  CEntityInstance *m_pInstance; // r12
  CDOTA_BaseNPC *v30; // r14
  CDOTA_ParticleManager *v31; // rax
  CDOTA_BaseNPC *v32; // rax
  const Vector *v33; // r15
  CDOTA_ParticleManager *v34; // rax
  const Vector *v35; // r15
  CDOTA_ParticleManager *v36; // rax
  CDOTA_ParticleManager *v37; // rax
  CDOTA_BaseNPC *v38; // rax
  char v39; // al
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r12d
  CDOTA_BaseNPC *v42; // rax
  const Vector *v43; // rbx
  CDOTA_BaseNPC *v44; // rax
  float v45; // xmm3_4
  float duration; // [rsp+28h] [rbp-78h]
  bool bHitEnemyHero; // [rsp+2Fh] [rbp-71h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v50; // [rsp+68h] [rbp-38h]

  v50 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  v3 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "eyes_radius", -1, 0);
  duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  v5.m_Data = CEntityInstance::GetEntityIndex(Caster).m_Data;
  CreateUnitEvent(v5, 0, 25, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_IMPORTANT_ABILITY);
  v6 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v6) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/units/heroes/hero_treant/treant_overgrowth_cast.vpcf",
                  1,
                  v6,
                  0,
                  0);
  v8 = CDOTABaseAbility::GetCaster(this);
  v9 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v9, v6, 0, v8, 1, 0, vec3_invalid, 1);
  v10 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v10, v6);
  v11 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_Treant.Overgrowth.Cast", v11);
  v12 = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v12, "treant_eyes_in_the_forest", 0);
  if ( AbilityByName != 0 )
    CDOTA_Ability_Treant_EyesInTheForest::CastOvergrowth(AbilityByName, v3, COERCE_DOUBLE(LODWORD(duration)), v14);
  *v15.m128i_i32 = LevelSpecialValue;
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v16 = COERCE_FLOAT(_mm_cvtsi128_si32(v15));
  v17 = CDOTABaseAbility::GetCaster(this);
  v18 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v18);
  v20 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v20->m_iTeamNum.m_Value, AbsOrigin, v17, v16, &entities, 2, 3, 272, 0, 0);
  KeyValues::KeyValues(&kv, "modifier_treant_overgrowth");
  KeyValues::SetFloat(&kv, "duration", v21);
  KeyValues::SetFloat(&kv, "damage", v22);
  if ( entities.m_Size > 0 )
  {
    v23 = 0;
    bHitEnemyHero = 0;
    do
    {
      while ( 1 )
      {
        v24 = &entities.m_Memory.m_pMemory[v23];
        m_Index = v24->m_Index;
        if ( v24->m_Index + 2 > 1 )
        {
          v26 = v24->m_Index;
          v27 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v24->m_Index) >> 9) & 0x3F];
          if ( v27 != 0 )
          {
            v28 = &v27[v26 & 0x1FF];
            if ( v28 != 0 && m_Index == v28->m_EHandle.m_Index )
            {
              m_pInstance = v28->m_pInstance;
              if ( v28->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                break;
            }
          }
        }
        if ( entities.m_Size <= ++v23 )
          goto LABEL_15;
      }
      v30 = CDOTABaseAbility::GetCaster(this);
      v31 = GetParticleManager();
      LODWORD(v30) = CDOTA_ParticleManager::CreateParticle(
                       v31,
                       "particles/units/heroes/hero_treant/treant_overgrowth_trails.vpcf",
                       2,
                       v30,
                       0,
                       0);
      v32 = CDOTABaseAbility::GetCaster(this);
      v33 = CBaseEntity::GetAbsOrigin(v32);
      v34 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v34, v30, 0, *&v33->x, v33->z);
      v35 = CBaseEntity::GetAbsOrigin(m_pInstance);
      v36 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v36, v30, 1, *&v35->x, v35->z);
      v37 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v37, v30);
      v38 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v38, this, "modifier_treant_overgrowth", &kv, 0);
      CDOTA_BaseNPC::Interrupt(m_pInstance);
      v39 = bHitEnemyHero;
      if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        v39 = 1;
      bHitEnemyHero = v39;
      ++v23;
    }
    while ( entities.m_Size > v23 );
LABEL_15:
    if ( bHitEnemyHero )
    {
      m_pAbilityData = this->m_pAbilityData;
      if ( m_pAbilityData == 0 )
      {
        CDOTABaseAbility::LoadAbilityData(this, 0);
        m_pAbilityData = this->m_pAbilityData;
      }
      m_iAbilityID = m_pAbilityData->m_iAbilityID;
      v42 = CDOTABaseAbility::GetCaster(this);
      v43 = CBaseEntity::GetAbsOrigin(v42);
      v44 = CDOTABaseAbility::GetCaster(this);
      CDOTAGamerules::SendProjectionAbilityMessage(
        g_pGameRules,
        v44,
        0,
        m_iAbilityID,
        1,
        0,
        *&v43->x,
        v43->z,
        duration,
        v45);
    }
  }
  KeyValues::~KeyValues(&kv);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Ability_Treant_Overgrowth::GetSlowDuration  (line 1214, @0x0000000002cf6760, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Treant_Overgrowth::GetSlowDuration(CDOTA_Ability_Treant_Overgrowth *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
}


// CDOTA_Modifier_Treant_Overgrowth::~CDOTA_Modifier_Treant_Overgrowth  (line 1221, @0x0000000002d272a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Treant_Overgrowth::~CDOTA_Modifier_Treant_Overgrowth(
        CDOTA_Modifier_Treant_Overgrowth *const this)
{
  this->_vptr_CDOTA_Buff = &off_4649270;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Treant_Overgrowth::~CDOTA_Modifier_Treant_Overgrowth  (line 1221, @0x0000000002d272c0, libserver.so)  // inlines: ~CDOTA_Modifier_Treant_Overgrowth
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Treant_Overgrowth::~CDOTA_Modifier_Treant_Overgrowth(
        CDOTA_Modifier_Treant_Overgrowth *const this)
{
  this->_vptr_CDOTA_Buff = &off_4649270;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Treant_Overgrowth::GetPriority  (line 1231, @0x0000000002d1f6f0, libserver.so)
int __fastcall CDOTA_Modifier_Treant_Overgrowth::GetPriority(CDOTA_Modifier_Treant_Overgrowth *const this)
{
  return 2;
}


// CDOTA_Modifier_Treant_Overgrowth::StatusEffectPriority  (line 1234, @0x0000000002d1f700, libserver.so)
int __fastcall CDOTA_Modifier_Treant_Overgrowth::StatusEffectPriority(CDOTA_Modifier_Treant_Overgrowth *const this)
{
  return 10;
}


// CDOTA_Modifier_Treant_Overgrowth::OnCreated  (line 1244, @0x0000000002ccca20, libserver.so)
// calls: KeyValues::GetFloat, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, CDOTA_BaseNPC::UnitEmitSound, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle
// strings: "Hero_Treant.Overgrowth.Target", "particles/units/heroes/hero_treant/treant_overgrowth_vines_small.vpcf", "particles/units/heroes/hero_treant/treant_overgrowth_vines.vpcf"
void __fastcall CDOTA_Modifier_Treant_Overgrowth::OnCreated(
        CDOTA_Modifier_Treant_Overgrowth *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4
  float Float; // xmm0_4
  int (**vptr_CDOTA_Buff)(...); // rax
  float v6; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  const char *v9; // rsi
  int Particle; // r12d
  CDOTA_BaseNPC *v11; // r13
  CDOTA_ParticleManager *v12; // rax

  Float = KeyValues::GetFloat(pKV, "damage", v2);
  vptr_CDOTA_Buff = this->_vptr_CDOTA_Buff;
  this->damage = Float;
  vptr_CDOTA_Buff[56](this);
  CDOTA_Buff::StartIntervalThink(this, 1.02, v6);
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(Parent, "Hero_Treant.Overgrowth.Target", 0.0, 0, 0);
  if ( (CDOTA_Buff::GetParent(this)->m_iUnitType & 1) != 0 )
  {
    ParticleManager = GetParticleManager();
    v9 = "particles/units/heroes/hero_treant/treant_overgrowth_vines.vpcf";
  }
  else
  {
    ParticleManager = GetParticleManager();
    v9 = "particles/units/heroes/hero_treant/treant_overgrowth_vines_small.vpcf";
  }
  Particle = CDOTA_ParticleManager::CreateParticle(ParticleManager, v9, 2, 0, 0, 0);
  v11 = CDOTA_Buff::GetParent(this);
  v12 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v12, Particle, 0, v11, 1, 0, vec3_invalid, 1);
  CDOTA_Buff::AddParticle(this, Particle, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_Treant_Overgrowth::OnRefresh  (line 1272, @0x0000000002cd2120, libserver.so)
// calls: KeyValues::GetFloat
void __fastcall CDOTA_Modifier_Treant_Overgrowth::OnRefresh(
        CDOTA_Modifier_Treant_Overgrowth *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4
  float v5; // xmm1_4

  if ( KeyValues::GetFloat(pKV, "damage", v2) > this->damage )
    this->damage = KeyValues::GetFloat(pKV, "damage", v5);
}


// CDOTA_Modifier_Treant_Overgrowth::OnIntervalThink  (line 1284, @0x0000000002ccd810, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage
void __fastcall CDOTA_Modifier_Treant_Overgrowth::OnIntervalThink(CDOTA_Modifier_Treant_Overgrowth *const this)
{
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  float damage; // [rsp+Ch] [rbp-24h]

  damage = this->damage;
  if ( damage > 0.0 )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    Parent = CDOTA_Buff::GetParent(this);
    Caster = CDOTA_Buff::GetCaster(this);
    ApplyDamage(Caster, Parent, Ability, damage, 2, 0);
  }
}


// CDOTA_Modifier_Treant_Overgrowth::CheckState  (line 1296, @0x0000000002cc9dd0, libserver.so)  // inlines: Disable, Enable
void __fastcall CDOTA_Modifier_Treant_Overgrowth::CheckState(
        CDOTA_Modifier_Treant_Overgrowth *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nEnabledStateMask; // rax
  uint64 v3; // rdx

  m_nEnabledStateMask = buffState->m_nEnabledStateMask;
  LOBYTE(m_nEnabledStateMask) = buffState->m_nEnabledStateMask & 0x7F;
  v3 = buffState->m_nDisabledStateMask & 0xFFFFFFFFFFFFFFFCLL;
  LOBYTE(v3) = buffState->m_nDisabledStateMask & 0x7C | 0x80;
  buffState->m_nEnabledStateMask = m_nEnabledStateMask | 3;
  buffState->m_nDisabledStateMask = v3;
}


