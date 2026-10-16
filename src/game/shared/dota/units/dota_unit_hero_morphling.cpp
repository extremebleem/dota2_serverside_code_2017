// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_morphling.cpp:36
class CDOTA_Unit_Hero_Morphling : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Morphling(CDOTA_Unit_Hero_Morphling &);
	CDOTA_Unit_Hero_Morphling(CDOTA_Unit_Hero_Morphling &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnIllusionPostSpawn(CDOTA_BaseNPC *);
	virtual bool UsesConstantGesture(bool);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void OnItemEquipped(CDOTA_Item *);
	CDOTA_Unit_Hero_Morphling();
	virtual bool OnSaveState(KeyValues *);
	virtual bool OnLoadState(KeyValues *);
	virtual ~CDOTA_Unit_Hero_Morphling();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[491] OnIllusionPostSpawn
	// vtable[380] UsesConstantGesture
	// vtable[6] Precache
	// vtable[479] OnItemEquipped
	// vtable[466] OnSaveState
	// vtable[467] OnLoadState
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_morphling.cpp:68
class C_CDOTA_Unit_Hero_Morphling_MapInstall {
	C_CDOTA_Unit_Hero_Morphling_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_morphling.cpp:149
class CDOTA_Ability_Morphling_Waveform : public CDOTABaseAbility, public CHorizontalMotionController {
public:

private:

	int m_nProjectileID;  // +0x39c
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
	CDOTA_Ability_Morphling_Waveform(CDOTA_Ability_Morphling_Waveform &);
	CDOTA_Ability_Morphling_Waveform(CDOTA_Ability_Morphling_Waveform &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Ability_Morphling_Waveform();
	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual void OnProjectileThink(const Vector &);
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual ~CDOTA_Ability_Morphling_Waveform();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[291] OnProjectileThink
	// vtable[333] UpdateHorizontalMotion
	// vtable[334] OnHorizontalMotionInterrupted
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[226] GetCastRange
	// sizeof = 944
};

// src/game/shared/dota/units/dota_unit_hero_morphling.cpp:176
class C_CDOTA_Ability_Morphling_Waveform_MapInstall {
	C_CDOTA_Ability_Morphling_Waveform_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_morphling.cpp:335
class CDOTA_Modifier_Morphling_Waveform : public CDOTA_Buff {
public:

	CDOTA_Modifier_Morphling_Waveform();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Morphling_Waveform();

	// vtable[5] CheckState
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_morphling.cpp:361
class CDOTA_Ability_Morphling_AdaptiveStrike : public CDOTABaseAbility {
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
	CDOTA_Ability_Morphling_AdaptiveStrike(CDOTA_Ability_Morphling_AdaptiveStrike &);
	CDOTA_Ability_Morphling_AdaptiveStrike(CDOTA_Ability_Morphling_AdaptiveStrike &);
	CDOTA_Ability_Morphling_AdaptiveStrike();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_Morphling_AdaptiveStrike();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[6] Precache
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_morphling.cpp:556
class CDOTA_Modifier_Morphling_Adaptive_Strike : public CDOTA_Modifier_Stunned, public CHorizontalMotionController {
public:

private:

	float m_flTotalDistance;  // +0xbcc
	float m_flCurTime;  // +0xbd0
	CDOTA_Modifier_Morphling_Adaptive_Strike();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual bool IsHorizontalMotionValidToApply();
	virtual bool IsMotionController();
	virtual ~CDOTA_Modifier_Morphling_Adaptive_Strike();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] IsHorizontalMotionValidToApply
	// vtable[21] IsMotionController
	// sizeof = 3032
};

// src/game/shared/dota/units/dota_unit_hero_morphling.cpp:630
class CDOTA_Ability_Morphling_Morph : public CDOTABaseAbility {
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
	CDOTA_Ability_Morphling_Morph(CDOTA_Ability_Morphling_Morph &);
	CDOTA_Ability_Morphling_Morph(CDOTA_Ability_Morphling_Morph &);
	CDOTA_Ability_Morphling_Morph();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual bool IsHiddenWhenStolen();
	virtual ~CDOTA_Ability_Morphling_Morph();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[306] IsHiddenWhenStolen
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_morphling.cpp:646
class CDOTA_Modifier_Morphling_Morph : public CDOTA_Buff {
public:

private:

	float tick_rate;  // +0xba8
	int bonus_attributes;  // +0xbac
	CDOTA_Modifier_Morphling_Morph();
	virtual bool RefreshTexture();
	virtual const char * GetTexture();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Agility(const CModifierParams &);
	virtual ~CDOTA_Modifier_Morphling_Morph();

	// vtable[24] RefreshTexture
	// vtable[32] GetTexture
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_morphling.cpp:733
class CDOTA_Ability_Morphling_Morph_Agi : public CDOTABaseAbility {
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
	CDOTA_Ability_Morphling_Morph_Agi(CDOTA_Ability_Morphling_Morph_Agi &);
	CDOTA_Ability_Morphling_Morph_Agi(CDOTA_Ability_Morphling_Morph_Agi &);
	CDOTA_Ability_Morphling_Morph_Agi();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual bool ProcsMagicStick();
	virtual void OnUpgrade();
	virtual void OnToggle();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual ~CDOTA_Ability_Morphling_Morph_Agi();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[239] ProcsMagicStick
	// vtable[268] OnUpgrade
	// vtable[270] OnToggle
	// vtable[304] GetAssociatedSecondaryAbilities
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_morphling.cpp:811
class CDOTA_Modifier_Morphling_Morph_Agi : public CDOTA_Buff {
public:

private:

	int mana_cost;  // +0xba8
	int points_per_tick;  // +0xbac
	float morph_cooldown;  // +0xbb0
	CDOTA_Modifier_Morphling_Morph_Agi();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Morphling_Morph_Agi();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[14] IsPurgable
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_morphling.cpp:911
class CDOTA_Ability_Morphling_Morph_Str : public CDOTABaseAbility {
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
	CDOTA_Ability_Morphling_Morph_Str(CDOTA_Ability_Morphling_Morph_Str &);
	CDOTA_Ability_Morphling_Morph_Str(CDOTA_Ability_Morphling_Morph_Str &);
	CDOTA_Ability_Morphling_Morph_Str();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual bool ProcsMagicStick();
	virtual void OnUpgrade();
	virtual void OnToggle();
	virtual const char * GetAssociatedPrimaryAbilities();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual ~CDOTA_Ability_Morphling_Morph_Str();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[239] ProcsMagicStick
	// vtable[268] OnUpgrade
	// vtable[270] OnToggle
	// vtable[303] GetAssociatedPrimaryAbilities
	// vtable[304] GetAssociatedSecondaryAbilities
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_morphling.cpp:990
class CDOTA_Modifier_Morphling_Morph_Str : public CDOTA_Buff {
public:

private:

	int mana_cost;  // +0xba8
	int points_per_tick;  // +0xbac
	float morph_cooldown;  // +0xbb0
	CDOTA_Modifier_Morphling_Morph_Str();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual bool IsPurgable();
	virtual int GetManaCost();
	virtual ~CDOTA_Modifier_Morphling_Morph_Str();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[14] IsPurgable
	// vtable[89] GetManaCost
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_morphling.cpp:1113
class CDOTA_Ability_Morphling_Replicate : public CDOTABaseAbility {
public:

private:

	EHANDLE m_hImage;  // +0x390
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
	CDOTA_Ability_Morphling_Replicate(CDOTA_Ability_Morphling_Replicate &);
	CDOTA_Ability_Morphling_Replicate(CDOTA_Ability_Morphling_Replicate &);
	CDOTA_Ability_Morphling_Replicate();
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
	virtual void OnUnStolen();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual const char * GetAssociatedSecondaryAbilities();
	EHANDLE CreateReplicate(CDOTA_BaseNPC *, float);
	virtual ~CDOTA_Ability_Morphling_Replicate();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[268] OnUpgrade
	// vtable[266] OnSpellStart
	// vtable[308] OnUnStolen
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// vtable[304] GetAssociatedSecondaryAbilities
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_morphling.cpp:1133
class C_CDOTA_Ability_Morphling_Replicate_MapInstall {
	C_CDOTA_Ability_Morphling_Replicate_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_morphling.cpp:1294
class CDOTA_Modifier_Morphling_Replicate_Timer : public CDOTA_Buff {
public:

private:

	float duration;  // +0xba8
	float m_fStartTime;  // +0xbac
	CDOTA_Modifier_Morphling_Replicate_Timer();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Morphling_Replicate_Timer();

	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_morphling.cpp:1348
class CDOTA_Modifier_Morphling_Replicate : public CDOTA_Buff {
public:

	CDOTA_Modifier_Morphling_Replicate();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual ~CDOTA_Modifier_Morphling_Replicate();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_morphling.cpp:1414
class CDOTA_Ability_Morphling_MorphReplicate : public CDOTABaseAbility {
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
	CDOTA_Ability_Morphling_MorphReplicate(CDOTA_Ability_Morphling_MorphReplicate &);
	CDOTA_Ability_Morphling_MorphReplicate(CDOTA_Ability_Morphling_MorphReplicate &);
	CDOTA_Ability_Morphling_MorphReplicate();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnUpgrade();
	virtual void OnSpellStart();
	virtual const char * GetAssociatedPrimaryAbilities();
	virtual bool IsHiddenWhenStolen();
	virtual ~CDOTA_Ability_Morphling_MorphReplicate();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[268] OnUpgrade
	// vtable[266] OnSpellStart
	// vtable[303] GetAssociatedPrimaryAbilities
	// vtable[306] IsHiddenWhenStolen
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_morphling.cpp:1562
class CDOTA_Ability_Morphling_Hybrid : public CDOTABaseAbility {
	class NetworkVar_m_hImage {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	typedef CDOTA_Ability_Morphling_Hybrid ThisClass;

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
	CDOTA_Ability_Morphling_Hybrid(CDOTA_Ability_Morphling_Hybrid &);
	CDOTA_Ability_Morphling_Hybrid(CDOTA_Ability_Morphling_Hybrid &);
	CDOTA_Ability_Morphling_Hybrid();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual void OnSpellStart();
	EHANDLE CreateHybrid(CDOTA_BaseNPC *, float);
	virtual ~CDOTA_Ability_Morphling_Hybrid();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// vtable[266] OnSpellStart
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_morphling.cpp:1584
class C_CDOTA_Ability_Morphling_Hybrid_MapInstall {
	C_CDOTA_Ability_Morphling_Hybrid_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_morphling.cpp:1696
class CDOTA_Modifier_Morphling_Hybrid_Special : public CDOTA_Buff {
public:

private:

	bool m_bLeftoverHybrid;  // +0xba8
	CDOTA_Modifier_Morphling_Hybrid_Special();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierSuperIllusion(const CModifierParams &);
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual void OnThinkInternal();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Morphling_Hybrid_Special();

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

// src/game/shared/dota/units/dota_unit_hero_morphling.cpp:1821
class CDOTA_Modifier_Morphling_Hybrid_Hide : public CDOTA_Buff {
public:

	CDOTA_Modifier_Morphling_Hybrid_Hide();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierInvisibilityLevel(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Morphling_Hybrid_Hide();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierInvisibilityLevel
	// vtable[5] CheckState
	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Morphling::~CDOTA_Unit_Hero_Morphling  (line 36, @0x0000000002a18b10, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Morphling::~CDOTA_Unit_Hero_Morphling(CDOTA_Unit_Hero_Morphling *const this)
{
  this->_vptr_IHandleEntity = &off_435D770;
  this->_vptr_INextBotEventResponder = &off_435E750;
  this->_vptr_CObstructionObject = &off_435EA80;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Morphling::~CDOTA_Unit_Hero_Morphling  (line 36, @0x0000000002a18b50, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Morphling
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Morphling::~CDOTA_Unit_Hero_Morphling(CDOTA_Unit_Hero_Morphling *const this)
{
  this->_vptr_IHandleEntity = &off_435D770;
  this->_vptr_INextBotEventResponder = &off_435E750;
  this->_vptr_CObstructionObject = &off_435EA80;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Morphling::Schema_DynamicBinding  (line 38, @0x0000000002a0a600, libserver.so)
// globals: CDOTA_Unit_Hero_Morphling::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Morphling::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Morphling *const this)
{
  return CDOTA_Unit_Hero_Morphling::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Morphling::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 38, @0x0000000002a0a630, libserver.so)
// globals: CDOTA_Unit_Hero_Morphling::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Morphling::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Morphling::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Morphling::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Morphling::CEntityInstanceEntityClass::DestructInstance  (line 38, @0x0000000002a0a640, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Morphling>
void __fastcall CDOTA_Unit_Hero_Morphling::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Morphling::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Morphling::CEntityInstanceEntityClass::FreeInstance  (line 38, @0x0000000002a0a660, libserver.so)
void __fastcall CDOTA_Unit_Hero_Morphling::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Morphling::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Morphling::CEntityInstanceEntityClass::CanAllocate  (line 38, @0x0000000002a0a680, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Morphling::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Morphling::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Morphling::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 38, @0x0000000002a0a690, libserver.so)
// globals: CDOTA_Unit_Hero_Morphling::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Morphling::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Morphling::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Morphling::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Morphling::CEntityInstanceEntityClass::AllocateInstance  (line 38, @0x0000000002a0fd80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Morphling::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Morphling::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Morphling::CEntityInstanceEntityClass::ConstructInstance  (line 38, @0x0000000002a13620, libserver.so)  // inlines: CDOTA_Unit_Hero_Morphling, Construct<CDOTA_Unit_Hero_Morphling>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Morphling::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Morphling::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_435D770;
    *(p + 236) = &off_435E750;
    *(p + 257) = &off_435EA80;
  }
  return p;
}


// CDOTA_Unit_Hero_Morphling::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 38, @0x0000000002a20830, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Morphling::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Morphling::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Morphling::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 38, @0x0000000002a20a90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Morphling::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Morphling::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Morphling::GetEntityClassInternal  (line 38, @0x0000000002a3c8c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "npc_dota_hero_morphling", "CDOTA_Unit_Hero_Morphling"
// globals: `guard variable for'CDOTA_Unit_Hero_Morphling::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MorphlingClass, CDOTA_Unit_Hero_Morphling::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MorphlingClass, __dso_handle, CDOTA_Unit_Hero_Morphling::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Morphling::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MorphlingClassInfo, CDOTA_Unit_Hero_Morphling::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MorphlingClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Morphling::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Morphling::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MorphlingClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Morphling::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MorphlingClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Morphling::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MorphlingClass);
    CDOTA_Unit_Hero_Morphling::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MorphlingClass._vptr_CEntityClass = off_435D6F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Morphling::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MorphlingClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Morphling::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Morphling::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MorphlingClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_MorphlingClass != 0 )
    return &CDOTA_Unit_Hero_Morphling::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MorphlingClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Morphling::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MorphlingClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Morphling::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MorphlingClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Morphling::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MorphlingClassInfo,
      "CDOTA_Unit_Hero_Morphling",
      "npc_dota_hero_morphling",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Morphling::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MorphlingClassInfo);
  }
  CDOTA_Unit_Hero_Morphling::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MorphlingClass.m_pClassInfo = &CDOTA_Unit_Hero_Morphling::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MorphlingClassInfo;
  CDOTA_Unit_Hero_Morphling::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MorphlingClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Morphling::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MorphlingClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_MorphlingClass = &CDOTA_Unit_Hero_Morphling::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MorphlingClass;
  CDOTA_Unit_Hero_Morphling::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MorphlingClassInfo.m_pClass = &CDOTA_Unit_Hero_Morphling::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MorphlingClass;
  CDOTA_Unit_Hero_Morphling::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MorphlingClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_MorphlingClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Morphling::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MorphlingClass;
}


// CDOTA_Unit_Hero_Morphling::UsesConstantGesture  (line 44, @0x0000000002a0a6a0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Morphling::UsesConstantGesture(CDOTA_Unit_Hero_Morphling *const this, bool bPortrait)
{
  return 1;
}


// CDOTA_Unit_Hero_Morphling::YouForgotToImplementOrDeclareServerClass  (line 68, @0x00000000029b5880, libserver.so)
int __fastcall CDOTA_Unit_Hero_Morphling::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_Morphling *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Morphling::GetServerClass  (line 68, @0x00000000029ca070, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Morphling::GetServerClass(CDOTA_Unit_Hero_Morphling *const this)
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


// CDOTA_Unit_Hero_Morphling::Precache  (line 76, @0x00000000029bacc0, libserver.so)
// calls: PrecacheParticleSystem, CDOTA_BaseNPC_Hero::Precache
// strings: "particles/status_fx/status_effect_dark_seer_illusion.vpcf"
void __fastcall CDOTA_Unit_Hero_Morphling::Precache(
        CDOTA_Unit_Hero_Morphling *const this,
        const CEntityPrecacheContext *pContext)
{
  PrecacheParticleSystem("particles/status_fx/status_effect_dark_seer_illusion.vpcf", pContext);
  CDOTA_BaseNPC_Hero::Precache(this, pContext);
}


// CDOTA_Unit_Hero_Morphling::OnItemEquipped  (line 87, @0x00000000029c05d0, libserver.so)  // inlines: FStrEq, GetAbilityName, GetPlayerOwnerID, NetworkStateChanged, Set, SetDroppable, SetSellable, _V_strcmp, operator=<bool>
// calls: CDOTA_BaseNPC::OnItemEquipped, CDOTA_Item::ExpireSellback, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::SetHidden, CDOTABaseAbility::UpgradeAbility
// strings: "item_ultimate_scepter", "morphling_hybrid"
void __fastcall CDOTA_Unit_Hero_Morphling::OnItemEquipped(CDOTA_Unit_Hero_Morphling *const this, CDOTA_Item *pItem)
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
          AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "morphling_hybrid", 0);
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


// CDOTA_Unit_Hero_Morphling::OnIllusionPostSpawn  (line 131, @0x00000000029bae30, libserver.so)  // inlines: ToDOTABaseNPCHero
// calls: CDOTA_BaseNPC_Hero::ModifyStrength, CDOTA_BaseNPC_Hero::ModifyAgility
void __fastcall CDOTA_Unit_Hero_Morphling::OnIllusionPostSpawn(
        CDOTA_Unit_Hero_Morphling *const this,
        CDOTA_BaseNPC *pOriginal)
{
  float v2; // xmm1_4
  float v5; // xmm1_4

  if ( pOriginal != 0 && (pOriginal->m_iUnitType & 1) != 0 )
  {
    CDOTA_BaseNPC_Hero::ModifyStrength(
      this,
      *&pOriginal[1].m_NetworkTransmitComponent.m_nStateFlags - this->m_flStrength.m_Value,
      v2);
    CDOTA_BaseNPC_Hero::ModifyAgility(
      this,
      *&pOriginal[1].m_NetworkTransmitComponent.m_nTransmitStateOwnedCounter - this->m_flAgility.m_Value,
      v5);
  }
}


// CDOTA_Ability_Morphling_Waveform::~CDOTA_Ability_Morphling_Waveform  (line 149, @0x0000000002a176a0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Morphling_Waveform::~CDOTA_Ability_Morphling_Waveform(
        CDOTA_Ability_Morphling_Waveform *const this)
{
  this->_vptr_IHandleEntity = &off_435EB50;
  this->_vptr_CHorizontalMotionController = &off_435F5D8;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Morphling_Waveform::~CDOTA_Ability_Morphling_Waveform  (line 149, @0x0000000002a176d0, libserver.so)  // inlines: ~CDOTA_Ability_Morphling_Waveform
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Morphling_Waveform::~CDOTA_Ability_Morphling_Waveform(
        CDOTA_Ability_Morphling_Waveform *const this)
{
  this->_vptr_IHandleEntity = &off_435EB50;
  this->_vptr_CHorizontalMotionController = &off_435F5D8;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Morphling_Waveform::Schema_DynamicBinding  (line 151, @0x0000000002a0a6b0, libserver.so)
// globals: CDOTA_Ability_Morphling_Waveform::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Morphling_Waveform::Schema_DynamicBinding(
        const CDOTA_Ability_Morphling_Waveform *const this)
{
  return CDOTA_Ability_Morphling_Waveform::s_pSchemaBinding;
}


// CDOTA_Ability_Morphling_Waveform::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 151, @0x0000000002a0a6d0, libserver.so)
// globals: CDOTA_Ability_Morphling_Waveform::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Morphling_Waveform::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Morphling_Waveform::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Morphling_Waveform::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Morphling_Waveform::CEntityInstanceEntityClass::DestructInstance  (line 151, @0x0000000002a0a6e0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Morphling_Waveform>
void __fastcall CDOTA_Ability_Morphling_Waveform::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Morphling_Waveform::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Morphling_Waveform::CEntityInstanceEntityClass::FreeInstance  (line 151, @0x0000000002a0a700, libserver.so)
void __fastcall CDOTA_Ability_Morphling_Waveform::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Morphling_Waveform::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Morphling_Waveform::CEntityInstanceEntityClass::CanAllocate  (line 151, @0x0000000002a0a720, libserver.so)
bool __fastcall CDOTA_Ability_Morphling_Waveform::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Morphling_Waveform::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Morphling_Waveform::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 151, @0x0000000002a0a730, libserver.so)
// globals: CDOTA_Ability_Morphling_Waveform::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Morphling_Waveform::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Morphling_Waveform::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Morphling_Waveform::s_pSchemaBinding;
}


// CDOTA_Ability_Morphling_Waveform::CEntityInstanceEntityClass::AllocateInstance  (line 151, @0x0000000002a0fdc0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Morphling_Waveform::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Morphling_Waveform::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 944);
  memset(v1, 0, 0x3B0u);
  return v1;
}


// CDOTA_Ability_Morphling_Waveform::CEntityInstanceEntityClass::ConstructInstance  (line 151, @0x0000000002a14450, libserver.so)  // inlines: CDOTA_Ability_Morphling_Waveform, CHorizontalMotionController, Construct<CDOTA_Ability_Morphling_Waveform>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Morphling_Waveform::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Morphling_Waveform::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 230) = 2;
    *p = &off_435EB50;
    *(p + 114) = &off_435F5D8;
  }
  return p;
}


// CDOTA_Ability_Morphling_Waveform::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 151, @0x0000000002a1fae0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Morphling_Waveform::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Morphling_Waveform::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Morphling_Waveform::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 151, @0x0000000002a1fb00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Morphling_Waveform::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Morphling_Waveform::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Morphling_Waveform::GetEntityClassInternal  (line 151, @0x0000000002a38720, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "CDOTA_Ability_Morphling_Waveform"
// globals: `guard variable for'CDOTA_Ability_Morphling_Waveform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_WaveformClass, CDOTA_Ability_Morphling_Waveform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_WaveformClass, __dso_handle, CDOTA_Ability_Morphling_Waveform::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Morphling_Waveform::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_WaveformClassInfo, CDOTA_Ability_Morphling_Waveform::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_WaveformClassInfo
CEntityClass *__cdecl CDOTA_Ability_Morphling_Waveform::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Morphling_Waveform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_WaveformClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Morphling_Waveform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_WaveformClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Morphling_Waveform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_WaveformClass);
    CDOTA_Ability_Morphling_Waveform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_WaveformClass._vptr_CEntityClass = off_435EAD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Morphling_Waveform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_WaveformClass);
    __cxa_atexit(
      CDOTA_Ability_Morphling_Waveform::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Morphling_Waveform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_WaveformClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Morphling_WaveformClass != 0 )
    return &CDOTA_Ability_Morphling_Waveform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_WaveformClass;
  if ( `guard variable for'CDOTA_Ability_Morphling_Waveform::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_WaveformClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Morphling_Waveform::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_WaveformClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Morphling_Waveform::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_WaveformClassInfo,
      "CDOTA_Ability_Morphling_Waveform",
      "morphling_waveform",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Morphling_Waveform::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_WaveformClassInfo);
  }
  CDOTA_Ability_Morphling_Waveform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_WaveformClass.m_pClassInfo = &CDOTA_Ability_Morphling_Waveform::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_WaveformClassInfo;
  CDOTA_Ability_Morphling_Waveform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_WaveformClass.m_pBaseClassInfo = CDOTA_Ability_Morphling_Waveform::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_WaveformClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Morphling_WaveformClass = &CDOTA_Ability_Morphling_Waveform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_WaveformClass;
  CDOTA_Ability_Morphling_Waveform::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_WaveformClassInfo.m_pClass = &CDOTA_Ability_Morphling_Waveform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_WaveformClass;
  CDOTA_Ability_Morphling_Waveform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_WaveformClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Morphling_WaveformClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Morphling_Waveform::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_WaveformClass;
}


// CDOTA_Ability_Morphling_Waveform::YouForgotToImplementOrDeclareServerClass  (line 176, @0x00000000029b5890, libserver.so)
int __fastcall CDOTA_Ability_Morphling_Waveform::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Morphling_Waveform *const this)
{
  return 0;
}


// CDOTA_Ability_Morphling_Waveform::GetServerClass  (line 176, @0x00000000029c96b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Morphling_Waveform::GetServerClass(CDOTA_Ability_Morphling_Waveform *const this)
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


// CDOTA_Ability_Morphling_Waveform::GetCastRange  (line 183, @0x00000000029e5e10, libserver.so)
// calls: CDOTABaseAbility::GetCastRange, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_morphling_1"
int __fastcall CDOTA_Ability_Morphling_Waveform::GetCastRange(
        CDOTA_Ability_Morphling_Waveform *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float flRange; // [rsp+Ch] [rbp-14h]

  flRange = CDOTABaseAbility::GetCastRange(this, &vec3_origin, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_morphling_1", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    return (CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1) + flRange);
  return flRange;
}


// CDOTA_Ability_Morphling_Waveform::UpdateHorizontalMotion  (line 198, @0x00000000029b9500, libserver.so)
// calls: CBaseEntity::SetAbsOrigin
void __fastcall CDOTA_Ability_Morphling_Waveform::UpdateHorizontalMotion(
        CDOTA_Ability_Morphling_Waveform *const this,
        CDOTA_BaseNPC *me,
        double a3,
        float dt)
{
  CBaseEntity::SetAbsOrigin(me, &this->m_vProjectileLocation);
}


// CDOTA_Ability_Morphling_Waveform::OnHorizontalMotionInterrupted  (line 205, @0x00000000029c0b00, libserver.so)  // inlines: MarkPVSInformationDirty, RemoveEffects
// calls: CDOTA_ProjectileManager::DestroyLinearProjectile, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName, CBaseEntity::DispatchUpdateTransmitState
// strings: "modifier_morphling_waveform"
void __fastcall CDOTA_Ability_Morphling_Waveform::OnHorizontalMotionInterrupted(
        CDOTA_Ability_Morphling_Waveform *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rbx

  CDOTA_ProjectileManager::DestroyLinearProjectile(&g_DOTAProjectileManager, this->m_nProjectileID);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_morphling_waveform");
  v3 = CDOTABaseAbility::GetCaster(this);
  (*(v3->_vptr_IHandleEntity + 188))(v3, v3->m_fEffects.m_Value & 0xFFFFFFDF);
  v3->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  CBaseEntity::DispatchUpdateTransmitState(v3);
}


// CDOTA_Ability_Morphling_Waveform::OnSpellStart  (line 216, @0x00000000029e4270, libserver.so)  // inlines: CEntityHandle, CHandle, FastSqrt, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<int>, GetSerialNumber, Length2D, NormalizeInPlace, Set, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-, operator=, sLinearProjectileCreateInfo
// calls: CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTALocomotor::ApplyHorizontalMotionController, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCursorPosition, VectorNormalize, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, CDOTA_ProjectileManager::CreateLinearProjectile, CBaseEntity::AddEffects, CDOTA_BaseNPC::UnitEmitSound, CDOTA_BaseNPC::StartGesture (20 total)
// strings: "modifier_morphling_waveform", "particles/units/heroes/hero_morphling/morphling_waveform.vpcf", "Hero_Morphling.Waveform"
void __fastcall CDOTA_Ability_Morphling_Waveform::OnSpellStart(CDOTA_Ability_Morphling_Waveform *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // r12
  CDOTALocomotor *v4; // rax
  int LevelSpecialValue; // r15d
  int v6; // r13d
  const Vector *AbsOrigin; // r14
  vec_t v8; // xmm0_4
  vec_t v9; // xmm1_4
  const Vector *v10; // r13
  int (**vptr_IHandleEntity)(...); // rax
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  const Vector *v14; // rax
  vec_t v15; // xmm0_4
  CEntityIdentity *m_pEntity; // rax
  int v17; // edx
  __int16 v18; // cx
  CDOTA_BaseNPC *v19; // rax
  float v20; // xmm6_4
  __m128i y_low; // xmm5
  float v22; // ebx
  __m128i z_low; // xmm5
  float v24; // r15d
  const Vector *v25; // rax
  vec_t v26; // xmm0_4
  vec_t v27; // xmm2_4
  CEntityIdentity *v28; // rax
  __int16 v29; // cx
  const QAngle *AbsAngles; // rax
  float v31; // [rsp+0h] [rbp-110h]
  float v32; // [rsp+4h] [rbp-10Ch]
  float v33; // [rsp+8h] [rbp-108h]
  float fRange; // [rsp+Ch] [rbp-104h]
  float fRangea; // [rsp+Ch] [rbp-104h]
  EHANDLE hTarget; // [rsp+10h] [rbp-100h] BYREF
  Vector vDir; // [rsp+20h] [rbp-F0h] BYREF
  Vector vTeleportEnd; // [rsp+30h] [rbp-E0h]
  sLinearProjectileCreateInfo info; // [rsp+40h] [rbp-D0h] BYREF
  KeyValues kv; // [rsp+C0h] [rbp-50h] BYREF
  unsigned __int64 v41; // [rsp+D8h] [rbp-38h]
  Vector CursorPosition; // 0:kr14_12.12
  Vector v43; // 0:xmm0_8.8,8:xmm1_4.4

  v41 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = Caster;
  if ( Caster != 0 )
  {
    this->m_vProjectileLocation = *CBaseEntity::GetAbsOrigin(Caster);
    v4 = (*(v3->_vptr_IHandleEntity + 376))(v3);
    if ( CDOTALocomotor::ApplyHorizontalMotionController(v4, &this->CHorizontalMotionController, 0) )
    {
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "width", -1, 0);
      v6 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
      *&info.pszEffectName = CDOTABaseAbility::GetCursorPosition(this);
      v8 = *(&info.pszEffectName + 1) - AbsOrigin->y;
      v9 = *&info.pszEffectName - AbsOrigin->x;
      vDir.z = 0.0;
      vDir.y = v8;
      vDir.x = v9;
      if ( VectorNormalize(&vDir) < 0.0099999998 )
      {
        AbsAngles = CBaseEntity::GetAbsAngles(v3);
        AngleVectors(AbsAngles, &vDir, 0, 0);
      }
      v33 = vDir.x * v6;
      v32 = vDir.y * v6;
      v31 = v6 * vDir.z;
      v10 = CBaseEntity::GetAbsOrigin(v3);
      CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
      vptr_IHandleEntity = this->_vptr_IHandleEntity;
      *&info.pszEffectName = CursorPosition;
      fRange = fsqrt(
                 ((CursorPosition.x - v10->x) * (CursorPosition.x - v10->x))
               + ((CursorPosition.y - v10->y) * (CursorPosition.y - v10->y)));
      if ( fRange > vptr_IHandleEntity[229](this, &vec3_origin, 0) )
        fRange = (*(this->_vptr_IHandleEntity + 229))(this, &vec3_origin, 0);
      KeyValues::KeyValues(&kv, "modifier_morphling_waveform");
      CDOTA_BaseNPC::AddNewModifier(v3, v3, this, "modifier_morphling_waveform", &kv, 0);
      y = vec3_origin.y;
      info.bProvidesVision = 0;
      z = vec3_origin.z;
      info.vSpawnOrigin.x = vec3_origin.x;
      info.hSource.m_Index = -1;
      info.vSpawnOrigin.y = y;
      info.vSpawnOrigin.z = z;
      info.vVelocity.x = vec3_origin.x;
      info.vVelocity.y = y;
      info.vVelocity.z = z;
      info.vAcceleration.x = vec3_origin.x;
      info.vAcceleration.y = y;
      info.vAcceleration.z = z;
      info.fDistance = 0.0;
      info.fStartRadius = 0.0;
      info.fEndRadius = 0.0;
      info.bHasFrontalCone = 1;
      info.bCheckStartPosition = 0;
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
      info.pszEffectName = "particles/units/heroes/hero_morphling/morphling_waveform.vpcf";
      info.pAbility = this;
      v14 = CBaseEntity::GetAbsOrigin(v3);
      info.vSpawnOrigin.x = v14->x;
      info.vSpawnOrigin.y = v14->y;
      v15 = v14->z;
      info.vVelocity.x = v33;
      info.vVelocity.y = v32;
      info.vSpawnOrigin.z = v15;
      info.vVelocity.z = v31;
      info.fDistance = fRange;
      info.fStartRadius = LevelSpecialValue;
      info.fEndRadius = LevelSpecialValue;
      m_pEntity = v3->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v17 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v18 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v18 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(info.hSource.m_Index) = v18 | info.hSource.m_Index & 0x8000;
        info.hSource.m_Index = (v17 << 15) | info.hSource.m_Index & 0x7FFF;
      }
      else
      {
        info.hSource.m_Index = -1;
      }
      info.iUnitTargetTeam = 2;
      info.iUnitTargetType = 19;
      info.bHasFrontalCone = 0;
      this->m_nProjectileID = CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
      v19 = CDOTABaseAbility::GetCaster(this);
      CBaseEntity::AddEffects(v19, 32);
      CDOTA_BaseNPC::UnitEmitSound(v3, "Hero_Morphling.Waveform", 0.0, 0, 0);
      CDOTA_BaseNPC::StartGesture(v3, 1545, 0.1, 0.0, 3, 0, 1.0);
      CDOTA_BaseNPC::PrimeResumePreviousMovement(v3);
      v20 = fRange;
      y_low = LODWORD(vDir.y);
      *y_low.m128i_i32 = vDir.y * fRange;
      v22 = COERCE_FLOAT(_mm_cvtsi128_si32(y_low));
      z_low = LODWORD(vDir.z);
      fRangea = vDir.x * fRange;
      *z_low.m128i_i32 = vDir.z * v20;
      v24 = COERCE_FLOAT(_mm_cvtsi128_si32(z_low));
      v25 = CBaseEntity::GetAbsOrigin(v3);
      v26 = v24 + v25->z;
      v27 = fRangea + v25->x;
      vTeleportEnd.y = v22 + v25->y;
      vTeleportEnd.z = v26;
      vTeleportEnd.x = v27;
      v43 = *CBaseEntity::GetAbsOrigin(v3);
      CDOTA_BaseNPC::UpdateResumePreviousMovement(v3, v43, vTeleportEnd);
      hTarget.m_Index = -1;
      v28 = v3->m_pEntity;
      if ( v28 != 0 )
      {
        v29 = 0x7FFF;
        if ( v28->m_EHandle.m_Index != -1 )
          v29 = v28->m_EHandle.m_Index & 0x7FFF;
        hTarget.m_Index = (((v28->m_EHandle.m_Index >> 15) - (v28->m_flags & 1)) << 15) | v29 & 0x7FFF;
      }
      CDOTA_ProjectileManager::ProjectileDodge(&g_DOTAProjectileManager, &hTarget, 0);
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Ability_Morphling_Waveform::OnProjectileHit  (line 283, @0x00000000029c40b0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsValid, LookupEntity, MarkPVSInformationDirty, RemoveEffects, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName, CDOTALocomotor::RemoveHorizontalMotionController, CDOTA_BaseNPC::StartGesture, CDOTA_BaseNPC::FindModifierByName, CBaseEntity::DispatchUpdateTransmitState, ApplyDamage, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "modifier_morphling_waveform", "modifier_morph_hybrid_hide", "particles/units/heroes/hero_morphling/morphling_waveform_dmg.vpcf", "attach_hitloc"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Morphling_Waveform::OnProjectileHit(
        CDOTA_Ability_Morphling_Waveform *const this,
        _DWORD *hTarget,
        const Vector *const vLocation)
{
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTALocomotor *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v12; // rbx
  CDOTA_BaseNPC *m_pInstance; // r12
  unsigned __int64 m_Value; // rax
  int v15; // r13d
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v19; // rax
  CDOTA_ParticleManager *v20; // rax

  if ( (*hTarget + 2) <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F]) == 0
    || (v5 = &v4[*hTarget & 0x1FF]) == 0
    || *hTarget != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_morphling_waveform");
    v7 = CDOTABaseAbility::GetCaster(this);
    v8 = (*(v7->_vptr_IHandleEntity + 376))(v7);
    CDOTALocomotor::RemoveHorizontalMotionController(v8, &this->CHorizontalMotionController);
    v9 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::StartGesture(v9, 1546, 0.0, 0.0, 3, 0, 1.0);
    v10 = CDOTABaseAbility::GetCaster(this);
    if ( CDOTA_BaseNPC::FindModifierByName(v10, "modifier_morph_hybrid_hide", 0) == 0 )
    {
      v12 = CDOTABaseAbility::GetCaster(this);
      (*(v12->_vptr_IHandleEntity + 188))(v12, v12->m_fEffects.m_Value & 0xFFFFFFDF);
      v12->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
      CBaseEntity::DispatchUpdateTransmitState(v12);
    }
    return 0;
  }
  m_Value = m_pInstance->m_nUnitState64.m_Value;
  if ( (m_Value & 0x200) != 0 || m_pInstance->m_bIsWaitingToSpawn.m_Value || (m_Value & 0x100) != 0 )
    return 0;
  v15 = (*(this->_vptr_IHandleEntity + 247))(this);
  v16 = CDOTABaseAbility::GetCaster(this);
  ApplyDamage(v16, m_pInstance, this, v15, 2, 0);
  v17 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v17) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_morphling/morphling_waveform_dmg.vpcf",
                   1,
                   m_pInstance,
                   0,
                   v17);
  v19 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v19, v17, 1, m_pInstance, 5, "attach_hitloc", vec3_invalid, 1);
  v20 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v20, v17);
  return 0;
}


// CDOTA_Ability_Morphling_Waveform::OnProjectileThink  (line 314, @0x00000000029b58a0, libserver.so)  // inlines: operator=
void __fastcall CDOTA_Ability_Morphling_Waveform::OnProjectileThink(
        CDOTA_Ability_Morphling_Waveform *const this,
        const Vector *const vLocation)
{
  this->m_vProjectileLocation = *vLocation;
}


// CDOTA_Ability_Morphling_Waveform::GetAbilityDamageToTargetOverInterval  (line 323, @0x00000000029bb6d0, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Morphling_Waveform::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Morphling_Waveform *const this,
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


// CDOTA_Modifier_Morphling_Waveform::~CDOTA_Modifier_Morphling_Waveform  (line 335, @0x0000000002a116f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Morphling_Waveform::~CDOTA_Modifier_Morphling_Waveform(
        CDOTA_Modifier_Morphling_Waveform *const this)
{
  this->_vptr_CDOTA_Buff = &off_435F670;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Morphling_Waveform::~CDOTA_Modifier_Morphling_Waveform  (line 335, @0x0000000002a11710, libserver.so)  // inlines: ~CDOTA_Modifier_Morphling_Waveform
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Morphling_Waveform::~CDOTA_Modifier_Morphling_Waveform(
        CDOTA_Modifier_Morphling_Waveform *const this)
{
  this->_vptr_CDOTA_Buff = &off_435F670;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Morphling_Waveform::IsHidden  (line 342, @0x0000000002a0a740, libserver.so)
bool __fastcall CDOTA_Modifier_Morphling_Waveform::IsHidden(CDOTA_Modifier_Morphling_Waveform *const this)
{
  return 1;
}


// CDOTA_Modifier_Morphling_Waveform::IsPurgable  (line 343, @0x0000000002a0a750, libserver.so)
bool __fastcall CDOTA_Modifier_Morphling_Waveform::IsPurgable(CDOTA_Modifier_Morphling_Waveform *const this)
{
  return 0;
}


// CDOTA_Modifier_Morphling_Waveform::CheckState  (line 348, @0x00000000029b58d0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Morphling_Waveform::CheckState(
        CDOTA_Modifier_Morphling_Waveform *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x100uLL;
  buffState->m_nDisabledStateMask &= ~0x100uLL;
}


// CDOTA_Ability_Morphling_AdaptiveStrike::~CDOTA_Ability_Morphling_AdaptiveStrike  (line 361, @0x0000000002a17710, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Morphling_AdaptiveStrike::~CDOTA_Ability_Morphling_AdaptiveStrike(
        CDOTA_Ability_Morphling_AdaptiveStrike *const this)
{
  this->_vptr_IHandleEntity = &off_435F9D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Morphling_AdaptiveStrike::~CDOTA_Ability_Morphling_AdaptiveStrike  (line 361, @0x0000000002a17730, libserver.so)  // inlines: ~CDOTA_Ability_Morphling_AdaptiveStrike
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Morphling_AdaptiveStrike::~CDOTA_Ability_Morphling_AdaptiveStrike(
        CDOTA_Ability_Morphling_AdaptiveStrike *const this)
{
  this->_vptr_IHandleEntity = &off_435F9D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Morphling_AdaptiveStrike::Schema_DynamicBinding  (line 363, @0x0000000002a0a760, libserver.so)
// globals: CDOTA_Ability_Morphling_AdaptiveStrike::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Morphling_AdaptiveStrike::Schema_DynamicBinding(
        const CDOTA_Ability_Morphling_AdaptiveStrike *const this)
{
  return CDOTA_Ability_Morphling_AdaptiveStrike::s_pSchemaBinding;
}


// CDOTA_Ability_Morphling_AdaptiveStrike::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 363, @0x0000000002a0a770, libserver.so)
// globals: CDOTA_Ability_Morphling_AdaptiveStrike::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Morphling_AdaptiveStrike::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Morphling_AdaptiveStrike::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Morphling_AdaptiveStrike::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Morphling_AdaptiveStrike::CEntityInstanceEntityClass::DestructInstance  (line 363, @0x0000000002a0a780, libserver.so)  // inlines: Destruct<CDOTA_Ability_Morphling_AdaptiveStrike>
void __fastcall CDOTA_Ability_Morphling_AdaptiveStrike::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Morphling_AdaptiveStrike::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Morphling_AdaptiveStrike::CEntityInstanceEntityClass::FreeInstance  (line 363, @0x0000000002a0a7a0, libserver.so)
void __fastcall CDOTA_Ability_Morphling_AdaptiveStrike::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Morphling_AdaptiveStrike::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Morphling_AdaptiveStrike::CEntityInstanceEntityClass::CanAllocate  (line 363, @0x0000000002a0a7c0, libserver.so)
bool __fastcall CDOTA_Ability_Morphling_AdaptiveStrike::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Morphling_AdaptiveStrike::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Morphling_AdaptiveStrike::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 363, @0x0000000002a0a7d0, libserver.so)
// globals: CDOTA_Ability_Morphling_AdaptiveStrike::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Morphling_AdaptiveStrike::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Morphling_AdaptiveStrike::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Morphling_AdaptiveStrike::s_pSchemaBinding;
}


// CDOTA_Ability_Morphling_AdaptiveStrike::CEntityInstanceEntityClass::AllocateInstance  (line 363, @0x0000000002a0fe00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Morphling_AdaptiveStrike::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Morphling_AdaptiveStrike::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Morphling_AdaptiveStrike::CEntityInstanceEntityClass::ConstructInstance  (line 363, @0x0000000002a144a0, libserver.so)  // inlines: CDOTA_Ability_Morphling_AdaptiveStrike, Construct<CDOTA_Ability_Morphling_AdaptiveStrike>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Morphling_AdaptiveStrike::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Morphling_AdaptiveStrike::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_435F9D0;
  }
  return p;
}


// CDOTA_Ability_Morphling_AdaptiveStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 363, @0x0000000002a1fb30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Morphling_AdaptiveStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Morphling_AdaptiveStrike::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Morphling_AdaptiveStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 363, @0x0000000002a1fb50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Morphling_AdaptiveStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Morphling_AdaptiveStrike::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Morphling_AdaptiveStrike::GetEntityClassInternal  (line 363, @0x0000000002a38870, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "morphling_adaptive_strike", "CDOTA_Ability_Morphling_AdaptiveStrike"
// globals: `guard variable for'CDOTA_Ability_Morphling_AdaptiveStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_AdaptiveStrikeClass, CDOTA_Ability_Morphling_AdaptiveStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_AdaptiveStrikeClass, __dso_handle, CDOTA_Ability_Morphling_AdaptiveStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Morphling_AdaptiveStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_AdaptiveStrikeClassInfo, CDOTA_Ability_Morphling_AdaptiveStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_AdaptiveStrikeClassInfo
CEntityClass *__cdecl CDOTA_Ability_Morphling_AdaptiveStrike::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Morphling_AdaptiveStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_AdaptiveStrikeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Morphling_AdaptiveStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_AdaptiveStrikeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Morphling_AdaptiveStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_AdaptiveStrikeClass);
    CDOTA_Ability_Morphling_AdaptiveStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_AdaptiveStrikeClass._vptr_CEntityClass = off_435F950;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Morphling_AdaptiveStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_AdaptiveStrikeClass);
    __cxa_atexit(
      CDOTA_Ability_Morphling_AdaptiveStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Morphling_AdaptiveStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_AdaptiveStrikeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Morphling_AdaptiveStrikeClass != 0 )
    return &CDOTA_Ability_Morphling_AdaptiveStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_AdaptiveStrikeClass;
  if ( `guard variable for'CDOTA_Ability_Morphling_AdaptiveStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_AdaptiveStrikeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Morphling_AdaptiveStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_AdaptiveStrikeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Morphling_AdaptiveStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_AdaptiveStrikeClassInfo,
      "CDOTA_Ability_Morphling_AdaptiveStrike",
      "morphling_adaptive_strike",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Morphling_AdaptiveStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_AdaptiveStrikeClassInfo);
  }
  CDOTA_Ability_Morphling_AdaptiveStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_AdaptiveStrikeClass.m_pClassInfo = &CDOTA_Ability_Morphling_AdaptiveStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_AdaptiveStrikeClassInfo;
  CDOTA_Ability_Morphling_AdaptiveStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_AdaptiveStrikeClass.m_pBaseClassInfo = CDOTA_Ability_Morphling_AdaptiveStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_AdaptiveStrikeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Morphling_AdaptiveStrikeClass = &CDOTA_Ability_Morphling_AdaptiveStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_AdaptiveStrikeClass;
  CDOTA_Ability_Morphling_AdaptiveStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_AdaptiveStrikeClassInfo.m_pClass = &CDOTA_Ability_Morphling_AdaptiveStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_AdaptiveStrikeClass;
  CDOTA_Ability_Morphling_AdaptiveStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_AdaptiveStrikeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Morphling_AdaptiveStrikeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Morphling_AdaptiveStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_AdaptiveStrikeClass;
}


// CDOTA_Ability_Morphling_AdaptiveStrike::Precache  (line 379, @0x00000000029bac90, libserver.so)
// calls: PrecacheParticleSystem, CDOTABaseAbility::Precache
// strings: "particles/units/heroes/hero_tidehunter/tidehunter_gush.vpcf"
void __fastcall CDOTA_Ability_Morphling_AdaptiveStrike::Precache(
        CDOTA_Ability_Morphling_AdaptiveStrike *const this,
        const CEntityPrecacheContext *pContext)
{
  PrecacheParticleSystem("particles/units/heroes/hero_tidehunter/tidehunter_gush.vpcf", pContext);
  CDOTABaseAbility::Precache(this, pContext);
}


// CDOTA_Ability_Morphling_AdaptiveStrike::OnSpellStart  (line 388, @0x00000000029ddd20, libserver.so)  // inlines: CEntityHandle, CHandle, Color, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetSerialNumber, InState, IsInvulnerable, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator=, sTrackingProjectileCreateInfo
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_BaseNPC::UnitEmitSound, CDOTA_ProjectileManager::CreateTrackingProjectile, __stack_chk_fail
// strings: "Hero_Morphling.AdaptiveStrike.Cast", "particles/units/heroes/hero_tidehunter/tidehunter_gush.vpcf"
void __fastcall CDOTA_Ability_Morphling_AdaptiveStrike::OnSpellStart(
        CDOTA_Ability_Morphling_AdaptiveStrike *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // r12
  CBaseEntity *CursorTarget; // rax
  __int64 v5; // rax
  __m128i v6; // xmm0
  float v7; // r12d
  CDOTA_BaseNPC *v8; // rax
  vec_t y; // xmm1_4
  vec_t z; // xmm1_4
  CDOTA_BaseNPC *v11; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v13; // cx
  CBaseEntity *v14; // rax
  CEntityIdentity *v15; // rdx
  __int16 v16; // cx
  sTrackingProjectileCreateInfo info; // [rsp+0h] [rbp-80h] BYREF
  unsigned __int64 v18; // [rsp+68h] [rbp-18h]

  v18 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
    v3 = Caster;
  else
    v3 = 0;
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && v3 != 0 && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0 )
  {
    v5 = *&CursorTarget[3].m_vecVelocity.m_Value.x;
    if ( (v5 & 0x100) == 0 && (v5 & 0x200) == 0 )
    {
      *v6.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "projectile_speed", -1, 0);
      v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
      v8 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::UnitEmitSound(v8, "Hero_Morphling.AdaptiveStrike.Cast", 0.0, 0, 0);
      info.hSource.m_Index = -1;
      info.hTarget.m_Index = -1;
      info.colorGemColor = 0;
      info.pAttackRecord = 0;
      info.iSourceAttachment = 1;
      info.vSourceLoc.x = vec3_origin.x;
      y = vec3_origin.y;
      info.bProvidesVision = 0;
      info.vSourceLoc.y = y;
      z = vec3_origin.z;
      info.pszEffectName = "particles/units/heroes/hero_tidehunter/tidehunter_gush.vpcf";
      info.vSourceLoc.z = z;
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
      info.pAbility = this;
      info.iMoveSpeed = v7;
      v11 = CDOTABaseAbility::GetCaster(this);
      if ( v11 != 0 && (m_pEntity = v11->m_pEntity) != 0 )
      {
        v13 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v13 & 0x7FFF;
      }
      else
      {
        info.hSource.m_Index = -1;
      }
      v14 = CDOTABaseAbility::GetCursorTarget(this);
      if ( v14 != 0 && (v15 = v14->m_pEntity) != 0 )
      {
        v16 = 0x7FFF;
        if ( v15->m_EHandle.m_Index != -1 )
          v16 = v15->m_EHandle.m_Index & 0x7FFF;
        info.hTarget.m_Index = (((v15->m_EHandle.m_Index >> 15) - (v15->m_flags & 1)) << 15) | v16 & 0x7FFF;
      }
      else
      {
        info.hTarget.m_Index = -1;
      }
      info.bDodgeable = 1;
      info.iSourceAttachment = 2;
      CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
    }
  }
}


// CDOTA_Ability_Morphling_AdaptiveStrike::OnProjectileHit  (line 417, @0x00000000029eba40, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, InState, IndexToIdentity, IsInvulnerable, IsRealHero, IsValid, LookupEntity, NormalizeInPlace, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator-
// calls: CDOTABaseAbility::GetCaster, __stack_chk_fail, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTA_BaseNPC::UnitEmitSound, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetAbsOrigin, VectorNormalize, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, ApplyDamage (19 total)
// strings: "Hero_Morphling.AdaptiveStrike", "stun_min", "stun_max", "damage_min", "damage_max", "knockback_min" (11 total)
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
__int64 __fastcall CDOTA_Ability_Morphling_AdaptiveStrike::OnProjectileHit(
        CDOTA_Ability_Morphling_AdaptiveStrike *const this,
        _WORD *hTarget,
        const Vector *const vLocation)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v6; // r13
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityInstance *m_pInstance; // r12
  int (**vptr_IHandleEntity)(...); // rax
  CDOTA_BaseNPC *v12; // rax
  float v13; // xmm0_4
  float v14; // xmm1_4
  const Vector *AbsOrigin; // r14
  const Vector *v16; // rax
  vec_t v17; // xmm1_4
  vec_t v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm1_4
  float v21; // xmm1_4
  float v22; // xmm1_4
  CDOTA_BaseNPC *v23; // rax
  float v24; // xmm0_4
  CDOTA_BaseNPC *v25; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v27; // rax
  const Vector *v28; // rbx
  CDOTA_ParticleManager *v29; // rax
  const Vector *v30; // rbx
  CDOTA_ParticleManager *v31; // rax
  CDOTA_ParticleManager *v32; // rax
  CDOTA_BaseNPC_Hero *v33; // rsi
  CDOTA_BaseNPC *v34; // rax
  CDOTA_BaseNPC_Hero *v35; // rdi
  CDOTA_BaseNPC_Hero *v36; // r15
  CDOTA_BaseNPC *v37; // rax
  CDOTA_BaseNPC_Hero *v38; // rdi
  float damage_min; // [rsp+0h] [rbp-80h]
  float flStr2Agi; // [rsp+4h] [rbp-7Ch]
  float flStr2Agia; // [rsp+4h] [rbp-7Ch]
  float flDmgConstant; // [rsp+Ch] [rbp-74h]
  float flDmgRate; // [rsp+10h] [rbp-70h]
  float flDistanceb; // [rsp+18h] [rbp-68h]
  float flDistance; // [rsp+18h] [rbp-68h]
  CDOTA_BaseNPC_Hero *flDistancea; // [rsp+18h] [rbp-68h]
  Vector vDirection; // [rsp+20h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v49; // [rsp+48h] [rbp-38h]

  v49 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
    v6 = Caster;
  else
    v6 = 0;
  if ( (*hTarget + 2) > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[*hTarget & 0x1FF];
      if ( v8 != 0 && *hTarget == v8->m_EHandle.m_Index )
      {
        m_pInstance = v8->m_pInstance;
        if ( v8->m_pInstance != 0
          && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && v6 != 0
          && LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0 )
        {
          vptr_IHandleEntity = m_pInstance[58]._vptr_IHandleEntity;
          if ( (BYTE1(vptr_IHandleEntity) & 1) == 0
            && (BYTE1(vptr_IHandleEntity) & 2) == 0
            && !CDOTA_BaseNPC::TriggerSpellAbsorb(m_pInstance, this, 1) )
          {
            CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Morphling.AdaptiveStrike", 0.0, 0, 0);
            v12 = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::UnitEmitSound(v12, "Hero_Morphling.AdaptiveStrike", 0.0, 0, 0);
            CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_min", -1, 0);
            CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_max", -1, 0);
            damage_min = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "damage_min", -1, 0);
            flDmgRate = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "damage_max", -1, 0);
            flDmgConstant = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "damage_base", -1, 0);
            CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "knockback_min", -1, 0);
            CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "knockback_max", -1, 0);
            flDistanceb = (*(v6->_vptr_IHandleEntity + 497))(v6);
            flStr2Agi = flDistanceb / (*(v6->_vptr_IHandleEntity + 496))(v6);
            flDistance = (*(v6->_vptr_IHandleEntity + 496))(v6);
            v13 = (*(v6->_vptr_IHandleEntity + 497))(v6);
            v14 = flDistance / v13;
            if ( flStr2Agi >= 0.5 )
            {
              if ( flStr2Agi <= 1.5 )
              {
                flDmgRate = damage_min + (flStr2Agi - 0.5) * (flDmgRate - damage_min);
              }
              else if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
              {
                v33 = 0;
                flStr2Agia = flDistance / v13;
                if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                  v33 = m_pInstance;
                flDistancea = v33;
                v34 = CDOTABaseAbility::GetCaster(this);
                if ( v34 != 0 && (v34->m_iUnitType & 1) != 0 )
                  v35 = v34;
                else
                  v35 = 0;
                EconEntity_OnOwnerKillEaterEvent(
                  v35,
                  flDistancea,
                  kill_eater_event_t::kKillEaterEventType_Morphling_MaxDamageAdaptive,
                  1,
                  INVALID_ITEM_DEF_INDEX);
                v14 = flStr2Agia;
              }
            }
            else
            {
              flDmgRate = damage_min;
            }
            if ( v14 >= 0.5
              && v14 > 1.5
              && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
              && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
            {
              v36 = 0;
              if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                v36 = m_pInstance;
              v37 = CDOTABaseAbility::GetCaster(this);
              if ( v37 != 0 && (v37->m_iUnitType & 1) != 0 )
                v38 = v37;
              else
                v38 = 0;
              EconEntity_OnOwnerKillEaterEvent(
                v38,
                v36,
                kill_eater_event_t::kKillEaterEventType_Morphling_MaxLengthStunAdaptive,
                1,
                INVALID_ITEM_DEF_INDEX);
            }
            AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
            v16 = CBaseEntity::GetAbsOrigin(m_pInstance);
            v17 = v16->x - AbsOrigin->x;
            v18 = v16->y - AbsOrigin->y;
            vDirection.z = 0.0;
            vDirection.x = v17;
            vDirection.y = v18;
            VectorNormalize(&vDirection);
            KeyValues::KeyValues(&kv, "modifier_morphling_adaptive_strike");
            KeyValues::SetFloat(&kv, "duration", v19);
            KeyValues::SetFloat(&kv, "distance", v20);
            KeyValues::SetFloat(&kv, "direction_x", v21);
            KeyValues::SetFloat(&kv, "direction_y", v22);
            v23 = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(m_pInstance, v23, this, "modifier_morphling_adaptive_strike", &kv, 0);
            v24 = (*(v6->_vptr_IHandleEntity + 497))(v6);
            ApplyDamage(v6, m_pInstance, this, ((v24 * flDmgRate) + flDmgConstant), 2, 0);
            v25 = CDOTABaseAbility::GetCaster(this);
            ParticleManager = GetParticleManager();
            LODWORD(v25) = CDOTA_ParticleManager::CreateParticle(
                             ParticleManager,
                             "particles/units/heroes/hero_morphling/morphling_adaptive_strike.vpcf",
                             8,
                             0,
                             0,
                             v25);
            v27 = CDOTABaseAbility::GetCaster(this);
            v28 = CBaseEntity::GetAbsOrigin(v27);
            v29 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControl(v29, v25, 0, *&v28->x, v28->z);
            v30 = CBaseEntity::GetAbsOrigin(m_pInstance);
            v31 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControl(v31, v25, 1, *&v30->x, v30->z);
            v32 = GetParticleManager();
            CDOTA_ParticleManager::ReleaseParticleIndex(v32, v25);
            KeyValues::~KeyValues(&kv);
          }
        }
      }
    }
  }
  return 1;
}


// CDOTA_Ability_Morphling_AdaptiveStrike::GetAbilityDamageToTargetOverInterval  (line 524, @0x00000000029e5ea0, libserver.so)  // inlines: RemapValClamped, ToDOTABaseNPCHero, clamp<float, float>
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "damage_max", "damage_min"
__int64 __fastcall CDOTA_Ability_Morphling_AdaptiveStrike::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Morphling_AdaptiveStrike *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v8; // r14
  __m128i v9; // xmm0
  unsigned int v10; // ebx
  float v11; // xmm0_4
  __m128i v12; // xmm7
  float v13; // ebx
  float v14; // xmm3_4
  __m128 v15; // xmm0
  __m128 v16; // xmm4
  float v17; // xmm0_4
  float LevelSpecialValue; // [rsp+8h] [rbp-28h]
  float v19; // [rsp+Ch] [rbp-24h]

  if ( eDamageType != DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
    return 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  v8 = Caster;
  if ( Caster == 0 || (Caster->m_iUnitType & 1) == 0 )
    return 0;
  *v9.m128i_i64 = (*(Caster->_vptr_IHandleEntity + 497))(Caster);
  v10 = _mm_cvtsi128_si32(v9);
  v11 = (*(v8->_vptr_IHandleEntity + 496))(v8);
  v12 = _mm_cvtsi32_si128(v10);
  *v12.m128i_i32 = *v12.m128i_i32 / v11;
  v13 = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_base", -1, 0);
  v19 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_max", -1, 0);
  v14 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_min", -1, 0);
  v15.m128_f32[0] = v13 - 0.5;
  if ( (v13 - 0.5) < 0.0 )
  {
    v17 = 0.0;
  }
  else
  {
    v16 = _mm_cmpge_ss(0x3F800000u, v15);
    LODWORD(v17) = _mm_andnot_ps(v16, 0x3F800000u).m128_u32[0] | v15.m128_i32[0] & v16.m128_i32[0];
  }
  return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2))
        * ((((v19 - v14) * v17) + v14) + LevelSpecialValue));
}


// CDOTA_Ability_Morphling_AdaptiveStrike::GetStunDuration  (line 541, @0x00000000029e6010, libserver.so)  // inlines: RemapValClamped, ToDOTABaseNPCHero, clamp<float, float>
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "stun_max", "stun_min"
float __fastcall CDOTA_Ability_Morphling_AdaptiveStrike::GetStunDuration(
        CDOTA_Ability_Morphling_AdaptiveStrike *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  float v3; // xmm1_4
  CDOTA_BaseNPC *v4; // rbx
  int v5; // eax
  float v6; // xmm1_4
  float flStr2Agi; // [rsp+8h] [rbp-18h]
  float v9; // [rsp+Ch] [rbp-14h]
  float LevelSpecialValue; // [rsp+Ch] [rbp-14h]

  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = 0.0;
  v4 = Caster;
  if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
  {
    v9 = (*(Caster->_vptr_IHandleEntity + 496))(Caster);
    flStr2Agi = v9 / (*(v4->_vptr_IHandleEntity + 497))(v4);
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "stun_max", -1, 0);
    v5 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "stun_min", -1, 0);
    v6 = 0.0;
    if ( (flStr2Agi - 0.5) >= 0.0 )
      v6 = fminf(1.0, flStr2Agi - 0.5);
    return ((LevelSpecialValue - v5) * v6) + v5;
  }
  return v3;
}


// CDOTA_Modifier_Morphling_Adaptive_Strike::~CDOTA_Modifier_Morphling_Adaptive_Strike  (line 556, @0x0000000002a10800, libserver.so)  // inlines: ~CDOTA_Modifier_Stunned
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Morphling_Adaptive_Strike::~CDOTA_Modifier_Morphling_Adaptive_Strike(
        CDOTA_Modifier_Morphling_Adaptive_Strike *const this)
{
  this->_vptr_CHorizontalMotionController = &off_4360778;
  this->_vptr_CDOTA_Buff = &off_411CD70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Morphling_Adaptive_Strike::~CDOTA_Modifier_Morphling_Adaptive_Strike  (line 556, @0x0000000002a10830, libserver.so)  // inlines: ~CDOTA_Modifier_Morphling_Adaptive_Strike, ~CDOTA_Modifier_Stunned
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Morphling_Adaptive_Strike::~CDOTA_Modifier_Morphling_Adaptive_Strike(
        CDOTA_Modifier_Morphling_Adaptive_Strike *const this)
{
  this->_vptr_CHorizontalMotionController = &off_4360778;
  this->_vptr_CDOTA_Buff = &off_411CD70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Morphling_Adaptive_Strike::IsHorizontalMotionValidToApply  (line 568, @0x0000000002a0a7e0, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Morphling_Adaptive_Strike::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_Morphling_Adaptive_Strike *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Morphling_Adaptive_Strike::IsMotionController  (line 570, @0x0000000002a0a810, libserver.so)
bool __fastcall CDOTA_Modifier_Morphling_Adaptive_Strike::IsMotionController(
        CDOTA_Modifier_Morphling_Adaptive_Strike *const this)
{
  return 1;
}


// CDOTA_Modifier_Morphling_Adaptive_Strike::OnCreated  (line 584, @0x00000000029b9360, libserver.so)  // inlines: operator=
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, KeyValues::GetFloat, CDOTALocomotor::ApplyHorizontalMotionController
// strings: "direction_y", "direction_x"
void __fastcall CDOTA_Modifier_Morphling_Adaptive_Strike::OnCreated(
        CDOTA_Modifier_Morphling_Adaptive_Strike *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax
  float v5; // xmm1_4
  float v6; // xmm1_4
  CDOTA_BaseNPC *v7; // rax
  CDOTALocomotor *v8; // rax
  vec_t Float; // [rsp+Ch] [rbp-14h]

  Parent = CDOTA_Buff::GetParent(this);
  this->m_vStartPos = *CBaseEntity::GetAbsOrigin(Parent);
  Float = KeyValues::GetFloat(pKV, "direction_y", v5);
  this->m_vDirection.x = KeyValues::GetFloat(pKV, "direction_x", v6);
  this->m_vDirection.y = Float;
  this->m_vDirection.z = 0.0;
  this->m_flTotalDistance = KeyValues::GetFloat(pKV, "distance", 0.0);
  this->m_flCurTime = 0.0;
  v7 = CDOTA_Buff::GetParent(this);
  v8 = (*(v7->_vptr_IHandleEntity + 376))(v7);
  CDOTALocomotor::ApplyHorizontalMotionController(v8, &this->CHorizontalMotionController, 0);
}


// CDOTA_Modifier_Morphling_Adaptive_Strike::OnDestroy  (line 596, @0x00000000029b9980, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::RemoveHorizontalMotionController
void __fastcall CDOTA_Modifier_Morphling_Adaptive_Strike::OnDestroy(
        CDOTA_Modifier_Morphling_Adaptive_Strike *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v3; // rax

  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveHorizontalMotionController(v3, &this->CHorizontalMotionController);
}


// CDOTA_Modifier_Morphling_Adaptive_Strike::UpdateHorizontalMotion  (line 603, @0x00000000029b99c0, libserver.so)  // inlines: VectorAdd, VectorMultiply, operator*, operator+
// calls: CDOTA_Buff::GetParent, CBaseEntity::SetAbsOrigin, CDOTA_Buff::GetCaster, CGridNav::DestroyTreesAroundPoint, CDOTALocomotor::RemoveHorizontalMotionController
void __fastcall CDOTA_Modifier_Morphling_Adaptive_Strike::UpdateHorizontalMotion(
        CDOTA_Modifier_Morphling_Adaptive_Strike *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  float v5; // xmm0_4
  float m_flTotalDistance; // xmm3_4
  float y; // xmm1_4
  vec_t v8; // xmm0_4
  vec_t v9; // xmm2_4
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v12; // r12d
  CDOTA_BaseNPC *v13; // rax
  float v14; // xmm3_4
  CDOTA_BaseNPC *v15; // rax
  CDOTALocomotor *v16; // rax
  float flDistance; // [rsp+Ch] [rbp-24h]
  Vector vNewPos; // [rsp+10h] [rbp-20h] BYREF

  v5 = a3 + this->m_flCurTime;
  m_flTotalDistance = this->m_flTotalDistance;
  y = this->m_vDirection.y;
  this->m_flCurTime = v5;
  flDistance = fminf(m_flTotalDistance, v5 * 1200.0);
  v8 = (this->m_vDirection.z * flDistance) + this->m_vStartPos.z;
  v9 = (flDistance * this->m_vDirection.x) + this->m_vStartPos.x;
  vNewPos.y = (y * flDistance) + this->m_vStartPos.y;
  vNewPos.z = v8;
  vNewPos.x = v9;
  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::SetAbsOrigin(Parent, &vNewPos);
  Caster = CDOTA_Buff::GetCaster(this);
  v12 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
  v13 = CDOTA_Buff::GetParent(this);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 1, v12, vNewPos, v13->m_flHullRadius, v14);
  if ( flDistance >= this->m_flTotalDistance )
  {
    v15 = CDOTA_Buff::GetParent(this);
    v16 = (*(v15->_vptr_IHandleEntity + 376))(v15);
    CDOTALocomotor::RemoveHorizontalMotionController(v16, &this->CHorizontalMotionController);
  }
}


// CDOTA_Ability_Morphling_Morph::~CDOTA_Ability_Morphling_Morph  (line 630, @0x0000000002a17760, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Morphling_Morph::~CDOTA_Ability_Morphling_Morph(
        CDOTA_Ability_Morphling_Morph *const this)
{
  this->_vptr_IHandleEntity = &off_4360850;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Morphling_Morph::~CDOTA_Ability_Morphling_Morph  (line 630, @0x0000000002a17780, libserver.so)  // inlines: ~CDOTA_Ability_Morphling_Morph
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Morphling_Morph::~CDOTA_Ability_Morphling_Morph(
        CDOTA_Ability_Morphling_Morph *const this)
{
  this->_vptr_IHandleEntity = &off_4360850;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Morphling_Morph::Schema_DynamicBinding  (line 632, @0x0000000002a0a820, libserver.so)
// globals: CDOTA_Ability_Morphling_Morph::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Morphling_Morph::Schema_DynamicBinding(
        const CDOTA_Ability_Morphling_Morph *const this)
{
  return CDOTA_Ability_Morphling_Morph::s_pSchemaBinding;
}


// CDOTA_Ability_Morphling_Morph::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 632, @0x0000000002a0a830, libserver.so)
// globals: CDOTA_Ability_Morphling_Morph::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Morphling_Morph::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Morphling_Morph::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Morphling_Morph::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Morphling_Morph::CEntityInstanceEntityClass::DestructInstance  (line 632, @0x0000000002a0a840, libserver.so)  // inlines: Destruct<CDOTA_Ability_Morphling_Morph>
void __fastcall CDOTA_Ability_Morphling_Morph::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Morphling_Morph::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Morphling_Morph::CEntityInstanceEntityClass::FreeInstance  (line 632, @0x0000000002a0a860, libserver.so)
void __fastcall CDOTA_Ability_Morphling_Morph::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Morphling_Morph::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Morphling_Morph::CEntityInstanceEntityClass::CanAllocate  (line 632, @0x0000000002a0a880, libserver.so)
bool __fastcall CDOTA_Ability_Morphling_Morph::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Morphling_Morph::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Morphling_Morph::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 632, @0x0000000002a0a890, libserver.so)
// globals: CDOTA_Ability_Morphling_Morph::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Morphling_Morph::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Morphling_Morph::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Morphling_Morph::s_pSchemaBinding;
}


// CDOTA_Ability_Morphling_Morph::CEntityInstanceEntityClass::AllocateInstance  (line 632, @0x0000000002a0fe40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Morphling_Morph::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Morphling_Morph::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Morphling_Morph::CEntityInstanceEntityClass::ConstructInstance  (line 632, @0x0000000002a144d0, libserver.so)  // inlines: CDOTA_Ability_Morphling_Morph, Construct<CDOTA_Ability_Morphling_Morph>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Morphling_Morph::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Morphling_Morph::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4360850;
  }
  return p;
}


// CDOTA_Ability_Morphling_Morph::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 632, @0x0000000002a1fb80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Morphling_Morph::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Morphling_Morph::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Morphling_Morph::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 632, @0x0000000002a1fba0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Morphling_Morph::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Morphling_Morph::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Morphling_Morph::GetEntityClassInternal  (line 632, @0x0000000002a389c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "CDOTA_Ability_Morphling_Morph"
// globals: `guard variable for'CDOTA_Ability_Morphling_Morph::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_MorphClass, CDOTA_Ability_Morphling_Morph::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_MorphClass, __dso_handle, CDOTA_Ability_Morphling_Morph::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Morphling_Morph::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_MorphClassInfo, CDOTA_Ability_Morphling_Morph::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_MorphClassInfo
CEntityClass *__cdecl CDOTA_Ability_Morphling_Morph::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Morphling_Morph::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_MorphClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Morphling_Morph::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_MorphClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Morphling_Morph::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_MorphClass);
    CDOTA_Ability_Morphling_Morph::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_MorphClass._vptr_CEntityClass = off_43607D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Morphling_Morph::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_MorphClass);
    __cxa_atexit(
      CDOTA_Ability_Morphling_Morph::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Morphling_Morph::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_MorphClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Morphling_MorphClass != 0 )
    return &CDOTA_Ability_Morphling_Morph::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_MorphClass;
  if ( `guard variable for'CDOTA_Ability_Morphling_Morph::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_MorphClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Morphling_Morph::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_MorphClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Morphling_Morph::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_MorphClassInfo,
      "CDOTA_Ability_Morphling_Morph",
      "morphling_morph",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Morphling_Morph::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_MorphClassInfo);
  }
  CDOTA_Ability_Morphling_Morph::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_MorphClass.m_pClassInfo = &CDOTA_Ability_Morphling_Morph::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_MorphClassInfo;
  CDOTA_Ability_Morphling_Morph::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_MorphClass.m_pBaseClassInfo = CDOTA_Ability_Morphling_Morph::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_MorphClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Morphling_MorphClass = &CDOTA_Ability_Morphling_Morph::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_MorphClass;
  CDOTA_Ability_Morphling_Morph::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_MorphClassInfo.m_pClass = &CDOTA_Ability_Morphling_Morph::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_MorphClass;
  CDOTA_Ability_Morphling_Morph::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_MorphClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Morphling_MorphClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Morphling_Morph::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_MorphClass;
}


// CDOTA_Ability_Morphling_Morph::GetIntrinsicModifierName  (line 635, @0x0000000002a0a8a0, libserver.so)
// strings: "modifier_morphling_morph"
const char *__fastcall CDOTA_Ability_Morphling_Morph::GetIntrinsicModifierName(
        CDOTA_Ability_Morphling_Morph *const this)
{
  return "modifier_morphling_morph";
}


// CDOTA_Ability_Morphling_Morph::IsHiddenWhenStolen  (line 637, @0x0000000002a0a8b0, libserver.so)
bool __fastcall CDOTA_Ability_Morphling_Morph::IsHiddenWhenStolen(CDOTA_Ability_Morphling_Morph *const this)
{
  return 1;
}


// CDOTA_Modifier_Morphling_Morph::~CDOTA_Modifier_Morphling_Morph  (line 646, @0x0000000002a116a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Morphling_Morph::~CDOTA_Modifier_Morphling_Morph(
        CDOTA_Modifier_Morphling_Morph *const this)
{
  this->_vptr_CDOTA_Buff = &off_4361310;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Morphling_Morph::~CDOTA_Modifier_Morphling_Morph  (line 646, @0x0000000002a116c0, libserver.so)  // inlines: ~CDOTA_Modifier_Morphling_Morph
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Morphling_Morph::~CDOTA_Modifier_Morphling_Morph(
        CDOTA_Modifier_Morphling_Morph *const this)
{
  this->_vptr_CDOTA_Buff = &off_4361310;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Morphling_Morph::RefreshTexture  (line 655, @0x0000000002a0a8c0, libserver.so)
bool __fastcall CDOTA_Modifier_Morphling_Morph::RefreshTexture(CDOTA_Modifier_Morphling_Morph *const this)
{
  return 1;
}


// CDOTA_Modifier_Morphling_Morph::OnCreated  (line 674, @0x00000000029f6f80, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_attributes"
void __fastcall CDOTA_Modifier_Morphling_Morph::OnCreated(CDOTA_Modifier_Morphling_Morph *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_attributes = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_attributes", -1, 0);
  else
    this->bonus_attributes = 0;
}


// CDOTA_Modifier_Morphling_Morph::OnRefresh  (line 684, @0x00000000029f80d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent
// strings: "bonus_attributes"
void __fastcall CDOTA_Modifier_Morphling_Morph::OnRefresh(CDOTA_Modifier_Morphling_Morph *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Parent; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_attributes = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_attributes", -1, 0);
  else
    this->bonus_attributes = 0;
  Parent = CDOTA_Buff::GetParent(this);
  (*(Parent->_vptr_IHandleEntity + 490))(Parent);
}


// CDOTA_Modifier_Morphling_Morph::GetTexture  (line 695, @0x00000000029b58f0, libserver.so)
// strings: "morphling_morph_state_agi", "morphling_morph_state_str"
const char *__fastcall CDOTA_Modifier_Morphling_Morph::GetTexture(CDOTA_Modifier_Morphling_Morph *const this)
{
  int v1; // eax
  const char *v2; // rdx

  v1 = (*(this->_vptr_CDOTA_Buff + 27))(this);
  v2 = "morphling_morph_state_agi";
  if ( v1 <= 0 )
    return "morphling_morph_state_str";
  return v2;
}


// CDOTA_Modifier_Morphling_Morph::DeclareFunctions  (line 709, @0x00000000029b5920, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Morphling_Morph::GetModifierBonusStats_Strength(CModifierParams const&), CDOTA_Modifier_Morphling_Morph::GetModifierBonusStats_Agility(CModifierParams const&)
void __fastcall CDOTA_Modifier_Morphling_Morph::DeclareFunctions(CDOTA_Modifier_Morphling_Morph *const this)
{
  this->m_Functions[64].__pfn = CDOTA_Modifier_Morphling_Morph::GetModifierBonusStats_Strength;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[65].__pfn = CDOTA_Modifier_Morphling_Morph::GetModifierBonusStats_Agility;
}


// CDOTA_Modifier_Morphling_Morph::GetModifierBonusStats_Strength  (line 717, @0x00000000029b5960, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Morphling_Morph::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Morphling_Morph *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attributes;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Morphling_Morph::GetModifierBonusStats_Agility  (line 722, @0x00000000029b5980, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Morphling_Morph::GetModifierBonusStats_Agility(
        CDOTA_Modifier_Morphling_Morph *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attributes;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Morphling_Morph_Agi::~CDOTA_Ability_Morphling_Morph_Agi  (line 733, @0x0000000002a177b0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Morphling_Morph_Agi::~CDOTA_Ability_Morphling_Morph_Agi(
        CDOTA_Ability_Morphling_Morph_Agi *const this)
{
  this->_vptr_IHandleEntity = &off_4361670;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Morphling_Morph_Agi::~CDOTA_Ability_Morphling_Morph_Agi  (line 733, @0x0000000002a177d0, libserver.so)  // inlines: ~CDOTA_Ability_Morphling_Morph_Agi
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Morphling_Morph_Agi::~CDOTA_Ability_Morphling_Morph_Agi(
        CDOTA_Ability_Morphling_Morph_Agi *const this)
{
  this->_vptr_IHandleEntity = &off_4361670;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Morphling_Morph_Agi::Schema_DynamicBinding  (line 735, @0x0000000002a0a8d0, libserver.so)
// globals: CDOTA_Ability_Morphling_Morph_Agi::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Morphling_Morph_Agi::Schema_DynamicBinding(
        const CDOTA_Ability_Morphling_Morph_Agi *const this)
{
  return CDOTA_Ability_Morphling_Morph_Agi::s_pSchemaBinding;
}


// CDOTA_Ability_Morphling_Morph_Agi::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 735, @0x0000000002a0a8e0, libserver.so)
// globals: CDOTA_Ability_Morphling_Morph_Agi::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Morphling_Morph_Agi::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Morphling_Morph_Agi::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Morphling_Morph_Agi::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Morphling_Morph_Agi::CEntityInstanceEntityClass::DestructInstance  (line 735, @0x0000000002a0a8f0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Morphling_Morph_Agi>
void __fastcall CDOTA_Ability_Morphling_Morph_Agi::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Morphling_Morph_Agi::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Morphling_Morph_Agi::CEntityInstanceEntityClass::FreeInstance  (line 735, @0x0000000002a0a910, libserver.so)
void __fastcall CDOTA_Ability_Morphling_Morph_Agi::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Morphling_Morph_Agi::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Morphling_Morph_Agi::CEntityInstanceEntityClass::CanAllocate  (line 735, @0x0000000002a0a930, libserver.so)
bool __fastcall CDOTA_Ability_Morphling_Morph_Agi::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Morphling_Morph_Agi::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Morphling_Morph_Agi::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 735, @0x0000000002a0a940, libserver.so)
// globals: CDOTA_Ability_Morphling_Morph_Agi::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Morphling_Morph_Agi::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Morphling_Morph_Agi::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Morphling_Morph_Agi::s_pSchemaBinding;
}


// CDOTA_Ability_Morphling_Morph_Agi::CEntityInstanceEntityClass::AllocateInstance  (line 735, @0x0000000002a0fe80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Morphling_Morph_Agi::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Morphling_Morph_Agi::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Morphling_Morph_Agi::CEntityInstanceEntityClass::ConstructInstance  (line 735, @0x0000000002a14500, libserver.so)  // inlines: CDOTA_Ability_Morphling_Morph_Agi, Construct<CDOTA_Ability_Morphling_Morph_Agi>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Morphling_Morph_Agi::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Morphling_Morph_Agi::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4361670;
  }
  return p;
}


// CDOTA_Ability_Morphling_Morph_Agi::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 735, @0x0000000002a1fbd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Morphling_Morph_Agi::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Morphling_Morph_Agi::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Morphling_Morph_Agi::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 735, @0x0000000002a1fbf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Morphling_Morph_Agi::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Morphling_Morph_Agi::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Morphling_Morph_Agi::GetEntityClassInternal  (line 735, @0x0000000002a38b10, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "CDOTA_Ability_Morphling_Morph_Agi"
// globals: `guard variable for'CDOTA_Ability_Morphling_Morph_Agi::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_Morph_AgiClass, CDOTA_Ability_Morphling_Morph_Agi::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_Morph_AgiClass, __dso_handle, CDOTA_Ability_Morphling_Morph_Agi::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Morphling_Morph_Agi::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_Morph_AgiClassInfo, CDOTA_Ability_Morphling_Morph_Agi::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_Morph_AgiClassInfo
CEntityClass *__cdecl CDOTA_Ability_Morphling_Morph_Agi::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Morphling_Morph_Agi::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_Morph_AgiClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Morphling_Morph_Agi::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_Morph_AgiClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Morphling_Morph_Agi::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_Morph_AgiClass);
    CDOTA_Ability_Morphling_Morph_Agi::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_Morph_AgiClass._vptr_CEntityClass = off_43615F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Morphling_Morph_Agi::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_Morph_AgiClass);
    __cxa_atexit(
      CDOTA_Ability_Morphling_Morph_Agi::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Morphling_Morph_Agi::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_Morph_AgiClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Morphling_Morph_AgiClass != 0 )
    return &CDOTA_Ability_Morphling_Morph_Agi::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_Morph_AgiClass;
  if ( `guard variable for'CDOTA_Ability_Morphling_Morph_Agi::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_Morph_AgiClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Morphling_Morph_Agi::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_Morph_AgiClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Morphling_Morph_Agi::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_Morph_AgiClassInfo,
      "CDOTA_Ability_Morphling_Morph_Agi",
      "morphling_morph_agi",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Morphling_Morph_Agi::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_Morph_AgiClassInfo);
  }
  CDOTA_Ability_Morphling_Morph_Agi::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_Morph_AgiClass.m_pClassInfo = &CDOTA_Ability_Morphling_Morph_Agi::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_Morph_AgiClassInfo;
  CDOTA_Ability_Morphling_Morph_Agi::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_Morph_AgiClass.m_pBaseClassInfo = CDOTA_Ability_Morphling_Morph_Agi::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_Morph_AgiClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Morphling_Morph_AgiClass = &CDOTA_Ability_Morphling_Morph_Agi::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_Morph_AgiClass;
  CDOTA_Ability_Morphling_Morph_Agi::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_Morph_AgiClassInfo.m_pClass = &CDOTA_Ability_Morphling_Morph_Agi::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_Morph_AgiClass;
  CDOTA_Ability_Morphling_Morph_Agi::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_Morph_AgiClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Morphling_Morph_AgiClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Morphling_Morph_Agi::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_Morph_AgiClass;
}


// CDOTA_Ability_Morphling_Morph_Agi::ProcsMagicStick  (line 738, @0x0000000002a0a950, libserver.so)
bool __fastcall CDOTA_Ability_Morphling_Morph_Agi::ProcsMagicStick(CDOTA_Ability_Morphling_Morph_Agi *const this)
{
  return 0;
}


// CDOTA_Ability_Morphling_Morph_Agi::GetAssociatedSecondaryAbilities  (line 742, @0x0000000002a0a960, libserver.so)
// strings: "morphling_morph_str;morphling_morph"
const char *__fastcall CDOTA_Ability_Morphling_Morph_Agi::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Morphling_Morph_Agi *const this)
{
  return "morphling_morph_str;morphling_morph";
}


// CDOTA_Ability_Morphling_Morph_Agi::OnUpgrade  (line 749, @0x00000000029b7df0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::FindModifierByName, KeyValues::KeyValues, KeyValues::~KeyValues, CDOTABaseAbility::OnUpgrade, CDOTABaseAbility::UpgradeAbility, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_morphling_morph_agi", "modifier_morphling_morph_str"
void __fastcall CDOTA_Ability_Morphling_Morph_Agi::OnUpgrade(CDOTA_Ability_Morphling_Morph_Agi *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTA_Buff *ModifierByName; // r13
  CDOTA_BaseNPC *v8; // rax
  CDOTA_Buff *v9; // r13
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "morphling_morph_str", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value < this->m_iLevel.m_Value )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  v4 = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTA_BaseNPC::FindAbilityByName(v4, "morphling_morph", 0);
  if ( v5 != 0 && v5->m_iLevel.m_Value < this->m_iLevel.m_Value )
    CDOTABaseAbility::UpgradeAbility(v5, 0);
  v6 = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(v6, "modifier_morphling_morph_agi", 0);
  if ( ModifierByName != 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_morphling_morph_agi");
    (*(ModifierByName->_vptr_CDOTA_Buff + 58))(ModifierByName, &kv);
    KeyValues::~KeyValues(&kv);
  }
  v8 = CDOTABaseAbility::GetCaster(this);
  v9 = CDOTA_BaseNPC::FindModifierByName(v8, "modifier_morphling_morph_str", 0);
  if ( v9 != 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_morphling_morph_str");
    (*(v9->_vptr_CDOTA_Buff + 58))(v9, &kv);
    KeyValues::~KeyValues(&kv);
  }
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Morphling_Morph_Agi::OnToggle  (line 784, @0x00000000029b86a0, libserver.so)
// calls: CDOTABaseAbility::OnToggle, KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::FindAbilityByName, KeyValues::~KeyValues, CDOTA_BaseNPC::RemoveModifierByName, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_morphling_morph_agi"
void __fastcall CDOTA_Ability_Morphling_Morph_Agi::OnToggle(CDOTA_Ability_Morphling_Morph_Agi *const this)
{
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v6; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  CDOTABaseAbility::OnToggle(this);
  if ( this->m_bToggleState.m_Value )
  {
    KeyValues::KeyValues(&kv, "modifier_morphling_morph_agi");
    Caster = CDOTABaseAbility::GetCaster(this);
    v3 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_morphling_morph_agi", &kv, 0);
    v4 = CDOTABaseAbility::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v4, "morphling_morph_str", 0);
    if ( AbilityByName != 0 && AbilityByName->m_bToggleState.m_Value )
      (*(AbilityByName->_vptr_IHandleEntity + 270))(AbilityByName);
    KeyValues::~KeyValues(&kv);
  }
  else
  {
    v6 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::RemoveModifierByName(v6, "modifier_morphling_morph_agi");
  }
}


// CDOTA_Modifier_Morphling_Morph_Agi::~CDOTA_Modifier_Morphling_Morph_Agi  (line 811, @0x0000000002a11650, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Morphling_Morph_Agi::~CDOTA_Modifier_Morphling_Morph_Agi(
        CDOTA_Modifier_Morphling_Morph_Agi *const this)
{
  this->_vptr_CDOTA_Buff = &off_4362130;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Morphling_Morph_Agi::~CDOTA_Modifier_Morphling_Morph_Agi  (line 811, @0x0000000002a11670, libserver.so)  // inlines: ~CDOTA_Modifier_Morphling_Morph_Agi
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Morphling_Morph_Agi::~CDOTA_Modifier_Morphling_Morph_Agi(
        CDOTA_Modifier_Morphling_Morph_Agi *const this)
{
  this->_vptr_CDOTA_Buff = &off_4362130;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Morphling_Morph_Agi::IsPurgable  (line 825, @0x0000000002a0a970, libserver.so)
bool __fastcall CDOTA_Modifier_Morphling_Morph_Agi::IsPurgable(CDOTA_Modifier_Morphling_Morph_Agi *const this)
{
  return 0;
}


// CDOTA_Modifier_Morphling_Morph_Agi::OnCreated  (line 840, @0x00000000029f8d30, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "points_per_tick", "morph_cooldown"
void __fastcall CDOTA_Modifier_Morphling_Morph_Agi::OnCreated(
        CDOTA_Modifier_Morphling_Morph_Agi *const this,
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
    this->mana_cost = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "mana_cost", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->points_per_tick = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->mana_cost = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->points_per_tick = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "points_per_tick", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "morph_cooldown", -1, 0);
    this->morph_cooldown = LevelSpecialValue;
    CDOTA_Buff::StartIntervalThink(this, LevelSpecialValue, v8);
    return;
  }
LABEL_7:
  this->morph_cooldown = 0.0;
  CDOTA_Buff::StartIntervalThink(this, 0.0, v6);
}


// CDOTA_Modifier_Morphling_Morph_Agi::OnRefresh  (line 860, @0x00000000029e02f0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "morph_cooldown"
void __fastcall CDOTA_Modifier_Morphling_Morph_Agi::OnRefresh(
        CDOTA_Modifier_Morphling_Morph_Agi *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v4; // xmm1_4
  float LevelSpecialValue; // xmm0_4
  float v6; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "morph_cooldown", -1, 0);
    this->morph_cooldown = LevelSpecialValue;
    CDOTA_Buff::StartIntervalThink(this, LevelSpecialValue, v6);
  }
  else
  {
    this->morph_cooldown = 0.0;
    CDOTA_Buff::StartIntervalThink(this, 0.0, v4);
  }
}


// CDOTA_Modifier_Morphling_Morph_Agi::OnDestroy  (line 871, @0x00000000029b59a0, libserver.so)
void __fastcall CDOTA_Modifier_Morphling_Morph_Agi::OnDestroy(CDOTA_Modifier_Morphling_Morph_Agi *const this)
{
  ;
}


// CDOTA_Modifier_Morphling_Morph_Agi::OnIntervalThink  (line 880, @0x00000000029bacf0, libserver.so)  // inlines: ToDOTABaseNPCHero
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName, CBaseEntity::GetHealth, CDOTA_BaseNPC_Hero::ModifyAgility, CDOTA_BaseNPC_Hero::ModifyStrength, CDOTA_BaseNPC::ModifyHealth, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::SpendMana
// strings: "modifier_morphling_morph"
void __fastcall CDOTA_Modifier_Morphling_Morph_Agi::OnIntervalThink(CDOTA_Modifier_Morphling_Morph_Agi *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC_Hero *v3; // rbx
  CDOTA_BaseNPC *v4; // rax
  int Health; // r14d
  float v6; // xmm1_4
  float v7; // xmm1_4
  int v8; // r13d
  int v9; // eax
  CDOTABaseAbility *Ability; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  v3 = Caster;
  if ( Caster != 0
    && (Caster->m_iUnitType & 1) != 0
    && Caster->m_flMana.m_Value >= (this->mana_cost * this->morph_cooldown) )
  {
    v4 = CDOTA_Buff::GetCaster(this);
    if ( CDOTA_BaseNPC::FindModifierByName(v4, "modifier_morphling_morph", 0) != 0 && v3->m_flStrength.m_Value > 1.0 )
    {
      Health = CBaseEntity::GetHealth(v3);
      CDOTA_BaseNPC_Hero::ModifyAgility(v3, this->points_per_tick, v6);
      CDOTA_BaseNPC_Hero::ModifyStrength(v3, -this->points_per_tick, v7);
      v8 = 20 * this->points_per_tick - (Health - CBaseEntity::GetHealth(v3));
      if ( v8 < 0 )
        v8 = 0;
      v9 = CBaseEntity::GetHealth(v3);
      CDOTA_BaseNPC::ModifyHealth(v3, v9 - v8, 0, 0, 0);
      Ability = CDOTA_Buff::GetAbility(this);
      CDOTA_BaseNPC::SpendMana(v3, this->mana_cost * this->morph_cooldown, Ability, 0);
    }
  }
}


// CDOTA_Ability_Morphling_Morph_Str::~CDOTA_Ability_Morphling_Morph_Str  (line 911, @0x0000000002a17800, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Morphling_Morph_Str::~CDOTA_Ability_Morphling_Morph_Str(
        CDOTA_Ability_Morphling_Morph_Str *const this)
{
  this->_vptr_IHandleEntity = &off_4362490;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Morphling_Morph_Str::~CDOTA_Ability_Morphling_Morph_Str  (line 911, @0x0000000002a17820, libserver.so)  // inlines: ~CDOTA_Ability_Morphling_Morph_Str
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Morphling_Morph_Str::~CDOTA_Ability_Morphling_Morph_Str(
        CDOTA_Ability_Morphling_Morph_Str *const this)
{
  this->_vptr_IHandleEntity = &off_4362490;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Morphling_Morph_Str::Schema_DynamicBinding  (line 913, @0x0000000002a0a980, libserver.so)
// globals: CDOTA_Ability_Morphling_Morph_Str::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Morphling_Morph_Str::Schema_DynamicBinding(
        const CDOTA_Ability_Morphling_Morph_Str *const this)
{
  return CDOTA_Ability_Morphling_Morph_Str::s_pSchemaBinding;
}


// CDOTA_Ability_Morphling_Morph_Str::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 913, @0x0000000002a0a990, libserver.so)
// globals: CDOTA_Ability_Morphling_Morph_Str::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Morphling_Morph_Str::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Morphling_Morph_Str::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Morphling_Morph_Str::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Morphling_Morph_Str::CEntityInstanceEntityClass::DestructInstance  (line 913, @0x0000000002a0a9a0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Morphling_Morph_Str>
void __fastcall CDOTA_Ability_Morphling_Morph_Str::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Morphling_Morph_Str::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Morphling_Morph_Str::CEntityInstanceEntityClass::FreeInstance  (line 913, @0x0000000002a0a9c0, libserver.so)
void __fastcall CDOTA_Ability_Morphling_Morph_Str::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Morphling_Morph_Str::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Morphling_Morph_Str::CEntityInstanceEntityClass::CanAllocate  (line 913, @0x0000000002a0a9e0, libserver.so)
bool __fastcall CDOTA_Ability_Morphling_Morph_Str::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Morphling_Morph_Str::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Morphling_Morph_Str::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 913, @0x0000000002a0a9f0, libserver.so)
// globals: CDOTA_Ability_Morphling_Morph_Str::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Morphling_Morph_Str::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Morphling_Morph_Str::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Morphling_Morph_Str::s_pSchemaBinding;
}


// CDOTA_Ability_Morphling_Morph_Str::CEntityInstanceEntityClass::AllocateInstance  (line 913, @0x0000000002a0fec0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Morphling_Morph_Str::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Morphling_Morph_Str::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Morphling_Morph_Str::CEntityInstanceEntityClass::ConstructInstance  (line 913, @0x0000000002a14530, libserver.so)  // inlines: CDOTA_Ability_Morphling_Morph_Str, Construct<CDOTA_Ability_Morphling_Morph_Str>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Morphling_Morph_Str::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Morphling_Morph_Str::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4362490;
  }
  return p;
}


// CDOTA_Ability_Morphling_Morph_Str::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 913, @0x0000000002a1fc20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Morphling_Morph_Str::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Morphling_Morph_Str::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Morphling_Morph_Str::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 913, @0x0000000002a1fc40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Morphling_Morph_Str::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Morphling_Morph_Str::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Morphling_Morph_Str::GetEntityClassInternal  (line 913, @0x0000000002a38c60, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "CDOTA_Ability_Morphling_Morph_Str"
// globals: `guard variable for'CDOTA_Ability_Morphling_Morph_Str::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_Morph_StrClass, CDOTA_Ability_Morphling_Morph_Str::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_Morph_StrClass, __dso_handle, CDOTA_Ability_Morphling_Morph_Str::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Morphling_Morph_Str::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_Morph_StrClassInfo, CDOTA_Ability_Morphling_Morph_Str::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_Morph_StrClassInfo
CEntityClass *__cdecl CDOTA_Ability_Morphling_Morph_Str::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Morphling_Morph_Str::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_Morph_StrClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Morphling_Morph_Str::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_Morph_StrClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Morphling_Morph_Str::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_Morph_StrClass);
    CDOTA_Ability_Morphling_Morph_Str::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_Morph_StrClass._vptr_CEntityClass = off_4362410;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Morphling_Morph_Str::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_Morph_StrClass);
    __cxa_atexit(
      CDOTA_Ability_Morphling_Morph_Str::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Morphling_Morph_Str::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_Morph_StrClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Morphling_Morph_StrClass != 0 )
    return &CDOTA_Ability_Morphling_Morph_Str::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_Morph_StrClass;
  if ( `guard variable for'CDOTA_Ability_Morphling_Morph_Str::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_Morph_StrClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Morphling_Morph_Str::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_Morph_StrClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Morphling_Morph_Str::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_Morph_StrClassInfo,
      "CDOTA_Ability_Morphling_Morph_Str",
      "morphling_morph_str",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Morphling_Morph_Str::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_Morph_StrClassInfo);
  }
  CDOTA_Ability_Morphling_Morph_Str::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_Morph_StrClass.m_pClassInfo = &CDOTA_Ability_Morphling_Morph_Str::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_Morph_StrClassInfo;
  CDOTA_Ability_Morphling_Morph_Str::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_Morph_StrClass.m_pBaseClassInfo = CDOTA_Ability_Morphling_Morph_Str::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_Morph_StrClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Morphling_Morph_StrClass = &CDOTA_Ability_Morphling_Morph_Str::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_Morph_StrClass;
  CDOTA_Ability_Morphling_Morph_Str::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_Morph_StrClassInfo.m_pClass = &CDOTA_Ability_Morphling_Morph_Str::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_Morph_StrClass;
  CDOTA_Ability_Morphling_Morph_Str::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_Morph_StrClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Morphling_Morph_StrClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Morphling_Morph_Str::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_Morph_StrClass;
}


// CDOTA_Ability_Morphling_Morph_Str::ProcsMagicStick  (line 916, @0x0000000002a0aa00, libserver.so)
bool __fastcall CDOTA_Ability_Morphling_Morph_Str::ProcsMagicStick(CDOTA_Ability_Morphling_Morph_Str *const this)
{
  return 0;
}


// CDOTA_Ability_Morphling_Morph_Str::GetAssociatedPrimaryAbilities  (line 920, @0x0000000002a0aa10, libserver.so)
const char *__fastcall CDOTA_Ability_Morphling_Morph_Str::GetAssociatedPrimaryAbilities(
        CDOTA_Ability_Morphling_Morph_Str *const this)
{
  return "morphling_morph_agi";
}


// CDOTA_Ability_Morphling_Morph_Str::GetAssociatedSecondaryAbilities  (line 921, @0x0000000002a0aa20, libserver.so)
const char *__fastcall CDOTA_Ability_Morphling_Morph_Str::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Morphling_Morph_Str *const this)
{
  return "morphling_morph";
}


// CDOTA_Ability_Morphling_Morph_Str::OnUpgrade  (line 928, @0x00000000029b7f70, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::FindModifierByName, KeyValues::KeyValues, KeyValues::~KeyValues, CDOTABaseAbility::OnUpgrade, CDOTABaseAbility::UpgradeAbility, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_morphling_morph_agi", "modifier_morphling_morph_str"
void __fastcall CDOTA_Ability_Morphling_Morph_Str::OnUpgrade(CDOTA_Ability_Morphling_Morph_Str *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTA_Buff *ModifierByName; // r13
  CDOTA_BaseNPC *v8; // rax
  CDOTA_Buff *v9; // r13
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "morphling_morph_agi", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value < this->m_iLevel.m_Value )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  v4 = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTA_BaseNPC::FindAbilityByName(v4, "morphling_morph", 0);
  if ( v5 != 0 && v5->m_iLevel.m_Value < this->m_iLevel.m_Value )
    CDOTABaseAbility::UpgradeAbility(v5, 0);
  v6 = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(v6, "modifier_morphling_morph_agi", 0);
  if ( ModifierByName != 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_morphling_morph_agi");
    (*(ModifierByName->_vptr_CDOTA_Buff + 58))(ModifierByName, &kv);
    KeyValues::~KeyValues(&kv);
  }
  v8 = CDOTABaseAbility::GetCaster(this);
  v9 = CDOTA_BaseNPC::FindModifierByName(v8, "modifier_morphling_morph_str", 0);
  if ( v9 != 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_morphling_morph_str");
    (*(v9->_vptr_CDOTA_Buff + 58))(v9, &kv);
    KeyValues::~KeyValues(&kv);
  }
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Morphling_Morph_Str::OnToggle  (line 963, @0x00000000029b87b0, libserver.so)
// calls: CDOTABaseAbility::OnToggle, KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::FindAbilityByName, KeyValues::~KeyValues, CDOTA_BaseNPC::RemoveModifierByName, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_morphling_morph_str"
void __fastcall CDOTA_Ability_Morphling_Morph_Str::OnToggle(CDOTA_Ability_Morphling_Morph_Str *const this)
{
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v6; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  CDOTABaseAbility::OnToggle(this);
  if ( this->m_bToggleState.m_Value )
  {
    KeyValues::KeyValues(&kv, "modifier_morphling_morph_str");
    Caster = CDOTABaseAbility::GetCaster(this);
    v3 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_morphling_morph_str", &kv, 0);
    v4 = CDOTABaseAbility::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v4, "morphling_morph_agi", 0);
    if ( AbilityByName != 0 && AbilityByName->m_bToggleState.m_Value )
      (*(AbilityByName->_vptr_IHandleEntity + 270))(AbilityByName);
    KeyValues::~KeyValues(&kv);
  }
  else
  {
    v6 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::RemoveModifierByName(v6, "modifier_morphling_morph_str");
  }
}


// CDOTA_Modifier_Morphling_Morph_Str::~CDOTA_Modifier_Morphling_Morph_Str  (line 990, @0x0000000002a11600, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Morphling_Morph_Str::~CDOTA_Modifier_Morphling_Morph_Str(
        CDOTA_Modifier_Morphling_Morph_Str *const this)
{
  this->_vptr_CDOTA_Buff = &off_4362F50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Morphling_Morph_Str::~CDOTA_Modifier_Morphling_Morph_Str  (line 990, @0x0000000002a11620, libserver.so)  // inlines: ~CDOTA_Modifier_Morphling_Morph_Str
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Morphling_Morph_Str::~CDOTA_Modifier_Morphling_Morph_Str(
        CDOTA_Modifier_Morphling_Morph_Str *const this)
{
  this->_vptr_CDOTA_Buff = &off_4362F50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Morphling_Morph_Str::IsPurgable  (line 1004, @0x0000000002a0aa30, libserver.so)
bool __fastcall CDOTA_Modifier_Morphling_Morph_Str::IsPurgable(CDOTA_Modifier_Morphling_Morph_Str *const this)
{
  return 0;
}


// CDOTA_Modifier_Morphling_Morph_Str::OnCreated  (line 1021, @0x00000000029f8e20, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "points_per_tick", "morph_cooldown"
void __fastcall CDOTA_Modifier_Morphling_Morph_Str::OnCreated(
        CDOTA_Modifier_Morphling_Morph_Str *const this,
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
    this->mana_cost = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "mana_cost", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->points_per_tick = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->mana_cost = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->points_per_tick = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "points_per_tick", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "morph_cooldown", -1, 0);
    this->morph_cooldown = LevelSpecialValue;
    CDOTA_Buff::StartIntervalThink(this, LevelSpecialValue, v8);
    return;
  }
LABEL_7:
  this->morph_cooldown = 0.0;
  CDOTA_Buff::StartIntervalThink(this, 0.0, v6);
}


// CDOTA_Modifier_Morphling_Morph_Str::OnRefresh  (line 1042, @0x00000000029e0280, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "morph_cooldown"
void __fastcall CDOTA_Modifier_Morphling_Morph_Str::OnRefresh(
        CDOTA_Modifier_Morphling_Morph_Str *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v4; // xmm1_4
  float LevelSpecialValue; // xmm0_4
  float v6; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "morph_cooldown", -1, 0);
    this->morph_cooldown = LevelSpecialValue;
    CDOTA_Buff::StartIntervalThink(this, LevelSpecialValue, v6);
  }
  else
  {
    this->morph_cooldown = 0.0;
    CDOTA_Buff::StartIntervalThink(this, 0.0, v4);
  }
}


// CDOTA_Modifier_Morphling_Morph_Str::OnDestroy  (line 1053, @0x00000000029b59b0, libserver.so)
void __fastcall CDOTA_Modifier_Morphling_Morph_Str::OnDestroy(CDOTA_Modifier_Morphling_Morph_Str *const this)
{
  ;
}


// CDOTA_Modifier_Morphling_Morph_Str::OnIntervalThink  (line 1062, @0x00000000029c06f0, libserver.so)  // inlines: GetModifier_Constant_Highest, IsListeningToEvent, ToDOTABaseNPCHero
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName, CBaseEntity::GetHealth, CDOTA_BaseNPC_Hero::ModifyStrength, CDOTA_BaseNPC_Hero::ModifyAgility, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_BaseNPC::ModifyHealth, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::SpendMana
// strings: "modifier_morphling_morph"
void __fastcall CDOTA_Modifier_Morphling_Morph_Str::OnIntervalThink(CDOTA_Modifier_Morphling_Morph_Str *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC_Hero *v3; // rbx
  CDOTA_BaseNPC *v4; // rax
  int Health; // r13d
  float v6; // xmm1_4
  float v7; // xmm1_4
  int v8; // eax
  __int64 v9; // rdx
  int v10; // r14d
  int points_per_tick; // r15d
  CDOTABaseAbility *Ability; // rax
  int v13; // eax
  int v14; // edx

  Caster = CDOTA_Buff::GetCaster(this);
  v3 = Caster;
  if ( Caster != 0
    && (Caster->m_iUnitType & 1) != 0
    && Caster->m_flMana.m_Value >= (this->mana_cost * this->morph_cooldown) )
  {
    v4 = CDOTA_Buff::GetCaster(this);
    if ( CDOTA_BaseNPC::FindModifierByName(v4, "modifier_morphling_morph", 0) != 0 && v3->m_flAgility.m_Value > 1.0 )
    {
      Health = CBaseEntity::GetHealth(v3);
      CDOTA_BaseNPC_Hero::ModifyStrength(v3, this->points_per_tick, v6);
      CDOTA_BaseNPC_Hero::ModifyAgility(v3, -this->points_per_tick, v7);
      v8 = CBaseEntity::GetHealth(v3);
      v9 = v3->m_ModifierManager.m_buffsForModifiers[111];
      v10 = v8;
      points_per_tick = this->points_per_tick;
      if ( v9 == 0xFF
        || v3->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v9].m_Size <= 0
        || CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
             &v3->m_ModifierManager,
             modifierfunction::MODIFIER_PROPERTY_DISABLE_HEALING,
             &CModifierParams::s_Default) != 1.0 )
      {
        v13 = CBaseEntity::GetHealth(v3);
        v14 = Health + 20 * points_per_tick - v10;
        if ( v14 < 0 )
          v14 = 0;
        CDOTA_BaseNPC::ModifyHealth(v3, v14 + v13, 0, 0, 0);
      }
      else
      {
        CDOTA_BaseNPC::ModifyHealth(v3, Health, 0, 0, 0);
      }
      Ability = CDOTA_Buff::GetAbility(this);
      CDOTA_BaseNPC::SpendMana(v3, this->mana_cost * this->morph_cooldown, Ability, 0);
    }
  }
}


// CDOTA_Modifier_Morphling_Morph_Str::GetManaCost  (line 1098, @0x00000000029b59c0, libserver.so)
int __fastcall CDOTA_Modifier_Morphling_Morph_Str::GetManaCost(CDOTA_Modifier_Morphling_Morph_Str *const this)
{
  return 0;
}


// CDOTA_Ability_Morphling_Replicate::~CDOTA_Ability_Morphling_Replicate  (line 1113, @0x0000000002a17850, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Morphling_Replicate::~CDOTA_Ability_Morphling_Replicate(
        CDOTA_Ability_Morphling_Replicate *const this)
{
  this->_vptr_IHandleEntity = &off_43632B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Morphling_Replicate::~CDOTA_Ability_Morphling_Replicate  (line 1113, @0x0000000002a17870, libserver.so)  // inlines: ~CDOTA_Ability_Morphling_Replicate
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Morphling_Replicate::~CDOTA_Ability_Morphling_Replicate(
        CDOTA_Ability_Morphling_Replicate *const this)
{
  this->_vptr_IHandleEntity = &off_43632B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Morphling_Replicate::Schema_DynamicBinding  (line 1115, @0x0000000002a0aa40, libserver.so)
// globals: CDOTA_Ability_Morphling_Replicate::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Morphling_Replicate::Schema_DynamicBinding(
        const CDOTA_Ability_Morphling_Replicate *const this)
{
  return CDOTA_Ability_Morphling_Replicate::s_pSchemaBinding;
}


// CDOTA_Ability_Morphling_Replicate::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1115, @0x0000000002a0aa50, libserver.so)
// globals: CDOTA_Ability_Morphling_Replicate::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Morphling_Replicate::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Morphling_Replicate::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Morphling_Replicate::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Morphling_Replicate::CEntityInstanceEntityClass::DestructInstance  (line 1115, @0x0000000002a0aa60, libserver.so)  // inlines: Destruct<CDOTA_Ability_Morphling_Replicate>
void __fastcall CDOTA_Ability_Morphling_Replicate::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Morphling_Replicate::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Morphling_Replicate::CEntityInstanceEntityClass::FreeInstance  (line 1115, @0x0000000002a0aa80, libserver.so)
void __fastcall CDOTA_Ability_Morphling_Replicate::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Morphling_Replicate::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Morphling_Replicate::CEntityInstanceEntityClass::CanAllocate  (line 1115, @0x0000000002a0aaa0, libserver.so)
bool __fastcall CDOTA_Ability_Morphling_Replicate::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Morphling_Replicate::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Morphling_Replicate::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1115, @0x0000000002a0aab0, libserver.so)
// globals: CDOTA_Ability_Morphling_Replicate::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Morphling_Replicate::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Morphling_Replicate::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Morphling_Replicate::s_pSchemaBinding;
}


// CDOTA_Ability_Morphling_Replicate::CEntityInstanceEntityClass::AllocateInstance  (line 1115, @0x0000000002a0ff00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Morphling_Replicate::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Morphling_Replicate::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Morphling_Replicate::CEntityInstanceEntityClass::ConstructInstance  (line 1115, @0x0000000002a14560, libserver.so)  // inlines: CDOTA_Ability_Morphling_Replicate, CEntityHandle, CHandle, Construct<CDOTA_Ability_Morphling_Replicate>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Morphling_Replicate::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Morphling_Replicate::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = -1;
    *p = &off_43632B0;
  }
  return p;
}


// CDOTA_Ability_Morphling_Replicate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1115, @0x0000000002a1fc70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Morphling_Replicate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Morphling_Replicate::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Morphling_Replicate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1115, @0x0000000002a1fc90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Morphling_Replicate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Morphling_Replicate::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Morphling_Replicate::GetEntityClassInternal  (line 1115, @0x0000000002a38db0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "morphling_replicate", "CDOTA_Ability_Morphling_Replicate"
// globals: `guard variable for'CDOTA_Ability_Morphling_Replicate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_ReplicateClass, CDOTA_Ability_Morphling_Replicate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_ReplicateClass, __dso_handle, CDOTA_Ability_Morphling_Replicate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Morphling_Replicate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_ReplicateClassInfo, CDOTA_Ability_Morphling_Replicate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_ReplicateClassInfo
CEntityClass *__cdecl CDOTA_Ability_Morphling_Replicate::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Morphling_Replicate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_ReplicateClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Morphling_Replicate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_ReplicateClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Morphling_Replicate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_ReplicateClass);
    CDOTA_Ability_Morphling_Replicate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_ReplicateClass._vptr_CEntityClass = off_4363230;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Morphling_Replicate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_ReplicateClass);
    __cxa_atexit(
      CDOTA_Ability_Morphling_Replicate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Morphling_Replicate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_ReplicateClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Morphling_ReplicateClass != 0 )
    return &CDOTA_Ability_Morphling_Replicate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_ReplicateClass;
  if ( `guard variable for'CDOTA_Ability_Morphling_Replicate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_ReplicateClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Morphling_Replicate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_ReplicateClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Morphling_Replicate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_ReplicateClassInfo,
      "CDOTA_Ability_Morphling_Replicate",
      "morphling_replicate",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Morphling_Replicate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_ReplicateClassInfo);
  }
  CDOTA_Ability_Morphling_Replicate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_ReplicateClass.m_pClassInfo = &CDOTA_Ability_Morphling_Replicate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_ReplicateClassInfo;
  CDOTA_Ability_Morphling_Replicate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_ReplicateClass.m_pBaseClassInfo = CDOTA_Ability_Morphling_Replicate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_ReplicateClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Morphling_ReplicateClass = &CDOTA_Ability_Morphling_Replicate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_ReplicateClass;
  CDOTA_Ability_Morphling_Replicate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_ReplicateClassInfo.m_pClass = &CDOTA_Ability_Morphling_Replicate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_ReplicateClass;
  CDOTA_Ability_Morphling_Replicate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_ReplicateClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Morphling_ReplicateClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Morphling_Replicate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_ReplicateClass;
}


// CDOTA_Ability_Morphling_Replicate::GetAssociatedSecondaryAbilities  (line 1126, @0x0000000002a0aac0, libserver.so)
// strings: "morphling_morph_replicate"
const char *__fastcall CDOTA_Ability_Morphling_Replicate::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Morphling_Replicate *const this)
{
  return "morphling_morph_replicate";
}


// CDOTA_Ability_Morphling_Replicate::YouForgotToImplementOrDeclareServerClass  (line 1133, @0x00000000029b59d0, libserver.so)
int __fastcall CDOTA_Ability_Morphling_Replicate::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Morphling_Replicate *const this)
{
  return 0;
}


// CDOTA_Ability_Morphling_Replicate::GetServerClass  (line 1133, @0x00000000029c9f70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Morphling_Replicate::GetServerClass(
        CDOTA_Ability_Morphling_Replicate *const this)
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


// CDOTA_Ability_Morphling_Replicate::OnUpgrade  (line 1142, @0x00000000029b80f0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "morphling_morph_replicate"
void __fastcall CDOTA_Ability_Morphling_Replicate::OnUpgrade(CDOTA_Ability_Morphling_Replicate *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "morphling_morph_replicate", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value < this->m_iLevel.m_Value )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Morphling_Replicate::OnSpellStart  (line 1156, @0x00000000029f3030, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetTeamNumber, ToDOTABaseNPC, operator=
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Ability_Morphling_Replicate::CreateReplicate
void __fastcall CDOTA_Ability_Morphling_Replicate::OnSpellStart(CDOTA_Ability_Morphling_Replicate *const this)
{
  CDOTA_BaseNPC *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  unsigned __int8 m_Value; // r13
  float LevelSpecialValue; // xmm0_4
  EHANDLE hReplicate; // [rsp+0h] [rbp-30h] BYREF

  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && CursorTarget != CDOTABaseAbility::GetCaster(this) )
  {
    m_Value = v3->m_iTeamNum.m_Value;
    if ( m_Value == CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value
      || !CDOTA_BaseNPC::TriggerSpellAbsorb(v3, this, 1) )
    {
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
      CDOTA_Ability_Morphling_Replicate::CreateReplicate(&hReplicate, this, LevelSpecialValue, v3);
      if ( !this->m_bReflection )
        this->m_hImage = hReplicate;
    }
  }
}


// CDOTA_Ability_Morphling_Replicate::OnUnStolen  (line 1176, @0x00000000029c2850, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::OnUnStolen, CDOTA_BaseNPC::ForceKill
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Morphling_Replicate::OnUnStolen(CDOTA_Ability_Morphling_Replicate *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi

  CDOTABaseAbility::OnUnStolen(this);
  m_Index = this->m_hImage.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hImage.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hImage.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
          CDOTA_BaseNPC::ForceKill(m_pInstance, 0);
      }
    }
  }
}


// CDOTA_Ability_Morphling_Replicate::CreateReplicate  (line 1191, @0x00000000029f2b20, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetInstance, GetLevelSpecialValueFor<int>, GetPaddedCollisionRadius, GetPlayerID, GetTeamNumber, NetworkStateChanged, Purge, Set, SetPlayerID, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator=<int>, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, DOTA_CreateIllusions, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::AddNewModifier, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt (21 total)
// callers: CDOTA_Ability_Morphling_Replicate::OnSpellStart, CDOTA_Unit_Hero_Morphling::OnLoadState
// strings: "illusion_damage_out_pct", "illusion_damage_out_pct_scepter", "illusion_damage_in_pct", "special_bonus_unique_morphling_2", "morphling_replicate_illusions", "illusion_" (10 total)
// globals: INVALID_ITEM_DEF_INDEX
CDOTA_Ability_Morphling_Replicate *__fastcall CDOTA_Ability_Morphling_Replicate::CreateReplicate(
        CDOTA_Ability_Morphling_Replicate *const this,
        CDOTABaseAbility *pTarget,
        float fDuration,
        __int64 a4)
{
  int LevelSpecialValue; // r14d
  int v7; // r15d
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float v10; // xmm1_4
  CDOTA_BaseNPC *pCaster; // rax
  float v12; // xmm0_4
  CEntityInstance *v13; // rax
  CEntityInstance *v14; // r15
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v19; // rax
  CDOTA_ParticleManager *v20; // rax
  CDOTA_ParticleManager *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC_Hero *v23; // rdi
  char v25; // r14
  float nFXIndex; // [rsp+18h] [rbp-88h]
  CDOTA_BaseNPC *nFXIndexa; // [rsp+18h] [rbp-88h]
  int nSpoofPlayerID; // [rsp+24h] [rbp-7Ch]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hImageList; // [rsp+30h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v32; // [rsp+68h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(pTarget, "illusion_damage_out_pct", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<int>(pTarget, "illusion_damage_out_pct_scepter", -1, 0);
  v7 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(pTarget, "illusion_damage_in_pct", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(pTarget);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_morphling_2", 0);
  if ( AbilityByName != 0 )
  {
    if ( AbilityByName->m_iLevel.m_Value <= 0 )
      nFXIndex = 0.0;
    else
      nFXIndex = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  }
  else
  {
    nFXIndex = 0.0;
  }
  KeyValues::KeyValues(&kv, "morphling_replicate_illusions");
  KeyValues::SetFloat(&kv, "duration", v10);
  KeyValues::SetInt(&kv, "outgoing_damage", (LevelSpecialValue + nFXIndex));
  KeyValues::SetInt(&kv, "incoming_damage", v7);
  if ( (*(a4 + 2088) & 1) != 0 && (v25 = *(a4 + 383)) == CDOTABaseAbility::GetCaster(pTarget)->m_iTeamNum.m_Value )
  {
    nSpoofPlayerID = -1;
    if ( (*(a4 + 2088) & 1) != 0 )
      nSpoofPlayerID = *(a4 + 4800);
  }
  else
  {
    nSpoofPlayerID = -1;
  }
  hImageList.m_Size = 0;
  hImageList.m_Memory.m_pMemory = 0;
  hImageList.m_Memory.m_nAllocationCount = 0;
  hImageList.m_Memory.m_nGrowSize = 0;
  pCaster = CDOTABaseAbility::GetCaster(pTarget);
  v12 = *(a4 + 2308) + *(a4 + 2312);
  DOTA_CreateIllusions(a4, 1, (v12 + v12), 0, &kv, &hImageList, pCaster, "illusion_", 1);
  if ( hImageList.m_Size <= 0 )
  {
    LODWORD(this->_vptr_IHandleEntity) = -1;
  }
  else
  {
    v13 = CEntityHandle::operator CEntityInstance *(hImageList.m_Memory.m_pMemory);
    if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
      v14 = v13;
    else
      v14 = 0;
    v15 = CDOTABaseAbility::GetCaster(pTarget);
    CDOTA_BaseNPC::AddNewModifier(v14, v15, pTarget, "modifier_morph_replicate", &kv, 0);
    nFXIndexa = CDOTABaseAbility::GetCaster(pTarget);
    v16 = CDOTABaseAbility::GetCaster(pTarget);
    CDOTA_BaseNPC::AddNewModifier(v16, nFXIndexa, pTarget, "modifier_morphling_replicate_timer", &kv, 0);
    v17 = CDOTABaseAbility::GetCaster(pTarget);
    CDOTA_BaseNPC::AddNewModifier(v14, v17, pTarget, "modifier_morphling_replicate_timer", &kv, 0);
    ParticleManager = GetParticleManager();
    LODWORD(nFXIndexa) = CDOTA_ParticleManager::CreateParticle(
                           ParticleManager,
                           "particles/units/heroes/hero_morphling/morphling_replicate.vpcf",
                           1,
                           a4,
                           0,
                           0);
    v19 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v19, nFXIndexa, 0, a4, 1, 0, vec3_invalid, 1);
    v20 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v20, nFXIndexa, 1, v14, 1, 0, vec3_invalid, 1);
    v21 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v21, nFXIndexa);
    CDOTA_BaseNPC::UnitEmitSound(v14, "Hero_Morphling.Replicate", 0.0, 0, 0);
    if ( nSpoofPlayerID != -1
      && (v14[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
      && nSpoofPlayerID != LODWORD(v14[100]._vptr_IHandleEntity) )
    {
      (*(v14->_vptr_IHandleEntity + 22))(v14, 4800, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      LODWORD(v14[100]._vptr_IHandleEntity) = nSpoofPlayerID;
    }
    v22 = CDOTABaseAbility::GetCaster(pTarget);
    if ( v22 != 0 && (v22->m_iUnitType & 1) != 0 )
      v23 = v22;
    else
      v23 = 0;
    EconEntity_OnOwnerKillEaterEvent(
      v23,
      0,
      kill_eater_event_t::kKillEaterEventType_Morphling_HeroesReplicated,
      1,
      INVALID_ITEM_DEF_INDEX);
    LODWORD(this->_vptr_IHandleEntity) = hImageList.m_Memory.m_pMemory->m_Index;
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hImageList);
  if ( (hImageList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hImageList.m_Memory);
    if ( (hImageList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hImageList.m_Memory);
  }
  KeyValues::~KeyValues(&kv);
  return this;
}


// CDOTA_Ability_Morphling_Replicate::CastFilterResult  (line 1264, @0x00000000029c3260, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: CDOTABaseAbility::GetCaster, UnitFilter
int __fastcall CDOTA_Ability_Morphling_Replicate::CastFilterResult(
        CDOTA_Ability_Morphling_Replicate *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  int result; // eax
  unsigned __int16 v6; // dx
  int v7; // esi
  CEntityInstance *m_pInstance; // r13
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *v12; // rax
  uint32 v13; // ecx
  unsigned __int16 v14; // dx
  int v15; // esi
  __int16 v16; // ax
  uint32 v17; // edx
  CEntityInstance *v18; // rcx
  int v19; // eax
  CEntityIdentity *v20; // rdx
  CEntityIdentity *v21; // rdx
  __int16 v22; // [rsp+0h] [rbp-30h]

  Caster = CDOTABaseAbility::GetCaster(this);
  result = UnitFilter(pTarget, 3, 1, &stru_20010, Caster->m_iTeamNum.m_Value);
  if ( result == 0 )
  {
    if ( pTarget == CDOTABaseAbility::GetCaster(this) )
      return 23;
    if ( !pTarget->m_bIsIllusion.m_Value )
      return 0;
    if ( pTarget->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v6 = 0x7FFF;
      v7 = 0x7FFF;
    }
    else
    {
      v6 = pTarget->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v7 = v6;
    }
    m_pInstance = 0;
    v9 = (pTarget->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v6 & 0x7FFF;
    v22 = ((pTarget->m_hOwnerEntity.m_Value.m_Index >> 15) << 15) | v6 & 0x7FFF;
    if ( v9 + 2 > 1 )
    {
      v10 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9];
      if ( v10 != 0 )
      {
        v11 = &v10[v7 & 0x1FF];
        if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
          m_pInstance = v11->m_pInstance;
      }
    }
    v12 = CDOTABaseAbility::GetCaster(this);
    v13 = v12->m_hOwnerEntity.m_Value.m_Index >> 15;
    if ( v12->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v14 = 0x7FFF;
      v15 = 0x7FFF;
    }
    else
    {
      v14 = v12->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v15 = v14;
    }
    v16 = v14 | v22 & 0x8000;
    v17 = v13;
    v18 = 0;
    v19 = (v17 << 15) | v16 & 0x7FFF;
    if ( (v19 + 2) > 1 )
    {
      v20 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v15 >> 9];
      if ( v20 != 0 )
      {
        v21 = &v20[v15 & 0x1FF];
        if ( v21 != 0 && v19 == v21->m_EHandle.m_Index )
          v18 = v21->m_pInstance;
      }
    }
    if ( m_pInstance == v18 )
      return 23;
    else
      return 0;
  }
  return result;
}


// CDOTA_Ability_Morphling_Replicate::GetCustomCastError  (line 1281, @0x00000000029c1b20, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: CDOTABaseAbility::GetCaster
// strings: "#dota_hud_error_cant_cast_on_own_illusion", "#dota_hud_error_cant_cast_on_self"
const char *__fastcall CDOTA_Ability_Morphling_Replicate::GetCustomCastError(
        CDOTA_Ability_Morphling_Replicate *const this,
        CDOTA_BaseNPC *pTarget)
{
  const char *result; // rax
  unsigned __int16 v5; // dx
  int v6; // esi
  CEntityInstance *m_pInstance; // r13
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTA_BaseNPC *Caster; // rax
  uint32 v12; // ecx
  unsigned __int16 v13; // dx
  int v14; // esi
  __int16 v15; // ax
  uint32 v16; // edx
  CEntityInstance *v17; // rcx
  int v18; // eax
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  __int16 v21; // [rsp+0h] [rbp-30h]

  if ( CDOTABaseAbility::GetCaster(this) == pTarget )
    return "#dota_hud_error_cant_cast_on_self";
  if ( !pTarget->m_bIsIllusion.m_Value )
    return "";
  if ( pTarget->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v5 = 0x7FFF;
    v6 = 0x7FFF;
  }
  else
  {
    v5 = pTarget->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v6 = v5;
  }
  m_pInstance = 0;
  v8 = (pTarget->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v5 & 0x7FFF;
  v21 = ((pTarget->m_hOwnerEntity.m_Value.m_Index >> 15) << 15) | v5 & 0x7FFF;
  if ( v8 + 2 > 1 )
  {
    v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v6 >> 9];
    if ( v9 != 0 )
    {
      v10 = &v9[v6 & 0x1FF];
      if ( v10 != 0 && v8 == v10->m_EHandle.m_Index )
        m_pInstance = v10->m_pInstance;
    }
  }
  Caster = CDOTABaseAbility::GetCaster(this);
  v12 = Caster->m_hOwnerEntity.m_Value.m_Index >> 15;
  if ( Caster->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v13 = 0x7FFF;
    v14 = 0x7FFF;
  }
  else
  {
    v13 = Caster->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v14 = v13;
  }
  v15 = v13 | v21 & 0x8000;
  v16 = v12;
  v17 = 0;
  v18 = (v16 << 15) | v15 & 0x7FFF;
  if ( (v18 + 2) > 1 )
  {
    v19 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v14 >> 9];
    if ( v19 != 0 )
    {
      v20 = &v19[v14 & 0x1FF];
      if ( v20 != 0 && v18 == v20->m_EHandle.m_Index )
        v17 = v20->m_pInstance;
    }
  }
  result = "#dota_hud_error_cant_cast_on_own_illusion";
  if ( m_pInstance != v17 )
    return "";
  return result;
}


// CDOTA_Modifier_Morphling_Replicate_Timer::~CDOTA_Modifier_Morphling_Replicate_Timer  (line 1294, @0x0000000002a115b0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Morphling_Replicate_Timer::~CDOTA_Modifier_Morphling_Replicate_Timer(
        CDOTA_Modifier_Morphling_Replicate_Timer *const this)
{
  this->_vptr_CDOTA_Buff = &off_4363D70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Morphling_Replicate_Timer::~CDOTA_Modifier_Morphling_Replicate_Timer  (line 1294, @0x0000000002a115d0, libserver.so)  // inlines: ~CDOTA_Modifier_Morphling_Replicate_Timer
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Morphling_Replicate_Timer::~CDOTA_Modifier_Morphling_Replicate_Timer(
        CDOTA_Modifier_Morphling_Replicate_Timer *const this)
{
  this->_vptr_CDOTA_Buff = &off_4363D70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Morphling_Replicate_Timer::IsPurgable  (line 1302, @0x0000000002a0aad0, libserver.so)
bool __fastcall CDOTA_Modifier_Morphling_Replicate_Timer::IsPurgable(
        CDOTA_Modifier_Morphling_Replicate_Timer *const this)
{
  return 0;
}


// CDOTA_Modifier_Morphling_Replicate_Timer::OnCreated  (line 1315, @0x00000000029b6bc0, libserver.so)  // inlines: DOTAGameRules, GetGameTime
// calls: KeyValues::GetFloat, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Morphling_Replicate_Timer::OnCreated(
        CDOTA_Modifier_Morphling_Replicate_Timer *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4
  float v4; // xmm1_4
  float v5; // xmm0_4

  this->duration = KeyValues::GetFloat(pKV, "duration", v2);
  CDOTA_Buff::StartIntervalThink(this, 1.0, v4);
  v5 = 0.0;
  if ( g_pGameRules != 0 )
    v5 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_fStartTime = v5;
}


// CDOTA_Modifier_Morphling_Replicate_Timer::OnIntervalThink  (line 1322, @0x00000000029c1010, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, DOTAGameRules, GetGameTime, GetTeamNumber, Vector, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CDOTA_Buff::GetParent, CDOTA_BaseNPC::GetOpposingTeamNumber, GetGlobalTeam, CRecipientFilter::RemoveRecipientsByTeam, CRecipientFilter::AddRecipient, CRecipientFilter::AddRecipientsByTeam, GetParticleManager, CDOTA_ParticleManager::CreateParticle, floorf (17 total)
// strings: "particles/units/heroes/hero_morphling/morphling_replicate_overhead_timer.vpcf"
void __fastcall CDOTA_Modifier_Morphling_Replicate_Timer::OnIntervalThink(
        CDOTA_Modifier_Morphling_Replicate_Timer *const this)
{
  float v1; // xmm0_4
  __m128i duration_low; // xmm1
  float v4; // r14d
  CDOTA_BaseNPC *Parent; // rax
  int OpposingTeamNumber; // eax
  CTeam *GlobalTeam; // rax
  CDOTA_BaseNPC *v8; // rax
  CTeam *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  const CEntityInstance *v11; // rax
  CTeam *v12; // rax
  CDOTA_BaseNPC *v13; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v15; // rax
  CDOTA_ParticleManager *v16; // rax
  CDOTA_ParticleManager *v17; // rax
  double v18; // [rsp-18h] [rbp-178h]
  __int64 (__fastcall **v19)(CRecipientFilter *__hidden); // [rsp-8h] [rbp-168h] BYREF
  CReliableBroadcastRecipientFilter filter; // [rsp+0h] [rbp-160h]

  v1 = 0.0;
  *&filter.m_bUsingPredictionRules = __readfsqword(0x28u);
  duration_low = LODWORD(this->duration);
  if ( g_pGameRules != 0 )
    v1 = *&g_pGameRules[18].m_szQuestName[20];
  *duration_low.m128i_i32 = *duration_low.m128i_i32 - (v1 - this->m_fStartTime);
  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(duration_low));
  CRecipientFilter::CRecipientFilter(&v19);
  v19 = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&v19);
  v19 = &off_3FCB130;
  CRecipientFilter::MakeReliable(&v19);
  Parent = CDOTA_Buff::GetParent(this);
  OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(Parent);
  GlobalTeam = GetGlobalTeam(OpposingTeamNumber);
  CRecipientFilter::RemoveRecipientsByTeam(&v19, GlobalTeam);
  v8 = CDOTA_Buff::GetParent(this);
  v9 = GetGlobalTeam(v8->m_iTeamNum.m_Value);
  CRecipientFilter::RemoveRecipientsByTeam(&v19, v9);
  v10 = CDOTA_Buff::GetParent(this);
  v11 = (*(v10->_vptr_IHandleEntity + 413))(v10);
  CRecipientFilter::AddRecipient(&v19, v11);
  v12 = GetGlobalTeam(1);
  CRecipientFilter::AddRecipientsByTeam(&v19, v12);
  v13 = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  LODWORD(v13) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_morphling/morphling_replicate_overhead_timer.vpcf",
                   7,
                   v13,
                   &v19,
                   0);
  LODWORD(v18) = 0;
  HIDWORD(v18) = floorf(v4);
  v15 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v15, v13, 1, v18, 0.0);
  v16 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v16, v13, 2, COERCE_DOUBLE(0x40000000), 0.0);
  v17 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v17, v13);
  v19 = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&v19);
}


// CDOTA_Modifier_Morphling_Replicate::~CDOTA_Modifier_Morphling_Replicate  (line 1348, @0x0000000002a11560, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Morphling_Replicate::~CDOTA_Modifier_Morphling_Replicate(
        CDOTA_Modifier_Morphling_Replicate *const this)
{
  this->_vptr_CDOTA_Buff = &off_4364090;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Morphling_Replicate::~CDOTA_Modifier_Morphling_Replicate  (line 1348, @0x0000000002a11580, libserver.so)  // inlines: ~CDOTA_Modifier_Morphling_Replicate
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Morphling_Replicate::~CDOTA_Modifier_Morphling_Replicate(
        CDOTA_Modifier_Morphling_Replicate *const this)
{
  this->_vptr_CDOTA_Buff = &off_4364090;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Morphling_Replicate::IsHidden  (line 1353, @0x0000000002a0aae0, libserver.so)
bool __fastcall CDOTA_Modifier_Morphling_Replicate::IsHidden(CDOTA_Modifier_Morphling_Replicate *const this)
{
  return 1;
}


// CDOTA_Modifier_Morphling_Replicate::IsPurgable  (line 1354, @0x0000000002a0aaf0, libserver.so)
bool __fastcall CDOTA_Modifier_Morphling_Replicate::IsPurgable(CDOTA_Modifier_Morphling_Replicate *const this)
{
  return 0;
}


// CDOTA_Modifier_Morphling_Replicate::OnCreated  (line 1369, @0x00000000029b6770, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::SwapAbilities
// strings: "morphling_morph_replicate", "morphling_replicate"
void __fastcall CDOTA_Modifier_Morphling_Replicate::OnCreated(
        CDOTA_Modifier_Morphling_Replicate *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::SwapAbilities(Caster, "morphling_replicate", "morphling_morph_replicate", 0, 1);
}


// CDOTA_Modifier_Morphling_Replicate::OnDestroy  (line 1378, @0x00000000029b76c0, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::SwapAbilities, CDOTA_BaseNPC::RemoveModifierByName
// strings: "morphling_replicate", "morphling_morph_replicate", "modifier_morphling_replicate_timer"
void __fastcall CDOTA_Modifier_Morphling_Replicate::OnDestroy(CDOTA_Modifier_Morphling_Replicate *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::SwapAbilities(Caster, "morphling_replicate", "morphling_morph_replicate", 1, 0);
  v3 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v3, "modifier_morphling_replicate_timer");
}


// CDOTA_Modifier_Morphling_Replicate::DeclareFunctions  (line 1388, @0x00000000029b59e0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Morphling_Replicate::OnDeath(CModifierParams const&)
void __fastcall CDOTA_Modifier_Morphling_Replicate::DeclareFunctions(CDOTA_Modifier_Morphling_Replicate *const this)
{
  this->m_Functions[138].__pfn = CDOTA_Modifier_Morphling_Replicate::OnDeath;
  this->m_Functions[138].__delta = 0;
}


// CDOTA_Modifier_Morphling_Replicate::OnDeath  (line 1395, @0x00000000029c2b30, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CDOTA_BaseNPC::Kill
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Morphling_Replicate::OnDeath(
        CDOTA_Modifier_Morphling_Replicate *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *Parent; // rax

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
  if ( v4->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    if ( Caster == m_pInstance && (*(Caster->_vptr_IHandleEntity + 438))(Caster) == 0 )
    {
      Parent = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::Kill(Parent, 0, 0, 0.0, 0);
    }
  }
  return 1uLL;
}


// CDOTA_Ability_Morphling_MorphReplicate::~CDOTA_Ability_Morphling_MorphReplicate  (line 1414, @0x0000000002a178a0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Morphling_MorphReplicate::~CDOTA_Ability_Morphling_MorphReplicate(
        CDOTA_Ability_Morphling_MorphReplicate *const this)
{
  this->_vptr_IHandleEntity = &off_43643F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Morphling_MorphReplicate::~CDOTA_Ability_Morphling_MorphReplicate  (line 1414, @0x0000000002a178c0, libserver.so)  // inlines: ~CDOTA_Ability_Morphling_MorphReplicate
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Morphling_MorphReplicate::~CDOTA_Ability_Morphling_MorphReplicate(
        CDOTA_Ability_Morphling_MorphReplicate *const this)
{
  this->_vptr_IHandleEntity = &off_43643F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Morphling_MorphReplicate::Schema_DynamicBinding  (line 1416, @0x0000000002a0ab00, libserver.so)
// globals: CDOTA_Ability_Morphling_MorphReplicate::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Morphling_MorphReplicate::Schema_DynamicBinding(
        const CDOTA_Ability_Morphling_MorphReplicate *const this)
{
  return CDOTA_Ability_Morphling_MorphReplicate::s_pSchemaBinding;
}


// CDOTA_Ability_Morphling_MorphReplicate::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1416, @0x0000000002a0ab10, libserver.so)
// globals: CDOTA_Ability_Morphling_MorphReplicate::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Morphling_MorphReplicate::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Morphling_MorphReplicate::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Morphling_MorphReplicate::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Morphling_MorphReplicate::CEntityInstanceEntityClass::DestructInstance  (line 1416, @0x0000000002a0ab20, libserver.so)  // inlines: Destruct<CDOTA_Ability_Morphling_MorphReplicate>
void __fastcall CDOTA_Ability_Morphling_MorphReplicate::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Morphling_MorphReplicate::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Morphling_MorphReplicate::CEntityInstanceEntityClass::FreeInstance  (line 1416, @0x0000000002a0ab40, libserver.so)
void __fastcall CDOTA_Ability_Morphling_MorphReplicate::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Morphling_MorphReplicate::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Morphling_MorphReplicate::CEntityInstanceEntityClass::CanAllocate  (line 1416, @0x0000000002a0ab60, libserver.so)
bool __fastcall CDOTA_Ability_Morphling_MorphReplicate::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Morphling_MorphReplicate::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Morphling_MorphReplicate::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1416, @0x0000000002a0ab70, libserver.so)
// globals: CDOTA_Ability_Morphling_MorphReplicate::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Morphling_MorphReplicate::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Morphling_MorphReplicate::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Morphling_MorphReplicate::s_pSchemaBinding;
}


// CDOTA_Ability_Morphling_MorphReplicate::CEntityInstanceEntityClass::AllocateInstance  (line 1416, @0x0000000002a0ff40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Morphling_MorphReplicate::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Morphling_MorphReplicate::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Morphling_MorphReplicate::CEntityInstanceEntityClass::ConstructInstance  (line 1416, @0x0000000002a145a0, libserver.so)  // inlines: CDOTA_Ability_Morphling_MorphReplicate, Construct<CDOTA_Ability_Morphling_MorphReplicate>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Morphling_MorphReplicate::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Morphling_MorphReplicate::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43643F0;
  }
  return p;
}


// CDOTA_Ability_Morphling_MorphReplicate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1416, @0x0000000002a1fcc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Morphling_MorphReplicate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Morphling_MorphReplicate::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Morphling_MorphReplicate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1416, @0x0000000002a1fce0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Morphling_MorphReplicate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Morphling_MorphReplicate::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Morphling_MorphReplicate::GetEntityClassInternal  (line 1416, @0x0000000002a38f00, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "morphling_morph_replicate", "CDOTA_Ability_Morphling_MorphReplicate"
// globals: `guard variable for'CDOTA_Ability_Morphling_MorphReplicate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_MorphReplicateClass, CDOTA_Ability_Morphling_MorphReplicate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_MorphReplicateClass, __dso_handle, CDOTA_Ability_Morphling_MorphReplicate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Morphling_MorphReplicate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_MorphReplicateClassInfo, CDOTA_Ability_Morphling_MorphReplicate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_MorphReplicateClassInfo
CEntityClass *__cdecl CDOTA_Ability_Morphling_MorphReplicate::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Morphling_MorphReplicate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_MorphReplicateClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Morphling_MorphReplicate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_MorphReplicateClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Morphling_MorphReplicate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_MorphReplicateClass);
    CDOTA_Ability_Morphling_MorphReplicate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_MorphReplicateClass._vptr_CEntityClass = off_4364370;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Morphling_MorphReplicate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_MorphReplicateClass);
    __cxa_atexit(
      CDOTA_Ability_Morphling_MorphReplicate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Morphling_MorphReplicate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_MorphReplicateClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Morphling_MorphReplicateClass != 0 )
    return &CDOTA_Ability_Morphling_MorphReplicate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_MorphReplicateClass;
  if ( `guard variable for'CDOTA_Ability_Morphling_MorphReplicate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_MorphReplicateClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Morphling_MorphReplicate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_MorphReplicateClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Morphling_MorphReplicate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_MorphReplicateClassInfo,
      "CDOTA_Ability_Morphling_MorphReplicate",
      "morphling_morph_replicate",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Morphling_MorphReplicate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_MorphReplicateClassInfo);
  }
  CDOTA_Ability_Morphling_MorphReplicate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_MorphReplicateClass.m_pClassInfo = &CDOTA_Ability_Morphling_MorphReplicate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_MorphReplicateClassInfo;
  CDOTA_Ability_Morphling_MorphReplicate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_MorphReplicateClass.m_pBaseClassInfo = CDOTA_Ability_Morphling_MorphReplicate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_MorphReplicateClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Morphling_MorphReplicateClass = &CDOTA_Ability_Morphling_MorphReplicate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_MorphReplicateClass;
  CDOTA_Ability_Morphling_MorphReplicate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_MorphReplicateClassInfo.m_pClass = &CDOTA_Ability_Morphling_MorphReplicate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_MorphReplicateClass;
  CDOTA_Ability_Morphling_MorphReplicate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_MorphReplicateClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Morphling_MorphReplicateClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Morphling_MorphReplicate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_MorphReplicateClass;
}


// CDOTA_Ability_Morphling_MorphReplicate::GetAssociatedPrimaryAbilities  (line 1422, @0x0000000002a0ab80, libserver.so)
// strings: "morphling_replicate"
const char *__fastcall CDOTA_Ability_Morphling_MorphReplicate::GetAssociatedPrimaryAbilities(
        CDOTA_Ability_Morphling_MorphReplicate *const this)
{
  return "morphling_replicate";
}


// CDOTA_Ability_Morphling_MorphReplicate::IsHiddenWhenStolen  (line 1423, @0x0000000002a0ab90, libserver.so)
bool __fastcall CDOTA_Ability_Morphling_MorphReplicate::IsHiddenWhenStolen(
        CDOTA_Ability_Morphling_MorphReplicate *const this)
{
  return 1;
}


// CDOTA_Ability_Morphling_MorphReplicate::OnUpgrade  (line 1431, @0x00000000029b8140, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "morphling_replicate"
void __fastcall CDOTA_Ability_Morphling_MorphReplicate::OnUpgrade(CDOTA_Ability_Morphling_MorphReplicate *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "morphling_replicate", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value < this->m_iLevel.m_Value )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Morphling_MorphReplicate::OnSpellStart  (line 1445, @0x00000000029c7580, libserver.so)  // inlines: AddObstructionProperty, CEntityHandle, CHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, StopFacing, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::UnitEmitSound, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, FindClearSpaceForUnit, CDOTA_ProjectileManager::ProjectileDodge, CBaseEntity::GetAbsAngles, CBaseEntity::SetAbsAngles (15 total)
// strings: "morphling_replicate", "Hero_Morphling.ReplicateEnd", "particles/units/heroes/hero_morphling/morphling_replicate_finish.vpcf", "modifier_morphling_replicate_timer", "modifier_morph_replicate"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_Morphling_MorphReplicate::OnSpellStart(
        CDOTA_Ability_Morphling_MorphReplicate *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int vptr_IHandleEntity; // edx
  unsigned __int16 v5; // cx
  CEntityIdentity *v6; // rax
  CEntityIdentity *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *v10; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v12; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_ParticleManager *v14; // rax
  const Vector *v15; // r14
  CDOTA_ParticleManager *v16; // rax
  CDOTA_ParticleManager *v17; // rax
  ObstructionRecord_t *m_pObstructionRecord; // rdx
  int v19; // eax
  Vector *v20; // r13
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v24; // cx
  const QAngle *AbsAngles; // r13
  CDOTA_BaseNPC *v26; // rax
  CDOTA_BaseNPC *v27; // rax
  CDOTA_BaseNPC *v28; // rax
  CDOTA_BaseNPC *v29; // rax
  CDOTA_BaseNPC_Hero *v30; // rdi
  EHANDLE hTarget; // [rsp+0h] [rbp-30h] BYREF

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "morphling_replicate", 0);
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
          if ( v7->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
          {
            v10 = CDOTABaseAbility::GetCaster(this);
            ParticleManager = GetParticleManager();
            LODWORD(v10) = CDOTA_ParticleManager::CreateParticle(
                             ParticleManager,
                             "particles/units/heroes/hero_morphling/morphling_replicate_finish.vpcf",
                             2,
                             v10,
                             0,
                             0);
            v12 = CDOTABaseAbility::GetCaster(this);
            AbsOrigin = CBaseEntity::GetAbsOrigin(v12);
            v14 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControl(v14, v10, 0, *&AbsOrigin->x, AbsOrigin->z);
            v15 = CBaseEntity::GetAbsOrigin(m_pInstance);
            v16 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControl(v16, v10, 1, *&v15->x, v15->z);
            v17 = GetParticleManager();
            CDOTA_ParticleManager::ReleaseParticleIndex(v17, v10);
            m_pObstructionRecord = m_pInstance->m_pObstructionRecord;
            v19 = m_pInstance->m_nObstructionProperties | 4;
            m_pInstance->m_nObstructionProperties = v19;
            if ( m_pObstructionRecord != 0 )
              m_pObstructionRecord->m_ObjectProperties = v19;
            v20 = CBaseEntity::GetAbsOrigin(m_pInstance);
            v21 = CDOTABaseAbility::GetCaster(this);
            FindClearSpaceForUnit(v21, *v20, 1);
            v22 = CDOTABaseAbility::GetCaster(this);
            hTarget.m_Index = -1;
            if ( v22 != 0 )
            {
              m_pEntity = v22->m_pEntity;
              if ( m_pEntity != 0 )
              {
                v24 = 0x7FFF;
                if ( m_pEntity->m_EHandle.m_Index != -1 )
                  v24 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                hTarget.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                | v24 & 0x7FFF;
              }
            }
            CDOTA_ProjectileManager::ProjectileDodge(&g_DOTAProjectileManager, &hTarget, 0);
            AbsAngles = CBaseEntity::GetAbsAngles(m_pInstance);
            v26 = CDOTABaseAbility::GetCaster(this);
            CBaseEntity::SetAbsAngles(v26, AbsAngles);
            v27 = CDOTABaseAbility::GetCaster(this);
            *((*(v27->_vptr_IHandleEntity + 376))(v27) + 176) = 0;
            v28 = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::RemoveModifierByName(v28, "modifier_morphling_replicate_timer");
            CDOTA_BaseNPC::RemoveModifierByName(m_pInstance, "modifier_morph_replicate");
            CDOTA_BaseNPC::ForceKill(m_pInstance, 0);
            v29 = CDOTABaseAbility::GetCaster(this);
            if ( v29 != 0 && (v29->m_iUnitType & 1) != 0 )
              v30 = v29;
            else
              v30 = 0;
            EconEntity_OnOwnerKillEaterEvent(
              v30,
              0,
              kill_eater_event_t::kKillEaterEventType_Morphling_MorphReplicates,
              1,
              INVALID_ITEM_DEF_INDEX);
          }
        }
      }
    }
    v8 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v8, "Hero_Morphling.ReplicateEnd", 0.0, 0, 0);
  }
}


// CDOTA_Unit_Hero_Morphling::OnSaveState  (line 1482, @0x00000000029c73a0, libserver.so)  // inlines: DOTAGameRules, FindModifierByName, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetUnitName, IndexToIdentity, IsValid, LookupEntity, SetBool, String, ToCStr, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC_Hero::OnSaveState, CDOTA_BaseNPC::FindAbilityByName, KeyValues::SetInt, KeyValues::SetString, CBaseEntity::GetAbsOrigin, KeyValues::SetFloat, CBaseEntity::GetHealth, ModifierFactoryDictionary, CModifieractoryDictionary::FindFactory, CDOTA_ModifierManager::FindModifierByName
// strings: "morphling_replicate", "replicate_active", "replicate_hero", "replicate_x", "replicate_y", "replicate_z" (10 total)
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Unit_Hero_Morphling::OnSaveState(CDOTA_Unit_Hero_Morphling *const this, KeyValues *pKV)
{
  CDOTABaseAbility *AbilityByName; // rax
  int vptr_IHandleEntity; // edx
  unsigned __int16 v6; // cx
  CEntityIdentity *v7; // rax
  CEntityIdentity *v8; // rax
  CEntityInstance *m_pInstance; // r12
  const char *m_pAsString; // rdx
  float v12; // xmm1_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  int Health; // eax
  CModifieractoryDictionary *v16; // rax
  IModifierFactory *Factory; // rax
  CDOTA_Buff *ModifierByName; // rax
  float v19; // xmm1_4

  CDOTA_BaseNPC_Hero::OnSaveState(this, pKV);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "morphling_replicate", 0);
  if ( AbilityByName == 0 )
    return 1;
  vptr_IHandleEntity = AbilityByName[1]._vptr_IHandleEntity;
  if ( (vptr_IHandleEntity + 2) <= 1 )
    return 1;
  v6 = AbilityByName[1]._vptr_IHandleEntity;
  v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v6 >> 9) & 0x3F];
  if ( v7 == 0 )
    return 1;
  v8 = &v7[v6 & 0x1FF];
  if ( v8 == 0 )
    return 1;
  if ( vptr_IHandleEntity != v8->m_EHandle.m_Index )
    return 1;
  m_pInstance = v8->m_pInstance;
  if ( v8->m_pInstance == 0 || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    return 1;
  KeyValues::SetInt(pKV, "replicate_active", 1);
  m_pAsString = "";
  if ( m_pInstance[70].m_iszPrivateVScripts.u.m_Id != 0 )
    m_pAsString = m_pInstance[70].m_iszPrivateVScripts.u.m_pAsString;
  KeyValues::SetString(pKV, "replicate_hero", m_pAsString);
  CBaseEntity::GetAbsOrigin(m_pInstance);
  KeyValues::SetFloat(pKV, "replicate_x", v12);
  CBaseEntity::GetAbsOrigin(m_pInstance);
  KeyValues::SetFloat(pKV, "replicate_y", v13);
  CBaseEntity::GetAbsOrigin(m_pInstance);
  KeyValues::SetFloat(pKV, "replicate_z", v14);
  Health = CBaseEntity::GetHealth(m_pInstance);
  KeyValues::SetInt(pKV, "replicate_health", Health);
  KeyValues::SetInt(pKV, "replicate_mana", *&m_pInstance[44].m_iszPrivateVScripts.u.m_Id);
  v16 = ModifierFactoryDictionary();
  Factory = CModifieractoryDictionary::FindFactory(v16, "modifier_morph_replicate");
  ModifierByName = CDOTA_ModifierManager::FindModifierByName(
                     &m_pInstance[64].m_worldGroupId,
                     Factory,
                     "modifier_morph_replicate",
                     0);
  if ( ModifierByName == 0 )
    return 1;
  (*(ModifierByName->_vptr_CDOTA_Buff + 30))(ModifierByName);
  v19 = 0.0;
  if ( g_pGameRules != 0 )
    v19 = *&g_pGameRules[18].m_szQuestName[20];
  KeyValues::SetFloat(pKV, "replicate_duration", v19);
  return 1;
}


// CDOTA_Unit_Hero_Morphling::OnLoadState  (line 1516, @0x00000000029f30e0, libserver.so)  // inlines: FStrEq, Get, GetBool, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHero, GetInstance, GetSerialNumber, GetUnitName, IndexToIdentity, IsValid, LookupEntity, Set, String, ToCStr, ToDOTABaseNPC, ToDOTABaseNPCHero, Vector, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[]
// calls: CDOTA_BaseNPC_Hero::OnLoadState, KeyValues::GetInt, KeyValues::GetString, strcmp, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, KeyValues::GetFloat, CDOTA_Ability_Morphling_Replicate::CreateReplicate, FindClearSpaceForUnit, CDOTA_BaseNPC::ModifyHealth, CDOTA_BaseNPC::SetMana
// strings: "replicate_active", "replicate_hero", "morphling_replicate", "replicate_duration", "replicate_z", "replicate_y" (9 total)
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Unit_Hero_Morphling::OnLoadState(CDOTA_Unit_Hero_Morphling *const this, KeyValues *pKV)
{
  CConcreteEntityList *v3; // r15
  __int64 v4; // rbx
  int v5; // r12d
  CHandle<CDOTA_BaseNPC_Hero> *v6; // rdx
  uint32 m_Index; // eax
  __int16 v8; // si
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *m_pInstance; // rax
  const char *String; // rax
  CHandle<CDOTA_BaseNPC_Hero> *v14; // r14
  CEntityIdentity *v15; // rsi
  CEntityIdentity *v16; // rsi
  CEntityInstance *v17; // rdx
  const char *m_pAsString; // rdx
  const char *v19; // rdi
  CEntityInstance *v20; // rax
  __int64 v21; // rbx
  CDOTABaseAbility *AbilityByName; // r12
  float v23; // xmm1_4
  float Float; // xmm0_4
  CEntityInstance *v25; // rax
  float v26; // xmm1_4
  CDOTA_BaseNPC *v27; // rbx
  CEntityIdentity *m_pEntity; // rdx
  int v29; // eax
  __int16 v30; // cx
  KeyValues *v31; // r15
  float v32; // xmm1_4
  __m128i v33; // xmm0
  int v34; // r12d
  float v35; // xmm1_4
  unsigned int v36; // xmm0_4
  int Int; // eax
  int v38; // eax
  float v39; // xmm1_4
  vec_t pKVb; // [rsp+8h] [rbp-48h]
  CEntityHandle vPos[2]; // [rsp+10h] [rbp-40h] BYREF
  vec_t v44; // [rsp+18h] [rbp-38h]
  Vector v45; // 0:xmm0_8.8,8:xmm1_4.4

  CDOTA_BaseNPC_Hero::OnLoadState(this, pKV);
  if ( KeyValues::GetInt(pKV, "replicate_active", 0) != 0 && g_HeroList.m_hHeroList.m_Size > 0 )
  {
    v3 = CEntityHandle::gm_pEntityList;
    v4 = 0;
    v5 = 0;
    while ( 1 )
    {
      v6 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v4];
      m_Index = v6->m_Index;
      if ( v6->m_Index + 2 <= 1
        || (v8 = v6->m_Index, (v9 = v3->m_pIdentityChunks[(LOWORD(v6->m_Index) >> 9) & 0x3F]) == 0)
        || (v10 = &v9[v8 & 0x1FF]) == 0
        || m_Index != v10->m_EHandle.m_Index
        || (m_pInstance = v10->m_pInstance, v10->m_pInstance == 0)
        || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
      {
        m_pInstance = 0;
      }
      if ( LOBYTE(m_pInstance[71].m_pEntity) == 0 )
      {
        String = KeyValues::GetString(pKV, "replicate_hero", "", 0, 0);
        v14 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v4];
        v3 = CEntityHandle::gm_pEntityList;
        if ( v14->m_Index + 2 <= 1
          || (v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v14->m_Index) >> 9) & 0x3F]) == 0
          || (v16 = &v15[v14->m_Index & 0x1FF]) == 0
          || v14->m_Index != v16->m_EHandle.m_Index
          || (v17 = v16->m_pInstance, v16->m_pInstance == 0)
          || (v17[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
        {
          v17 = 0;
        }
        m_pAsString = v17[70].m_iszPrivateVScripts.u.m_pAsString;
        v19 = "";
        if ( m_pAsString != 0 )
          v19 = m_pAsString;
        if ( String == v19 || strcmp(v19, String) == 0 )
          break;
      }
      ++v5;
      ++v4;
      if ( v5 >= g_HeroList.m_hHeroList.m_Size )
        return 1;
    }
    v20 = CEntityHandle::operator CEntityInstance *(v14);
    v21 = v20;
    if ( v20 != 0 && (v20[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
    {
      AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "morphling_replicate", 0);
      if ( AbilityByName != 0 )
      {
        Float = KeyValues::GetFloat(pKV, "replicate_duration", v23);
        CDOTA_Ability_Morphling_Replicate::CreateReplicate(vPos, AbilityByName, Float, v21);
        v25 = CEntityHandle::operator CEntityInstance *(vPos);
        v27 = v25;
        if ( v25 != 0 && BYTE3(v25[7]._vptr_IHandleEntity) != 0 )
        {
          m_pEntity = v25->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v29 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            v30 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v30 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LOWORD(AbilityByName[1]._vptr_IHandleEntity) = v30 | AbilityByName[1]._vptr_IHandleEntity & 0x8000;
            LODWORD(AbilityByName[1]._vptr_IHandleEntity) = (v29 << 15) | AbilityByName[1]._vptr_IHandleEntity & 0x7FFF;
          }
          else
          {
            LODWORD(AbilityByName[1]._vptr_IHandleEntity) = -1;
          }
          v31 = pKV;
          pKVb = KeyValues::GetFloat(pKV, "replicate_z", v26);
          *v33.m128i_i32 = KeyValues::GetFloat(v31, "replicate_y", v32);
          v34 = _mm_cvtsi128_si32(v33);
          *&v36 = KeyValues::GetFloat(v31, "replicate_x", v35);
          v45.z = pKVb;
          *&vPos[0].m_Index = __PAIR64__(v34, v36);
          *&v45.x = __PAIR64__(v34, v36);
          v44 = pKVb;
          FindClearSpaceForUnit(v27, v45, 1);
          Int = KeyValues::GetInt(v31, "replicate_health", 0);
          CDOTA_BaseNPC::ModifyHealth(v27, Int, 0, 0, 0);
          v38 = KeyValues::GetInt(v31, "replicate_mana", 0);
          CDOTA_BaseNPC::SetMana(v27, v38, v39);
        }
        else
        {
          LODWORD(AbilityByName[1]._vptr_IHandleEntity) = -1;
        }
      }
    }
  }
  return 1;
}


// CDOTA_Ability_Morphling_Hybrid::~CDOTA_Ability_Morphling_Hybrid  (line 1562, @0x0000000002a178f0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Morphling_Hybrid::~CDOTA_Ability_Morphling_Hybrid(
        CDOTA_Ability_Morphling_Hybrid *const this)
{
  this->_vptr_IHandleEntity = &off_4364EF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Morphling_Hybrid::~CDOTA_Ability_Morphling_Hybrid  (line 1562, @0x0000000002a17910, libserver.so)  // inlines: ~CDOTA_Ability_Morphling_Hybrid
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Morphling_Hybrid::~CDOTA_Ability_Morphling_Hybrid(
        CDOTA_Ability_Morphling_Hybrid *const this)
{
  this->_vptr_IHandleEntity = &off_4364EF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Morphling_Hybrid::Schema_DynamicBinding  (line 1564, @0x0000000002a0aba0, libserver.so)
// globals: CDOTA_Ability_Morphling_Hybrid::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Morphling_Hybrid::Schema_DynamicBinding(
        const CDOTA_Ability_Morphling_Hybrid *const this)
{
  return CDOTA_Ability_Morphling_Hybrid::s_pSchemaBinding;
}


// CDOTA_Ability_Morphling_Hybrid::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1564, @0x0000000002a0abb0, libserver.so)
// globals: CDOTA_Ability_Morphling_Hybrid::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Morphling_Hybrid::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Morphling_Hybrid::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Morphling_Hybrid::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Morphling_Hybrid::CEntityInstanceEntityClass::DestructInstance  (line 1564, @0x0000000002a0abc0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Morphling_Hybrid>
void __fastcall CDOTA_Ability_Morphling_Hybrid::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Morphling_Hybrid::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Morphling_Hybrid::CEntityInstanceEntityClass::FreeInstance  (line 1564, @0x0000000002a0abe0, libserver.so)
void __fastcall CDOTA_Ability_Morphling_Hybrid::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Morphling_Hybrid::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Morphling_Hybrid::CEntityInstanceEntityClass::CanAllocate  (line 1564, @0x0000000002a0ac00, libserver.so)
bool __fastcall CDOTA_Ability_Morphling_Hybrid::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Morphling_Hybrid::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Morphling_Hybrid::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1564, @0x0000000002a0ac10, libserver.so)
// globals: CDOTA_Ability_Morphling_Hybrid::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Morphling_Hybrid::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Morphling_Hybrid::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Morphling_Hybrid::s_pSchemaBinding;
}


// CDOTA_Ability_Morphling_Hybrid::CEntityInstanceEntityClass::AllocateInstance  (line 1564, @0x0000000002a0ff80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Morphling_Hybrid::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Morphling_Hybrid::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Morphling_Hybrid::CEntityInstanceEntityClass::ConstructInstance  (line 1564, @0x0000000002a1df40, libserver.so)  // inlines: CDOTA_Ability_Morphling_Hybrid, CEntityHandle, CHandle, CNetworkVarBase, Construct<CDOTA_Ability_Morphling_Hybrid>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Morphling_Hybrid::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Morphling_Hybrid::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = -1;
    *p = &off_4364EF0;
  }
  return p;
}


// CDOTA_Ability_Morphling_Hybrid::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1564, @0x0000000002a1fd10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Morphling_Hybrid::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Morphling_Hybrid::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Morphling_Hybrid::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1564, @0x0000000002a1fd30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Morphling_Hybrid::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Morphling_Hybrid::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Morphling_Hybrid::GetEntityClassInternal  (line 1564, @0x0000000002a39050, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "morphling_hybrid", "CDOTA_Ability_Morphling_Hybrid"
// globals: `guard variable for'CDOTA_Ability_Morphling_Hybrid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_HybridClass, CDOTA_Ability_Morphling_Hybrid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_HybridClass, __dso_handle, CDOTA_Ability_Morphling_Hybrid::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Morphling_Hybrid::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_HybridClassInfo, CDOTA_Ability_Morphling_Hybrid::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_HybridClassInfo
CEntityClass *__cdecl CDOTA_Ability_Morphling_Hybrid::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Morphling_Hybrid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_HybridClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Morphling_Hybrid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_HybridClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Morphling_Hybrid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_HybridClass);
    CDOTA_Ability_Morphling_Hybrid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_HybridClass._vptr_CEntityClass = off_4364E70;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Morphling_Hybrid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_HybridClass);
    __cxa_atexit(
      CDOTA_Ability_Morphling_Hybrid::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Morphling_Hybrid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_HybridClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Morphling_HybridClass != 0 )
    return &CDOTA_Ability_Morphling_Hybrid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_HybridClass;
  if ( `guard variable for'CDOTA_Ability_Morphling_Hybrid::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_HybridClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Morphling_Hybrid::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_HybridClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Morphling_Hybrid::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_HybridClassInfo,
      "CDOTA_Ability_Morphling_Hybrid",
      "morphling_hybrid",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Morphling_Hybrid::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_HybridClassInfo);
  }
  CDOTA_Ability_Morphling_Hybrid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_HybridClass.m_pClassInfo = &CDOTA_Ability_Morphling_Hybrid::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_HybridClassInfo;
  CDOTA_Ability_Morphling_Hybrid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_HybridClass.m_pBaseClassInfo = CDOTA_Ability_Morphling_Hybrid::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_HybridClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Morphling_HybridClass = &CDOTA_Ability_Morphling_Hybrid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_HybridClass;
  CDOTA_Ability_Morphling_Hybrid::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Morphling_HybridClassInfo.m_pClass = &CDOTA_Ability_Morphling_Hybrid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_HybridClass;
  CDOTA_Ability_Morphling_Hybrid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_HybridClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Morphling_HybridClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Morphling_Hybrid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Morphling_HybridClass;
}


// CDOTA_Ability_Morphling_Hybrid::Spawn  (line 1568, @0x0000000002a182c0, libserver.so)
// calls: CDOTABaseAbility::Spawn, CDOTABaseAbility::SetHidden
void __fastcall CDOTA_Ability_Morphling_Hybrid::Spawn(
        CDOTA_Ability_Morphling_Hybrid *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTABaseAbility::Spawn(this, pKeyValues);
  CDOTABaseAbility::SetHidden(this, 1);
}


// CDOTA_Ability_Morphling_Hybrid::YouForgotToImplementOrDeclareServerClass  (line 1584, @0x00000000029b5a00, libserver.so)
int __fastcall CDOTA_Ability_Morphling_Hybrid::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Morphling_Hybrid *const this)
{
  return 0;
}


// CDOTA_Ability_Morphling_Hybrid::GetServerClass  (line 1584, @0x00000000029c9bf0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Morphling_Hybrid::GetServerClass(CDOTA_Ability_Morphling_Hybrid *const this)
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


// CDOTA_Ability_Morphling_Hybrid::CastFilterResult  (line 1603, @0x00000000029c36d0, libserver.so)  // inlines: CEntityHandle, FStrEq, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, GetUnitName, IndexToIdentity, Init, LookupEntity, String, ToCStr, _V_strcmp
// calls: CDOTABaseAbility::GetCaster, UnitFilter, strcmp
int __fastcall CDOTA_Ability_Morphling_Hybrid::CastFilterResult(
        CDOTA_Ability_Morphling_Hybrid *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  int result; // eax
  CDOTA_BaseNPC *v6; // rdx
  unsigned __int16 v7; // dx
  int v8; // esi
  CEntityInstance *m_pInstance; // r14
  uint32 v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CDOTA_BaseNPC *v13; // rax
  uint32 v14; // ecx
  unsigned __int16 v15; // dx
  int v16; // esi
  __int16 v17; // ax
  uint32 v18; // edx
  CEntityInstance *v19; // rcx
  int v20; // eax
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // rdx
  CDOTA_BaseNPC *v23; // rax
  const char *m_pAsString; // rdi
  const char *v25; // rsi
  __int16 v26; // [rsp+0h] [rbp-30h]

  Caster = CDOTABaseAbility::GetCaster(this);
  result = UnitFilter(pTarget, 1, 1, &stru_20010, Caster->m_iTeamNum.m_Value);
  if ( result == 0 )
  {
    v6 = CDOTABaseAbility::GetCaster(this);
    result = 23;
    if ( pTarget != v6 )
    {
      if ( !pTarget->m_bIsIllusion.m_Value )
        return 0;
      if ( pTarget->m_hOwnerEntity.m_Value.m_Index == -1 )
      {
        v7 = 0x7FFF;
        v8 = 0x7FFF;
      }
      else
      {
        v7 = pTarget->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
        v8 = v7;
      }
      m_pInstance = 0;
      v10 = (pTarget->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v7 & 0x7FFF;
      v26 = ((pTarget->m_hOwnerEntity.m_Value.m_Index >> 15) << 15) | v7 & 0x7FFF;
      if ( v10 + 2 > 1 )
      {
        v11 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v8 >> 9];
        if ( v11 != 0 )
        {
          v12 = &v11[v8 & 0x1FF];
          if ( v12 != 0 && v10 == v12->m_EHandle.m_Index )
            m_pInstance = v12->m_pInstance;
        }
      }
      v13 = CDOTABaseAbility::GetCaster(this);
      v14 = v13->m_hOwnerEntity.m_Value.m_Index >> 15;
      if ( v13->m_hOwnerEntity.m_Value.m_Index == -1 )
      {
        v15 = 0x7FFF;
        v16 = 0x7FFF;
      }
      else
      {
        v15 = v13->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
        v16 = v15;
      }
      v17 = v15 | v26 & 0x8000;
      v18 = v14;
      v19 = 0;
      v20 = (v18 << 15) | v17 & 0x7FFF;
      if ( (v20 + 2) > 1 )
      {
        v21 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v16 >> 9];
        if ( v21 != 0 )
        {
          v22 = &v21[v16 & 0x1FF];
          if ( v22 != 0 && v20 == v22->m_EHandle.m_Index )
            v19 = v22->m_pInstance;
        }
      }
      if ( m_pInstance == v19 )
        return 23;
      v23 = CDOTABaseAbility::GetCaster(this);
      m_pAsString = pTarget->m_iszUnitName.m_Value.u.m_pAsString;
      v25 = v23->m_iszUnitName.m_Value.u.m_pAsString;
      if ( v25 == 0 )
        v25 = "";
      if ( m_pAsString == 0 )
        m_pAsString = "";
      if ( v25 == m_pAsString || strcmp(m_pAsString, v25) == 0 )
        return 23;
      else
        return 0;
    }
  }
  return result;
}


// CDOTA_Ability_Morphling_Hybrid::GetCustomCastError  (line 1621, @0x00000000029c2030, libserver.so)  // inlines: CEntityHandle, FStrEq, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, GetUnitName, IndexToIdentity, Init, LookupEntity, String, ToCStr, _V_strcmp
// calls: CDOTABaseAbility::GetCaster, strcmp
// strings: "#dota_hud_error_cant_cast_on_own_illusion", "#dota_hud_error_cant_cast_on_self"
const char *__fastcall CDOTA_Ability_Morphling_Hybrid::GetCustomCastError(
        CDOTA_Ability_Morphling_Hybrid *const this,
        CDOTA_BaseNPC *pTarget)
{
  unsigned __int16 v5; // dx
  int v6; // esi
  CEntityInstance *m_pInstance; // r14
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTA_BaseNPC *Caster; // rax
  uint32 v12; // ecx
  unsigned __int16 v13; // dx
  int v14; // esi
  __int16 v15; // ax
  uint32 v16; // edx
  CEntityInstance *v17; // rcx
  int v18; // eax
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CDOTA_BaseNPC *v21; // rax
  const char *m_pAsString; // rdi
  const char *v23; // rsi
  __int16 v24; // [rsp+0h] [rbp-30h]

  if ( CDOTABaseAbility::GetCaster(this) == pTarget )
    return "#dota_hud_error_cant_cast_on_self";
  if ( pTarget->m_bIsIllusion.m_Value )
  {
    if ( pTarget->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v5 = 0x7FFF;
      v6 = 0x7FFF;
    }
    else
    {
      v5 = pTarget->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v6 = v5;
    }
    m_pInstance = 0;
    v8 = (pTarget->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v5 & 0x7FFF;
    v24 = ((pTarget->m_hOwnerEntity.m_Value.m_Index >> 15) << 15) | v5 & 0x7FFF;
    if ( v8 + 2 > 1 )
    {
      v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v6 >> 9];
      if ( v9 != 0 )
      {
        v10 = &v9[v6 & 0x1FF];
        if ( v10 != 0 && v8 == v10->m_EHandle.m_Index )
          m_pInstance = v10->m_pInstance;
      }
    }
    Caster = CDOTABaseAbility::GetCaster(this);
    v12 = Caster->m_hOwnerEntity.m_Value.m_Index >> 15;
    if ( Caster->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v13 = 0x7FFF;
      v14 = 0x7FFF;
    }
    else
    {
      v13 = Caster->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v14 = v13;
    }
    v15 = v13 | v24 & 0x8000;
    v16 = v12;
    v17 = 0;
    v18 = (v16 << 15) | v15 & 0x7FFF;
    if ( (v18 + 2) > 1 )
    {
      v19 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v14 >> 9];
      if ( v19 != 0 )
      {
        v20 = &v19[v14 & 0x1FF];
        if ( v20 != 0 && v18 == v20->m_EHandle.m_Index )
          v17 = v20->m_pInstance;
      }
    }
    if ( m_pInstance == v17 )
      return "#dota_hud_error_cant_cast_on_own_illusion";
    v21 = CDOTABaseAbility::GetCaster(this);
    m_pAsString = pTarget->m_iszUnitName.m_Value.u.m_pAsString;
    v23 = v21->m_iszUnitName.m_Value.u.m_pAsString;
    if ( v23 == 0 )
      v23 = "";
    if ( m_pAsString == 0 )
      m_pAsString = "";
    if ( v23 == m_pAsString || strcmp(m_pAsString, v23) == 0 )
      return "#dota_hud_error_cant_cast_on_own_illusion";
  }
  return "";
}


// CDOTA_Ability_Morphling_Hybrid::OnSpellStart  (line 1634, @0x00000000029f3830, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, ToDOTABaseNPC, operator CEntityInstance*, operator!=<CBaseEntity>, operator=, operator=<CHandle<CBaseEntity> >
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Ability_Morphling_Hybrid::CreateHybrid
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Morphling_Hybrid::OnSpellStart(CDOTA_Ability_Morphling_Hybrid *const this)
{
  CDOTA_BaseNPC *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  unsigned __int8 m_Value; // r13
  float LevelSpecialValue; // xmm0_4
  uint32 m_Index; // eax
  CEntityInstance *m_pInstance; // rsi
  uint32 v8; // r12d
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *v11; // rdx
  CEntityIdentity *v12; // rax
  CEntityIdentity *v13; // rax
  uint32 v14; // [rsp+0h] [rbp-40h] BYREF
  uint32 v15; // [rsp+10h] [rbp-30h]

  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && CursorTarget != CDOTABaseAbility::GetCaster(this) )
  {
    m_Value = v3->m_iTeamNum.m_Value;
    if ( m_Value == CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value
      || !CDOTA_BaseNPC::TriggerSpellAbsorb(v3, this, 1) )
    {
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
      CDOTA_Ability_Morphling_Hybrid::CreateHybrid(&v14, this, LevelSpecialValue, v3);
      m_Index = this->m_hImage.m_Value.m_Index;
      m_pInstance = 0;
      v8 = v14;
      v15 = v14;
      if ( m_Index + 2 > 1 )
      {
        v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hImage.m_Value.m_Index) >> 9) & 0x3F];
        if ( v9 != 0 )
        {
          v10 = &v9[this->m_hImage.m_Value.m_Index & 0x1FF];
          if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
            m_pInstance = v10->m_pInstance;
        }
      }
      v11 = 0;
      if ( v14 + 2 > 1 )
      {
        v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v15 >> 9) & 0x3F];
        if ( v12 != 0 )
        {
          v13 = &v12[v15 & 0x1FF];
          if ( v13 != 0 && v14 == v13->m_EHandle.m_Index )
            v11 = v13->m_pInstance;
        }
      }
      if ( m_pInstance != v11 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 912, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_hImage.m_Value.m_Index = v8;
      }
    }
  }
}


// CDOTA_Ability_Morphling_Hybrid::CreateHybrid  (line 1651, @0x00000000029f3450, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetPaddedCollisionRadius, IndexToIdentity, IsValid, LookupEntity, Purge, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, CDOTABaseAbility::GetCaster, DOTA_CreateIllusions, CDOTA_BaseNPC::AddNewModifier, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::UnitEmitSound (18 total)
// callers: CDOTA_Ability_Morphling_Hybrid::OnSpellStart
// strings: "illusion_damage_out_pct", "illusion_damage_out_pct_scepter", "illusion_damage_in_pct", "morphling_hybrid_illusions", "illusion_", "modifier_morph_hybrid_special" (9 total)
// globals: CEntityHandle::gm_pEntityList
CDOTA_Ability_Morphling_Hybrid *__fastcall CDOTA_Ability_Morphling_Hybrid::CreateHybrid(
        CDOTA_Ability_Morphling_Hybrid *const this,
        CDOTABaseAbility *pTarget,
        float fDuration,
        CDOTA_BaseNPC *a4)
{
  int LevelSpecialValue; // r14d
  float v8; // xmm1_4
  CDOTA_BaseNPC *pCaster; // rax
  float v10; // xmm0_4
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v14; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v16; // rax
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  int nFXIndex; // [rsp+1Ch] [rbp-A4h]
  int illusion_damage_in_pcta; // [rsp+28h] [rbp-98h]
  CDOTA_BaseNPC *illusion_damage_in_pct; // [rsp+28h] [rbp-98h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hImageList; // [rsp+30h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-70h] BYREF
  KeyValues kv3; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v26; // [rsp+88h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(pTarget, "illusion_damage_out_pct", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<int>(pTarget, "illusion_damage_out_pct_scepter", -1, 0);
  illusion_damage_in_pcta = CDOTABaseAbility::GetLevelSpecialValueFor<int>(pTarget, "illusion_damage_in_pct", -1, 0);
  KeyValues::KeyValues(&kv, "morphling_hybrid_illusions");
  KeyValues::SetFloat(&kv, "duration", v8);
  KeyValues::SetInt(&kv, "outgoing_damage", LevelSpecialValue);
  KeyValues::SetInt(&kv, "incoming_damage", illusion_damage_in_pcta);
  hImageList.m_Size = 0;
  hImageList.m_Memory.m_nAllocationCount = 0;
  hImageList.m_Memory.m_pMemory = 0;
  hImageList.m_Memory.m_nGrowSize = 0;
  pCaster = CDOTABaseAbility::GetCaster(pTarget);
  v10 = a4->m_flHullRadius + a4->m_flCollisionPadding;
  DOTA_CreateIllusions(a4, 1, (v10 + v10), 0, &kv, &hImageList, pCaster, "illusion_", 1);
  if ( hImageList.m_Size <= 0 )
  {
    LODWORD(this->_vptr_IHandleEntity) = -1;
  }
  else
  {
    if ( hImageList.m_Memory.m_pMemory->m_Index + 2 > 1
      && (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(hImageList.m_Memory.m_pMemory->m_Index >> 9) & 0x3F]) != 0
      && (v12 = &v11[hImageList.m_Memory.m_pMemory->m_Index & 0x1FF]) != 0
      && hImageList.m_Memory.m_pMemory->m_Index == v12->m_EHandle.m_Index
      && v12->m_pInstance != 0
      && BYTE3(v12->m_pInstance[7]._vptr_IHandleEntity) != 0 )
    {
      illusion_damage_in_pct = v12->m_pInstance;
    }
    else
    {
      illusion_damage_in_pct = 0;
    }
    KeyValues::KeyValues(&kv3, "modifier_morph_hybrid_special");
    Caster = CDOTABaseAbility::GetCaster(pTarget);
    CDOTA_BaseNPC::AddNewModifier(illusion_damage_in_pct, Caster, pTarget, "modifier_morph_hybrid_special", &kv3, 0);
    v14 = CDOTABaseAbility::GetCaster(pTarget);
    CDOTA_BaseNPC::AddNewModifier(illusion_damage_in_pct, v14, pTarget, "modifier_morphling_replicate_timer", &kv, 0);
    ParticleManager = GetParticleManager();
    nFXIndex = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_morphling/morphling_replicate.vpcf",
                 1,
                 a4,
                 0,
                 0);
    v16 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v16, nFXIndex, 0, a4, 1, 0, vec3_invalid, 1);
    v17 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v17, nFXIndex, 1, illusion_damage_in_pct, 1, 0, vec3_invalid, 1);
    v18 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v18, nFXIndex);
    CDOTA_BaseNPC::UnitEmitSound(illusion_damage_in_pct, "Hero_Morphling.Replicate", 0.0, 0, 0);
    LODWORD(this->_vptr_IHandleEntity) = hImageList.m_Memory.m_pMemory->m_Index;
    KeyValues::~KeyValues(&kv3);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hImageList);
  if ( (hImageList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hImageList.m_Memory);
    if ( (hImageList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hImageList.m_Memory);
  }
  KeyValues::~KeyValues(&kv);
  return this;
}


// CDOTA_Modifier_Morphling_Hybrid_Special::~CDOTA_Modifier_Morphling_Hybrid_Special  (line 1696, @0x0000000002a11510, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Morphling_Hybrid_Special::~CDOTA_Modifier_Morphling_Hybrid_Special(
        CDOTA_Modifier_Morphling_Hybrid_Special *const this)
{
  this->_vptr_CDOTA_Buff = &off_43659B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Morphling_Hybrid_Special::~CDOTA_Modifier_Morphling_Hybrid_Special  (line 1696, @0x0000000002a11530, libserver.so)  // inlines: ~CDOTA_Modifier_Morphling_Hybrid_Special
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Morphling_Hybrid_Special::~CDOTA_Modifier_Morphling_Hybrid_Special(
        CDOTA_Modifier_Morphling_Hybrid_Special *const this)
{
  this->_vptr_CDOTA_Buff = &off_43659B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Morphling_Hybrid_Special::IsHidden  (line 1701, @0x0000000002a0ac20, libserver.so)
bool __fastcall CDOTA_Modifier_Morphling_Hybrid_Special::IsHidden(CDOTA_Modifier_Morphling_Hybrid_Special *const this)
{
  return 1;
}


// CDOTA_Modifier_Morphling_Hybrid_Special::IsPurgable  (line 1702, @0x0000000002a0ac30, libserver.so)
bool __fastcall CDOTA_Modifier_Morphling_Hybrid_Special::IsPurgable(
        CDOTA_Modifier_Morphling_Hybrid_Special *const this)
{
  return 0;
}


// CDOTA_Modifier_Morphling_Hybrid_Special::GetStatusEffectName  (line 1708, @0x0000000002a0ac40, libserver.so)
// strings: "particles/status_fx/status_effect_dark_seer_illusion.vpcf"
const char *__fastcall CDOTA_Modifier_Morphling_Hybrid_Special::GetStatusEffectName(
        CDOTA_Modifier_Morphling_Hybrid_Special *const this)
{
  return "particles/status_fx/status_effect_dark_seer_illusion.vpcf";
}


// CDOTA_Modifier_Morphling_Hybrid_Special::StatusEffectPriority  (line 1709, @0x0000000002a0ac50, libserver.so)
int __fastcall CDOTA_Modifier_Morphling_Hybrid_Special::StatusEffectPriority(
        CDOTA_Modifier_Morphling_Hybrid_Special *const this)
{
  return 10010;
}


// CDOTA_Modifier_Morphling_Hybrid_Special::OnCreated  (line 1723, @0x00000000029c0480, libserver.so)  // inlines: GetBaseAgility, GetBaseIntellect, GetBaseStrength, NetworkStateChanged, Set, SetBaseAgility, SetBaseIntellect, SetBaseStrength, ToDOTABaseNPCHero, operator=<float>
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent
void __fastcall CDOTA_Modifier_Morphling_Hybrid_Special::OnCreated(
        CDOTA_Modifier_Morphling_Hybrid_Special *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rax
  float *v4; // r13
  CDOTA_BaseNPC *Parent; // rax
  float *v6; // rbx
  int v7; // [rsp+Ch] [rbp-24h]
  int v8; // [rsp+Ch] [rbp-24h]
  int v9; // [rsp+Ch] [rbp-24h]

  Caster = CDOTA_Buff::GetCaster(this);
  if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
    v4 = Caster;
  else
    v4 = 0;
  Parent = CDOTA_Buff::GetParent(this);
  v6 = Parent;
  if ( Parent != 0 && (Parent->m_iUnitType & 1) != 0 && v4 != 0 )
  {
    if ( v4[1158] != *&Parent[1].m_NetworkTransmitComponent.m_nStateFlags )
    {
      v9 = *(v4 + 1158);
      (*(Parent->_vptr_IHandleEntity + 22))(Parent, 4632, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      *(v6 + 1158) = v9;
    }
    if ( v4[1159] != v6[1159] )
    {
      v8 = *(v4 + 1159);
      (*(*v6 + 176LL))(v6, 4636, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      *(v6 + 1159) = v8;
    }
    if ( v4[1160] != v6[1160] )
    {
      v7 = *(v4 + 1160);
      (*(*v6 + 176LL))(v6, 4640, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      *(v6 + 1160) = v7;
    }
  }
  this->m_bLeftoverHybrid = 0;
}


// CDOTA_Modifier_Morphling_Hybrid_Special::DeclareFunctions  (line 1740, @0x00000000029b5a10, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Morphling_Hybrid_Special::GetModifierSuperIllusion(CModifierParams const&)
void __fastcall CDOTA_Modifier_Morphling_Hybrid_Special::DeclareFunctions(
        CDOTA_Modifier_Morphling_Hybrid_Special *const this)
{
  this->m_Functions[108].__pfn = CDOTA_Modifier_Morphling_Hybrid_Special::GetModifierSuperIllusion;
  this->m_Functions[108].__delta = 0;
}


// CDOTA_Modifier_Morphling_Hybrid_Special::GetModifierSuperIllusion  (line 1747, @0x00000000029b5a30, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Morphling_Hybrid_Special::GetModifierSuperIllusion(
        CDOTA_Modifier_Morphling_Hybrid_Special *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Morphling_Hybrid_Special::OnThinkInternal  (line 1755, @0x00000000029bbe40, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::GetAbilityCount, CDOTA_BaseNPC::GetAbilityByIndex, CDOTA_ModifierManager::GetBuffByIndex, CDOTA_Buff::Destroy, CDOTA_BaseNPC::ForceKill, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_illusion", "modifier_morph_hybrid_hide"
void __fastcall CDOTA_Modifier_Morphling_Hybrid_Special::OnThinkInternal(
        CDOTA_Modifier_Morphling_Hybrid_Special *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // rax
  int AbilityCount; // r13d
  int i; // ebx
  CDOTA_BaseNPC *v7; // rax
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_ModifierManager *p_m_ModifierManager; // r13
  int v11; // ebx
  CDOTA_Modifier_Morphling_Hybrid_Special *BuffByIndex; // rax
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *Caster; // rax

  if ( !this->m_bLeftoverHybrid )
  {
    Parent = CDOTA_Buff::GetParent(this);
    if ( CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_illusion", 0) != 0
      && (v3 = CDOTA_Buff::GetParent(this), (*(v3->_vptr_IHandleEntity + 408))(v3) != 0) )
    {
      if ( CDOTA_Buff::GetParent(this) != 0 )
        CDOTA_Buff::GetCaster(this);
    }
    else
    {
      v4 = CDOTA_Buff::GetParent(this);
      AbilityCount = CDOTA_BaseNPC::GetAbilityCount(v4);
      if ( AbilityCount > 0 )
      {
        for ( i = 0; i != AbilityCount; ++i )
        {
          v7 = CDOTA_Buff::GetParent(this);
          AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(v7, i);
          if ( AbilityByIndex != 0 )
            (*(AbilityByIndex->_vptr_IHandleEntity + 308))(AbilityByIndex);
        }
      }
      v9 = CDOTA_Buff::GetParent(this);
      p_m_ModifierManager = &v9->m_ModifierManager;
      v11 = v9->m_ModifierManager.m_bufflist.m_Size - 1;
      if ( v11 >= 0 )
      {
        do
        {
          BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(p_m_ModifierManager, v11, 0);
          if ( this != BuffByIndex && BuffByIndex != 0 )
            CDOTA_Buff::Destroy(BuffByIndex, 0, 0, 0);
          --v11;
        }
        while ( v11 != -1 );
      }
      v13 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::ForceKill(v13, 0);
      Caster = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_morph_hybrid_hide");
      this->m_bLeftoverHybrid = 1;
    }
  }
}


// CDOTA_Modifier_Morphling_Hybrid_Special::CheckState  (line 1793, @0x00000000029bbb50, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Morphling_Hybrid_Special::CheckState(
        CDOTA_Modifier_Morphling_Hybrid_Special *const this,
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


// CDOTA_Modifier_Morphling_Hybrid_Hide::~CDOTA_Modifier_Morphling_Hybrid_Hide  (line 1821, @0x0000000002a114c0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Morphling_Hybrid_Hide::~CDOTA_Modifier_Morphling_Hybrid_Hide(
        CDOTA_Modifier_Morphling_Hybrid_Hide *const this)
{
  this->_vptr_CDOTA_Buff = &off_4365CD0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Morphling_Hybrid_Hide::~CDOTA_Modifier_Morphling_Hybrid_Hide  (line 1821, @0x0000000002a114e0, libserver.so)  // inlines: ~CDOTA_Modifier_Morphling_Hybrid_Hide
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Morphling_Hybrid_Hide::~CDOTA_Modifier_Morphling_Hybrid_Hide(
        CDOTA_Modifier_Morphling_Hybrid_Hide *const this)
{
  this->_vptr_CDOTA_Buff = &off_4365CD0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Morphling_Hybrid_Hide::IsHidden  (line 1826, @0x0000000002a0ac60, libserver.so)
bool __fastcall CDOTA_Modifier_Morphling_Hybrid_Hide::IsHidden(CDOTA_Modifier_Morphling_Hybrid_Hide *const this)
{
  return 1;
}


// CDOTA_Modifier_Morphling_Hybrid_Hide::IsPurgable  (line 1830, @0x0000000002a0ac70, libserver.so)
bool __fastcall CDOTA_Modifier_Morphling_Hybrid_Hide::IsPurgable(CDOTA_Modifier_Morphling_Hybrid_Hide *const this)
{
  return 0;
}


// CDOTA_Modifier_Morphling_Hybrid_Hide::OnCreated  (line 1843, @0x00000000029bae90, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::AddEffects, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, Purge, CDOTA_ModifierManager::GetBuffByIndex, CDOTA_Buff::SetHideParticles
void __fastcall CDOTA_Modifier_Morphling_Hybrid_Hide::OnCreated(
        CDOTA_Modifier_Morphling_Hybrid_Hide *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *Ability; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Modifier_Morphling_Hybrid_Hide *v6; // rdi
  int v7; // ebx
  CDOTA_BaseNPC *v8; // rax
  CDOTA_ModifierManager *p_m_ModifierManager; // r13
  CDOTA_BaseNPC *v10; // r12
  CDOTA_Buff *BuffByIndex; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::AddEffects(Parent, 32);
  Ability = CDOTA_Buff::GetAbility(this);
  Caster = CDOTA_Buff::GetCaster(this);
  Purge(Caster, Ability, 36);
  v6 = this;
  v7 = 0;
  v8 = CDOTA_Buff::GetParent(v6);
  p_m_ModifierManager = &v8->m_ModifierManager;
  v10 = v8;
  if ( v8->m_ModifierManager.m_bufflist.m_Size > 0 )
  {
    do
    {
      BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(p_m_ModifierManager, v7, 0);
      if ( BuffByIndex != 0 )
        CDOTA_Buff::SetHideParticles(BuffByIndex, 1);
      ++v7;
    }
    while ( v7 < v10->m_ModifierManager.m_bufflist.m_Size );
  }
}


// CDOTA_Modifier_Morphling_Hybrid_Hide::OnDestroy  (line 1862, @0x00000000029c0cc0, libserver.so)  // inlines: MarkPVSInformationDirty, RemoveEffects
// calls: CDOTA_Buff::GetParent, CBaseEntity::DispatchUpdateTransmitState, CDOTA_ModifierManager::GetBuffByIndex, CDOTA_Buff::SetHideParticles
void __fastcall CDOTA_Modifier_Morphling_Hybrid_Hide::OnDestroy(CDOTA_Modifier_Morphling_Hybrid_Hide *const this)
{
  CDOTA_BaseNPC *Parent; // rbx
  CBaseEntity *v3; // rdi
  int v4; // ebx
  CDOTA_BaseNPC *v5; // rax
  CDOTA_ModifierManager *p_m_ModifierManager; // r13
  CDOTA_BaseNPC *v7; // r12
  CDOTA_Buff *BuffByIndex; // rax

  Parent = CDOTA_Buff::GetParent(this);
  (*(Parent->_vptr_IHandleEntity + 188))(Parent, Parent->m_fEffects.m_Value & 0xFFFFFFDF);
  v3 = Parent;
  Parent->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  v4 = 0;
  CBaseEntity::DispatchUpdateTransmitState(v3);
  v5 = CDOTA_Buff::GetParent(this);
  p_m_ModifierManager = &v5->m_ModifierManager;
  v7 = v5;
  if ( v5->m_ModifierManager.m_bufflist.m_Size > 0 )
  {
    do
    {
      BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(p_m_ModifierManager, v4, 0);
      if ( BuffByIndex != 0 )
        CDOTA_Buff::SetHideParticles(BuffByIndex, 0);
      ++v4;
    }
    while ( v4 < v7->m_ModifierManager.m_bufflist.m_Size );
  }
}


// CDOTA_Modifier_Morphling_Hybrid_Hide::DeclareFunctions  (line 1889, @0x00000000029b5a50, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Morphling_Hybrid_Hide::DeclareFunctions(
        CDOTA_Modifier_Morphling_Hybrid_Hide *const this)
{
  this->m_Functions[9].__pfn = (&stru_10 + 697);
  this->m_Functions[9].__delta = 0;
}


// CDOTA_Modifier_Morphling_Hybrid_Hide::GetModifierInvisibilityLevel  (line 1896, @0x00000000029b5a70, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Morphling_Hybrid_Hide::GetModifierInvisibilityLevel(
        CDOTA_Modifier_Morphling_Hybrid_Hide *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Morphling_Hybrid_Hide::CheckState  (line 1903, @0x00000000029b5a90, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Morphling_Hybrid_Hide::CheckState(
        CDOTA_Modifier_Morphling_Hybrid_Hide *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x82884387uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFF7D77BC78LL;
}


