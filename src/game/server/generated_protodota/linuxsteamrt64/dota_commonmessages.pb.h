// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/dota_commonmessages.pb.h:228
class CDOTAMsg_LocationPing : public Message {
public:

	static const int kXFieldNumber = 1;
	static const int kYFieldNumber = 2;
	static const int kTargetFieldNumber = 3;
	static const int kDirectPingFieldNumber = 4;
	static const int kTypeFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 x_;  // +0x18
	int32 y_;  // +0x1c
	int32 target_;  // +0x20
	bool direct_ping_;  // +0x24

	int32 type_;  // +0x28

	static CDOTAMsg_LocationPing * default_instance_;
	CDOTAMsg_LocationPing();
	virtual ~CDOTAMsg_LocationPing();
	CDOTAMsg_LocationPing(const CDOTAMsg_LocationPing &);
	CDOTAMsg_LocationPing & operator=(const CDOTAMsg_LocationPing &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAMsg_LocationPing & default_instance();
	void Swap(CDOTAMsg_LocationPing *);
	virtual CDOTAMsg_LocationPing * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAMsg_LocationPing &);
	void MergeFrom(const CDOTAMsg_LocationPing &);
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
	bool has_x();
	void clear_x();
	int32 x();
	void set_x(int32);
	bool has_y();
	void clear_y();
	int32 y();
	void set_y(int32);
	bool has_target();
	void clear_target();
	int32 target();
	void set_target(int32);
	bool has_direct_ping();
	void clear_direct_ping();
	bool direct_ping();
	void set_direct_ping(bool);
	bool has_type();
	void clear_type();
	int32 type();
	void set_type(int32);
	void set_has_x();
	void clear_has_x();
	void set_has_y();
	void clear_has_y();
	void set_has_target();
	void clear_has_target();
	void set_has_direct_ping();
	void clear_has_direct_ping();
	void set_has_type();
	void clear_has_type();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_commonmessages.pb.h:347
class CDOTAMsg_ItemAlert : public Message {
public:

	static const int kXFieldNumber = 1;
	static const int kYFieldNumber = 2;
	static const int kItemidFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 x_;  // +0x18
	int32 y_;  // +0x1c
	int32 itemid_;  // +0x20

	static CDOTAMsg_ItemAlert * default_instance_;
	CDOTAMsg_ItemAlert();
	virtual ~CDOTAMsg_ItemAlert();
	CDOTAMsg_ItemAlert(const CDOTAMsg_ItemAlert &);
	CDOTAMsg_ItemAlert & operator=(const CDOTAMsg_ItemAlert &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAMsg_ItemAlert & default_instance();
	void Swap(CDOTAMsg_ItemAlert *);
	virtual CDOTAMsg_ItemAlert * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAMsg_ItemAlert &);
	void MergeFrom(const CDOTAMsg_ItemAlert &);
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
	bool has_x();
	void clear_x();
	int32 x();
	void set_x(int32);
	bool has_y();
	void clear_y();
	int32 y();
	void set_y(int32);
	bool has_itemid();
	void clear_itemid();
	int32 itemid();
	void set_itemid(int32);
	void set_has_x();
	void clear_has_x();
	void set_has_y();
	void clear_has_y();
	void set_has_itemid();
	void clear_has_itemid();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_commonmessages.pb.h:446
class CDOTAMsg_MapLine : public Message {
public:

	static const int kXFieldNumber = 1;
	static const int kYFieldNumber = 2;
	static const int kInitialFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 x_;  // +0x18
	int32 y_;  // +0x1c
	bool initial_;  // +0x20

	static CDOTAMsg_MapLine * default_instance_;
	CDOTAMsg_MapLine();
	virtual ~CDOTAMsg_MapLine();
	CDOTAMsg_MapLine(const CDOTAMsg_MapLine &);
	CDOTAMsg_MapLine & operator=(const CDOTAMsg_MapLine &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAMsg_MapLine & default_instance();
	void Swap(CDOTAMsg_MapLine *);
	virtual CDOTAMsg_MapLine * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAMsg_MapLine &);
	void MergeFrom(const CDOTAMsg_MapLine &);
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
	bool has_x();
	void clear_x();
	int32 x();
	void set_x(int32);
	bool has_y();
	void clear_y();
	int32 y();
	void set_y(int32);
	bool has_initial();
	void clear_initial();
	bool initial();
	void set_initial(bool);
	void set_has_x();
	void clear_has_x();
	void set_has_y();
	void clear_has_y();
	void set_has_initial();
	void clear_has_initial();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_commonmessages.pb.h:545
class CDOTAMsg_WorldLine : public Message {
public:

	static const int kXFieldNumber = 1;
	static const int kYFieldNumber = 2;
	static const int kZFieldNumber = 3;
	static const int kInitialFieldNumber = 4;
	static const int kEndFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 x_;  // +0x18
	int32 y_;  // +0x1c
	int32 z_;  // +0x20
	bool initial_;  // +0x24
	bool end_;  // +0x25

	static CDOTAMsg_WorldLine * default_instance_;
	CDOTAMsg_WorldLine();
	virtual ~CDOTAMsg_WorldLine();
	CDOTAMsg_WorldLine(const CDOTAMsg_WorldLine &);
	CDOTAMsg_WorldLine & operator=(const CDOTAMsg_WorldLine &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAMsg_WorldLine & default_instance();
	void Swap(CDOTAMsg_WorldLine *);
	virtual CDOTAMsg_WorldLine * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAMsg_WorldLine &);
	void MergeFrom(const CDOTAMsg_WorldLine &);
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
	bool has_x();
	void clear_x();
	int32 x();
	void set_x(int32);
	bool has_y();
	void clear_y();
	int32 y();
	void set_y(int32);
	bool has_z();
	void clear_z();
	int32 z();
	void set_z(int32);
	bool has_initial();
	void clear_initial();
	bool initial();
	void set_initial(bool);
	bool has_end();
	void clear_end();
	bool end();
	void set_end(bool);
	void set_has_x();
	void clear_has_x();
	void set_has_y();
	void clear_has_y();
	void set_has_z();
	void clear_has_z();
	void set_has_initial();
	void clear_has_initial();
	void set_has_end();
	void clear_has_end();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_commonmessages.pb.h:664
class CDOTAMsg_SendStatPopup : public Message {
public:

	static const int kStyleFieldNumber = 1;
	static const int kStatStringsFieldNumber = 2;
	static const int kStatImagesFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int style_;  // +0x40

	static CDOTAMsg_SendStatPopup * default_instance_;
	CDOTAMsg_SendStatPopup();
	virtual ~CDOTAMsg_SendStatPopup();
	CDOTAMsg_SendStatPopup(const CDOTAMsg_SendStatPopup &);
	CDOTAMsg_SendStatPopup & operator=(const CDOTAMsg_SendStatPopup &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAMsg_SendStatPopup & default_instance();
	void Swap(CDOTAMsg_SendStatPopup *);
	virtual CDOTAMsg_SendStatPopup * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAMsg_SendStatPopup &);
	void MergeFrom(const CDOTAMsg_SendStatPopup &);
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
	bool has_style();
	void clear_style();
	EDOTAStatPopupTypes style();
	void set_style(EDOTAStatPopupTypes);
	int stat_strings_size();
	void clear_stat_strings();
	const string & stat_strings(int);
	string * mutable_stat_strings(int);
	void set_stat_strings(int, const string &);
	void set_stat_strings(int, const char *);
	void set_stat_strings(int, const char *, size_t);
	string * add_stat_strings();
	void add_stat_strings(const string &);
	void add_stat_strings(const char *);
	void add_stat_strings(const char *, size_t);
	const RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > & stat_strings();
	RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > * mutable_stat_strings();
	int stat_images_size();
	void clear_stat_images();
	int32 stat_images(int);
	void set_stat_images(int, int32);
	void add_stat_images(int32);
	const RepeatedField<int> & stat_images();
	RepeatedField<int> * mutable_stat_images();
	void set_has_style();
	void clear_has_style();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_commonmessages.pb.h:773
class CDOTAMsg_CoachHUDPing : public Message {
public:

	static const int kXFieldNumber = 1;
	static const int kYFieldNumber = 2;
	static const int kTgtpathFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 x_;  // +0x18
	uint32 y_;  // +0x1c
	string * tgtpath_;  // +0x20

	static CDOTAMsg_CoachHUDPing * default_instance_;
	CDOTAMsg_CoachHUDPing();
	virtual ~CDOTAMsg_CoachHUDPing();
	CDOTAMsg_CoachHUDPing(const CDOTAMsg_CoachHUDPing &);
	CDOTAMsg_CoachHUDPing & operator=(const CDOTAMsg_CoachHUDPing &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAMsg_CoachHUDPing & default_instance();
	void Swap(CDOTAMsg_CoachHUDPing *);
	virtual CDOTAMsg_CoachHUDPing * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAMsg_CoachHUDPing &);
	void MergeFrom(const CDOTAMsg_CoachHUDPing &);
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
	bool has_x();
	void clear_x();
	uint32 x();
	void set_x(uint32);
	bool has_y();
	void clear_y();
	uint32 y();
	void set_y(uint32);
	bool has_tgtpath();
	void clear_tgtpath();
	const string & tgtpath();
	void set_tgtpath(const string &);
	void set_tgtpath(const char *);
	void set_tgtpath(const char *, size_t);
	string * mutable_tgtpath();
	string * release_tgtpath();
	void set_allocated_tgtpath(string *);
	void set_has_x();
	void clear_has_x();
	void set_has_y();
	void clear_has_y();
	void set_has_tgtpath();
	void clear_has_tgtpath();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_commonmessages.pb.h:877
class CDOTAMsg_UnitOrder : public Message {
public:

	static const int kIssuerFieldNumber = 1;
	static const int kOrderTypeFieldNumber = 2;
	static const int kUnitsFieldNumber = 3;
	static const int kTargetIndexFieldNumber = 4;
	static const int kAbilityIndexFieldNumber = 5;
	static const int kPositionFieldNumber = 6;
	static const int kQueueFieldNumber = 7;
	static const int kSequenceNumberFieldNumber = 8;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 issuer_;  // +0x18
	int order_type_;  // +0x1c
	int32 target_index_;  // +0x30
	int32 ability_index_;  // +0x34
	bool queue_;  // +0x40

	int32 sequence_number_;  // +0x44

	static CDOTAMsg_UnitOrder * default_instance_;
	CDOTAMsg_UnitOrder();
	virtual ~CDOTAMsg_UnitOrder();
	CDOTAMsg_UnitOrder(const CDOTAMsg_UnitOrder &);
	CDOTAMsg_UnitOrder & operator=(const CDOTAMsg_UnitOrder &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAMsg_UnitOrder & default_instance();
	void Swap(CDOTAMsg_UnitOrder *);
	virtual CDOTAMsg_UnitOrder * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAMsg_UnitOrder &);
	void MergeFrom(const CDOTAMsg_UnitOrder &);
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
	bool has_issuer();
	void clear_issuer();
	int32 issuer();
	void set_issuer(int32);
	bool has_order_type();
	void clear_order_type();
	dotaunitorder_t order_type();
	void set_order_type(dotaunitorder_t);
	int units_size();
	void clear_units();
	int32 units(int);
	void set_units(int, int32);
	void add_units(int32);
	const RepeatedField<int> & units();
	RepeatedField<int> * mutable_units();
	bool has_target_index();
	void clear_target_index();
	int32 target_index();
	void set_target_index(int32);
	bool has_ability_index();
	void clear_ability_index();
	int32 ability_index();
	void set_ability_index(int32);
	bool has_position();
	void clear_position();
	const CMsgVector & position();
	CMsgVector * mutable_position();
	CMsgVector * release_position();
	void set_allocated_position(CMsgVector *);
	bool has_queue();
	void clear_queue();
	bool queue();
	void set_queue(bool);
	bool has_sequence_number();
	void clear_sequence_number();
	int32 sequence_number();
	void set_sequence_number(int32);
	void set_has_issuer();
	void clear_has_issuer();
	void set_has_order_type();
	void clear_has_order_type();
	void set_has_target_index();
	void clear_has_target_index();
	void set_has_ability_index();
	void clear_has_ability_index();
	void set_has_position();
	void clear_has_position();
	void set_has_queue();
	void clear_has_queue();
	void set_has_sequence_number();
	void clear_has_sequence_number();
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
