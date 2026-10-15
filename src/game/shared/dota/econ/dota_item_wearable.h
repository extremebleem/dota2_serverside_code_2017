// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/econ/dota_item_wearable.h:20
class CDOTAWearableItem : public CEconWearable {
	class NetworkVar_m_bOwnerModelChanged {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bIsGeneratingEconItem {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	EHANDLE m_hAdditionalWearable;  // +0x6a4
	typedef CEconWearable BaseClass;
	typedef CDOTAWearableItem ThisClass;

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
	CDOTAWearableItem(CDOTAWearableItem &);
	CDOTAWearableItem(CDOTAWearableItem &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CDOTAWearableItem();
	virtual void Equip(CBaseCombatCharacter *);
	virtual void UnEquip(CBaseCombatCharacter *);
	virtual void Spawn(const CEntityKeyValues *);
	virtual void UpdateOnRemove();
	void SetIsGeneratingEconItem(bool, bool);
	bool IsGeneratingEconItem();
	bool ShouldMatchCycleToParent();
	virtual void OwnerModelChanged(bool);
	virtual int ShouldTransmit(const CGameCheckTransmitInfo *);
	virtual ~CDOTAWearableItem();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// vtable[274] Equip
	// vtable[275] UnEquip
	// vtable[8] Spawn
	// vtable[11] UpdateOnRemove
	// vtable[278] OwnerModelChanged
	// vtable[65] ShouldTransmit
	// sizeof = 1712
};
