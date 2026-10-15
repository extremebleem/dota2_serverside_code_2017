// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_shareddefs.h:626
struct ModifierVariant_t {
	enum VariantType_t {
		Variant_Null = 0,
		Variant_Float = 0x1,
		Variant_String = 0x2,
	};

private:

	float m_flVal;  // +0x4
	const char * m_szVal;  // +0x8
	ModifierVariant_t();
	ModifierVariant_t(float);
	ModifierVariant_t(bool);
	ModifierVariant_t(const char *);
	ModifierVariant_t(int);
	int GetIntValue();
	float GetFloatValue();
	const char * GetStringValue();
	bool IsFloatValue();
	bool IsStringValue();
	void ValidateType(VariantType_t);

	// sizeof = 16
};

// src/game/shared/dota/dota_shareddefs.h:1021
struct SCombatLogReference {
	uint16 m_unType;  // +0x0
	uint16 m_unSize;  // +0x2
	uint32 m_unOffset;  // +0x4

	// sizeof = 8
};

// src/game/shared/dota/dota_shareddefs.h:1368
class ClientQuickBuyItemState {
	class NetworkVar_nItemType {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_bPurchasable {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.ClientQuickBuyItemState;  // +0x0
private:

	typedef ClientQuickBuyItemState ThisClass;
	ClientQuickBuyItemState & operator=(ClientQuickBuyItemState &);
	ClientQuickBuyItemState & operator=(const ClientQuickBuyItemState &);
	~ClientQuickBuyItemState();
	ClientQuickBuyItemState(ClientQuickBuyItemState &);
	ClientQuickBuyItemState(const ClientQuickBuyItemState &);
	ClientQuickBuyItemState();

	void NetworkStateChanged();
	void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	void NetworkStateChangedLog(const char *, const char *);

	// vtable[0] Schema_DynamicBinding
	// sizeof = 24
};

// src/game/shared/dota/dota_shareddefs.h:1585
struct DOTASourceReferenceID_t {
	uint64 m_ulRepresentation;  // +0x0

	// sizeof = 8
};

// src/game/shared/dota/dota_shareddefs.h:1660
class CSpeechBubbleInfo {
	class NetworkVar_m_LocalizationStr {
		void NetworkStateChanged(void *);

		// sizeof = 1
	};

	class NetworkVar_m_hNPC {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flDuration {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_unOffsetX {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_unOffsetY {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_unCount {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.CSpeechBubbleInfo;  // +0x0
private:

	CSpeechBubbleInfo(CSpeechBubbleInfo &);
	CSpeechBubbleInfo(const CSpeechBubbleInfo &);
	~CSpeechBubbleInfo();
	CSpeechBubbleInfo();

	void NetworkStateChanged();
	void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	void NetworkStateChangedLog(const char *, const char *);

	// vtable[0] Schema_DynamicBinding
	// sizeof = 296
};

// src/game/shared/dota/dota_shareddefs.h:1660
class CSpeechBubbleInfo {
	class NetworkVar_m_LocalizationStr {
		void NetworkStateChanged(void *);

		// sizeof = 1
	};

	class NetworkVar_m_hNPC {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flDuration {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_unOffsetX {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_unOffsetY {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_unCount {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.CSpeechBubbleInfo;  // +0x0
private:

	typedef CSpeechBubbleInfo ThisClass;
	CSpeechBubbleInfo(CSpeechBubbleInfo &);
	CSpeechBubbleInfo(const CSpeechBubbleInfo &);
	~CSpeechBubbleInfo();
	CSpeechBubbleInfo();

	void NetworkStateChanged();
	void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	void NetworkStateChangedLog(const char *, const char *);
	CSpeechBubbleInfo & operator=(const CSpeechBubbleInfo &);

	// vtable[0] Schema_DynamicBinding
	// sizeof = 296
};

// src/game/shared/dota/dota_shareddefs.h:2004
struct WearableSpawnInfo_t {
	bool m_bDeleteEconItemOnDestroy;  // +0xa
	bool m_bGeneratingEconItem;  // +0xb
	WearableSpawnInfo_t();
	WearableSpawnInfo_t(item_definition_index_t);
	~WearableSpawnInfo_t();

	// sizeof = 16
};

// src/game/shared/dota/dota_shareddefs.h:2087
class CUnitOrders {
private:

	int m_nIssuerPlayerIndex;  // +0x0
	int m_nOrderSequenceNumber;  // +0x4
	int m_nOrderType;  // +0x20
	bool m_bQueue;  // +0x38

	CUnitOrders();
	void Reset();
	~CUnitOrders();

	// sizeof = 64
};
