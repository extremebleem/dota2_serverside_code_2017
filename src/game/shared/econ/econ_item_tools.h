// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/econ/econ_item_tools.h:15
class CEconSharedToolSupport {
	bool ToolCanApplyTo(const IEconItemInterface *, const IEconItemInterface *);
	bool ToolCanApplyToDefinition(const GameItemDefinition_t *, const GameItemDefinition_t *);

	// sizeof = 1
};

// src/game/shared/econ/econ_item_tools.h:31
class CEconTool_WrappedGift : public IEconTool {
public:

	CEconTool_WrappedGift(const char *, const char *, item_capabilities_t);
	virtual ~CEconTool_WrappedGift();

	// sizeof = 72
};

// src/game/shared/econ/econ_item_tools.h:56
class CEconTool_StrangePart : public IEconTool {
public:

private:

	int m_iHeroRestriction;  // +0x44
	int m_iItemSlotRestriction;  // +0x48

	static CEconItemView * m_pApplyTool;
	static CEconItemView * m_pApplyTarget;
	CEconTool_StrangePart(CEconTool_StrangePart &);
	CEconTool_StrangePart(const CEconTool_StrangePart &);
	CEconTool_StrangePart(const char *, const char *, item_capabilities_t, KeyValues *);
	virtual bool BInitFromKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	virtual bool CanApplyTo(const IEconItemInterface *, const IEconItemInterface *);
	virtual ~CEconTool_StrangePart();

	// vtable[2] BInitFromKV
	// vtable[3] CanApplyTo
	// sizeof = 104
};

// src/game/shared/econ/econ_item_tools.h:115
class CEconTool_BackpackExpander : public IEconTool {
public:

private:

	int m_iBackpackSlots;  // +0x44
	CEconTool_BackpackExpander(const char *, const char *, KeyValues *);
	virtual bool BInitFromKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	virtual bool BFinishInitialization();
	int GetBackpackSlots();
	virtual ~CEconTool_BackpackExpander();

	// vtable[2] BInitFromKV
	// vtable[6] BFinishInitialization
	// sizeof = 72
};

// src/game/shared/econ/econ_item_tools.h:160
class CEconTool_HeroTaunt : public IEconTool {
public:

	CEconTool_HeroTaunt(CEconTool_HeroTaunt &);
	CEconTool_HeroTaunt(const CEconTool_HeroTaunt &);
	CEconTool_HeroTaunt(const char *, const char *, item_capabilities_t);
	virtual bool ShouldDisplayQuantity(const IEconItemInterface *);
	virtual IEconConsumable * CreateEconConsumable();
	virtual ~CEconTool_HeroTaunt();

	// vtable[4] ShouldDisplayQuantity
	// vtable[7] CreateEconConsumable
	// sizeof = 72
};

// src/game/shared/econ/econ_item_tools.h:174
class CEconTool_VictoryPrediction : public IEconTool {
public:

private:

	bool m_bTrackFailure;  // +0x48
	bool m_bResetOnFailure;  // +0x49
	bool m_bNotifyServer;  // +0x4a
	bool m_bAllPickOnly;  // +0x4b
	uint32 m_unDestroyAfterFailureCount;  // +0x4c
	uint32 m_unCreateRewardAfterWinCount;  // +0x50
	RTime32 m_rtContentsTradableAfter;  // +0x54
	RTime32 m_rtFeaturedUntil;  // +0x58
	uint16 m_unEventID;  // +0x66
	uint16 m_unRewardNormalPoints;  // +0x68
	uint16 m_unRewardPremiumPoints;  // +0x6a
	uint16 m_unRewardActionID;  // +0x6c
	uint16 m_unFailureNormalPoints;  // +0x6e
	uint16 m_unFailurePremiumPoints;  // +0x70

	CEconTool_VictoryPrediction(CEconTool_VictoryPrediction &);
	CEconTool_VictoryPrediction(const CEconTool_VictoryPrediction &);
	CEconTool_VictoryPrediction(const char *, const char *, item_capabilities_t, KeyValues *);
	virtual bool BInitFromKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	RTime32 GetFeaturedCharmUntil();
	bool GetTrackFailure();
	bool GetResetOnFailure();
	bool GetNotifyServer();
	bool GetIsAllPickOnly();
	RTime32 GetContentsTradableAfter();
	uint32 GetDestroyAfterFailures();
	uint32 GetRewardAfterWins();
	item_definition_index_t GetRewardItemDef();
	item_definition_index_t GetFailureItemDef();
	item_definition_index_t GetPeekInsideItemDef();
	const char * GetRewardLootList();
	const char * GetFailureLootList();
	kill_eater_event_t GetWinsEventType();
	item_definition_index_t GetRewardDisplayItemDef();
	item_definition_index_t GetFailureDisplayItemDef();
	uint32 GetEventID();
	uint32 GetRewardNormalPoints();
	uint32 GetRewardPremiumPoints();
	uint32 GetRewardActionID();
	uint32 GetFailureNormalPoints();
	uint32 GetFailurePremiumPoints();
	virtual bool ShouldDisplayQuantity(const IEconItemInterface *);
	virtual IEconConsumable * CreateEconConsumable();
	virtual ~CEconTool_VictoryPrediction();

	// vtable[2] BInitFromKV
	// vtable[4] ShouldDisplayQuantity
	// vtable[7] CreateEconConsumable
	// sizeof = 136
};

// src/game/shared/econ/econ_item_tools.h:339
class CEconTool_HeroAbility : public IEconTool {
public:

	CEconTool_HeroAbility(CEconTool_HeroAbility &);
	CEconTool_HeroAbility(const CEconTool_HeroAbility &);
	CEconTool_HeroAbility();
	virtual IEconConsumable * CreateEconConsumable();
	virtual ~CEconTool_HeroAbility();

	// vtable[7] CreateEconConsumable
	// sizeof = 72
};

// src/game/shared/econ/econ_item_tools.h:350
class CEconTool_PaintCan : public IEconTool {
public:

	CEconTool_PaintCan(const char *, item_capabilities_t);
	virtual ~CEconTool_PaintCan();

	// sizeof = 72
};

// src/game/shared/econ/econ_item_tools.h:366
class CEconTool_GiftWrap : public IEconTool {
public:

private:

	static CEconItemView * m_pApplyTool;
	static CEconItemView * m_pApplyTarget;
	static uint32 m_nAccountID;
	CEconTool_GiftWrap(CEconTool_GiftWrap &);
	CEconTool_GiftWrap(const CEconTool_GiftWrap &);
	CEconTool_GiftWrap(const char *, item_capabilities_t);
	virtual bool CanApplyTo(const IEconItemInterface *, const IEconItemInterface *);
	virtual bool RequiresToolEscrowPeriod();
	virtual ~CEconTool_GiftWrap();

	// vtable[3] CanApplyTo
	// vtable[5] RequiresToolEscrowPeriod
	// sizeof = 72
};

// src/game/shared/econ/econ_item_tools.h:391
class CEconTool_NameTag : public IEconTool {
public:

	CEconTool_NameTag(const char *, item_capabilities_t);
	virtual ~CEconTool_NameTag();

	// sizeof = 72
};

// src/game/shared/econ/econ_item_tools.h:404
class CEconTool_DescTag : public IEconTool {
public:

	CEconTool_DescTag(const char *, item_capabilities_t);
	virtual ~CEconTool_DescTag();

	// sizeof = 72
};

// src/game/shared/econ/econ_item_tools.h:417
class CEconTool_CrateKey : public IEconTool {
public:

	CEconTool_CrateKey(const char *, const char *, item_capabilities_t);
	virtual ~CEconTool_CrateKey();

	// sizeof = 72
};

// src/game/shared/econ/econ_item_tools.h:430
class CEconTool_ItemRedemption : public IEconTool {
public:

private:

	CEconTool_ItemRedemption(const char *, const char *, KeyValues *);
	virtual bool BInitFromKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	const char * GetRedemptionListName();
	virtual ~CEconTool_ItemRedemption();

	// vtable[2] BInitFromKV
	// sizeof = 80
};

// src/game/shared/econ/econ_item_tools.h:471
class CEconTool_ItemPack : public IEconTool {
public:

	CEconTool_ItemPack(const char *, const char *, KeyValues *);
	virtual ~CEconTool_ItemPack();

	// sizeof = 72
};

// src/game/shared/econ/econ_item_tools.h:492
class CEconTool_Egg : public IEconTool {
public:

	CEconTool_Egg(const char *, const char *, KeyValues *);
	virtual ~CEconTool_Egg();

	// sizeof = 72
};

// src/game/shared/econ/econ_item_tools.h:516
class CEconTool_Default : public IEconTool {
public:

	CEconTool_Default(const char *, const char *, const char *, item_capabilities_t);
	virtual ~CEconTool_Default();

	// sizeof = 72
};

// src/game/shared/econ/econ_item_tools.h:533
class CEconTool_SupplyCrate : public IEconTool {
public:

private:

	uint8 m_nItemsPerTreasure;  // +0x41

	CEconTool_SupplyCrate(CEconTool_SupplyCrate &);
	CEconTool_SupplyCrate(const CEconTool_SupplyCrate &);
	CEconTool_SupplyCrate();
	virtual bool BInitFromKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	uint8 GetItemsPerTreasure();
	bool HasNoDupeLootListOverride();
	const char * GetNoDupeLootListOverride();
	uint32 ParseTreasureTradableAfter(KeyValues *, const char *, uint32);
	virtual ~CEconTool_SupplyCrate();

	// vtable[2] BInitFromKV
	// sizeof = 80
};

// src/game/shared/econ/econ_item_tools.h:647
class CEconTool_SocketHammer : public IEconTool {
public:

private:

	bool m_bSafe;  // +0x41
	CEconTool_SocketHammer(CEconTool_SocketHammer &);
	CEconTool_SocketHammer(const CEconTool_SocketHammer &);
	CEconTool_SocketHammer(const char *, const char *, item_capabilities_t, KeyValues *);
	virtual bool BInitFromKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	virtual bool CanApplyTo(const IEconItemInterface *, const IEconItemInterface *);
	bool IsSafe();
	virtual ~CEconTool_SocketHammer();

	// vtable[2] BInitFromKV
	// vtable[3] CanApplyTo
	// sizeof = 72
};

// src/game/shared/econ/econ_item_tools.h:687
class CEconTool_SocketChisel : public IEconTool {
public:

private:

	CEconTool_SocketChisel(CEconTool_SocketChisel &);
	CEconTool_SocketChisel(const CEconTool_SocketChisel &);
	CEconTool_SocketChisel(const char *, const char *, item_capabilities_t, KeyValues *);
	virtual bool BInitFromKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	int GetNumSocketsToAdd();
	ESocketType GetSocketToAdd(int);
	virtual bool CanApplyTo(const IEconItemInterface *, const IEconItemInterface *);
	virtual ~CEconTool_SocketChisel();

	// vtable[2] BInitFromKV
	// vtable[3] CanApplyTo
	// sizeof = 96
};

// src/game/shared/econ/econ_item_tools.h:732
class CEconTool_Autograph : public IEconTool {
public:

private:

	static CEconItemView * m_pApplyTool;
	static CEconItemView * m_pApplyTarget;
	CEconTool_Autograph(CEconTool_Autograph &);
	CEconTool_Autograph(const CEconTool_Autograph &);
	CEconTool_Autograph(const char *, const char *, item_capabilities_t, KeyValues *);
	virtual bool CanApplyTo(const IEconItemInterface *, const IEconItemInterface *);
	virtual ~CEconTool_Autograph();

	// vtable[3] CanApplyTo
	// sizeof = 72
};

// src/game/shared/econ/econ_item_tools.h:756
class CEconTool_StyleUnlock : public IEconTool {
	struct StyleUnlock_t {
		StyleUnlock_t();

		// sizeof = 4
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

private:

	CEconTool_StyleUnlock(CEconTool_StyleUnlock &);
	CEconTool_StyleUnlock(const CEconTool_StyleUnlock &);
	CEconTool_StyleUnlock(const char *, const char *, item_capabilities_t, KeyValues *);
	virtual bool BInitFromKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	virtual bool CanApplyTo(const IEconItemInterface *, const IEconItemInterface *);
	bool GetStyleUnlockForItem(item_definition_index_t, style_index_t *);
	EEconItemQuality GetQualityOverride();
	int GetUnlockCount();
	item_definition_index_t GetUnlockItemDef(int);
	style_index_t GetUnlockStyle(int);
	bool UnlockItemExists(item_definition_index_t);
	virtual ~CEconTool_StyleUnlock();

	// vtable[2] BInitFromKV
	// vtable[3] CanApplyTo
	// sizeof = 96
};

// src/game/shared/econ/econ_item_tools.h:876
class CEconTool_ItemDynamicRecipe : public IEconTool {
	class CBaseRecipeComponent {
		struct StringEncodedAttribute_t {
			attrib_definition_index_t m_AttrIndex;  // +0x0

			CUtlConstString m_symAttrData;  // +0x8
			StringEncodedAttribute_t();
			~StringEncodedAttribute_t();

			// sizeof = 16
		};

		struct CountChance_t {
			int m_nMinCount;  // +0x0
			int m_nMaxCount;  // +0x4
			float m_flChance;  // +0x8

			// sizeof = 12
		};
		/* tag__fprintf: const_type tag not supported! */;
		/* tag__fprintf: const_type tag not supported! */;

		int ()() * * _vptr.CBaseRecipeComponent;  // +0x0
	protected:

		uint32 m_unSlotID;  // +0x8
		float m_flChanceOfApplying;  // +0xc
		bool m_bIsOutput;  // +0x10

		float m_flTotalWeights;  // +0x30
		uint32 m_unFlags;  // +0x34

		bool m_bCannotMatchInput;  // +0x60
		typedef CUtlVector<const CEconItemAttributeDefinition*, CUtlMemory<const CEconItemAttributeDefinition*, int> > ComponentAttribVector_t;
		CBaseRecipeComponent(const CBaseRecipeComponent &);
		CBaseRecipeComponent(bool);
		virtual ~CBaseRecipeComponent();
		bool ParseComponentsBlock(KeyValues *, CUtlVector<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent*, CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeCompone, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, CEconTool_ItemDynamicRecipe *);
		bool ParseComponents(KeyValues *, CUtlVector<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent*, CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeCompone, bool, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, CEconTool_ItemDynamicRecipe *);
		virtual bool ParseKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, CEconTool_ItemDynamicRecipe *);
		void SetIsOutput(bool);
		void SetChanceOfApplying(float);
		virtual bool BFinishInitialization_Internal(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
		bool GetIsOutput();
		uint32 GetSlotID();
		uint32 GetFlags();
		virtual bool BuildFullAttribute(CAttribute_ItemDynamicRecipeComponent &, uint32 &);
		virtual const char * GetAttributeName();
		int RollCount();
		virtual bool FilloutAttribute(CAttribute_ItemDynamicRecipeComponent &, uint32 &);
		/* tag__fprintf: const_type tag not supported! */;

		// vtable[2] ParseKV
		// vtable[3] BFinishInitialization_Internal
		// vtable[4] BuildFullAttribute
		// vtable[5] GetAttributeName
		// vtable[6] FilloutAttribute
		// sizeof = 104
	};

public:

private:

	bool m_bStaticRecipe;  // +0x41
	bool m_bDisableDelete;  // +0x42

	class CDynamicRecipeComponentSpecificItemFromLootList : public CDynamicRecipeComponentSpecificItem {
	public:

	private:

		CDynamicRecipeComponentSpecificItemFromLootList(const CDynamicRecipeComponentSpecificItemFromLootList &);
		CDynamicRecipeComponentSpecificItemFromLootList(bool);
		virtual ~CDynamicRecipeComponentSpecificItemFromLootList();
		virtual bool ParseKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, CEconTool_ItemDynamicRecipe *);
		virtual bool BFinishInitialization_Internal(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);

		// vtable[2] ParseKV
		// vtable[3] BFinishInitialization_Internal
		// sizeof = 128
	};

	class CDynamicRecipeComponentSpecificItem : public CBaseRecipeComponent {
	public:

	private:

		CDynamicRecipeComponentSpecificItem(const CDynamicRecipeComponentSpecificItem &);
		CDynamicRecipeComponentSpecificItem(bool);
		virtual ~CDynamicRecipeComponentSpecificItem();
		virtual bool ParseKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, CEconTool_ItemDynamicRecipe *);
		virtual bool BFinishInitialization_Internal(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
		virtual bool FilloutAttribute(CAttribute_ItemDynamicRecipeComponent &, uint32 &);

		// vtable[2] ParseKV
		// vtable[3] BFinishInitialization_Internal
		// vtable[6] FilloutAttribute
		// sizeof = 120
	};

	class CDynamicRecipeComponentCriteriaMatch : public CBaseRecipeComponent {
	public:

	private:

		bool m_bAllowBundles;  // +0x61
		CDynamicRecipeComponentCriteriaMatch(const CDynamicRecipeComponentCriteriaMatch &);
		CDynamicRecipeComponentCriteriaMatch(bool);
		virtual ~CDynamicRecipeComponentCriteriaMatch();
		virtual bool ParseKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, CEconTool_ItemDynamicRecipe *);
		virtual bool BFinishInitialization_Internal(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
		virtual bool FilloutAttribute(CAttribute_ItemDynamicRecipeComponent &, uint32 &);

		// vtable[2] ParseKV
		// vtable[3] BFinishInitialization_Internal
		// vtable[6] FilloutAttribute
		// sizeof = 104
	};

	class CDynamicRecipeComponentLootList : public CBaseRecipeComponent {
	public:

	private:

		CDynamicRecipeComponentLootList(const CDynamicRecipeComponentLootList &);
		CDynamicRecipeComponentLootList(bool);
		virtual ~CDynamicRecipeComponentLootList();
		virtual bool ParseKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, CEconTool_ItemDynamicRecipe *);
		virtual bool BFinishInitialization_Internal(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
		virtual bool FilloutAttribute(CAttribute_ItemDynamicRecipeComponent &, uint32 &);

		// vtable[2] ParseKV
		// vtable[3] BFinishInitialization_Internal
		// vtable[6] FilloutAttribute
		// sizeof = 112
	};

	class CStaticRecipeComponent : public CBaseRecipeComponent {
	public:

		CStaticRecipeComponent(bool);
		virtual bool ParseKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, CEconTool_ItemDynamicRecipe *);

	private:

		virtual bool FilloutAttribute(CAttribute_ItemDynamicRecipeComponent &, uint32 &);
		virtual ~CStaticRecipeComponent();

		// vtable[2] ParseKV
		// vtable[6] FilloutAttribute
		// sizeof = 104
	};
	CEconTool_ItemDynamicRecipe(const CEconTool_ItemDynamicRecipe &);
	CEconTool_ItemDynamicRecipe(const char *, const char *, item_capabilities_t, KeyValues *);
	virtual ~CEconTool_ItemDynamicRecipe();
	virtual bool CanApplyTo(const IEconItemInterface *, const IEconItemInterface *);
	virtual bool BFinishInitialization();
	bool BIsStaticRecipe();
	bool BShouldDisableDelete();
	const char * GetContextMenuPrompt();
	const char * GetContextMenuConfirm();
	const char * GetContextMenuConfirmTitle();
	void AddComponentWeight(float);
	virtual bool BInitFromKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	const CUtlVector<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent*, CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeC GetRecipeComponents();
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[3] CanApplyTo
	// vtable[6] BFinishInitialization
	// vtable[2] BInitFromKV
	// sizeof = 168
};
