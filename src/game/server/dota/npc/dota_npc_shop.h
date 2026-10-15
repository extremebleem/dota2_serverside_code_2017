// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/npc/dota_npc_shop.h:12
class CDOTA_BaseNPC_Shop_Speech {
	bool ShopkeeperSpeechEnabled();
	IDOTA_SpeechQueuedCallback * MakeSpeechCallbackForItemPurchaseIfHeroDoesntHaveSomethingToSay(CDOTA_Item *, CDOTA_BaseNPC *);

	// sizeof = 1
};

// src/game/server/dota/npc/dota_npc_shop.h:22
class CDOTA_BaseNPC_Shop : public CDOTA_BaseNPC_Building {
	class NetworkVar_m_ShopType {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	typedef CDOTA_BaseNPC_Building BaseClass;

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
	CDOTA_BaseNPC_Shop(CDOTA_BaseNPC_Shop &);
	CDOTA_BaseNPC_Shop(CDOTA_BaseNPC_Shop &);
	CDOTA_BaseNPC_Shop();
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
	DOTA_SHOP_TYPE GetShopType();
	virtual bool IsControllableByAnyPlayer();
	virtual bool IsControllableByPlayer(int);
	virtual int UpdateTransmitState();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Spawn(const CEntityKeyValues *);
	const char * ShopTypeToCriterionFact(DOTA_SHOP_TYPE);
	virtual ~CDOTA_BaseNPC_Shop();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[490] IsControllableByAnyPlayer
	// vtable[491] IsControllableByPlayer
	// vtable[64] UpdateTransmitState
	// vtable[6] Precache
	// vtable[8] Spawn
	// sizeof = 4704
};
