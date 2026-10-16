// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_zuus.cpp:47
class CDOTA_Unit_ZeusCloud : public CDOTA_BaseNPC_Additive {
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
	CDOTA_Unit_ZeusCloud(CDOTA_Unit_ZeusCloud &);
	CDOTA_Unit_ZeusCloud(CDOTA_Unit_ZeusCloud &);
	CDOTA_Unit_ZeusCloud();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual float GetBonusFlyHeight();
	virtual bool IsFlyingVisually();
	virtual void Spawn(const CEntityKeyValues *);
	virtual ~CDOTA_Unit_ZeusCloud();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[490] GetBonusFlyHeight
	// vtable[489] IsFlyingVisually
	// vtable[8] Spawn
	// sizeof = 4504
};

// src/game/shared/dota/units/dota_unit_hero_zuus.cpp:80
class C_CDOTA_Unit_ZeusCloud_MapInstall {
	C_CDOTA_Unit_ZeusCloud_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_zuus.cpp:91
class CDOTA_Unit_Hero_Zuus : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Zuus(CDOTA_Unit_Hero_Zuus &);
	CDOTA_Unit_Hero_Zuus(CDOTA_Unit_Hero_Zuus &);
	CDOTA_Unit_Hero_Zuus();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnItemEquipped(CDOTA_Item *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual ~CDOTA_Unit_Hero_Zuus();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[479] OnItemEquipped
	// vtable[6] Precache
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_zuus.cpp:121
class C_CDOTA_Unit_Hero_Zuus_MapInstall {
	C_CDOTA_Unit_Hero_Zuus_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_zuus.cpp:179
class CDOTA_Ability_Zuus_ArcLightning : public CDOTABaseAbility {
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
	CDOTA_Ability_Zuus_ArcLightning(CDOTA_Ability_Zuus_ArcLightning &);
	CDOTA_Ability_Zuus_ArcLightning(CDOTA_Ability_Zuus_ArcLightning &);
	CDOTA_Ability_Zuus_ArcLightning();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Zuus_ArcLightning();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_zuus.cpp:230
class CDOTA_Modifier_Zuus_ArcLightning : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	int jump_count;  // +0xbac
	float jump_delay;  // +0xbb0
	int m_iCurJumpCount;  // +0xbb4

	CDOTA_Modifier_Zuus_ArcLightning();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual int GetAttributes();
	virtual ~CDOTA_Modifier_Zuus_ArcLightning();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[7] GetAttributes
	// sizeof = 3040
};

// src/game/shared/dota/units/dota_unit_hero_zuus.cpp:355
class CDOTA_Ability_Zuus_Cloud : public CDOTABaseAbility {
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
	CDOTA_Ability_Zuus_Cloud(CDOTA_Ability_Zuus_Cloud &);
	CDOTA_Ability_Zuus_Cloud(CDOTA_Ability_Zuus_Cloud &);
	CDOTA_Ability_Zuus_Cloud();
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
	virtual bool OnAbilityPhaseStart();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual ~CDOTA_Ability_Zuus_Cloud();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[266] OnSpellStart
	// vtable[264] OnAbilityPhaseStart
	// vtable[304] GetAssociatedSecondaryAbilities
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_zuus.cpp:382
class C_CDOTA_Ability_Zuus_Cloud_MapInstall {
	C_CDOTA_Ability_Zuus_Cloud_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_zuus.cpp:441
class CDOTA_Ability_Zuus_LightningBolt : public CDOTABaseAbility {
public:

private:

	bool m_bZeusHasArcana;  // +0x390
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
	CDOTA_Ability_Zuus_LightningBolt(CDOTA_Ability_Zuus_LightningBolt &);
	CDOTA_Ability_Zuus_LightningBolt(CDOTA_Ability_Zuus_LightningBolt &);
	CDOTA_Ability_Zuus_LightningBolt();
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
	void CastLightningBolt(CDOTA_BaseNPC *, CDOTA_BaseNPC *, bool);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual bool IsHiddenWhenStolen();
	virtual ~CDOTA_Ability_Zuus_LightningBolt();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[264] OnAbilityPhaseStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[306] IsHiddenWhenStolen
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_zuus.cpp:461
class C_CDOTA_Ability_Zuus_LightningBolt_MapInstall {
	C_CDOTA_Ability_Zuus_LightningBolt_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_zuus.cpp:638
class CDOTA_Modifier_Zuus_LightningBoltThinker : public CDOTA_Buff {
public:

	CDOTA_Modifier_Zuus_LightningBoltThinker();
	virtual bool IsHidden();
	virtual void OnDestroy();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual ~CDOTA_Modifier_Zuus_LightningBoltThinker();

	// vtable[11] IsHidden
	// vtable[60] OnDestroy
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_zuus.cpp:671
class CDOTA_Ability_Zuus_StaticField : public CDOTABaseAbility {
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
	CDOTA_Ability_Zuus_StaticField(CDOTA_Ability_Zuus_StaticField &);
	CDOTA_Ability_Zuus_StaticField(CDOTA_Ability_Zuus_StaticField &);
	CDOTA_Ability_Zuus_StaticField();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Zuus_StaticField();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_zuus.cpp:685
class CDOTA_Modifier_Zuus_StaticField : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	int damage_health_pct;  // +0xbac
	CDOTA_Modifier_Zuus_StaticField();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t OnAbilityExecuted(const CModifierParams &);
	virtual ~CDOTA_Modifier_Zuus_StaticField();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// vtable[89] OnAbilityExecuted
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_zuus.cpp:781
class CDOTA_Ability_Zuus_ThundergodsWrath : public CDOTABaseAbility {
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

public:

private:

	int m_nFXIndex;  // +0x390
	bool m_bZeusHasArcana;  // +0x394
	CDOTA_Ability_Zuus_ThundergodsWrath(CDOTA_Ability_Zuus_ThundergodsWrath &);
	CDOTA_Ability_Zuus_ThundergodsWrath(CDOTA_Ability_Zuus_ThundergodsWrath &);
	CDOTA_Ability_Zuus_ThundergodsWrath();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool OnAbilityPhaseStart();
	virtual void OnAbilityPhaseInterrupted();
	virtual bool ShouldSpeakAbilityConcept(int);
	virtual void FillTargetList(CUtlVector<CDOTA_BaseNPC*, CUtlMemory<CDOTA_BaseNPC*, int> > *);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Zuus_ThundergodsWrath();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[298] ShouldSpeakAbilityConcept
	// vtable[333] FillTargetList
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_zuus.cpp:980
class CDOTA_Modifier_Zuus_ThundergodsWrathThinker : public CDOTA_Buff {
public:

	CDOTA_Modifier_Zuus_ThundergodsWrathThinker();
	virtual bool IsHidden();
	virtual void OnDestroy();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual ~CDOTA_Modifier_Zuus_ThundergodsWrathThinker();

	// vtable[11] IsHidden
	// vtable[60] OnDestroy
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_zuus.cpp:1013
class CDOTA_Ability_Zuus_ThundergodsVengeance : public CDOTA_Ability_Zuus_ThundergodsWrath {
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
	CDOTA_Ability_Zuus_ThundergodsVengeance(CDOTA_Ability_Zuus_ThundergodsVengeance &);
	CDOTA_Ability_Zuus_ThundergodsVengeance(CDOTA_Ability_Zuus_ThundergodsVengeance &);
	CDOTA_Ability_Zuus_ThundergodsVengeance();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void FillTargetList(CUtlVector<CDOTA_BaseNPC*, CUtlMemory<CDOTA_BaseNPC*, int> > *);
	virtual ~CDOTA_Ability_Zuus_ThundergodsVengeance();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[333] FillTargetList
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_zuus.cpp:1070
class CDOTA_Modifier_Zuus_Cloud : public CDOTA_Buff {
public:

private:

	float cloud_bolt_interval;  // +0xbc0
	int cloud_radius;  // +0xbc4
	CDOTA_Modifier_Zuus_Cloud();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual bool DestroyOnExpire();
	virtual void DeclareFunctions();
	ModifierVariant_t GetAbsoluteNoDamagePhysical(const CModifierParams &);
	ModifierVariant_t GetAbsoluteNoDamageMagical(const CModifierParams &);
	ModifierVariant_t GetAbsoluteNoDamagePure(const CModifierParams &);
	ModifierVariant_t OnAttacked(const CModifierParams &);
	virtual ~CDOTA_Modifier_Zuus_Cloud();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[61] DestroyOnExpire
	// vtable[65] DeclareFunctions
	// sizeof = 3016
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_ZeusCloud::~CDOTA_Unit_ZeusCloud  (line 47, @0x0000000002a64a20, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_Unit_ZeusCloud::~CDOTA_Unit_ZeusCloud(CDOTA_Unit_ZeusCloud *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_Unit_ZeusCloud::~CDOTA_Unit_ZeusCloud  (line 47, @0x0000000002a64a70, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_Unit_ZeusCloud
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_ZeusCloud::~CDOTA_Unit_ZeusCloud(CDOTA_Unit_ZeusCloud *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_ZeusCloud::Schema_DynamicBinding  (line 49, @0x0000000002a62490, libserver.so)
// globals: CDOTA_Unit_ZeusCloud::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_ZeusCloud::Schema_DynamicBinding(
        const CDOTA_Unit_ZeusCloud *const this)
{
  return CDOTA_Unit_ZeusCloud::s_pSchemaBinding;
}


// CDOTA_Unit_ZeusCloud::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 49, @0x0000000002a624c0, libserver.so)
// globals: CDOTA_Unit_ZeusCloud::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_ZeusCloud::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_ZeusCloud::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_ZeusCloud::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_ZeusCloud::CEntityInstanceEntityClass::DestructInstance  (line 49, @0x0000000002a624d0, libserver.so)  // inlines: Destruct<CDOTA_Unit_ZeusCloud>
void __fastcall CDOTA_Unit_ZeusCloud::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_ZeusCloud::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_ZeusCloud::CEntityInstanceEntityClass::FreeInstance  (line 49, @0x0000000002a624f0, libserver.so)
void __fastcall CDOTA_Unit_ZeusCloud::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_ZeusCloud::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_ZeusCloud::CEntityInstanceEntityClass::CanAllocate  (line 49, @0x0000000002a62510, libserver.so)
bool __fastcall CDOTA_Unit_ZeusCloud::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_ZeusCloud::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_ZeusCloud::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 49, @0x0000000002a62520, libserver.so)
// globals: CDOTA_Unit_ZeusCloud::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_ZeusCloud::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_ZeusCloud::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_ZeusCloud::s_pSchemaBinding;
}


// CDOTA_Unit_ZeusCloud::CEntityInstanceEntityClass::AllocateInstance  (line 49, @0x0000000002a645f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_ZeusCloud::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_ZeusCloud::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4504);
  memset(v1, 0, 0x1198u);
  return v1;
}


// CDOTA_Unit_ZeusCloud::CEntityInstanceEntityClass::ConstructInstance  (line 49, @0x0000000002a64920, libserver.so)  // inlines: CDOTA_BaseNPC_Additive, CDOTA_Unit_ZeusCloud, Construct<CDOTA_Unit_ZeusCloud>
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_Unit_ZeusCloud::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_ZeusCloud::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *p = &off_43BE2D0;
    *(p + 236) = &off_43BF238;
    *(p + 257) = &off_43BF568;
  }
  return p;
}


// CDOTA_Unit_ZeusCloud::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 49, @0x0000000002a6b4c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_ZeusCloud::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_ZeusCloud::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_ZeusCloud::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 49, @0x0000000002a6b600, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_ZeusCloud::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_ZeusCloud::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_ZeusCloud::GetEntityClassInternal  (line 49, @0x0000000002a75c60, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC::InitScriptDesc, CDOTA_BaseNPC_Additive::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "npc_dota_zeus_cloud", "CDOTA_Unit_ZeusCloud"
// globals: `guard variable for'CDOTA_Unit_ZeusCloud::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_ZeusCloudClass, CDOTA_Unit_ZeusCloud::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_ZeusCloudClass, __dso_handle, CDOTA_Unit_ZeusCloud::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_ZeusCloud::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_ZeusCloudClassInfo, CDOTA_Unit_ZeusCloud::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_ZeusCloudClassInfo
CEntityClass *__cdecl CDOTA_Unit_ZeusCloud::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_ZeusCloud::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_ZeusCloudClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_ZeusCloud::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_ZeusCloudClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_ZeusCloud::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_ZeusCloudClass);
    CDOTA_Unit_ZeusCloud::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_ZeusCloudClass._vptr_CEntityClass = off_43BE250;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_ZeusCloud::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_ZeusCloudClass);
    __cxa_atexit(
      CDOTA_Unit_ZeusCloud::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_ZeusCloud::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_ZeusCloudClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_ZeusCloudClass != 0 )
    return &CDOTA_Unit_ZeusCloud::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_ZeusCloudClass;
  if ( `guard variable for'CDOTA_Unit_ZeusCloud::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_ZeusCloudClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_ZeusCloud::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_ZeusCloudClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Additive::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_ZeusCloud::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_ZeusCloudClassInfo,
      "CDOTA_Unit_ZeusCloud",
      "npc_dota_zeus_cloud",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_ZeusCloud::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_ZeusCloudClassInfo);
  }
  CDOTA_Unit_ZeusCloud::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_ZeusCloudClass.m_pClassInfo = &CDOTA_Unit_ZeusCloud::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_ZeusCloudClassInfo;
  CDOTA_Unit_ZeusCloud::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_ZeusCloudClass.m_pBaseClassInfo = CDOTA_Unit_ZeusCloud::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_ZeusCloudClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_ZeusCloudClass = &CDOTA_Unit_ZeusCloud::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_ZeusCloudClass;
  CDOTA_Unit_ZeusCloud::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_ZeusCloudClassInfo.m_pClass = &CDOTA_Unit_ZeusCloud::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_ZeusCloudClass;
  CDOTA_Unit_ZeusCloud::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_ZeusCloudClass.m_pScriptClassDesc = CDOTA_BaseNPC::InitScriptDesc();
  g_pEntityCDOTA_Unit_ZeusCloudClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_ZeusCloud::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_ZeusCloudClass;
}


// CDOTA_Unit_ZeusCloud::GetBonusFlyHeight  (line 52, @0x0000000002a62530, libserver.so)
float __fastcall CDOTA_Unit_ZeusCloud::GetBonusFlyHeight(CDOTA_Unit_ZeusCloud *const this)
{
  return 350.0;
}


// CDOTA_Unit_ZeusCloud::IsFlyingVisually  (line 54, @0x0000000002a62540, libserver.so)
bool __fastcall CDOTA_Unit_ZeusCloud::IsFlyingVisually(CDOTA_Unit_ZeusCloud *const this)
{
  return 1;
}


// CDOTA_Unit_ZeusCloud::Spawn  (line 56, @0x0000000002a68320, libserver.so)  // inlines: QAngle, SetHasInventory
// calls: CDOTA_BaseNPC::Spawn, CDOTABody::StartAnimation, CBaseEntity::SetAbsAngles
void __fastcall CDOTA_Unit_ZeusCloud::Spawn(CDOTA_Unit_ZeusCloud *const this, const CEntityKeyValues *pKeyValues)
{
  int (**vptr_IHandleEntity)(...); // rax
  CDOTABody *v4; // rax
  QAngle angles; // [rsp+0h] [rbp-20h] BYREF

  CDOTA_BaseNPC::Spawn(this, pKeyValues);
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  this->m_bHasInventory = 0;
  v4 = (vptr_IHandleEntity[377])(this);
  CDOTABody::StartAnimation(v4, 0x5DCu, 1, 1.0);
  angles.y = -90.0;
  angles.x = 0.0;
  angles.z = 0.0;
  CBaseEntity::SetAbsAngles(this, &angles);
}


// CDOTA_Unit_ZeusCloud::YouForgotToImplementOrDeclareServerClass  (line 80, @0x0000000002a3fd90, libserver.so)
int __fastcall CDOTA_Unit_ZeusCloud::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_ZeusCloud *const this)
{
  return 0;
}


// CDOTA_Unit_ZeusCloud::GetServerClass  (line 80, @0x0000000002a489f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_ZeusCloud::GetServerClass(CDOTA_Unit_ZeusCloud *const this)
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


// CDOTA_Unit_Hero_Zuus::~CDOTA_Unit_Hero_Zuus  (line 91, @0x0000000002a68280, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Zuus::~CDOTA_Unit_Hero_Zuus(CDOTA_Unit_Hero_Zuus *const this)
{
  this->_vptr_IHandleEntity = &off_43BF650;
  this->_vptr_INextBotEventResponder = &off_43C0630;
  this->_vptr_CObstructionObject = &off_43C0960;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Zuus::~CDOTA_Unit_Hero_Zuus  (line 91, @0x0000000002a682c0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Zuus
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Zuus::~CDOTA_Unit_Hero_Zuus(CDOTA_Unit_Hero_Zuus *const this)
{
  this->_vptr_IHandleEntity = &off_43BF650;
  this->_vptr_INextBotEventResponder = &off_43C0630;
  this->_vptr_CObstructionObject = &off_43C0960;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Zuus::Schema_DynamicBinding  (line 93, @0x0000000002a62550, libserver.so)
// globals: CDOTA_Unit_Hero_Zuus::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Zuus::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Zuus *const this)
{
  return CDOTA_Unit_Hero_Zuus::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Zuus::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 93, @0x0000000002a62580, libserver.so)
// globals: CDOTA_Unit_Hero_Zuus::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Zuus::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Zuus::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Zuus::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Zuus::CEntityInstanceEntityClass::DestructInstance  (line 93, @0x0000000002a62590, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Zuus>
void __fastcall CDOTA_Unit_Hero_Zuus::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Zuus::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Zuus::CEntityInstanceEntityClass::FreeInstance  (line 93, @0x0000000002a625b0, libserver.so)
void __fastcall CDOTA_Unit_Hero_Zuus::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Zuus::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Zuus::CEntityInstanceEntityClass::CanAllocate  (line 93, @0x0000000002a625d0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Zuus::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Zuus::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Zuus::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 93, @0x0000000002a625e0, libserver.so)
// globals: CDOTA_Unit_Hero_Zuus::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Zuus::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Zuus::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Zuus::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Zuus::CEntityInstanceEntityClass::AllocateInstance  (line 93, @0x0000000002a64630, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Zuus::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Zuus::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Zuus::CEntityInstanceEntityClass::ConstructInstance  (line 93, @0x0000000002a65e10, libserver.so)  // inlines: CDOTA_Unit_Hero_Zuus, Construct<CDOTA_Unit_Hero_Zuus>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Zuus::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Zuus::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_43BF650;
    *(p + 236) = &off_43C0630;
    *(p + 257) = &off_43C0960;
  }
  return p;
}


// CDOTA_Unit_Hero_Zuus::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 93, @0x0000000002a6b5a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Zuus::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Zuus::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Zuus::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 93, @0x0000000002a6b690, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Zuus::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Zuus::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Zuus::GetEntityClassInternal  (line 93, @0x0000000002a75db0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "npc_dota_hero_zuus", "CDOTA_Unit_Hero_Zuus"
// globals: `guard variable for'CDOTA_Unit_Hero_Zuus::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ZuusClass, CDOTA_Unit_Hero_Zuus::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ZuusClass, __dso_handle, CDOTA_Unit_Hero_Zuus::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Zuus::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ZuusClassInfo, CDOTA_Unit_Hero_Zuus::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ZuusClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Zuus::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Zuus::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ZuusClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Zuus::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ZuusClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Zuus::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ZuusClass);
    CDOTA_Unit_Hero_Zuus::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ZuusClass._vptr_CEntityClass = off_43BF5D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Zuus::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ZuusClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Zuus::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Zuus::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ZuusClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_ZuusClass != 0 )
    return &CDOTA_Unit_Hero_Zuus::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ZuusClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Zuus::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ZuusClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Zuus::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ZuusClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Zuus::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ZuusClassInfo,
      "CDOTA_Unit_Hero_Zuus",
      "npc_dota_hero_zuus",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Zuus::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ZuusClassInfo);
  }
  CDOTA_Unit_Hero_Zuus::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ZuusClass.m_pClassInfo = &CDOTA_Unit_Hero_Zuus::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ZuusClassInfo;
  CDOTA_Unit_Hero_Zuus::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ZuusClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Zuus::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ZuusClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_ZuusClass = &CDOTA_Unit_Hero_Zuus::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ZuusClass;
  CDOTA_Unit_Hero_Zuus::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ZuusClassInfo.m_pClass = &CDOTA_Unit_Hero_Zuus::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ZuusClass;
  CDOTA_Unit_Hero_Zuus::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ZuusClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_ZuusClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Zuus::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ZuusClass;
}


// CDOTA_Unit_Hero_Zuus::Precache  (line 112, @0x0000000002a41f40, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Precache, DOTA_PrecacheUnitByNameSync
// strings: "npc_dota_zeus_cloud"
void __fastcall CDOTA_Unit_Hero_Zuus::Precache(
        CDOTA_Unit_Hero_Zuus *const this,
        const CEntityPrecacheContext *pContext)
{
  CDOTA_BaseNPC_Hero::Precache(this, pContext);
  DOTA_PrecacheUnitByNameSync("npc_dota_zeus_cloud", pContext->m_pManifest, -1);
}


// CDOTA_Unit_Hero_Zuus::YouForgotToImplementOrDeclareServerClass  (line 121, @0x0000000002a3fda0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Zuus::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Zuus *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Zuus::GetServerClass  (line 121, @0x0000000002a48970, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Zuus::GetServerClass(CDOTA_Unit_Hero_Zuus *const this)
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


// CDOTA_Unit_Hero_Zuus::OnItemEquipped  (line 131, @0x0000000002a448a0, libserver.so)  // inlines: FStrEq, GetAbilityName, GetPlayerOwnerID, NetworkStateChanged, Set, SetDroppable, SetSellable, _V_strcmp, operator=<bool>
// calls: CDOTA_BaseNPC::OnItemEquipped, CDOTA_Item::ExpireSellback, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::SetHidden, CDOTABaseAbility::UpgradeAbility
// strings: "item_ultimate_scepter"
void __fastcall CDOTA_Unit_Hero_Zuus::OnItemEquipped(CDOTA_Unit_Hero_Zuus *const this, CDOTA_Item *pItem)
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
          AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "zuus_cloud", 0);
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


// CDOTA_Ability_Zuus_ArcLightning::~CDOTA_Ability_Zuus_ArcLightning  (line 179, @0x0000000002a67af0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Zuus_ArcLightning::~CDOTA_Ability_Zuus_ArcLightning(
        CDOTA_Ability_Zuus_ArcLightning *const this)
{
  this->_vptr_IHandleEntity = &off_43C0A30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Zuus_ArcLightning::~CDOTA_Ability_Zuus_ArcLightning  (line 179, @0x0000000002a67b10, libserver.so)  // inlines: ~CDOTA_Ability_Zuus_ArcLightning
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Zuus_ArcLightning::~CDOTA_Ability_Zuus_ArcLightning(
        CDOTA_Ability_Zuus_ArcLightning *const this)
{
  this->_vptr_IHandleEntity = &off_43C0A30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Zuus_ArcLightning::Schema_DynamicBinding  (line 181, @0x0000000002a625f0, libserver.so)
// globals: CDOTA_Ability_Zuus_ArcLightning::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Zuus_ArcLightning::Schema_DynamicBinding(
        const CDOTA_Ability_Zuus_ArcLightning *const this)
{
  return CDOTA_Ability_Zuus_ArcLightning::s_pSchemaBinding;
}


// CDOTA_Ability_Zuus_ArcLightning::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 181, @0x0000000002a62600, libserver.so)
// globals: CDOTA_Ability_Zuus_ArcLightning::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Zuus_ArcLightning::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Zuus_ArcLightning::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Zuus_ArcLightning::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Zuus_ArcLightning::CEntityInstanceEntityClass::DestructInstance  (line 181, @0x0000000002a62610, libserver.so)  // inlines: Destruct<CDOTA_Ability_Zuus_ArcLightning>
void __fastcall CDOTA_Ability_Zuus_ArcLightning::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Zuus_ArcLightning::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Zuus_ArcLightning::CEntityInstanceEntityClass::FreeInstance  (line 181, @0x0000000002a62630, libserver.so)
void __fastcall CDOTA_Ability_Zuus_ArcLightning::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Zuus_ArcLightning::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Zuus_ArcLightning::CEntityInstanceEntityClass::CanAllocate  (line 181, @0x0000000002a62650, libserver.so)
bool __fastcall CDOTA_Ability_Zuus_ArcLightning::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Zuus_ArcLightning::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Zuus_ArcLightning::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 181, @0x0000000002a62660, libserver.so)
// globals: CDOTA_Ability_Zuus_ArcLightning::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Zuus_ArcLightning::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Zuus_ArcLightning::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Zuus_ArcLightning::s_pSchemaBinding;
}


// CDOTA_Ability_Zuus_ArcLightning::CEntityInstanceEntityClass::AllocateInstance  (line 181, @0x0000000002a64670, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Zuus_ArcLightning::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Zuus_ArcLightning::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Zuus_ArcLightning::CEntityInstanceEntityClass::ConstructInstance  (line 181, @0x0000000002a66490, libserver.so)  // inlines: CDOTA_Ability_Zuus_ArcLightning, Construct<CDOTA_Ability_Zuus_ArcLightning>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Zuus_ArcLightning::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Zuus_ArcLightning::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43C0A30;
  }
  return p;
}


// CDOTA_Ability_Zuus_ArcLightning::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 181, @0x0000000002a6b290, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Zuus_ArcLightning::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Zuus_ArcLightning::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Zuus_ArcLightning::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 181, @0x0000000002a6b2b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Zuus_ArcLightning::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Zuus_ArcLightning::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Zuus_ArcLightning::GetEntityClassInternal  (line 181, @0x0000000002a75f00, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "CDOTA_Ability_Zuus_ArcLightning"
// globals: `guard variable for'CDOTA_Ability_Zuus_ArcLightning::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ArcLightningClass, CDOTA_Ability_Zuus_ArcLightning::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ArcLightningClass, __dso_handle, CDOTA_Ability_Zuus_ArcLightning::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Zuus_ArcLightning::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_ArcLightningClassInfo, CDOTA_Ability_Zuus_ArcLightning::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_ArcLightningClassInfo
CEntityClass *__cdecl CDOTA_Ability_Zuus_ArcLightning::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Zuus_ArcLightning::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ArcLightningClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Zuus_ArcLightning::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ArcLightningClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Zuus_ArcLightning::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ArcLightningClass);
    CDOTA_Ability_Zuus_ArcLightning::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ArcLightningClass._vptr_CEntityClass = off_43C09B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Zuus_ArcLightning::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ArcLightningClass);
    __cxa_atexit(
      CDOTA_Ability_Zuus_ArcLightning::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Zuus_ArcLightning::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ArcLightningClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Zuus_ArcLightningClass != 0 )
    return &CDOTA_Ability_Zuus_ArcLightning::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ArcLightningClass;
  if ( `guard variable for'CDOTA_Ability_Zuus_ArcLightning::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_ArcLightningClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Zuus_ArcLightning::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_ArcLightningClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Zuus_ArcLightning::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_ArcLightningClassInfo,
      "CDOTA_Ability_Zuus_ArcLightning",
      "zuus_arc_lightning",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Zuus_ArcLightning::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_ArcLightningClassInfo);
  }
  CDOTA_Ability_Zuus_ArcLightning::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ArcLightningClass.m_pClassInfo = &CDOTA_Ability_Zuus_ArcLightning::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_ArcLightningClassInfo;
  CDOTA_Ability_Zuus_ArcLightning::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ArcLightningClass.m_pBaseClassInfo = CDOTA_Ability_Zuus_ArcLightning::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_ArcLightningClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Zuus_ArcLightningClass = &CDOTA_Ability_Zuus_ArcLightning::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ArcLightningClass;
  CDOTA_Ability_Zuus_ArcLightning::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_ArcLightningClassInfo.m_pClass = &CDOTA_Ability_Zuus_ArcLightning::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ArcLightningClass;
  CDOTA_Ability_Zuus_ArcLightning::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ArcLightningClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Zuus_ArcLightningClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Zuus_ArcLightning::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ArcLightningClass;
}


// CDOTA_Ability_Zuus_ArcLightning::OnSpellStart  (line 193, @0x0000000002a40e50, libserver.so)  // inlines: ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, KeyValues::KeyValues, KeyValues::SetPtr, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_zuus_arc_lightning", "Hero_Zuus.ArcLightning.Cast"
void __fastcall CDOTA_Ability_Zuus_ArcLightning::OnSpellStart(CDOTA_Ability_Zuus_ArcLightning *const this)
{
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v3; // r12
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    KeyValues::KeyValues(&kv, "modifier_zuus_arc_lightning");
    KeyValues::SetPtr(&kv, "target", v3);
    Caster = CDOTABaseAbility::GetCaster(this);
    v5 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v5, Caster, this, "modifier_zuus_arc_lightning", &kv, 0);
    v6 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v6, "Hero_Zuus.ArcLightning.Cast", 0.0, 0, 0);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_Zuus_ArcLightning::GetAbilityDamageToTargetOverInterval  (line 210, @0x0000000002a54510, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetHealth, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "damage_health_pct"
__int64 __fastcall CDOTA_Ability_Zuus_ArcLightning::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Zuus_ArcLightning *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int v5; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int LevelSpecialValue; // r13d
  int v11; // ebx

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    v5 = 0;
    Caster = CDOTABaseAbility::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "zuus_static_field", 0);
    if ( AbilityByName != 0 )
    {
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "damage_health_pct", -1, 1);
      v5 = CBaseEntity::GetHealth(pTarget) * LevelSpecialValue / 100;
    }
    v11 = (*(this->_vptr_IHandleEntity + 247))(this);
    return ((v11 + v5) * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Modifier_Zuus_ArcLightning::~CDOTA_Modifier_Zuus_ArcLightning  (line 230, @0x0000000002a76f90, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Zuus_ArcLightning::~CDOTA_Modifier_Zuus_ArcLightning(
        CDOTA_Modifier_Zuus_ArcLightning *const this)
{
  this->_vptr_CDOTA_Buff = &off_43C14F0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
  if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory),
        (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Zuus_ArcLightning::~CDOTA_Modifier_Zuus_ArcLightning  (line 230, @0x0000000002a77070, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_Zuus_ArcLightning, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Zuus_ArcLightning::~CDOTA_Modifier_Zuus_ArcLightning(
        CDOTA_Modifier_Zuus_ArcLightning *const this)
{
  this->_vptr_CDOTA_Buff = &off_43C14F0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
  if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
    if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Zuus_ArcLightning::IsHidden  (line 235, @0x0000000002a62670, libserver.so)
bool __fastcall CDOTA_Modifier_Zuus_ArcLightning::IsHidden(CDOTA_Modifier_Zuus_ArcLightning *const this)
{
  return 1;
}


// CDOTA_Modifier_Zuus_ArcLightning::IsPurgable  (line 236, @0x0000000002a62680, libserver.so)
bool __fastcall CDOTA_Modifier_Zuus_ArcLightning::IsPurgable(CDOTA_Modifier_Zuus_ArcLightning *const this)
{
  return 0;
}


// CDOTA_Modifier_Zuus_ArcLightning::GetAttributes  (line 242, @0x0000000002a62690, libserver.so)
int __fastcall CDOTA_Modifier_Zuus_ArcLightning::GetAttributes(CDOTA_Modifier_Zuus_ArcLightning *const this)
{
  return 2;
}


// CDOTA_Modifier_Zuus_ArcLightning::OnCreated  (line 259, @0x0000000002a5e5b0, libserver.so)  // inlines: AddToTail, AssignTo, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, DotaRetrieveAbilityValue<float>, Element, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetSerialNumber, GrowMemory, InState, IsInvulnerable, Set, ToDOTABaseNPC, operator=, operator[]
// calls: KeyValues::GetPtr, CDOTA_Buff::Destroy, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::TriggerSpellAbsorb, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt (16 total)
// strings: "jump_count", "jump_delay", "particles/units/heroes/hero_zuus/zuus_arc_lightning_head.vpcf", "attach_attack1", "attach_hitloc"
void __fastcall CDOTA_Modifier_Zuus_ArcLightning::OnCreated(
        CDOTA_Modifier_Zuus_ArcLightning *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Ptr; // rax
  CDOTA_BaseNPC *v4; // r12
  unsigned __int64 m_Value; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rdi
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v14; // r15
  CDOTA_ParticleManager *v15; // rax
  const Vector *v16; // r14
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  CDOTABaseAbility *v19; // rax
  CDOTABaseAbility *v20; // r13
  CDOTA_BaseNPC *v21; // rax
  float v22; // xmm1_4
  CEntityIdentity *m_pEntity; // rax
  __int16 v24; // cx
  __int64 m_Size; // r12
  int v26; // eax
  CHandle<CBaseEntity> *v27; // rax
  int v28; // [rsp+10h] [rbp-40h]

  Ptr = KeyValues::GetPtr(pKV, "target", 0);
  v4 = Ptr;
  if ( Ptr == 0
    || !Ptr->m_bIsDOTANPC
    || Ptr->m_bIsWaitingToSpawn.m_Value
    || ((m_Value = Ptr->m_nUnitState64.m_Value) & 0x100) != 0
    || (m_Value & 0x200) != 0
    || (v6 = CDOTA_Buff::GetAbility(this), CDOTA_BaseNPC::TriggerSpellAbsorb(v4, v6, 1)) )
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
  else
  {
    Ability = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<int>(Ability, &this->radius, "radius");
    v8 = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<int>(v8, &this->jump_count, "jump_count");
    v9 = CDOTA_Buff::GetAbility(this);
    if ( v9 != 0 )
      this->jump_delay = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v9, "jump_delay", -1, 0);
    else
      this->jump_delay = 0.0;
    this->m_iCurJumpCount = 1;
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_zuus/zuus_arc_lightning_head.vpcf",
                 2,
                 0,
                 0,
                 0);
    Caster = CDOTA_Buff::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
    v14 = CDOTA_Buff::GetCaster(this);
    v15 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v15, Particle, 0, v14, 5, "attach_attack1", *AbsOrigin, 1);
    v16 = CBaseEntity::GetAbsOrigin(v4);
    v17 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v17, Particle, 1, v4, 5, "attach_hitloc", *v16, 1);
    v18 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v18, Particle);
    v19 = CDOTA_Buff::GetAbility(this);
    LODWORD(v16) = (*(v19->_vptr_IHandleEntity + 247))(v19);
    v20 = CDOTA_Buff::GetAbility(this);
    v21 = CDOTA_Buff::GetCaster(this);
    ApplyDamage(v21, v4, v20, v16, 2, 0);
    v28 = -1;
    this->m_vCurTargetLoc = *CBaseEntity::GetAbsOrigin(v4);
    m_pEntity = v4->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v24 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v24 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v28 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v24 & 0x7FFF;
    }
    m_Size = this->m_hHitEntities.m_Size;
    v26 = this->m_hHitEntities.m_Size;
    if ( m_Size == this->m_hHitEntities.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hHitEntities.m_Memory, 1);
      v26 = this->m_hHitEntities.m_Size;
    }
    this->m_hHitEntities.m_Size = v26 + 1;
    v27 = &this->m_hHitEntities.m_Memory.m_pMemory[m_Size];
    if ( v27 != 0 )
      v27->m_Index = v28;
    CDOTA_Buff::StartIntervalThink(this, this->jump_delay, v22);
  }
}


// CDOTA_Modifier_Zuus_ArcLightning::OnIntervalThink  (line 293, @0x0000000002a5ec30, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, GrowMemory, HasElement, IndexToIdentity, IsValid, LookupEntity, Purge, Set, ToDOTABaseNPC, VectorAdd, operator CBaseEntity*, operator CEntityInstance*, operator+, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_Buff::Destroy, CDOTA_Buff::GetCaster, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Remove, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CDOTA_Buff::GetAbility, ApplyDamage, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex (20 total)
// strings: "particles/units/heroes/hero_zuus/zuus_arc_lightning.vpcf", "attach_hitloc", "Hero_Zuus.ArcLightning.Target"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Zuus_ArcLightning::OnIntervalThink(CDOTA_Modifier_Zuus_ArcLightning *const this)
{
  __m128i v1; // xmm3
  float v3; // r15d
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_BaseNPC *v5; // rax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CEntityIdentity *m_pEntity; // rdx
  int v10; // eax
  __int16 v11; // cx
  CDOTABaseAbility *Ability; // rax
  __m128i v13; // xmm4
  float v14; // r15d
  CDOTABaseAbility *v15; // r14
  CDOTA_BaseNPC *v16; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  float v18; // xmm0_4
  CHandle<CBaseEntity> v19; // xmm1_4
  CDOTA_ParticleManager *v20; // rax
  CDOTA_ParticleManager *v21; // rax
  CDOTA_ParticleManager *v22; // rax
  CEntityIdentity *v23; // rax
  __int16 v24; // cx
  __int64 m_Size; // r12
  int v26; // eax
  CHandle<CBaseEntity> *v27; // rax
  char v28; // r12
  int v29; // [rsp+20h] [rbp-170h]
  CHandle<CBaseEntity> src[2]; // [rsp+30h] [rbp-160h] BYREF
  float v31; // [rsp+38h] [rbp-158h]
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> hEntities; // [rsp+40h] [rbp-150h] BYREF
  unsigned __int64 v33; // [rsp+158h] [rbp-38h]

  v33 = __readfsqword(0x28u);
  if ( this->m_iCurJumpCount >= this->jump_count )
    goto LABEL_2;
  *v1.m128i_i32 = this->radius;
  hEntities.m_Size = 0;
  hEntities.m_Memory.m_nAllocationCount = 64;
  hEntities.m_Memory.m_nGrowSize = 0x80000000;
  hEntities.m_Memory.m_pMemory = &hEntities.m_FixedMemory;
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  Caster = CDOTA_Buff::GetCaster(this);
  v5 = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(v5->m_iTeamNum.m_Value, &this->m_vCurTargetLoc, Caster, v3, &hEntities, 2, 19, 384, 1, 0);
  while ( 1 )
  {
    if ( hEntities.m_Size <= 0 )
    {
      v28 = 0;
      goto LABEL_28;
    }
    if ( hEntities.m_Memory.m_pMemory->m_Index + 2 > 1 )
    {
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(hEntities.m_Memory.m_pMemory->m_Index >> 9) & 0x3F];
      if ( v6 != 0 )
      {
        v7 = &v6[hEntities.m_Memory.m_pMemory->m_Index & 0x1FF];
        if ( v7 != 0 && hEntities.m_Memory.m_pMemory->m_Index == v7->m_EHandle.m_Index )
        {
          m_pInstance = v7->m_pInstance;
          if ( v7->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
          {
            src[0].m_Index = -1;
            m_pEntity = m_pInstance->m_pEntity;
            if ( m_pEntity != 0 )
            {
              v10 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
              v11 = 0x7FFF;
              if ( m_pEntity->m_EHandle.m_Index != -1 )
                v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
              LOWORD(src[0].m_Index) = v11 | src[0].m_Index & 0x8000;
              src[0].m_Index = (v10 << 15) | src[0].m_Index & 0x7FFF;
            }
            if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                   &this->m_hHitEntities,
                   src) < 0 )
              break;
          }
        }
      }
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&hEntities, 0);
  }
  Ability = CDOTA_Buff::GetAbility(this);
  *v13.m128i_i32 = (*(Ability->_vptr_IHandleEntity + 247))(Ability);
  v14 = COERCE_FLOAT(_mm_cvtsi128_si32(v13));
  v15 = CDOTA_Buff::GetAbility(this);
  v16 = CDOTA_Buff::GetCaster(this);
  ApplyDamage(v16, m_pInstance, v15, v14, 2, 0);
  ParticleManager = GetParticleManager();
  LODWORD(v15) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_zuus/zuus_arc_lightning.vpcf",
                   2,
                   m_pInstance,
                   0,
                   0);
  v18 = this->m_vCurTargetLoc.z + 100.0;
  *&v19.m_Index = this->m_vCurTargetLoc.x + 0.0;
  *&src[1].m_Index = this->m_vCurTargetLoc.y + 0.0;
  v31 = v18;
  src[0] = v19;
  v20 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v20, v15, 0, *&src[0].m_Index, v31);
  v21 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v21, v15, 1, m_pInstance, 5, "attach_hitloc", vec3_invalid, 1);
  v22 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v22, v15);
  CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Zuus.ArcLightning.Target", 0.0, 0, 0);
  v29 = -1;
  this->m_vCurTargetLoc = *CBaseEntity::GetAbsOrigin(m_pInstance);
  v23 = m_pInstance->m_pEntity;
  if ( v23 != 0 )
  {
    v24 = 0x7FFF;
    if ( v23->m_EHandle.m_Index != -1 )
      v24 = v23->m_EHandle.m_Index & 0x7FFF;
    v29 = (((v23->m_EHandle.m_Index >> 15) - (v23->m_flags & 1)) << 15) | v24 & 0x7FFF;
  }
  m_Size = this->m_hHitEntities.m_Size;
  v26 = this->m_hHitEntities.m_Size;
  if ( m_Size == this->m_hHitEntities.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hHitEntities.m_Memory, 1);
    v26 = this->m_hHitEntities.m_Size;
  }
  this->m_hHitEntities.m_Size = v26 + 1;
  v27 = &this->m_hHitEntities.m_Memory.m_pMemory[m_Size];
  if ( v27 != 0 )
    v27->m_Index = v29;
  ++this->m_iCurJumpCount;
  v28 = 1;
LABEL_28:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hEntities);
  if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
    if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
  }
  if ( v28 == 0 )
LABEL_2:
    CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Ability_Zuus_Cloud::~CDOTA_Ability_Zuus_Cloud  (line 355, @0x0000000002a67b40, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Zuus_Cloud::~CDOTA_Ability_Zuus_Cloud(CDOTA_Ability_Zuus_Cloud *const this)
{
  this->_vptr_IHandleEntity = &off_43C1850;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Zuus_Cloud::~CDOTA_Ability_Zuus_Cloud  (line 355, @0x0000000002a67b60, libserver.so)  // inlines: ~CDOTA_Ability_Zuus_Cloud
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Zuus_Cloud::~CDOTA_Ability_Zuus_Cloud(CDOTA_Ability_Zuus_Cloud *const this)
{
  this->_vptr_IHandleEntity = &off_43C1850;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Zuus_Cloud::Schema_DynamicBinding  (line 357, @0x0000000002a626a0, libserver.so)
// globals: CDOTA_Ability_Zuus_Cloud::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Zuus_Cloud::Schema_DynamicBinding(
        const CDOTA_Ability_Zuus_Cloud *const this)
{
  return CDOTA_Ability_Zuus_Cloud::s_pSchemaBinding;
}


// CDOTA_Ability_Zuus_Cloud::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 357, @0x0000000002a626b0, libserver.so)
// globals: CDOTA_Ability_Zuus_Cloud::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Zuus_Cloud::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Zuus_Cloud::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Zuus_Cloud::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Zuus_Cloud::CEntityInstanceEntityClass::DestructInstance  (line 357, @0x0000000002a626c0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Zuus_Cloud>
void __fastcall CDOTA_Ability_Zuus_Cloud::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Zuus_Cloud::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Zuus_Cloud::CEntityInstanceEntityClass::FreeInstance  (line 357, @0x0000000002a626e0, libserver.so)
void __fastcall CDOTA_Ability_Zuus_Cloud::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Zuus_Cloud::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Zuus_Cloud::CEntityInstanceEntityClass::CanAllocate  (line 357, @0x0000000002a62700, libserver.so)
bool __fastcall CDOTA_Ability_Zuus_Cloud::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Zuus_Cloud::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Zuus_Cloud::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 357, @0x0000000002a62710, libserver.so)
// globals: CDOTA_Ability_Zuus_Cloud::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Zuus_Cloud::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Zuus_Cloud::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Zuus_Cloud::s_pSchemaBinding;
}


// CDOTA_Ability_Zuus_Cloud::CEntityInstanceEntityClass::AllocateInstance  (line 357, @0x0000000002a646b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Zuus_Cloud::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Zuus_Cloud::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Zuus_Cloud::CEntityInstanceEntityClass::ConstructInstance  (line 357, @0x0000000002a664c0, libserver.so)  // inlines: CDOTA_Ability_Zuus_Cloud, Construct<CDOTA_Ability_Zuus_Cloud>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Zuus_Cloud::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Zuus_Cloud::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43C1850;
  }
  return p;
}


// CDOTA_Ability_Zuus_Cloud::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 357, @0x0000000002a6b2e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Zuus_Cloud::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Zuus_Cloud::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Zuus_Cloud::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 357, @0x0000000002a6b300, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Zuus_Cloud::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Zuus_Cloud::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Zuus_Cloud::GetEntityClassInternal  (line 357, @0x0000000002a76050, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "CDOTA_Ability_Zuus_Cloud"
// globals: `guard variable for'CDOTA_Ability_Zuus_Cloud::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_CloudClass, CDOTA_Ability_Zuus_Cloud::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_CloudClass, __dso_handle, CDOTA_Ability_Zuus_Cloud::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Zuus_Cloud::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_CloudClassInfo, CDOTA_Ability_Zuus_Cloud::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_CloudClassInfo
CEntityClass *__cdecl CDOTA_Ability_Zuus_Cloud::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Zuus_Cloud::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_CloudClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Zuus_Cloud::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_CloudClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Zuus_Cloud::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_CloudClass);
    CDOTA_Ability_Zuus_Cloud::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_CloudClass._vptr_CEntityClass = off_43C17D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Zuus_Cloud::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_CloudClass);
    __cxa_atexit(
      CDOTA_Ability_Zuus_Cloud::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Zuus_Cloud::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_CloudClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Zuus_CloudClass != 0 )
    return &CDOTA_Ability_Zuus_Cloud::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_CloudClass;
  if ( `guard variable for'CDOTA_Ability_Zuus_Cloud::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_CloudClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Zuus_Cloud::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_CloudClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Zuus_Cloud::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_CloudClassInfo,
      "CDOTA_Ability_Zuus_Cloud",
      "zuus_cloud",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Zuus_Cloud::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_CloudClassInfo);
  }
  CDOTA_Ability_Zuus_Cloud::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_CloudClass.m_pClassInfo = &CDOTA_Ability_Zuus_Cloud::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_CloudClassInfo;
  CDOTA_Ability_Zuus_Cloud::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_CloudClass.m_pBaseClassInfo = CDOTA_Ability_Zuus_Cloud::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_CloudClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Zuus_CloudClass = &CDOTA_Ability_Zuus_Cloud::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_CloudClass;
  CDOTA_Ability_Zuus_Cloud::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_CloudClassInfo.m_pClass = &CDOTA_Ability_Zuus_Cloud::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_CloudClass;
  CDOTA_Ability_Zuus_Cloud::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_CloudClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Zuus_CloudClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Zuus_Cloud::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_CloudClass;
}


// CDOTA_Ability_Zuus_Cloud::Spawn  (line 371, @0x0000000002a68390, libserver.so)
// calls: CDOTABaseAbility::Spawn, CDOTABaseAbility::SetHidden
void __fastcall CDOTA_Ability_Zuus_Cloud::Spawn(
        CDOTA_Ability_Zuus_Cloud *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTABaseAbility::Spawn(this, pKeyValues);
  CDOTABaseAbility::SetHidden(this, 1);
}


// CDOTA_Ability_Zuus_Cloud::GetAssociatedSecondaryAbilities  (line 379, @0x0000000002a62720, libserver.so)
// strings: "zuus_lightning_bolt"
const char *__fastcall CDOTA_Ability_Zuus_Cloud::GetAssociatedSecondaryAbilities(CDOTA_Ability_Zuus_Cloud *const this)
{
  return "zuus_lightning_bolt";
}


// CDOTA_Ability_Zuus_Cloud::YouForgotToImplementOrDeclareServerClass  (line 382, @0x0000000002a3fdb0, libserver.so)
int __fastcall CDOTA_Ability_Zuus_Cloud::YouForgotToImplementOrDeclareServerClass(CDOTA_Ability_Zuus_Cloud *const this)
{
  return 0;
}


// CDOTA_Ability_Zuus_Cloud::GetServerClass  (line 382, @0x0000000002a48a70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Zuus_Cloud::GetServerClass(CDOTA_Ability_Zuus_Cloud *const this)
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


// CDOTA_Ability_Zuus_Cloud::OnSpellStart  (line 392, @0x0000000002a58e60, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetTeamNumber
// calls: CDOTABaseAbility::GetCursorPosition, CDOTABaseAbility::GetCaster, DOTA_Character_ScriptSpawn_Synchronous, CDOTA_BaseNPC::SetControllableByPlayer, FindClearSpaceForUnit, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "npc_dota_zeus_cloud", "modifier_zuus_cloud", "cloud_duration", "modifier_kill"
void __fastcall CDOTA_Ability_Zuus_Cloud::OnSpellStart(CDOTA_Ability_Zuus_Cloud *const this)
{
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // r12
  void (__fastcall *v6)(CDOTA_BaseNPC *, _QWORD); // r13
  CDOTA_BaseNPC *v7; // rax
  void (__fastcall *v8)(CDOTA_BaseNPC *, CDOTA_BaseNPC *); // r13
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  int v11; // eax
  CDOTA_BaseNPC *v12; // rax
  float v13; // xmm1_4
  CDOTA_BaseNPC *v14; // rax
  KeyValues kv; // [rsp+10h] [rbp-70h] BYREF
  KeyValues kv2; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-38h]
  Vector CursorPosition; // 0:kr00_12.12

  v17 = __readfsqword(0x28u);
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = CDOTABaseAbility::GetCaster(this);
  v4 = DOTA_Character_ScriptSpawn_Synchronous(
         "npc_dota_zeus_cloud",
         v3->m_iTeamNum.m_Value,
         Caster,
         0,
         0,
         CursorPosition);
  v5 = v4;
  if ( v4 != 0 )
  {
    v6 = *(v4->_vptr_IHandleEntity + 70);
    v7 = CDOTABaseAbility::GetCaster(this);
    v6(v5, v7->m_iTeamNum.m_Value);
    v8 = *(v5->_vptr_IHandleEntity + 40);
    v9 = CDOTABaseAbility::GetCaster(this);
    v8(v5, v9);
    v10 = CDOTABaseAbility::GetCaster(this);
    v11 = (*(v10->_vptr_IHandleEntity + 414))(v10);
    CDOTA_BaseNPC::SetControllableByPlayer(v5, v11, 0);
    FindClearSpaceForUnit(v5, CursorPosition, 1);
    KeyValues::KeyValues(&kv, "modifier_zuus_cloud");
    v12 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v5, v12, this, "modifier_zuus_cloud", &kv, 0);
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "cloud_duration", -1, 0);
    KeyValues::KeyValues(&kv2, "modifier_kill");
    KeyValues::SetFloat(&kv2, "duration", v13);
    v14 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v5, v14, this, "modifier_kill", &kv2, 0);
    KeyValues::~KeyValues(&kv2);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_Zuus_Cloud::OnAbilityPhaseStart  (line 422, @0x0000000002a401e0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "particles/units/heroes/hero_zuus/zuus_lightning_bolt_start.vpcf", "attach_attack1"
bool __fastcall CDOTA_Ability_Zuus_Cloud::OnAbilityPhaseStart(CDOTA_Ability_Zuus_Cloud *const this)
{
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v4; // r12
  CDOTA_ParticleManager *v5; // rax
  CDOTA_ParticleManager *v6; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_zuus/zuus_lightning_bolt_start.vpcf",
                      2,
                      Caster,
                      0,
                      0);
  v4 = CDOTABaseAbility::GetCaster(this);
  v5 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v5, Caster, 0, v4, 5, "attach_attack1", vec3_invalid, 1);
  v6 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v6, Caster);
  return 1;
}


// CDOTA_Ability_Zuus_LightningBolt::~CDOTA_Ability_Zuus_LightningBolt  (line 441, @0x0000000002a67b90, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Zuus_LightningBolt::~CDOTA_Ability_Zuus_LightningBolt(
        CDOTA_Ability_Zuus_LightningBolt *const this)
{
  this->_vptr_IHandleEntity = &off_43C2350;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Zuus_LightningBolt::~CDOTA_Ability_Zuus_LightningBolt  (line 441, @0x0000000002a67bb0, libserver.so)  // inlines: ~CDOTA_Ability_Zuus_LightningBolt
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Zuus_LightningBolt::~CDOTA_Ability_Zuus_LightningBolt(
        CDOTA_Ability_Zuus_LightningBolt *const this)
{
  this->_vptr_IHandleEntity = &off_43C2350;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Zuus_LightningBolt::Schema_DynamicBinding  (line 443, @0x0000000002a62730, libserver.so)
// globals: CDOTA_Ability_Zuus_LightningBolt::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Zuus_LightningBolt::Schema_DynamicBinding(
        const CDOTA_Ability_Zuus_LightningBolt *const this)
{
  return CDOTA_Ability_Zuus_LightningBolt::s_pSchemaBinding;
}


// CDOTA_Ability_Zuus_LightningBolt::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 443, @0x0000000002a62740, libserver.so)
// globals: CDOTA_Ability_Zuus_LightningBolt::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Zuus_LightningBolt::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Zuus_LightningBolt::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Zuus_LightningBolt::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Zuus_LightningBolt::CEntityInstanceEntityClass::DestructInstance  (line 443, @0x0000000002a62750, libserver.so)  // inlines: Destruct<CDOTA_Ability_Zuus_LightningBolt>
void __fastcall CDOTA_Ability_Zuus_LightningBolt::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Zuus_LightningBolt::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Zuus_LightningBolt::CEntityInstanceEntityClass::FreeInstance  (line 443, @0x0000000002a62770, libserver.so)
void __fastcall CDOTA_Ability_Zuus_LightningBolt::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Zuus_LightningBolt::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Zuus_LightningBolt::CEntityInstanceEntityClass::CanAllocate  (line 443, @0x0000000002a62790, libserver.so)
bool __fastcall CDOTA_Ability_Zuus_LightningBolt::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Zuus_LightningBolt::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Zuus_LightningBolt::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 443, @0x0000000002a627a0, libserver.so)
// globals: CDOTA_Ability_Zuus_LightningBolt::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Zuus_LightningBolt::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Zuus_LightningBolt::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Zuus_LightningBolt::s_pSchemaBinding;
}


// CDOTA_Ability_Zuus_LightningBolt::CEntityInstanceEntityClass::AllocateInstance  (line 443, @0x0000000002a646f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Zuus_LightningBolt::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Zuus_LightningBolt::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Zuus_LightningBolt::CEntityInstanceEntityClass::ConstructInstance  (line 443, @0x0000000002a664f0, libserver.so)  // inlines: CDOTA_Ability_Zuus_LightningBolt, Construct<CDOTA_Ability_Zuus_LightningBolt>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Zuus_LightningBolt::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Zuus_LightningBolt::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43C2350;
  }
  return p;
}


// CDOTA_Ability_Zuus_LightningBolt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 443, @0x0000000002a6b330, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Zuus_LightningBolt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Zuus_LightningBolt::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Zuus_LightningBolt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 443, @0x0000000002a6b350, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Zuus_LightningBolt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Zuus_LightningBolt::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Zuus_LightningBolt::GetEntityClassInternal  (line 443, @0x0000000002a761a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "zuus_lightning_bolt", "CDOTA_Ability_Zuus_LightningBolt"
// globals: `guard variable for'CDOTA_Ability_Zuus_LightningBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_LightningBoltClass, CDOTA_Ability_Zuus_LightningBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_LightningBoltClass, __dso_handle, CDOTA_Ability_Zuus_LightningBolt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Zuus_LightningBolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_LightningBoltClassInfo, CDOTA_Ability_Zuus_LightningBolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_LightningBoltClassInfo
CEntityClass *__cdecl CDOTA_Ability_Zuus_LightningBolt::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Zuus_LightningBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_LightningBoltClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Zuus_LightningBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_LightningBoltClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Zuus_LightningBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_LightningBoltClass);
    CDOTA_Ability_Zuus_LightningBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_LightningBoltClass._vptr_CEntityClass = off_43C22D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Zuus_LightningBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_LightningBoltClass);
    __cxa_atexit(
      CDOTA_Ability_Zuus_LightningBolt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Zuus_LightningBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_LightningBoltClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Zuus_LightningBoltClass != 0 )
    return &CDOTA_Ability_Zuus_LightningBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_LightningBoltClass;
  if ( `guard variable for'CDOTA_Ability_Zuus_LightningBolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_LightningBoltClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Zuus_LightningBolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_LightningBoltClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Zuus_LightningBolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_LightningBoltClassInfo,
      "CDOTA_Ability_Zuus_LightningBolt",
      "zuus_lightning_bolt",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Zuus_LightningBolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_LightningBoltClassInfo);
  }
  CDOTA_Ability_Zuus_LightningBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_LightningBoltClass.m_pClassInfo = &CDOTA_Ability_Zuus_LightningBolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_LightningBoltClassInfo;
  CDOTA_Ability_Zuus_LightningBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_LightningBoltClass.m_pBaseClassInfo = CDOTA_Ability_Zuus_LightningBolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_LightningBoltClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Zuus_LightningBoltClass = &CDOTA_Ability_Zuus_LightningBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_LightningBoltClass;
  CDOTA_Ability_Zuus_LightningBolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_LightningBoltClassInfo.m_pClass = &CDOTA_Ability_Zuus_LightningBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_LightningBoltClass;
  CDOTA_Ability_Zuus_LightningBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_LightningBoltClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Zuus_LightningBoltClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Zuus_LightningBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_LightningBoltClass;
}


// CDOTA_Ability_Zuus_LightningBolt::IsHiddenWhenStolen  (line 454, @0x0000000002a627b0, libserver.so)
bool __fastcall CDOTA_Ability_Zuus_LightningBolt::IsHiddenWhenStolen(CDOTA_Ability_Zuus_LightningBolt *const this)
{
  return 1;
}


// CDOTA_Ability_Zuus_LightningBolt::YouForgotToImplementOrDeclareServerClass  (line 461, @0x0000000002a3fdc0, libserver.so)
int __fastcall CDOTA_Ability_Zuus_LightningBolt::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Zuus_LightningBolt *const this)
{
  return 0;
}


// CDOTA_Ability_Zuus_LightningBolt::GetServerClass  (line 461, @0x0000000002a48870, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Zuus_LightningBolt::GetServerClass(CDOTA_Ability_Zuus_LightningBolt *const this)
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


// CDOTA_Ability_Zuus_LightningBolt::CastLightningBolt  (line 470, @0x0000000002a5acf0, libserver.so)  // inlines: CSingleUserRecipientFilter, CUtlMemory, CUtlVector, CUtlVectorBase, DOTAGameRules, Get, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetOwnerEntity, GetTeamNumber, GetTimeOfDay, InState, IsDaytime, IsInvulnerable, IsRealHero, RemapValClamped, ToDOTABaseNPC, ToDOTAPlayer, VectorAdd, clamp<float, float>, operator CBaseEntity*, operator+, ~CSingleUserRecipientFilter, ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTABaseAbility::CreateAbilityParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetAbsOrigin, CDOTAFogOfWarSystem::AddTempViewer, ApplyDamage, KeyValues::KeyValues (33 total)
// callers: CDOTA_Ability_Zuus_LightningBolt::OnSpellStart, CDOTA_Modifier_Zuus_Cloud::OnIntervalThink
// strings: "sight_duration", "particles/units/heroes/hero_zeus/zeus_cloud_strike.vpcf", "flame_attachment", "attach_hitloc", "sight_radius_day", "sight_radius_night" (16 total)
void __fastcall CDOTA_Ability_Zuus_LightningBolt::CastLightningBolt(
        CDOTA_Ability_Zuus_LightningBolt *const this,
        CDOTA_BaseNPC *pCaster,
        CDOTA_BaseNPC *pTarget,
        bool bCloudVersion)
{
  unsigned __int64 m_Value; // rax
  CDOTA_BaseNPC *Caster; // rax
  int AbilityParticleEffect; // r15d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v12; // rax
  CDOTA_ParticleManager *v13; // rax
  float v14; // xmm0_4
  int LevelSpecialValue; // r15d
  CDOTA_BaseNPC *v16; // rax
  int v17; // eax
  float v18; // xmm1_4
  CDOTA_BaseNPC *v19; // rax
  float v20; // xmm1_4
  Vector *v21; // r14
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  const char *ReplacementSound; // rax
  CDOTA_BaseNPC *v25; // r14
  CDOTA_ParticleManager *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  CDOTA_ParticleManager *v28; // rax
  CDOTA_ParticleManager *v29; // rax
  IHandleEntity *HandleEntity; // rax
  const CEntityInstance *v31; // rbx
  const Vector *AbsOrigin; // rax
  unsigned int v33; // xmm2_4
  unsigned int v34; // xmm1_4
  CDOTA_BaseNPC *v35; // rax
  CDOTA_ParticleManager *v36; // rax
  int v37; // r15d
  int v38; // r12d
  CDOTA_BaseNPC *v39; // rax
  __m128i v40; // xmm4
  float v41; // r15d
  CDOTA_BaseNPC *v42; // r13
  CDOTA_BaseNPC *v43; // rax
  CDOTA_BaseNPC *v44; // rax
  CDOTA_BaseNPC *v45; // r15
  int v46; // eax
  const Vector *v47; // rax
  vec_t v48; // xmm0_4
  vec_t v49; // xmm1_4
  CDOTA_BaseNPC *v50; // rax
  int v51; // r13d
  CDOTA_ParticleManager *v52; // rax
  CDOTA_ParticleManager *v53; // rax
  CDOTA_ParticleManager *v54; // rax
  float v55; // xmm1_4
  CDOTA_BaseNPC *v56; // rax
  float v57; // xmm1_4
  int v58; // r14d
  CDOTA_BaseNPC *v59; // rax
  CDOTA_BaseNPC *v60; // rax
  float v61; // xmm0_4
  CDOTA_BaseNPC *v62; // rax
  int v63; // r13d
  CDOTA_ParticleManager *v64; // rax
  CDOTA_ParticleManager *v65; // rax
  CDOTA_ParticleManager *v66; // rax
  const Vector *vecFallbackPosition_8; // [rsp+20h] [rbp-220h]
  float sight_duration; // [rsp+2Ch] [rbp-214h]
  int sight_durationa; // [rsp+2Ch] [rbp-214h]
  Vector vPos; // [rsp+40h] [rbp-200h] BYREF
  Vector v71; // [rsp+50h] [rbp-1F0h]
  Vector vecStartPos; // [rsp+60h] [rbp-1E0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+70h] [rbp-1D0h] BYREF
  KeyValues kv; // [rsp+90h] [rbp-1B0h] BYREF
  KeyValues kv2; // [rsp+B0h] [rbp-190h] BYREF
  KeyValues kv_0; // [rsp+D0h] [rbp-170h] BYREF
  unsigned __int64 v77; // [rsp+208h] [rbp-38h]
  Vector vecFallbackPosition; // 0:^18.12
  Vector CursorPosition; // 0:kr40_12.12
  Vector v80; // 0:xmm0_8.8,8:xmm1_4.4

  v77 = __readfsqword(0x28u);
  sight_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "sight_duration", -1, 0);
  if ( pTarget != 0 )
  {
    if ( pTarget->m_bIsWaitingToSpawn.m_Value )
      return;
    m_Value = pTarget->m_nUnitState64.m_Value;
    if ( (m_Value & 0x100) != 0 || (m_Value & 0x200) != 0 )
      return;
    if ( bCloudVersion )
    {
      Caster = CDOTABaseAbility::GetCaster(this);
      AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                                this,
                                "particles/units/heroes/hero_zeus/zeus_cloud_strike.vpcf",
                                2,
                                Caster,
                                0);
      ParticleManager = GetParticleManager();
      vecFallbackPosition = vec3_invalid;
      CDOTA_ParticleManager::SetParticleControlEnt(
        ParticleManager,
        AbilityParticleEffect,
        0,
        pCaster,
        0,
        "flame_attachment",
        vec3_invalid,
        1);
      v12 = GetParticleManager();
      v80 = vecFallbackPosition;
    }
    else
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(pTarget);
      *&v33 = AbsOrigin->y + 0.0;
      *&v34 = AbsOrigin->x + 0.0;
      *&entities.m_Memory.m_pMemory = AbsOrigin->z + 4000.0;
      *&entities.m_Size = __PAIR64__(v33, v34);
      v35 = CDOTABaseAbility::GetCaster(this);
      AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                                this,
                                "particles/units/heroes/hero_zuus/zuus_lightning_bolt.vpcf",
                                2,
                                v35,
                                0);
      v36 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(
        v36,
        AbilityParticleEffect,
        0,
        *&entities.m_Size,
        *&entities.m_Memory.m_pMemory);
      v12 = GetParticleManager();
      v80 = vec3_invalid;
    }
    CDOTA_ParticleManager::SetParticleControlEnt(v12, AbilityParticleEffect, 1, pTarget, 5, "attach_hitloc", v80, 1);
    v13 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v13, AbilityParticleEffect);
    if ( CDOTA_BaseNPC::TriggerSpellAbsorb(pTarget, this, 1) )
      return;
    if ( LOBYTE(g_pGameRules[14].m_nQuestPhase) == 0 && BYTE1(g_pGameRules[14].m_nQuestPhase) == 0 )
    {
      v14 = *&g_pGameRules[18].m_szQuestName[28] / 65535.0;
      if ( v14 >= 0.0 )
      {
        if ( v14 <= 1.0 )
        {
          if ( (v14 + 0.0) >= 0.25 && (v14 < 0.0 || v14 <= 1.0 && (v14 + 0.0) <= 0.75) )
            goto LABEL_14;
        }
        else if ( v14 < 0.0 )
        {
LABEL_14:
          LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "sight_radius_day", -1, 0);
          goto LABEL_20;
        }
      }
    }
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "sight_radius_night", -1, 0);
LABEL_20:
    vecFallbackPosition_8 = CBaseEntity::GetAbsOrigin(pTarget);
    v16 = CDOTABaseAbility::GetCaster(this);
    CDOTAFogOfWarSystem::AddTempViewer(
      &g_DOTAFogOfWarSystem,
      FoWViewerType_t::FOWVIEWERTYPE_LIGHTNINGBOLT,
      v16->m_iTeamNum.m_Value,
      vecFallbackPosition_8,
      LevelSpecialValue,
      sight_duration,
      0);
    v17 = (*(this->_vptr_IHandleEntity + 247))(this);
    ApplyDamage(pCaster, pTarget, this, v17, 2, 0);
    KeyValues::KeyValues(&kv, "LightningBoltStun");
    KeyValues::SetFloat(&kv, "duration", v18);
    v19 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(pTarget, v19, this, "modifier_stunned", &kv, 0);
    KeyValues::KeyValues(&kv2, "LightningBoltReveal");
    KeyValues::SetFloat(&kv2, "duration", v20);
    sight_durationa = this->m_iTeamNum.m_Value;
    v21 = CBaseEntity::GetAbsOrigin(pTarget);
    v22 = CDOTABaseAbility::GetCaster(this);
    Thinker_Create(v22, this, "modifier_zuus_lightningbolt_vision_thinker", &kv2, *v21, sight_durationa, 0, 1, 0);
    v23 = CDOTABaseAbility::GetCaster(this);
    ReplacementSound = CDOTA_BaseNPC::FindReplacementSound(v23, "Hero_Zuus.LightningBolt.Cloud");
    CDOTA_BaseNPC::UnitEmitSound(pTarget, ReplacementSound, 0.0, 0, 0);
    if ( (*(pTarget->_vptr_IHandleEntity + 408))(pTarget) == 0
      && (pTarget->m_iUnitType & 1) != 0
      && !pTarget->m_bIsIllusion.m_Value )
    {
      v25 = CDOTABaseAbility::GetCaster(this);
      v26 = GetParticleManager();
      LODWORD(v25) = CDOTA_ParticleManager::CreateParticle(
                       v26,
                       "particles/units/heroes/hero_zeus/zues_kill_empty.vpcf",
                       2,
                       v25,
                       0,
                       0);
      v27 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v27, v25, 1, pTarget, 1, 0, vec3_invalid, 1);
      v28 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v28, v25, 2, pTarget, 5, "attach_hitloc", vec3_invalid, 1);
      v29 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v29, v25);
      if ( (pTarget->m_fEffects.m_Value & 0x20) == 0 && this->m_bZeusHasArcana )
      {
        CBaseEntity::AddEffects(pTarget, 32);
        HandleEntity = CEntityHandle::GetHandleEntity(&pTarget->m_hOwnerEntity.m_Value);
        v31 = HandleEntity;
        if ( HandleEntity != 0 && (*(HandleEntity->_vptr_IHandleEntity + 140))(HandleEntity) != 0 )
        {
          CRecipientFilter::CRecipientFilter(&kv_0);
          kv_0.m_uValue = &off_3FCB0D0;
          CRecipientFilter::AddRecipient(&kv_0, v31);
          DispatchParticleEffect(
            "particles/units/heroes/hero_zeus/zues_screen_empty.vpcf",
            ParticleAttachment_t::PATTACH_ABSORIGIN,
            pTarget,
            0,
            0,
            -1,
            &kv_0);
          kv_0.m_uValue = &off_3FCB0D0;
          CRecipientFilter::~CRecipientFilter(&kv_0);
        }
      }
    }
    KeyValues::~KeyValues(&kv2);
    KeyValues::~KeyValues(&kv);
    return;
  }
  v37 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "spread_aoe", -1, 0);
  if ( LOBYTE(g_pGameRules[14].m_nQuestPhase) == 0 && BYTE1(g_pGameRules[14].m_nQuestPhase) == 0 )
  {
    v61 = *&g_pGameRules[18].m_szQuestName[28] / 65535.0;
    if ( v61 >= 0.0 )
    {
      if ( v61 <= 1.0 )
      {
        if ( (v61 + 0.0) >= 0.25 && (v61 < 0.0 || v61 <= 1.0 && (v61 + 0.0) <= 0.75) )
          goto LABEL_42;
      }
      else if ( v61 < 0.0 )
      {
LABEL_42:
        v38 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "sight_radius_day", -1, 0);
        goto LABEL_32;
      }
    }
  }
  v38 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "sight_radius_night", -1, 0);
LABEL_32:
  *&entities.m_Size = CDOTABaseAbility::GetCursorPosition(this);
  v39 = CDOTABaseAbility::GetCaster(this);
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_LIGHTNINGBOLT,
    v39->m_iTeamNum.m_Value,
    &entities,
    v38,
    sight_duration,
    0);
  *v40.m128i_i32 = v37;
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v41 = COERCE_FLOAT(_mm_cvtsi128_si32(v40));
  v42 = CDOTABaseAbility::GetCaster(this);
  vecStartPos = CDOTABaseAbility::GetCursorPosition(this);
  v43 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v43->m_iTeamNum.m_Value, &vecStartPos, v42, v41, &entities, 2, 1, 0, 1, 0);
  if ( entities.m_Size <= 0 )
  {
    CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
    vecStartPos.z = CursorPosition.z + 4000.0;
    vecStartPos.y = CursorPosition.y + 0.0;
    vecStartPos.x = CursorPosition.x + 0.0;
    v62 = CDOTABaseAbility::GetCaster(this);
    v63 = CDOTABaseAbility::CreateAbilityParticleEffect(
            this,
            "particles/units/heroes/hero_zuus/zuus_lightning_bolt.vpcf",
            2,
            v62,
            0);
    v64 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v64, v63, 0, *&vecStartPos.x, vecStartPos.z);
    v71 = CDOTABaseAbility::GetCursorPosition(this);
    v65 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v65, v63, 1, *&v71.x, v71.z);
    v66 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v66, v63);
  }
  else
  {
    v44 = CEntityHandle::operator CEntityInstance *(entities.m_Memory.m_pMemory);
    v45 = v44;
    if ( v44 != 0 && v44->m_bIsDOTANPC && !CDOTA_BaseNPC::TriggerSpellAbsorb(v44, this, 1) )
    {
      v46 = (*(this->_vptr_IHandleEntity + 247))(this);
      ApplyDamage(pCaster, v45, this, v46, 2, 0);
      v47 = CBaseEntity::GetAbsOrigin(v45);
      v48 = v47->z + 4000.0;
      v49 = v47->x + 0.0;
      vecStartPos.y = v47->y + 0.0;
      vecStartPos.z = v48;
      vecStartPos.x = v49;
      v50 = CDOTABaseAbility::GetCaster(this);
      v51 = CDOTABaseAbility::CreateAbilityParticleEffect(
              this,
              "particles/units/heroes/hero_zuus/zuus_lightning_bolt.vpcf",
              2,
              v50,
              0);
      v52 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v52, v51, 0, *&vecStartPos.x, vecStartPos.z);
      v53 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v53, v51, 1, v45, 5, "attach_hitloc", vec3_invalid, 1);
      v54 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v54, v51);
      KeyValues::KeyValues(&kv_0, "LightningBoltStun");
      KeyValues::SetFloat(&kv_0, "duration", v55);
      v56 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v45, v56, this, "modifier_stunned", &kv_0, 0);
      KeyValues::~KeyValues(&kv_0);
    }
  }
  KeyValues::KeyValues(&kv_0, "LightningBoltReveal");
  KeyValues::SetFloat(&kv_0, "duration", v57);
  v58 = this->m_iTeamNum.m_Value;
  vecStartPos = CDOTABaseAbility::GetCursorPosition(this);
  v59 = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(v59, this, "modifier_zuus_lightningbolt_vision_thinker", &kv_0, vecStartPos, v58, 0, 1, 0);
  vPos = CDOTABaseAbility::GetCursorPosition(this);
  v60 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSoundLocationWithCaster(&vPos, "Hero_Zuus.LightningBolt", v60);
  KeyValues::~KeyValues(&kv_0);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Ability_Zuus_LightningBolt::OnSpellStart  (line 590, @0x0000000002a5b8c0, libserver.so)  // inlines: ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CDOTA_Ability_Zuus_LightningBolt::CastLightningBolt
void __fastcall CDOTA_Ability_Zuus_LightningBolt::OnSpellStart(CDOTA_Ability_Zuus_LightningBolt *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  CDOTA_BaseNPC *Caster; // rax

  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
    v3 = CursorTarget;
  else
    v3 = 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_Ability_Zuus_LightningBolt::CastLightningBolt(this, Caster, v3, 0);
}


// CDOTA_Ability_Zuus_LightningBolt::OnAbilityPhaseStart  (line 600, @0x0000000002a40280, libserver.so)
// calls: CDOTABaseAbility::GetCaster, __dynamic_cast, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::UnitEmitSound
// strings: "particles/units/heroes/hero_zuus/zuus_lightning_bolt_start.vpcf", "attach_attack1", "Hero_Zuus.LightningBolt.Cast"
// globals: `typeinfo for'CDOTA_Unit_Hero_Zuus
bool __fastcall CDOTA_Ability_Zuus_LightningBolt::OnAbilityPhaseStart(CDOTA_Ability_Zuus_LightningBolt *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  _BYTE *v3; // rax
  bool v4; // al
  CDOTA_BaseNPC *v5; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v7; // r13
  CDOTA_ParticleManager *v8; // rax
  CDOTA_ParticleManager *v9; // rax
  CDOTA_BaseNPC *v10; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = Caster != 0
    && (v3 = __dynamic_cast(Caster, &`typeinfo for'CDOTA_BaseNPC, &`typeinfo for'CDOTA_Unit_Hero_Zuus, 0)) != 0
    && v3[4466] > 0;
  this->m_bZeusHasArcana = v4;
  v5 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v5) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/units/heroes/hero_zuus/zuus_lightning_bolt_start.vpcf",
                  2,
                  v5,
                  0,
                  0);
  v7 = CDOTABaseAbility::GetCaster(this);
  v8 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v8, v5, 0, v7, 5, "attach_attack1", vec3_invalid, 1);
  v9 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v9, v5);
  v10 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v10, "Hero_Zuus.LightningBolt.Cast", 0.0, 0, 0);
  return 1;
}


// CDOTA_Ability_Zuus_LightningBolt::GetAbilityDamageToTargetOverInterval  (line 618, @0x0000000002a545e0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetHealth, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "damage_health_pct"
__int64 __fastcall CDOTA_Ability_Zuus_LightningBolt::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Zuus_LightningBolt *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int v5; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int LevelSpecialValue; // r13d
  int v11; // ebx

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    v5 = 0;
    Caster = CDOTABaseAbility::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "zuus_static_field", 0);
    if ( AbilityByName != 0 )
    {
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "damage_health_pct", -1, 1);
      v5 = CBaseEntity::GetHealth(pTarget) * LevelSpecialValue / 100;
    }
    v11 = (*(this->_vptr_IHandleEntity + 247))(this);
    return ((v11 + v5) * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Modifier_Zuus_LightningBoltThinker::~CDOTA_Modifier_Zuus_LightningBoltThinker  (line 638, @0x0000000002a64bc0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Zuus_LightningBoltThinker::~CDOTA_Modifier_Zuus_LightningBoltThinker(
        CDOTA_Modifier_Zuus_LightningBoltThinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_43C2E10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Zuus_LightningBoltThinker::~CDOTA_Modifier_Zuus_LightningBoltThinker  (line 638, @0x0000000002a64be0, libserver.so)  // inlines: ~CDOTA_Modifier_Zuus_LightningBoltThinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Zuus_LightningBoltThinker::~CDOTA_Modifier_Zuus_LightningBoltThinker(
        CDOTA_Modifier_Zuus_LightningBoltThinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_43C2E10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Zuus_LightningBoltThinker::IsHidden  (line 643, @0x0000000002a627c0, libserver.so)
bool __fastcall CDOTA_Modifier_Zuus_LightningBoltThinker::IsHidden(
        CDOTA_Modifier_Zuus_LightningBoltThinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Zuus_LightningBoltThinker::IsAura  (line 646, @0x0000000002a627d0, libserver.so)
bool __fastcall CDOTA_Modifier_Zuus_LightningBoltThinker::IsAura(CDOTA_Modifier_Zuus_LightningBoltThinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Zuus_LightningBoltThinker::GetModifierAura  (line 647, @0x0000000002a627e0, libserver.so)
// strings: "modifier_truesight"
const char *__fastcall CDOTA_Modifier_Zuus_LightningBoltThinker::GetModifierAura(
        CDOTA_Modifier_Zuus_LightningBoltThinker *const this)
{
  return "modifier_truesight";
}


// CDOTA_Modifier_Zuus_LightningBoltThinker::GetAuraSearchTeam  (line 649, @0x0000000002a627f0, libserver.so)
int __fastcall CDOTA_Modifier_Zuus_LightningBoltThinker::GetAuraSearchTeam(
        CDOTA_Modifier_Zuus_LightningBoltThinker *const this)
{
  return 2;
}


// CDOTA_Modifier_Zuus_LightningBoltThinker::GetAuraSearchType  (line 650, @0x0000000002a62800, libserver.so)
int __fastcall CDOTA_Modifier_Zuus_LightningBoltThinker::GetAuraSearchType(
        CDOTA_Modifier_Zuus_LightningBoltThinker *const this)
{
  return 51;
}


// CDOTA_Modifier_Zuus_LightningBoltThinker::GetAuraSearchFlags  (line 651, @0x0000000002a62810, libserver.so)
int __fastcall CDOTA_Modifier_Zuus_LightningBoltThinker::GetAuraSearchFlags(
        CDOTA_Modifier_Zuus_LightningBoltThinker *const this)
{
  return 80;
}


// CDOTA_Modifier_Zuus_LightningBoltThinker::GetAuraRadius  (line 652, @0x0000000002a62820, libserver.so)
int __fastcall CDOTA_Modifier_Zuus_LightningBoltThinker::GetAuraRadius(
        CDOTA_Modifier_Zuus_LightningBoltThinker *const this)
{
  return 750;
}


// CDOTA_Modifier_Zuus_LightningBoltThinker::OnDestroy  (line 658, @0x0000000002a413c0, libserver.so)
// calls: CDOTA_Buff::GetParent, UTIL_Remove
void __fastcall CDOTA_Modifier_Zuus_LightningBoltThinker::OnDestroy(
        CDOTA_Modifier_Zuus_LightningBoltThinker *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  UTIL_Remove(Parent);
}


// CDOTA_Ability_Zuus_StaticField::~CDOTA_Ability_Zuus_StaticField  (line 671, @0x0000000002a67be0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Zuus_StaticField::~CDOTA_Ability_Zuus_StaticField(
        CDOTA_Ability_Zuus_StaticField *const this)
{
  this->_vptr_IHandleEntity = &off_43C3170;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Zuus_StaticField::~CDOTA_Ability_Zuus_StaticField  (line 671, @0x0000000002a67c00, libserver.so)  // inlines: ~CDOTA_Ability_Zuus_StaticField
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Zuus_StaticField::~CDOTA_Ability_Zuus_StaticField(
        CDOTA_Ability_Zuus_StaticField *const this)
{
  this->_vptr_IHandleEntity = &off_43C3170;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Zuus_StaticField::Schema_DynamicBinding  (line 673, @0x0000000002a62830, libserver.so)
// globals: CDOTA_Ability_Zuus_StaticField::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Zuus_StaticField::Schema_DynamicBinding(
        const CDOTA_Ability_Zuus_StaticField *const this)
{
  return CDOTA_Ability_Zuus_StaticField::s_pSchemaBinding;
}


// CDOTA_Ability_Zuus_StaticField::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 673, @0x0000000002a62840, libserver.so)
// globals: CDOTA_Ability_Zuus_StaticField::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Zuus_StaticField::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Zuus_StaticField::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Zuus_StaticField::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Zuus_StaticField::CEntityInstanceEntityClass::DestructInstance  (line 673, @0x0000000002a62850, libserver.so)  // inlines: Destruct<CDOTA_Ability_Zuus_StaticField>
void __fastcall CDOTA_Ability_Zuus_StaticField::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Zuus_StaticField::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Zuus_StaticField::CEntityInstanceEntityClass::FreeInstance  (line 673, @0x0000000002a62870, libserver.so)
void __fastcall CDOTA_Ability_Zuus_StaticField::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Zuus_StaticField::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Zuus_StaticField::CEntityInstanceEntityClass::CanAllocate  (line 673, @0x0000000002a62890, libserver.so)
bool __fastcall CDOTA_Ability_Zuus_StaticField::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Zuus_StaticField::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Zuus_StaticField::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 673, @0x0000000002a628a0, libserver.so)
// globals: CDOTA_Ability_Zuus_StaticField::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Zuus_StaticField::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Zuus_StaticField::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Zuus_StaticField::s_pSchemaBinding;
}


// CDOTA_Ability_Zuus_StaticField::CEntityInstanceEntityClass::AllocateInstance  (line 673, @0x0000000002a64730, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Zuus_StaticField::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Zuus_StaticField::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Zuus_StaticField::CEntityInstanceEntityClass::ConstructInstance  (line 673, @0x0000000002a66520, libserver.so)  // inlines: CDOTA_Ability_Zuus_StaticField, Construct<CDOTA_Ability_Zuus_StaticField>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Zuus_StaticField::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Zuus_StaticField::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43C3170;
  }
  return p;
}


// CDOTA_Ability_Zuus_StaticField::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 673, @0x0000000002a6b380, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Zuus_StaticField::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Zuus_StaticField::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Zuus_StaticField::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 673, @0x0000000002a6b3a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Zuus_StaticField::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Zuus_StaticField::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Zuus_StaticField::GetEntityClassInternal  (line 673, @0x0000000002a762f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "CDOTA_Ability_Zuus_StaticField"
// globals: `guard variable for'CDOTA_Ability_Zuus_StaticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_StaticFieldClass, CDOTA_Ability_Zuus_StaticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_StaticFieldClass, __dso_handle, CDOTA_Ability_Zuus_StaticField::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Zuus_StaticField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_StaticFieldClassInfo, CDOTA_Ability_Zuus_StaticField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_StaticFieldClassInfo
CEntityClass *__cdecl CDOTA_Ability_Zuus_StaticField::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Zuus_StaticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_StaticFieldClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Zuus_StaticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_StaticFieldClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Zuus_StaticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_StaticFieldClass);
    CDOTA_Ability_Zuus_StaticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_StaticFieldClass._vptr_CEntityClass = off_43C30F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Zuus_StaticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_StaticFieldClass);
    __cxa_atexit(
      CDOTA_Ability_Zuus_StaticField::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Zuus_StaticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_StaticFieldClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Zuus_StaticFieldClass != 0 )
    return &CDOTA_Ability_Zuus_StaticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_StaticFieldClass;
  if ( `guard variable for'CDOTA_Ability_Zuus_StaticField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_StaticFieldClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Zuus_StaticField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_StaticFieldClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Zuus_StaticField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_StaticFieldClassInfo,
      "CDOTA_Ability_Zuus_StaticField",
      "zuus_static_field",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Zuus_StaticField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_StaticFieldClassInfo);
  }
  CDOTA_Ability_Zuus_StaticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_StaticFieldClass.m_pClassInfo = &CDOTA_Ability_Zuus_StaticField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_StaticFieldClassInfo;
  CDOTA_Ability_Zuus_StaticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_StaticFieldClass.m_pBaseClassInfo = CDOTA_Ability_Zuus_StaticField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_StaticFieldClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Zuus_StaticFieldClass = &CDOTA_Ability_Zuus_StaticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_StaticFieldClass;
  CDOTA_Ability_Zuus_StaticField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_StaticFieldClassInfo.m_pClass = &CDOTA_Ability_Zuus_StaticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_StaticFieldClass;
  CDOTA_Ability_Zuus_StaticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_StaticFieldClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Zuus_StaticFieldClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Zuus_StaticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_StaticFieldClass;
}


// CDOTA_Ability_Zuus_StaticField::GetIntrinsicModifierName  (line 676, @0x0000000002a628b0, libserver.so)
// strings: "modifier_zuus_static_field"
const char *__fastcall CDOTA_Ability_Zuus_StaticField::GetIntrinsicModifierName(
        CDOTA_Ability_Zuus_StaticField *const this)
{
  return "modifier_zuus_static_field";
}


// CDOTA_Modifier_Zuus_StaticField::~CDOTA_Modifier_Zuus_StaticField  (line 685, @0x0000000002a64b70, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Zuus_StaticField::~CDOTA_Modifier_Zuus_StaticField(
        CDOTA_Modifier_Zuus_StaticField *const this)
{
  this->_vptr_CDOTA_Buff = &off_43C3C30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Zuus_StaticField::~CDOTA_Modifier_Zuus_StaticField  (line 685, @0x0000000002a64b90, libserver.so)  // inlines: ~CDOTA_Modifier_Zuus_StaticField
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Zuus_StaticField::~CDOTA_Modifier_Zuus_StaticField(
        CDOTA_Modifier_Zuus_StaticField *const this)
{
  this->_vptr_CDOTA_Buff = &off_43C3C30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Zuus_StaticField::IsHidden  (line 692, @0x0000000002a628c0, libserver.so)
bool __fastcall CDOTA_Modifier_Zuus_StaticField::IsHidden(CDOTA_Modifier_Zuus_StaticField *const this)
{
  return 1;
}


// CDOTA_Modifier_Zuus_StaticField::OnCreated  (line 707, @0x0000000002a55aa0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "damage_health_pct"
void __fastcall CDOTA_Modifier_Zuus_StaticField::OnCreated(CDOTA_Modifier_Zuus_StaticField *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->damage_health_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "damage_health_pct", -1, 0);
      return;
    }
  }
  else
  {
    this->radius = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->damage_health_pct = 0;
}


// CDOTA_Modifier_Zuus_StaticField::OnRefresh  (line 715, @0x0000000002a55b30, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "damage_health_pct"
void __fastcall CDOTA_Modifier_Zuus_StaticField::OnRefresh(CDOTA_Modifier_Zuus_StaticField *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->damage_health_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "damage_health_pct", -1, 0);
      return;
    }
  }
  else
  {
    this->radius = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->damage_health_pct = 0;
}


// CDOTA_Modifier_Zuus_StaticField::DeclareFunctions  (line 723, @0x0000000002a3fdd0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Zuus_StaticField::DeclareFunctions(CDOTA_Modifier_Zuus_StaticField *const this)
{
  this->m_Functions[128].__pfn = (&stru_10 + 697);
  this->m_Functions[128].__delta = 0;
}


// CDOTA_Modifier_Zuus_StaticField::OnAbilityExecuted  (line 730, @0x0000000002a5bb90, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, FStrEq, Get, GetAbilityName, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsAbilityAnItem, IsToggle, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, _V_strcmp, operator CBaseEntity*, operator CDOTABaseAbility*, operator CEntityInstance*, operator!=<CDOTABaseAbility>, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: __stack_chk_fail, CDOTA_Buff::GetParent, CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CBaseEntity::GetHealth, CDOTA_Buff::GetAbility, ApplyDamage, GetParticleManager (16 total)
// strings: "elder_titan_return_spirit", "special_bonus_unique_zeus", "particles/units/heroes/hero_zuus/zuus_static_field.vpcf"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Zuus_StaticField::OnAbilityExecuted(
        CDOTA_Modifier_Zuus_StaticField *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // edx
  CConcreteEntityList *v5; // rax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v7; // rcx
  char v8; // r12
  CEntityIdentity *v9; // rcx
  uint32 v10; // edx
  CEntityIdentity *v11; // rcx
  CEntityIdentity *v12; // rcx
  CDOTA_BaseNPC *m_pInstance; // r13
  CEntityInstance *v15; // rdi
  CEntityInstance *v16; // rax
  __m128i v17; // xmm2
  const char **m_Id; // rax
  const char *v19; // rsi
  float v20; // r13d
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v22; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  CDOTABaseAbility *AbilityByName; // rax
  __int64 v27; // r12
  int v28; // ebx
  CHandle<CBaseEntity> *v29; // rdx
  uint32 v30; // eax
  __int16 v31; // cx
  CEntityIdentity *v32; // rdx
  CEntityIdentity *v33; // rdx
  CBaseEntity *v34; // r13
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *v36; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  CDOTA_ParticleManager *v39; // rax
  char v40; // r12
  float flDamagePercent; // [rsp+28h] [rbp-158h]
  float flDamage; // [rsp+2Ch] [rbp-154h]
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> hEntities; // [rsp+30h] [rbp-150h] BYREF
  unsigned __int64 v44; // [rsp+148h] [rbp-38h]

  v44 = __readfsqword(0x28u);
  m_Index = params->ability.m_Index;
  v5 = CEntityHandle::gm_pEntityList;
  if ( params->ability.m_Index + 2 > 1
    && (m_Index_low = LOWORD(params->ability.m_Index),
        (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) != 0) )
  {
    v8 = 0;
    v9 = &v7[m_Index_low & 0x1FF];
    if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index && v9->m_pInstance != 0 )
    {
      v40 = (*(v9->m_pInstance->_vptr_IHandleEntity + 251))(v9->m_pInstance) >> 9;
      v5 = CEntityHandle::gm_pEntityList;
      v8 = v40 & 1;
    }
  }
  else
  {
    v8 = 0;
  }
  v10 = params->hunit.m_Index;
  if ( v10 + 2 > 1 )
  {
    v11 = v5->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v11 != 0 )
    {
      v12 = &v11[params->hunit.m_Index & 0x1FF];
      if ( v12 != 0 && v10 == v12->m_EHandle.m_Index )
      {
        m_pInstance = v12->m_pInstance;
        if ( v12->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == m_pInstance )
        {
          v15 = CEntityHandle::operator CEntityInstance *(&params->ability);
          if ( (v15 == 0 || (*(v15->_vptr_IHandleEntity + 223))(v15) == 0)
            && v8 == 0
            && (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) == 0 )
          {
            v16 = CEntityHandle::operator CEntityInstance *(&params->ability);
            if ( v16 != 0 )
            {
              m_Id = v16[18].m_iszPrivateVScripts.u.m_Id;
              if ( m_Id == 0
                || (v19 = *m_Id, *m_Id == 0)
                || v19 != "elder_titan_return_spirit" && strcmp(v19, "elder_titan_return_spirit") != 0 )
              {
                *v17.m128i_i32 = this->radius;
                hEntities.m_Size = 0;
                hEntities.m_Memory.m_nAllocationCount = 64;
                hEntities.m_Memory.m_nGrowSize = 0x80000000;
                v20 = COERCE_FLOAT(_mm_cvtsi128_si32(v17));
                hEntities.m_Memory.m_pMemory = &hEntities.m_FixedMemory;
                Caster = CDOTA_Buff::GetCaster(this);
                v22 = CDOTA_Buff::GetCaster(this);
                AbsOrigin = CBaseEntity::GetAbsOrigin(v22);
                v24 = CDOTA_Buff::GetCaster(this);
                FindUnitsInRadius(v24->m_iTeamNum.m_Value, AbsOrigin, Caster, v20, &hEntities, 2, 3, 0, 0, 0);
                flDamagePercent = this->damage_health_pct;
                v25 = CDOTA_Buff::GetCaster(this);
                AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v25, "special_bonus_unique_zeus", 0);
                if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
                  flDamagePercent = CDOTABaseAbility::GetLevelSpecialValueFor<float>(AbilityByName, "value", 1, 1)
                                  + flDamagePercent;
                if ( hEntities.m_Size > 0 )
                {
                  v27 = 0;
                  v28 = 0;
                  do
                  {
                    v29 = &hEntities.m_Memory.m_pMemory[v27];
                    v30 = hEntities.m_Memory.m_pMemory[v27].m_Index;
                    if ( v30 + 2 > 1 )
                    {
                      v31 = v29->m_Index;
                      v32 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v29->m_Index) >> 9) & 0x3F];
                      if ( v32 != 0 )
                      {
                        v33 = &v32[v31 & 0x1FF];
                        if ( v33 != 0 && v30 == v33->m_EHandle.m_Index )
                        {
                          v34 = v33->m_pInstance;
                          if ( v33->m_pInstance != 0
                            && v34->m_bIsDOTANPC
                            && (v34[2].m_hEffectEntity.m_Value.m_Index & 0x800) == 0 )
                          {
                            flDamage = (CBaseEntity::GetHealth(v33->m_pInstance) * flDamagePercent) / 100.0;
                            Ability = CDOTA_Buff::GetAbility(this);
                            v36 = CDOTA_Buff::GetCaster(this);
                            ApplyDamage(v36, v34, Ability, flDamage, 2, 32);
                            ParticleManager = GetParticleManager();
                            Particle = CDOTA_ParticleManager::CreateParticle(
                                         ParticleManager,
                                         "particles/units/heroes/hero_zuus/zuus_static_field.vpcf",
                                         1,
                                         v34,
                                         0,
                                         0);
                            v39 = GetParticleManager();
                            CDOTA_ParticleManager::ReleaseParticleIndex(v39, Particle);
                          }
                        }
                      }
                    }
                    ++v28;
                    ++v27;
                  }
                  while ( hEntities.m_Size > v28 );
                }
                CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Ability_Zuus_ThundergodsWrath::~CDOTA_Ability_Zuus_ThundergodsWrath  (line 781, @0x0000000002a67c30, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Zuus_ThundergodsWrath::~CDOTA_Ability_Zuus_ThundergodsWrath(
        CDOTA_Ability_Zuus_ThundergodsWrath *const this)
{
  this->_vptr_IHandleEntity = &off_43C3F90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Zuus_ThundergodsWrath::~CDOTA_Ability_Zuus_ThundergodsWrath  (line 781, @0x0000000002a67c50, libserver.so)  // inlines: ~CDOTA_Ability_Zuus_ThundergodsWrath
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Zuus_ThundergodsWrath::~CDOTA_Ability_Zuus_ThundergodsWrath(
        CDOTA_Ability_Zuus_ThundergodsWrath *const this)
{
  this->_vptr_IHandleEntity = &off_43C3F90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Zuus_ThundergodsWrath::Schema_DynamicBinding  (line 783, @0x0000000002a628d0, libserver.so)
// globals: CDOTA_Ability_Zuus_ThundergodsWrath::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Zuus_ThundergodsWrath::Schema_DynamicBinding(
        const CDOTA_Ability_Zuus_ThundergodsWrath *const this)
{
  return CDOTA_Ability_Zuus_ThundergodsWrath::s_pSchemaBinding;
}


// CDOTA_Ability_Zuus_ThundergodsWrath::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 783, @0x0000000002a628e0, libserver.so)
// globals: CDOTA_Ability_Zuus_ThundergodsWrath::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Zuus_ThundergodsWrath::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Zuus_ThundergodsWrath::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Zuus_ThundergodsWrath::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Zuus_ThundergodsWrath::CEntityInstanceEntityClass::DestructInstance  (line 783, @0x0000000002a628f0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Zuus_ThundergodsWrath>
void __fastcall CDOTA_Ability_Zuus_ThundergodsWrath::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Zuus_ThundergodsWrath::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Zuus_ThundergodsWrath::CEntityInstanceEntityClass::FreeInstance  (line 783, @0x0000000002a62910, libserver.so)
void __fastcall CDOTA_Ability_Zuus_ThundergodsWrath::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Zuus_ThundergodsWrath::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Zuus_ThundergodsWrath::CEntityInstanceEntityClass::CanAllocate  (line 783, @0x0000000002a62930, libserver.so)
bool __fastcall CDOTA_Ability_Zuus_ThundergodsWrath::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Zuus_ThundergodsWrath::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Zuus_ThundergodsWrath::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 783, @0x0000000002a62940, libserver.so)
// globals: CDOTA_Ability_Zuus_ThundergodsWrath::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Zuus_ThundergodsWrath::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Zuus_ThundergodsWrath::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Zuus_ThundergodsWrath::s_pSchemaBinding;
}


// CDOTA_Ability_Zuus_ThundergodsWrath::CEntityInstanceEntityClass::AllocateInstance  (line 783, @0x0000000002a64770, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Zuus_ThundergodsWrath::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Zuus_ThundergodsWrath::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Zuus_ThundergodsWrath::CEntityInstanceEntityClass::ConstructInstance  (line 783, @0x0000000002a66550, libserver.so)  // inlines: CDOTA_Ability_Zuus_ThundergodsWrath, Construct<CDOTA_Ability_Zuus_ThundergodsWrath>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Zuus_ThundergodsWrath::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Zuus_ThundergodsWrath::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43C3F90;
  }
  return p;
}


// CDOTA_Ability_Zuus_ThundergodsWrath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 783, @0x0000000002a6b3d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Zuus_ThundergodsWrath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Zuus_ThundergodsWrath::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Zuus_ThundergodsWrath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 783, @0x0000000002a6b3f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Zuus_ThundergodsWrath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Zuus_ThundergodsWrath::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInfo  (line 783, @0x0000000002a76440, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release
// callers: CDOTA_Ability_Zuus_ThundergodsVengeance::GetEntityClassInternal
// strings: "zuus_thundergods_wrath", "CDOTA_Ability_Zuus_ThundergodsWrath", "dota_base_ability", "CDOTABaseAbility", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsWrathClassInfo, CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsWrathClassInfo, `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo, CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo, `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo, CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo
CEntityClassInfo *__cdecl CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInfo()
{
  if ( `guard variable for'CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsWrathClassInfo != 0 )
    return &CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsWrathClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsWrathClassInfo) == 0 )
    return &CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsWrathClassInfo;
  if ( `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo) != 0 )
    {
      if ( `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo) != 0 )
      {
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo,
          "CGameEntity",
          0,
          0,
          &g_EntityRootClassInfo);
        __cxa_guard_release(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo,
        "CBaseEntity",
        0,
        0,
        &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo,
      "CDOTABaseAbility",
      "dota_base_ability",
      0,
      &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsWrathClassInfo,
    "CDOTA_Ability_Zuus_ThundergodsWrath",
    "zuus_thundergods_wrath",
    0,
    &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo);
  __cxa_guard_release(&`guard variable for'CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsWrathClassInfo);
  return &CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsWrathClassInfo;
}


// CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInternal  (line 783, @0x0000000002a76590, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "zuus_thundergods_wrath", "CDOTA_Ability_Zuus_ThundergodsWrath"
// globals: `guard variable for'CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsWrathClass, CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsWrathClass, __dso_handle, CDOTA_Ability_Zuus_ThundergodsWrath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsWrathClassInfo, CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsWrathClassInfo
CEntityClass *__cdecl CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsWrathClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsWrathClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsWrathClass);
    CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsWrathClass._vptr_CEntityClass = off_43C3F10;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsWrathClass);
    __cxa_atexit(
      CDOTA_Ability_Zuus_ThundergodsWrath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsWrathClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Zuus_ThundergodsWrathClass != 0 )
    return &CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsWrathClass;
  if ( `guard variable for'CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsWrathClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsWrathClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsWrathClassInfo,
      "CDOTA_Ability_Zuus_ThundergodsWrath",
      "zuus_thundergods_wrath",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsWrathClassInfo);
  }
  CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsWrathClass.m_pClassInfo = &CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsWrathClassInfo;
  CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsWrathClass.m_pBaseClassInfo = CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsWrathClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Zuus_ThundergodsWrathClass = &CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsWrathClass;
  CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsWrathClassInfo.m_pClass = &CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsWrathClass;
  CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsWrathClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Zuus_ThundergodsWrathClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsWrathClass;
}


// CDOTA_Ability_Zuus_ThundergodsWrath::ShouldSpeakAbilityConcept  (line 790, @0x0000000002a62950, libserver.so)
bool __fastcall CDOTA_Ability_Zuus_ThundergodsWrath::ShouldSpeakAbilityConcept(
        CDOTA_Ability_Zuus_ThundergodsWrath *const this,
        int iConcept)
{
  return 0;
}


// CDOTA_Ability_Zuus_ThundergodsWrath::OnAbilityPhaseStart  (line 808, @0x0000000002a3ffd0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, __dynamic_cast, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_BaseNPC::UnitEmitSound
// strings: "particles/units/heroes/hero_zuus/zuus_thundergods_wrath_start.vpcf", "attach_attack1", "attach_attack2", "Hero_Zuus.GodsWrath.PreCast"
// globals: `typeinfo for'CDOTA_Unit_Hero_Zuus
bool __fastcall CDOTA_Ability_Zuus_ThundergodsWrath::OnAbilityPhaseStart(
        CDOTA_Ability_Zuus_ThundergodsWrath *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  _BYTE *v3; // rax
  bool v4; // al
  CDOTA_BaseNPC *v5; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v7; // rax
  int m_nFXIndex; // r13d
  const CBaseAnimating *v9; // r14
  CDOTA_ParticleManager *v10; // rax
  __int64 v11; // r12
  CDOTA_BaseNPC *v12; // rax
  int v13; // r13d
  const CBaseAnimating *v14; // r14
  CDOTA_ParticleManager *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-24h]
  Vector v19; // 0:xmm0_8.8,8:xmm1_4.4

  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = Caster != 0
    && (v3 = __dynamic_cast(Caster, &`typeinfo for'CDOTA_BaseNPC, &`typeinfo for'CDOTA_Unit_Hero_Zuus, 0)) != 0
    && v3[4466] > 0;
  this->m_bZeusHasArcana = v4;
  v5 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  this->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_zuus/zuus_thundergods_wrath_start.vpcf",
                       1,
                       v5,
                       0,
                       0);
  v7 = CDOTABaseAbility::GetCaster(this);
  m_nFXIndex = this->m_nFXIndex;
  v9 = v7;
  v10 = GetParticleManager();
  v11 = *&vec3_invalid.x;
  vecFallbackPosition = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(v10, m_nFXIndex, 1, v9, 5, "attach_attack1", vec3_invalid, 1);
  v12 = CDOTABaseAbility::GetCaster(this);
  v13 = this->m_nFXIndex;
  v14 = v12;
  v15 = GetParticleManager();
  *&v19.x = v11;
  v19.z = vecFallbackPosition;
  CDOTA_ParticleManager::SetParticleControlEnt(v15, v13, 2, v14, 5, "attach_attack2", v19, 1);
  v16 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v16, "Hero_Zuus.GodsWrath.PreCast", 0.0, 0, 0);
  return 1;
}


// CDOTA_Ability_Zuus_ThundergodsWrath::OnAbilityPhaseInterrupted  (line 824, @0x0000000002a404a0, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect
void __fastcall CDOTA_Ability_Zuus_ThundergodsWrath::OnAbilityPhaseInterrupted(
        CDOTA_Ability_Zuus_ThundergodsWrath *const this)
{
  int m_nFXIndex; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax

  m_nFXIndex = this->m_nFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 1);
}


// CDOTA_Ability_Zuus_ThundergodsWrath::FillTargetList  (line 832, @0x0000000002a5fce0, libserver.so)  // inlines: AddToTail, CopyConstruct<CDOTA_BaseNPC*>, Element, Get, GetEntityIdentity, GetEntryIndex, GetHero, GetInstance, GetTeamNumber, GrowMemory, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsValid, LookupEntity, ToDOTABaseNPCHero, operator CEntityInstance*, operator[]
// calls: CDOTABaseAbility::GetCaster, CUtlMemory<CDOTA_BaseNPC*, int>::Grow
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Zuus_ThundergodsWrath::FillTargetList(
        CDOTA_Ability_Zuus_ThundergodsWrath *const this,
        CUtlVector<CDOTA_BaseNPC*,CUtlMemory<CDOTA_BaseNPC*,int> > *TargetList)
{
  __int64 v4; // rbx
  CHandle<CDOTA_BaseNPC_Hero> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // si
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  unsigned __int64 m_Value; // rax
  __int64 m_Size; // rdx
  int v13; // eax
  CDOTA_BaseNPC **v14; // rax
  unsigned __int8 v15; // [rsp+4h] [rbp-3Ch]
  int v16; // [rsp+4h] [rbp-3Ch]
  CUtlVectorBase<CDOTA_BaseNPC*,CUtlMemory<CDOTA_BaseNPC*,int> >::CAllocator *i; // [rsp+8h] [rbp-38h]

  v4 = 0;
  for ( i = &TargetList->m_Memory; g_HeroList.m_hHeroList.m_Size > v4; ++v4 )
  {
    while ( 1 )
    {
      v5 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v4];
      m_Index = v5->m_Index;
      if ( v5->m_Index + 2 > 1 )
      {
        v7 = v5->m_Index;
        v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
        if ( v8 != 0 )
        {
          v9 = &v8[v7 & 0x1FF];
          if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
          {
            m_pInstance = v9->m_pInstance;
            if ( v9->m_pInstance != 0 && (m_pInstance->m_iUnitType & 1) != 0 )
            {
              m_Value = m_pInstance->m_nUnitState64.m_Value;
              if ( (m_Value & 0x200) == 0
                && !m_pInstance->m_bIsWaitingToSpawn.m_Value
                && (m_Value & 0x100) == 0
                && !m_pInstance->m_bIsIllusion.m_Value )
              {
                v15 = m_pInstance->m_iTeamNum.m_Value;
                if ( v15 != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value
                  && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) != 0
                  && (*(m_pInstance->_vptr_IHandleEntity + 390))(m_pInstance) == 0 )
                {
                  m_Size = TargetList->m_Size;
                  if ( m_Size == TargetList->m_Memory.m_nAllocationCount )
                  {
                    v16 = TargetList->m_Size;
                    CUtlMemory<CDOTA_BaseNPC *,int>::Grow(i, 1);
                    v13 = TargetList->m_Size;
                    m_Size = v16;
                  }
                  else
                  {
                    v13 = TargetList->m_Size;
                  }
                  TargetList->m_Size = v13 + 1;
                  v14 = &TargetList->m_Memory.m_pMemory[m_Size];
                  if ( v14 != 0 )
                    break;
                }
              }
            }
          }
        }
      }
      if ( g_HeroList.m_hHeroList.m_Size <= ++v4 )
        return;
    }
    *v14 = m_pInstance;
  }
}


// CDOTA_Ability_Zuus_ThundergodsWrath::OnSpellStart  (line 849, @0x0000000002a599e0, libserver.so)  // inlines: CSingleUserRecipientFilter, CUtlMemory, CUtlVector, CUtlVectorBase, Color, DOTAGameRules, FastSqrt, Get, GetAbilityData, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetOwnerEntity, GetTeamNumber, GetTimeOfDay, IsDaytime, IsRealHero, Length2D, Purge, QueueConcept, RemapValClamped, RemoveAll, SetColor, ToDOTAPlayer, Vector, VectorAdd, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, clamp<float, float>, operator+, operator-, ~CSingleUserRecipientFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: GetParticleManager, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::UnitEmitSound, CDOTA_BaseNPC::IsInvisibleTo, ApplyDamage, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleControlEnt (37 total)
// strings: "sight_duration", "Hero_Zuus.GodsWrath", "particles/units/heroes/hero_zuus/zuus_thundergods_wrath.vpcf", "attach_hitloc", "Hero_Zuus.GodsWrath.Target", "particles/units/heroes/hero_zeus/zues_kill_empty.vpcf" (12 total)
void __fastcall CDOTA_Ability_Zuus_ThundergodsWrath::OnSpellStart(CDOTA_Ability_Zuus_ThundergodsWrath *const this)
{
  int m_nFXIndex; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Caster; // rax
  int (**vptr_IHandleEntity)(...); // rax
  __int64 v6; // r13
  CDOTA_BaseNPC *v7; // rbx
  CDOTA_BaseNPC *v8; // rax
  __m128i v9; // xmm6
  float v10; // r12d
  CDOTA_BaseNPC *v11; // rax
  const Vector *AbsOrigin; // rax
  float v13; // xmm0_4
  float v14; // xmm2_4
  CDOTA_BaseNPC *v15; // r12
  CDOTA_ParticleManager *v16; // rax
  int Particle; // r14d
  CDOTA_ParticleManager *v18; // rax
  CDOTA_ParticleManager *v19; // rax
  CDOTA_ParticleManager *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  const Vector *v22; // r14
  const Vector *v23; // rax
  CDOTA_BaseNPC *v24; // r14
  CDOTA_ParticleManager *v25; // rax
  CDOTA_ParticleManager *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  CDOTA_ParticleManager *v28; // rax
  IHandleEntity *HandleEntity; // rax
  const CEntityInstance *v30; // r12
  int v31; // eax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r12d
  CDOTA_BaseNPC *v34; // rax
  const Vector *v35; // rbx
  CDOTA_BaseNPC *v36; // rax
  float v37; // xmm3_4
  float v38; // xmm1_4
  __int64 v39; // r12
  CDOTA_BaseNPC *v40; // rbx
  float v41; // xmm1_4
  Vector *v42; // r14
  CDOTA_BaseNPC *v43; // rax
  CDOTA_BaseNPC *v44; // r14
  const QAngle *AbsAngles; // rax
  float v46; // xmm0_4
  int LevelSpecialValue; // eax
  __m128i v48; // xmm5
  float v49; // r14d
  const Vector *v50; // rbx
  CDOTA_BaseNPC *v51; // rax
  float v52; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  float v54; // xmm1_4
  float v55; // xmm1_4
  float v56; // xmm1_4
  float v57; // xmm1_4
  float v58; // xmm1_4
  float vecDisplayOrigin_8; // [rsp+20h] [rbp-1F0h]
  int damage; // [rsp+30h] [rbp-1E0h]
  float sight_duration; // [rsp+34h] [rbp-1DCh]
  int iKills; // [rsp+38h] [rbp-1D8h]
  int i; // [rsp+3Ch] [rbp-1D4h]
  int ia; // [rsp+3Ch] [rbp-1D4h]
  CUtlVector<CDOTA_BaseNPC*,CUtlMemory<CDOTA_BaseNPC*,int> > TargetList; // [rsp+40h] [rbp-1D0h] BYREF
  CResponseCriteriaSet criteria; // [rsp+60h] [rbp-1B0h] BYREF
  KeyValues kv2; // [rsp+A0h] [rbp-170h] BYREF
  unsigned __int64 v68; // [rsp+1D8h] [rbp-38h]

  v68 = __readfsqword(0x28u);
  m_nFXIndex = this->m_nFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(ParticleManager, m_nFXIndex);
  damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0);
  sight_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "sight_duration", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(Caster, "Hero_Zuus.GodsWrath", 0.0, 0, 0);
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  TargetList.m_Size = 0;
  TargetList.m_Memory.m_pMemory = 0;
  TargetList.m_Memory.m_nAllocationCount = 0;
  TargetList.m_Memory.m_nGrowSize = 0;
  vptr_IHandleEntity[333](this, &TargetList);
  if ( TargetList.m_Size <= 0 )
  {
    iKills = 0;
  }
  else
  {
    v6 = 0;
    i = 0;
    iKills = 0;
    do
    {
      v7 = TargetList.m_Memory.m_pMemory[v6];
      if ( v7 != 0 )
      {
        v8 = CDOTABaseAbility::GetCaster(this);
        if ( !CDOTA_BaseNPC::IsInvisibleTo(v7, v8) )
        {
          *v9.m128i_i32 = damage;
          v10 = COERCE_FLOAT(_mm_cvtsi128_si32(v9));
          v11 = CDOTABaseAbility::GetCaster(this);
          ApplyDamage(v11, v7, this, v10, 2, 0);
        }
        AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
        v13 = AbsOrigin->z + 4000.0;
        v14 = AbsOrigin->x + 0.0;
        *(&criteria._vptr_CResponseCriteriaSet + 1) = AbsOrigin->y + 0.0;
        *&criteria.m_Lookup.m_LessFunc = v13;
        *&criteria._vptr_CResponseCriteriaSet = v14;
        v15 = CDOTABaseAbility::GetCaster(this);
        v16 = GetParticleManager();
        Particle = CDOTA_ParticleManager::CreateParticle(
                     v16,
                     "particles/units/heroes/hero_zuus/zuus_thundergods_wrath.vpcf",
                     2,
                     0,
                     0,
                     v15);
        v18 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControl(
          v18,
          Particle,
          0,
          *&criteria._vptr_CResponseCriteriaSet,
          *&criteria.m_Lookup.m_LessFunc);
        v19 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v19, Particle, 1, v7, 5, "attach_hitloc", vec3_invalid, 1);
        v20 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v20, Particle);
        CBaseEntity::EmitSound(v7, "Hero_Zuus.GodsWrath.Target", 0.0, 0);
        v21 = CDOTABaseAbility::GetCaster(this);
        v22 = CBaseEntity::GetAbsOrigin(v21);
        v23 = CBaseEntity::GetAbsOrigin(v7);
        vecDisplayOrigin_8 = fsqrt(((v23->x - v22->x) * (v23->x - v22->x)) + ((v23->y - v22->y) * (v23->y - v22->y)));
        if ( (*(v7->_vptr_IHandleEntity + 408))(v7) == 0 && (v7->m_iUnitType & 1) != 0 && !v7->m_bIsIllusion.m_Value )
        {
          v24 = CDOTABaseAbility::GetCaster(this);
          v25 = GetParticleManager();
          LODWORD(v24) = CDOTA_ParticleManager::CreateParticle(
                           v25,
                           "particles/units/heroes/hero_zeus/zues_kill_empty.vpcf",
                           2,
                           0,
                           0,
                           v24);
          v26 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v26, v24, 1, v7, 1, 0, vec3_invalid, 1);
          v27 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v27, v24, 2, v7, 5, "attach_hitloc", vec3_invalid, 1);
          v28 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v28, v24);
          if ( (v7->m_fEffects.m_Value & 0x20) == 0 && this->m_bZeusHasArcana )
          {
            CBaseEntity::AddEffects(v7, 32);
            HandleEntity = CEntityHandle::GetHandleEntity(&v7->m_hOwnerEntity.m_Value);
            v30 = HandleEntity;
            if ( HandleEntity != 0 && (*(HandleEntity->_vptr_IHandleEntity + 140))(HandleEntity) != 0 )
            {
              CRecipientFilter::CRecipientFilter(&kv2);
              kv2.m_uValue = &off_3FCB0D0;
              CRecipientFilter::AddRecipient(&kv2, v30);
              DispatchParticleEffect(
                "particles/units/heroes/hero_zeus/zues_screen_empty.vpcf",
                ParticleAttachment_t::PATTACH_ABSORIGIN,
                v7,
                0,
                0,
                -1,
                &kv2);
              kv2.m_uValue = &off_3FCB0D0;
              CRecipientFilter::~CRecipientFilter(&kv2);
            }
          }
        }
        if ( (*(v7->_vptr_IHandleEntity + 408))(v7) == 0 )
        {
          v31 = iKills + 1;
          if ( vecDisplayOrigin_8 <= 1200.0 )
            v31 = iKills;
          iKills = v31;
        }
      }
      ++i;
      ++v6;
    }
    while ( TargetList.m_Size > i );
  }
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  v34 = CDOTABaseAbility::GetCaster(this);
  v35 = CBaseEntity::GetAbsOrigin(v34);
  v36 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(g_pGameRules, v36, 0, m_iAbilityID, 1, 0, *&v35->x, v35->z, -1.0, v37);
  if ( TargetList.m_Size > 0 )
  {
    v39 = 0;
    while ( 1 )
    {
      v40 = TargetList.m_Memory.m_pMemory[v39];
      if ( v40 != 0 )
        break;
LABEL_31:
      if ( TargetList.m_Size <= ++v39 )
        goto LABEL_32;
    }
    KeyValues::KeyValues(&kv2, "ThundergodsWrath");
    KeyValues::SetFloat(&kv2, "duration", v41);
    ia = this->m_iTeamNum.m_Value;
    v42 = CBaseEntity::GetAbsOrigin(v40);
    v43 = CDOTABaseAbility::GetCaster(this);
    v44 = Thinker_Create(v43, this, "modifier_zuus_thundergodswrath_vision_thinker", &kv2, *v42, ia, 0, 1, 0);
    AbsAngles = CBaseEntity::GetAbsAngles(v40);
    CBaseEntity::SetAbsAngles(v44, AbsAngles);
    if ( LOBYTE(g_pGameRules[14].m_nQuestPhase) != 0 )
      goto LABEL_29;
    if ( BYTE1(g_pGameRules[14].m_nQuestPhase) != 0 )
      goto LABEL_29;
    v46 = *&g_pGameRules[18].m_szQuestName[28] / 65535.0;
    if ( v46 < 0.0 )
      goto LABEL_29;
    if ( v46 <= 1.0 )
    {
      if ( (v46 + 0.0) < 0.25 || v46 >= 0.0 && (v46 > 1.0 || (v46 + 0.0) > 0.75) )
        goto LABEL_29;
    }
    else if ( v46 >= 0.0 )
    {
LABEL_29:
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "sight_radius_night", -1, 0);
LABEL_30:
      *v48.m128i_i32 = LevelSpecialValue;
      v49 = COERCE_FLOAT(_mm_cvtsi128_si32(v48));
      v50 = CBaseEntity::GetAbsOrigin(v40);
      v51 = CDOTABaseAbility::GetCaster(this);
      CDOTAFogOfWarSystem::AddTempViewer(
        &g_DOTAFogOfWarSystem,
        FoWViewerType_t::FOWVIEWERTYPE_THUNDERGODSWRATH,
        v51->m_iTeamNum.m_Value,
        v50,
        v49,
        sight_duration,
        0);
      KeyValues::~KeyValues(&kv2);
      goto LABEL_31;
    }
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "sight_radius_day", -1, 0);
    goto LABEL_30;
  }
LABEL_32:
  if ( iKills != 0 )
  {
    CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
    CResponseCriteriaSet::AppendCriteria(&criteria, "wrath_kills", 1.0, v52);
    m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
    if ( m_pSpeech != 0 )
      CDOTA_Speech::QueueConcept(m_pSpeech, 6, 0.5, &criteria, 5, 1, 0, 0, 0);
    CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
  }
  kv2.m_iValue = 32215411;
  SetTempGlobalLightColor(&kv2, 0x3D99999Au, v38);
  criteria._vptr_CResponseCriteriaSet = 0x3E051EB8BF08DF7ALL;
  LODWORD(criteria.m_Lookup.m_LessFunc) = -1083808154;
  SetTempGlobalLightDirection(&criteria, 0.145, v54);
  kv2.m_iValue = 21706551;
  SetTempGlobalLightColor(&kv2, 0x3DE147AEu, v55);
  criteria._vptr_CResponseCriteriaSet = 0;
  LODWORD(criteria.m_Lookup.m_LessFunc) = 1065353216;
  SetTempGlobalLightDirection(&criteria, 0.11, v56);
  kv2.m_iValue = 32214126;
  SetTempGlobalLightColor(&kv2, 0x3E147AE1u, v57);
  criteria._vptr_CResponseCriteriaSet = 0x3E051EB8BF08DF7ALL;
  LODWORD(criteria.m_Lookup.m_LessFunc) = -1083808154;
  SetTempGlobalLightDirection(&criteria, 0.145, v58);
  TargetList.m_Size = 0;
  if ( (TargetList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&TargetList.m_Memory);
    if ( (TargetList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&TargetList.m_Memory);
  }
}


// CDOTA_Ability_Zuus_ThundergodsWrath::GetAbilityDamageToTargetOverInterval  (line 960, @0x0000000002a546b0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetHealth, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "damage_health_pct"
__int64 __fastcall CDOTA_Ability_Zuus_ThundergodsWrath::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Zuus_ThundergodsWrath *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int v5; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int LevelSpecialValue; // r13d
  int v11; // ebx

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    v5 = 0;
    Caster = CDOTABaseAbility::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "zuus_static_field", 0);
    if ( AbilityByName != 0 )
    {
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "damage_health_pct", -1, 1);
      v5 = CBaseEntity::GetHealth(pTarget) * LevelSpecialValue / 100;
    }
    v11 = (*(this->_vptr_IHandleEntity + 247))(this);
    return ((v11 + v5) * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Modifier_Zuus_ThundergodsWrathThinker::~CDOTA_Modifier_Zuus_ThundergodsWrathThinker  (line 980, @0x0000000002a64b20, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Zuus_ThundergodsWrathThinker::~CDOTA_Modifier_Zuus_ThundergodsWrathThinker(
        CDOTA_Modifier_Zuus_ThundergodsWrathThinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_43C4A50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Zuus_ThundergodsWrathThinker::~CDOTA_Modifier_Zuus_ThundergodsWrathThinker  (line 980, @0x0000000002a64b40, libserver.so)  // inlines: ~CDOTA_Modifier_Zuus_ThundergodsWrathThinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Zuus_ThundergodsWrathThinker::~CDOTA_Modifier_Zuus_ThundergodsWrathThinker(
        CDOTA_Modifier_Zuus_ThundergodsWrathThinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_43C4A50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Zuus_ThundergodsWrathThinker::IsHidden  (line 985, @0x0000000002a62960, libserver.so)
bool __fastcall CDOTA_Modifier_Zuus_ThundergodsWrathThinker::IsHidden(
        CDOTA_Modifier_Zuus_ThundergodsWrathThinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Zuus_ThundergodsWrathThinker::IsAura  (line 988, @0x0000000002a62970, libserver.so)
bool __fastcall CDOTA_Modifier_Zuus_ThundergodsWrathThinker::IsAura(
        CDOTA_Modifier_Zuus_ThundergodsWrathThinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Zuus_ThundergodsWrathThinker::GetModifierAura  (line 989, @0x0000000002a62980, libserver.so)
// strings: "modifier_truesight"
const char *__fastcall CDOTA_Modifier_Zuus_ThundergodsWrathThinker::GetModifierAura(
        CDOTA_Modifier_Zuus_ThundergodsWrathThinker *const this)
{
  return "modifier_truesight";
}


// CDOTA_Modifier_Zuus_ThundergodsWrathThinker::GetAuraSearchTeam  (line 991, @0x0000000002a62990, libserver.so)
int __fastcall CDOTA_Modifier_Zuus_ThundergodsWrathThinker::GetAuraSearchTeam(
        CDOTA_Modifier_Zuus_ThundergodsWrathThinker *const this)
{
  return 2;
}


// CDOTA_Modifier_Zuus_ThundergodsWrathThinker::GetAuraSearchType  (line 992, @0x0000000002a629a0, libserver.so)
int __fastcall CDOTA_Modifier_Zuus_ThundergodsWrathThinker::GetAuraSearchType(
        CDOTA_Modifier_Zuus_ThundergodsWrathThinker *const this)
{
  return 51;
}


// CDOTA_Modifier_Zuus_ThundergodsWrathThinker::GetAuraSearchFlags  (line 993, @0x0000000002a629b0, libserver.so)
int __fastcall CDOTA_Modifier_Zuus_ThundergodsWrathThinker::GetAuraSearchFlags(
        CDOTA_Modifier_Zuus_ThundergodsWrathThinker *const this)
{
  return 80;
}


// CDOTA_Modifier_Zuus_ThundergodsWrathThinker::GetAuraRadius  (line 994, @0x0000000002a629c0, libserver.so)
int __fastcall CDOTA_Modifier_Zuus_ThundergodsWrathThinker::GetAuraRadius(
        CDOTA_Modifier_Zuus_ThundergodsWrathThinker *const this)
{
  return 900;
}


// CDOTA_Modifier_Zuus_ThundergodsWrathThinker::OnDestroy  (line 1000, @0x0000000002a413e0, libserver.so)
// calls: CDOTA_Buff::GetParent, UTIL_Remove
void __fastcall CDOTA_Modifier_Zuus_ThundergodsWrathThinker::OnDestroy(
        CDOTA_Modifier_Zuus_ThundergodsWrathThinker *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  UTIL_Remove(Parent);
}


// CDOTA_Ability_Zuus_ThundergodsVengeance::~CDOTA_Ability_Zuus_ThundergodsVengeance  (line 1013, @0x0000000002a67c80, libserver.so)  // inlines: ~CDOTA_Ability_Zuus_ThundergodsWrath
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Zuus_ThundergodsVengeance::~CDOTA_Ability_Zuus_ThundergodsVengeance(
        CDOTA_Ability_Zuus_ThundergodsVengeance *const this)
{
  this->_vptr_IHandleEntity = &off_43C3F90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Zuus_ThundergodsVengeance::~CDOTA_Ability_Zuus_ThundergodsVengeance  (line 1013, @0x0000000002a67ca0, libserver.so)  // inlines: ~CDOTA_Ability_Zuus_ThundergodsVengeance, ~CDOTA_Ability_Zuus_ThundergodsWrath
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Zuus_ThundergodsVengeance::~CDOTA_Ability_Zuus_ThundergodsVengeance(
        CDOTA_Ability_Zuus_ThundergodsVengeance *const this)
{
  this->_vptr_IHandleEntity = &off_43C3F90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Zuus_ThundergodsVengeance::Schema_DynamicBinding  (line 1015, @0x0000000002a629d0, libserver.so)
// globals: CDOTA_Ability_Zuus_ThundergodsVengeance::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Zuus_ThundergodsVengeance::Schema_DynamicBinding(
        const CDOTA_Ability_Zuus_ThundergodsVengeance *const this)
{
  return CDOTA_Ability_Zuus_ThundergodsVengeance::s_pSchemaBinding;
}


// CDOTA_Ability_Zuus_ThundergodsVengeance::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1015, @0x0000000002a629e0, libserver.so)
// globals: CDOTA_Ability_Zuus_ThundergodsVengeance::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Zuus_ThundergodsVengeance::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Zuus_ThundergodsVengeance::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Zuus_ThundergodsVengeance::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Zuus_ThundergodsVengeance::CEntityInstanceEntityClass::DestructInstance  (line 1015, @0x0000000002a629f0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Zuus_ThundergodsVengeance>
void __fastcall CDOTA_Ability_Zuus_ThundergodsVengeance::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Zuus_ThundergodsVengeance::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Zuus_ThundergodsVengeance::CEntityInstanceEntityClass::FreeInstance  (line 1015, @0x0000000002a62a10, libserver.so)
void __fastcall CDOTA_Ability_Zuus_ThundergodsVengeance::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Zuus_ThundergodsVengeance::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Zuus_ThundergodsVengeance::CEntityInstanceEntityClass::CanAllocate  (line 1015, @0x0000000002a62a30, libserver.so)
bool __fastcall CDOTA_Ability_Zuus_ThundergodsVengeance::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Zuus_ThundergodsVengeance::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Zuus_ThundergodsVengeance::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1015, @0x0000000002a62a40, libserver.so)
// globals: CDOTA_Ability_Zuus_ThundergodsVengeance::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Zuus_ThundergodsVengeance::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Zuus_ThundergodsVengeance::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Zuus_ThundergodsVengeance::s_pSchemaBinding;
}


// CDOTA_Ability_Zuus_ThundergodsVengeance::CEntityInstanceEntityClass::AllocateInstance  (line 1015, @0x0000000002a647b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Zuus_ThundergodsVengeance::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Zuus_ThundergodsVengeance::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Zuus_ThundergodsVengeance::CEntityInstanceEntityClass::ConstructInstance  (line 1015, @0x0000000002a66580, libserver.so)  // inlines: CDOTA_Ability_Zuus_ThundergodsVengeance, CDOTA_Ability_Zuus_ThundergodsWrath, Construct<CDOTA_Ability_Zuus_ThundergodsVengeance>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Zuus_ThundergodsVengeance::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Zuus_ThundergodsVengeance::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43C4DB0;
  }
  return p;
}


// CDOTA_Ability_Zuus_ThundergodsVengeance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1015, @0x0000000002a6b420, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Zuus_ThundergodsVengeance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Zuus_ThundergodsVengeance::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Zuus_ThundergodsVengeance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1015, @0x0000000002a6b440, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Zuus_ThundergodsVengeance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Zuus_ThundergodsVengeance::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Zuus_ThundergodsVengeance::GetEntityClassInternal  (line 1015, @0x0000000002a766e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "zuus_thundergods_vengeance", "CDOTA_Ability_Zuus_ThundergodsVengeance"
// globals: `guard variable for'CDOTA_Ability_Zuus_ThundergodsVengeance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsVengeanceClass, CDOTA_Ability_Zuus_ThundergodsVengeance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsVengeanceClass, __dso_handle, CDOTA_Ability_Zuus_ThundergodsVengeance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Zuus_ThundergodsVengeance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsVengeanceClassInfo, CDOTA_Ability_Zuus_ThundergodsVengeance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsVengeanceClassInfo
CEntityClass *__cdecl CDOTA_Ability_Zuus_ThundergodsVengeance::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Zuus_ThundergodsVengeance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsVengeanceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Zuus_ThundergodsVengeance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsVengeanceClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Zuus_ThundergodsVengeance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsVengeanceClass);
    CDOTA_Ability_Zuus_ThundergodsVengeance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsVengeanceClass._vptr_CEntityClass = off_43C4D30;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Zuus_ThundergodsVengeance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsVengeanceClass);
    __cxa_atexit(
      CDOTA_Ability_Zuus_ThundergodsVengeance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Zuus_ThundergodsVengeance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsVengeanceClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Zuus_ThundergodsVengeanceClass != 0 )
    return &CDOTA_Ability_Zuus_ThundergodsVengeance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsVengeanceClass;
  if ( `guard variable for'CDOTA_Ability_Zuus_ThundergodsVengeance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsVengeanceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Zuus_ThundergodsVengeance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsVengeanceClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Ability_Zuus_ThundergodsWrath::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Zuus_ThundergodsVengeance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsVengeanceClassInfo,
      "CDOTA_Ability_Zuus_ThundergodsVengeance",
      "zuus_thundergods_vengeance",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Zuus_ThundergodsVengeance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsVengeanceClassInfo);
  }
  CDOTA_Ability_Zuus_ThundergodsVengeance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsVengeanceClass.m_pClassInfo = &CDOTA_Ability_Zuus_ThundergodsVengeance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsVengeanceClassInfo;
  CDOTA_Ability_Zuus_ThundergodsVengeance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsVengeanceClass.m_pBaseClassInfo = CDOTA_Ability_Zuus_ThundergodsVengeance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsVengeanceClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Zuus_ThundergodsVengeanceClass = &CDOTA_Ability_Zuus_ThundergodsVengeance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsVengeanceClass;
  CDOTA_Ability_Zuus_ThundergodsVengeance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsVengeanceClassInfo.m_pClass = &CDOTA_Ability_Zuus_ThundergodsVengeance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsVengeanceClass;
  CDOTA_Ability_Zuus_ThundergodsVengeance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsVengeanceClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Zuus_ThundergodsVengeanceClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Zuus_ThundergodsVengeance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zuus_ThundergodsVengeanceClass;
}


// CDOTA_Ability_Zuus_ThundergodsVengeance::FillTargetList  (line 1023, @0x0000000002a5f9a0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CDOTA_BaseNPC*>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetTeamNumber, GrowMemory, GrowVector, InState, IndexToIdentity, InsertBefore, IsInvulnerable, IsMagicImmune, IsValid, LookupEntity, RemoveMultipleFromTail, ShiftElementsRight, ToDOTABaseNPC, V_memmove, memmove, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CBaseEntity::GetHealth, memmove, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CUtlMemory<CDOTA_BaseNPC*, int>::Grow, _Unwind_Resume
// strings: "num_targets"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Zuus_ThundergodsVengeance::FillTargetList(
        CDOTA_Ability_Zuus_ThundergodsVengeance *const this,
        CUtlVector<CDOTA_BaseNPC*,CUtlMemory<CDOTA_BaseNPC*,int> > *TargetList)
{
  __m128i v4; // xmm1
  float v5; // r13d
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rax
  int v8; // eax
  CHandle<CBaseEntity> *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  unsigned __int64 m_Value; // rax
  __int64 m_Size; // r13
  __int64 v16; // rbx
  __int64 v17; // r14
  int v18; // r15d
  int Health; // r13d
  int v20; // ebx
  int m_nAllocationCount; // eax
  int v22; // ebx
  CDOTA_BaseNPC **v23; // r14
  int v24; // eax
  int v25; // edx
  CDOTA_BaseNPC **m_pMemory; // rax
  int v27; // edx
  CDOTA_BaseNPC **v28; // rax
  CUtlVectorBase<CDOTA_BaseNPC*,CUtlMemory<CDOTA_BaseNPC*,int> >::CAllocator *p_m_Memory; // [rsp+20h] [rbp-70h]
  int num_targets; // [rsp+2Ch] [rbp-64h]
  __int64 i; // [rsp+30h] [rbp-60h]
  CDOTA_BaseNPC *pNPC; // [rsp+38h] [rbp-58h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hPotentialTargets; // [rsp+40h] [rbp-50h] BYREF

  num_targets = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "num_targets", -1, 0);
  hPotentialTargets.m_Size = 0;
  *v4.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "range", -1, 0);
  hPotentialTargets.m_Memory.m_pMemory = 0;
  hPotentialTargets.m_Memory.m_nAllocationCount = 0;
  hPotentialTargets.m_Memory.m_nGrowSize = 0;
  v5 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  FindUnitsInRadius(this->m_iTeamNum.m_Value, AbsOrigin, 0, v5, &hPotentialTargets, 2, 3, 0, 0, 0);
  if ( hPotentialTargets.m_Size > 0 )
  {
    i = 0;
    p_m_Memory = &TargetList->m_Memory;
    do
    {
      while ( 1 )
      {
        v9 = &hPotentialTargets.m_Memory.m_pMemory[i];
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
              pNPC = v13->m_pInstance;
              if ( v13->m_pInstance != 0 && BYTE3(v13->m_pInstance[7]._vptr_IHandleEntity) != 0 )
              {
                m_Value = pNPC->m_nUnitState64.m_Value;
                if ( (m_Value & 0x200) == 0
                  && !pNPC->m_bIsWaitingToSpawn.m_Value
                  && (m_Value & 0x100) == 0
                  && !pNPC->m_bIsIllusion.m_Value
                  && (*(pNPC->_vptr_IHandleEntity + 408))(pNPC) != 0
                  && (*(pNPC->_vptr_IHandleEntity + 390))(pNPC) == 0 )
                {
                  m_Size = TargetList->m_Size;
                  if ( m_Size <= 0 )
                  {
LABEL_30:
                    if ( num_targets > m_Size )
                    {
                      if ( m_Size == TargetList->m_Memory.m_nAllocationCount )
                      {
                        CUtlMemory<CDOTA_BaseNPC *,int>::Grow(p_m_Memory, 1);
                        v25 = TargetList->m_Size;
                      }
                      else
                      {
                        v25 = m_Size;
                      }
                      m_pMemory = TargetList->m_Memory.m_pMemory;
                      v27 = v25 + 1;
                      TargetList->m_Size = v27;
                      v28 = &m_pMemory[m_Size];
                      if ( v28 != 0 )
                      {
                        *v28 = pNPC;
                        LODWORD(m_Size) = TargetList->m_Size;
                      }
                      else
                      {
                        LODWORD(m_Size) = v27;
                      }
                    }
                  }
                  else
                  {
                    v16 = 0;
                    while ( 1 )
                    {
                      v17 = v16;
                      v18 = v16;
                      Health = CBaseEntity::GetHealth(TargetList->m_Memory.m_pMemory[v16]);
                      if ( Health < CBaseEntity::GetHealth(pNPC) )
                        break;
                      m_Size = TargetList->m_Size;
                      if ( m_Size <= ++v16 )
                        goto LABEL_30;
                    }
                    v20 = TargetList->m_Size + 1;
                    m_nAllocationCount = TargetList->m_Memory.m_nAllocationCount;
                    if ( v20 > m_nAllocationCount )
                      CUtlMemory<CDOTA_BaseNPC *,int>::Grow(p_m_Memory, v20 - m_nAllocationCount);
                    TargetList->m_Size = v20;
                    v22 = v20 - v18 - 1;
                    if ( v22 > 0 )
                      memmove(&TargetList->m_Memory.m_pMemory[v18 + 1], &TargetList->m_Memory.m_pMemory[v17], 8LL * v22);
                    v23 = &TargetList->m_Memory.m_pMemory[v17];
                    if ( v23 != 0 )
                      *v23 = pNPC;
                    LODWORD(m_Size) = TargetList->m_Size;
                  }
                  if ( num_targets < m_Size )
                    break;
                }
              }
            }
          }
        }
        v8 = i++;
        if ( hPotentialTargets.m_Size <= v8 + 1 )
          goto LABEL_29;
      }
      v24 = i++;
      TargetList->m_Size = m_Size - 1;
    }
    while ( hPotentialTargets.m_Size > v24 + 1 );
  }
LABEL_29:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hPotentialTargets);
}


// CDOTA_Modifier_Zuus_Cloud::~CDOTA_Modifier_Zuus_Cloud  (line 1070, @0x0000000002a64ad0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Zuus_Cloud::~CDOTA_Modifier_Zuus_Cloud(CDOTA_Modifier_Zuus_Cloud *const this)
{
  this->_vptr_CDOTA_Buff = &off_43C5870;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Zuus_Cloud::~CDOTA_Modifier_Zuus_Cloud  (line 1070, @0x0000000002a64af0, libserver.so)  // inlines: ~CDOTA_Modifier_Zuus_Cloud
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Zuus_Cloud::~CDOTA_Modifier_Zuus_Cloud(CDOTA_Modifier_Zuus_Cloud *const this)
{
  this->_vptr_CDOTA_Buff = &off_43C5870;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Zuus_Cloud::IsHidden  (line 1078, @0x0000000002a62a50, libserver.so)
bool __fastcall CDOTA_Modifier_Zuus_Cloud::IsHidden(CDOTA_Modifier_Zuus_Cloud *const this)
{
  return 1;
}


// CDOTA_Modifier_Zuus_Cloud::IsPurgable  (line 1079, @0x0000000002a62a60, libserver.so)
bool __fastcall CDOTA_Modifier_Zuus_Cloud::IsPurgable(CDOTA_Modifier_Zuus_Cloud *const this)
{
  return 0;
}


// CDOTA_Modifier_Zuus_Cloud::DestroyOnExpire  (line 1080, @0x0000000002a62a70, libserver.so)
bool __fastcall CDOTA_Modifier_Zuus_Cloud::DestroyOnExpire(CDOTA_Modifier_Zuus_Cloud *const this)
{
  return 0;
}


// CDOTA_Modifier_Zuus_Cloud::OnCreated  (line 1099, @0x0000000002a5d260, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, NetworkStateChanged, Set, Start, operator=<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CountdownTimer::Now, CDOTA_Buff::StartIntervalThink
// strings: "cloud_radius", "cloud_bolt_interval"
void __fastcall CDOTA_Modifier_Zuus_Cloud::OnCreated(CDOTA_Modifier_Zuus_Cloud *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // [rsp+Ch] [rbp-14h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->cloud_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "cloud_radius", -1, 0);
  else
    this->cloud_radius = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 != 0 )
    this->cloud_bolt_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "cloud_bolt_interval", -1, 0);
  else
    this->cloud_bolt_interval = 0.0;
  v5 = CountdownTimer::Now(&this->m_CloudBoltTimer);
  v6 = 0.0;
  v7 = v5 + 0.0;
  if ( v7 != this->m_CloudBoltTimer.m_timestamp.m_Value )
  {
    v8 = v7;
    (*(this->m_CloudBoltTimer._vptr_CountdownTimer + 2))(&this->m_CloudBoltTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v6 = 0.0;
    this->m_CloudBoltTimer.m_timestamp.m_Value = v8;
  }
  if ( this->m_CloudBoltTimer.m_duration.m_Value != 0.0 )
  {
    (*(this->m_CloudBoltTimer._vptr_CountdownTimer + 2))(&this->m_CloudBoltTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_CloudBoltTimer.m_duration.m_Value = 0.0;
  }
  CDOTA_Buff::StartIntervalThink(this, 0.0099999998, v6);
}


// CDOTA_Modifier_Zuus_Cloud::OnIntervalThink  (line 1123, @0x0000000002a5b910, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetInstance, GetTeamNumber, IsElapsed, NetworkStateChanged, Purge, Set, Start, ToDOTABaseNPC, operator CBaseEntity*, operator=<float>, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CountdownTimer::Now, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CEntityHandle::operator CEntityInstance*, CDOTA_Ability_Zuus_LightningBolt::CastLightningBolt, CDOTA_Buff::GetAbility, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase (13 total)
// strings: "zuus_lightning_bolt"
void __fastcall CDOTA_Modifier_Zuus_Cloud::OnIntervalThink(CDOTA_Modifier_Zuus_Cloud *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Ability_Zuus_LightningBolt *AbilityByName; // r12
  CDOTA_BaseNPC *Parent; // rax
  float cloud_radius; // xmm3_4
  CDOTA_BaseNPC *v6; // rax
  const Vector *AbsOrigin; // r15
  CDOTA_BaseNPC *v8; // rax
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // r15
  CDOTA_BaseNPC *v11; // rax
  CDOTABaseAbility *Ability; // rax
  __m128i v13; // xmm0
  double v14; // xmm1_8
  double v15; // xmm3_8
  double v16; // xmm4_8
  __m128i v17; // xmm2
  float v18; // r12d
  CDOTA_BaseNPC *pCacheNPC; // [rsp+20h] [rbp-60h]
  float flCooldowna; // [rsp+2Ch] [rbp-54h]
  float flCooldownb; // [rsp+2Ch] [rbp-54h]
  float flCooldown; // [rsp+2Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-50h] BYREF

  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "zuus_lightning_bolt", 0);
  if ( AbilityByName != 0
    && CountdownTimer::Now(&this->m_CloudBoltTimer) >= this->m_CloudBoltTimer.m_timestamp.m_Value
    && AbilityByName->m_iLevel.m_Value > 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    if ( (*(Parent->_vptr_IHandleEntity + 408))(Parent) != 0 )
    {
      entities.m_Size = 0;
      cloud_radius = this->cloud_radius;
      entities.m_Memory.m_pMemory = 0;
      entities.m_Memory.m_nAllocationCount = 0;
      entities.m_Memory.m_nGrowSize = 0;
      flCooldowna = cloud_radius;
      pCacheNPC = CDOTA_Buff::GetCaster(this);
      v6 = CDOTA_Buff::GetParent(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
      v8 = CDOTA_Buff::GetCaster(this);
      FindUnitsInRadius(v8->m_iTeamNum.m_Value, AbsOrigin, pCacheNPC, flCooldowna, &entities, 2, 19, 0, 1, 0);
      if ( entities.m_Size > 0 )
      {
        v9 = CEntityHandle::operator CEntityInstance *(entities.m_Memory.m_pMemory);
        v10 = v9;
        if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
        {
          v11 = CDOTA_Buff::GetParent(this);
          CDOTA_Ability_Zuus_LightningBolt::CastLightningBolt(AbilityByName, v11, v10, 1);
          flCooldownb = this->cloud_bolt_interval;
          Ability = CDOTA_Buff::GetAbility(this);
          flCooldown = flCooldownb * (*(Ability->_vptr_IHandleEntity + 243))(Ability, 0xFFFFFFFFLL);
          *v13.m128i_i32 = CountdownTimer::Now(&this->m_CloudBoltTimer);
          v17 = v13;
          *v17.m128i_i32 = *v13.m128i_i32 + flCooldown;
          v18 = COERCE_FLOAT(_mm_cvtsi128_si32(v17));
          if ( (*v13.m128i_i32 + flCooldown) != this->m_CloudBoltTimer.m_timestamp.m_Value )
          {
            (*(this->m_CloudBoltTimer._vptr_CountdownTimer + 2))(
              &this->m_CloudBoltTimer,
              12,
              0xFFFFFFFFLL,
              0xFFFFFFFFLL);
            this->m_CloudBoltTimer.m_timestamp.m_Value = v18;
          }
          if ( flCooldown != this->m_CloudBoltTimer.m_duration.m_Value )
          {
            (*(this->m_CloudBoltTimer._vptr_CountdownTimer + 2))(
              &this->m_CloudBoltTimer,
              8,
              0xFFFFFFFFLL,
              0xFFFFFFFFLL,
              *v13.m128i_i64,
              v14,
              *v17.m128i_i64,
              v15,
              v16,
              flCooldown);
            this->m_CloudBoltTimer.m_duration.m_Value = flCooldown;
          }
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


// CDOTA_Modifier_Zuus_Cloud::DeclareFunctions  (line 1154, @0x0000000002a3fdf0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Zuus_Cloud::GetAbsoluteNoDamagePhysical(CModifierParams const&), CDOTA_Modifier_Zuus_Cloud::GetAbsoluteNoDamageMagical(CModifierParams const&), CDOTA_Modifier_Zuus_Cloud::GetAbsoluteNoDamagePure(CModifierParams const&), CDOTA_Modifier_Zuus_Cloud::OnAttacked(CModifierParams const&)
void __fastcall CDOTA_Modifier_Zuus_Cloud::DeclareFunctions(CDOTA_Modifier_Zuus_Cloud *const this)
{
  this->m_Functions[103].__pfn = CDOTA_Modifier_Zuus_Cloud::GetAbsoluteNoDamagePhysical;
  this->m_Functions[103].__delta = 0;
  this->m_Functions[104].__delta = 0;
  this->m_Functions[104].__pfn = CDOTA_Modifier_Zuus_Cloud::GetAbsoluteNoDamageMagical;
  this->m_Functions[105].__pfn = CDOTA_Modifier_Zuus_Cloud::GetAbsoluteNoDamagePure;
  this->m_Functions[105].__delta = 0;
  this->m_Functions[137].__pfn = CDOTA_Modifier_Zuus_Cloud::OnAttacked;
  this->m_Functions[137].__delta = 0;
}


// CDOTA_Modifier_Zuus_Cloud::GetAbsoluteNoDamagePhysical  (line 1165, @0x0000000002a3fe60, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Zuus_Cloud::GetAbsoluteNoDamagePhysical(
        CDOTA_Modifier_Zuus_Cloud *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Zuus_Cloud::GetAbsoluteNoDamageMagical  (line 1172, @0x0000000002a3fe80, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Zuus_Cloud::GetAbsoluteNoDamageMagical(
        CDOTA_Modifier_Zuus_Cloud *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Zuus_Cloud::GetAbsoluteNoDamagePure  (line 1179, @0x0000000002a3fea0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Zuus_Cloud::GetAbsoluteNoDamagePure(
        CDOTA_Modifier_Zuus_Cloud *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Zuus_Cloud::OnAttacked  (line 1186, @0x0000000002a47600, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsRangedAttacker, IsRealHero, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth, CDOTA_BaseNPC::ModifyHealth, CDOTA_BaseNPC::Kill, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Zuus_Cloud::OnAttacked(
        CDOTA_Modifier_Zuus_Cloud *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // ecx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CEntityInstance *v12; // r13
  int v13; // ebx
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v15; // rax
  int Health; // r13d
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // rax

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
                if ( v11->m_pInstance != 0 && BYTE3(v12[7]._vptr_IHandleEntity) != 0 )
                {
                  if ( (v12[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 || LOBYTE(v12[71].m_pEntity) != 0 )
                    v13 = 1;
                  else
                    v13 = (*(&v12[50].m_worldGroupId + 1) & 2) == 0 ? 4 : 2;
                  Parent = CDOTA_Buff::GetParent(this);
                  if ( CBaseEntity::GetHealth(Parent) - v13 <= 0 )
                  {
                    v18 = CDOTA_Buff::GetParent(this);
                    CDOTA_BaseNPC::Kill(v18, 0, v12, 0.0, 0);
                    CDOTA_Buff::Destroy(this, 0, 0, 0);
                  }
                  else
                  {
                    v15 = CDOTA_Buff::GetParent(this);
                    Health = CBaseEntity::GetHealth(v15);
                    v17 = CDOTA_Buff::GetParent(this);
                    CDOTA_BaseNPC::ModifyHealth(v17, Health - v13, 0, 1, 0);
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


