// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_empty_bottle.h:16
class CDOTA_Item_EmptyBottle : public CDOTA_Item {
	class NetworkVar_m_iStoredRuneType {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	float m_fStoredRuneTime;  // +0x3ec
	typedef CDOTA_Item_EmptyBottle ThisClass;

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
	CDOTA_Item_EmptyBottle(CDOTA_Item_EmptyBottle &);
	CDOTA_Item_EmptyBottle(CDOTA_Item_EmptyBottle &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Item_EmptyBottle();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void OnPurchase(int, const char *);
	virtual void OnSpellStart();
	virtual const char * GetIntrinsicModifierName();
	virtual void Think();
	virtual bool OnRune(int);
	virtual void ParentGainedModifier(CDOTA_Buff *);
	virtual int GetAllowedTargetBehavior();
	void CheckForBottleHealChallengeEvent(CDOTA_BaseNPC *);
	virtual bool ShouldUseAlternateDroppedItemModel();
	virtual bool CausesAutoattack();
	virtual bool ProRatesChargesWhenSelling();
	int GetStoredRuneType();
	bool HasStoredRune();
	void SetStoredRune(int);
	void ClearStoredRune();
	virtual bool IsDroppable();
	virtual void ModifyAbilityPingMessage(CDOTAUserMsg_AbilityPing &);
	virtual ~CDOTA_Item_EmptyBottle();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[6] Precache
	// vtable[335] OnPurchase
	// vtable[266] OnSpellStart
	// vtable[280] GetIntrinsicModifierName
	// vtable[117] Think
	// vtable[338] OnRune
	// vtable[340] ParentGainedModifier
	// vtable[255] GetAllowedTargetBehavior
	// vtable[332] ShouldUseAlternateDroppedItemModel
	// vtable[222] CausesAutoattack
	// vtable[339] ProRatesChargesWhenSelling
	// vtable[349] IsDroppable
	// vtable[216] ModifyAbilityPingMessage
	// sizeof = 1008
};
