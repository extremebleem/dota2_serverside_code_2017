// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:259
class CUserMessageAchievementEvent : public Message {
public:

	static const int kAchievementFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 achievement_;  // +0x18

	static CUserMessageAchievementEvent * default_instance_;
	CUserMessageAchievementEvent();
	virtual ~CUserMessageAchievementEvent();
	CUserMessageAchievementEvent(const CUserMessageAchievementEvent &);
	CUserMessageAchievementEvent & operator=(const CUserMessageAchievementEvent &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageAchievementEvent & default_instance();
	void Swap(CUserMessageAchievementEvent *);
	virtual CUserMessageAchievementEvent * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageAchievementEvent &);
	void MergeFrom(const CUserMessageAchievementEvent &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_achievement();
	void clear_achievement();
	uint32 achievement();
	void set_achievement(uint32);
	void set_has_achievement();
	void clear_has_achievement();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:338
class CUserMessageCloseCaption : public Message {
public:

	static const int kHashFieldNumber = 1;
	static const int kDurationFieldNumber = 2;
	static const int kFromPlayerFieldNumber = 3;
	static const int kEntIndexFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 hash_;  // +0x18
	float duration_;  // +0x1c
	bool from_player_;  // +0x20

	int32 ent_index_;  // +0x24

	static CUserMessageCloseCaption * default_instance_;
	CUserMessageCloseCaption();
	virtual ~CUserMessageCloseCaption();
	CUserMessageCloseCaption(const CUserMessageCloseCaption &);
	CUserMessageCloseCaption & operator=(const CUserMessageCloseCaption &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageCloseCaption & default_instance();
	void Swap(CUserMessageCloseCaption *);
	virtual CUserMessageCloseCaption * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageCloseCaption &);
	void MergeFrom(const CUserMessageCloseCaption &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_hash();
	void clear_hash();
	uint32 hash();
	void set_hash(uint32);
	bool has_duration();
	void clear_duration();
	float duration();
	void set_duration(float);
	bool has_from_player();
	void clear_from_player();
	bool from_player();
	void set_from_player(bool);
	bool has_ent_index();
	void clear_ent_index();
	int32 ent_index();
	void set_ent_index(int32);
	void set_has_hash();
	void clear_has_hash();
	void set_has_duration();
	void clear_has_duration();
	void set_has_from_player();
	void clear_has_from_player();
	void set_has_ent_index();
	void clear_has_ent_index();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:447
class CUserMessageCloseCaptionDirect : public Message {
public:

	static const int kHashFieldNumber = 1;
	static const int kDurationFieldNumber = 2;
	static const int kFromPlayerFieldNumber = 3;
	static const int kEntIndexFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 hash_;  // +0x18
	float duration_;  // +0x1c
	bool from_player_;  // +0x20

	int32 ent_index_;  // +0x24

	static CUserMessageCloseCaptionDirect * default_instance_;
	CUserMessageCloseCaptionDirect();
	virtual ~CUserMessageCloseCaptionDirect();
	CUserMessageCloseCaptionDirect(const CUserMessageCloseCaptionDirect &);
	CUserMessageCloseCaptionDirect & operator=(const CUserMessageCloseCaptionDirect &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageCloseCaptionDirect & default_instance();
	void Swap(CUserMessageCloseCaptionDirect *);
	virtual CUserMessageCloseCaptionDirect * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageCloseCaptionDirect &);
	void MergeFrom(const CUserMessageCloseCaptionDirect &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_hash();
	void clear_hash();
	uint32 hash();
	void set_hash(uint32);
	bool has_duration();
	void clear_duration();
	float duration();
	void set_duration(float);
	bool has_from_player();
	void clear_from_player();
	bool from_player();
	void set_from_player(bool);
	bool has_ent_index();
	void clear_ent_index();
	int32 ent_index();
	void set_ent_index(int32);
	void set_has_hash();
	void clear_has_hash();
	void set_has_duration();
	void clear_has_duration();
	void set_has_from_player();
	void clear_has_from_player();
	void set_has_ent_index();
	void clear_has_ent_index();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:556
class CUserMessageCloseCaptionPlaceholder : public Message {
public:

	static const int kStringFieldNumber = 1;
	static const int kDurationFieldNumber = 2;
	static const int kFromPlayerFieldNumber = 3;
	static const int kEntIndexFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * string_;  // +0x18
	float duration_;  // +0x20
	bool from_player_;  // +0x24

	int32 ent_index_;  // +0x28

	static CUserMessageCloseCaptionPlaceholder * default_instance_;
	CUserMessageCloseCaptionPlaceholder();
	virtual ~CUserMessageCloseCaptionPlaceholder();
	CUserMessageCloseCaptionPlaceholder(const CUserMessageCloseCaptionPlaceholder &);
	CUserMessageCloseCaptionPlaceholder & operator=(const CUserMessageCloseCaptionPlaceholder &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageCloseCaptionPlaceholder & default_instance();
	void Swap(CUserMessageCloseCaptionPlaceholder *);
	virtual CUserMessageCloseCaptionPlaceholder * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageCloseCaptionPlaceholder &);
	void MergeFrom(const CUserMessageCloseCaptionPlaceholder &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_string();
	void clear_string();
	const string & string();
	void set_string(const string &);
	void set_string(const char *);
	void set_string(const char *, size_t);
	string * mutable_string();
	string * release_string();
	void set_allocated_string(string *);
	bool has_duration();
	void clear_duration();
	float duration();
	void set_duration(float);
	bool has_from_player();
	void clear_from_player();
	bool from_player();
	void set_from_player(bool);
	bool has_ent_index();
	void clear_ent_index();
	int32 ent_index();
	void set_ent_index(int32);
	void set_has_string();
	void clear_has_string();
	void set_has_duration();
	void clear_has_duration();
	void set_has_from_player();
	void clear_has_from_player();
	void set_has_ent_index();
	void clear_has_ent_index();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:670
class CUserMessageCurrentTimescale : public Message {
public:

	static const int kCurrentFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	float current_;  // +0x18

	static CUserMessageCurrentTimescale * default_instance_;
	CUserMessageCurrentTimescale();
	virtual ~CUserMessageCurrentTimescale();
	CUserMessageCurrentTimescale(const CUserMessageCurrentTimescale &);
	CUserMessageCurrentTimescale & operator=(const CUserMessageCurrentTimescale &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageCurrentTimescale & default_instance();
	void Swap(CUserMessageCurrentTimescale *);
	virtual CUserMessageCurrentTimescale * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageCurrentTimescale &);
	void MergeFrom(const CUserMessageCurrentTimescale &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_current();
	void clear_current();
	float current();
	void set_current(float);
	void set_has_current();
	void clear_has_current();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:749
class CUserMessageDesiredTimescale : public Message {
public:

	static const int kDesiredFieldNumber = 1;
	static const int kAccelerationFieldNumber = 2;
	static const int kMinblendrateFieldNumber = 3;
	static const int kBlenddeltamultiplierFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	float desired_;  // +0x18
	float acceleration_;  // +0x1c
	float minblendrate_;  // +0x20
	float blenddeltamultiplier_;  // +0x24

	static CUserMessageDesiredTimescale * default_instance_;
	CUserMessageDesiredTimescale();
	virtual ~CUserMessageDesiredTimescale();
	CUserMessageDesiredTimescale(const CUserMessageDesiredTimescale &);
	CUserMessageDesiredTimescale & operator=(const CUserMessageDesiredTimescale &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageDesiredTimescale & default_instance();
	void Swap(CUserMessageDesiredTimescale *);
	virtual CUserMessageDesiredTimescale * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageDesiredTimescale &);
	void MergeFrom(const CUserMessageDesiredTimescale &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_desired();
	void clear_desired();
	float desired();
	void set_desired(float);
	bool has_acceleration();
	void clear_acceleration();
	float acceleration();
	void set_acceleration(float);
	bool has_minblendrate();
	void clear_minblendrate();
	float minblendrate();
	void set_minblendrate(float);
	bool has_blenddeltamultiplier();
	void clear_blenddeltamultiplier();
	float blenddeltamultiplier();
	void set_blenddeltamultiplier(float);
	void set_has_desired();
	void clear_has_desired();
	void set_has_acceleration();
	void clear_has_acceleration();
	void set_has_minblendrate();
	void clear_has_minblendrate();
	void set_has_blenddeltamultiplier();
	void clear_has_blenddeltamultiplier();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:858
class CUserMessageFade : public Message {
public:

	static const int kDurationFieldNumber = 1;
	static const int kHoldTimeFieldNumber = 2;
	static const int kFlagsFieldNumber = 3;
	static const int kColorFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 duration_;  // +0x18
	uint32 hold_time_;  // +0x1c
	uint32 flags_;  // +0x20
	uint32 color_;  // +0x24

	static CUserMessageFade * default_instance_;
	CUserMessageFade();
	virtual ~CUserMessageFade();
	CUserMessageFade(const CUserMessageFade &);
	CUserMessageFade & operator=(const CUserMessageFade &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageFade & default_instance();
	void Swap(CUserMessageFade *);
	virtual CUserMessageFade * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageFade &);
	void MergeFrom(const CUserMessageFade &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_duration();
	void clear_duration();
	uint32 duration();
	void set_duration(uint32);
	bool has_hold_time();
	void clear_hold_time();
	uint32 hold_time();
	void set_hold_time(uint32);
	bool has_flags();
	void clear_flags();
	uint32 flags();
	void set_flags(uint32);
	bool has_color();
	void clear_color();
	uint32 color();
	void set_color(uint32);
	void set_has_duration();
	void clear_has_duration();
	void set_has_hold_time();
	void clear_has_hold_time();
	void set_has_flags();
	void clear_has_flags();
	void set_has_color();
	void clear_has_color();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:967
class CUserMessageShake : public Message {
public:

	static const int kCommandFieldNumber = 1;
	static const int kAmplitudeFieldNumber = 2;
	static const int kFrequencyFieldNumber = 3;
	static const int kDurationFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 command_;  // +0x18
	float amplitude_;  // +0x1c
	float frequency_;  // +0x20
	float duration_;  // +0x24

	static CUserMessageShake * default_instance_;
	CUserMessageShake();
	virtual ~CUserMessageShake();
	CUserMessageShake(const CUserMessageShake &);
	CUserMessageShake & operator=(const CUserMessageShake &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageShake & default_instance();
	void Swap(CUserMessageShake *);
	virtual CUserMessageShake * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageShake &);
	void MergeFrom(const CUserMessageShake &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_command();
	void clear_command();
	uint32 command();
	void set_command(uint32);
	bool has_amplitude();
	void clear_amplitude();
	float amplitude();
	void set_amplitude(float);
	bool has_frequency();
	void clear_frequency();
	float frequency();
	void set_frequency(float);
	bool has_duration();
	void clear_duration();
	float duration();
	void set_duration(float);
	void set_has_command();
	void clear_has_command();
	void set_has_amplitude();
	void clear_has_amplitude();
	void set_has_frequency();
	void clear_has_frequency();
	void set_has_duration();
	void clear_has_duration();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:1076
class CUserMessageShakeDir : public Message {
public:

	static const int kShakeFieldNumber = 1;
	static const int kDirectionFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CUserMessageShakeDir * default_instance_;
	CUserMessageShakeDir();
	virtual ~CUserMessageShakeDir();
	CUserMessageShakeDir(const CUserMessageShakeDir &);
	CUserMessageShakeDir & operator=(const CUserMessageShakeDir &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageShakeDir & default_instance();
	void Swap(CUserMessageShakeDir *);
	virtual CUserMessageShakeDir * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageShakeDir &);
	void MergeFrom(const CUserMessageShakeDir &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_shake();
	void clear_shake();
	const CUserMessageShake & shake();
	CUserMessageShake * mutable_shake();
	CUserMessageShake * release_shake();
	void set_allocated_shake(CUserMessageShake *);
	bool has_direction();
	void clear_direction();
	const CMsgVector & direction();
	CMsgVector * mutable_direction();
	CMsgVector * release_direction();
	void set_allocated_direction(CMsgVector *);
	void set_has_shake();
	void clear_has_shake();
	void set_has_direction();
	void clear_has_direction();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:1169
class CUserMessageScreenTilt : public Message {
public:

	static const int kCommandFieldNumber = 1;
	static const int kEaseInOutFieldNumber = 2;
	static const int kAngleFieldNumber = 3;
	static const int kDurationFieldNumber = 4;
	static const int kTimeFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 command_;  // +0x18
	bool ease_in_out_;  // +0x1c

	float duration_;  // +0x28
	float time_;  // +0x2c

	static CUserMessageScreenTilt * default_instance_;
	CUserMessageScreenTilt();
	virtual ~CUserMessageScreenTilt();
	CUserMessageScreenTilt(const CUserMessageScreenTilt &);
	CUserMessageScreenTilt & operator=(const CUserMessageScreenTilt &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageScreenTilt & default_instance();
	void Swap(CUserMessageScreenTilt *);
	virtual CUserMessageScreenTilt * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageScreenTilt &);
	void MergeFrom(const CUserMessageScreenTilt &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_command();
	void clear_command();
	uint32 command();
	void set_command(uint32);
	bool has_ease_in_out();
	void clear_ease_in_out();
	bool ease_in_out();
	void set_ease_in_out(bool);
	bool has_angle();
	void clear_angle();
	const CMsgVector & angle();
	CMsgVector * mutable_angle();
	CMsgVector * release_angle();
	void set_allocated_angle(CMsgVector *);
	bool has_duration();
	void clear_duration();
	float duration();
	void set_duration(float);
	bool has_time();
	void clear_time();
	float time();
	void set_time(float);
	void set_has_command();
	void clear_has_command();
	void set_has_ease_in_out();
	void clear_has_ease_in_out();
	void set_has_angle();
	void clear_has_angle();
	void set_has_duration();
	void clear_has_duration();
	void set_has_time();
	void clear_has_time();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:1290
class CUserMessageSayText : public Message {
public:

	static const int kPlayerindexFieldNumber = 1;
	static const int kTextFieldNumber = 2;
	static const int kChatFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * text_;  // +0x18
	uint32 playerindex_;  // +0x20
	bool chat_;  // +0x24

	static CUserMessageSayText * default_instance_;
	CUserMessageSayText();
	virtual ~CUserMessageSayText();
	CUserMessageSayText(const CUserMessageSayText &);
	CUserMessageSayText & operator=(const CUserMessageSayText &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageSayText & default_instance();
	void Swap(CUserMessageSayText *);
	virtual CUserMessageSayText * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageSayText &);
	void MergeFrom(const CUserMessageSayText &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_playerindex();
	void clear_playerindex();
	uint32 playerindex();
	void set_playerindex(uint32);
	bool has_text();
	void clear_text();
	const string & text();
	void set_text(const string &);
	void set_text(const char *);
	void set_text(const char *, size_t);
	string * mutable_text();
	string * release_text();
	void set_allocated_text(string *);
	bool has_chat();
	void clear_chat();
	bool chat();
	void set_chat(bool);
	void set_has_playerindex();
	void clear_has_playerindex();
	void set_has_text();
	void clear_has_text();
	void set_has_chat();
	void clear_has_chat();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:1394
class CUserMessageSayText2 : public Message {
public:

	static const int kEntityindexFieldNumber = 1;
	static const int kChatFieldNumber = 2;
	static const int kMessagenameFieldNumber = 3;
	static const int kParam1FieldNumber = 4;
	static const int kParam2FieldNumber = 5;
	static const int kParam3FieldNumber = 6;
	static const int kParam4FieldNumber = 7;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 entityindex_;  // +0x18
	bool chat_;  // +0x1c

	string * messagename_;  // +0x20
	string * param1_;  // +0x28
	string * param2_;  // +0x30
	string * param3_;  // +0x38
	string * param4_;  // +0x40

	static CUserMessageSayText2 * default_instance_;
	CUserMessageSayText2();
	virtual ~CUserMessageSayText2();
	CUserMessageSayText2(const CUserMessageSayText2 &);
	CUserMessageSayText2 & operator=(const CUserMessageSayText2 &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageSayText2 & default_instance();
	void Swap(CUserMessageSayText2 *);
	virtual CUserMessageSayText2 * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageSayText2 &);
	void MergeFrom(const CUserMessageSayText2 &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_entityindex();
	void clear_entityindex();
	uint32 entityindex();
	void set_entityindex(uint32);
	bool has_chat();
	void clear_chat();
	bool chat();
	void set_chat(bool);
	bool has_messagename();
	void clear_messagename();
	const string & messagename();
	void set_messagename(const string &);
	void set_messagename(const char *);
	void set_messagename(const char *, size_t);
	string * mutable_messagename();
	string * release_messagename();
	void set_allocated_messagename(string *);
	bool has_param1();
	void clear_param1();
	const string & param1();
	void set_param1(const string &);
	void set_param1(const char *);
	void set_param1(const char *, size_t);
	string * mutable_param1();
	string * release_param1();
	void set_allocated_param1(string *);
	bool has_param2();
	void clear_param2();
	const string & param2();
	void set_param2(const string &);
	void set_param2(const char *);
	void set_param2(const char *, size_t);
	string * mutable_param2();
	string * release_param2();
	void set_allocated_param2(string *);
	bool has_param3();
	void clear_param3();
	const string & param3();
	void set_param3(const string &);
	void set_param3(const char *);
	void set_param3(const char *, size_t);
	string * mutable_param3();
	string * release_param3();
	void set_allocated_param3(string *);
	bool has_param4();
	void clear_param4();
	const string & param4();
	void set_param4(const string &);
	void set_param4(const char *);
	void set_param4(const char *, size_t);
	string * mutable_param4();
	string * release_param4();
	void set_allocated_param4(string *);
	void set_has_entityindex();
	void clear_has_entityindex();
	void set_has_chat();
	void clear_has_chat();
	void set_has_messagename();
	void clear_has_messagename();
	void set_has_param1();
	void clear_has_param1();
	void set_has_param2();
	void clear_has_param2();
	void set_has_param3();
	void clear_has_param3();
	void set_has_param4();
	void clear_has_param4();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:1558
class CUserMessageHudMsg : public Message {
public:

	static const int kChannelFieldNumber = 1;
	static const int kXFieldNumber = 2;
	static const int kYFieldNumber = 3;
	static const int kColor1FieldNumber = 4;
	static const int kColor2FieldNumber = 5;
	static const int kEffectFieldNumber = 6;
	static const int kFadeInTimeFieldNumber = 7;
	static const int kFadeOutTimeFieldNumber = 8;
	static const int kHoldTimeFieldNumber = 9;
	static const int kFxTimeFieldNumber = 10;
	static const int kMessageFieldNumber = 11;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 channel_;  // +0x18
	float x_;  // +0x1c
	float y_;  // +0x20
	uint32 color1_;  // +0x24
	uint32 color2_;  // +0x28
	uint32 effect_;  // +0x2c
	float fade_in_time_;  // +0x30
	float fade_out_time_;  // +0x34
	float hold_time_;  // +0x38
	float fx_time_;  // +0x3c
	string * message_;  // +0x40

	static CUserMessageHudMsg * default_instance_;
	CUserMessageHudMsg();
	virtual ~CUserMessageHudMsg();
	CUserMessageHudMsg(const CUserMessageHudMsg &);
	CUserMessageHudMsg & operator=(const CUserMessageHudMsg &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageHudMsg & default_instance();
	void Swap(CUserMessageHudMsg *);
	virtual CUserMessageHudMsg * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageHudMsg &);
	void MergeFrom(const CUserMessageHudMsg &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_channel();
	void clear_channel();
	uint32 channel();
	void set_channel(uint32);
	bool has_x();
	void clear_x();
	float x();
	void set_x(float);
	bool has_y();
	void clear_y();
	float y();
	void set_y(float);
	bool has_color1();
	void clear_color1();
	uint32 color1();
	void set_color1(uint32);
	bool has_color2();
	void clear_color2();
	uint32 color2();
	void set_color2(uint32);
	bool has_effect();
	void clear_effect();
	uint32 effect();
	void set_effect(uint32);
	bool has_fade_in_time();
	void clear_fade_in_time();
	float fade_in_time();
	void set_fade_in_time(float);
	bool has_fade_out_time();
	void clear_fade_out_time();
	float fade_out_time();
	void set_fade_out_time(float);
	bool has_hold_time();
	void clear_hold_time();
	float hold_time();
	void set_hold_time(float);
	bool has_fx_time();
	void clear_fx_time();
	float fx_time();
	void set_fx_time(float);
	bool has_message();
	void clear_message();
	const string & message();
	void set_message(const string &);
	void set_message(const char *);
	void set_message(const char *, size_t);
	string * mutable_message();
	string * release_message();
	void set_allocated_message(string *);
	void set_has_channel();
	void clear_has_channel();
	void set_has_x();
	void clear_has_x();
	void set_has_y();
	void clear_has_y();
	void set_has_color1();
	void clear_has_color1();
	void set_has_color2();
	void clear_has_color2();
	void set_has_effect();
	void clear_has_effect();
	void set_has_fade_in_time();
	void clear_has_fade_in_time();
	void set_has_fade_out_time();
	void clear_has_fade_out_time();
	void set_has_hold_time();
	void clear_has_hold_time();
	void set_has_fx_time();
	void clear_has_fx_time();
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
	// sizeof = 72
};

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:1742
class CUserMessageHudText : public Message {
public:

	static const int kMessageFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * message_;  // +0x18

	static CUserMessageHudText * default_instance_;
	CUserMessageHudText();
	virtual ~CUserMessageHudText();
	CUserMessageHudText(const CUserMessageHudText &);
	CUserMessageHudText & operator=(const CUserMessageHudText &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageHudText & default_instance();
	void Swap(CUserMessageHudText *);
	virtual CUserMessageHudText * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageHudText &);
	void MergeFrom(const CUserMessageHudText &);
	virtual void Clear();
	virtual bool IsInitialized();
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:1826
class CUserMessageTextMsg : public Message {
public:

	static const int kDestFieldNumber = 1;
	static const int kParamFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 dest_;  // +0x30

	static CUserMessageTextMsg * default_instance_;
	CUserMessageTextMsg();
	virtual ~CUserMessageTextMsg();
	CUserMessageTextMsg(const CUserMessageTextMsg &);
	CUserMessageTextMsg & operator=(const CUserMessageTextMsg &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageTextMsg & default_instance();
	void Swap(CUserMessageTextMsg *);
	virtual CUserMessageTextMsg * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageTextMsg &);
	void MergeFrom(const CUserMessageTextMsg &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_dest();
	void clear_dest();
	uint32 dest();
	void set_dest(uint32);
	int param_size();
	void clear_param();
	const string & param(int);
	string * mutable_param(int);
	void set_param(int, const string &);
	void set_param(int, const char *);
	void set_param(int, const char *, size_t);
	string * add_param();
	void add_param(const string &);
	void add_param(const char *);
	void add_param(const char *, size_t);
	const RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > & param();
	RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > * mutable_param();
	void set_has_dest();
	void clear_has_dest();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:1922
class CUserMessageGameTitle : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CUserMessageGameTitle * default_instance_;
	CUserMessageGameTitle();
	virtual ~CUserMessageGameTitle();
	CUserMessageGameTitle(const CUserMessageGameTitle &);
	CUserMessageGameTitle & operator=(const CUserMessageGameTitle &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageGameTitle & default_instance();
	void Swap(CUserMessageGameTitle *);
	virtual CUserMessageGameTitle * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageGameTitle &);
	void MergeFrom(const CUserMessageGameTitle &);
	virtual void Clear();
	virtual bool IsInitialized();
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:1991
class CUserMessageResetHUD : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CUserMessageResetHUD * default_instance_;
	CUserMessageResetHUD();
	virtual ~CUserMessageResetHUD();
	CUserMessageResetHUD(const CUserMessageResetHUD &);
	CUserMessageResetHUD & operator=(const CUserMessageResetHUD &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageResetHUD & default_instance();
	void Swap(CUserMessageResetHUD *);
	virtual CUserMessageResetHUD * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageResetHUD &);
	void MergeFrom(const CUserMessageResetHUD &);
	virtual void Clear();
	virtual bool IsInitialized();
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:2060
class CUserMessageSendAudio : public Message {
public:

	static const int kSoundnameFieldNumber = 1;
	static const int kStopFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * soundname_;  // +0x18
	bool stop_;  // +0x20

	static CUserMessageSendAudio * default_instance_;
	CUserMessageSendAudio();
	virtual ~CUserMessageSendAudio();
	CUserMessageSendAudio(const CUserMessageSendAudio &);
	CUserMessageSendAudio & operator=(const CUserMessageSendAudio &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageSendAudio & default_instance();
	void Swap(CUserMessageSendAudio *);
	virtual CUserMessageSendAudio * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageSendAudio &);
	void MergeFrom(const CUserMessageSendAudio &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_soundname();
	void clear_soundname();
	const string & soundname();
	void set_soundname(const string &);
	void set_soundname(const char *);
	void set_soundname(const char *, size_t);
	string * mutable_soundname();
	string * release_soundname();
	void set_allocated_soundname(string *);
	bool has_stop();
	void clear_stop();
	bool stop();
	void set_stop(bool);
	void set_has_soundname();
	void clear_has_soundname();
	void set_has_stop();
	void clear_has_stop();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:2154
class CUserMessageAudioParameter : public Message {
public:

	static const int kParameterTypeFieldNumber = 1;
	static const int kNameHashCodeFieldNumber = 2;
	static const int kValueFieldNumber = 3;
	static const int kIntValueFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 parameter_type_;  // +0x18
	uint32 name_hash_code_;  // +0x1c
	float value_;  // +0x20
	uint32 int_value_;  // +0x24

	static CUserMessageAudioParameter * default_instance_;
	CUserMessageAudioParameter();
	virtual ~CUserMessageAudioParameter();
	CUserMessageAudioParameter(const CUserMessageAudioParameter &);
	CUserMessageAudioParameter & operator=(const CUserMessageAudioParameter &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageAudioParameter & default_instance();
	void Swap(CUserMessageAudioParameter *);
	virtual CUserMessageAudioParameter * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageAudioParameter &);
	void MergeFrom(const CUserMessageAudioParameter &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_parameter_type();
	void clear_parameter_type();
	uint32 parameter_type();
	void set_parameter_type(uint32);
	bool has_name_hash_code();
	void clear_name_hash_code();
	uint32 name_hash_code();
	void set_name_hash_code(uint32);
	bool has_value();
	void clear_value();
	float value();
	void set_value(float);
	bool has_int_value();
	void clear_int_value();
	uint32 int_value();
	void set_int_value(uint32);
	void set_has_parameter_type();
	void clear_has_parameter_type();
	void set_has_name_hash_code();
	void clear_has_name_hash_code();
	void set_has_value();
	void clear_has_value();
	void set_has_int_value();
	void clear_has_int_value();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:2263
class CUserMessageVoiceMask : public Message {
public:

	static const int kGamerulesMasksFieldNumber = 1;
	static const int kBanMasksFieldNumber = 2;
	static const int kModEnableFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool mod_enable_;  // +0x38

	static CUserMessageVoiceMask * default_instance_;
	CUserMessageVoiceMask();
	virtual ~CUserMessageVoiceMask();
	CUserMessageVoiceMask(const CUserMessageVoiceMask &);
	CUserMessageVoiceMask & operator=(const CUserMessageVoiceMask &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageVoiceMask & default_instance();
	void Swap(CUserMessageVoiceMask *);
	virtual CUserMessageVoiceMask * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageVoiceMask &);
	void MergeFrom(const CUserMessageVoiceMask &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int gamerules_masks_size();
	void clear_gamerules_masks();
	uint32 gamerules_masks(int);
	void set_gamerules_masks(int, uint32);
	void add_gamerules_masks(uint32);
	const RepeatedField<unsigned int> & gamerules_masks();
	RepeatedField<unsigned int> * mutable_gamerules_masks();
	int ban_masks_size();
	void clear_ban_masks();
	uint32 ban_masks(int);
	void set_ban_masks(int, uint32);
	void add_ban_masks(uint32);
	const RepeatedField<unsigned int> & ban_masks();
	RepeatedField<unsigned int> * mutable_ban_masks();
	bool has_mod_enable();
	void clear_mod_enable();
	bool mod_enable();
	void set_mod_enable(bool);
	void set_has_mod_enable();
	void clear_has_mod_enable();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:2368
class CUserMessageRequestState : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CUserMessageRequestState * default_instance_;
	CUserMessageRequestState();
	virtual ~CUserMessageRequestState();
	CUserMessageRequestState(const CUserMessageRequestState &);
	CUserMessageRequestState & operator=(const CUserMessageRequestState &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageRequestState & default_instance();
	void Swap(CUserMessageRequestState *);
	virtual CUserMessageRequestState * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageRequestState &);
	void MergeFrom(const CUserMessageRequestState &);
	virtual void Clear();
	virtual bool IsInitialized();
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:2437
class CUserMessageHintText : public Message {
public:

	static const int kMessageFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * message_;  // +0x18

	static CUserMessageHintText * default_instance_;
	CUserMessageHintText();
	virtual ~CUserMessageHintText();
	CUserMessageHintText(const CUserMessageHintText &);
	CUserMessageHintText & operator=(const CUserMessageHintText &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageHintText & default_instance();
	void Swap(CUserMessageHintText *);
	virtual CUserMessageHintText * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageHintText &);
	void MergeFrom(const CUserMessageHintText &);
	virtual void Clear();
	virtual bool IsInitialized();
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:2521
class CUserMessageKeyHintText : public Message {
public:

	static const int kMessagesFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CUserMessageKeyHintText * default_instance_;
	CUserMessageKeyHintText();
	virtual ~CUserMessageKeyHintText();
	CUserMessageKeyHintText(const CUserMessageKeyHintText &);
	CUserMessageKeyHintText & operator=(const CUserMessageKeyHintText &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageKeyHintText & default_instance();
	void Swap(CUserMessageKeyHintText *);
	virtual CUserMessageKeyHintText * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageKeyHintText &);
	void MergeFrom(const CUserMessageKeyHintText &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int messages_size();
	void clear_messages();
	const string & messages(int);
	string * mutable_messages(int);
	void set_messages(int, const string &);
	void set_messages(int, const char *);
	void set_messages(int, const char *, size_t);
	string * add_messages();
	void add_messages(const string &);
	void add_messages(const char *);
	void add_messages(const char *, size_t);
	const RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > & messages();
	RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > * mutable_messages();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:2607
class CUserMessageVoiceSubtitle : public Message {
public:

	static const int kPlayerFieldNumber = 1;
	static const int kMenuFieldNumber = 2;
	static const int kItemFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 player_;  // +0x18
	int32 menu_;  // +0x1c
	int32 item_;  // +0x20

	static CUserMessageVoiceSubtitle * default_instance_;
	CUserMessageVoiceSubtitle();
	virtual ~CUserMessageVoiceSubtitle();
	CUserMessageVoiceSubtitle(const CUserMessageVoiceSubtitle &);
	CUserMessageVoiceSubtitle & operator=(const CUserMessageVoiceSubtitle &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageVoiceSubtitle & default_instance();
	void Swap(CUserMessageVoiceSubtitle *);
	virtual CUserMessageVoiceSubtitle * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageVoiceSubtitle &);
	void MergeFrom(const CUserMessageVoiceSubtitle &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_player();
	void clear_player();
	int32 player();
	void set_player(int32);
	bool has_menu();
	void clear_menu();
	int32 menu();
	void set_menu(int32);
	bool has_item();
	void clear_item();
	int32 item();
	void set_item(int32);
	void set_has_player();
	void clear_has_player();
	void set_has_menu();
	void clear_has_menu();
	void set_has_item();
	void clear_has_item();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:2706
class CUserMessageVGUIMenu_Keys : public Message {
public:

	static const int kNameFieldNumber = 1;
	static const int kValueFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * name_;  // +0x18
	string * value_;  // +0x20

	static CUserMessageVGUIMenu_Keys * default_instance_;
	CUserMessageVGUIMenu_Keys();
	virtual ~CUserMessageVGUIMenu_Keys();
	CUserMessageVGUIMenu_Keys(const CUserMessageVGUIMenu_Keys &);
	CUserMessageVGUIMenu_Keys & operator=(const CUserMessageVGUIMenu_Keys &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageVGUIMenu_Keys & default_instance();
	void Swap(CUserMessageVGUIMenu_Keys *);
	virtual CUserMessageVGUIMenu_Keys * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageVGUIMenu_Keys &);
	void MergeFrom(const CUserMessageVGUIMenu_Keys &);
	virtual void Clear();
	virtual bool IsInitialized();
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:2805
class CUserMessageVGUIMenu : public Message {
public:

	static const int kNameFieldNumber = 1;
	static const int kShowFieldNumber = 2;
	static const int kKeysFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * name_;  // +0x18
	bool show_;  // +0x38

	static CUserMessageVGUIMenu * default_instance_;
	CUserMessageVGUIMenu();
	virtual ~CUserMessageVGUIMenu();
	CUserMessageVGUIMenu(const CUserMessageVGUIMenu &);
	CUserMessageVGUIMenu & operator=(const CUserMessageVGUIMenu &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageVGUIMenu & default_instance();
	void Swap(CUserMessageVGUIMenu *);
	virtual CUserMessageVGUIMenu * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageVGUIMenu &);
	void MergeFrom(const CUserMessageVGUIMenu &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_show();
	void clear_show();
	bool show();
	void set_show(bool);
	int keys_size();
	void clear_keys();
	const CUserMessageVGUIMenu_Keys & keys(int);
	CUserMessageVGUIMenu_Keys * mutable_keys(int);
	CUserMessageVGUIMenu_Keys * add_keys();
	const RepeatedPtrField<CUserMessageVGUIMenu_Keys> & keys();
	RepeatedPtrField<CUserMessageVGUIMenu_Keys> * mutable_keys();
	void set_has_name();
	void clear_has_name();
	void set_has_show();
	void clear_has_show();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:2914
class CUserMessageRumble : public Message {
public:

	static const int kIndexFieldNumber = 1;
	static const int kDataFieldNumber = 2;
	static const int kFlagsFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 index_;  // +0x18
	int32 data_;  // +0x1c
	int32 flags_;  // +0x20

	static CUserMessageRumble * default_instance_;
	CUserMessageRumble();
	virtual ~CUserMessageRumble();
	CUserMessageRumble(const CUserMessageRumble &);
	CUserMessageRumble & operator=(const CUserMessageRumble &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageRumble & default_instance();
	void Swap(CUserMessageRumble *);
	virtual CUserMessageRumble * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageRumble &);
	void MergeFrom(const CUserMessageRumble &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_index();
	void clear_index();
	int32 index();
	void set_index(int32);
	bool has_data();
	void clear_data();
	int32 data();
	void set_data(int32);
	bool has_flags();
	void clear_flags();
	int32 flags();
	void set_flags(int32);
	void set_has_index();
	void clear_has_index();
	void set_has_data();
	void clear_has_data();
	void set_has_flags();
	void clear_has_flags();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:3013
class CUserMessageTrain : public Message {
public:

	static const int kPositionFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 position_;  // +0x18

	static CUserMessageTrain * default_instance_;
	CUserMessageTrain();
	virtual ~CUserMessageTrain();
	CUserMessageTrain(const CUserMessageTrain &);
	CUserMessageTrain & operator=(const CUserMessageTrain &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageTrain & default_instance();
	void Swap(CUserMessageTrain *);
	virtual CUserMessageTrain * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageTrain &);
	void MergeFrom(const CUserMessageTrain &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_position();
	void clear_position();
	uint32 position();
	void set_position(uint32);
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
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:3092
class CUserMessageSayTextChannel : public Message {
public:

	static const int kPlayerFieldNumber = 1;
	static const int kChannelFieldNumber = 2;
	static const int kTextFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 player_;  // +0x18
	int32 channel_;  // +0x1c
	string * text_;  // +0x20

	static CUserMessageSayTextChannel * default_instance_;
	CUserMessageSayTextChannel();
	virtual ~CUserMessageSayTextChannel();
	CUserMessageSayTextChannel(const CUserMessageSayTextChannel &);
	CUserMessageSayTextChannel & operator=(const CUserMessageSayTextChannel &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageSayTextChannel & default_instance();
	void Swap(CUserMessageSayTextChannel *);
	virtual CUserMessageSayTextChannel * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageSayTextChannel &);
	void MergeFrom(const CUserMessageSayTextChannel &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_player();
	void clear_player();
	int32 player();
	void set_player(int32);
	bool has_channel();
	void clear_channel();
	int32 channel();
	void set_channel(int32);
	bool has_text();
	void clear_text();
	const string & text();
	void set_text(const string &);
	void set_text(const char *);
	void set_text(const char *, size_t);
	string * mutable_text();
	string * release_text();
	void set_allocated_text(string *);
	void set_has_player();
	void clear_has_player();
	void set_has_channel();
	void clear_has_channel();
	void set_has_text();
	void clear_has_text();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:3196
class CUserMessageColoredText : public Message {
public:

	static const int kColorFieldNumber = 1;
	static const int kTextFieldNumber = 2;
	static const int kResetFieldNumber = 3;
	static const int kContextPlayerIdFieldNumber = 4;
	static const int kContextValueFieldNumber = 5;
	static const int kContextTeamIdFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * text_;  // +0x18
	uint32 color_;  // +0x20
	bool reset_;  // +0x24

	int32 context_player_id_;  // +0x28
	int32 context_value_;  // +0x2c
	int32 context_team_id_;  // +0x30

	static CUserMessageColoredText * default_instance_;
	CUserMessageColoredText();
	virtual ~CUserMessageColoredText();
	CUserMessageColoredText(const CUserMessageColoredText &);
	CUserMessageColoredText & operator=(const CUserMessageColoredText &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageColoredText & default_instance();
	void Swap(CUserMessageColoredText *);
	virtual CUserMessageColoredText * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageColoredText &);
	void MergeFrom(const CUserMessageColoredText &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_color();
	void clear_color();
	uint32 color();
	void set_color(uint32);
	bool has_text();
	void clear_text();
	const string & text();
	void set_text(const string &);
	void set_text(const char *);
	void set_text(const char *, size_t);
	string * mutable_text();
	string * release_text();
	void set_allocated_text(string *);
	bool has_reset();
	void clear_reset();
	bool reset();
	void set_reset(bool);
	bool has_context_player_id();
	void clear_context_player_id();
	int32 context_player_id();
	void set_context_player_id(int32);
	bool has_context_value();
	void clear_context_value();
	int32 context_value();
	void set_context_value(int32);
	bool has_context_team_id();
	void clear_context_team_id();
	int32 context_team_id();
	void set_context_team_id(int32);
	void set_has_color();
	void clear_has_color();
	void set_has_text();
	void clear_has_text();
	void set_has_reset();
	void clear_has_reset();
	void set_has_context_player_id();
	void clear_has_context_player_id();
	void set_has_context_value();
	void clear_has_context_value();
	void set_has_context_team_id();
	void clear_has_context_team_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:3330
class CUserMessageItemPickup : public Message {
public:

	static const int kItemnameFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * itemname_;  // +0x18

	static CUserMessageItemPickup * default_instance_;
	CUserMessageItemPickup();
	virtual ~CUserMessageItemPickup();
	CUserMessageItemPickup(const CUserMessageItemPickup &);
	CUserMessageItemPickup & operator=(const CUserMessageItemPickup &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageItemPickup & default_instance();
	void Swap(CUserMessageItemPickup *);
	virtual CUserMessageItemPickup * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageItemPickup &);
	void MergeFrom(const CUserMessageItemPickup &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_itemname();
	void clear_itemname();
	const string & itemname();
	void set_itemname(const string &);
	void set_itemname(const char *);
	void set_itemname(const char *, size_t);
	string * mutable_itemname();
	string * release_itemname();
	void set_allocated_itemname(string *);
	void set_has_itemname();
	void clear_has_itemname();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:3414
class CUserMessageAmmoDenied : public Message {
public:

	static const int kAmmoIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 ammo_id_;  // +0x18

	static CUserMessageAmmoDenied * default_instance_;
	CUserMessageAmmoDenied();
	virtual ~CUserMessageAmmoDenied();
	CUserMessageAmmoDenied(const CUserMessageAmmoDenied &);
	CUserMessageAmmoDenied & operator=(const CUserMessageAmmoDenied &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageAmmoDenied & default_instance();
	void Swap(CUserMessageAmmoDenied *);
	virtual CUserMessageAmmoDenied * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageAmmoDenied &);
	void MergeFrom(const CUserMessageAmmoDenied &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_ammo_id();
	void clear_ammo_id();
	uint32 ammo_id();
	void set_ammo_id(uint32);
	void set_has_ammo_id();
	void clear_has_ammo_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:3493
class CUserMessageCrosshairAngle : public Message {
public:

	static const int kAngcrosshairFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CUserMessageCrosshairAngle * default_instance_;
	CUserMessageCrosshairAngle();
	virtual ~CUserMessageCrosshairAngle();
	CUserMessageCrosshairAngle(const CUserMessageCrosshairAngle &);
	CUserMessageCrosshairAngle & operator=(const CUserMessageCrosshairAngle &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageCrosshairAngle & default_instance();
	void Swap(CUserMessageCrosshairAngle *);
	virtual CUserMessageCrosshairAngle * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageCrosshairAngle &);
	void MergeFrom(const CUserMessageCrosshairAngle &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_angcrosshair();
	void clear_angcrosshair();
	const CMsgQAngle & angcrosshair();
	CMsgQAngle * mutable_angcrosshair();
	CMsgQAngle * release_angcrosshair();
	void set_allocated_angcrosshair(CMsgQAngle *);
	void set_has_angcrosshair();
	void clear_has_angcrosshair();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:3574
class CUserMessageShowMenu : public Message {
public:

	static const int kValidslotsFieldNumber = 1;
	static const int kDisplaytimeFieldNumber = 2;
	static const int kNeedmoreFieldNumber = 3;
	static const int kMenustringFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 validslots_;  // +0x18
	uint32 displaytime_;  // +0x1c
	string * menustring_;  // +0x20
	bool needmore_;  // +0x28

	static CUserMessageShowMenu * default_instance_;
	CUserMessageShowMenu();
	virtual ~CUserMessageShowMenu();
	CUserMessageShowMenu(const CUserMessageShowMenu &);
	CUserMessageShowMenu & operator=(const CUserMessageShowMenu &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageShowMenu & default_instance();
	void Swap(CUserMessageShowMenu *);
	virtual CUserMessageShowMenu * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageShowMenu &);
	void MergeFrom(const CUserMessageShowMenu &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_validslots();
	void clear_validslots();
	uint32 validslots();
	void set_validslots(uint32);
	bool has_displaytime();
	void clear_displaytime();
	uint32 displaytime();
	void set_displaytime(uint32);
	bool has_needmore();
	void clear_needmore();
	bool needmore();
	void set_needmore(bool);
	bool has_menustring();
	void clear_menustring();
	const string & menustring();
	void set_menustring(const string &);
	void set_menustring(const char *);
	void set_menustring(const char *, size_t);
	string * mutable_menustring();
	string * release_menustring();
	void set_allocated_menustring(string *);
	void set_has_validslots();
	void clear_has_validslots();
	void set_has_displaytime();
	void clear_has_displaytime();
	void set_has_needmore();
	void clear_has_needmore();
	void set_has_menustring();
	void clear_has_menustring();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:3688
class CUserMessageCreditsMsg : public Message {
public:

	static const int kRolltypeFieldNumber = 1;
	static const int kLogoLengthFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int rolltype_;  // +0x18
	float logo_length_;  // +0x1c

	static CUserMessageCreditsMsg * default_instance_;
	CUserMessageCreditsMsg();
	virtual ~CUserMessageCreditsMsg();
	CUserMessageCreditsMsg(const CUserMessageCreditsMsg &);
	CUserMessageCreditsMsg & operator=(const CUserMessageCreditsMsg &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageCreditsMsg & default_instance();
	void Swap(CUserMessageCreditsMsg *);
	virtual CUserMessageCreditsMsg * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageCreditsMsg &);
	void MergeFrom(const CUserMessageCreditsMsg &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_rolltype();
	void clear_rolltype();
	eRollType rolltype();
	void set_rolltype(eRollType);
	bool has_logo_length();
	void clear_logo_length();
	float logo_length();
	void set_logo_length(float);
	void set_has_rolltype();
	void clear_has_rolltype();
	void set_has_logo_length();
	void clear_has_logo_length();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:3777
class CEntityMessagePlayJingle : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CEntityMessagePlayJingle * default_instance_;
	CEntityMessagePlayJingle();
	virtual ~CEntityMessagePlayJingle();
	CEntityMessagePlayJingle(const CEntityMessagePlayJingle &);
	CEntityMessagePlayJingle & operator=(const CEntityMessagePlayJingle &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CEntityMessagePlayJingle & default_instance();
	void Swap(CEntityMessagePlayJingle *);
	virtual CEntityMessagePlayJingle * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CEntityMessagePlayJingle &);
	void MergeFrom(const CEntityMessagePlayJingle &);
	virtual void Clear();
	virtual bool IsInitialized();
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:3846
class CEntityMessageScreenOverlay : public Message {
public:

	static const int kStartEffectFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool start_effect_;  // +0x18

	static CEntityMessageScreenOverlay * default_instance_;
	CEntityMessageScreenOverlay();
	virtual ~CEntityMessageScreenOverlay();
	CEntityMessageScreenOverlay(const CEntityMessageScreenOverlay &);
	CEntityMessageScreenOverlay & operator=(const CEntityMessageScreenOverlay &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CEntityMessageScreenOverlay & default_instance();
	void Swap(CEntityMessageScreenOverlay *);
	virtual CEntityMessageScreenOverlay * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CEntityMessageScreenOverlay &);
	void MergeFrom(const CEntityMessageScreenOverlay &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_start_effect();
	void clear_start_effect();
	bool start_effect();
	void set_start_effect(bool);
	void set_has_start_effect();
	void clear_has_start_effect();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:3925
class CEntityMessageRemoveAllDecals : public Message {
public:

	static const int kRemoveDecalsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool remove_decals_;  // +0x18

	static CEntityMessageRemoveAllDecals * default_instance_;
	CEntityMessageRemoveAllDecals();
	virtual ~CEntityMessageRemoveAllDecals();
	CEntityMessageRemoveAllDecals(const CEntityMessageRemoveAllDecals &);
	CEntityMessageRemoveAllDecals & operator=(const CEntityMessageRemoveAllDecals &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CEntityMessageRemoveAllDecals & default_instance();
	void Swap(CEntityMessageRemoveAllDecals *);
	virtual CEntityMessageRemoveAllDecals * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CEntityMessageRemoveAllDecals &);
	void MergeFrom(const CEntityMessageRemoveAllDecals &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_remove_decals();
	void clear_remove_decals();
	bool remove_decals();
	void set_remove_decals(bool);
	void set_has_remove_decals();
	void clear_has_remove_decals();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:4004
class CEntityMessagePropagateForce : public Message {
public:

	static const int kImpulseFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CEntityMessagePropagateForce * default_instance_;
	CEntityMessagePropagateForce();
	virtual ~CEntityMessagePropagateForce();
	CEntityMessagePropagateForce(const CEntityMessagePropagateForce &);
	CEntityMessagePropagateForce & operator=(const CEntityMessagePropagateForce &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CEntityMessagePropagateForce & default_instance();
	void Swap(CEntityMessagePropagateForce *);
	virtual CEntityMessagePropagateForce * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CEntityMessagePropagateForce &);
	void MergeFrom(const CEntityMessagePropagateForce &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_impulse();
	void clear_impulse();
	const CMsgVector & impulse();
	CMsgVector * mutable_impulse();
	CMsgVector * release_impulse();
	void set_allocated_impulse(CMsgVector *);
	void set_has_impulse();
	void clear_has_impulse();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:4085
class CEntityMessageDoSpark : public Message {
public:

	static const int kOriginFieldNumber = 1;
	static const int kEntityindexFieldNumber = 2;
	static const int kRadiusFieldNumber = 3;
	static const int kColorFieldNumber = 4;
	static const int kBeamsFieldNumber = 5;
	static const int kThickFieldNumber = 6;
	static const int kDurationFieldNumber = 7;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 entityindex_;  // +0x20
	float radius_;  // +0x24
	uint32 color_;  // +0x28
	uint32 beams_;  // +0x2c
	float thick_;  // +0x30
	float duration_;  // +0x34

	static CEntityMessageDoSpark * default_instance_;
	CEntityMessageDoSpark();
	virtual ~CEntityMessageDoSpark();
	CEntityMessageDoSpark(const CEntityMessageDoSpark &);
	CEntityMessageDoSpark & operator=(const CEntityMessageDoSpark &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CEntityMessageDoSpark & default_instance();
	void Swap(CEntityMessageDoSpark *);
	virtual CEntityMessageDoSpark * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CEntityMessageDoSpark &);
	void MergeFrom(const CEntityMessageDoSpark &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_origin();
	void clear_origin();
	const CMsgVector & origin();
	CMsgVector * mutable_origin();
	CMsgVector * release_origin();
	void set_allocated_origin(CMsgVector *);
	bool has_entityindex();
	void clear_entityindex();
	uint32 entityindex();
	void set_entityindex(uint32);
	bool has_radius();
	void clear_radius();
	float radius();
	void set_radius(float);
	bool has_color();
	void clear_color();
	uint32 color();
	void set_color(uint32);
	bool has_beams();
	void clear_beams();
	uint32 beams();
	void set_beams(uint32);
	bool has_thick();
	void clear_thick();
	float thick();
	void set_thick(float);
	bool has_duration();
	void clear_duration();
	float duration();
	void set_duration(float);
	void set_has_origin();
	void clear_has_origin();
	void set_has_entityindex();
	void clear_has_entityindex();
	void set_has_radius();
	void clear_has_radius();
	void set_has_color();
	void clear_has_color();
	void set_has_beams();
	void clear_has_beams();
	void set_has_thick();
	void clear_has_thick();
	void set_has_duration();
	void clear_has_duration();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:4226
class CEntityMessageFixAngle : public Message {
public:

	static const int kRelativeFieldNumber = 1;
	static const int kAngleFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool relative_;  // +0x20

	static CEntityMessageFixAngle * default_instance_;
	CEntityMessageFixAngle();
	virtual ~CEntityMessageFixAngle();
	CEntityMessageFixAngle(const CEntityMessageFixAngle &);
	CEntityMessageFixAngle & operator=(const CEntityMessageFixAngle &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CEntityMessageFixAngle & default_instance();
	void Swap(CEntityMessageFixAngle *);
	virtual CEntityMessageFixAngle * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CEntityMessageFixAngle &);
	void MergeFrom(const CEntityMessageFixAngle &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_relative();
	void clear_relative();
	bool relative();
	void set_relative(bool);
	bool has_angle();
	void clear_angle();
	const CMsgQAngle & angle();
	CMsgQAngle * mutable_angle();
	CMsgQAngle * release_angle();
	void set_allocated_angle(CMsgQAngle *);
	void set_has_relative();
	void clear_has_relative();
	void set_has_angle();
	void clear_has_angle();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:4317
class CUserMessageCameraTransition_Transition_DataDriven : public Message {
public:

	static const int kFilenameFieldNumber = 1;
	static const int kAttachEntIndexFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * filename_;  // +0x18
	int32 attach_ent_index_;  // +0x20

	static CUserMessageCameraTransition_Transition_DataDriven * default_instance_;
	CUserMessageCameraTransition_Transition_DataDriven();
	virtual ~CUserMessageCameraTransition_Transition_DataDriven();
	CUserMessageCameraTransition_Transition_DataDriven(const CUserMessageCameraTransition_Transition_DataDriven &);
	CUserMessageCameraTransition_Transition_DataDriven & operator=(const CUserMessageCameraTransition_Transition_DataDriven &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageCameraTransition_Transition_DataDriven & default_instance();
	void Swap(CUserMessageCameraTransition_Transition_DataDriven *);
	virtual CUserMessageCameraTransition_Transition_DataDriven * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageCameraTransition_Transition_DataDriven &);
	void MergeFrom(const CUserMessageCameraTransition_Transition_DataDriven &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_filename();
	void clear_filename();
	const string & filename();
	void set_filename(const string &);
	void set_filename(const char *);
	void set_filename(const char *, size_t);
	string * mutable_filename();
	string * release_filename();
	void set_allocated_filename(string *);
	bool has_attach_ent_index();
	void clear_attach_ent_index();
	int32 attach_ent_index();
	void set_attach_ent_index(int32);
	void set_has_filename();
	void clear_has_filename();
	void set_has_attach_ent_index();
	void clear_has_attach_ent_index();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:4411
class CUserMessageCameraTransition : public Message {
public:

	static const int kCameraTypeFieldNumber = 1;
	static const int kDurationFieldNumber = 2;
	static const int kParamsDataDrivenFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 camera_type_;  // +0x18
	float duration_;  // +0x1c

	static CUserMessageCameraTransition * default_instance_;
	CUserMessageCameraTransition();
	virtual ~CUserMessageCameraTransition();
	CUserMessageCameraTransition(const CUserMessageCameraTransition &);
	CUserMessageCameraTransition & operator=(const CUserMessageCameraTransition &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageCameraTransition & default_instance();
	void Swap(CUserMessageCameraTransition *);
	virtual CUserMessageCameraTransition * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageCameraTransition &);
	void MergeFrom(const CUserMessageCameraTransition &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_camera_type();
	void clear_camera_type();
	uint32 camera_type();
	void set_camera_type(uint32);
	bool has_duration();
	void clear_duration();
	float duration();
	void set_duration(float);
	bool has_params_data_driven();
	void clear_params_data_driven();
	const CUserMessageCameraTransition_Transition_DataDriven & params_data_driven();
	CUserMessageCameraTransition_Transition_DataDriven * mutable_params_data_driven();
	CUserMessageCameraTransition_Transition_DataDriven * release_params_data_driven();
	void set_allocated_params_data_driven(CUserMessageCameraTransition_Transition_DataDriven *);
	void set_has_camera_type();
	void clear_has_camera_type();
	void set_has_duration();
	void clear_has_duration();
	void set_has_params_data_driven();
	void clear_has_params_data_driven();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:4514
class CUserMsg_ParticleManager_ReleaseParticleIndex : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CUserMsg_ParticleManager_ReleaseParticleIndex * default_instance_;
	CUserMsg_ParticleManager_ReleaseParticleIndex();
	virtual ~CUserMsg_ParticleManager_ReleaseParticleIndex();
	CUserMsg_ParticleManager_ReleaseParticleIndex(const CUserMsg_ParticleManager_ReleaseParticleIndex &);
	CUserMsg_ParticleManager_ReleaseParticleIndex & operator=(const CUserMsg_ParticleManager_ReleaseParticleIndex &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMsg_ParticleManager_ReleaseParticleIndex & default_instance();
	void Swap(CUserMsg_ParticleManager_ReleaseParticleIndex *);
	virtual CUserMsg_ParticleManager_ReleaseParticleIndex * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMsg_ParticleManager_ReleaseParticleIndex &);
	void MergeFrom(const CUserMsg_ParticleManager_ReleaseParticleIndex &);
	virtual void Clear();
	virtual bool IsInitialized();
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:4583
class CUserMsg_ParticleManager_CreateParticle : public Message {
public:

	static const int kParticleNameIndexFieldNumber = 1;
	static const int kAttachTypeFieldNumber = 2;
	static const int kEntityHandleFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 particle_name_index_;  // +0x18
	int32 attach_type_;  // +0x20
	int32 entity_handle_;  // +0x24

	static CUserMsg_ParticleManager_CreateParticle * default_instance_;
	CUserMsg_ParticleManager_CreateParticle();
	virtual ~CUserMsg_ParticleManager_CreateParticle();
	CUserMsg_ParticleManager_CreateParticle(const CUserMsg_ParticleManager_CreateParticle &);
	CUserMsg_ParticleManager_CreateParticle & operator=(const CUserMsg_ParticleManager_CreateParticle &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMsg_ParticleManager_CreateParticle & default_instance();
	void Swap(CUserMsg_ParticleManager_CreateParticle *);
	virtual CUserMsg_ParticleManager_CreateParticle * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMsg_ParticleManager_CreateParticle &);
	void MergeFrom(const CUserMsg_ParticleManager_CreateParticle &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_particle_name_index();
	void clear_particle_name_index();
	uint64 particle_name_index();
	void set_particle_name_index(uint64);
	bool has_attach_type();
	void clear_attach_type();
	int32 attach_type();
	void set_attach_type(int32);
	bool has_entity_handle();
	void clear_entity_handle();
	int32 entity_handle();
	void set_entity_handle(int32);
	void set_has_particle_name_index();
	void clear_has_particle_name_index();
	void set_has_attach_type();
	void clear_has_attach_type();
	void set_has_entity_handle();
	void clear_has_entity_handle();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:4682
class CUserMsg_ParticleManager_DestroyParticle : public Message {
public:

	static const int kDestroyImmediatelyFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool destroy_immediately_;  // +0x18

	static CUserMsg_ParticleManager_DestroyParticle * default_instance_;
	CUserMsg_ParticleManager_DestroyParticle();
	virtual ~CUserMsg_ParticleManager_DestroyParticle();
	CUserMsg_ParticleManager_DestroyParticle(const CUserMsg_ParticleManager_DestroyParticle &);
	CUserMsg_ParticleManager_DestroyParticle & operator=(const CUserMsg_ParticleManager_DestroyParticle &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMsg_ParticleManager_DestroyParticle & default_instance();
	void Swap(CUserMsg_ParticleManager_DestroyParticle *);
	virtual CUserMsg_ParticleManager_DestroyParticle * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMsg_ParticleManager_DestroyParticle &);
	void MergeFrom(const CUserMsg_ParticleManager_DestroyParticle &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_destroy_immediately();
	void clear_destroy_immediately();
	bool destroy_immediately();
	void set_destroy_immediately(bool);
	void set_has_destroy_immediately();
	void clear_has_destroy_immediately();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:4761
class CUserMsg_ParticleManager_DestroyParticleInvolving : public Message {
public:

	static const int kDestroyImmediatelyFieldNumber = 1;
	static const int kEntityHandleFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool destroy_immediately_;  // +0x18

	int32 entity_handle_;  // +0x1c

	static CUserMsg_ParticleManager_DestroyParticleInvolving * default_instance_;
	CUserMsg_ParticleManager_DestroyParticleInvolving();
	virtual ~CUserMsg_ParticleManager_DestroyParticleInvolving();
	CUserMsg_ParticleManager_DestroyParticleInvolving(const CUserMsg_ParticleManager_DestroyParticleInvolving &);
	CUserMsg_ParticleManager_DestroyParticleInvolving & operator=(const CUserMsg_ParticleManager_DestroyParticleInvolving &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMsg_ParticleManager_DestroyParticleInvolving & default_instance();
	void Swap(CUserMsg_ParticleManager_DestroyParticleInvolving *);
	virtual CUserMsg_ParticleManager_DestroyParticleInvolving * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMsg_ParticleManager_DestroyParticleInvolving &);
	void MergeFrom(const CUserMsg_ParticleManager_DestroyParticleInvolving &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_destroy_immediately();
	void clear_destroy_immediately();
	bool destroy_immediately();
	void set_destroy_immediately(bool);
	bool has_entity_handle();
	void clear_entity_handle();
	int32 entity_handle();
	void set_entity_handle(int32);
	void set_has_destroy_immediately();
	void clear_has_destroy_immediately();
	void set_has_entity_handle();
	void clear_has_entity_handle();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:4850
class CUserMsg_ParticleManager_UpdateParticle : public Message {
public:

	static const int kControlPointFieldNumber = 1;
	static const int kPositionFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 control_point_;  // +0x20

	static CUserMsg_ParticleManager_UpdateParticle * default_instance_;
	CUserMsg_ParticleManager_UpdateParticle();
	virtual ~CUserMsg_ParticleManager_UpdateParticle();
	CUserMsg_ParticleManager_UpdateParticle(const CUserMsg_ParticleManager_UpdateParticle &);
	CUserMsg_ParticleManager_UpdateParticle & operator=(const CUserMsg_ParticleManager_UpdateParticle &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMsg_ParticleManager_UpdateParticle & default_instance();
	void Swap(CUserMsg_ParticleManager_UpdateParticle *);
	virtual CUserMsg_ParticleManager_UpdateParticle * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMsg_ParticleManager_UpdateParticle &);
	void MergeFrom(const CUserMsg_ParticleManager_UpdateParticle &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_control_point();
	void clear_control_point();
	int32 control_point();
	void set_control_point(int32);
	bool has_position();
	void clear_position();
	const CMsgVector & position();
	CMsgVector * mutable_position();
	CMsgVector * release_position();
	void set_allocated_position(CMsgVector *);
	void set_has_control_point();
	void clear_has_control_point();
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:4941
class CUserMsg_ParticleManager_UpdateParticleFwd : public Message {
public:

	static const int kControlPointFieldNumber = 1;
	static const int kForwardFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 control_point_;  // +0x20

	static CUserMsg_ParticleManager_UpdateParticleFwd * default_instance_;
	CUserMsg_ParticleManager_UpdateParticleFwd();
	virtual ~CUserMsg_ParticleManager_UpdateParticleFwd();
	CUserMsg_ParticleManager_UpdateParticleFwd(const CUserMsg_ParticleManager_UpdateParticleFwd &);
	CUserMsg_ParticleManager_UpdateParticleFwd & operator=(const CUserMsg_ParticleManager_UpdateParticleFwd &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMsg_ParticleManager_UpdateParticleFwd & default_instance();
	void Swap(CUserMsg_ParticleManager_UpdateParticleFwd *);
	virtual CUserMsg_ParticleManager_UpdateParticleFwd * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMsg_ParticleManager_UpdateParticleFwd &);
	void MergeFrom(const CUserMsg_ParticleManager_UpdateParticleFwd &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_control_point();
	void clear_control_point();
	int32 control_point();
	void set_control_point(int32);
	bool has_forward();
	void clear_forward();
	const CMsgVector & forward();
	CMsgVector * mutable_forward();
	CMsgVector * release_forward();
	void set_allocated_forward(CMsgVector *);
	void set_has_control_point();
	void clear_has_control_point();
	void set_has_forward();
	void clear_has_forward();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:5032
class CUserMsg_ParticleManager_UpdateParticleOrient : public Message {
public:

	static const int kControlPointFieldNumber = 1;
	static const int kForwardFieldNumber = 2;
	static const int kRightFieldNumber = 3;
	static const int kUpFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 control_point_;  // +0x30

	static CUserMsg_ParticleManager_UpdateParticleOrient * default_instance_;
	CUserMsg_ParticleManager_UpdateParticleOrient();
	virtual ~CUserMsg_ParticleManager_UpdateParticleOrient();
	CUserMsg_ParticleManager_UpdateParticleOrient(const CUserMsg_ParticleManager_UpdateParticleOrient &);
	CUserMsg_ParticleManager_UpdateParticleOrient & operator=(const CUserMsg_ParticleManager_UpdateParticleOrient &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMsg_ParticleManager_UpdateParticleOrient & default_instance();
	void Swap(CUserMsg_ParticleManager_UpdateParticleOrient *);
	virtual CUserMsg_ParticleManager_UpdateParticleOrient * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMsg_ParticleManager_UpdateParticleOrient &);
	void MergeFrom(const CUserMsg_ParticleManager_UpdateParticleOrient &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_control_point();
	void clear_control_point();
	int32 control_point();
	void set_control_point(int32);
	bool has_forward();
	void clear_forward();
	const CMsgVector & forward();
	CMsgVector * mutable_forward();
	CMsgVector * release_forward();
	void set_allocated_forward(CMsgVector *);
	bool has_right();
	void clear_right();
	const CMsgVector & right();
	CMsgVector * mutable_right();
	CMsgVector * release_right();
	void set_allocated_right(CMsgVector *);
	bool has_up();
	void clear_up();
	const CMsgVector & up();
	CMsgVector * mutable_up();
	CMsgVector * release_up();
	void set_allocated_up(CMsgVector *);
	void set_has_control_point();
	void clear_has_control_point();
	void set_has_forward();
	void clear_has_forward();
	void set_has_right();
	void clear_has_right();
	void set_has_up();
	void clear_has_up();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:5147
class CUserMsg_ParticleManager_UpdateParticleFallback : public Message {
public:

	static const int kControlPointFieldNumber = 1;
	static const int kPositionFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 control_point_;  // +0x20

	static CUserMsg_ParticleManager_UpdateParticleFallback * default_instance_;
	CUserMsg_ParticleManager_UpdateParticleFallback();
	virtual ~CUserMsg_ParticleManager_UpdateParticleFallback();
	CUserMsg_ParticleManager_UpdateParticleFallback(const CUserMsg_ParticleManager_UpdateParticleFallback &);
	CUserMsg_ParticleManager_UpdateParticleFallback & operator=(const CUserMsg_ParticleManager_UpdateParticleFallback &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMsg_ParticleManager_UpdateParticleFallback & default_instance();
	void Swap(CUserMsg_ParticleManager_UpdateParticleFallback *);
	virtual CUserMsg_ParticleManager_UpdateParticleFallback * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMsg_ParticleManager_UpdateParticleFallback &);
	void MergeFrom(const CUserMsg_ParticleManager_UpdateParticleFallback &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_control_point();
	void clear_control_point();
	int32 control_point();
	void set_control_point(int32);
	bool has_position();
	void clear_position();
	const CMsgVector & position();
	CMsgVector * mutable_position();
	CMsgVector * release_position();
	void set_allocated_position(CMsgVector *);
	void set_has_control_point();
	void clear_has_control_point();
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:5238
class CUserMsg_ParticleManager_UpdateParticleOffset : public Message {
public:

	static const int kControlPointFieldNumber = 1;
	static const int kOriginOffsetFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 control_point_;  // +0x20

	static CUserMsg_ParticleManager_UpdateParticleOffset * default_instance_;
	CUserMsg_ParticleManager_UpdateParticleOffset();
	virtual ~CUserMsg_ParticleManager_UpdateParticleOffset();
	CUserMsg_ParticleManager_UpdateParticleOffset(const CUserMsg_ParticleManager_UpdateParticleOffset &);
	CUserMsg_ParticleManager_UpdateParticleOffset & operator=(const CUserMsg_ParticleManager_UpdateParticleOffset &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMsg_ParticleManager_UpdateParticleOffset & default_instance();
	void Swap(CUserMsg_ParticleManager_UpdateParticleOffset *);
	virtual CUserMsg_ParticleManager_UpdateParticleOffset * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMsg_ParticleManager_UpdateParticleOffset &);
	void MergeFrom(const CUserMsg_ParticleManager_UpdateParticleOffset &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_control_point();
	void clear_control_point();
	int32 control_point();
	void set_control_point(int32);
	bool has_origin_offset();
	void clear_origin_offset();
	const CMsgVector & origin_offset();
	CMsgVector * mutable_origin_offset();
	CMsgVector * release_origin_offset();
	void set_allocated_origin_offset(CMsgVector *);
	void set_has_control_point();
	void clear_has_control_point();
	void set_has_origin_offset();
	void clear_has_origin_offset();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:5329
class CUserMsg_ParticleManager_UpdateParticleEnt : public Message {
public:

	static const int kControlPointFieldNumber = 1;
	static const int kEntityHandleFieldNumber = 2;
	static const int kAttachTypeFieldNumber = 3;
	static const int kAttachmentFieldNumber = 4;
	static const int kFallbackPositionFieldNumber = 5;
	static const int kIncludeWearablesFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 control_point_;  // +0x18
	int32 entity_handle_;  // +0x1c
	int32 attach_type_;  // +0x20
	int32 attachment_;  // +0x24
	bool include_wearables_;  // +0x30

	static CUserMsg_ParticleManager_UpdateParticleEnt * default_instance_;
	CUserMsg_ParticleManager_UpdateParticleEnt();
	virtual ~CUserMsg_ParticleManager_UpdateParticleEnt();
	CUserMsg_ParticleManager_UpdateParticleEnt(const CUserMsg_ParticleManager_UpdateParticleEnt &);
	CUserMsg_ParticleManager_UpdateParticleEnt & operator=(const CUserMsg_ParticleManager_UpdateParticleEnt &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMsg_ParticleManager_UpdateParticleEnt & default_instance();
	void Swap(CUserMsg_ParticleManager_UpdateParticleEnt *);
	virtual CUserMsg_ParticleManager_UpdateParticleEnt * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMsg_ParticleManager_UpdateParticleEnt &);
	void MergeFrom(const CUserMsg_ParticleManager_UpdateParticleEnt &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_control_point();
	void clear_control_point();
	int32 control_point();
	void set_control_point(int32);
	bool has_entity_handle();
	void clear_entity_handle();
	int32 entity_handle();
	void set_entity_handle(int32);
	bool has_attach_type();
	void clear_attach_type();
	int32 attach_type();
	void set_attach_type(int32);
	bool has_attachment();
	void clear_attachment();
	int32 attachment();
	void set_attachment(int32);
	bool has_fallback_position();
	void clear_fallback_position();
	const CMsgVector & fallback_position();
	CMsgVector * mutable_fallback_position();
	CMsgVector * release_fallback_position();
	void set_allocated_fallback_position(CMsgVector *);
	bool has_include_wearables();
	void clear_include_wearables();
	bool include_wearables();
	void set_include_wearables(bool);
	void set_has_control_point();
	void clear_has_control_point();
	void set_has_entity_handle();
	void clear_has_entity_handle();
	void set_has_attach_type();
	void clear_has_attach_type();
	void set_has_attachment();
	void clear_has_attachment();
	void set_has_fallback_position();
	void clear_has_fallback_position();
	void set_has_include_wearables();
	void clear_has_include_wearables();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:5460
class CUserMsg_ParticleManager_UpdateParticleSetFrozen : public Message {
public:

	static const int kSetFrozenFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool set_frozen_;  // +0x18

	static CUserMsg_ParticleManager_UpdateParticleSetFrozen * default_instance_;
	CUserMsg_ParticleManager_UpdateParticleSetFrozen();
	virtual ~CUserMsg_ParticleManager_UpdateParticleSetFrozen();
	CUserMsg_ParticleManager_UpdateParticleSetFrozen(const CUserMsg_ParticleManager_UpdateParticleSetFrozen &);
	CUserMsg_ParticleManager_UpdateParticleSetFrozen & operator=(const CUserMsg_ParticleManager_UpdateParticleSetFrozen &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMsg_ParticleManager_UpdateParticleSetFrozen & default_instance();
	void Swap(CUserMsg_ParticleManager_UpdateParticleSetFrozen *);
	virtual CUserMsg_ParticleManager_UpdateParticleSetFrozen * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMsg_ParticleManager_UpdateParticleSetFrozen &);
	void MergeFrom(const CUserMsg_ParticleManager_UpdateParticleSetFrozen &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_set_frozen();
	void clear_set_frozen();
	bool set_frozen();
	void set_set_frozen(bool);
	void set_has_set_frozen();
	void clear_has_set_frozen();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:5539
class CUserMsg_ParticleManager_UpdateParticleShouldDraw : public Message {
public:

	static const int kShouldDrawFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool should_draw_;  // +0x18

	static CUserMsg_ParticleManager_UpdateParticleShouldDraw * default_instance_;
	CUserMsg_ParticleManager_UpdateParticleShouldDraw();
	virtual ~CUserMsg_ParticleManager_UpdateParticleShouldDraw();
	CUserMsg_ParticleManager_UpdateParticleShouldDraw(const CUserMsg_ParticleManager_UpdateParticleShouldDraw &);
	CUserMsg_ParticleManager_UpdateParticleShouldDraw & operator=(const CUserMsg_ParticleManager_UpdateParticleShouldDraw &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMsg_ParticleManager_UpdateParticleShouldDraw & default_instance();
	void Swap(CUserMsg_ParticleManager_UpdateParticleShouldDraw *);
	virtual CUserMsg_ParticleManager_UpdateParticleShouldDraw * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMsg_ParticleManager_UpdateParticleShouldDraw &);
	void MergeFrom(const CUserMsg_ParticleManager_UpdateParticleShouldDraw &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_should_draw();
	void clear_should_draw();
	bool should_draw();
	void set_should_draw(bool);
	void set_has_should_draw();
	void clear_has_should_draw();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:5618
class CUserMsg_ParticleManager_ChangeControlPointAttachment : public Message {
public:

	static const int kAttachmentOldFieldNumber = 1;
	static const int kAttachmentNewFieldNumber = 2;
	static const int kEntityHandleFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 attachment_old_;  // +0x18
	int32 attachment_new_;  // +0x1c
	int32 entity_handle_;  // +0x20

	static CUserMsg_ParticleManager_ChangeControlPointAttachment * default_instance_;
	CUserMsg_ParticleManager_ChangeControlPointAttachment();
	virtual ~CUserMsg_ParticleManager_ChangeControlPointAttachment();
	CUserMsg_ParticleManager_ChangeControlPointAttachment(const CUserMsg_ParticleManager_ChangeControlPointAttachment &);
	CUserMsg_ParticleManager_ChangeControlPointAttachment & operator=(const CUserMsg_ParticleManager_ChangeControlPointAttachment &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMsg_ParticleManager_ChangeControlPointAttachment & default_instance();
	void Swap(CUserMsg_ParticleManager_ChangeControlPointAttachment *);
	virtual CUserMsg_ParticleManager_ChangeControlPointAttachment * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMsg_ParticleManager_ChangeControlPointAttachment &);
	void MergeFrom(const CUserMsg_ParticleManager_ChangeControlPointAttachment &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_attachment_old();
	void clear_attachment_old();
	int32 attachment_old();
	void set_attachment_old(int32);
	bool has_attachment_new();
	void clear_attachment_new();
	int32 attachment_new();
	void set_attachment_new(int32);
	bool has_entity_handle();
	void clear_entity_handle();
	int32 entity_handle();
	void set_entity_handle(int32);
	void set_has_attachment_old();
	void clear_has_attachment_old();
	void set_has_attachment_new();
	void clear_has_attachment_new();
	void set_has_entity_handle();
	void clear_has_entity_handle();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:5717
class CUserMsg_ParticleManager : public Message {
public:

	static const int kTypeFieldNumber = 1;
	static const int kIndexFieldNumber = 2;
	static const int kReleaseParticleIndexFieldNumber = 3;
	static const int kCreateParticleFieldNumber = 4;
	static const int kDestroyParticleFieldNumber = 5;
	static const int kDestroyParticleInvolvingFieldNumber = 6;
	static const int kUpdateParticleFieldNumber = 7;
	static const int kUpdateParticleFwdFieldNumber = 8;
	static const int kUpdateParticleOrientFieldNumber = 9;
	static const int kUpdateParticleFallbackFieldNumber = 10;
	static const int kUpdateParticleOffsetFieldNumber = 11;
	static const int kUpdateParticleEntFieldNumber = 12;
	static const int kUpdateParticleShouldDrawFieldNumber = 14;
	static const int kUpdateParticleSetFrozenFieldNumber = 15;
	static const int kChangeControlPointAttachmentFieldNumber = 16;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int type_;  // +0x18
	uint32 index_;  // +0x1c

	static CUserMsg_ParticleManager * default_instance_;
	CUserMsg_ParticleManager();
	virtual ~CUserMsg_ParticleManager();
	CUserMsg_ParticleManager(const CUserMsg_ParticleManager &);
	CUserMsg_ParticleManager & operator=(const CUserMsg_ParticleManager &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMsg_ParticleManager & default_instance();
	void Swap(CUserMsg_ParticleManager *);
	virtual CUserMsg_ParticleManager * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMsg_ParticleManager &);
	void MergeFrom(const CUserMsg_ParticleManager &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_type();
	void clear_type();
	PARTICLE_MESSAGE type();
	void set_type(PARTICLE_MESSAGE);
	bool has_index();
	void clear_index();
	uint32 index();
	void set_index(uint32);
	bool has_release_particle_index();
	void clear_release_particle_index();
	const CUserMsg_ParticleManager_ReleaseParticleIndex & release_particle_index();
	CUserMsg_ParticleManager_ReleaseParticleIndex * mutable_release_particle_index();
	CUserMsg_ParticleManager_ReleaseParticleIndex * release_release_particle_index();
	void set_allocated_release_particle_index(CUserMsg_ParticleManager_ReleaseParticleIndex *);
	bool has_create_particle();
	void clear_create_particle();
	const CUserMsg_ParticleManager_CreateParticle & create_particle();
	CUserMsg_ParticleManager_CreateParticle * mutable_create_particle();
	CUserMsg_ParticleManager_CreateParticle * release_create_particle();
	void set_allocated_create_particle(CUserMsg_ParticleManager_CreateParticle *);
	bool has_destroy_particle();
	void clear_destroy_particle();
	const CUserMsg_ParticleManager_DestroyParticle & destroy_particle();
	CUserMsg_ParticleManager_DestroyParticle * mutable_destroy_particle();
	CUserMsg_ParticleManager_DestroyParticle * release_destroy_particle();
	void set_allocated_destroy_particle(CUserMsg_ParticleManager_DestroyParticle *);
	bool has_destroy_particle_involving();
	void clear_destroy_particle_involving();
	const CUserMsg_ParticleManager_DestroyParticleInvolving & destroy_particle_involving();
	CUserMsg_ParticleManager_DestroyParticleInvolving * mutable_destroy_particle_involving();
	CUserMsg_ParticleManager_DestroyParticleInvolving * release_destroy_particle_involving();
	void set_allocated_destroy_particle_involving(CUserMsg_ParticleManager_DestroyParticleInvolving *);
	bool has_update_particle();
	void clear_update_particle();
	const CUserMsg_ParticleManager_UpdateParticle & update_particle();
	CUserMsg_ParticleManager_UpdateParticle * mutable_update_particle();
	CUserMsg_ParticleManager_UpdateParticle * release_update_particle();
	void set_allocated_update_particle(CUserMsg_ParticleManager_UpdateParticle *);
	bool has_update_particle_fwd();
	void clear_update_particle_fwd();
	const CUserMsg_ParticleManager_UpdateParticleFwd & update_particle_fwd();
	CUserMsg_ParticleManager_UpdateParticleFwd * mutable_update_particle_fwd();
	CUserMsg_ParticleManager_UpdateParticleFwd * release_update_particle_fwd();
	void set_allocated_update_particle_fwd(CUserMsg_ParticleManager_UpdateParticleFwd *);
	bool has_update_particle_orient();
	void clear_update_particle_orient();
	const CUserMsg_ParticleManager_UpdateParticleOrient & update_particle_orient();
	CUserMsg_ParticleManager_UpdateParticleOrient * mutable_update_particle_orient();
	CUserMsg_ParticleManager_UpdateParticleOrient * release_update_particle_orient();
	void set_allocated_update_particle_orient(CUserMsg_ParticleManager_UpdateParticleOrient *);
	bool has_update_particle_fallback();
	void clear_update_particle_fallback();
	const CUserMsg_ParticleManager_UpdateParticleFallback & update_particle_fallback();
	CUserMsg_ParticleManager_UpdateParticleFallback * mutable_update_particle_fallback();
	CUserMsg_ParticleManager_UpdateParticleFallback * release_update_particle_fallback();
	void set_allocated_update_particle_fallback(CUserMsg_ParticleManager_UpdateParticleFallback *);
	bool has_update_particle_offset();
	void clear_update_particle_offset();
	const CUserMsg_ParticleManager_UpdateParticleOffset & update_particle_offset();
	CUserMsg_ParticleManager_UpdateParticleOffset * mutable_update_particle_offset();
	CUserMsg_ParticleManager_UpdateParticleOffset * release_update_particle_offset();
	void set_allocated_update_particle_offset(CUserMsg_ParticleManager_UpdateParticleOffset *);
	bool has_update_particle_ent();
	void clear_update_particle_ent();
	const CUserMsg_ParticleManager_UpdateParticleEnt & update_particle_ent();
	CUserMsg_ParticleManager_UpdateParticleEnt * mutable_update_particle_ent();
	CUserMsg_ParticleManager_UpdateParticleEnt * release_update_particle_ent();
	void set_allocated_update_particle_ent(CUserMsg_ParticleManager_UpdateParticleEnt *);
	bool has_update_particle_should_draw();
	void clear_update_particle_should_draw();
	const CUserMsg_ParticleManager_UpdateParticleShouldDraw & update_particle_should_draw();
	CUserMsg_ParticleManager_UpdateParticleShouldDraw * mutable_update_particle_should_draw();
	CUserMsg_ParticleManager_UpdateParticleShouldDraw * release_update_particle_should_draw();
	void set_allocated_update_particle_should_draw(CUserMsg_ParticleManager_UpdateParticleShouldDraw *);
	bool has_update_particle_set_frozen();
	void clear_update_particle_set_frozen();
	const CUserMsg_ParticleManager_UpdateParticleSetFrozen & update_particle_set_frozen();
	CUserMsg_ParticleManager_UpdateParticleSetFrozen * mutable_update_particle_set_frozen();
	CUserMsg_ParticleManager_UpdateParticleSetFrozen * release_update_particle_set_frozen();
	void set_allocated_update_particle_set_frozen(CUserMsg_ParticleManager_UpdateParticleSetFrozen *);
	bool has_change_control_point_attachment();
	void clear_change_control_point_attachment();
	const CUserMsg_ParticleManager_ChangeControlPointAttachment & change_control_point_attachment();
	CUserMsg_ParticleManager_ChangeControlPointAttachment * mutable_change_control_point_attachment();
	CUserMsg_ParticleManager_ChangeControlPointAttachment * release_change_control_point_attachment();
	void set_allocated_change_control_point_attachment(CUserMsg_ParticleManager_ChangeControlPointAttachment *);
	void set_has_type();
	void clear_has_type();
	void set_has_index();
	void clear_has_index();
	void set_has_release_particle_index();
	void clear_has_release_particle_index();
	void set_has_create_particle();
	void clear_has_create_particle();
	void set_has_destroy_particle();
	void clear_has_destroy_particle();
	void set_has_destroy_particle_involving();
	void clear_has_destroy_particle_involving();
	void set_has_update_particle();
	void clear_has_update_particle();
	void set_has_update_particle_fwd();
	void clear_has_update_particle_fwd();
	void set_has_update_particle_orient();
	void clear_has_update_particle_orient();
	void set_has_update_particle_fallback();
	void clear_has_update_particle_fallback();
	void set_has_update_particle_offset();
	void clear_has_update_particle_offset();
	void set_has_update_particle_ent();
	void clear_has_update_particle_ent();
	void set_has_update_particle_should_draw();
	void clear_has_update_particle_should_draw();
	void set_has_update_particle_set_frozen();
	void clear_has_update_particle_set_frozen();
	void set_has_change_control_point_attachment();
	void clear_has_change_control_point_attachment();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:5976
class CUserMsg_HudError : public Message {
public:

	static const int kOrderIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 order_id_;  // +0x18

	static CUserMsg_HudError * default_instance_;
	CUserMsg_HudError();
	virtual ~CUserMsg_HudError();
	CUserMsg_HudError(const CUserMsg_HudError &);
	CUserMsg_HudError & operator=(const CUserMsg_HudError &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMsg_HudError & default_instance();
	void Swap(CUserMsg_HudError *);
	virtual CUserMsg_HudError * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMsg_HudError &);
	void MergeFrom(const CUserMsg_HudError &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_order_id();
	void clear_order_id();
	int32 order_id();
	void set_order_id(int32);
	void set_has_order_id();
	void clear_has_order_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:6055
class CUserMsg_CustomGameEvent : public Message {
public:

	static const int kEventNameFieldNumber = 1;
	static const int kDataFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * event_name_;  // +0x18
	string * data_;  // +0x20

	static CUserMsg_CustomGameEvent * default_instance_;
	CUserMsg_CustomGameEvent();
	virtual ~CUserMsg_CustomGameEvent();
	CUserMsg_CustomGameEvent(const CUserMsg_CustomGameEvent &);
	CUserMsg_CustomGameEvent & operator=(const CUserMsg_CustomGameEvent &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMsg_CustomGameEvent & default_instance();
	void Swap(CUserMsg_CustomGameEvent *);
	virtual CUserMsg_CustomGameEvent * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMsg_CustomGameEvent &);
	void MergeFrom(const CUserMsg_CustomGameEvent &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_event_name();
	void clear_event_name();
	const string & event_name();
	void set_event_name(const string &);
	void set_event_name(const char *);
	void set_event_name(const char *, size_t);
	string * mutable_event_name();
	string * release_event_name();
	void set_allocated_event_name(string *);
	bool has_data();
	void clear_data();
	const string & data();
	void set_data(const string &);
	void set_data(const char *);
	void set_data(const void *, size_t);
	string * mutable_data();
	string * release_data();
	void set_allocated_data(string *);
	void set_has_event_name();
	void clear_has_event_name();
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
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/usermessages.pb.h:6154
class CUserMessageHapticPulse : public Message {
public:

	static const int kHandIdFieldNumber = 1;
	static const int kPulseTypeFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 hand_id_;  // +0x18
	int pulse_type_;  // +0x1c

	static CUserMessageHapticPulse * default_instance_;
	CUserMessageHapticPulse();
	virtual ~CUserMessageHapticPulse();
	CUserMessageHapticPulse(const CUserMessageHapticPulse &);
	CUserMessageHapticPulse & operator=(const CUserMessageHapticPulse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CUserMessageHapticPulse & default_instance();
	void Swap(CUserMessageHapticPulse *);
	virtual CUserMessageHapticPulse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CUserMessageHapticPulse &);
	void MergeFrom(const CUserMessageHapticPulse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_hand_id();
	void clear_hand_id();
	int32 hand_id();
	void set_hand_id(int32);
	bool has_pulse_type();
	void clear_pulse_type();
	EHapticPulseType pulse_type();
	void set_pulse_type(EHapticPulseType);
	void set_has_hand_id();
	void clear_has_hand_id();
	void set_has_pulse_type();
	void clear_has_pulse_type();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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
