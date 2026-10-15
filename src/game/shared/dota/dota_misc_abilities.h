// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_misc_abilities.h:21
class CDOTA_Ability_Pudge_FleshHeap : public CDOTABaseAbility {
public:

private:

	static datamap_t m_DataMap;

	int m_iKills;  // +0x390
	typedef CDOTABaseAbility BaseClass;

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
	CDOTA_Ability_Pudge_FleshHeap(CDOTA_Ability_Pudge_FleshHeap &);
	CDOTA_Ability_Pudge_FleshHeap(CDOTA_Ability_Pudge_FleshHeap &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Ability_Pudge_FleshHeap();
	virtual const char * GetIntrinsicModifierName();
	virtual void OnHeroDiedNearby(KeyValues *);
	int GetFleshHeapKills();
	void ClearFleshHeapKills();
	virtual ~CDOTA_Ability_Pudge_FleshHeap();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[279] OnHeroDiedNearby
	// sizeof = 920
};

// src/game/shared/dota/dota_misc_abilities.h:50
class CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active : public CDOTA_Buff {
public:

private:

	EHANDLE m_hTarget;  // +0xba8
	bool m_bPassive;  // +0xbac
	CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active();
	virtual void DeclareFunctions();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual ModifierVariant_t GetModifierInvisibilityLevel(const CModifierParams &);
	ModifierVariant_t GetMinHealth(const CModifierParams &);
	ModifierVariant_t ModelScale(const CModifierParams &);
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual void CheckState(CDOTABuffState &);
	void SetPassiveKill(bool);
	virtual ~CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active();

	// vtable[65] DeclareFunctions
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[89] GetModifierInvisibilityLevel
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[5] CheckState
	// sizeof = 2992
};

// src/game/shared/dota/dota_misc_abilities.h:81
class CDOTA_Modifier_Legion_Commander_Duel : public CDOTA_Buff {
public:

private:

	int reward_damage;  // +0xba8
	bool m_bAttacked;  // +0xbac
	bool m_bHadAVictor;  // +0xbad

	float m_flTimeDuelStart;  // +0xbb0
	EHANDLE m_hPartner;  // +0xbb4
	CDOTA_Modifier_Legion_Commander_Duel();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual void OnIntervalThink();
	virtual bool IsPurgable();
	virtual bool IsPurgeException();
	virtual void DeclareFunctions();
	ModifierVariant_t OnDeath(const CModifierParams &);
	ModifierVariant_t OnAttack(const CModifierParams &);
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	ModifierVariant_t GetModifierIncomingDamage_Percentage(const CModifierParams &);
	virtual int GetAttributes();
	virtual void CheckState(CDOTABuffState &);
	virtual int GetPriority();
	CDOTA_BaseNPC * GetPartner();
	virtual ~CDOTA_Modifier_Legion_Commander_Duel();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[56] OnIntervalThink
	// vtable[14] IsPurgable
	// vtable[15] IsPurgeException
	// vtable[65] DeclareFunctions
	// vtable[7] GetAttributes
	// vtable[5] CheckState
	// vtable[6] GetPriority
	// sizeof = 3000
};
