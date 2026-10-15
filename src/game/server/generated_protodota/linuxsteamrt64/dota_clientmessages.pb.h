// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:218
class CDOTAClientMsg_MapPing : public Message {
public:

	static const int kLocationPingFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CDOTAClientMsg_MapPing * default_instance_;
	CDOTAClientMsg_MapPing();
	virtual ~CDOTAClientMsg_MapPing();
	CDOTAClientMsg_MapPing(const CDOTAClientMsg_MapPing &);
	CDOTAClientMsg_MapPing & operator=(const CDOTAClientMsg_MapPing &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_MapPing & default_instance();
	void Swap(CDOTAClientMsg_MapPing *);
	virtual CDOTAClientMsg_MapPing * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_MapPing &);
	void MergeFrom(const CDOTAClientMsg_MapPing &);
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
	bool has_location_ping();
	void clear_location_ping();
	const CDOTAMsg_LocationPing & location_ping();
	CDOTAMsg_LocationPing * mutable_location_ping();
	CDOTAMsg_LocationPing * release_location_ping();
	void set_allocated_location_ping(CDOTAMsg_LocationPing *);
	void set_has_location_ping();
	void clear_has_location_ping();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:299
class CDOTAClientMsg_ItemAlert : public Message {
public:

	static const int kItemAlertFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CDOTAClientMsg_ItemAlert * default_instance_;
	CDOTAClientMsg_ItemAlert();
	virtual ~CDOTAClientMsg_ItemAlert();
	CDOTAClientMsg_ItemAlert(const CDOTAClientMsg_ItemAlert &);
	CDOTAClientMsg_ItemAlert & operator=(const CDOTAClientMsg_ItemAlert &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_ItemAlert & default_instance();
	void Swap(CDOTAClientMsg_ItemAlert *);
	virtual CDOTAClientMsg_ItemAlert * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_ItemAlert &);
	void MergeFrom(const CDOTAClientMsg_ItemAlert &);
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
	bool has_item_alert();
	void clear_item_alert();
	const CDOTAMsg_ItemAlert & item_alert();
	CDOTAMsg_ItemAlert * mutable_item_alert();
	CDOTAMsg_ItemAlert * release_item_alert();
	void set_allocated_item_alert(CDOTAMsg_ItemAlert *);
	void set_has_item_alert();
	void clear_has_item_alert();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:380
class CDOTAClientMsg_EnemyItemAlert : public Message {
public:

	static const int kItemEntindexFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 item_entindex_;  // +0x18

	static CDOTAClientMsg_EnemyItemAlert * default_instance_;
	CDOTAClientMsg_EnemyItemAlert();
	virtual ~CDOTAClientMsg_EnemyItemAlert();
	CDOTAClientMsg_EnemyItemAlert(const CDOTAClientMsg_EnemyItemAlert &);
	CDOTAClientMsg_EnemyItemAlert & operator=(const CDOTAClientMsg_EnemyItemAlert &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_EnemyItemAlert & default_instance();
	void Swap(CDOTAClientMsg_EnemyItemAlert *);
	virtual CDOTAClientMsg_EnemyItemAlert * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_EnemyItemAlert &);
	void MergeFrom(const CDOTAClientMsg_EnemyItemAlert &);
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
	bool has_item_entindex();
	void clear_item_entindex();
	uint32 item_entindex();
	void set_item_entindex(uint32);
	void set_has_item_entindex();
	void clear_has_item_entindex();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:459
class CDOTAClientMsg_ModifierAlert : public Message {
public:

	static const int kBuffInternalIndexFieldNumber = 1;
	static const int kTargetEntindexFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 buff_internal_index_;  // +0x18
	uint32 target_entindex_;  // +0x1c

	static CDOTAClientMsg_ModifierAlert * default_instance_;
	CDOTAClientMsg_ModifierAlert();
	virtual ~CDOTAClientMsg_ModifierAlert();
	CDOTAClientMsg_ModifierAlert(const CDOTAClientMsg_ModifierAlert &);
	CDOTAClientMsg_ModifierAlert & operator=(const CDOTAClientMsg_ModifierAlert &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_ModifierAlert & default_instance();
	void Swap(CDOTAClientMsg_ModifierAlert *);
	virtual CDOTAClientMsg_ModifierAlert * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_ModifierAlert &);
	void MergeFrom(const CDOTAClientMsg_ModifierAlert &);
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
	bool has_buff_internal_index();
	void clear_buff_internal_index();
	int32 buff_internal_index();
	void set_buff_internal_index(int32);
	bool has_target_entindex();
	void clear_target_entindex();
	uint32 target_entindex();
	void set_target_entindex(uint32);
	void set_has_buff_internal_index();
	void clear_has_buff_internal_index();
	void set_has_target_entindex();
	void clear_has_target_entindex();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:548
class CDOTAClientMsg_ClickedBuff : public Message {
public:

	static const int kBuffInternalIndexFieldNumber = 1;
	static const int kTargetEntindexFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 buff_internal_index_;  // +0x18
	uint32 target_entindex_;  // +0x1c

	static CDOTAClientMsg_ClickedBuff * default_instance_;
	CDOTAClientMsg_ClickedBuff();
	virtual ~CDOTAClientMsg_ClickedBuff();
	CDOTAClientMsg_ClickedBuff(const CDOTAClientMsg_ClickedBuff &);
	CDOTAClientMsg_ClickedBuff & operator=(const CDOTAClientMsg_ClickedBuff &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_ClickedBuff & default_instance();
	void Swap(CDOTAClientMsg_ClickedBuff *);
	virtual CDOTAClientMsg_ClickedBuff * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_ClickedBuff &);
	void MergeFrom(const CDOTAClientMsg_ClickedBuff &);
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
	bool has_buff_internal_index();
	void clear_buff_internal_index();
	int32 buff_internal_index();
	void set_buff_internal_index(int32);
	bool has_target_entindex();
	void clear_target_entindex();
	uint32 target_entindex();
	void set_target_entindex(uint32);
	void set_has_buff_internal_index();
	void clear_has_buff_internal_index();
	void set_has_target_entindex();
	void clear_has_target_entindex();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:637
class CDOTAClientMsg_HPManaAlert : public Message {
public:

	static const int kTargetEntindexFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 target_entindex_;  // +0x18

	static CDOTAClientMsg_HPManaAlert * default_instance_;
	CDOTAClientMsg_HPManaAlert();
	virtual ~CDOTAClientMsg_HPManaAlert();
	CDOTAClientMsg_HPManaAlert(const CDOTAClientMsg_HPManaAlert &);
	CDOTAClientMsg_HPManaAlert & operator=(const CDOTAClientMsg_HPManaAlert &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_HPManaAlert & default_instance();
	void Swap(CDOTAClientMsg_HPManaAlert *);
	virtual CDOTAClientMsg_HPManaAlert * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_HPManaAlert &);
	void MergeFrom(const CDOTAClientMsg_HPManaAlert &);
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
	bool has_target_entindex();
	void clear_target_entindex();
	uint32 target_entindex();
	void set_target_entindex(uint32);
	void set_has_target_entindex();
	void clear_has_target_entindex();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:716
class CDOTAClientMsg_GlyphAlert : public Message {
public:

	static const int kNegativeFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool negative_;  // +0x18

	static CDOTAClientMsg_GlyphAlert * default_instance_;
	CDOTAClientMsg_GlyphAlert();
	virtual ~CDOTAClientMsg_GlyphAlert();
	CDOTAClientMsg_GlyphAlert(const CDOTAClientMsg_GlyphAlert &);
	CDOTAClientMsg_GlyphAlert & operator=(const CDOTAClientMsg_GlyphAlert &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_GlyphAlert & default_instance();
	void Swap(CDOTAClientMsg_GlyphAlert *);
	virtual CDOTAClientMsg_GlyphAlert * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_GlyphAlert &);
	void MergeFrom(const CDOTAClientMsg_GlyphAlert &);
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
	bool has_negative();
	void clear_negative();
	bool negative();
	void set_negative(bool);
	void set_has_negative();
	void clear_has_negative();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:795
class CDOTAClientMsg_MapLine : public Message {
public:

	static const int kMaplineFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CDOTAClientMsg_MapLine * default_instance_;
	CDOTAClientMsg_MapLine();
	virtual ~CDOTAClientMsg_MapLine();
	CDOTAClientMsg_MapLine(const CDOTAClientMsg_MapLine &);
	CDOTAClientMsg_MapLine & operator=(const CDOTAClientMsg_MapLine &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_MapLine & default_instance();
	void Swap(CDOTAClientMsg_MapLine *);
	virtual CDOTAClientMsg_MapLine * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_MapLine &);
	void MergeFrom(const CDOTAClientMsg_MapLine &);
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
	bool has_mapline();
	void clear_mapline();
	const CDOTAMsg_MapLine & mapline();
	CDOTAMsg_MapLine * mutable_mapline();
	CDOTAMsg_MapLine * release_mapline();
	void set_allocated_mapline(CDOTAMsg_MapLine *);
	void set_has_mapline();
	void clear_has_mapline();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:876
class CDOTAClientMsg_AspectRatio : public Message {
public:

	static const int kRatioFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	float ratio_;  // +0x18

	static CDOTAClientMsg_AspectRatio * default_instance_;
	CDOTAClientMsg_AspectRatio();
	virtual ~CDOTAClientMsg_AspectRatio();
	CDOTAClientMsg_AspectRatio(const CDOTAClientMsg_AspectRatio &);
	CDOTAClientMsg_AspectRatio & operator=(const CDOTAClientMsg_AspectRatio &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_AspectRatio & default_instance();
	void Swap(CDOTAClientMsg_AspectRatio *);
	virtual CDOTAClientMsg_AspectRatio * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_AspectRatio &);
	void MergeFrom(const CDOTAClientMsg_AspectRatio &);
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
	bool has_ratio();
	void clear_ratio();
	float ratio();
	void set_ratio(float);
	void set_has_ratio();
	void clear_has_ratio();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:955
class CDOTAClientMsg_UnitsAutoAttackMode : public Message {
public:

	static const CDOTAClientMsg_UnitsAutoAttackMode_EMode INVALID = 18446744073709551615;
	static const CDOTAClientMsg_UnitsAutoAttackMode_EMode NEVER;
	static const CDOTAClientMsg_UnitsAutoAttackMode_EMode AFTER_SPELLCAST = 1;
	static const CDOTAClientMsg_UnitsAutoAttackMode_EMode ALWAYS = 2;
	static const CDOTAClientMsg_UnitsAutoAttackMode_EMode EMode_MIN = 18446744073709551615;
	static const CDOTAClientMsg_UnitsAutoAttackMode_EMode EMode_MAX = 2;
	static const int EMode_ARRAYSIZE = 3;
	static const CDOTAClientMsg_UnitsAutoAttackMode_EUnitType NORMAL;
	static const CDOTAClientMsg_UnitsAutoAttackMode_EUnitType SUMMONED = 1;
	static const CDOTAClientMsg_UnitsAutoAttackMode_EUnitType EUnitType_MIN;
	static const CDOTAClientMsg_UnitsAutoAttackMode_EUnitType EUnitType_MAX = 1;
	static const int EUnitType_ARRAYSIZE = 2;
	static const int kModeFieldNumber = 1;
	static const int kUnitTypeFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int mode_;  // +0x18
	int unit_type_;  // +0x1c

	static CDOTAClientMsg_UnitsAutoAttackMode * default_instance_;
	typedef CDOTAClientMsg_UnitsAutoAttackMode_EMode EMode;
	typedef CDOTAClientMsg_UnitsAutoAttackMode_EUnitType EUnitType;
	CDOTAClientMsg_UnitsAutoAttackMode();
	virtual ~CDOTAClientMsg_UnitsAutoAttackMode();
	CDOTAClientMsg_UnitsAutoAttackMode(const CDOTAClientMsg_UnitsAutoAttackMode &);
	CDOTAClientMsg_UnitsAutoAttackMode & operator=(const CDOTAClientMsg_UnitsAutoAttackMode &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_UnitsAutoAttackMode & default_instance();
	void Swap(CDOTAClientMsg_UnitsAutoAttackMode *);
	virtual CDOTAClientMsg_UnitsAutoAttackMode * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_UnitsAutoAttackMode &);
	void MergeFrom(const CDOTAClientMsg_UnitsAutoAttackMode &);
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
	bool EMode_IsValid(int);
	const EnumDescriptor * EMode_descriptor();
	const string & EMode_Name(EMode);
	bool EMode_Parse(const string &, EMode *);
	bool EUnitType_IsValid(int);
	const EnumDescriptor * EUnitType_descriptor();
	const string & EUnitType_Name(EUnitType);
	bool EUnitType_Parse(const string &, EUnitType *);
	bool has_mode();
	void clear_mode();
	CDOTAClientMsg_UnitsAutoAttackMode_EMode mode();
	void set_mode(CDOTAClientMsg_UnitsAutoAttackMode_EMode);
	bool has_unit_type();
	void clear_unit_type();
	CDOTAClientMsg_UnitsAutoAttackMode_EUnitType unit_type();
	void set_unit_type(CDOTAClientMsg_UnitsAutoAttackMode_EUnitType);
	void set_has_mode();
	void clear_has_mode();
	void set_has_unit_type();
	void clear_has_unit_type();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:1094
class CDOTAClientMsg_UnitsAutoAttackAfterSpell : public Message {
public:

	static const int kEnabledFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool enabled_;  // +0x18

	static CDOTAClientMsg_UnitsAutoAttackAfterSpell * default_instance_;
	CDOTAClientMsg_UnitsAutoAttackAfterSpell();
	virtual ~CDOTAClientMsg_UnitsAutoAttackAfterSpell();
	CDOTAClientMsg_UnitsAutoAttackAfterSpell(const CDOTAClientMsg_UnitsAutoAttackAfterSpell &);
	CDOTAClientMsg_UnitsAutoAttackAfterSpell & operator=(const CDOTAClientMsg_UnitsAutoAttackAfterSpell &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_UnitsAutoAttackAfterSpell & default_instance();
	void Swap(CDOTAClientMsg_UnitsAutoAttackAfterSpell *);
	virtual CDOTAClientMsg_UnitsAutoAttackAfterSpell * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_UnitsAutoAttackAfterSpell &);
	void MergeFrom(const CDOTAClientMsg_UnitsAutoAttackAfterSpell &);
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
	bool has_enabled();
	void clear_enabled();
	bool enabled();
	void set_enabled(bool);
	void set_has_enabled();
	void clear_has_enabled();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:1173
class CDOTAClientMsg_TeleportRequiresHalt : public Message {
public:

	static const int kEnabledFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool enabled_;  // +0x18

	static CDOTAClientMsg_TeleportRequiresHalt * default_instance_;
	CDOTAClientMsg_TeleportRequiresHalt();
	virtual ~CDOTAClientMsg_TeleportRequiresHalt();
	CDOTAClientMsg_TeleportRequiresHalt(const CDOTAClientMsg_TeleportRequiresHalt &);
	CDOTAClientMsg_TeleportRequiresHalt & operator=(const CDOTAClientMsg_TeleportRequiresHalt &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_TeleportRequiresHalt & default_instance();
	void Swap(CDOTAClientMsg_TeleportRequiresHalt *);
	virtual CDOTAClientMsg_TeleportRequiresHalt * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_TeleportRequiresHalt &);
	void MergeFrom(const CDOTAClientMsg_TeleportRequiresHalt &);
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
	bool has_enabled();
	void clear_enabled();
	bool enabled();
	void set_enabled(bool);
	void set_has_enabled();
	void clear_has_enabled();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:1252
class CDOTAClientMsg_SearchString : public Message {
public:

	static const int kSearchFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * search_;  // +0x18

	static CDOTAClientMsg_SearchString * default_instance_;
	CDOTAClientMsg_SearchString();
	virtual ~CDOTAClientMsg_SearchString();
	CDOTAClientMsg_SearchString(const CDOTAClientMsg_SearchString &);
	CDOTAClientMsg_SearchString & operator=(const CDOTAClientMsg_SearchString &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_SearchString & default_instance();
	void Swap(CDOTAClientMsg_SearchString *);
	virtual CDOTAClientMsg_SearchString * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_SearchString &);
	void MergeFrom(const CDOTAClientMsg_SearchString &);
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
	bool has_search();
	void clear_search();
	const string & search();
	void set_search(const string &);
	void set_search(const char *);
	void set_search(const char *, size_t);
	string * mutable_search();
	string * release_search();
	void set_allocated_search(string *);
	void set_has_search();
	void clear_has_search();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:1336
class CDOTAClientMsg_Pause : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CDOTAClientMsg_Pause * default_instance_;
	CDOTAClientMsg_Pause();
	virtual ~CDOTAClientMsg_Pause();
	CDOTAClientMsg_Pause(const CDOTAClientMsg_Pause &);
	CDOTAClientMsg_Pause & operator=(const CDOTAClientMsg_Pause &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_Pause & default_instance();
	void Swap(CDOTAClientMsg_Pause *);
	virtual CDOTAClientMsg_Pause * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_Pause &);
	void MergeFrom(const CDOTAClientMsg_Pause &);
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:1405
class CDOTAClientMsg_ShopViewMode : public Message {
public:

	static const int kModeFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 mode_;  // +0x18

	static CDOTAClientMsg_ShopViewMode * default_instance_;
	CDOTAClientMsg_ShopViewMode();
	virtual ~CDOTAClientMsg_ShopViewMode();
	CDOTAClientMsg_ShopViewMode(const CDOTAClientMsg_ShopViewMode &);
	CDOTAClientMsg_ShopViewMode & operator=(const CDOTAClientMsg_ShopViewMode &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_ShopViewMode & default_instance();
	void Swap(CDOTAClientMsg_ShopViewMode *);
	virtual CDOTAClientMsg_ShopViewMode * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_ShopViewMode &);
	void MergeFrom(const CDOTAClientMsg_ShopViewMode &);
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
	bool has_mode();
	void clear_mode();
	uint32 mode();
	void set_mode(uint32);
	void set_has_mode();
	void clear_has_mode();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:1484
class CDOTAClientMsg_SetUnitShareFlag : public Message {
public:

	static const int kPlayerIDFieldNumber = 1;
	static const int kFlagFieldNumber = 2;
	static const int kStateFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 playerid_;  // +0x18
	uint32 flag_;  // +0x1c
	bool state_;  // +0x20

	static CDOTAClientMsg_SetUnitShareFlag * default_instance_;
	CDOTAClientMsg_SetUnitShareFlag();
	virtual ~CDOTAClientMsg_SetUnitShareFlag();
	CDOTAClientMsg_SetUnitShareFlag(const CDOTAClientMsg_SetUnitShareFlag &);
	CDOTAClientMsg_SetUnitShareFlag & operator=(const CDOTAClientMsg_SetUnitShareFlag &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_SetUnitShareFlag & default_instance();
	void Swap(CDOTAClientMsg_SetUnitShareFlag *);
	virtual CDOTAClientMsg_SetUnitShareFlag * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_SetUnitShareFlag &);
	void MergeFrom(const CDOTAClientMsg_SetUnitShareFlag &);
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
	bool has_playerid();
	void clear_playerid();
	uint32 playerid();
	void set_playerid(uint32);
	bool has_flag();
	void clear_flag();
	uint32 flag();
	void set_flag(uint32);
	bool has_state();
	void clear_state();
	bool state();
	void set_state(bool);
	void set_has_playerid();
	void clear_has_playerid();
	void set_has_flag();
	void clear_has_flag();
	void set_has_state();
	void clear_has_state();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:1583
class CDOTAClientMsg_SwapRequest : public Message {
public:

	static const int kPlayerIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 player_id_;  // +0x18

	static CDOTAClientMsg_SwapRequest * default_instance_;
	CDOTAClientMsg_SwapRequest();
	virtual ~CDOTAClientMsg_SwapRequest();
	CDOTAClientMsg_SwapRequest(const CDOTAClientMsg_SwapRequest &);
	CDOTAClientMsg_SwapRequest & operator=(const CDOTAClientMsg_SwapRequest &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_SwapRequest & default_instance();
	void Swap(CDOTAClientMsg_SwapRequest *);
	virtual CDOTAClientMsg_SwapRequest * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_SwapRequest &);
	void MergeFrom(const CDOTAClientMsg_SwapRequest &);
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
	bool has_player_id();
	void clear_player_id();
	uint32 player_id();
	void set_player_id(uint32);
	void set_has_player_id();
	void clear_has_player_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:1662
class CDOTAClientMsg_SwapAccept : public Message {
public:

	static const int kPlayerIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 player_id_;  // +0x18

	static CDOTAClientMsg_SwapAccept * default_instance_;
	CDOTAClientMsg_SwapAccept();
	virtual ~CDOTAClientMsg_SwapAccept();
	CDOTAClientMsg_SwapAccept(const CDOTAClientMsg_SwapAccept &);
	CDOTAClientMsg_SwapAccept & operator=(const CDOTAClientMsg_SwapAccept &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_SwapAccept & default_instance();
	void Swap(CDOTAClientMsg_SwapAccept *);
	virtual CDOTAClientMsg_SwapAccept * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_SwapAccept &);
	void MergeFrom(const CDOTAClientMsg_SwapAccept &);
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
	bool has_player_id();
	void clear_player_id();
	uint32 player_id();
	void set_player_id(uint32);
	void set_has_player_id();
	void clear_has_player_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:1741
class CDOTAClientMsg_WorldLine : public Message {
public:

	static const int kWorldlineFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CDOTAClientMsg_WorldLine * default_instance_;
	CDOTAClientMsg_WorldLine();
	virtual ~CDOTAClientMsg_WorldLine();
	CDOTAClientMsg_WorldLine(const CDOTAClientMsg_WorldLine &);
	CDOTAClientMsg_WorldLine & operator=(const CDOTAClientMsg_WorldLine &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_WorldLine & default_instance();
	void Swap(CDOTAClientMsg_WorldLine *);
	virtual CDOTAClientMsg_WorldLine * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_WorldLine &);
	void MergeFrom(const CDOTAClientMsg_WorldLine &);
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
	bool has_worldline();
	void clear_worldline();
	const CDOTAMsg_WorldLine & worldline();
	CDOTAMsg_WorldLine * mutable_worldline();
	CDOTAMsg_WorldLine * release_worldline();
	void set_allocated_worldline(CDOTAMsg_WorldLine *);
	void set_has_worldline();
	void clear_has_worldline();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:1822
class CDOTAClientMsg_RequestGraphUpdate : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CDOTAClientMsg_RequestGraphUpdate * default_instance_;
	CDOTAClientMsg_RequestGraphUpdate();
	virtual ~CDOTAClientMsg_RequestGraphUpdate();
	CDOTAClientMsg_RequestGraphUpdate(const CDOTAClientMsg_RequestGraphUpdate &);
	CDOTAClientMsg_RequestGraphUpdate & operator=(const CDOTAClientMsg_RequestGraphUpdate &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_RequestGraphUpdate & default_instance();
	void Swap(CDOTAClientMsg_RequestGraphUpdate *);
	virtual CDOTAClientMsg_RequestGraphUpdate * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_RequestGraphUpdate &);
	void MergeFrom(const CDOTAClientMsg_RequestGraphUpdate &);
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:1891
class CDOTAClientMsg_ChatWheel : public Message {
public:

	static const int kChatMessageFieldNumber = 1;
	static const int kParamHeroIdFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int chat_message_;  // +0x18
	uint32 param_hero_id_;  // +0x1c

	static CDOTAClientMsg_ChatWheel * default_instance_;
	CDOTAClientMsg_ChatWheel();
	virtual ~CDOTAClientMsg_ChatWheel();
	CDOTAClientMsg_ChatWheel(const CDOTAClientMsg_ChatWheel &);
	CDOTAClientMsg_ChatWheel & operator=(const CDOTAClientMsg_ChatWheel &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_ChatWheel & default_instance();
	void Swap(CDOTAClientMsg_ChatWheel *);
	virtual CDOTAClientMsg_ChatWheel * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_ChatWheel &);
	void MergeFrom(const CDOTAClientMsg_ChatWheel &);
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
	bool has_chat_message();
	void clear_chat_message();
	EDOTAChatWheelMessage chat_message();
	void set_chat_message(EDOTAChatWheelMessage);
	bool has_param_hero_id();
	void clear_param_hero_id();
	uint32 param_hero_id();
	void set_param_hero_id(uint32);
	void set_has_chat_message();
	void clear_has_chat_message();
	void set_has_param_hero_id();
	void clear_has_param_hero_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:1980
class CDOTAClientMsg_SendStatPopup : public Message {
public:

	static const int kStatpopupFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CDOTAClientMsg_SendStatPopup * default_instance_;
	CDOTAClientMsg_SendStatPopup();
	virtual ~CDOTAClientMsg_SendStatPopup();
	CDOTAClientMsg_SendStatPopup(const CDOTAClientMsg_SendStatPopup &);
	CDOTAClientMsg_SendStatPopup & operator=(const CDOTAClientMsg_SendStatPopup &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_SendStatPopup & default_instance();
	void Swap(CDOTAClientMsg_SendStatPopup *);
	virtual CDOTAClientMsg_SendStatPopup * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_SendStatPopup &);
	void MergeFrom(const CDOTAClientMsg_SendStatPopup &);
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
	bool has_statpopup();
	void clear_statpopup();
	const CDOTAMsg_SendStatPopup & statpopup();
	CDOTAMsg_SendStatPopup * mutable_statpopup();
	CDOTAMsg_SendStatPopup * release_statpopup();
	void set_allocated_statpopup(CDOTAMsg_SendStatPopup *);
	void set_has_statpopup();
	void clear_has_statpopup();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:2061
class CDOTAClientMsg_BeginLastHitChallenge : public Message {
public:

	static const int kChosenLaneFieldNumber = 1;
	static const int kHelperEnabledFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 chosen_lane_;  // +0x18
	bool helper_enabled_;  // +0x1c

	static CDOTAClientMsg_BeginLastHitChallenge * default_instance_;
	CDOTAClientMsg_BeginLastHitChallenge();
	virtual ~CDOTAClientMsg_BeginLastHitChallenge();
	CDOTAClientMsg_BeginLastHitChallenge(const CDOTAClientMsg_BeginLastHitChallenge &);
	CDOTAClientMsg_BeginLastHitChallenge & operator=(const CDOTAClientMsg_BeginLastHitChallenge &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_BeginLastHitChallenge & default_instance();
	void Swap(CDOTAClientMsg_BeginLastHitChallenge *);
	virtual CDOTAClientMsg_BeginLastHitChallenge * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_BeginLastHitChallenge &);
	void MergeFrom(const CDOTAClientMsg_BeginLastHitChallenge &);
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
	bool has_chosen_lane();
	void clear_chosen_lane();
	uint32 chosen_lane();
	void set_chosen_lane(uint32);
	bool has_helper_enabled();
	void clear_helper_enabled();
	bool helper_enabled();
	void set_helper_enabled(bool);
	void set_has_chosen_lane();
	void clear_has_chosen_lane();
	void set_has_helper_enabled();
	void clear_has_helper_enabled();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:2150
class CDOTAClientMsg_UpdateQuickBuyItem : public Message {
public:

	static const int kItemTypeFieldNumber = 1;
	static const int kPurchasableFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 item_type_;  // +0x18
	bool purchasable_;  // +0x1c

	static CDOTAClientMsg_UpdateQuickBuyItem * default_instance_;
	CDOTAClientMsg_UpdateQuickBuyItem();
	virtual ~CDOTAClientMsg_UpdateQuickBuyItem();
	CDOTAClientMsg_UpdateQuickBuyItem(const CDOTAClientMsg_UpdateQuickBuyItem &);
	CDOTAClientMsg_UpdateQuickBuyItem & operator=(const CDOTAClientMsg_UpdateQuickBuyItem &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_UpdateQuickBuyItem & default_instance();
	void Swap(CDOTAClientMsg_UpdateQuickBuyItem *);
	virtual CDOTAClientMsg_UpdateQuickBuyItem * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_UpdateQuickBuyItem &);
	void MergeFrom(const CDOTAClientMsg_UpdateQuickBuyItem &);
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
	bool has_item_type();
	void clear_item_type();
	int32 item_type();
	void set_item_type(int32);
	bool has_purchasable();
	void clear_purchasable();
	bool purchasable();
	void set_purchasable(bool);
	void set_has_item_type();
	void clear_has_item_type();
	void set_has_purchasable();
	void clear_has_purchasable();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:2239
class CDOTAClientMsg_UpdateQuickBuy : public Message {
public:

	static const int kItemsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CDOTAClientMsg_UpdateQuickBuy * default_instance_;
	CDOTAClientMsg_UpdateQuickBuy();
	virtual ~CDOTAClientMsg_UpdateQuickBuy();
	CDOTAClientMsg_UpdateQuickBuy(const CDOTAClientMsg_UpdateQuickBuy &);
	CDOTAClientMsg_UpdateQuickBuy & operator=(const CDOTAClientMsg_UpdateQuickBuy &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_UpdateQuickBuy & default_instance();
	void Swap(CDOTAClientMsg_UpdateQuickBuy *);
	virtual CDOTAClientMsg_UpdateQuickBuy * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_UpdateQuickBuy &);
	void MergeFrom(const CDOTAClientMsg_UpdateQuickBuy &);
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
	const CDOTAClientMsg_UpdateQuickBuyItem & items(int);
	CDOTAClientMsg_UpdateQuickBuyItem * mutable_items(int);
	CDOTAClientMsg_UpdateQuickBuyItem * add_items();
	const RepeatedPtrField<CDOTAClientMsg_UpdateQuickBuyItem> & items();
	RepeatedPtrField<CDOTAClientMsg_UpdateQuickBuyItem> * mutable_items();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:2321
class CDOTAClientMsg_RecordVote : public Message {
public:

	static const int kChoiceIndexFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 choice_index_;  // +0x18

	static CDOTAClientMsg_RecordVote * default_instance_;
	CDOTAClientMsg_RecordVote();
	virtual ~CDOTAClientMsg_RecordVote();
	CDOTAClientMsg_RecordVote(const CDOTAClientMsg_RecordVote &);
	CDOTAClientMsg_RecordVote & operator=(const CDOTAClientMsg_RecordVote &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_RecordVote & default_instance();
	void Swap(CDOTAClientMsg_RecordVote *);
	virtual CDOTAClientMsg_RecordVote * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_RecordVote &);
	void MergeFrom(const CDOTAClientMsg_RecordVote &);
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
	bool has_choice_index();
	void clear_choice_index();
	int32 choice_index();
	void set_choice_index(int32);
	void set_has_choice_index();
	void clear_has_choice_index();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:2400
class CDOTAClientMsg_WillPurchaseAlert : public Message {
public:

	static const int kItemidFieldNumber = 1;
	static const int kGoldRemainingFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 itemid_;  // +0x18
	uint32 gold_remaining_;  // +0x1c

	static CDOTAClientMsg_WillPurchaseAlert * default_instance_;
	CDOTAClientMsg_WillPurchaseAlert();
	virtual ~CDOTAClientMsg_WillPurchaseAlert();
	CDOTAClientMsg_WillPurchaseAlert(const CDOTAClientMsg_WillPurchaseAlert &);
	CDOTAClientMsg_WillPurchaseAlert & operator=(const CDOTAClientMsg_WillPurchaseAlert &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_WillPurchaseAlert & default_instance();
	void Swap(CDOTAClientMsg_WillPurchaseAlert *);
	virtual CDOTAClientMsg_WillPurchaseAlert * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_WillPurchaseAlert &);
	void MergeFrom(const CDOTAClientMsg_WillPurchaseAlert &);
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
	bool has_itemid();
	void clear_itemid();
	int32 itemid();
	void set_itemid(int32);
	bool has_gold_remaining();
	void clear_gold_remaining();
	uint32 gold_remaining();
	void set_gold_remaining(uint32);
	void set_has_itemid();
	void clear_has_itemid();
	void set_has_gold_remaining();
	void clear_has_gold_remaining();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:2489
class CDOTAClientMsg_BuyBackStateAlert : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CDOTAClientMsg_BuyBackStateAlert * default_instance_;
	CDOTAClientMsg_BuyBackStateAlert();
	virtual ~CDOTAClientMsg_BuyBackStateAlert();
	CDOTAClientMsg_BuyBackStateAlert(const CDOTAClientMsg_BuyBackStateAlert &);
	CDOTAClientMsg_BuyBackStateAlert & operator=(const CDOTAClientMsg_BuyBackStateAlert &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_BuyBackStateAlert & default_instance();
	void Swap(CDOTAClientMsg_BuyBackStateAlert *);
	virtual CDOTAClientMsg_BuyBackStateAlert * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_BuyBackStateAlert &);
	void MergeFrom(const CDOTAClientMsg_BuyBackStateAlert &);
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:2558
class CDOTAClientMsg_QuickBuyAlert : public Message {
public:

	static const int kItemidFieldNumber = 1;
	static const int kGoldRequiredFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 itemid_;  // +0x18
	int32 gold_required_;  // +0x1c

	static CDOTAClientMsg_QuickBuyAlert * default_instance_;
	CDOTAClientMsg_QuickBuyAlert();
	virtual ~CDOTAClientMsg_QuickBuyAlert();
	CDOTAClientMsg_QuickBuyAlert(const CDOTAClientMsg_QuickBuyAlert &);
	CDOTAClientMsg_QuickBuyAlert & operator=(const CDOTAClientMsg_QuickBuyAlert &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_QuickBuyAlert & default_instance();
	void Swap(CDOTAClientMsg_QuickBuyAlert *);
	virtual CDOTAClientMsg_QuickBuyAlert * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_QuickBuyAlert &);
	void MergeFrom(const CDOTAClientMsg_QuickBuyAlert &);
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
	bool has_itemid();
	void clear_itemid();
	int32 itemid();
	void set_itemid(int32);
	bool has_gold_required();
	void clear_gold_required();
	int32 gold_required();
	void set_gold_required(int32);
	void set_has_itemid();
	void clear_has_itemid();
	void set_has_gold_required();
	void clear_has_gold_required();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:2647
class CDOTAClientMsg_PlayerShowCase : public Message {
public:

	static const int kShowcaseFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool showcase_;  // +0x18

	static CDOTAClientMsg_PlayerShowCase * default_instance_;
	CDOTAClientMsg_PlayerShowCase();
	virtual ~CDOTAClientMsg_PlayerShowCase();
	CDOTAClientMsg_PlayerShowCase(const CDOTAClientMsg_PlayerShowCase &);
	CDOTAClientMsg_PlayerShowCase & operator=(const CDOTAClientMsg_PlayerShowCase &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_PlayerShowCase & default_instance();
	void Swap(CDOTAClientMsg_PlayerShowCase *);
	virtual CDOTAClientMsg_PlayerShowCase * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_PlayerShowCase &);
	void MergeFrom(const CDOTAClientMsg_PlayerShowCase &);
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
	bool has_showcase();
	void clear_showcase();
	bool showcase();
	void set_showcase(bool);
	void set_has_showcase();
	void clear_has_showcase();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:2726
class CDOTAClientMsg_CameraZoomAmount : public Message {
public:

	static const int kZoomAmountFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	float zoom_amount_;  // +0x18

	static CDOTAClientMsg_CameraZoomAmount * default_instance_;
	CDOTAClientMsg_CameraZoomAmount();
	virtual ~CDOTAClientMsg_CameraZoomAmount();
	CDOTAClientMsg_CameraZoomAmount(const CDOTAClientMsg_CameraZoomAmount &);
	CDOTAClientMsg_CameraZoomAmount & operator=(const CDOTAClientMsg_CameraZoomAmount &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_CameraZoomAmount & default_instance();
	void Swap(CDOTAClientMsg_CameraZoomAmount *);
	virtual CDOTAClientMsg_CameraZoomAmount * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_CameraZoomAmount &);
	void MergeFrom(const CDOTAClientMsg_CameraZoomAmount &);
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
	bool has_zoom_amount();
	void clear_zoom_amount();
	float zoom_amount();
	void set_zoom_amount(float);
	void set_has_zoom_amount();
	void clear_has_zoom_amount();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:2805
class CDOTAClientMsg_BroadcasterUsingCameraman : public Message {
public:

	static const int kCameramanFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool cameraman_;  // +0x18

	static CDOTAClientMsg_BroadcasterUsingCameraman * default_instance_;
	CDOTAClientMsg_BroadcasterUsingCameraman();
	virtual ~CDOTAClientMsg_BroadcasterUsingCameraman();
	CDOTAClientMsg_BroadcasterUsingCameraman(const CDOTAClientMsg_BroadcasterUsingCameraman &);
	CDOTAClientMsg_BroadcasterUsingCameraman & operator=(const CDOTAClientMsg_BroadcasterUsingCameraman &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_BroadcasterUsingCameraman & default_instance();
	void Swap(CDOTAClientMsg_BroadcasterUsingCameraman *);
	virtual CDOTAClientMsg_BroadcasterUsingCameraman * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_BroadcasterUsingCameraman &);
	void MergeFrom(const CDOTAClientMsg_BroadcasterUsingCameraman &);
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
	bool has_cameraman();
	void clear_cameraman();
	bool cameraman();
	void set_cameraman(bool);
	void set_has_cameraman();
	void clear_has_cameraman();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:2884
class CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator : public Message {
public:

	static const int kEnabledFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool enabled_;  // +0x18

	static CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator * default_instance_;
	CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator();
	virtual ~CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator();
	CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator(const CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator &);
	CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator & operator=(const CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator & default_instance();
	void Swap(CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator *);
	virtual CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator &);
	void MergeFrom(const CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator &);
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
	bool has_enabled();
	void clear_enabled();
	bool enabled();
	void set_enabled(bool);
	void set_has_enabled();
	void clear_has_enabled();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:2963
class CAdditionalEquipSlotClientMsg : public Message {
public:

	static const int kClassIdFieldNumber = 1;
	static const int kSlotIdFieldNumber = 2;
	static const int kDefIndexFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 class_id_;  // +0x18
	uint32 slot_id_;  // +0x1c
	uint32 def_index_;  // +0x20

	static CAdditionalEquipSlotClientMsg * default_instance_;
	CAdditionalEquipSlotClientMsg();
	virtual ~CAdditionalEquipSlotClientMsg();
	CAdditionalEquipSlotClientMsg(const CAdditionalEquipSlotClientMsg &);
	CAdditionalEquipSlotClientMsg & operator=(const CAdditionalEquipSlotClientMsg &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CAdditionalEquipSlotClientMsg & default_instance();
	void Swap(CAdditionalEquipSlotClientMsg *);
	virtual CAdditionalEquipSlotClientMsg * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CAdditionalEquipSlotClientMsg &);
	void MergeFrom(const CAdditionalEquipSlotClientMsg &);
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
	bool has_class_id();
	void clear_class_id();
	uint32 class_id();
	void set_class_id(uint32);
	bool has_slot_id();
	void clear_slot_id();
	uint32 slot_id();
	void set_slot_id(uint32);
	bool has_def_index();
	void clear_def_index();
	uint32 def_index();
	void set_def_index(uint32);
	void set_has_class_id();
	void clear_has_class_id();
	void set_has_slot_id();
	void clear_has_slot_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:3062
class CDOTAClientMsg_FreeInventory : public Message {
public:

	static const int kEquipsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CDOTAClientMsg_FreeInventory * default_instance_;
	CDOTAClientMsg_FreeInventory();
	virtual ~CDOTAClientMsg_FreeInventory();
	CDOTAClientMsg_FreeInventory(const CDOTAClientMsg_FreeInventory &);
	CDOTAClientMsg_FreeInventory & operator=(const CDOTAClientMsg_FreeInventory &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_FreeInventory & default_instance();
	void Swap(CDOTAClientMsg_FreeInventory *);
	virtual CDOTAClientMsg_FreeInventory * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_FreeInventory &);
	void MergeFrom(const CDOTAClientMsg_FreeInventory &);
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
	const CAdditionalEquipSlotClientMsg & equips(int);
	CAdditionalEquipSlotClientMsg * mutable_equips(int);
	CAdditionalEquipSlotClientMsg * add_equips();
	const RepeatedPtrField<CAdditionalEquipSlotClientMsg> & equips();
	RepeatedPtrField<CAdditionalEquipSlotClientMsg> * mutable_equips();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:3144
class CDOTAClientMsg_FillEmptySlotsWithBots : public Message {
public:

	static const int kFillwithbotsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool fillwithbots_;  // +0x18

	static CDOTAClientMsg_FillEmptySlotsWithBots * default_instance_;
	CDOTAClientMsg_FillEmptySlotsWithBots();
	virtual ~CDOTAClientMsg_FillEmptySlotsWithBots();
	CDOTAClientMsg_FillEmptySlotsWithBots(const CDOTAClientMsg_FillEmptySlotsWithBots &);
	CDOTAClientMsg_FillEmptySlotsWithBots & operator=(const CDOTAClientMsg_FillEmptySlotsWithBots &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_FillEmptySlotsWithBots & default_instance();
	void Swap(CDOTAClientMsg_FillEmptySlotsWithBots *);
	virtual CDOTAClientMsg_FillEmptySlotsWithBots * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_FillEmptySlotsWithBots &);
	void MergeFrom(const CDOTAClientMsg_FillEmptySlotsWithBots &);
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
	bool has_fillwithbots();
	void clear_fillwithbots();
	bool fillwithbots();
	void set_fillwithbots(bool);
	void set_has_fillwithbots();
	void clear_has_fillwithbots();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:3223
class CDOTAClientMsg_HeroStatueLike : public Message {
public:

	static const int kOwnerPlayerIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 owner_player_id_;  // +0x18

	static CDOTAClientMsg_HeroStatueLike * default_instance_;
	CDOTAClientMsg_HeroStatueLike();
	virtual ~CDOTAClientMsg_HeroStatueLike();
	CDOTAClientMsg_HeroStatueLike(const CDOTAClientMsg_HeroStatueLike &);
	CDOTAClientMsg_HeroStatueLike & operator=(const CDOTAClientMsg_HeroStatueLike &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_HeroStatueLike & default_instance();
	void Swap(CDOTAClientMsg_HeroStatueLike *);
	virtual CDOTAClientMsg_HeroStatueLike * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_HeroStatueLike &);
	void MergeFrom(const CDOTAClientMsg_HeroStatueLike &);
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
	bool has_owner_player_id();
	void clear_owner_player_id();
	uint32 owner_player_id();
	void set_owner_player_id(uint32);
	void set_has_owner_player_id();
	void clear_has_owner_player_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:3302
class CDOTAClientMsg_EventCNY2015Cmd : public Message {
public:

	static const int kDataFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * data_;  // +0x18

	static CDOTAClientMsg_EventCNY2015Cmd * default_instance_;
	CDOTAClientMsg_EventCNY2015Cmd();
	virtual ~CDOTAClientMsg_EventCNY2015Cmd();
	CDOTAClientMsg_EventCNY2015Cmd(const CDOTAClientMsg_EventCNY2015Cmd &);
	CDOTAClientMsg_EventCNY2015Cmd & operator=(const CDOTAClientMsg_EventCNY2015Cmd &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_EventCNY2015Cmd & default_instance();
	void Swap(CDOTAClientMsg_EventCNY2015Cmd *);
	virtual CDOTAClientMsg_EventCNY2015Cmd * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_EventCNY2015Cmd &);
	void MergeFrom(const CDOTAClientMsg_EventCNY2015Cmd &);
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
	bool has_data();
	void clear_data();
	const string & data();
	void set_data(const string &);
	void set_data(const char *);
	void set_data(const void *, size_t);
	string * mutable_data();
	string * release_data();
	void set_allocated_data(string *);
	void set_has_data();
	void clear_has_data();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:3386
class CDOTAClientMsg_DemoHero : public Message {
public:

	static const int kHeroIdFieldNumber = 1;
	static const int kHeroIdToSpawnFieldNumber = 2;
	static const int kItemDefsFieldNumber = 3;
	static const int kItemIdsFieldNumber = 4;
	static const int kStyleIndexFieldNumber = 5;
	static const int kKeepExistingDemoheroFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 hero_id_;  // +0x18
	int32 hero_id_to_spawn_;  // +0x1c
	uint32 style_index_;  // +0x40
	bool keep_existing_demohero_;  // +0x44

	static CDOTAClientMsg_DemoHero * default_instance_;
	CDOTAClientMsg_DemoHero();
	virtual ~CDOTAClientMsg_DemoHero();
	CDOTAClientMsg_DemoHero(const CDOTAClientMsg_DemoHero &);
	CDOTAClientMsg_DemoHero & operator=(const CDOTAClientMsg_DemoHero &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_DemoHero & default_instance();
	void Swap(CDOTAClientMsg_DemoHero *);
	virtual CDOTAClientMsg_DemoHero * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_DemoHero &);
	void MergeFrom(const CDOTAClientMsg_DemoHero &);
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
	bool has_hero_id();
	void clear_hero_id();
	int32 hero_id();
	void set_hero_id(int32);
	bool has_hero_id_to_spawn();
	void clear_hero_id_to_spawn();
	int32 hero_id_to_spawn();
	void set_hero_id_to_spawn(int32);
	int item_defs_size();
	void clear_item_defs();
	uint32 item_defs(int);
	void set_item_defs(int, uint32);
	void add_item_defs(uint32);
	const RepeatedField<unsigned int> & item_defs();
	RepeatedField<unsigned int> * mutable_item_defs();
	int item_ids_size();
	void clear_item_ids();
	uint64 item_ids(int);
	void set_item_ids(int, uint64);
	void add_item_ids(uint64);
	const RepeatedField<long unsigned int> & item_ids();
	RepeatedField<long unsigned int> * mutable_item_ids();
	bool has_style_index();
	void clear_style_index();
	uint32 style_index();
	void set_style_index(uint32);
	bool has_keep_existing_demohero();
	void clear_keep_existing_demohero();
	bool keep_existing_demohero();
	void set_keep_existing_demohero(bool);
	void set_has_hero_id();
	void clear_has_hero_id();
	void set_has_hero_id_to_spawn();
	void clear_has_hero_id_to_spawn();
	void set_has_style_index();
	void clear_has_style_index();
	void set_has_keep_existing_demohero();
	void clear_has_keep_existing_demohero();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:3521
class CDOTAClientMsg_ChallengeSelect : public Message {
public:

	static const int kEventIdFieldNumber = 1;
	static const int kSlotIdFieldNumber = 2;
	static const int kSequenceIdFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 event_id_;  // +0x18
	uint32 slot_id_;  // +0x1c
	uint32 sequence_id_;  // +0x20

	static CDOTAClientMsg_ChallengeSelect * default_instance_;
	CDOTAClientMsg_ChallengeSelect();
	virtual ~CDOTAClientMsg_ChallengeSelect();
	CDOTAClientMsg_ChallengeSelect(const CDOTAClientMsg_ChallengeSelect &);
	CDOTAClientMsg_ChallengeSelect & operator=(const CDOTAClientMsg_ChallengeSelect &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_ChallengeSelect & default_instance();
	void Swap(CDOTAClientMsg_ChallengeSelect *);
	virtual CDOTAClientMsg_ChallengeSelect * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_ChallengeSelect &);
	void MergeFrom(const CDOTAClientMsg_ChallengeSelect &);
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
	bool has_event_id();
	void clear_event_id();
	uint32 event_id();
	void set_event_id(uint32);
	bool has_slot_id();
	void clear_slot_id();
	uint32 slot_id();
	void set_slot_id(uint32);
	bool has_sequence_id();
	void clear_sequence_id();
	uint32 sequence_id();
	void set_sequence_id(uint32);
	void set_has_event_id();
	void clear_has_event_id();
	void set_has_slot_id();
	void clear_has_slot_id();
	void set_has_sequence_id();
	void clear_has_sequence_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:3620
class CDOTAClientMsg_ChallengeReroll : public Message {
public:

	static const int kEventIdFieldNumber = 1;
	static const int kSlotIdFieldNumber = 2;
	static const int kSequenceIdFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 event_id_;  // +0x18
	uint32 slot_id_;  // +0x1c
	uint32 sequence_id_;  // +0x20

	static CDOTAClientMsg_ChallengeReroll * default_instance_;
	CDOTAClientMsg_ChallengeReroll();
	virtual ~CDOTAClientMsg_ChallengeReroll();
	CDOTAClientMsg_ChallengeReroll(const CDOTAClientMsg_ChallengeReroll &);
	CDOTAClientMsg_ChallengeReroll & operator=(const CDOTAClientMsg_ChallengeReroll &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_ChallengeReroll & default_instance();
	void Swap(CDOTAClientMsg_ChallengeReroll *);
	virtual CDOTAClientMsg_ChallengeReroll * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_ChallengeReroll &);
	void MergeFrom(const CDOTAClientMsg_ChallengeReroll &);
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
	bool has_event_id();
	void clear_event_id();
	uint32 event_id();
	void set_event_id(uint32);
	bool has_slot_id();
	void clear_slot_id();
	uint32 slot_id();
	void set_slot_id(uint32);
	bool has_sequence_id();
	void clear_sequence_id();
	uint32 sequence_id();
	void set_sequence_id(uint32);
	void set_has_event_id();
	void clear_has_event_id();
	void set_has_slot_id();
	void clear_has_slot_id();
	void set_has_sequence_id();
	void clear_has_sequence_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:3719
class CDOTAClientMsg_CoinWager : public Message {
public:

	static const int kWagerAmountFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 wager_amount_;  // +0x18

	static CDOTAClientMsg_CoinWager * default_instance_;
	CDOTAClientMsg_CoinWager();
	virtual ~CDOTAClientMsg_CoinWager();
	CDOTAClientMsg_CoinWager(const CDOTAClientMsg_CoinWager &);
	CDOTAClientMsg_CoinWager & operator=(const CDOTAClientMsg_CoinWager &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_CoinWager & default_instance();
	void Swap(CDOTAClientMsg_CoinWager *);
	virtual CDOTAClientMsg_CoinWager * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_CoinWager &);
	void MergeFrom(const CDOTAClientMsg_CoinWager &);
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
	bool has_wager_amount();
	void clear_wager_amount();
	uint32 wager_amount();
	void set_wager_amount(uint32);
	void set_has_wager_amount();
	void clear_has_wager_amount();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:3798
class CDOTAClientMsg_EventPointsTip : public Message {
public:

	static const int kRecipientPlayerIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 recipient_player_id_;  // +0x18

	static CDOTAClientMsg_EventPointsTip * default_instance_;
	CDOTAClientMsg_EventPointsTip();
	virtual ~CDOTAClientMsg_EventPointsTip();
	CDOTAClientMsg_EventPointsTip(const CDOTAClientMsg_EventPointsTip &);
	CDOTAClientMsg_EventPointsTip & operator=(const CDOTAClientMsg_EventPointsTip &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_EventPointsTip & default_instance();
	void Swap(CDOTAClientMsg_EventPointsTip *);
	virtual CDOTAClientMsg_EventPointsTip * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_EventPointsTip &);
	void MergeFrom(const CDOTAClientMsg_EventPointsTip &);
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
	bool has_recipient_player_id();
	void clear_recipient_player_id();
	uint32 recipient_player_id();
	void set_recipient_player_id(uint32);
	void set_has_recipient_player_id();
	void clear_has_recipient_player_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:3877
class CDOTAClientMsg_ExecuteOrders : public Message {
public:

	static const int kOrdersFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CDOTAClientMsg_ExecuteOrders * default_instance_;
	CDOTAClientMsg_ExecuteOrders();
	virtual ~CDOTAClientMsg_ExecuteOrders();
	CDOTAClientMsg_ExecuteOrders(const CDOTAClientMsg_ExecuteOrders &);
	CDOTAClientMsg_ExecuteOrders & operator=(const CDOTAClientMsg_ExecuteOrders &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_ExecuteOrders & default_instance();
	void Swap(CDOTAClientMsg_ExecuteOrders *);
	virtual CDOTAClientMsg_ExecuteOrders * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_ExecuteOrders &);
	void MergeFrom(const CDOTAClientMsg_ExecuteOrders &);
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
	int orders_size();
	void clear_orders();
	const CDOTAMsg_UnitOrder & orders(int);
	CDOTAMsg_UnitOrder * mutable_orders(int);
	CDOTAMsg_UnitOrder * add_orders();
	const RepeatedPtrField<CDOTAMsg_UnitOrder> & orders();
	RepeatedPtrField<CDOTAMsg_UnitOrder> * mutable_orders();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:3959
class CDOTAClientMsg_XPAlert : public Message {
public:

	static const int kTargetEntindexFieldNumber = 1;
	static const int kDamageTakenFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 target_entindex_;  // +0x18
	uint32 damage_taken_;  // +0x1c

	static CDOTAClientMsg_XPAlert * default_instance_;
	CDOTAClientMsg_XPAlert();
	virtual ~CDOTAClientMsg_XPAlert();
	CDOTAClientMsg_XPAlert(const CDOTAClientMsg_XPAlert &);
	CDOTAClientMsg_XPAlert & operator=(const CDOTAClientMsg_XPAlert &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_XPAlert & default_instance();
	void Swap(CDOTAClientMsg_XPAlert *);
	virtual CDOTAClientMsg_XPAlert * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_XPAlert &);
	void MergeFrom(const CDOTAClientMsg_XPAlert &);
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
	bool has_target_entindex();
	void clear_target_entindex();
	uint32 target_entindex();
	void set_target_entindex(uint32);
	bool has_damage_taken();
	void clear_damage_taken();
	uint32 damage_taken();
	void set_damage_taken(uint32);
	void set_has_target_entindex();
	void clear_has_target_entindex();
	void set_has_damage_taken();
	void clear_has_damage_taken();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:4048
class CDOTAClientMsg_KillcamDamageTaken : public Message {
public:

	static const int kTargetEntindexFieldNumber = 1;
	static const int kDamageTakenFieldNumber = 2;
	static const int kItemTypeFieldNumber = 3;
	static const int kItemIdFieldNumber = 4;
	static const int kHeroNameFieldNumber = 5;
	static const int kDamageColorFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 target_entindex_;  // +0x18
	uint32 damage_taken_;  // +0x1c
	uint32 item_type_;  // +0x20
	uint32 item_id_;  // +0x24
	string * hero_name_;  // +0x28
	string * damage_color_;  // +0x30

	static CDOTAClientMsg_KillcamDamageTaken * default_instance_;
	CDOTAClientMsg_KillcamDamageTaken();
	virtual ~CDOTAClientMsg_KillcamDamageTaken();
	CDOTAClientMsg_KillcamDamageTaken(const CDOTAClientMsg_KillcamDamageTaken &);
	CDOTAClientMsg_KillcamDamageTaken & operator=(const CDOTAClientMsg_KillcamDamageTaken &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_KillcamDamageTaken & default_instance();
	void Swap(CDOTAClientMsg_KillcamDamageTaken *);
	virtual CDOTAClientMsg_KillcamDamageTaken * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_KillcamDamageTaken &);
	void MergeFrom(const CDOTAClientMsg_KillcamDamageTaken &);
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
	bool has_target_entindex();
	void clear_target_entindex();
	uint32 target_entindex();
	void set_target_entindex(uint32);
	bool has_damage_taken();
	void clear_damage_taken();
	uint32 damage_taken();
	void set_damage_taken(uint32);
	bool has_item_type();
	void clear_item_type();
	uint32 item_type();
	void set_item_type(uint32);
	bool has_item_id();
	void clear_item_id();
	uint32 item_id();
	void set_item_id(uint32);
	bool has_hero_name();
	void clear_hero_name();
	const string & hero_name();
	void set_hero_name(const string &);
	void set_hero_name(const char *);
	void set_hero_name(const char *, size_t);
	string * mutable_hero_name();
	string * release_hero_name();
	void set_allocated_hero_name(string *);
	bool has_damage_color();
	void clear_damage_color();
	const string & damage_color();
	void set_damage_color(const string &);
	void set_damage_color(const char *);
	void set_damage_color(const char *, size_t);
	string * mutable_damage_color();
	string * release_damage_color();
	void set_allocated_damage_color(string *);
	void set_has_target_entindex();
	void clear_has_target_entindex();
	void set_has_damage_taken();
	void clear_has_damage_taken();
	void set_has_item_type();
	void clear_has_item_type();
	void set_has_item_id();
	void clear_has_item_id();
	void set_has_hero_name();
	void clear_has_hero_name();
	void set_has_damage_color();
	void clear_has_damage_color();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:4187
class CDOTAClientMsg_MatchMetadata : public Message {
public:

	static const int kMatchIdFieldNumber = 1;
	static const int kMetadataFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 match_id_;  // +0x18
	string * metadata_;  // +0x20

	static CDOTAClientMsg_MatchMetadata * default_instance_;
	CDOTAClientMsg_MatchMetadata();
	virtual ~CDOTAClientMsg_MatchMetadata();
	CDOTAClientMsg_MatchMetadata(const CDOTAClientMsg_MatchMetadata &);
	CDOTAClientMsg_MatchMetadata & operator=(const CDOTAClientMsg_MatchMetadata &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_MatchMetadata & default_instance();
	void Swap(CDOTAClientMsg_MatchMetadata *);
	virtual CDOTAClientMsg_MatchMetadata * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_MatchMetadata &);
	void MergeFrom(const CDOTAClientMsg_MatchMetadata &);
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
	bool has_match_id();
	void clear_match_id();
	uint64 match_id();
	void set_match_id(uint64);
	bool has_metadata();
	void clear_metadata();
	const string & metadata();
	void set_metadata(const string &);
	void set_metadata(const char *);
	void set_metadata(const void *, size_t);
	string * mutable_metadata();
	string * release_metadata();
	void set_allocated_metadata(string *);
	void set_has_match_id();
	void clear_has_match_id();
	void set_has_metadata();
	void clear_has_metadata();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:4281
class CDOTAClientMsg_KillMyHero : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CDOTAClientMsg_KillMyHero * default_instance_;
	CDOTAClientMsg_KillMyHero();
	virtual ~CDOTAClientMsg_KillMyHero();
	CDOTAClientMsg_KillMyHero(const CDOTAClientMsg_KillMyHero &);
	CDOTAClientMsg_KillMyHero & operator=(const CDOTAClientMsg_KillMyHero &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_KillMyHero & default_instance();
	void Swap(CDOTAClientMsg_KillMyHero *);
	virtual CDOTAClientMsg_KillMyHero * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_KillMyHero &);
	void MergeFrom(const CDOTAClientMsg_KillMyHero &);
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:4350
class CDOTAClientMsg_QuestStatus : public Message {
public:

	static const int kQuestIdFieldNumber = 1;
	static const int kChallengeIdFieldNumber = 2;
	static const int kProgressFieldNumber = 3;
	static const int kGoalFieldNumber = 4;
	static const int kQueryFieldNumber = 5;
	static const int kFailGametimeFieldNumber = 6;
	static const int kItemIdFieldNumber = 7;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 quest_id_;  // +0x18
	uint32 challenge_id_;  // +0x1c
	uint32 progress_;  // +0x20
	uint32 goal_;  // +0x24
	uint32 query_;  // +0x28
	float fail_gametime_;  // +0x2c
	uint32 item_id_;  // +0x30

	static CDOTAClientMsg_QuestStatus * default_instance_;
	CDOTAClientMsg_QuestStatus();
	virtual ~CDOTAClientMsg_QuestStatus();
	CDOTAClientMsg_QuestStatus(const CDOTAClientMsg_QuestStatus &);
	CDOTAClientMsg_QuestStatus & operator=(const CDOTAClientMsg_QuestStatus &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_QuestStatus & default_instance();
	void Swap(CDOTAClientMsg_QuestStatus *);
	virtual CDOTAClientMsg_QuestStatus * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_QuestStatus &);
	void MergeFrom(const CDOTAClientMsg_QuestStatus &);
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
	bool has_quest_id();
	void clear_quest_id();
	uint32 quest_id();
	void set_quest_id(uint32);
	bool has_challenge_id();
	void clear_challenge_id();
	uint32 challenge_id();
	void set_challenge_id(uint32);
	bool has_progress();
	void clear_progress();
	uint32 progress();
	void set_progress(uint32);
	bool has_goal();
	void clear_goal();
	uint32 goal();
	void set_goal(uint32);
	bool has_query();
	void clear_query();
	uint32 query();
	void set_query(uint32);
	bool has_fail_gametime();
	void clear_fail_gametime();
	float fail_gametime();
	void set_fail_gametime(float);
	bool has_item_id();
	void clear_item_id();
	uint32 item_id();
	void set_item_id(uint32);
	void set_has_quest_id();
	void clear_has_quest_id();
	void set_has_challenge_id();
	void clear_has_challenge_id();
	void set_has_progress();
	void clear_has_progress();
	void set_has_goal();
	void clear_has_goal();
	void set_has_query();
	void clear_has_query();
	void set_has_fail_gametime();
	void clear_has_fail_gametime();
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
	// sizeof = 56
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:4489
class CDOTAClientMsg_ToggleAutoattack : public Message {
public:

	static const int kModeFieldNumber = 1;
	static const int kShowMessageFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 mode_;  // +0x18
	bool show_message_;  // +0x1c

	static CDOTAClientMsg_ToggleAutoattack * default_instance_;
	CDOTAClientMsg_ToggleAutoattack();
	virtual ~CDOTAClientMsg_ToggleAutoattack();
	CDOTAClientMsg_ToggleAutoattack(const CDOTAClientMsg_ToggleAutoattack &);
	CDOTAClientMsg_ToggleAutoattack & operator=(const CDOTAClientMsg_ToggleAutoattack &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_ToggleAutoattack & default_instance();
	void Swap(CDOTAClientMsg_ToggleAutoattack *);
	virtual CDOTAClientMsg_ToggleAutoattack * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_ToggleAutoattack &);
	void MergeFrom(const CDOTAClientMsg_ToggleAutoattack &);
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
	bool has_mode();
	void clear_mode();
	int32 mode();
	void set_mode(int32);
	bool has_show_message();
	void clear_show_message();
	bool show_message();
	void set_show_message(bool);
	void set_has_mode();
	void clear_has_mode();
	void set_has_show_message();
	void clear_has_show_message();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:4578
class CDOTAClientMsg_SpecialAbility : public Message {
public:

	static const int kAbilityIndexFieldNumber = 1;
	static const int kTargetEntindexFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 ability_index_;  // +0x18
	uint32 target_entindex_;  // +0x1c

	static CDOTAClientMsg_SpecialAbility * default_instance_;
	CDOTAClientMsg_SpecialAbility();
	virtual ~CDOTAClientMsg_SpecialAbility();
	CDOTAClientMsg_SpecialAbility(const CDOTAClientMsg_SpecialAbility &);
	CDOTAClientMsg_SpecialAbility & operator=(const CDOTAClientMsg_SpecialAbility &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_SpecialAbility & default_instance();
	void Swap(CDOTAClientMsg_SpecialAbility *);
	virtual CDOTAClientMsg_SpecialAbility * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_SpecialAbility &);
	void MergeFrom(const CDOTAClientMsg_SpecialAbility &);
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
	bool has_ability_index();
	void clear_ability_index();
	uint32 ability_index();
	void set_ability_index(uint32);
	bool has_target_entindex();
	void clear_target_entindex();
	uint32 target_entindex();
	void set_target_entindex(uint32);
	void set_has_ability_index();
	void clear_has_ability_index();
	void set_has_target_entindex();
	void clear_has_target_entindex();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:4667
class CDOTAClientMsg_SetEnemyStartingPosition : public Message {
public:

	static const int kEnemyPlayerIdFieldNumber = 1;
	static const int kEnemyStartingPositionFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 enemy_player_id_;  // +0x18
	uint32 enemy_starting_position_;  // +0x1c

	static CDOTAClientMsg_SetEnemyStartingPosition * default_instance_;
	CDOTAClientMsg_SetEnemyStartingPosition();
	virtual ~CDOTAClientMsg_SetEnemyStartingPosition();
	CDOTAClientMsg_SetEnemyStartingPosition(const CDOTAClientMsg_SetEnemyStartingPosition &);
	CDOTAClientMsg_SetEnemyStartingPosition & operator=(const CDOTAClientMsg_SetEnemyStartingPosition &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_SetEnemyStartingPosition & default_instance();
	void Swap(CDOTAClientMsg_SetEnemyStartingPosition *);
	virtual CDOTAClientMsg_SetEnemyStartingPosition * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_SetEnemyStartingPosition &);
	void MergeFrom(const CDOTAClientMsg_SetEnemyStartingPosition &);
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
	bool has_enemy_player_id();
	void clear_enemy_player_id();
	uint32 enemy_player_id();
	void set_enemy_player_id(uint32);
	bool has_enemy_starting_position();
	void clear_enemy_starting_position();
	uint32 enemy_starting_position();
	void set_enemy_starting_position(uint32);
	void set_has_enemy_player_id();
	void clear_has_enemy_player_id();
	void set_has_enemy_starting_position();
	void clear_has_enemy_starting_position();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:4756
class CDOTAClientMsg_SetDesiredWardPlacement : public Message {
public:

	static const int kWardIndexFieldNumber = 1;
	static const int kWardXFieldNumber = 2;
	static const int kWardYFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 ward_index_;  // +0x18
	float ward_x_;  // +0x1c
	float ward_y_;  // +0x20

	static CDOTAClientMsg_SetDesiredWardPlacement * default_instance_;
	CDOTAClientMsg_SetDesiredWardPlacement();
	virtual ~CDOTAClientMsg_SetDesiredWardPlacement();
	CDOTAClientMsg_SetDesiredWardPlacement(const CDOTAClientMsg_SetDesiredWardPlacement &);
	CDOTAClientMsg_SetDesiredWardPlacement & operator=(const CDOTAClientMsg_SetDesiredWardPlacement &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_SetDesiredWardPlacement & default_instance();
	void Swap(CDOTAClientMsg_SetDesiredWardPlacement *);
	virtual CDOTAClientMsg_SetDesiredWardPlacement * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_SetDesiredWardPlacement &);
	void MergeFrom(const CDOTAClientMsg_SetDesiredWardPlacement &);
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
	bool has_ward_index();
	void clear_ward_index();
	uint32 ward_index();
	void set_ward_index(uint32);
	bool has_ward_x();
	void clear_ward_x();
	float ward_x();
	void set_ward_x(float);
	bool has_ward_y();
	void clear_ward_y();
	float ward_y();
	void set_ward_y(float);
	void set_has_ward_index();
	void clear_has_ward_index();
	void set_has_ward_x();
	void clear_has_ward_x();
	void set_has_ward_y();
	void clear_has_ward_y();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:4855
class CDOTAClientMsg_RollDice : public Message {
public:

	static const int kChannelTypeFieldNumber = 1;
	static const int kRollMinFieldNumber = 2;
	static const int kRollMaxFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 channel_type_;  // +0x18
	uint32 roll_min_;  // +0x1c
	uint32 roll_max_;  // +0x20

	static CDOTAClientMsg_RollDice * default_instance_;
	CDOTAClientMsg_RollDice();
	virtual ~CDOTAClientMsg_RollDice();
	CDOTAClientMsg_RollDice(const CDOTAClientMsg_RollDice &);
	CDOTAClientMsg_RollDice & operator=(const CDOTAClientMsg_RollDice &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_RollDice & default_instance();
	void Swap(CDOTAClientMsg_RollDice *);
	virtual CDOTAClientMsg_RollDice * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_RollDice &);
	void MergeFrom(const CDOTAClientMsg_RollDice &);
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
	bool has_channel_type();
	void clear_channel_type();
	uint32 channel_type();
	void set_channel_type(uint32);
	bool has_roll_min();
	void clear_roll_min();
	uint32 roll_min();
	void set_roll_min(uint32);
	bool has_roll_max();
	void clear_roll_max();
	uint32 roll_max();
	void set_roll_max(uint32);
	void set_has_channel_type();
	void clear_has_channel_type();
	void set_has_roll_min();
	void clear_has_roll_min();
	void set_has_roll_max();
	void clear_has_roll_max();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_clientmessages.pb.h:4954
class CDOTAClientMsg_FlipCoin : public Message {
public:

	static const int kChannelTypeFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 channel_type_;  // +0x18

	static CDOTAClientMsg_FlipCoin * default_instance_;
	CDOTAClientMsg_FlipCoin();
	virtual ~CDOTAClientMsg_FlipCoin();
	CDOTAClientMsg_FlipCoin(const CDOTAClientMsg_FlipCoin &);
	CDOTAClientMsg_FlipCoin & operator=(const CDOTAClientMsg_FlipCoin &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientMsg_FlipCoin & default_instance();
	void Swap(CDOTAClientMsg_FlipCoin *);
	virtual CDOTAClientMsg_FlipCoin * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientMsg_FlipCoin &);
	void MergeFrom(const CDOTAClientMsg_FlipCoin &);
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
	bool has_channel_type();
	void clear_channel_type();
	uint32 channel_type();
	void set_channel_type(uint32);
	void set_has_channel_type();
	void clear_has_channel_type();
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
