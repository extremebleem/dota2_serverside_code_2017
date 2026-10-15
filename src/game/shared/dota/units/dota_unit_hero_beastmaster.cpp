// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_beastmaster.cpp:43
class CDOTA_Unit_Hero_Beastmaster : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Beastmaster(CDOTA_Unit_Hero_Beastmaster &);
	CDOTA_Unit_Hero_Beastmaster(CDOTA_Unit_Hero_Beastmaster &);
	CDOTA_Unit_Hero_Beastmaster();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual ~CDOTA_Unit_Hero_Beastmaster();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_beastmaster.cpp:52
class C_CDOTA_Unit_Hero_Beastmaster_MapInstall {
	C_CDOTA_Unit_Hero_Beastmaster_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_beastmaster.cpp:73
class CDOTA_Beastmaster_Axe : public CBaseAnimating {
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
	CDOTA_Beastmaster_Axe(CDOTA_Beastmaster_Axe &);
	CDOTA_Beastmaster_Axe(CDOTA_Beastmaster_Axe &);
	CDOTA_Beastmaster_Axe();
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
	virtual ~CDOTA_Beastmaster_Axe();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[212] IsPartOfFOWSystem
	// vtable[65] ShouldTransmit
	// sizeof = 1216
};

// src/game/shared/dota/units/dota_unit_hero_beastmaster.cpp:104
class C_CDOTA_Beastmaster_Axe_MapInstall {
	C_CDOTA_Beastmaster_Axe_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_beastmaster.cpp:163
class CDOTA_Ability_Beastmaster_WildAxes : public CDOTABaseAbility {
public:

private:

	int axe_damage;  // +0x390
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
	CDOTA_Ability_Beastmaster_WildAxes(CDOTA_Ability_Beastmaster_WildAxes &);
	CDOTA_Ability_Beastmaster_WildAxes(CDOTA_Ability_Beastmaster_WildAxes &);
	CDOTA_Ability_Beastmaster_WildAxes();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual const char * GetStolenActivityModifier();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Beastmaster_WildAxes();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[310] GetStolenActivityModifier
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_beastmaster.cpp:209
class CDOTA_Modifier_Beastmaster_WildAxes : public CDOTA_Buff {
public:

private:

	float m_flDuration;  // +0xbd8
	float m_flDieTime;  // +0xbdc
	bool m_bReturning;  // +0xbe0
	bool m_bCatchingAxes;  // +0xbe1

	int m_nAxeFXIndex[2];  // +0xc00
	int radius;  // +0xc38
	int spread;  // +0xc3c
	int axe_damage;  // +0xc40
	CDOTA_Modifier_Beastmaster_WildAxes();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual bool RemoveOnDeath();
	virtual int GetAttributes();
	virtual void OnIntervalThink();
	void GenerateSideControlPoints();
	virtual ~CDOTA_Modifier_Beastmaster_WildAxes();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[54] RemoveOnDeath
	// vtable[7] GetAttributes
	// vtable[56] OnIntervalThink
	// sizeof = 3144
};

// src/game/shared/dota/units/dota_unit_hero_beastmaster.cpp:469
class CDOTA_Modifier_Beastmaster_Axe_Invulnerable : public CDOTA_Buff {
public:

	CDOTA_Modifier_Beastmaster_Axe_Invulnerable();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Beastmaster_Axe_Invulnerable();

	// vtable[5] CheckState
	// vtable[11] IsHidden
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_beastmaster.cpp:498
class CDOTA_Unit_Hero_Beastmaster_Beasts : public CDOTA_BaseNPC_Creep_Talking {
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

	CDOTA_Unit_Hero_Beastmaster_Beasts(CDOTA_Unit_Hero_Beastmaster_Beasts &);
	CDOTA_Unit_Hero_Beastmaster_Beasts(CDOTA_Unit_Hero_Beastmaster_Beasts &);
	CDOTA_Unit_Hero_Beastmaster_Beasts();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetBeastName();
	virtual ~CDOTA_Unit_Hero_Beastmaster_Beasts();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[490] GetBeastName
	// sizeof = 4512
};

// src/game/shared/dota/units/dota_unit_hero_beastmaster.cpp:507
class C_CDOTA_Unit_Hero_Beastmaster_Beasts_MapInstall {
	C_CDOTA_Unit_Hero_Beastmaster_Beasts_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_beastmaster.cpp:519
class CDOTA_Unit_Hero_Beastmaster_Hawk : public CDOTA_Unit_Hero_Beastmaster_Beasts {
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
	CDOTA_Unit_Hero_Beastmaster_Hawk(CDOTA_Unit_Hero_Beastmaster_Hawk &);
	CDOTA_Unit_Hero_Beastmaster_Hawk(CDOTA_Unit_Hero_Beastmaster_Hawk &);
	CDOTA_Unit_Hero_Beastmaster_Hawk();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetBeastName();
	virtual bool IsFlyingVisually();
	virtual ~CDOTA_Unit_Hero_Beastmaster_Hawk();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[490] GetBeastName
	// vtable[489] IsFlyingVisually
	// sizeof = 4512
};

// src/game/shared/dota/units/dota_unit_hero_beastmaster.cpp:530
class C_CDOTA_Unit_Hero_Beastmaster_Hawk_MapInstall {
	C_CDOTA_Unit_Hero_Beastmaster_Hawk_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_beastmaster.cpp:541
class CDOTA_Unit_Hero_Beastmaster_Boar : public CDOTA_Unit_Hero_Beastmaster_Beasts {
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
	CDOTA_Unit_Hero_Beastmaster_Boar(CDOTA_Unit_Hero_Beastmaster_Boar &);
	CDOTA_Unit_Hero_Beastmaster_Boar(CDOTA_Unit_Hero_Beastmaster_Boar &);
	CDOTA_Unit_Hero_Beastmaster_Boar();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetBeastName();
	virtual ~CDOTA_Unit_Hero_Beastmaster_Boar();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[490] GetBeastName
	// sizeof = 4512
};

// src/game/shared/dota/units/dota_unit_hero_beastmaster.cpp:550
class C_CDOTA_Unit_Hero_Beastmaster_Boar_MapInstall {
	C_CDOTA_Unit_Hero_Beastmaster_Boar_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_beastmaster.cpp:562
class CDOTA_Ability_Beastmaster_CallOfTheWild : public CDOTABaseAbility {
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
	CDOTA_Ability_Beastmaster_CallOfTheWild(CDOTA_Ability_Beastmaster_CallOfTheWild &);
	CDOTA_Ability_Beastmaster_CallOfTheWild(CDOTA_Ability_Beastmaster_CallOfTheWild &);
	CDOTA_Ability_Beastmaster_CallOfTheWild();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual void OnUpgrade();
	virtual ~CDOTA_Ability_Beastmaster_CallOfTheWild();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[268] OnUpgrade
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_beastmaster.cpp:646
class CDOTA_Ability_Beastmaster_CallOfTheWildBoar : public CDOTABaseAbility {
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
	CDOTA_Ability_Beastmaster_CallOfTheWildBoar(CDOTA_Ability_Beastmaster_CallOfTheWildBoar &);
	CDOTA_Ability_Beastmaster_CallOfTheWildBoar(CDOTA_Ability_Beastmaster_CallOfTheWildBoar &);
	CDOTA_Ability_Beastmaster_CallOfTheWildBoar();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual void OnUpgrade();
	virtual void OnStolen(CDOTABaseAbility *);
	virtual ~CDOTA_Ability_Beastmaster_CallOfTheWildBoar();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[268] OnUpgrade
	// vtable[307] OnStolen
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_beastmaster.cpp:740
class CDOTA_Ability_CallOfTheWild_Hawk_Invisibility : public CDOTABaseAbility {
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
	CDOTA_Ability_CallOfTheWild_Hawk_Invisibility(CDOTA_Ability_CallOfTheWild_Hawk_Invisibility &);
	CDOTA_Ability_CallOfTheWild_Hawk_Invisibility(CDOTA_Ability_CallOfTheWild_Hawk_Invisibility &);
	CDOTA_Ability_CallOfTheWild_Hawk_Invisibility();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_CallOfTheWild_Hawk_Invisibility();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_beastmaster.cpp:752
class CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility_Activator : public CDOTA_Buff {
public:

private:

	float fade_time;  // +0xba8
	float idle_invis_delay;  // +0xbac
	float m_fLastMoveTime;  // +0xbb0
	CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility_Activator();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t OnUnitMoved(const CModifierParams &);
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility_Activator();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[89] OnUnitMoved
	// vtable[11] IsHidden
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_beastmaster.cpp:829
class CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility : public CDOTA_Modifier_Invisible {
public:

	CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility(CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility &);
	CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility(const CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility &);
	CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility();
	virtual ~CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility();

	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_beastmaster.cpp:841
class CDOTA_Ability_CallOfTheWild_Boar_Poison : public CDOTABaseAbility {
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
	CDOTA_Ability_CallOfTheWild_Boar_Poison(CDOTA_Ability_CallOfTheWild_Boar_Poison &);
	CDOTA_Ability_CallOfTheWild_Boar_Poison(CDOTA_Ability_CallOfTheWild_Boar_Poison &);
	CDOTA_Ability_CallOfTheWild_Boar_Poison();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_CallOfTheWild_Boar_Poison();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_beastmaster.cpp:849
class CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater : public CDOTABaseAbility {
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
	CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater(CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater &);
	CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater(CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater &);
	CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_beastmaster.cpp:864
class CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase : public CDOTA_Buff {
public:

private:

	float duration;  // +0xba8
	CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase(CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase &);
	CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase(const CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase &);
	CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttacked(const CModifierParams &);
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[11] IsHidden
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_beastmaster.cpp:882
class CDOTA_Modifier_CallOfTheWild_Boar_Poison : public CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase {
public:

	CDOTA_Modifier_CallOfTheWild_Boar_Poison(CDOTA_Modifier_CallOfTheWild_Boar_Poison &);
	CDOTA_Modifier_CallOfTheWild_Boar_Poison(const CDOTA_Modifier_CallOfTheWild_Boar_Poison &);
	CDOTA_Modifier_CallOfTheWild_Boar_Poison();
	virtual ~CDOTA_Modifier_CallOfTheWild_Boar_Poison();

	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_beastmaster.cpp:888
class CDOTA_Modifier_CallOfTheWild_Boar_PoisonGreater : public CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase {
public:

	CDOTA_Modifier_CallOfTheWild_Boar_PoisonGreater(CDOTA_Modifier_CallOfTheWild_Boar_PoisonGreater &);
	CDOTA_Modifier_CallOfTheWild_Boar_PoisonGreater(const CDOTA_Modifier_CallOfTheWild_Boar_PoisonGreater &);
	CDOTA_Modifier_CallOfTheWild_Boar_PoisonGreater();
	virtual ~CDOTA_Modifier_CallOfTheWild_Boar_PoisonGreater();

	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_beastmaster.cpp:945
class CDOTA_Modifier_CallOfTheWild_Boar_PoisonEffect : public CDOTA_Buff {
public:

private:

	int attack_speed;  // +0xba8
	int movement_speed;  // +0xbac
	CDOTA_Modifier_CallOfTheWild_Boar_PoisonEffect();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual ~CDOTA_Modifier_CallOfTheWild_Boar_PoisonEffect();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_beastmaster.cpp:1007
class CDOTA_Ability_Beastmaster_InnerBeast : public CDOTABaseAbility {
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
	CDOTA_Ability_Beastmaster_InnerBeast(CDOTA_Ability_Beastmaster_InnerBeast &);
	CDOTA_Ability_Beastmaster_InnerBeast(CDOTA_Ability_Beastmaster_InnerBeast &);
	CDOTA_Ability_Beastmaster_InnerBeast();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void OnUpgrade();
	virtual ~CDOTA_Ability_Beastmaster_InnerBeast();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[268] OnUpgrade
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_beastmaster.cpp:1037
class CDOTA_Modifier_Beastmaster_InnerBeast_Aura : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	CDOTA_Modifier_Beastmaster_InnerBeast_Aura();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsHidden();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual ~CDOTA_Modifier_Beastmaster_InnerBeast_Aura();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[11] IsHidden
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_beastmaster.cpp:1080
class CDOTA_Modifier_Beastmaster_InnerBeast : public CDOTA_Buff {
public:

private:

	int bonus_attack_speed;  // +0xba8
	CDOTA_Modifier_Beastmaster_InnerBeast();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual int GetAttributes();
	virtual ~CDOTA_Modifier_Beastmaster_InnerBeast();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[7] GetAttributes
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_beastmaster.cpp:1135
class CDOTA_Ability_Beastmaster_PrimalRoar : public CDOTABaseAbility {
public:

private:

	float duration;  // +0x390
	float slow_duration;  // +0x394
	int side_damage;  // +0x398
	int damage_radius;  // +0x39c
	int path_width;  // +0x3a0
	float push_duration;  // +0x3a4
	int push_distance;  // +0x3a8
	int damage;  // +0x3ac
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
	CDOTA_Ability_Beastmaster_PrimalRoar(CDOTA_Ability_Beastmaster_PrimalRoar &);
	CDOTA_Ability_Beastmaster_PrimalRoar(CDOTA_Ability_Beastmaster_PrimalRoar &);
	CDOTA_Ability_Beastmaster_PrimalRoar();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual float GetCooldown(int);
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual const char * GetStolenActivityModifier();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_Beastmaster_PrimalRoar();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[242] GetCooldown
	// vtable[226] GetCastRange
	// vtable[310] GetStolenActivityModifier
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// sizeof = 944
};

// src/game/shared/dota/units/dota_unit_hero_beastmaster.cpp:1163
class C_CDOTA_Ability_Beastmaster_PrimalRoar_MapInstall {
	C_CDOTA_Ability_Beastmaster_PrimalRoar_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_beastmaster.cpp:1321
class CDOTA_Modifier_Beastmaster_PrimalRoar_Slow : public CDOTA_Buff {
public:

private:

	int slow_movement_speed_pct;  // +0xba8
	int slow_attack_speed_pct;  // +0xbac
	CDOTA_Modifier_Beastmaster_PrimalRoar_Slow();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual ~CDOTA_Modifier_Beastmaster_PrimalRoar_Slow();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMoveSpeedBonus_Percentage
	// vtable[90] GetModifierAttackSpeedBonus_Constant
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_beastmaster.cpp:1385
class CDOTA_Modifier_Beastmaster_PrimalRoar_Push : public CDOTA_Buff, public CHorizontalMotionController {
public:

private:

	CDOTA_Modifier_Beastmaster_PrimalRoar_Push();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual bool IsMotionController();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Beastmaster_PrimalRoar_Push();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] OnHorizontalMotionInterrupted
	// vtable[91] IsHorizontalMotionValidToApply
	// vtable[21] IsMotionController
	// vtable[5] CheckState
	// sizeof = 3008
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Beastmaster::~CDOTA_Unit_Hero_Beastmaster  (line 43, @0x0000000002ac6530, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Beastmaster::~CDOTA_Unit_Hero_Beastmaster(CDOTA_Unit_Hero_Beastmaster *const this)
{
  this->_vptr_IHandleEntity = &off_43DAB50;
  this->_vptr_INextBotEventResponder = &off_43DBB30;
  this->_vptr_CObstructionObject = &off_43DBE60;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Beastmaster::~CDOTA_Unit_Hero_Beastmaster  (line 43, @0x0000000002ac6570, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Beastmaster
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Beastmaster::~CDOTA_Unit_Hero_Beastmaster(CDOTA_Unit_Hero_Beastmaster *const this)
{
  this->_vptr_IHandleEntity = &off_43DAB50;
  this->_vptr_INextBotEventResponder = &off_43DBB30;
  this->_vptr_CObstructionObject = &off_43DBE60;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Beastmaster::Schema_DynamicBinding  (line 45, @0x0000000002ab7b30, libserver.so)
// globals: CDOTA_Unit_Hero_Beastmaster::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Beastmaster::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Beastmaster *const this)
{
  return CDOTA_Unit_Hero_Beastmaster::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Beastmaster::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 45, @0x0000000002ab7b60, libserver.so)
// globals: CDOTA_Unit_Hero_Beastmaster::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Beastmaster::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Beastmaster::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Beastmaster::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Beastmaster::CEntityInstanceEntityClass::DestructInstance  (line 45, @0x0000000002ab7b70, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Beastmaster>
void __fastcall CDOTA_Unit_Hero_Beastmaster::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Beastmaster::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Beastmaster::CEntityInstanceEntityClass::FreeInstance  (line 45, @0x0000000002ab7b90, libserver.so)
void __fastcall CDOTA_Unit_Hero_Beastmaster::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Beastmaster::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Beastmaster::CEntityInstanceEntityClass::CanAllocate  (line 45, @0x0000000002ab7bb0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Beastmaster::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Beastmaster::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Beastmaster::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 45, @0x0000000002ab7bc0, libserver.so)
// globals: CDOTA_Unit_Hero_Beastmaster::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Beastmaster::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Beastmaster::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Beastmaster::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Beastmaster::CEntityInstanceEntityClass::AllocateInstance  (line 45, @0x0000000002abe740, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Beastmaster::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Beastmaster::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Beastmaster::CEntityInstanceEntityClass::ConstructInstance  (line 45, @0x0000000002ac4800, libserver.so)  // inlines: CDOTA_Unit_Hero_Beastmaster, Construct<CDOTA_Unit_Hero_Beastmaster>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Beastmaster::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Beastmaster::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_43DAB50;
    *(p + 236) = &off_43DBB30;
    *(p + 257) = &off_43DBE60;
  }
  return p;
}


// CDOTA_Unit_Hero_Beastmaster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 45, @0x0000000002acd150, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Beastmaster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Beastmaster::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Beastmaster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 45, @0x0000000002acd470, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Beastmaster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Beastmaster::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Beastmaster::GetEntityClassInternal  (line 45, @0x0000000002ad81d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "npc_dota_hero_beastmaster", "CDOTA_Unit_Hero_Beastmaster"
// globals: `guard variable for'CDOTA_Unit_Hero_Beastmaster::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BeastmasterClass, CDOTA_Unit_Hero_Beastmaster::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BeastmasterClass, __dso_handle, CDOTA_Unit_Hero_Beastmaster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Beastmaster::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BeastmasterClassInfo, CDOTA_Unit_Hero_Beastmaster::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BeastmasterClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Beastmaster::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Beastmaster::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BeastmasterClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Beastmaster::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BeastmasterClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Beastmaster::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BeastmasterClass);
    CDOTA_Unit_Hero_Beastmaster::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BeastmasterClass._vptr_CEntityClass = off_43DAAD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Beastmaster::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BeastmasterClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Beastmaster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Beastmaster::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BeastmasterClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_BeastmasterClass != 0 )
    return &CDOTA_Unit_Hero_Beastmaster::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BeastmasterClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Beastmaster::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BeastmasterClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Beastmaster::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BeastmasterClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Beastmaster::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BeastmasterClassInfo,
      "CDOTA_Unit_Hero_Beastmaster",
      "npc_dota_hero_beastmaster",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Beastmaster::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BeastmasterClassInfo);
  }
  CDOTA_Unit_Hero_Beastmaster::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BeastmasterClass.m_pClassInfo = &CDOTA_Unit_Hero_Beastmaster::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BeastmasterClassInfo;
  CDOTA_Unit_Hero_Beastmaster::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BeastmasterClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Beastmaster::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BeastmasterClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_BeastmasterClass = &CDOTA_Unit_Hero_Beastmaster::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BeastmasterClass;
  CDOTA_Unit_Hero_Beastmaster::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BeastmasterClassInfo.m_pClass = &CDOTA_Unit_Hero_Beastmaster::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BeastmasterClass;
  CDOTA_Unit_Hero_Beastmaster::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BeastmasterClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_BeastmasterClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Beastmaster::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BeastmasterClass;
}


// CDOTA_Unit_Hero_Beastmaster::YouForgotToImplementOrDeclareServerClass  (line 52, @0x0000000002a77550, libserver.so)
int __fastcall CDOTA_Unit_Hero_Beastmaster::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_Beastmaster *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Beastmaster::GetServerClass  (line 52, @0x0000000002a8a330, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Beastmaster::GetServerClass(CDOTA_Unit_Hero_Beastmaster *const this)
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


// CDOTA_Unit_Hero_Beastmaster::Spawn  (line 61, @0x0000000002a7a040, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Spawn, CBaseAnimating::SetBodygroup
void __fastcall CDOTA_Unit_Hero_Beastmaster::Spawn(
        CDOTA_Unit_Hero_Beastmaster *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTA_BaseNPC_Hero::Spawn(this, pKeyValues);
  CBaseAnimating::SetBodygroup(this, 1, 1);
}


// CDOTA_Beastmaster_Axe::~CDOTA_Beastmaster_Axe  (line 73, @0x0000000002ac0410, libserver.so)  // inlines: ~CBaseAnimating
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CDOTA_Beastmaster_Axe::~CDOTA_Beastmaster_Axe(CDOTA_Beastmaster_Axe *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CDOTA_Beastmaster_Axe::~CDOTA_Beastmaster_Axe  (line 73, @0x0000000002ac0450, libserver.so)  // inlines: ~CBaseAnimating, ~CDOTA_Beastmaster_Axe
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CDOTA_Beastmaster_Axe::~CDOTA_Beastmaster_Axe(CDOTA_Beastmaster_Axe *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Beastmaster_Axe::Schema_DynamicBinding  (line 75, @0x0000000002ab7bd0, libserver.so)
// globals: CDOTA_Beastmaster_Axe::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Beastmaster_Axe::Schema_DynamicBinding(
        const CDOTA_Beastmaster_Axe *const this)
{
  return CDOTA_Beastmaster_Axe::s_pSchemaBinding;
}


// CDOTA_Beastmaster_Axe::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 75, @0x0000000002ab7be0, libserver.so)
// globals: CDOTA_Beastmaster_Axe::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Beastmaster_Axe::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Beastmaster_Axe::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Beastmaster_Axe::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Beastmaster_Axe::CEntityInstanceEntityClass::DestructInstance  (line 75, @0x0000000002ab7bf0, libserver.so)  // inlines: Destruct<CDOTA_Beastmaster_Axe>
void __fastcall CDOTA_Beastmaster_Axe::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Beastmaster_Axe::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Beastmaster_Axe::CEntityInstanceEntityClass::FreeInstance  (line 75, @0x0000000002ab7c10, libserver.so)
void __fastcall CDOTA_Beastmaster_Axe::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Beastmaster_Axe::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Beastmaster_Axe::CEntityInstanceEntityClass::CanAllocate  (line 75, @0x0000000002ab7c30, libserver.so)
bool __fastcall CDOTA_Beastmaster_Axe::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Beastmaster_Axe::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Beastmaster_Axe::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 75, @0x0000000002ab7c40, libserver.so)
// globals: CDOTA_Beastmaster_Axe::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Beastmaster_Axe::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Beastmaster_Axe::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Beastmaster_Axe::s_pSchemaBinding;
}


// CDOTA_Beastmaster_Axe::CEntityInstanceEntityClass::AllocateInstance  (line 75, @0x0000000002abe780, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Beastmaster_Axe::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Beastmaster_Axe::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1216);
  memset(v1, 0, 0x4C0u);
  return v1;
}


// CDOTA_Beastmaster_Axe::CEntityInstanceEntityClass::ConstructInstance  (line 75, @0x0000000002ac03b0, libserver.so)  // inlines: CDOTA_Beastmaster_Axe, Construct<CDOTA_Beastmaster_Axe>
// calls: CBaseAnimating::CBaseAnimating
CEntityInstance *__fastcall CDOTA_Beastmaster_Axe::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Beastmaster_Axe::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseAnimating::CBaseAnimating(p);
    *p = &off_43DBF30;
  }
  return p;
}


// CDOTA_Beastmaster_Axe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 75, @0x0000000002acb660, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Beastmaster_Axe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Beastmaster_Axe::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Beastmaster_Axe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 75, @0x0000000002acb680, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Beastmaster_Axe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Beastmaster_Axe::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Beastmaster_Axe::GetEntityClassInternal  (line 75, @0x0000000002ad8320, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CBaseAnimating::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "npc_dota_beastmaster_axe", "CDOTA_Beastmaster_Axe"
// globals: `guard variable for'CDOTA_Beastmaster_Axe::GetEntityClassInternal(void)::g_EntityCDOTA_Beastmaster_AxeClass, CDOTA_Beastmaster_Axe::GetEntityClassInternal(void)::g_EntityCDOTA_Beastmaster_AxeClass, __dso_handle, CDOTA_Beastmaster_Axe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Beastmaster_Axe::GetEntityClassInfo(void)::g_EntityCDOTA_Beastmaster_AxeClassInfo, CDOTA_Beastmaster_Axe::GetEntityClassInfo(void)::g_EntityCDOTA_Beastmaster_AxeClassInfo
CEntityClass *__cdecl CDOTA_Beastmaster_Axe::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Beastmaster_Axe::GetEntityClassInternal(void)::g_EntityCDOTA_Beastmaster_AxeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Beastmaster_Axe::GetEntityClassInternal(void)::g_EntityCDOTA_Beastmaster_AxeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Beastmaster_Axe::GetEntityClassInternal(void)::g_EntityCDOTA_Beastmaster_AxeClass);
    CDOTA_Beastmaster_Axe::GetEntityClassInternal(void)::g_EntityCDOTA_Beastmaster_AxeClass._vptr_CEntityClass = off_43DBEB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Beastmaster_Axe::GetEntityClassInternal(void)::g_EntityCDOTA_Beastmaster_AxeClass);
    __cxa_atexit(
      CDOTA_Beastmaster_Axe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Beastmaster_Axe::GetEntityClassInternal(void)::g_EntityCDOTA_Beastmaster_AxeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Beastmaster_AxeClass != 0 )
    return &CDOTA_Beastmaster_Axe::GetEntityClassInternal(void)::g_EntityCDOTA_Beastmaster_AxeClass;
  if ( `guard variable for'CDOTA_Beastmaster_Axe::GetEntityClassInfo(void)::g_EntityCDOTA_Beastmaster_AxeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Beastmaster_Axe::GetEntityClassInfo(void)::g_EntityCDOTA_Beastmaster_AxeClassInfo) != 0 )
  {
    EntityClassInfo = CBaseAnimating::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Beastmaster_Axe::GetEntityClassInfo(void)::g_EntityCDOTA_Beastmaster_AxeClassInfo,
      "CDOTA_Beastmaster_Axe",
      "npc_dota_beastmaster_axe",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Beastmaster_Axe::GetEntityClassInfo(void)::g_EntityCDOTA_Beastmaster_AxeClassInfo);
  }
  CDOTA_Beastmaster_Axe::GetEntityClassInternal(void)::g_EntityCDOTA_Beastmaster_AxeClass.m_pClassInfo = &CDOTA_Beastmaster_Axe::GetEntityClassInfo(void)::g_EntityCDOTA_Beastmaster_AxeClassInfo;
  CDOTA_Beastmaster_Axe::GetEntityClassInternal(void)::g_EntityCDOTA_Beastmaster_AxeClass.m_pBaseClassInfo = CDOTA_Beastmaster_Axe::GetEntityClassInfo(void)::g_EntityCDOTA_Beastmaster_AxeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Beastmaster_AxeClass = &CDOTA_Beastmaster_Axe::GetEntityClassInternal(void)::g_EntityCDOTA_Beastmaster_AxeClass;
  CDOTA_Beastmaster_Axe::GetEntityClassInfo(void)::g_EntityCDOTA_Beastmaster_AxeClassInfo.m_pClass = &CDOTA_Beastmaster_Axe::GetEntityClassInternal(void)::g_EntityCDOTA_Beastmaster_AxeClass;
  CDOTA_Beastmaster_Axe::GetEntityClassInternal(void)::g_EntityCDOTA_Beastmaster_AxeClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCDOTA_Beastmaster_AxeClass->m_pComponentOverrides = 0;
  return &CDOTA_Beastmaster_Axe::GetEntityClassInternal(void)::g_EntityCDOTA_Beastmaster_AxeClass;
}


// CDOTA_Beastmaster_Axe::IsPartOfFOWSystem  (line 80, @0x0000000002ab7c50, libserver.so)
bool __fastcall CDOTA_Beastmaster_Axe::IsPartOfFOWSystem(CDOTA_Beastmaster_Axe *const this)
{
  return 1;
}


// CDOTA_Beastmaster_Axe::ShouldTransmit  (line 90, @0x0000000002a796d0, libserver.so)  // inlines: GetTeamNumber
// calls: CBaseEntity::ShouldTransmit
int __fastcall CDOTA_Beastmaster_Axe::ShouldTransmit(
        CDOTA_Beastmaster_Axe *const this,
        const CGameCheckTransmitInfo *pInfo)
{
  int ShouldTransmit; // eax
  int v3; // edx

  ShouldTransmit = CBaseEntity::ShouldTransmit(this, pInfo);
  v3 = 4;
  if ( pInfo->m_nRecipientTeamNumber != this->m_iTeamNum.m_Value )
    return ShouldTransmit;
  return v3;
}


// CDOTA_Beastmaster_Axe::YouForgotToImplementOrDeclareServerClass  (line 104, @0x0000000002a77560, libserver.so)
int __fastcall CDOTA_Beastmaster_Axe::YouForgotToImplementOrDeclareServerClass(CDOTA_Beastmaster_Axe *const this)
{
  return 0;
}


// CDOTA_Beastmaster_Axe::GetServerClass  (line 104, @0x0000000002a8a0b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Beastmaster_Axe::GetServerClass(CDOTA_Beastmaster_Axe *const this)
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


// CDOTA_Beastmaster_Axe::Spawn  (line 141, @0x0000000002a81a90, libserver.so)  // inlines: AddSolidFlags, SetPlaybackRate, SetSolid
// calls: CBaseAnimating::Spawn, CBaseModelEntity::SetModel, CCollisionProperty::SetSolidFlags, CBaseEntity::SetMoveType, CBaseAnimating::UseClientSideAnimation, CBaseAnimating::SelectWeightedSequence, CBaseAnimating::SetSequence, CBaseAnimating::GetBaseAnimatingController
// strings: "models/development/invisiblebox.vmdl"
void __fastcall CDOTA_Beastmaster_Axe::Spawn(CDOTA_Beastmaster_Axe *const this, const CEntityKeyValues *pKeyValues)
{
  HSequence v3; // eax
  CBaseAnimatingController *BaseAnimatingController; // rax

  CBaseAnimating::Spawn(this, pKeyValues);
  CBaseModelEntity::SetModel(this, "models/development/invisiblebox.vmdl");
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 2);
  CCollisionProperty::SetSolidFlags(&this->m_Collision, this->m_Collision.m_usSolidFlags.m_Value | 1);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NOCLIP, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  CBaseAnimating::UseClientSideAnimation(this, 1);
  v3.m_Data = CBaseAnimating::SelectWeightedSequence(this, 1502).m_Data;
  CBaseAnimating::SetSequence(this, v3, SetSequenceBehavior_t::SET_SEQUENCE_PRESERVE_CYCLE);
  BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this);
  (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 22))(BaseAnimatingController, 1.0);
}


// CDOTA_Ability_Beastmaster_WildAxes::~CDOTA_Ability_Beastmaster_WildAxes  (line 163, @0x0000000002ac5000, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Beastmaster_WildAxes::~CDOTA_Ability_Beastmaster_WildAxes(
        CDOTA_Ability_Beastmaster_WildAxes *const this)
{
  this->_vptr_IHandleEntity = &off_43DC7B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Beastmaster_WildAxes::~CDOTA_Ability_Beastmaster_WildAxes  (line 163, @0x0000000002ac5020, libserver.so)  // inlines: ~CDOTA_Ability_Beastmaster_WildAxes
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Beastmaster_WildAxes::~CDOTA_Ability_Beastmaster_WildAxes(
        CDOTA_Ability_Beastmaster_WildAxes *const this)
{
  this->_vptr_IHandleEntity = &off_43DC7B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Beastmaster_WildAxes::Schema_DynamicBinding  (line 165, @0x0000000002ab7c60, libserver.so)
// globals: CDOTA_Ability_Beastmaster_WildAxes::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Beastmaster_WildAxes::Schema_DynamicBinding(
        const CDOTA_Ability_Beastmaster_WildAxes *const this)
{
  return CDOTA_Ability_Beastmaster_WildAxes::s_pSchemaBinding;
}


// CDOTA_Ability_Beastmaster_WildAxes::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 165, @0x0000000002ab7c70, libserver.so)
// globals: CDOTA_Ability_Beastmaster_WildAxes::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Beastmaster_WildAxes::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Beastmaster_WildAxes::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Beastmaster_WildAxes::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Beastmaster_WildAxes::CEntityInstanceEntityClass::DestructInstance  (line 165, @0x0000000002ab7c80, libserver.so)  // inlines: Destruct<CDOTA_Ability_Beastmaster_WildAxes>
void __fastcall CDOTA_Ability_Beastmaster_WildAxes::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Beastmaster_WildAxes::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Beastmaster_WildAxes::CEntityInstanceEntityClass::FreeInstance  (line 165, @0x0000000002ab7ca0, libserver.so)
void __fastcall CDOTA_Ability_Beastmaster_WildAxes::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Beastmaster_WildAxes::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Beastmaster_WildAxes::CEntityInstanceEntityClass::CanAllocate  (line 165, @0x0000000002ab7cc0, libserver.so)
bool __fastcall CDOTA_Ability_Beastmaster_WildAxes::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Beastmaster_WildAxes::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Beastmaster_WildAxes::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 165, @0x0000000002ab7cd0, libserver.so)
// globals: CDOTA_Ability_Beastmaster_WildAxes::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Beastmaster_WildAxes::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Beastmaster_WildAxes::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Beastmaster_WildAxes::s_pSchemaBinding;
}


// CDOTA_Ability_Beastmaster_WildAxes::CEntityInstanceEntityClass::AllocateInstance  (line 165, @0x0000000002abe7c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Beastmaster_WildAxes::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Beastmaster_WildAxes::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Beastmaster_WildAxes::CEntityInstanceEntityClass::ConstructInstance  (line 165, @0x0000000002ac2720, libserver.so)  // inlines: CDOTA_Ability_Beastmaster_WildAxes, Construct<CDOTA_Ability_Beastmaster_WildAxes>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Beastmaster_WildAxes::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Beastmaster_WildAxes::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43DC7B0;
  }
  return p;
}


// CDOTA_Ability_Beastmaster_WildAxes::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 165, @0x0000000002acb9d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Beastmaster_WildAxes::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Beastmaster_WildAxes::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Beastmaster_WildAxes::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 165, @0x0000000002acb9f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Beastmaster_WildAxes::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Beastmaster_WildAxes::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Beastmaster_WildAxes::GetEntityClassInternal  (line 165, @0x0000000002ad8470, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "beastmaster_wild_axes", "CDOTA_Ability_Beastmaster_WildAxes"
// globals: `guard variable for'CDOTA_Ability_Beastmaster_WildAxes::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_WildAxesClass, CDOTA_Ability_Beastmaster_WildAxes::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_WildAxesClass, __dso_handle, CDOTA_Ability_Beastmaster_WildAxes::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Beastmaster_WildAxes::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_WildAxesClassInfo, CDOTA_Ability_Beastmaster_WildAxes::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_WildAxesClassInfo
CEntityClass *__cdecl CDOTA_Ability_Beastmaster_WildAxes::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Beastmaster_WildAxes::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_WildAxesClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Beastmaster_WildAxes::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_WildAxesClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Beastmaster_WildAxes::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_WildAxesClass);
    CDOTA_Ability_Beastmaster_WildAxes::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_WildAxesClass._vptr_CEntityClass = off_43DC730;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Beastmaster_WildAxes::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_WildAxesClass);
    __cxa_atexit(
      CDOTA_Ability_Beastmaster_WildAxes::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Beastmaster_WildAxes::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_WildAxesClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Beastmaster_WildAxesClass != 0 )
    return &CDOTA_Ability_Beastmaster_WildAxes::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_WildAxesClass;
  if ( `guard variable for'CDOTA_Ability_Beastmaster_WildAxes::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_WildAxesClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Beastmaster_WildAxes::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_WildAxesClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Beastmaster_WildAxes::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_WildAxesClassInfo,
      "CDOTA_Ability_Beastmaster_WildAxes",
      "beastmaster_wild_axes",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Beastmaster_WildAxes::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_WildAxesClassInfo);
  }
  CDOTA_Ability_Beastmaster_WildAxes::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_WildAxesClass.m_pClassInfo = &CDOTA_Ability_Beastmaster_WildAxes::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_WildAxesClassInfo;
  CDOTA_Ability_Beastmaster_WildAxes::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_WildAxesClass.m_pBaseClassInfo = CDOTA_Ability_Beastmaster_WildAxes::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_WildAxesClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Beastmaster_WildAxesClass = &CDOTA_Ability_Beastmaster_WildAxes::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_WildAxesClass;
  CDOTA_Ability_Beastmaster_WildAxes::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_WildAxesClassInfo.m_pClass = &CDOTA_Ability_Beastmaster_WildAxes::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_WildAxesClass;
  CDOTA_Ability_Beastmaster_WildAxes::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_WildAxesClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Beastmaster_WildAxesClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Beastmaster_WildAxes::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_WildAxesClass;
}


// CDOTA_Ability_Beastmaster_WildAxes::GetStolenActivityModifier  (line 169, @0x0000000002ab7ce0, libserver.so)
const char *__fastcall CDOTA_Ability_Beastmaster_WildAxes::GetStolenActivityModifier(
        CDOTA_Ability_Beastmaster_WildAxes *const this)
{
  return "axes";
}


// CDOTA_Ability_Beastmaster_WildAxes::OnSpellStart  (line 181, @0x0000000002a7a070, libserver.so)
// calls: CDOTABaseAbility::GetCursorTarget, CBaseEntity::GetAbsOrigin, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CDOTABaseAbility::GetCursorPosition, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_beastmaster_wild_axes"
void __fastcall CDOTA_Ability_Beastmaster_WildAxes::OnSpellStart(CDOTA_Ability_Beastmaster_WildAxes *const this)
{
  CBaseEntity *CursorTarget; // rax
  float v3; // xmm1_4
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v6; // rax
  KeyValues kv; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+38h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  if ( CDOTABaseAbility::GetCursorTarget(this) != 0 )
  {
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    CBaseEntity::GetAbsOrigin(CursorTarget);
  }
  else
  {
    CDOTABaseAbility::GetCursorPosition(this);
  }
  KeyValues::KeyValues(&kv, "modifier_beastmaster_wild_axes");
  KeyValues::SetFloat(&kv, "x", v3);
  KeyValues::SetFloat(&kv, "y", v4);
  Caster = CDOTABaseAbility::GetCaster(this);
  v6 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v6, Caster, this, "modifier_beastmaster_wild_axes", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Beastmaster_WildAxes::GetAbilityDamageToTargetOverInterval  (line 194, @0x0000000002a9f2e0, libserver.so)  // inlines: GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "axe_damage"
__int64 __fastcall CDOTA_Ability_Beastmaster_WildAxes::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Beastmaster_WildAxes *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // eax

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "axe_damage", -1, 0);
    this->axe_damage = LevelSpecialValue;
    return ((2 * LevelSpecialValue) * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 1)));
  }
  return result;
}


// CDOTA_Modifier_Beastmaster_WildAxes::~CDOTA_Modifier_Beastmaster_WildAxes  (line 209, @0x0000000002ae63f0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Beastmaster_WildAxes::~CDOTA_Modifier_Beastmaster_WildAxes(
        CDOTA_Modifier_Beastmaster_WildAxes *const this)
{
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *m_hHitList; // r13
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *p_radius; // rbx

  m_hHitList = this->m_hHitList;
  p_radius = &this->radius;
  this->_vptr_CDOTA_Buff = &off_43DD270;
  do
  {
    while ( 1 )
    {
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(--p_radius);
      if ( (p_radius->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&p_radius->m_Memory);
        if ( (p_radius->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          break;
      }
      if ( m_hHitList == p_radius )
        goto LABEL_6;
    }
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&p_radius->m_Memory);
  }
  while ( m_hHitList != p_radius );
LABEL_6:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hAxes);
  if ( (this->m_hAxes.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hAxes.m_Memory),
        (this->m_hAxes.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hAxes.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Beastmaster_WildAxes::~CDOTA_Modifier_Beastmaster_WildAxes  (line 209, @0x0000000002ae64c0, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_Beastmaster_WildAxes, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Beastmaster_WildAxes::~CDOTA_Modifier_Beastmaster_WildAxes(
        CDOTA_Modifier_Beastmaster_WildAxes *const this)
{
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *m_hHitList; // r13
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *p_radius; // rbx

  m_hHitList = this->m_hHitList;
  p_radius = &this->radius;
  this->_vptr_CDOTA_Buff = &off_43DD270;
  do
  {
    while ( 1 )
    {
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(--p_radius);
      if ( (p_radius->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&p_radius->m_Memory);
        if ( (p_radius->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          break;
      }
      if ( m_hHitList == p_radius )
        goto LABEL_6;
    }
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&p_radius->m_Memory);
  }
  while ( m_hHitList != p_radius );
LABEL_6:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hAxes);
  if ( (this->m_hAxes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hAxes.m_Memory);
    if ( (this->m_hAxes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hAxes.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Beastmaster_WildAxes::IsHidden  (line 216, @0x0000000002ab7cf0, libserver.so)
bool __fastcall CDOTA_Modifier_Beastmaster_WildAxes::IsHidden(CDOTA_Modifier_Beastmaster_WildAxes *const this)
{
  return 1;
}


// CDOTA_Modifier_Beastmaster_WildAxes::IsPurgable  (line 217, @0x0000000002ab7d00, libserver.so)
bool __fastcall CDOTA_Modifier_Beastmaster_WildAxes::IsPurgable(CDOTA_Modifier_Beastmaster_WildAxes *const this)
{
  return 0;
}


// CDOTA_Modifier_Beastmaster_WildAxes::RemoveOnDeath  (line 218, @0x0000000002ab7d10, libserver.so)
bool __fastcall CDOTA_Modifier_Beastmaster_WildAxes::RemoveOnDeath(CDOTA_Modifier_Beastmaster_WildAxes *const this)
{
  return 0;
}


// CDOTA_Modifier_Beastmaster_WildAxes::GetAttributes  (line 220, @0x0000000002ab7d20, libserver.so)
int __fastcall CDOTA_Modifier_Beastmaster_WildAxes::GetAttributes(CDOTA_Modifier_Beastmaster_WildAxes *const this)
{
  return 2;
}


// CDOTA_Modifier_Beastmaster_WildAxes::OnCreated  (line 253, @0x0000000002aafb00, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, DOTAGameRules, Element, FastSqrt, Get, GetEHandle, GetEntryIndex, GetGameTime, GetInstance, GetModifier_Constant_First, GetSerialNumber, GrowMemory, IsListeningToEvent, IsSpecialIllusion, Length2D, RemapValClamped, Set, SetBlockCreepSpawn, ToDOTABaseNPC, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, clamp<float, float>, operator*, operator+, operator-, operator=, operator[]
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetParent, KeyValues::GetFloat, KeyValues::GetPtr, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, CBaseEntity::GetAbsAngles, AngleVectors, CDOTA_Modifier_Beastmaster_WildAxes::GenerateSideControlPoints, CDOTA_Buff::CreateBuffParticleEffect, CEntityHandle::operator CEntityInstance* (26 total)
// strings: "axe_damage", "axe1", "axe2", "particles/units/heroes/hero_beastmaster/beastmaster_wildaxe.vpcf", "Hero_Beastmaster.Wild_Axes", "modifier_beastmaster_axe_invulnerable" (7 total)
void __fastcall CDOTA_Modifier_Beastmaster_WildAxes::OnCreated(
        CDOTA_Modifier_Beastmaster_WildAxes *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTA_BaseNPC *Parent; // rax
  float v8; // xmm1_4
  float v9; // xmm1_4
  _QWORD *Ptr; // rax
  __int64 v11; // rdx
  __int16 v12; // cx
  __int64 v13; // r12
  int v14; // eax
  vec_t *v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int16 v18; // cx
  __int64 v19; // r12
  int v20; // eax
  vec_t *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  const Vector *AbsOrigin; // rax
  vec_t v24; // xmm0_4
  CDOTA_BaseNPC *v25; // rax
  const QAngle *AbsAngles; // rax
  float x; // xmm2_4
  float y; // xmm3_4
  float spread; // xmm1_4
  float v30; // xmm0_4
  vec_t v31; // xmm4_4
  vec_t v32; // xmm0_4
  float v33; // xmm3_4
  float v34; // xmm2_4
  float v35; // xmm0_4
  float v36; // xmm1_4
  int BuffParticleEffect; // eax
  CHandle<CBaseEntity> *m_pMemory; // rdi
  int v39; // r13d
  const CBaseAnimating *v40; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  __int64 v42; // r12
  int v43; // r13d
  const CBaseAnimating *v44; // r14
  CDOTA_ParticleManager *v45; // rax
  CDOTA_BaseNPC *v46; // rax
  CDOTA_BaseNPC *v47; // rax
  float v48; // xmm1_4
  int i; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *UnitByName; // rax
  CDOTA_BaseNPC *v52; // r12
  CDOTA_BaseNPC *v53; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v55; // cx
  __int64 m_Size; // r12
  int v57; // eax
  vec_t *p_m_Index; // rax
  __int64 v59; // rdx
  float flDistToTarget; // [rsp+18h] [rbp-68h]
  vec_t flDistToTargeta; // [rsp+18h] [rbp-68h]
  CDOTABaseAbility *flDistToTargetb; // [rsp+18h] [rbp-68h]
  Vector vCasterFacing; // [rsp+20h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v65; // [rsp+48h] [rbp-38h]
  Vector v66; // 0:xmm0_8.8,8:xmm1_4.4

  v65 = __readfsqword(0x28u);
  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->axe_damage, "axe_damage");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->spread, "spread");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &this->radius, "radius");
  Parent = CDOTA_Buff::GetParent(this);
  if ( Parent != 0
    && Parent->m_bIsDOTANPC
    && (!Parent->m_bIsIllusion.m_Value
     || (v59 = Parent->m_ModifierManager.m_buffsForModifiers[108]) != 0xFF
     && Parent->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v59].m_Size > 0
     && CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
          &Parent->m_ModifierManager,
          modifierfunction::MODIFIER_PROPERTY_SUPER_ILLUSION,
          &CModifierParams::s_Default) == 1.0) )
  {
    for ( i = 4; i != 0; --i )
    {
      KeyValues::KeyValues(&kv, "modifier_beastmaster_axe_invulnerable");
      Caster = CDOTA_Buff::GetCaster(this);
      UnitByName = DOTA_CreateUnitByName("npc_dota_beastmaster_axe", &vec3_origin, 0, 0, 0, Caster->m_iTeamNum.m_Value);
      v52 = UnitByName;
      if ( UnitByName != 0 )
      {
        CBaseEntity::AddEffects(UnitByName, 32);
        flDistToTargetb = CDOTA_Buff::GetAbility(this);
        v53 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v52, v53, flDistToTargetb, "modifier_beastmaster_axe_invulnerable", &kv, 0);
        v52->m_bBlocksCreepSpawn = 0;
        vCasterFacing.x = NAN;
        m_pEntity = v52->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v55 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v55 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LODWORD(vCasterFacing.x) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                   | v55 & 0x7FFF;
        }
        m_Size = this->m_hAxes.m_Size;
        v57 = this->m_hAxes.m_Size;
        if ( m_Size == this->m_hAxes.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hAxes.m_Memory, 1);
          v57 = this->m_hAxes.m_Size;
        }
        this->m_hAxes.m_Size = v57 + 1;
        p_m_Index = &this->m_hAxes.m_Memory.m_pMemory[m_Size].m_Index;
        if ( p_m_Index != 0 )
          *p_m_Index = vCasterFacing.x;
      }
      KeyValues::~KeyValues(&kv);
    }
  }
  this->m_vTargetLoc.x = KeyValues::GetFloat(pKV, "x", v8);
  this->m_vTargetLoc.y = KeyValues::GetFloat(pKV, "y", v9);
  Ptr = KeyValues::GetPtr(pKV, "axe1", 0);
  vCasterFacing.x = NAN;
  if ( Ptr != 0 )
  {
    v11 = Ptr[1];
    if ( v11 != 0 )
    {
      v12 = 0x7FFF;
      if ( *(v11 + 16) != -1 )
        v12 = *(v11 + 16) & 0x7FFF;
      LODWORD(vCasterFacing.x) = (((*(v11 + 16) >> 15) - (*(v11 + 48) & 1)) << 15) | v12 & 0x7FFF;
    }
  }
  v13 = this->m_hAxes.m_Size;
  v14 = this->m_hAxes.m_Size;
  if ( v13 == this->m_hAxes.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hAxes.m_Memory, 1);
    v14 = this->m_hAxes.m_Size;
  }
  this->m_hAxes.m_Size = v14 + 1;
  v15 = &this->m_hAxes.m_Memory.m_pMemory[v13].m_Index;
  if ( v15 != 0 )
    *v15 = vCasterFacing.x;
  v16 = KeyValues::GetPtr(pKV, "axe2", 0);
  vCasterFacing.x = NAN;
  if ( v16 != 0 )
  {
    v17 = v16[1];
    if ( v17 != 0 )
    {
      v18 = 0x7FFF;
      if ( *(v17 + 16) != -1 )
        v18 = *(v17 + 16) & 0x7FFF;
      LODWORD(vCasterFacing.x) = (((*(v17 + 16) >> 15) - (*(v17 + 48) & 1)) << 15) | v18 & 0x7FFF;
    }
  }
  v19 = this->m_hAxes.m_Size;
  v20 = this->m_hAxes.m_Size;
  if ( v19 == this->m_hAxes.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hAxes.m_Memory, 1);
    v20 = this->m_hAxes.m_Size;
  }
  this->m_hAxes.m_Size = v20 + 1;
  v21 = &this->m_hAxes.m_Memory.m_pMemory[v19].m_Index;
  if ( v21 != 0 )
    *v21 = vCasterFacing.x;
  v22 = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v22);
  this->m_vSourceLoc.x = AbsOrigin->x;
  this->m_vSourceLoc.y = AbsOrigin->y;
  v24 = AbsOrigin->z + 96.0;
  this->m_vSourceLoc.z = v24;
  this->m_vTargetLoc.z = v24;
  v25 = CDOTA_Buff::GetCaster(this);
  AbsAngles = CBaseEntity::GetAbsAngles(v25);
  AngleVectors(AbsAngles, &vCasterFacing, 0, 0);
  x = this->m_vSourceLoc.x;
  y = this->m_vSourceLoc.y;
  spread = this->spread;
  v30 = fsqrt(
          ((this->m_vTargetLoc.x - x) * (this->m_vTargetLoc.x - x))
        + ((this->m_vTargetLoc.y - y) * (this->m_vTargetLoc.y - y)));
  if ( spread > v30 )
  {
    v31 = (vCasterFacing.y * spread) + y;
    v32 = (vCasterFacing.z * spread) + this->m_vSourceLoc.z;
    v33 = vCasterFacing.x * spread;
    this->m_vTargetLoc.y = v31;
    this->m_vTargetLoc.z = v32;
    v30 = spread;
    this->m_vTargetLoc.x = v33 + x;
  }
  flDistToTarget = v30;
  CDOTA_Modifier_Beastmaster_WildAxes::GenerateSideControlPoints(this);
  v34 = 0.0;
  v35 = (flDistToTarget - 480.0) / 720.0;
  if ( v35 < 0.0 )
  {
    v36 = 0.40000001;
  }
  else
  {
    v36 = 1.0;
    if ( v35 <= 1.0 )
      v36 = (0.60000002 * v35) + 0.40000001;
  }
  this->m_flDuration = v36;
  if ( g_pGameRules != 0 )
    v34 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_bReturning = 0;
  this->m_nAxeFXIndex[1] = -1;
  this->m_flDieTime = v34 + v36;
  this->m_nAxeFXIndex[0] = -1;
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/units/heroes/hero_beastmaster/beastmaster_wildaxe.vpcf",
                         2,
                         0,
                         0);
  m_pMemory = this->m_hAxes.m_Memory.m_pMemory;
  this->m_nAxeFXIndex[0] = BuffParticleEffect;
  v39 = BuffParticleEffect;
  v40 = CEntityHandle::operator CEntityInstance *(m_pMemory);
  ParticleManager = GetParticleManager();
  v42 = *&vec3_invalid.x;
  flDistToTargeta = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, v39, 0, v40, 1, 0, vec3_invalid, 1);
  v43 = CDOTA_Buff::CreateBuffParticleEffect(
          this,
          "particles/units/heroes/hero_beastmaster/beastmaster_wildaxe.vpcf",
          2,
          0,
          0);
  this->m_nAxeFXIndex[1] = v43;
  v44 = CEntityHandle::operator CEntityInstance *(this->m_hAxes.m_Memory.m_pMemory + 1);
  v45 = GetParticleManager();
  *&v66.x = v42;
  v66.z = flDistToTargeta;
  CDOTA_ParticleManager::SetParticleControlEnt(v45, v43, 0, v44, 1, 0, v66, 1);
  v46 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v46, "Hero_Beastmaster.Wild_Axes", 0.0, 0, 0);
  v47 = CDOTA_Buff::GetCaster(this);
  CBaseAnimating::SetBodygroup(v47, 1, 0);
  this->m_bCatchingAxes = 0;
  CDOTA_Buff::StartIntervalThink(this, 0.0, v48);
}


// CDOTA_Modifier_Beastmaster_WildAxes::GenerateSideControlPoints  (line 335, @0x0000000002aaafa0, libserver.so)  // inlines: DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator*=, operator+, operator-, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, VectorNormalize
// callers: CDOTA_Modifier_Beastmaster_WildAxes::OnCreated
void __fastcall CDOTA_Modifier_Beastmaster_WildAxes::GenerateSideControlPoints(
        CDOTA_Modifier_Beastmaster_WildAxes *const this)
{
  int LevelSpecialValue; // r12d
  CDOTABaseAbility *Ability; // rax
  vec_t v4; // xmm2_4
  vec_t v5; // xmm0_4
  float v6; // xmm3_4
  float v7; // xmm1_4
  float v8; // xmm4_4
  float v9; // xmm5_4
  float v10; // xmm6_4
  float v11; // xmm0_4
  Vector vToTarget; // [rsp+0h] [rbp-20h] BYREF

  LevelSpecialValue = 0;
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "spread", -1, 0);
  v4 = this->m_vTargetLoc.x - this->m_vSourceLoc.x;
  v5 = this->m_vTargetLoc.z - this->m_vSourceLoc.z;
  vToTarget.y = this->m_vTargetLoc.y - this->m_vSourceLoc.y;
  vToTarget.x = v4;
  vToTarget.z = v5;
  VectorNormalize(&vToTarget);
  v6 = vToTarget.y * LevelSpecialValue;
  v7 = -vToTarget.x * LevelSpecialValue;
  v8 = 0.0 * LevelSpecialValue;
  v9 = this->m_vSourceLoc.y + v6;
  v10 = (vToTarget.x * LevelSpecialValue) + this->m_vSourceLoc.x;
  v11 = (LevelSpecialValue * vToTarget.z) + this->m_vSourceLoc.z;
  this->m_vRightControl.x = v10 + v6;
  this->m_vLeftControl.x = v10 - v6;
  this->m_vLeftControl.y = v9 - v7;
  this->m_vRightControl.y = v7 + v9;
  this->m_vRightControl.z = v11 + v8;
  this->m_vLeftControl.z = v11 - v8;
}


// CDOTA_Modifier_Beastmaster_WildAxes::OnIntervalThink  (line 358, @0x0000000002aaf120, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, DOTAGameRules, Element, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetTeamNumber, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Purge, RemapValClamped, ToDOTABaseNPC, VectorAdd, VectorDivide, VectorMultiply, VectorSubtract, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator+=, operator-, operator/, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityHandle::operator CEntityInstance*, CBaseEntity::SetAbsOrigin, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, ApplyDamage, CDOTA_BaseNPC::UnitEmitSound (25 total)
// strings: "axe_damage", "special_bonus_unique_beastmaster", "Hero_Beastmaster.Wild_Axes_Damage", "particles/units/heroes/hero_beastmaster/beastmaster_wildaxes_hit.vpcf", "attach_hitloc"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Beastmaster_WildAxes::OnIntervalThink(CDOTA_Modifier_Beastmaster_WildAxes *const this)
{
  float m_flDuration; // xmm0_4
  float v2; // xmm2_4
  float v3; // xmm1_4
  float v4; // xmm0_4
  CDOTA_Modifier_Beastmaster_WildAxes *v5; // rax
  float x; // xmm3_4
  float y; // xmm2_4
  float z; // xmm6_4
  float v9; // xmm4_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm5_4
  float v15; // xmm1_4
  float v16; // xmm4_4
  float v17; // xmm5_4
  vec_t v18; // xmm5_4
  vec_t v19; // xmm4_4
  vec_t v20; // xmm0_4
  Vector *p_vecRightPos; // rbx
  Vector *p_vecLeftPos; // r13
  CBaseEntity *v23; // rax
  CBaseEntity *v24; // rax
  __m128i v25; // xmm6
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *m_hHitList; // r14
  float v27; // r13d
  CDOTA_BaseNPC *v28; // r12
  const CBaseEntity *v29; // rax
  const Vector *v30; // rbx
  CDOTA_BaseNPC *v31; // rax
  __int64 v32; // rbx
  int v33; // r12d
  CHandle<CBaseEntity> *v34; // r13
  __int64 m_Size; // r15
  int v36; // eax
  CHandle<CBaseEntity> *v37; // rax
  CHandle<CBaseEntity> *v38; // rdx
  uint32 m_Index; // eax
  __int16 v40; // cx
  CEntityIdentity *v41; // rdx
  CEntityIdentity *v42; // rdx
  CDOTA_BaseNPC *m_pInstance; // r15
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *v45; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v47; // r13
  CDOTA_BaseNPC *v48; // rax
  const Vector *v49; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v51; // rax
  CDOTA_BaseNPC *v52; // rax
  unsigned int v53; // r12d
  __m128i v54; // xmm6
  float v55; // ebx
  const CBaseEntity *v56; // rax
  float v57; // xmm3_4
  float v58; // xmm0_4
  CEntityInstance *v59; // rax
  CEntityInstance *v60; // rax
  float v61; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rax
  const CBaseEntity *v64; // rax
  const Vector *v65; // rax
  CHandle<CBaseEntity> *m_pMemory; // rdi
  float v67; // xmm1_4
  int v68; // xmm0_4
  CBaseEntity *v69; // rax
  const CBaseEntity *v70; // rax
  const Vector *v71; // rax
  float v72; // xmm1_4
  int v73; // xmm0_4
  CHandle<CBaseEntity> *v74; // rdi
  CBaseEntity *v75; // rax
  float v76; // xmm0_4
  CDOTA_BaseNPC *v77; // rax
  float t; // [rsp+30h] [rbp-A0h]
  __int64 v79; // [rsp+48h] [rbp-88h]
  float nFXIndex; // [rsp+50h] [rbp-80h]
  int nFXIndexc; // [rsp+50h] [rbp-80h]
  float nFXIndexd; // [rsp+50h] [rbp-80h]
  float nFXIndexa; // [rsp+50h] [rbp-80h]
  float nFXIndexb; // [rsp+50h] [rbp-80h]
  Vector vecLeftPos; // [rsp+60h] [rbp-70h] BYREF
  Vector vecRightPos; // [rsp+70h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+80h] [rbp-50h] BYREF
  Vector v89; // 0:xmm0_8.8,8:xmm1_4.4

  m_flDuration = this->m_flDuration;
  if ( g_pGameRules != 0 )
    v2 = *&g_pGameRules[18].m_szQuestName[20];
  else
    v2 = 0.0;
  v3 = this->m_flDieTime - v2;
  if ( m_flDuration == 0.0 )
  {
    if ( (v3 - 0.0) < 0.0 )
    {
      v4 = 0.0;
      t = 1.0;
    }
    else
    {
      t = 0.0;
      v4 = 1.0;
    }
  }
  else
  {
    v61 = v3 / m_flDuration;
    if ( v61 < 0.0 )
    {
      v4 = 0.0;
      t = 1.0;
    }
    else
    {
      t = 0.0;
      v4 = 1.0;
      if ( v61 <= 1.0 )
      {
        v5 = this;
        v4 = v61 + 0.0;
        t = 1.0 - (v61 + 0.0);
        if ( !this->m_bReturning )
          goto LABEL_7;
LABEL_48:
        nFXIndexd = v4;
        Caster = CDOTA_Buff::GetCaster(this);
        AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
        x = AbsOrigin->x + 0.0;
        v4 = nFXIndexd;
        y = AbsOrigin->y + 0.0;
        z = AbsOrigin->z + 128.0;
        this->m_vTargetLoc.x = x;
        this->m_vTargetLoc.y = y;
        this->m_vTargetLoc.z = z;
        goto LABEL_8;
      }
    }
  }
  v5 = this;
  if ( this->m_bReturning )
    goto LABEL_48;
LABEL_7:
  x = v5->m_vTargetLoc.x;
  y = v5->m_vTargetLoc.y;
  z = v5->m_vTargetLoc.z;
LABEL_8:
  v9 = v4 * v4;
  v10 = t;
  v11 = (v4 + v4) * t;
  v12 = (x * (v10 * v10)) + (this->m_vSourceLoc.x * v9);
  v13 = (y * (v10 * v10)) + (this->m_vSourceLoc.y * v9);
  v14 = this->m_vRightControl.y;
  v15 = ((v10 * v10) * z) + (v9 * this->m_vSourceLoc.z);
  v16 = this->m_vRightControl.z;
  vecRightPos.x = (this->m_vRightControl.x * v11) + v12;
  vecRightPos.y = (v14 * v11) + v13;
  v17 = this->m_vLeftControl.y;
  vecRightPos.z = (v16 * v11) + v15;
  v18 = (v17 * v11) + v13;
  v19 = (this->m_vLeftControl.z * v11) + v15;
  v20 = (v11 * this->m_vLeftControl.x) + v12;
  vecLeftPos.y = v18;
  vecLeftPos.z = v19;
  vecLeftPos.x = v20;
  if ( gpGlobals->frametime > 0.0 )
  {
    nFXIndexa = gpGlobals->frametime;
    v64 = CEntityHandle::operator CEntityInstance *(this->m_hAxes.m_Memory.m_pMemory);
    v65 = CBaseEntity::GetAbsOrigin(v64);
    m_pMemory = this->m_hAxes.m_Memory.m_pMemory;
    v67 = (vecLeftPos.z - v65->z) * (1.0 / nFXIndexa);
    *&v68 = (vecLeftPos.x - v65->x) * (1.0 / nFXIndexa);
    *(&hEntities.m_Size + 1) = (vecLeftPos.y - v65->y) * (1.0 / nFXIndexa);
    *&hEntities.m_Memory.m_pMemory = v67;
    hEntities.m_Size = v68;
    v69 = CEntityHandle::operator CEntityInstance *(m_pMemory);
    CBaseEntity::SetAbsVelocity(v69, &hEntities);
    nFXIndexb = gpGlobals->frametime;
    v70 = CEntityHandle::operator CEntityInstance *(this->m_hAxes.m_Memory.m_pMemory + 1);
    v71 = CBaseEntity::GetAbsOrigin(v70);
    v72 = (vecRightPos.z - v71->z) * (1.0 / nFXIndexb);
    *&v73 = (vecRightPos.x - v71->x) * (1.0 / nFXIndexb);
    v74 = this->m_hAxes.m_Memory.m_pMemory + 1;
    *(&hEntities.m_Size + 1) = (vecRightPos.y - v71->y) * (1.0 / nFXIndexb);
    *&hEntities.m_Memory.m_pMemory = v72;
    hEntities.m_Size = v73;
    v75 = CEntityHandle::operator CEntityInstance *(v74);
    CBaseEntity::SetAbsVelocity(v75, &hEntities);
  }
  p_vecRightPos = &vecRightPos;
  p_vecLeftPos = &vecLeftPos;
  if ( !this->m_bReturning )
    p_vecLeftPos = &vecRightPos;
  v23 = CEntityHandle::operator CEntityInstance *(this->m_hAxes.m_Memory.m_pMemory);
  CBaseEntity::SetAbsOrigin(v23, p_vecLeftPos);
  if ( !this->m_bReturning )
    p_vecRightPos = &vecLeftPos;
  v24 = CEntityHandle::operator CEntityInstance *(this->m_hAxes.m_Memory.m_pMemory + 1);
  CBaseEntity::SetAbsOrigin(v24, p_vecRightPos);
  v79 = 0;
  m_hHitList = this->m_hHitList;
  do
  {
    hEntities.m_Size = 0;
    hEntities.m_Memory.m_pMemory = 0;
    hEntities.m_Memory.m_nAllocationCount = 0;
    hEntities.m_Memory.m_nGrowSize = 0;
    *v25.m128i_i32 = this->radius;
    v27 = COERCE_FLOAT(_mm_cvtsi128_si32(v25));
    v28 = CDOTA_Buff::GetCaster(this);
    v29 = CEntityHandle::operator CEntityInstance *(&this->m_hAxes.m_Memory.m_pMemory[v79]);
    v30 = CBaseEntity::GetAbsOrigin(v29);
    v31 = CDOTA_Buff::GetCaster(this);
    FindUnitsInRadius(v31->m_iTeamNum.m_Value, v30, v28, v27, &hEntities, 2, 3, 16, 0, 0);
    if ( hEntities.m_Size > 0 )
    {
      v32 = 0;
      v33 = 0;
      do
      {
        while ( 1 )
        {
          v34 = &hEntities.m_Memory.m_pMemory[v32];
          if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                 m_hHitList,
                 &hEntities.m_Memory.m_pMemory[v32]) == -1 )
          {
            m_Size = m_hHitList->m_Size;
            v36 = m_hHitList->m_Size;
            if ( m_Size == m_hHitList->m_Memory.m_nAllocationCount )
            {
              CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&m_hHitList->m_Memory, 1);
              v36 = m_hHitList->m_Size;
            }
            m_hHitList->m_Size = v36 + 1;
            v37 = &m_hHitList->m_Memory.m_pMemory[m_Size];
            if ( v37 != 0 )
              v37->m_Index = v34->m_Index;
            v38 = &hEntities.m_Memory.m_pMemory[v32];
            m_Index = hEntities.m_Memory.m_pMemory[v32].m_Index;
            if ( m_Index + 2 > 1 )
            {
              v40 = v38->m_Index;
              v41 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v38->m_Index) >> 9) & 0x3F];
              if ( v41 != 0 )
              {
                v42 = &v41[v40 & 0x1FF];
                if ( v42 != 0 && m_Index == v42->m_EHandle.m_Index )
                {
                  m_pInstance = v42->m_pInstance;
                  if ( v42->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                    break;
                }
              }
            }
          }
          ++v33;
          ++v32;
          if ( hEntities.m_Size <= v33 )
            goto LABEL_33;
        }
        Ability = CDOTA_Buff::GetAbility(this);
        DotaRetrieveAbilityValue<int>(Ability, &this->axe_damage, "axe_damage");
        nFXIndex = this->axe_damage;
        v45 = CDOTA_Buff::GetCaster(this);
        AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v45, "special_bonus_unique_beastmaster", 0);
        if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
          nFXIndex = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1) + nFXIndex;
        v47 = CDOTA_Buff::GetAbility(this);
        v48 = CDOTA_Buff::GetCaster(this);
        ApplyDamage(v48, m_pInstance, v47, nFXIndex, 1, 8);
        CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Beastmaster.Wild_Axes_Damage", 0.0, 0, 0);
        nFXIndexc = CDOTA_Buff::CreateBuffParticleEffect(
                      this,
                      "particles/units/heroes/hero_beastmaster/beastmaster_wildaxes_hit.vpcf",
                      2,
                      0,
                      0);
        v49 = CBaseEntity::GetAbsOrigin(m_pInstance);
        ParticleManager = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(
          ParticleManager,
          nFXIndexc,
          0,
          m_pInstance,
          5,
          "attach_hitloc",
          *v49,
          1);
        v51 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v51, nFXIndexc);
        ++v33;
        ++v32;
      }
      while ( hEntities.m_Size > v33 );
    }
LABEL_33:
    v52 = CDOTA_Buff::GetCaster(this);
    v53 = (*(v52->_vptr_IHandleEntity + 414))(v52);
    *v54.m128i_i32 = this->radius;
    v55 = COERCE_FLOAT(_mm_cvtsi128_si32(v54));
    v56 = CEntityHandle::operator CEntityInstance *(&this->m_hAxes.m_Memory.m_pMemory[v79]);
    v89 = *CBaseEntity::GetAbsOrigin(v56);
    CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v53, v89, v55, v57);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hEntities);
    if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
      if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
    }
    ++v79;
    ++m_hHitList;
  }
  while ( v79 != 2 );
  if ( this->m_bReturning && !this->m_bCatchingAxes )
  {
    v58 = 0.0;
    if ( g_pGameRules != 0 )
      v58 = *&g_pGameRules[18].m_szQuestName[20];
    if ( (this->m_flDieTime - v58) < 0.40000001 )
    {
      this->m_bCatchingAxes = 1;
      v77 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::StartGesture(v77, 1562, 0.1, 0.1, 3, 0, 1.0);
    }
  }
  if ( t >= 1.0 )
  {
    if ( this->m_bReturning )
    {
      v59 = CEntityHandle::operator CEntityInstance *(this->m_hAxes.m_Memory.m_pMemory);
      (*(v59->_vptr_IHandleEntity + 70))(v59, 4);
      v60 = CEntityHandle::operator CEntityInstance *(this->m_hAxes.m_Memory.m_pMemory + 1);
      (*(v60->_vptr_IHandleEntity + 70))(v60, 4);
      CDOTA_Buff::Destroy(this, 0, 0, 0);
    }
    else
    {
      v76 = 0.0;
      this->m_bReturning = 1;
      if ( g_pGameRules != 0 )
        v76 = *&g_pGameRules[18].m_szQuestName[20];
      this->m_flDieTime = v76 + this->m_flDuration;
      this->m_vSourceLoc.x = this->m_vTargetLoc.x;
      this->m_vSourceLoc.y = this->m_vTargetLoc.y;
      this->m_vSourceLoc.z = this->m_vTargetLoc.z;
    }
  }
}


// CDOTA_Modifier_Beastmaster_WildAxes::OnDestroy  (line 449, @0x0000000002a82640, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator[]
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_Buff::GetCaster, CBaseAnimating::SetBodygroup, UTIL_Remove
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Beastmaster_WildAxes::OnDestroy(CDOTA_Modifier_Beastmaster_WildAxes *const this)
{
  __int64 v2; // r12
  int v3; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  int v5; // ebx
  CDOTA_ParticleManager *v6; // rax
  int v7; // esi
  int v8; // ebx
  CDOTA_BaseNPC *Caster; // rax
  CEntityInstance *m_pInstance; // rdi
  CHandle<CBaseEntity> *v11; // rdx
  uint32 m_Index; // eax
  __int16 v13; // cx
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx

  v2 = 0;
  v3 = this->m_nAxeFXIndex[0];
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, v3, 0);
  v5 = this->m_nAxeFXIndex[1];
  v6 = GetParticleManager();
  v7 = v5;
  v8 = 0;
  CDOTA_ParticleManager::DestroyParticleEffect(v6, v7, 0);
  Caster = CDOTA_Buff::GetCaster(this);
  CBaseAnimating::SetBodygroup(Caster, 1, 1);
  if ( this->m_hAxes.m_Size > 0 )
  {
    do
    {
      m_pInstance = 0;
      v11 = &this->m_hAxes.m_Memory.m_pMemory[v2];
      m_Index = v11->m_Index;
      if ( v11->m_Index + 2 > 1 )
      {
        v13 = v11->m_Index;
        v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v11->m_Index) >> 9) & 0x3F];
        if ( v14 != 0 )
        {
          v15 = &v14[v13 & 0x1FF];
          if ( v15 != 0 && m_Index == v15->m_EHandle.m_Index )
            m_pInstance = v15->m_pInstance;
        }
      }
      UTIL_Remove(m_pInstance);
      ++v8;
      ++v2;
    }
    while ( this->m_hAxes.m_Size > v8 );
  }
}


// CDOTA_Modifier_Beastmaster_Axe_Invulnerable::~CDOTA_Modifier_Beastmaster_Axe_Invulnerable  (line 469, @0x0000000002ac2030, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Beastmaster_Axe_Invulnerable::~CDOTA_Modifier_Beastmaster_Axe_Invulnerable(
        CDOTA_Modifier_Beastmaster_Axe_Invulnerable *const this)
{
  this->_vptr_CDOTA_Buff = &off_43DD590;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Beastmaster_Axe_Invulnerable::~CDOTA_Modifier_Beastmaster_Axe_Invulnerable  (line 469, @0x0000000002ac2050, libserver.so)  // inlines: ~CDOTA_Modifier_Beastmaster_Axe_Invulnerable
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Beastmaster_Axe_Invulnerable::~CDOTA_Modifier_Beastmaster_Axe_Invulnerable(
        CDOTA_Modifier_Beastmaster_Axe_Invulnerable *const this)
{
  this->_vptr_CDOTA_Buff = &off_43DD590;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Beastmaster_Axe_Invulnerable::IsHidden  (line 475, @0x0000000002ab7d30, libserver.so)
bool __fastcall CDOTA_Modifier_Beastmaster_Axe_Invulnerable::IsHidden(
        CDOTA_Modifier_Beastmaster_Axe_Invulnerable *const this)
{
  return 1;
}


// CDOTA_Modifier_Beastmaster_Axe_Invulnerable::CheckState  (line 482, @0x0000000002a77570, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Beastmaster_Axe_Invulnerable::CheckState(
        CDOTA_Modifier_Beastmaster_Axe_Invulnerable *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x2904100uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFD6FBEFFLL;
}


// CDOTA_Unit_Hero_Beastmaster_Beasts::~CDOTA_Unit_Hero_Beastmaster_Beasts  (line 498, @0x0000000002ac0170, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep, ~CDOTA_BaseNPC_Creep_Talking
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_Unit_Hero_Beastmaster_Beasts::~CDOTA_Unit_Hero_Beastmaster_Beasts(
        CDOTA_Unit_Hero_Beastmaster_Beasts *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_Unit_Hero_Beastmaster_Beasts::~CDOTA_Unit_Hero_Beastmaster_Beasts  (line 498, @0x0000000002acb000, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep, ~CDOTA_BaseNPC_Creep_Talking, ~CDOTA_Unit_Hero_Beastmaster_Beasts
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Beastmaster_Beasts::~CDOTA_Unit_Hero_Beastmaster_Beasts(
        CDOTA_Unit_Hero_Beastmaster_Beasts *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Beastmaster_Beasts::Schema_DynamicBinding  (line 500, @0x0000000002ab7d40, libserver.so)
// globals: CDOTA_Unit_Hero_Beastmaster_Beasts::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Beastmaster_Beasts::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Beastmaster_Beasts *const this)
{
  return CDOTA_Unit_Hero_Beastmaster_Beasts::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Beastmaster_Beasts::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 500, @0x0000000002ab7d70, libserver.so)
// globals: CDOTA_Unit_Hero_Beastmaster_Beasts::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Beastmaster_Beasts::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Beastmaster_Beasts::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Beastmaster_Beasts::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Beastmaster_Beasts::CEntityInstanceEntityClass::DestructInstance  (line 500, @0x0000000002ab7d80, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Beastmaster_Beasts>
void __fastcall CDOTA_Unit_Hero_Beastmaster_Beasts::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Beastmaster_Beasts::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Beastmaster_Beasts::CEntityInstanceEntityClass::FreeInstance  (line 500, @0x0000000002ab7da0, libserver.so)
void __fastcall CDOTA_Unit_Hero_Beastmaster_Beasts::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Beastmaster_Beasts::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Beastmaster_Beasts::CEntityInstanceEntityClass::CanAllocate  (line 500, @0x0000000002ab7dc0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Beastmaster_Beasts::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Beastmaster_Beasts::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Beastmaster_Beasts::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 500, @0x0000000002ab7dd0, libserver.so)
// globals: CDOTA_Unit_Hero_Beastmaster_Beasts::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Beastmaster_Beasts::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Beastmaster_Beasts::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Beastmaster_Beasts::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Beastmaster_Beasts::CEntityInstanceEntityClass::AllocateInstance  (line 500, @0x0000000002abe800, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Beastmaster_Beasts::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Beastmaster_Beasts::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4512);
  memset(v1, 0, 0x11A0u);
  return v1;
}


// CDOTA_Unit_Hero_Beastmaster_Beasts::CEntityInstanceEntityClass::ConstructInstance  (line 500, @0x0000000002ac0080, libserver.so)  // inlines: CDOTA_BaseNPC_Creep_Talking, CDOTA_Unit_Hero_Beastmaster_Beasts, Construct<CDOTA_Unit_Hero_Beastmaster_Beasts>
// calls: CDOTA_BaseNPC_Creep::CDOTA_BaseNPC_Creep
CEntityInstance *__fastcall CDOTA_Unit_Hero_Beastmaster_Beasts::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Beastmaster_Beasts::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Creep::CDOTA_BaseNPC_Creep(p);
    *p = &off_43DD8F0;
    *(p + 236) = &off_43DE858;
    *(p + 257) = &off_43DEB88;
  }
  return p;
}


// CDOTA_Unit_Hero_Beastmaster_Beasts::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 500, @0x0000000002acd230, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Beastmaster_Beasts::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Beastmaster_Beasts::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Beastmaster_Beasts::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 500, @0x0000000002acd2f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Beastmaster_Beasts::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Beastmaster_Beasts::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInfo  (line 500, @0x0000000002ad85c0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CDOTA_BaseNPC_Additive::GetEntityClassInfo
// callers: CDOTA_Unit_Hero_Beastmaster_Hawk::GetEntityClassInternal, CDOTA_Unit_Hero_Beastmaster_Boar::GetEntityClassInternal
// strings: "npc_dota_beastmaster_beasts", "CDOTA_Unit_Hero_Beastmaster_Beasts", "npc_dota_creep", "CDOTA_BaseNPC_Creep"
// globals: `guard variable for'CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BeastsClassInfo, CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BeastsClassInfo, `guard variable for'CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo, CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo
CEntityClassInfo *__cdecl CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BeastsClassInfo != 0 )
    return &CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BeastsClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BeastsClassInfo) == 0 )
    return &CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BeastsClassInfo;
  if ( `guard variable for'CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Additive::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo,
      "CDOTA_BaseNPC_Creep",
      "npc_dota_creep",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BeastsClassInfo,
    "CDOTA_Unit_Hero_Beastmaster_Beasts",
    "npc_dota_beastmaster_beasts",
    0,
    &CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo);
  __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BeastsClassInfo);
  return &CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BeastsClassInfo;
}


// CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInternal  (line 500, @0x0000000002ad8690, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CDOTA_BaseNPC_Additive::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "npc_dota_beastmaster_beasts", "CDOTA_Unit_Hero_Beastmaster_Beasts", "npc_dota_creep", "CDOTA_BaseNPC_Creep"
// globals: `guard variable for'CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BeastsClass, CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BeastsClass, __dso_handle, CDOTA_Unit_Hero_Beastmaster_Beasts::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BeastsClassInfo, CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BeastsClassInfo, `guard variable for'CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo, CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BeastsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BeastsClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BeastsClass);
    CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BeastsClass._vptr_CEntityClass = off_43DD870;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BeastsClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Beastmaster_Beasts::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BeastsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_Beastmaster_BeastsClass != 0 )
    return &CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BeastsClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BeastsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BeastsClassInfo) != 0 )
  {
    if ( `guard variable for'CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo) != 0 )
    {
      EntityClassInfo = CDOTA_BaseNPC_Additive::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo,
        "CDOTA_BaseNPC_Creep",
        "npc_dota_creep",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BeastsClassInfo,
      "CDOTA_Unit_Hero_Beastmaster_Beasts",
      "npc_dota_beastmaster_beasts",
      0,
      &CDOTA_BaseNPC_Creep::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_CreepClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BeastsClassInfo);
  }
  CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BeastsClass.m_pClassInfo = &CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BeastsClassInfo;
  CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BeastsClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BeastsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_Beastmaster_BeastsClass = &CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BeastsClass;
  CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BeastsClassInfo.m_pClass = &CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BeastsClass;
  CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BeastsClass.m_pScriptClassDesc = CDOTA_BaseNPC::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_Beastmaster_BeastsClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BeastsClass;
}


// CDOTA_Unit_Hero_Beastmaster_Beasts::GetBeastName  (line 504, @0x0000000002ab7de0, libserver.so)
const char *__fastcall CDOTA_Unit_Hero_Beastmaster_Beasts::GetBeastName(CDOTA_Unit_Hero_Beastmaster_Beasts *const this)
{
  return "none";
}


// CDOTA_Unit_Hero_Beastmaster_Beasts::YouForgotToImplementOrDeclareServerClass  (line 507, @0x0000000002a77590, libserver.so)
int __fastcall CDOTA_Unit_Hero_Beastmaster_Beasts::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_Beastmaster_Beasts *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Beastmaster_Beasts::GetServerClass  (line 507, @0x0000000002a8a2b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Beastmaster_Beasts::GetServerClass(
        CDOTA_Unit_Hero_Beastmaster_Beasts *const this)
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


// CDOTA_Unit_Hero_Beastmaster_Hawk::~CDOTA_Unit_Hero_Beastmaster_Hawk  (line 519, @0x0000000002acafb0, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep, ~CDOTA_BaseNPC_Creep_Talking, ~CDOTA_Unit_Hero_Beastmaster_Beasts
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_Unit_Hero_Beastmaster_Hawk::~CDOTA_Unit_Hero_Beastmaster_Hawk(
        CDOTA_Unit_Hero_Beastmaster_Hawk *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_Unit_Hero_Beastmaster_Hawk::~CDOTA_Unit_Hero_Beastmaster_Hawk  (line 519, @0x0000000002acb060, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep, ~CDOTA_BaseNPC_Creep_Talking, ~CDOTA_Unit_Hero_Beastmaster_Beasts, ~CDOTA_Unit_Hero_Beastmaster_Hawk
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Beastmaster_Hawk::~CDOTA_Unit_Hero_Beastmaster_Hawk(
        CDOTA_Unit_Hero_Beastmaster_Hawk *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Beastmaster_Hawk::Schema_DynamicBinding  (line 521, @0x0000000002ab7df0, libserver.so)
// globals: CDOTA_Unit_Hero_Beastmaster_Hawk::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Beastmaster_Hawk::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Beastmaster_Hawk *const this)
{
  return CDOTA_Unit_Hero_Beastmaster_Hawk::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Beastmaster_Hawk::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 521, @0x0000000002ab7e20, libserver.so)
// globals: CDOTA_Unit_Hero_Beastmaster_Hawk::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Beastmaster_Hawk::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Beastmaster_Hawk::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Beastmaster_Hawk::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Beastmaster_Hawk::CEntityInstanceEntityClass::DestructInstance  (line 521, @0x0000000002ab7e30, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Beastmaster_Hawk>
void __fastcall CDOTA_Unit_Hero_Beastmaster_Hawk::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Beastmaster_Hawk::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Beastmaster_Hawk::CEntityInstanceEntityClass::FreeInstance  (line 521, @0x0000000002ab7e50, libserver.so)
void __fastcall CDOTA_Unit_Hero_Beastmaster_Hawk::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Beastmaster_Hawk::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Beastmaster_Hawk::CEntityInstanceEntityClass::CanAllocate  (line 521, @0x0000000002ab7e70, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Beastmaster_Hawk::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Beastmaster_Hawk::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Beastmaster_Hawk::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 521, @0x0000000002ab7e80, libserver.so)
// globals: CDOTA_Unit_Hero_Beastmaster_Hawk::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Beastmaster_Hawk::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Beastmaster_Hawk::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Beastmaster_Hawk::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Beastmaster_Hawk::CEntityInstanceEntityClass::AllocateInstance  (line 521, @0x0000000002abe840, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Beastmaster_Hawk::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Beastmaster_Hawk::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4512);
  memset(v1, 0, 0x11A0u);
  return v1;
}


// CDOTA_Unit_Hero_Beastmaster_Hawk::CEntityInstanceEntityClass::ConstructInstance  (line 521, @0x0000000002ac00d0, libserver.so)  // inlines: CDOTA_BaseNPC_Creep_Talking, CDOTA_Unit_Hero_Beastmaster_Beasts, CDOTA_Unit_Hero_Beastmaster_Hawk, Construct<CDOTA_Unit_Hero_Beastmaster_Hawk>
// calls: CDOTA_BaseNPC_Creep::CDOTA_BaseNPC_Creep
CEntityInstance *__fastcall CDOTA_Unit_Hero_Beastmaster_Hawk::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Beastmaster_Hawk::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Creep::CDOTA_BaseNPC_Creep(p);
    *p = &off_43DEC70;
    *(p + 236) = &off_43DFBD8;
    *(p + 257) = &off_43DFF08;
  }
  return p;
}


// CDOTA_Unit_Hero_Beastmaster_Hawk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 521, @0x0000000002acd270, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Beastmaster_Hawk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Beastmaster_Hawk::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Beastmaster_Hawk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 521, @0x0000000002acd620, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Beastmaster_Hawk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Beastmaster_Hawk::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Beastmaster_Hawk::GetEntityClassInternal  (line 521, @0x0000000002ad8820, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC::InitScriptDesc, CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "npc_dota_beastmaster_hawk", "CDOTA_Unit_Hero_Beastmaster_Hawk"
// globals: `guard variable for'CDOTA_Unit_Hero_Beastmaster_Hawk::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_HawkClass, CDOTA_Unit_Hero_Beastmaster_Hawk::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_HawkClass, __dso_handle, CDOTA_Unit_Hero_Beastmaster_Hawk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Beastmaster_Hawk::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_HawkClassInfo, CDOTA_Unit_Hero_Beastmaster_Hawk::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_HawkClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Beastmaster_Hawk::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Beastmaster_Hawk::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_HawkClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Beastmaster_Hawk::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_HawkClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Beastmaster_Hawk::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_HawkClass);
    CDOTA_Unit_Hero_Beastmaster_Hawk::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_HawkClass._vptr_CEntityClass = off_43DEBF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Beastmaster_Hawk::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_HawkClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Beastmaster_Hawk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Beastmaster_Hawk::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_HawkClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_Beastmaster_HawkClass != 0 )
    return &CDOTA_Unit_Hero_Beastmaster_Hawk::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_HawkClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Beastmaster_Hawk::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_HawkClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Beastmaster_Hawk::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_HawkClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Beastmaster_Hawk::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_HawkClassInfo,
      "CDOTA_Unit_Hero_Beastmaster_Hawk",
      "npc_dota_beastmaster_hawk",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Beastmaster_Hawk::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_HawkClassInfo);
  }
  CDOTA_Unit_Hero_Beastmaster_Hawk::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_HawkClass.m_pClassInfo = &CDOTA_Unit_Hero_Beastmaster_Hawk::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_HawkClassInfo;
  CDOTA_Unit_Hero_Beastmaster_Hawk::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_HawkClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Beastmaster_Hawk::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_HawkClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_Beastmaster_HawkClass = &CDOTA_Unit_Hero_Beastmaster_Hawk::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_HawkClass;
  CDOTA_Unit_Hero_Beastmaster_Hawk::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_HawkClassInfo.m_pClass = &CDOTA_Unit_Hero_Beastmaster_Hawk::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_HawkClass;
  CDOTA_Unit_Hero_Beastmaster_Hawk::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_HawkClass.m_pScriptClassDesc = CDOTA_BaseNPC::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_Beastmaster_HawkClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Beastmaster_Hawk::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_HawkClass;
}


// CDOTA_Unit_Hero_Beastmaster_Hawk::GetBeastName  (line 525, @0x0000000002ab7e90, libserver.so)
// strings: "beast_hawk"
const char *__fastcall CDOTA_Unit_Hero_Beastmaster_Hawk::GetBeastName(CDOTA_Unit_Hero_Beastmaster_Hawk *const this)
{
  return "beast_hawk";
}


// CDOTA_Unit_Hero_Beastmaster_Hawk::IsFlyingVisually  (line 527, @0x0000000002ab7ea0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Beastmaster_Hawk::IsFlyingVisually(CDOTA_Unit_Hero_Beastmaster_Hawk *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Beastmaster_Hawk::YouForgotToImplementOrDeclareServerClass  (line 530, @0x0000000002a775a0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Beastmaster_Hawk::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_Beastmaster_Hawk *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Beastmaster_Hawk::GetServerClass  (line 530, @0x0000000002a8a1b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Beastmaster_Hawk::GetServerClass(CDOTA_Unit_Hero_Beastmaster_Hawk *const this)
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


// CDOTA_Unit_Hero_Beastmaster_Boar::~CDOTA_Unit_Hero_Beastmaster_Boar  (line 541, @0x0000000002acaf60, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep, ~CDOTA_BaseNPC_Creep_Talking, ~CDOTA_Unit_Hero_Beastmaster_Beasts
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_Unit_Hero_Beastmaster_Boar::~CDOTA_Unit_Hero_Beastmaster_Boar(
        CDOTA_Unit_Hero_Beastmaster_Boar *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_Unit_Hero_Beastmaster_Boar::~CDOTA_Unit_Hero_Beastmaster_Boar  (line 541, @0x0000000002acb0c0, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep, ~CDOTA_BaseNPC_Creep_Talking, ~CDOTA_Unit_Hero_Beastmaster_Beasts, ~CDOTA_Unit_Hero_Beastmaster_Boar
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Beastmaster_Boar::~CDOTA_Unit_Hero_Beastmaster_Boar(
        CDOTA_Unit_Hero_Beastmaster_Boar *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Beastmaster_Boar::Schema_DynamicBinding  (line 543, @0x0000000002ab7eb0, libserver.so)
// globals: CDOTA_Unit_Hero_Beastmaster_Boar::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Beastmaster_Boar::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Beastmaster_Boar *const this)
{
  return CDOTA_Unit_Hero_Beastmaster_Boar::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Beastmaster_Boar::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 543, @0x0000000002ab7ee0, libserver.so)
// globals: CDOTA_Unit_Hero_Beastmaster_Boar::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Beastmaster_Boar::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Beastmaster_Boar::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Beastmaster_Boar::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Beastmaster_Boar::CEntityInstanceEntityClass::DestructInstance  (line 543, @0x0000000002ab7ef0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Beastmaster_Boar>
void __fastcall CDOTA_Unit_Hero_Beastmaster_Boar::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Beastmaster_Boar::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Beastmaster_Boar::CEntityInstanceEntityClass::FreeInstance  (line 543, @0x0000000002ab7f10, libserver.so)
void __fastcall CDOTA_Unit_Hero_Beastmaster_Boar::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Beastmaster_Boar::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Beastmaster_Boar::CEntityInstanceEntityClass::CanAllocate  (line 543, @0x0000000002ab7f30, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Beastmaster_Boar::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Beastmaster_Boar::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Beastmaster_Boar::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 543, @0x0000000002ab7f40, libserver.so)
// globals: CDOTA_Unit_Hero_Beastmaster_Boar::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Beastmaster_Boar::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Beastmaster_Boar::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Beastmaster_Boar::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Beastmaster_Boar::CEntityInstanceEntityClass::AllocateInstance  (line 543, @0x0000000002abe880, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Beastmaster_Boar::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Beastmaster_Boar::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4512);
  memset(v1, 0, 0x11A0u);
  return v1;
}


// CDOTA_Unit_Hero_Beastmaster_Boar::CEntityInstanceEntityClass::ConstructInstance  (line 543, @0x0000000002ac0120, libserver.so)  // inlines: CDOTA_BaseNPC_Creep_Talking, CDOTA_Unit_Hero_Beastmaster_Beasts, CDOTA_Unit_Hero_Beastmaster_Boar, Construct<CDOTA_Unit_Hero_Beastmaster_Boar>
// calls: CDOTA_BaseNPC_Creep::CDOTA_BaseNPC_Creep
CEntityInstance *__fastcall CDOTA_Unit_Hero_Beastmaster_Boar::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Beastmaster_Boar::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Creep::CDOTA_BaseNPC_Creep(p);
    *p = &off_43DFFF0;
    *(p + 236) = &off_43E0F58;
    *(p + 257) = &off_43E1288;
  }
  return p;
}


// CDOTA_Unit_Hero_Beastmaster_Boar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 543, @0x0000000002acd250, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Beastmaster_Boar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Beastmaster_Boar::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Beastmaster_Boar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 543, @0x0000000002acd5f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Beastmaster_Boar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Beastmaster_Boar::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Beastmaster_Boar::GetEntityClassInternal  (line 543, @0x0000000002ad8970, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC::InitScriptDesc, CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "npc_dota_beastmaster_boar", "CDOTA_Unit_Hero_Beastmaster_Boar"
// globals: `guard variable for'CDOTA_Unit_Hero_Beastmaster_Boar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BoarClass, CDOTA_Unit_Hero_Beastmaster_Boar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BoarClass, __dso_handle, CDOTA_Unit_Hero_Beastmaster_Boar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Beastmaster_Boar::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BoarClassInfo, CDOTA_Unit_Hero_Beastmaster_Boar::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BoarClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Beastmaster_Boar::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Beastmaster_Boar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BoarClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Beastmaster_Boar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BoarClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Beastmaster_Boar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BoarClass);
    CDOTA_Unit_Hero_Beastmaster_Boar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BoarClass._vptr_CEntityClass = off_43DFF70;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Beastmaster_Boar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BoarClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Beastmaster_Boar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Beastmaster_Boar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BoarClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_Beastmaster_BoarClass != 0 )
    return &CDOTA_Unit_Hero_Beastmaster_Boar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BoarClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Beastmaster_Boar::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BoarClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Beastmaster_Boar::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BoarClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Beastmaster_Boar::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BoarClassInfo,
      "CDOTA_Unit_Hero_Beastmaster_Boar",
      "npc_dota_beastmaster_boar",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Beastmaster_Boar::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BoarClassInfo);
  }
  CDOTA_Unit_Hero_Beastmaster_Boar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BoarClass.m_pClassInfo = &CDOTA_Unit_Hero_Beastmaster_Boar::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BoarClassInfo;
  CDOTA_Unit_Hero_Beastmaster_Boar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BoarClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Beastmaster_Boar::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BoarClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_Beastmaster_BoarClass = &CDOTA_Unit_Hero_Beastmaster_Boar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BoarClass;
  CDOTA_Unit_Hero_Beastmaster_Boar::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BoarClassInfo.m_pClass = &CDOTA_Unit_Hero_Beastmaster_Boar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BoarClass;
  CDOTA_Unit_Hero_Beastmaster_Boar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BoarClass.m_pScriptClassDesc = CDOTA_BaseNPC::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_Beastmaster_BoarClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Beastmaster_Boar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Beastmaster_BoarClass;
}


// CDOTA_Unit_Hero_Beastmaster_Boar::GetBeastName  (line 547, @0x0000000002ab7f50, libserver.so)
// strings: "beast_boar"
const char *__fastcall CDOTA_Unit_Hero_Beastmaster_Boar::GetBeastName(CDOTA_Unit_Hero_Beastmaster_Boar *const this)
{
  return "beast_boar";
}


// CDOTA_Unit_Hero_Beastmaster_Boar::YouForgotToImplementOrDeclareServerClass  (line 550, @0x0000000002a775b0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Beastmaster_Boar::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_Beastmaster_Boar *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Beastmaster_Boar::GetServerClass  (line 550, @0x0000000002a8a3b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Beastmaster_Boar::GetServerClass(CDOTA_Unit_Hero_Beastmaster_Boar *const this)
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


// CDOTA_Ability_Beastmaster_CallOfTheWild::~CDOTA_Ability_Beastmaster_CallOfTheWild  (line 562, @0x0000000002ac5050, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Beastmaster_CallOfTheWild::~CDOTA_Ability_Beastmaster_CallOfTheWild(
        CDOTA_Ability_Beastmaster_CallOfTheWild *const this)
{
  this->_vptr_IHandleEntity = &off_43E1370;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Beastmaster_CallOfTheWild::~CDOTA_Ability_Beastmaster_CallOfTheWild  (line 562, @0x0000000002ac5070, libserver.so)  // inlines: ~CDOTA_Ability_Beastmaster_CallOfTheWild
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Beastmaster_CallOfTheWild::~CDOTA_Ability_Beastmaster_CallOfTheWild(
        CDOTA_Ability_Beastmaster_CallOfTheWild *const this)
{
  this->_vptr_IHandleEntity = &off_43E1370;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Beastmaster_CallOfTheWild::Schema_DynamicBinding  (line 564, @0x0000000002ab7f60, libserver.so)
// globals: CDOTA_Ability_Beastmaster_CallOfTheWild::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Beastmaster_CallOfTheWild::Schema_DynamicBinding(
        const CDOTA_Ability_Beastmaster_CallOfTheWild *const this)
{
  return CDOTA_Ability_Beastmaster_CallOfTheWild::s_pSchemaBinding;
}


// CDOTA_Ability_Beastmaster_CallOfTheWild::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 564, @0x0000000002ab7f70, libserver.so)
// globals: CDOTA_Ability_Beastmaster_CallOfTheWild::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Beastmaster_CallOfTheWild::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Beastmaster_CallOfTheWild::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Beastmaster_CallOfTheWild::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Beastmaster_CallOfTheWild::CEntityInstanceEntityClass::DestructInstance  (line 564, @0x0000000002ab7f80, libserver.so)  // inlines: Destruct<CDOTA_Ability_Beastmaster_CallOfTheWild>
void __fastcall CDOTA_Ability_Beastmaster_CallOfTheWild::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Beastmaster_CallOfTheWild::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Beastmaster_CallOfTheWild::CEntityInstanceEntityClass::FreeInstance  (line 564, @0x0000000002ab7fa0, libserver.so)
void __fastcall CDOTA_Ability_Beastmaster_CallOfTheWild::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Beastmaster_CallOfTheWild::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Beastmaster_CallOfTheWild::CEntityInstanceEntityClass::CanAllocate  (line 564, @0x0000000002ab7fc0, libserver.so)
bool __fastcall CDOTA_Ability_Beastmaster_CallOfTheWild::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Beastmaster_CallOfTheWild::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Beastmaster_CallOfTheWild::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 564, @0x0000000002ab7fd0, libserver.so)
// globals: CDOTA_Ability_Beastmaster_CallOfTheWild::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Beastmaster_CallOfTheWild::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Beastmaster_CallOfTheWild::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Beastmaster_CallOfTheWild::s_pSchemaBinding;
}


// CDOTA_Ability_Beastmaster_CallOfTheWild::CEntityInstanceEntityClass::AllocateInstance  (line 564, @0x0000000002abe8c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Beastmaster_CallOfTheWild::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Beastmaster_CallOfTheWild::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Beastmaster_CallOfTheWild::CEntityInstanceEntityClass::ConstructInstance  (line 564, @0x0000000002ac2750, libserver.so)  // inlines: CDOTA_Ability_Beastmaster_CallOfTheWild, Construct<CDOTA_Ability_Beastmaster_CallOfTheWild>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Beastmaster_CallOfTheWild::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Beastmaster_CallOfTheWild::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43E1370;
  }
  return p;
}


// CDOTA_Ability_Beastmaster_CallOfTheWild::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 564, @0x0000000002acba20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Beastmaster_CallOfTheWild::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Beastmaster_CallOfTheWild::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Beastmaster_CallOfTheWild::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 564, @0x0000000002acba40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Beastmaster_CallOfTheWild::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Beastmaster_CallOfTheWild::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Beastmaster_CallOfTheWild::GetEntityClassInternal  (line 564, @0x0000000002ad8ac0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "beastmaster_call_of_the_wild", "CDOTA_Ability_Beastmaster_CallOfTheWild"
// globals: `guard variable for'CDOTA_Ability_Beastmaster_CallOfTheWild::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildClass, CDOTA_Ability_Beastmaster_CallOfTheWild::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildClass, __dso_handle, CDOTA_Ability_Beastmaster_CallOfTheWild::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Beastmaster_CallOfTheWild::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildClassInfo, CDOTA_Ability_Beastmaster_CallOfTheWild::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildClassInfo
CEntityClass *__cdecl CDOTA_Ability_Beastmaster_CallOfTheWild::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Beastmaster_CallOfTheWild::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Beastmaster_CallOfTheWild::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Beastmaster_CallOfTheWild::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildClass);
    CDOTA_Ability_Beastmaster_CallOfTheWild::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildClass._vptr_CEntityClass = off_43E12F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Beastmaster_CallOfTheWild::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildClass);
    __cxa_atexit(
      CDOTA_Ability_Beastmaster_CallOfTheWild::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Beastmaster_CallOfTheWild::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Beastmaster_CallOfTheWildClass != 0 )
    return &CDOTA_Ability_Beastmaster_CallOfTheWild::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildClass;
  if ( `guard variable for'CDOTA_Ability_Beastmaster_CallOfTheWild::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Beastmaster_CallOfTheWild::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Beastmaster_CallOfTheWild::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildClassInfo,
      "CDOTA_Ability_Beastmaster_CallOfTheWild",
      "beastmaster_call_of_the_wild",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Beastmaster_CallOfTheWild::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildClassInfo);
  }
  CDOTA_Ability_Beastmaster_CallOfTheWild::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildClass.m_pClassInfo = &CDOTA_Ability_Beastmaster_CallOfTheWild::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildClassInfo;
  CDOTA_Ability_Beastmaster_CallOfTheWild::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildClass.m_pBaseClassInfo = CDOTA_Ability_Beastmaster_CallOfTheWild::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Beastmaster_CallOfTheWildClass = &CDOTA_Ability_Beastmaster_CallOfTheWild::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildClass;
  CDOTA_Ability_Beastmaster_CallOfTheWild::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildClassInfo.m_pClass = &CDOTA_Ability_Beastmaster_CallOfTheWild::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildClass;
  CDOTA_Ability_Beastmaster_CallOfTheWild::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Beastmaster_CallOfTheWildClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Beastmaster_CallOfTheWild::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildClass;
}


// CDOTA_Ability_Beastmaster_CallOfTheWild::OnUpgrade  (line 574, @0x0000000002a7a6c0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "beastmaster_call_of_the_wild_boar"
void __fastcall CDOTA_Ability_Beastmaster_CallOfTheWild::OnUpgrade(CDOTA_Ability_Beastmaster_CallOfTheWild *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "beastmaster_call_of_the_wild_boar", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value < this->m_iLevel.m_Value )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Beastmaster_CallOfTheWild::OnSpellStart  (line 588, @0x0000000002a88be0, libserver.so)  // inlines: GetTeamNumber, NetworkStateChanged, Set, SetUnitLabelIndex, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, V_strlen, VectorAdd, operator+, operator=<int>
// calls: CDOTABaseAbility::GetEffectiveLevel, strlen, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, DOTA_CreateUnitByName, CDOTA_BaseNPC::SetControllableByPlayer, RandomFloat, FindClearSpaceForUnit, CBaseEntity::GetAbsAngles, CBaseEntity::SetAbsAngles, KeyValues::KeyValues, KeyValues::SetFloat (24 total)
// strings: "npc_dota_beastmaster_hawk_1", "npc_dota_beastmaster_hawk_2", "npc_dota_beastmaster_hawk_3", "npc_dota_beastmaster_hawk_4", "modifier_kill", "particles/units/heroes/hero_beastmaster/beastmaster_call_bird.vpcf" (7 total)
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_Beastmaster_CallOfTheWild::OnSpellStart(
        CDOTA_Ability_Beastmaster_CallOfTheWild *const this)
{
  int EffectiveLevel; // eax
  const char *v3; // rbx
  CDOTA_BaseNPC *Caster; // r15
  CDOTA_BaseNPC *v5; // r12
  CDOTA_BaseNPC *v6; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *UnitByName; // rax
  CDOTA_BaseNPC *v9; // r12
  void (__fastcall *v10)(CDOTA_BaseNPC *, _QWORD); // rbx
  CDOTA_BaseNPC *v11; // rax
  void (__fastcall *v12)(CDOTA_BaseNPC *, CDOTA_BaseNPC *); // rbx
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  int v15; // eax
  __m128i v16; // xmm0
  CDOTA_BaseNPC *v17; // rax
  const Vector *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  const QAngle *AbsAngles; // rax
  float v21; // xmm1_4
  CDOTA_BaseNPC *v22; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v24; // rax
  int i; // r13d
  int j; // ebx
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTA_BaseNPC *v28; // rax
  CDOTA_BaseNPC_Hero *v29; // rdi
  CDOTA_BaseNPC *v30; // rax
  int iTeamNumber; // [rsp+Ch] [rbp-94h]
  float iTeamNumbera; // [rsp+Ch] [rbp-94h]
  double vSpawnPoint; // [rsp+10h] [rbp-90h]
  float vSpawnPoint_8; // [rsp+18h] [rbp-88h]
  const char *pSpawnArray[4]; // [rsp+30h] [rbp-70h]
  KeyValues kv; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v37; // [rsp+68h] [rbp-38h]
  Vector v38; // 0:xmm0_8.8,8:xmm1_4.4

  v37 = __readfsqword(0x28u);
  pSpawnArray[0] = "npc_dota_beastmaster_hawk_1";
  pSpawnArray[1] = "npc_dota_beastmaster_hawk_2";
  pSpawnArray[2] = "npc_dota_beastmaster_hawk_3";
  pSpawnArray[3] = "npc_dota_beastmaster_hawk_4";
  EffectiveLevel = CDOTABaseAbility::GetEffectiveLevel(this);
  v3 = pSpawnArray[EffectiveLevel];
  if ( v3 != 0 && strlen(pSpawnArray[EffectiveLevel]) > 0 )
  {
    iTeamNumber = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
    Caster = CDOTABaseAbility::GetCaster(this);
    v5 = CDOTABaseAbility::GetCaster(this);
    v6 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
    UnitByName = DOTA_CreateUnitByName(v3, AbsOrigin, 0, v5, Caster, iTeamNumber);
    v9 = UnitByName;
    if ( UnitByName != 0 )
    {
      if ( UnitByName->m_nUnitLabelIndex.m_Value != 0 )
      {
        (*(UnitByName->_vptr_IHandleEntity + 22))(UnitByName, 3417, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v9->m_nUnitLabelIndex.m_Value = 0;
      }
      v10 = *(v9->_vptr_IHandleEntity + 70);
      v11 = CDOTABaseAbility::GetCaster(this);
      v10(v9, v11->m_iTeamNum.m_Value);
      v12 = *(v9->_vptr_IHandleEntity + 40);
      v13 = CDOTABaseAbility::GetCaster(this);
      v12(v9, v13);
      v14 = CDOTABaseAbility::GetCaster(this);
      v15 = (*(v14->_vptr_IHandleEntity + 414))(v14);
      CDOTA_BaseNPC::SetControllableByPlayer(v9, v15, 0);
      *v16.m128i_i32 = RandomFloat(-100.0, 100.0);
      LODWORD(v12) = _mm_cvtsi128_si32(v16);
      iTeamNumbera = RandomFloat(-100.0, 100.0);
      v17 = CDOTABaseAbility::GetCaster(this);
      v18 = CBaseEntity::GetAbsOrigin(v17);
      v38.z = v18->z + 0.0;
      *(&vSpawnPoint + 1) = *&v12 + v18->y;
      *&vSpawnPoint = iTeamNumbera + v18->x;
      *&v38.x = vSpawnPoint;
      vSpawnPoint_8 = v38.z;
      FindClearSpaceForUnit(v9, v38, 1);
      v19 = CDOTABaseAbility::GetCaster(this);
      AbsAngles = CBaseEntity::GetAbsAngles(v19);
      CBaseEntity::SetAbsAngles(v9, AbsAngles);
      KeyValues::KeyValues(&kv, "modifier_kill");
      KeyValues::SetFloat(&kv, "duration", v21);
      v22 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v9, v22, this, "modifier_kill", &kv, 0);
      LODWORD(v12) = CDOTABaseAbility::CreateAbilityParticleEffect(
                       this,
                       "particles/units/heroes/hero_beastmaster/beastmaster_call_bird.vpcf",
                       2,
                       0,
                       0);
      ParticleManager = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(ParticleManager, v12, 0, vSpawnPoint, vSpawnPoint_8);
      v24 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v24, v12);
      for ( i = 0; i < this->m_iLevel.m_Value; ++i )
      {
        for ( j = 0; j != 24; ++j )
        {
          AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(v9, j);
          if ( AbilityByIndex != 0 )
            CDOTABaseAbility::UpgradeAbility(AbilityByIndex, 0);
        }
      }
      v28 = CDOTABaseAbility::GetCaster(this);
      if ( v28 == 0 || !v28->m_bIsDOTANPC || (v28->m_iUnitType & 1) == 0 || (v29 = v28, v28->m_bIsIllusion.m_Value) )
        v29 = 0;
      EconEntity_OnOwnerKillEaterEvent(
        v29,
        0,
        kill_eater_event_t::kKillEaterEventType_Beastmaster_HawksSummoned,
        1,
        INVALID_ITEM_DEF_INDEX);
      KeyValues::~KeyValues(&kv);
    }
  }
  v30 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v30, "Hero_Beastmaster.Call.Hawk", 0.0, 0, 0);
}


// CDOTA_Ability_Beastmaster_CallOfTheWildBoar::~CDOTA_Ability_Beastmaster_CallOfTheWildBoar  (line 646, @0x0000000002ac50a0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Beastmaster_CallOfTheWildBoar::~CDOTA_Ability_Beastmaster_CallOfTheWildBoar(
        CDOTA_Ability_Beastmaster_CallOfTheWildBoar *const this)
{
  this->_vptr_IHandleEntity = &off_43E1E70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Beastmaster_CallOfTheWildBoar::~CDOTA_Ability_Beastmaster_CallOfTheWildBoar  (line 646, @0x0000000002ac50c0, libserver.so)  // inlines: ~CDOTA_Ability_Beastmaster_CallOfTheWildBoar
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Beastmaster_CallOfTheWildBoar::~CDOTA_Ability_Beastmaster_CallOfTheWildBoar(
        CDOTA_Ability_Beastmaster_CallOfTheWildBoar *const this)
{
  this->_vptr_IHandleEntity = &off_43E1E70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Beastmaster_CallOfTheWildBoar::Schema_DynamicBinding  (line 648, @0x0000000002ab7fe0, libserver.so)
// globals: CDOTA_Ability_Beastmaster_CallOfTheWildBoar::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Beastmaster_CallOfTheWildBoar::Schema_DynamicBinding(
        const CDOTA_Ability_Beastmaster_CallOfTheWildBoar *const this)
{
  return CDOTA_Ability_Beastmaster_CallOfTheWildBoar::s_pSchemaBinding;
}


// CDOTA_Ability_Beastmaster_CallOfTheWildBoar::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 648, @0x0000000002ab7ff0, libserver.so)
// globals: CDOTA_Ability_Beastmaster_CallOfTheWildBoar::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Beastmaster_CallOfTheWildBoar::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Beastmaster_CallOfTheWildBoar::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Beastmaster_CallOfTheWildBoar::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Beastmaster_CallOfTheWildBoar::CEntityInstanceEntityClass::DestructInstance  (line 648, @0x0000000002ab8000, libserver.so)  // inlines: Destruct<CDOTA_Ability_Beastmaster_CallOfTheWildBoar>
void __fastcall CDOTA_Ability_Beastmaster_CallOfTheWildBoar::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Beastmaster_CallOfTheWildBoar::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Beastmaster_CallOfTheWildBoar::CEntityInstanceEntityClass::FreeInstance  (line 648, @0x0000000002ab8020, libserver.so)
void __fastcall CDOTA_Ability_Beastmaster_CallOfTheWildBoar::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Beastmaster_CallOfTheWildBoar::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Beastmaster_CallOfTheWildBoar::CEntityInstanceEntityClass::CanAllocate  (line 648, @0x0000000002ab8040, libserver.so)
bool __fastcall CDOTA_Ability_Beastmaster_CallOfTheWildBoar::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Beastmaster_CallOfTheWildBoar::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Beastmaster_CallOfTheWildBoar::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 648, @0x0000000002ab8050, libserver.so)
// globals: CDOTA_Ability_Beastmaster_CallOfTheWildBoar::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Beastmaster_CallOfTheWildBoar::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Beastmaster_CallOfTheWildBoar::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Beastmaster_CallOfTheWildBoar::s_pSchemaBinding;
}


// CDOTA_Ability_Beastmaster_CallOfTheWildBoar::CEntityInstanceEntityClass::AllocateInstance  (line 648, @0x0000000002abe900, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Beastmaster_CallOfTheWildBoar::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Beastmaster_CallOfTheWildBoar::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Beastmaster_CallOfTheWildBoar::CEntityInstanceEntityClass::ConstructInstance  (line 648, @0x0000000002ac2780, libserver.so)  // inlines: CDOTA_Ability_Beastmaster_CallOfTheWildBoar, Construct<CDOTA_Ability_Beastmaster_CallOfTheWildBoar>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Beastmaster_CallOfTheWildBoar::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Beastmaster_CallOfTheWildBoar::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43E1E70;
  }
  return p;
}


// CDOTA_Ability_Beastmaster_CallOfTheWildBoar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 648, @0x0000000002acba70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Beastmaster_CallOfTheWildBoar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Beastmaster_CallOfTheWildBoar::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Beastmaster_CallOfTheWildBoar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 648, @0x0000000002acba90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Beastmaster_CallOfTheWildBoar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Beastmaster_CallOfTheWildBoar::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Beastmaster_CallOfTheWildBoar::GetEntityClassInternal  (line 648, @0x0000000002ad8c10, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "beastmaster_call_of_the_wild_boar", "CDOTA_Ability_Beastmaster_CallOfTheWildBoar"
// globals: `guard variable for'CDOTA_Ability_Beastmaster_CallOfTheWildBoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildBoarClass, CDOTA_Ability_Beastmaster_CallOfTheWildBoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildBoarClass, __dso_handle, CDOTA_Ability_Beastmaster_CallOfTheWildBoar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Beastmaster_CallOfTheWildBoar::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildBoarClassInfo, CDOTA_Ability_Beastmaster_CallOfTheWildBoar::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildBoarClassInfo
CEntityClass *__cdecl CDOTA_Ability_Beastmaster_CallOfTheWildBoar::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Beastmaster_CallOfTheWildBoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildBoarClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Beastmaster_CallOfTheWildBoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildBoarClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Beastmaster_CallOfTheWildBoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildBoarClass);
    CDOTA_Ability_Beastmaster_CallOfTheWildBoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildBoarClass._vptr_CEntityClass = off_43E1DF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Beastmaster_CallOfTheWildBoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildBoarClass);
    __cxa_atexit(
      CDOTA_Ability_Beastmaster_CallOfTheWildBoar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Beastmaster_CallOfTheWildBoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildBoarClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Beastmaster_CallOfTheWildBoarClass != 0 )
    return &CDOTA_Ability_Beastmaster_CallOfTheWildBoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildBoarClass;
  if ( `guard variable for'CDOTA_Ability_Beastmaster_CallOfTheWildBoar::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildBoarClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Beastmaster_CallOfTheWildBoar::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildBoarClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Beastmaster_CallOfTheWildBoar::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildBoarClassInfo,
      "CDOTA_Ability_Beastmaster_CallOfTheWildBoar",
      "beastmaster_call_of_the_wild_boar",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Beastmaster_CallOfTheWildBoar::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildBoarClassInfo);
  }
  CDOTA_Ability_Beastmaster_CallOfTheWildBoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildBoarClass.m_pClassInfo = &CDOTA_Ability_Beastmaster_CallOfTheWildBoar::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildBoarClassInfo;
  CDOTA_Ability_Beastmaster_CallOfTheWildBoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildBoarClass.m_pBaseClassInfo = CDOTA_Ability_Beastmaster_CallOfTheWildBoar::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildBoarClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Beastmaster_CallOfTheWildBoarClass = &CDOTA_Ability_Beastmaster_CallOfTheWildBoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildBoarClass;
  CDOTA_Ability_Beastmaster_CallOfTheWildBoar::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildBoarClassInfo.m_pClass = &CDOTA_Ability_Beastmaster_CallOfTheWildBoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildBoarClass;
  CDOTA_Ability_Beastmaster_CallOfTheWildBoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildBoarClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Beastmaster_CallOfTheWildBoarClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Beastmaster_CallOfTheWildBoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_CallOfTheWildBoarClass;
}


// CDOTA_Ability_Beastmaster_CallOfTheWildBoar::OnUpgrade  (line 660, @0x0000000002a7a710, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "beastmaster_call_of_the_wild"
void __fastcall CDOTA_Ability_Beastmaster_CallOfTheWildBoar::OnUpgrade(
        CDOTA_Ability_Beastmaster_CallOfTheWildBoar *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "beastmaster_call_of_the_wild", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value < this->m_iLevel.m_Value )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Beastmaster_CallOfTheWildBoar::OnStolen  (line 674, @0x0000000002a7a910, libserver.so)
// calls: CDOTABaseAbility::SetActivated
void __fastcall CDOTA_Ability_Beastmaster_CallOfTheWildBoar::OnStolen(
        CDOTA_Ability_Beastmaster_CallOfTheWildBoar *const this,
        CDOTABaseAbility *pSourceAbility)
{
  CDOTABaseAbility::SetActivated(this, 1);
}


// CDOTA_Ability_Beastmaster_CallOfTheWildBoar::OnSpellStart  (line 683, @0x0000000002a88f90, libserver.so)  // inlines: GetTeamNumber, NetworkStateChanged, Set, SetUnitLabelIndex, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, V_strlen, VectorAdd, operator+, operator=<int>
// calls: CDOTABaseAbility::GetEffectiveLevel, strlen, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, DOTA_CreateUnitByName, CDOTA_BaseNPC::SetControllableByPlayer, RandomFloat, FindClearSpaceForUnit, CBaseEntity::GetAbsAngles, CBaseEntity::SetAbsAngles, KeyValues::KeyValues, KeyValues::SetFloat (24 total)
// strings: "npc_dota_beastmaster_boar_1", "npc_dota_beastmaster_boar_2", "npc_dota_beastmaster_boar_3", "npc_dota_beastmaster_boar_4", "modifier_kill", "particles/units/heroes/hero_beastmaster/beastmaster_call_boar.vpcf" (7 total)
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_Beastmaster_CallOfTheWildBoar::OnSpellStart(
        CDOTA_Ability_Beastmaster_CallOfTheWildBoar *const this)
{
  int EffectiveLevel; // eax
  const char *v3; // rbx
  CDOTA_BaseNPC *Caster; // r15
  CDOTA_BaseNPC *v5; // r12
  CDOTA_BaseNPC *v6; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *UnitByName; // rax
  CDOTA_BaseNPC *v9; // r12
  void (__fastcall *v10)(CDOTA_BaseNPC *, _QWORD); // rbx
  CDOTA_BaseNPC *v11; // rax
  void (__fastcall *v12)(CDOTA_BaseNPC *, CDOTA_BaseNPC *); // rbx
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  int v15; // eax
  __m128i v16; // xmm0
  float v17; // ebx
  CDOTA_BaseNPC *v18; // rax
  const Vector *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  const QAngle *AbsAngles; // rax
  float v22; // xmm1_4
  CDOTA_BaseNPC *v23; // rax
  int AbilityParticleEffect; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v26; // rax
  int i; // r13d
  int j; // ebx
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTA_BaseNPC *v30; // rax
  CDOTA_BaseNPC_Hero *v31; // rdi
  CDOTA_BaseNPC *v32; // rax
  int iTeamNumber; // [rsp+Ch] [rbp-94h]
  float iTeamNumbera; // [rsp+Ch] [rbp-94h]
  double vSpawnPoint; // [rsp+10h] [rbp-90h]
  float vSpawnPoint_8; // [rsp+18h] [rbp-88h]
  const char *pSpawnArray[4]; // [rsp+30h] [rbp-70h]
  KeyValues kv; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v39; // [rsp+68h] [rbp-38h]
  Vector v40; // 0:xmm0_8.8,8:xmm1_4.4

  v39 = __readfsqword(0x28u);
  pSpawnArray[0] = "npc_dota_beastmaster_boar_1";
  pSpawnArray[1] = "npc_dota_beastmaster_boar_2";
  pSpawnArray[2] = "npc_dota_beastmaster_boar_3";
  pSpawnArray[3] = "npc_dota_beastmaster_boar_4";
  EffectiveLevel = CDOTABaseAbility::GetEffectiveLevel(this);
  v3 = pSpawnArray[EffectiveLevel];
  if ( v3 != 0 && strlen(pSpawnArray[EffectiveLevel]) > 0 )
  {
    iTeamNumber = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
    Caster = CDOTABaseAbility::GetCaster(this);
    v5 = CDOTABaseAbility::GetCaster(this);
    v6 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
    UnitByName = DOTA_CreateUnitByName(v3, AbsOrigin, 0, v5, Caster, iTeamNumber);
    v9 = UnitByName;
    if ( UnitByName != 0 )
    {
      v10 = *(UnitByName->_vptr_IHandleEntity + 70);
      v11 = CDOTABaseAbility::GetCaster(this);
      v10(v9, v11->m_iTeamNum.m_Value);
      v12 = *(v9->_vptr_IHandleEntity + 40);
      v13 = CDOTABaseAbility::GetCaster(this);
      v12(v9, v13);
      if ( v9->m_nUnitLabelIndex.m_Value != 0 )
      {
        (*(v9->_vptr_IHandleEntity + 22))(v9, 3417, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v9->m_nUnitLabelIndex.m_Value = 0;
      }
      v14 = CDOTABaseAbility::GetCaster(this);
      v15 = (*(v14->_vptr_IHandleEntity + 414))(v14);
      CDOTA_BaseNPC::SetControllableByPlayer(v9, v15, 0);
      *v16.m128i_i32 = RandomFloat(-100.0, 100.0);
      v17 = COERCE_FLOAT(_mm_cvtsi128_si32(v16));
      iTeamNumbera = RandomFloat(-100.0, 100.0);
      v18 = CDOTABaseAbility::GetCaster(this);
      v19 = CBaseEntity::GetAbsOrigin(v18);
      v40.z = v19->z + 0.0;
      *(&vSpawnPoint + 1) = v17 + v19->y;
      *&vSpawnPoint = iTeamNumbera + v19->x;
      *&v40.x = vSpawnPoint;
      vSpawnPoint_8 = v40.z;
      FindClearSpaceForUnit(v9, v40, 1);
      v20 = CDOTABaseAbility::GetCaster(this);
      AbsAngles = CBaseEntity::GetAbsAngles(v20);
      CBaseEntity::SetAbsAngles(v9, AbsAngles);
      KeyValues::KeyValues(&kv, "modifier_kill");
      KeyValues::SetFloat(&kv, "duration", v22);
      v23 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v9, v23, this, "modifier_kill", &kv, 0);
      AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                                this,
                                "particles/units/heroes/hero_beastmaster/beastmaster_call_boar.vpcf",
                                2,
                                0,
                                0);
      ParticleManager = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(ParticleManager, AbilityParticleEffect, 0, vSpawnPoint, vSpawnPoint_8);
      v26 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v26, AbilityParticleEffect);
      for ( i = 0; i < this->m_iLevel.m_Value; ++i )
      {
        for ( j = 0; j != 24; ++j )
        {
          AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(v9, j);
          if ( AbilityByIndex != 0 )
            CDOTABaseAbility::UpgradeAbility(AbilityByIndex, 0);
        }
      }
      v30 = CDOTABaseAbility::GetCaster(this);
      if ( v30 == 0 || !v30->m_bIsDOTANPC || (v30->m_iUnitType & 1) == 0 || (v31 = v30, v30->m_bIsIllusion.m_Value) )
        v31 = 0;
      EconEntity_OnOwnerKillEaterEvent(
        v31,
        0,
        kill_eater_event_t::kKillEaterEventType_Beastmaster_BoarsSummoned,
        1,
        INVALID_ITEM_DEF_INDEX);
      KeyValues::~KeyValues(&kv);
    }
  }
  v32 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v32, "Hero_Beastmaster.Call.Boar", 0.0, 0, 0);
}


// CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::~CDOTA_Ability_CallOfTheWild_Hawk_Invisibility  (line 740, @0x0000000002ac50f0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::~CDOTA_Ability_CallOfTheWild_Hawk_Invisibility(
        CDOTA_Ability_CallOfTheWild_Hawk_Invisibility *const this)
{
  this->_vptr_IHandleEntity = &off_43E2970;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::~CDOTA_Ability_CallOfTheWild_Hawk_Invisibility  (line 740, @0x0000000002ac5110, libserver.so)  // inlines: ~CDOTA_Ability_CallOfTheWild_Hawk_Invisibility
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::~CDOTA_Ability_CallOfTheWild_Hawk_Invisibility(
        CDOTA_Ability_CallOfTheWild_Hawk_Invisibility *const this)
{
  this->_vptr_IHandleEntity = &off_43E2970;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::Schema_DynamicBinding  (line 742, @0x0000000002ab8060, libserver.so)
// globals: CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::Schema_DynamicBinding(
        const CDOTA_Ability_CallOfTheWild_Hawk_Invisibility *const this)
{
  return CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::s_pSchemaBinding;
}


// CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 742, @0x0000000002ab8070, libserver.so)
// globals: CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::CEntityInstanceEntityClass::DestructInstance  (line 742, @0x0000000002ab8080, libserver.so)  // inlines: Destruct<CDOTA_Ability_CallOfTheWild_Hawk_Invisibility>
void __fastcall CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::CEntityInstanceEntityClass::FreeInstance  (line 742, @0x0000000002ab80a0, libserver.so)
void __fastcall CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::CEntityInstanceEntityClass::CanAllocate  (line 742, @0x0000000002ab80c0, libserver.so)
bool __fastcall CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 742, @0x0000000002ab80d0, libserver.so)
// globals: CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::s_pSchemaBinding;
}


// CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::CEntityInstanceEntityClass::AllocateInstance  (line 742, @0x0000000002abe940, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::CEntityInstanceEntityClass::ConstructInstance  (line 742, @0x0000000002ac27b0, libserver.so)  // inlines: CDOTA_Ability_CallOfTheWild_Hawk_Invisibility, Construct<CDOTA_Ability_CallOfTheWild_Hawk_Invisibility>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43E2970;
  }
  return p;
}


// CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 742, @0x0000000002acbac0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 742, @0x0000000002acbae0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::GetEntityClassInternal  (line 742, @0x0000000002ad8d60, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "beastmaster_hawk_invisibility", "CDOTA_Ability_CallOfTheWild_Hawk_Invisibility"
// globals: `guard variable for'CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Hawk_InvisibilityClass, CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Hawk_InvisibilityClass, __dso_handle, CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CallOfTheWild_Hawk_InvisibilityClassInfo, CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CallOfTheWild_Hawk_InvisibilityClassInfo
CEntityClass *__cdecl CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Hawk_InvisibilityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Hawk_InvisibilityClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Hawk_InvisibilityClass);
    CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Hawk_InvisibilityClass._vptr_CEntityClass = off_43E28F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Hawk_InvisibilityClass);
    __cxa_atexit(
      CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Hawk_InvisibilityClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_CallOfTheWild_Hawk_InvisibilityClass != 0 )
    return &CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Hawk_InvisibilityClass;
  if ( `guard variable for'CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CallOfTheWild_Hawk_InvisibilityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CallOfTheWild_Hawk_InvisibilityClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CallOfTheWild_Hawk_InvisibilityClassInfo,
      "CDOTA_Ability_CallOfTheWild_Hawk_Invisibility",
      "beastmaster_hawk_invisibility",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CallOfTheWild_Hawk_InvisibilityClassInfo);
  }
  CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Hawk_InvisibilityClass.m_pClassInfo = &CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CallOfTheWild_Hawk_InvisibilityClassInfo;
  CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Hawk_InvisibilityClass.m_pBaseClassInfo = CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CallOfTheWild_Hawk_InvisibilityClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_CallOfTheWild_Hawk_InvisibilityClass = &CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Hawk_InvisibilityClass;
  CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CallOfTheWild_Hawk_InvisibilityClassInfo.m_pClass = &CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Hawk_InvisibilityClass;
  CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Hawk_InvisibilityClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_CallOfTheWild_Hawk_InvisibilityClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Hawk_InvisibilityClass;
}


// CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::GetIntrinsicModifierName  (line 745, @0x0000000002ab80e0, libserver.so)
// strings: "modifier_beastmaster_hawk_invisibility_activator"
const char *__fastcall CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::GetIntrinsicModifierName(
        CDOTA_Ability_CallOfTheWild_Hawk_Invisibility *const this)
{
  return "modifier_beastmaster_hawk_invisibility_activator";
}


// CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility_Activator::~CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility_Activator  (line 752, @0x0000000002ac1fe0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility_Activator::~CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility_Activator(
        CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility_Activator *const this)
{
  this->_vptr_CDOTA_Buff = &off_43E3430;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility_Activator::~CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility_Activator  (line 752, @0x0000000002ac2000, libserver.so)  // inlines: ~CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility_Activator
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility_Activator::~CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility_Activator(
        CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility_Activator *const this)
{
  this->_vptr_CDOTA_Buff = &off_43E3430;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility_Activator::IsHidden  (line 763, @0x0000000002ab80f0, libserver.so)
bool __fastcall CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility_Activator::IsHidden(
        CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility_Activator *const this)
{
  return 1;
}


// CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility_Activator::OnCreated  (line 777, @0x0000000002a9c7f0, libserver.so)  // inlines: AssignTo, DOTAGameRules, DotaRetrieveAbilityValue<float>, GetGameTime, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "idle_invis_delay"
void __fastcall CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility_Activator::OnCreated(
        CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility_Activator *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float v5; // xmm1_4
  float v6; // xmm0_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->idle_invis_delay = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "idle_invis_delay", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->fade_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "fade_time", -1, 0);
      goto LABEL_4;
    }
  }
  else
  {
    this->idle_invis_delay = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->fade_time = 0.0;
LABEL_4:
  CDOTA_Buff::StartIntervalThink(this, 0.1, v5);
  v6 = 0.0;
  if ( g_pGameRules != 0 )
    v6 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_fLastMoveTime = v6;
}


// CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility_Activator::OnIntervalThink  (line 788, @0x0000000002a79d60, libserver.so)  // inlines: DOTAGameRules, GetGameTime
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_beastmaster_hawk_invisibility", "fadetime"
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility_Activator::OnIntervalThink(
        CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility_Activator *const this)
{
  float v1; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax
  float v4; // xmm1_4
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v7; // rax
  __int64 v8; // [rsp-8h] [rbp-48h] BYREF
  unsigned __int64 kv_16; // [rsp+10h] [rbp-30h] OVERLAPPED

  v1 = 0.0;
  kv_16 = __readfsqword(0x28u);
  if ( g_pGameRules != 0 )
    v1 = *&g_pGameRules[18].m_szQuestName[20];
  if ( (v1 - this->idle_invis_delay) > this->m_fLastMoveTime )
  {
    Parent = CDOTA_Buff::GetParent(this);
    if ( CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_beastmaster_hawk_invisibility", 0) == 0 )
    {
      KeyValues::KeyValues(&v8, "modifier_beastmaster_hawk_invisibility");
      KeyValues::SetFloat(&v8, "fadetime", v4);
      Ability = CDOTA_Buff::GetAbility(this);
      Caster = CDOTA_Buff::GetCaster(this);
      v7 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::AddNewModifier(v7, Caster, Ability, "modifier_beastmaster_hawk_invisibility", &v8, 0);
      KeyValues::~KeyValues(&v8);
    }
  }
}


// CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility_Activator::DeclareFunctions  (line 805, @0x0000000002a775c0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility_Activator::DeclareFunctions(
        CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility_Activator *const this)
{
  this->m_Functions[126].__pfn = (&stru_10 + 697);
  this->m_Functions[126].__delta = 0;
}


// CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility_Activator::OnUnitMoved  (line 812, @0x0000000002a83770, libserver.so)  // inlines: DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_beastmaster_hawk_invisibility"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility_Activator::OnUnitMoved(
        CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility_Activator *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  float v8; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    return 1uLL;
  v5 = &v4[params->hunit.m_Index & 0x1FF];
  if ( v5 == 0 )
    return 1uLL;
  if ( m_Index != v5->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC || CDOTA_Buff::GetParent(this) != m_pInstance )
    return 1uLL;
  v8 = 0.0;
  if ( g_pGameRules != 0 )
    v8 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_fLastMoveTime = v8;
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveModifierByName(Parent, "modifier_beastmaster_hawk_invisibility");
  return 1uLL;
}


// CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility::~CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility  (line 829, @0x0000000002ac0830, libserver.so)  // inlines: ~CDOTA_Modifier_Invisible
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility::~CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility(
        CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility::~CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility  (line 829, @0x0000000002ac0850, libserver.so)  // inlines: ~CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility, ~CDOTA_Modifier_Invisible
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility::~CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility(
        CDOTA_Modifier_CallOfTheWild_Hawk_Invisibility *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Ability_CallOfTheWild_Boar_Poison::~CDOTA_Ability_CallOfTheWild_Boar_Poison  (line 841, @0x0000000002ac5140, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_CallOfTheWild_Boar_Poison::~CDOTA_Ability_CallOfTheWild_Boar_Poison(
        CDOTA_Ability_CallOfTheWild_Boar_Poison *const this)
{
  this->_vptr_IHandleEntity = &off_43E3AD0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_CallOfTheWild_Boar_Poison::~CDOTA_Ability_CallOfTheWild_Boar_Poison  (line 841, @0x0000000002ac5160, libserver.so)  // inlines: ~CDOTA_Ability_CallOfTheWild_Boar_Poison
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_CallOfTheWild_Boar_Poison::~CDOTA_Ability_CallOfTheWild_Boar_Poison(
        CDOTA_Ability_CallOfTheWild_Boar_Poison *const this)
{
  this->_vptr_IHandleEntity = &off_43E3AD0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_CallOfTheWild_Boar_Poison::Schema_DynamicBinding  (line 843, @0x0000000002ab8100, libserver.so)
// globals: CDOTA_Ability_CallOfTheWild_Boar_Poison::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_CallOfTheWild_Boar_Poison::Schema_DynamicBinding(
        const CDOTA_Ability_CallOfTheWild_Boar_Poison *const this)
{
  return CDOTA_Ability_CallOfTheWild_Boar_Poison::s_pSchemaBinding;
}


// CDOTA_Ability_CallOfTheWild_Boar_Poison::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 843, @0x0000000002ab8110, libserver.so)
// globals: CDOTA_Ability_CallOfTheWild_Boar_Poison::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_CallOfTheWild_Boar_Poison::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_CallOfTheWild_Boar_Poison::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_CallOfTheWild_Boar_Poison::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_CallOfTheWild_Boar_Poison::CEntityInstanceEntityClass::DestructInstance  (line 843, @0x0000000002ab8120, libserver.so)  // inlines: Destruct<CDOTA_Ability_CallOfTheWild_Boar_Poison>
void __fastcall CDOTA_Ability_CallOfTheWild_Boar_Poison::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_CallOfTheWild_Boar_Poison::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_CallOfTheWild_Boar_Poison::CEntityInstanceEntityClass::FreeInstance  (line 843, @0x0000000002ab8140, libserver.so)
void __fastcall CDOTA_Ability_CallOfTheWild_Boar_Poison::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_CallOfTheWild_Boar_Poison::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_CallOfTheWild_Boar_Poison::CEntityInstanceEntityClass::CanAllocate  (line 843, @0x0000000002ab8160, libserver.so)
bool __fastcall CDOTA_Ability_CallOfTheWild_Boar_Poison::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_CallOfTheWild_Boar_Poison::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_CallOfTheWild_Boar_Poison::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 843, @0x0000000002ab8170, libserver.so)
// globals: CDOTA_Ability_CallOfTheWild_Boar_Poison::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_CallOfTheWild_Boar_Poison::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_CallOfTheWild_Boar_Poison::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_CallOfTheWild_Boar_Poison::s_pSchemaBinding;
}


// CDOTA_Ability_CallOfTheWild_Boar_Poison::CEntityInstanceEntityClass::AllocateInstance  (line 843, @0x0000000002abe980, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_CallOfTheWild_Boar_Poison::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_CallOfTheWild_Boar_Poison::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_CallOfTheWild_Boar_Poison::CEntityInstanceEntityClass::ConstructInstance  (line 843, @0x0000000002ac27e0, libserver.so)  // inlines: CDOTA_Ability_CallOfTheWild_Boar_Poison, Construct<CDOTA_Ability_CallOfTheWild_Boar_Poison>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_CallOfTheWild_Boar_Poison::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_CallOfTheWild_Boar_Poison::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43E3AD0;
  }
  return p;
}


// CDOTA_Ability_CallOfTheWild_Boar_Poison::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 843, @0x0000000002acbb10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_CallOfTheWild_Boar_Poison::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_CallOfTheWild_Boar_Poison::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_CallOfTheWild_Boar_Poison::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 843, @0x0000000002acbb30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_CallOfTheWild_Boar_Poison::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_CallOfTheWild_Boar_Poison::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_CallOfTheWild_Boar_Poison::GetEntityClassInternal  (line 843, @0x0000000002ad8eb0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "beastmaster_boar_poison", "CDOTA_Ability_CallOfTheWild_Boar_Poison"
// globals: `guard variable for'CDOTA_Ability_CallOfTheWild_Boar_Poison::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonClass, CDOTA_Ability_CallOfTheWild_Boar_Poison::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonClass, __dso_handle, CDOTA_Ability_CallOfTheWild_Boar_Poison::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_CallOfTheWild_Boar_Poison::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonClassInfo, CDOTA_Ability_CallOfTheWild_Boar_Poison::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonClassInfo
CEntityClass *__cdecl CDOTA_Ability_CallOfTheWild_Boar_Poison::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_CallOfTheWild_Boar_Poison::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_CallOfTheWild_Boar_Poison::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_CallOfTheWild_Boar_Poison::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonClass);
    CDOTA_Ability_CallOfTheWild_Boar_Poison::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonClass._vptr_CEntityClass = off_43E3A50;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_CallOfTheWild_Boar_Poison::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonClass);
    __cxa_atexit(
      CDOTA_Ability_CallOfTheWild_Boar_Poison::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_CallOfTheWild_Boar_Poison::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_CallOfTheWild_Boar_PoisonClass != 0 )
    return &CDOTA_Ability_CallOfTheWild_Boar_Poison::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonClass;
  if ( `guard variable for'CDOTA_Ability_CallOfTheWild_Boar_Poison::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_CallOfTheWild_Boar_Poison::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_CallOfTheWild_Boar_Poison::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonClassInfo,
      "CDOTA_Ability_CallOfTheWild_Boar_Poison",
      "beastmaster_boar_poison",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_CallOfTheWild_Boar_Poison::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonClassInfo);
  }
  CDOTA_Ability_CallOfTheWild_Boar_Poison::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonClass.m_pClassInfo = &CDOTA_Ability_CallOfTheWild_Boar_Poison::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonClassInfo;
  CDOTA_Ability_CallOfTheWild_Boar_Poison::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonClass.m_pBaseClassInfo = CDOTA_Ability_CallOfTheWild_Boar_Poison::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_CallOfTheWild_Boar_PoisonClass = &CDOTA_Ability_CallOfTheWild_Boar_Poison::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonClass;
  CDOTA_Ability_CallOfTheWild_Boar_Poison::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonClassInfo.m_pClass = &CDOTA_Ability_CallOfTheWild_Boar_Poison::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonClass;
  CDOTA_Ability_CallOfTheWild_Boar_Poison::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_CallOfTheWild_Boar_PoisonClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_CallOfTheWild_Boar_Poison::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonClass;
}


// CDOTA_Ability_CallOfTheWild_Boar_Poison::GetIntrinsicModifierName  (line 846, @0x0000000002ab8180, libserver.so)
// strings: "modifier_beastmaster_boar_poison"
const char *__fastcall CDOTA_Ability_CallOfTheWild_Boar_Poison::GetIntrinsicModifierName(
        CDOTA_Ability_CallOfTheWild_Boar_Poison *const this)
{
  return "modifier_beastmaster_boar_poison";
}


// CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::~CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater  (line 849, @0x0000000002ac5190, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::~CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater(
        CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater *const this)
{
  this->_vptr_IHandleEntity = &off_43E45D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::~CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater  (line 849, @0x0000000002ac51b0, libserver.so)  // inlines: ~CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::~CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater(
        CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater *const this)
{
  this->_vptr_IHandleEntity = &off_43E45D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::Schema_DynamicBinding  (line 851, @0x0000000002ab8190, libserver.so)
// globals: CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::Schema_DynamicBinding(
        const CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater *const this)
{
  return CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::s_pSchemaBinding;
}


// CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 851, @0x0000000002ab81a0, libserver.so)
// globals: CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::CEntityInstanceEntityClass::DestructInstance  (line 851, @0x0000000002ab81b0, libserver.so)  // inlines: Destruct<CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater>
void __fastcall CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::CEntityInstanceEntityClass::FreeInstance  (line 851, @0x0000000002ab81d0, libserver.so)
void __fastcall CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::CEntityInstanceEntityClass::CanAllocate  (line 851, @0x0000000002ab81f0, libserver.so)
bool __fastcall CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 851, @0x0000000002ab8200, libserver.so)
// globals: CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::s_pSchemaBinding;
}


// CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::CEntityInstanceEntityClass::AllocateInstance  (line 851, @0x0000000002abe9c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::CEntityInstanceEntityClass::ConstructInstance  (line 851, @0x0000000002ac2810, libserver.so)  // inlines: CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater, Construct<CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43E45D0;
  }
  return p;
}


// CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 851, @0x0000000002acbb60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 851, @0x0000000002acbb80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::GetEntityClassInternal  (line 851, @0x0000000002ad9000, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "beastmaster_greater_boar_poison", "CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater"
// globals: `guard variable for'CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonGreaterClass, CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonGreaterClass, __dso_handle, CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonGreaterClassInfo, CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonGreaterClassInfo
CEntityClass *__cdecl CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonGreaterClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonGreaterClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonGreaterClass);
    CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonGreaterClass._vptr_CEntityClass = off_43E4550;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonGreaterClass);
    __cxa_atexit(
      CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonGreaterClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_CallOfTheWild_Boar_PoisonGreaterClass != 0 )
    return &CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonGreaterClass;
  if ( `guard variable for'CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonGreaterClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonGreaterClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonGreaterClassInfo,
      "CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater",
      "beastmaster_greater_boar_poison",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonGreaterClassInfo);
  }
  CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonGreaterClass.m_pClassInfo = &CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonGreaterClassInfo;
  CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonGreaterClass.m_pBaseClassInfo = CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonGreaterClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_CallOfTheWild_Boar_PoisonGreaterClass = &CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonGreaterClass;
  CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonGreaterClassInfo.m_pClass = &CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonGreaterClass;
  CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonGreaterClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_CallOfTheWild_Boar_PoisonGreaterClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CallOfTheWild_Boar_PoisonGreaterClass;
}


// CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::GetIntrinsicModifierName  (line 854, @0x0000000002ab8210, libserver.so)
// strings: "modifier_beastmaster_boar_poison_greater"
const char *__fastcall CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::GetIntrinsicModifierName(
        CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater *const this)
{
  return "modifier_beastmaster_boar_poison_greater";
}


// CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase::~CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase  (line 864, @0x0000000002ac1ef0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase::~CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase(
        CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase *const this)
{
  this->_vptr_CDOTA_Buff = &off_43E5690;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase::~CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase  (line 864, @0x0000000002ac1f10, libserver.so)  // inlines: ~CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase::~CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase(
        CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase *const this)
{
  this->_vptr_CDOTA_Buff = &off_43E5690;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase::IsHidden  (line 875, @0x0000000002ab8220, libserver.so)
bool __fastcall CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase::IsHidden(
        CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase *const this)
{
  return 1;
}


// CDOTA_Modifier_CallOfTheWild_Boar_Poison::~CDOTA_Modifier_CallOfTheWild_Boar_Poison  (line 882, @0x0000000002ac1f90, libserver.so)  // inlines: ~CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_CallOfTheWild_Boar_Poison::~CDOTA_Modifier_CallOfTheWild_Boar_Poison(
        CDOTA_Modifier_CallOfTheWild_Boar_Poison *const this)
{
  this->_vptr_CDOTA_Buff = &off_43E5690;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_CallOfTheWild_Boar_Poison::~CDOTA_Modifier_CallOfTheWild_Boar_Poison  (line 882, @0x0000000002ac1fb0, libserver.so)  // inlines: ~CDOTA_Modifier_CallOfTheWild_Boar_Poison, ~CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_CallOfTheWild_Boar_Poison::~CDOTA_Modifier_CallOfTheWild_Boar_Poison(
        CDOTA_Modifier_CallOfTheWild_Boar_Poison *const this)
{
  this->_vptr_CDOTA_Buff = &off_43E5690;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_CallOfTheWild_Boar_PoisonGreater::~CDOTA_Modifier_CallOfTheWild_Boar_PoisonGreater  (line 888, @0x0000000002ac1f40, libserver.so)  // inlines: ~CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_CallOfTheWild_Boar_PoisonGreater::~CDOTA_Modifier_CallOfTheWild_Boar_PoisonGreater(
        CDOTA_Modifier_CallOfTheWild_Boar_PoisonGreater *const this)
{
  this->_vptr_CDOTA_Buff = &off_43E5690;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_CallOfTheWild_Boar_PoisonGreater::~CDOTA_Modifier_CallOfTheWild_Boar_PoisonGreater  (line 888, @0x0000000002ac1f60, libserver.so)  // inlines: ~CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase, ~CDOTA_Modifier_CallOfTheWild_Boar_PoisonGreater
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_CallOfTheWild_Boar_PoisonGreater::~CDOTA_Modifier_CallOfTheWild_Boar_PoisonGreater(
        CDOTA_Modifier_CallOfTheWild_Boar_PoisonGreater *const this)
{
  this->_vptr_CDOTA_Buff = &off_43E5690;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase::OnCreated  (line 899, @0x0000000002a9c6d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
void __fastcall CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase::OnCreated(
        CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "duration", -1, 0);
  else
    this->duration = 0.0;
}


// CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase::OnRefresh  (line 906, @0x0000000002a9c610, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
void __fastcall CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase::OnRefresh(
        CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "duration", -1, 0);
  else
    this->duration = 0.0;
}


// CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase::DeclareFunctions  (line 913, @0x0000000002a775e0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase::OnAttacked(CModifierParams const&)
void __fastcall CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase::DeclareFunctions(
        CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase *const this)
{
  this->m_Functions[137].__pfn = CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase::OnAttacked;
  this->m_Functions[137].__delta = 0;
}


// CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase::OnAttacked  (line 920, @0x0000000002a87d50, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_Buff::GetParent, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, _Unwind_Resume
// strings: "modifier_beastmaster_boar_poison_effect"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase::OnAttacked(
        CDOTA_Modifier_CallOfTheWild_Boar_PoisonBase *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // edx
  unsigned __int64 v10; // rax
  CEntityIdentity *v11; // rcx
  CEntityIdentity *v12; // rax
  CEntityInstance *v13; // rbx
  int m_Id; // eax
  float v15; // xmm1_4
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-28h]

  v19 = __readfsqword(0x28u);
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
          && (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) == 0 )
        {
          v9 = params->htarget.m_Index;
          if ( v9 + 2 > 1 )
          {
            v10 = params->htarget.m_Index & 0x7FFF;
            v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v10 >> 9)];
            if ( v11 != 0 )
            {
              v12 = &v11[v10 & 0x1FF];
              if ( v12 != 0 && v9 == v12->m_EHandle.m_Index )
              {
                v13 = v12->m_pInstance;
                if ( v12->m_pInstance != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
                {
                  m_Id = v13[43].m_iszPrivateVScripts.u.m_Id;
                  if ( (m_Id & 4) == 0 && (m_Id & 0x193) != 0 && (BYTE1(v13[58]._vptr_IHandleEntity) & 2) == 0 )
                  {
                    KeyValues::KeyValues(&kv, "modifier_beastmaster_boar_poison_effect");
                    KeyValues::SetFloat(&kv, "duration", v15);
                    Ability = CDOTA_Buff::GetAbility(this);
                    Caster = CDOTA_Buff::GetCaster(this);
                    CDOTA_BaseNPC::AddNewModifier(
                      v13,
                      Caster,
                      Ability,
                      "modifier_beastmaster_boar_poison_effect",
                      &kv,
                      0);
                    KeyValues::~KeyValues(&kv);
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


// CDOTA_Modifier_CallOfTheWild_Boar_PoisonEffect::~CDOTA_Modifier_CallOfTheWild_Boar_PoisonEffect  (line 945, @0x0000000002ac1ea0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_CallOfTheWild_Boar_PoisonEffect::~CDOTA_Modifier_CallOfTheWild_Boar_PoisonEffect(
        CDOTA_Modifier_CallOfTheWild_Boar_PoisonEffect *const this)
{
  this->_vptr_CDOTA_Buff = &off_43E59B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_CallOfTheWild_Boar_PoisonEffect::~CDOTA_Modifier_CallOfTheWild_Boar_PoisonEffect  (line 945, @0x0000000002ac1ec0, libserver.so)  // inlines: ~CDOTA_Modifier_CallOfTheWild_Boar_PoisonEffect
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_CallOfTheWild_Boar_PoisonEffect::~CDOTA_Modifier_CallOfTheWild_Boar_PoisonEffect(
        CDOTA_Modifier_CallOfTheWild_Boar_PoisonEffect *const this)
{
  this->_vptr_CDOTA_Buff = &off_43E59B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_CallOfTheWild_Boar_PoisonEffect::OnCreated  (line 967, @0x0000000002aaa3a0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_CallOfTheWild_Boar_PoisonEffect::OnCreated(
        CDOTA_Modifier_CallOfTheWild_Boar_PoisonEffect *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "attack_speed", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "movement_speed", -1, 0);
      return;
    }
  }
  else
  {
    this->attack_speed = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->movement_speed = 0;
}


// CDOTA_Modifier_CallOfTheWild_Boar_PoisonEffect::OnRefresh  (line 975, @0x0000000002aaa670, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_CallOfTheWild_Boar_PoisonEffect::OnRefresh(
        CDOTA_Modifier_CallOfTheWild_Boar_PoisonEffect *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "attack_speed", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "movement_speed", -1, 0);
      return;
    }
  }
  else
  {
    this->attack_speed = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->movement_speed = 0;
}


// CDOTA_Modifier_CallOfTheWild_Boar_PoisonEffect::DeclareFunctions  (line 983, @0x0000000002a77600, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_CallOfTheWild_Boar_PoisonEffect::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_CallOfTheWild_Boar_PoisonEffect::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_CallOfTheWild_Boar_PoisonEffect::DeclareFunctions(
        CDOTA_Modifier_CallOfTheWild_Boar_PoisonEffect *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_CallOfTheWild_Boar_PoisonEffect::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_CallOfTheWild_Boar_PoisonEffect::GetModifierAttackSpeedBonus_Constant;
}


// CDOTA_Modifier_CallOfTheWild_Boar_PoisonEffect::GetModifierMoveSpeedBonus_Percentage  (line 991, @0x0000000002a77640, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_CallOfTheWild_Boar_PoisonEffect::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_CallOfTheWild_Boar_PoisonEffect *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_CallOfTheWild_Boar_PoisonEffect::GetModifierAttackSpeedBonus_Constant  (line 998, @0x0000000002a77660, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_CallOfTheWild_Boar_PoisonEffect::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_CallOfTheWild_Boar_PoisonEffect *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Beastmaster_InnerBeast::~CDOTA_Ability_Beastmaster_InnerBeast  (line 1007, @0x0000000002ac51e0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Beastmaster_InnerBeast::~CDOTA_Ability_Beastmaster_InnerBeast(
        CDOTA_Ability_Beastmaster_InnerBeast *const this)
{
  this->_vptr_IHandleEntity = &off_43E5D10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Beastmaster_InnerBeast::~CDOTA_Ability_Beastmaster_InnerBeast  (line 1007, @0x0000000002ac5200, libserver.so)  // inlines: ~CDOTA_Ability_Beastmaster_InnerBeast
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Beastmaster_InnerBeast::~CDOTA_Ability_Beastmaster_InnerBeast(
        CDOTA_Ability_Beastmaster_InnerBeast *const this)
{
  this->_vptr_IHandleEntity = &off_43E5D10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Beastmaster_InnerBeast::Schema_DynamicBinding  (line 1009, @0x0000000002ab8230, libserver.so)
// globals: CDOTA_Ability_Beastmaster_InnerBeast::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Beastmaster_InnerBeast::Schema_DynamicBinding(
        const CDOTA_Ability_Beastmaster_InnerBeast *const this)
{
  return CDOTA_Ability_Beastmaster_InnerBeast::s_pSchemaBinding;
}


// CDOTA_Ability_Beastmaster_InnerBeast::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1009, @0x0000000002ab8240, libserver.so)
// globals: CDOTA_Ability_Beastmaster_InnerBeast::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Beastmaster_InnerBeast::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Beastmaster_InnerBeast::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Beastmaster_InnerBeast::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Beastmaster_InnerBeast::CEntityInstanceEntityClass::DestructInstance  (line 1009, @0x0000000002ab8250, libserver.so)  // inlines: Destruct<CDOTA_Ability_Beastmaster_InnerBeast>
void __fastcall CDOTA_Ability_Beastmaster_InnerBeast::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Beastmaster_InnerBeast::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Beastmaster_InnerBeast::CEntityInstanceEntityClass::FreeInstance  (line 1009, @0x0000000002ab8270, libserver.so)
void __fastcall CDOTA_Ability_Beastmaster_InnerBeast::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Beastmaster_InnerBeast::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Beastmaster_InnerBeast::CEntityInstanceEntityClass::CanAllocate  (line 1009, @0x0000000002ab8290, libserver.so)
bool __fastcall CDOTA_Ability_Beastmaster_InnerBeast::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Beastmaster_InnerBeast::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Beastmaster_InnerBeast::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1009, @0x0000000002ab82a0, libserver.so)
// globals: CDOTA_Ability_Beastmaster_InnerBeast::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Beastmaster_InnerBeast::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Beastmaster_InnerBeast::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Beastmaster_InnerBeast::s_pSchemaBinding;
}


// CDOTA_Ability_Beastmaster_InnerBeast::CEntityInstanceEntityClass::AllocateInstance  (line 1009, @0x0000000002abea00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Beastmaster_InnerBeast::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Beastmaster_InnerBeast::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Beastmaster_InnerBeast::CEntityInstanceEntityClass::ConstructInstance  (line 1009, @0x0000000002ac2840, libserver.so)  // inlines: CDOTA_Ability_Beastmaster_InnerBeast, Construct<CDOTA_Ability_Beastmaster_InnerBeast>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Beastmaster_InnerBeast::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Beastmaster_InnerBeast::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43E5D10;
  }
  return p;
}


// CDOTA_Ability_Beastmaster_InnerBeast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1009, @0x0000000002acbbb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Beastmaster_InnerBeast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Beastmaster_InnerBeast::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Beastmaster_InnerBeast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1009, @0x0000000002acbbd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Beastmaster_InnerBeast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Beastmaster_InnerBeast::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Beastmaster_InnerBeast::GetEntityClassInternal  (line 1009, @0x0000000002ad9150, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "beastmaster_inner_beast", "CDOTA_Ability_Beastmaster_InnerBeast"
// globals: `guard variable for'CDOTA_Ability_Beastmaster_InnerBeast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_InnerBeastClass, CDOTA_Ability_Beastmaster_InnerBeast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_InnerBeastClass, __dso_handle, CDOTA_Ability_Beastmaster_InnerBeast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Beastmaster_InnerBeast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_InnerBeastClassInfo, CDOTA_Ability_Beastmaster_InnerBeast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_InnerBeastClassInfo
CEntityClass *__cdecl CDOTA_Ability_Beastmaster_InnerBeast::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Beastmaster_InnerBeast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_InnerBeastClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Beastmaster_InnerBeast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_InnerBeastClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Beastmaster_InnerBeast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_InnerBeastClass);
    CDOTA_Ability_Beastmaster_InnerBeast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_InnerBeastClass._vptr_CEntityClass = off_43E5C90;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Beastmaster_InnerBeast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_InnerBeastClass);
    __cxa_atexit(
      CDOTA_Ability_Beastmaster_InnerBeast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Beastmaster_InnerBeast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_InnerBeastClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Beastmaster_InnerBeastClass != 0 )
    return &CDOTA_Ability_Beastmaster_InnerBeast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_InnerBeastClass;
  if ( `guard variable for'CDOTA_Ability_Beastmaster_InnerBeast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_InnerBeastClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Beastmaster_InnerBeast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_InnerBeastClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Beastmaster_InnerBeast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_InnerBeastClassInfo,
      "CDOTA_Ability_Beastmaster_InnerBeast",
      "beastmaster_inner_beast",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Beastmaster_InnerBeast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_InnerBeastClassInfo);
  }
  CDOTA_Ability_Beastmaster_InnerBeast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_InnerBeastClass.m_pClassInfo = &CDOTA_Ability_Beastmaster_InnerBeast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_InnerBeastClassInfo;
  CDOTA_Ability_Beastmaster_InnerBeast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_InnerBeastClass.m_pBaseClassInfo = CDOTA_Ability_Beastmaster_InnerBeast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_InnerBeastClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Beastmaster_InnerBeastClass = &CDOTA_Ability_Beastmaster_InnerBeast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_InnerBeastClass;
  CDOTA_Ability_Beastmaster_InnerBeast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_InnerBeastClassInfo.m_pClass = &CDOTA_Ability_Beastmaster_InnerBeast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_InnerBeastClass;
  CDOTA_Ability_Beastmaster_InnerBeast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_InnerBeastClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Beastmaster_InnerBeastClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Beastmaster_InnerBeast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_InnerBeastClass;
}


// CDOTA_Ability_Beastmaster_InnerBeast::GetIntrinsicModifierName  (line 1012, @0x0000000002ab82b0, libserver.so)
// strings: "modifier_beastmaster_inner_beast_aura"
const char *__fastcall CDOTA_Ability_Beastmaster_InnerBeast::GetIntrinsicModifierName(
        CDOTA_Ability_Beastmaster_InnerBeast *const this)
{
  return "modifier_beastmaster_inner_beast_aura";
}


// CDOTA_Ability_Beastmaster_InnerBeast::OnUpgrade  (line 1021, @0x0000000002a82730, libserver.so)  // inlines: CEntityHandle, CSingleUserRecipientFilter, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTAPlayer, ~CSingleUserRecipientFilter
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::OnUpgrade, __stack_chk_fail, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CRecipientFilter::~CRecipientFilter, _Unwind_Resume
void __fastcall CDOTA_Ability_Beastmaster_InnerBeast::OnUpgrade(CDOTA_Ability_Beastmaster_InnerBeast *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  unsigned __int16 v3; // dx
  int v4; // esi
  int v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  const CEntityInstance *m_pInstance; // r13
  CSingleUserRecipientFilter filter; // [rsp+10h] [rbp-160h] BYREF
  unsigned __int64 v10; // [rsp+148h] [rbp-28h]

  v10 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( Caster->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v3 = 0x7FFF;
    v4 = 0x7FFF;
  }
  else
  {
    v3 = Caster->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v4 = v3;
  }
  v5 = (Caster->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v3 & 0x7FFF;
  if ( (v5 + 2) > 1 )
  {
    v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9];
    if ( v6 != 0 )
    {
      v7 = &v6[v4 & 0x1FF];
      if ( v7 != 0 && v5 == v7->m_EHandle.m_Index )
      {
        m_pInstance = v7->m_pInstance;
        if ( v7->m_pInstance != 0 && (*(m_pInstance->_vptr_IHandleEntity + 140))(v7->m_pInstance) != 0 )
        {
          CRecipientFilter::CRecipientFilter(&filter);
          filter._vptr_IRecipientFilter = &off_3FCB0D0;
          CRecipientFilter::AddRecipient(&filter, m_pInstance);
          filter._vptr_IRecipientFilter = &off_3FCB0D0;
          CRecipientFilter::~CRecipientFilter(&filter);
        }
      }
    }
  }
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Modifier_Beastmaster_InnerBeast_Aura::~CDOTA_Modifier_Beastmaster_InnerBeast_Aura  (line 1037, @0x0000000002ac1e50, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Beastmaster_InnerBeast_Aura::~CDOTA_Modifier_Beastmaster_InnerBeast_Aura(
        CDOTA_Modifier_Beastmaster_InnerBeast_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_43E67D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Beastmaster_InnerBeast_Aura::~CDOTA_Modifier_Beastmaster_InnerBeast_Aura  (line 1037, @0x0000000002ac1e70, libserver.so)  // inlines: ~CDOTA_Modifier_Beastmaster_InnerBeast_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Beastmaster_InnerBeast_Aura::~CDOTA_Modifier_Beastmaster_InnerBeast_Aura(
        CDOTA_Modifier_Beastmaster_InnerBeast_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_43E67D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Beastmaster_InnerBeast_Aura::IsHidden  (line 1045, @0x0000000002ab82c0, libserver.so)
bool __fastcall CDOTA_Modifier_Beastmaster_InnerBeast_Aura::IsHidden(
        CDOTA_Modifier_Beastmaster_InnerBeast_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Beastmaster_InnerBeast_Aura::IsAura  (line 1047, @0x0000000002ab82d0, libserver.so)
bool __fastcall CDOTA_Modifier_Beastmaster_InnerBeast_Aura::IsAura(
        CDOTA_Modifier_Beastmaster_InnerBeast_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Beastmaster_InnerBeast_Aura::GetModifierAura  (line 1048, @0x0000000002ab82e0, libserver.so)
// strings: "modifier_beastmaster_inner_beast"
const char *__fastcall CDOTA_Modifier_Beastmaster_InnerBeast_Aura::GetModifierAura(
        CDOTA_Modifier_Beastmaster_InnerBeast_Aura *const this)
{
  return "modifier_beastmaster_inner_beast";
}


// CDOTA_Modifier_Beastmaster_InnerBeast_Aura::GetAuraSearchTeam  (line 1050, @0x0000000002ab82f0, libserver.so)
int __fastcall CDOTA_Modifier_Beastmaster_InnerBeast_Aura::GetAuraSearchTeam(
        CDOTA_Modifier_Beastmaster_InnerBeast_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Beastmaster_InnerBeast_Aura::GetAuraSearchType  (line 1051, @0x0000000002ab8300, libserver.so)
int __fastcall CDOTA_Modifier_Beastmaster_InnerBeast_Aura::GetAuraSearchType(
        CDOTA_Modifier_Beastmaster_InnerBeast_Aura *const this)
{
  return 19;
}


// CDOTA_Modifier_Beastmaster_InnerBeast_Aura::GetAuraSearchFlags  (line 1052, @0x0000000002ab8310, libserver.so)
int __fastcall CDOTA_Modifier_Beastmaster_InnerBeast_Aura::GetAuraSearchFlags(
        CDOTA_Modifier_Beastmaster_InnerBeast_Aura *const this)
{
  return 64;
}


// CDOTA_Modifier_Beastmaster_InnerBeast_Aura::GetAuraRadius  (line 1053, @0x0000000002ab8320, libserver.so)
int __fastcall CDOTA_Modifier_Beastmaster_InnerBeast_Aura::GetAuraRadius(
        CDOTA_Modifier_Beastmaster_InnerBeast_Aura *const this)
{
  return this->radius;
}


// CDOTA_Modifier_Beastmaster_InnerBeast_Aura::OnCreated  (line 1064, @0x0000000002aa9920, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Beastmaster_InnerBeast_Aura::OnCreated(
        CDOTA_Modifier_Beastmaster_InnerBeast_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
}


// CDOTA_Modifier_Beastmaster_InnerBeast_Aura::OnRefresh  (line 1071, @0x0000000002aa9ec0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Beastmaster_InnerBeast_Aura::OnRefresh(
        CDOTA_Modifier_Beastmaster_InnerBeast_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
}


// CDOTA_Modifier_Beastmaster_InnerBeast::~CDOTA_Modifier_Beastmaster_InnerBeast  (line 1080, @0x0000000002ac1e00, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Beastmaster_InnerBeast::~CDOTA_Modifier_Beastmaster_InnerBeast(
        CDOTA_Modifier_Beastmaster_InnerBeast *const this)
{
  this->_vptr_CDOTA_Buff = &off_43E6AF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Beastmaster_InnerBeast::~CDOTA_Modifier_Beastmaster_InnerBeast  (line 1080, @0x0000000002ac1e20, libserver.so)  // inlines: ~CDOTA_Modifier_Beastmaster_InnerBeast
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Beastmaster_InnerBeast::~CDOTA_Modifier_Beastmaster_InnerBeast(
        CDOTA_Modifier_Beastmaster_InnerBeast *const this)
{
  this->_vptr_CDOTA_Buff = &off_43E6AF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Beastmaster_InnerBeast::GetAttributes  (line 1091, @0x0000000002ac47a0, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_Beastmaster_InnerBeast::GetAttributes(CDOTA_Modifier_Beastmaster_InnerBeast *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 4;
}


// CDOTA_Modifier_Beastmaster_InnerBeast::OnCreated  (line 1102, @0x0000000002aa9980, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Beastmaster_InnerBeast::OnCreated(
        CDOTA_Modifier_Beastmaster_InnerBeast *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_attack_speed", -1, 0);
  else
    this->bonus_attack_speed = 0;
}


// CDOTA_Modifier_Beastmaster_InnerBeast::OnRefresh  (line 1109, @0x0000000002aa9b00, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Beastmaster_InnerBeast::OnRefresh(
        CDOTA_Modifier_Beastmaster_InnerBeast *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_attack_speed", -1, 0);
  else
    this->bonus_attack_speed = 0;
}


// CDOTA_Modifier_Beastmaster_InnerBeast::DeclareFunctions  (line 1116, @0x0000000002a77680, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Beastmaster_InnerBeast::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Beastmaster_InnerBeast::DeclareFunctions(
        CDOTA_Modifier_Beastmaster_InnerBeast *const this)
{
  this->m_Functions[24].__pfn = CDOTA_Modifier_Beastmaster_InnerBeast::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
}


// CDOTA_Modifier_Beastmaster_InnerBeast::GetModifierAttackSpeedBonus_Constant  (line 1123, @0x0000000002a7d230, libserver.so)
// calls: CDOTA_Buff::GetCaster
ModifierVariant_t __fastcall CDOTA_Modifier_Beastmaster_InnerBeast::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Beastmaster_InnerBeast *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetCaster(this) != 0
    && (result.m_szVal = CDOTA_Buff::GetCaster(this), *&result.m_eType = 1, (result.m_szVal[2787] & 0x10) != 0) )
  {
    result.m_szVal = 0;
  }
  else
  {
    *v3.m128i_i32 = this->bonus_attack_speed;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  }
  return result;
}


// CDOTA_Ability_Beastmaster_PrimalRoar::~CDOTA_Ability_Beastmaster_PrimalRoar  (line 1135, @0x0000000002ac5230, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Beastmaster_PrimalRoar::~CDOTA_Ability_Beastmaster_PrimalRoar(
        CDOTA_Ability_Beastmaster_PrimalRoar *const this)
{
  this->_vptr_IHandleEntity = &off_43E6E50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Beastmaster_PrimalRoar::~CDOTA_Ability_Beastmaster_PrimalRoar  (line 1135, @0x0000000002ac5250, libserver.so)  // inlines: ~CDOTA_Ability_Beastmaster_PrimalRoar
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Beastmaster_PrimalRoar::~CDOTA_Ability_Beastmaster_PrimalRoar(
        CDOTA_Ability_Beastmaster_PrimalRoar *const this)
{
  this->_vptr_IHandleEntity = &off_43E6E50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Beastmaster_PrimalRoar::Schema_DynamicBinding  (line 1137, @0x0000000002ab8330, libserver.so)
// globals: CDOTA_Ability_Beastmaster_PrimalRoar::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Beastmaster_PrimalRoar::Schema_DynamicBinding(
        const CDOTA_Ability_Beastmaster_PrimalRoar *const this)
{
  return CDOTA_Ability_Beastmaster_PrimalRoar::s_pSchemaBinding;
}


// CDOTA_Ability_Beastmaster_PrimalRoar::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1137, @0x0000000002ab8340, libserver.so)
// globals: CDOTA_Ability_Beastmaster_PrimalRoar::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Beastmaster_PrimalRoar::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Beastmaster_PrimalRoar::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Beastmaster_PrimalRoar::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Beastmaster_PrimalRoar::CEntityInstanceEntityClass::DestructInstance  (line 1137, @0x0000000002ab8350, libserver.so)  // inlines: Destruct<CDOTA_Ability_Beastmaster_PrimalRoar>
void __fastcall CDOTA_Ability_Beastmaster_PrimalRoar::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Beastmaster_PrimalRoar::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Beastmaster_PrimalRoar::CEntityInstanceEntityClass::FreeInstance  (line 1137, @0x0000000002ab8370, libserver.so)
void __fastcall CDOTA_Ability_Beastmaster_PrimalRoar::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Beastmaster_PrimalRoar::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Beastmaster_PrimalRoar::CEntityInstanceEntityClass::CanAllocate  (line 1137, @0x0000000002ab8390, libserver.so)
bool __fastcall CDOTA_Ability_Beastmaster_PrimalRoar::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Beastmaster_PrimalRoar::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Beastmaster_PrimalRoar::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1137, @0x0000000002ab83a0, libserver.so)
// globals: CDOTA_Ability_Beastmaster_PrimalRoar::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Beastmaster_PrimalRoar::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Beastmaster_PrimalRoar::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Beastmaster_PrimalRoar::s_pSchemaBinding;
}


// CDOTA_Ability_Beastmaster_PrimalRoar::CEntityInstanceEntityClass::AllocateInstance  (line 1137, @0x0000000002abea40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Beastmaster_PrimalRoar::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Beastmaster_PrimalRoar::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 944);
  memset(v1, 0, 0x3B0u);
  return v1;
}


// CDOTA_Ability_Beastmaster_PrimalRoar::CEntityInstanceEntityClass::ConstructInstance  (line 1137, @0x0000000002ac2870, libserver.so)  // inlines: CDOTA_Ability_Beastmaster_PrimalRoar, Construct<CDOTA_Ability_Beastmaster_PrimalRoar>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Beastmaster_PrimalRoar::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Beastmaster_PrimalRoar::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43E6E50;
  }
  return p;
}


// CDOTA_Ability_Beastmaster_PrimalRoar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1137, @0x0000000002acbc00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Beastmaster_PrimalRoar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Beastmaster_PrimalRoar::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Beastmaster_PrimalRoar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1137, @0x0000000002acbc20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Beastmaster_PrimalRoar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Beastmaster_PrimalRoar::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Beastmaster_PrimalRoar::GetEntityClassInternal  (line 1137, @0x0000000002ad92a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "beastmaster_primal_roar", "CDOTA_Ability_Beastmaster_PrimalRoar"
// globals: `guard variable for'CDOTA_Ability_Beastmaster_PrimalRoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_PrimalRoarClass, CDOTA_Ability_Beastmaster_PrimalRoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_PrimalRoarClass, __dso_handle, CDOTA_Ability_Beastmaster_PrimalRoar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Beastmaster_PrimalRoar::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_PrimalRoarClassInfo, CDOTA_Ability_Beastmaster_PrimalRoar::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_PrimalRoarClassInfo
CEntityClass *__cdecl CDOTA_Ability_Beastmaster_PrimalRoar::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Beastmaster_PrimalRoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_PrimalRoarClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Beastmaster_PrimalRoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_PrimalRoarClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Beastmaster_PrimalRoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_PrimalRoarClass);
    CDOTA_Ability_Beastmaster_PrimalRoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_PrimalRoarClass._vptr_CEntityClass = off_43E6DD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Beastmaster_PrimalRoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_PrimalRoarClass);
    __cxa_atexit(
      CDOTA_Ability_Beastmaster_PrimalRoar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Beastmaster_PrimalRoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_PrimalRoarClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Beastmaster_PrimalRoarClass != 0 )
    return &CDOTA_Ability_Beastmaster_PrimalRoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_PrimalRoarClass;
  if ( `guard variable for'CDOTA_Ability_Beastmaster_PrimalRoar::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_PrimalRoarClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Beastmaster_PrimalRoar::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_PrimalRoarClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Beastmaster_PrimalRoar::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_PrimalRoarClassInfo,
      "CDOTA_Ability_Beastmaster_PrimalRoar",
      "beastmaster_primal_roar",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Beastmaster_PrimalRoar::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_PrimalRoarClassInfo);
  }
  CDOTA_Ability_Beastmaster_PrimalRoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_PrimalRoarClass.m_pClassInfo = &CDOTA_Ability_Beastmaster_PrimalRoar::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_PrimalRoarClassInfo;
  CDOTA_Ability_Beastmaster_PrimalRoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_PrimalRoarClass.m_pBaseClassInfo = CDOTA_Ability_Beastmaster_PrimalRoar::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_PrimalRoarClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Beastmaster_PrimalRoarClass = &CDOTA_Ability_Beastmaster_PrimalRoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_PrimalRoarClass;
  CDOTA_Ability_Beastmaster_PrimalRoar::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Beastmaster_PrimalRoarClassInfo.m_pClass = &CDOTA_Ability_Beastmaster_PrimalRoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_PrimalRoarClass;
  CDOTA_Ability_Beastmaster_PrimalRoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_PrimalRoarClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Beastmaster_PrimalRoarClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Beastmaster_PrimalRoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Beastmaster_PrimalRoarClass;
}


// CDOTA_Ability_Beastmaster_PrimalRoar::GetStolenActivityModifier  (line 1146, @0x0000000002ab83b0, libserver.so)
const char *__fastcall CDOTA_Ability_Beastmaster_PrimalRoar::GetStolenActivityModifier(
        CDOTA_Ability_Beastmaster_PrimalRoar *const this)
{
  return "roar";
}


// CDOTA_Ability_Beastmaster_PrimalRoar::YouForgotToImplementOrDeclareServerClass  (line 1163, @0x0000000002a776a0, libserver.so)
int __fastcall CDOTA_Ability_Beastmaster_PrimalRoar::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Beastmaster_PrimalRoar *const this)
{
  return 0;
}


// CDOTA_Ability_Beastmaster_PrimalRoar::GetServerClass  (line 1163, @0x0000000002a89f70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Beastmaster_PrimalRoar::GetServerClass(
        CDOTA_Ability_Beastmaster_PrimalRoar *const this)
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


// CDOTA_Ability_Beastmaster_PrimalRoar::OnSpellStart  (line 1172, @0x0000000002aa4920, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, DotProduct, Get, GetAbilityData, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsRealHero, IsValid, LookupEntity, StopFacing, ToDOTABaseNPC, VectorAdd, VectorMultiply, VectorNormalize2D, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator-, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, ApplyDamage, CDOTA_BaseNPC::AddNewModifier, CBaseEntity::GetAbsOrigin, VectorNormalize, CDOTABaseAbility::CreateAbilityParticleEffect (30 total)
// strings: "side_damage", "path_width", "push_duration", "push_distance", "primal_roar_slow", "modifier_stunned" (15 total)
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_Beastmaster_PrimalRoar::OnSpellStart(CDOTA_Ability_Beastmaster_PrimalRoar *const this)
{
  CDOTA_BaseNPC *CursorTarget; // rax
  float v3; // xmm1_4
  float v4; // xmm1_4
  __m128i v5; // xmm7
  float v6; // ebx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  const Vector *AbsOrigin; // rbx
  const Vector *v11; // rax
  __m128i x_low; // xmm2
  __m128i y_low; // xmm1
  __m128i z_low; // xmm0
  float v15; // r14d
  float v16; // r12d
  CDOTA_BaseNPC *v17; // rax
  const Vector *v18; // rax
  vec_t v19; // xmm2_4
  vec_t v20; // xmm1_4
  vec_t v21; // xmm0_4
  __m128i v22; // xmm0
  float v23; // r15d
  CDOTA_BaseNPC *v24; // rax
  const Vector *v25; // r12
  CDOTA_BaseNPC *v26; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  const Vector *v28; // r12
  CDOTA_ParticleManager *v29; // rax
  CDOTA_ParticleManager *v30; // rax
  CDOTA_ParticleManager *v31; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // ebx
  CDOTA_BaseNPC *v34; // rax
  float v35; // xmm3_4
  CDOTA_BaseNPC *v36; // rax
  __int64 v37; // rbx
  CHandle<CBaseEntity> *v38; // rdx
  uint32 m_Index; // eax
  __int16 v40; // cx
  CEntityIdentity *v41; // rdx
  CEntityIdentity *v42; // rdx
  CEntityInstance *m_pInstance; // r12
  CDOTA_BaseNPC *v44; // rax
  const Vector *v45; // r15
  const Vector *v46; // rax
  float v47; // xmm3_4
  float v48; // xmm2_4
  float v49; // xmm1_4
  float v50; // xmm0_4
  float v51; // xmm1_4
  float v52; // xmm1_4
  float v53; // xmm1_4
  CDOTA_BaseNPC *v54; // rax
  CDOTA_BaseNPC *v55; // r15
  CDOTA_ParticleManager *v56; // rax
  const Vector *v57; // r15
  CDOTA_ParticleManager *v58; // rax
  CDOTA_ParticleManager *v59; // rax
  CDOTA_ParticleManager *v60; // rax
  CDOTA_BaseNPC *v61; // rax
  CDOTA_BaseNPC_Hero *v62; // rax
  CDOTA_BaseNPC *v63; // rax
  CDOTA_BaseNPC_Hero *v64; // rbx
  CDOTA_BaseNPC *v65; // rax
  CDOTA_BaseNPC_Hero *v66; // rax
  CDOTA_BaseNPC *v67; // rax
  __m128i v68; // xmm7
  float v69; // r15d
  CDOTA_BaseNPC *v70; // rax
  double v71; // xmm0_8
  CDOTA_BaseNPC_Hero *v72; // r12
  CDOTA_BaseNPC *v73; // rax
  CDOTA_BaseNPC_Hero *v74; // rax
  int nHeroesKilled; // [rsp+40h] [rbp-120h]
  int nFXIndexB; // [rsp+44h] [rbp-11Ch]
  CDOTA_BaseNPC *pTarget; // [rsp+58h] [rbp-108h]
  Vector vToEntity; // [rsp+60h] [rbp-100h] BYREF
  Vector vMidpoint; // [rsp+70h] [rbp-F0h] BYREF
  Vector vOffLine; // [rsp+80h] [rbp-E0h] BYREF
  QAngle newVictimAngles; // [rsp+90h] [rbp-D0h] BYREF
  Vector CursorPosition; // [rsp+A0h] [rbp-C0h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hPushEntities; // [rsp+B0h] [rbp-B0h] BYREF
  KeyValues kv_slow; // [rsp+D0h] [rbp-90h] BYREF
  KeyValues kv_stun; // [rsp+F0h] [rbp-70h] BYREF
  KeyValues kv_push; // [rsp+110h] [rbp-50h] BYREF
  unsigned __int64 v87; // [rsp+128h] [rbp-38h]

  v87 = __readfsqword(0x28u);
  this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  this->slow_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "slow_duration", -1, 0);
  this->side_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "side_damage", -1, 0);
  this->damage_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_radius", -1, 0);
  this->path_width = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "path_width", -1, 0);
  this->push_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "push_duration", -1, 0);
  this->push_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "push_distance", -1, 0);
  this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  pTarget = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
  {
    KeyValues::KeyValues(&kv_slow, "primal_roar_slow");
    KeyValues::SetFloat(&kv_slow, "duration", v3);
    KeyValues::KeyValues(&kv_stun, "primal_roar");
    KeyValues::SetFloat(&kv_stun, "duration", v4);
    *v5.m128i_i32 = this->damage;
    v6 = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
    Caster = CDOTABaseAbility::GetCaster(this);
    ApplyDamage(Caster, pTarget, this, v6, 2, 0);
    v8 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(pTarget, v8, this, "modifier_stunned", &kv_stun, 0);
    if ( (pTarget->m_iUnitType & 1) == 0
      || pTarget->m_bIsIllusion.m_Value
      || (*(pTarget->_vptr_IHandleEntity + 408))(pTarget) != 0 )
    {
      nHeroesKilled = 0;
    }
    else
    {
      v64 = ToDOTABaseNPCRealHero(pTarget);
      v65 = CDOTABaseAbility::GetCaster(this);
      v66 = ToDOTABaseNPCRealHero(v65);
      EconEntity_OnOwnerKillEaterEvent(
        v66,
        v64,
        kill_eater_event_t::kKillEaterEventType_Beastmaster_RoarKills,
        1,
        INVALID_ITEM_DEF_INDEX);
      nHeroesKilled = 1;
    }
    v9 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
    v11 = CBaseEntity::GetAbsOrigin(pTarget);
    x_low = LODWORD(v11->x);
    y_low = LODWORD(v11->y);
    z_low = LODWORD(v11->z);
    *y_low.m128i_i32 = *y_low.m128i_i32 - AbsOrigin->y;
    *z_low.m128i_i32 = *z_low.m128i_i32 - AbsOrigin->z;
    vToEntity.x = *x_low.m128i_i32 - AbsOrigin->x;
    LODWORD(vToEntity.y) = y_low.m128i_i32[0];
    LODWORD(vToEntity.z) = z_low.m128i_i32[0];
    *x_low.m128i_i32 = vToEntity.x * 0.5;
    *y_low.m128i_i32 = *y_low.m128i_i32 * 0.5;
    *z_low.m128i_i32 = *z_low.m128i_i32 * 0.5;
    v15 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
    LODWORD(AbsOrigin) = _mm_cvtsi128_si32(y_low);
    v16 = COERCE_FLOAT(_mm_cvtsi128_si32(z_low));
    v17 = CDOTABaseAbility::GetCaster(this);
    v18 = CBaseEntity::GetAbsOrigin(v17);
    v19 = v15 + v18->x;
    v20 = *&AbsOrigin + v18->y;
    v21 = v16 + v18->z;
    vToEntity.z = 0.0;
    vMidpoint.x = v19;
    vMidpoint.y = v20;
    vMidpoint.z = v21;
    *v22.m128i_i32 = VectorNormalize(&vToEntity);
    v23 = COERCE_FLOAT(_mm_cvtsi128_si32(v22));
    LODWORD(AbsOrigin) = CDOTABaseAbility::CreateAbilityParticleEffect(
                           this,
                           "particles/units/heroes/hero_beastmaster/beastmaster_primal_roar.vpcf",
                           2,
                           0,
                           0);
    v24 = CDOTABaseAbility::GetCaster(this);
    v25 = CBaseEntity::GetAbsOrigin(v24);
    v26 = CDOTABaseAbility::GetCaster(this);
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(
      ParticleManager,
      AbsOrigin,
      0,
      v26,
      5,
      "attach_cast4_primal_roar",
      *v25,
      1);
    v28 = CBaseEntity::GetAbsOrigin(pTarget);
    v29 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v29, AbsOrigin, 1, pTarget, 5, "attach_hitloc", *v28, 1);
    v30 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v30, AbsOrigin, 2, pTarget, 1, 0, vec3_invalid, 1);
    v31 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v31, AbsOrigin);
    m_pAbilityData = this->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(this, 0);
      m_pAbilityData = this->m_pAbilityData;
    }
    m_iAbilityID = m_pAbilityData->m_iAbilityID;
    CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
    v34 = CDOTABaseAbility::GetCaster(this);
    CDOTAGamerules::SendProjectionAbilityMessage(
      g_pGameRules,
      v34,
      0,
      m_iAbilityID,
      0,
      0,
      *&CursorPosition.x,
      CursorPosition.z,
      -1.0,
      v35);
    hPushEntities.m_Size = 0;
    hPushEntities.m_Memory.m_pMemory = 0;
    hPushEntities.m_Memory.m_nAllocationCount = 0;
    hPushEntities.m_Memory.m_nGrowSize = 0;
    v36 = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(v36->m_iTeamNum.m_Value, &vMidpoint, pTarget, v23, &hPushEntities, 2, 19, 16, 0, 0);
    if ( hPushEntities.m_Size > 0 )
    {
      v37 = 0;
      do
      {
        while ( 1 )
        {
          v38 = &hPushEntities.m_Memory.m_pMemory[v37];
          m_Index = v38->m_Index;
          if ( v38->m_Index + 2 > 1 )
          {
            v40 = v38->m_Index;
            v41 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v38->m_Index) >> 9) & 0x3F];
            if ( v41 != 0 )
            {
              v42 = &v41[v40 & 0x1FF];
              if ( v42 != 0 && m_Index == v42->m_EHandle.m_Index )
              {
                m_pInstance = v42->m_pInstance;
                if ( v42->m_pInstance != 0
                  && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                  && pTarget != m_pInstance
                  && CDOTABaseAbility::GetCaster(this) != m_pInstance )
                {
                  v44 = CDOTABaseAbility::GetCaster(this);
                  v45 = CBaseEntity::GetAbsOrigin(v44);
                  v46 = CBaseEntity::GetAbsOrigin(m_pInstance);
                  v47 = v46->x - v45->x;
                  v48 = v46->y - v45->y;
                  v49 = v46->z - v45->z;
                  vOffLine.z = 0.0;
                  v50 = ((v47 * vToEntity.x) + (v48 * vToEntity.y)) + (v49 * vToEntity.z);
                  vOffLine.x = v47 - (vToEntity.x * v50);
                  vOffLine.y = v48 - (v50 * vToEntity.y);
                  if ( this->damage_radius > VectorNormalize(&vOffLine) )
                    break;
                }
              }
            }
          }
          if ( ++v37 >= hPushEntities.m_Size )
            goto LABEL_22;
        }
        CBaseEntity::GetAbsOrigin(m_pInstance);
        KeyValues::KeyValues(&kv_push, "modifier_beastmaster_prima_roar_push");
        KeyValues::SetFloat(&kv_push, "duration", v51);
        KeyValues::SetFloat(&kv_push, "destination_x", v52);
        KeyValues::SetFloat(&kv_push, "destination_y", v53);
        v54 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(m_pInstance, v54, this, "modifier_beastmaster_prima_roar_push", &kv_push, 0);
        newVictimAngles = *CBaseEntity::GetAbsAngles(m_pInstance);
        newVictimAngles.y = UTIL_VecToYaw(&vOffLine);
        CBaseEntity::SetAbsAngles(m_pInstance, &newVictimAngles);
        *((*(m_pInstance->_vptr_IHandleEntity + 376))(m_pInstance) + 176) = 0;
        nFXIndexB = CDOTABaseAbility::CreateAbilityParticleEffect(
                      this,
                      "particles/units/heroes/hero_beastmaster/beastmaster_primal_target.vpcf",
                      2,
                      0,
                      0);
        v55 = CDOTABaseAbility::GetCaster(this);
        v56 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v56, nFXIndexB, 0, v55, 1, 0, vec3_invalid, 1);
        v57 = CBaseEntity::GetAbsOrigin(m_pInstance);
        v58 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v58, nFXIndexB, 1, m_pInstance, 5, "attach_hitloc", *v57, 1);
        v59 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v59, nFXIndexB, 2, m_pInstance, 1, 0, vec3_invalid, 1);
        v60 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControl(v60, nFXIndexB, 3, *&vOffLine.x, vOffLine.z);
        if ( (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 2) == 0 )
        {
          v67 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(m_pInstance, v67, this, "modifier_beastmaster_primal_roar_slow", &kv_slow, 0);
          if ( (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 2) == 0 )
          {
            *v68.m128i_i32 = this->side_damage;
            v69 = COERCE_FLOAT(_mm_cvtsi128_si32(v68));
            v70 = CDOTABaseAbility::GetCaster(this);
            v71 = ApplyDamage(v70, m_pInstance, this, v69, 2, 0);
            if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
              && LOBYTE(m_pInstance[71].m_pEntity) == 0
              && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance, v71) == 0 )
            {
              ++nHeroesKilled;
              v72 = ToDOTABaseNPCRealHero(m_pInstance);
              v73 = CDOTABaseAbility::GetCaster(this);
              v74 = ToDOTABaseNPCRealHero(v73);
              EconEntity_OnOwnerKillEaterEvent(
                v74,
                v72,
                kill_eater_event_t::kKillEaterEventType_Beastmaster_RoarKills,
                1,
                INVALID_ITEM_DEF_INDEX);
            }
          }
        }
        KeyValues::~KeyValues(&kv_push);
        ++v37;
      }
      while ( v37 < hPushEntities.m_Size );
LABEL_22:
      if ( nHeroesKilled > 1 )
      {
        v61 = CDOTABaseAbility::GetCaster(this);
        v62 = ToDOTABaseNPCRealHero(v61);
        EconEntity_OnOwnerKillEaterEvent(
          v62,
          0,
          kill_eater_event_t::kKillEaterEventType_Beastmaster_RoarMultiKills,
          1,
          INVALID_ITEM_DEF_INDEX);
      }
    }
    v63 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v63, "Hero_Beastmaster.Primal_Roar", 0.0, 0, 0);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hPushEntities);
    KeyValues::~KeyValues(&kv_stun);
    KeyValues::~KeyValues(&kv_slow);
  }
}


// CDOTA_Ability_Beastmaster_PrimalRoar::GetAbilityDamageToTargetOverInterval  (line 1288, @0x0000000002aa06b0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Beastmaster_PrimalRoar::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Beastmaster_PrimalRoar *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 1);
    return (LevelSpecialValue * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Ability_Beastmaster_PrimalRoar::GetCooldown  (line 1298, @0x0000000002a9b190, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Beastmaster_PrimalRoar::GetCooldown(
        CDOTA_Ability_Beastmaster_PrimalRoar *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "cooldown_scepter", -1, 0);
  else
    return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Ability_Beastmaster_PrimalRoar::GetCastRange  (line 1305, @0x0000000002aa0710, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCastRange, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "cast_range_scepter"
int __fastcall CDOTA_Ability_Beastmaster_PrimalRoar::GetCastRange(
        CDOTA_Ability_Beastmaster_PrimalRoar *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "cast_range_scepter", -1, 0);
  else
    return CDOTABaseAbility::GetCastRange(this, &vec3_origin, 0);
}


// CDOTA_Ability_Beastmaster_PrimalRoar::GetStunDuration  (line 1312, @0x0000000002a9b1e0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Beastmaster_PrimalRoar::GetStunDuration(
        CDOTA_Ability_Beastmaster_PrimalRoar *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 1);
}


// CDOTA_Modifier_Beastmaster_PrimalRoar_Slow::~CDOTA_Modifier_Beastmaster_PrimalRoar_Slow  (line 1321, @0x0000000002ac1db0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Beastmaster_PrimalRoar_Slow::~CDOTA_Modifier_Beastmaster_PrimalRoar_Slow(
        CDOTA_Modifier_Beastmaster_PrimalRoar_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_43E7910;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Beastmaster_PrimalRoar_Slow::~CDOTA_Modifier_Beastmaster_PrimalRoar_Slow  (line 1321, @0x0000000002ac1dd0, libserver.so)  // inlines: ~CDOTA_Modifier_Beastmaster_PrimalRoar_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Beastmaster_PrimalRoar_Slow::~CDOTA_Modifier_Beastmaster_PrimalRoar_Slow(
        CDOTA_Modifier_Beastmaster_PrimalRoar_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_43E7910;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Beastmaster_PrimalRoar_Slow::IsDebuff  (line 1326, @0x0000000002ab83c0, libserver.so)
bool __fastcall CDOTA_Modifier_Beastmaster_PrimalRoar_Slow::IsDebuff(
        CDOTA_Modifier_Beastmaster_PrimalRoar_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_Beastmaster_PrimalRoar_Slow::OnCreated  (line 1345, @0x0000000002aaa550, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "slow_movement_speed_pct", "slow_attack_speed_pct"
void __fastcall CDOTA_Modifier_Beastmaster_PrimalRoar_Slow::OnCreated(
        CDOTA_Modifier_Beastmaster_PrimalRoar_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->slow_movement_speed_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                      Ability,
                                      "slow_movement_speed_pct",
                                      -1,
                                      0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->slow_attack_speed_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "slow_attack_speed_pct", -1, 0);
      return;
    }
  }
  else
  {
    this->slow_movement_speed_pct = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->slow_attack_speed_pct = 0;
}


// CDOTA_Modifier_Beastmaster_PrimalRoar_Slow::OnRefresh  (line 1353, @0x0000000002aaa430, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "slow_movement_speed_pct", "slow_attack_speed_pct"
void __fastcall CDOTA_Modifier_Beastmaster_PrimalRoar_Slow::OnRefresh(
        CDOTA_Modifier_Beastmaster_PrimalRoar_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->slow_movement_speed_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                      Ability,
                                      "slow_movement_speed_pct",
                                      -1,
                                      0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->slow_attack_speed_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "slow_attack_speed_pct", -1, 0);
      return;
    }
  }
  else
  {
    this->slow_movement_speed_pct = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->slow_attack_speed_pct = 0;
}


// CDOTA_Modifier_Beastmaster_PrimalRoar_Slow::DeclareFunctions  (line 1361, @0x0000000002a776b0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Beastmaster_PrimalRoar_Slow::DeclareFunctions(
        CDOTA_Modifier_Beastmaster_PrimalRoar_Slow *const this)
{
  this->m_Functions[13].__pfn = (&stru_10 + 697);
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__pfn = (&stru_10 + 705);
  this->m_Functions[24].__delta = 0;
}


// CDOTA_Modifier_Beastmaster_PrimalRoar_Slow::GetModifierMoveSpeedBonus_Percentage  (line 1369, @0x0000000002a776f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Beastmaster_PrimalRoar_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Beastmaster_PrimalRoar_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->slow_movement_speed_pct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Beastmaster_PrimalRoar_Slow::GetModifierAttackSpeedBonus_Constant  (line 1376, @0x0000000002a77710, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Beastmaster_PrimalRoar_Slow::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Beastmaster_PrimalRoar_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->slow_attack_speed_pct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Beastmaster_PrimalRoar_Push::~CDOTA_Modifier_Beastmaster_PrimalRoar_Push  (line 1385, @0x0000000002ac1d40, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Beastmaster_PrimalRoar_Push::~CDOTA_Modifier_Beastmaster_PrimalRoar_Push(
        CDOTA_Modifier_Beastmaster_PrimalRoar_Push *const this)
{
  this->_vptr_CDOTA_Buff = &off_43E7C50;
  this->_vptr_CHorizontalMotionController = &off_43E7F40;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Beastmaster_PrimalRoar_Push::~CDOTA_Modifier_Beastmaster_PrimalRoar_Push  (line 1385, @0x0000000002ac1d70, libserver.so)  // inlines: ~CDOTA_Modifier_Beastmaster_PrimalRoar_Push
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Beastmaster_PrimalRoar_Push::~CDOTA_Modifier_Beastmaster_PrimalRoar_Push(
        CDOTA_Modifier_Beastmaster_PrimalRoar_Push *const this)
{
  this->_vptr_CDOTA_Buff = &off_43E7C50;
  this->_vptr_CHorizontalMotionController = &off_43E7F40;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Beastmaster_PrimalRoar_Push::IsHidden  (line 1394, @0x0000000002ab83d0, libserver.so)
bool __fastcall CDOTA_Modifier_Beastmaster_PrimalRoar_Push::IsHidden(
        CDOTA_Modifier_Beastmaster_PrimalRoar_Push *const this)
{
  return 1;
}


// CDOTA_Modifier_Beastmaster_PrimalRoar_Push::IsHorizontalMotionValidToApply  (line 1400, @0x0000000002ab83e0, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Beastmaster_PrimalRoar_Push::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_Beastmaster_PrimalRoar_Push *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Beastmaster_PrimalRoar_Push::IsMotionController  (line 1402, @0x0000000002ab8410, libserver.so)
bool __fastcall CDOTA_Modifier_Beastmaster_PrimalRoar_Push::IsMotionController(
        CDOTA_Modifier_Beastmaster_PrimalRoar_Push *const this)
{
  return 1;
}


// CDOTA_Modifier_Beastmaster_PrimalRoar_Push::OnCreated  (line 1415, @0x0000000002a7b020, libserver.so)  // inlines: VectorSubtract, operator*=, operator-, operator=
// calls: KeyValues::GetFloat, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, VectorNormalize, CDOTALocomotor::ApplyHorizontalMotionController, CDOTA_Buff::Destroy
// strings: "destination_x", "destination_y"
void __fastcall CDOTA_Modifier_Beastmaster_PrimalRoar_Push::OnCreated(
        CDOTA_Modifier_Beastmaster_PrimalRoar_Push *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4
  float v5; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  vec_t v8; // xmm0_4
  vec_t v9; // xmm1_4
  __m128i v10; // xmm0
  float v11; // xmm2_4
  vec_t v12; // xmm0_4
  float y; // xmm1_4
  CDOTA_BaseNPC *v14; // rax
  CDOTALocomotor *v15; // rax
  float fDestinationX; // [rsp+0h] [rbp-20h]
  float fDestinationY; // [rsp+4h] [rbp-1Ch]

  fDestinationX = KeyValues::GetFloat(pKV, "destination_x", v2);
  fDestinationY = KeyValues::GetFloat(pKV, "destination_y", v5);
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v8 = fDestinationY - AbsOrigin->y;
  v9 = fDestinationX - AbsOrigin->x;
  this->m_vVelocity.z = 0.0;
  this->m_vVelocity.y = v8;
  this->m_vVelocity.x = v9;
  *v10.m128i_i32 = VectorNormalize(&this->m_vVelocity);
  v11 = COERCE_FLOAT(_mm_cvtsi128_si32(v10)) / (*(this->_vptr_CDOTA_Buff + 31))(this);
  v12 = v11 * this->m_vVelocity.z;
  this->m_vVelocity.x = this->m_vVelocity.x * v11;
  y = this->m_vVelocity.y;
  this->m_vVelocity.z = v12;
  this->m_vVelocity.y = y * v11;
  v14 = CDOTA_Buff::GetParent(this);
  v15 = (*(v14->_vptr_IHandleEntity + 376))(v14);
  if ( !CDOTALocomotor::ApplyHorizontalMotionController(v15, &this->CHorizontalMotionController, 0) )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Beastmaster_PrimalRoar_Push::OnDestroy  (line 1436, @0x0000000002a7b150, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::RemoveHorizontalMotionController
void __fastcall CDOTA_Modifier_Beastmaster_PrimalRoar_Push::OnDestroy(
        CDOTA_Modifier_Beastmaster_PrimalRoar_Push *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v3; // rax

  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveHorizontalMotionController(v3, &this->CHorizontalMotionController);
}


// CDOTA_Modifier_Beastmaster_PrimalRoar_Push::UpdateHorizontalMotion  (line 1445, @0x0000000002a7a460, libserver.so)  // inlines: VectorAdd, VectorMultiply, operator*, operator+
// calls: CBaseEntity::GetAbsOrigin, CBaseEntity::SetAbsOrigin
void __fastcall CDOTA_Modifier_Beastmaster_PrimalRoar_Push::UpdateHorizontalMotion(
        CDOTA_Modifier_Beastmaster_PrimalRoar_Push *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  const Vector *AbsOrigin; // rax
  vec_t v6; // xmm1_4
  vec_t v7; // xmm0_4
  float v8; // [rsp+4h] [rbp-2Ch]
  float v9; // [rsp+8h] [rbp-28h]
  float v10; // [rsp+Ch] [rbp-24h]
  Vector vOrigin; // [rsp+10h] [rbp-20h] BYREF

  v8 = this->m_vVelocity.x * a3;
  v9 = this->m_vVelocity.y * a3;
  v10 = a3 * this->m_vVelocity.z;
  AbsOrigin = CBaseEntity::GetAbsOrigin(me);
  v6 = v8 + AbsOrigin->x;
  v7 = v10 + AbsOrigin->z;
  vOrigin.y = v9 + AbsOrigin->y;
  vOrigin.x = v6;
  vOrigin.z = v7;
  CBaseEntity::SetAbsOrigin(me, &vOrigin);
}


// CDOTA_Modifier_Beastmaster_PrimalRoar_Push::OnHorizontalMotionInterrupted  (line 1454, @0x0000000002a79d00, libserver.so)
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Beastmaster_PrimalRoar_Push::OnHorizontalMotionInterrupted(
        CDOTA_Modifier_Beastmaster_PrimalRoar_Push *const this)
{
  CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Beastmaster_PrimalRoar_Push::CheckState  (line 1463, @0x0000000002a77730, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Beastmaster_PrimalRoar_Push::CheckState(
        CDOTA_Modifier_Beastmaster_PrimalRoar_Push *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x20uLL;
  buffState->m_nDisabledStateMask &= ~0x20uLL;
}


