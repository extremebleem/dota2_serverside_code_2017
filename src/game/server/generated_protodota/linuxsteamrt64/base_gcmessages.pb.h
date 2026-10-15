// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:316
class CGCStorePurchaseInit_LineItem : public Message {
public:

	static const int kItemDefIdFieldNumber = 1;
	static const int kQuantityFieldNumber = 2;
	static const int kCostInLocalCurrencyFieldNumber = 3;
	static const int kPurchaseTypeFieldNumber = 4;
	static const int kSourceReferenceIdFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 item_def_id_;  // +0x18
	uint32 quantity_;  // +0x1c
	uint32 cost_in_local_currency_;  // +0x20
	uint32 purchase_type_;  // +0x24
	uint64 source_reference_id_;  // +0x28

	static CGCStorePurchaseInit_LineItem * default_instance_;
	CGCStorePurchaseInit_LineItem();
	virtual ~CGCStorePurchaseInit_LineItem();
	CGCStorePurchaseInit_LineItem(const CGCStorePurchaseInit_LineItem &);
	CGCStorePurchaseInit_LineItem & operator=(const CGCStorePurchaseInit_LineItem &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CGCStorePurchaseInit_LineItem & default_instance();
	void Swap(CGCStorePurchaseInit_LineItem *);
	virtual CGCStorePurchaseInit_LineItem * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CGCStorePurchaseInit_LineItem &);
	void MergeFrom(const CGCStorePurchaseInit_LineItem &);
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
	bool has_cost_in_local_currency();
	void clear_cost_in_local_currency();
	uint32 cost_in_local_currency();
	void set_cost_in_local_currency(uint32);
	bool has_purchase_type();
	void clear_purchase_type();
	uint32 purchase_type();
	void set_purchase_type(uint32);
	bool has_source_reference_id();
	void clear_source_reference_id();
	uint64 source_reference_id();
	void set_source_reference_id(uint64);
	void set_has_item_def_id();
	void clear_has_item_def_id();
	void set_has_quantity();
	void clear_has_quantity();
	void set_has_cost_in_local_currency();
	void clear_has_cost_in_local_currency();
	void set_has_purchase_type();
	void clear_has_purchase_type();
	void set_has_source_reference_id();
	void clear_has_source_reference_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:435
class CMsgGCStorePurchaseInit : public Message {
public:

	static const int kCountryFieldNumber = 1;
	static const int kLanguageFieldNumber = 2;
	static const int kCurrencyFieldNumber = 3;
	static const int kLineItemsFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * country_;  // +0x18
	int32 language_;  // +0x20
	int32 currency_;  // +0x24

	static CMsgGCStorePurchaseInit * default_instance_;
	CMsgGCStorePurchaseInit();
	virtual ~CMsgGCStorePurchaseInit();
	CMsgGCStorePurchaseInit(const CMsgGCStorePurchaseInit &);
	CMsgGCStorePurchaseInit & operator=(const CMsgGCStorePurchaseInit &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCStorePurchaseInit & default_instance();
	void Swap(CMsgGCStorePurchaseInit *);
	virtual CMsgGCStorePurchaseInit * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCStorePurchaseInit &);
	void MergeFrom(const CMsgGCStorePurchaseInit &);
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
	bool has_country();
	void clear_country();
	const string & country();
	void set_country(const string &);
	void set_country(const char *);
	void set_country(const char *, size_t);
	string * mutable_country();
	string * release_country();
	void set_allocated_country(string *);
	bool has_language();
	void clear_language();
	int32 language();
	void set_language(int32);
	bool has_currency();
	void clear_currency();
	int32 currency();
	void set_currency(int32);
	int line_items_size();
	void clear_line_items();
	const CGCStorePurchaseInit_LineItem & line_items(int);
	CGCStorePurchaseInit_LineItem * mutable_line_items(int);
	CGCStorePurchaseInit_LineItem * add_line_items();
	const RepeatedPtrField<CGCStorePurchaseInit_LineItem> & line_items();
	RepeatedPtrField<CGCStorePurchaseInit_LineItem> * mutable_line_items();
	void set_has_country();
	void clear_has_country();
	void set_has_language();
	void clear_has_language();
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
	// sizeof = 64
};

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:552
class CMsgGCStorePurchaseInitResponse : public Message {
public:

	static const int kResultFieldNumber = 1;
	static const int kTxnIdFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 txn_id_;  // +0x18
	int32 result_;  // +0x20

	static CMsgGCStorePurchaseInitResponse * default_instance_;
	CMsgGCStorePurchaseInitResponse();
	virtual ~CMsgGCStorePurchaseInitResponse();
	CMsgGCStorePurchaseInitResponse(const CMsgGCStorePurchaseInitResponse &);
	CMsgGCStorePurchaseInitResponse & operator=(const CMsgGCStorePurchaseInitResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCStorePurchaseInitResponse & default_instance();
	void Swap(CMsgGCStorePurchaseInitResponse *);
	virtual CMsgGCStorePurchaseInitResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCStorePurchaseInitResponse &);
	void MergeFrom(const CMsgGCStorePurchaseInitResponse &);
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
	int32 result();
	void set_result(int32);
	bool has_txn_id();
	void clear_txn_id();
	uint64 txn_id();
	void set_txn_id(uint64);
	void set_has_result();
	void clear_has_result();
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
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:641
class CMsgSystemBroadcast : public Message {
public:

	static const int kMessageFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * message_;  // +0x18

	static CMsgSystemBroadcast * default_instance_;
	CMsgSystemBroadcast();
	virtual ~CMsgSystemBroadcast();
	CMsgSystemBroadcast(const CMsgSystemBroadcast &);
	CMsgSystemBroadcast & operator=(const CMsgSystemBroadcast &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSystemBroadcast & default_instance();
	void Swap(CMsgSystemBroadcast *);
	virtual CMsgSystemBroadcast * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSystemBroadcast &);
	void MergeFrom(const CMsgSystemBroadcast &);
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
	bool has_message();
	void clear_message();
	const string & message();
	void set_message(const string &);
	void set_message(const char *);
	void set_message(const char *, size_t);
	string * mutable_message();
	string * release_message();
	void set_allocated_message(string *);
	void set_has_message();
	void clear_has_message();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:725
class CMsgClientPingData : public Message {
public:

	static const int kRelayCodesFieldNumber = 4;
	static const int kRelayPingsFieldNumber = 5;
	static const int kRegionCodesFieldNumber = 8;
	static const int kRegionPingsFieldNumber = 9;
	static const int kRegionPingFailedBitmaskFieldNumber = 10;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int _relay_codes_cached_byte_size_;  // +0x28

	int _relay_pings_cached_byte_size_;  // +0x40

	int _region_codes_cached_byte_size_;  // +0x58

	int _region_pings_cached_byte_size_;  // +0x70
	uint32 region_ping_failed_bitmask_;  // +0x74

	static CMsgClientPingData * default_instance_;
	CMsgClientPingData();
	virtual ~CMsgClientPingData();
	CMsgClientPingData(const CMsgClientPingData &);
	CMsgClientPingData & operator=(const CMsgClientPingData &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClientPingData & default_instance();
	void Swap(CMsgClientPingData *);
	virtual CMsgClientPingData * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClientPingData &);
	void MergeFrom(const CMsgClientPingData &);
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
	int relay_codes_size();
	void clear_relay_codes();
	uint32 relay_codes(int);
	void set_relay_codes(int, uint32);
	void add_relay_codes(uint32);
	const RepeatedField<unsigned int> & relay_codes();
	RepeatedField<unsigned int> * mutable_relay_codes();
	int relay_pings_size();
	void clear_relay_pings();
	uint32 relay_pings(int);
	void set_relay_pings(int, uint32);
	void add_relay_pings(uint32);
	const RepeatedField<unsigned int> & relay_pings();
	RepeatedField<unsigned int> * mutable_relay_pings();
	int region_codes_size();
	void clear_region_codes();
	uint32 region_codes(int);
	void set_region_codes(int, uint32);
	void add_region_codes(uint32);
	const RepeatedField<unsigned int> & region_codes();
	RepeatedField<unsigned int> * mutable_region_codes();
	int region_pings_size();
	void clear_region_pings();
	uint32 region_pings(int);
	void set_region_pings(int, uint32);
	void add_region_pings(uint32);
	const RepeatedField<unsigned int> & region_pings();
	RepeatedField<unsigned int> * mutable_region_pings();
	bool has_region_ping_failed_bitmask();
	void clear_region_ping_failed_bitmask();
	uint32 region_ping_failed_bitmask();
	void set_region_ping_failed_bitmask(uint32);
	void set_has_region_ping_failed_bitmask();
	void clear_has_region_ping_failed_bitmask();
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
	// sizeof = 120
};

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:860
class CMsgInviteToParty : public Message {
public:

	static const int kSteamIdFieldNumber = 1;
	static const int kClientVersionFieldNumber = 2;
	static const int kTeamIdFieldNumber = 3;
	static const int kAsCoachFieldNumber = 4;
	static const int kPingDataFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 steam_id_;  // +0x18
	uint32 client_version_;  // +0x20
	uint32 team_id_;  // +0x24
	bool as_coach_;  // +0x30

	static CMsgInviteToParty * default_instance_;
	CMsgInviteToParty();
	virtual ~CMsgInviteToParty();
	CMsgInviteToParty(const CMsgInviteToParty &);
	CMsgInviteToParty & operator=(const CMsgInviteToParty &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgInviteToParty & default_instance();
	void Swap(CMsgInviteToParty *);
	virtual CMsgInviteToParty * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgInviteToParty &);
	void MergeFrom(const CMsgInviteToParty &);
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
	bool has_steam_id();
	void clear_steam_id();
	uint64 steam_id();
	void set_steam_id(uint64);
	bool has_client_version();
	void clear_client_version();
	uint32 client_version();
	void set_client_version(uint32);
	bool has_team_id();
	void clear_team_id();
	uint32 team_id();
	void set_team_id(uint32);
	bool has_as_coach();
	void clear_as_coach();
	bool as_coach();
	void set_as_coach(bool);
	bool has_ping_data();
	void clear_ping_data();
	const CMsgClientPingData & ping_data();
	CMsgClientPingData * mutable_ping_data();
	CMsgClientPingData * release_ping_data();
	void set_allocated_ping_data(CMsgClientPingData *);
	void set_has_steam_id();
	void clear_has_steam_id();
	void set_has_client_version();
	void clear_has_client_version();
	void set_has_team_id();
	void clear_has_team_id();
	void set_has_as_coach();
	void clear_has_as_coach();
	void set_has_ping_data();
	void clear_has_ping_data();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:981
class CMsgInviteToLobby : public Message {
public:

	static const int kSteamIdFieldNumber = 1;
	static const int kClientVersionFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 steam_id_;  // +0x18
	uint32 client_version_;  // +0x20

	static CMsgInviteToLobby * default_instance_;
	CMsgInviteToLobby();
	virtual ~CMsgInviteToLobby();
	CMsgInviteToLobby(const CMsgInviteToLobby &);
	CMsgInviteToLobby & operator=(const CMsgInviteToLobby &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgInviteToLobby & default_instance();
	void Swap(CMsgInviteToLobby *);
	virtual CMsgInviteToLobby * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgInviteToLobby &);
	void MergeFrom(const CMsgInviteToLobby &);
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
	bool has_steam_id();
	void clear_steam_id();
	uint64 steam_id();
	void set_steam_id(uint64);
	bool has_client_version();
	void clear_client_version();
	uint32 client_version();
	void set_client_version(uint32);
	void set_has_steam_id();
	void clear_has_steam_id();
	void set_has_client_version();
	void clear_has_client_version();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:1070
class CMsgInvitationCreated : public Message {
public:

	static const int kGroupIdFieldNumber = 1;
	static const int kSteamIdFieldNumber = 2;
	static const int kUserOfflineFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 group_id_;  // +0x18
	uint64 steam_id_;  // +0x20
	bool user_offline_;  // +0x28

	static CMsgInvitationCreated * default_instance_;
	CMsgInvitationCreated();
	virtual ~CMsgInvitationCreated();
	CMsgInvitationCreated(const CMsgInvitationCreated &);
	CMsgInvitationCreated & operator=(const CMsgInvitationCreated &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgInvitationCreated & default_instance();
	void Swap(CMsgInvitationCreated *);
	virtual CMsgInvitationCreated * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgInvitationCreated &);
	void MergeFrom(const CMsgInvitationCreated &);
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
	bool has_group_id();
	void clear_group_id();
	uint64 group_id();
	void set_group_id(uint64);
	bool has_steam_id();
	void clear_steam_id();
	uint64 steam_id();
	void set_steam_id(uint64);
	bool has_user_offline();
	void clear_user_offline();
	bool user_offline();
	void set_user_offline(bool);
	void set_has_group_id();
	void clear_has_group_id();
	void set_has_steam_id();
	void clear_has_steam_id();
	void set_has_user_offline();
	void clear_has_user_offline();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:1169
class CMsgPartyInviteResponse : public Message {
public:

	static const int kPartyIdFieldNumber = 1;
	static const int kAcceptFieldNumber = 2;
	static const int kClientVersionFieldNumber = 3;
	static const int kPingDataFieldNumber = 8;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 party_id_;  // +0x18
	bool accept_;  // +0x20

	uint32 client_version_;  // +0x24

	static CMsgPartyInviteResponse * default_instance_;
	CMsgPartyInviteResponse();
	virtual ~CMsgPartyInviteResponse();
	CMsgPartyInviteResponse(const CMsgPartyInviteResponse &);
	CMsgPartyInviteResponse & operator=(const CMsgPartyInviteResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgPartyInviteResponse & default_instance();
	void Swap(CMsgPartyInviteResponse *);
	virtual CMsgPartyInviteResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgPartyInviteResponse &);
	void MergeFrom(const CMsgPartyInviteResponse &);
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
	bool has_party_id();
	void clear_party_id();
	uint64 party_id();
	void set_party_id(uint64);
	bool has_accept();
	void clear_accept();
	bool accept();
	void set_accept(bool);
	bool has_client_version();
	void clear_client_version();
	uint32 client_version();
	void set_client_version(uint32);
	bool has_ping_data();
	void clear_ping_data();
	const CMsgClientPingData & ping_data();
	CMsgClientPingData * mutable_ping_data();
	CMsgClientPingData * release_ping_data();
	void set_allocated_ping_data(CMsgClientPingData *);
	void set_has_party_id();
	void clear_has_party_id();
	void set_has_accept();
	void clear_has_accept();
	void set_has_client_version();
	void clear_has_client_version();
	void set_has_ping_data();
	void clear_has_ping_data();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:1280
class CMsgLobbyInviteResponse : public Message {
public:

	static const int kLobbyIdFieldNumber = 1;
	static const int kAcceptFieldNumber = 2;
	static const int kClientVersionFieldNumber = 3;
	static const int kCustomGameCrcFieldNumber = 6;
	static const int kCustomGameTimestampFieldNumber = 7;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 lobby_id_;  // +0x18
	bool accept_;  // +0x20

	uint32 client_version_;  // +0x24
	uint64 custom_game_crc_;  // +0x28
	uint32 custom_game_timestamp_;  // +0x30

	static CMsgLobbyInviteResponse * default_instance_;
	CMsgLobbyInviteResponse();
	virtual ~CMsgLobbyInviteResponse();
	CMsgLobbyInviteResponse(const CMsgLobbyInviteResponse &);
	CMsgLobbyInviteResponse & operator=(const CMsgLobbyInviteResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgLobbyInviteResponse & default_instance();
	void Swap(CMsgLobbyInviteResponse *);
	virtual CMsgLobbyInviteResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgLobbyInviteResponse &);
	void MergeFrom(const CMsgLobbyInviteResponse &);
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
	bool has_lobby_id();
	void clear_lobby_id();
	uint64 lobby_id();
	void set_lobby_id(uint64);
	bool has_accept();
	void clear_accept();
	bool accept();
	void set_accept(bool);
	bool has_client_version();
	void clear_client_version();
	uint32 client_version();
	void set_client_version(uint32);
	bool has_custom_game_crc();
	void clear_custom_game_crc();
	uint64 custom_game_crc();
	void set_custom_game_crc(uint64);
	bool has_custom_game_timestamp();
	void clear_custom_game_timestamp();
	uint32 custom_game_timestamp();
	void set_custom_game_timestamp(uint32);
	void set_has_lobby_id();
	void clear_has_lobby_id();
	void set_has_accept();
	void clear_has_accept();
	void set_has_client_version();
	void clear_has_client_version();
	void set_has_custom_game_crc();
	void clear_has_custom_game_crc();
	void set_has_custom_game_timestamp();
	void clear_has_custom_game_timestamp();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:1399
class CMsgKickFromParty : public Message {
public:

	static const int kSteamIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 steam_id_;  // +0x18

	static CMsgKickFromParty * default_instance_;
	CMsgKickFromParty();
	virtual ~CMsgKickFromParty();
	CMsgKickFromParty(const CMsgKickFromParty &);
	CMsgKickFromParty & operator=(const CMsgKickFromParty &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgKickFromParty & default_instance();
	void Swap(CMsgKickFromParty *);
	virtual CMsgKickFromParty * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgKickFromParty &);
	void MergeFrom(const CMsgKickFromParty &);
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
	bool has_steam_id();
	void clear_steam_id();
	uint64 steam_id();
	void set_steam_id(uint64);
	void set_has_steam_id();
	void clear_has_steam_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:1478
class CMsgLeaveParty : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgLeaveParty * default_instance_;
	CMsgLeaveParty();
	virtual ~CMsgLeaveParty();
	CMsgLeaveParty(const CMsgLeaveParty &);
	CMsgLeaveParty & operator=(const CMsgLeaveParty &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgLeaveParty & default_instance();
	void Swap(CMsgLeaveParty *);
	virtual CMsgLeaveParty * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgLeaveParty &);
	void MergeFrom(const CMsgLeaveParty &);
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:1547
class CMsgCustomGameInstallStatus : public Message {
public:

	static const int kStatusFieldNumber = 1;
	static const int kMessageFieldNumber = 2;
	static const int kLatestTimestampFromSteamFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * message_;  // +0x18
	int status_;  // +0x20
	uint32 latest_timestamp_from_steam_;  // +0x24

	static CMsgCustomGameInstallStatus * default_instance_;
	CMsgCustomGameInstallStatus();
	virtual ~CMsgCustomGameInstallStatus();
	CMsgCustomGameInstallStatus(const CMsgCustomGameInstallStatus &);
	CMsgCustomGameInstallStatus & operator=(const CMsgCustomGameInstallStatus &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgCustomGameInstallStatus & default_instance();
	void Swap(CMsgCustomGameInstallStatus *);
	virtual CMsgCustomGameInstallStatus * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgCustomGameInstallStatus &);
	void MergeFrom(const CMsgCustomGameInstallStatus &);
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
	bool has_status();
	void clear_status();
	ECustomGameInstallStatus status();
	void set_status(ECustomGameInstallStatus);
	bool has_message();
	void clear_message();
	const string & message();
	void set_message(const string &);
	void set_message(const char *);
	void set_message(const char *, size_t);
	string * mutable_message();
	string * release_message();
	void set_allocated_message(string *);
	bool has_latest_timestamp_from_steam();
	void clear_latest_timestamp_from_steam();
	uint32 latest_timestamp_from_steam();
	void set_latest_timestamp_from_steam(uint32);
	void set_has_status();
	void clear_has_status();
	void set_has_message();
	void clear_has_message();
	void set_has_latest_timestamp_from_steam();
	void clear_has_latest_timestamp_from_steam();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:1651
class CMsgServerAvailable : public Message {
public:

	static const int kCustomGameInstallStatusFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgServerAvailable * default_instance_;
	CMsgServerAvailable();
	virtual ~CMsgServerAvailable();
	CMsgServerAvailable(const CMsgServerAvailable &);
	CMsgServerAvailable & operator=(const CMsgServerAvailable &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerAvailable & default_instance();
	void Swap(CMsgServerAvailable *);
	virtual CMsgServerAvailable * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerAvailable &);
	void MergeFrom(const CMsgServerAvailable &);
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
	bool has_custom_game_install_status();
	void clear_custom_game_install_status();
	const CMsgCustomGameInstallStatus & custom_game_install_status();
	CMsgCustomGameInstallStatus * mutable_custom_game_install_status();
	CMsgCustomGameInstallStatus * release_custom_game_install_status();
	void set_allocated_custom_game_install_status(CMsgCustomGameInstallStatus *);
	void set_has_custom_game_install_status();
	void clear_has_custom_game_install_status();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:1732
class CMsgLANServerAvailable : public Message {
public:

	static const int kLobbyIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 lobby_id_;  // +0x18

	static CMsgLANServerAvailable * default_instance_;
	CMsgLANServerAvailable();
	virtual ~CMsgLANServerAvailable();
	CMsgLANServerAvailable(const CMsgLANServerAvailable &);
	CMsgLANServerAvailable & operator=(const CMsgLANServerAvailable &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgLANServerAvailable & default_instance();
	void Swap(CMsgLANServerAvailable *);
	virtual CMsgLANServerAvailable * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgLANServerAvailable &);
	void MergeFrom(const CMsgLANServerAvailable &);
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
	bool has_lobby_id();
	void clear_lobby_id();
	uint64 lobby_id();
	void set_lobby_id(uint64);
	void set_has_lobby_id();
	void clear_has_lobby_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:1811
class CSOEconGameAccountClient : public Message {
public:

	static const int kAdditionalBackpackSlotsFieldNumber = 1;
	static const int kTrialAccountFieldNumber = 2;
	static const int kEligibleForOnlinePlayFieldNumber = 3;
	static const int kNeedToChooseMostHelpfulFriendFieldNumber = 4;
	static const int kInCoachesListFieldNumber = 5;
	static const int kTradeBanExpirationFieldNumber = 6;
	static const int kDuelBanExpirationFieldNumber = 7;
	static const int kMadeFirstPurchaseFieldNumber = 9;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 additional_backpack_slots_;  // +0x18
	bool trial_account_;  // +0x1c
	bool eligible_for_online_play_;  // +0x1d
	bool need_to_choose_most_helpful_friend_;  // +0x1e
	bool in_coaches_list_;  // +0x1f
	uint32 trade_ban_expiration_;  // +0x20
	uint32 duel_ban_expiration_;  // +0x24
	bool made_first_purchase_;  // +0x28

	static CSOEconGameAccountClient * default_instance_;
	CSOEconGameAccountClient();
	virtual ~CSOEconGameAccountClient();
	CSOEconGameAccountClient(const CSOEconGameAccountClient &);
	CSOEconGameAccountClient & operator=(const CSOEconGameAccountClient &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSOEconGameAccountClient & default_instance();
	void Swap(CSOEconGameAccountClient *);
	virtual CSOEconGameAccountClient * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSOEconGameAccountClient &);
	void MergeFrom(const CSOEconGameAccountClient &);
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
	bool has_additional_backpack_slots();
	void clear_additional_backpack_slots();
	uint32 additional_backpack_slots();
	void set_additional_backpack_slots(uint32);
	bool has_trial_account();
	void clear_trial_account();
	bool trial_account();
	void set_trial_account(bool);
	bool has_eligible_for_online_play();
	void clear_eligible_for_online_play();
	bool eligible_for_online_play();
	void set_eligible_for_online_play(bool);
	bool has_need_to_choose_most_helpful_friend();
	void clear_need_to_choose_most_helpful_friend();
	bool need_to_choose_most_helpful_friend();
	void set_need_to_choose_most_helpful_friend(bool);
	bool has_in_coaches_list();
	void clear_in_coaches_list();
	bool in_coaches_list();
	void set_in_coaches_list(bool);
	bool has_trade_ban_expiration();
	void clear_trade_ban_expiration();
	uint32 trade_ban_expiration();
	void set_trade_ban_expiration(uint32);
	bool has_duel_ban_expiration();
	void clear_duel_ban_expiration();
	uint32 duel_ban_expiration();
	void set_duel_ban_expiration(uint32);
	bool has_made_first_purchase();
	void clear_made_first_purchase();
	bool made_first_purchase();
	void set_made_first_purchase(bool);
	void set_has_additional_backpack_slots();
	void clear_has_additional_backpack_slots();
	void set_has_trial_account();
	void clear_has_trial_account();
	void set_has_eligible_for_online_play();
	void clear_has_eligible_for_online_play();
	void set_has_need_to_choose_most_helpful_friend();
	void clear_has_need_to_choose_most_helpful_friend();
	void set_has_in_coaches_list();
	void clear_has_in_coaches_list();
	void set_has_trade_ban_expiration();
	void clear_has_trade_ban_expiration();
	void set_has_duel_ban_expiration();
	void clear_has_duel_ban_expiration();
	void set_has_made_first_purchase();
	void clear_has_made_first_purchase();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:1960
class CSOItemCriteriaCondition : public Message {
public:

	static const int kOpFieldNumber = 1;
	static const int kFieldFieldNumber = 2;
	static const int kRequiredFieldNumber = 3;
	static const int kFloatValueFieldNumber = 4;
	static const int kStringValueFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * field_;  // +0x18
	int32 op_;  // +0x20
	bool required_;  // +0x24

	string * string_value_;  // +0x28
	float float_value_;  // +0x30

	static CSOItemCriteriaCondition * default_instance_;
	CSOItemCriteriaCondition();
	virtual ~CSOItemCriteriaCondition();
	CSOItemCriteriaCondition(const CSOItemCriteriaCondition &);
	CSOItemCriteriaCondition & operator=(const CSOItemCriteriaCondition &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSOItemCriteriaCondition & default_instance();
	void Swap(CSOItemCriteriaCondition *);
	virtual CSOItemCriteriaCondition * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSOItemCriteriaCondition &);
	void MergeFrom(const CSOItemCriteriaCondition &);
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
	bool has_op();
	void clear_op();
	int32 op();
	void set_op(int32);
	bool has_field();
	void clear_field();
	const string & field();
	void set_field(const string &);
	void set_field(const char *);
	void set_field(const char *, size_t);
	string * mutable_field();
	string * release_field();
	void set_allocated_field(string *);
	bool has_required();
	void clear_required();
	bool required();
	void set_required(bool);
	bool has_float_value();
	void clear_float_value();
	float float_value();
	void set_float_value(float);
	bool has_string_value();
	void clear_string_value();
	const string & string_value();
	void set_string_value(const string &);
	void set_string_value(const char *);
	void set_string_value(const char *, size_t);
	string * mutable_string_value();
	string * release_string_value();
	void set_allocated_string_value(string *);
	void set_has_op();
	void clear_has_op();
	void set_has_field();
	void clear_has_field();
	void set_has_required();
	void clear_has_required();
	void set_has_float_value();
	void clear_has_float_value();
	void set_has_string_value();
	void clear_has_string_value();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:2089
class CSOItemCriteria : public Message {
public:

	static const int kItemLevelFieldNumber = 1;
	static const int kItemQualityFieldNumber = 2;
	static const int kItemLevelSetFieldNumber = 3;
	static const int kItemQualitySetFieldNumber = 4;
	static const int kInitialInventoryFieldNumber = 5;
	static const int kInitialQuantityFieldNumber = 6;
	static const int kIgnoreEnabledFlagFieldNumber = 8;
	static const int kConditionsFieldNumber = 9;
	static const int kRecentOnlyFieldNumber = 10;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 item_level_;  // +0x18
	int32 item_quality_;  // +0x1c
	uint32 initial_inventory_;  // +0x20
	bool item_level_set_;  // +0x24
	bool item_quality_set_;  // +0x25
	bool ignore_enabled_flag_;  // +0x26
	bool recent_only_;  // +0x27
	uint32 initial_quantity_;  // +0x40

	static CSOItemCriteria * default_instance_;
	CSOItemCriteria();
	virtual ~CSOItemCriteria();
	CSOItemCriteria(const CSOItemCriteria &);
	CSOItemCriteria & operator=(const CSOItemCriteria &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSOItemCriteria & default_instance();
	void Swap(CSOItemCriteria *);
	virtual CSOItemCriteria * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSOItemCriteria &);
	void MergeFrom(const CSOItemCriteria &);
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
	bool has_item_level();
	void clear_item_level();
	uint32 item_level();
	void set_item_level(uint32);
	bool has_item_quality();
	void clear_item_quality();
	int32 item_quality();
	void set_item_quality(int32);
	bool has_item_level_set();
	void clear_item_level_set();
	bool item_level_set();
	void set_item_level_set(bool);
	bool has_item_quality_set();
	void clear_item_quality_set();
	bool item_quality_set();
	void set_item_quality_set(bool);
	bool has_initial_inventory();
	void clear_initial_inventory();
	uint32 initial_inventory();
	void set_initial_inventory(uint32);
	bool has_initial_quantity();
	void clear_initial_quantity();
	uint32 initial_quantity();
	void set_initial_quantity(uint32);
	bool has_ignore_enabled_flag();
	void clear_ignore_enabled_flag();
	bool ignore_enabled_flag();
	void set_ignore_enabled_flag(bool);
	int conditions_size();
	void clear_conditions();
	const CSOItemCriteriaCondition & conditions(int);
	CSOItemCriteriaCondition * mutable_conditions(int);
	CSOItemCriteriaCondition * add_conditions();
	const RepeatedPtrField<CSOItemCriteriaCondition> & conditions();
	RepeatedPtrField<CSOItemCriteriaCondition> * mutable_conditions();
	bool has_recent_only();
	void clear_recent_only();
	bool recent_only();
	void set_recent_only(bool);
	void set_has_item_level();
	void clear_has_item_level();
	void set_has_item_quality();
	void clear_has_item_quality();
	void set_has_item_level_set();
	void clear_has_item_level_set();
	void set_has_item_quality_set();
	void clear_has_item_quality_set();
	void set_has_initial_inventory();
	void clear_has_initial_inventory();
	void set_has_initial_quantity();
	void clear_has_initial_quantity();
	void set_has_ignore_enabled_flag();
	void clear_has_ignore_enabled_flag();
	void set_has_recent_only();
	void clear_has_recent_only();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:2251
class CSOItemRecipe : public Message {
public:

	static const int kDefIndexFieldNumber = 1;
	static const int kNameFieldNumber = 2;
	static const int kNAFieldNumber = 3;
	static const int kDescInputsFieldNumber = 4;
	static const int kDescOutputsFieldNumber = 5;
	static const int kDiAFieldNumber = 6;
	static const int kDiBFieldNumber = 7;
	static const int kDiCFieldNumber = 8;
	static const int kDoAFieldNumber = 9;
	static const int kDoBFieldNumber = 10;
	static const int kDoCFieldNumber = 11;
	static const int kRequiresAllSameClassFieldNumber = 12;
	static const int kRequiresAllSameSlotFieldNumber = 13;
	static const int kClassUsageForOutputFieldNumber = 14;
	static const int kSlotUsageForOutputFieldNumber = 15;
	static const int kSetForOutputFieldNumber = 16;
	static const int kInputItemsCriteriaFieldNumber = 20;
	static const int kOutputItemsCriteriaFieldNumber = 21;
	static const int kInputItemDupeCountsFieldNumber = 22;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * name_;  // +0x18
	string * n_a_;  // +0x20
	string * desc_inputs_;  // +0x28
	string * desc_outputs_;  // +0x30
	string * di_a_;  // +0x38
	string * di_b_;  // +0x40
	string * di_c_;  // +0x48
	uint32 def_index_;  // +0x50
	bool requires_all_same_class_;  // +0x54
	bool requires_all_same_slot_;  // +0x55

	string * do_a_;  // +0x58
	string * do_b_;  // +0x60
	string * do_c_;  // +0x68
	int32 class_usage_for_output_;  // +0x70
	int32 slot_usage_for_output_;  // +0x74
	int32 set_for_output_;  // +0xb8

	static CSOItemRecipe * default_instance_;
	CSOItemRecipe();
	virtual ~CSOItemRecipe();
	CSOItemRecipe(const CSOItemRecipe &);
	CSOItemRecipe & operator=(const CSOItemRecipe &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSOItemRecipe & default_instance();
	void Swap(CSOItemRecipe *);
	virtual CSOItemRecipe * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSOItemRecipe &);
	void MergeFrom(const CSOItemRecipe &);
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
	bool has_name();
	void clear_name();
	const string & name();
	void set_name(const string &);
	void set_name(const char *);
	void set_name(const char *, size_t);
	string * mutable_name();
	string * release_name();
	void set_allocated_name(string *);
	bool has_n_a();
	void clear_n_a();
	const string & n_a();
	void set_n_a(const string &);
	void set_n_a(const char *);
	void set_n_a(const char *, size_t);
	string * mutable_n_a();
	string * release_n_a();
	void set_allocated_n_a(string *);
	bool has_desc_inputs();
	void clear_desc_inputs();
	const string & desc_inputs();
	void set_desc_inputs(const string &);
	void set_desc_inputs(const char *);
	void set_desc_inputs(const char *, size_t);
	string * mutable_desc_inputs();
	string * release_desc_inputs();
	void set_allocated_desc_inputs(string *);
	bool has_desc_outputs();
	void clear_desc_outputs();
	const string & desc_outputs();
	void set_desc_outputs(const string &);
	void set_desc_outputs(const char *);
	void set_desc_outputs(const char *, size_t);
	string * mutable_desc_outputs();
	string * release_desc_outputs();
	void set_allocated_desc_outputs(string *);
	bool has_di_a();
	void clear_di_a();
	const string & di_a();
	void set_di_a(const string &);
	void set_di_a(const char *);
	void set_di_a(const char *, size_t);
	string * mutable_di_a();
	string * release_di_a();
	void set_allocated_di_a(string *);
	bool has_di_b();
	void clear_di_b();
	const string & di_b();
	void set_di_b(const string &);
	void set_di_b(const char *);
	void set_di_b(const char *, size_t);
	string * mutable_di_b();
	string * release_di_b();
	void set_allocated_di_b(string *);
	bool has_di_c();
	void clear_di_c();
	const string & di_c();
	void set_di_c(const string &);
	void set_di_c(const char *);
	void set_di_c(const char *, size_t);
	string * mutable_di_c();
	string * release_di_c();
	void set_allocated_di_c(string *);
	bool has_do_a();
	void clear_do_a();
	const string & do_a();
	void set_do_a(const string &);
	void set_do_a(const char *);
	void set_do_a(const char *, size_t);
	string * mutable_do_a();
	string * release_do_a();
	void set_allocated_do_a(string *);
	bool has_do_b();
	void clear_do_b();
	const string & do_b();
	void set_do_b(const string &);
	void set_do_b(const char *);
	void set_do_b(const char *, size_t);
	string * mutable_do_b();
	string * release_do_b();
	void set_allocated_do_b(string *);
	bool has_do_c();
	void clear_do_c();
	const string & do_c();
	void set_do_c(const string &);
	void set_do_c(const char *);
	void set_do_c(const char *, size_t);
	string * mutable_do_c();
	string * release_do_c();
	void set_allocated_do_c(string *);
	bool has_requires_all_same_class();
	void clear_requires_all_same_class();
	bool requires_all_same_class();
	void set_requires_all_same_class(bool);
	bool has_requires_all_same_slot();
	void clear_requires_all_same_slot();
	bool requires_all_same_slot();
	void set_requires_all_same_slot(bool);
	bool has_class_usage_for_output();
	void clear_class_usage_for_output();
	int32 class_usage_for_output();
	void set_class_usage_for_output(int32);
	bool has_slot_usage_for_output();
	void clear_slot_usage_for_output();
	int32 slot_usage_for_output();
	void set_slot_usage_for_output(int32);
	bool has_set_for_output();
	void clear_set_for_output();
	int32 set_for_output();
	void set_set_for_output(int32);
	int input_items_criteria_size();
	void clear_input_items_criteria();
	const CSOItemCriteria & input_items_criteria(int);
	CSOItemCriteria * mutable_input_items_criteria(int);
	CSOItemCriteria * add_input_items_criteria();
	const RepeatedPtrField<CSOItemCriteria> & input_items_criteria();
	RepeatedPtrField<CSOItemCriteria> * mutable_input_items_criteria();
	int output_items_criteria_size();
	void clear_output_items_criteria();
	const CSOItemCriteria & output_items_criteria(int);
	CSOItemCriteria * mutable_output_items_criteria(int);
	CSOItemCriteria * add_output_items_criteria();
	const RepeatedPtrField<CSOItemCriteria> & output_items_criteria();
	RepeatedPtrField<CSOItemCriteria> * mutable_output_items_criteria();
	int input_item_dupe_counts_size();
	void clear_input_item_dupe_counts();
	uint32 input_item_dupe_counts(int);
	void set_input_item_dupe_counts(int, uint32);
	void add_input_item_dupe_counts(uint32);
	const RepeatedField<unsigned int> & input_item_dupe_counts();
	RepeatedField<unsigned int> * mutable_input_item_dupe_counts();
	void set_has_def_index();
	void clear_has_def_index();
	void set_has_name();
	void clear_has_name();
	void set_has_n_a();
	void clear_has_n_a();
	void set_has_desc_inputs();
	void clear_has_desc_inputs();
	void set_has_desc_outputs();
	void clear_has_desc_outputs();
	void set_has_di_a();
	void clear_has_di_a();
	void set_has_di_b();
	void clear_has_di_b();
	void set_has_di_c();
	void clear_has_di_c();
	void set_has_do_a();
	void clear_has_do_a();
	void set_has_do_b();
	void clear_has_do_b();
	void set_has_do_c();
	void clear_has_do_c();
	void set_has_requires_all_same_class();
	void clear_has_requires_all_same_class();
	void set_has_requires_all_same_slot();
	void clear_has_requires_all_same_slot();
	void set_has_class_usage_for_output();
	void clear_has_class_usage_for_output();
	void set_has_slot_usage_for_output();
	void clear_has_slot_usage_for_output();
	void set_has_set_for_output();
	void clear_has_set_for_output();
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
	// sizeof = 192
};

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:2569
class CMsgApplyStrangePart : public Message {
public:

	static const int kStrangePartItemIdFieldNumber = 1;
	static const int kItemItemIdFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 strange_part_item_id_;  // +0x18
	uint64 item_item_id_;  // +0x20

	static CMsgApplyStrangePart * default_instance_;
	CMsgApplyStrangePart();
	virtual ~CMsgApplyStrangePart();
	CMsgApplyStrangePart(const CMsgApplyStrangePart &);
	CMsgApplyStrangePart & operator=(const CMsgApplyStrangePart &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgApplyStrangePart & default_instance();
	void Swap(CMsgApplyStrangePart *);
	virtual CMsgApplyStrangePart * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgApplyStrangePart &);
	void MergeFrom(const CMsgApplyStrangePart &);
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
	bool has_strange_part_item_id();
	void clear_strange_part_item_id();
	uint64 strange_part_item_id();
	void set_strange_part_item_id(uint64);
	bool has_item_item_id();
	void clear_item_item_id();
	uint64 item_item_id();
	void set_item_item_id(uint64);
	void set_has_strange_part_item_id();
	void clear_has_strange_part_item_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:2658
class CMsgApplyPennantUpgrade : public Message {
public:

	static const int kUpgradeItemIdFieldNumber = 1;
	static const int kPennantItemIdFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 upgrade_item_id_;  // +0x18
	uint64 pennant_item_id_;  // +0x20

	static CMsgApplyPennantUpgrade * default_instance_;
	CMsgApplyPennantUpgrade();
	virtual ~CMsgApplyPennantUpgrade();
	CMsgApplyPennantUpgrade(const CMsgApplyPennantUpgrade &);
	CMsgApplyPennantUpgrade & operator=(const CMsgApplyPennantUpgrade &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgApplyPennantUpgrade & default_instance();
	void Swap(CMsgApplyPennantUpgrade *);
	virtual CMsgApplyPennantUpgrade * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgApplyPennantUpgrade &);
	void MergeFrom(const CMsgApplyPennantUpgrade &);
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
	bool has_upgrade_item_id();
	void clear_upgrade_item_id();
	uint64 upgrade_item_id();
	void set_upgrade_item_id(uint64);
	bool has_pennant_item_id();
	void clear_pennant_item_id();
	uint64 pennant_item_id();
	void set_pennant_item_id(uint64);
	void set_has_upgrade_item_id();
	void clear_has_upgrade_item_id();
	void set_has_pennant_item_id();
	void clear_has_pennant_item_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:2747
class CMsgApplyEggEssence : public Message {
public:

	static const int kEssenceItemIdFieldNumber = 1;
	static const int kEggItemIdFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 essence_item_id_;  // +0x18
	uint64 egg_item_id_;  // +0x20

	static CMsgApplyEggEssence * default_instance_;
	CMsgApplyEggEssence();
	virtual ~CMsgApplyEggEssence();
	CMsgApplyEggEssence(const CMsgApplyEggEssence &);
	CMsgApplyEggEssence & operator=(const CMsgApplyEggEssence &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgApplyEggEssence & default_instance();
	void Swap(CMsgApplyEggEssence *);
	virtual CMsgApplyEggEssence * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgApplyEggEssence &);
	void MergeFrom(const CMsgApplyEggEssence &);
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
	bool has_essence_item_id();
	void clear_essence_item_id();
	uint64 essence_item_id();
	void set_essence_item_id(uint64);
	bool has_egg_item_id();
	void clear_egg_item_id();
	uint64 egg_item_id();
	void set_egg_item_id(uint64);
	void set_has_essence_item_id();
	void clear_has_essence_item_id();
	void set_has_egg_item_id();
	void clear_has_egg_item_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:2836
class CSOEconItemAttribute : public Message {
public:

	static const int kDefIndexFieldNumber = 1;
	static const int kValueFieldNumber = 2;
	static const int kValueBytesFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 def_index_;  // +0x18
	uint32 value_;  // +0x1c
	string * value_bytes_;  // +0x20

	static CSOEconItemAttribute * default_instance_;
	CSOEconItemAttribute();
	virtual ~CSOEconItemAttribute();
	CSOEconItemAttribute(const CSOEconItemAttribute &);
	CSOEconItemAttribute & operator=(const CSOEconItemAttribute &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSOEconItemAttribute & default_instance();
	void Swap(CSOEconItemAttribute *);
	virtual CSOEconItemAttribute * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSOEconItemAttribute &);
	void MergeFrom(const CSOEconItemAttribute &);
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
	bool has_value();
	void clear_value();
	uint32 value();
	void set_value(uint32);
	bool has_value_bytes();
	void clear_value_bytes();
	const string & value_bytes();
	void set_value_bytes(const string &);
	void set_value_bytes(const char *);
	void set_value_bytes(const void *, size_t);
	string * mutable_value_bytes();
	string * release_value_bytes();
	void set_allocated_value_bytes(string *);
	void set_has_def_index();
	void clear_has_def_index();
	void set_has_value();
	void clear_has_value();
	void set_has_value_bytes();
	void clear_has_value_bytes();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:2940
class CSOEconItemEquipped : public Message {
public:

	static const int kNewClassFieldNumber = 1;
	static const int kNewSlotFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 new_class_;  // +0x18
	uint32 new_slot_;  // +0x1c

	static CSOEconItemEquipped * default_instance_;
	CSOEconItemEquipped();
	virtual ~CSOEconItemEquipped();
	CSOEconItemEquipped(const CSOEconItemEquipped &);
	CSOEconItemEquipped & operator=(const CSOEconItemEquipped &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSOEconItemEquipped & default_instance();
	void Swap(CSOEconItemEquipped *);
	virtual CSOEconItemEquipped * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSOEconItemEquipped &);
	void MergeFrom(const CSOEconItemEquipped &);
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
	bool has_new_class();
	void clear_new_class();
	uint32 new_class();
	void set_new_class(uint32);
	bool has_new_slot();
	void clear_new_slot();
	uint32 new_slot();
	void set_new_slot(uint32);
	void set_has_new_class();
	void clear_has_new_class();
	void set_has_new_slot();
	void clear_has_new_slot();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:3029
class CSOEconItem : public Message {
public:

	static const int kIdFieldNumber = 1;
	static const int kAccountIdFieldNumber = 2;
	static const int kInventoryFieldNumber = 3;
	static const int kDefIndexFieldNumber = 4;
	static const int kQuantityFieldNumber = 5;
	static const int kLevelFieldNumber = 6;
	static const int kQualityFieldNumber = 7;
	static const int kFlagsFieldNumber = 8;
	static const int kOriginFieldNumber = 9;
	static const int kAttributeFieldNumber = 12;
	static const int kInteriorItemFieldNumber = 13;
	static const int kInUseFieldNumber = 14;
	static const int kStyleFieldNumber = 15;
	static const int kOriginalIdFieldNumber = 16;
	static const int kEquippedStateFieldNumber = 18;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 id_;  // +0x18
	uint32 account_id_;  // +0x20
	uint32 inventory_;  // +0x24
	uint32 def_index_;  // +0x28
	uint32 quantity_;  // +0x2c
	uint32 level_;  // +0x30
	uint32 quality_;  // +0x34
	uint32 flags_;  // +0x38
	uint32 origin_;  // +0x3c
	bool in_use_;  // +0x60

	uint32 style_;  // +0x64
	uint64 original_id_;  // +0x68

	static CSOEconItem * default_instance_;
	CSOEconItem();
	virtual ~CSOEconItem();
	CSOEconItem(const CSOEconItem &);
	CSOEconItem & operator=(const CSOEconItem &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSOEconItem & default_instance();
	void Swap(CSOEconItem *);
	virtual CSOEconItem * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSOEconItem &);
	void MergeFrom(const CSOEconItem &);
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
	bool has_id();
	void clear_id();
	uint64 id();
	void set_id(uint64);
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	bool has_inventory();
	void clear_inventory();
	uint32 inventory();
	void set_inventory(uint32);
	bool has_def_index();
	void clear_def_index();
	uint32 def_index();
	void set_def_index(uint32);
	bool has_quantity();
	void clear_quantity();
	uint32 quantity();
	void set_quantity(uint32);
	bool has_level();
	void clear_level();
	uint32 level();
	void set_level(uint32);
	bool has_quality();
	void clear_quality();
	uint32 quality();
	void set_quality(uint32);
	bool has_flags();
	void clear_flags();
	uint32 flags();
	void set_flags(uint32);
	bool has_origin();
	void clear_origin();
	uint32 origin();
	void set_origin(uint32);
	int attribute_size();
	void clear_attribute();
	const CSOEconItemAttribute & attribute(int);
	CSOEconItemAttribute * mutable_attribute(int);
	CSOEconItemAttribute * add_attribute();
	const RepeatedPtrField<CSOEconItemAttribute> & attribute();
	RepeatedPtrField<CSOEconItemAttribute> * mutable_attribute();
	bool has_interior_item();
	void clear_interior_item();
	const CSOEconItem & interior_item();
	CSOEconItem * mutable_interior_item();
	CSOEconItem * release_interior_item();
	void set_allocated_interior_item(CSOEconItem *);
	bool has_in_use();
	void clear_in_use();
	bool in_use();
	void set_in_use(bool);
	bool has_style();
	void clear_style();
	uint32 style();
	void set_style(uint32);
	bool has_original_id();
	void clear_original_id();
	uint64 original_id();
	void set_original_id(uint64);
	int equipped_state_size();
	void clear_equipped_state();
	const CSOEconItemEquipped & equipped_state(int);
	CSOEconItemEquipped * mutable_equipped_state(int);
	CSOEconItemEquipped * add_equipped_state();
	const RepeatedPtrField<CSOEconItemEquipped> & equipped_state();
	RepeatedPtrField<CSOEconItemEquipped> * mutable_equipped_state();
	void set_has_id();
	void clear_has_id();
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_inventory();
	void clear_has_inventory();
	void set_has_def_index();
	void clear_has_def_index();
	void set_has_quantity();
	void clear_has_quantity();
	void set_has_level();
	void clear_has_level();
	void set_has_quality();
	void clear_has_quality();
	void set_has_flags();
	void clear_has_flags();
	void set_has_origin();
	void clear_has_origin();
	void set_has_interior_item();
	void clear_has_interior_item();
	void set_has_in_use();
	void clear_has_in_use();
	void set_has_style();
	void clear_has_style();
	void set_has_original_id();
	void clear_has_original_id();
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
	// sizeof = 136
};

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:3256
class CMsgSortItems : public Message {
public:

	static const int kSortTypeFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 sort_type_;  // +0x18

	static CMsgSortItems * default_instance_;
	CMsgSortItems();
	virtual ~CMsgSortItems();
	CMsgSortItems(const CMsgSortItems &);
	CMsgSortItems & operator=(const CMsgSortItems &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSortItems & default_instance();
	void Swap(CMsgSortItems *);
	virtual CMsgSortItems * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSortItems &);
	void MergeFrom(const CMsgSortItems &);
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
	bool has_sort_type();
	void clear_sort_type();
	uint32 sort_type();
	void set_sort_type(uint32);
	void set_has_sort_type();
	void clear_has_sort_type();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:3335
class CSOEconClaimCode : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kCodeTypeFieldNumber = 2;
	static const int kTimeAcquiredFieldNumber = 3;
	static const int kCodeFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18
	uint32 code_type_;  // +0x1c
	string * code_;  // +0x20
	uint32 time_acquired_;  // +0x28

	static CSOEconClaimCode * default_instance_;
	CSOEconClaimCode();
	virtual ~CSOEconClaimCode();
	CSOEconClaimCode(const CSOEconClaimCode &);
	CSOEconClaimCode & operator=(const CSOEconClaimCode &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSOEconClaimCode & default_instance();
	void Swap(CSOEconClaimCode *);
	virtual CSOEconClaimCode * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSOEconClaimCode &);
	void MergeFrom(const CSOEconClaimCode &);
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
	bool has_code_type();
	void clear_code_type();
	uint32 code_type();
	void set_code_type(uint32);
	bool has_time_acquired();
	void clear_time_acquired();
	uint32 time_acquired();
	void set_time_acquired(uint32);
	bool has_code();
	void clear_code();
	const string & code();
	void set_code(const string &);
	void set_code(const char *);
	void set_code(const char *, size_t);
	string * mutable_code();
	string * release_code();
	void set_allocated_code(string *);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_code_type();
	void clear_has_code_type();
	void set_has_time_acquired();
	void clear_has_time_acquired();
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
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:3449
class CMsgStoreGetUserData : public Message {
public:

	static const int kPriceSheetVersionFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 price_sheet_version_;  // +0x18

	static CMsgStoreGetUserData * default_instance_;
	CMsgStoreGetUserData();
	virtual ~CMsgStoreGetUserData();
	CMsgStoreGetUserData(const CMsgStoreGetUserData &);
	CMsgStoreGetUserData & operator=(const CMsgStoreGetUserData &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgStoreGetUserData & default_instance();
	void Swap(CMsgStoreGetUserData *);
	virtual CMsgStoreGetUserData * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgStoreGetUserData &);
	void MergeFrom(const CMsgStoreGetUserData &);
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
	bool has_price_sheet_version();
	void clear_price_sheet_version();
	uint32 price_sheet_version();
	void set_price_sheet_version(uint32);
	void set_has_price_sheet_version();
	void clear_has_price_sheet_version();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:3528
class CMsgStoreGetUserDataResponse : public Message {
public:

	static const int kResultFieldNumber = 1;
	static const int kCurrencyFieldNumber = 2;
	static const int kCountryFieldNumber = 3;
	static const int kPriceSheetVersionFieldNumber = 4;
	static const int kExperimentDataFieldNumber = 5;
	static const int kFeaturedItemIdxFieldNumber = 6;
	static const int kShowHatDescriptionsFieldNumber = 7;
	static const int kPriceSheetFieldNumber = 8;
	static const int kDefaultItemSortFieldNumber = 9;
	static const int kPopularItemsFieldNumber = 10;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 result_;  // +0x18
	int32 currency_;  // +0x1c
	string * country_;  // +0x20
	uint64 experiment_data_;  // +0x28
	uint32 price_sheet_version_;  // +0x30
	int32 featured_item_idx_;  // +0x34
	string * price_sheet_;  // +0x38
	bool show_hat_descriptions_;  // +0x40

	int32 default_item_sort_;  // +0x44

	static CMsgStoreGetUserDataResponse * default_instance_;
	CMsgStoreGetUserDataResponse();
	virtual ~CMsgStoreGetUserDataResponse();
	CMsgStoreGetUserDataResponse(const CMsgStoreGetUserDataResponse &);
	CMsgStoreGetUserDataResponse & operator=(const CMsgStoreGetUserDataResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgStoreGetUserDataResponse & default_instance();
	void Swap(CMsgStoreGetUserDataResponse *);
	virtual CMsgStoreGetUserDataResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgStoreGetUserDataResponse &);
	void MergeFrom(const CMsgStoreGetUserDataResponse &);
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
	int32 result();
	void set_result(int32);
	bool has_currency();
	void clear_currency();
	int32 currency();
	void set_currency(int32);
	bool has_country();
	void clear_country();
	const string & country();
	void set_country(const string &);
	void set_country(const char *);
	void set_country(const char *, size_t);
	string * mutable_country();
	string * release_country();
	void set_allocated_country(string *);
	bool has_price_sheet_version();
	void clear_price_sheet_version();
	uint32 price_sheet_version();
	void set_price_sheet_version(uint32);
	bool has_experiment_data();
	void clear_experiment_data();
	uint64 experiment_data();
	void set_experiment_data(uint64);
	bool has_featured_item_idx();
	void clear_featured_item_idx();
	int32 featured_item_idx();
	void set_featured_item_idx(int32);
	bool has_show_hat_descriptions();
	void clear_show_hat_descriptions();
	bool show_hat_descriptions();
	void set_show_hat_descriptions(bool);
	bool has_price_sheet();
	void clear_price_sheet();
	const string & price_sheet();
	void set_price_sheet(const string &);
	void set_price_sheet(const char *);
	void set_price_sheet(const void *, size_t);
	string * mutable_price_sheet();
	string * release_price_sheet();
	void set_allocated_price_sheet(string *);
	bool has_default_item_sort();
	void clear_default_item_sort();
	int32 default_item_sort();
	void set_default_item_sort(int32);
	int popular_items_size();
	void clear_popular_items();
	uint32 popular_items(int);
	void set_popular_items(int, uint32);
	void add_popular_items(uint32);
	const RepeatedField<unsigned int> & popular_items();
	RepeatedField<unsigned int> * mutable_popular_items();
	void set_has_result();
	void clear_has_result();
	void set_has_currency();
	void clear_has_currency();
	void set_has_country();
	void clear_has_country();
	void set_has_price_sheet_version();
	void clear_has_price_sheet_version();
	void set_has_experiment_data();
	void clear_has_experiment_data();
	void set_has_featured_item_idx();
	void clear_has_featured_item_idx();
	void set_has_show_hat_descriptions();
	void clear_has_show_hat_descriptions();
	void set_has_price_sheet();
	void clear_has_price_sheet();
	void set_has_default_item_sort();
	void clear_has_default_item_sort();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:3710
class CMsgUpdateItemSchema : public Message {
public:

	static const int kItemsGameFieldNumber = 1;
	static const int kItemSchemaVersionFieldNumber = 2;
	static const int kItemsGameUrlFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * items_game_;  // +0x18
	string * items_game_url_;  // +0x20
	uint32 item_schema_version_;  // +0x28

	static CMsgUpdateItemSchema * default_instance_;
	CMsgUpdateItemSchema();
	virtual ~CMsgUpdateItemSchema();
	CMsgUpdateItemSchema(const CMsgUpdateItemSchema &);
	CMsgUpdateItemSchema & operator=(const CMsgUpdateItemSchema &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgUpdateItemSchema & default_instance();
	void Swap(CMsgUpdateItemSchema *);
	virtual CMsgUpdateItemSchema * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgUpdateItemSchema &);
	void MergeFrom(const CMsgUpdateItemSchema &);
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
	bool has_items_game();
	void clear_items_game();
	const string & items_game();
	void set_items_game(const string &);
	void set_items_game(const char *);
	void set_items_game(const void *, size_t);
	string * mutable_items_game();
	string * release_items_game();
	void set_allocated_items_game(string *);
	bool has_item_schema_version();
	void clear_item_schema_version();
	uint32 item_schema_version();
	void set_item_schema_version(uint32);
	bool has_items_game_url();
	void clear_items_game_url();
	const string & items_game_url();
	void set_items_game_url(const string &);
	void set_items_game_url(const char *);
	void set_items_game_url(const char *, size_t);
	string * mutable_items_game_url();
	string * release_items_game_url();
	void set_allocated_items_game_url(string *);
	void set_has_items_game();
	void clear_has_items_game();
	void set_has_item_schema_version();
	void clear_has_item_schema_version();
	void set_has_items_game_url();
	void clear_has_items_game_url();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:3819
class CMsgGCError : public Message {
public:

	static const int kErrorTextFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * error_text_;  // +0x18

	static CMsgGCError * default_instance_;
	CMsgGCError();
	virtual ~CMsgGCError();
	CMsgGCError(const CMsgGCError &);
	CMsgGCError & operator=(const CMsgGCError &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCError & default_instance();
	void Swap(CMsgGCError *);
	virtual CMsgGCError * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCError &);
	void MergeFrom(const CMsgGCError &);
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
	bool has_error_text();
	void clear_error_text();
	const string & error_text();
	void set_error_text(const string &);
	void set_error_text(const char *);
	void set_error_text(const char *, size_t);
	string * mutable_error_text();
	string * release_error_text();
	void set_allocated_error_text(string *);
	void set_has_error_text();
	void clear_has_error_text();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:3903
class CMsgRequestInventoryRefresh : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgRequestInventoryRefresh * default_instance_;
	CMsgRequestInventoryRefresh();
	virtual ~CMsgRequestInventoryRefresh();
	CMsgRequestInventoryRefresh(const CMsgRequestInventoryRefresh &);
	CMsgRequestInventoryRefresh & operator=(const CMsgRequestInventoryRefresh &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgRequestInventoryRefresh & default_instance();
	void Swap(CMsgRequestInventoryRefresh *);
	virtual CMsgRequestInventoryRefresh * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgRequestInventoryRefresh &);
	void MergeFrom(const CMsgRequestInventoryRefresh &);
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:3972
class CMsgConVarValue : public Message {
public:

	static const int kNameFieldNumber = 1;
	static const int kValueFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * name_;  // +0x18
	string * value_;  // +0x20

	static CMsgConVarValue * default_instance_;
	CMsgConVarValue();
	virtual ~CMsgConVarValue();
	CMsgConVarValue(const CMsgConVarValue &);
	CMsgConVarValue & operator=(const CMsgConVarValue &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgConVarValue & default_instance();
	void Swap(CMsgConVarValue *);
	virtual CMsgConVarValue * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgConVarValue &);
	void MergeFrom(const CMsgConVarValue &);
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
	bool has_value();
	void clear_value();
	const string & value();
	void set_value(const string &);
	void set_value(const char *);
	void set_value(const char *, size_t);
	string * mutable_value();
	string * release_value();
	void set_allocated_value(string *);
	void set_has_name();
	void clear_has_name();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:4071
class CMsgReplicateConVars : public Message {
public:

	static const int kConvarsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgReplicateConVars * default_instance_;
	CMsgReplicateConVars();
	virtual ~CMsgReplicateConVars();
	CMsgReplicateConVars(const CMsgReplicateConVars &);
	CMsgReplicateConVars & operator=(const CMsgReplicateConVars &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgReplicateConVars & default_instance();
	void Swap(CMsgReplicateConVars *);
	virtual CMsgReplicateConVars * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgReplicateConVars &);
	void MergeFrom(const CMsgReplicateConVars &);
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
	int convars_size();
	void clear_convars();
	const CMsgConVarValue & convars(int);
	CMsgConVarValue * mutable_convars(int);
	CMsgConVarValue * add_convars();
	const RepeatedPtrField<CMsgConVarValue> & convars();
	RepeatedPtrField<CMsgConVarValue> * mutable_convars();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:4153
class CMsgConsumableExhausted : public Message {
public:

	static const int kItemDefIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 item_def_id_;  // +0x18

	static CMsgConsumableExhausted * default_instance_;
	CMsgConsumableExhausted();
	virtual ~CMsgConsumableExhausted();
	CMsgConsumableExhausted(const CMsgConsumableExhausted &);
	CMsgConsumableExhausted & operator=(const CMsgConsumableExhausted &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgConsumableExhausted & default_instance();
	void Swap(CMsgConsumableExhausted *);
	virtual CMsgConsumableExhausted * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgConsumableExhausted &);
	void MergeFrom(const CMsgConsumableExhausted &);
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
	int32 item_def_id();
	void set_item_def_id(int32);
	void set_has_item_def_id();
	void clear_has_item_def_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:4232
class CMsgItemAcknowledged : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kInventoryFieldNumber = 2;
	static const int kDefIndexFieldNumber = 3;
	static const int kQualityFieldNumber = 4;
	static const int kRarityFieldNumber = 5;
	static const int kOriginFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18
	uint32 inventory_;  // +0x1c
	uint32 def_index_;  // +0x20
	uint32 quality_;  // +0x24
	uint32 rarity_;  // +0x28
	uint32 origin_;  // +0x2c

	static CMsgItemAcknowledged * default_instance_;
	CMsgItemAcknowledged();
	virtual ~CMsgItemAcknowledged();
	CMsgItemAcknowledged(const CMsgItemAcknowledged &);
	CMsgItemAcknowledged & operator=(const CMsgItemAcknowledged &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgItemAcknowledged & default_instance();
	void Swap(CMsgItemAcknowledged *);
	virtual CMsgItemAcknowledged * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgItemAcknowledged &);
	void MergeFrom(const CMsgItemAcknowledged &);
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
	bool has_inventory();
	void clear_inventory();
	uint32 inventory();
	void set_inventory(uint32);
	bool has_def_index();
	void clear_def_index();
	uint32 def_index();
	void set_def_index(uint32);
	bool has_quality();
	void clear_quality();
	uint32 quality();
	void set_quality(uint32);
	bool has_rarity();
	void clear_rarity();
	uint32 rarity();
	void set_rarity(uint32);
	bool has_origin();
	void clear_origin();
	uint32 origin();
	void set_origin(uint32);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_inventory();
	void clear_has_inventory();
	void set_has_def_index();
	void clear_has_def_index();
	void set_has_quality();
	void clear_has_quality();
	void set_has_rarity();
	void clear_has_rarity();
	void set_has_origin();
	void clear_has_origin();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:4361
class CMsgSetItemPositions_ItemPosition : public Message {
public:

	static const int kItemIdFieldNumber = 1;
	static const int kPositionFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 item_id_;  // +0x18
	uint32 position_;  // +0x20

	static CMsgSetItemPositions_ItemPosition * default_instance_;
	CMsgSetItemPositions_ItemPosition();
	virtual ~CMsgSetItemPositions_ItemPosition();
	CMsgSetItemPositions_ItemPosition(const CMsgSetItemPositions_ItemPosition &);
	CMsgSetItemPositions_ItemPosition & operator=(const CMsgSetItemPositions_ItemPosition &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSetItemPositions_ItemPosition & default_instance();
	void Swap(CMsgSetItemPositions_ItemPosition *);
	virtual CMsgSetItemPositions_ItemPosition * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSetItemPositions_ItemPosition &);
	void MergeFrom(const CMsgSetItemPositions_ItemPosition &);
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
	bool has_position();
	void clear_position();
	uint32 position();
	void set_position(uint32);
	void set_has_item_id();
	void clear_has_item_id();
	void set_has_position();
	void clear_has_position();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:4450
class CMsgSetItemPositions : public Message {
public:

	static const int kItemPositionsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgSetItemPositions * default_instance_;
	CMsgSetItemPositions();
	virtual ~CMsgSetItemPositions();
	CMsgSetItemPositions(const CMsgSetItemPositions &);
	CMsgSetItemPositions & operator=(const CMsgSetItemPositions &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSetItemPositions & default_instance();
	void Swap(CMsgSetItemPositions *);
	virtual CMsgSetItemPositions * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSetItemPositions &);
	void MergeFrom(const CMsgSetItemPositions &);
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
	int item_positions_size();
	void clear_item_positions();
	const CMsgSetItemPositions_ItemPosition & item_positions(int);
	CMsgSetItemPositions_ItemPosition * mutable_item_positions(int);
	CMsgSetItemPositions_ItemPosition * add_item_positions();
	const RepeatedPtrField<CMsgSetItemPositions_ItemPosition> & item_positions();
	RepeatedPtrField<CMsgSetItemPositions_ItemPosition> * mutable_item_positions();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:4534
class CMsgGCNameItemNotification : public Message {
public:

	static const int kPlayerSteamidFieldNumber = 1;
	static const int kItemDefIndexFieldNumber = 2;
	static const int kItemNameCustomFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 player_steamid_;  // +0x18
	string * item_name_custom_;  // +0x20
	uint32 item_def_index_;  // +0x28

	static CMsgGCNameItemNotification * default_instance_;
	CMsgGCNameItemNotification();
	virtual ~CMsgGCNameItemNotification();
	CMsgGCNameItemNotification(const CMsgGCNameItemNotification &);
	CMsgGCNameItemNotification & operator=(const CMsgGCNameItemNotification &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCNameItemNotification & default_instance();
	void Swap(CMsgGCNameItemNotification *);
	virtual CMsgGCNameItemNotification * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCNameItemNotification &);
	void MergeFrom(const CMsgGCNameItemNotification &);
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
	bool has_player_steamid();
	void clear_player_steamid();
	uint64 player_steamid();
	void set_player_steamid(uint64);
	bool has_item_def_index();
	void clear_item_def_index();
	uint32 item_def_index();
	void set_item_def_index(uint32);
	bool has_item_name_custom();
	void clear_item_name_custom();
	const string & item_name_custom();
	void set_item_name_custom(const string &);
	void set_item_name_custom(const char *);
	void set_item_name_custom(const char *, size_t);
	string * mutable_item_name_custom();
	string * release_item_name_custom();
	void set_allocated_item_name_custom(string *);
	void set_has_player_steamid();
	void clear_has_player_steamid();
	void set_has_item_def_index();
	void clear_has_item_def_index();
	void set_has_item_name_custom();
	void clear_has_item_name_custom();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:4638
class CMsgGCClientDisplayNotification : public Message {
public:

	static const int kNotificationTitleLocalizationKeyFieldNumber = 1;
	static const int kNotificationBodyLocalizationKeyFieldNumber = 2;
	static const int kBodySubstringKeysFieldNumber = 3;
	static const int kBodySubstringValuesFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * notification_title_localization_key_;  // +0x18
	string * notification_body_localization_key_;  // +0x20

	static CMsgGCClientDisplayNotification * default_instance_;
	CMsgGCClientDisplayNotification();
	virtual ~CMsgGCClientDisplayNotification();
	CMsgGCClientDisplayNotification(const CMsgGCClientDisplayNotification &);
	CMsgGCClientDisplayNotification & operator=(const CMsgGCClientDisplayNotification &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCClientDisplayNotification & default_instance();
	void Swap(CMsgGCClientDisplayNotification *);
	virtual CMsgGCClientDisplayNotification * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCClientDisplayNotification &);
	void MergeFrom(const CMsgGCClientDisplayNotification &);
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
	bool has_notification_title_localization_key();
	void clear_notification_title_localization_key();
	const string & notification_title_localization_key();
	void set_notification_title_localization_key(const string &);
	void set_notification_title_localization_key(const char *);
	void set_notification_title_localization_key(const char *, size_t);
	string * mutable_notification_title_localization_key();
	string * release_notification_title_localization_key();
	void set_allocated_notification_title_localization_key(string *);
	bool has_notification_body_localization_key();
	void clear_notification_body_localization_key();
	const string & notification_body_localization_key();
	void set_notification_body_localization_key(const string &);
	void set_notification_body_localization_key(const char *);
	void set_notification_body_localization_key(const char *, size_t);
	string * mutable_notification_body_localization_key();
	string * release_notification_body_localization_key();
	void set_allocated_notification_body_localization_key(string *);
	int body_substring_keys_size();
	void clear_body_substring_keys();
	const string & body_substring_keys(int);
	string * mutable_body_substring_keys(int);
	void set_body_substring_keys(int, const string &);
	void set_body_substring_keys(int, const char *);
	void set_body_substring_keys(int, const char *, size_t);
	string * add_body_substring_keys();
	void add_body_substring_keys(const string &);
	void add_body_substring_keys(const char *);
	void add_body_substring_keys(const char *, size_t);
	const RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > & body_substring_keys();
	RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > * mutable_body_substring_keys();
	int body_substring_values_size();
	void clear_body_substring_values();
	const string & body_substring_values(int);
	string * mutable_body_substring_values(int);
	void set_body_substring_values(int, const string &);
	void set_body_substring_values(int, const char *);
	void set_body_substring_values(int, const char *, size_t);
	string * add_body_substring_values();
	void add_body_substring_values(const string &);
	void add_body_substring_values(const char *);
	void add_body_substring_values(const char *, size_t);
	const RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > & body_substring_values();
	RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > * mutable_body_substring_values();
	void set_has_notification_title_localization_key();
	void clear_has_notification_title_localization_key();
	void set_has_notification_body_localization_key();
	void clear_has_notification_body_localization_key();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:4771
class CMsgGCShowItemsPickedUp : public Message {
public:

	static const int kPlayerSteamidFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 player_steamid_;  // +0x18

	static CMsgGCShowItemsPickedUp * default_instance_;
	CMsgGCShowItemsPickedUp();
	virtual ~CMsgGCShowItemsPickedUp();
	CMsgGCShowItemsPickedUp(const CMsgGCShowItemsPickedUp &);
	CMsgGCShowItemsPickedUp & operator=(const CMsgGCShowItemsPickedUp &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCShowItemsPickedUp & default_instance();
	void Swap(CMsgGCShowItemsPickedUp *);
	virtual CMsgGCShowItemsPickedUp * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCShowItemsPickedUp &);
	void MergeFrom(const CMsgGCShowItemsPickedUp &);
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
	bool has_player_steamid();
	void clear_player_steamid();
	uint64 player_steamid();
	void set_player_steamid(uint64);
	void set_has_player_steamid();
	void clear_has_player_steamid();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:4850
class CMsgGCIncrementKillCountResponse : public Message {
public:

	static const int kKillerAccountIdFieldNumber = 1;
	static const int kNumKillsFieldNumber = 2;
	static const int kItemDefFieldNumber = 3;
	static const int kLevelTypeFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 killer_account_id_;  // +0x18
	uint32 num_kills_;  // +0x1c
	uint32 item_def_;  // +0x20
	uint32 level_type_;  // +0x24

	static CMsgGCIncrementKillCountResponse * default_instance_;
	CMsgGCIncrementKillCountResponse();
	virtual ~CMsgGCIncrementKillCountResponse();
	CMsgGCIncrementKillCountResponse(const CMsgGCIncrementKillCountResponse &);
	CMsgGCIncrementKillCountResponse & operator=(const CMsgGCIncrementKillCountResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCIncrementKillCountResponse & default_instance();
	void Swap(CMsgGCIncrementKillCountResponse *);
	virtual CMsgGCIncrementKillCountResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCIncrementKillCountResponse &);
	void MergeFrom(const CMsgGCIncrementKillCountResponse &);
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
	bool has_killer_account_id();
	void clear_killer_account_id();
	uint32 killer_account_id();
	void set_killer_account_id(uint32);
	bool has_num_kills();
	void clear_num_kills();
	uint32 num_kills();
	void set_num_kills(uint32);
	bool has_item_def();
	void clear_item_def();
	uint32 item_def();
	void set_item_def(uint32);
	bool has_level_type();
	void clear_level_type();
	uint32 level_type();
	void set_level_type(uint32);
	void set_has_killer_account_id();
	void clear_has_killer_account_id();
	void set_has_num_kills();
	void clear_has_num_kills();
	void set_has_item_def();
	void clear_has_item_def();
	void set_has_level_type();
	void clear_has_level_type();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:4959
class CSOEconItemDropRateBonus : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kExpirationDateFieldNumber = 2;
	static const int kBonusFieldNumber = 3;
	static const int kBonusCountFieldNumber = 4;
	static const int kItemIdFieldNumber = 5;
	static const int kDefIndexFieldNumber = 6;
	static const int kSecondsLeftFieldNumber = 7;
	static const int kBoosterTypeFieldNumber = 8;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18
	uint32 expiration_date_;  // +0x1c
	float bonus_;  // +0x20
	uint32 bonus_count_;  // +0x24
	uint64 item_id_;  // +0x28
	uint32 def_index_;  // +0x30
	uint32 seconds_left_;  // +0x34
	uint32 booster_type_;  // +0x38

	static CSOEconItemDropRateBonus * default_instance_;
	CSOEconItemDropRateBonus();
	virtual ~CSOEconItemDropRateBonus();
	CSOEconItemDropRateBonus(const CSOEconItemDropRateBonus &);
	CSOEconItemDropRateBonus & operator=(const CSOEconItemDropRateBonus &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSOEconItemDropRateBonus & default_instance();
	void Swap(CSOEconItemDropRateBonus *);
	virtual CSOEconItemDropRateBonus * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSOEconItemDropRateBonus &);
	void MergeFrom(const CSOEconItemDropRateBonus &);
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
	bool has_expiration_date();
	void clear_expiration_date();
	uint32 expiration_date();
	void set_expiration_date(uint32);
	bool has_bonus();
	void clear_bonus();
	float bonus();
	void set_bonus(float);
	bool has_bonus_count();
	void clear_bonus_count();
	uint32 bonus_count();
	void set_bonus_count(uint32);
	bool has_item_id();
	void clear_item_id();
	uint64 item_id();
	void set_item_id(uint64);
	bool has_def_index();
	void clear_def_index();
	uint32 def_index();
	void set_def_index(uint32);
	bool has_seconds_left();
	void clear_seconds_left();
	uint32 seconds_left();
	void set_seconds_left(uint32);
	bool has_booster_type();
	void clear_booster_type();
	uint32 booster_type();
	void set_booster_type(uint32);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_expiration_date();
	void clear_has_expiration_date();
	void set_has_bonus();
	void clear_has_bonus();
	void set_has_bonus_count();
	void clear_has_bonus_count();
	void set_has_item_id();
	void clear_has_item_id();
	void set_has_def_index();
	void clear_has_def_index();
	void set_has_seconds_left();
	void clear_has_seconds_left();
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
	// sizeof = 64
};

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:5108
class CSOEconItemLeagueViewPass : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kLeagueIdFieldNumber = 2;
	static const int kItemindexFieldNumber = 4;
	static const int kGrantReasonFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18
	uint32 league_id_;  // +0x1c
	uint32 itemindex_;  // +0x20
	uint32 grant_reason_;  // +0x24

	static CSOEconItemLeagueViewPass * default_instance_;
	CSOEconItemLeagueViewPass();
	virtual ~CSOEconItemLeagueViewPass();
	CSOEconItemLeagueViewPass(const CSOEconItemLeagueViewPass &);
	CSOEconItemLeagueViewPass & operator=(const CSOEconItemLeagueViewPass &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSOEconItemLeagueViewPass & default_instance();
	void Swap(CSOEconItemLeagueViewPass *);
	virtual CSOEconItemLeagueViewPass * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSOEconItemLeagueViewPass &);
	void MergeFrom(const CSOEconItemLeagueViewPass &);
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
	bool has_league_id();
	void clear_league_id();
	uint32 league_id();
	void set_league_id(uint32);
	bool has_itemindex();
	void clear_itemindex();
	uint32 itemindex();
	void set_itemindex(uint32);
	bool has_grant_reason();
	void clear_grant_reason();
	uint32 grant_reason();
	void set_grant_reason(uint32);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_league_id();
	void clear_has_league_id();
	void set_has_itemindex();
	void clear_has_itemindex();
	void set_has_grant_reason();
	void clear_has_grant_reason();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:5217
class CSOEconItemEventTicket : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kEventIdFieldNumber = 2;
	static const int kItemIdFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18
	uint32 event_id_;  // +0x1c
	uint64 item_id_;  // +0x20

	static CSOEconItemEventTicket * default_instance_;
	CSOEconItemEventTicket();
	virtual ~CSOEconItemEventTicket();
	CSOEconItemEventTicket(const CSOEconItemEventTicket &);
	CSOEconItemEventTicket & operator=(const CSOEconItemEventTicket &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSOEconItemEventTicket & default_instance();
	void Swap(CSOEconItemEventTicket *);
	virtual CSOEconItemEventTicket * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSOEconItemEventTicket &);
	void MergeFrom(const CSOEconItemEventTicket &);
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
	bool has_event_id();
	void clear_event_id();
	uint32 event_id();
	void set_event_id(uint32);
	bool has_item_id();
	void clear_item_id();
	uint64 item_id();
	void set_item_id(uint64);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_event_id();
	void clear_has_event_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:5316
class CSOEconItemTournamentPassport : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kLeagueIdFieldNumber = 2;
	static const int kItemIdFieldNumber = 3;
	static const int kOriginalPurchaserIdFieldNumber = 4;
	static const int kPassportsBoughtFieldNumber = 5;
	static const int kVersionFieldNumber = 6;
	static const int kDefIndexFieldNumber = 7;
	static const int kRewardFlagsFieldNumber = 8;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18
	uint32 league_id_;  // +0x1c
	uint64 item_id_;  // +0x20
	uint32 original_purchaser_id_;  // +0x28
	uint32 passports_bought_;  // +0x2c
	uint32 version_;  // +0x30
	uint32 def_index_;  // +0x34
	uint32 reward_flags_;  // +0x38

	static CSOEconItemTournamentPassport * default_instance_;
	CSOEconItemTournamentPassport();
	virtual ~CSOEconItemTournamentPassport();
	CSOEconItemTournamentPassport(const CSOEconItemTournamentPassport &);
	CSOEconItemTournamentPassport & operator=(const CSOEconItemTournamentPassport &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSOEconItemTournamentPassport & default_instance();
	void Swap(CSOEconItemTournamentPassport *);
	virtual CSOEconItemTournamentPassport * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSOEconItemTournamentPassport &);
	void MergeFrom(const CSOEconItemTournamentPassport &);
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
	bool has_league_id();
	void clear_league_id();
	uint32 league_id();
	void set_league_id(uint32);
	bool has_item_id();
	void clear_item_id();
	uint64 item_id();
	void set_item_id(uint64);
	bool has_original_purchaser_id();
	void clear_original_purchaser_id();
	uint32 original_purchaser_id();
	void set_original_purchaser_id(uint32);
	bool has_passports_bought();
	void clear_passports_bought();
	uint32 passports_bought();
	void set_passports_bought(uint32);
	bool has_version();
	void clear_version();
	uint32 version();
	void set_version(uint32);
	bool has_def_index();
	void clear_def_index();
	uint32 def_index();
	void set_def_index(uint32);
	bool has_reward_flags();
	void clear_reward_flags();
	uint32 reward_flags();
	void set_reward_flags(uint32);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_league_id();
	void clear_has_league_id();
	void set_has_item_id();
	void clear_has_item_id();
	void set_has_original_purchaser_id();
	void clear_has_original_purchaser_id();
	void set_has_passports_bought();
	void clear_has_passports_bought();
	void set_has_version();
	void clear_has_version();
	void set_has_def_index();
	void clear_has_def_index();
	void set_has_reward_flags();
	void clear_has_reward_flags();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:5465
class CMsgGCStorePurchaseCancel : public Message {
public:

	static const int kTxnIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 txn_id_;  // +0x18

	static CMsgGCStorePurchaseCancel * default_instance_;
	CMsgGCStorePurchaseCancel();
	virtual ~CMsgGCStorePurchaseCancel();
	CMsgGCStorePurchaseCancel(const CMsgGCStorePurchaseCancel &);
	CMsgGCStorePurchaseCancel & operator=(const CMsgGCStorePurchaseCancel &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCStorePurchaseCancel & default_instance();
	void Swap(CMsgGCStorePurchaseCancel *);
	virtual CMsgGCStorePurchaseCancel * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCStorePurchaseCancel &);
	void MergeFrom(const CMsgGCStorePurchaseCancel &);
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
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:5544
class CMsgGCStorePurchaseCancelResponse : public Message {
public:

	static const int kResultFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 result_;  // +0x18

	static CMsgGCStorePurchaseCancelResponse * default_instance_;
	CMsgGCStorePurchaseCancelResponse();
	virtual ~CMsgGCStorePurchaseCancelResponse();
	CMsgGCStorePurchaseCancelResponse(const CMsgGCStorePurchaseCancelResponse &);
	CMsgGCStorePurchaseCancelResponse & operator=(const CMsgGCStorePurchaseCancelResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCStorePurchaseCancelResponse & default_instance();
	void Swap(CMsgGCStorePurchaseCancelResponse *);
	virtual CMsgGCStorePurchaseCancelResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCStorePurchaseCancelResponse &);
	void MergeFrom(const CMsgGCStorePurchaseCancelResponse &);
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:5623
class CMsgGCStorePurchaseFinalize : public Message {
public:

	static const int kTxnIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 txn_id_;  // +0x18

	static CMsgGCStorePurchaseFinalize * default_instance_;
	CMsgGCStorePurchaseFinalize();
	virtual ~CMsgGCStorePurchaseFinalize();
	CMsgGCStorePurchaseFinalize(const CMsgGCStorePurchaseFinalize &);
	CMsgGCStorePurchaseFinalize & operator=(const CMsgGCStorePurchaseFinalize &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCStorePurchaseFinalize & default_instance();
	void Swap(CMsgGCStorePurchaseFinalize *);
	virtual CMsgGCStorePurchaseFinalize * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCStorePurchaseFinalize &);
	void MergeFrom(const CMsgGCStorePurchaseFinalize &);
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
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:5702
class CMsgGCStorePurchaseFinalizeResponse : public Message {
public:

	static const int kResultFieldNumber = 1;
	static const int kItemIdsFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 result_;  // +0x28

	static CMsgGCStorePurchaseFinalizeResponse * default_instance_;
	CMsgGCStorePurchaseFinalizeResponse();
	virtual ~CMsgGCStorePurchaseFinalizeResponse();
	CMsgGCStorePurchaseFinalizeResponse(const CMsgGCStorePurchaseFinalizeResponse &);
	CMsgGCStorePurchaseFinalizeResponse & operator=(const CMsgGCStorePurchaseFinalizeResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCStorePurchaseFinalizeResponse & default_instance();
	void Swap(CMsgGCStorePurchaseFinalizeResponse *);
	virtual CMsgGCStorePurchaseFinalizeResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCStorePurchaseFinalizeResponse &);
	void MergeFrom(const CMsgGCStorePurchaseFinalizeResponse &);
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:5794
class CMsgGCBannedWordListRequest : public Message {
public:

	static const int kBanListGroupIdFieldNumber = 1;
	static const int kWordIdFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 ban_list_group_id_;  // +0x18
	uint32 word_id_;  // +0x1c

	static CMsgGCBannedWordListRequest * default_instance_;
	CMsgGCBannedWordListRequest();
	virtual ~CMsgGCBannedWordListRequest();
	CMsgGCBannedWordListRequest(const CMsgGCBannedWordListRequest &);
	CMsgGCBannedWordListRequest & operator=(const CMsgGCBannedWordListRequest &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCBannedWordListRequest & default_instance();
	void Swap(CMsgGCBannedWordListRequest *);
	virtual CMsgGCBannedWordListRequest * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCBannedWordListRequest &);
	void MergeFrom(const CMsgGCBannedWordListRequest &);
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
	bool has_ban_list_group_id();
	void clear_ban_list_group_id();
	uint32 ban_list_group_id();
	void set_ban_list_group_id(uint32);
	bool has_word_id();
	void clear_word_id();
	uint32 word_id();
	void set_word_id(uint32);
	void set_has_ban_list_group_id();
	void clear_has_ban_list_group_id();
	void set_has_word_id();
	void clear_has_word_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:5883
class CMsgGCBannedWord : public Message {
public:

	static const int kWordIdFieldNumber = 1;
	static const int kWordTypeFieldNumber = 2;
	static const int kWordFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 word_id_;  // +0x18
	int word_type_;  // +0x1c
	string * word_;  // +0x20

	static CMsgGCBannedWord * default_instance_;
	CMsgGCBannedWord();
	virtual ~CMsgGCBannedWord();
	CMsgGCBannedWord(const CMsgGCBannedWord &);
	CMsgGCBannedWord & operator=(const CMsgGCBannedWord &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCBannedWord & default_instance();
	void Swap(CMsgGCBannedWord *);
	virtual CMsgGCBannedWord * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCBannedWord &);
	void MergeFrom(const CMsgGCBannedWord &);
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
	bool has_word_id();
	void clear_word_id();
	uint32 word_id();
	void set_word_id(uint32);
	bool has_word_type();
	void clear_word_type();
	GC_BannedWordType word_type();
	void set_word_type(GC_BannedWordType);
	bool has_word();
	void clear_word();
	const string & word();
	void set_word(const string &);
	void set_word(const char *);
	void set_word(const char *, size_t);
	string * mutable_word();
	string * release_word();
	void set_allocated_word(string *);
	void set_has_word_id();
	void clear_has_word_id();
	void set_has_word_type();
	void clear_has_word_type();
	void set_has_word();
	void clear_has_word();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:5987
class CMsgGCBannedWordListResponse : public Message {
public:

	static const int kBanListGroupIdFieldNumber = 1;
	static const int kWordListFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 ban_list_group_id_;  // +0x30

	static CMsgGCBannedWordListResponse * default_instance_;
	CMsgGCBannedWordListResponse();
	virtual ~CMsgGCBannedWordListResponse();
	CMsgGCBannedWordListResponse(const CMsgGCBannedWordListResponse &);
	CMsgGCBannedWordListResponse & operator=(const CMsgGCBannedWordListResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCBannedWordListResponse & default_instance();
	void Swap(CMsgGCBannedWordListResponse *);
	virtual CMsgGCBannedWordListResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCBannedWordListResponse &);
	void MergeFrom(const CMsgGCBannedWordListResponse &);
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
	bool has_ban_list_group_id();
	void clear_ban_list_group_id();
	uint32 ban_list_group_id();
	void set_ban_list_group_id(uint32);
	int word_list_size();
	void clear_word_list();
	const CMsgGCBannedWord & word_list(int);
	CMsgGCBannedWord * mutable_word_list(int);
	CMsgGCBannedWord * add_word_list();
	const RepeatedPtrField<CMsgGCBannedWord> & word_list();
	RepeatedPtrField<CMsgGCBannedWord> * mutable_word_list();
	void set_has_ban_list_group_id();
	void clear_has_ban_list_group_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:6079
class CMsgGCToGCBannedWordListBroadcast : public Message {
public:

	static const int kBroadcastFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgGCToGCBannedWordListBroadcast * default_instance_;
	CMsgGCToGCBannedWordListBroadcast();
	virtual ~CMsgGCToGCBannedWordListBroadcast();
	CMsgGCToGCBannedWordListBroadcast(const CMsgGCToGCBannedWordListBroadcast &);
	CMsgGCToGCBannedWordListBroadcast & operator=(const CMsgGCToGCBannedWordListBroadcast &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCBannedWordListBroadcast & default_instance();
	void Swap(CMsgGCToGCBannedWordListBroadcast *);
	virtual CMsgGCToGCBannedWordListBroadcast * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCBannedWordListBroadcast &);
	void MergeFrom(const CMsgGCToGCBannedWordListBroadcast &);
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
	bool has_broadcast();
	void clear_broadcast();
	const CMsgGCBannedWordListResponse & broadcast();
	CMsgGCBannedWordListResponse * mutable_broadcast();
	CMsgGCBannedWordListResponse * release_broadcast();
	void set_allocated_broadcast(CMsgGCBannedWordListResponse *);
	void set_has_broadcast();
	void clear_has_broadcast();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:6160
class CMsgGCToGCBannedWordListUpdated : public Message {
public:

	static const int kGroupIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 group_id_;  // +0x18

	static CMsgGCToGCBannedWordListUpdated * default_instance_;
	CMsgGCToGCBannedWordListUpdated();
	virtual ~CMsgGCToGCBannedWordListUpdated();
	CMsgGCToGCBannedWordListUpdated(const CMsgGCToGCBannedWordListUpdated &);
	CMsgGCToGCBannedWordListUpdated & operator=(const CMsgGCToGCBannedWordListUpdated &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCBannedWordListUpdated & default_instance();
	void Swap(CMsgGCToGCBannedWordListUpdated *);
	virtual CMsgGCToGCBannedWordListUpdated * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCBannedWordListUpdated &);
	void MergeFrom(const CMsgGCToGCBannedWordListUpdated &);
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
	bool has_group_id();
	void clear_group_id();
	uint32 group_id();
	void set_group_id(uint32);
	void set_has_group_id();
	void clear_has_group_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:6239
class CMsgGCToGCDirtySDOCache : public Message {
public:

	static const int kSdoTypeFieldNumber = 1;
	static const int kKeyUint64FieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 key_uint64_;  // +0x18
	uint32 sdo_type_;  // +0x20

	static CMsgGCToGCDirtySDOCache * default_instance_;
	CMsgGCToGCDirtySDOCache();
	virtual ~CMsgGCToGCDirtySDOCache();
	CMsgGCToGCDirtySDOCache(const CMsgGCToGCDirtySDOCache &);
	CMsgGCToGCDirtySDOCache & operator=(const CMsgGCToGCDirtySDOCache &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCDirtySDOCache & default_instance();
	void Swap(CMsgGCToGCDirtySDOCache *);
	virtual CMsgGCToGCDirtySDOCache * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCDirtySDOCache &);
	void MergeFrom(const CMsgGCToGCDirtySDOCache &);
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
	bool has_sdo_type();
	void clear_sdo_type();
	uint32 sdo_type();
	void set_sdo_type(uint32);
	bool has_key_uint64();
	void clear_key_uint64();
	uint64 key_uint64();
	void set_key_uint64(uint64);
	void set_has_sdo_type();
	void clear_has_sdo_type();
	void set_has_key_uint64();
	void clear_has_key_uint64();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:6328
class CMsgGCToGCDirtyMultipleSDOCache : public Message {
public:

	static const int kSdoTypeFieldNumber = 1;
	static const int kKeyUint64FieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 sdo_type_;  // +0x28

	static CMsgGCToGCDirtyMultipleSDOCache * default_instance_;
	CMsgGCToGCDirtyMultipleSDOCache();
	virtual ~CMsgGCToGCDirtyMultipleSDOCache();
	CMsgGCToGCDirtyMultipleSDOCache(const CMsgGCToGCDirtyMultipleSDOCache &);
	CMsgGCToGCDirtyMultipleSDOCache & operator=(const CMsgGCToGCDirtyMultipleSDOCache &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCDirtyMultipleSDOCache & default_instance();
	void Swap(CMsgGCToGCDirtyMultipleSDOCache *);
	virtual CMsgGCToGCDirtyMultipleSDOCache * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCDirtyMultipleSDOCache &);
	void MergeFrom(const CMsgGCToGCDirtyMultipleSDOCache &);
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
	bool has_sdo_type();
	void clear_sdo_type();
	uint32 sdo_type();
	void set_sdo_type(uint32);
	int key_uint64_size();
	void clear_key_uint64();
	uint64 key_uint64(int);
	void set_key_uint64(int, uint64);
	void add_key_uint64(uint64);
	const RepeatedField<long unsigned int> & key_uint64();
	RepeatedField<long unsigned int> * mutable_key_uint64();
	void set_has_sdo_type();
	void clear_has_sdo_type();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:6420
class CMsgGCToGCApplyLocalizationDiff : public Message {
public:

	static const int kLanguageFieldNumber = 1;
	static const int kPackedDiffFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * packed_diff_;  // +0x18
	uint32 language_;  // +0x20

	static CMsgGCToGCApplyLocalizationDiff * default_instance_;
	CMsgGCToGCApplyLocalizationDiff();
	virtual ~CMsgGCToGCApplyLocalizationDiff();
	CMsgGCToGCApplyLocalizationDiff(const CMsgGCToGCApplyLocalizationDiff &);
	CMsgGCToGCApplyLocalizationDiff & operator=(const CMsgGCToGCApplyLocalizationDiff &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCApplyLocalizationDiff & default_instance();
	void Swap(CMsgGCToGCApplyLocalizationDiff *);
	virtual CMsgGCToGCApplyLocalizationDiff * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCApplyLocalizationDiff &);
	void MergeFrom(const CMsgGCToGCApplyLocalizationDiff &);
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
	bool has_language();
	void clear_language();
	uint32 language();
	void set_language(uint32);
	bool has_packed_diff();
	void clear_packed_diff();
	const string & packed_diff();
	void set_packed_diff(const string &);
	void set_packed_diff(const char *);
	void set_packed_diff(const char *, size_t);
	string * mutable_packed_diff();
	string * release_packed_diff();
	void set_allocated_packed_diff(string *);
	void set_has_language();
	void clear_has_language();
	void set_has_packed_diff();
	void clear_has_packed_diff();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:6514
class CMsgGCToGCApplyLocalizationDiffResponse : public Message {
public:

	static const int kSuccessFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool success_;  // +0x18

	static CMsgGCToGCApplyLocalizationDiffResponse * default_instance_;
	CMsgGCToGCApplyLocalizationDiffResponse();
	virtual ~CMsgGCToGCApplyLocalizationDiffResponse();
	CMsgGCToGCApplyLocalizationDiffResponse(const CMsgGCToGCApplyLocalizationDiffResponse &);
	CMsgGCToGCApplyLocalizationDiffResponse & operator=(const CMsgGCToGCApplyLocalizationDiffResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCApplyLocalizationDiffResponse & default_instance();
	void Swap(CMsgGCToGCApplyLocalizationDiffResponse *);
	virtual CMsgGCToGCApplyLocalizationDiffResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCApplyLocalizationDiffResponse &);
	void MergeFrom(const CMsgGCToGCApplyLocalizationDiffResponse &);
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:6593
class CMsgGCCollectItem : public Message {
public:

	static const int kCollectionItemIdFieldNumber = 1;
	static const int kSubjectItemIdFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 collection_item_id_;  // +0x18
	uint64 subject_item_id_;  // +0x20

	static CMsgGCCollectItem * default_instance_;
	CMsgGCCollectItem();
	virtual ~CMsgGCCollectItem();
	CMsgGCCollectItem(const CMsgGCCollectItem &);
	CMsgGCCollectItem & operator=(const CMsgGCCollectItem &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCCollectItem & default_instance();
	void Swap(CMsgGCCollectItem *);
	virtual CMsgGCCollectItem * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCCollectItem &);
	void MergeFrom(const CMsgGCCollectItem &);
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
	bool has_collection_item_id();
	void clear_collection_item_id();
	uint64 collection_item_id();
	void set_collection_item_id(uint64);
	bool has_subject_item_id();
	void clear_subject_item_id();
	uint64 subject_item_id();
	void set_subject_item_id(uint64);
	void set_has_collection_item_id();
	void clear_has_collection_item_id();
	void set_has_subject_item_id();
	void clear_has_subject_item_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:6682
class CMsgSDONoMemcached : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgSDONoMemcached * default_instance_;
	CMsgSDONoMemcached();
	virtual ~CMsgSDONoMemcached();
	CMsgSDONoMemcached(const CMsgSDONoMemcached &);
	CMsgSDONoMemcached & operator=(const CMsgSDONoMemcached &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSDONoMemcached & default_instance();
	void Swap(CMsgSDONoMemcached *);
	virtual CMsgSDONoMemcached * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSDONoMemcached &);
	void MergeFrom(const CMsgSDONoMemcached &);
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:6751
class CMsgGCToGCUpdateSQLKeyValue : public Message {
public:

	static const int kKeyNameFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * key_name_;  // +0x18

	static CMsgGCToGCUpdateSQLKeyValue * default_instance_;
	CMsgGCToGCUpdateSQLKeyValue();
	virtual ~CMsgGCToGCUpdateSQLKeyValue();
	CMsgGCToGCUpdateSQLKeyValue(const CMsgGCToGCUpdateSQLKeyValue &);
	CMsgGCToGCUpdateSQLKeyValue & operator=(const CMsgGCToGCUpdateSQLKeyValue &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCUpdateSQLKeyValue & default_instance();
	void Swap(CMsgGCToGCUpdateSQLKeyValue *);
	virtual CMsgGCToGCUpdateSQLKeyValue * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCUpdateSQLKeyValue &);
	void MergeFrom(const CMsgGCToGCUpdateSQLKeyValue &);
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
	bool has_key_name();
	void clear_key_name();
	const string & key_name();
	void set_key_name(const string &);
	void set_key_name(const char *);
	void set_key_name(const char *, size_t);
	string * mutable_key_name();
	string * release_key_name();
	void set_allocated_key_name(string *);
	void set_has_key_name();
	void clear_has_key_name();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:6835
class CMsgGCServerVersionUpdated : public Message {
public:

	static const int kServerVersionFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 server_version_;  // +0x18

	static CMsgGCServerVersionUpdated * default_instance_;
	CMsgGCServerVersionUpdated();
	virtual ~CMsgGCServerVersionUpdated();
	CMsgGCServerVersionUpdated(const CMsgGCServerVersionUpdated &);
	CMsgGCServerVersionUpdated & operator=(const CMsgGCServerVersionUpdated &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCServerVersionUpdated & default_instance();
	void Swap(CMsgGCServerVersionUpdated *);
	virtual CMsgGCServerVersionUpdated * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCServerVersionUpdated &);
	void MergeFrom(const CMsgGCServerVersionUpdated &);
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
	bool has_server_version();
	void clear_server_version();
	uint32 server_version();
	void set_server_version(uint32);
	void set_has_server_version();
	void clear_has_server_version();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:6914
class CMsgGCClientVersionUpdated : public Message {
public:

	static const int kClientVersionFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 client_version_;  // +0x18

	static CMsgGCClientVersionUpdated * default_instance_;
	CMsgGCClientVersionUpdated();
	virtual ~CMsgGCClientVersionUpdated();
	CMsgGCClientVersionUpdated(const CMsgGCClientVersionUpdated &);
	CMsgGCClientVersionUpdated & operator=(const CMsgGCClientVersionUpdated &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCClientVersionUpdated & default_instance();
	void Swap(CMsgGCClientVersionUpdated *);
	virtual CMsgGCClientVersionUpdated * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCClientVersionUpdated &);
	void MergeFrom(const CMsgGCClientVersionUpdated &);
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
	bool has_client_version();
	void clear_client_version();
	uint32 client_version();
	void set_client_version(uint32);
	void set_has_client_version();
	void clear_has_client_version();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:6993
class CMsgGCToGCWebAPIAccountChanged : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgGCToGCWebAPIAccountChanged * default_instance_;
	CMsgGCToGCWebAPIAccountChanged();
	virtual ~CMsgGCToGCWebAPIAccountChanged();
	CMsgGCToGCWebAPIAccountChanged(const CMsgGCToGCWebAPIAccountChanged &);
	CMsgGCToGCWebAPIAccountChanged & operator=(const CMsgGCToGCWebAPIAccountChanged &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCWebAPIAccountChanged & default_instance();
	void Swap(CMsgGCToGCWebAPIAccountChanged *);
	virtual CMsgGCToGCWebAPIAccountChanged * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCWebAPIAccountChanged &);
	void MergeFrom(const CMsgGCToGCWebAPIAccountChanged &);
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:7062
class CMsgRecipeComponent : public Message {
public:

	static const int kSubjectItemIdFieldNumber = 1;
	static const int kAttributeIndexFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 subject_item_id_;  // +0x18
	uint64 attribute_index_;  // +0x20

	static CMsgRecipeComponent * default_instance_;
	CMsgRecipeComponent();
	virtual ~CMsgRecipeComponent();
	CMsgRecipeComponent(const CMsgRecipeComponent &);
	CMsgRecipeComponent & operator=(const CMsgRecipeComponent &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgRecipeComponent & default_instance();
	void Swap(CMsgRecipeComponent *);
	virtual CMsgRecipeComponent * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgRecipeComponent &);
	void MergeFrom(const CMsgRecipeComponent &);
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
	bool has_attribute_index();
	void clear_attribute_index();
	uint64 attribute_index();
	void set_attribute_index(uint64);
	void set_has_subject_item_id();
	void clear_has_subject_item_id();
	void set_has_attribute_index();
	void clear_has_attribute_index();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:7151
class CMsgFulfillDynamicRecipeComponent : public Message {
public:

	static const int kToolItemIdFieldNumber = 1;
	static const int kConsumptionComponentsFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 tool_item_id_;  // +0x18

	static CMsgFulfillDynamicRecipeComponent * default_instance_;
	CMsgFulfillDynamicRecipeComponent();
	virtual ~CMsgFulfillDynamicRecipeComponent();
	CMsgFulfillDynamicRecipeComponent(const CMsgFulfillDynamicRecipeComponent &);
	CMsgFulfillDynamicRecipeComponent & operator=(const CMsgFulfillDynamicRecipeComponent &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgFulfillDynamicRecipeComponent & default_instance();
	void Swap(CMsgFulfillDynamicRecipeComponent *);
	virtual CMsgFulfillDynamicRecipeComponent * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgFulfillDynamicRecipeComponent &);
	void MergeFrom(const CMsgFulfillDynamicRecipeComponent &);
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
	bool has_tool_item_id();
	void clear_tool_item_id();
	uint64 tool_item_id();
	void set_tool_item_id(uint64);
	int consumption_components_size();
	void clear_consumption_components();
	const CMsgRecipeComponent & consumption_components(int);
	CMsgRecipeComponent * mutable_consumption_components(int);
	CMsgRecipeComponent * add_consumption_components();
	const RepeatedPtrField<CMsgRecipeComponent> & consumption_components();
	RepeatedPtrField<CMsgRecipeComponent> * mutable_consumption_components();
	void set_has_tool_item_id();
	void clear_has_tool_item_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:7243
class CMsgGCClientMarketDataRequest : public Message {
public:

	static const int kUserCurrencyFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 user_currency_;  // +0x18

	static CMsgGCClientMarketDataRequest * default_instance_;
	CMsgGCClientMarketDataRequest();
	virtual ~CMsgGCClientMarketDataRequest();
	CMsgGCClientMarketDataRequest(const CMsgGCClientMarketDataRequest &);
	CMsgGCClientMarketDataRequest & operator=(const CMsgGCClientMarketDataRequest &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCClientMarketDataRequest & default_instance();
	void Swap(CMsgGCClientMarketDataRequest *);
	virtual CMsgGCClientMarketDataRequest * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCClientMarketDataRequest &);
	void MergeFrom(const CMsgGCClientMarketDataRequest &);
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
	bool has_user_currency();
	void clear_user_currency();
	uint32 user_currency();
	void set_user_currency(uint32);
	void set_has_user_currency();
	void clear_has_user_currency();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:7322
class CMsgGCClientMarketDataEntry : public Message {
public:

	static const int kItemDefIndexFieldNumber = 1;
	static const int kItemQualityFieldNumber = 2;
	static const int kItemSellListingsFieldNumber = 3;
	static const int kPriceInLocalCurrencyFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 item_def_index_;  // +0x18
	uint32 item_quality_;  // +0x1c
	uint32 item_sell_listings_;  // +0x20
	uint32 price_in_local_currency_;  // +0x24

	static CMsgGCClientMarketDataEntry * default_instance_;
	CMsgGCClientMarketDataEntry();
	virtual ~CMsgGCClientMarketDataEntry();
	CMsgGCClientMarketDataEntry(const CMsgGCClientMarketDataEntry &);
	CMsgGCClientMarketDataEntry & operator=(const CMsgGCClientMarketDataEntry &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCClientMarketDataEntry & default_instance();
	void Swap(CMsgGCClientMarketDataEntry *);
	virtual CMsgGCClientMarketDataEntry * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCClientMarketDataEntry &);
	void MergeFrom(const CMsgGCClientMarketDataEntry &);
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
	bool has_item_quality();
	void clear_item_quality();
	uint32 item_quality();
	void set_item_quality(uint32);
	bool has_item_sell_listings();
	void clear_item_sell_listings();
	uint32 item_sell_listings();
	void set_item_sell_listings(uint32);
	bool has_price_in_local_currency();
	void clear_price_in_local_currency();
	uint32 price_in_local_currency();
	void set_price_in_local_currency(uint32);
	void set_has_item_def_index();
	void clear_has_item_def_index();
	void set_has_item_quality();
	void clear_has_item_quality();
	void set_has_item_sell_listings();
	void clear_has_item_sell_listings();
	void set_has_price_in_local_currency();
	void clear_has_price_in_local_currency();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:7431
class CMsgGCClientMarketData : public Message {
public:

	static const int kEntriesFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgGCClientMarketData * default_instance_;
	CMsgGCClientMarketData();
	virtual ~CMsgGCClientMarketData();
	CMsgGCClientMarketData(const CMsgGCClientMarketData &);
	CMsgGCClientMarketData & operator=(const CMsgGCClientMarketData &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCClientMarketData & default_instance();
	void Swap(CMsgGCClientMarketData *);
	virtual CMsgGCClientMarketData * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCClientMarketData &);
	void MergeFrom(const CMsgGCClientMarketData &);
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
	int entries_size();
	void clear_entries();
	const CMsgGCClientMarketDataEntry & entries(int);
	CMsgGCClientMarketDataEntry * mutable_entries(int);
	CMsgGCClientMarketDataEntry * add_entries();
	const RepeatedPtrField<CMsgGCClientMarketDataEntry> & entries();
	RepeatedPtrField<CMsgGCClientMarketDataEntry> * mutable_entries();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:7513
class CMsgExtractGems : public Message {
public:

	static const int kToolItemIdFieldNumber = 1;
	static const int kItemItemIdFieldNumber = 2;
	static const int kItemSocketIdFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 tool_item_id_;  // +0x18
	uint64 item_item_id_;  // +0x20
	uint32 item_socket_id_;  // +0x28

	static CMsgExtractGems * default_instance_;
	CMsgExtractGems();
	virtual ~CMsgExtractGems();
	CMsgExtractGems(const CMsgExtractGems &);
	CMsgExtractGems & operator=(const CMsgExtractGems &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgExtractGems & default_instance();
	void Swap(CMsgExtractGems *);
	virtual CMsgExtractGems * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgExtractGems &);
	void MergeFrom(const CMsgExtractGems &);
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
	bool has_tool_item_id();
	void clear_tool_item_id();
	uint64 tool_item_id();
	void set_tool_item_id(uint64);
	bool has_item_item_id();
	void clear_item_item_id();
	uint64 item_item_id();
	void set_item_item_id(uint64);
	bool has_item_socket_id();
	void clear_item_socket_id();
	uint32 item_socket_id();
	void set_item_socket_id(uint32);
	void set_has_tool_item_id();
	void clear_has_tool_item_id();
	void set_has_item_item_id();
	void clear_has_item_item_id();
	void set_has_item_socket_id();
	void clear_has_item_socket_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:7612
class CMsgExtractGemsResponse : public Message {
public:

	static const CMsgExtractGemsResponse_EExtractGems k_ExtractGems_Succeeded;
	static const CMsgExtractGemsResponse_EExtractGems k_ExtractGems_Failed_ToolIsInvalid = 1;
	static const CMsgExtractGemsResponse_EExtractGems k_ExtractGems_Failed_ItemIsInvalid = 2;
	static const CMsgExtractGemsResponse_EExtractGems k_ExtractGems_Failed_ToolCannotRemoveGem = 3;
	static const CMsgExtractGemsResponse_EExtractGems k_ExtractGems_Failed_FailedToRemoveGem = 4;
	static const CMsgExtractGemsResponse_EExtractGems EExtractGems_MIN;
	static const CMsgExtractGemsResponse_EExtractGems EExtractGems_MAX = 4;
	static const int EExtractGems_ARRAYSIZE = 5;
	static const int kItemIdFieldNumber = 1;
	static const int kResponseFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 item_id_;  // +0x18
	int response_;  // +0x20

	static CMsgExtractGemsResponse * default_instance_;
	typedef CMsgExtractGemsResponse_EExtractGems EExtractGems;
	CMsgExtractGemsResponse();
	virtual ~CMsgExtractGemsResponse();
	CMsgExtractGemsResponse(const CMsgExtractGemsResponse &);
	CMsgExtractGemsResponse & operator=(const CMsgExtractGemsResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgExtractGemsResponse & default_instance();
	void Swap(CMsgExtractGemsResponse *);
	virtual CMsgExtractGemsResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgExtractGemsResponse &);
	void MergeFrom(const CMsgExtractGemsResponse &);
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
	bool EExtractGems_IsValid(int);
	const EnumDescriptor * EExtractGems_descriptor();
	const string & EExtractGems_Name(EExtractGems);
	bool EExtractGems_Parse(const string &, EExtractGems *);
	bool has_item_id();
	void clear_item_id();
	uint64 item_id();
	void set_item_id(uint64);
	bool has_response();
	void clear_response();
	CMsgExtractGemsResponse_EExtractGems response();
	void set_response(CMsgExtractGemsResponse_EExtractGems);
	void set_has_item_id();
	void clear_has_item_id();
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
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:7728
class CMsgAddSocket : public Message {
public:

	static const int kToolItemIdFieldNumber = 1;
	static const int kItemItemIdFieldNumber = 2;
	static const int kUnusualFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 tool_item_id_;  // +0x18
	uint64 item_item_id_;  // +0x20
	bool unusual_;  // +0x28

	static CMsgAddSocket * default_instance_;
	CMsgAddSocket();
	virtual ~CMsgAddSocket();
	CMsgAddSocket(const CMsgAddSocket &);
	CMsgAddSocket & operator=(const CMsgAddSocket &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgAddSocket & default_instance();
	void Swap(CMsgAddSocket *);
	virtual CMsgAddSocket * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgAddSocket &);
	void MergeFrom(const CMsgAddSocket &);
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
	bool has_tool_item_id();
	void clear_tool_item_id();
	uint64 tool_item_id();
	void set_tool_item_id(uint64);
	bool has_item_item_id();
	void clear_item_item_id();
	uint64 item_item_id();
	void set_item_item_id(uint64);
	bool has_unusual();
	void clear_unusual();
	bool unusual();
	void set_unusual(bool);
	void set_has_tool_item_id();
	void clear_has_tool_item_id();
	void set_has_item_item_id();
	void clear_has_item_item_id();
	void set_has_unusual();
	void clear_has_unusual();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:7827
class CMsgAddSocketResponse : public Message {
public:

	static const CMsgAddSocketResponse_EAddSocket k_AddSocket_Succeeded;
	static const CMsgAddSocketResponse_EAddSocket k_AddSocket_Failed_ToolIsInvalid = 1;
	static const CMsgAddSocketResponse_EAddSocket k_AddSocket_Failed_ItemCannotBeSocketed = 2;
	static const CMsgAddSocketResponse_EAddSocket k_AddSocket_Failed_FailedToAddSocket = 3;
	static const CMsgAddSocketResponse_EAddSocket EAddSocket_MIN;
	static const CMsgAddSocketResponse_EAddSocket EAddSocket_MAX = 3;
	static const int EAddSocket_ARRAYSIZE = 4;
	static const int kItemIdFieldNumber = 1;
	static const int kUpdatedSocketIndexFieldNumber = 2;
	static const int kResponseFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 item_id_;  // +0x18
	int response_;  // +0x30

	static CMsgAddSocketResponse * default_instance_;
	typedef CMsgAddSocketResponse_EAddSocket EAddSocket;
	CMsgAddSocketResponse();
	virtual ~CMsgAddSocketResponse();
	CMsgAddSocketResponse(const CMsgAddSocketResponse &);
	CMsgAddSocketResponse & operator=(const CMsgAddSocketResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgAddSocketResponse & default_instance();
	void Swap(CMsgAddSocketResponse *);
	virtual CMsgAddSocketResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgAddSocketResponse &);
	void MergeFrom(const CMsgAddSocketResponse &);
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
	bool EAddSocket_IsValid(int);
	const EnumDescriptor * EAddSocket_descriptor();
	const string & EAddSocket_Name(EAddSocket);
	bool EAddSocket_Parse(const string &, EAddSocket *);
	bool has_item_id();
	void clear_item_id();
	uint64 item_id();
	void set_item_id(uint64);
	int updated_socket_index_size();
	void clear_updated_socket_index();
	uint32 updated_socket_index(int);
	void set_updated_socket_index(int, uint32);
	void add_updated_socket_index(uint32);
	const RepeatedField<unsigned int> & updated_socket_index();
	RepeatedField<unsigned int> * mutable_updated_socket_index();
	bool has_response();
	void clear_response();
	CMsgAddSocketResponse_EAddSocket response();
	void set_response(CMsgAddSocketResponse_EAddSocket);
	void set_has_item_id();
	void clear_has_item_id();
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
	// sizeof = 56
};

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:7955
class CMsgAddItemToSocketData : public Message {
public:

	static const int kGemItemIdFieldNumber = 1;
	static const int kSocketIndexFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 gem_item_id_;  // +0x18
	uint32 socket_index_;  // +0x20

	static CMsgAddItemToSocketData * default_instance_;
	CMsgAddItemToSocketData();
	virtual ~CMsgAddItemToSocketData();
	CMsgAddItemToSocketData(const CMsgAddItemToSocketData &);
	CMsgAddItemToSocketData & operator=(const CMsgAddItemToSocketData &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgAddItemToSocketData & default_instance();
	void Swap(CMsgAddItemToSocketData *);
	virtual CMsgAddItemToSocketData * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgAddItemToSocketData &);
	void MergeFrom(const CMsgAddItemToSocketData &);
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
	bool has_gem_item_id();
	void clear_gem_item_id();
	uint64 gem_item_id();
	void set_gem_item_id(uint64);
	bool has_socket_index();
	void clear_socket_index();
	uint32 socket_index();
	void set_socket_index(uint32);
	void set_has_gem_item_id();
	void clear_has_gem_item_id();
	void set_has_socket_index();
	void clear_has_socket_index();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:8044
class CMsgAddItemToSocket : public Message {
public:

	static const int kItemItemIdFieldNumber = 1;
	static const int kGemsToSocketFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 item_item_id_;  // +0x18

	static CMsgAddItemToSocket * default_instance_;
	CMsgAddItemToSocket();
	virtual ~CMsgAddItemToSocket();
	CMsgAddItemToSocket(const CMsgAddItemToSocket &);
	CMsgAddItemToSocket & operator=(const CMsgAddItemToSocket &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgAddItemToSocket & default_instance();
	void Swap(CMsgAddItemToSocket *);
	virtual CMsgAddItemToSocket * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgAddItemToSocket &);
	void MergeFrom(const CMsgAddItemToSocket &);
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
	bool has_item_item_id();
	void clear_item_item_id();
	uint64 item_item_id();
	void set_item_item_id(uint64);
	int gems_to_socket_size();
	void clear_gems_to_socket();
	const CMsgAddItemToSocketData & gems_to_socket(int);
	CMsgAddItemToSocketData * mutable_gems_to_socket(int);
	CMsgAddItemToSocketData * add_gems_to_socket();
	const RepeatedPtrField<CMsgAddItemToSocketData> & gems_to_socket();
	RepeatedPtrField<CMsgAddItemToSocketData> * mutable_gems_to_socket();
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
	// sizeof = 56
};

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:8136
class CMsgAddItemToSocketResponse : public Message {
public:

	static const CMsgAddItemToSocketResponse_EAddGem k_AddGem_Succeeded;
	static const CMsgAddItemToSocketResponse_EAddGem k_AddGem_Failed_GemIsInvalid = 1;
	static const CMsgAddItemToSocketResponse_EAddGem k_AddGem_Failed_ItemIsInvalid = 2;
	static const CMsgAddItemToSocketResponse_EAddGem k_AddGem_Failed_FailedToAddGem = 3;
	static const CMsgAddItemToSocketResponse_EAddGem k_AddGem_Failed_InvalidGemTypeForSocket = 4;
	static const CMsgAddItemToSocketResponse_EAddGem k_AddGem_Failed_InvalidGemTypeForHero = 5;
	static const CMsgAddItemToSocketResponse_EAddGem k_AddGem_Failed_InvalidGemTypeForSlot = 6;
	static const CMsgAddItemToSocketResponse_EAddGem k_AddGem_Failed_SocketContainsUnremovableGem = 7;
	static const CMsgAddItemToSocketResponse_EAddGem EAddGem_MIN;
	static const CMsgAddItemToSocketResponse_EAddGem EAddGem_MAX = 7;
	static const int EAddGem_ARRAYSIZE = 8;
	static const int kItemItemIdFieldNumber = 1;
	static const int kUpdatedSocketIndexFieldNumber = 2;
	static const int kResponseFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 item_item_id_;  // +0x18
	int response_;  // +0x30

	static CMsgAddItemToSocketResponse * default_instance_;
	typedef CMsgAddItemToSocketResponse_EAddGem EAddGem;
	CMsgAddItemToSocketResponse();
	virtual ~CMsgAddItemToSocketResponse();
	CMsgAddItemToSocketResponse(const CMsgAddItemToSocketResponse &);
	CMsgAddItemToSocketResponse & operator=(const CMsgAddItemToSocketResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgAddItemToSocketResponse & default_instance();
	void Swap(CMsgAddItemToSocketResponse *);
	virtual CMsgAddItemToSocketResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgAddItemToSocketResponse &);
	void MergeFrom(const CMsgAddItemToSocketResponse &);
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
	bool EAddGem_IsValid(int);
	const EnumDescriptor * EAddGem_descriptor();
	const string & EAddGem_Name(EAddGem);
	bool EAddGem_Parse(const string &, EAddGem *);
	bool has_item_item_id();
	void clear_item_item_id();
	uint64 item_item_id();
	void set_item_item_id(uint64);
	int updated_socket_index_size();
	void clear_updated_socket_index();
	uint32 updated_socket_index(int);
	void set_updated_socket_index(int, uint32);
	void add_updated_socket_index(uint32);
	const RepeatedField<unsigned int> & updated_socket_index();
	RepeatedField<unsigned int> * mutable_updated_socket_index();
	bool has_response();
	void clear_response();
	CMsgAddItemToSocketResponse_EAddGem response();
	void set_response(CMsgAddItemToSocketResponse_EAddGem);
	void set_has_item_item_id();
	void clear_has_item_item_id();
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
	// sizeof = 56
};

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:8268
class CMsgResetStrangeGemCount : public Message {
public:

	static const int kItemItemIdFieldNumber = 1;
	static const int kSocketIndexFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 item_item_id_;  // +0x18
	uint32 socket_index_;  // +0x20

	static CMsgResetStrangeGemCount * default_instance_;
	CMsgResetStrangeGemCount();
	virtual ~CMsgResetStrangeGemCount();
	CMsgResetStrangeGemCount(const CMsgResetStrangeGemCount &);
	CMsgResetStrangeGemCount & operator=(const CMsgResetStrangeGemCount &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgResetStrangeGemCount & default_instance();
	void Swap(CMsgResetStrangeGemCount *);
	virtual CMsgResetStrangeGemCount * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgResetStrangeGemCount &);
	void MergeFrom(const CMsgResetStrangeGemCount &);
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
	bool has_item_item_id();
	void clear_item_item_id();
	uint64 item_item_id();
	void set_item_item_id(uint64);
	bool has_socket_index();
	void clear_socket_index();
	uint32 socket_index();
	void set_socket_index(uint32);
	void set_has_item_item_id();
	void clear_has_item_item_id();
	void set_has_socket_index();
	void clear_has_socket_index();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:8357
class CMsgResetStrangeGemCountResponse : public Message {
public:

	static const CMsgResetStrangeGemCountResponse_EResetGem k_ResetGem_Succeeded;
	static const CMsgResetStrangeGemCountResponse_EResetGem k_ResetGem_Failed_FailedToResetGem = 1;
	static const CMsgResetStrangeGemCountResponse_EResetGem k_ResetGem_Failed_ItemIsInvalid = 2;
	static const CMsgResetStrangeGemCountResponse_EResetGem k_ResetGem_Failed_InvalidSocketId = 3;
	static const CMsgResetStrangeGemCountResponse_EResetGem k_ResetGem_Failed_SocketCannotBeReset = 4;
	static const CMsgResetStrangeGemCountResponse_EResetGem EResetGem_MIN;
	static const CMsgResetStrangeGemCountResponse_EResetGem EResetGem_MAX = 4;
	static const int EResetGem_ARRAYSIZE = 5;
	static const int kResponseFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int response_;  // +0x18

	static CMsgResetStrangeGemCountResponse * default_instance_;
	typedef CMsgResetStrangeGemCountResponse_EResetGem EResetGem;
	CMsgResetStrangeGemCountResponse();
	virtual ~CMsgResetStrangeGemCountResponse();
	CMsgResetStrangeGemCountResponse(const CMsgResetStrangeGemCountResponse &);
	CMsgResetStrangeGemCountResponse & operator=(const CMsgResetStrangeGemCountResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgResetStrangeGemCountResponse & default_instance();
	void Swap(CMsgResetStrangeGemCountResponse *);
	virtual CMsgResetStrangeGemCountResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgResetStrangeGemCountResponse &);
	void MergeFrom(const CMsgResetStrangeGemCountResponse &);
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
	bool EResetGem_IsValid(int);
	const EnumDescriptor * EResetGem_descriptor();
	const string & EResetGem_Name(EResetGem);
	bool EResetGem_Parse(const string &, EResetGem *);
	bool has_response();
	void clear_response();
	CMsgResetStrangeGemCountResponse_EResetGem response();
	void set_response(CMsgResetStrangeGemCountResponse_EResetGem);
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:8463
class CMsgGCToClientPollFileRequest : public Message {
public:

	static const int kFileNameFieldNumber = 1;
	static const int kClientVersionFieldNumber = 2;
	static const int kPollIdFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * file_name_;  // +0x18
	uint32 client_version_;  // +0x20
	uint32 poll_id_;  // +0x24

	static CMsgGCToClientPollFileRequest * default_instance_;
	CMsgGCToClientPollFileRequest();
	virtual ~CMsgGCToClientPollFileRequest();
	CMsgGCToClientPollFileRequest(const CMsgGCToClientPollFileRequest &);
	CMsgGCToClientPollFileRequest & operator=(const CMsgGCToClientPollFileRequest &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToClientPollFileRequest & default_instance();
	void Swap(CMsgGCToClientPollFileRequest *);
	virtual CMsgGCToClientPollFileRequest * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToClientPollFileRequest &);
	void MergeFrom(const CMsgGCToClientPollFileRequest &);
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
	bool has_file_name();
	void clear_file_name();
	const string & file_name();
	void set_file_name(const string &);
	void set_file_name(const char *);
	void set_file_name(const char *, size_t);
	string * mutable_file_name();
	string * release_file_name();
	void set_allocated_file_name(string *);
	bool has_client_version();
	void clear_client_version();
	uint32 client_version();
	void set_client_version(uint32);
	bool has_poll_id();
	void clear_poll_id();
	uint32 poll_id();
	void set_poll_id(uint32);
	void set_has_file_name();
	void clear_has_file_name();
	void set_has_client_version();
	void clear_has_client_version();
	void set_has_poll_id();
	void clear_has_poll_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/base_gcmessages.pb.h:8567
class CMsgGCToClientPollFileResponse : public Message {
public:

	static const int kPollIdFieldNumber = 1;
	static const int kFileSizeFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 poll_id_;  // +0x18
	uint32 file_size_;  // +0x1c

	static CMsgGCToClientPollFileResponse * default_instance_;
	CMsgGCToClientPollFileResponse();
	virtual ~CMsgGCToClientPollFileResponse();
	CMsgGCToClientPollFileResponse(const CMsgGCToClientPollFileResponse &);
	CMsgGCToClientPollFileResponse & operator=(const CMsgGCToClientPollFileResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToClientPollFileResponse & default_instance();
	void Swap(CMsgGCToClientPollFileResponse *);
	virtual CMsgGCToClientPollFileResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToClientPollFileResponse &);
	void MergeFrom(const CMsgGCToClientPollFileResponse &);
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
	bool has_poll_id();
	void clear_poll_id();
	uint32 poll_id();
	void set_poll_id(uint32);
	bool has_file_size();
	void clear_file_size();
	uint32 file_size();
	void set_file_size(uint32);
	void set_has_poll_id();
	void clear_has_poll_id();
	void set_has_file_size();
	void clear_has_file_size();
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
