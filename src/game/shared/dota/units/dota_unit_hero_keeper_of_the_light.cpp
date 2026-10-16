// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_keeper_of_the_light.cpp:43
class CDOTA_Unit_Hero_KeeperOfTheLight : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_KeeperOfTheLight(CDOTA_Unit_Hero_KeeperOfTheLight &);
	CDOTA_Unit_Hero_KeeperOfTheLight(CDOTA_Unit_Hero_KeeperOfTheLight &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool HasFlyingVision();
	virtual void GainedModifier(CDOTA_Buff *);
	virtual bool LostModifier(CDOTA_Buff *);
	virtual bool OnLoadState(KeyValues *);
	CDOTA_Unit_Hero_KeeperOfTheLight();
	virtual ~CDOTA_Unit_Hero_KeeperOfTheLight();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[445] HasFlyingVision
	// vtable[449] GainedModifier
	// vtable[450] LostModifier
	// vtable[467] OnLoadState
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_keeper_of_the_light.cpp:61
class C_CDOTA_Unit_Hero_KeeperOfTheLight_MapInstall {
	C_CDOTA_Unit_Hero_KeeperOfTheLight_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_keeper_of_the_light.cpp:152
class CDOTA_Ability_KeeperOfTheLight_Illuminate : public CDOTABaseAbility {
public:

private:

	float m_fStartTime;  // +0x390
	float m_fPower;  // +0x394
	int m_iProjectile;  // +0x398
	int m_nFXIndex;  // +0x39c
	int m_nFXIndexB;  // +0x3a0
	float damage_per_second;  // +0x3b0
	bool m_bStarted;  // +0x3b4
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
	CDOTA_Ability_KeeperOfTheLight_Illuminate(CDOTA_Ability_KeeperOfTheLight_Illuminate &);
	CDOTA_Ability_KeeperOfTheLight_Illuminate(CDOTA_Ability_KeeperOfTheLight_Illuminate &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Ability_KeeperOfTheLight_Illuminate();
	virtual void OnSpellStart();
	virtual void OnChannelFinish(bool);
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual void OnUpgrade();
	virtual bool WantsToChannelCancel();
	virtual float GetAvoidRadius();
	virtual bool IsAvoidMagical();
	virtual float GetAvoidStrength(CDOTA_Bot *);
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_KeeperOfTheLight_Illuminate();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[267] OnChannelFinish
	// vtable[289] OnProjectileHit
	// vtable[268] OnUpgrade
	// vtable[331] WantsToChannelCancel
	// vtable[327] GetAvoidRadius
	// vtable[328] IsAvoidMagical
	// vtable[330] GetAvoidStrength
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 952
};

// src/game/shared/dota/units/dota_unit_hero_keeper_of_the_light.cpp:194
class C_CDOTA_Ability_KeeperOfTheLight_Illuminate_MapInstall {
	C_CDOTA_Ability_KeeperOfTheLight_Illuminate_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_keeper_of_the_light.cpp:473
class CDOTA_Modifier_KeeperOfTheLight_Illuminate : public CDOTA_Buff {
public:

private:

	int range;  // +0xba8
	float damage_per_second;  // +0xbac
	int radius;  // +0xbb0
	int channel_vision_radius;  // +0xbb4
	float channel_vision_interval;  // +0xbb8
	float channel_vision_duration;  // +0xbbc
	int channel_vision_step;  // +0xbc0
	float m_flLastChantTime;  // +0xbc4
	CDOTA_Modifier_KeeperOfTheLight_Illuminate();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void OnDestroy();
	virtual bool IsHidden();
	virtual int GetNumAvoidLocations();
	virtual Vector GetAvoidLocation(int);
	virtual float AvoidStrength(CDOTA_Bot *);
	virtual float GetAvoidRadius(int);
	virtual bool IsAvoidMagical();
	virtual bool IsPersistentAvoidance();
	virtual ~CDOTA_Modifier_KeeperOfTheLight_Illuminate();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[60] OnDestroy
	// vtable[11] IsHidden
	// vtable[74] GetNumAvoidLocations
	// vtable[75] GetAvoidLocation
	// vtable[77] AvoidStrength
	// vtable[78] GetAvoidRadius
	// vtable[79] IsAvoidMagical
	// vtable[81] IsPersistentAvoidance
	// sizeof = 3040
};

// src/game/shared/dota/units/dota_unit_hero_keeper_of_the_light.cpp:611
class CDOTA_Ability_KeeperOfTheLight_IlluminateEnd : public CDOTABaseAbility {
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
	CDOTA_Ability_KeeperOfTheLight_IlluminateEnd(CDOTA_Ability_KeeperOfTheLight_IlluminateEnd &);
	CDOTA_Ability_KeeperOfTheLight_IlluminateEnd(CDOTA_Ability_KeeperOfTheLight_IlluminateEnd &);
	CDOTA_Ability_KeeperOfTheLight_IlluminateEnd();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual bool ProcsMagicStick();
	virtual void OnSpellStart();
	virtual const char * GetAssociatedPrimaryAbilities();
	virtual bool IsHiddenWhenStolen();
	virtual ~CDOTA_Ability_KeeperOfTheLight_IlluminateEnd();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[239] ProcsMagicStick
	// vtable[266] OnSpellStart
	// vtable[303] GetAssociatedPrimaryAbilities
	// vtable[306] IsHiddenWhenStolen
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_keeper_of_the_light.cpp:646
class CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate : public CDOTABaseAbility {
public:

private:

	EHANDLE m_hThinker;  // +0x390
	float max_channel_time;  // +0x394
	float damage_per_second;  // +0x398
	float m_fPower;  // +0x39c
	float m_fStartTime;  // +0x3a0
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
	CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate(CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate &);
	CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate(CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate &);
	CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual bool OnProjectileHit_ExtraData(EHANDLE, const Vector &, KeyValues *);
	virtual void OnUpgrade();
	virtual void OnUnStolen();
	virtual float GetAvoidRadius();
	virtual bool IsAvoidMagical();
	virtual float GetAvoidStrength(CDOTA_Bot *);
	virtual ~CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[290] OnProjectileHit_ExtraData
	// vtable[268] OnUpgrade
	// vtable[308] OnUnStolen
	// vtable[327] GetAvoidRadius
	// vtable[328] IsAvoidMagical
	// vtable[330] GetAvoidStrength
	// sizeof = 936
};

// src/game/shared/dota/units/dota_unit_hero_keeper_of_the_light.cpp:854
class CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate : public CDOTA_Buff {
public:

private:

	int range;  // +0xba8
	int vision_radius;  // +0xbac
	int radius;  // +0xbb0
	float damage_per_second;  // +0xbb4
	float max_channel_time;  // +0xbb8
	float speed;  // +0xbbc
	float vision_duration;  // +0xbc0
	int channel_vision_radius;  // +0xbc4
	float channel_vision_interval;  // +0xbc8
	float channel_vision_duration;  // +0xbcc
	int channel_vision_step;  // +0xbd0
	float m_fStartTime;  // +0xbec
	float m_fPower;  // +0xbf0
	int m_iProjectile;  // +0xc00
	int m_nFXIndex;  // +0xc04
	int m_nFXIndexB;  // +0xc08
	CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	void DoIlluminate();
	bool OnProjectileHit(EHANDLE, const Vector &);
	virtual int GetNumAvoidLocations();
	virtual Vector GetAvoidLocation(int);
	virtual float AvoidStrength(CDOTA_Bot *);
	virtual float GetAvoidRadius(int);
	virtual bool IsAvoidMagical();
	virtual bool IsPersistentAvoidance();
	virtual ~CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[74] GetNumAvoidLocations
	// vtable[75] GetAvoidLocation
	// vtable[77] AvoidStrength
	// vtable[78] GetAvoidRadius
	// vtable[79] IsAvoidMagical
	// vtable[81] IsPersistentAvoidance
	// sizeof = 3112
};

// src/game/shared/dota/units/dota_unit_hero_keeper_of_the_light.cpp:1089
class CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd : public CDOTABaseAbility {
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
	CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd(CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd &);
	CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd(CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd &);
	CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual bool ProcsMagicStick();
	virtual void OnSpellStart();
	virtual const char * GetAssociatedPrimaryAbilities();
	virtual bool IsHiddenWhenStolen();
	virtual ~CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[239] ProcsMagicStick
	// vtable[266] OnSpellStart
	// vtable[303] GetAssociatedPrimaryAbilities
	// vtable[306] IsHiddenWhenStolen
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_keeper_of_the_light.cpp:1128
class CDOTA_Ability_KeeperOfTheLight_ManaLeak : public CDOTABaseAbility {
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
	CDOTA_Ability_KeeperOfTheLight_ManaLeak(CDOTA_Ability_KeeperOfTheLight_ManaLeak &);
	CDOTA_Ability_KeeperOfTheLight_ManaLeak(CDOTA_Ability_KeeperOfTheLight_ManaLeak &);
	CDOTA_Ability_KeeperOfTheLight_ManaLeak();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_KeeperOfTheLight_ManaLeak();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_keeper_of_the_light.cpp:1178
class CDOTA_Modifier_KeeperOfTheLight_ManaLeak : public CDOTA_Buff {
public:

	float mana_leak_pct;  // +0xba8
	bool bResetPosition;  // +0xbb8

	float m_fAccumulatedManaLeak;  // +0xbbc
	CDOTA_Modifier_KeeperOfTheLight_ManaLeak();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void OnDestroy();
	virtual void OnRefresh(KeyValues *);
	virtual ~CDOTA_Modifier_KeeperOfTheLight_ManaLeak();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[60] OnDestroy
	// vtable[58] OnRefresh
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_keeper_of_the_light.cpp:1319
class CDOTA_Ability_KeeperOfTheLight_ChakraMagic : public CDOTABaseAbility {
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
	CDOTA_Ability_KeeperOfTheLight_ChakraMagic(CDOTA_Ability_KeeperOfTheLight_ChakraMagic &);
	CDOTA_Ability_KeeperOfTheLight_ChakraMagic(CDOTA_Ability_KeeperOfTheLight_ChakraMagic &);
	CDOTA_Ability_KeeperOfTheLight_ChakraMagic();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_KeeperOfTheLight_ChakraMagic();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_keeper_of_the_light.cpp:1376
class CDOTA_Modifier_KeeperOfTheLight_ChakraMagic : public CDOTA_Buff {
public:

	float cooldown_reduction;  // +0xba8
	bool bReduceCooldown;  // +0xbac

	int mana_restore;  // +0xbb0
	CDOTA_Modifier_KeeperOfTheLight_ChakraMagic();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierCooldownReduction_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierManaBonus(const CModifierParams &);
	virtual int GetAttributes();
	virtual ~CDOTA_Modifier_KeeperOfTheLight_ChakraMagic();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[7] GetAttributes
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_keeper_of_the_light.cpp:1470
class CDOTA_Ability_KeeperOfTheLight_SpiritForm : public CDOTABaseAbility {
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
	CDOTA_Ability_KeeperOfTheLight_SpiritForm(CDOTA_Ability_KeeperOfTheLight_SpiritForm &);
	CDOTA_Ability_KeeperOfTheLight_SpiritForm(CDOTA_Ability_KeeperOfTheLight_SpiritForm &);
	CDOTA_Ability_KeeperOfTheLight_SpiritForm();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual void OnUpgrade();
	virtual void OnUnStolen();
	virtual bool OnSaveState(KeyValues *);
	virtual bool OnLoadState(KeyValues *);
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual ~CDOTA_Ability_KeeperOfTheLight_SpiritForm();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[268] OnUpgrade
	// vtable[308] OnUnStolen
	// vtable[248] OnSaveState
	// vtable[249] OnLoadState
	// vtable[304] GetAssociatedSecondaryAbilities
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_keeper_of_the_light.cpp:1576
class CDOTA_Modifier_KeeperOfTheLight_SpiritForm : public CDOTA_Buff {
public:

private:

	int m_nSwapIndex;  // +0xba8
	CDOTA_Modifier_KeeperOfTheLight_SpiritForm();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual bool IsPermanent();
	virtual bool RemoveOnDeath();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_KeeperOfTheLight_SpiritForm();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[23] IsPermanent
	// vtable[54] RemoveOnDeath
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[67] GetEffectName
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_keeper_of_the_light.cpp:1708
class CDOTA_Ability_KeeperOfTheLight_Recall : public CDOTABaseAbility {
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
	CDOTA_Ability_KeeperOfTheLight_Recall(CDOTA_Ability_KeeperOfTheLight_Recall &);
	CDOTA_Ability_KeeperOfTheLight_Recall(CDOTA_Ability_KeeperOfTheLight_Recall &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Ability_KeeperOfTheLight_Recall();
	virtual void OnSpellStart();
	virtual void OnStolen(CDOTABaseAbility *);
	virtual bool IsHiddenWhenStolen();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual ~CDOTA_Ability_KeeperOfTheLight_Recall();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[307] OnStolen
	// vtable[306] IsHiddenWhenStolen
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_keeper_of_the_light.cpp:1726
class C_CDOTA_Ability_KeeperOfTheLight_Recall_MapInstall {
	C_CDOTA_Ability_KeeperOfTheLight_Recall_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_keeper_of_the_light.cpp:1812
class CDOTA_Modifier_KeeperOfTheLight_Recall : public CDOTA_Buff {
public:

private:

	bool m_bWasAttacked;  // +0xba8
	CDOTA_Modifier_KeeperOfTheLight_Recall();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual int GetAttributes();
	virtual void DeclareFunctions();
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_KeeperOfTheLight_Recall();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[7] GetAttributes
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_keeper_of_the_light.cpp:1971
class CDOTA_Ability_KeeperOfTheLight_BlindingLight : public CDOTABaseAbility {
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
	CDOTA_Ability_KeeperOfTheLight_BlindingLight(CDOTA_Ability_KeeperOfTheLight_BlindingLight &);
	CDOTA_Ability_KeeperOfTheLight_BlindingLight(CDOTA_Ability_KeeperOfTheLight_BlindingLight &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Ability_KeeperOfTheLight_BlindingLight();
	virtual void OnStolen(CDOTABaseAbility *);
	virtual void OnSpellStart();
	virtual bool IsHiddenWhenStolen();
	virtual ~CDOTA_Ability_KeeperOfTheLight_BlindingLight();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[307] OnStolen
	// vtable[266] OnSpellStart
	// vtable[306] IsHiddenWhenStolen
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_keeper_of_the_light.cpp:1996
class C_CDOTA_Ability_KeeperOfTheLight_BlindingLight_MapInstall {
	C_CDOTA_Ability_KeeperOfTheLight_BlindingLight_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_keeper_of_the_light.cpp:2067
class CDOTA_Modifier_KeeperOfTheLight_BlindingLight : public CDOTA_Buff {
public:

private:

	int miss_rate;  // +0xba8
	CDOTA_Modifier_KeeperOfTheLight_BlindingLight();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMiss_Percentage(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_KeeperOfTheLight_BlindingLight();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMiss_Percentage
	// vtable[67] GetEffectName
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_keeper_of_the_light.cpp:2114
class CDOTA_Modifier_BlindingLight_Knockback : public CDOTA_Modifier_Knockback {
public:

	CDOTA_Modifier_BlindingLight_Knockback();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsHidden();
	virtual bool IsStunDebuff();
	virtual void OnDestroy();
	virtual ~CDOTA_Modifier_BlindingLight_Knockback();

	// vtable[5] CheckState
	// vtable[11] IsHidden
	// vtable[16] IsStunDebuff
	// vtable[60] OnDestroy
	// sizeof = 3072
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_KeeperOfTheLight::~CDOTA_Unit_Hero_KeeperOfTheLight  (line 43, @0x0000000002c99ff0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_KeeperOfTheLight::~CDOTA_Unit_Hero_KeeperOfTheLight(
        CDOTA_Unit_Hero_KeeperOfTheLight *const this)
{
  this->_vptr_IHandleEntity = &off_45BB2F0;
  this->_vptr_INextBotEventResponder = &off_45BC2D0;
  this->_vptr_CObstructionObject = &off_45BC600;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_KeeperOfTheLight::~CDOTA_Unit_Hero_KeeperOfTheLight  (line 43, @0x0000000002c9a030, libserver.so)  // inlines: ~CDOTA_Unit_Hero_KeeperOfTheLight
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_KeeperOfTheLight::~CDOTA_Unit_Hero_KeeperOfTheLight(
        CDOTA_Unit_Hero_KeeperOfTheLight *const this)
{
  this->_vptr_IHandleEntity = &off_45BB2F0;
  this->_vptr_INextBotEventResponder = &off_45BC2D0;
  this->_vptr_CObstructionObject = &off_45BC600;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_KeeperOfTheLight::Schema_DynamicBinding  (line 45, @0x0000000002c89260, libserver.so)
// globals: CDOTA_Unit_Hero_KeeperOfTheLight::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_KeeperOfTheLight::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_KeeperOfTheLight *const this)
{
  return CDOTA_Unit_Hero_KeeperOfTheLight::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_KeeperOfTheLight::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 45, @0x0000000002c89290, libserver.so)
// globals: CDOTA_Unit_Hero_KeeperOfTheLight::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_KeeperOfTheLight::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_KeeperOfTheLight::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_KeeperOfTheLight::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_KeeperOfTheLight::CEntityInstanceEntityClass::DestructInstance  (line 45, @0x0000000002c892a0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_KeeperOfTheLight>
void __fastcall CDOTA_Unit_Hero_KeeperOfTheLight::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_KeeperOfTheLight::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_KeeperOfTheLight::CEntityInstanceEntityClass::FreeInstance  (line 45, @0x0000000002c892c0, libserver.so)
void __fastcall CDOTA_Unit_Hero_KeeperOfTheLight::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_KeeperOfTheLight::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_KeeperOfTheLight::CEntityInstanceEntityClass::CanAllocate  (line 45, @0x0000000002c892e0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_KeeperOfTheLight::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_KeeperOfTheLight::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_KeeperOfTheLight::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 45, @0x0000000002c892f0, libserver.so)
// globals: CDOTA_Unit_Hero_KeeperOfTheLight::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_KeeperOfTheLight::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_KeeperOfTheLight::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_KeeperOfTheLight::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_KeeperOfTheLight::CEntityInstanceEntityClass::AllocateInstance  (line 45, @0x0000000002c8fd20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_KeeperOfTheLight::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_KeeperOfTheLight::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_KeeperOfTheLight::CEntityInstanceEntityClass::ConstructInstance  (line 45, @0x0000000002c94040, libserver.so)  // inlines: CDOTA_Unit_Hero_KeeperOfTheLight, Construct<CDOTA_Unit_Hero_KeeperOfTheLight>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_KeeperOfTheLight::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_KeeperOfTheLight::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_45BB2F0;
    *(p + 236) = &off_45BC2D0;
    *(p + 257) = &off_45BC600;
  }
  return p;
}


// CDOTA_Unit_Hero_KeeperOfTheLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 45, @0x0000000002ca3570, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_KeeperOfTheLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_KeeperOfTheLight::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_KeeperOfTheLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 45, @0x0000000002ca3900, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_KeeperOfTheLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_KeeperOfTheLight::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_KeeperOfTheLight::GetEntityClassInternal  (line 45, @0x0000000002cbd590, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "npc_dota_hero_keeper_of_the_light", "CDOTA_Unit_Hero_KeeperOfTheLight"
// globals: `guard variable for'CDOTA_Unit_Hero_KeeperOfTheLight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_KeeperOfTheLightClass, CDOTA_Unit_Hero_KeeperOfTheLight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_KeeperOfTheLightClass, __dso_handle, CDOTA_Unit_Hero_KeeperOfTheLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_KeeperOfTheLight::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_KeeperOfTheLightClassInfo, CDOTA_Unit_Hero_KeeperOfTheLight::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_KeeperOfTheLightClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_KeeperOfTheLight::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_KeeperOfTheLight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_KeeperOfTheLightClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_KeeperOfTheLight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_KeeperOfTheLightClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_KeeperOfTheLight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_KeeperOfTheLightClass);
    CDOTA_Unit_Hero_KeeperOfTheLight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_KeeperOfTheLightClass._vptr_CEntityClass = off_45BB270;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_KeeperOfTheLight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_KeeperOfTheLightClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_KeeperOfTheLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_KeeperOfTheLight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_KeeperOfTheLightClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_KeeperOfTheLightClass != 0 )
    return &CDOTA_Unit_Hero_KeeperOfTheLight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_KeeperOfTheLightClass;
  if ( `guard variable for'CDOTA_Unit_Hero_KeeperOfTheLight::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_KeeperOfTheLightClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_KeeperOfTheLight::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_KeeperOfTheLightClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_KeeperOfTheLight::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_KeeperOfTheLightClassInfo,
      "CDOTA_Unit_Hero_KeeperOfTheLight",
      "npc_dota_hero_keeper_of_the_light",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_KeeperOfTheLight::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_KeeperOfTheLightClassInfo);
  }
  CDOTA_Unit_Hero_KeeperOfTheLight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_KeeperOfTheLightClass.m_pClassInfo = &CDOTA_Unit_Hero_KeeperOfTheLight::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_KeeperOfTheLightClassInfo;
  CDOTA_Unit_Hero_KeeperOfTheLight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_KeeperOfTheLightClass.m_pBaseClassInfo = CDOTA_Unit_Hero_KeeperOfTheLight::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_KeeperOfTheLightClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_KeeperOfTheLightClass = &CDOTA_Unit_Hero_KeeperOfTheLight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_KeeperOfTheLightClass;
  CDOTA_Unit_Hero_KeeperOfTheLight::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_KeeperOfTheLightClassInfo.m_pClass = &CDOTA_Unit_Hero_KeeperOfTheLight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_KeeperOfTheLightClass;
  CDOTA_Unit_Hero_KeeperOfTheLight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_KeeperOfTheLightClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_KeeperOfTheLightClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_KeeperOfTheLight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_KeeperOfTheLightClass;
}


// CDOTA_Unit_Hero_KeeperOfTheLight::YouForgotToImplementOrDeclareServerClass  (line 61, @0x0000000002c1c7f0, libserver.so)
int __fastcall CDOTA_Unit_Hero_KeeperOfTheLight::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_KeeperOfTheLight *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_KeeperOfTheLight::GetServerClass  (line 61, @0x0000000002c35030, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_KeeperOfTheLight::GetServerClass(CDOTA_Unit_Hero_KeeperOfTheLight *const this)
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


// CDOTA_Unit_Hero_KeeperOfTheLight::OnLoadState  (line 70, @0x0000000002c1fcb0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::OnLoadState, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::SwapAbilities
// strings: "keeper_of_the_light_spirit_form_illuminate_end", "keeper_of_the_light_illuminate_end", "keeper_of_the_light_illuminate", "keeper_of_the_light_spirit_form_illuminate"
bool __fastcall CDOTA_Unit_Hero_KeeperOfTheLight::OnLoadState(
        CDOTA_Unit_Hero_KeeperOfTheLight *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v4; // rax

  CDOTA_BaseNPC_Hero::OnLoadState(this, pKV);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "keeper_of_the_light_spirit_form_illuminate_end", 0);
  if ( AbilityByName != 0 && !AbilityByName->m_bHidden.m_Value )
    CDOTA_BaseNPC::SwapAbilities(
      this,
      "keeper_of_the_light_spirit_form_illuminate",
      "keeper_of_the_light_spirit_form_illuminate_end",
      1,
      0);
  v4 = CDOTA_BaseNPC::FindAbilityByName(this, "keeper_of_the_light_illuminate_end", 0);
  if ( v4 != 0 && !v4->m_bHidden.m_Value )
    CDOTA_BaseNPC::SwapAbilities(this, "keeper_of_the_light_illuminate", "keeper_of_the_light_illuminate_end", 1, 0);
  return 1;
}


// CDOTA_Unit_Hero_KeeperOfTheLight::HasFlyingVision  (line 93, @0x0000000002c2b0a0, libserver.so)  // inlines: DOTAGameRules, GetTimeOfDay, IsDaytime, RemapValClamped, clamp<float, float>
// calls: CDOTA_BaseNPC::HasScepter
bool __fastcall CDOTA_Unit_Hero_KeeperOfTheLight::HasFlyingVision(CDOTA_Unit_Hero_KeeperOfTheLight *const this)
{
  bool HasScepter; // dl
  bool result; // al
  float v4; // xmm0_4

  HasScepter = CDOTA_BaseNPC::HasScepter(this);
  result = 0;
  if ( HasScepter && LOBYTE(g_pGameRules[14].m_nQuestPhase) == 0 && BYTE1(g_pGameRules[14].m_nQuestPhase) == 0 )
  {
    v4 = *&g_pGameRules[18].m_szQuestName[28] / 65535.0;
    if ( v4 >= 0.0 && v4 <= 1.0 && (v4 + 0.0) >= 0.25 && (v4 + 0.0) <= 0.75 )
      return !this->m_bIsIllusion.m_Value;
  }
  return result;
}


// CDOTA_Unit_Hero_KeeperOfTheLight::GainedModifier  (line 100, @0x0000000002c238b0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::GainedModifier, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::GetCurrentActiveAbility, CDOTABaseAbility::SetActivated, CDOTA_BaseNPC::RemoveModifierByName, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CDOTA_BaseNPC::IsChanneling, __stack_chk_fail, _Unwind_Resume
// strings: "keeper_of_the_light_illuminate", "keeper_of_the_light_spirit_form", "modifier_keeper_of_the_light_spirit_form"
void __fastcall CDOTA_Unit_Hero_KeeperOfTheLight::GainedModifier(
        CDOTA_Unit_Hero_KeeperOfTheLight *const this,
        CDOTA_Buff *pBuff)
{
  CDOTABaseAbility *AbilityByName; // r12
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // r12
  float v7; // xmm1_4
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  CDOTA_BaseNPC_Hero::GainedModifier(this, pBuff);
  if ( pBuff->m_Functions[154].__pfn != 0 )
  {
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "keeper_of_the_light_illuminate", 0);
    if ( AbilityByName == 0
      || AbilityByName != CDOTA_BaseNPC::GetCurrentActiveAbility(this)
      || !CDOTA_BaseNPC::IsChanneling(this) )
    {
      v5 = CDOTA_BaseNPC::FindAbilityByName(this, "keeper_of_the_light_spirit_form", 0);
      v6 = v5;
      if ( v5 != 0 )
      {
        CDOTABaseAbility::SetActivated(v5, 0);
        CDOTA_BaseNPC::RemoveModifierByName(this, "modifier_keeper_of_the_light_spirit_form");
        KeyValues::KeyValues(&kv, "modifier_keeper_of_the_light_spirit_form");
        KeyValues::SetFloat(&kv, "duration", v7);
        CDOTA_BaseNPC::AddNewModifier(this, this, v6, "modifier_keeper_of_the_light_spirit_form", &kv, 0);
        KeyValues::~KeyValues(&kv);
      }
    }
  }
}


// CDOTA_Unit_Hero_KeeperOfTheLight::LostModifier  (line 128, @0x0000000002c239e0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::LostModifier, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::SetActivated, CDOTA_BaseNPC::RemoveModifierByName
// strings: "keeper_of_the_light_spirit_form", "modifier_keeper_of_the_light_spirit_form"
bool __fastcall CDOTA_Unit_Hero_KeeperOfTheLight::LostModifier(
        CDOTA_Unit_Hero_KeeperOfTheLight *const this,
        CDOTA_Buff *pBuff)
{
  bool v4; // r13
  CDOTABaseAbility *AbilityByName; // rax

  v4 = CDOTA_BaseNPC_Hero::LostModifier(this, pBuff);
  if ( pBuff->m_Functions[154].__pfn != 0 )
  {
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "keeper_of_the_light_spirit_form", 0);
    if ( AbilityByName != 0 )
    {
      CDOTABaseAbility::SetActivated(AbilityByName, 1);
      CDOTA_BaseNPC::RemoveModifierByName(this, "modifier_keeper_of_the_light_spirit_form");
    }
  }
  return v4;
}


// CDOTA_Ability_KeeperOfTheLight_Illuminate::~CDOTA_Ability_KeeperOfTheLight_Illuminate  (line 152, @0x0000000002c98690, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_KeeperOfTheLight_Illuminate::~CDOTA_Ability_KeeperOfTheLight_Illuminate(
        CDOTA_Ability_KeeperOfTheLight_Illuminate *const this)
{
  this->_vptr_IHandleEntity = &off_45BC6D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_KeeperOfTheLight_Illuminate::~CDOTA_Ability_KeeperOfTheLight_Illuminate  (line 152, @0x0000000002c986b0, libserver.so)  // inlines: ~CDOTA_Ability_KeeperOfTheLight_Illuminate
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_KeeperOfTheLight_Illuminate::~CDOTA_Ability_KeeperOfTheLight_Illuminate(
        CDOTA_Ability_KeeperOfTheLight_Illuminate *const this)
{
  this->_vptr_IHandleEntity = &off_45BC6D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_KeeperOfTheLight_Illuminate::Schema_DynamicBinding  (line 154, @0x0000000002c89300, libserver.so)
// globals: CDOTA_Ability_KeeperOfTheLight_Illuminate::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_KeeperOfTheLight_Illuminate::Schema_DynamicBinding(
        const CDOTA_Ability_KeeperOfTheLight_Illuminate *const this)
{
  return CDOTA_Ability_KeeperOfTheLight_Illuminate::s_pSchemaBinding;
}


// CDOTA_Ability_KeeperOfTheLight_Illuminate::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 154, @0x0000000002c89310, libserver.so)
// globals: CDOTA_Ability_KeeperOfTheLight_Illuminate::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_KeeperOfTheLight_Illuminate::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_KeeperOfTheLight_Illuminate::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_KeeperOfTheLight_Illuminate::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_KeeperOfTheLight_Illuminate::CEntityInstanceEntityClass::DestructInstance  (line 154, @0x0000000002c89320, libserver.so)  // inlines: Destruct<CDOTA_Ability_KeeperOfTheLight_Illuminate>
void __fastcall CDOTA_Ability_KeeperOfTheLight_Illuminate::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_KeeperOfTheLight_Illuminate::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_KeeperOfTheLight_Illuminate::CEntityInstanceEntityClass::FreeInstance  (line 154, @0x0000000002c89340, libserver.so)
void __fastcall CDOTA_Ability_KeeperOfTheLight_Illuminate::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_KeeperOfTheLight_Illuminate::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_KeeperOfTheLight_Illuminate::CEntityInstanceEntityClass::CanAllocate  (line 154, @0x0000000002c89360, libserver.so)
bool __fastcall CDOTA_Ability_KeeperOfTheLight_Illuminate::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_KeeperOfTheLight_Illuminate::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_KeeperOfTheLight_Illuminate::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 154, @0x0000000002c89370, libserver.so)
// globals: CDOTA_Ability_KeeperOfTheLight_Illuminate::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_KeeperOfTheLight_Illuminate::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_KeeperOfTheLight_Illuminate::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_KeeperOfTheLight_Illuminate::s_pSchemaBinding;
}


// CDOTA_Ability_KeeperOfTheLight_Illuminate::CEntityInstanceEntityClass::AllocateInstance  (line 154, @0x0000000002c8fd60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_KeeperOfTheLight_Illuminate::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_KeeperOfTheLight_Illuminate::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 952);
  memset(v1, 0, 0x3B8u);
  return v1;
}


// CDOTA_Ability_KeeperOfTheLight_Illuminate::CEntityInstanceEntityClass::ConstructInstance  (line 154, @0x0000000002c94c10, libserver.so)  // inlines: CDOTA_Ability_KeeperOfTheLight_Illuminate, Construct<CDOTA_Ability_KeeperOfTheLight_Illuminate>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_KeeperOfTheLight_Illuminate::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_KeeperOfTheLight_Illuminate::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 948) = 0;
    *p = &off_45BC6D0;
  }
  return p;
}


// CDOTA_Ability_KeeperOfTheLight_Illuminate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 154, @0x0000000002ca22f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_KeeperOfTheLight_Illuminate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_KeeperOfTheLight_Illuminate::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_KeeperOfTheLight_Illuminate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 154, @0x0000000002ca2310, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_KeeperOfTheLight_Illuminate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_KeeperOfTheLight_Illuminate::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal  (line 154, @0x0000000002cc5000, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "keeper_of_the_light_illuminate", "CDOTA_Ability_KeeperOfTheLight_Illuminate"
// globals: `guard variable for'CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass, CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_KeeperOfTheLight_Illuminate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClassInfo, CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClassInfo
CEntityClass *__cdecl CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass) != 0 )
  {
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_pClassInfo = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_flags = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_pInputs = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_nInputCount = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_pOutputs = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_nOutputCount = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_pGameClass = 0;
    CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass._vptr_CEntityClass = off_45BC650;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass);
    __cxa_atexit(
      CDOTA_Ability_KeeperOfTheLight_Illuminate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass != 0 )
    return &CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass;
  if ( `guard variable for'CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClassInfo,
      "CDOTA_Ability_KeeperOfTheLight_Illuminate",
      "keeper_of_the_light_illuminate",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClassInfo);
  }
  CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_pClassInfo = &CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClassInfo;
  CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_pBaseClassInfo = CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass = &CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass;
  CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClassInfo.m_pClass = &CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass;
  CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_KeeperOfTheLight_Illuminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateClass;
}


// CDOTA_Ability_KeeperOfTheLight_Illuminate::WantsToChannelCancel  (line 169, @0x0000000002c89380, libserver.so)
bool __fastcall CDOTA_Ability_KeeperOfTheLight_Illuminate::WantsToChannelCancel(
        CDOTA_Ability_KeeperOfTheLight_Illuminate *const this)
{
  return 1;
}


// CDOTA_Ability_KeeperOfTheLight_Illuminate::GetAvoidRadius  (line 171, @0x0000000002cb7800, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_KeeperOfTheLight_Illuminate::GetAvoidRadius(
        CDOTA_Ability_KeeperOfTheLight_Illuminate *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0) + 150.0;
}


// CDOTA_Ability_KeeperOfTheLight_Illuminate::IsAvoidMagical  (line 172, @0x0000000002c89390, libserver.so)
bool __fastcall CDOTA_Ability_KeeperOfTheLight_Illuminate::IsAvoidMagical(
        CDOTA_Ability_KeeperOfTheLight_Illuminate *const this)
{
  return 1;
}


// CDOTA_Ability_KeeperOfTheLight_Illuminate::GetAssociatedSecondaryAbilities  (line 176, @0x0000000002c893a0, libserver.so)
// strings: "keeper_of_the_light_illuminate_end"
const char *__fastcall CDOTA_Ability_KeeperOfTheLight_Illuminate::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_KeeperOfTheLight_Illuminate *const this)
{
  return "keeper_of_the_light_illuminate_end";
}


// CDOTA_Ability_KeeperOfTheLight_Illuminate::YouForgotToImplementOrDeclareServerClass  (line 194, @0x0000000002c1c800, libserver.so)
int __fastcall CDOTA_Ability_KeeperOfTheLight_Illuminate::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_KeeperOfTheLight_Illuminate *const this)
{
  return 0;
}


// CDOTA_Ability_KeeperOfTheLight_Illuminate::GetServerClass  (line 194, @0x0000000002c35830, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_KeeperOfTheLight_Illuminate::GetServerClass(
        CDOTA_Ability_KeeperOfTheLight_Illuminate *const this)
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


// CDOTA_Ability_KeeperOfTheLight_Illuminate::CDOTA_Ability_KeeperOfTheLight_Illuminate  (line 203, @0x0000000002c417e0, libserver.so)
// calls: CDOTABaseAbility::CDOTABaseAbility
void __fastcall CDOTA_Ability_KeeperOfTheLight_Illuminate::CDOTA_Ability_KeeperOfTheLight_Illuminate(
        CDOTA_Ability_KeeperOfTheLight_Illuminate *const this)
{
  CDOTABaseAbility::CDOTABaseAbility(this);
  this->m_bStarted = 0;
  this->_vptr_IHandleEntity = &off_45BC6D0;
}


// CDOTA_Ability_KeeperOfTheLight_Illuminate::OnSpellStart  (line 212, @0x0000000002c68b00, libserver.so)  // inlines: DOTAGameRules, GetGameTime, GetLevelSpecialValueFor<float>, operator=
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::SwapAbilities, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier (15 total)
// strings: "max_channel_time", "special_bonus_unique_keeper_of_the_light", "keeper_of_the_light_illuminate_end", "keeper_of_the_light_illuminate", "keeper_of_the_light_spirit_form_illuminate", "particles/units/heroes/hero_keeper_of_the_light/keeper_of_the_light_illuminate_charge.vpc (8 total)
void __fastcall CDOTA_Ability_KeeperOfTheLight_Illuminate::OnSpellStart(
        CDOTA_Ability_KeeperOfTheLight_Illuminate *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // r12
  int (**vptr_IHandleEntity)(...); // rax
  int (*v9)(...); // r13
  float v10; // xmm0_4
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v15; // rax
  const CBaseAnimating *v16; // r13
  CDOTA_ParticleManager *v17; // rax
  float v18; // xmm1_4
  CDOTA_BaseNPC *v19; // r13
  CDOTA_BaseNPC *v20; // rax
  Vector vFwd; // [rsp+10h] [rbp-50h] BYREF
  KeyValues kv; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-28h]

  v23 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "max_channel_time", -1, 0);
  this->damage_per_second = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "damage_per_second", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_keeper_of_the_light", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    this->damage_per_second = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1)
                            + this->damage_per_second;
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::SwapAbilities(v4, "keeper_of_the_light_illuminate", "keeper_of_the_light_illuminate_end", 0, 1);
  v5 = CDOTABaseAbility::GetCaster(this);
  v6 = CDOTA_BaseNPC::FindAbilityByName(v5, "keeper_of_the_light_spirit_form_illuminate", 0);
  v7 = v6;
  if ( v6 != 0 )
  {
    vptr_IHandleEntity = v6->_vptr_IHandleEntity;
    v9 = vptr_IHandleEntity[241];
    vptr_IHandleEntity[242](v7, 0xFFFFFFFFLL);
    v9(v7);
  }
  if ( g_pGameRules != 0 )
    v10 = *&g_pGameRules[18].m_szQuestName[20] - 0.30000001;
  else
    v10 = -0.30000001;
  this->m_fStartTime = v10;
  v11 = CDOTABaseAbility::GetCaster(this);
  this->m_vPos = *CBaseEntity::GetAbsOrigin(v11);
  v12 = CDOTABaseAbility::GetCaster(this);
  (*(v12->_vptr_IHandleEntity + 61))(v12, &vFwd, 0, 0);
  v13 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  this->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_keeper_of_the_light/keeper_of_the_light_illuminate_charge.vpcf",
                       2,
                       v13,
                       0,
                       0);
  v15 = CDOTABaseAbility::GetCaster(this);
  LODWORD(v13) = this->m_nFXIndex;
  v16 = v15;
  v17 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v17, v13, 0, v16, 5, "attach_attack1", vec3_invalid, 1);
  KeyValues::KeyValues(&kv, "modifier_keeper_of_the_light_illuminate");
  KeyValues::SetFloat(&kv, "duration", v18);
  v19 = CDOTABaseAbility::GetCaster(this);
  v20 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v20, v19, this, "modifier_keeper_of_the_light_illuminate", &kv, 0);
  this->m_bStarted = 1;
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_KeeperOfTheLight_Illuminate::OnChannelFinish  (line 253, @0x0000000002c68dc0, libserver.so)  // inlines: CEntityHandle, CHandle, DOTAGameRules, GetAbilityData, GetEHandle, GetEntryIndex, GetGameTime, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTimeOfDay, IsDaytime, RemapValClamped, Set, Vector, VectorMultiply, VectorNormalize2D, VectorSubtract, clamp<float, float>, operator*, operator-, operator=, sLinearProjectileCreateInfo
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::SwapAbilities, CDOTA_BaseNPC::RemoveModifierByName, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorPosition, VectorNormalize, CDOTA_BaseNPC::HasScepter, CDOTA_ProjectileManager::CreateLinearProjectile (29 total)
// strings: "keeper_of_the_light_illuminate_end", "keeper_of_the_light_illuminate", "modifier_keeper_of_the_light_illuminate", "max_channel_time", "particles/units/heroes/hero_keeper_of_the_light/keeper_of_the_light_illuminate.vpcf", "Hero_KeeperOfTheLight.Illuminate.Discharge" (8 total)
void __fastcall CDOTA_Ability_KeeperOfTheLight_Illuminate::OnChannelFinish(
        CDOTA_Ability_KeeperOfTheLight_Illuminate *const this,
        bool bInterrupted)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v4; // rax
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  int LevelSpecialValue; // r13d
  int v8; // r12d
  float m_fStartTime; // xmm2_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  int v12; // eax
  int v13; // r13d
  CDOTA_BaseNPC *v14; // rax
  const Vector *AbsOrigin; // r14
  vec_t v16; // xmm0_4
  vec_t v17; // xmm1_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v20; // rax
  const Vector *v21; // rax
  __m128i v22; // xmm5
  float v23; // r14d
  vec_t v24; // xmm0_4
  CDOTA_BaseNPC *v25; // rax
  CEntityIdentity *m_pEntity; // rax
  int v27; // edx
  __int16 v28; // cx
  CDOTA_BaseNPC *v29; // rax
  int v30; // eax
  CDOTA_BaseNPC *v31; // rax
  const Vector *v32; // rax
  int m_nFXIndexB; // r13d
  const Vector *v34; // r12
  CDOTA_ParticleManager *v35; // rax
  CDOTA_ParticleManager *v36; // rax
  CDOTA_ParticleManager *v37; // rax
  CDOTA_BaseNPC *v38; // rax
  const Vector *v39; // rax
  int v40; // r13d
  const Vector *v41; // r12
  CDOTA_ParticleManager *v42; // rax
  float m_fPower; // xmm0_4
  CDOTA_ParticleManager *v44; // rax
  CDOTA_ParticleManager *v45; // rax
  CDOTA_ParticleManager *v46; // rax
  CDOTA_BaseNPC *v47; // rax
  CDOTA_BaseNPC *v48; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v50; // r12
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r13d
  CDOTA_BaseNPC *v53; // rax
  const Vector *v54; // r12
  CDOTA_BaseNPC *v55; // rax
  float v56; // xmm3_4
  float v57; // xmm0_4
  float v58; // xmm0_4
  CDOTA_BaseNPC *v59; // rax
  const QAngle *AbsAngles; // rax
  CDOTA_BaseNPC *v61; // rax
  CDOTA_BaseNPC *v62; // rax
  CDOTA_BaseNPC *v63; // rax
  float v64; // xmm1_4
  CDOTA_BaseNPC *v65; // r14
  CDOTA_BaseNPC *v66; // rax
  float max_channel_time; // [rsp+8h] [rbp-F8h]
  float max_channel_timea; // [rsp+8h] [rbp-F8h]
  float speed; // [rsp+Ch] [rbp-F4h]
  Vector vDirection; // [rsp+10h] [rbp-F0h] BYREF
  double v71; // [rsp+20h] [rbp-E0h]
  float v72; // [rsp+28h] [rbp-D8h]
  double v73; // [rsp+30h] [rbp-D0h]
  float v74; // [rsp+38h] [rbp-C8h]
  sLinearProjectileCreateInfo info; // [rsp+40h] [rbp-C0h] BYREF
  KeyValues kv; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v77; // [rsp+D8h] [rbp-28h]

  v77 = __readfsqword(0x28u);
  if ( !this->m_bStarted )
    return;
  this->m_bStarted = 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::SwapAbilities(Caster, "keeper_of_the_light_illuminate", "keeper_of_the_light_illuminate_end", 1, 0);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v4, "modifier_keeper_of_the_light_illuminate");
  m_nFXIndex = this->m_nFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 0);
  speed = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "speed", -1, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "range", -1, 0);
  v8 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  max_channel_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "max_channel_time", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "vision_radius", -1, 0);
  m_fStartTime = this->m_fStartTime;
  if ( m_fStartTime <= 0.0 )
  {
    this->m_fPower = 1.0;
    goto LABEL_6;
  }
  v10 = max_channel_time;
  if ( g_pGameRules != 0 )
  {
    v11 = *&g_pGameRules[18].m_szQuestName[20] - m_fStartTime;
    if ( v11 > max_channel_time )
      goto LABEL_5;
    v10 = 0.0;
    if ( v11 < 0.0 )
      goto LABEL_5;
  }
  else
  {
    v11 = 0.0 - m_fStartTime;
    if ( (0.0 - m_fStartTime) > max_channel_time )
      goto LABEL_5;
    v10 = 0.0;
    if ( v11 < 0.0 )
      goto LABEL_5;
  }
  v10 = v11;
LABEL_5:
  this->m_fPower = v10;
LABEL_6:
  v12 = (*(this->_vptr_IHandleEntity + 228))(this);
  this->m_fStartTime = -1.0;
  v13 = v12 + LevelSpecialValue;
  v14 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v14);
  *&info.pszEffectName = CDOTABaseAbility::GetCursorPosition(this);
  v16 = *(&info.pszEffectName + 1) - AbsOrigin->y;
  v17 = *&info.pszEffectName - AbsOrigin->x;
  vDirection.z = 0.0;
  vDirection.y = v16;
  vDirection.x = v17;
  if ( VectorNormalize(&vDirection) < 0.0099999998 )
  {
    v59 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v59);
    AngleVectors(AbsAngles, &vDirection, 0, 0);
  }
  info.bHasFrontalCone = 1;
  info.hSource.m_Index = -1;
  info.pszEffectName = 0;
  info.fDistance = 0.0;
  info.bCheckStartPosition = 0;
  y = vec3_origin.y;
  info.bProvidesVision = 0;
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
  info.fStartRadius = 0.0;
  info.fEndRadius = 0.0;
  info.iUnitTargetTeam = 0;
  info.iUnitTargetType = 0;
  info.iUnitTargetFlags = 0;
  info.iVisionTeamNumber = -1;
  info.iVisionRadius = -1;
  info.bDrawsOnMinimap = 0;
  info.bVisibleToEnemies = 1;
  info.bIgnoreSource = 0;
  info.bStickyFoWReveal = 0;
  info.pKVExtraData = 0;
  info.fExpireTime = 0.0;
  info.fMaxSpeed = 0.0;
  info.pAbility = this;
  v20 = CDOTABaseAbility::GetCaster(this);
  v21 = CBaseEntity::GetAbsOrigin(v20);
  *v22.m128i_i32 = v13;
  info.vSpawnOrigin.x = v21->x;
  max_channel_timea = v8;
  info.vSpawnOrigin.y = v21->y;
  v23 = COERCE_FLOAT(_mm_cvtsi128_si32(v22));
  v24 = v21->z;
  info.fDistance = v13;
  info.vVelocity.y = vDirection.y * speed;
  info.vSpawnOrigin.z = v24;
  info.fStartRadius = v8;
  info.fEndRadius = v8;
  info.vVelocity.z = vDirection.z * speed;
  info.vVelocity.x = speed * vDirection.x;
  v25 = CDOTABaseAbility::GetCaster(this);
  if ( v25 != 0 && (m_pEntity = v25->m_pEntity) != 0 )
  {
    v27 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v28 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v28 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(info.hSource.m_Index) = v28 | info.hSource.m_Index & 0x8000;
    info.hSource.m_Index = (v27 << 15) | info.hSource.m_Index & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  v29 = CDOTABaseAbility::GetCaster(this);
  if ( !CDOTA_BaseNPC::HasScepter(v29)
    || LOBYTE(g_pGameRules[14].m_nQuestPhase) != 0
    || BYTE1(g_pGameRules[14].m_nQuestPhase) != 0
    || (v57 = *&g_pGameRules[18].m_szQuestName[28] / 65535.0) < 0.0
    || v57 > 1.0
    || (v58 = v57 + 0.0) < 0.25
    || (v30 = 3, v58 > 0.75) )
  {
    v30 = 2;
  }
  info.iUnitTargetTeam = v30;
  info.iUnitTargetType = 3;
  this->m_iProjectile = CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  this->m_nFXIndexB = CDOTABaseAbility::CreateAbilityParticleEffect(
                        this,
                        "particles/units/heroes/hero_keeper_of_the_light/keeper_of_the_light_illuminate.vpcf",
                        2,
                        0,
                        0);
  v31 = CDOTABaseAbility::GetCaster(this);
  v32 = CBaseEntity::GetAbsOrigin(v31);
  m_nFXIndexB = this->m_nFXIndexB;
  v34 = v32;
  v35 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v35, m_nFXIndexB, 0, *&v34->x, v34->z);
  LODWORD(v34) = this->m_nFXIndexB;
  *(&v73 + 1) = vDirection.y * speed;
  v74 = vDirection.z * speed;
  *&v73 = vDirection.x * speed;
  v36 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v36, v34, 1, v73, v74);
  LODWORD(v34) = this->m_nFXIndexB;
  v72 = 0.0;
  *&v71 = LODWORD(max_channel_timea);
  v37 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v37, v34, 2, v71, v72);
  v38 = CDOTABaseAbility::GetCaster(this);
  v39 = CBaseEntity::GetAbsOrigin(v38);
  v40 = this->m_nFXIndexB;
  v41 = v39;
  v42 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v42, v40, 3, *&v41->x, v41->z);
  LODWORD(v41) = this->m_nFXIndexB;
  m_fPower = this->m_fPower;
  v72 = 0.0;
  *&v71 = LODWORD(m_fPower);
  v44 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v44, v41, 8, v71, v72);
  LODWORD(v41) = this->m_nFXIndexB;
  *&v71 = COERCE_UNSIGNED_INT(v23 / speed);
  v72 = 0.0;
  v45 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v45, v41, 10, v71, v72);
  LODWORD(v41) = this->m_nFXIndexB;
  v46 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleFoWProperties(v46, v41, 0, 3, max_channel_timea);
  v47 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(8, "Hero_KeeperOfTheLight.Illuminate.Discharge", v47);
  if ( !this->m_bStolen.m_Value )
  {
    v61 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::StartGesture(v61, 1540, 0.0, 0.2, 0, 0, 1.0);
  }
  v48 = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v48, "keeper_of_the_light_spirit_form", 0);
  v50 = AbilityByName;
  if ( AbilityByName != 0 && AbilityByName->m_bActivated.m_Value )
  {
    v62 = CDOTABaseAbility::GetCaster(this);
    if ( CDOTA_BaseNPC::HasScepter(v62) )
    {
      CDOTABaseAbility::SetActivated(v50, 0);
      v63 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::RemoveModifierByName(v63, "modifier_keeper_of_the_light_spirit_form");
      KeyValues::KeyValues(&kv, "modifier_keeper_of_the_light_spirit_form");
      KeyValues::SetFloat(&kv, "duration", v64);
      v65 = CDOTABaseAbility::GetCaster(this);
      v66 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v66, v65, v50, "modifier_keeper_of_the_light_spirit_form", &kv, 0);
      KeyValues::~KeyValues(&kv);
    }
  }
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  v53 = CDOTABaseAbility::GetCaster(this);
  v54 = CBaseEntity::GetAbsOrigin(v53);
  v55 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(g_pGameRules, v55, 0, m_iAbilityID, 0, 0, *&v54->x, v54->z, -1.0, v56);
}


// CDOTA_Ability_KeeperOfTheLight_Illuminate::GetAbilityDamageToTargetOverInterval  (line 358, @0x0000000002c56390, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_KeeperOfTheLight_Illuminate::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_KeeperOfTheLight_Illuminate *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  float fIntervala; // [rsp+0h] [rbp-1Ch]
  float fIntervalb; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    fIntervala = fminf(fInterval, (*(this->_vptr_IHandleEntity + 225))(this));
    fIntervalb = fIntervala * CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "damage_per_second", -1, 1);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fIntervalb);
  }
  return result;
}


// CDOTA_Ability_KeeperOfTheLight_Illuminate::OnProjectileHit  (line 370, @0x0000000002c69700, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, IndexToIdentity, IsRealHero, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator CBaseEntity*, operator CEntityInstance*, operator==<CBaseEntity>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_ParticleManager::ReleaseParticleIndex, ApplyDamage, EconEntity_OnOwnerKillEaterEvent, CDOTA_ParticleManager::CreateParticle, DOTA_EmitSound, CDOTA_BaseNPC::Heal (13 total)
// strings: "special_bonus_unique_keeper_of_the_light", "particles/units/heroes/hero_keeper_of_the_light/keeper_of_the_light_illuminate_impact.vpc, "Hero_KeeperOfTheLight.Illuminate.Target", "particles/units/heroes/hero_keeper_of_the_light/keeper_of_the_light_illuminate_impact_sma
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
__int64 __fastcall CDOTA_Ability_KeeperOfTheLight_Illuminate::OnProjectileHit(
        CDOTA_Ability_KeeperOfTheLight_Illuminate *const this,
        int *hTarget,
        const Vector *const vLocation)
{
  __m128i v5; // xmm0
  float v6; // r14d
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float LevelSpecialValue; // xmm1_4
  int v10; // eax
  unsigned __int16 v11; // dx
  CEntityIdentity *v12; // rcx
  CEntityIdentity *v13; // rsi
  CEntityIdentity *v14; // rcx
  int m_nFXIndexB; // r12d
  CDOTA_ParticleManager *v16; // rax
  int v17; // ebx
  CDOTA_ParticleManager *v18; // rax
  CEntityInstance *m_pInstance; // r12
  CDOTA_BaseNPC *v21; // rax
  double v22; // xmm0_8
  CDOTA_BaseNPC_Hero *v23; // r14
  CDOTA_BaseNPC *v24; // rax
  CDOTA_BaseNPC_Hero *v25; // rdi
  CDOTA_ParticleManager *ParticleManager; // rax
  const char *v27; // rsi
  CBaseEntity *v28; // rcx
  int Particle; // r14d
  CDOTA_ParticleManager *v30; // rax
  float v31; // xmm0_4
  int v32; // r14d
  CDOTA_BaseNPC *v33; // rax
  CDOTAPlayer *v34; // rax
  CDOTAPlayer *v35; // rax
  float flHeal; // [rsp+Ch] [rbp-24h]
  float flHeala; // [rsp+Ch] [rbp-24h]
  float flHealb; // [rsp+Ch] [rbp-24h]

  *v5.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "damage_per_second", -1, 0);
  v6 = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_keeper_of_the_light", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  else
    LevelSpecialValue = 0.0;
  v10 = *hTarget;
  if ( (*hTarget + 2) <= 1 )
    goto LABEL_10;
  v11 = *hTarget & 0x7FFF;
  v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[v11 >> 9];
  if ( v12 == 0 )
    goto LABEL_10;
  v13 = &v12[*hTarget & 0x1FF];
  if ( v13 != 0 && v10 == v13->m_EHandle.m_Index )
  {
    m_pInstance = v13->m_pInstance;
    if ( v13->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
    {
      flHeal = LevelSpecialValue;
      if ( CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value == HIBYTE(m_pInstance[7].m_CScriptComponent) )
      {
        v31 = (v6 * this->m_fPower) + flHeal;
        if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        {
          v32 = v31;
          flHealb = v31;
          v33 = CDOTABaseAbility::GetCaster(this);
          v34 = (*(v33->_vptr_IHandleEntity + 413))(v33);
          SendOverheadEventMessage(v34, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, m_pInstance, v32, 0);
          v35 = (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance);
          SendOverheadEventMessage(v35, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, m_pInstance, v32, 0);
          v31 = flHealb;
        }
        CDOTA_BaseNPC::Heal(m_pInstance, v31, this, 0, 1);
      }
      else
      {
        flHeala = (v6 * this->m_fPower) + flHeal;
        v21 = CDOTABaseAbility::GetCaster(this);
        v22 = ApplyDamage(v21, m_pInstance, this, flHeala, 2, 0);
      }
      if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
        goto LABEL_35;
      if ( LOBYTE(m_pInstance[71].m_pEntity) != 0 )
        goto LABEL_31;
      if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance, v22) == 0 )
      {
        v23 = 0;
        if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
          && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
        {
          v23 = m_pInstance;
        }
        v24 = CDOTABaseAbility::GetCaster(this);
        v25 = 0;
        if ( v24 != 0 && v24->m_bIsDOTANPC && (v24->m_iUnitType & 1) != 0 && !v24->m_bIsIllusion.m_Value )
          v25 = v24;
        EconEntity_OnOwnerKillEaterEvent(
          v25,
          v23,
          kill_eater_event_t::kKillEaterEventType_KeeperOfTheLight_IlluminateKills,
          1,
          INVALID_ITEM_DEF_INDEX);
      }
      if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
      {
LABEL_31:
        ParticleManager = GetParticleManager();
        v27 = "particles/units/heroes/hero_keeper_of_the_light/keeper_of_the_light_illuminate_impact.vpcf";
        v28 = m_pInstance;
      }
      else
      {
LABEL_35:
        ParticleManager = GetParticleManager();
        v27 = "particles/units/heroes/hero_keeper_of_the_light/keeper_of_the_light_illuminate_impact_small.vpcf";
        v28 = m_pInstance;
      }
      Particle = CDOTA_ParticleManager::CreateParticle(ParticleManager, v27, 1, v28, 0, 0);
      v30 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v30, Particle);
      DOTA_EmitSound(10, "Hero_KeeperOfTheLight.Illuminate.Target", m_pInstance);
      v10 = *hTarget;
      if ( (*hTarget + 2) <= 1 )
        goto LABEL_10;
      v11 = *hTarget & 0x7FFF;
      v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[v11 >> 9];
      if ( v12 == 0 )
        goto LABEL_10;
    }
  }
  v14 = &v12[v11 & 0x1FF];
  if ( v14 == 0 || v10 != v14->m_EHandle.m_Index || v14->m_pInstance == 0 )
  {
LABEL_10:
    m_nFXIndexB = this->m_nFXIndexB;
    v16 = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(v16, m_nFXIndexB, 0);
    v17 = this->m_nFXIndexB;
    v18 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v18, v17);
  }
  return 0;
}


// CDOTA_Ability_KeeperOfTheLight_Illuminate::OnUpgrade  (line 433, @0x0000000002c218f0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "keeper_of_the_light_illuminate_end", "keeper_of_the_light_spirit_form_illuminate", "keeper_of_the_light_spirit_form_illuminate_end"
void __fastcall CDOTA_Ability_KeeperOfTheLight_Illuminate::OnUpgrade(
        CDOTA_Ability_KeeperOfTheLight_Illuminate *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTABaseAbility *v7; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "keeper_of_the_light_illuminate_end", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value < this->m_iLevel.m_Value )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  v4 = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTA_BaseNPC::FindAbilityByName(v4, "keeper_of_the_light_spirit_form_illuminate", 0);
  if ( v5 != 0 && v5->m_iLevel.m_Value < this->m_iLevel.m_Value )
    CDOTABaseAbility::UpgradeAbility(v5, 0);
  v6 = CDOTABaseAbility::GetCaster(this);
  v7 = CDOTA_BaseNPC::FindAbilityByName(v6, "keeper_of_the_light_spirit_form_illuminate_end", 0);
  if ( v7 != 0 && v7->m_iLevel.m_Value < this->m_iLevel.m_Value )
    CDOTABaseAbility::UpgradeAbility(v7, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_KeeperOfTheLight_Illuminate::GetAvoidStrength  (line 461, @0x0000000002c2e360, libserver.so)  // inlines: DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, RemapValClamped, ToDOTABaseNPC, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHealth
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Ability_KeeperOfTheLight_Illuminate::GetAvoidStrength(
        CDOTA_Ability_KeeperOfTheLight_Illuminate *const this,
        CDOTA_Bot *pBot)
{
  float v2; // xmm1_4
  int v3; // eax
  int v4; // edx
  float v5; // xmm1_4
  uint32 m_Index; // eax
  float v7; // xmm2_4
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  const CBaseEntity *m_pInstance; // rdi
  float Health; // xmm3_4
  __m128 v12; // xmm3
  __m128 v13; // xmm0
  float result; // xmm0_4
  float v15; // xmm3_4
  float v16; // [rsp+8h] [rbp-8h]
  float v17; // [rsp+Ch] [rbp-4h]

  if ( g_pGameRules != 0 )
    v2 = *&g_pGameRules[18].m_szQuestName[20];
  else
    v2 = 0.0;
  v3 = ((v2 - this->m_fStartTime) * this->damage_per_second);
  v4 = 4 * v3;
  v5 = v3;
  m_Index = pBot->m_hUnit.m_Index;
  v7 = v4;
  if ( m_Index + 2 <= 1
    || (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pBot->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v9 = &v8[pBot->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v9->m_EHandle.m_Index
    || (m_pInstance = v9->m_pInstance, v9->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v16 = v5;
  v17 = v7;
  Health = CBaseEntity::GetHealth(m_pInstance);
  if ( v17 == v16 )
  {
    v12.m128_f32[0] = Health - v17;
    v13 = _mm_cmple_ss(0, v12);
    LODWORD(result) = _mm_andnot_ps(v13, 0x3F666666u).m128_u32[0] | v13.m128_i32[0] & 0x3E99999A;
  }
  else
  {
    v15 = (Health - v16) / (v17 - v16);
    if ( v15 < 0.0 )
    {
      return 0.89999998;
    }
    else
    {
      result = 0.30000001;
      if ( v15 <= 1.0 )
        return (v15 * -0.59999996) + 0.89999998;
    }
  }
  return result;
}


// CDOTA_Modifier_KeeperOfTheLight_Illuminate::~CDOTA_Modifier_KeeperOfTheLight_Illuminate  (line 473, @0x0000000002c92680, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_KeeperOfTheLight_Illuminate::~CDOTA_Modifier_KeeperOfTheLight_Illuminate(
        CDOTA_Modifier_KeeperOfTheLight_Illuminate *const this)
{
  this->_vptr_CDOTA_Buff = &off_45BD190;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_KeeperOfTheLight_Illuminate::~CDOTA_Modifier_KeeperOfTheLight_Illuminate  (line 473, @0x0000000002c926a0, libserver.so)  // inlines: ~CDOTA_Modifier_KeeperOfTheLight_Illuminate
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_KeeperOfTheLight_Illuminate::~CDOTA_Modifier_KeeperOfTheLight_Illuminate(
        CDOTA_Modifier_KeeperOfTheLight_Illuminate *const this)
{
  this->_vptr_CDOTA_Buff = &off_45BD190;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_KeeperOfTheLight_Illuminate::IsHidden  (line 481, @0x0000000002c893b0, libserver.so)
bool __fastcall CDOTA_Modifier_KeeperOfTheLight_Illuminate::IsHidden(
        CDOTA_Modifier_KeeperOfTheLight_Illuminate *const this)
{
  return 1;
}


// CDOTA_Modifier_KeeperOfTheLight_Illuminate::GetNumAvoidLocations  (line 484, @0x0000000002c893c0, libserver.so)
int __fastcall CDOTA_Modifier_KeeperOfTheLight_Illuminate::GetNumAvoidLocations(
        CDOTA_Modifier_KeeperOfTheLight_Illuminate *const this)
{
  return 4;
}


// CDOTA_Modifier_KeeperOfTheLight_Illuminate::GetAvoidRadius  (line 487, @0x0000000002c893d0, libserver.so)
float __fastcall CDOTA_Modifier_KeeperOfTheLight_Illuminate::GetAvoidRadius(
        CDOTA_Modifier_KeeperOfTheLight_Illuminate *const this,
        int iAvoid)
{
  return this->radius + 100.0;
}


// CDOTA_Modifier_KeeperOfTheLight_Illuminate::IsAvoidMagical  (line 488, @0x0000000002c893f0, libserver.so)
bool __fastcall CDOTA_Modifier_KeeperOfTheLight_Illuminate::IsAvoidMagical(
        CDOTA_Modifier_KeeperOfTheLight_Illuminate *const this)
{
  return 1;
}


// CDOTA_Modifier_KeeperOfTheLight_Illuminate::IsPersistentAvoidance  (line 489, @0x0000000002c89400, libserver.so)
bool __fastcall CDOTA_Modifier_KeeperOfTheLight_Illuminate::IsPersistentAvoidance(
        CDOTA_Modifier_KeeperOfTheLight_Illuminate *const this)
{
  return 0;
}


// CDOTA_Modifier_KeeperOfTheLight_Illuminate::OnCreated  (line 511, @0x0000000002c5c8d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>, VectorAdd, VectorMultiply, VectorNormalize2D, VectorSubtract, operator*, operator+, operator-, operator=
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorPosition, VectorNormalize, CBaseEntity::GetAbsAngles, AngleVectors, CDOTA_Buff::GetParent, DOTA_EmitSound, CDOTA_Buff::StartIntervalThink
// strings: "channel_vision_radius", "channel_vision_interval", "channel_vision_duration", "channel_vision_step", "Hero_KeeperOfTheLight.Illuminate.Charge"
void __fastcall CDOTA_Modifier_KeeperOfTheLight_Illuminate::OnCreated(
        CDOTA_Modifier_KeeperOfTheLight_Illuminate *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax
  int range; // r12d
  CDOTABaseAbility *v11; // rax
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r12
  CDOTABaseAbility *v14; // rax
  vec_t v15; // xmm0_4
  vec_t v16; // xmm1_4
  CDOTA_BaseNPC *v17; // rax
  const QAngle *AbsAngles; // rax
  float channel_vision_step; // xmm0_4
  __m128i x_low; // xmm3
  float v21; // r12d
  CDOTA_BaseNPC *v22; // rax
  const Vector *v23; // rax
  vec_t v24; // xmm0_4
  vec_t v25; // xmm2_4
  CDOTA_BaseNPC *Parent; // rax
  float v27; // xmm1_4
  float v28; // [rsp+8h] [rbp-28h]
  float v29; // [rsp+Ch] [rbp-24h]
  Vector CursorPosition; // 0:kr00_12.12

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->range, "range");
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 != 0 )
    this->damage_per_second = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "damage_per_second", -1, 0);
  else
    this->damage_per_second = 0.0;
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->radius, "radius");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &this->channel_vision_radius, "channel_vision_radius");
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
    this->channel_vision_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                      v7,
                                      "channel_vision_interval",
                                      -1,
                                      0);
  else
    this->channel_vision_interval = 0.0;
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 != 0 )
    this->channel_vision_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                      v8,
                                      "channel_vision_duration",
                                      -1,
                                      0);
  else
    this->channel_vision_duration = 0.0;
  v9 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v9, &this->channel_vision_step, "channel_vision_step");
  if ( CDOTA_Buff::GetAbility(this) != 0 )
  {
    range = this->range;
    v11 = CDOTA_Buff::GetAbility(this);
    this->range = (*(v11->_vptr_IHandleEntity + 228))(v11) + range;
  }
  Caster = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  v14 = CDOTA_Buff::GetAbility(this);
  CursorPosition = CDOTABaseAbility::GetCursorPosition(v14);
  v15 = CursorPosition.y - AbsOrigin->y;
  v16 = CursorPosition.x - AbsOrigin->x;
  this->m_vCastDirection.z = 0.0;
  this->m_vCastDirection.y = v15;
  this->m_vCastDirection.x = v16;
  if ( VectorNormalize(&this->m_vCastDirection) < 0.0099999998 )
  {
    v17 = CDOTA_Buff::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v17);
    AngleVectors(AbsAngles, &this->m_vCastDirection, 0, 0);
  }
  channel_vision_step = this->channel_vision_step;
  x_low = LODWORD(this->m_vCastDirection.x);
  *x_low.m128i_i32 = *x_low.m128i_i32 * channel_vision_step;
  v21 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
  v28 = this->m_vCastDirection.y * channel_vision_step;
  v29 = channel_vision_step * this->m_vCastDirection.z;
  v22 = CDOTA_Buff::GetCaster(this);
  v23 = CBaseEntity::GetAbsOrigin(v22);
  v24 = v29 + v23->z;
  v25 = v21 + v23->x;
  this->m_vNextVisionLocation.y = v28 + v23->y;
  this->m_vNextVisionLocation.z = v24;
  this->m_vNextVisionLocation.x = v25;
  Parent = CDOTA_Buff::GetParent(this);
  DOTA_EmitSound(8, "Hero_KeeperOfTheLight.Illuminate.Charge", Parent);
  (*(this->_vptr_CDOTA_Buff + 56))(this);
  CDOTA_Buff::StartIntervalThink(this, this->channel_vision_interval, v27);
}


// CDOTA_Modifier_KeeperOfTheLight_Illuminate::OnIntervalThink  (line 548, @0x0000000002c22a20, libserver.so)  // inlines: DOTAGameRules, GetGameTime, GetTeamNumber, SpeakConcept, VectorMultiply, operator*, operator+=
// calls: CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTA_Buff::GetCaster, CDOTA_Speech::SpeakConcept, CDOTAFogOfWarSystem::AddTempViewer, CResponseCriteriaSet::~CResponseCriteriaSet, _Unwind_Resume
// strings: "keeper_of_the_light_illuminate", "channelability"
void __fastcall CDOTA_Modifier_KeeperOfTheLight_Illuminate::OnIntervalThink(
        CDOTA_Modifier_KeeperOfTheLight_Illuminate *const this)
{
  float v1; // xmm0_4
  CDOTA_Speech *m_pSpeech; // rdi
  CDOTA_BaseNPC *Caster; // rax
  float channel_vision_step; // xmm2_4
  vec_t v6; // xmm1_4
  vec_t v7; // xmm0_4
  vec_t v8; // xmm2_4
  float channel_vision_radius; // [rsp+18h] [rbp-70h]
  float channel_vision_duration; // [rsp+1Ch] [rbp-6Ch]
  __int64 v11; // [rsp+20h] [rbp-68h] BYREF

  v1 = 0.0;
  if ( g_pGameRules != 0 )
    v1 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_flLastChantTime = v1;
  CResponseCriteriaSet::CResponseCriteriaSet(&v11);
  CResponseCriteriaSet::AppendCriteria(&v11, "channelability", "keeper_of_the_light_illuminate", 1.0);
  m_pSpeech = CDOTA_Buff::GetCaster(this)->m_Speech.m_pSpeech;
  if ( m_pSpeech != 0 )
    CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &v11, 4, 0, 0, 0, 0);
  channel_vision_duration = this->channel_vision_duration;
  channel_vision_radius = this->channel_vision_radius;
  Caster = CDOTA_Buff::GetCaster(this);
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_POWERSHOT,
    Caster->m_iTeamNum.m_Value,
    &this->m_vNextVisionLocation,
    channel_vision_radius,
    channel_vision_duration,
    0);
  channel_vision_step = this->channel_vision_step;
  v6 = (this->m_vCastDirection.y * channel_vision_step) + this->m_vNextVisionLocation.y;
  v7 = (this->m_vCastDirection.z * channel_vision_step) + this->m_vNextVisionLocation.z;
  v8 = (channel_vision_step * this->m_vCastDirection.x) + this->m_vNextVisionLocation.x;
  this->m_vNextVisionLocation.y = v6;
  this->m_vNextVisionLocation.z = v7;
  this->m_vNextVisionLocation.x = v8;
  CResponseCriteriaSet::~CResponseCriteriaSet(&v11);
}


// CDOTA_Modifier_KeeperOfTheLight_Illuminate::OnDestroy  (line 565, @0x0000000002c22b90, libserver.so)  // inlines: DOTAGameRules, GetGameTime, QueueConcept, SpeakConcept
// calls: CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTA_Buff::GetCaster, CDOTA_Speech::QueueConcept, CDOTA_Buff::GetParent, CBaseEntity::StopSound, CResponseCriteriaSet::~CResponseCriteriaSet, CDOTA_Speech::SpeakConcept, _Unwind_Resume
// strings: "keeper_of_the_light_illuminate", "channelabilityend", "Hero_KeeperOfTheLight.Illuminate.Charge"
void __fastcall CDOTA_Modifier_KeeperOfTheLight_Illuminate::OnDestroy(
        CDOTA_Modifier_KeeperOfTheLight_Illuminate *const this)
{
  CDOTA_Speech *m_pSpeech; // rdi
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_Speech *v4; // rdi
  float v5; // [rsp+1Ch] [rbp-54h]
  CResponseCriteriaSet criteria; // [rsp+20h] [rbp-50h] BYREF

  CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
  CResponseCriteriaSet::AppendCriteria(&criteria, "channelabilityend", "keeper_of_the_light_illuminate", 1.0);
  if ( g_pGameRules != 0 )
  {
    v5 = *&g_pGameRules[18].m_szQuestName[20] - this->m_flLastChantTime;
    if ( v5 <= 0.25 )
      goto LABEL_3;
  }
  else
  {
    v5 = 0.0 - this->m_flLastChantTime;
    if ( v5 <= 0.25 )
    {
LABEL_3:
      m_pSpeech = CDOTA_Buff::GetCaster(this)->m_Speech.m_pSpeech;
      if ( m_pSpeech != 0 )
        CDOTA_Speech::QueueConcept(m_pSpeech, 18, 0.25 - v5, &criteria, 4, 1, 0, 0, 0);
      goto LABEL_5;
    }
  }
  v4 = CDOTA_Buff::GetCaster(this)->m_Speech.m_pSpeech;
  if ( v4 != 0 )
    CDOTA_Speech::SpeakConcept(v4, 18, &criteria, 4, 0, 0, 0, 0);
LABEL_5:
  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(Parent, "Hero_KeeperOfTheLight.Illuminate.Charge");
  CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
}


// CDOTA_Modifier_KeeperOfTheLight_Illuminate::GetAvoidLocation  (line 586, @0x0000000002c1ea90, libserver.so)  // inlines: VectorAdd, VectorDivide, VectorMultiply, operator*, operator+, operator/
// calls: CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin
Vector __fastcall CDOTA_Modifier_KeeperOfTheLight_Illuminate::GetAvoidLocation(
        CDOTA_Modifier_KeeperOfTheLight_Illuminate *const this,
        int iAvoid)
{
  int v2; // esi
  float range; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rax
  float v6; // xmm0_4
  float v9; // [rsp+0h] [rbp-2Ch]
  float v10; // [rsp+4h] [rbp-28h]
  float v11; // [rsp+8h] [rbp-24h]
  float v12[4]; // [rsp+1Ch] [rbp-10h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = iAvoid + 1;
  range = this->range;
  v9 = ((this->m_vCastDirection.x * range) * v2) * 0.25;
  v10 = ((this->m_vCastDirection.y * range) * v2) * 0.25;
  v11 = ((range * this->m_vCastDirection.z) * v2) * 0.25;
  Caster = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  v6 = v9 + AbsOrigin->x;
  v12[1] = v10 + AbsOrigin->y;
  v12[0] = v6;
  result.z = v11 + AbsOrigin->z;
  *&result.x = *v12;
  return result;
}


// CDOTA_Modifier_KeeperOfTheLight_Illuminate::AvoidStrength  (line 595, @0x0000000002c317b0, libserver.so)  // inlines: CanBeSeenByTeam, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, GetUnit, IndexToIdentity, IsValid, LookupEntity, RemapValClamped, ToDOTABaseNPC, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CBaseModelEntity::CanBeSeenByTeam, CBaseEntity::GetHealth
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Modifier_KeeperOfTheLight_Illuminate::AvoidStrength(
        CDOTA_Modifier_KeeperOfTheLight_Illuminate *const this,
        CDOTA_Bot *pBot)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // rax
  int m_CScriptComponent_high; // r13d
  CDOTA_BaseNPC *Caster; // rax
  bool CanBeSeenByTeam; // al
  float result; // xmm0_4
  int v12; // eax
  int v13; // edx
  float v14; // xmm0_4
  uint32 v15; // eax
  float v16; // xmm1_4
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  const CBaseEntity *v19; // rdi
  float Health; // xmm2_4
  float v21; // xmm2_4
  __m128 v22; // xmm2
  __m128 v23; // xmm0
  float v24; // [rsp+8h] [rbp-28h]
  float damage_per_second; // [rsp+Ch] [rbp-24h]
  float v26; // [rsp+Ch] [rbp-24h]

  m_Index = pBot->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pBot->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v6 = &v5[pBot->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v6->m_EHandle.m_Index
    || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  m_CScriptComponent_high = HIBYTE(m_pInstance[7].m_CScriptComponent);
  Caster = CDOTA_Buff::GetCaster(this);
  CanBeSeenByTeam = CBaseModelEntity::CanBeSeenByTeam(Caster, m_CScriptComponent_high);
  result = 0.0;
  if ( CanBeSeenByTeam )
  {
    damage_per_second = this->damage_per_second;
    v12 = ((*(this->_vptr_CDOTA_Buff + 34))(this, 0.0) * damage_per_second);
    v13 = 4 * v12;
    v14 = v12;
    v15 = pBot->m_hUnit.m_Index;
    v16 = v13;
    if ( v15 + 2 <= 1
      || (v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pBot->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
      || (v18 = &v17[pBot->m_hUnit.m_Index & 0x1FF]) == 0
      || v15 != v18->m_EHandle.m_Index
      || (v19 = v18->m_pInstance, v18->m_pInstance == 0)
      || !v19->m_bIsDOTANPC )
    {
      v19 = 0;
    }
    v24 = v14;
    v26 = v16;
    Health = CBaseEntity::GetHealth(v19);
    if ( v26 == v24 )
    {
      v22.m128_f32[0] = Health - v26;
      v23 = _mm_cmple_ss(0LL, v22);
      LODWORD(result) = _mm_andnot_ps(v23, 0x3F666666u).m128_u32[0] | v23.m128_i32[0] & 0x3E99999A;
    }
    else
    {
      v21 = (Health - v24) / (v26 - v24);
      if ( v21 < 0.0 )
      {
        return 0.89999998;
      }
      else
      {
        result = 0.30000001;
        if ( v21 <= 1.0 )
          return (v21 * -0.59999996) + 0.89999998;
      }
    }
  }
  return result;
}


// CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::~CDOTA_Ability_KeeperOfTheLight_IlluminateEnd  (line 611, @0x0000000002c986e0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::~CDOTA_Ability_KeeperOfTheLight_IlluminateEnd(
        CDOTA_Ability_KeeperOfTheLight_IlluminateEnd *const this)
{
  this->_vptr_IHandleEntity = &off_45BD4F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::~CDOTA_Ability_KeeperOfTheLight_IlluminateEnd  (line 611, @0x0000000002c98700, libserver.so)  // inlines: ~CDOTA_Ability_KeeperOfTheLight_IlluminateEnd
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::~CDOTA_Ability_KeeperOfTheLight_IlluminateEnd(
        CDOTA_Ability_KeeperOfTheLight_IlluminateEnd *const this)
{
  this->_vptr_IHandleEntity = &off_45BD4F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::Schema_DynamicBinding  (line 613, @0x0000000002c89410, libserver.so)
// globals: CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::Schema_DynamicBinding(
        const CDOTA_Ability_KeeperOfTheLight_IlluminateEnd *const this)
{
  return CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::s_pSchemaBinding;
}


// CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 613, @0x0000000002c89420, libserver.so)
// globals: CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::CEntityInstanceEntityClass::DestructInstance  (line 613, @0x0000000002c89430, libserver.so)  // inlines: Destruct<CDOTA_Ability_KeeperOfTheLight_IlluminateEnd>
void __fastcall CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::CEntityInstanceEntityClass::FreeInstance  (line 613, @0x0000000002c89450, libserver.so)
void __fastcall CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::CEntityInstanceEntityClass::CanAllocate  (line 613, @0x0000000002c89470, libserver.so)
bool __fastcall CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 613, @0x0000000002c89480, libserver.so)
// globals: CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::s_pSchemaBinding;
}


// CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::CEntityInstanceEntityClass::AllocateInstance  (line 613, @0x0000000002c8fda0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::CEntityInstanceEntityClass::ConstructInstance  (line 613, @0x0000000002c94c50, libserver.so)  // inlines: CDOTA_Ability_KeeperOfTheLight_IlluminateEnd, Construct<CDOTA_Ability_KeeperOfTheLight_IlluminateEnd>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45BD4F0;
  }
  return p;
}


// CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 613, @0x0000000002ca2340, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 613, @0x0000000002ca2360, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal  (line 613, @0x0000000002cbf9e0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "keeper_of_the_light_illuminate_end", "CDOTA_Ability_KeeperOfTheLight_IlluminateEnd"
// globals: `guard variable for'CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass, CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClassInfo, CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClassInfo
CEntityClass *__cdecl CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass) != 0 )
  {
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_pClassInfo = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_flags = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_pInputs = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_nInputCount = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_pOutputs = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_nOutputCount = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_pGameClass = 0;
    CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass._vptr_CEntityClass = off_45BD470;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass);
    __cxa_atexit(
      CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass != 0 )
    return &CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass;
  if ( `guard variable for'CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClassInfo,
      "CDOTA_Ability_KeeperOfTheLight_IlluminateEnd",
      "keeper_of_the_light_illuminate_end",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClassInfo);
  }
  CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_pClassInfo = &CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClassInfo;
  CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_pBaseClassInfo = CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass = &CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass;
  CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClassInfo.m_pClass = &CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass;
  CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_IlluminateEndClass;
}


// CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::ProcsMagicStick  (line 617, @0x0000000002c89490, libserver.so)
bool __fastcall CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::ProcsMagicStick(
        CDOTA_Ability_KeeperOfTheLight_IlluminateEnd *const this)
{
  return 0;
}


// CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetAssociatedPrimaryAbilities  (line 620, @0x0000000002c894a0, libserver.so)
// strings: "keeper_of_the_light_illuminate"
const char *__fastcall CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::GetAssociatedPrimaryAbilities(
        CDOTA_Ability_KeeperOfTheLight_IlluminateEnd *const this)
{
  return "keeper_of_the_light_illuminate";
}


// CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::IsHiddenWhenStolen  (line 622, @0x0000000002c894b0, libserver.so)
bool __fastcall CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::IsHiddenWhenStolen(
        CDOTA_Ability_KeeperOfTheLight_IlluminateEnd *const this)
{
  return 1;
}


// CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::OnSpellStart  (line 629, @0x0000000002c1ebf0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName
// strings: "keeper_of_the_light_illuminate"
void __fastcall CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::OnSpellStart(
        CDOTA_Ability_KeeperOfTheLight_IlluminateEnd *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "keeper_of_the_light_illuminate", 0);
  if ( AbilityByName != 0 )
    (*(AbilityByName->_vptr_IHandleEntity + 267))(AbilityByName, 0);
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::~CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate  (line 646, @0x0000000002c98730, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::~CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate(
        CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate *const this)
{
  this->_vptr_IHandleEntity = &off_45BDFF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::~CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate  (line 646, @0x0000000002c98750, libserver.so)  // inlines: ~CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::~CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate(
        CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate *const this)
{
  this->_vptr_IHandleEntity = &off_45BDFF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::Schema_DynamicBinding  (line 648, @0x0000000002c894c0, libserver.so)
// globals: CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::Schema_DynamicBinding(
        const CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate *const this)
{
  return CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::s_pSchemaBinding;
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 648, @0x0000000002c894d0, libserver.so)
// globals: CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::CEntityInstanceEntityClass::DestructInstance  (line 648, @0x0000000002c894e0, libserver.so)  // inlines: Destruct<CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate>
void __fastcall CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::CEntityInstanceEntityClass::FreeInstance  (line 648, @0x0000000002c89500, libserver.so)
void __fastcall CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::CEntityInstanceEntityClass::CanAllocate  (line 648, @0x0000000002c89520, libserver.so)
bool __fastcall CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 648, @0x0000000002c89530, libserver.so)
// globals: CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::s_pSchemaBinding;
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::CEntityInstanceEntityClass::AllocateInstance  (line 648, @0x0000000002c8fde0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 936);
  memset(v1, 0, 0x3A8u);
  return v1;
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::CEntityInstanceEntityClass::ConstructInstance  (line 648, @0x0000000002c94c80, libserver.so)  // inlines: CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate, CEntityHandle, CHandle, Construct<CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = -1;
    *p = &off_45BDFF0;
  }
  return p;
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 648, @0x0000000002ca2390, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 648, @0x0000000002ca23b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal  (line 648, @0x0000000002cbeff0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "keeper_of_the_light_spirit_form_illuminate", "CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate"
// globals: `guard variable for'CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIllumina, CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateCl, CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClassInfo
CEntityClass *__cdecl CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass) != 0 )
  {
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_pClassInfo = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_flags = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_pInputs = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_nInputCount = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_pOutputs = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_nOutputCount = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_pGameClass = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass._vptr_CEntityClass = off_45BDF70;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass);
    __cxa_atexit(
      CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass != 0 )
    return &CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass;
  if ( `guard variable for'CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClassInfo,
      "CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate",
      "keeper_of_the_light_spirit_form_illuminate",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClassInfo);
  }
  CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_pClassInfo = &CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClassInfo;
  CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_pBaseClassInfo = CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass = &CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass;
  CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClassInfo.m_pClass = &CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass;
  CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateClass;
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetAssociatedSecondaryAbilities  (line 653, @0x0000000002c89540, libserver.so)
// strings: "keeper_of_the_light_spirit_form_illuminate_end"
const char *__fastcall CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate *const this)
{
  return "keeper_of_the_light_spirit_form_illuminate_end";
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetAvoidRadius  (line 663, @0x0000000002cb7830, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetAvoidRadius(
        CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0) + 150.0;
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::IsAvoidMagical  (line 664, @0x0000000002c89550, libserver.so)
bool __fastcall CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::IsAvoidMagical(
        CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate *const this)
{
  return 1;
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::OnSpellStart  (line 683, @0x0000000002c544e0, libserver.so)  // inlines: DOTAGameRules, GetEHandle, GetEntryIndex, GetGameTime, GetLevelSpecialValueFor<float>, GetSerialNumber, GetTeamNumber, Set, VectorNormalize2D, VectorSubtract, operator-, operator=
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::SwapAbilities, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetCursorTarget, CBaseEntity::GetAbsOrigin, VectorNormalize, CBaseAnimating::GetAttachment, CBaseEntity::GetAbsAngles, AngleVectors, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl (23 total)
// strings: "keeper_of_the_light_spirit_form_illuminate_end", "keeper_of_the_light_spirit_form_illuminate", "keeper_of_the_light_illuminate", "attach_attack1", "particles/units/heroes/hero_keeper_of_the_light/keeper_of_the_light_illuminate_charge_spi, "max_channel_time" (8 total)
void __fastcall CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::OnSpellStart(
        CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v5; // r12
  int (**vptr_IHandleEntity)(...); // rax
  int (*v7)(...); // r13
  float v8; // xmm0_4
  CBaseEntity *CursorTarget; // rax
  const Vector *AbsOrigin; // rax
  float x; // r12d
  float y; // r13d
  CDOTA_BaseNPC *v13; // rax
  const Vector *v14; // rax
  vec_t v15; // xmm1_4
  vec_t v16; // xmm0_4
  CDOTA_BaseNPC *v17; // rax
  const Vector *v18; // rax
  __int64 v19; // rdx
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC *v22; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v24; // rax
  CDOTA_ParticleManager *v25; // rax
  CDOTA_ParticleManager *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  CDOTA_ParticleManager *v28; // rax
  CDOTA_BaseNPC *v29; // r13
  CDOTA_ParticleManager *v30; // rax
  float v31; // xmm1_4
  int m_Value; // r14d
  CDOTA_BaseNPC *v33; // rax
  Vector *v34; // r12
  CDOTA_BaseNPC *v35; // rax
  CDOTA_BaseNPC *v36; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v38; // eax
  __int16 v39; // cx
  CDOTA_BaseNPC *v40; // rax
  const QAngle *AbsAngles; // rax
  float fLength; // [rsp+1Ch] [rbp-C4h]
  Vector vCastDir; // [rsp+30h] [rbp-B0h] BYREF
  Vector vCasterAttach; // [rsp+40h] [rbp-A0h] BYREF
  Vector vCasterOrigin; // [rsp+50h] [rbp-90h]
  Vector vecFwd; // [rsp+60h] [rbp-80h] BYREF
  Vector vecRight; // [rsp+70h] [rbp-70h] BYREF
  Vector vecUp; // [rsp+80h] [rbp-60h] BYREF
  QAngle angles; // [rsp+90h] [rbp-50h] BYREF
  KeyValues kv; // [rsp+A0h] [rbp-40h] BYREF
  unsigned __int64 v51; // [rsp+B8h] [rbp-28h]
  Vector CursorPosition; // 0:kr00_12.12

  v51 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::SwapAbilities(
    Caster,
    "keeper_of_the_light_spirit_form_illuminate",
    "keeper_of_the_light_spirit_form_illuminate_end",
    0,
    1);
  v3 = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v3, "keeper_of_the_light_illuminate", 0);
  v5 = AbilityByName;
  if ( AbilityByName != 0 )
  {
    vptr_IHandleEntity = AbilityByName->_vptr_IHandleEntity;
    v7 = vptr_IHandleEntity[241];
    vptr_IHandleEntity[242](v5, 0xFFFFFFFFLL);
    v7(v5);
  }
  if ( g_pGameRules != 0 )
    v8 = *&g_pGameRules[18].m_szQuestName[20] - 0.3;
  else
    v8 = -0.30000001;
  this->m_fStartTime = v8;
  if ( CDOTABaseAbility::GetCursorTarget(this) != 0 )
  {
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(CursorTarget);
    x = AbsOrigin->x;
    y = AbsOrigin->y;
  }
  else
  {
    CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
    x = CursorPosition.x;
    y = CursorPosition.y;
  }
  v13 = CDOTABaseAbility::GetCaster(this);
  v14 = CBaseEntity::GetAbsOrigin(v13);
  v15 = x - v14->x;
  v16 = y - v14->y;
  vCastDir.z = 0.0;
  vCastDir.x = v15;
  vCastDir.y = v16;
  fLength = VectorNormalize(&vCastDir);
  v17 = CDOTABaseAbility::GetCaster(this);
  v18 = CBaseEntity::GetAbsOrigin(v17);
  v19 = *&v18->x;
  *&v18 = v18->z;
  *&vCasterOrigin.x = v19;
  LODWORD(vCasterOrigin.z) = v18;
  v20 = CDOTABaseAbility::GetCaster(this);
  CBaseAnimating::GetAttachment(v20, "attach_attack1", &vCasterAttach);
  v21 = CDOTABaseAbility::GetCaster(this);
  angles = *CBaseEntity::GetAbsAngles(v21);
  AngleVectors(&angles, &vecFwd, &vecRight, &vecUp);
  if ( fLength < 0.0099999998 )
  {
    v40 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v40);
    AngleVectors(AbsAngles, &vCastDir, 0, 0);
  }
  v22 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v22) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_keeper_of_the_light/keeper_of_the_light_illuminate_charge_spirit_form.vpcf",
                   2,
                   0,
                   0,
                   v22);
  v24 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v24, v22, 0, *&vCasterAttach.x, vCasterAttach.z);
  v25 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v25, v22, 1, *&vCasterOrigin.x, vCasterOrigin.z);
  v26 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v26, v22, 2, *&vCastDir.x, vCastDir.z);
  v27 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlOrientation(
    v27,
    v22,
    3,
    *&vecFwd.x,
    vecFwd.z,
    *&vecRight.x,
    vecRight.z,
    *&vecUp.x,
    vecUp.z);
  v28 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v28, v22, 3, *&vCasterOrigin.x, vCasterOrigin.z);
  v29 = CDOTABaseAbility::GetCaster(this);
  v30 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v30, v22, 6, v29, 1, 0, vec3_invalid, 1);
  this->max_channel_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "max_channel_time", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_keeper_of_the_light_spirit_form_illuminate");
  KeyValues::SetFloat(&kv, "duration", v31);
  KeyValues::SetInt(&kv, "fxindex", v22);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  v33 = CDOTABaseAbility::GetCaster(this);
  v34 = CBaseEntity::GetAbsOrigin(v33);
  v35 = CDOTABaseAbility::GetCaster(this);
  v36 = Thinker_Create(v35, this, "modifier_keeper_of_the_light_spirit_form_illuminate", &kv, *v34, m_Value, 0, 1, 0);
  if ( v36 != 0 && (m_pEntity = v36->m_pEntity) != 0 )
  {
    v38 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v39 = 0x7FFF;
    else
      v39 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hThinker.m_Index) = v39 | this->m_hThinker.m_Index & 0x8000;
    this->m_hThinker.m_Index = (v38 << 15) | this->m_hThinker.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hThinker.m_Index = -1;
  }
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::OnProjectileHit_ExtraData  (line 743, @0x0000000002c69ac0, libserver.so)  // inlines: DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetLevelSpecialValueFor<float>, IndexToIdentity, IsRealHero, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator CBaseEntity*, operator CEntityInstance*, operator==<CBaseEntity>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::GetInt, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_ParticleManager::ReleaseParticleIndex, ApplyDamage, EconEntity_OnOwnerKillEaterEvent, CDOTA_ParticleManager::CreateParticle, DOTA_EmitSound (14 total)
// strings: "special_bonus_unique_keeper_of_the_light", "particles/units/heroes/hero_keeper_of_the_light/keeper_of_the_light_illuminate_impact.vpc, "Hero_KeeperOfTheLight.Illuminate.Target"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
__int64 __fastcall CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::OnProjectileHit_ExtraData(
        CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate *const this,
        int *hTarget,
        const Vector *const vLocation,
        KeyValues *pExtraData)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float LevelSpecialValue; // xmm2_4
  CGameRules *v10; // rax
  float max_channel_time; // xmm0_4
  float v12; // xmm1_4
  int v13; // eax
  unsigned __int16 v14; // dx
  CEntityIdentity *v15; // rcx
  CEntityIdentity *v16; // rsi
  CEntityIdentity *v17; // rcx
  int Int; // eax
  int v19; // r12d
  CDOTA_ParticleManager *v20; // rax
  int m_nFXIndex; // ebx
  CDOTA_ParticleManager *v22; // rax
  CEntityInstance *m_pInstance; // r12
  CDOTA_BaseNPC *v25; // rax
  double v26; // xmm0_8
  CDOTA_BaseNPC_Hero *v27; // r15
  CDOTA_BaseNPC *v28; // rax
  CDOTA_BaseNPC_Hero *v29; // rdi
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r15d
  CDOTA_ParticleManager *v32; // rax
  float v33; // xmm0_4
  int v34; // r15d
  CDOTA_BaseNPC *v35; // rax
  CDOTAPlayer *v36; // rax
  CDOTAPlayer *v37; // rax
  float flHeal; // [rsp+Ch] [rbp-34h]
  float flHeala; // [rsp+Ch] [rbp-34h]
  float flHealb; // [rsp+Ch] [rbp-34h]

  this->damage_per_second = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "damage_per_second", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_keeper_of_the_light", 0);
  if ( AbilityByName == 0 || AbilityByName->m_iLevel.m_Value <= 0 )
  {
    LevelSpecialValue = 0.0;
    v10 = g_pGameRules;
    if ( g_pGameRules != 0 )
      goto LABEL_4;
LABEL_16:
    max_channel_time = this->max_channel_time;
    v12 = 0.0 - this->m_fStartTime;
    if ( v12 <= max_channel_time )
    {
      max_channel_time = 0.0;
      if ( v12 >= 0.0 )
        goto LABEL_14;
    }
    goto LABEL_5;
  }
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  v10 = g_pGameRules;
  if ( g_pGameRules == 0 )
    goto LABEL_16;
LABEL_4:
  max_channel_time = this->max_channel_time;
  v12 = *&v10[18].m_szQuestName[20] - this->m_fStartTime;
  if ( v12 <= max_channel_time )
  {
    max_channel_time = 0.0;
    if ( v12 >= 0.0 )
LABEL_14:
      max_channel_time = v12;
  }
LABEL_5:
  this->m_fPower = max_channel_time;
  v13 = *hTarget;
  if ( (*hTarget + 2) <= 1 )
    goto LABEL_11;
  v14 = *hTarget & 0x7FFF;
  v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[v14 >> 9];
  if ( v15 == 0 )
    goto LABEL_11;
  v16 = &v15[*hTarget & 0x1FF];
  if ( v16 != 0 && v13 == v16->m_EHandle.m_Index )
  {
    m_pInstance = v16->m_pInstance;
    if ( v16->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
    {
      flHeal = LevelSpecialValue;
      if ( CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value == HIBYTE(m_pInstance[7].m_CScriptComponent) )
      {
        v33 = (this->damage_per_second * this->m_fPower) + flHeal;
        if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        {
          v34 = v33;
          flHealb = (this->damage_per_second * this->m_fPower) + flHeal;
          v35 = CDOTABaseAbility::GetCaster(this);
          v36 = (*(v35->_vptr_IHandleEntity + 413))(v35);
          SendOverheadEventMessage(v36, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, m_pInstance, v34, 0);
          v37 = (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance);
          SendOverheadEventMessage(v37, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, m_pInstance, v34, 0);
          v33 = flHealb;
        }
        CDOTA_BaseNPC::Heal(m_pInstance, v33, this, 0, 1);
      }
      else
      {
        flHeala = (this->damage_per_second * this->m_fPower) + flHeal;
        v25 = CDOTABaseAbility::GetCaster(this);
        v26 = ApplyDamage(v25, m_pInstance, this, flHeala, 2, 0);
      }
      if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
        && LOBYTE(m_pInstance[71].m_pEntity) == 0
        && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance, v26) == 0 )
      {
        if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
          || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0
          || (v27 = m_pInstance, LOBYTE(m_pInstance[71].m_pEntity) != 0) )
        {
          v27 = 0;
        }
        v28 = CDOTABaseAbility::GetCaster(this);
        v29 = 0;
        if ( v28 != 0 && v28->m_bIsDOTANPC && (v28->m_iUnitType & 1) != 0 && !v28->m_bIsIllusion.m_Value )
          v29 = v28;
        EconEntity_OnOwnerKillEaterEvent(
          v29,
          v27,
          kill_eater_event_t::kKillEaterEventType_KeeperOfTheLight_IlluminateKills,
          1,
          INVALID_ITEM_DEF_INDEX);
      }
      ParticleManager = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_keeper_of_the_light/keeper_of_the_light_illuminate_impact.vpcf",
                   1,
                   m_pInstance,
                   0,
                   0);
      v32 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v32, Particle);
      DOTA_EmitSound(10, "Hero_KeeperOfTheLight.Illuminate.Target", m_pInstance);
      v13 = *hTarget;
      if ( (*hTarget + 2) <= 1 )
        goto LABEL_11;
      v14 = *hTarget & 0x7FFF;
      v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[v14 >> 9];
      if ( v15 == 0 )
        goto LABEL_11;
    }
  }
  v17 = &v15[v14 & 0x1FF];
  if ( v17 == 0 || v13 != v17->m_EHandle.m_Index || v17->m_pInstance == 0 )
  {
LABEL_11:
    Int = KeyValues::GetInt(pExtraData, "FXIndex", 0);
    this->m_nFXIndex = Int;
    v19 = Int;
    v20 = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(v20, v19, 0);
    m_nFXIndex = this->m_nFXIndex;
    v22 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v22, m_nFXIndex);
  }
  return 0;
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::OnUpgrade  (line 800, @0x0000000002c219c0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "keeper_of_the_light_spirit_form_illuminate_end", "keeper_of_the_light_illuminate", "keeper_of_the_light_illuminate_end"
void __fastcall CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::OnUpgrade(
        CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTABaseAbility *v7; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "keeper_of_the_light_spirit_form_illuminate_end", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value < this->m_iLevel.m_Value )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  v4 = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTA_BaseNPC::FindAbilityByName(v4, "keeper_of_the_light_illuminate", 0);
  if ( v5 != 0 && v5->m_iLevel.m_Value < this->m_iLevel.m_Value )
    CDOTABaseAbility::UpgradeAbility(v5, 0);
  v6 = CDOTABaseAbility::GetCaster(this);
  v7 = CDOTA_BaseNPC::FindAbilityByName(v6, "keeper_of_the_light_illuminate_end", 0);
  if ( v7 != 0 && v7->m_iLevel.m_Value < this->m_iLevel.m_Value )
    CDOTABaseAbility::UpgradeAbility(v7, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::OnUnStolen  (line 827, @0x0000000002c2d270, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::OnUnStolen, CDOTA_ModifierManager::RemoveModifierByName
// strings: "modifier_keeper_of_the_light_spirit_form_illuminate"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::OnUnStolen(
        CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rdi

  CDOTABaseAbility::OnUnStolen(this);
  m_Index = this->m_hThinker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hThinker.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hThinker.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
          CDOTA_ModifierManager::RemoveModifierByName(
            &m_pInstance[64].m_worldGroupId,
            "modifier_keeper_of_the_light_spirit_form_illuminate");
      }
    }
  }
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetAvoidStrength  (line 843, @0x0000000002c2e1f0, libserver.so)  // inlines: DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, RemapValClamped, ToDOTABaseNPC, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHealth
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::GetAvoidStrength(
        CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate *const this,
        CDOTA_Bot *pBot)
{
  float v2; // xmm1_4
  int v3; // eax
  int v4; // edx
  float v5; // xmm1_4
  uint32 m_Index; // eax
  float v7; // xmm2_4
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  const CBaseEntity *m_pInstance; // rdi
  float Health; // xmm3_4
  __m128 v12; // xmm3
  __m128 v13; // xmm0
  float result; // xmm0_4
  float v15; // xmm3_4
  float v16; // [rsp+8h] [rbp-8h]
  float v17; // [rsp+Ch] [rbp-4h]

  if ( g_pGameRules != 0 )
    v2 = *&g_pGameRules[18].m_szQuestName[20];
  else
    v2 = 0.0;
  v3 = ((v2 - this->m_fStartTime) * this->damage_per_second);
  v4 = 4 * v3;
  v5 = v3;
  m_Index = pBot->m_hUnit.m_Index;
  v7 = v4;
  if ( m_Index + 2 <= 1
    || (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pBot->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v9 = &v8[pBot->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v9->m_EHandle.m_Index
    || (m_pInstance = v9->m_pInstance, v9->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v16 = v5;
  v17 = v7;
  Health = CBaseEntity::GetHealth(m_pInstance);
  if ( v17 == v16 )
  {
    v12.m128_f32[0] = Health - v17;
    v13 = _mm_cmple_ss(0, v12);
    LODWORD(result) = _mm_andnot_ps(v13, 0x3F666666u).m128_u32[0] | v13.m128_i32[0] & 0x3E99999A;
  }
  else
  {
    v15 = (Health - v16) / (v17 - v16);
    if ( v15 < 0.0 )
    {
      return 0.89999998;
    }
    else
    {
      result = 0.30000001;
      if ( v15 <= 1.0 )
        return (v15 * -0.59999996) + 0.89999998;
    }
  }
  return result;
}


// CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate::~CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate  (line 854, @0x0000000002c92630, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate::~CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate(
        CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate *const this)
{
  this->_vptr_CDOTA_Buff = &off_45BEAB0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate::~CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate  (line 854, @0x0000000002c92650, libserver.so)  // inlines: ~CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate::~CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate(
        CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate *const this)
{
  this->_vptr_CDOTA_Buff = &off_45BEAB0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate::GetNumAvoidLocations  (line 869, @0x0000000002c89560, libserver.so)
int __fastcall CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate::GetNumAvoidLocations(
        CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate *const this)
{
  return 4;
}


// CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate::GetAvoidRadius  (line 872, @0x0000000002c89570, libserver.so)
float __fastcall CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate::GetAvoidRadius(
        CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate *const this,
        int iAvoid)
{
  return this->radius + 100.0;
}


// CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate::IsAvoidMagical  (line 873, @0x0000000002c89590, libserver.so)
bool __fastcall CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate::IsAvoidMagical(
        CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate *const this)
{
  return 1;
}


// CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate::IsPersistentAvoidance  (line 874, @0x0000000002c895a0, libserver.so)
bool __fastcall CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate::IsPersistentAvoidance(
        CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate *const this)
{
  return 0;
}


// CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate::OnCreated  (line 907, @0x0000000002c5cba0, libserver.so)  // inlines: AssignTo, DOTAGameRules, DotaRetrieveAbilityValue<float>, GetGameTime, GetLevelSpecialValueFor<float>, VectorNormalize2D, VectorSubtract, operator-, operator=
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorPosition, VectorNormalize, CDOTA_Buff::GetParent, CDOTA_BaseNPC::GetCursorPosition, CBaseEntity::GetAbsAngles, KeyValues::GetInt, DOTA_EmitSound (14 total)
// strings: "max_channel_time", "channel_vision_radius", "channel_vision_interval", "channel_vision_duration", "channel_vision_step", "fxindex" (7 total)
void __fastcall CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate::OnCreated(
        CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate *const this,
        KeyValues *pKV)
{
  int *p_vision_radius; // r13
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax
  CDOTABaseAbility *v10; // rax
  CDOTABaseAbility *v11; // rax
  CDOTABaseAbility *v12; // rax
  CDOTABaseAbility *v13; // rax
  CDOTABaseAbility *v14; // rax
  CDOTABaseAbility *v15; // rax
  CDOTABaseAbility *v16; // rax
  int range; // r13d
  CDOTABaseAbility *v18; // rax
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r13
  CDOTABaseAbility *v21; // rax
  vec_t v22; // xmm0_4
  vec_t v23; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  CGameRules *v27; // rax
  float v28; // xmm0_4
  CDOTA_BaseNPC *v29; // rax
  CDOTA_BaseNPC *v30; // rax
  float v31; // xmm1_4
  CDOTA_BaseNPC *v32; // rax
  const QAngle *AbsAngles; // rax
  Vector CursorPosition; // 0:kr00_12.12
  Vector v35; // 0:kr14_12.12

  p_vision_radius = &this->vision_radius;
  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->range, "range");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, p_vision_radius, "vision_radius");
  v7 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v7, &this->radius, "radius");
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 != 0 )
    this->damage_per_second = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v8, "damage_per_second", -1, 0);
  else
    this->damage_per_second = 0.0;
  v9 = CDOTA_Buff::GetAbility(this);
  if ( v9 != 0 )
    this->max_channel_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v9, "max_channel_time", -1, 0);
  else
    this->max_channel_time = 0.0;
  v10 = CDOTA_Buff::GetAbility(this);
  if ( v10 != 0 )
    this->speed = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v10, "speed", -1, 0);
  else
    this->speed = 0.0;
  v11 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v11, p_vision_radius, "vision_radius");
  v12 = CDOTA_Buff::GetAbility(this);
  if ( v12 != 0 )
    this->vision_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v12, "vision_duration", -1, 0);
  else
    this->vision_duration = 0.0;
  v13 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v13, &this->channel_vision_radius, "channel_vision_radius");
  v14 = CDOTA_Buff::GetAbility(this);
  if ( v14 != 0 )
    this->channel_vision_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                      v14,
                                      "channel_vision_interval",
                                      -1,
                                      0);
  else
    this->channel_vision_interval = 0.0;
  v15 = CDOTA_Buff::GetAbility(this);
  if ( v15 != 0 )
    this->channel_vision_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                      v15,
                                      "channel_vision_duration",
                                      -1,
                                      0);
  else
    this->channel_vision_duration = 0.0;
  v16 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v16, &this->channel_vision_step, "channel_vision_step");
  if ( CDOTA_Buff::GetAbility(this) != 0 )
  {
    range = this->range;
    v18 = CDOTA_Buff::GetAbility(this);
    this->range = (*(v18->_vptr_IHandleEntity + 228))(v18) + range;
  }
  Caster = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  v21 = CDOTA_Buff::GetAbility(this);
  CursorPosition = CDOTABaseAbility::GetCursorPosition(v21);
  v22 = CursorPosition.y - AbsOrigin->y;
  v23 = CursorPosition.x - AbsOrigin->x;
  this->m_vCastDirection.z = 0.0;
  this->m_vCastDirection.y = v22;
  this->m_vCastDirection.x = v23;
  if ( VectorNormalize(&this->m_vCastDirection) < 0.0099999998 )
  {
    v32 = CDOTA_Buff::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v32);
    AngleVectors(AbsAngles, &this->m_vCastDirection, 0, 0);
  }
  Parent = CDOTA_Buff::GetParent(this);
  this->m_vNextVisionLocation = *CBaseEntity::GetAbsOrigin(Parent);
  v25 = CDOTA_Buff::GetCaster(this);
  this->m_vCastLoc = *CBaseEntity::GetAbsOrigin(v25);
  v26 = CDOTA_Buff::GetCaster(this);
  v35 = CDOTA_BaseNPC::GetCursorPosition(v26);
  this->m_vTargetLoc.z = v35.z;
  v27 = g_pGameRules;
  *&this->m_vTargetLoc.x = *&v35.x;
  if ( v27 != 0 )
    v28 = *&v27[18].m_szQuestName[20] - 0.30000001;
  else
    v28 = -0.30000001;
  this->m_fStartTime = v28;
  v29 = CDOTA_Buff::GetCaster(this);
  this->m_qCastAngle = *CBaseEntity::GetAbsAngles(v29);
  this->m_nFXIndex = KeyValues::GetInt(pKV, "fxindex", 0);
  v30 = CDOTA_Buff::GetParent(this);
  DOTA_EmitSound(8, "Hero_KeeperOfTheLight.Illuminate.Charge", v30);
  (*(this->_vptr_CDOTA_Buff + 56))(this);
  CDOTA_Buff::StartIntervalThink(this, this->channel_vision_interval, v31);
}


// CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate::OnIntervalThink  (line 953, @0x0000000002c22280, libserver.so)  // inlines: GetTeamNumber, VectorMultiply, operator*, operator+=
// calls: CDOTA_Buff::GetCaster, CDOTAFogOfWarSystem::AddTempViewer
void __fastcall CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate::OnIntervalThink(
        CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  float channel_vision_step; // xmm2_4
  vec_t v4; // xmm1_4
  vec_t v5; // xmm0_4
  vec_t v6; // xmm2_4
  float flDuration; // [rsp+8h] [rbp-18h]
  float flRadius; // [rsp+Ch] [rbp-14h]

  flDuration = this->channel_vision_duration;
  flRadius = this->channel_vision_radius;
  Caster = CDOTA_Buff::GetCaster(this);
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_POWERSHOT,
    Caster->m_iTeamNum.m_Value,
    &this->m_vNextVisionLocation,
    flRadius,
    flDuration,
    0);
  channel_vision_step = this->channel_vision_step;
  v4 = (this->m_vCastDirection.y * channel_vision_step) + this->m_vNextVisionLocation.y;
  v5 = (this->m_vCastDirection.z * channel_vision_step) + this->m_vNextVisionLocation.z;
  v6 = (channel_vision_step * this->m_vCastDirection.x) + this->m_vNextVisionLocation.x;
  this->m_vNextVisionLocation.y = v4;
  this->m_vNextVisionLocation.z = v5;
  this->m_vNextVisionLocation.x = v6;
}


// CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate::DoIlluminate  (line 964, @0x0000000002c41810, libserver.so)  // inlines: CEntityHandle, CHandle, DOTAGameRules, GetEHandle, GetEntryIndex, GetGameTime, GetSerialNumber, GetTimeOfDay, IsDaytime, RemapValClamped, Set, Vector, VectorMultiply, VectorNormalize2D, VectorSubtract, clamp<float, float>, operator*, operator-, operator=, sLinearProjectileCreateInfo
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, VectorNormalize, CDOTA_Buff::CreateBuffParticleEffect, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleFoWProperties, KeyValues::KeyValues, KeyValues::SetInt, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTA_ProjectileManager::CreateLinearProjectile (17 total)
// callers: CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate::OnDestroy
// strings: "particles/units/heroes/hero_keeper_of_the_light/keeper_of_the_light_illuminate.vpcf", "spirit_form_illuminate"
void __fastcall CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate::DoIlluminate(
        CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate *const this)
{
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  float max_channel_time; // xmm0_4
  float v5; // xmm1_4
  float x; // xmm1_4
  float y; // xmm0_4
  vec_t v8; // xmm0_4
  int BuffParticleEffect; // eax
  int v10; // r12d
  CDOTA_ParticleManager *v11; // rax
  float speed; // xmm0_4
  int m_nFXIndexB; // r12d
  CDOTA_ParticleManager *v14; // rax
  unsigned int v15; // xmm0_4
  int v16; // r12d
  CDOTA_ParticleManager *v17; // rax
  int v18; // r12d
  CDOTA_ParticleManager *v19; // rax
  int v20; // r12d
  float m_fPower; // xmm0_4
  CDOTA_ParticleManager *v22; // rax
  float range; // xmm0_4
  int v24; // r12d
  CDOTA_ParticleManager *v25; // rax
  int v26; // r12d
  CDOTA_ParticleManager *v27; // rax
  vec_t v28; // xmm1_4
  vec_t z; // xmm0_4
  CDOTABaseAbility *Ability; // rax
  vec_t v31; // xmm0_4
  float v32; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v35; // eax
  __int16 v36; // cx
  CDOTA_BaseNPC *v37; // rax
  int v38; // eax
  CDOTA_BaseNPC *v39; // rax
  float v40; // xmm3_4
  float v41; // xmm0_4
  float flFoWRadius; // [rsp+Ch] [rbp-E4h]
  Vector vDirection; // [rsp+10h] [rbp-E0h] BYREF
  double v44; // [rsp+20h] [rbp-D0h]
  float v45; // [rsp+28h] [rbp-C8h]
  sLinearProjectileCreateInfo info; // [rsp+30h] [rbp-C0h] BYREF
  KeyValues kv; // [rsp+B0h] [rbp-40h] BYREF
  unsigned __int64 v48; // [rsp+C8h] [rbp-28h]

  v48 = __readfsqword(0x28u);
  m_nFXIndex = this->m_nFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 0);
  if ( g_pGameRules != 0 )
  {
    max_channel_time = this->max_channel_time;
    v5 = *&g_pGameRules[18].m_szQuestName[20] - this->m_fStartTime;
    if ( v5 <= max_channel_time )
    {
      max_channel_time = 0.0;
      if ( v5 >= 0.0 )
LABEL_15:
        max_channel_time = v5;
    }
  }
  else
  {
    max_channel_time = this->max_channel_time;
    v5 = 0.0 - this->m_fStartTime;
    if ( v5 <= max_channel_time )
    {
      max_channel_time = 0.0;
      if ( v5 >= 0.0 )
        goto LABEL_15;
    }
  }
  this->m_fPower = max_channel_time;
  x = this->m_vTargetLoc.x;
  y = this->m_vTargetLoc.y;
  vDirection.z = 0.0;
  v8 = y - this->m_vCastLoc.y;
  vDirection.x = x - this->m_vCastLoc.x;
  vDirection.y = v8;
  if ( VectorNormalize(&vDirection) < 0.0099999998 )
    AngleVectors(&this->m_qCastAngle, &vDirection, 0, 0);
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/units/heroes/hero_keeper_of_the_light/keeper_of_the_light_illuminate.vpcf",
                         8,
                         0,
                         0);
  this->m_nFXIndexB = BuffParticleEffect;
  v10 = BuffParticleEffect;
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v11, v10, 0, *&this->m_vCastLoc.x, this->m_vCastLoc.z);
  speed = this->speed;
  m_nFXIndexB = this->m_nFXIndexB;
  *(&v44 + 1) = vDirection.y * speed;
  v45 = vDirection.z * speed;
  *&v44 = speed * vDirection.x;
  v14 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v14, m_nFXIndexB, 1, v44, v45);
  *&v15 = this->radius;
  v16 = this->m_nFXIndexB;
  LODWORD(info.pAbility) = 0;
  info.pszEffectName = v15;
  v17 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v17, v16, 2, *&info.pszEffectName, *&info.pAbility);
  v18 = this->m_nFXIndexB;
  v19 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v19, v18, 3, *&this->m_vCastLoc.x, this->m_vCastLoc.z);
  v20 = this->m_nFXIndexB;
  m_fPower = this->m_fPower;
  LODWORD(info.pAbility) = 0;
  info.pszEffectName = LODWORD(m_fPower);
  v22 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v22, v20, 8, *&info.pszEffectName, *&info.pAbility);
  range = this->range;
  v24 = this->m_nFXIndexB;
  LODWORD(info.pAbility) = 0;
  info.pszEffectName = COERCE_UNSIGNED_INT(range / this->speed);
  v25 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v25, v24, 10, *&info.pszEffectName, *&info.pAbility);
  v26 = this->m_nFXIndexB;
  flFoWRadius = this->radius;
  v27 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleFoWProperties(v27, v26, 0, 3, flFoWRadius);
  KeyValues::KeyValues(&kv, "spirit_form_illuminate");
  KeyValues::SetInt(&kv, "FXIndex", this->m_nFXIndexB);
  info.bHasFrontalCone = 1;
  info.hSource.m_Index = -1;
  info.pszEffectName = 0;
  info.pAbility = 0;
  info.bCheckStartPosition = 0;
  v28 = vec3_origin.y;
  info.bProvidesVision = 0;
  z = vec3_origin.z;
  info.vSpawnOrigin.x = vec3_origin.x;
  info.vSpawnOrigin.y = v28;
  info.vSpawnOrigin.z = z;
  info.vVelocity.x = vec3_origin.x;
  info.vVelocity.y = v28;
  info.vVelocity.z = z;
  info.vAcceleration.x = vec3_origin.x;
  info.vAcceleration.y = v28;
  info.vAcceleration.z = z;
  info.fDistance = 0.0;
  info.fStartRadius = 0.0;
  info.fEndRadius = 0.0;
  info.iUnitTargetTeam = 0;
  info.iUnitTargetType = 0;
  info.iUnitTargetFlags = 0;
  info.iVisionTeamNumber = -1;
  info.iVisionRadius = -1;
  info.bDrawsOnMinimap = 0;
  info.bVisibleToEnemies = 1;
  info.bIgnoreSource = 0;
  info.bStickyFoWReveal = 0;
  info.pKVExtraData = 0;
  info.fExpireTime = 0.0;
  info.fMaxSpeed = 0.0;
  Ability = CDOTA_Buff::GetAbility(this);
  v31 = this->m_vCastLoc.x;
  info.pAbility = Ability;
  info.vSpawnOrigin.x = v31;
  info.vSpawnOrigin.y = this->m_vCastLoc.y;
  info.vSpawnOrigin.z = this->m_vCastLoc.z;
  v32 = this->speed;
  info.vVelocity.y = vDirection.y * v32;
  info.vVelocity.z = vDirection.z * v32;
  info.vVelocity.x = v32 * vDirection.x;
  info.fDistance = this->range;
  info.fStartRadius = this->radius;
  info.fEndRadius = info.fStartRadius;
  Caster = CDOTA_Buff::GetCaster(this);
  if ( Caster != 0 && (m_pEntity = Caster->m_pEntity) != 0 )
  {
    v35 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v36 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v36 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(info.hSource.m_Index) = v36 | info.hSource.m_Index & 0x8000;
    info.hSource.m_Index = (v35 << 15) | info.hSource.m_Index & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  v37 = CDOTA_Buff::GetCaster(this);
  if ( !CDOTA_BaseNPC::HasScepter(v37)
    || LOBYTE(g_pGameRules[14].m_nQuestPhase) != 0
    || BYTE1(g_pGameRules[14].m_nQuestPhase) != 0
    || (v41 = *&g_pGameRules[18].m_szQuestName[28] / 65535.0) < 0.0
    || v41 > 1.0
    || (v41 + 0.0) < 0.25
    || (v38 = 3, (v41 + 0.0) > 0.75) )
  {
    v38 = 2;
  }
  info.iUnitTargetTeam = v38;
  info.iUnitTargetType = 3;
  info.pKVExtraData = &kv;
  this->m_iProjectile = CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  v39 = CDOTA_Buff::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(
    g_pGameRules,
    v39,
    0,
    5471,
    0,
    0,
    *&this->m_vCastLoc.x,
    this->m_vCastLoc.z,
    -1.0,
    v40);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate::OnDestroy  (line 1024, @0x0000000002c41ec0, libserver.so)
// calls: CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate::DoIlluminate, CDOTA_Buff::GetParent, CBaseEntity::StopSound, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::SwapAbilities, DOTA_EmitSound
// strings: "Hero_KeeperOfTheLight.Illuminate.Charge", "keeper_of_the_light_spirit_form_illuminate_end", "keeper_of_the_light_spirit_form_illuminate", "Hero_KeeperOfTheLight.Illuminate.Discharge"
void __fastcall CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate::OnDestroy(
        CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v4; // rax

  CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate::DoIlluminate(this);
  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(Parent, "Hero_KeeperOfTheLight.Illuminate.Charge");
  Caster = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::SwapAbilities(
    Caster,
    "keeper_of_the_light_spirit_form_illuminate",
    "keeper_of_the_light_spirit_form_illuminate_end",
    1,
    0);
  v4 = CDOTA_Buff::GetCaster(this);
  DOTA_EmitSound(8, "Hero_KeeperOfTheLight.Illuminate.Discharge", v4);
}


// CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate::OnProjectileHit  (line 1039, @0x0000000002c41f40, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, ApplyDamage, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "particles/units/heroes/hero_keeper_of_the_light/keeper_of_the_light_illuminate_impact_sma, "particles/units/heroes/hero_keeper_of_the_light/keeper_of_the_light_illuminate_impact.vpc
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate::OnProjectileHit(
        CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate *const this,
        _DWORD *hTarget,
        const Vector *const vLocation)
{
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // r12
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  const char *v11; // rsi
  int Particle; // ebx
  CDOTA_ParticleManager *v13; // rax
  float flDamage; // [rsp+Ch] [rbp-24h]

  if ( (*hTarget + 2) <= 1 )
    return 0;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
  if ( v4 == 0 )
    return 0;
  v5 = &v4[*hTarget & 0x1FF];
  if ( v5 == 0 )
    return 0;
  if ( *hTarget != v5->m_EHandle.m_Index )
    return 0;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0 || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    return 0;
  flDamage = this->damage_per_second * this->m_fPower;
  Ability = CDOTA_Buff::GetAbility(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, m_pInstance, Ability, flDamage, 2, 0);
  if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
  {
    ParticleManager = GetParticleManager();
    v11 = "particles/units/heroes/hero_keeper_of_the_light/keeper_of_the_light_illuminate_impact.vpcf";
  }
  else
  {
    ParticleManager = GetParticleManager();
    v11 = "particles/units/heroes/hero_keeper_of_the_light/keeper_of_the_light_illuminate_impact_small.vpcf";
  }
  Particle = CDOTA_ParticleManager::CreateParticle(ParticleManager, v11, 1, m_pInstance, 0, 0);
  v13 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v13, Particle);
  return 0;
}


// CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate::GetAvoidLocation  (line 1064, @0x0000000002c1eb40, libserver.so)  // inlines: VectorAdd, VectorDivide, VectorMultiply, operator*, operator+, operator/
// calls: CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin
Vector __fastcall CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate::GetAvoidLocation(
        CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate *const this,
        int iAvoid)
{
  int v2; // esi
  float range; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rax
  float v6; // xmm0_4
  float v9; // [rsp+0h] [rbp-2Ch]
  float v10; // [rsp+4h] [rbp-28h]
  float v11; // [rsp+8h] [rbp-24h]
  float v12[4]; // [rsp+1Ch] [rbp-10h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = iAvoid + 1;
  range = this->range;
  v9 = ((this->m_vCastDirection.x * range) * v2) * 0.25;
  v10 = ((this->m_vCastDirection.y * range) * v2) * 0.25;
  v11 = ((range * this->m_vCastDirection.z) * v2) * 0.25;
  Caster = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  v6 = v9 + AbsOrigin->x;
  v12[1] = v10 + AbsOrigin->y;
  v12[0] = v6;
  result.z = v11 + AbsOrigin->z;
  *&result.x = *v12;
  return result;
}


// CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate::AvoidStrength  (line 1073, @0x0000000002c319c0, libserver.so)  // inlines: CanBeSeenByTeam, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, GetUnit, IndexToIdentity, IsValid, LookupEntity, RemapValClamped, ToDOTABaseNPC, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CBaseModelEntity::CanBeSeenByTeam, CBaseEntity::GetHealth
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate::AvoidStrength(
        CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate *const this,
        CDOTA_Bot *pBot)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // rax
  int m_CScriptComponent_high; // r13d
  CDOTA_BaseNPC *Caster; // rax
  bool CanBeSeenByTeam; // al
  float result; // xmm0_4
  int v12; // eax
  int v13; // edx
  float v14; // xmm0_4
  uint32 v15; // eax
  float v16; // xmm1_4
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  const CBaseEntity *v19; // rdi
  float Health; // xmm2_4
  float v21; // xmm2_4
  __m128 v22; // xmm2
  __m128 v23; // xmm0
  float v24; // [rsp+8h] [rbp-28h]
  float damage_per_second; // [rsp+Ch] [rbp-24h]
  float v26; // [rsp+Ch] [rbp-24h]

  m_Index = pBot->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pBot->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v6 = &v5[pBot->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v6->m_EHandle.m_Index
    || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  m_CScriptComponent_high = HIBYTE(m_pInstance[7].m_CScriptComponent);
  Caster = CDOTA_Buff::GetCaster(this);
  CanBeSeenByTeam = CBaseModelEntity::CanBeSeenByTeam(Caster, m_CScriptComponent_high);
  result = 0.0;
  if ( CanBeSeenByTeam )
  {
    damage_per_second = this->damage_per_second;
    v12 = ((*(this->_vptr_CDOTA_Buff + 34))(this, 0.0) * damage_per_second);
    v13 = 4 * v12;
    v14 = v12;
    v15 = pBot->m_hUnit.m_Index;
    v16 = v13;
    if ( v15 + 2 <= 1
      || (v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pBot->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
      || (v18 = &v17[pBot->m_hUnit.m_Index & 0x1FF]) == 0
      || v15 != v18->m_EHandle.m_Index
      || (v19 = v18->m_pInstance, v18->m_pInstance == 0)
      || !v19->m_bIsDOTANPC )
    {
      v19 = 0;
    }
    v24 = v14;
    v26 = v16;
    Health = CBaseEntity::GetHealth(v19);
    if ( v26 == v24 )
    {
      v22.m128_f32[0] = Health - v26;
      v23 = _mm_cmple_ss(0LL, v22);
      LODWORD(result) = _mm_andnot_ps(v23, 0x3F666666u).m128_u32[0] | v23.m128_i32[0] & 0x3E99999A;
    }
    else
    {
      v21 = (Health - v24) / (v26 - v24);
      if ( v21 < 0.0 )
      {
        return 0.89999998;
      }
      else
      {
        result = 0.30000001;
        if ( v21 <= 1.0 )
          return (v21 * -0.59999996) + 0.89999998;
      }
    }
  }
  return result;
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::~CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd  (line 1089, @0x0000000002c98780, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::~CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd(
        CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd *const this)
{
  this->_vptr_IHandleEntity = &off_45BEE10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::~CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd  (line 1089, @0x0000000002c987a0, libserver.so)  // inlines: ~CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::~CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd(
        CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd *const this)
{
  this->_vptr_IHandleEntity = &off_45BEE10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::Schema_DynamicBinding  (line 1091, @0x0000000002c895b0, libserver.so)
// globals: CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::Schema_DynamicBinding(
        const CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd *const this)
{
  return CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::s_pSchemaBinding;
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1091, @0x0000000002c895c0, libserver.so)
// globals: CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::CEntityInstanceEntityClass::DestructInstance  (line 1091, @0x0000000002c895d0, libserver.so)  // inlines: Destruct<CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd>
void __fastcall CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::CEntityInstanceEntityClass::FreeInstance  (line 1091, @0x0000000002c895f0, libserver.so)
void __fastcall CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::CEntityInstanceEntityClass::CanAllocate  (line 1091, @0x0000000002c89610, libserver.so)
bool __fastcall CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1091, @0x0000000002c89620, libserver.so)
// globals: CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::s_pSchemaBinding;
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::CEntityInstanceEntityClass::AllocateInstance  (line 1091, @0x0000000002c8fe20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::CEntityInstanceEntityClass::ConstructInstance  (line 1091, @0x0000000002c94cc0, libserver.so)  // inlines: CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd, Construct<CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45BEE10;
  }
  return p;
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1091, @0x0000000002ca23e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1091, @0x0000000002ca2400, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal  (line 1091, @0x0000000002cc6730, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "keeper_of_the_light_spirit_form_illuminate_end", "CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd"
// globals: `guard variable for'CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIllum, CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminat, CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClassInfo
CEntityClass *__cdecl CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass) != 0 )
  {
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_pClassInfo = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_flags = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_pInputs = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_nInputCount = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_pOutputs = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_nOutputCount = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_pGameClass = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass._vptr_CEntityClass = off_45BED90;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass);
    __cxa_atexit(
      CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass != 0 )
    return &CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass;
  if ( `guard variable for'CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClassInfo,
      "CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd",
      "keeper_of_the_light_spirit_form_illuminate_end",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClassInfo);
  }
  CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_pClassInfo = &CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClassInfo;
  CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_pBaseClassInfo = CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass = &CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass;
  CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClassInfo.m_pClass = &CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass;
  CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEndClass;
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::ProcsMagicStick  (line 1095, @0x0000000002c89630, libserver.so)
bool __fastcall CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::ProcsMagicStick(
        CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd *const this)
{
  return 0;
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetAssociatedPrimaryAbilities  (line 1098, @0x0000000002c89640, libserver.so)
// strings: "keeper_of_the_light_spirit_form_illuminate"
const char *__fastcall CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::GetAssociatedPrimaryAbilities(
        CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd *const this)
{
  return "keeper_of_the_light_spirit_form_illuminate";
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::IsHiddenWhenStolen  (line 1100, @0x0000000002c89650, libserver.so)
bool __fastcall CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::IsHiddenWhenStolen(
        CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd *const this)
{
  return 1;
}


// CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::OnSpellStart  (line 1107, @0x0000000002c2feb0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CEntityInstance*, operator!=<CBaseEntity>
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_ModifierManager::RemoveModifierByName
// strings: "keeper_of_the_light_spirit_form_illuminate", "modifier_keeper_of_the_light_spirit_form_illuminate"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::OnSpellStart(
        CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int vptr_IHandleEntity; // edx
  unsigned __int16 v4; // cx
  CEntityIdentity *v5; // rax
  CEntityIdentity *v6; // rax
  CEntityInstance *m_pInstance; // rdi

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "keeper_of_the_light_spirit_form_illuminate", 0);
  if ( AbilityByName != 0 )
  {
    vptr_IHandleEntity = AbilityByName[1]._vptr_IHandleEntity;
    if ( (vptr_IHandleEntity + 2) > 1 )
    {
      v4 = AbilityByName[1]._vptr_IHandleEntity;
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v4 >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[v4 & 0x1FF];
        if ( v6 != 0 && vptr_IHandleEntity == v6->m_EHandle.m_Index )
        {
          m_pInstance = v6->m_pInstance;
          if ( v6->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
            CDOTA_ModifierManager::RemoveModifierByName(
              &m_pInstance[64].m_worldGroupId,
              "modifier_keeper_of_the_light_spirit_form_illuminate");
        }
      }
    }
  }
}


// CDOTA_Ability_KeeperOfTheLight_ManaLeak::~CDOTA_Ability_KeeperOfTheLight_ManaLeak  (line 1128, @0x0000000002c987d0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_KeeperOfTheLight_ManaLeak::~CDOTA_Ability_KeeperOfTheLight_ManaLeak(
        CDOTA_Ability_KeeperOfTheLight_ManaLeak *const this)
{
  this->_vptr_IHandleEntity = &off_45BF910;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_KeeperOfTheLight_ManaLeak::~CDOTA_Ability_KeeperOfTheLight_ManaLeak  (line 1128, @0x0000000002c987f0, libserver.so)  // inlines: ~CDOTA_Ability_KeeperOfTheLight_ManaLeak
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_KeeperOfTheLight_ManaLeak::~CDOTA_Ability_KeeperOfTheLight_ManaLeak(
        CDOTA_Ability_KeeperOfTheLight_ManaLeak *const this)
{
  this->_vptr_IHandleEntity = &off_45BF910;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_KeeperOfTheLight_ManaLeak::Schema_DynamicBinding  (line 1130, @0x0000000002c89660, libserver.so)
// globals: CDOTA_Ability_KeeperOfTheLight_ManaLeak::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_KeeperOfTheLight_ManaLeak::Schema_DynamicBinding(
        const CDOTA_Ability_KeeperOfTheLight_ManaLeak *const this)
{
  return CDOTA_Ability_KeeperOfTheLight_ManaLeak::s_pSchemaBinding;
}


// CDOTA_Ability_KeeperOfTheLight_ManaLeak::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1130, @0x0000000002c89670, libserver.so)
// globals: CDOTA_Ability_KeeperOfTheLight_ManaLeak::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_KeeperOfTheLight_ManaLeak::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_KeeperOfTheLight_ManaLeak::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_KeeperOfTheLight_ManaLeak::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_KeeperOfTheLight_ManaLeak::CEntityInstanceEntityClass::DestructInstance  (line 1130, @0x0000000002c89680, libserver.so)  // inlines: Destruct<CDOTA_Ability_KeeperOfTheLight_ManaLeak>
void __fastcall CDOTA_Ability_KeeperOfTheLight_ManaLeak::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_KeeperOfTheLight_ManaLeak::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_KeeperOfTheLight_ManaLeak::CEntityInstanceEntityClass::FreeInstance  (line 1130, @0x0000000002c896a0, libserver.so)
void __fastcall CDOTA_Ability_KeeperOfTheLight_ManaLeak::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_KeeperOfTheLight_ManaLeak::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_KeeperOfTheLight_ManaLeak::CEntityInstanceEntityClass::CanAllocate  (line 1130, @0x0000000002c896c0, libserver.so)
bool __fastcall CDOTA_Ability_KeeperOfTheLight_ManaLeak::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_KeeperOfTheLight_ManaLeak::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_KeeperOfTheLight_ManaLeak::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1130, @0x0000000002c896d0, libserver.so)
// globals: CDOTA_Ability_KeeperOfTheLight_ManaLeak::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_KeeperOfTheLight_ManaLeak::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_KeeperOfTheLight_ManaLeak::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_KeeperOfTheLight_ManaLeak::s_pSchemaBinding;
}


// CDOTA_Ability_KeeperOfTheLight_ManaLeak::CEntityInstanceEntityClass::AllocateInstance  (line 1130, @0x0000000002c8fe60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_KeeperOfTheLight_ManaLeak::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_KeeperOfTheLight_ManaLeak::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_KeeperOfTheLight_ManaLeak::CEntityInstanceEntityClass::ConstructInstance  (line 1130, @0x0000000002c94cf0, libserver.so)  // inlines: CDOTA_Ability_KeeperOfTheLight_ManaLeak, Construct<CDOTA_Ability_KeeperOfTheLight_ManaLeak>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_KeeperOfTheLight_ManaLeak::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_KeeperOfTheLight_ManaLeak::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45BF910;
  }
  return p;
}


// CDOTA_Ability_KeeperOfTheLight_ManaLeak::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1130, @0x0000000002ca2430, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_KeeperOfTheLight_ManaLeak::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_KeeperOfTheLight_ManaLeak::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_KeeperOfTheLight_ManaLeak::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1130, @0x0000000002ca2450, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_KeeperOfTheLight_ManaLeak::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_KeeperOfTheLight_ManaLeak::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_KeeperOfTheLight_ManaLeak::GetEntityClassInternal  (line 1130, @0x0000000002cba500, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "keeper_of_the_light_mana_leak", "CDOTA_Ability_KeeperOfTheLight_ManaLeak"
// globals: `guard variable for'CDOTA_Ability_KeeperOfTheLight_ManaLeak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ManaLeakClass, CDOTA_Ability_KeeperOfTheLight_ManaLeak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ManaLeakClass, __dso_handle, CDOTA_Ability_KeeperOfTheLight_ManaLeak::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_KeeperOfTheLight_ManaLeak::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ManaLeakClassInfo, CDOTA_Ability_KeeperOfTheLight_ManaLeak::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ManaLeakClassInfo
CEntityClass *__cdecl CDOTA_Ability_KeeperOfTheLight_ManaLeak::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_KeeperOfTheLight_ManaLeak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ManaLeakClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_KeeperOfTheLight_ManaLeak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ManaLeakClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_KeeperOfTheLight_ManaLeak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ManaLeakClass);
    CDOTA_Ability_KeeperOfTheLight_ManaLeak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ManaLeakClass._vptr_CEntityClass = off_45BF890;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_KeeperOfTheLight_ManaLeak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ManaLeakClass);
    __cxa_atexit(
      CDOTA_Ability_KeeperOfTheLight_ManaLeak::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_KeeperOfTheLight_ManaLeak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ManaLeakClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_KeeperOfTheLight_ManaLeakClass != 0 )
    return &CDOTA_Ability_KeeperOfTheLight_ManaLeak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ManaLeakClass;
  if ( `guard variable for'CDOTA_Ability_KeeperOfTheLight_ManaLeak::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ManaLeakClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_KeeperOfTheLight_ManaLeak::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ManaLeakClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_KeeperOfTheLight_ManaLeak::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ManaLeakClassInfo,
      "CDOTA_Ability_KeeperOfTheLight_ManaLeak",
      "keeper_of_the_light_mana_leak",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_KeeperOfTheLight_ManaLeak::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ManaLeakClassInfo);
  }
  CDOTA_Ability_KeeperOfTheLight_ManaLeak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ManaLeakClass.m_pClassInfo = &CDOTA_Ability_KeeperOfTheLight_ManaLeak::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ManaLeakClassInfo;
  CDOTA_Ability_KeeperOfTheLight_ManaLeak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ManaLeakClass.m_pBaseClassInfo = CDOTA_Ability_KeeperOfTheLight_ManaLeak::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ManaLeakClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_KeeperOfTheLight_ManaLeakClass = &CDOTA_Ability_KeeperOfTheLight_ManaLeak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ManaLeakClass;
  CDOTA_Ability_KeeperOfTheLight_ManaLeak::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ManaLeakClassInfo.m_pClass = &CDOTA_Ability_KeeperOfTheLight_ManaLeak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ManaLeakClass;
  CDOTA_Ability_KeeperOfTheLight_ManaLeak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ManaLeakClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_KeeperOfTheLight_ManaLeakClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_KeeperOfTheLight_ManaLeak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ManaLeakClass;
}


// CDOTA_Ability_KeeperOfTheLight_ManaLeak::OnSpellStart  (line 1141, @0x0000000002c549d0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, ToDOTABaseNPC, VectorNormalize2D, VectorSubtract, operator-
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CBaseEntity::GetAbsOrigin, VectorNormalize, CBaseEntity::GetAbsAngles, AngleVectors, GetParticleManager (20 total)
// strings: "modifier_keeper_of_the_light_mana_leak", "particles/units/heroes/hero_keeper_of_the_light/keeper_mana_leak_cast.vpcf", "attach_attack1", "attach_hitloc", "Hero_KeeperOfTheLight.ManaLeak.Cast"
void __fastcall CDOTA_Ability_KeeperOfTheLight_ManaLeak::OnSpellStart(
        CDOTA_Ability_KeeperOfTheLight_ManaLeak *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v6; // rax
  const Vector *AbsOrigin; // r13
  const Vector *v8; // rax
  vec_t v9; // xmm1_4
  vec_t v10; // xmm0_4
  CDOTA_BaseNPC *v11; // rax
  const QAngle *AbsAngles; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  CDOTA_BaseNPC *v15; // rax
  const Vector *v16; // r14
  CDOTA_ParticleManager *v17; // rax
  const Vector *v18; // r14
  CDOTA_ParticleManager *v19; // rax
  CDOTA_ParticleManager *v20; // rax
  CDOTA_ParticleManager *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *duration; // [rsp+8h] [rbp-68h]
  Vector vCastDir; // [rsp+10h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && (BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 2) == 0
    && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_keeper_of_the_light_mana_leak");
    KeyValues::SetFloat(&kv, "duration", v4);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_keeper_of_the_light_mana_leak", &kv, 0);
    v6 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
    v8 = CBaseEntity::GetAbsOrigin(v3);
    v9 = v8->x - AbsOrigin->x;
    v10 = v8->y - AbsOrigin->y;
    vCastDir.z = 0.0;
    vCastDir.x = v9;
    vCastDir.y = v10;
    if ( VectorNormalize(&vCastDir) < 0.0099999998 )
    {
      v11 = CDOTABaseAbility::GetCaster(this);
      AbsAngles = CBaseEntity::GetAbsAngles(v11);
      AngleVectors(AbsAngles, &vCastDir, 0, 0);
    }
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_keeper_of_the_light/keeper_mana_leak_cast.vpcf",
                 2,
                 0,
                 0,
                 0);
    v15 = CDOTABaseAbility::GetCaster(this);
    v16 = CBaseEntity::GetAbsOrigin(v15);
    duration = CDOTABaseAbility::GetCaster(this);
    v17 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v17, Particle, 0, duration, 5, "attach_attack1", *v16, 1);
    v18 = CBaseEntity::GetAbsOrigin(v3);
    v19 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v19, Particle, 1, v3, 5, "attach_hitloc", *v18, 1);
    v20 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v20, Particle, 2, *&vCastDir.x, vCastDir.z);
    v21 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v21, Particle);
    v22 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(10, "Hero_KeeperOfTheLight.ManaLeak.Cast", v22);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_KeeperOfTheLight_ManaLeak::~CDOTA_Modifier_KeeperOfTheLight_ManaLeak  (line 1178, @0x0000000002c925e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_KeeperOfTheLight_ManaLeak::~CDOTA_Modifier_KeeperOfTheLight_ManaLeak(
        CDOTA_Modifier_KeeperOfTheLight_ManaLeak *const this)
{
  this->_vptr_CDOTA_Buff = &off_45C03D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_KeeperOfTheLight_ManaLeak::~CDOTA_Modifier_KeeperOfTheLight_ManaLeak  (line 1178, @0x0000000002c92600, libserver.so)  // inlines: ~CDOTA_Modifier_KeeperOfTheLight_ManaLeak
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_KeeperOfTheLight_ManaLeak::~CDOTA_Modifier_KeeperOfTheLight_ManaLeak(
        CDOTA_Modifier_KeeperOfTheLight_ManaLeak *const this)
{
  this->_vptr_CDOTA_Buff = &off_45C03D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_KeeperOfTheLight_ManaLeak::IsDebuff  (line 1183, @0x0000000002c896e0, libserver.so)
bool __fastcall CDOTA_Modifier_KeeperOfTheLight_ManaLeak::IsDebuff(
        CDOTA_Modifier_KeeperOfTheLight_ManaLeak *const this)
{
  return 1;
}


// CDOTA_Modifier_KeeperOfTheLight_ManaLeak::OnCreated  (line 1203, @0x0000000002c59dc0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::StartIntervalThink, DOTA_EmitSound
// strings: "mana_leak_pct", "Hero_KeeperOfTheLight.ManaLeak.Target", "Hero_KeeperOfTheLight.ManaLeak.Target.FP"
void __fastcall CDOTA_Modifier_KeeperOfTheLight_ManaLeak::OnCreated(
        CDOTA_Modifier_KeeperOfTheLight_ManaLeak *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  vec_t z; // xmm0_4
  float v7; // xmm1_4
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->mana_leak_pct = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "mana_leak_pct", -1, 0);
  else
    this->mana_leak_pct = 0.0;
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  this->vLastPos.x = AbsOrigin->x;
  this->vLastPos.y = AbsOrigin->y;
  z = AbsOrigin->z;
  this->bResetPosition = 0;
  this->vLastPos.z = z;
  CDOTA_Buff::StartIntervalThink(this, 0.1, v7);
  this->m_fAccumulatedManaLeak = 0.0;
  v8 = CDOTA_Buff::GetParent(this);
  DOTA_EmitSound(10, "Hero_KeeperOfTheLight.ManaLeak.Target", v8);
  v9 = CDOTA_Buff::GetParent(this);
  DOTA_EmitSound(1, "Hero_KeeperOfTheLight.ManaLeak.Target.FP", v9);
}


// CDOTA_Modifier_KeeperOfTheLight_ManaLeak::OnRefresh  (line 1228, @0x0000000002c59480, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "mana_leak_pct"
void __fastcall CDOTA_Modifier_KeeperOfTheLight_ManaLeak::OnRefresh(
        CDOTA_Modifier_KeeperOfTheLight_ManaLeak *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->mana_leak_pct = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "mana_leak_pct", -1, 0);
  else
    this->mana_leak_pct = 0.0;
}


// CDOTA_Modifier_KeeperOfTheLight_ManaLeak::OnIntervalThink  (line 1235, @0x0000000002c56430, libserver.so)  // inlines: GetMana, InState, IsInvulnerable, IsRealHero, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, VectorNormalize2D, VectorSubtract, operator-, operator=
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, VectorNormalize, CDOTA_BaseNPC::ReduceMana, CDOTA_Buff::GetAbility, CDOTA_CombatLog::AddManaDamageEvent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues (21 total)
// strings: "particles/units/heroes/hero_keeper_of_the_light/keeper_mana_leak.vpcf", "modifier_keeper_of_the_light_mana_leak_stun", "modifier_stunned", "Hero_KeeperOfTheLight.ManaLeak.Stun"
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_KeeperOfTheLight_ManaLeak::OnIntervalThink(
        CDOTA_Modifier_KeeperOfTheLight_ManaLeak *const this)
{
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // rax
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v7; // rax
  const Vector *v8; // rax
  vec_t v9; // xmm0_4
  vec_t v10; // xmm1_4
  CDOTA_BaseNPC *v11; // rax
  float v12; // xmm0_4
  float v13; // xmm1_4
  float m_Value; // xmm0_4
  int v15; // r13d
  CDOTABaseAbility *Ability; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  const Vector *v19; // r14
  CDOTA_ParticleManager *v20; // rax
  CDOTA_ParticleManager *v21; // rax
  CDOTABaseAbility *v22; // rax
  float v23; // xmm1_4
  CDOTABaseAbility *v24; // r14
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC_Hero *v26; // r14
  CDOTA_BaseNPC *v27; // rax
  CDOTA_BaseNPC_Hero *v28; // rdi
  float stun_duration; // [rsp+Ch] [rbp-54h]
  float stun_durationa; // [rsp+Ch] [rbp-54h]
  Vector vDirection; // [rsp+10h] [rbp-50h] BYREF
  KeyValues kv; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v33; // [rsp+38h] [rbp-28h]

  v33 = __readfsqword(0x28u);
  Parent = CDOTA_Buff::GetParent(this);
  v3 = CDOTA_Buff::GetParent(this);
  if ( v3->m_bIsWaitingToSpawn.m_Value
    || (v3->m_nUnitState64.m_Value & 0x100) != 0
    || (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x200) != 0 )
  {
    this->bResetPosition = 1;
  }
  else
  {
    if ( this->bResetPosition )
    {
      v4 = CDOTA_Buff::GetParent(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
      this->vLastPos.x = AbsOrigin->x;
      this->vLastPos.y = AbsOrigin->y;
      z = AbsOrigin->z;
      this->bResetPosition = 0;
      this->vLastPos.z = z;
    }
    v7 = CDOTA_Buff::GetParent(this);
    v8 = CBaseEntity::GetAbsOrigin(v7);
    v9 = this->vLastPos.y - v8->y;
    v10 = this->vLastPos.x - v8->x;
    vDirection.z = 0.0;
    vDirection.y = v9;
    vDirection.x = v10;
    stun_duration = VectorNormalize(&vDirection);
    v11 = CDOTA_Buff::GetParent(this);
    this->vLastPos = *CBaseEntity::GetAbsOrigin(v11);
    if ( stun_duration > 300.0 )
      v12 = 0.0;
    else
      v12 = stun_duration / 100.0;
    v13 = (((this->mana_leak_pct * Parent->m_flMaxMana.m_Value) / 100.0) * v12) + this->m_fAccumulatedManaLeak;
    this->m_fAccumulatedManaLeak = v13;
    if ( v13 > 0.0 && (Parent->m_nUnitState64.m_Value & 0x200) == 0 )
    {
      m_Value = Parent->m_flMana.m_Value;
      if ( v13 <= m_Value )
        v15 = v13;
      else
        v15 = m_Value;
      stun_durationa = v15;
      CDOTA_BaseNPC::ReduceMana(Parent, v15, v13);
      Ability = CDOTA_Buff::GetAbility(this);
      CDOTA_CombatLog::AddManaDamageEvent(&g_DOTACombatLog, Ability, Parent, v15);
      if ( v15 > 0 )
      {
        ParticleManager = GetParticleManager();
        Particle = CDOTA_ParticleManager::CreateParticle(
                     ParticleManager,
                     "particles/units/heroes/hero_keeper_of_the_light/keeper_mana_leak.vpcf",
                     2,
                     Parent,
                     0,
                     0);
        v19 = CBaseEntity::GetAbsOrigin(Parent);
        v20 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v20, Particle, 0, Parent, 1, 0, *v19, 1);
        v21 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v21, Particle);
      }
      this->m_fAccumulatedManaLeak = this->m_fAccumulatedManaLeak - stun_durationa;
    }
    if ( Parent->m_flMana.m_Value < 1.0 )
    {
      v22 = CDOTA_Buff::GetAbility(this);
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(v22, "stun_duration", -1, 0);
      KeyValues::KeyValues(&kv, "modifier_keeper_of_the_light_mana_leak_stun");
      KeyValues::SetFloat(&kv, "duration", v23);
      v24 = CDOTA_Buff::GetAbility(this);
      Caster = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(Parent, Caster, v24, "modifier_stunned", &kv, 0);
      CDOTA_Buff::Destroy(this, 0, 0, 0);
      DOTA_EmitSound(10, "Hero_KeeperOfTheLight.ManaLeak.Stun", Parent);
      if ( (Parent->m_iUnitType & 1) != 0 && !Parent->m_bIsIllusion.m_Value )
      {
        v26 = 0;
        if ( Parent->m_bIsDOTANPC )
          v26 = Parent;
        v27 = CDOTA_Buff::GetCaster(this);
        v28 = 0;
        if ( v27 != 0 && v27->m_bIsDOTANPC && (v27->m_iUnitType & 1) != 0 && !v27->m_bIsIllusion.m_Value )
          v28 = v27;
        EconEntity_OnOwnerKillEaterEvent(
          v28,
          v26,
          kill_eater_event_t::kKillEaterEventType_KeeperOfTheLight_ManaLeakStuns,
          1,
          INVALID_ITEM_DEF_INDEX);
      }
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Modifier_KeeperOfTheLight_ManaLeak::OnDestroy  (line 1306, @0x0000000002c1f8c0, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::StopSound
// strings: "Hero_KeeperOfTheLight.ManaLeak.Target.FP"
void __fastcall CDOTA_Modifier_KeeperOfTheLight_ManaLeak::OnDestroy(
        CDOTA_Modifier_KeeperOfTheLight_ManaLeak *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(Parent, "Hero_KeeperOfTheLight.ManaLeak.Target.FP");
}


// CDOTA_Ability_KeeperOfTheLight_ChakraMagic::~CDOTA_Ability_KeeperOfTheLight_ChakraMagic  (line 1319, @0x0000000002c98820, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_KeeperOfTheLight_ChakraMagic::~CDOTA_Ability_KeeperOfTheLight_ChakraMagic(
        CDOTA_Ability_KeeperOfTheLight_ChakraMagic *const this)
{
  this->_vptr_IHandleEntity = &off_45C0730;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_KeeperOfTheLight_ChakraMagic::~CDOTA_Ability_KeeperOfTheLight_ChakraMagic  (line 1319, @0x0000000002c98840, libserver.so)  // inlines: ~CDOTA_Ability_KeeperOfTheLight_ChakraMagic
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_KeeperOfTheLight_ChakraMagic::~CDOTA_Ability_KeeperOfTheLight_ChakraMagic(
        CDOTA_Ability_KeeperOfTheLight_ChakraMagic *const this)
{
  this->_vptr_IHandleEntity = &off_45C0730;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_KeeperOfTheLight_ChakraMagic::Schema_DynamicBinding  (line 1321, @0x0000000002c896f0, libserver.so)
// globals: CDOTA_Ability_KeeperOfTheLight_ChakraMagic::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_KeeperOfTheLight_ChakraMagic::Schema_DynamicBinding(
        const CDOTA_Ability_KeeperOfTheLight_ChakraMagic *const this)
{
  return CDOTA_Ability_KeeperOfTheLight_ChakraMagic::s_pSchemaBinding;
}


// CDOTA_Ability_KeeperOfTheLight_ChakraMagic::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1321, @0x0000000002c89700, libserver.so)
// globals: CDOTA_Ability_KeeperOfTheLight_ChakraMagic::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_KeeperOfTheLight_ChakraMagic::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_KeeperOfTheLight_ChakraMagic::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_KeeperOfTheLight_ChakraMagic::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_KeeperOfTheLight_ChakraMagic::CEntityInstanceEntityClass::DestructInstance  (line 1321, @0x0000000002c89710, libserver.so)  // inlines: Destruct<CDOTA_Ability_KeeperOfTheLight_ChakraMagic>
void __fastcall CDOTA_Ability_KeeperOfTheLight_ChakraMagic::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_KeeperOfTheLight_ChakraMagic::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_KeeperOfTheLight_ChakraMagic::CEntityInstanceEntityClass::FreeInstance  (line 1321, @0x0000000002c89730, libserver.so)
void __fastcall CDOTA_Ability_KeeperOfTheLight_ChakraMagic::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_KeeperOfTheLight_ChakraMagic::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_KeeperOfTheLight_ChakraMagic::CEntityInstanceEntityClass::CanAllocate  (line 1321, @0x0000000002c89750, libserver.so)
bool __fastcall CDOTA_Ability_KeeperOfTheLight_ChakraMagic::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_KeeperOfTheLight_ChakraMagic::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_KeeperOfTheLight_ChakraMagic::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1321, @0x0000000002c89760, libserver.so)
// globals: CDOTA_Ability_KeeperOfTheLight_ChakraMagic::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_KeeperOfTheLight_ChakraMagic::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_KeeperOfTheLight_ChakraMagic::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_KeeperOfTheLight_ChakraMagic::s_pSchemaBinding;
}


// CDOTA_Ability_KeeperOfTheLight_ChakraMagic::CEntityInstanceEntityClass::AllocateInstance  (line 1321, @0x0000000002c8fea0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_KeeperOfTheLight_ChakraMagic::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_KeeperOfTheLight_ChakraMagic::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_KeeperOfTheLight_ChakraMagic::CEntityInstanceEntityClass::ConstructInstance  (line 1321, @0x0000000002c94d20, libserver.so)  // inlines: CDOTA_Ability_KeeperOfTheLight_ChakraMagic, Construct<CDOTA_Ability_KeeperOfTheLight_ChakraMagic>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_KeeperOfTheLight_ChakraMagic::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_KeeperOfTheLight_ChakraMagic::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45C0730;
  }
  return p;
}


// CDOTA_Ability_KeeperOfTheLight_ChakraMagic::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1321, @0x0000000002ca2480, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_KeeperOfTheLight_ChakraMagic::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_KeeperOfTheLight_ChakraMagic::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_KeeperOfTheLight_ChakraMagic::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1321, @0x0000000002ca24a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_KeeperOfTheLight_ChakraMagic::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_KeeperOfTheLight_ChakraMagic::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal  (line 1321, @0x0000000002cc2ee0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "keeper_of_the_light_chakra_magic", "CDOTA_Ability_KeeperOfTheLight_ChakraMagic"
// globals: `guard variable for'CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass, CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_KeeperOfTheLight_ChakraMagic::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClassInfo, CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClassInfo
CEntityClass *__cdecl CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass) != 0 )
  {
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_pClassInfo = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_flags = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_pInputs = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_nInputCount = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_pOutputs = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_nOutputCount = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_pGameClass = 0;
    CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass._vptr_CEntityClass = off_45C06B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass);
    __cxa_atexit(
      CDOTA_Ability_KeeperOfTheLight_ChakraMagic::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass != 0 )
    return &CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass;
  if ( `guard variable for'CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClassInfo,
      "CDOTA_Ability_KeeperOfTheLight_ChakraMagic",
      "keeper_of_the_light_chakra_magic",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClassInfo);
  }
  CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_pClassInfo = &CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClassInfo;
  CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_pBaseClassInfo = CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass = &CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass;
  CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClassInfo.m_pClass = &CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass;
  CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_KeeperOfTheLight_ChakraMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_ChakraMagicClass;
}


// CDOTA_Ability_KeeperOfTheLight_ChakraMagic::OnSpellStart  (line 1331, @0x0000000002c69f00, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTABaseAbility::GetLevelSpecialValueFor<int>, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex (17 total)
// strings: "modifier_keeper_of_the_light_chakra_magic", "mana_restore", "particles/units/heroes/hero_keeper_of_the_light/keeper_chakra_magic.vpcf", "attach_attack1", "Hero_KeeperOfTheLight.ChakraMagic.Target"
void __fastcall CDOTA_Ability_KeeperOfTheLight_ChakraMagic::OnSpellStart(
        CDOTA_Ability_KeeperOfTheLight_ChakraMagic *const this)
{
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v3; // rbx
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  CDOTA_BaseNPC *v8; // rax
  const Vector *AbsOrigin; // r15
  CDOTA_ParticleManager *v10; // rax
  const Vector *v11; // r15
  CDOTA_ParticleManager *v12; // rax
  CDOTA_ParticleManager *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  CDOTAPlayer *v15; // rax
  CDOTAPlayer *v16; // rax
  int mana_restore; // [rsp+14h] [rbp-5Ch]
  CDOTA_BaseNPC *duration; // [rsp+18h] [rbp-58h]
  KeyValues kv; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_keeper_of_the_light_chakra_magic");
    KeyValues::SetFloat(&kv, "duration", v4);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_keeper_of_the_light_chakra_magic", &kv, 0);
    mana_restore = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "mana_restore", -1, 0);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_keeper_of_the_light/keeper_chakra_magic.vpcf",
                 2,
                 v3,
                 0,
                 0);
    v8 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
    duration = CDOTABaseAbility::GetCaster(this);
    v10 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v10, Particle, 0, duration, 5, "attach_attack1", *AbsOrigin, 1);
    v11 = CBaseEntity::GetAbsOrigin(v3);
    v12 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v12, Particle, 1, v3, 1, 0, *v11, 1);
    v13 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v13, Particle);
    DOTA_EmitSound(10, "Hero_KeeperOfTheLight.ChakraMagic.Target", v3);
    if ( (v3[2].m_hEffectEntity.m_Value.m_Index & 1) != 0 )
    {
      v14 = CDOTABaseAbility::GetCaster(this);
      v15 = (*(v14->_vptr_IHandleEntity + 413))(v14);
      SendOverheadEventMessage(v15, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_MANA_ADD, v3, mana_restore, 0);
      if ( v3 != CDOTABaseAbility::GetCaster(this) )
      {
        v16 = (*(v3->_vptr_IHandleEntity + 413))(v3);
        SendOverheadEventMessage(v16, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_MANA_ADD, v3, mana_restore, 0);
      }
    }
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_KeeperOfTheLight_ChakraMagic::~CDOTA_Modifier_KeeperOfTheLight_ChakraMagic  (line 1376, @0x0000000002c92590, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_KeeperOfTheLight_ChakraMagic::~CDOTA_Modifier_KeeperOfTheLight_ChakraMagic(
        CDOTA_Modifier_KeeperOfTheLight_ChakraMagic *const this)
{
  this->_vptr_CDOTA_Buff = &off_45C11F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_KeeperOfTheLight_ChakraMagic::~CDOTA_Modifier_KeeperOfTheLight_ChakraMagic  (line 1376, @0x0000000002c925b0, libserver.so)  // inlines: ~CDOTA_Modifier_KeeperOfTheLight_ChakraMagic
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_KeeperOfTheLight_ChakraMagic::~CDOTA_Modifier_KeeperOfTheLight_ChakraMagic(
        CDOTA_Modifier_KeeperOfTheLight_ChakraMagic *const this)
{
  this->_vptr_CDOTA_Buff = &off_45C11F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_KeeperOfTheLight_ChakraMagic::GetAttributes  (line 1386, @0x0000000002c89770, libserver.so)
int __fastcall CDOTA_Modifier_KeeperOfTheLight_ChakraMagic::GetAttributes(
        CDOTA_Modifier_KeeperOfTheLight_ChakraMagic *const this)
{
  return 2;
}


// CDOTA_Modifier_KeeperOfTheLight_ChakraMagic::OnCreated  (line 1398, @0x0000000002c5d030, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>, ToDOTABaseNPCHero
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetParent, CDOTA_BaseNPC::GiveMana, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSound (13 total)
// strings: "cooldown_reduction", "mana_restore", "particles/units/heroes/hero_keeper_of_the_light/keeper_chakra_magic.vpcf", "attach_attack1", "Hero_KeeperOfTheLight.ChakraMagic.Target"
void __fastcall CDOTA_Modifier_KeeperOfTheLight_ChakraMagic::OnCreated(
        CDOTA_Modifier_KeeperOfTheLight_ChakraMagic *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *v6; // r12
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v12; // r14
  CDOTA_ParticleManager *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  const Vector *v15; // r13
  CDOTA_BaseNPC *v16; // r14
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  int mana_restore; // r13d
  CDOTA_BaseNPC *v21; // r12
  CDOTA_BaseNPC *v22; // rax
  CDOTAPlayer *v23; // rax
  CDOTA_BaseNPC *v24; // r12
  int v25; // r13d
  CDOTA_BaseNPC *v26; // r12
  CDOTA_BaseNPC *v27; // rax
  CDOTAPlayer *v28; // rax
  float flMana; // [rsp+Ch] [rbp-24h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->cooldown_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "cooldown_reduction", -1, 0);
  else
    this->cooldown_reduction = 0.0;
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->mana_restore, "mana_restore");
  this->bReduceCooldown = 1;
  Parent = CDOTA_Buff::GetParent(this);
  if ( Parent != 0 && (Parent->m_iUnitType & 1) != 0 )
    (*(Parent->_vptr_IHandleEntity + 490))(Parent);
  v6 = CDOTA_Buff::GetAbility(this);
  flMana = this->mana_restore;
  v7 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::GiveMana(v7, flMana, v6, 1);
  v8 = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  LODWORD(v8) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/units/heroes/hero_keeper_of_the_light/keeper_chakra_magic.vpcf",
                  2,
                  v8,
                  0,
                  0);
  Caster = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  v12 = CDOTA_Buff::GetCaster(this);
  v13 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v13, v8, 0, v12, 5, "attach_attack1", *AbsOrigin, 1);
  v14 = CDOTA_Buff::GetParent(this);
  v15 = CBaseEntity::GetAbsOrigin(v14);
  v16 = CDOTA_Buff::GetParent(this);
  v17 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v17, v8, 1, v16, 1, 0, *v15, 1);
  v18 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v18, v8);
  v19 = CDOTA_Buff::GetParent(this);
  DOTA_EmitSound(10, "Hero_KeeperOfTheLight.ChakraMagic.Target", v19);
  if ( (CDOTA_Buff::GetParent(this)->m_iUnitType & 1) != 0 )
  {
    mana_restore = this->mana_restore;
    v21 = CDOTA_Buff::GetParent(this);
    v22 = CDOTA_Buff::GetCaster(this);
    v23 = (*(v22->_vptr_IHandleEntity + 413))(v22);
    SendOverheadEventMessage(v23, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_MANA_ADD, v21, mana_restore, 0);
    v24 = CDOTA_Buff::GetParent(this);
    if ( v24 != CDOTA_Buff::GetCaster(this) )
    {
      v25 = this->mana_restore;
      v26 = CDOTA_Buff::GetParent(this);
      v27 = CDOTA_Buff::GetParent(this);
      v28 = (*(v27->_vptr_IHandleEntity + 413))(v27);
      SendOverheadEventMessage(v28, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_MANA_ADD, v26, v25, 0);
    }
  }
}


// CDOTA_Modifier_KeeperOfTheLight_ChakraMagic::DeclareFunctions  (line 1437, @0x0000000002c1c810, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_KeeperOfTheLight_ChakraMagic::GetModifierCooldownReduction_Constant(CModifierParams const&), CDOTA_Modifier_KeeperOfTheLight_ChakraMagic::GetModifierManaBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_KeeperOfTheLight_ChakraMagic::DeclareFunctions(
        CDOTA_Modifier_KeeperOfTheLight_ChakraMagic *const this)
{
  this->m_Functions[25].__pfn = CDOTA_Modifier_KeeperOfTheLight_ChakraMagic::GetModifierCooldownReduction_Constant;
  this->m_Functions[25].__delta = 0;
  this->m_Functions[62].__delta = 0;
  this->m_Functions[62].__pfn = CDOTA_Modifier_KeeperOfTheLight_ChakraMagic::GetModifierManaBonus;
}


// CDOTA_Modifier_KeeperOfTheLight_ChakraMagic::GetModifierManaBonus  (line 1445, @0x0000000002c1c850, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_KeeperOfTheLight_ChakraMagic::GetModifierManaBonus(
        CDOTA_Modifier_KeeperOfTheLight_ChakraMagic *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->mana_restore;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_KeeperOfTheLight_ChakraMagic::GetModifierCooldownReduction_Constant  (line 1452, @0x0000000002c25e50, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_KeeperOfTheLight_ChakraMagic::GetModifierCooldownReduction_Constant(
        CDOTA_Modifier_KeeperOfTheLight_ChakraMagic *const this,
        const CModifierParams *const params)
{
  __int64 cooldown_reduction_low; // rax
  ModifierVariant_t result; // 0:rax.16

  *&result.m_eType = 1;
  if ( this->bReduceCooldown )
  {
    cooldown_reduction_low = LODWORD(this->cooldown_reduction);
    this->bReduceCooldown = 0;
    *&result.m_eType = (cooldown_reduction_low << 32) | 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Ability_KeeperOfTheLight_SpiritForm::~CDOTA_Ability_KeeperOfTheLight_SpiritForm  (line 1470, @0x0000000002c98870, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_KeeperOfTheLight_SpiritForm::~CDOTA_Ability_KeeperOfTheLight_SpiritForm(
        CDOTA_Ability_KeeperOfTheLight_SpiritForm *const this)
{
  this->_vptr_IHandleEntity = &off_45C1550;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_KeeperOfTheLight_SpiritForm::~CDOTA_Ability_KeeperOfTheLight_SpiritForm  (line 1470, @0x0000000002c98890, libserver.so)  // inlines: ~CDOTA_Ability_KeeperOfTheLight_SpiritForm
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_KeeperOfTheLight_SpiritForm::~CDOTA_Ability_KeeperOfTheLight_SpiritForm(
        CDOTA_Ability_KeeperOfTheLight_SpiritForm *const this)
{
  this->_vptr_IHandleEntity = &off_45C1550;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_KeeperOfTheLight_SpiritForm::Schema_DynamicBinding  (line 1472, @0x0000000002c89780, libserver.so)
// globals: CDOTA_Ability_KeeperOfTheLight_SpiritForm::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_KeeperOfTheLight_SpiritForm::Schema_DynamicBinding(
        const CDOTA_Ability_KeeperOfTheLight_SpiritForm *const this)
{
  return CDOTA_Ability_KeeperOfTheLight_SpiritForm::s_pSchemaBinding;
}


// CDOTA_Ability_KeeperOfTheLight_SpiritForm::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1472, @0x0000000002c89790, libserver.so)
// globals: CDOTA_Ability_KeeperOfTheLight_SpiritForm::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_KeeperOfTheLight_SpiritForm::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_KeeperOfTheLight_SpiritForm::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_KeeperOfTheLight_SpiritForm::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_KeeperOfTheLight_SpiritForm::CEntityInstanceEntityClass::DestructInstance  (line 1472, @0x0000000002c897a0, libserver.so)  // inlines: Destruct<CDOTA_Ability_KeeperOfTheLight_SpiritForm>
void __fastcall CDOTA_Ability_KeeperOfTheLight_SpiritForm::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_KeeperOfTheLight_SpiritForm::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_KeeperOfTheLight_SpiritForm::CEntityInstanceEntityClass::FreeInstance  (line 1472, @0x0000000002c897c0, libserver.so)
void __fastcall CDOTA_Ability_KeeperOfTheLight_SpiritForm::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_KeeperOfTheLight_SpiritForm::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_KeeperOfTheLight_SpiritForm::CEntityInstanceEntityClass::CanAllocate  (line 1472, @0x0000000002c897e0, libserver.so)
bool __fastcall CDOTA_Ability_KeeperOfTheLight_SpiritForm::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_KeeperOfTheLight_SpiritForm::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_KeeperOfTheLight_SpiritForm::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1472, @0x0000000002c897f0, libserver.so)
// globals: CDOTA_Ability_KeeperOfTheLight_SpiritForm::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_KeeperOfTheLight_SpiritForm::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_KeeperOfTheLight_SpiritForm::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_KeeperOfTheLight_SpiritForm::s_pSchemaBinding;
}


// CDOTA_Ability_KeeperOfTheLight_SpiritForm::CEntityInstanceEntityClass::AllocateInstance  (line 1472, @0x0000000002c8fee0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_KeeperOfTheLight_SpiritForm::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_KeeperOfTheLight_SpiritForm::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_KeeperOfTheLight_SpiritForm::CEntityInstanceEntityClass::ConstructInstance  (line 1472, @0x0000000002c94d50, libserver.so)  // inlines: CDOTA_Ability_KeeperOfTheLight_SpiritForm, Construct<CDOTA_Ability_KeeperOfTheLight_SpiritForm>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_KeeperOfTheLight_SpiritForm::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_KeeperOfTheLight_SpiritForm::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45C1550;
  }
  return p;
}


// CDOTA_Ability_KeeperOfTheLight_SpiritForm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1472, @0x0000000002ca24d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_KeeperOfTheLight_SpiritForm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_KeeperOfTheLight_SpiritForm::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_KeeperOfTheLight_SpiritForm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1472, @0x0000000002ca24f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_KeeperOfTheLight_SpiritForm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_KeeperOfTheLight_SpiritForm::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal  (line 1472, @0x0000000002cbf340, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "keeper_of_the_light_spirit_form", "CDOTA_Ability_KeeperOfTheLight_SpiritForm"
// globals: `guard variable for'CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass, CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_KeeperOfTheLight_SpiritForm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClassInfo, CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClassInfo
CEntityClass *__cdecl CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass) != 0 )
  {
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_pClassInfo = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_flags = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_pInputs = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_nInputCount = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_pOutputs = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_nOutputCount = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_pGameClass = 0;
    CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass._vptr_CEntityClass = off_45C14D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass);
    __cxa_atexit(
      CDOTA_Ability_KeeperOfTheLight_SpiritForm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass != 0 )
    return &CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass;
  if ( `guard variable for'CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClassInfo,
      "CDOTA_Ability_KeeperOfTheLight_SpiritForm",
      "keeper_of_the_light_spirit_form",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClassInfo);
  }
  CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_pClassInfo = &CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClassInfo;
  CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_pBaseClassInfo = CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass = &CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass;
  CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClassInfo.m_pClass = &CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass;
  CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_SpiritFormClass;
}


// CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetAssociatedSecondaryAbilities  (line 1483, @0x0000000002c89800, libserver.so)
// strings: "keeper_of_the_light_recall;keeper_of_the_light_blinding_light"
const char *__fastcall CDOTA_Ability_KeeperOfTheLight_SpiritForm::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_KeeperOfTheLight_SpiritForm *const this)
{
  return "keeper_of_the_light_recall;keeper_of_the_light_blinding_light";
}


// CDOTA_Ability_KeeperOfTheLight_SpiritForm::OnSpellStart  (line 1491, @0x0000000002c54c60, libserver.so)  // inlines: GetLevelSpecialValueFor<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_keeper_of_the_light_spirit_form"
void __fastcall CDOTA_Ability_KeeperOfTheLight_SpiritForm::OnSpellStart(
        CDOTA_Ability_KeeperOfTheLight_SpiritForm *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_keeper_of_the_light_spirit_form");
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_keeper_of_the_light_spirit_form", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_KeeperOfTheLight_SpiritForm::OnUpgrade  (line 1506, @0x0000000002c21a90, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "keeper_of_the_light_recall", "keeper_of_the_light_blinding_light"
void __fastcall CDOTA_Ability_KeeperOfTheLight_SpiritForm::OnUpgrade(
        CDOTA_Ability_KeeperOfTheLight_SpiritForm *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTABaseAbility *v5; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "keeper_of_the_light_recall", 0);
  if ( AbilityByName != 0 )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  v4 = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTA_BaseNPC::FindAbilityByName(v4, "keeper_of_the_light_blinding_light", 0);
  if ( v5 != 0 && v5->m_iLevel.m_Value < this->m_iLevel.m_Value )
    CDOTABaseAbility::UpgradeAbility(v5, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_KeeperOfTheLight_SpiritForm::OnUnStolen  (line 1526, @0x0000000002c21740, libserver.so)
// calls: CDOTABaseAbility::OnUnStolen, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_keeper_of_the_light_spirit_form"
void __fastcall CDOTA_Ability_KeeperOfTheLight_SpiritForm::OnUnStolen(
        CDOTA_Ability_KeeperOfTheLight_SpiritForm *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  CDOTABaseAbility::OnUnStolen(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_keeper_of_the_light_spirit_form");
}


// CDOTA_Ability_KeeperOfTheLight_SpiritForm::OnSaveState  (line 1537, @0x0000000002c2aef0, libserver.so)  // inlines: DOTAGameRules, FindModifierByName, GetGameTime
// calls: CDOTABaseAbility::OnSaveState, CDOTABaseAbility::GetCaster, ModifierFactoryDictionary, CModifieractoryDictionary::FindFactory, CDOTA_ModifierManager::FindModifierByName, KeyValues::SetFloat
// strings: "modifier_keeper_of_the_light_spirit_form", "modifier_keeper_of_the_light_spirit_form_duration"
bool __fastcall CDOTA_Ability_KeeperOfTheLight_SpiritForm::OnSaveState(
        CDOTA_Ability_KeeperOfTheLight_SpiritForm *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rbx
  CModifieractoryDictionary *v5; // rax
  IModifierFactory *Factory; // rax
  CDOTA_Buff *ModifierByName; // rax
  float v8; // xmm1_4

  CDOTABaseAbility::OnSaveState(this, pKV);
  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = ModifierFactoryDictionary();
  Factory = CModifieractoryDictionary::FindFactory(v5, "modifier_keeper_of_the_light_spirit_form");
  ModifierByName = CDOTA_ModifierManager::FindModifierByName(
                     &Caster->m_ModifierManager,
                     Factory,
                     "modifier_keeper_of_the_light_spirit_form",
                     0);
  if ( ModifierByName != 0 )
  {
    (*(ModifierByName->_vptr_CDOTA_Buff + 30))(ModifierByName);
    v8 = 0.0;
    if ( g_pGameRules != 0 )
      v8 = *&g_pGameRules[18].m_szQuestName[20];
    KeyValues::SetFloat(pKV, "modifier_keeper_of_the_light_spirit_form_duration", v8);
  }
  return 1;
}


// CDOTA_Ability_KeeperOfTheLight_SpiritForm::OnLoadState  (line 1554, @0x0000000002c211e0, libserver.so)  // inlines: SetBool
// calls: CDOTABaseAbility::OnLoadState, KeyValues::GetFloat, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_keeper_of_the_light_spirit_form_duration", "modifier_keeper_of_the_light_spirit_form", "dont_swap_abilities"
bool __fastcall CDOTA_Ability_KeeperOfTheLight_SpiritForm::OnLoadState(
        CDOTA_Ability_KeeperOfTheLight_SpiritForm *const this,
        KeyValues *pKV)
{
  float v4; // xmm1_4
  float v5; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v7; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-28h]

  v10 = __readfsqword(0x28u);
  CDOTABaseAbility::OnLoadState(this, pKV);
  if ( KeyValues::GetFloat(pKV, "modifier_keeper_of_the_light_spirit_form_duration", v4) > 0.0 )
  {
    KeyValues::KeyValues(&kv, "modifier_keeper_of_the_light_spirit_form");
    KeyValues::SetFloat(&kv, "duration", v5);
    KeyValues::SetInt(&kv, "dont_swap_abilities", 1);
    Caster = CDOTABaseAbility::GetCaster(this);
    v7 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v7, Caster, this, "modifier_keeper_of_the_light_spirit_form", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
  return 1;
}


// CDOTA_Modifier_KeeperOfTheLight_SpiritForm::~CDOTA_Modifier_KeeperOfTheLight_SpiritForm  (line 1576, @0x0000000002c92540, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_KeeperOfTheLight_SpiritForm::~CDOTA_Modifier_KeeperOfTheLight_SpiritForm(
        CDOTA_Modifier_KeeperOfTheLight_SpiritForm *const this)
{
  this->_vptr_CDOTA_Buff = &off_45C2010;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_KeeperOfTheLight_SpiritForm::~CDOTA_Modifier_KeeperOfTheLight_SpiritForm  (line 1576, @0x0000000002c92560, libserver.so)  // inlines: ~CDOTA_Modifier_KeeperOfTheLight_SpiritForm
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_KeeperOfTheLight_SpiritForm::~CDOTA_Modifier_KeeperOfTheLight_SpiritForm(
        CDOTA_Modifier_KeeperOfTheLight_SpiritForm *const this)
{
  this->_vptr_CDOTA_Buff = &off_45C2010;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_KeeperOfTheLight_SpiritForm::IsHidden  (line 1581, @0x0000000002c89810, libserver.so)
bool __fastcall CDOTA_Modifier_KeeperOfTheLight_SpiritForm::IsHidden(
        CDOTA_Modifier_KeeperOfTheLight_SpiritForm *const this)
{
  return 0;
}


// CDOTA_Modifier_KeeperOfTheLight_SpiritForm::IsPurgable  (line 1582, @0x0000000002c89820, libserver.so)
bool __fastcall CDOTA_Modifier_KeeperOfTheLight_SpiritForm::IsPurgable(
        CDOTA_Modifier_KeeperOfTheLight_SpiritForm *const this)
{
  return 0;
}


// CDOTA_Modifier_KeeperOfTheLight_SpiritForm::IsPermanent  (line 1583, @0x0000000002c97650, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::HasScepter
bool __fastcall CDOTA_Modifier_KeeperOfTheLight_SpiritForm::IsPermanent(
        CDOTA_Modifier_KeeperOfTheLight_SpiritForm *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  return CDOTA_BaseNPC::HasScepter(Parent);
}


// CDOTA_Modifier_KeeperOfTheLight_SpiritForm::RemoveOnDeath  (line 1584, @0x0000000002c97670, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::HasScepter
bool __fastcall CDOTA_Modifier_KeeperOfTheLight_SpiritForm::RemoveOnDeath(
        CDOTA_Modifier_KeeperOfTheLight_SpiritForm *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  return !CDOTA_BaseNPC::HasScepter(Parent);
}


// CDOTA_Modifier_KeeperOfTheLight_SpiritForm::GetStatusEffectName  (line 1589, @0x0000000002c89830, libserver.so)
// strings: "particles/status_fx/status_effect_keeper_spirit_form.vpcf"
const char *__fastcall CDOTA_Modifier_KeeperOfTheLight_SpiritForm::GetStatusEffectName(
        CDOTA_Modifier_KeeperOfTheLight_SpiritForm *const this)
{
  return "particles/status_fx/status_effect_keeper_spirit_form.vpcf";
}


// CDOTA_Modifier_KeeperOfTheLight_SpiritForm::StatusEffectPriority  (line 1590, @0x0000000002c89840, libserver.so)
int __fastcall CDOTA_Modifier_KeeperOfTheLight_SpiritForm::StatusEffectPriority(
        CDOTA_Modifier_KeeperOfTheLight_SpiritForm *const this)
{
  return 5;
}


// CDOTA_Modifier_KeeperOfTheLight_SpiritForm::GetEffectName  (line 1592, @0x0000000002c89850, libserver.so)
// strings: "particles/units/heroes/hero_keeper_of_the_light/keeper_of_the_light_spirit_form_ambient.v
const char *__fastcall CDOTA_Modifier_KeeperOfTheLight_SpiritForm::GetEffectName(
        CDOTA_Modifier_KeeperOfTheLight_SpiritForm *const this)
{
  return "particles/units/heroes/hero_keeper_of_the_light/keeper_of_the_light_spirit_form_ambient.vpcf";
}


// CDOTA_Modifier_KeeperOfTheLight_SpiritForm::OnCreated  (line 1604, @0x0000000002c23300, libserver.so)  // inlines: GetAbilityName, GetBool
// calls: CDOTA_Buff::GetAbility, KeyValues::GetInt, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::GetAbilityByIndex, CDOTA_BaseNPC::SwapAbilities, CDOTABaseAbility::SetActivated, DOTA_EmitSound
// strings: "dont_swap_abilities", "keeper_of_the_light_spirit_form", "<NoAbilityName>", "keeper_of_the_light_recall", "keeper_of_the_light_blinding_light", "keeper_of_the_light_spirit_form_illuminate" (8 total)
void __fastcall CDOTA_Modifier_KeeperOfTheLight_SpiritForm::OnCreated(
        CDOTA_Modifier_KeeperOfTheLight_SpiritForm *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int m_iAbilityIndex; // r12d
  CDOTA_BaseNPC *v7; // rax
  CDOTABaseAbility *AbilityByIndex; // r12
  const char *v9; // r13
  CDOTA_BaseNPC *v10; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // rax
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  CDOTABaseAbility *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  CDOTABaseAbility *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // rax

  if ( CDOTA_Buff::GetAbility(this)->m_bStolen.m_Value )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "keeper_of_the_light_spirit_form", 0);
    if ( AbilityByName != 0 )
    {
      m_iAbilityIndex = AbilityByName->m_iAbilityIndex;
      v7 = CDOTA_Buff::GetCaster(this);
      AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(v7, m_iAbilityIndex + 1);
      if ( AbilityByIndex != 0 )
      {
        v9 = "<NoAbilityName>";
        v10 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::SwapAbilities(v10, "keeper_of_the_light_spirit_form", "keeper_of_the_light_recall", 0, 1);
        m_pAbilityData = AbilityByIndex->m_pAbilityData;
        if ( m_pAbilityData != 0 )
        {
          m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
          if ( m_pszAbilityName != 0 )
            v9 = m_pszAbilityName;
        }
        v13 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::SwapAbilities(v13, v9, "keeper_of_the_light_blinding_light", 0, 1);
        this->m_nSwapIndex = AbilityByIndex->m_iAbilityIndex;
      }
    }
  }
  else if ( KeyValues::GetInt(pKV, "dont_swap_abilities", 0) == 0 )
  {
    v14 = CDOTA_Buff::GetCaster(this);
    v15 = CDOTA_BaseNPC::FindAbilityByName(v14, "keeper_of_the_light_recall", 0);
    if ( v15 != 0 )
      CDOTABaseAbility::SetActivated(v15, 1);
    v16 = CDOTA_Buff::GetCaster(this);
    v17 = CDOTA_BaseNPC::FindAbilityByName(v16, "keeper_of_the_light_blinding_light", 0);
    if ( v17 != 0 )
      CDOTABaseAbility::SetActivated(v17, 1);
    v18 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::SwapAbilities(
      v18,
      "keeper_of_the_light_illuminate",
      "keeper_of_the_light_spirit_form_illuminate",
      0,
      1);
    v19 = CDOTA_Buff::GetCaster(this);
    DOTA_EmitSound(10, "Hero_KeeperOfTheLight.SpiritForm", v19);
  }
}


// CDOTA_Modifier_KeeperOfTheLight_SpiritForm::OnDestroy  (line 1656, @0x0000000002c33f60, libserver.so)  // inlines: Get, GetAbilityName, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CEntityInstance*, operator!=<CBaseEntity>
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::SetActivated, CDOTA_BaseNPC::SwapAbilities, CDOTA_BaseNPC::GetAbilityByIndex, CDOTA_ModifierManager::RemoveModifierByName
// strings: "keeper_of_the_light_spirit_form_illuminate", "keeper_of_the_light_recall", "keeper_of_the_light_blinding_light", "keeper_of_the_light_illuminate", "keeper_of_the_light_spirit_form", "<NoAbilityName>" (7 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_KeeperOfTheLight_SpiritForm::OnDestroy(
        CDOTA_Modifier_KeeperOfTheLight_SpiritForm *const this)
{
  CDOTA_BaseNPC *v2; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int vptr_IHandleEntity; // edx
  unsigned __int16 v5; // cx
  CEntityIdentity *v6; // rax
  CEntityIdentity *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTABaseAbility *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTABaseAbility *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *Caster; // rax
  int m_nSwapIndex; // r12d
  CDOTA_BaseNPC *v15; // rax
  CDOTABaseAbility *AbilityByIndex; // r12
  CDOTA_BaseNPC *v17; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *v19; // r12
  const char *m_pszAbilityName; // rax
  CDOTA_BaseNPC *v21; // rax
  CEntityInstance *m_pInstance; // rdi

  if ( CDOTA_Buff::GetAbility(this)->m_bStolen.m_Value )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    if ( CDOTA_BaseNPC::FindAbilityByName(Caster, "keeper_of_the_light_spirit_form", 0) != 0 )
    {
      m_nSwapIndex = this->m_nSwapIndex;
      v15 = CDOTA_Buff::GetCaster(this);
      AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(v15, m_nSwapIndex);
      if ( AbilityByIndex != 0 )
      {
        v17 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::SwapAbilities(v17, "keeper_of_the_light_spirit_form", "keeper_of_the_light_recall", 1, 0);
        m_pAbilityData = AbilityByIndex->m_pAbilityData;
        v19 = "<NoAbilityName>";
        if ( m_pAbilityData != 0 )
        {
          m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
          if ( m_pszAbilityName != 0 )
            v19 = m_pszAbilityName;
        }
        v21 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::SwapAbilities(v21, v19, "keeper_of_the_light_blinding_light", 1, 0);
      }
    }
  }
  else
  {
    v2 = CDOTA_Buff::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v2, "keeper_of_the_light_spirit_form_illuminate", 0);
    if ( AbilityByName != 0 )
    {
      vptr_IHandleEntity = AbilityByName[1]._vptr_IHandleEntity;
      if ( (vptr_IHandleEntity + 2) > 1 )
      {
        v5 = AbilityByName[1]._vptr_IHandleEntity;
        v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F];
        if ( v6 != 0 )
        {
          v7 = &v6[v5 & 0x1FF];
          if ( v7 != 0 && vptr_IHandleEntity == v7->m_EHandle.m_Index )
          {
            m_pInstance = v7->m_pInstance;
            if ( v7->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
              CDOTA_ModifierManager::RemoveModifierByName(
                &m_pInstance[64].m_worldGroupId,
                "modifier_keeper_of_the_light_spirit_form_illuminate");
          }
        }
      }
    }
    v8 = CDOTA_Buff::GetCaster(this);
    v9 = CDOTA_BaseNPC::FindAbilityByName(v8, "keeper_of_the_light_recall", 0);
    if ( v9 != 0 )
      CDOTABaseAbility::SetActivated(v9, 0);
    v10 = CDOTA_Buff::GetCaster(this);
    v11 = CDOTA_BaseNPC::FindAbilityByName(v10, "keeper_of_the_light_blinding_light", 0);
    if ( v11 != 0 )
      CDOTABaseAbility::SetActivated(v11, 0);
    v12 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::SwapAbilities(
      v12,
      "keeper_of_the_light_illuminate",
      "keeper_of_the_light_spirit_form_illuminate",
      1,
      0);
  }
}


// CDOTA_Ability_KeeperOfTheLight_Recall::~CDOTA_Ability_KeeperOfTheLight_Recall  (line 1708, @0x0000000002c988c0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_KeeperOfTheLight_Recall::~CDOTA_Ability_KeeperOfTheLight_Recall(
        CDOTA_Ability_KeeperOfTheLight_Recall *const this)
{
  this->_vptr_IHandleEntity = &off_45C2370;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_KeeperOfTheLight_Recall::~CDOTA_Ability_KeeperOfTheLight_Recall  (line 1708, @0x0000000002c988e0, libserver.so)  // inlines: ~CDOTA_Ability_KeeperOfTheLight_Recall
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_KeeperOfTheLight_Recall::~CDOTA_Ability_KeeperOfTheLight_Recall(
        CDOTA_Ability_KeeperOfTheLight_Recall *const this)
{
  this->_vptr_IHandleEntity = &off_45C2370;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_KeeperOfTheLight_Recall::Schema_DynamicBinding  (line 1710, @0x0000000002c89860, libserver.so)
// globals: CDOTA_Ability_KeeperOfTheLight_Recall::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_KeeperOfTheLight_Recall::Schema_DynamicBinding(
        const CDOTA_Ability_KeeperOfTheLight_Recall *const this)
{
  return CDOTA_Ability_KeeperOfTheLight_Recall::s_pSchemaBinding;
}


// CDOTA_Ability_KeeperOfTheLight_Recall::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1710, @0x0000000002c89870, libserver.so)
// globals: CDOTA_Ability_KeeperOfTheLight_Recall::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_KeeperOfTheLight_Recall::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_KeeperOfTheLight_Recall::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_KeeperOfTheLight_Recall::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_KeeperOfTheLight_Recall::CEntityInstanceEntityClass::DestructInstance  (line 1710, @0x0000000002c89880, libserver.so)  // inlines: Destruct<CDOTA_Ability_KeeperOfTheLight_Recall>
void __fastcall CDOTA_Ability_KeeperOfTheLight_Recall::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_KeeperOfTheLight_Recall::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_KeeperOfTheLight_Recall::CEntityInstanceEntityClass::FreeInstance  (line 1710, @0x0000000002c898a0, libserver.so)
void __fastcall CDOTA_Ability_KeeperOfTheLight_Recall::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_KeeperOfTheLight_Recall::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_KeeperOfTheLight_Recall::CEntityInstanceEntityClass::CanAllocate  (line 1710, @0x0000000002c898c0, libserver.so)
bool __fastcall CDOTA_Ability_KeeperOfTheLight_Recall::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_KeeperOfTheLight_Recall::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_KeeperOfTheLight_Recall::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1710, @0x0000000002c898d0, libserver.so)
// globals: CDOTA_Ability_KeeperOfTheLight_Recall::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_KeeperOfTheLight_Recall::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_KeeperOfTheLight_Recall::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_KeeperOfTheLight_Recall::s_pSchemaBinding;
}


// CDOTA_Ability_KeeperOfTheLight_Recall::CEntityInstanceEntityClass::AllocateInstance  (line 1710, @0x0000000002c8ff20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_KeeperOfTheLight_Recall::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_KeeperOfTheLight_Recall::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_KeeperOfTheLight_Recall::CEntityInstanceEntityClass::ConstructInstance  (line 1710, @0x0000000002ca0a10, libserver.so)  // inlines: CDOTA_Ability_KeeperOfTheLight_Recall, Construct<CDOTA_Ability_KeeperOfTheLight_Recall>
// calls: CDOTABaseAbility::CDOTABaseAbility, CDOTABaseAbility::SetActivated, CDOTABaseAbility::~CDOTABaseAbility, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_Ability_KeeperOfTheLight_Recall::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_KeeperOfTheLight_Recall::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45C2370;
    CDOTABaseAbility::SetActivated(p, 0);
  }
  return p;
}


// CDOTA_Ability_KeeperOfTheLight_Recall::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1710, @0x0000000002ca2520, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_KeeperOfTheLight_Recall::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_KeeperOfTheLight_Recall::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_KeeperOfTheLight_Recall::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1710, @0x0000000002ca2540, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_KeeperOfTheLight_Recall::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_KeeperOfTheLight_Recall::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_KeeperOfTheLight_Recall::GetEntityClassInternal  (line 1710, @0x0000000002cba650, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "keeper_of_the_light_recall", "CDOTA_Ability_KeeperOfTheLight_Recall"
// globals: `guard variable for'CDOTA_Ability_KeeperOfTheLight_Recall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_RecallClass, CDOTA_Ability_KeeperOfTheLight_Recall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_RecallClass, __dso_handle, CDOTA_Ability_KeeperOfTheLight_Recall::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_KeeperOfTheLight_Recall::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_RecallClassInfo, CDOTA_Ability_KeeperOfTheLight_Recall::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_RecallClassInfo
CEntityClass *__cdecl CDOTA_Ability_KeeperOfTheLight_Recall::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_KeeperOfTheLight_Recall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_RecallClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_KeeperOfTheLight_Recall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_RecallClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_KeeperOfTheLight_Recall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_RecallClass);
    CDOTA_Ability_KeeperOfTheLight_Recall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_RecallClass._vptr_CEntityClass = off_45C22F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_KeeperOfTheLight_Recall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_RecallClass);
    __cxa_atexit(
      CDOTA_Ability_KeeperOfTheLight_Recall::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_KeeperOfTheLight_Recall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_RecallClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_KeeperOfTheLight_RecallClass != 0 )
    return &CDOTA_Ability_KeeperOfTheLight_Recall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_RecallClass;
  if ( `guard variable for'CDOTA_Ability_KeeperOfTheLight_Recall::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_RecallClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_KeeperOfTheLight_Recall::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_RecallClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_KeeperOfTheLight_Recall::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_RecallClassInfo,
      "CDOTA_Ability_KeeperOfTheLight_Recall",
      "keeper_of_the_light_recall",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_KeeperOfTheLight_Recall::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_RecallClassInfo);
  }
  CDOTA_Ability_KeeperOfTheLight_Recall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_RecallClass.m_pClassInfo = &CDOTA_Ability_KeeperOfTheLight_Recall::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_RecallClassInfo;
  CDOTA_Ability_KeeperOfTheLight_Recall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_RecallClass.m_pBaseClassInfo = CDOTA_Ability_KeeperOfTheLight_Recall::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_RecallClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_KeeperOfTheLight_RecallClass = &CDOTA_Ability_KeeperOfTheLight_Recall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_RecallClass;
  CDOTA_Ability_KeeperOfTheLight_Recall::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_RecallClassInfo.m_pClass = &CDOTA_Ability_KeeperOfTheLight_Recall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_RecallClass;
  CDOTA_Ability_KeeperOfTheLight_Recall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_RecallClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_KeeperOfTheLight_RecallClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_KeeperOfTheLight_Recall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_RecallClass;
}


// CDOTA_Ability_KeeperOfTheLight_Recall::OnStolen  (line 1718, @0x0000000002c99990, libserver.so)
// calls: CDOTABaseAbility::SetActivated
void __fastcall CDOTA_Ability_KeeperOfTheLight_Recall::OnStolen(
        CDOTA_Ability_KeeperOfTheLight_Recall *const this,
        CDOTABaseAbility *pSourceAbility)
{
  CDOTABaseAbility::SetActivated(this, 1);
}


// CDOTA_Ability_KeeperOfTheLight_Recall::IsHiddenWhenStolen  (line 1720, @0x0000000002c898e0, libserver.so)
bool __fastcall CDOTA_Ability_KeeperOfTheLight_Recall::IsHiddenWhenStolen(
        CDOTA_Ability_KeeperOfTheLight_Recall *const this)
{
  return 1;
}


// CDOTA_Ability_KeeperOfTheLight_Recall::YouForgotToImplementOrDeclareServerClass  (line 1726, @0x0000000002c1c870, libserver.so)
int __fastcall CDOTA_Ability_KeeperOfTheLight_Recall::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_KeeperOfTheLight_Recall *const this)
{
  return 0;
}


// CDOTA_Ability_KeeperOfTheLight_Recall::GetServerClass  (line 1726, @0x0000000002c35430, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_KeeperOfTheLight_Recall::GetServerClass(
        CDOTA_Ability_KeeperOfTheLight_Recall *const this)
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


// CDOTA_Ability_KeeperOfTheLight_Recall::CastFilterResult  (line 1735, @0x0000000002c22cf0, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTABaseAbility::GetCaster, UnitFilter, CDOTA_PlayerResource::IsDisableHelpSetForPlayerID
int __fastcall CDOTA_Ability_KeeperOfTheLight_Recall::CastFilterResult(
        CDOTA_Ability_KeeperOfTheLight_Recall *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  int result; // eax
  CDOTA_BaseNPC *v6; // rdx
  unsigned __int8 m_Value; // r13
  CDOTA_BaseNPC *v8; // rax
  bool IsDisableHelpSetForPlayerID; // dl

  Caster = CDOTABaseAbility::GetCaster(this);
  result = UnitFilter(pTarget, 1, 1, &stru_20040, Caster->m_iTeamNum.m_Value);
  if ( result == 0 )
  {
    v6 = CDOTABaseAbility::GetCaster(this);
    result = 23;
    if ( pTarget != v6 )
    {
      if ( (pTarget->m_iUnitType & 1) == 0 )
        return 0;
      m_Value = pTarget->m_iTeamNum.m_Value;
      if ( m_Value != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
        return 0;
      v8 = CDOTABaseAbility::GetCaster(this);
      IsDisableHelpSetForPlayerID = CDOTA_PlayerResource::IsDisableHelpSetForPlayerID(
                                      g_pDOTAPlayerResource,
                                      pTarget->m_nControllingPlayerID,
                                      v8->m_nControllingPlayerID);
      result = 25;
      if ( !IsDisableHelpSetForPlayerID )
        return 0;
    }
  }
  return result;
}


// CDOTA_Ability_KeeperOfTheLight_Recall::GetCustomCastError  (line 1757, @0x0000000002c1e940, libserver.so)
// calls: CDOTABaseAbility::GetCaster
// strings: "#dota_hud_error_cant_cast_on_self"
const char *__fastcall CDOTA_Ability_KeeperOfTheLight_Recall::GetCustomCastError(
        CDOTA_Ability_KeeperOfTheLight_Recall *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  const char *v4; // rdx

  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = "#dota_hud_error_cant_cast_on_self";
  if ( Caster != pTarget )
    return "";
  return v4;
}


// CDOTA_Ability_KeeperOfTheLight_Recall::OnSpellStart  (line 1767, @0x0000000002c582e0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CEntityInstance*, operator!=, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, KeyValues::~KeyValues (19 total)
// strings: "modifier_keeper_of_the_light_recall", "particles/units/heroes/hero_keeper_of_the_light/keeper_of_the_light_recall_cast.vpcf", "attach_attack1", "attach_staffend"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_KeeperOfTheLight_Recall::OnSpellStart(CDOTA_Ability_KeeperOfTheLight_Recall *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r13
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v6; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v8; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v10; // r15
  CDOTA_ParticleManager *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  const Vector *v13; // r14
  CDOTA_BaseNPC *v14; // rbx
  CDOTA_ParticleManager *v15; // rax
  CDOTA_ParticleManager *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  __int64 v18; // r12
  int v19; // r13d
  CDOTA_BaseNPC *v20; // rax
  CHandle<CBaseEntity> *v21; // rcx
  uint32 m_Index; // edx
  __int16 v23; // di
  unsigned __int64 v24; // r9
  CEntityIdentity *v25; // rcx
  __int64 v26; // rsi
  CDOTA_BaseNPC *m_pInstance; // rdi
  CEntityIdentity *v28; // rsi
  CEntityIdentity *v29; // rcx
  CEntityInstance *v30; // r15
  CDOTA_BaseNPC *v31; // rax
  CEntityInstance *v32; // rax
  Vector vPosition; // [rsp+20h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v36; // [rsp+68h] [rbp-38h]

  v36 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
LABEL_3:
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "teleport_delay", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_keeper_of_the_light_recall");
    KeyValues::SetFloat(&kv, "duration", v4);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_keeper_of_the_light_recall", &kv, 0);
    v6 = CDOTABaseAbility::GetCaster(this);
    ParticleManager = GetParticleManager();
    LODWORD(v6) = CDOTA_ParticleManager::CreateParticle(
                    ParticleManager,
                    "particles/units/heroes/hero_keeper_of_the_light/keeper_of_the_light_recall_cast.vpcf",
                    2,
                    v6,
                    0,
                    0);
    v8 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
    v10 = CDOTABaseAbility::GetCaster(this);
    v11 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v11, v6, 0, v10, 5, "attach_attack1", *AbsOrigin, 1);
    v12 = CDOTABaseAbility::GetCaster(this);
    v13 = CBaseEntity::GetAbsOrigin(v12);
    v14 = CDOTABaseAbility::GetCaster(this);
    v15 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v15, v6, 1, v14, 5, "attach_staffend", *v13, 1);
    v16 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v16, v6);
    KeyValues::~KeyValues(&kv);
    return;
  }
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  vPosition = CDOTABaseAbility::GetCursorPosition(this);
  v17 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v17->m_iTeamNum.m_Value, &vPosition, 0, -1.0, &entities, 1, 1, 196672, 1, 0);
  if ( entities.m_Size <= 0 )
    goto LABEL_19;
  v18 = 0;
  v19 = 0;
  while ( 1 )
  {
    v20 = CDOTABaseAbility::GetCaster(this);
    v21 = &entities.m_Memory.m_pMemory[v18];
    m_Index = entities.m_Memory.m_pMemory[v18].m_Index;
    if ( m_Index != -1 && m_Index != -2 )
    {
      v23 = v21->m_Index;
      v24 = v21->m_Index & 0x7FFF;
      v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v24 >> 9)];
      if ( v25 != 0 )
        break;
    }
    if ( v20 != 0 )
      goto LABEL_15;
LABEL_18:
    ++v19;
    ++v18;
    if ( entities.m_Size <= v19 )
      goto LABEL_19;
  }
  v26 = v23 & 0x1FF;
  m_pInstance = 0;
  v28 = &v25[v26];
  if ( v28 != 0 && m_Index == v28->m_EHandle.m_Index )
    m_pInstance = v28->m_pInstance;
  if ( v20 == m_pInstance )
    goto LABEL_18;
  v29 = &v25[v24 & 0x1FF];
  if ( v29 == 0
    || m_Index != v29->m_EHandle.m_Index
    || (v30 = v29->m_pInstance, v29->m_pInstance == 0)
    || BYTE3(v30[7]._vptr_IHandleEntity) == 0 )
  {
LABEL_15:
    v30 = 0;
  }
  v31 = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_PlayerResource::IsDisableHelpSetForPlayerID(
         g_pDOTAPlayerResource,
         v30[61].m_iszPrivateVScripts.u.m_Id,
         v31->m_nControllingPlayerID)
    || LOBYTE(v30[71].m_pEntity) != 0 )
  {
    goto LABEL_18;
  }
  v32 = CEntityHandle::operator CEntityInstance *(&entities.m_Memory.m_pMemory[v18]);
  v3 = v32;
  if ( v32 != 0 && BYTE3(v32[7]._vptr_IHandleEntity) != 0 )
  {
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
    goto LABEL_3;
  }
LABEL_19:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Modifier_KeeperOfTheLight_Recall::~CDOTA_Modifier_KeeperOfTheLight_Recall  (line 1812, @0x0000000002c924f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_KeeperOfTheLight_Recall::~CDOTA_Modifier_KeeperOfTheLight_Recall(
        CDOTA_Modifier_KeeperOfTheLight_Recall *const this)
{
  this->_vptr_CDOTA_Buff = &off_45C2E30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_KeeperOfTheLight_Recall::~CDOTA_Modifier_KeeperOfTheLight_Recall  (line 1812, @0x0000000002c92510, libserver.so)  // inlines: ~CDOTA_Modifier_KeeperOfTheLight_Recall
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_KeeperOfTheLight_Recall::~CDOTA_Modifier_KeeperOfTheLight_Recall(
        CDOTA_Modifier_KeeperOfTheLight_Recall *const this)
{
  this->_vptr_CDOTA_Buff = &off_45C2E30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_KeeperOfTheLight_Recall::GetAttributes  (line 1820, @0x0000000002c93cd0, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_KeeperOfTheLight_Recall::GetAttributes(
        CDOTA_Modifier_KeeperOfTheLight_Recall *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 6;
}


// CDOTA_Modifier_KeeperOfTheLight_Recall::GetEffectName  (line 1827, @0x0000000002c898f0, libserver.so)
// strings: "particles/units/heroes/hero_keeper_of_the_light/keeper_of_the_light_recall.vpcf"
const char *__fastcall CDOTA_Modifier_KeeperOfTheLight_Recall::GetEffectName(
        CDOTA_Modifier_KeeperOfTheLight_Recall *const this)
{
  return "particles/units/heroes/hero_keeper_of_the_light/keeper_of_the_light_recall.vpcf";
}


// CDOTA_Modifier_KeeperOfTheLight_Recall::OnCreated  (line 1839, @0x0000000002c1ef40, libserver.so)
// calls: CDOTA_Buff::GetCaster, DOTA_EmitSound, CDOTA_Buff::GetParent
// strings: "Hero_KeeperOfTheLight.Recall.Cast", "Hero_KeeperOfTheLight.Recall.Target"
void __fastcall CDOTA_Modifier_KeeperOfTheLight_Recall::OnCreated(
        CDOTA_Modifier_KeeperOfTheLight_Recall *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *Parent; // rax

  this->m_bWasAttacked = 0;
  Caster = CDOTA_Buff::GetCaster(this);
  DOTA_EmitSound(10, "Hero_KeeperOfTheLight.Recall.Cast", Caster);
  Parent = CDOTA_Buff::GetParent(this);
  DOTA_EmitSound(10, "Hero_KeeperOfTheLight.Recall.Target", Parent);
}


// CDOTA_Modifier_KeeperOfTheLight_Recall::OnDestroy  (line 1851, @0x0000000002c33310, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, GetEHandle, GetEntryIndex, GetSerialNumber, IsRealHero, Set, SetUnit, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator=
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CBaseEntity::StopSound, DOTA_EmitSound, CDOTA_ParticleManager::SetParticleControl, CDOTA_ModifierManager::RemoveModifierByName (18 total)
// strings: "modifier_tusk_snowball_movement", "particles/units/heroes/hero_keeper_of_the_light/keeper_of_the_light_recall_failure.vpcf", "attach_attack1", "Hero_KeeperOfTheLight.Recall.Target", "Hero_KeeperOfTheLight.Recall.Cast", "Hero_KeeperOfTheLight.Recall.Fail" (10 total)
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_KeeperOfTheLight_Recall::OnDestroy(CDOTA_Modifier_KeeperOfTheLight_Recall *const this)
{
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v4; // rbx
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  const Vector *AbsOrigin; // r14
  CDOTA_ParticleManager *v9; // rax
  const Vector *v10; // r14
  CDOTA_ParticleManager *v11; // rax
  CDOTA_ParticleManager *v12; // rax
  CDOTA_ParticleManager *v13; // rax
  int v14; // r13d
  const Vector *v15; // r14
  CDOTA_ParticleManager *v16; // rax
  const Vector *v17; // r14
  CDOTA_ParticleManager *v18; // rax
  CDOTA_ParticleManager *v19; // rax
  CDOTALocomotor *v20; // rax
  CEntityIdentity *m_pEntity; // rsi
  __int16 v22; // cx
  CEntityIdentity *v23; // rax
  int v24; // edx
  __int16 v25; // cx
  CDOTA_ParticleManager *v26; // rax
  int v27; // r13d
  const Vector *v28; // r14
  CDOTA_ParticleManager *v29; // rax
  const Vector *v30; // r14
  CDOTA_ParticleManager *v31; // rax
  CDOTA_ParticleManager *v32; // rax
  CDOTA_BaseNPC_Hero *v33; // rsi
  CDOTA_BaseNPC_Hero *v34; // rdi
  CModifierParams params; // [rsp+10h] [rbp-B0h] BYREF

  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  v4 = Caster;
  if ( Caster != 0
    && (*(Caster->_vptr_IHandleEntity + 408))(Caster) != 0
    && Parent != 0
    && (*(Parent->_vptr_IHandleEntity + 408))(Parent) != 0 )
  {
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_tusk_snowball_movement", 0);
    if ( this->m_bWasAttacked || ModifierByName != 0 || this->m_bPurgedDestroy )
    {
      ParticleManager = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_keeper_of_the_light/keeper_of_the_light_recall_failure.vpcf",
                   2,
                   0,
                   0,
                   0);
      AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
      v9 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v9, Particle, 0, Parent, 1, 0, *AbsOrigin, 1);
      v10 = CBaseEntity::GetAbsOrigin(v4);
      v11 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v11, Particle, 1, v4, 5, "attach_attack1", *v10, 1);
      v12 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v12, Particle);
      CBaseEntity::StopSound(Parent, "Hero_KeeperOfTheLight.Recall.Target");
      CBaseEntity::StopSound(v4, "Hero_KeeperOfTheLight.Recall.Cast");
      DOTA_EmitSound(10, "Hero_KeeperOfTheLight.Recall.Fail", Parent);
      DOTA_EmitSound(10, "Hero_KeeperOfTheLight.Recall.Fail", v4);
    }
    else
    {
      v13 = GetParticleManager();
      v14 = CDOTA_ParticleManager::CreateParticle(
              v13,
              "particles/units/heroes/hero_keeper_of_the_light/keeper_of_the_light_recall_poof.vpcf",
              2,
              0,
              0,
              0);
      v15 = CBaseEntity::GetAbsOrigin(Parent);
      v16 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v16, v14, 0, *&v15->x, v15->z);
      v17 = CBaseEntity::GetAbsOrigin(v4);
      v18 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v18, v14, 1, v4, 5, "attach_attack1", *v17, 1);
      v19 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v19, v14);
      CDOTA_ModifierManager::RemoveModifierByName(&Parent->m_ModifierManager, "modifier_life_stealer_infest");
      CDOTA_ModifierManager::RemoveModifierByName(&Parent->m_ModifierManager, "modifier_life_stealer_assimilate");
      v20 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
      CDOTALocomotor::InterruptMotionControllers(v20, 0);
      FindClearSpaceForUnitAroundEntity(v4, Parent);
      CDOTA_BaseNPC::Interrupt(Parent);
      params.ability.m_Index = -1;
      m_pEntity = Parent->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v22 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v22 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        params.ability.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                               | v22 & 0x7FFF;
      }
      CDOTA_ProjectileManager::ProjectileDodge(&g_DOTAProjectileManager, &params.ability, 0);
      params.bTooltip = 0;
      params.ability.m_Index = -1;
      params.fDamage = 0.0;
      params.fOriginalDamage = 0.0;
      params.nActivity = -1;
      params.nTooltipParam = 0;
      params.bIgnoreInvis = 0;
      params.bNoCooldown = 0;
      params.bReincarnate = 0;
      params.bDoNotConsume = 0;
      params.fDistance = 0.0;
      params.inflictor.m_Index = -1;
      params.nDamageflags = 0;
      params.nDamageCategory = 0;
      memset(&params.pOrb, 0, 24);
      params.bCraniumBasherTested = 0;
      params.bHeartRegenApplied = 0;
      params.bDiffusalApplied = 0;
      params.bChainLightningConsidered = 0;
      params.bSuppressDamage = 0;
      params.bRangedAttack = 0;
      params.nPlayerids_stick = 0;
      params.hattacker.m_Index = -1;
      params.htarget.m_Index = -1;
      params.hunit.m_Index = -1;
      v23 = Parent->m_pEntity;
      if ( v23 != 0 )
      {
        v24 = (v23->m_EHandle.m_Index >> 15) - (v23->m_flags & 1);
        v25 = 0x7FFF;
        if ( v23->m_EHandle.m_Index != -1 )
          v25 = v23->m_EHandle.m_Index & 0x7FFF;
        LOWORD(params.hunit.m_Index) = v25 | params.hunit.m_Index & 0x8000;
        params.hunit.m_Index = (v24 << 15) | params.hunit.m_Index & 0x7FFF;
      }
      FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_TELEPORTED, &params);
      CBaseEntity::GetAbsOrigin(Parent);
      v26 = GetParticleManager();
      v27 = CDOTA_ParticleManager::CreateParticle(
              v26,
              "particles/units/heroes/hero_keeper_of_the_light/keeper_of_the_light_recall_poof.vpcf",
              2,
              0,
              0,
              0);
      v28 = CBaseEntity::GetAbsOrigin(Parent);
      v29 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v29, v27, 0, Parent, 0, 0, *v28, 1);
      v30 = CBaseEntity::GetAbsOrigin(v4);
      v31 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v31, v27, 1, v4, 5, "attach_attack1", *v30, 1);
      v32 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v32, v27);
      CBaseEntity::StopSound(Parent, "Hero_KeeperOfTheLight.Recall.Target");
      CBaseEntity::StopSound(v4, "Hero_KeeperOfTheLight.Recall.Cast");
      DOTA_EmitSound(10, "Hero_KeeperOfTheLight.Recall.End", Parent);
      if ( (Parent->m_iUnitType & 1) != 0 && !Parent->m_bIsIllusion.m_Value )
      {
        v33 = 0;
        if ( Parent->m_bIsDOTANPC )
          v33 = Parent;
        v34 = 0;
        if ( v4->m_bIsDOTANPC && (v4->m_iUnitType & 1) != 0 && !v4->m_bIsIllusion.m_Value )
          v34 = v4;
        EconEntity_OnOwnerKillEaterEvent(
          v34,
          v33,
          kill_eater_event_t::kKillEaterEventType_KeeperOfTheLight_TeammatesRecalled,
          1,
          INVALID_ITEM_DEF_INDEX);
      }
    }
  }
}


// CDOTA_Modifier_KeeperOfTheLight_Recall::DeclareFunctions  (line 1921, @0x0000000002c1c880, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_KeeperOfTheLight_Recall::OnTakeDamage(CModifierParams const&), CDOTA_Modifier_KeeperOfTheLight_Recall::OnDeath(CModifierParams const&)
void __fastcall CDOTA_Modifier_KeeperOfTheLight_Recall::DeclareFunctions(
        CDOTA_Modifier_KeeperOfTheLight_Recall *const this)
{
  this->m_Functions[134].__pfn = CDOTA_Modifier_KeeperOfTheLight_Recall::OnTakeDamage;
  this->m_Functions[134].__delta = 0;
  this->m_Functions[138].__delta = 0;
  this->m_Functions[138].__pfn = CDOTA_Modifier_KeeperOfTheLight_Recall::OnDeath;
}


// CDOTA_Modifier_KeeperOfTheLight_Recall::OnTakeDamage  (line 1929, @0x0000000002c34160, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsOwnedByAnyPlayer, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_KeeperOfTheLight_Recall::OnTakeDamage(
        CDOTA_Modifier_KeeperOfTheLight_Recall *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  uint32 v7; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTA_BaseNPC *v12; // r13
  uint32 m_iUnitType; // eax

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->hunit.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v7 = params->hattacker.m_Index;
  if ( v7 + 2 > 1 )
  {
    m_Index_low = LOWORD(params->hattacker.m_Index);
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = &v9[m_Index_low & 0x1FF];
      if ( v10 != 0 && v7 == v10->m_EHandle.m_Index )
      {
        v12 = v10->m_pInstance;
        if ( v10->m_pInstance != 0
          && v12->m_bIsDOTANPC
          && m_pInstance != 0
          && CDOTA_Buff::GetParent(this) == m_pInstance
          && CDOTA_Buff::GetParent(this) != v12 )
        {
          m_iUnitType = v12->m_iUnitType;
          if ( (m_iUnitType & 1) != 0
            || v12->m_iIsControllableByPlayer64.m_Value != 0
            || (m_iUnitType & 0x800) != 0
            || (*(v12->_vptr_IHandleEntity + 405))(v12) != 0 )
          {
            this->m_bWasAttacked = 1;
            CDOTA_Buff::Destroy(this, 0, 0, 0);
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_KeeperOfTheLight_Recall::OnDeath  (line 1950, @0x0000000002c2d110, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_KeeperOfTheLight_Recall::OnDeath(
        CDOTA_Modifier_KeeperOfTheLight_Recall *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1uLL;
  v4 = &v3[params->hunit.m_Index & 0x1FF];
  if ( v4 == 0 || m_Index != v4->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC || CDOTA_Buff::GetCaster(this) != m_pInstance )
    return 1uLL;
  CDOTA_Buff::Destroy(this, 0, 0, 0);
  return 1uLL;
}


// CDOTA_Ability_KeeperOfTheLight_BlindingLight::~CDOTA_Ability_KeeperOfTheLight_BlindingLight  (line 1971, @0x0000000002c98910, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_KeeperOfTheLight_BlindingLight::~CDOTA_Ability_KeeperOfTheLight_BlindingLight(
        CDOTA_Ability_KeeperOfTheLight_BlindingLight *const this)
{
  this->_vptr_IHandleEntity = &off_45C3190;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_KeeperOfTheLight_BlindingLight::~CDOTA_Ability_KeeperOfTheLight_BlindingLight  (line 1971, @0x0000000002c98930, libserver.so)  // inlines: ~CDOTA_Ability_KeeperOfTheLight_BlindingLight
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_KeeperOfTheLight_BlindingLight::~CDOTA_Ability_KeeperOfTheLight_BlindingLight(
        CDOTA_Ability_KeeperOfTheLight_BlindingLight *const this)
{
  this->_vptr_IHandleEntity = &off_45C3190;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_KeeperOfTheLight_BlindingLight::Schema_DynamicBinding  (line 1973, @0x0000000002c89900, libserver.so)
// globals: CDOTA_Ability_KeeperOfTheLight_BlindingLight::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_KeeperOfTheLight_BlindingLight::Schema_DynamicBinding(
        const CDOTA_Ability_KeeperOfTheLight_BlindingLight *const this)
{
  return CDOTA_Ability_KeeperOfTheLight_BlindingLight::s_pSchemaBinding;
}


// CDOTA_Ability_KeeperOfTheLight_BlindingLight::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1973, @0x0000000002c89910, libserver.so)
// globals: CDOTA_Ability_KeeperOfTheLight_BlindingLight::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_KeeperOfTheLight_BlindingLight::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_KeeperOfTheLight_BlindingLight::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_KeeperOfTheLight_BlindingLight::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_KeeperOfTheLight_BlindingLight::CEntityInstanceEntityClass::DestructInstance  (line 1973, @0x0000000002c89920, libserver.so)  // inlines: Destruct<CDOTA_Ability_KeeperOfTheLight_BlindingLight>
void __fastcall CDOTA_Ability_KeeperOfTheLight_BlindingLight::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_KeeperOfTheLight_BlindingLight::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_KeeperOfTheLight_BlindingLight::CEntityInstanceEntityClass::FreeInstance  (line 1973, @0x0000000002c89940, libserver.so)
void __fastcall CDOTA_Ability_KeeperOfTheLight_BlindingLight::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_KeeperOfTheLight_BlindingLight::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_KeeperOfTheLight_BlindingLight::CEntityInstanceEntityClass::CanAllocate  (line 1973, @0x0000000002c89960, libserver.so)
bool __fastcall CDOTA_Ability_KeeperOfTheLight_BlindingLight::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_KeeperOfTheLight_BlindingLight::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_KeeperOfTheLight_BlindingLight::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1973, @0x0000000002c89970, libserver.so)
// globals: CDOTA_Ability_KeeperOfTheLight_BlindingLight::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_KeeperOfTheLight_BlindingLight::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_KeeperOfTheLight_BlindingLight::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_KeeperOfTheLight_BlindingLight::s_pSchemaBinding;
}


// CDOTA_Ability_KeeperOfTheLight_BlindingLight::CEntityInstanceEntityClass::AllocateInstance  (line 1973, @0x0000000002c8ff60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_KeeperOfTheLight_BlindingLight::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_KeeperOfTheLight_BlindingLight::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_KeeperOfTheLight_BlindingLight::CEntityInstanceEntityClass::ConstructInstance  (line 1973, @0x0000000002ca0970, libserver.so)  // inlines: CDOTA_Ability_KeeperOfTheLight_BlindingLight, Construct<CDOTA_Ability_KeeperOfTheLight_BlindingLight>
// calls: CDOTABaseAbility::CDOTABaseAbility, CDOTABaseAbility::SetActivated, CDOTABaseAbility::~CDOTABaseAbility, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_Ability_KeeperOfTheLight_BlindingLight::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_KeeperOfTheLight_BlindingLight::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45C3190;
    CDOTABaseAbility::SetActivated(p, 0);
  }
  return p;
}


// CDOTA_Ability_KeeperOfTheLight_BlindingLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1973, @0x0000000002ca2570, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_KeeperOfTheLight_BlindingLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_KeeperOfTheLight_BlindingLight::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_KeeperOfTheLight_BlindingLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1973, @0x0000000002ca2590, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_KeeperOfTheLight_BlindingLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_KeeperOfTheLight_BlindingLight::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal  (line 1973, @0x0000000002cc1b00, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "keeper_of_the_light_blinding_light", "CDOTA_Ability_KeeperOfTheLight_BlindingLight"
// globals: `guard variable for'CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass, CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_KeeperOfTheLight_BlindingLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClassInfo, CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClassInfo
CEntityClass *__cdecl CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass) != 0 )
  {
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_pClassInfo = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_flags = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_pInputs = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_nInputCount = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_pOutputs = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_nOutputCount = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_pGameClass = 0;
    CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass._vptr_CEntityClass = off_45C3110;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass);
    __cxa_atexit(
      CDOTA_Ability_KeeperOfTheLight_BlindingLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass != 0 )
    return &CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass;
  if ( `guard variable for'CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClassInfo,
      "CDOTA_Ability_KeeperOfTheLight_BlindingLight",
      "keeper_of_the_light_blinding_light",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClassInfo);
  }
  CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_pClassInfo = &CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClassInfo;
  CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_pBaseClassInfo = CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass = &CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass;
  CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClassInfo.m_pClass = &CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass;
  CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_KeeperOfTheLight_BlindingLightClass;
}


// CDOTA_Ability_KeeperOfTheLight_BlindingLight::OnStolen  (line 1979, @0x0000000002c999a0, libserver.so)
// calls: CDOTABaseAbility::SetActivated
void __fastcall CDOTA_Ability_KeeperOfTheLight_BlindingLight::OnStolen(
        CDOTA_Ability_KeeperOfTheLight_BlindingLight *const this,
        CDOTABaseAbility *pSourceAbility)
{
  CDOTABaseAbility::SetActivated(this, 1);
}


// CDOTA_Ability_KeeperOfTheLight_BlindingLight::IsHiddenWhenStolen  (line 1993, @0x0000000002c89980, libserver.so)
bool __fastcall CDOTA_Ability_KeeperOfTheLight_BlindingLight::IsHiddenWhenStolen(
        CDOTA_Ability_KeeperOfTheLight_BlindingLight *const this)
{
  return 1;
}


// CDOTA_Ability_KeeperOfTheLight_BlindingLight::YouForgotToImplementOrDeclareServerClass  (line 1996, @0x0000000002c1c8c0, libserver.so)
int __fastcall CDOTA_Ability_KeeperOfTheLight_BlindingLight::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_KeeperOfTheLight_BlindingLight *const this)
{
  return 0;
}


// CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetServerClass  (line 1996, @0x0000000002c35c30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_KeeperOfTheLight_BlindingLight::GetServerClass(
        CDOTA_Ability_KeeperOfTheLight_BlindingLight *const this)
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


// CDOTA_Ability_KeeperOfTheLight_BlindingLight::OnSpellStart  (line 2005, @0x0000000002c6d4c0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetParent, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCursorPosition, CDOTABaseAbility::GetCaster, FindUnitsInRadius, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, CGameSceneNode::GetOwnerEntity, DOTA_EmitSoundLocationWithCaster (20 total)
// strings: "particles/units/heroes/hero_keeper_of_the_light/keeper_of_the_light_blinding_light_aoe.vp, "attach_attack1", "Hero_KeeperOfTheLight.BlindingLight", "modifier_blinding_light_knockback", "center_x", "center_y" (9 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_KeeperOfTheLight_BlindingLight::OnSpellStart(
        CDOTA_Ability_KeeperOfTheLight_BlindingLight *const this)
{
  int LevelSpecialValue; // r14d
  __m128i v3; // xmm2
  float v4; // r14d
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_BaseNPC *v6; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v8; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v10; // r13
  CDOTA_ParticleManager *v11; // rax
  CDOTA_ParticleManager *v12; // rax
  CDOTA_ParticleManager *v13; // rax
  CDOTA_ParticleManager *v14; // rax
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rdi
  CDOTA_BaseNPC *v17; // rax
  __int64 v18; // r12
  int v19; // ebx
  CHandle<CBaseEntity> *v20; // rdx
  uint32 m_Index; // eax
  __int16 v22; // cx
  CEntityIdentity *v23; // rdx
  CEntityIdentity *v24; // rdx
  CEntityInstance *m_pInstance; // r13
  float v26; // xmm1_4
  float v27; // xmm1_4
  float v28; // xmm1_4
  float v29; // xmm1_4
  CDOTA_BaseNPC *v30; // rax
  float v31; // xmm1_4
  CDOTA_BaseNPC *v32; // rax
  Vector vLocation; // [rsp+30h] [rbp-C0h] BYREF
  Vector vPos; // [rsp+40h] [rbp-B0h] BYREF
  Vector v35; // [rsp+50h] [rbp-A0h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hUnits; // [rsp+60h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+80h] [rbp-70h] BYREF
  KeyValues kv2; // [rsp+A0h] [rbp-50h] BYREF
  unsigned __int64 v39; // [rsp+B8h] [rbp-38h]
  Vector CursorPosition; // 0:kr00_12.12

  v39 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  *v3.m128i_i32 = LevelSpecialValue;
  vLocation = CursorPosition;
  hUnits.m_Size = 0;
  hUnits.m_Memory.m_pMemory = 0;
  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  hUnits.m_Memory.m_nAllocationCount = 0;
  hUnits.m_Memory.m_nGrowSize = 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  v6 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v6->m_iTeamNum.m_Value, &vLocation, Caster, v4, &hUnits, 2, 3, 0, 0, 0);
  ParticleManager = GetParticleManager();
  LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_keeper_of_the_light/keeper_of_the_light_blinding_light_aoe.vpcf",
                      2,
                      0,
                      0,
                      0);
  v8 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
  v10 = CDOTABaseAbility::GetCaster(this);
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v11, Caster, 0, v10, 5, "attach_attack1", *AbsOrigin, 1);
  v35 = CDOTABaseAbility::GetCursorPosition(this);
  v12 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v12, Caster, 1, *&v35.x, v35.z);
  vPos.x = v4;
  vPos.y = v4;
  vPos.z = v4;
  v13 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v13, Caster, 2, *&vPos.x, vPos.z);
  v14 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v14, Caster);
  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
  else
    OwnerEntity = 0;
  vPos = *CBaseEntity::GetAbsOrigin(OwnerEntity);
  v17 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSoundLocationWithCaster(&vPos, "Hero_KeeperOfTheLight.BlindingLight", v17);
  if ( hUnits.m_Size > 0 )
  {
    v18 = 0;
    v19 = 0;
    do
    {
      while ( 1 )
      {
        v20 = &hUnits.m_Memory.m_pMemory[v18];
        m_Index = hUnits.m_Memory.m_pMemory[v18].m_Index;
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
              if ( v24->m_pInstance != 0
                && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                && LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0
                && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 1) == 0
                && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x800) == 0
                && BYTE5(m_pInstance[45]._vptr_IHandleEntity) == 0 )
              {
                break;
              }
            }
          }
        }
        ++v19;
        ++v18;
        if ( hUnits.m_Size <= v19 )
          goto LABEL_17;
      }
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "knockback_duration", -1, 0);
      KeyValues::KeyValues(&kv, "modifier_blinding_light_knockback");
      KeyValues::SetFloat(&kv, "center_x", v26);
      KeyValues::SetFloat(&kv, "center_y", v27);
      KeyValues::SetFloat(&kv, "center_z", v28);
      KeyValues::SetFloat(&kv, "duration", v29);
      v30 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v30, this, "modifier_blinding_light_knockback", &kv, 0);
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "miss_duration", -1, 0);
      KeyValues::KeyValues(&kv2, "modifier_keeper_of_the_light_blinding_light");
      KeyValues::SetFloat(&kv2, "duration", v31);
      v32 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v32, this, "modifier_keeper_of_the_light_blinding_light", &kv2, 0);
      ++v19;
      ++v18;
      KeyValues::~KeyValues(&kv2);
      KeyValues::~KeyValues(&kv);
    }
    while ( hUnits.m_Size > v19 );
  }
LABEL_17:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hUnits);
}


// CDOTA_Modifier_KeeperOfTheLight_BlindingLight::~CDOTA_Modifier_KeeperOfTheLight_BlindingLight  (line 2067, @0x0000000002c924a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_KeeperOfTheLight_BlindingLight::~CDOTA_Modifier_KeeperOfTheLight_BlindingLight(
        CDOTA_Modifier_KeeperOfTheLight_BlindingLight *const this)
{
  this->_vptr_CDOTA_Buff = &off_45C3C50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_KeeperOfTheLight_BlindingLight::~CDOTA_Modifier_KeeperOfTheLight_BlindingLight  (line 2067, @0x0000000002c924c0, libserver.so)  // inlines: ~CDOTA_Modifier_KeeperOfTheLight_BlindingLight
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_KeeperOfTheLight_BlindingLight::~CDOTA_Modifier_KeeperOfTheLight_BlindingLight(
        CDOTA_Modifier_KeeperOfTheLight_BlindingLight *const this)
{
  this->_vptr_CDOTA_Buff = &off_45C3C50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_KeeperOfTheLight_BlindingLight::IsDebuff  (line 2072, @0x0000000002c89990, libserver.so)
bool __fastcall CDOTA_Modifier_KeeperOfTheLight_BlindingLight::IsDebuff(
        CDOTA_Modifier_KeeperOfTheLight_BlindingLight *const this)
{
  return 1;
}


// CDOTA_Modifier_KeeperOfTheLight_BlindingLight::GetEffectName  (line 2079, @0x0000000002c899a0, libserver.so)
// strings: "particles/units/heroes/hero_keeper_of_the_light/keeper_of_the_light_blinding_light_debuff
const char *__fastcall CDOTA_Modifier_KeeperOfTheLight_BlindingLight::GetEffectName(
        CDOTA_Modifier_KeeperOfTheLight_BlindingLight *const this)
{
  return "particles/units/heroes/hero_keeper_of_the_light/keeper_of_the_light_blinding_light_debuff.vpcf";
}


// CDOTA_Modifier_KeeperOfTheLight_BlindingLight::OnCreated  (line 2091, @0x0000000002c70ef0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "miss_rate"
void __fastcall CDOTA_Modifier_KeeperOfTheLight_BlindingLight::OnCreated(
        CDOTA_Modifier_KeeperOfTheLight_BlindingLight *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->miss_rate = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "miss_rate", -1, 0);
  else
    this->miss_rate = 0;
}


// CDOTA_Modifier_KeeperOfTheLight_BlindingLight::DeclareFunctions  (line 2098, @0x0000000002c1c8d0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_KeeperOfTheLight_BlindingLight::DeclareFunctions(
        CDOTA_Modifier_KeeperOfTheLight_BlindingLight *const this)
{
  this->m_Functions[44].__pfn = (&stru_10 + 697);
  this->m_Functions[44].__delta = 0;
}


// CDOTA_Modifier_KeeperOfTheLight_BlindingLight::GetModifierMiss_Percentage  (line 2105, @0x0000000002c1c8f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_KeeperOfTheLight_BlindingLight::GetModifierMiss_Percentage(
        CDOTA_Modifier_KeeperOfTheLight_BlindingLight *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->miss_rate;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_BlindingLight_Knockback::~CDOTA_Modifier_BlindingLight_Knockback  (line 2114, @0x0000000002c92410, libserver.so)  // inlines: ~CDOTA_Modifier_Knockback
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_BlindingLight_Knockback::~CDOTA_Modifier_BlindingLight_Knockback(
        CDOTA_Modifier_BlindingLight_Knockback *const this)
{
  this->_vptr_CDOTA_Buff = &off_4122C50;
  this->_vptr_CHorizontalMotionController = &off_4122F58;
  this->_vptr_CVerticalMotionController = &off_4122F98;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_BlindingLight_Knockback::~CDOTA_Modifier_BlindingLight_Knockback  (line 2114, @0x0000000002c92450, libserver.so)  // inlines: ~CDOTA_Modifier_BlindingLight_Knockback, ~CDOTA_Modifier_Knockback
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_BlindingLight_Knockback::~CDOTA_Modifier_BlindingLight_Knockback(
        CDOTA_Modifier_BlindingLight_Knockback *const this)
{
  this->_vptr_CDOTA_Buff = &off_4122C50;
  this->_vptr_CHorizontalMotionController = &off_4122F58;
  this->_vptr_CVerticalMotionController = &off_4122F98;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_BlindingLight_Knockback::IsHidden  (line 2120, @0x0000000002c899b0, libserver.so)
bool __fastcall CDOTA_Modifier_BlindingLight_Knockback::IsHidden(CDOTA_Modifier_BlindingLight_Knockback *const this)
{
  return 1;
}


// CDOTA_Modifier_BlindingLight_Knockback::IsStunDebuff  (line 2121, @0x0000000002c899c0, libserver.so)
bool __fastcall CDOTA_Modifier_BlindingLight_Knockback::IsStunDebuff(
        CDOTA_Modifier_BlindingLight_Knockback *const this)
{
  return 0;
}


// CDOTA_Modifier_BlindingLight_Knockback::CheckState  (line 2129, @0x0000000002c1c910, libserver.so)
void __fastcall CDOTA_Modifier_BlindingLight_Knockback::CheckState(
        CDOTA_Modifier_BlindingLight_Knockback *const this,
        CDOTABuffState *const buffState)
{
  ;
}


// CDOTA_Modifier_BlindingLight_Knockback::OnDestroy  (line 2137, @0x0000000002c23cb0, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CGridNav::DestroyTreesAroundPoint, CDOTA_Modifier_Knockback::OnDestroy
void __fastcall CDOTA_Modifier_BlindingLight_Knockback::OnDestroy(CDOTA_Modifier_BlindingLight_Knockback *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v3; // r12d
  CDOTA_BaseNPC *Parent; // rax
  float v5; // xmm3_4
  Vector v6; // 0:xmm0_8.8,8:xmm1_4.4

  Caster = CDOTA_Buff::GetCaster(this);
  v3 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
  Parent = CDOTA_Buff::GetParent(this);
  v6 = *CBaseEntity::GetAbsOrigin(Parent);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v3, v6, 150.0, v5);
  CDOTA_Modifier_Knockback::OnDestroy(this);
}


