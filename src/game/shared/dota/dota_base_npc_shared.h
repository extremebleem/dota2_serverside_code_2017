// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_base_npc_shared.h:29
class CDOTA_Ability_Brewmaster_PrimalSplit : public CDOTABaseAbility {
	class NetworkVar_m_hPrimary {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hSecondary {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hTertiary {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	typedef CDOTA_Ability_Brewmaster_PrimalSplit ThisClass;

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
	CDOTA_Ability_Brewmaster_PrimalSplit(CDOTA_Ability_Brewmaster_PrimalSplit &);
	CDOTA_Ability_Brewmaster_PrimalSplit(CDOTA_Ability_Brewmaster_PrimalSplit &);
	CDOTA_Ability_Brewmaster_PrimalSplit();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual DOTAAbilitySpeakTrigger_t SpeakTrigger();
	virtual int GetConceptRecipientType();
	virtual ~CDOTA_Ability_Brewmaster_PrimalSplit();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[300] SpeakTrigger
	// vtable[299] GetConceptRecipientType
	// sizeof = 928
};

// src/game/shared/dota/dota_base_npc_shared.h:51
struct sSpiritInfo {
private:

	EHANDLE hTarget;  // +0x14
	bool bHit;  // +0x18

	int iHealAmount;  // +0x1c
	int nFXAmbientIndex;  // +0x20
	sSpiritInfo();

	void Init(CDOTA_BaseNPC *, bool);
	sSpiritInfo & operator=(const sSpiritInfo &);

	// sizeof = 40
};

// src/game/shared/dota/dota_base_npc_shared.h:68
class CDOTA_Ability_DeathProphet_Exorcism : public CDOTABaseAbility {
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
	CDOTA_Ability_DeathProphet_Exorcism(CDOTA_Ability_DeathProphet_Exorcism &);
	CDOTA_Ability_DeathProphet_Exorcism();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CDOTA_Ability_DeathProphet_Exorcism();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void OnSpellStart();
	virtual void UpdateOnRemove();
	virtual int GetConceptRecipientType();
	virtual const char * GetAssociatedSecondaryAbilities();
	sSpiritInfo * ActivateSpirit(float);
	void FreeSpirit(sSpiritInfo *);
	int GetSpiritCount();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[266] OnSpellStart
	// vtable[11] UpdateOnRemove
	// vtable[299] GetConceptRecipientType
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 936
};
