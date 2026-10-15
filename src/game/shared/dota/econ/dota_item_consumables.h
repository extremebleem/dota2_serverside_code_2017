// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/econ/dota_item_consumables.h:65
class CDOTAConsumableEconItem : public IEconConsumable {
public:

	int ()() * * _vptr.CDOTAConsumableEconItem;  // +0x0
protected:

	const CEconItemView * m_pItemView;  // +0x10
	int m_iQuantity;  // +0x20
	CDOTAConsumableEconItem(CDOTAConsumableEconItem &);
	CDOTAConsumableEconItem(const CDOTAConsumableEconItem &);
	CDOTAConsumableEconItem();
	CDOTAConsumableEconItem(const CEconItemView *);
	CDOTAConsumableEconItem * CreateBehaviorForEconItem(const CEconItemView *);
	virtual bool IsServerEconItem();
	ActionItemResult_t TryUse();
	bool ConsumeItem(uint32, uint64);
	virtual ActionItemResult_t CanUse();
	virtual ActionItemResult_t ApplyEffects();
	virtual bool RequiresGC();
	virtual bool NotifyGC();
	virtual bool ShouldSendServerPlayers();
	void SetItem(const CEconItemView *);
	void SetInitiator(CDOTAPlayer *);
	void SetQuantity(int);

	// vtable[0] IsServerEconItem
	// vtable[1] CanUse
	// vtable[2] ApplyEffects
	// vtable[3] RequiresGC
	// vtable[4] NotifyGC
	// vtable[5] ShouldSendServerPlayers
	// sizeof = 40
};

// src/game/shared/dota/econ/dota_item_consumables.h:105
class CDOTAHeroTaunt : public CDOTAConsumableEconItem {
public:

	CDOTAHeroTaunt(CDOTAHeroTaunt &);
	CDOTAHeroTaunt(const CDOTAHeroTaunt &);
	CDOTAHeroTaunt();
	virtual bool IsServerEconItem();
	bool PlayActivityAsGesture();
	Activity GetTauntActivity();
	int GetSpeechConcept();
	DOTA_CHAT_MESSAGE GetChatMessage();
	virtual ActionItemResult_t CanUse();
	virtual ActionItemResult_t ApplyEffects();

	// vtable[0] IsServerEconItem
	// vtable[1] CanUse
	// vtable[2] ApplyEffects
	// sizeof = 40
};

// src/game/shared/dota/econ/dota_item_consumables.h:125
class CDOTAVictoryPrediction : public CDOTAConsumableEconItem {
public:

	bool m_bAllPickOnly;  // +0x24
	CDOTAVictoryPrediction(CDOTAVictoryPrediction &);
	CDOTAVictoryPrediction(const CDOTAVictoryPrediction &);
	CDOTAVictoryPrediction(bool);
	virtual bool IsServerEconItem();
	int GetSpeechConcept();
	DOTA_CHAT_MESSAGE GetChatMessage();
	virtual ActionItemResult_t CanUse();
	virtual ActionItemResult_t ApplyEffects();

	// vtable[0] IsServerEconItem
	// vtable[1] CanUse
	// vtable[2] ApplyEffects
	// sizeof = 40
};

// src/game/shared/dota/econ/dota_item_consumables.h:150
class CDOTAHeroEconItemAbility : public CDOTAConsumableEconItem {
public:

	CDOTAHeroEconItemAbility(CDOTAHeroEconItemAbility &);
	CDOTAHeroEconItemAbility(const CDOTAHeroEconItemAbility &);
	CDOTAHeroEconItemAbility();
	virtual bool IsServerEconItem();
	const char * GetAbilityName();
	virtual ActionItemResult_t CanUse();
	virtual ActionItemResult_t ApplyEffects();

	// vtable[0] IsServerEconItem
	// vtable[1] CanUse
	// vtable[2] ApplyEffects
	// sizeof = 40
};
