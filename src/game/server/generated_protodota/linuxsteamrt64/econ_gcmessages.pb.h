// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:620
class CMsgApplyAutograph : public Message {
public:

	static const int kAutographItemIdFieldNumber = 1;
	static const int kItemItemIdFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 autograph_item_id_;  // +0x18
	uint64 item_item_id_;  // +0x20

	static CMsgApplyAutograph * default_instance_;
	CMsgApplyAutograph();
	virtual ~CMsgApplyAutograph();
	CMsgApplyAutograph(const CMsgApplyAutograph &);
	CMsgApplyAutograph & operator=(const CMsgApplyAutograph &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgApplyAutograph & default_instance();
	void Swap(CMsgApplyAutograph *);
	virtual CMsgApplyAutograph * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgApplyAutograph &);
	void MergeFrom(const CMsgApplyAutograph &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_autograph_item_id();
	void clear_autograph_item_id();
	uint64 autograph_item_id();
	void set_autograph_item_id(uint64);
	bool has_item_item_id();
	void clear_item_item_id();
	uint64 item_item_id();
	void set_item_item_id(uint64);
	void set_has_autograph_item_id();
	void clear_has_autograph_item_id();
	void set_has_item_item_id();
	void clear_has_item_item_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:709
class CMsgAdjustItemEquippedState : public Message {
public:

	static const int kItemIdFieldNumber = 1;
	static const int kNewClassFieldNumber = 2;
	static const int kNewSlotFieldNumber = 3;
	static const int kStyleIndexFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 item_id_;  // +0x18
	uint32 new_class_;  // +0x20
	uint32 new_slot_;  // +0x24
	uint32 style_index_;  // +0x28

	static CMsgAdjustItemEquippedState * default_instance_;
	CMsgAdjustItemEquippedState();
	virtual ~CMsgAdjustItemEquippedState();
	CMsgAdjustItemEquippedState(const CMsgAdjustItemEquippedState &);
	CMsgAdjustItemEquippedState & operator=(const CMsgAdjustItemEquippedState &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgAdjustItemEquippedState & default_instance();
	void Swap(CMsgAdjustItemEquippedState *);
	virtual CMsgAdjustItemEquippedState * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgAdjustItemEquippedState &);
	void MergeFrom(const CMsgAdjustItemEquippedState &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_item_id();
	void clear_item_id();
	uint64 item_id();
	void set_item_id(uint64);
	bool has_new_class();
	void clear_new_class();
	uint32 new_class();
	void set_new_class(uint32);
	bool has_new_slot();
	void clear_new_slot();
	uint32 new_slot();
	void set_new_slot(uint32);
	bool has_style_index();
	void clear_style_index();
	uint32 style_index();
	void set_style_index(uint32);
	void set_has_item_id();
	void clear_has_item_id();
	void set_has_new_class();
	void clear_has_new_class();
	void set_has_new_slot();
	void clear_has_new_slot();
	void set_has_style_index();
	void clear_has_style_index();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:818
class CMsgEconPlayerStrangeCountAdjustment_CStrangeCountAdjustment : public Message {
public:

	static const int kEventTypeFieldNumber = 1;
	static const int kItemIdFieldNumber = 2;
	static const int kAdjustmentFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 item_id_;  // +0x18
	uint32 event_type_;  // +0x20
	uint32 adjustment_;  // +0x24

	static CMsgEconPlayerStrangeCountAdjustment_CStrangeCountAdjustment * default_instance_;
	CMsgEconPlayerStrangeCountAdjustment_CStrangeCountAdjustment();
	virtual ~CMsgEconPlayerStrangeCountAdjustment_CStrangeCountAdjustment();
	CMsgEconPlayerStrangeCountAdjustment_CStrangeCountAdjustment(const CMsgEconPlayerStrangeCountAdjustment_CStrangeCountAdjustment &);
	CMsgEconPlayerStrangeCountAdjustment_CStrangeCountAdjustment & operator=(const CMsgEconPlayerStrangeCountAdjustment_CStrangeCountAdjustment &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgEconPlayerStrangeCountAdjustment_CStrangeCountAdjustment & default_instance();
	void Swap(CMsgEconPlayerStrangeCountAdjustment_CStrangeCountAdjustment *);
	virtual CMsgEconPlayerStrangeCountAdjustment_CStrangeCountAdjustment * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgEconPlayerStrangeCountAdjustment_CStrangeCountAdjustment &);
	void MergeFrom(const CMsgEconPlayerStrangeCountAdjustment_CStrangeCountAdjustment &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_event_type();
	void clear_event_type();
	uint32 event_type();
	void set_event_type(uint32);
	bool has_item_id();
	void clear_item_id();
	uint64 item_id();
	void set_item_id(uint64);
	bool has_adjustment();
	void clear_adjustment();
	uint32 adjustment();
	void set_adjustment(uint32);
	void set_has_event_type();
	void clear_has_event_type();
	void set_has_item_id();
	void clear_has_item_id();
	void set_has_adjustment();
	void clear_has_adjustment();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:917
class CMsgEconPlayerStrangeCountAdjustment : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kStrangeCountAdjustmentsFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x30

	static CMsgEconPlayerStrangeCountAdjustment * default_instance_;
	CMsgEconPlayerStrangeCountAdjustment();
	virtual ~CMsgEconPlayerStrangeCountAdjustment();
	CMsgEconPlayerStrangeCountAdjustment(const CMsgEconPlayerStrangeCountAdjustment &);
	CMsgEconPlayerStrangeCountAdjustment & operator=(const CMsgEconPlayerStrangeCountAdjustment &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgEconPlayerStrangeCountAdjustment & default_instance();
	void Swap(CMsgEconPlayerStrangeCountAdjustment *);
	virtual CMsgEconPlayerStrangeCountAdjustment * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgEconPlayerStrangeCountAdjustment &);
	void MergeFrom(const CMsgEconPlayerStrangeCountAdjustment &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	int strange_count_adjustments_size();
	void clear_strange_count_adjustments();
	const CMsgEconPlayerStrangeCountAdjustment_CStrangeCountAdjustment & strange_count_adjustments(int);
	CMsgEconPlayerStrangeCountAdjustment_CStrangeCountAdjustment * mutable_strange_count_adjustments(int);
	CMsgEconPlayerStrangeCountAdjustment_CStrangeCountAdjustment * add_strange_count_adjustments();
	const RepeatedPtrField<CMsgEconPlayerStrangeCountAdjustment_CStrangeCountAdjustment> & strange_count_adjustments();
	RepeatedPtrField<CMsgEconPlayerStrangeCountAdjustment_CStrangeCountAdjustment> * mutable_strange_count_adjustments();
	void set_has_account_id();
	void clear_has_account_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 56
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:1011
class CMsgRequestItemPurgatory_FinalizePurchase : public Message {
public:

	static const int kItemIdsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgRequestItemPurgatory_FinalizePurchase * default_instance_;
	CMsgRequestItemPurgatory_FinalizePurchase();
	virtual ~CMsgRequestItemPurgatory_FinalizePurchase();
	CMsgRequestItemPurgatory_FinalizePurchase(const CMsgRequestItemPurgatory_FinalizePurchase &);
	CMsgRequestItemPurgatory_FinalizePurchase & operator=(const CMsgRequestItemPurgatory_FinalizePurchase &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgRequestItemPurgatory_FinalizePurchase & default_instance();
	void Swap(CMsgRequestItemPurgatory_FinalizePurchase *);
	virtual CMsgRequestItemPurgatory_FinalizePurchase * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgRequestItemPurgatory_FinalizePurchase &);
	void MergeFrom(const CMsgRequestItemPurgatory_FinalizePurchase &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int item_ids_size();
	void clear_item_ids();
	uint64 item_ids(int);
	void set_item_ids(int, uint64);
	void add_item_ids(uint64);
	const RepeatedField<long unsigned int> & item_ids();
	RepeatedField<long unsigned int> * mutable_item_ids();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:1093
class CMsgRequestItemPurgatory_FinalizePurchaseResponse : public Message {
public:

	static const int kResultFieldNumber = 1;
	static const int kItemIdsFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 result_;  // +0x28

	static CMsgRequestItemPurgatory_FinalizePurchaseResponse * default_instance_;
	CMsgRequestItemPurgatory_FinalizePurchaseResponse();
	virtual ~CMsgRequestItemPurgatory_FinalizePurchaseResponse();
	CMsgRequestItemPurgatory_FinalizePurchaseResponse(const CMsgRequestItemPurgatory_FinalizePurchaseResponse &);
	CMsgRequestItemPurgatory_FinalizePurchaseResponse & operator=(const CMsgRequestItemPurgatory_FinalizePurchaseResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgRequestItemPurgatory_FinalizePurchaseResponse & default_instance();
	void Swap(CMsgRequestItemPurgatory_FinalizePurchaseResponse *);
	virtual CMsgRequestItemPurgatory_FinalizePurchaseResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgRequestItemPurgatory_FinalizePurchaseResponse &);
	void MergeFrom(const CMsgRequestItemPurgatory_FinalizePurchaseResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_result();
	void clear_result();
	uint32 result();
	void set_result(uint32);
	int item_ids_size();
	void clear_item_ids();
	uint64 item_ids(int);
	void set_item_ids(int, uint64);
	void add_item_ids(uint64);
	const RepeatedField<long unsigned int> & item_ids();
	RepeatedField<long unsigned int> * mutable_item_ids();
	void set_has_result();
	void clear_has_result();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:1185
class CMsgRequestItemPurgatory_RefundPurchase : public Message {
public:

	static const int kItemIdsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgRequestItemPurgatory_RefundPurchase * default_instance_;
	CMsgRequestItemPurgatory_RefundPurchase();
	virtual ~CMsgRequestItemPurgatory_RefundPurchase();
	CMsgRequestItemPurgatory_RefundPurchase(const CMsgRequestItemPurgatory_RefundPurchase &);
	CMsgRequestItemPurgatory_RefundPurchase & operator=(const CMsgRequestItemPurgatory_RefundPurchase &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgRequestItemPurgatory_RefundPurchase & default_instance();
	void Swap(CMsgRequestItemPurgatory_RefundPurchase *);
	virtual CMsgRequestItemPurgatory_RefundPurchase * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgRequestItemPurgatory_RefundPurchase &);
	void MergeFrom(const CMsgRequestItemPurgatory_RefundPurchase &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int item_ids_size();
	void clear_item_ids();
	uint64 item_ids(int);
	void set_item_ids(int, uint64);
	void add_item_ids(uint64);
	const RepeatedField<long unsigned int> & item_ids();
	RepeatedField<long unsigned int> * mutable_item_ids();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:1267
class CMsgRequestItemPurgatory_RefundPurchaseResponse : public Message {
public:

	static const int kResultFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 result_;  // +0x18

	static CMsgRequestItemPurgatory_RefundPurchaseResponse * default_instance_;
	CMsgRequestItemPurgatory_RefundPurchaseResponse();
	virtual ~CMsgRequestItemPurgatory_RefundPurchaseResponse();
	CMsgRequestItemPurgatory_RefundPurchaseResponse(const CMsgRequestItemPurgatory_RefundPurchaseResponse &);
	CMsgRequestItemPurgatory_RefundPurchaseResponse & operator=(const CMsgRequestItemPurgatory_RefundPurchaseResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgRequestItemPurgatory_RefundPurchaseResponse & default_instance();
	void Swap(CMsgRequestItemPurgatory_RefundPurchaseResponse *);
	virtual CMsgRequestItemPurgatory_RefundPurchaseResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgRequestItemPurgatory_RefundPurchaseResponse &);
	void MergeFrom(const CMsgRequestItemPurgatory_RefundPurchaseResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_result();
	void clear_result();
	uint32 result();
	void set_result(uint32);
	void set_has_result();
	void clear_has_result();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:1346
class CMsgCraftingResponse : public Message {
public:

	static const int kItemIdsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgCraftingResponse * default_instance_;
	CMsgCraftingResponse();
	virtual ~CMsgCraftingResponse();
	CMsgCraftingResponse(const CMsgCraftingResponse &);
	CMsgCraftingResponse & operator=(const CMsgCraftingResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgCraftingResponse & default_instance();
	void Swap(CMsgCraftingResponse *);
	virtual CMsgCraftingResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgCraftingResponse &);
	void MergeFrom(const CMsgCraftingResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int item_ids_size();
	void clear_item_ids();
	uint64 item_ids(int);
	void set_item_ids(int, uint64);
	void add_item_ids(uint64);
	const RepeatedField<long unsigned int> & item_ids();
	RepeatedField<long unsigned int> * mutable_item_ids();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:1428
class CMsgGCRequestStoreSalesData : public Message {
public:

	static const int kVersionFieldNumber = 1;
	static const int kCurrencyFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 version_;  // +0x18
	uint32 currency_;  // +0x1c

	static CMsgGCRequestStoreSalesData * default_instance_;
	CMsgGCRequestStoreSalesData();
	virtual ~CMsgGCRequestStoreSalesData();
	CMsgGCRequestStoreSalesData(const CMsgGCRequestStoreSalesData &);
	CMsgGCRequestStoreSalesData & operator=(const CMsgGCRequestStoreSalesData &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCRequestStoreSalesData & default_instance();
	void Swap(CMsgGCRequestStoreSalesData *);
	virtual CMsgGCRequestStoreSalesData * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCRequestStoreSalesData &);
	void MergeFrom(const CMsgGCRequestStoreSalesData &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_version();
	void clear_version();
	uint32 version();
	void set_version(uint32);
	bool has_currency();
	void clear_currency();
	uint32 currency();
	void set_currency(uint32);
	void set_has_version();
	void clear_has_version();
	void set_has_currency();
	void clear_has_currency();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:1517
class CMsgGCRequestStoreSalesDataResponse_Price : public Message {
public:

	static const int kItemDefFieldNumber = 1;
	static const int kPriceFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 item_def_;  // +0x18
	uint32 price_;  // +0x1c

	static CMsgGCRequestStoreSalesDataResponse_Price * default_instance_;
	CMsgGCRequestStoreSalesDataResponse_Price();
	virtual ~CMsgGCRequestStoreSalesDataResponse_Price();
	CMsgGCRequestStoreSalesDataResponse_Price(const CMsgGCRequestStoreSalesDataResponse_Price &);
	CMsgGCRequestStoreSalesDataResponse_Price & operator=(const CMsgGCRequestStoreSalesDataResponse_Price &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCRequestStoreSalesDataResponse_Price & default_instance();
	void Swap(CMsgGCRequestStoreSalesDataResponse_Price *);
	virtual CMsgGCRequestStoreSalesDataResponse_Price * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCRequestStoreSalesDataResponse_Price &);
	void MergeFrom(const CMsgGCRequestStoreSalesDataResponse_Price &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_item_def();
	void clear_item_def();
	uint32 item_def();
	void set_item_def(uint32);
	bool has_price();
	void clear_price();
	uint32 price();
	void set_price(uint32);
	void set_has_item_def();
	void clear_has_item_def();
	void set_has_price();
	void clear_has_price();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:1606
class CMsgGCRequestStoreSalesDataResponse : public Message {
public:

	static const int kSalePriceFieldNumber = 1;
	static const int kVersionFieldNumber = 2;
	static const int kExpirationTimeFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 version_;  // +0x30
	uint32 expiration_time_;  // +0x34

	static CMsgGCRequestStoreSalesDataResponse * default_instance_;
	CMsgGCRequestStoreSalesDataResponse();
	virtual ~CMsgGCRequestStoreSalesDataResponse();
	CMsgGCRequestStoreSalesDataResponse(const CMsgGCRequestStoreSalesDataResponse &);
	CMsgGCRequestStoreSalesDataResponse & operator=(const CMsgGCRequestStoreSalesDataResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCRequestStoreSalesDataResponse & default_instance();
	void Swap(CMsgGCRequestStoreSalesDataResponse *);
	virtual CMsgGCRequestStoreSalesDataResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCRequestStoreSalesDataResponse &);
	void MergeFrom(const CMsgGCRequestStoreSalesDataResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int sale_price_size();
	void clear_sale_price();
	const CMsgGCRequestStoreSalesDataResponse_Price & sale_price(int);
	CMsgGCRequestStoreSalesDataResponse_Price * mutable_sale_price(int);
	CMsgGCRequestStoreSalesDataResponse_Price * add_sale_price();
	const RepeatedPtrField<CMsgGCRequestStoreSalesDataResponse_Price> & sale_price();
	RepeatedPtrField<CMsgGCRequestStoreSalesDataResponse_Price> * mutable_sale_price();
	bool has_version();
	void clear_version();
	uint32 version();
	void set_version(uint32);
	bool has_expiration_time();
	void clear_expiration_time();
	uint32 expiration_time();
	void set_expiration_time(uint32);
	void set_has_version();
	void clear_has_version();
	void set_has_expiration_time();
	void clear_has_expiration_time();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 56
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:1710
class CMsgGCRequestStoreSalesDataUpToDateResponse : public Message {
public:

	static const int kVersionFieldNumber = 1;
	static const int kExpirationTimeFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 version_;  // +0x18
	uint32 expiration_time_;  // +0x1c

	static CMsgGCRequestStoreSalesDataUpToDateResponse * default_instance_;
	CMsgGCRequestStoreSalesDataUpToDateResponse();
	virtual ~CMsgGCRequestStoreSalesDataUpToDateResponse();
	CMsgGCRequestStoreSalesDataUpToDateResponse(const CMsgGCRequestStoreSalesDataUpToDateResponse &);
	CMsgGCRequestStoreSalesDataUpToDateResponse & operator=(const CMsgGCRequestStoreSalesDataUpToDateResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCRequestStoreSalesDataUpToDateResponse & default_instance();
	void Swap(CMsgGCRequestStoreSalesDataUpToDateResponse *);
	virtual CMsgGCRequestStoreSalesDataUpToDateResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCRequestStoreSalesDataUpToDateResponse &);
	void MergeFrom(const CMsgGCRequestStoreSalesDataUpToDateResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_version();
	void clear_version();
	uint32 version();
	void set_version(uint32);
	bool has_expiration_time();
	void clear_expiration_time();
	uint32 expiration_time();
	void set_expiration_time(uint32);
	void set_has_version();
	void clear_has_version();
	void set_has_expiration_time();
	void clear_has_expiration_time();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:1799
class CMsgGCToGCPingRequest : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgGCToGCPingRequest * default_instance_;
	CMsgGCToGCPingRequest();
	virtual ~CMsgGCToGCPingRequest();
	CMsgGCToGCPingRequest(const CMsgGCToGCPingRequest &);
	CMsgGCToGCPingRequest & operator=(const CMsgGCToGCPingRequest &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCPingRequest & default_instance();
	void Swap(CMsgGCToGCPingRequest *);
	virtual CMsgGCToGCPingRequest * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCPingRequest &);
	void MergeFrom(const CMsgGCToGCPingRequest &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 24
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:1868
class CMsgGCToGCPingResponse : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgGCToGCPingResponse * default_instance_;
	CMsgGCToGCPingResponse();
	virtual ~CMsgGCToGCPingResponse();
	CMsgGCToGCPingResponse(const CMsgGCToGCPingResponse &);
	CMsgGCToGCPingResponse & operator=(const CMsgGCToGCPingResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCPingResponse & default_instance();
	void Swap(CMsgGCToGCPingResponse *);
	virtual CMsgGCToGCPingResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCPingResponse &);
	void MergeFrom(const CMsgGCToGCPingResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 24
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:1937
class CMsgGCToGCGetUserSessionServer : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18

	static CMsgGCToGCGetUserSessionServer * default_instance_;
	CMsgGCToGCGetUserSessionServer();
	virtual ~CMsgGCToGCGetUserSessionServer();
	CMsgGCToGCGetUserSessionServer(const CMsgGCToGCGetUserSessionServer &);
	CMsgGCToGCGetUserSessionServer & operator=(const CMsgGCToGCGetUserSessionServer &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCGetUserSessionServer & default_instance();
	void Swap(CMsgGCToGCGetUserSessionServer *);
	virtual CMsgGCToGCGetUserSessionServer * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCGetUserSessionServer &);
	void MergeFrom(const CMsgGCToGCGetUserSessionServer &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	void set_has_account_id();
	void clear_has_account_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:2016
class CMsgGCToGCGetUserSessionServerResponse : public Message {
public:

	static const int kServerSteamIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 server_steam_id_;  // +0x18

	static CMsgGCToGCGetUserSessionServerResponse * default_instance_;
	CMsgGCToGCGetUserSessionServerResponse();
	virtual ~CMsgGCToGCGetUserSessionServerResponse();
	CMsgGCToGCGetUserSessionServerResponse(const CMsgGCToGCGetUserSessionServerResponse &);
	CMsgGCToGCGetUserSessionServerResponse & operator=(const CMsgGCToGCGetUserSessionServerResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCGetUserSessionServerResponse & default_instance();
	void Swap(CMsgGCToGCGetUserSessionServerResponse *);
	virtual CMsgGCToGCGetUserSessionServerResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCGetUserSessionServerResponse &);
	void MergeFrom(const CMsgGCToGCGetUserSessionServerResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_server_steam_id();
	void clear_server_steam_id();
	uint64 server_steam_id();
	void set_server_steam_id(uint64);
	void set_has_server_steam_id();
	void clear_has_server_steam_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:2095
class CMsgGCToGCGetUserServerMembers : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kMaxSpectatorsFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18
	uint32 max_spectators_;  // +0x1c

	static CMsgGCToGCGetUserServerMembers * default_instance_;
	CMsgGCToGCGetUserServerMembers();
	virtual ~CMsgGCToGCGetUserServerMembers();
	CMsgGCToGCGetUserServerMembers(const CMsgGCToGCGetUserServerMembers &);
	CMsgGCToGCGetUserServerMembers & operator=(const CMsgGCToGCGetUserServerMembers &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCGetUserServerMembers & default_instance();
	void Swap(CMsgGCToGCGetUserServerMembers *);
	virtual CMsgGCToGCGetUserServerMembers * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCGetUserServerMembers &);
	void MergeFrom(const CMsgGCToGCGetUserServerMembers &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	bool has_max_spectators();
	void clear_max_spectators();
	uint32 max_spectators();
	void set_max_spectators(uint32);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_max_spectators();
	void clear_has_max_spectators();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:2184
class CMsgGCToGCGetUserServerMembersResponse : public Message {
public:

	static const int kMemberAccountIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgGCToGCGetUserServerMembersResponse * default_instance_;
	CMsgGCToGCGetUserServerMembersResponse();
	virtual ~CMsgGCToGCGetUserServerMembersResponse();
	CMsgGCToGCGetUserServerMembersResponse(const CMsgGCToGCGetUserServerMembersResponse &);
	CMsgGCToGCGetUserServerMembersResponse & operator=(const CMsgGCToGCGetUserServerMembersResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCGetUserServerMembersResponse & default_instance();
	void Swap(CMsgGCToGCGetUserServerMembersResponse *);
	virtual CMsgGCToGCGetUserServerMembersResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCGetUserServerMembersResponse &);
	void MergeFrom(const CMsgGCToGCGetUserServerMembersResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int member_account_id_size();
	void clear_member_account_id();
	uint32 member_account_id(int);
	void set_member_account_id(int, uint32);
	void add_member_account_id(uint32);
	const RepeatedField<unsigned int> & member_account_id();
	RepeatedField<unsigned int> * mutable_member_account_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:2266
class CMsgLookupMultipleAccountNames : public Message {
public:

	static const int kAccountidsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int _accountids_cached_byte_size_;  // +0x28

	static CMsgLookupMultipleAccountNames * default_instance_;
	CMsgLookupMultipleAccountNames();
	virtual ~CMsgLookupMultipleAccountNames();
	CMsgLookupMultipleAccountNames(const CMsgLookupMultipleAccountNames &);
	CMsgLookupMultipleAccountNames & operator=(const CMsgLookupMultipleAccountNames &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgLookupMultipleAccountNames & default_instance();
	void Swap(CMsgLookupMultipleAccountNames *);
	virtual CMsgLookupMultipleAccountNames * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgLookupMultipleAccountNames &);
	void MergeFrom(const CMsgLookupMultipleAccountNames &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int accountids_size();
	void clear_accountids();
	uint32 accountids(int);
	void set_accountids(int, uint32);
	void add_accountids(uint32);
	const RepeatedField<unsigned int> & accountids();
	RepeatedField<unsigned int> * mutable_accountids();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:2349
class CMsgLookupMultipleAccountNamesResponse_Account : public Message {
public:

	static const int kAccountidFieldNumber = 1;
	static const int kPersonaFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * persona_;  // +0x18
	uint32 accountid_;  // +0x20

	static CMsgLookupMultipleAccountNamesResponse_Account * default_instance_;
	CMsgLookupMultipleAccountNamesResponse_Account();
	virtual ~CMsgLookupMultipleAccountNamesResponse_Account();
	CMsgLookupMultipleAccountNamesResponse_Account(const CMsgLookupMultipleAccountNamesResponse_Account &);
	CMsgLookupMultipleAccountNamesResponse_Account & operator=(const CMsgLookupMultipleAccountNamesResponse_Account &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgLookupMultipleAccountNamesResponse_Account & default_instance();
	void Swap(CMsgLookupMultipleAccountNamesResponse_Account *);
	virtual CMsgLookupMultipleAccountNamesResponse_Account * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgLookupMultipleAccountNamesResponse_Account &);
	void MergeFrom(const CMsgLookupMultipleAccountNamesResponse_Account &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_accountid();
	void clear_accountid();
	uint32 accountid();
	void set_accountid(uint32);
	bool has_persona();
	void clear_persona();
	const string & persona();
	void set_persona(const string &);
	void set_persona(const char *);
	void set_persona(const char *, size_t);
	string * mutable_persona();
	string * release_persona();
	void set_allocated_persona(string *);
	void set_has_accountid();
	void clear_has_accountid();
	void set_has_persona();
	void clear_has_persona();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:2443
class CMsgLookupMultipleAccountNamesResponse : public Message {
public:

	static const int kAccountsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgLookupMultipleAccountNamesResponse * default_instance_;
	CMsgLookupMultipleAccountNamesResponse();
	virtual ~CMsgLookupMultipleAccountNamesResponse();
	CMsgLookupMultipleAccountNamesResponse(const CMsgLookupMultipleAccountNamesResponse &);
	CMsgLookupMultipleAccountNamesResponse & operator=(const CMsgLookupMultipleAccountNamesResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgLookupMultipleAccountNamesResponse & default_instance();
	void Swap(CMsgLookupMultipleAccountNamesResponse *);
	virtual CMsgLookupMultipleAccountNamesResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgLookupMultipleAccountNamesResponse &);
	void MergeFrom(const CMsgLookupMultipleAccountNamesResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int accounts_size();
	void clear_accounts();
	const CMsgLookupMultipleAccountNamesResponse_Account & accounts(int);
	CMsgLookupMultipleAccountNamesResponse_Account * mutable_accounts(int);
	CMsgLookupMultipleAccountNamesResponse_Account * add_accounts();
	const RepeatedPtrField<CMsgLookupMultipleAccountNamesResponse_Account> & accounts();
	RepeatedPtrField<CMsgLookupMultipleAccountNamesResponse_Account> * mutable_accounts();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:2527
class CMsgGCToGCGetUserPCBangNo : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18

	static CMsgGCToGCGetUserPCBangNo * default_instance_;
	CMsgGCToGCGetUserPCBangNo();
	virtual ~CMsgGCToGCGetUserPCBangNo();
	CMsgGCToGCGetUserPCBangNo(const CMsgGCToGCGetUserPCBangNo &);
	CMsgGCToGCGetUserPCBangNo & operator=(const CMsgGCToGCGetUserPCBangNo &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCGetUserPCBangNo & default_instance();
	void Swap(CMsgGCToGCGetUserPCBangNo *);
	virtual CMsgGCToGCGetUserPCBangNo * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCGetUserPCBangNo &);
	void MergeFrom(const CMsgGCToGCGetUserPCBangNo &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	void set_has_account_id();
	void clear_has_account_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:2606
class CMsgGCToGCGetUserPCBangNoResponse : public Message {
public:

	static const int kPcBangNoFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 pc_bang_no_;  // +0x18

	static CMsgGCToGCGetUserPCBangNoResponse * default_instance_;
	CMsgGCToGCGetUserPCBangNoResponse();
	virtual ~CMsgGCToGCGetUserPCBangNoResponse();
	CMsgGCToGCGetUserPCBangNoResponse(const CMsgGCToGCGetUserPCBangNoResponse &);
	CMsgGCToGCGetUserPCBangNoResponse & operator=(const CMsgGCToGCGetUserPCBangNoResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCGetUserPCBangNoResponse & default_instance();
	void Swap(CMsgGCToGCGetUserPCBangNoResponse *);
	virtual CMsgGCToGCGetUserPCBangNoResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCGetUserPCBangNoResponse &);
	void MergeFrom(const CMsgGCToGCGetUserPCBangNoResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_pc_bang_no();
	void clear_pc_bang_no();
	uint32 pc_bang_no();
	void set_pc_bang_no(uint32);
	void set_has_pc_bang_no();
	void clear_has_pc_bang_no();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:2685
class CMsgRequestCrateItems : public Message {
public:

	static const int kCrateItemDefFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 crate_item_def_;  // +0x18

	static CMsgRequestCrateItems * default_instance_;
	CMsgRequestCrateItems();
	virtual ~CMsgRequestCrateItems();
	CMsgRequestCrateItems(const CMsgRequestCrateItems &);
	CMsgRequestCrateItems & operator=(const CMsgRequestCrateItems &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgRequestCrateItems & default_instance();
	void Swap(CMsgRequestCrateItems *);
	virtual CMsgRequestCrateItems * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgRequestCrateItems &);
	void MergeFrom(const CMsgRequestCrateItems &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_crate_item_def();
	void clear_crate_item_def();
	uint32 crate_item_def();
	void set_crate_item_def(uint32);
	void set_has_crate_item_def();
	void clear_has_crate_item_def();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:2764
class CMsgRequestCrateItemsResponse : public Message {
public:

	static const CMsgRequestCrateItemsResponse_EResult k_Succeeded;
	static const CMsgRequestCrateItemsResponse_EResult k_Failed = 1;
	static const CMsgRequestCrateItemsResponse_EResult EResult_MIN;
	static const CMsgRequestCrateItemsResponse_EResult EResult_MAX = 1;
	static const int EResult_ARRAYSIZE = 2;
	static const int kResponseFieldNumber = 1;
	static const int kItemDefsFieldNumber = 2;
	static const int kPeekItemDefFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 response_;  // +0x28
	uint32 peek_item_def_;  // +0x2c

	static CMsgRequestCrateItemsResponse * default_instance_;
	typedef CMsgRequestCrateItemsResponse_EResult EResult;
	CMsgRequestCrateItemsResponse();
	virtual ~CMsgRequestCrateItemsResponse();
	CMsgRequestCrateItemsResponse(const CMsgRequestCrateItemsResponse &);
	CMsgRequestCrateItemsResponse & operator=(const CMsgRequestCrateItemsResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgRequestCrateItemsResponse & default_instance();
	void Swap(CMsgRequestCrateItemsResponse *);
	virtual CMsgRequestCrateItemsResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgRequestCrateItemsResponse &);
	void MergeFrom(const CMsgRequestCrateItemsResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool EResult_IsValid(int);
	const EnumDescriptor * EResult_descriptor();
	const string & EResult_Name(EResult);
	bool EResult_Parse(const string &, EResult *);
	bool has_response();
	void clear_response();
	uint32 response();
	void set_response(uint32);
	int item_defs_size();
	void clear_item_defs();
	uint32 item_defs(int);
	void set_item_defs(int, uint32);
	void add_item_defs(uint32);
	const RepeatedField<unsigned int> & item_defs();
	RepeatedField<unsigned int> * mutable_item_defs();
	bool has_peek_item_def();
	void clear_peek_item_def();
	uint32 peek_item_def();
	void set_peek_item_def(uint32);
	void set_has_response();
	void clear_has_response();
	void set_has_peek_item_def();
	void clear_has_peek_item_def();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:2890
class CMsgGCToGCCanUseDropRateBonus : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kDropRateBonusFieldNumber = 2;
	static const int kBoosterTypeFieldNumber = 3;
	static const int kExclusiveItemDefFieldNumber = 4;
	static const int kAllowEqualRateFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18
	float drop_rate_bonus_;  // +0x1c
	uint32 booster_type_;  // +0x20
	uint32 exclusive_item_def_;  // +0x24
	bool allow_equal_rate_;  // +0x28

	static CMsgGCToGCCanUseDropRateBonus * default_instance_;
	CMsgGCToGCCanUseDropRateBonus();
	virtual ~CMsgGCToGCCanUseDropRateBonus();
	CMsgGCToGCCanUseDropRateBonus(const CMsgGCToGCCanUseDropRateBonus &);
	CMsgGCToGCCanUseDropRateBonus & operator=(const CMsgGCToGCCanUseDropRateBonus &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCCanUseDropRateBonus & default_instance();
	void Swap(CMsgGCToGCCanUseDropRateBonus *);
	virtual CMsgGCToGCCanUseDropRateBonus * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCCanUseDropRateBonus &);
	void MergeFrom(const CMsgGCToGCCanUseDropRateBonus &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	bool has_drop_rate_bonus();
	void clear_drop_rate_bonus();
	float drop_rate_bonus();
	void set_drop_rate_bonus(float);
	bool has_booster_type();
	void clear_booster_type();
	uint32 booster_type();
	void set_booster_type(uint32);
	bool has_exclusive_item_def();
	void clear_exclusive_item_def();
	uint32 exclusive_item_def();
	void set_exclusive_item_def(uint32);
	bool has_allow_equal_rate();
	void clear_allow_equal_rate();
	bool allow_equal_rate();
	void set_allow_equal_rate(bool);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_drop_rate_bonus();
	void clear_has_drop_rate_bonus();
	void set_has_booster_type();
	void clear_has_booster_type();
	void set_has_exclusive_item_def();
	void clear_has_exclusive_item_def();
	void set_has_allow_equal_rate();
	void clear_has_allow_equal_rate();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:3009
class CMsgSQLAddDropRateBonus : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kItemIdFieldNumber = 2;
	static const int kItemDefFieldNumber = 3;
	static const int kDropRateBonusFieldNumber = 4;
	static const int kBoosterTypeFieldNumber = 5;
	static const int kSecondsDurationFieldNumber = 6;
	static const int kEndTimeStampFieldNumber = 7;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 item_id_;  // +0x18
	uint32 account_id_;  // +0x20
	uint32 item_def_;  // +0x24
	float drop_rate_bonus_;  // +0x28
	uint32 booster_type_;  // +0x2c
	uint32 seconds_duration_;  // +0x30
	uint32 end_time_stamp_;  // +0x34

	static CMsgSQLAddDropRateBonus * default_instance_;
	CMsgSQLAddDropRateBonus();
	virtual ~CMsgSQLAddDropRateBonus();
	CMsgSQLAddDropRateBonus(const CMsgSQLAddDropRateBonus &);
	CMsgSQLAddDropRateBonus & operator=(const CMsgSQLAddDropRateBonus &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSQLAddDropRateBonus & default_instance();
	void Swap(CMsgSQLAddDropRateBonus *);
	virtual CMsgSQLAddDropRateBonus * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSQLAddDropRateBonus &);
	void MergeFrom(const CMsgSQLAddDropRateBonus &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	bool has_item_id();
	void clear_item_id();
	uint64 item_id();
	void set_item_id(uint64);
	bool has_item_def();
	void clear_item_def();
	uint32 item_def();
	void set_item_def(uint32);
	bool has_drop_rate_bonus();
	void clear_drop_rate_bonus();
	float drop_rate_bonus();
	void set_drop_rate_bonus(float);
	bool has_booster_type();
	void clear_booster_type();
	uint32 booster_type();
	void set_booster_type(uint32);
	bool has_seconds_duration();
	void clear_seconds_duration();
	uint32 seconds_duration();
	void set_seconds_duration(uint32);
	bool has_end_time_stamp();
	void clear_end_time_stamp();
	uint32 end_time_stamp();
	void set_end_time_stamp(uint32);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_item_id();
	void clear_has_item_id();
	void set_has_item_def();
	void clear_has_item_def();
	void set_has_drop_rate_bonus();
	void clear_has_drop_rate_bonus();
	void set_has_booster_type();
	void clear_has_booster_type();
	void set_has_seconds_duration();
	void clear_has_seconds_duration();
	void set_has_end_time_stamp();
	void clear_has_end_time_stamp();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 56
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:3148
class CMsgSQLUpgradeBattleBooster : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kItemDefFieldNumber = 2;
	static const int kBonusToAddFieldNumber = 3;
	static const int kBoosterTypeFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18
	uint32 item_def_;  // +0x1c
	float bonus_to_add_;  // +0x20
	uint32 booster_type_;  // +0x24

	static CMsgSQLUpgradeBattleBooster * default_instance_;
	CMsgSQLUpgradeBattleBooster();
	virtual ~CMsgSQLUpgradeBattleBooster();
	CMsgSQLUpgradeBattleBooster(const CMsgSQLUpgradeBattleBooster &);
	CMsgSQLUpgradeBattleBooster & operator=(const CMsgSQLUpgradeBattleBooster &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSQLUpgradeBattleBooster & default_instance();
	void Swap(CMsgSQLUpgradeBattleBooster *);
	virtual CMsgSQLUpgradeBattleBooster * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSQLUpgradeBattleBooster &);
	void MergeFrom(const CMsgSQLUpgradeBattleBooster &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	bool has_item_def();
	void clear_item_def();
	uint32 item_def();
	void set_item_def(uint32);
	bool has_bonus_to_add();
	void clear_bonus_to_add();
	float bonus_to_add();
	void set_bonus_to_add(float);
	bool has_booster_type();
	void clear_booster_type();
	uint32 booster_type();
	void set_booster_type(uint32);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_item_def();
	void clear_has_item_def();
	void set_has_bonus_to_add();
	void clear_has_bonus_to_add();
	void set_has_booster_type();
	void clear_has_booster_type();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:3257
class CMsgGCToGCRefreshSOCache : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kReloadFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18
	bool reload_;  // +0x1c

	static CMsgGCToGCRefreshSOCache * default_instance_;
	CMsgGCToGCRefreshSOCache();
	virtual ~CMsgGCToGCRefreshSOCache();
	CMsgGCToGCRefreshSOCache(const CMsgGCToGCRefreshSOCache &);
	CMsgGCToGCRefreshSOCache & operator=(const CMsgGCToGCRefreshSOCache &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCRefreshSOCache & default_instance();
	void Swap(CMsgGCToGCRefreshSOCache *);
	virtual CMsgGCToGCRefreshSOCache * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCRefreshSOCache &);
	void MergeFrom(const CMsgGCToGCRefreshSOCache &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	bool has_reload();
	void clear_reload();
	bool reload();
	void set_reload(bool);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_reload();
	void clear_has_reload();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:3346
class CMsgGCToGCCheckAccountTradeStatus : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kInitiatorFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18
	bool initiator_;  // +0x1c

	static CMsgGCToGCCheckAccountTradeStatus * default_instance_;
	CMsgGCToGCCheckAccountTradeStatus();
	virtual ~CMsgGCToGCCheckAccountTradeStatus();
	CMsgGCToGCCheckAccountTradeStatus(const CMsgGCToGCCheckAccountTradeStatus &);
	CMsgGCToGCCheckAccountTradeStatus & operator=(const CMsgGCToGCCheckAccountTradeStatus &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCCheckAccountTradeStatus & default_instance();
	void Swap(CMsgGCToGCCheckAccountTradeStatus *);
	virtual CMsgGCToGCCheckAccountTradeStatus * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCCheckAccountTradeStatus &);
	void MergeFrom(const CMsgGCToGCCheckAccountTradeStatus &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	bool has_initiator();
	void clear_initiator();
	bool initiator();
	void set_initiator(bool);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_initiator();
	void clear_has_initiator();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:3435
class CMsgGCToGCCheckAccountTradeStatusResponse : public Message {
public:

	static const int kCanTradeFieldNumber = 1;
	static const int kErrorCodeFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool can_trade_;  // +0x18

	uint32 error_code_;  // +0x1c

	static CMsgGCToGCCheckAccountTradeStatusResponse * default_instance_;
	CMsgGCToGCCheckAccountTradeStatusResponse();
	virtual ~CMsgGCToGCCheckAccountTradeStatusResponse();
	CMsgGCToGCCheckAccountTradeStatusResponse(const CMsgGCToGCCheckAccountTradeStatusResponse &);
	CMsgGCToGCCheckAccountTradeStatusResponse & operator=(const CMsgGCToGCCheckAccountTradeStatusResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCCheckAccountTradeStatusResponse & default_instance();
	void Swap(CMsgGCToGCCheckAccountTradeStatusResponse *);
	virtual CMsgGCToGCCheckAccountTradeStatusResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCCheckAccountTradeStatusResponse &);
	void MergeFrom(const CMsgGCToGCCheckAccountTradeStatusResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_can_trade();
	void clear_can_trade();
	bool can_trade();
	void set_can_trade(bool);
	bool has_error_code();
	void clear_error_code();
	uint32 error_code();
	void set_error_code(uint32);
	void set_has_can_trade();
	void clear_has_can_trade();
	void set_has_error_code();
	void clear_has_error_code();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:3524
class CMsgGCToGCGrantAccountRolledItems_Item_DynamicAttribute : public Message {
public:

	static const int kNameFieldNumber = 1;
	static const int kValueUint32FieldNumber = 2;
	static const int kValueFloatFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * name_;  // +0x18
	uint32 value_uint32_;  // +0x20
	float value_float_;  // +0x24

	static CMsgGCToGCGrantAccountRolledItems_Item_DynamicAttribute * default_instance_;
	CMsgGCToGCGrantAccountRolledItems_Item_DynamicAttribute();
	virtual ~CMsgGCToGCGrantAccountRolledItems_Item_DynamicAttribute();
	CMsgGCToGCGrantAccountRolledItems_Item_DynamicAttribute(const CMsgGCToGCGrantAccountRolledItems_Item_DynamicAttribute &);
	CMsgGCToGCGrantAccountRolledItems_Item_DynamicAttribute & operator=(const CMsgGCToGCGrantAccountRolledItems_Item_DynamicAttribute &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCGrantAccountRolledItems_Item_DynamicAttribute & default_instance();
	void Swap(CMsgGCToGCGrantAccountRolledItems_Item_DynamicAttribute *);
	virtual CMsgGCToGCGrantAccountRolledItems_Item_DynamicAttribute * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCGrantAccountRolledItems_Item_DynamicAttribute &);
	void MergeFrom(const CMsgGCToGCGrantAccountRolledItems_Item_DynamicAttribute &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_name();
	void clear_name();
	const string & name();
	void set_name(const string &);
	void set_name(const char *);
	void set_name(const char *, size_t);
	string * mutable_name();
	string * release_name();
	void set_allocated_name(string *);
	bool has_value_uint32();
	void clear_value_uint32();
	uint32 value_uint32();
	void set_value_uint32(uint32);
	bool has_value_float();
	void clear_value_float();
	float value_float();
	void set_value_float(float);
	void set_has_name();
	void clear_has_name();
	void set_has_value_uint32();
	void clear_has_value_uint32();
	void set_has_value_float();
	void clear_has_value_float();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:3628
class CMsgGCToGCGrantAccountRolledItems_Item_AdditionalAuditEntry : public Message {
public:

	static const int kOwnerAccountIdFieldNumber = 1;
	static const int kAuditActionFieldNumber = 2;
	static const int kAuditDataFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 owner_account_id_;  // +0x18
	uint32 audit_action_;  // +0x1c
	uint64 audit_data_;  // +0x20

	static CMsgGCToGCGrantAccountRolledItems_Item_AdditionalAuditEntry * default_instance_;
	CMsgGCToGCGrantAccountRolledItems_Item_AdditionalAuditEntry();
	virtual ~CMsgGCToGCGrantAccountRolledItems_Item_AdditionalAuditEntry();
	CMsgGCToGCGrantAccountRolledItems_Item_AdditionalAuditEntry(const CMsgGCToGCGrantAccountRolledItems_Item_AdditionalAuditEntry &);
	CMsgGCToGCGrantAccountRolledItems_Item_AdditionalAuditEntry & operator=(const CMsgGCToGCGrantAccountRolledItems_Item_AdditionalAuditEntry &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCGrantAccountRolledItems_Item_AdditionalAuditEntry & default_instance();
	void Swap(CMsgGCToGCGrantAccountRolledItems_Item_AdditionalAuditEntry *);
	virtual CMsgGCToGCGrantAccountRolledItems_Item_AdditionalAuditEntry * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCGrantAccountRolledItems_Item_AdditionalAuditEntry &);
	void MergeFrom(const CMsgGCToGCGrantAccountRolledItems_Item_AdditionalAuditEntry &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_owner_account_id();
	void clear_owner_account_id();
	uint32 owner_account_id();
	void set_owner_account_id(uint32);
	bool has_audit_action();
	void clear_audit_action();
	uint32 audit_action();
	void set_audit_action(uint32);
	bool has_audit_data();
	void clear_audit_data();
	uint64 audit_data();
	void set_audit_data(uint64);
	void set_has_owner_account_id();
	void clear_has_owner_account_id();
	void set_has_audit_action();
	void clear_has_audit_action();
	void set_has_audit_data();
	void clear_has_audit_data();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:3727
class CMsgGCToGCGrantAccountRolledItems_Item : public Message {
public:

	static const int kItemDefFieldNumber = 1;
	static const int kLootListsFieldNumber = 2;
	static const int kIgnoreLimitFieldNumber = 3;
	static const int kOriginFieldNumber = 4;
	static const int kDynamicAttributesFieldNumber = 5;
	static const int kAdditionalAuditEntriesFieldNumber = 6;
	static const int kInventoryTokenFieldNumber = 7;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 item_def_;  // +0x30
	bool ignore_limit_;  // +0x34

	uint32 origin_;  // +0x50
	uint32 inventory_token_;  // +0x54

	static CMsgGCToGCGrantAccountRolledItems_Item * default_instance_;
	CMsgGCToGCGrantAccountRolledItems_Item();
	virtual ~CMsgGCToGCGrantAccountRolledItems_Item();
	CMsgGCToGCGrantAccountRolledItems_Item(const CMsgGCToGCGrantAccountRolledItems_Item &);
	CMsgGCToGCGrantAccountRolledItems_Item & operator=(const CMsgGCToGCGrantAccountRolledItems_Item &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCGrantAccountRolledItems_Item & default_instance();
	void Swap(CMsgGCToGCGrantAccountRolledItems_Item *);
	virtual CMsgGCToGCGrantAccountRolledItems_Item * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCGrantAccountRolledItems_Item &);
	void MergeFrom(const CMsgGCToGCGrantAccountRolledItems_Item &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_item_def();
	void clear_item_def();
	uint32 item_def();
	void set_item_def(uint32);
	int loot_lists_size();
	void clear_loot_lists();
	const string & loot_lists(int);
	string * mutable_loot_lists(int);
	void set_loot_lists(int, const string &);
	void set_loot_lists(int, const char *);
	void set_loot_lists(int, const char *, size_t);
	string * add_loot_lists();
	void add_loot_lists(const string &);
	void add_loot_lists(const char *);
	void add_loot_lists(const char *, size_t);
	const RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > & loot_lists();
	RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > * mutable_loot_lists();
	bool has_ignore_limit();
	void clear_ignore_limit();
	bool ignore_limit();
	void set_ignore_limit(bool);
	bool has_origin();
	void clear_origin();
	uint32 origin();
	void set_origin(uint32);
	int dynamic_attributes_size();
	void clear_dynamic_attributes();
	const CMsgGCToGCGrantAccountRolledItems_Item_DynamicAttribute & dynamic_attributes(int);
	CMsgGCToGCGrantAccountRolledItems_Item_DynamicAttribute * mutable_dynamic_attributes(int);
	CMsgGCToGCGrantAccountRolledItems_Item_DynamicAttribute * add_dynamic_attributes();
	const RepeatedPtrField<CMsgGCToGCGrantAccountRolledItems_Item_DynamicAttribute> & dynamic_attributes();
	RepeatedPtrField<CMsgGCToGCGrantAccountRolledItems_Item_DynamicAttribute> * mutable_dynamic_attributes();
	int additional_audit_entries_size();
	void clear_additional_audit_entries();
	const CMsgGCToGCGrantAccountRolledItems_Item_AdditionalAuditEntry & additional_audit_entries(int);
	CMsgGCToGCGrantAccountRolledItems_Item_AdditionalAuditEntry * mutable_additional_audit_entries(int);
	CMsgGCToGCGrantAccountRolledItems_Item_AdditionalAuditEntry * add_additional_audit_entries();
	const RepeatedPtrField<CMsgGCToGCGrantAccountRolledItems_Item_AdditionalAuditEntry> & additional_audit_entries();
	RepeatedPtrField<CMsgGCToGCGrantAccountRolledItems_Item_AdditionalAuditEntry> * mutable_additional_audit_entries();
	bool has_inventory_token();
	void clear_inventory_token();
	uint32 inventory_token();
	void set_inventory_token(uint32);
	void set_has_item_def();
	void clear_has_item_def();
	void set_has_ignore_limit();
	void clear_has_ignore_limit();
	void set_has_origin();
	void clear_has_origin();
	void set_has_inventory_token();
	void clear_has_inventory_token();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 112
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:3882
class CMsgGCToGCGrantAccountRolledItems : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kItemsFieldNumber = 2;
	static const int kAuditActionFieldNumber = 3;
	static const int kAuditDataFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x30
	uint32 audit_action_;  // +0x34
	uint64 audit_data_;  // +0x38

	static CMsgGCToGCGrantAccountRolledItems * default_instance_;
	CMsgGCToGCGrantAccountRolledItems();
	virtual ~CMsgGCToGCGrantAccountRolledItems();
	CMsgGCToGCGrantAccountRolledItems(const CMsgGCToGCGrantAccountRolledItems &);
	CMsgGCToGCGrantAccountRolledItems & operator=(const CMsgGCToGCGrantAccountRolledItems &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCGrantAccountRolledItems & default_instance();
	void Swap(CMsgGCToGCGrantAccountRolledItems *);
	virtual CMsgGCToGCGrantAccountRolledItems * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCGrantAccountRolledItems &);
	void MergeFrom(const CMsgGCToGCGrantAccountRolledItems &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	int items_size();
	void clear_items();
	const CMsgGCToGCGrantAccountRolledItems_Item & items(int);
	CMsgGCToGCGrantAccountRolledItems_Item * mutable_items(int);
	CMsgGCToGCGrantAccountRolledItems_Item * add_items();
	const RepeatedPtrField<CMsgGCToGCGrantAccountRolledItems_Item> & items();
	RepeatedPtrField<CMsgGCToGCGrantAccountRolledItems_Item> * mutable_items();
	bool has_audit_action();
	void clear_audit_action();
	uint32 audit_action();
	void set_audit_action(uint32);
	bool has_audit_data();
	void clear_audit_data();
	uint64 audit_data();
	void set_audit_data(uint64);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_audit_action();
	void clear_has_audit_action();
	void set_has_audit_data();
	void clear_has_audit_data();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 64
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:3996
class CMsgGCToGCGrantSelfMadeItemToAccount : public Message {
public:

	static const int kItemDefIndexFieldNumber = 1;
	static const int kAccountidFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 item_def_index_;  // +0x18
	uint32 accountid_;  // +0x1c

	static CMsgGCToGCGrantSelfMadeItemToAccount * default_instance_;
	CMsgGCToGCGrantSelfMadeItemToAccount();
	virtual ~CMsgGCToGCGrantSelfMadeItemToAccount();
	CMsgGCToGCGrantSelfMadeItemToAccount(const CMsgGCToGCGrantSelfMadeItemToAccount &);
	CMsgGCToGCGrantSelfMadeItemToAccount & operator=(const CMsgGCToGCGrantSelfMadeItemToAccount &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCGrantSelfMadeItemToAccount & default_instance();
	void Swap(CMsgGCToGCGrantSelfMadeItemToAccount *);
	virtual CMsgGCToGCGrantSelfMadeItemToAccount * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCGrantSelfMadeItemToAccount &);
	void MergeFrom(const CMsgGCToGCGrantSelfMadeItemToAccount &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_item_def_index();
	void clear_item_def_index();
	uint32 item_def_index();
	void set_item_def_index(uint32);
	bool has_accountid();
	void clear_accountid();
	uint32 accountid();
	void set_accountid(uint32);
	void set_has_item_def_index();
	void clear_has_item_def_index();
	void set_has_accountid();
	void clear_has_accountid();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:4085
class CMsgUseItem : public Message {
public:

	static const int kItemIdFieldNumber = 1;
	static const int kTargetSteamIdFieldNumber = 2;
	static const int kGiftPotentialTargetsFieldNumber = 3;
	static const int kDuelClassLockFieldNumber = 4;
	static const int kInitiatorSteamIdFieldNumber = 5;
	static const int kItempackAckImmediatelyFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 item_id_;  // +0x18
	uint64 target_steam_id_;  // +0x20
	uint64 initiator_steam_id_;  // +0x38
	uint32 duel__class_lock_;  // +0x40
	bool itempack__ack_immediately_;  // +0x44

	static CMsgUseItem * default_instance_;
	CMsgUseItem();
	virtual ~CMsgUseItem();
	CMsgUseItem(const CMsgUseItem &);
	CMsgUseItem & operator=(const CMsgUseItem &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgUseItem & default_instance();
	void Swap(CMsgUseItem *);
	virtual CMsgUseItem * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgUseItem &);
	void MergeFrom(const CMsgUseItem &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_item_id();
	void clear_item_id();
	uint64 item_id();
	void set_item_id(uint64);
	bool has_target_steam_id();
	void clear_target_steam_id();
	uint64 target_steam_id();
	void set_target_steam_id(uint64);
	int gift__potential_targets_size();
	void clear_gift__potential_targets();
	uint32 gift__potential_targets(int);
	void set_gift__potential_targets(int, uint32);
	void add_gift__potential_targets(uint32);
	const RepeatedField<unsigned int> & gift__potential_targets();
	RepeatedField<unsigned int> * mutable_gift__potential_targets();
	bool has_duel__class_lock();
	void clear_duel__class_lock();
	uint32 duel__class_lock();
	void set_duel__class_lock(uint32);
	bool has_initiator_steam_id();
	void clear_initiator_steam_id();
	uint64 initiator_steam_id();
	void set_initiator_steam_id(uint64);
	bool has_itempack__ack_immediately();
	void clear_itempack__ack_immediately();
	bool itempack__ack_immediately();
	void set_itempack__ack_immediately(bool);
	void set_has_item_id();
	void clear_has_item_id();
	void set_has_target_steam_id();
	void clear_has_target_steam_id();
	void set_has_duel__class_lock();
	void clear_has_duel__class_lock();
	void set_has_initiator_steam_id();
	void clear_has_initiator_steam_id();
	void set_has_itempack__ack_immediately();
	void clear_has_itempack__ack_immediately();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 72
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:4217
class CMsgServerUseItem : public Message {
public:

	static const int kInitiatorAccountIdFieldNumber = 1;
	static const int kUseItemMsgFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 initiator_account_id_;  // +0x20

	static CMsgServerUseItem * default_instance_;
	CMsgServerUseItem();
	virtual ~CMsgServerUseItem();
	CMsgServerUseItem(const CMsgServerUseItem &);
	CMsgServerUseItem & operator=(const CMsgServerUseItem &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerUseItem & default_instance();
	void Swap(CMsgServerUseItem *);
	virtual CMsgServerUseItem * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerUseItem &);
	void MergeFrom(const CMsgServerUseItem &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_initiator_account_id();
	void clear_initiator_account_id();
	uint32 initiator_account_id();
	void set_initiator_account_id(uint32);
	bool has_use_item_msg();
	void clear_use_item_msg();
	const CMsgUseItem & use_item_msg();
	CMsgUseItem * mutable_use_item_msg();
	CMsgUseItem * release_use_item_msg();
	void set_allocated_use_item_msg(CMsgUseItem *);
	void set_has_initiator_account_id();
	void clear_has_initiator_account_id();
	void set_has_use_item_msg();
	void clear_has_use_item_msg();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:4308
class CMsgUseMultipleItems : public Message {
public:

	static const int kItemIdsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgUseMultipleItems * default_instance_;
	CMsgUseMultipleItems();
	virtual ~CMsgUseMultipleItems();
	CMsgUseMultipleItems(const CMsgUseMultipleItems &);
	CMsgUseMultipleItems & operator=(const CMsgUseMultipleItems &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgUseMultipleItems & default_instance();
	void Swap(CMsgUseMultipleItems *);
	virtual CMsgUseMultipleItems * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgUseMultipleItems &);
	void MergeFrom(const CMsgUseMultipleItems &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int item_ids_size();
	void clear_item_ids();
	uint64 item_ids(int);
	void set_item_ids(int, uint64);
	void add_item_ids(uint64);
	const RepeatedField<long unsigned int> & item_ids();
	RepeatedField<long unsigned int> * mutable_item_ids();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:4390
class CMsgGCPartnerBalanceRequest : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgGCPartnerBalanceRequest * default_instance_;
	CMsgGCPartnerBalanceRequest();
	virtual ~CMsgGCPartnerBalanceRequest();
	CMsgGCPartnerBalanceRequest(const CMsgGCPartnerBalanceRequest &);
	CMsgGCPartnerBalanceRequest & operator=(const CMsgGCPartnerBalanceRequest &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCPartnerBalanceRequest & default_instance();
	void Swap(CMsgGCPartnerBalanceRequest *);
	virtual CMsgGCPartnerBalanceRequest * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCPartnerBalanceRequest &);
	void MergeFrom(const CMsgGCPartnerBalanceRequest &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 24
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:4459
class CMsgGCPartnerBalanceResponse : public Message {
public:

	static const int kResultFieldNumber = 1;
	static const int kBalanceFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int result_;  // +0x18
	uint32 balance_;  // +0x1c

	static CMsgGCPartnerBalanceResponse * default_instance_;
	CMsgGCPartnerBalanceResponse();
	virtual ~CMsgGCPartnerBalanceResponse();
	CMsgGCPartnerBalanceResponse(const CMsgGCPartnerBalanceResponse &);
	CMsgGCPartnerBalanceResponse & operator=(const CMsgGCPartnerBalanceResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCPartnerBalanceResponse & default_instance();
	void Swap(CMsgGCPartnerBalanceResponse *);
	virtual CMsgGCPartnerBalanceResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCPartnerBalanceResponse &);
	void MergeFrom(const CMsgGCPartnerBalanceResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_result();
	void clear_result();
	EGCPartnerRequestResponse result();
	void set_result(EGCPartnerRequestResponse);
	bool has_balance();
	void clear_balance();
	uint32 balance();
	void set_balance(uint32);
	void set_has_result();
	void clear_has_result();
	void set_has_balance();
	void clear_has_balance();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:4548
class CGCStoreRechargeRedirect_LineItem : public Message {
public:

	static const int kItemDefIdFieldNumber = 1;
	static const int kQuantityFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 item_def_id_;  // +0x18
	uint32 quantity_;  // +0x1c

	static CGCStoreRechargeRedirect_LineItem * default_instance_;
	CGCStoreRechargeRedirect_LineItem();
	virtual ~CGCStoreRechargeRedirect_LineItem();
	CGCStoreRechargeRedirect_LineItem(const CGCStoreRechargeRedirect_LineItem &);
	CGCStoreRechargeRedirect_LineItem & operator=(const CGCStoreRechargeRedirect_LineItem &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CGCStoreRechargeRedirect_LineItem & default_instance();
	void Swap(CGCStoreRechargeRedirect_LineItem *);
	virtual CGCStoreRechargeRedirect_LineItem * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CGCStoreRechargeRedirect_LineItem &);
	void MergeFrom(const CGCStoreRechargeRedirect_LineItem &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_item_def_id();
	void clear_item_def_id();
	uint32 item_def_id();
	void set_item_def_id(uint32);
	bool has_quantity();
	void clear_quantity();
	uint32 quantity();
	void set_quantity(uint32);
	void set_has_item_def_id();
	void clear_has_item_def_id();
	void set_has_quantity();
	void clear_has_quantity();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:4637
class CMsgGCPartnerRechargeRedirectURLRequest : public Message {
public:

	static const int kLineItemsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgGCPartnerRechargeRedirectURLRequest * default_instance_;
	CMsgGCPartnerRechargeRedirectURLRequest();
	virtual ~CMsgGCPartnerRechargeRedirectURLRequest();
	CMsgGCPartnerRechargeRedirectURLRequest(const CMsgGCPartnerRechargeRedirectURLRequest &);
	CMsgGCPartnerRechargeRedirectURLRequest & operator=(const CMsgGCPartnerRechargeRedirectURLRequest &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCPartnerRechargeRedirectURLRequest & default_instance();
	void Swap(CMsgGCPartnerRechargeRedirectURLRequest *);
	virtual CMsgGCPartnerRechargeRedirectURLRequest * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCPartnerRechargeRedirectURLRequest &);
	void MergeFrom(const CMsgGCPartnerRechargeRedirectURLRequest &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int line_items_size();
	void clear_line_items();
	const CGCStoreRechargeRedirect_LineItem & line_items(int);
	CGCStoreRechargeRedirect_LineItem * mutable_line_items(int);
	CGCStoreRechargeRedirect_LineItem * add_line_items();
	const RepeatedPtrField<CGCStoreRechargeRedirect_LineItem> & line_items();
	RepeatedPtrField<CGCStoreRechargeRedirect_LineItem> * mutable_line_items();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:4719
class CMsgGCPartnerRechargeRedirectURLResponse : public Message {
public:

	static const int kResultFieldNumber = 1;
	static const int kUrlFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * url_;  // +0x18
	int result_;  // +0x20

	static CMsgGCPartnerRechargeRedirectURLResponse * default_instance_;
	CMsgGCPartnerRechargeRedirectURLResponse();
	virtual ~CMsgGCPartnerRechargeRedirectURLResponse();
	CMsgGCPartnerRechargeRedirectURLResponse(const CMsgGCPartnerRechargeRedirectURLResponse &);
	CMsgGCPartnerRechargeRedirectURLResponse & operator=(const CMsgGCPartnerRechargeRedirectURLResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCPartnerRechargeRedirectURLResponse & default_instance();
	void Swap(CMsgGCPartnerRechargeRedirectURLResponse *);
	virtual CMsgGCPartnerRechargeRedirectURLResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCPartnerRechargeRedirectURLResponse &);
	void MergeFrom(const CMsgGCPartnerRechargeRedirectURLResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_result();
	void clear_result();
	EGCPartnerRequestResponse result();
	void set_result(EGCPartnerRequestResponse);
	bool has_url();
	void clear_url();
	const string & url();
	void set_url(const string &);
	void set_url(const char *);
	void set_url(const char *, size_t);
	string * mutable_url();
	string * release_url();
	void set_allocated_url(string *);
	void set_has_result();
	void clear_has_result();
	void set_has_url();
	void clear_has_url();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:4813
class CMsgGCEconSQLWorkItemEmbeddedRollbackData : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kDeletedItemIdFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 deleted_item_id_;  // +0x18
	uint32 account_id_;  // +0x20

	static CMsgGCEconSQLWorkItemEmbeddedRollbackData * default_instance_;
	CMsgGCEconSQLWorkItemEmbeddedRollbackData();
	virtual ~CMsgGCEconSQLWorkItemEmbeddedRollbackData();
	CMsgGCEconSQLWorkItemEmbeddedRollbackData(const CMsgGCEconSQLWorkItemEmbeddedRollbackData &);
	CMsgGCEconSQLWorkItemEmbeddedRollbackData & operator=(const CMsgGCEconSQLWorkItemEmbeddedRollbackData &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCEconSQLWorkItemEmbeddedRollbackData & default_instance();
	void Swap(CMsgGCEconSQLWorkItemEmbeddedRollbackData *);
	virtual CMsgGCEconSQLWorkItemEmbeddedRollbackData * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCEconSQLWorkItemEmbeddedRollbackData &);
	void MergeFrom(const CMsgGCEconSQLWorkItemEmbeddedRollbackData &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	bool has_deleted_item_id();
	void clear_deleted_item_id();
	uint64 deleted_item_id();
	void set_deleted_item_id(uint64);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_deleted_item_id();
	void clear_has_deleted_item_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:4902
class CMsgCraftStatue : public Message {
public:

	static const int kHeroidFieldNumber = 1;
	static const int kSequencenameFieldNumber = 2;
	static const int kCycleFieldNumber = 3;
	static const int kDescriptionFieldNumber = 4;
	static const int kPedestalItemdefFieldNumber = 5;
	static const int kToolidFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * sequencename_;  // +0x18
	uint32 heroid_;  // +0x20
	float cycle_;  // +0x24
	string * description_;  // +0x28
	uint64 toolid_;  // +0x30
	uint32 pedestal_itemdef_;  // +0x38

	static CMsgCraftStatue * default_instance_;
	CMsgCraftStatue();
	virtual ~CMsgCraftStatue();
	CMsgCraftStatue(const CMsgCraftStatue &);
	CMsgCraftStatue & operator=(const CMsgCraftStatue &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgCraftStatue & default_instance();
	void Swap(CMsgCraftStatue *);
	virtual CMsgCraftStatue * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgCraftStatue &);
	void MergeFrom(const CMsgCraftStatue &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_heroid();
	void clear_heroid();
	uint32 heroid();
	void set_heroid(uint32);
	bool has_sequencename();
	void clear_sequencename();
	const string & sequencename();
	void set_sequencename(const string &);
	void set_sequencename(const char *);
	void set_sequencename(const char *, size_t);
	string * mutable_sequencename();
	string * release_sequencename();
	void set_allocated_sequencename(string *);
	bool has_cycle();
	void clear_cycle();
	float cycle();
	void set_cycle(float);
	bool has_description();
	void clear_description();
	const string & description();
	void set_description(const string &);
	void set_description(const char *);
	void set_description(const char *, size_t);
	string * mutable_description();
	string * release_description();
	void set_allocated_description(string *);
	bool has_pedestal_itemdef();
	void clear_pedestal_itemdef();
	uint32 pedestal_itemdef();
	void set_pedestal_itemdef(uint32);
	bool has_toolid();
	void clear_toolid();
	uint64 toolid();
	void set_toolid(uint64);
	void set_has_heroid();
	void clear_has_heroid();
	void set_has_sequencename();
	void clear_has_sequencename();
	void set_has_cycle();
	void clear_has_cycle();
	void set_has_description();
	void clear_has_description();
	void set_has_pedestal_itemdef();
	void clear_has_pedestal_itemdef();
	void set_has_toolid();
	void clear_has_toolid();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 64
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:5041
class CMsgRedeemCode : public Message {
public:

	static const int kCodeFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * code_;  // +0x18

	static CMsgRedeemCode * default_instance_;
	CMsgRedeemCode();
	virtual ~CMsgRedeemCode();
	CMsgRedeemCode(const CMsgRedeemCode &);
	CMsgRedeemCode & operator=(const CMsgRedeemCode &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgRedeemCode & default_instance();
	void Swap(CMsgRedeemCode *);
	virtual CMsgRedeemCode * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgRedeemCode &);
	void MergeFrom(const CMsgRedeemCode &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_code();
	void clear_code();
	const string & code();
	void set_code(const string &);
	void set_code(const char *);
	void set_code(const char *, size_t);
	string * mutable_code();
	string * release_code();
	void set_allocated_code(string *);
	void set_has_code();
	void clear_has_code();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:5125
class CMsgRedeemCodeResponse : public Message {
public:

	static const CMsgRedeemCodeResponse_EResultCode k_Succeeded;
	static const CMsgRedeemCodeResponse_EResultCode k_Failed_CodeNotFound = 1;
	static const CMsgRedeemCodeResponse_EResultCode k_Failed_CodeAlreadyUsed = 2;
	static const CMsgRedeemCodeResponse_EResultCode k_Failed_OtherError = 3;
	static const CMsgRedeemCodeResponse_EResultCode EResultCode_MIN;
	static const CMsgRedeemCodeResponse_EResultCode EResultCode_MAX = 3;
	static const int EResultCode_ARRAYSIZE = 4;
	static const int kResponseFieldNumber = 1;
	static const int kItemIdFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 item_id_;  // +0x18
	uint32 response_;  // +0x20

	static CMsgRedeemCodeResponse * default_instance_;
	typedef CMsgRedeemCodeResponse_EResultCode EResultCode;
	CMsgRedeemCodeResponse();
	virtual ~CMsgRedeemCodeResponse();
	CMsgRedeemCodeResponse(const CMsgRedeemCodeResponse &);
	CMsgRedeemCodeResponse & operator=(const CMsgRedeemCodeResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgRedeemCodeResponse & default_instance();
	void Swap(CMsgRedeemCodeResponse *);
	virtual CMsgRedeemCodeResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgRedeemCodeResponse &);
	void MergeFrom(const CMsgRedeemCodeResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool EResultCode_IsValid(int);
	const EnumDescriptor * EResultCode_descriptor();
	const string & EResultCode_Name(EResultCode);
	bool EResultCode_Parse(const string &, EResultCode *);
	bool has_response();
	void clear_response();
	uint32 response();
	void set_response(uint32);
	bool has_item_id();
	void clear_item_id();
	uint64 item_id();
	void set_item_id(uint64);
	void set_has_response();
	void clear_has_response();
	void set_has_item_id();
	void clear_has_item_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:5240
class CMsgDevNewItemRequest : public Message {
public:

	static const int kItemDefNameFieldNumber = 3;
	static const int kLootListNameFieldNumber = 4;
	static const int kAttrDefNameFieldNumber = 5;
	static const int kAttrValueFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * item_def_name_;  // +0x18
	string * loot_list_name_;  // +0x20

	static CMsgDevNewItemRequest * default_instance_;
	CMsgDevNewItemRequest();
	virtual ~CMsgDevNewItemRequest();
	CMsgDevNewItemRequest(const CMsgDevNewItemRequest &);
	CMsgDevNewItemRequest & operator=(const CMsgDevNewItemRequest &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDevNewItemRequest & default_instance();
	void Swap(CMsgDevNewItemRequest *);
	virtual CMsgDevNewItemRequest * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDevNewItemRequest &);
	void MergeFrom(const CMsgDevNewItemRequest &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_item_def_name();
	void clear_item_def_name();
	const string & item_def_name();
	void set_item_def_name(const string &);
	void set_item_def_name(const char *);
	void set_item_def_name(const char *, size_t);
	string * mutable_item_def_name();
	string * release_item_def_name();
	void set_allocated_item_def_name(string *);
	bool has_loot_list_name();
	void clear_loot_list_name();
	const string & loot_list_name();
	void set_loot_list_name(const string &);
	void set_loot_list_name(const char *);
	void set_loot_list_name(const char *, size_t);
	string * mutable_loot_list_name();
	string * release_loot_list_name();
	void set_allocated_loot_list_name(string *);
	int attr_def_name_size();
	void clear_attr_def_name();
	const string & attr_def_name(int);
	string * mutable_attr_def_name(int);
	void set_attr_def_name(int, const string &);
	void set_attr_def_name(int, const char *);
	void set_attr_def_name(int, const char *, size_t);
	string * add_attr_def_name();
	void add_attr_def_name(const string &);
	void add_attr_def_name(const char *);
	void add_attr_def_name(const char *, size_t);
	const RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > & attr_def_name();
	RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > * mutable_attr_def_name();
	int attr_value_size();
	void clear_attr_value();
	const string & attr_value(int);
	string * mutable_attr_value(int);
	void set_attr_value(int, const string &);
	void set_attr_value(int, const char *);
	void set_attr_value(int, const char *, size_t);
	string * add_attr_value();
	void add_attr_value(const string &);
	void add_attr_value(const char *);
	void add_attr_value(const char *, size_t);
	const RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > & attr_value();
	RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > * mutable_attr_value();
	void set_has_item_def_name();
	void clear_has_item_def_name();
	void set_has_loot_list_name();
	void clear_has_loot_list_name();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 88
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:5373
class CMsgDevNewItemRequestResponse : public Message {
public:

	static const int kSuccessFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool success_;  // +0x18

	static CMsgDevNewItemRequestResponse * default_instance_;
	CMsgDevNewItemRequestResponse();
	virtual ~CMsgDevNewItemRequestResponse();
	CMsgDevNewItemRequestResponse(const CMsgDevNewItemRequestResponse &);
	CMsgDevNewItemRequestResponse & operator=(const CMsgDevNewItemRequestResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDevNewItemRequestResponse & default_instance();
	void Swap(CMsgDevNewItemRequestResponse *);
	virtual CMsgDevNewItemRequestResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDevNewItemRequestResponse &);
	void MergeFrom(const CMsgDevNewItemRequestResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_success();
	void clear_success();
	bool success();
	void set_success(bool);
	void set_has_success();
	void clear_has_success();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:5452
class CMsgGCAddGiftItem : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kItemIdFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 item_id_;  // +0x18
	uint32 account_id_;  // +0x20

	static CMsgGCAddGiftItem * default_instance_;
	CMsgGCAddGiftItem();
	virtual ~CMsgGCAddGiftItem();
	CMsgGCAddGiftItem(const CMsgGCAddGiftItem &);
	CMsgGCAddGiftItem & operator=(const CMsgGCAddGiftItem &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCAddGiftItem & default_instance();
	void Swap(CMsgGCAddGiftItem *);
	virtual CMsgGCAddGiftItem * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCAddGiftItem &);
	void MergeFrom(const CMsgGCAddGiftItem &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	bool has_item_id();
	void clear_item_id();
	uint64 item_id();
	void set_item_id(uint64);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_item_id();
	void clear_has_item_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:5541
class CMsgClientToGCWrapAndDeliverGift : public Message {
public:

	static const int kItemIdFieldNumber = 1;
	static const int kGiveToAccountIdFieldNumber = 2;
	static const int kGiftMessageFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 item_id_;  // +0x18
	string * gift_message_;  // +0x20
	uint32 give_to_account_id_;  // +0x28

	static CMsgClientToGCWrapAndDeliverGift * default_instance_;
	CMsgClientToGCWrapAndDeliverGift();
	virtual ~CMsgClientToGCWrapAndDeliverGift();
	CMsgClientToGCWrapAndDeliverGift(const CMsgClientToGCWrapAndDeliverGift &);
	CMsgClientToGCWrapAndDeliverGift & operator=(const CMsgClientToGCWrapAndDeliverGift &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClientToGCWrapAndDeliverGift & default_instance();
	void Swap(CMsgClientToGCWrapAndDeliverGift *);
	virtual CMsgClientToGCWrapAndDeliverGift * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClientToGCWrapAndDeliverGift &);
	void MergeFrom(const CMsgClientToGCWrapAndDeliverGift &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_item_id();
	void clear_item_id();
	uint64 item_id();
	void set_item_id(uint64);
	bool has_give_to_account_id();
	void clear_give_to_account_id();
	uint32 give_to_account_id();
	void set_give_to_account_id(uint32);
	bool has_gift_message();
	void clear_gift_message();
	const string & gift_message();
	void set_gift_message(const string &);
	void set_gift_message(const char *);
	void set_gift_message(const char *, size_t);
	string * mutable_gift_message();
	string * release_gift_message();
	void set_allocated_gift_message(string *);
	void set_has_item_id();
	void clear_has_item_id();
	void set_has_give_to_account_id();
	void clear_has_give_to_account_id();
	void set_has_gift_message();
	void clear_has_gift_message();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:5645
class CMsgClientToGCWrapAndDeliverGiftResponse : public Message {
public:

	static const int kResponseFieldNumber = 1;
	static const int kGiftingChargeUsesFieldNumber = 2;
	static const int kGiftingChargeMaxFieldNumber = 3;
	static const int kGiftingUsesFieldNumber = 4;
	static const int kGiftingMaxFieldNumber = 5;
	static const int kGiftingWindowHoursFieldNumber = 6;
	static const int kTradeRestrictionFieldNumber = 7;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int response_;  // +0x18
	uint32 gifting_charge_uses_;  // +0x1c
	int32 gifting_charge_max_;  // +0x20
	uint32 gifting_uses_;  // +0x24
	int32 gifting_max_;  // +0x28
	uint32 gifting_window_hours_;  // +0x2c
	int trade_restriction_;  // +0x30

	static CMsgClientToGCWrapAndDeliverGiftResponse * default_instance_;
	CMsgClientToGCWrapAndDeliverGiftResponse();
	virtual ~CMsgClientToGCWrapAndDeliverGiftResponse();
	CMsgClientToGCWrapAndDeliverGiftResponse(const CMsgClientToGCWrapAndDeliverGiftResponse &);
	CMsgClientToGCWrapAndDeliverGiftResponse & operator=(const CMsgClientToGCWrapAndDeliverGiftResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClientToGCWrapAndDeliverGiftResponse & default_instance();
	void Swap(CMsgClientToGCWrapAndDeliverGiftResponse *);
	virtual CMsgClientToGCWrapAndDeliverGiftResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClientToGCWrapAndDeliverGiftResponse &);
	void MergeFrom(const CMsgClientToGCWrapAndDeliverGiftResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_response();
	void clear_response();
	EGCMsgResponse response();
	void set_response(EGCMsgResponse);
	bool has_gifting_charge_uses();
	void clear_gifting_charge_uses();
	uint32 gifting_charge_uses();
	void set_gifting_charge_uses(uint32);
	bool has_gifting_charge_max();
	void clear_gifting_charge_max();
	int32 gifting_charge_max();
	void set_gifting_charge_max(int32);
	bool has_gifting_uses();
	void clear_gifting_uses();
	uint32 gifting_uses();
	void set_gifting_uses(uint32);
	bool has_gifting_max();
	void clear_gifting_max();
	int32 gifting_max();
	void set_gifting_max(int32);
	bool has_gifting_window_hours();
	void clear_gifting_window_hours();
	uint32 gifting_window_hours();
	void set_gifting_window_hours(uint32);
	bool has_trade_restriction();
	void clear_trade_restriction();
	EGCMsgInitiateTradeResponse trade_restriction();
	void set_trade_restriction(EGCMsgInitiateTradeResponse);
	void set_has_response();
	void clear_has_response();
	void set_has_gifting_charge_uses();
	void clear_has_gifting_charge_uses();
	void set_has_gifting_charge_max();
	void clear_has_gifting_charge_max();
	void set_has_gifting_uses();
	void clear_has_gifting_uses();
	void set_has_gifting_max();
	void clear_has_gifting_max();
	void set_has_gifting_window_hours();
	void clear_has_gifting_window_hours();
	void set_has_trade_restriction();
	void clear_has_trade_restriction();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 56
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:5784
class CMsgClientToGCUnwrapGift : public Message {
public:

	static const int kItemIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 item_id_;  // +0x18

	static CMsgClientToGCUnwrapGift * default_instance_;
	CMsgClientToGCUnwrapGift();
	virtual ~CMsgClientToGCUnwrapGift();
	CMsgClientToGCUnwrapGift(const CMsgClientToGCUnwrapGift &);
	CMsgClientToGCUnwrapGift & operator=(const CMsgClientToGCUnwrapGift &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClientToGCUnwrapGift & default_instance();
	void Swap(CMsgClientToGCUnwrapGift *);
	virtual CMsgClientToGCUnwrapGift * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClientToGCUnwrapGift &);
	void MergeFrom(const CMsgClientToGCUnwrapGift &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_item_id();
	void clear_item_id();
	uint64 item_id();
	void set_item_id(uint64);
	void set_has_item_id();
	void clear_has_item_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:5863
class CMsgClientToGCGetGiftPermissions : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgClientToGCGetGiftPermissions * default_instance_;
	CMsgClientToGCGetGiftPermissions();
	virtual ~CMsgClientToGCGetGiftPermissions();
	CMsgClientToGCGetGiftPermissions(const CMsgClientToGCGetGiftPermissions &);
	CMsgClientToGCGetGiftPermissions & operator=(const CMsgClientToGCGetGiftPermissions &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClientToGCGetGiftPermissions & default_instance();
	void Swap(CMsgClientToGCGetGiftPermissions *);
	virtual CMsgClientToGCGetGiftPermissions * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClientToGCGetGiftPermissions &);
	void MergeFrom(const CMsgClientToGCGetGiftPermissions &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 24
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:5932
class CMsgClientToGCGetGiftPermissionsResponse_FriendPermission : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kPermissionFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18
	int permission_;  // +0x1c

	static CMsgClientToGCGetGiftPermissionsResponse_FriendPermission * default_instance_;
	CMsgClientToGCGetGiftPermissionsResponse_FriendPermission();
	virtual ~CMsgClientToGCGetGiftPermissionsResponse_FriendPermission();
	CMsgClientToGCGetGiftPermissionsResponse_FriendPermission(const CMsgClientToGCGetGiftPermissionsResponse_FriendPermission &);
	CMsgClientToGCGetGiftPermissionsResponse_FriendPermission & operator=(const CMsgClientToGCGetGiftPermissionsResponse_FriendPermission &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClientToGCGetGiftPermissionsResponse_FriendPermission & default_instance();
	void Swap(CMsgClientToGCGetGiftPermissionsResponse_FriendPermission *);
	virtual CMsgClientToGCGetGiftPermissionsResponse_FriendPermission * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClientToGCGetGiftPermissionsResponse_FriendPermission &);
	void MergeFrom(const CMsgClientToGCGetGiftPermissionsResponse_FriendPermission &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	bool has_permission();
	void clear_permission();
	EGCMsgInitiateTradeResponse permission();
	void set_permission(EGCMsgInitiateTradeResponse);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_permission();
	void clear_has_permission();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:6021
class CMsgClientToGCGetGiftPermissionsResponse : public Message {
public:

	static const int kIsUnlimitedFieldNumber = 1;
	static const int kHasTwoFactorFieldNumber = 3;
	static const int kSenderPermissionFieldNumber = 6;
	static const int kFriendshipAgeRequirementFieldNumber = 7;
	static const int kFriendshipAgeRequirementTwoFactorFieldNumber = 8;
	static const int kFriendPermissionsFieldNumber = 9;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool is_unlimited_;  // +0x18
	bool has_two_factor_;  // +0x19

	int sender_permission_;  // +0x1c
	uint32 friendship_age_requirement_;  // +0x20
	uint32 friendship_age_requirement_two_factor_;  // +0x24

	static CMsgClientToGCGetGiftPermissionsResponse * default_instance_;
	CMsgClientToGCGetGiftPermissionsResponse();
	virtual ~CMsgClientToGCGetGiftPermissionsResponse();
	CMsgClientToGCGetGiftPermissionsResponse(const CMsgClientToGCGetGiftPermissionsResponse &);
	CMsgClientToGCGetGiftPermissionsResponse & operator=(const CMsgClientToGCGetGiftPermissionsResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClientToGCGetGiftPermissionsResponse & default_instance();
	void Swap(CMsgClientToGCGetGiftPermissionsResponse *);
	virtual CMsgClientToGCGetGiftPermissionsResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClientToGCGetGiftPermissionsResponse &);
	void MergeFrom(const CMsgClientToGCGetGiftPermissionsResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_is_unlimited();
	void clear_is_unlimited();
	bool is_unlimited();
	void set_is_unlimited(bool);
	bool has_has_two_factor();
	void clear_has_two_factor();
	bool has_two_factor();
	void set_has_two_factor(bool);
	bool has_sender_permission();
	void clear_sender_permission();
	EGCMsgInitiateTradeResponse sender_permission();
	void set_sender_permission(EGCMsgInitiateTradeResponse);
	bool has_friendship_age_requirement();
	void clear_friendship_age_requirement();
	uint32 friendship_age_requirement();
	void set_friendship_age_requirement(uint32);
	bool has_friendship_age_requirement_two_factor();
	void clear_friendship_age_requirement_two_factor();
	uint32 friendship_age_requirement_two_factor();
	void set_friendship_age_requirement_two_factor(uint32);
	int friend_permissions_size();
	void clear_friend_permissions();
	const CMsgClientToGCGetGiftPermissionsResponse_FriendPermission & friend_permissions(int);
	CMsgClientToGCGetGiftPermissionsResponse_FriendPermission * mutable_friend_permissions(int);
	CMsgClientToGCGetGiftPermissionsResponse_FriendPermission * add_friend_permissions();
	const RepeatedPtrField<CMsgClientToGCGetGiftPermissionsResponse_FriendPermission> & friend_permissions();
	RepeatedPtrField<CMsgClientToGCGetGiftPermissionsResponse_FriendPermission> * mutable_friend_permissions();
	void set_has_is_unlimited();
	void clear_has_is_unlimited();
	void set_has_has_two_factor();
	void clear_has_has_two_factor();
	void set_has_sender_permission();
	void clear_has_sender_permission();
	void set_has_friendship_age_requirement();
	void clear_has_friendship_age_requirement();
	void set_has_friendship_age_requirement_two_factor();
	void clear_has_friendship_age_requirement_two_factor();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 64
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:6155
class CMsgClientToGCUnpackBundle : public Message {
public:

	static const int kItemIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 item_id_;  // +0x18

	static CMsgClientToGCUnpackBundle * default_instance_;
	CMsgClientToGCUnpackBundle();
	virtual ~CMsgClientToGCUnpackBundle();
	CMsgClientToGCUnpackBundle(const CMsgClientToGCUnpackBundle &);
	CMsgClientToGCUnpackBundle & operator=(const CMsgClientToGCUnpackBundle &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClientToGCUnpackBundle & default_instance();
	void Swap(CMsgClientToGCUnpackBundle *);
	virtual CMsgClientToGCUnpackBundle * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClientToGCUnpackBundle &);
	void MergeFrom(const CMsgClientToGCUnpackBundle &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_item_id();
	void clear_item_id();
	uint64 item_id();
	void set_item_id(uint64);
	void set_has_item_id();
	void clear_has_item_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:6234
class CMsgClientToGCUnpackBundleResponse : public Message {
public:

	static const CMsgClientToGCUnpackBundleResponse_EUnpackBundle k_UnpackBundle_Succeeded;
	static const CMsgClientToGCUnpackBundleResponse_EUnpackBundle k_UnpackBundle_Failed_ItemIsNotBundle = 1;
	static const CMsgClientToGCUnpackBundleResponse_EUnpackBundle k_UnpackBundle_Failed_UnableToCreateContainedItem = 2;
	static const CMsgClientToGCUnpackBundleResponse_EUnpackBundle k_UnpackBundle_Failed_SOCacheError = 3;
	static const CMsgClientToGCUnpackBundleResponse_EUnpackBundle k_UnpackBundle_Failed_ItemIsInvalid = 4;
	static const CMsgClientToGCUnpackBundleResponse_EUnpackBundle k_UnpackBundle_Failed_BadItemQuantity = 5;
	static const CMsgClientToGCUnpackBundleResponse_EUnpackBundle k_UnpackBundle_Failed_UnableToDeleteItem = 6;
	static const CMsgClientToGCUnpackBundleResponse_EUnpackBundle EUnpackBundle_MIN;
	static const CMsgClientToGCUnpackBundleResponse_EUnpackBundle EUnpackBundle_MAX = 6;
	static const int EUnpackBundle_ARRAYSIZE = 7;
	static const int kUnpackedItemIdsFieldNumber = 1;
	static const int kResponseFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int response_;  // +0x28

	static CMsgClientToGCUnpackBundleResponse * default_instance_;
	typedef CMsgClientToGCUnpackBundleResponse_EUnpackBundle EUnpackBundle;
	CMsgClientToGCUnpackBundleResponse();
	virtual ~CMsgClientToGCUnpackBundleResponse();
	CMsgClientToGCUnpackBundleResponse(const CMsgClientToGCUnpackBundleResponse &);
	CMsgClientToGCUnpackBundleResponse & operator=(const CMsgClientToGCUnpackBundleResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClientToGCUnpackBundleResponse & default_instance();
	void Swap(CMsgClientToGCUnpackBundleResponse *);
	virtual CMsgClientToGCUnpackBundleResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClientToGCUnpackBundleResponse &);
	void MergeFrom(const CMsgClientToGCUnpackBundleResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool EUnpackBundle_IsValid(int);
	const EnumDescriptor * EUnpackBundle_descriptor();
	const string & EUnpackBundle_Name(EUnpackBundle);
	bool EUnpackBundle_Parse(const string &, EUnpackBundle *);
	int unpacked_item_ids_size();
	void clear_unpacked_item_ids();
	uint64 unpacked_item_ids(int);
	void set_unpacked_item_ids(int, uint64);
	void add_unpacked_item_ids(uint64);
	const RepeatedField<long unsigned int> & unpacked_item_ids();
	RepeatedField<long unsigned int> * mutable_unpacked_item_ids();
	bool has_response();
	void clear_response();
	CMsgClientToGCUnpackBundleResponse_EUnpackBundle response();
	void set_response(CMsgClientToGCUnpackBundleResponse_EUnpackBundle);
	void set_has_response();
	void clear_has_response();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:6355
class CMsgGCToClientStoreTransactionCompleted : public Message {
public:

	static const int kTxnIdFieldNumber = 1;
	static const int kItemIdsFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 txn_id_;  // +0x18

	static CMsgGCToClientStoreTransactionCompleted * default_instance_;
	CMsgGCToClientStoreTransactionCompleted();
	virtual ~CMsgGCToClientStoreTransactionCompleted();
	CMsgGCToClientStoreTransactionCompleted(const CMsgGCToClientStoreTransactionCompleted &);
	CMsgGCToClientStoreTransactionCompleted & operator=(const CMsgGCToClientStoreTransactionCompleted &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToClientStoreTransactionCompleted & default_instance();
	void Swap(CMsgGCToClientStoreTransactionCompleted *);
	virtual CMsgGCToClientStoreTransactionCompleted * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToClientStoreTransactionCompleted &);
	void MergeFrom(const CMsgGCToClientStoreTransactionCompleted &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_txn_id();
	void clear_txn_id();
	uint64 txn_id();
	void set_txn_id(uint64);
	int item_ids_size();
	void clear_item_ids();
	uint64 item_ids(int);
	void set_item_ids(int, uint64);
	void add_item_ids(uint64);
	const RepeatedField<long unsigned int> & item_ids();
	RepeatedField<long unsigned int> * mutable_item_ids();
	void set_has_txn_id();
	void clear_has_txn_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:6447
class CMsgClientToGCEquipItems : public Message {
public:

	static const int kEquipsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgClientToGCEquipItems * default_instance_;
	CMsgClientToGCEquipItems();
	virtual ~CMsgClientToGCEquipItems();
	CMsgClientToGCEquipItems(const CMsgClientToGCEquipItems &);
	CMsgClientToGCEquipItems & operator=(const CMsgClientToGCEquipItems &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClientToGCEquipItems & default_instance();
	void Swap(CMsgClientToGCEquipItems *);
	virtual CMsgClientToGCEquipItems * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClientToGCEquipItems &);
	void MergeFrom(const CMsgClientToGCEquipItems &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int equips_size();
	void clear_equips();
	const CMsgAdjustItemEquippedState & equips(int);
	CMsgAdjustItemEquippedState * mutable_equips(int);
	CMsgAdjustItemEquippedState * add_equips();
	const RepeatedPtrField<CMsgAdjustItemEquippedState> & equips();
	RepeatedPtrField<CMsgAdjustItemEquippedState> * mutable_equips();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:6529
class CMsgClientToGCEquipItemsResponse : public Message {
public:

	static const int kSoCacheVersionIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 so_cache_version_id_;  // +0x18

	static CMsgClientToGCEquipItemsResponse * default_instance_;
	CMsgClientToGCEquipItemsResponse();
	virtual ~CMsgClientToGCEquipItemsResponse();
	CMsgClientToGCEquipItemsResponse(const CMsgClientToGCEquipItemsResponse &);
	CMsgClientToGCEquipItemsResponse & operator=(const CMsgClientToGCEquipItemsResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClientToGCEquipItemsResponse & default_instance();
	void Swap(CMsgClientToGCEquipItemsResponse *);
	virtual CMsgClientToGCEquipItemsResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClientToGCEquipItemsResponse &);
	void MergeFrom(const CMsgClientToGCEquipItemsResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_so_cache_version_id();
	void clear_so_cache_version_id();
	uint64 so_cache_version_id();
	void set_so_cache_version_id(uint64);
	void set_has_so_cache_version_id();
	void clear_has_so_cache_version_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:6608
class CMsgClientToGCSetItemStyle : public Message {
public:

	static const int kItemIdFieldNumber = 1;
	static const int kStyleIndexFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 item_id_;  // +0x18
	uint32 style_index_;  // +0x20

	static CMsgClientToGCSetItemStyle * default_instance_;
	CMsgClientToGCSetItemStyle();
	virtual ~CMsgClientToGCSetItemStyle();
	CMsgClientToGCSetItemStyle(const CMsgClientToGCSetItemStyle &);
	CMsgClientToGCSetItemStyle & operator=(const CMsgClientToGCSetItemStyle &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClientToGCSetItemStyle & default_instance();
	void Swap(CMsgClientToGCSetItemStyle *);
	virtual CMsgClientToGCSetItemStyle * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClientToGCSetItemStyle &);
	void MergeFrom(const CMsgClientToGCSetItemStyle &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_item_id();
	void clear_item_id();
	uint64 item_id();
	void set_item_id(uint64);
	bool has_style_index();
	void clear_style_index();
	uint32 style_index();
	void set_style_index(uint32);
	void set_has_item_id();
	void clear_has_item_id();
	void set_has_style_index();
	void clear_has_style_index();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:6697
class CMsgClientToGCSetItemStyleResponse : public Message {
public:

	static const CMsgClientToGCSetItemStyleResponse_ESetStyle k_SetStyle_Succeeded;
	static const CMsgClientToGCSetItemStyleResponse_ESetStyle k_SetStyle_Failed = 1;
	static const CMsgClientToGCSetItemStyleResponse_ESetStyle k_SetStyle_Failed_StyleIsLocked = 2;
	static const CMsgClientToGCSetItemStyleResponse_ESetStyle ESetStyle_MIN;
	static const CMsgClientToGCSetItemStyleResponse_ESetStyle ESetStyle_MAX = 2;
	static const int ESetStyle_ARRAYSIZE = 3;
	static const int kResponseFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int response_;  // +0x18

	static CMsgClientToGCSetItemStyleResponse * default_instance_;
	typedef CMsgClientToGCSetItemStyleResponse_ESetStyle ESetStyle;
	CMsgClientToGCSetItemStyleResponse();
	virtual ~CMsgClientToGCSetItemStyleResponse();
	CMsgClientToGCSetItemStyleResponse(const CMsgClientToGCSetItemStyleResponse &);
	CMsgClientToGCSetItemStyleResponse & operator=(const CMsgClientToGCSetItemStyleResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClientToGCSetItemStyleResponse & default_instance();
	void Swap(CMsgClientToGCSetItemStyleResponse *);
	virtual CMsgClientToGCSetItemStyleResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClientToGCSetItemStyleResponse &);
	void MergeFrom(const CMsgClientToGCSetItemStyleResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool ESetStyle_IsValid(int);
	const EnumDescriptor * ESetStyle_descriptor();
	const string & ESetStyle_Name(ESetStyle);
	bool ESetStyle_Parse(const string &, ESetStyle *);
	bool has_response();
	void clear_response();
	CMsgClientToGCSetItemStyleResponse_ESetStyle response();
	void set_response(CMsgClientToGCSetItemStyleResponse_ESetStyle);
	void set_has_response();
	void clear_has_response();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:6801
class CMsgClientToGCUnlockItemStyle : public Message {
public:

	static const int kItemToUnlockFieldNumber = 1;
	static const int kStyleIndexFieldNumber = 2;
	static const int kConsumableItemIdsFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 item_to_unlock_;  // +0x18
	uint32 style_index_;  // +0x30

	static CMsgClientToGCUnlockItemStyle * default_instance_;
	CMsgClientToGCUnlockItemStyle();
	virtual ~CMsgClientToGCUnlockItemStyle();
	CMsgClientToGCUnlockItemStyle(const CMsgClientToGCUnlockItemStyle &);
	CMsgClientToGCUnlockItemStyle & operator=(const CMsgClientToGCUnlockItemStyle &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClientToGCUnlockItemStyle & default_instance();
	void Swap(CMsgClientToGCUnlockItemStyle *);
	virtual CMsgClientToGCUnlockItemStyle * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClientToGCUnlockItemStyle &);
	void MergeFrom(const CMsgClientToGCUnlockItemStyle &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_item_to_unlock();
	void clear_item_to_unlock();
	uint64 item_to_unlock();
	void set_item_to_unlock(uint64);
	bool has_style_index();
	void clear_style_index();
	uint32 style_index();
	void set_style_index(uint32);
	int consumable_item_ids_size();
	void clear_consumable_item_ids();
	uint64 consumable_item_ids(int);
	void set_consumable_item_ids(int, uint64);
	void add_consumable_item_ids(uint64);
	const RepeatedField<long unsigned int> & consumable_item_ids();
	RepeatedField<long unsigned int> * mutable_consumable_item_ids();
	void set_has_item_to_unlock();
	void clear_has_item_to_unlock();
	void set_has_style_index();
	void clear_has_style_index();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 56
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:6903
class CMsgClientToGCUnlockItemStyleResponse : public Message {
public:

	static const CMsgClientToGCUnlockItemStyleResponse_EUnlockStyle k_UnlockStyle_Succeeded;
	static const CMsgClientToGCUnlockItemStyleResponse_EUnlockStyle k_UnlockStyle_Failed_PreReq = 1;
	static const CMsgClientToGCUnlockItemStyleResponse_EUnlockStyle k_UnlockStyle_Failed_CantAfford = 2;
	static const CMsgClientToGCUnlockItemStyleResponse_EUnlockStyle k_UnlockStyle_Failed_CantCommit = 3;
	static const CMsgClientToGCUnlockItemStyleResponse_EUnlockStyle k_UnlockStyle_Failed_CantLockCache = 4;
	static const CMsgClientToGCUnlockItemStyleResponse_EUnlockStyle k_UnlockStyle_Failed_CantAffordAttrib = 5;
	static const CMsgClientToGCUnlockItemStyleResponse_EUnlockStyle k_UnlockStyle_Failed_CantAffordGem = 6;
	static const CMsgClientToGCUnlockItemStyleResponse_EUnlockStyle k_UnlockStyle_Failed_NoCompendiumLevel = 7;
	static const CMsgClientToGCUnlockItemStyleResponse_EUnlockStyle k_UnlockStyle_Failed_AlreadyUnlocked = 8;
	static const CMsgClientToGCUnlockItemStyleResponse_EUnlockStyle k_UnlockStyle_Failed_OtherError = 9;
	static const CMsgClientToGCUnlockItemStyleResponse_EUnlockStyle k_UnlockStyle_Failed_ItemIsInvalid = 10;
	static const CMsgClientToGCUnlockItemStyleResponse_EUnlockStyle k_UnlockStyle_Failed_ToolIsInvalid = 11;
	static const CMsgClientToGCUnlockItemStyleResponse_EUnlockStyle EUnlockStyle_MIN;
	static const CMsgClientToGCUnlockItemStyleResponse_EUnlockStyle EUnlockStyle_MAX = 11;
	static const int EUnlockStyle_ARRAYSIZE = 12;
	static const int kResponseFieldNumber = 1;
	static const int kItemIdFieldNumber = 2;
	static const int kStyleIndexFieldNumber = 3;
	static const int kStylePrereqFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 item_id_;  // +0x18
	int response_;  // +0x20
	uint32 style_index_;  // +0x24
	uint32 style_prereq_;  // +0x28

	static CMsgClientToGCUnlockItemStyleResponse * default_instance_;
	typedef CMsgClientToGCUnlockItemStyleResponse_EUnlockStyle EUnlockStyle;
	CMsgClientToGCUnlockItemStyleResponse();
	virtual ~CMsgClientToGCUnlockItemStyleResponse();
	CMsgClientToGCUnlockItemStyleResponse(const CMsgClientToGCUnlockItemStyleResponse &);
	CMsgClientToGCUnlockItemStyleResponse & operator=(const CMsgClientToGCUnlockItemStyleResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClientToGCUnlockItemStyleResponse & default_instance();
	void Swap(CMsgClientToGCUnlockItemStyleResponse *);
	virtual CMsgClientToGCUnlockItemStyleResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClientToGCUnlockItemStyleResponse &);
	void MergeFrom(const CMsgClientToGCUnlockItemStyleResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool EUnlockStyle_IsValid(int);
	const EnumDescriptor * EUnlockStyle_descriptor();
	const string & EUnlockStyle_Name(EUnlockStyle);
	bool EUnlockStyle_Parse(const string &, EUnlockStyle *);
	bool has_response();
	void clear_response();
	CMsgClientToGCUnlockItemStyleResponse_EUnlockStyle response();
	void set_response(CMsgClientToGCUnlockItemStyleResponse_EUnlockStyle);
	bool has_item_id();
	void clear_item_id();
	uint64 item_id();
	void set_item_id(uint64);
	bool has_style_index();
	void clear_style_index();
	uint32 style_index();
	void set_style_index(uint32);
	bool has_style_prereq();
	void clear_style_prereq();
	uint32 style_prereq();
	void set_style_prereq(uint32);
	void set_has_response();
	void clear_has_response();
	void set_has_item_id();
	void clear_has_item_id();
	void set_has_style_index();
	void clear_has_style_index();
	void set_has_style_prereq();
	void clear_has_style_prereq();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:7046
class CMsgClientToGCSetItemInventoryCategory : public Message {
public:

	static const int kItemIdsFieldNumber = 1;
	static const int kSetToValueFieldNumber = 2;
	static const int kRemoveCategoriesFieldNumber = 3;
	static const int kAddCategoriesFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 set_to_value_;  // +0x28
	uint32 remove_categories_;  // +0x2c
	uint32 add_categories_;  // +0x30

	static CMsgClientToGCSetItemInventoryCategory * default_instance_;
	CMsgClientToGCSetItemInventoryCategory();
	virtual ~CMsgClientToGCSetItemInventoryCategory();
	CMsgClientToGCSetItemInventoryCategory(const CMsgClientToGCSetItemInventoryCategory &);
	CMsgClientToGCSetItemInventoryCategory & operator=(const CMsgClientToGCSetItemInventoryCategory &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClientToGCSetItemInventoryCategory & default_instance();
	void Swap(CMsgClientToGCSetItemInventoryCategory *);
	virtual CMsgClientToGCSetItemInventoryCategory * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClientToGCSetItemInventoryCategory &);
	void MergeFrom(const CMsgClientToGCSetItemInventoryCategory &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int item_ids_size();
	void clear_item_ids();
	uint64 item_ids(int);
	void set_item_ids(int, uint64);
	void add_item_ids(uint64);
	const RepeatedField<long unsigned int> & item_ids();
	RepeatedField<long unsigned int> * mutable_item_ids();
	bool has_set_to_value();
	void clear_set_to_value();
	uint32 set_to_value();
	void set_set_to_value(uint32);
	bool has_remove_categories();
	void clear_remove_categories();
	uint32 remove_categories();
	void set_remove_categories(uint32);
	bool has_add_categories();
	void clear_add_categories();
	uint32 add_categories();
	void set_add_categories(uint32);
	void set_has_set_to_value();
	void clear_has_set_to_value();
	void set_has_remove_categories();
	void clear_has_remove_categories();
	void set_has_add_categories();
	void clear_has_add_categories();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 56
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:7158
class CMsgClientToGCUnlockCrate : public Message {
public:

	static const int kCrateItemIdFieldNumber = 1;
	static const int kKeyItemIdFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 crate_item_id_;  // +0x18
	uint64 key_item_id_;  // +0x20

	static CMsgClientToGCUnlockCrate * default_instance_;
	CMsgClientToGCUnlockCrate();
	virtual ~CMsgClientToGCUnlockCrate();
	CMsgClientToGCUnlockCrate(const CMsgClientToGCUnlockCrate &);
	CMsgClientToGCUnlockCrate & operator=(const CMsgClientToGCUnlockCrate &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClientToGCUnlockCrate & default_instance();
	void Swap(CMsgClientToGCUnlockCrate *);
	virtual CMsgClientToGCUnlockCrate * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClientToGCUnlockCrate &);
	void MergeFrom(const CMsgClientToGCUnlockCrate &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_crate_item_id();
	void clear_crate_item_id();
	uint64 crate_item_id();
	void set_crate_item_id(uint64);
	bool has_key_item_id();
	void clear_key_item_id();
	uint64 key_item_id();
	void set_key_item_id(uint64);
	void set_has_crate_item_id();
	void clear_has_crate_item_id();
	void set_has_key_item_id();
	void clear_has_key_item_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:7247
class CMsgClientToGCUnlockCrateResponse_Item : public Message {
public:

	static const int kItemIdFieldNumber = 1;
	static const int kDefIndexFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 item_id_;  // +0x18
	uint32 def_index_;  // +0x20

	static CMsgClientToGCUnlockCrateResponse_Item * default_instance_;
	CMsgClientToGCUnlockCrateResponse_Item();
	virtual ~CMsgClientToGCUnlockCrateResponse_Item();
	CMsgClientToGCUnlockCrateResponse_Item(const CMsgClientToGCUnlockCrateResponse_Item &);
	CMsgClientToGCUnlockCrateResponse_Item & operator=(const CMsgClientToGCUnlockCrateResponse_Item &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClientToGCUnlockCrateResponse_Item & default_instance();
	void Swap(CMsgClientToGCUnlockCrateResponse_Item *);
	virtual CMsgClientToGCUnlockCrateResponse_Item * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClientToGCUnlockCrateResponse_Item &);
	void MergeFrom(const CMsgClientToGCUnlockCrateResponse_Item &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_item_id();
	void clear_item_id();
	uint64 item_id();
	void set_item_id(uint64);
	bool has_def_index();
	void clear_def_index();
	uint32 def_index();
	void set_def_index(uint32);
	void set_has_item_id();
	void clear_has_item_id();
	void set_has_def_index();
	void clear_has_def_index();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:7336
class CMsgClientToGCUnlockCrateResponse : public Message {
public:

	static const int kResultFieldNumber = 1;
	static const int kGrantedItemsFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int result_;  // +0x30

	static CMsgClientToGCUnlockCrateResponse * default_instance_;
	CMsgClientToGCUnlockCrateResponse();
	virtual ~CMsgClientToGCUnlockCrateResponse();
	CMsgClientToGCUnlockCrateResponse(const CMsgClientToGCUnlockCrateResponse &);
	CMsgClientToGCUnlockCrateResponse & operator=(const CMsgClientToGCUnlockCrateResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClientToGCUnlockCrateResponse & default_instance();
	void Swap(CMsgClientToGCUnlockCrateResponse *);
	virtual CMsgClientToGCUnlockCrateResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClientToGCUnlockCrateResponse &);
	void MergeFrom(const CMsgClientToGCUnlockCrateResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_result();
	void clear_result();
	EGCMsgResponse result();
	void set_result(EGCMsgResponse);
	int granted_items_size();
	void clear_granted_items();
	const CMsgClientToGCUnlockCrateResponse_Item & granted_items(int);
	CMsgClientToGCUnlockCrateResponse_Item * mutable_granted_items(int);
	CMsgClientToGCUnlockCrateResponse_Item * add_granted_items();
	const RepeatedPtrField<CMsgClientToGCUnlockCrateResponse_Item> & granted_items();
	RepeatedPtrField<CMsgClientToGCUnlockCrateResponse_Item> * mutable_granted_items();
	void set_has_result();
	void clear_has_result();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 56
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:7430
class CMsgClientToGCRemoveItemAttribute : public Message {
public:

	static const int kItemIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 item_id_;  // +0x18

	static CMsgClientToGCRemoveItemAttribute * default_instance_;
	CMsgClientToGCRemoveItemAttribute();
	virtual ~CMsgClientToGCRemoveItemAttribute();
	CMsgClientToGCRemoveItemAttribute(const CMsgClientToGCRemoveItemAttribute &);
	CMsgClientToGCRemoveItemAttribute & operator=(const CMsgClientToGCRemoveItemAttribute &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClientToGCRemoveItemAttribute & default_instance();
	void Swap(CMsgClientToGCRemoveItemAttribute *);
	virtual CMsgClientToGCRemoveItemAttribute * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClientToGCRemoveItemAttribute &);
	void MergeFrom(const CMsgClientToGCRemoveItemAttribute &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_item_id();
	void clear_item_id();
	uint64 item_id();
	void set_item_id(uint64);
	void set_has_item_id();
	void clear_has_item_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:7509
class CMsgClientToGCRemoveItemAttributeResponse : public Message {
public:

	static const CMsgClientToGCRemoveItemAttributeResponse_ERemoveItemAttribute k_RemoveItemAttribute_Succeeded;
	static const CMsgClientToGCRemoveItemAttributeResponse_ERemoveItemAttribute k_RemoveItemAttribute_Failed = 1;
	static const CMsgClientToGCRemoveItemAttributeResponse_ERemoveItemAttribute k_RemoveItemAttribute_Failed_ItemIsInvalid = 2;
	static const CMsgClientToGCRemoveItemAttributeResponse_ERemoveItemAttribute k_RemoveItemAttribute_Failed_AttributeCannotBeRemoved = 3;
	static const CMsgClientToGCRemoveItemAttributeResponse_ERemoveItemAttribute k_RemoveItemAttribute_Failed_AttributeDoesntExist = 4;
	static const CMsgClientToGCRemoveItemAttributeResponse_ERemoveItemAttribute ERemoveItemAttribute_MIN;
	static const CMsgClientToGCRemoveItemAttributeResponse_ERemoveItemAttribute ERemoveItemAttribute_MAX = 4;
	static const int ERemoveItemAttribute_ARRAYSIZE = 5;
	static const int kResponseFieldNumber = 1;
	static const int kItemIdFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 item_id_;  // +0x18
	int response_;  // +0x20

	static CMsgClientToGCRemoveItemAttributeResponse * default_instance_;
	typedef CMsgClientToGCRemoveItemAttributeResponse_ERemoveItemAttribute ERemoveItemAttribute;
	CMsgClientToGCRemoveItemAttributeResponse();
	virtual ~CMsgClientToGCRemoveItemAttributeResponse();
	CMsgClientToGCRemoveItemAttributeResponse(const CMsgClientToGCRemoveItemAttributeResponse &);
	CMsgClientToGCRemoveItemAttributeResponse & operator=(const CMsgClientToGCRemoveItemAttributeResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClientToGCRemoveItemAttributeResponse & default_instance();
	void Swap(CMsgClientToGCRemoveItemAttributeResponse *);
	virtual CMsgClientToGCRemoveItemAttributeResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClientToGCRemoveItemAttributeResponse &);
	void MergeFrom(const CMsgClientToGCRemoveItemAttributeResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool ERemoveItemAttribute_IsValid(int);
	const EnumDescriptor * ERemoveItemAttribute_descriptor();
	const string & ERemoveItemAttribute_Name(ERemoveItemAttribute);
	bool ERemoveItemAttribute_Parse(const string &, ERemoveItemAttribute *);
	bool has_response();
	void clear_response();
	CMsgClientToGCRemoveItemAttributeResponse_ERemoveItemAttribute response();
	void set_response(CMsgClientToGCRemoveItemAttributeResponse_ERemoveItemAttribute);
	bool has_item_id();
	void clear_item_id();
	uint64 item_id();
	void set_item_id(uint64);
	void set_has_response();
	void clear_has_response();
	void set_has_item_id();
	void clear_has_item_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:7625
class CMsgClientToGCNameItem : public Message {
public:

	static const int kSubjectItemIdFieldNumber = 1;
	static const int kToolItemIdFieldNumber = 2;
	static const int kNameFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 subject_item_id_;  // +0x18
	uint64 tool_item_id_;  // +0x20
	string * name_;  // +0x28

	static CMsgClientToGCNameItem * default_instance_;
	CMsgClientToGCNameItem();
	virtual ~CMsgClientToGCNameItem();
	CMsgClientToGCNameItem(const CMsgClientToGCNameItem &);
	CMsgClientToGCNameItem & operator=(const CMsgClientToGCNameItem &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClientToGCNameItem & default_instance();
	void Swap(CMsgClientToGCNameItem *);
	virtual CMsgClientToGCNameItem * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClientToGCNameItem &);
	void MergeFrom(const CMsgClientToGCNameItem &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_subject_item_id();
	void clear_subject_item_id();
	uint64 subject_item_id();
	void set_subject_item_id(uint64);
	bool has_tool_item_id();
	void clear_tool_item_id();
	uint64 tool_item_id();
	void set_tool_item_id(uint64);
	bool has_name();
	void clear_name();
	const string & name();
	void set_name(const string &);
	void set_name(const char *);
	void set_name(const char *, size_t);
	string * mutable_name();
	string * release_name();
	void set_allocated_name(string *);
	void set_has_subject_item_id();
	void clear_has_subject_item_id();
	void set_has_tool_item_id();
	void clear_has_tool_item_id();
	void set_has_name();
	void clear_has_name();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:7729
class CMsgClientToGCNameItemResponse : public Message {
public:

	static const CMsgClientToGCNameItemResponse_ENameItem k_NameItem_Succeeded;
	static const CMsgClientToGCNameItemResponse_ENameItem k_NameItem_Failed = 1;
	static const CMsgClientToGCNameItemResponse_ENameItem k_NameItem_Failed_ToolIsInvalid = 2;
	static const CMsgClientToGCNameItemResponse_ENameItem k_NameItem_Failed_ItemIsInvalid = 3;
	static const CMsgClientToGCNameItemResponse_ENameItem k_NameItem_Failed_NameIsInvalid = 4;
	static const CMsgClientToGCNameItemResponse_ENameItem ENameItem_MIN;
	static const CMsgClientToGCNameItemResponse_ENameItem ENameItem_MAX = 4;
	static const int ENameItem_ARRAYSIZE = 5;
	static const int kResponseFieldNumber = 1;
	static const int kItemIdFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 item_id_;  // +0x18
	int response_;  // +0x20

	static CMsgClientToGCNameItemResponse * default_instance_;
	typedef CMsgClientToGCNameItemResponse_ENameItem ENameItem;
	CMsgClientToGCNameItemResponse();
	virtual ~CMsgClientToGCNameItemResponse();
	CMsgClientToGCNameItemResponse(const CMsgClientToGCNameItemResponse &);
	CMsgClientToGCNameItemResponse & operator=(const CMsgClientToGCNameItemResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClientToGCNameItemResponse & default_instance();
	void Swap(CMsgClientToGCNameItemResponse *);
	virtual CMsgClientToGCNameItemResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClientToGCNameItemResponse &);
	void MergeFrom(const CMsgClientToGCNameItemResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool ENameItem_IsValid(int);
	const EnumDescriptor * ENameItem_descriptor();
	const string & ENameItem_Name(ENameItem);
	bool ENameItem_Parse(const string &, ENameItem *);
	bool has_response();
	void clear_response();
	CMsgClientToGCNameItemResponse_ENameItem response();
	void set_response(CMsgClientToGCNameItemResponse_ENameItem);
	bool has_item_id();
	void clear_item_id();
	uint64 item_id();
	void set_item_id(uint64);
	void set_has_response();
	void clear_has_response();
	void set_has_item_id();
	void clear_has_item_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:7845
class CMsgGCSetItemPosition : public Message {
public:

	static const int kItemIdFieldNumber = 1;
	static const int kNewPositionFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 item_id_;  // +0x18
	uint32 new_position_;  // +0x20

	static CMsgGCSetItemPosition * default_instance_;
	CMsgGCSetItemPosition();
	virtual ~CMsgGCSetItemPosition();
	CMsgGCSetItemPosition(const CMsgGCSetItemPosition &);
	CMsgGCSetItemPosition & operator=(const CMsgGCSetItemPosition &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCSetItemPosition & default_instance();
	void Swap(CMsgGCSetItemPosition *);
	virtual CMsgGCSetItemPosition * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCSetItemPosition &);
	void MergeFrom(const CMsgGCSetItemPosition &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_item_id();
	void clear_item_id();
	uint64 item_id();
	void set_item_id(uint64);
	bool has_new_position();
	void clear_new_position();
	uint32 new_position();
	void set_new_position(uint32);
	void set_has_item_id();
	void clear_has_item_id();
	void set_has_new_position();
	void clear_has_new_position();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:7934
class CAttribute_ItemDynamicRecipeComponent : public Message {
public:

	static const int kItemDefFieldNumber = 1;
	static const int kItemQualityFieldNumber = 2;
	static const int kItemFlagsFieldNumber = 3;
	static const int kAttributesStringFieldNumber = 4;
	static const int kItemCountFieldNumber = 5;
	static const int kItemsFulfilledFieldNumber = 6;
	static const int kItemRarityFieldNumber = 7;
	static const int kLootlistFieldNumber = 8;
	static const int kFulfilledItemIdFieldNumber = 9;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 item_def_;  // +0x18
	uint32 item_quality_;  // +0x1c
	string * attributes_string_;  // +0x20
	uint32 item_flags_;  // +0x28
	uint32 item_count_;  // +0x2c
	uint32 items_fulfilled_;  // +0x30
	uint32 item_rarity_;  // +0x34
	string * lootlist_;  // +0x38
	uint64 fulfilled_item_id_;  // +0x40

	static CAttribute_ItemDynamicRecipeComponent * default_instance_;
	CAttribute_ItemDynamicRecipeComponent();
	virtual ~CAttribute_ItemDynamicRecipeComponent();
	CAttribute_ItemDynamicRecipeComponent(const CAttribute_ItemDynamicRecipeComponent &);
	CAttribute_ItemDynamicRecipeComponent & operator=(const CAttribute_ItemDynamicRecipeComponent &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CAttribute_ItemDynamicRecipeComponent & default_instance();
	void Swap(CAttribute_ItemDynamicRecipeComponent *);
	virtual CAttribute_ItemDynamicRecipeComponent * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CAttribute_ItemDynamicRecipeComponent &);
	void MergeFrom(const CAttribute_ItemDynamicRecipeComponent &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_item_def();
	void clear_item_def();
	uint32 item_def();
	void set_item_def(uint32);
	bool has_item_quality();
	void clear_item_quality();
	uint32 item_quality();
	void set_item_quality(uint32);
	bool has_item_flags();
	void clear_item_flags();
	uint32 item_flags();
	void set_item_flags(uint32);
	bool has_attributes_string();
	void clear_attributes_string();
	const string & attributes_string();
	void set_attributes_string(const string &);
	void set_attributes_string(const char *);
	void set_attributes_string(const char *, size_t);
	string * mutable_attributes_string();
	string * release_attributes_string();
	void set_allocated_attributes_string(string *);
	bool has_item_count();
	void clear_item_count();
	uint32 item_count();
	void set_item_count(uint32);
	bool has_items_fulfilled();
	void clear_items_fulfilled();
	uint32 items_fulfilled();
	void set_items_fulfilled(uint32);
	bool has_item_rarity();
	void clear_item_rarity();
	uint32 item_rarity();
	void set_item_rarity(uint32);
	bool has_lootlist();
	void clear_lootlist();
	const string & lootlist();
	void set_lootlist(const string &);
	void set_lootlist(const char *);
	void set_lootlist(const char *, size_t);
	string * mutable_lootlist();
	string * release_lootlist();
	void set_allocated_lootlist(string *);
	bool has_fulfilled_item_id();
	void clear_fulfilled_item_id();
	uint64 fulfilled_item_id();
	void set_fulfilled_item_id(uint64);
	void set_has_item_def();
	void clear_has_item_def();
	void set_has_item_quality();
	void clear_has_item_quality();
	void set_has_item_flags();
	void clear_has_item_flags();
	void set_has_attributes_string();
	void clear_has_attributes_string();
	void set_has_item_count();
	void clear_has_item_count();
	void set_has_items_fulfilled();
	void clear_has_items_fulfilled();
	void set_has_item_rarity();
	void clear_has_item_rarity();
	void set_has_lootlist();
	void clear_has_lootlist();
	void set_has_fulfilled_item_id();
	void clear_has_fulfilled_item_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 72
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:8103
class CProtoItemSocket : public Message {
public:

	static const int kItemIdFieldNumber = 1;
	static const int kAttrDefIndexFieldNumber = 2;
	static const int kRequiredTypeFieldNumber = 3;
	static const int kRequiredHeroFieldNumber = 4;
	static const int kGemDefIndexFieldNumber = 5;
	static const int kNotTradableFieldNumber = 6;
	static const int kRequiredItemSlotFieldNumber = 7;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 item_id_;  // +0x18
	uint32 attr_def_index_;  // +0x20
	uint32 required_type_;  // +0x24
	string * required_hero_;  // +0x28
	uint32 gem_def_index_;  // +0x30
	bool not_tradable_;  // +0x34

	string * required_item_slot_;  // +0x38

	static CProtoItemSocket * default_instance_;
	CProtoItemSocket();
	virtual ~CProtoItemSocket();
	CProtoItemSocket(const CProtoItemSocket &);
	CProtoItemSocket & operator=(const CProtoItemSocket &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CProtoItemSocket & default_instance();
	void Swap(CProtoItemSocket *);
	virtual CProtoItemSocket * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CProtoItemSocket &);
	void MergeFrom(const CProtoItemSocket &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_item_id();
	void clear_item_id();
	uint64 item_id();
	void set_item_id(uint64);
	bool has_attr_def_index();
	void clear_attr_def_index();
	uint32 attr_def_index();
	void set_attr_def_index(uint32);
	bool has_required_type();
	void clear_required_type();
	uint32 required_type();
	void set_required_type(uint32);
	bool has_required_hero();
	void clear_required_hero();
	const string & required_hero();
	void set_required_hero(const string &);
	void set_required_hero(const char *);
	void set_required_hero(const char *, size_t);
	string * mutable_required_hero();
	string * release_required_hero();
	void set_allocated_required_hero(string *);
	bool has_gem_def_index();
	void clear_gem_def_index();
	uint32 gem_def_index();
	void set_gem_def_index(uint32);
	bool has_not_tradable();
	void clear_not_tradable();
	bool not_tradable();
	void set_not_tradable(bool);
	bool has_required_item_slot();
	void clear_required_item_slot();
	const string & required_item_slot();
	void set_required_item_slot(const string &);
	void set_required_item_slot(const char *);
	void set_required_item_slot(const char *, size_t);
	string * mutable_required_item_slot();
	string * release_required_item_slot();
	void set_allocated_required_item_slot(string *);
	void set_has_item_id();
	void clear_has_item_id();
	void set_has_attr_def_index();
	void clear_has_attr_def_index();
	void set_has_required_type();
	void clear_has_required_type();
	void set_has_required_hero();
	void clear_has_required_hero();
	void set_has_gem_def_index();
	void clear_has_gem_def_index();
	void set_has_not_tradable();
	void clear_has_not_tradable();
	void set_has_required_item_slot();
	void clear_has_required_item_slot();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 64
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:8252
class CProtoItemSocket_Empty : public Message {
public:

	static const int kSocketFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CProtoItemSocket_Empty * default_instance_;
	CProtoItemSocket_Empty();
	virtual ~CProtoItemSocket_Empty();
	CProtoItemSocket_Empty(const CProtoItemSocket_Empty &);
	CProtoItemSocket_Empty & operator=(const CProtoItemSocket_Empty &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CProtoItemSocket_Empty & default_instance();
	void Swap(CProtoItemSocket_Empty *);
	virtual CProtoItemSocket_Empty * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CProtoItemSocket_Empty &);
	void MergeFrom(const CProtoItemSocket_Empty &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_socket();
	void clear_socket();
	const CProtoItemSocket & socket();
	CProtoItemSocket * mutable_socket();
	CProtoItemSocket * release_socket();
	void set_allocated_socket(CProtoItemSocket *);
	void set_has_socket();
	void clear_has_socket();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:8333
class CProtoItemSocket_Effect : public Message {
public:

	static const int kSocketFieldNumber = 1;
	static const int kEffectFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 effect_;  // +0x20

	static CProtoItemSocket_Effect * default_instance_;
	CProtoItemSocket_Effect();
	virtual ~CProtoItemSocket_Effect();
	CProtoItemSocket_Effect(const CProtoItemSocket_Effect &);
	CProtoItemSocket_Effect & operator=(const CProtoItemSocket_Effect &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CProtoItemSocket_Effect & default_instance();
	void Swap(CProtoItemSocket_Effect *);
	virtual CProtoItemSocket_Effect * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CProtoItemSocket_Effect &);
	void MergeFrom(const CProtoItemSocket_Effect &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_socket();
	void clear_socket();
	const CProtoItemSocket & socket();
	CProtoItemSocket * mutable_socket();
	CProtoItemSocket * release_socket();
	void set_allocated_socket(CProtoItemSocket *);
	bool has_effect();
	void clear_effect();
	uint32 effect();
	void set_effect(uint32);
	void set_has_socket();
	void clear_has_socket();
	void set_has_effect();
	void clear_has_effect();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:8424
class CProtoItemSocket_Color : public Message {
public:

	static const int kSocketFieldNumber = 1;
	static const int kRedFieldNumber = 2;
	static const int kGreenFieldNumber = 3;
	static const int kBlueFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 red_;  // +0x20
	uint32 green_;  // +0x24
	uint32 blue_;  // +0x28

	static CProtoItemSocket_Color * default_instance_;
	CProtoItemSocket_Color();
	virtual ~CProtoItemSocket_Color();
	CProtoItemSocket_Color(const CProtoItemSocket_Color &);
	CProtoItemSocket_Color & operator=(const CProtoItemSocket_Color &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CProtoItemSocket_Color & default_instance();
	void Swap(CProtoItemSocket_Color *);
	virtual CProtoItemSocket_Color * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CProtoItemSocket_Color &);
	void MergeFrom(const CProtoItemSocket_Color &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_socket();
	void clear_socket();
	const CProtoItemSocket & socket();
	CProtoItemSocket * mutable_socket();
	CProtoItemSocket * release_socket();
	void set_allocated_socket(CProtoItemSocket *);
	bool has_red();
	void clear_red();
	uint32 red();
	void set_red(uint32);
	bool has_green();
	void clear_green();
	uint32 green();
	void set_green(uint32);
	bool has_blue();
	void clear_blue();
	uint32 blue();
	void set_blue(uint32);
	void set_has_socket();
	void clear_has_socket();
	void set_has_red();
	void clear_has_red();
	void set_has_green();
	void clear_has_green();
	void set_has_blue();
	void clear_has_blue();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:8535
class CProtoItemSocket_Strange : public Message {
public:

	static const int kSocketFieldNumber = 1;
	static const int kStrangeTypeFieldNumber = 2;
	static const int kStrangeValueFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 strange_type_;  // +0x20
	uint32 strange_value_;  // +0x24

	static CProtoItemSocket_Strange * default_instance_;
	CProtoItemSocket_Strange();
	virtual ~CProtoItemSocket_Strange();
	CProtoItemSocket_Strange(const CProtoItemSocket_Strange &);
	CProtoItemSocket_Strange & operator=(const CProtoItemSocket_Strange &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CProtoItemSocket_Strange & default_instance();
	void Swap(CProtoItemSocket_Strange *);
	virtual CProtoItemSocket_Strange * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CProtoItemSocket_Strange &);
	void MergeFrom(const CProtoItemSocket_Strange &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_socket();
	void clear_socket();
	const CProtoItemSocket & socket();
	CProtoItemSocket * mutable_socket();
	CProtoItemSocket * release_socket();
	void set_allocated_socket(CProtoItemSocket *);
	bool has_strange_type();
	void clear_strange_type();
	uint32 strange_type();
	void set_strange_type(uint32);
	bool has_strange_value();
	void clear_strange_value();
	uint32 strange_value();
	void set_strange_value(uint32);
	void set_has_socket();
	void clear_has_socket();
	void set_has_strange_type();
	void clear_has_strange_type();
	void set_has_strange_value();
	void clear_has_strange_value();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:8636
class CProtoItemSocket_Spectator : public Message {
public:

	static const int kSocketFieldNumber = 1;
	static const int kGamesViewedFieldNumber = 2;
	static const int kCorporationIdFieldNumber = 3;
	static const int kLeagueIdFieldNumber = 4;
	static const int kTeamIdFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 games_viewed_;  // +0x20
	uint32 corporation_id_;  // +0x24
	uint32 league_id_;  // +0x28
	uint32 team_id_;  // +0x2c

	static CProtoItemSocket_Spectator * default_instance_;
	CProtoItemSocket_Spectator();
	virtual ~CProtoItemSocket_Spectator();
	CProtoItemSocket_Spectator(const CProtoItemSocket_Spectator &);
	CProtoItemSocket_Spectator & operator=(const CProtoItemSocket_Spectator &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CProtoItemSocket_Spectator & default_instance();
	void Swap(CProtoItemSocket_Spectator *);
	virtual CProtoItemSocket_Spectator * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CProtoItemSocket_Spectator &);
	void MergeFrom(const CProtoItemSocket_Spectator &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_socket();
	void clear_socket();
	const CProtoItemSocket & socket();
	CProtoItemSocket * mutable_socket();
	CProtoItemSocket * release_socket();
	void set_allocated_socket(CProtoItemSocket *);
	bool has_games_viewed();
	void clear_games_viewed();
	uint32 games_viewed();
	void set_games_viewed(uint32);
	bool has_corporation_id();
	void clear_corporation_id();
	uint32 corporation_id();
	void set_corporation_id(uint32);
	bool has_league_id();
	void clear_league_id();
	uint32 league_id();
	void set_league_id(uint32);
	bool has_team_id();
	void clear_team_id();
	uint32 team_id();
	void set_team_id(uint32);
	void set_has_socket();
	void clear_has_socket();
	void set_has_games_viewed();
	void clear_has_games_viewed();
	void set_has_corporation_id();
	void clear_has_corporation_id();
	void set_has_league_id();
	void clear_has_league_id();
	void set_has_team_id();
	void clear_has_team_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:8757
class CProtoItemSocket_AssetModifier : public Message {
public:

	static const int kSocketFieldNumber = 1;
	static const int kAssetModifierFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 asset_modifier_;  // +0x20

	static CProtoItemSocket_AssetModifier * default_instance_;
	CProtoItemSocket_AssetModifier();
	virtual ~CProtoItemSocket_AssetModifier();
	CProtoItemSocket_AssetModifier(const CProtoItemSocket_AssetModifier &);
	CProtoItemSocket_AssetModifier & operator=(const CProtoItemSocket_AssetModifier &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CProtoItemSocket_AssetModifier & default_instance();
	void Swap(CProtoItemSocket_AssetModifier *);
	virtual CProtoItemSocket_AssetModifier * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CProtoItemSocket_AssetModifier &);
	void MergeFrom(const CProtoItemSocket_AssetModifier &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_socket();
	void clear_socket();
	const CProtoItemSocket & socket();
	CProtoItemSocket * mutable_socket();
	CProtoItemSocket * release_socket();
	void set_allocated_socket(CProtoItemSocket *);
	bool has_asset_modifier();
	void clear_asset_modifier();
	uint32 asset_modifier();
	void set_asset_modifier(uint32);
	void set_has_socket();
	void clear_has_socket();
	void set_has_asset_modifier();
	void clear_has_asset_modifier();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:8848
class CProtoItemSocket_AssetModifier_DESERIALIZE_FROM_STRING_ONLY : public Message {
public:

	static const int kSocketFieldNumber = 1;
	static const int kAssetModifierFieldNumber = 2;
	static const int kAnimModifierFieldNumber = 3;
	static const int kAbilityEffectFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 asset_modifier_;  // +0x20
	uint32 anim_modifier_;  // +0x24
	uint32 ability_effect_;  // +0x28

	static CProtoItemSocket_AssetModifier_DESERIALIZE_FROM_STRING_ONLY * default_instance_;
	CProtoItemSocket_AssetModifier_DESERIALIZE_FROM_STRING_ONLY();
	virtual ~CProtoItemSocket_AssetModifier_DESERIALIZE_FROM_STRING_ONLY();
	CProtoItemSocket_AssetModifier_DESERIALIZE_FROM_STRING_ONLY(const CProtoItemSocket_AssetModifier_DESERIALIZE_FROM_STRING_ONLY &);
	CProtoItemSocket_AssetModifier_DESERIALIZE_FROM_STRING_ONLY & operator=(const CProtoItemSocket_AssetModifier_DESERIALIZE_FROM_STRING_ONLY &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CProtoItemSocket_AssetModifier_DESERIALIZE_FROM_STRING_ONLY & default_instance();
	void Swap(CProtoItemSocket_AssetModifier_DESERIALIZE_FROM_STRING_ONLY *);
	virtual CProtoItemSocket_AssetModifier_DESERIALIZE_FROM_STRING_ONLY * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CProtoItemSocket_AssetModifier_DESERIALIZE_FROM_STRING_ONLY &);
	void MergeFrom(const CProtoItemSocket_AssetModifier_DESERIALIZE_FROM_STRING_ONLY &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_socket();
	void clear_socket();
	const CProtoItemSocket & socket();
	CProtoItemSocket * mutable_socket();
	CProtoItemSocket * release_socket();
	void set_allocated_socket(CProtoItemSocket *);
	bool has_asset_modifier();
	void clear_asset_modifier();
	uint32 asset_modifier();
	void set_asset_modifier(uint32);
	bool has_anim_modifier();
	void clear_anim_modifier();
	uint32 anim_modifier();
	void set_anim_modifier(uint32);
	bool has_ability_effect();
	void clear_ability_effect();
	uint32 ability_effect();
	void set_ability_effect(uint32);
	void set_has_socket();
	void clear_has_socket();
	void set_has_asset_modifier();
	void clear_has_asset_modifier();
	void set_has_anim_modifier();
	void clear_has_anim_modifier();
	void set_has_ability_effect();
	void clear_has_ability_effect();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:8959
class CProtoItemSocket_Autograph : public Message {
public:

	static const int kSocketFieldNumber = 1;
	static const int kAutographFieldNumber = 2;
	static const int kAutographIdFieldNumber = 3;
	static const int kAutographScoreFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * autograph_;  // +0x20
	uint32 autograph_id_;  // +0x28
	uint32 autograph_score_;  // +0x2c

	static CProtoItemSocket_Autograph * default_instance_;
	CProtoItemSocket_Autograph();
	virtual ~CProtoItemSocket_Autograph();
	CProtoItemSocket_Autograph(const CProtoItemSocket_Autograph &);
	CProtoItemSocket_Autograph & operator=(const CProtoItemSocket_Autograph &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CProtoItemSocket_Autograph & default_instance();
	void Swap(CProtoItemSocket_Autograph *);
	virtual CProtoItemSocket_Autograph * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CProtoItemSocket_Autograph &);
	void MergeFrom(const CProtoItemSocket_Autograph &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_socket();
	void clear_socket();
	const CProtoItemSocket & socket();
	CProtoItemSocket * mutable_socket();
	CProtoItemSocket * release_socket();
	void set_allocated_socket(CProtoItemSocket *);
	bool has_autograph();
	void clear_autograph();
	const string & autograph();
	void set_autograph(const string &);
	void set_autograph(const char *);
	void set_autograph(const char *, size_t);
	string * mutable_autograph();
	string * release_autograph();
	void set_allocated_autograph(string *);
	bool has_autograph_id();
	void clear_autograph_id();
	uint32 autograph_id();
	void set_autograph_id(uint32);
	bool has_autograph_score();
	void clear_autograph_score();
	uint32 autograph_score();
	void set_autograph_score(uint32);
	void set_has_socket();
	void clear_has_socket();
	void set_has_autograph();
	void clear_has_autograph();
	void set_has_autograph_id();
	void clear_has_autograph_id();
	void set_has_autograph_score();
	void clear_has_autograph_score();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:9075
class CProtoItemSocket_StaticVisuals : public Message {
public:

	static const int kSocketFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CProtoItemSocket_StaticVisuals * default_instance_;
	CProtoItemSocket_StaticVisuals();
	virtual ~CProtoItemSocket_StaticVisuals();
	CProtoItemSocket_StaticVisuals(const CProtoItemSocket_StaticVisuals &);
	CProtoItemSocket_StaticVisuals & operator=(const CProtoItemSocket_StaticVisuals &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CProtoItemSocket_StaticVisuals & default_instance();
	void Swap(CProtoItemSocket_StaticVisuals *);
	virtual CProtoItemSocket_StaticVisuals * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CProtoItemSocket_StaticVisuals &);
	void MergeFrom(const CProtoItemSocket_StaticVisuals &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_socket();
	void clear_socket();
	const CProtoItemSocket & socket();
	CProtoItemSocket * mutable_socket();
	CProtoItemSocket * release_socket();
	void set_allocated_socket(CProtoItemSocket *);
	void set_has_socket();
	void clear_has_socket();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:9156
class CAttribute_String : public Message {
public:

	static const int kValueFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * value_;  // +0x18

	static CAttribute_String * default_instance_;
	CAttribute_String();
	virtual ~CAttribute_String();
	CAttribute_String(const CAttribute_String &);
	CAttribute_String & operator=(const CAttribute_String &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CAttribute_String & default_instance();
	void Swap(CAttribute_String *);
	virtual CAttribute_String * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CAttribute_String &);
	void MergeFrom(const CAttribute_String &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_value();
	void clear_value();
	const string & value();
	void set_value(const string &);
	void set_value(const char *);
	void set_value(const char *, size_t);
	string * mutable_value();
	string * release_value();
	void set_allocated_value(string *);
	void set_has_value();
	void clear_has_value();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:9240
class CWorkshop_GetItemDailyRevenue_Request : public Message {
public:

	static const int kAppidFieldNumber = 1;
	static const int kItemIdFieldNumber = 2;
	static const int kDateStartFieldNumber = 3;
	static const int kDateEndFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 appid_;  // +0x18
	uint32 item_id_;  // +0x1c
	uint32 date_start_;  // +0x20
	uint32 date_end_;  // +0x24

	static CWorkshop_GetItemDailyRevenue_Request * default_instance_;
	CWorkshop_GetItemDailyRevenue_Request();
	virtual ~CWorkshop_GetItemDailyRevenue_Request();
	CWorkshop_GetItemDailyRevenue_Request(const CWorkshop_GetItemDailyRevenue_Request &);
	CWorkshop_GetItemDailyRevenue_Request & operator=(const CWorkshop_GetItemDailyRevenue_Request &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CWorkshop_GetItemDailyRevenue_Request & default_instance();
	void Swap(CWorkshop_GetItemDailyRevenue_Request *);
	virtual CWorkshop_GetItemDailyRevenue_Request * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CWorkshop_GetItemDailyRevenue_Request &);
	void MergeFrom(const CWorkshop_GetItemDailyRevenue_Request &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_appid();
	void clear_appid();
	uint32 appid();
	void set_appid(uint32);
	bool has_item_id();
	void clear_item_id();
	uint32 item_id();
	void set_item_id(uint32);
	bool has_date_start();
	void clear_date_start();
	uint32 date_start();
	void set_date_start(uint32);
	bool has_date_end();
	void clear_date_end();
	uint32 date_end();
	void set_date_end(uint32);
	void set_has_appid();
	void clear_has_appid();
	void set_has_item_id();
	void clear_has_item_id();
	void set_has_date_start();
	void clear_has_date_start();
	void set_has_date_end();
	void clear_has_date_end();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:9349
class CWorkshop_GetItemDailyRevenue_Response_CountryDailyRevenue : public Message {
public:

	static const int kCountryCodeFieldNumber = 1;
	static const int kDateFieldNumber = 2;
	static const int kRevenueUsdFieldNumber = 3;
	static const int kUnitsFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * country_code_;  // +0x18
	int64 revenue_usd_;  // +0x20
	uint32 date_;  // +0x28
	int32 units_;  // +0x2c

	static CWorkshop_GetItemDailyRevenue_Response_CountryDailyRevenue * default_instance_;
	CWorkshop_GetItemDailyRevenue_Response_CountryDailyRevenue();
	virtual ~CWorkshop_GetItemDailyRevenue_Response_CountryDailyRevenue();
	CWorkshop_GetItemDailyRevenue_Response_CountryDailyRevenue(const CWorkshop_GetItemDailyRevenue_Response_CountryDailyRevenue &);
	CWorkshop_GetItemDailyRevenue_Response_CountryDailyRevenue & operator=(const CWorkshop_GetItemDailyRevenue_Response_CountryDailyRevenue &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CWorkshop_GetItemDailyRevenue_Response_CountryDailyRevenue & default_instance();
	void Swap(CWorkshop_GetItemDailyRevenue_Response_CountryDailyRevenue *);
	virtual CWorkshop_GetItemDailyRevenue_Response_CountryDailyRevenue * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CWorkshop_GetItemDailyRevenue_Response_CountryDailyRevenue &);
	void MergeFrom(const CWorkshop_GetItemDailyRevenue_Response_CountryDailyRevenue &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_country_code();
	void clear_country_code();
	const string & country_code();
	void set_country_code(const string &);
	void set_country_code(const char *);
	void set_country_code(const char *, size_t);
	string * mutable_country_code();
	string * release_country_code();
	void set_allocated_country_code(string *);
	bool has_date();
	void clear_date();
	uint32 date();
	void set_date(uint32);
	bool has_revenue_usd();
	void clear_revenue_usd();
	int64 revenue_usd();
	void set_revenue_usd(int64);
	bool has_units();
	void clear_units();
	int32 units();
	void set_units(int32);
	void set_has_country_code();
	void clear_has_country_code();
	void set_has_date();
	void clear_has_date();
	void set_has_revenue_usd();
	void clear_has_revenue_usd();
	void set_has_units();
	void clear_has_units();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:9463
class CWorkshop_GetItemDailyRevenue_Response : public Message {
public:

	static const int kCountryRevenueFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CWorkshop_GetItemDailyRevenue_Response * default_instance_;
	CWorkshop_GetItemDailyRevenue_Response();
	virtual ~CWorkshop_GetItemDailyRevenue_Response();
	CWorkshop_GetItemDailyRevenue_Response(const CWorkshop_GetItemDailyRevenue_Response &);
	CWorkshop_GetItemDailyRevenue_Response & operator=(const CWorkshop_GetItemDailyRevenue_Response &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CWorkshop_GetItemDailyRevenue_Response & default_instance();
	void Swap(CWorkshop_GetItemDailyRevenue_Response *);
	virtual CWorkshop_GetItemDailyRevenue_Response * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CWorkshop_GetItemDailyRevenue_Response &);
	void MergeFrom(const CWorkshop_GetItemDailyRevenue_Response &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int country_revenue_size();
	void clear_country_revenue();
	const CWorkshop_GetItemDailyRevenue_Response_CountryDailyRevenue & country_revenue(int);
	CWorkshop_GetItemDailyRevenue_Response_CountryDailyRevenue * mutable_country_revenue(int);
	CWorkshop_GetItemDailyRevenue_Response_CountryDailyRevenue * add_country_revenue();
	const RepeatedPtrField<CWorkshop_GetItemDailyRevenue_Response_CountryDailyRevenue> & country_revenue();
	RepeatedPtrField<CWorkshop_GetItemDailyRevenue_Response_CountryDailyRevenue> * mutable_country_revenue();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:9547
class CMsgSQLGCToGCGrantBackpackSlots : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kAddSlotsFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18
	uint32 add_slots_;  // +0x1c

	static CMsgSQLGCToGCGrantBackpackSlots * default_instance_;
	CMsgSQLGCToGCGrantBackpackSlots();
	virtual ~CMsgSQLGCToGCGrantBackpackSlots();
	CMsgSQLGCToGCGrantBackpackSlots(const CMsgSQLGCToGCGrantBackpackSlots &);
	CMsgSQLGCToGCGrantBackpackSlots & operator=(const CMsgSQLGCToGCGrantBackpackSlots &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSQLGCToGCGrantBackpackSlots & default_instance();
	void Swap(CMsgSQLGCToGCGrantBackpackSlots *);
	virtual CMsgSQLGCToGCGrantBackpackSlots * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSQLGCToGCGrantBackpackSlots &);
	void MergeFrom(const CMsgSQLGCToGCGrantBackpackSlots &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	bool has_add_slots();
	void clear_add_slots();
	uint32 add_slots();
	void set_add_slots(uint32);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_add_slots();
	void clear_has_add_slots();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:9636
class CMsgClientToGCLookupAccountName : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18

	static CMsgClientToGCLookupAccountName * default_instance_;
	CMsgClientToGCLookupAccountName();
	virtual ~CMsgClientToGCLookupAccountName();
	CMsgClientToGCLookupAccountName(const CMsgClientToGCLookupAccountName &);
	CMsgClientToGCLookupAccountName & operator=(const CMsgClientToGCLookupAccountName &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClientToGCLookupAccountName & default_instance();
	void Swap(CMsgClientToGCLookupAccountName *);
	virtual CMsgClientToGCLookupAccountName * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClientToGCLookupAccountName &);
	void MergeFrom(const CMsgClientToGCLookupAccountName &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	void set_has_account_id();
	void clear_has_account_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:9715
class CMsgClientToGCLookupAccountNameResponse : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kAccountNameFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * account_name_;  // +0x18
	uint32 account_id_;  // +0x20

	static CMsgClientToGCLookupAccountNameResponse * default_instance_;
	CMsgClientToGCLookupAccountNameResponse();
	virtual ~CMsgClientToGCLookupAccountNameResponse();
	CMsgClientToGCLookupAccountNameResponse(const CMsgClientToGCLookupAccountNameResponse &);
	CMsgClientToGCLookupAccountNameResponse & operator=(const CMsgClientToGCLookupAccountNameResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClientToGCLookupAccountNameResponse & default_instance();
	void Swap(CMsgClientToGCLookupAccountNameResponse *);
	virtual CMsgClientToGCLookupAccountNameResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClientToGCLookupAccountNameResponse &);
	void MergeFrom(const CMsgClientToGCLookupAccountNameResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	bool has_account_name();
	void clear_account_name();
	const string & account_name();
	void set_account_name(const string &);
	void set_account_name(const char *);
	void set_account_name(const char *, size_t);
	string * mutable_account_name();
	string * release_account_name();
	void set_allocated_account_name(string *);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_account_name();
	void clear_has_account_name();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:9809
class CMsgGCToGCDevRevokeUserItems : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kAuditDataFieldNumber = 2;
	static const int kDeleteAuditHistoryFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 audit_data_;  // +0x18
	uint32 account_id_;  // +0x20
	bool delete_audit_history_;  // +0x24

	static CMsgGCToGCDevRevokeUserItems * default_instance_;
	CMsgGCToGCDevRevokeUserItems();
	virtual ~CMsgGCToGCDevRevokeUserItems();
	CMsgGCToGCDevRevokeUserItems(const CMsgGCToGCDevRevokeUserItems &);
	CMsgGCToGCDevRevokeUserItems & operator=(const CMsgGCToGCDevRevokeUserItems &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCDevRevokeUserItems & default_instance();
	void Swap(CMsgGCToGCDevRevokeUserItems *);
	virtual CMsgGCToGCDevRevokeUserItems * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCDevRevokeUserItems &);
	void MergeFrom(const CMsgGCToGCDevRevokeUserItems &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	bool has_audit_data();
	void clear_audit_data();
	uint64 audit_data();
	void set_audit_data(uint64);
	bool has_delete_audit_history();
	void clear_delete_audit_history();
	bool delete_audit_history();
	void set_delete_audit_history(bool);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_audit_data();
	void clear_has_audit_data();
	void set_has_delete_audit_history();
	void clear_has_delete_audit_history();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:9908
class CMsgClientToGCCreateStaticRecipe_Item : public Message {
public:

	static const int kItemIdFieldNumber = 1;
	static const int kSlotIdFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 item_id_;  // +0x18
	uint32 slot_id_;  // +0x20

	static CMsgClientToGCCreateStaticRecipe_Item * default_instance_;
	CMsgClientToGCCreateStaticRecipe_Item();
	virtual ~CMsgClientToGCCreateStaticRecipe_Item();
	CMsgClientToGCCreateStaticRecipe_Item(const CMsgClientToGCCreateStaticRecipe_Item &);
	CMsgClientToGCCreateStaticRecipe_Item & operator=(const CMsgClientToGCCreateStaticRecipe_Item &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClientToGCCreateStaticRecipe_Item & default_instance();
	void Swap(CMsgClientToGCCreateStaticRecipe_Item *);
	virtual CMsgClientToGCCreateStaticRecipe_Item * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClientToGCCreateStaticRecipe_Item &);
	void MergeFrom(const CMsgClientToGCCreateStaticRecipe_Item &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_item_id();
	void clear_item_id();
	uint64 item_id();
	void set_item_id(uint64);
	bool has_slot_id();
	void clear_slot_id();
	uint32 slot_id();
	void set_slot_id(uint32);
	void set_has_item_id();
	void clear_has_item_id();
	void set_has_slot_id();
	void clear_has_slot_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:9997
class CMsgClientToGCCreateStaticRecipe : public Message {
public:

	static const int kItemsFieldNumber = 1;
	static const int kRecipeDefIndexFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 recipe_def_index_;  // +0x30

	static CMsgClientToGCCreateStaticRecipe * default_instance_;
	CMsgClientToGCCreateStaticRecipe();
	virtual ~CMsgClientToGCCreateStaticRecipe();
	CMsgClientToGCCreateStaticRecipe(const CMsgClientToGCCreateStaticRecipe &);
	CMsgClientToGCCreateStaticRecipe & operator=(const CMsgClientToGCCreateStaticRecipe &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClientToGCCreateStaticRecipe & default_instance();
	void Swap(CMsgClientToGCCreateStaticRecipe *);
	virtual CMsgClientToGCCreateStaticRecipe * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClientToGCCreateStaticRecipe &);
	void MergeFrom(const CMsgClientToGCCreateStaticRecipe &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int items_size();
	void clear_items();
	const CMsgClientToGCCreateStaticRecipe_Item & items(int);
	CMsgClientToGCCreateStaticRecipe_Item * mutable_items(int);
	CMsgClientToGCCreateStaticRecipe_Item * add_items();
	const RepeatedPtrField<CMsgClientToGCCreateStaticRecipe_Item> & items();
	RepeatedPtrField<CMsgClientToGCCreateStaticRecipe_Item> * mutable_items();
	bool has_recipe_def_index();
	void clear_recipe_def_index();
	uint32 recipe_def_index();
	void set_recipe_def_index(uint32);
	void set_has_recipe_def_index();
	void clear_has_recipe_def_index();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 56
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:10091
class CMsgClientToGCCreateStaticRecipeResponse_OutputItem : public Message {
public:

	static const int kDefIndexFieldNumber = 1;
	static const int kItemIdFieldNumber = 2;
	static const int kSlotIdFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 item_id_;  // +0x18
	uint32 def_index_;  // +0x20
	uint32 slot_id_;  // +0x24

	static CMsgClientToGCCreateStaticRecipeResponse_OutputItem * default_instance_;
	CMsgClientToGCCreateStaticRecipeResponse_OutputItem();
	virtual ~CMsgClientToGCCreateStaticRecipeResponse_OutputItem();
	CMsgClientToGCCreateStaticRecipeResponse_OutputItem(const CMsgClientToGCCreateStaticRecipeResponse_OutputItem &);
	CMsgClientToGCCreateStaticRecipeResponse_OutputItem & operator=(const CMsgClientToGCCreateStaticRecipeResponse_OutputItem &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClientToGCCreateStaticRecipeResponse_OutputItem & default_instance();
	void Swap(CMsgClientToGCCreateStaticRecipeResponse_OutputItem *);
	virtual CMsgClientToGCCreateStaticRecipeResponse_OutputItem * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClientToGCCreateStaticRecipeResponse_OutputItem &);
	void MergeFrom(const CMsgClientToGCCreateStaticRecipeResponse_OutputItem &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_def_index();
	void clear_def_index();
	uint32 def_index();
	void set_def_index(uint32);
	bool has_item_id();
	void clear_item_id();
	uint64 item_id();
	void set_item_id(uint64);
	bool has_slot_id();
	void clear_slot_id();
	uint32 slot_id();
	void set_slot_id(uint32);
	void set_has_def_index();
	void clear_has_def_index();
	void set_has_item_id();
	void clear_has_item_id();
	void set_has_slot_id();
	void clear_has_slot_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:10190
class CMsgClientToGCCreateStaticRecipeResponse_InputError : public Message {
public:

	static const int kSlotIdFieldNumber = 1;
	static const int kErrorFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 slot_id_;  // +0x18
	int error_;  // +0x1c

	static CMsgClientToGCCreateStaticRecipeResponse_InputError * default_instance_;
	CMsgClientToGCCreateStaticRecipeResponse_InputError();
	virtual ~CMsgClientToGCCreateStaticRecipeResponse_InputError();
	CMsgClientToGCCreateStaticRecipeResponse_InputError(const CMsgClientToGCCreateStaticRecipeResponse_InputError &);
	CMsgClientToGCCreateStaticRecipeResponse_InputError & operator=(const CMsgClientToGCCreateStaticRecipeResponse_InputError &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClientToGCCreateStaticRecipeResponse_InputError & default_instance();
	void Swap(CMsgClientToGCCreateStaticRecipeResponse_InputError *);
	virtual CMsgClientToGCCreateStaticRecipeResponse_InputError * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClientToGCCreateStaticRecipeResponse_InputError &);
	void MergeFrom(const CMsgClientToGCCreateStaticRecipeResponse_InputError &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_slot_id();
	void clear_slot_id();
	uint32 slot_id();
	void set_slot_id(uint32);
	bool has_error();
	void clear_error();
	CMsgClientToGCCreateStaticRecipeResponse_EResponse error();
	void set_error(CMsgClientToGCCreateStaticRecipeResponse_EResponse);
	void set_has_slot_id();
	void clear_has_slot_id();
	void set_has_error();
	void clear_has_error();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:10279
class CMsgClientToGCCreateStaticRecipeResponse_AdditionalOutput : public Message {
public:

	static const int kSlotIdFieldNumber = 1;
	static const int kValueFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 value_;  // +0x18
	uint32 slot_id_;  // +0x20

	static CMsgClientToGCCreateStaticRecipeResponse_AdditionalOutput * default_instance_;
	CMsgClientToGCCreateStaticRecipeResponse_AdditionalOutput();
	virtual ~CMsgClientToGCCreateStaticRecipeResponse_AdditionalOutput();
	CMsgClientToGCCreateStaticRecipeResponse_AdditionalOutput(const CMsgClientToGCCreateStaticRecipeResponse_AdditionalOutput &);
	CMsgClientToGCCreateStaticRecipeResponse_AdditionalOutput & operator=(const CMsgClientToGCCreateStaticRecipeResponse_AdditionalOutput &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClientToGCCreateStaticRecipeResponse_AdditionalOutput & default_instance();
	void Swap(CMsgClientToGCCreateStaticRecipeResponse_AdditionalOutput *);
	virtual CMsgClientToGCCreateStaticRecipeResponse_AdditionalOutput * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClientToGCCreateStaticRecipeResponse_AdditionalOutput &);
	void MergeFrom(const CMsgClientToGCCreateStaticRecipeResponse_AdditionalOutput &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_slot_id();
	void clear_slot_id();
	uint32 slot_id();
	void set_slot_id(uint32);
	bool has_value();
	void clear_value();
	uint64 value();
	void set_value(uint64);
	void set_has_slot_id();
	void clear_has_slot_id();
	void set_has_value();
	void clear_has_value();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:10368
class CMsgClientToGCCreateStaticRecipeResponse : public Message {
public:

	static const CMsgClientToGCCreateStaticRecipeResponse_EResponse eResponse_Success;
	static const CMsgClientToGCCreateStaticRecipeResponse_EResponse eResponse_OfferingDisabled = 1;
	static const CMsgClientToGCCreateStaticRecipeResponse_EResponse eResponse_InvalidItems = 2;
	static const CMsgClientToGCCreateStaticRecipeResponse_EResponse eResponse_InternalError = 3;
	static const CMsgClientToGCCreateStaticRecipeResponse_EResponse eResponse_MissingLeague = 4;
	static const CMsgClientToGCCreateStaticRecipeResponse_EResponse EResponse_MIN;
	static const CMsgClientToGCCreateStaticRecipeResponse_EResponse EResponse_MAX = 4;
	static const int EResponse_ARRAYSIZE = 5;
	static const int kResponseFieldNumber = 1;
	static const int kOutputItemsFieldNumber = 2;
	static const int kInputErrorsFieldNumber = 3;
	static const int kAdditionalOutputsFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int response_;  // +0x60

	static CMsgClientToGCCreateStaticRecipeResponse * default_instance_;
	typedef CMsgClientToGCCreateStaticRecipeResponse_EResponse EResponse;
	CMsgClientToGCCreateStaticRecipeResponse();
	virtual ~CMsgClientToGCCreateStaticRecipeResponse();
	CMsgClientToGCCreateStaticRecipeResponse(const CMsgClientToGCCreateStaticRecipeResponse &);
	CMsgClientToGCCreateStaticRecipeResponse & operator=(const CMsgClientToGCCreateStaticRecipeResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClientToGCCreateStaticRecipeResponse & default_instance();
	void Swap(CMsgClientToGCCreateStaticRecipeResponse *);
	virtual CMsgClientToGCCreateStaticRecipeResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClientToGCCreateStaticRecipeResponse &);
	void MergeFrom(const CMsgClientToGCCreateStaticRecipeResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool EResponse_IsValid(int);
	const EnumDescriptor * EResponse_descriptor();
	const string & EResponse_Name(EResponse);
	bool EResponse_Parse(const string &, EResponse *);
	bool has_response();
	void clear_response();
	CMsgClientToGCCreateStaticRecipeResponse_EResponse response();
	void set_response(CMsgClientToGCCreateStaticRecipeResponse_EResponse);
	int output_items_size();
	void clear_output_items();
	const CMsgClientToGCCreateStaticRecipeResponse_OutputItem & output_items(int);
	CMsgClientToGCCreateStaticRecipeResponse_OutputItem * mutable_output_items(int);
	CMsgClientToGCCreateStaticRecipeResponse_OutputItem * add_output_items();
	const RepeatedPtrField<CMsgClientToGCCreateStaticRecipeResponse_OutputItem> & output_items();
	RepeatedPtrField<CMsgClientToGCCreateStaticRecipeResponse_OutputItem> * mutable_output_items();
	int input_errors_size();
	void clear_input_errors();
	const CMsgClientToGCCreateStaticRecipeResponse_InputError & input_errors(int);
	CMsgClientToGCCreateStaticRecipeResponse_InputError * mutable_input_errors(int);
	CMsgClientToGCCreateStaticRecipeResponse_InputError * add_input_errors();
	const RepeatedPtrField<CMsgClientToGCCreateStaticRecipeResponse_InputError> & input_errors();
	RepeatedPtrField<CMsgClientToGCCreateStaticRecipeResponse_InputError> * mutable_input_errors();
	int additional_outputs_size();
	void clear_additional_outputs();
	const CMsgClientToGCCreateStaticRecipeResponse_AdditionalOutput & additional_outputs(int);
	CMsgClientToGCCreateStaticRecipeResponse_AdditionalOutput * mutable_additional_outputs(int);
	CMsgClientToGCCreateStaticRecipeResponse_AdditionalOutput * add_additional_outputs();
	const RepeatedPtrField<CMsgClientToGCCreateStaticRecipeResponse_AdditionalOutput> & additional_outputs();
	RepeatedPtrField<CMsgClientToGCCreateStaticRecipeResponse_AdditionalOutput> * mutable_additional_outputs();
	void set_has_response();
	void clear_has_response();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 104
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:10517
class CMsgProcessTransactionOrder_Item : public Message {
public:

	static const int kItemDefIndexFieldNumber = 1;
	static const int kItemPriceFieldNumber = 2;
	static const int kQuantityFieldNumber = 3;
	static const int kCategoryDescFieldNumber = 4;
	static const int kStorePurchaseTypeFieldNumber = 5;
	static const int kSourceReferenceIdFieldNumber = 6;
	static const int kParentStackIndexFieldNumber = 7;
	static const int kDefaultPriceFieldNumber = 8;
	static const int kIsUserFacingFieldNumber = 9;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 item_def_index_;  // +0x18
	uint32 item_price_;  // +0x1c
	string * category_desc_;  // +0x20
	uint32 quantity_;  // +0x28
	uint32 store_purchase_type_;  // +0x2c
	uint64 source_reference_id_;  // +0x30
	int32 parent_stack_index_;  // +0x38
	bool default_price_;  // +0x3c
	bool is_user_facing_;  // +0x3d

	static CMsgProcessTransactionOrder_Item * default_instance_;
	CMsgProcessTransactionOrder_Item();
	virtual ~CMsgProcessTransactionOrder_Item();
	CMsgProcessTransactionOrder_Item(const CMsgProcessTransactionOrder_Item &);
	CMsgProcessTransactionOrder_Item & operator=(const CMsgProcessTransactionOrder_Item &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgProcessTransactionOrder_Item & default_instance();
	void Swap(CMsgProcessTransactionOrder_Item *);
	virtual CMsgProcessTransactionOrder_Item * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgProcessTransactionOrder_Item &);
	void MergeFrom(const CMsgProcessTransactionOrder_Item &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_item_def_index();
	void clear_item_def_index();
	uint32 item_def_index();
	void set_item_def_index(uint32);
	bool has_item_price();
	void clear_item_price();
	uint32 item_price();
	void set_item_price(uint32);
	bool has_quantity();
	void clear_quantity();
	uint32 quantity();
	void set_quantity(uint32);
	bool has_category_desc();
	void clear_category_desc();
	const string & category_desc();
	void set_category_desc(const string &);
	void set_category_desc(const char *);
	void set_category_desc(const char *, size_t);
	string * mutable_category_desc();
	string * release_category_desc();
	void set_allocated_category_desc(string *);
	bool has_store_purchase_type();
	void clear_store_purchase_type();
	uint32 store_purchase_type();
	void set_store_purchase_type(uint32);
	bool has_source_reference_id();
	void clear_source_reference_id();
	uint64 source_reference_id();
	void set_source_reference_id(uint64);
	bool has_parent_stack_index();
	void clear_parent_stack_index();
	int32 parent_stack_index();
	void set_parent_stack_index(int32);
	bool has_default_price();
	void clear_default_price();
	bool default_price();
	void set_default_price(bool);
	bool has_is_user_facing();
	void clear_is_user_facing();
	bool is_user_facing();
	void set_is_user_facing(bool);
	void set_has_item_def_index();
	void clear_has_item_def_index();
	void set_has_item_price();
	void clear_has_item_price();
	void set_has_quantity();
	void clear_has_quantity();
	void set_has_category_desc();
	void clear_has_category_desc();
	void set_has_store_purchase_type();
	void clear_has_store_purchase_type();
	void set_has_source_reference_id();
	void clear_has_source_reference_id();
	void set_has_parent_stack_index();
	void clear_has_parent_stack_index();
	void set_has_default_price();
	void clear_has_default_price();
	void set_has_is_user_facing();
	void clear_has_is_user_facing();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 64
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:10681
class CMsgProcessTransactionOrder : public Message {
public:

	static const int kTxnIdFieldNumber = 1;
	static const int kSteamTxnIdFieldNumber = 2;
	static const int kPartnerTxnIdFieldNumber = 3;
	static const int kSteamIdFieldNumber = 4;
	static const int kTimeStampFieldNumber = 5;
	static const int kWatermarkFieldNumber = 6;
	static const int kPurchaseReportStatusFieldNumber = 7;
	static const int kCurrencyFieldNumber = 8;
	static const int kItemsFieldNumber = 9;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 txn_id_;  // +0x18
	uint64 steam_txn_id_;  // +0x20
	uint64 partner_txn_id_;  // +0x28
	uint64 steam_id_;  // +0x30
	uint64 watermark_;  // +0x38
	uint32 time_stamp_;  // +0x40
	int32 purchase_report_status_;  // +0x44
	uint32 currency_;  // +0x60

	static CMsgProcessTransactionOrder * default_instance_;
	CMsgProcessTransactionOrder();
	virtual ~CMsgProcessTransactionOrder();
	CMsgProcessTransactionOrder(const CMsgProcessTransactionOrder &);
	CMsgProcessTransactionOrder & operator=(const CMsgProcessTransactionOrder &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgProcessTransactionOrder & default_instance();
	void Swap(CMsgProcessTransactionOrder *);
	virtual CMsgProcessTransactionOrder * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgProcessTransactionOrder &);
	void MergeFrom(const CMsgProcessTransactionOrder &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_txn_id();
	void clear_txn_id();
	uint64 txn_id();
	void set_txn_id(uint64);
	bool has_steam_txn_id();
	void clear_steam_txn_id();
	uint64 steam_txn_id();
	void set_steam_txn_id(uint64);
	bool has_partner_txn_id();
	void clear_partner_txn_id();
	uint64 partner_txn_id();
	void set_partner_txn_id(uint64);
	bool has_steam_id();
	void clear_steam_id();
	uint64 steam_id();
	void set_steam_id(uint64);
	bool has_time_stamp();
	void clear_time_stamp();
	uint32 time_stamp();
	void set_time_stamp(uint32);
	bool has_watermark();
	void clear_watermark();
	uint64 watermark();
	void set_watermark(uint64);
	bool has_purchase_report_status();
	void clear_purchase_report_status();
	int32 purchase_report_status();
	void set_purchase_report_status(int32);
	bool has_currency();
	void clear_currency();
	uint32 currency();
	void set_currency(uint32);
	int items_size();
	void clear_items();
	const CMsgProcessTransactionOrder_Item & items(int);
	CMsgProcessTransactionOrder_Item * mutable_items(int);
	CMsgProcessTransactionOrder_Item * add_items();
	const RepeatedPtrField<CMsgProcessTransactionOrder_Item> & items();
	RepeatedPtrField<CMsgProcessTransactionOrder_Item> * mutable_items();
	void set_has_txn_id();
	void clear_has_txn_id();
	void set_has_steam_txn_id();
	void clear_has_steam_txn_id();
	void set_has_partner_txn_id();
	void clear_has_partner_txn_id();
	void set_has_steam_id();
	void clear_has_steam_id();
	void set_has_time_stamp();
	void clear_has_time_stamp();
	void set_has_watermark();
	void clear_has_watermark();
	void set_has_purchase_report_status();
	void clear_has_purchase_report_status();
	void set_has_currency();
	void clear_has_currency();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 104
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:10845
class CMsgGCToGCStoreProcessCDKeyTransaction : public Message {
public:

	static const int kOrderFieldNumber = 1;
	static const int kReasonCodeFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 reason_code_;  // +0x20

	static CMsgGCToGCStoreProcessCDKeyTransaction * default_instance_;
	CMsgGCToGCStoreProcessCDKeyTransaction();
	virtual ~CMsgGCToGCStoreProcessCDKeyTransaction();
	CMsgGCToGCStoreProcessCDKeyTransaction(const CMsgGCToGCStoreProcessCDKeyTransaction &);
	CMsgGCToGCStoreProcessCDKeyTransaction & operator=(const CMsgGCToGCStoreProcessCDKeyTransaction &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCStoreProcessCDKeyTransaction & default_instance();
	void Swap(CMsgGCToGCStoreProcessCDKeyTransaction *);
	virtual CMsgGCToGCStoreProcessCDKeyTransaction * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCStoreProcessCDKeyTransaction &);
	void MergeFrom(const CMsgGCToGCStoreProcessCDKeyTransaction &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_order();
	void clear_order();
	const CMsgProcessTransactionOrder & order();
	CMsgProcessTransactionOrder * mutable_order();
	CMsgProcessTransactionOrder * release_order();
	void set_allocated_order(CMsgProcessTransactionOrder *);
	bool has_reason_code();
	void clear_reason_code();
	uint32 reason_code();
	void set_reason_code(uint32);
	void set_has_order();
	void clear_has_order();
	void set_has_reason_code();
	void clear_has_reason_code();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:10936
class CMsgGCToGCStoreProcessCDKeyTransactionResponse : public Message {
public:

	static const int kSuccessFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool success_;  // +0x18

	static CMsgGCToGCStoreProcessCDKeyTransactionResponse * default_instance_;
	CMsgGCToGCStoreProcessCDKeyTransactionResponse();
	virtual ~CMsgGCToGCStoreProcessCDKeyTransactionResponse();
	CMsgGCToGCStoreProcessCDKeyTransactionResponse(const CMsgGCToGCStoreProcessCDKeyTransactionResponse &);
	CMsgGCToGCStoreProcessCDKeyTransactionResponse & operator=(const CMsgGCToGCStoreProcessCDKeyTransactionResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCStoreProcessCDKeyTransactionResponse & default_instance();
	void Swap(CMsgGCToGCStoreProcessCDKeyTransactionResponse *);
	virtual CMsgGCToGCStoreProcessCDKeyTransactionResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCStoreProcessCDKeyTransactionResponse &);
	void MergeFrom(const CMsgGCToGCStoreProcessCDKeyTransactionResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_success();
	void clear_success();
	bool success();
	void set_success(bool);
	void set_has_success();
	void clear_has_success();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:11015
class CMsgGCToGCStoreProcessSettlement : public Message {
public:

	static const int kOrderFieldNumber = 1;
	static const int kPartnerFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 partner_;  // +0x20

	static CMsgGCToGCStoreProcessSettlement * default_instance_;
	CMsgGCToGCStoreProcessSettlement();
	virtual ~CMsgGCToGCStoreProcessSettlement();
	CMsgGCToGCStoreProcessSettlement(const CMsgGCToGCStoreProcessSettlement &);
	CMsgGCToGCStoreProcessSettlement & operator=(const CMsgGCToGCStoreProcessSettlement &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCStoreProcessSettlement & default_instance();
	void Swap(CMsgGCToGCStoreProcessSettlement *);
	virtual CMsgGCToGCStoreProcessSettlement * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCStoreProcessSettlement &);
	void MergeFrom(const CMsgGCToGCStoreProcessSettlement &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_order();
	void clear_order();
	const CMsgProcessTransactionOrder & order();
	CMsgProcessTransactionOrder * mutable_order();
	CMsgProcessTransactionOrder * release_order();
	void set_allocated_order(CMsgProcessTransactionOrder *);
	bool has_partner();
	void clear_partner();
	uint32 partner();
	void set_partner(uint32);
	void set_has_order();
	void clear_has_order();
	void set_has_partner();
	void clear_has_partner();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:11106
class CMsgGCToGCStoreProcessSettlementResponse : public Message {
public:

	static const int kSuccessFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool success_;  // +0x18

	static CMsgGCToGCStoreProcessSettlementResponse * default_instance_;
	CMsgGCToGCStoreProcessSettlementResponse();
	virtual ~CMsgGCToGCStoreProcessSettlementResponse();
	CMsgGCToGCStoreProcessSettlementResponse(const CMsgGCToGCStoreProcessSettlementResponse &);
	CMsgGCToGCStoreProcessSettlementResponse & operator=(const CMsgGCToGCStoreProcessSettlementResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCStoreProcessSettlementResponse & default_instance();
	void Swap(CMsgGCToGCStoreProcessSettlementResponse *);
	virtual CMsgGCToGCStoreProcessSettlementResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCStoreProcessSettlementResponse &);
	void MergeFrom(const CMsgGCToGCStoreProcessSettlementResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_success();
	void clear_success();
	bool success();
	void set_success(bool);
	void set_has_success();
	void clear_has_success();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:11185
class CMsgGCToGCBroadcastConsoleCommand : public Message {
public:

	static const int kConCommandFieldNumber = 1;
	static const int kReportOutputFieldNumber = 2;
	static const int kSendingGcFieldNumber = 3;
	static const int kOutputInitiatorFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * con_command_;  // +0x18
	bool report_output_;  // +0x20

	uint32 sending_gc_;  // +0x24
	string * output_initiator_;  // +0x28

	static CMsgGCToGCBroadcastConsoleCommand * default_instance_;
	CMsgGCToGCBroadcastConsoleCommand();
	virtual ~CMsgGCToGCBroadcastConsoleCommand();
	CMsgGCToGCBroadcastConsoleCommand(const CMsgGCToGCBroadcastConsoleCommand &);
	CMsgGCToGCBroadcastConsoleCommand & operator=(const CMsgGCToGCBroadcastConsoleCommand &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCBroadcastConsoleCommand & default_instance();
	void Swap(CMsgGCToGCBroadcastConsoleCommand *);
	virtual CMsgGCToGCBroadcastConsoleCommand * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCBroadcastConsoleCommand &);
	void MergeFrom(const CMsgGCToGCBroadcastConsoleCommand &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_con_command();
	void clear_con_command();
	const string & con_command();
	void set_con_command(const string &);
	void set_con_command(const char *);
	void set_con_command(const char *, size_t);
	string * mutable_con_command();
	string * release_con_command();
	void set_allocated_con_command(string *);
	bool has_report_output();
	void clear_report_output();
	bool report_output();
	void set_report_output(bool);
	bool has_sending_gc();
	void clear_sending_gc();
	uint32 sending_gc();
	void set_sending_gc(uint32);
	bool has_output_initiator();
	void clear_output_initiator();
	const string & output_initiator();
	void set_output_initiator(const string &);
	void set_output_initiator(const char *);
	void set_output_initiator(const char *, size_t);
	string * mutable_output_initiator();
	string * release_output_initiator();
	void set_allocated_output_initiator(string *);
	void set_has_con_command();
	void clear_has_con_command();
	void set_has_report_output();
	void clear_has_report_output();
	void set_has_sending_gc();
	void clear_has_sending_gc();
	void set_has_output_initiator();
	void clear_has_output_initiator();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:11304
class CMsgGCToGCConsoleOutput_OutputLine : public Message {
public:

	static const int kTextFieldNumber = 1;
	static const int kSpewLevelFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * text_;  // +0x18
	uint32 spew_level_;  // +0x20

	static CMsgGCToGCConsoleOutput_OutputLine * default_instance_;
	CMsgGCToGCConsoleOutput_OutputLine();
	virtual ~CMsgGCToGCConsoleOutput_OutputLine();
	CMsgGCToGCConsoleOutput_OutputLine(const CMsgGCToGCConsoleOutput_OutputLine &);
	CMsgGCToGCConsoleOutput_OutputLine & operator=(const CMsgGCToGCConsoleOutput_OutputLine &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCConsoleOutput_OutputLine & default_instance();
	void Swap(CMsgGCToGCConsoleOutput_OutputLine *);
	virtual CMsgGCToGCConsoleOutput_OutputLine * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCConsoleOutput_OutputLine &);
	void MergeFrom(const CMsgGCToGCConsoleOutput_OutputLine &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_text();
	void clear_text();
	const string & text();
	void set_text(const string &);
	void set_text(const char *);
	void set_text(const char *, size_t);
	string * mutable_text();
	string * release_text();
	void set_allocated_text(string *);
	bool has_spew_level();
	void clear_spew_level();
	uint32 spew_level();
	void set_spew_level(uint32);
	void set_has_text();
	void clear_has_text();
	void set_has_spew_level();
	void clear_has_spew_level();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:11398
class CMsgGCToGCConsoleOutput : public Message {
public:

	static const int kInitiatorFieldNumber = 1;
	static const int kSendingGcFieldNumber = 2;
	static const int kMsgsFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * initiator_;  // +0x18
	uint32 sending_gc_;  // +0x38

	static CMsgGCToGCConsoleOutput * default_instance_;
	CMsgGCToGCConsoleOutput();
	virtual ~CMsgGCToGCConsoleOutput();
	CMsgGCToGCConsoleOutput(const CMsgGCToGCConsoleOutput &);
	CMsgGCToGCConsoleOutput & operator=(const CMsgGCToGCConsoleOutput &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCConsoleOutput & default_instance();
	void Swap(CMsgGCToGCConsoleOutput *);
	virtual CMsgGCToGCConsoleOutput * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCConsoleOutput &);
	void MergeFrom(const CMsgGCToGCConsoleOutput &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_initiator();
	void clear_initiator();
	const string & initiator();
	void set_initiator(const string &);
	void set_initiator(const char *);
	void set_initiator(const char *, size_t);
	string * mutable_initiator();
	string * release_initiator();
	void set_allocated_initiator(string *);
	bool has_sending_gc();
	void clear_sending_gc();
	uint32 sending_gc();
	void set_sending_gc(uint32);
	int msgs_size();
	void clear_msgs();
	const CMsgGCToGCConsoleOutput_OutputLine & msgs(int);
	CMsgGCToGCConsoleOutput_OutputLine * mutable_msgs(int);
	CMsgGCToGCConsoleOutput_OutputLine * add_msgs();
	const RepeatedPtrField<CMsgGCToGCConsoleOutput_OutputLine> & msgs();
	RepeatedPtrField<CMsgGCToGCConsoleOutput_OutputLine> * mutable_msgs();
	void set_has_initiator();
	void clear_has_initiator();
	void set_has_sending_gc();
	void clear_has_sending_gc();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 64
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:11507
class CMsgItemAges_MaxItemIDTimestamp : public Message {
public:

	static const int kTimestampFieldNumber = 1;
	static const int kMaxItemIdFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 max_item_id_;  // +0x18
	uint32 timestamp_;  // +0x20

	static CMsgItemAges_MaxItemIDTimestamp * default_instance_;
	CMsgItemAges_MaxItemIDTimestamp();
	virtual ~CMsgItemAges_MaxItemIDTimestamp();
	CMsgItemAges_MaxItemIDTimestamp(const CMsgItemAges_MaxItemIDTimestamp &);
	CMsgItemAges_MaxItemIDTimestamp & operator=(const CMsgItemAges_MaxItemIDTimestamp &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgItemAges_MaxItemIDTimestamp & default_instance();
	void Swap(CMsgItemAges_MaxItemIDTimestamp *);
	virtual CMsgItemAges_MaxItemIDTimestamp * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgItemAges_MaxItemIDTimestamp &);
	void MergeFrom(const CMsgItemAges_MaxItemIDTimestamp &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_timestamp();
	void clear_timestamp();
	uint32 timestamp();
	void set_timestamp(uint32);
	bool has_max_item_id();
	void clear_max_item_id();
	uint64 max_item_id();
	void set_max_item_id(uint64);
	void set_has_timestamp();
	void clear_has_timestamp();
	void set_has_max_item_id();
	void clear_has_max_item_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:11596
class CMsgItemAges : public Message {
public:

	static const int kMaxItemIdTimestampsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgItemAges * default_instance_;
	CMsgItemAges();
	virtual ~CMsgItemAges();
	CMsgItemAges(const CMsgItemAges &);
	CMsgItemAges & operator=(const CMsgItemAges &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgItemAges & default_instance();
	void Swap(CMsgItemAges *);
	virtual CMsgItemAges * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgItemAges &);
	void MergeFrom(const CMsgItemAges &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int max_item_id_timestamps_size();
	void clear_max_item_id_timestamps();
	const CMsgItemAges_MaxItemIDTimestamp & max_item_id_timestamps(int);
	CMsgItemAges_MaxItemIDTimestamp * mutable_max_item_id_timestamps(int);
	CMsgItemAges_MaxItemIDTimestamp * add_max_item_id_timestamps();
	const RepeatedPtrField<CMsgItemAges_MaxItemIDTimestamp> & max_item_id_timestamps();
	RepeatedPtrField<CMsgItemAges_MaxItemIDTimestamp> * mutable_max_item_id_timestamps();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:11680
class CMsgGCToGCInternalTestMsg : public Message {
public:

	static const int kSendingGcFieldNumber = 1;
	static const int kSenderIdFieldNumber = 2;
	static const int kContextFieldNumber = 3;
	static const int kMessageIdFieldNumber = 4;
	static const int kMessageBodyFieldNumber = 5;
	static const int kJobIdSourceFieldNumber = 6;
	static const int kJobIdTargetFieldNumber = 7;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 sender_id_;  // +0x18
	uint32 sending_gc_;  // +0x20
	uint32 context_;  // +0x24
	string * message_body_;  // +0x28
	uint64 job_id_source_;  // +0x30
	uint64 job_id_target_;  // +0x38
	uint32 message_id_;  // +0x40

	static CMsgGCToGCInternalTestMsg * default_instance_;
	CMsgGCToGCInternalTestMsg();
	virtual ~CMsgGCToGCInternalTestMsg();
	CMsgGCToGCInternalTestMsg(const CMsgGCToGCInternalTestMsg &);
	CMsgGCToGCInternalTestMsg & operator=(const CMsgGCToGCInternalTestMsg &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCInternalTestMsg & default_instance();
	void Swap(CMsgGCToGCInternalTestMsg *);
	virtual CMsgGCToGCInternalTestMsg * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCInternalTestMsg &);
	void MergeFrom(const CMsgGCToGCInternalTestMsg &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_sending_gc();
	void clear_sending_gc();
	uint32 sending_gc();
	void set_sending_gc(uint32);
	bool has_sender_id();
	void clear_sender_id();
	uint64 sender_id();
	void set_sender_id(uint64);
	bool has_context();
	void clear_context();
	uint32 context();
	void set_context(uint32);
	bool has_message_id();
	void clear_message_id();
	uint32 message_id();
	void set_message_id(uint32);
	bool has_message_body();
	void clear_message_body();
	const string & message_body();
	void set_message_body(const string &);
	void set_message_body(const char *);
	void set_message_body(const void *, size_t);
	string * mutable_message_body();
	string * release_message_body();
	void set_allocated_message_body(string *);
	bool has_job_id_source();
	void clear_job_id_source();
	uint64 job_id_source();
	void set_job_id_source(uint64);
	bool has_job_id_target();
	void clear_job_id_target();
	uint64 job_id_target();
	void set_job_id_target(uint64);
	void set_has_sending_gc();
	void clear_has_sending_gc();
	void set_has_sender_id();
	void clear_has_sender_id();
	void set_has_context();
	void clear_has_context();
	void set_has_message_id();
	void clear_has_message_id();
	void set_has_message_body();
	void clear_has_message_body();
	void set_has_job_id_source();
	void clear_has_job_id_source();
	void set_has_job_id_target();
	void clear_has_job_id_target();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 72
};

// src/game/server/generated_protodota/linuxsteamrt64/econ_gcmessages.pb.h:11824
class CMsgGCToGCClientServerVersionsUpdated : public Message {
public:

	static const int kClientMinAllowedVersionFieldNumber = 1;
	static const int kClientActiveVersionFieldNumber = 2;
	static const int kServerActiveVersionFieldNumber = 3;
	static const int kServerDeployedVersionFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 client_min_allowed_version_;  // +0x18
	uint32 client_active_version_;  // +0x1c
	uint32 server_active_version_;  // +0x20
	uint32 server_deployed_version_;  // +0x24

	static CMsgGCToGCClientServerVersionsUpdated * default_instance_;
	CMsgGCToGCClientServerVersionsUpdated();
	virtual ~CMsgGCToGCClientServerVersionsUpdated();
	CMsgGCToGCClientServerVersionsUpdated(const CMsgGCToGCClientServerVersionsUpdated &);
	CMsgGCToGCClientServerVersionsUpdated & operator=(const CMsgGCToGCClientServerVersionsUpdated &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCClientServerVersionsUpdated & default_instance();
	void Swap(CMsgGCToGCClientServerVersionsUpdated *);
	virtual CMsgGCToGCClientServerVersionsUpdated * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCClientServerVersionsUpdated &);
	void MergeFrom(const CMsgGCToGCClientServerVersionsUpdated &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_client_min_allowed_version();
	void clear_client_min_allowed_version();
	uint32 client_min_allowed_version();
	void set_client_min_allowed_version(uint32);
	bool has_client_active_version();
	void clear_client_active_version();
	uint32 client_active_version();
	void set_client_active_version(uint32);
	bool has_server_active_version();
	void clear_server_active_version();
	uint32 server_active_version();
	void set_server_active_version(uint32);
	bool has_server_deployed_version();
	void clear_server_deployed_version();
	uint32 server_deployed_version();
	void set_server_deployed_version(uint32);
	void set_has_client_min_allowed_version();
	void clear_has_client_min_allowed_version();
	void set_has_client_active_version();
	void clear_has_client_active_version();
	void set_has_server_active_version();
	void clear_has_server_active_version();
	void set_has_server_deployed_version();
	void clear_has_server_deployed_version();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};
