// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:383
class CCLCMsg_ClientInfo : public Message {
public:

	static const int kSendTableCrcFieldNumber = 1;
	static const int kServerCountFieldNumber = 2;
	static const int kIsHltvFieldNumber = 3;
	static const int kIsReplayFieldNumber = 4;
	static const int kFriendsIdFieldNumber = 5;
	static const int kFriendsNameFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 send_table_crc_;  // +0x18
	uint32 server_count_;  // +0x1c
	bool is_hltv_;  // +0x20
	bool is_replay_;  // +0x21

	uint32 friends_id_;  // +0x24
	string * friends_name_;  // +0x28

	static CCLCMsg_ClientInfo * default_instance_;
	CCLCMsg_ClientInfo();
	virtual ~CCLCMsg_ClientInfo();
	CCLCMsg_ClientInfo(const CCLCMsg_ClientInfo &);
	CCLCMsg_ClientInfo & operator=(const CCLCMsg_ClientInfo &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CCLCMsg_ClientInfo & default_instance();
	void Swap(CCLCMsg_ClientInfo *);
	virtual CCLCMsg_ClientInfo * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CCLCMsg_ClientInfo &);
	void MergeFrom(const CCLCMsg_ClientInfo &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_send_table_crc();
	void clear_send_table_crc();
	uint32 send_table_crc();
	void set_send_table_crc(uint32);
	bool has_server_count();
	void clear_server_count();
	uint32 server_count();
	void set_server_count(uint32);
	bool has_is_hltv();
	void clear_is_hltv();
	bool is_hltv();
	void set_is_hltv(bool);
	bool has_is_replay();
	void clear_is_replay();
	bool is_replay();
	void set_is_replay(bool);
	bool has_friends_id();
	void clear_friends_id();
	uint32 friends_id();
	void set_friends_id(uint32);
	bool has_friends_name();
	void clear_friends_name();
	const string & friends_name();
	void set_friends_name(const string &);
	void set_friends_name(const char *);
	void set_friends_name(const char *, size_t);
	string * mutable_friends_name();
	string * release_friends_name();
	void set_allocated_friends_name(string *);
	void set_has_send_table_crc();
	void clear_has_send_table_crc();
	void set_has_server_count();
	void clear_has_server_count();
	void set_has_is_hltv();
	void clear_has_is_hltv();
	void set_has_is_replay();
	void clear_has_is_replay();
	void set_has_friends_id();
	void clear_has_friends_id();
	void set_has_friends_name();
	void clear_has_friends_name();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:517
class CCLCMsg_Move : public Message {
public:

	static const int kNumBackupCommandsFieldNumber = 1;
	static const int kNumNewCommandsFieldNumber = 2;
	static const int kDataFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 num_backup_commands_;  // +0x18
	uint32 num_new_commands_;  // +0x1c
	string * data_;  // +0x20

	static CCLCMsg_Move * default_instance_;
	CCLCMsg_Move();
	virtual ~CCLCMsg_Move();
	CCLCMsg_Move(const CCLCMsg_Move &);
	CCLCMsg_Move & operator=(const CCLCMsg_Move &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CCLCMsg_Move & default_instance();
	void Swap(CCLCMsg_Move *);
	virtual CCLCMsg_Move * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CCLCMsg_Move &);
	void MergeFrom(const CCLCMsg_Move &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_num_backup_commands();
	void clear_num_backup_commands();
	uint32 num_backup_commands();
	void set_num_backup_commands(uint32);
	bool has_num_new_commands();
	void clear_num_new_commands();
	uint32 num_new_commands();
	void set_num_new_commands(uint32);
	bool has_data();
	void clear_data();
	const string & data();
	void set_data(const string &);
	void set_data(const char *);
	void set_data(const void *, size_t);
	string * mutable_data();
	string * release_data();
	void set_allocated_data(string *);
	void set_has_num_backup_commands();
	void clear_has_num_backup_commands();
	void set_has_num_new_commands();
	void clear_has_num_new_commands();
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:621
class CMsgVoiceAudio : public Message {
public:

	static const int kFormatFieldNumber = 1;
	static const int kVoiceDataFieldNumber = 2;
	static const int kSequenceBytesFieldNumber = 3;
	static const int kSectionNumberFieldNumber = 4;
	static const int kSampleRateFieldNumber = 5;
	static const int kUncompressedSampleOffsetFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * voice_data_;  // +0x18
	int format_;  // +0x20
	int32 sequence_bytes_;  // +0x24
	uint32 section_number_;  // +0x28
	uint32 sample_rate_;  // +0x2c
	uint32 uncompressed_sample_offset_;  // +0x30

	static CMsgVoiceAudio * default_instance_;
	CMsgVoiceAudio();
	virtual ~CMsgVoiceAudio();
	CMsgVoiceAudio(const CMsgVoiceAudio &);
	CMsgVoiceAudio & operator=(const CMsgVoiceAudio &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgVoiceAudio & default_instance();
	void Swap(CMsgVoiceAudio *);
	virtual CMsgVoiceAudio * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgVoiceAudio &);
	void MergeFrom(const CMsgVoiceAudio &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_format();
	void clear_format();
	VoiceDataFormat_t format();
	void set_format(VoiceDataFormat_t);
	bool has_voice_data();
	void clear_voice_data();
	const string & voice_data();
	void set_voice_data(const string &);
	void set_voice_data(const char *);
	void set_voice_data(const void *, size_t);
	string * mutable_voice_data();
	string * release_voice_data();
	void set_allocated_voice_data(string *);
	bool has_sequence_bytes();
	void clear_sequence_bytes();
	int32 sequence_bytes();
	void set_sequence_bytes(int32);
	bool has_section_number();
	void clear_section_number();
	uint32 section_number();
	void set_section_number(uint32);
	bool has_sample_rate();
	void clear_sample_rate();
	uint32 sample_rate();
	void set_sample_rate(uint32);
	bool has_uncompressed_sample_offset();
	void clear_uncompressed_sample_offset();
	uint32 uncompressed_sample_offset();
	void set_uncompressed_sample_offset(uint32);
	void set_has_format();
	void clear_has_format();
	void set_has_voice_data();
	void clear_has_voice_data();
	void set_has_sequence_bytes();
	void clear_has_sequence_bytes();
	void set_has_section_number();
	void clear_has_section_number();
	void set_has_sample_rate();
	void clear_has_sample_rate();
	void set_has_uncompressed_sample_offset();
	void clear_has_uncompressed_sample_offset();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:755
class CCLCMsg_VoiceData : public Message {
public:

	static const int kAudioFieldNumber = 1;
	static const int kXuidFieldNumber = 2;
	static const int kTickFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 xuid_;  // +0x20
	uint32 tick_;  // +0x28

	static CCLCMsg_VoiceData * default_instance_;
	CCLCMsg_VoiceData();
	virtual ~CCLCMsg_VoiceData();
	CCLCMsg_VoiceData(const CCLCMsg_VoiceData &);
	CCLCMsg_VoiceData & operator=(const CCLCMsg_VoiceData &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CCLCMsg_VoiceData & default_instance();
	void Swap(CCLCMsg_VoiceData *);
	virtual CCLCMsg_VoiceData * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CCLCMsg_VoiceData &);
	void MergeFrom(const CCLCMsg_VoiceData &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_audio();
	void clear_audio();
	const CMsgVoiceAudio & audio();
	CMsgVoiceAudio * mutable_audio();
	CMsgVoiceAudio * release_audio();
	void set_allocated_audio(CMsgVoiceAudio *);
	bool has_xuid();
	void clear_xuid();
	uint64 xuid();
	void set_xuid(uint64);
	bool has_tick();
	void clear_tick();
	uint32 tick();
	void set_tick(uint32);
	void set_has_audio();
	void clear_has_audio();
	void set_has_xuid();
	void clear_has_xuid();
	void set_has_tick();
	void clear_has_tick();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:856
class CCLCMsg_BaselineAck : public Message {
public:

	static const int kBaselineTickFieldNumber = 1;
	static const int kBaselineNrFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 baseline_tick_;  // +0x18
	int32 baseline_nr_;  // +0x1c

	static CCLCMsg_BaselineAck * default_instance_;
	CCLCMsg_BaselineAck();
	virtual ~CCLCMsg_BaselineAck();
	CCLCMsg_BaselineAck(const CCLCMsg_BaselineAck &);
	CCLCMsg_BaselineAck & operator=(const CCLCMsg_BaselineAck &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CCLCMsg_BaselineAck & default_instance();
	void Swap(CCLCMsg_BaselineAck *);
	virtual CCLCMsg_BaselineAck * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CCLCMsg_BaselineAck &);
	void MergeFrom(const CCLCMsg_BaselineAck &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_baseline_tick();
	void clear_baseline_tick();
	int32 baseline_tick();
	void set_baseline_tick(int32);
	bool has_baseline_nr();
	void clear_baseline_nr();
	int32 baseline_nr();
	void set_baseline_nr(int32);
	void set_has_baseline_tick();
	void clear_has_baseline_tick();
	void set_has_baseline_nr();
	void clear_has_baseline_nr();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:945
class CCLCMsg_ListenEvents : public Message {
public:

	static const int kEventMaskFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CCLCMsg_ListenEvents * default_instance_;
	CCLCMsg_ListenEvents();
	virtual ~CCLCMsg_ListenEvents();
	CCLCMsg_ListenEvents(const CCLCMsg_ListenEvents &);
	CCLCMsg_ListenEvents & operator=(const CCLCMsg_ListenEvents &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CCLCMsg_ListenEvents & default_instance();
	void Swap(CCLCMsg_ListenEvents *);
	virtual CCLCMsg_ListenEvents * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CCLCMsg_ListenEvents &);
	void MergeFrom(const CCLCMsg_ListenEvents &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int event_mask_size();
	void clear_event_mask();
	uint32 event_mask(int);
	void set_event_mask(int, uint32);
	void add_event_mask(uint32);
	const RepeatedField<unsigned int> & event_mask();
	RepeatedField<unsigned int> * mutable_event_mask();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:1027
class CCLCMsg_RespondCvarValue : public Message {
public:

	static const int kCookieFieldNumber = 1;
	static const int kStatusCodeFieldNumber = 2;
	static const int kNameFieldNumber = 3;
	static const int kValueFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 cookie_;  // +0x18
	int32 status_code_;  // +0x1c
	string * name_;  // +0x20
	string * value_;  // +0x28

	static CCLCMsg_RespondCvarValue * default_instance_;
	CCLCMsg_RespondCvarValue();
	virtual ~CCLCMsg_RespondCvarValue();
	CCLCMsg_RespondCvarValue(const CCLCMsg_RespondCvarValue &);
	CCLCMsg_RespondCvarValue & operator=(const CCLCMsg_RespondCvarValue &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CCLCMsg_RespondCvarValue & default_instance();
	void Swap(CCLCMsg_RespondCvarValue *);
	virtual CCLCMsg_RespondCvarValue * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CCLCMsg_RespondCvarValue &);
	void MergeFrom(const CCLCMsg_RespondCvarValue &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_cookie();
	void clear_cookie();
	int32 cookie();
	void set_cookie(int32);
	bool has_status_code();
	void clear_status_code();
	int32 status_code();
	void set_status_code(int32);
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
	void set_has_cookie();
	void clear_has_cookie();
	void set_has_status_code();
	void clear_has_status_code();
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
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:1146
class CCLCMsg_FileCRCCheck : public Message {
public:

	static const int kCodePathFieldNumber = 1;
	static const int kPathFieldNumber = 2;
	static const int kCodeFilenameFieldNumber = 3;
	static const int kFilenameFieldNumber = 4;
	static const int kCrcFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * path_;  // +0x18
	int32 code_path_;  // +0x20
	int32 code_filename_;  // +0x24
	string * filename_;  // +0x28
	uint32 crc_;  // +0x30

	static CCLCMsg_FileCRCCheck * default_instance_;
	CCLCMsg_FileCRCCheck();
	virtual ~CCLCMsg_FileCRCCheck();
	CCLCMsg_FileCRCCheck(const CCLCMsg_FileCRCCheck &);
	CCLCMsg_FileCRCCheck & operator=(const CCLCMsg_FileCRCCheck &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CCLCMsg_FileCRCCheck & default_instance();
	void Swap(CCLCMsg_FileCRCCheck *);
	virtual CCLCMsg_FileCRCCheck * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CCLCMsg_FileCRCCheck &);
	void MergeFrom(const CCLCMsg_FileCRCCheck &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_code_path();
	void clear_code_path();
	int32 code_path();
	void set_code_path(int32);
	bool has_path();
	void clear_path();
	const string & path();
	void set_path(const string &);
	void set_path(const char *);
	void set_path(const char *, size_t);
	string * mutable_path();
	string * release_path();
	void set_allocated_path(string *);
	bool has_code_filename();
	void clear_code_filename();
	int32 code_filename();
	void set_code_filename(int32);
	bool has_filename();
	void clear_filename();
	const string & filename();
	void set_filename(const string &);
	void set_filename(const char *);
	void set_filename(const char *, size_t);
	string * mutable_filename();
	string * release_filename();
	void set_allocated_filename(string *);
	bool has_crc();
	void clear_crc();
	uint32 crc();
	void set_crc(uint32);
	void set_has_code_path();
	void clear_has_code_path();
	void set_has_path();
	void clear_has_path();
	void set_has_code_filename();
	void clear_has_code_filename();
	void set_has_filename();
	void clear_has_filename();
	void set_has_crc();
	void clear_has_crc();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:1275
class CCLCMsg_LoadingProgress : public Message {
public:

	static const int kProgressFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 progress_;  // +0x18

	static CCLCMsg_LoadingProgress * default_instance_;
	CCLCMsg_LoadingProgress();
	virtual ~CCLCMsg_LoadingProgress();
	CCLCMsg_LoadingProgress(const CCLCMsg_LoadingProgress &);
	CCLCMsg_LoadingProgress & operator=(const CCLCMsg_LoadingProgress &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CCLCMsg_LoadingProgress & default_instance();
	void Swap(CCLCMsg_LoadingProgress *);
	virtual CCLCMsg_LoadingProgress * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CCLCMsg_LoadingProgress &);
	void MergeFrom(const CCLCMsg_LoadingProgress &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_progress();
	void clear_progress();
	int32 progress();
	void set_progress(int32);
	void set_has_progress();
	void clear_has_progress();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:1354
class CCLCMsg_SplitPlayerConnect : public Message {
public:

	static const int kPlayernameFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * playername_;  // +0x18

	static CCLCMsg_SplitPlayerConnect * default_instance_;
	CCLCMsg_SplitPlayerConnect();
	virtual ~CCLCMsg_SplitPlayerConnect();
	CCLCMsg_SplitPlayerConnect(const CCLCMsg_SplitPlayerConnect &);
	CCLCMsg_SplitPlayerConnect & operator=(const CCLCMsg_SplitPlayerConnect &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CCLCMsg_SplitPlayerConnect & default_instance();
	void Swap(CCLCMsg_SplitPlayerConnect *);
	virtual CCLCMsg_SplitPlayerConnect * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CCLCMsg_SplitPlayerConnect &);
	void MergeFrom(const CCLCMsg_SplitPlayerConnect &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_playername();
	void clear_playername();
	const string & playername();
	void set_playername(const string &);
	void set_playername(const char *);
	void set_playername(const char *, size_t);
	string * mutable_playername();
	string * release_playername();
	void set_allocated_playername(string *);
	void set_has_playername();
	void clear_has_playername();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:1438
class CCLCMsg_ClientMessage : public Message {
public:

	static const int kMsgTypeFieldNumber = 1;
	static const int kDataFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * data_;  // +0x18
	int32 msg_type_;  // +0x20

	static CCLCMsg_ClientMessage * default_instance_;
	CCLCMsg_ClientMessage();
	virtual ~CCLCMsg_ClientMessage();
	CCLCMsg_ClientMessage(const CCLCMsg_ClientMessage &);
	CCLCMsg_ClientMessage & operator=(const CCLCMsg_ClientMessage &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CCLCMsg_ClientMessage & default_instance();
	void Swap(CCLCMsg_ClientMessage *);
	virtual CCLCMsg_ClientMessage * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CCLCMsg_ClientMessage &);
	void MergeFrom(const CCLCMsg_ClientMessage &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_msg_type();
	void clear_msg_type();
	int32 msg_type();
	void set_msg_type(int32);
	bool has_data();
	void clear_data();
	const string & data();
	void set_data(const string &);
	void set_data(const char *);
	void set_data(const void *, size_t);
	string * mutable_data();
	string * release_data();
	void set_allocated_data(string *);
	void set_has_msg_type();
	void clear_has_msg_type();
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:1532
class CCLCMsg_SplitPlayerDisconnect : public Message {
public:

	static const int kSlotFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 slot_;  // +0x18

	static CCLCMsg_SplitPlayerDisconnect * default_instance_;
	CCLCMsg_SplitPlayerDisconnect();
	virtual ~CCLCMsg_SplitPlayerDisconnect();
	CCLCMsg_SplitPlayerDisconnect(const CCLCMsg_SplitPlayerDisconnect &);
	CCLCMsg_SplitPlayerDisconnect & operator=(const CCLCMsg_SplitPlayerDisconnect &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CCLCMsg_SplitPlayerDisconnect & default_instance();
	void Swap(CCLCMsg_SplitPlayerDisconnect *);
	virtual CCLCMsg_SplitPlayerDisconnect * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CCLCMsg_SplitPlayerDisconnect &);
	void MergeFrom(const CCLCMsg_SplitPlayerDisconnect &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_slot();
	void clear_slot();
	int32 slot();
	void set_slot(int32);
	void set_has_slot();
	void clear_has_slot();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:1611
class CCLCMsg_ServerStatus : public Message {
public:

	static const int kSimplifiedFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool simplified_;  // +0x18

	static CCLCMsg_ServerStatus * default_instance_;
	CCLCMsg_ServerStatus();
	virtual ~CCLCMsg_ServerStatus();
	CCLCMsg_ServerStatus(const CCLCMsg_ServerStatus &);
	CCLCMsg_ServerStatus & operator=(const CCLCMsg_ServerStatus &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CCLCMsg_ServerStatus & default_instance();
	void Swap(CCLCMsg_ServerStatus *);
	virtual CCLCMsg_ServerStatus * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CCLCMsg_ServerStatus &);
	void MergeFrom(const CCLCMsg_ServerStatus &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_simplified();
	void clear_simplified();
	bool simplified();
	void set_simplified(bool);
	void set_has_simplified();
	void clear_has_simplified();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:1690
class CCLCMsg_ServerPing : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CCLCMsg_ServerPing * default_instance_;
	CCLCMsg_ServerPing();
	virtual ~CCLCMsg_ServerPing();
	CCLCMsg_ServerPing(const CCLCMsg_ServerPing &);
	CCLCMsg_ServerPing & operator=(const CCLCMsg_ServerPing &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CCLCMsg_ServerPing & default_instance();
	void Swap(CCLCMsg_ServerPing *);
	virtual CCLCMsg_ServerPing * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CCLCMsg_ServerPing &);
	void MergeFrom(const CCLCMsg_ServerPing &);
	virtual void Clear();
	virtual bool IsInitialized();
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:1759
class CCLCMsg_RequestPause : public Message {
public:

	static const int kPauseTypeFieldNumber = 1;
	static const int kPauseGroupFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int pause_type_;  // +0x18
	int32 pause_group_;  // +0x1c

	static CCLCMsg_RequestPause * default_instance_;
	CCLCMsg_RequestPause();
	virtual ~CCLCMsg_RequestPause();
	CCLCMsg_RequestPause(const CCLCMsg_RequestPause &);
	CCLCMsg_RequestPause & operator=(const CCLCMsg_RequestPause &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CCLCMsg_RequestPause & default_instance();
	void Swap(CCLCMsg_RequestPause *);
	virtual CCLCMsg_RequestPause * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CCLCMsg_RequestPause &);
	void MergeFrom(const CCLCMsg_RequestPause &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_pause_type();
	void clear_pause_type();
	RequestPause_t pause_type();
	void set_pause_type(RequestPause_t);
	bool has_pause_group();
	void clear_pause_group();
	int32 pause_group();
	void set_pause_group(int32);
	void set_has_pause_type();
	void clear_has_pause_type();
	void set_has_pause_group();
	void clear_has_pause_group();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:1848
class CCLCMsg_CmdKeyValues : public Message {
public:

	static const int kDataFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * data_;  // +0x18

	static CCLCMsg_CmdKeyValues * default_instance_;
	CCLCMsg_CmdKeyValues();
	virtual ~CCLCMsg_CmdKeyValues();
	CCLCMsg_CmdKeyValues(const CCLCMsg_CmdKeyValues &);
	CCLCMsg_CmdKeyValues & operator=(const CCLCMsg_CmdKeyValues &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CCLCMsg_CmdKeyValues & default_instance();
	void Swap(CCLCMsg_CmdKeyValues *);
	virtual CCLCMsg_CmdKeyValues * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CCLCMsg_CmdKeyValues &);
	void MergeFrom(const CCLCMsg_CmdKeyValues &);
	virtual void Clear();
	virtual bool IsInitialized();
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:1932
class CSVCMsg_ServerInfo : public Message {
public:

	static const int kProtocolFieldNumber = 1;
	static const int kServerCountFieldNumber = 2;
	static const int kIsDedicatedFieldNumber = 3;
	static const int kIsHltvFieldNumber = 4;
	static const int kIsReplayFieldNumber = 5;
	static const int kCOsFieldNumber = 6;
	static const int kMapCrcFieldNumber = 7;
	static const int kClientCrcFieldNumber = 8;
	static const int kStringTableCrcFieldNumber = 9;
	static const int kMaxClientsFieldNumber = 10;
	static const int kMaxClassesFieldNumber = 11;
	static const int kPlayerSlotFieldNumber = 12;
	static const int kTickIntervalFieldNumber = 13;
	static const int kGameDirFieldNumber = 14;
	static const int kMapNameFieldNumber = 15;
	static const int kSkyNameFieldNumber = 16;
	static const int kHostNameFieldNumber = 17;
	static const int kAddonNameFieldNumber = 18;
	static const int kGameSessionConfigFieldNumber = 19;
	static const int kGameSessionManifestFieldNumber = 20;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 protocol_;  // +0x18
	int32 server_count_;  // +0x1c
	bool is_dedicated_;  // +0x20
	bool is_hltv_;  // +0x21
	bool is_replay_;  // +0x22

	int32 c_os_;  // +0x24
	uint32 map_crc_;  // +0x28
	uint32 client_crc_;  // +0x2c
	uint32 string_table_crc_;  // +0x30
	int32 max_clients_;  // +0x34
	int32 max_classes_;  // +0x38
	int32 player_slot_;  // +0x3c
	string * game_dir_;  // +0x40
	string * map_name_;  // +0x48
	string * sky_name_;  // +0x50
	string * host_name_;  // +0x58
	string * addon_name_;  // +0x60
	string * game_session_manifest_;  // +0x70
	float tick_interval_;  // +0x78

	static CSVCMsg_ServerInfo * default_instance_;
	CSVCMsg_ServerInfo();
	virtual ~CSVCMsg_ServerInfo();
	CSVCMsg_ServerInfo(const CSVCMsg_ServerInfo &);
	CSVCMsg_ServerInfo & operator=(const CSVCMsg_ServerInfo &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_ServerInfo & default_instance();
	void Swap(CSVCMsg_ServerInfo *);
	virtual CSVCMsg_ServerInfo * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_ServerInfo &);
	void MergeFrom(const CSVCMsg_ServerInfo &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_protocol();
	void clear_protocol();
	int32 protocol();
	void set_protocol(int32);
	bool has_server_count();
	void clear_server_count();
	int32 server_count();
	void set_server_count(int32);
	bool has_is_dedicated();
	void clear_is_dedicated();
	bool is_dedicated();
	void set_is_dedicated(bool);
	bool has_is_hltv();
	void clear_is_hltv();
	bool is_hltv();
	void set_is_hltv(bool);
	bool has_is_replay();
	void clear_is_replay();
	bool is_replay();
	void set_is_replay(bool);
	bool has_c_os();
	void clear_c_os();
	int32 c_os();
	void set_c_os(int32);
	bool has_map_crc();
	void clear_map_crc();
	uint32 map_crc();
	void set_map_crc(uint32);
	bool has_client_crc();
	void clear_client_crc();
	uint32 client_crc();
	void set_client_crc(uint32);
	bool has_string_table_crc();
	void clear_string_table_crc();
	uint32 string_table_crc();
	void set_string_table_crc(uint32);
	bool has_max_clients();
	void clear_max_clients();
	int32 max_clients();
	void set_max_clients(int32);
	bool has_max_classes();
	void clear_max_classes();
	int32 max_classes();
	void set_max_classes(int32);
	bool has_player_slot();
	void clear_player_slot();
	int32 player_slot();
	void set_player_slot(int32);
	bool has_tick_interval();
	void clear_tick_interval();
	float tick_interval();
	void set_tick_interval(float);
	bool has_game_dir();
	void clear_game_dir();
	const string & game_dir();
	void set_game_dir(const string &);
	void set_game_dir(const char *);
	void set_game_dir(const char *, size_t);
	string * mutable_game_dir();
	string * release_game_dir();
	void set_allocated_game_dir(string *);
	bool has_map_name();
	void clear_map_name();
	const string & map_name();
	void set_map_name(const string &);
	void set_map_name(const char *);
	void set_map_name(const char *, size_t);
	string * mutable_map_name();
	string * release_map_name();
	void set_allocated_map_name(string *);
	bool has_sky_name();
	void clear_sky_name();
	const string & sky_name();
	void set_sky_name(const string &);
	void set_sky_name(const char *);
	void set_sky_name(const char *, size_t);
	string * mutable_sky_name();
	string * release_sky_name();
	void set_allocated_sky_name(string *);
	bool has_host_name();
	void clear_host_name();
	const string & host_name();
	void set_host_name(const string &);
	void set_host_name(const char *);
	void set_host_name(const char *, size_t);
	string * mutable_host_name();
	string * release_host_name();
	void set_allocated_host_name(string *);
	bool has_addon_name();
	void clear_addon_name();
	const string & addon_name();
	void set_addon_name(const string &);
	void set_addon_name(const char *);
	void set_addon_name(const char *, size_t);
	string * mutable_addon_name();
	string * release_addon_name();
	void set_allocated_addon_name(string *);
	bool has_game_session_config();
	void clear_game_session_config();
	const CSVCMsg_GameSessionConfiguration & game_session_config();
	CSVCMsg_GameSessionConfiguration * mutable_game_session_config();
	CSVCMsg_GameSessionConfiguration * release_game_session_config();
	void set_allocated_game_session_config(CSVCMsg_GameSessionConfiguration *);
	bool has_game_session_manifest();
	void clear_game_session_manifest();
	const string & game_session_manifest();
	void set_game_session_manifest(const string &);
	void set_game_session_manifest(const char *);
	void set_game_session_manifest(const void *, size_t);
	string * mutable_game_session_manifest();
	string * release_game_session_manifest();
	void set_allocated_game_session_manifest(string *);
	void set_has_protocol();
	void clear_has_protocol();
	void set_has_server_count();
	void clear_has_server_count();
	void set_has_is_dedicated();
	void clear_has_is_dedicated();
	void set_has_is_hltv();
	void clear_has_is_hltv();
	void set_has_is_replay();
	void clear_has_is_replay();
	void set_has_c_os();
	void clear_has_c_os();
	void set_has_map_crc();
	void clear_has_map_crc();
	void set_has_client_crc();
	void clear_has_client_crc();
	void set_has_string_table_crc();
	void clear_has_string_table_crc();
	void set_has_max_clients();
	void clear_has_max_clients();
	void set_has_max_classes();
	void clear_has_max_classes();
	void set_has_player_slot();
	void clear_has_player_slot();
	void set_has_tick_interval();
	void clear_has_tick_interval();
	void set_has_game_dir();
	void clear_has_game_dir();
	void set_has_map_name();
	void clear_has_map_name();
	void set_has_sky_name();
	void clear_has_sky_name();
	void set_has_host_name();
	void clear_has_host_name();
	void set_has_addon_name();
	void clear_has_addon_name();
	void set_has_game_session_config();
	void clear_has_game_session_config();
	void set_has_game_session_manifest();
	void clear_has_game_session_manifest();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 128
};

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:2233
class CSVCMsg_ClassInfo_class_t : public Message {
public:

	static const int kClassIdFieldNumber = 1;
	static const int kDataTableNameFieldNumber = 2;
	static const int kClassNameFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * data_table_name_;  // +0x18
	string * class_name_;  // +0x20
	int32 class_id_;  // +0x28

	static CSVCMsg_ClassInfo_class_t * default_instance_;
	CSVCMsg_ClassInfo_class_t();
	virtual ~CSVCMsg_ClassInfo_class_t();
	CSVCMsg_ClassInfo_class_t(const CSVCMsg_ClassInfo_class_t &);
	CSVCMsg_ClassInfo_class_t & operator=(const CSVCMsg_ClassInfo_class_t &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_ClassInfo_class_t & default_instance();
	void Swap(CSVCMsg_ClassInfo_class_t *);
	virtual CSVCMsg_ClassInfo_class_t * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_ClassInfo_class_t &);
	void MergeFrom(const CSVCMsg_ClassInfo_class_t &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	int32 class_id();
	void set_class_id(int32);
	bool has_data_table_name();
	void clear_data_table_name();
	const string & data_table_name();
	void set_data_table_name(const string &);
	void set_data_table_name(const char *);
	void set_data_table_name(const char *, size_t);
	string * mutable_data_table_name();
	string * release_data_table_name();
	void set_allocated_data_table_name(string *);
	bool has_class_name();
	void clear_class_name();
	const string & class_name();
	void set_class_name(const string &);
	void set_class_name(const char *);
	void set_class_name(const char *, size_t);
	string * mutable_class_name();
	string * release_class_name();
	void set_allocated_class_name(string *);
	void set_has_class_id();
	void clear_has_class_id();
	void set_has_data_table_name();
	void clear_has_data_table_name();
	void set_has_class_name();
	void clear_has_class_name();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:2342
class CSVCMsg_ClassInfo : public Message {
public:

	static const int kCreateOnClientFieldNumber = 1;
	static const int kClassesFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool create_on_client_;  // +0x30

	static CSVCMsg_ClassInfo * default_instance_;
	CSVCMsg_ClassInfo();
	virtual ~CSVCMsg_ClassInfo();
	CSVCMsg_ClassInfo(const CSVCMsg_ClassInfo &);
	CSVCMsg_ClassInfo & operator=(const CSVCMsg_ClassInfo &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_ClassInfo & default_instance();
	void Swap(CSVCMsg_ClassInfo *);
	virtual CSVCMsg_ClassInfo * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_ClassInfo &);
	void MergeFrom(const CSVCMsg_ClassInfo &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_create_on_client();
	void clear_create_on_client();
	bool create_on_client();
	void set_create_on_client(bool);
	int classes_size();
	void clear_classes();
	const CSVCMsg_ClassInfo_class_t & classes(int);
	CSVCMsg_ClassInfo_class_t * mutable_classes(int);
	CSVCMsg_ClassInfo_class_t * add_classes();
	const RepeatedPtrField<CSVCMsg_ClassInfo_class_t> & classes();
	RepeatedPtrField<CSVCMsg_ClassInfo_class_t> * mutable_classes();
	void set_has_create_on_client();
	void clear_has_create_on_client();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:2436
class CSVCMsg_SetPause : public Message {
public:

	static const int kPausedFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool paused_;  // +0x18

	static CSVCMsg_SetPause * default_instance_;
	CSVCMsg_SetPause();
	virtual ~CSVCMsg_SetPause();
	CSVCMsg_SetPause(const CSVCMsg_SetPause &);
	CSVCMsg_SetPause & operator=(const CSVCMsg_SetPause &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_SetPause & default_instance();
	void Swap(CSVCMsg_SetPause *);
	virtual CSVCMsg_SetPause * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_SetPause &);
	void MergeFrom(const CSVCMsg_SetPause &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_paused();
	void clear_paused();
	bool paused();
	void set_paused(bool);
	void set_has_paused();
	void clear_has_paused();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:2515
class CSVCMsg_VoiceInit : public Message {
public:

	static const int kQualityFieldNumber = 1;
	static const int kCodecFieldNumber = 2;
	static const int kVersionFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * codec_;  // +0x18
	int32 quality_;  // +0x20
	int32 version_;  // +0x24

	static CSVCMsg_VoiceInit * default_instance_;
	CSVCMsg_VoiceInit();
	virtual ~CSVCMsg_VoiceInit();
	CSVCMsg_VoiceInit(const CSVCMsg_VoiceInit &);
	CSVCMsg_VoiceInit & operator=(const CSVCMsg_VoiceInit &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_VoiceInit & default_instance();
	void Swap(CSVCMsg_VoiceInit *);
	virtual CSVCMsg_VoiceInit * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_VoiceInit &);
	void MergeFrom(const CSVCMsg_VoiceInit &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_quality();
	void clear_quality();
	int32 quality();
	void set_quality(int32);
	bool has_codec();
	void clear_codec();
	const string & codec();
	void set_codec(const string &);
	void set_codec(const char *);
	void set_codec(const char *, size_t);
	string * mutable_codec();
	string * release_codec();
	void set_allocated_codec(string *);
	bool has_version();
	void clear_version();
	int32 version();
	void set_version(int32);
	void set_has_quality();
	void clear_has_quality();
	void set_has_codec();
	void clear_has_codec();
	void set_has_version();
	void clear_has_version();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:2619
class CSVCMsg_Print : public Message {
public:

	static const int kTextFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * text_;  // +0x18

	static CSVCMsg_Print * default_instance_;
	CSVCMsg_Print();
	virtual ~CSVCMsg_Print();
	CSVCMsg_Print(const CSVCMsg_Print &);
	CSVCMsg_Print & operator=(const CSVCMsg_Print &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_Print & default_instance();
	void Swap(CSVCMsg_Print *);
	virtual CSVCMsg_Print * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_Print &);
	void MergeFrom(const CSVCMsg_Print &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:2703
class CSVCMsg_Sounds_sounddata_t : public Message {
public:

	static const int kOriginXFieldNumber = 1;
	static const int kOriginYFieldNumber = 2;
	static const int kOriginZFieldNumber = 3;
	static const int kVolumeFieldNumber = 4;
	static const int kDelayValueFieldNumber = 5;
	static const int kSequenceNumberFieldNumber = 6;
	static const int kEntityIndexFieldNumber = 7;
	static const int kChannelFieldNumber = 8;
	static const int kPitchFieldNumber = 9;
	static const int kFlagsFieldNumber = 10;
	static const int kSoundNumFieldNumber = 11;
	static const int kSoundNumHandleFieldNumber = 12;
	static const int kSpeakerEntityFieldNumber = 13;
	static const int kRandomSeedFieldNumber = 14;
	static const int kSoundLevelFieldNumber = 15;
	static const int kIsSentenceFieldNumber = 16;
	static const int kIsAmbientFieldNumber = 17;
	static const int kGuidFieldNumber = 18;
	static const int kSoundResourceIdFieldNumber = 19;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 origin_x_;  // +0x18
	int32 origin_y_;  // +0x1c
	int32 origin_z_;  // +0x20
	uint32 volume_;  // +0x24
	float delay_value_;  // +0x28
	int32 sequence_number_;  // +0x2c
	int32 entity_index_;  // +0x30
	int32 channel_;  // +0x34
	int32 pitch_;  // +0x38
	int32 flags_;  // +0x3c
	uint32 sound_num_;  // +0x40
	uint32 sound_num_handle_;  // +0x44
	int32 speaker_entity_;  // +0x48
	int32 random_seed_;  // +0x4c
	int32 sound_level_;  // +0x50
	bool is_sentence_;  // +0x54
	bool is_ambient_;  // +0x55

	uint64 sound_resource_id_;  // +0x58
	uint32 guid_;  // +0x60

	static CSVCMsg_Sounds_sounddata_t * default_instance_;
	CSVCMsg_Sounds_sounddata_t();
	virtual ~CSVCMsg_Sounds_sounddata_t();
	CSVCMsg_Sounds_sounddata_t(const CSVCMsg_Sounds_sounddata_t &);
	CSVCMsg_Sounds_sounddata_t & operator=(const CSVCMsg_Sounds_sounddata_t &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_Sounds_sounddata_t & default_instance();
	void Swap(CSVCMsg_Sounds_sounddata_t *);
	virtual CSVCMsg_Sounds_sounddata_t * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_Sounds_sounddata_t &);
	void MergeFrom(const CSVCMsg_Sounds_sounddata_t &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_origin_x();
	void clear_origin_x();
	int32 origin_x();
	void set_origin_x(int32);
	bool has_origin_y();
	void clear_origin_y();
	int32 origin_y();
	void set_origin_y(int32);
	bool has_origin_z();
	void clear_origin_z();
	int32 origin_z();
	void set_origin_z(int32);
	bool has_volume();
	void clear_volume();
	uint32 volume();
	void set_volume(uint32);
	bool has_delay_value();
	void clear_delay_value();
	float delay_value();
	void set_delay_value(float);
	bool has_sequence_number();
	void clear_sequence_number();
	int32 sequence_number();
	void set_sequence_number(int32);
	bool has_entity_index();
	void clear_entity_index();
	int32 entity_index();
	void set_entity_index(int32);
	bool has_channel();
	void clear_channel();
	int32 channel();
	void set_channel(int32);
	bool has_pitch();
	void clear_pitch();
	int32 pitch();
	void set_pitch(int32);
	bool has_flags();
	void clear_flags();
	int32 flags();
	void set_flags(int32);
	bool has_sound_num();
	void clear_sound_num();
	uint32 sound_num();
	void set_sound_num(uint32);
	bool has_sound_num_handle();
	void clear_sound_num_handle();
	uint32 sound_num_handle();
	void set_sound_num_handle(uint32);
	bool has_speaker_entity();
	void clear_speaker_entity();
	int32 speaker_entity();
	void set_speaker_entity(int32);
	bool has_random_seed();
	void clear_random_seed();
	int32 random_seed();
	void set_random_seed(int32);
	bool has_sound_level();
	void clear_sound_level();
	int32 sound_level();
	void set_sound_level(int32);
	bool has_is_sentence();
	void clear_is_sentence();
	bool is_sentence();
	void set_is_sentence(bool);
	bool has_is_ambient();
	void clear_is_ambient();
	bool is_ambient();
	void set_is_ambient(bool);
	bool has_guid();
	void clear_guid();
	uint32 guid();
	void set_guid(uint32);
	bool has_sound_resource_id();
	void clear_sound_resource_id();
	uint64 sound_resource_id();
	void set_sound_resource_id(uint64);
	void set_has_origin_x();
	void clear_has_origin_x();
	void set_has_origin_y();
	void clear_has_origin_y();
	void set_has_origin_z();
	void clear_has_origin_z();
	void set_has_volume();
	void clear_has_volume();
	void set_has_delay_value();
	void clear_has_delay_value();
	void set_has_sequence_number();
	void clear_has_sequence_number();
	void set_has_entity_index();
	void clear_has_entity_index();
	void set_has_channel();
	void clear_has_channel();
	void set_has_pitch();
	void clear_has_pitch();
	void set_has_flags();
	void clear_has_flags();
	void set_has_sound_num();
	void clear_has_sound_num();
	void set_has_sound_num_handle();
	void clear_has_sound_num_handle();
	void set_has_speaker_entity();
	void clear_has_speaker_entity();
	void set_has_random_seed();
	void clear_has_random_seed();
	void set_has_sound_level();
	void clear_has_sound_level();
	void set_has_is_sentence();
	void clear_has_is_sentence();
	void set_has_is_ambient();
	void clear_has_is_ambient();
	void set_has_guid();
	void clear_has_guid();
	void set_has_sound_resource_id();
	void clear_has_sound_resource_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:2962
class CSVCMsg_Sounds : public Message {
public:

	static const int kReliableSoundFieldNumber = 1;
	static const int kSoundsFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool reliable_sound_;  // +0x30

	static CSVCMsg_Sounds * default_instance_;
	CSVCMsg_Sounds();
	virtual ~CSVCMsg_Sounds();
	CSVCMsg_Sounds(const CSVCMsg_Sounds &);
	CSVCMsg_Sounds & operator=(const CSVCMsg_Sounds &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_Sounds & default_instance();
	void Swap(CSVCMsg_Sounds *);
	virtual CSVCMsg_Sounds * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_Sounds &);
	void MergeFrom(const CSVCMsg_Sounds &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_reliable_sound();
	void clear_reliable_sound();
	bool reliable_sound();
	void set_reliable_sound(bool);
	int sounds_size();
	void clear_sounds();
	const CSVCMsg_Sounds_sounddata_t & sounds(int);
	CSVCMsg_Sounds_sounddata_t * mutable_sounds(int);
	CSVCMsg_Sounds_sounddata_t * add_sounds();
	const RepeatedPtrField<CSVCMsg_Sounds_sounddata_t> & sounds();
	RepeatedPtrField<CSVCMsg_Sounds_sounddata_t> * mutable_sounds();
	void set_has_reliable_sound();
	void clear_has_reliable_sound();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:3056
class CSVCMsg_Prefetch : public Message {
public:

	static const int kSoundIndexFieldNumber = 1;
	static const int kResourceTypeFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 sound_index_;  // +0x18
	int resource_type_;  // +0x1c

	static CSVCMsg_Prefetch * default_instance_;
	CSVCMsg_Prefetch();
	virtual ~CSVCMsg_Prefetch();
	CSVCMsg_Prefetch(const CSVCMsg_Prefetch &);
	CSVCMsg_Prefetch & operator=(const CSVCMsg_Prefetch &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_Prefetch & default_instance();
	void Swap(CSVCMsg_Prefetch *);
	virtual CSVCMsg_Prefetch * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_Prefetch &);
	void MergeFrom(const CSVCMsg_Prefetch &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_sound_index();
	void clear_sound_index();
	int32 sound_index();
	void set_sound_index(int32);
	bool has_resource_type();
	void clear_resource_type();
	PrefetchType resource_type();
	void set_resource_type(PrefetchType);
	void set_has_sound_index();
	void clear_has_sound_index();
	void set_has_resource_type();
	void clear_has_resource_type();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:3145
class CSVCMsg_SetView : public Message {
public:

	static const int kEntityIndexFieldNumber = 1;
	static const int kSlotFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 entity_index_;  // +0x18
	int32 slot_;  // +0x1c

	static CSVCMsg_SetView * default_instance_;
	CSVCMsg_SetView();
	virtual ~CSVCMsg_SetView();
	CSVCMsg_SetView(const CSVCMsg_SetView &);
	CSVCMsg_SetView & operator=(const CSVCMsg_SetView &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_SetView & default_instance();
	void Swap(CSVCMsg_SetView *);
	virtual CSVCMsg_SetView * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_SetView &);
	void MergeFrom(const CSVCMsg_SetView &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_entity_index();
	void clear_entity_index();
	int32 entity_index();
	void set_entity_index(int32);
	bool has_slot();
	void clear_slot();
	int32 slot();
	void set_slot(int32);
	void set_has_entity_index();
	void clear_has_entity_index();
	void set_has_slot();
	void clear_has_slot();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:3234
class CSVCMsg_FixAngle : public Message {
public:

	static const int kRelativeFieldNumber = 1;
	static const int kAngleFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool relative_;  // +0x20

	static CSVCMsg_FixAngle * default_instance_;
	CSVCMsg_FixAngle();
	virtual ~CSVCMsg_FixAngle();
	CSVCMsg_FixAngle(const CSVCMsg_FixAngle &);
	CSVCMsg_FixAngle & operator=(const CSVCMsg_FixAngle &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_FixAngle & default_instance();
	void Swap(CSVCMsg_FixAngle *);
	virtual CSVCMsg_FixAngle * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_FixAngle &);
	void MergeFrom(const CSVCMsg_FixAngle &);
	virtual void Clear();
	virtual bool IsInitialized();
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:3325
class CSVCMsg_CrosshairAngle : public Message {
public:

	static const int kAngleFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CSVCMsg_CrosshairAngle * default_instance_;
	CSVCMsg_CrosshairAngle();
	virtual ~CSVCMsg_CrosshairAngle();
	CSVCMsg_CrosshairAngle(const CSVCMsg_CrosshairAngle &);
	CSVCMsg_CrosshairAngle & operator=(const CSVCMsg_CrosshairAngle &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_CrosshairAngle & default_instance();
	void Swap(CSVCMsg_CrosshairAngle *);
	virtual CSVCMsg_CrosshairAngle * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_CrosshairAngle &);
	void MergeFrom(const CSVCMsg_CrosshairAngle &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_angle();
	void clear_angle();
	const CMsgQAngle & angle();
	CMsgQAngle * mutable_angle();
	CMsgQAngle * release_angle();
	void set_allocated_angle(CMsgQAngle *);
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
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:3406
class CSVCMsg_BSPDecal : public Message {
public:

	static const int kPosFieldNumber = 1;
	static const int kDecalTextureIndexFieldNumber = 2;
	static const int kEntityIndexFieldNumber = 3;
	static const int kModelIndexFieldNumber = 4;
	static const int kLowPriorityFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 decal_texture_index_;  // +0x20
	int32 entity_index_;  // +0x24
	int32 model_index_;  // +0x28
	bool low_priority_;  // +0x2c

	static CSVCMsg_BSPDecal * default_instance_;
	CSVCMsg_BSPDecal();
	virtual ~CSVCMsg_BSPDecal();
	CSVCMsg_BSPDecal(const CSVCMsg_BSPDecal &);
	CSVCMsg_BSPDecal & operator=(const CSVCMsg_BSPDecal &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_BSPDecal & default_instance();
	void Swap(CSVCMsg_BSPDecal *);
	virtual CSVCMsg_BSPDecal * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_BSPDecal &);
	void MergeFrom(const CSVCMsg_BSPDecal &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_pos();
	void clear_pos();
	const CMsgVector & pos();
	CMsgVector * mutable_pos();
	CMsgVector * release_pos();
	void set_allocated_pos(CMsgVector *);
	bool has_decal_texture_index();
	void clear_decal_texture_index();
	int32 decal_texture_index();
	void set_decal_texture_index(int32);
	bool has_entity_index();
	void clear_entity_index();
	int32 entity_index();
	void set_entity_index(int32);
	bool has_model_index();
	void clear_model_index();
	int32 model_index();
	void set_model_index(int32);
	bool has_low_priority();
	void clear_low_priority();
	bool low_priority();
	void set_low_priority(bool);
	void set_has_pos();
	void clear_has_pos();
	void set_has_decal_texture_index();
	void clear_has_decal_texture_index();
	void set_has_entity_index();
	void clear_has_entity_index();
	void set_has_model_index();
	void clear_has_model_index();
	void set_has_low_priority();
	void clear_has_low_priority();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:3527
class CSVCMsg_SplitScreen : public Message {
public:

	static const int kTypeFieldNumber = 1;
	static const int kSlotFieldNumber = 2;
	static const int kPlayerIndexFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int type_;  // +0x18
	int32 slot_;  // +0x1c
	int32 player_index_;  // +0x20

	static CSVCMsg_SplitScreen * default_instance_;
	CSVCMsg_SplitScreen();
	virtual ~CSVCMsg_SplitScreen();
	CSVCMsg_SplitScreen(const CSVCMsg_SplitScreen &);
	CSVCMsg_SplitScreen & operator=(const CSVCMsg_SplitScreen &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_SplitScreen & default_instance();
	void Swap(CSVCMsg_SplitScreen *);
	virtual CSVCMsg_SplitScreen * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_SplitScreen &);
	void MergeFrom(const CSVCMsg_SplitScreen &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	ESplitScreenMessageType type();
	void set_type(ESplitScreenMessageType);
	bool has_slot();
	void clear_slot();
	int32 slot();
	void set_slot(int32);
	bool has_player_index();
	void clear_player_index();
	int32 player_index();
	void set_player_index(int32);
	void set_has_type();
	void clear_has_type();
	void set_has_slot();
	void clear_has_slot();
	void set_has_player_index();
	void clear_has_player_index();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:3626
class CSVCMsg_GetCvarValue : public Message {
public:

	static const int kCookieFieldNumber = 1;
	static const int kCvarNameFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * cvar_name_;  // +0x18
	int32 cookie_;  // +0x20

	static CSVCMsg_GetCvarValue * default_instance_;
	CSVCMsg_GetCvarValue();
	virtual ~CSVCMsg_GetCvarValue();
	CSVCMsg_GetCvarValue(const CSVCMsg_GetCvarValue &);
	CSVCMsg_GetCvarValue & operator=(const CSVCMsg_GetCvarValue &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_GetCvarValue & default_instance();
	void Swap(CSVCMsg_GetCvarValue *);
	virtual CSVCMsg_GetCvarValue * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_GetCvarValue &);
	void MergeFrom(const CSVCMsg_GetCvarValue &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_cookie();
	void clear_cookie();
	int32 cookie();
	void set_cookie(int32);
	bool has_cvar_name();
	void clear_cvar_name();
	const string & cvar_name();
	void set_cvar_name(const string &);
	void set_cvar_name(const char *);
	void set_cvar_name(const char *, size_t);
	string * mutable_cvar_name();
	string * release_cvar_name();
	void set_allocated_cvar_name(string *);
	void set_has_cookie();
	void clear_has_cookie();
	void set_has_cvar_name();
	void clear_has_cvar_name();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:3720
class CSVCMsg_Menu : public Message {
public:

	static const int kDialogTypeFieldNumber = 1;
	static const int kMenuKeyValuesFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * menu_key_values_;  // +0x18
	int32 dialog_type_;  // +0x20

	static CSVCMsg_Menu * default_instance_;
	CSVCMsg_Menu();
	virtual ~CSVCMsg_Menu();
	CSVCMsg_Menu(const CSVCMsg_Menu &);
	CSVCMsg_Menu & operator=(const CSVCMsg_Menu &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_Menu & default_instance();
	void Swap(CSVCMsg_Menu *);
	virtual CSVCMsg_Menu * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_Menu &);
	void MergeFrom(const CSVCMsg_Menu &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_dialog_type();
	void clear_dialog_type();
	int32 dialog_type();
	void set_dialog_type(int32);
	bool has_menu_key_values();
	void clear_menu_key_values();
	const string & menu_key_values();
	void set_menu_key_values(const string &);
	void set_menu_key_values(const char *);
	void set_menu_key_values(const void *, size_t);
	string * mutable_menu_key_values();
	string * release_menu_key_values();
	void set_allocated_menu_key_values(string *);
	void set_has_dialog_type();
	void clear_has_dialog_type();
	void set_has_menu_key_values();
	void clear_has_menu_key_values();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:3814
class CSVCMsg_SendTable_sendprop_t : public Message {
public:

	static const int kTypeFieldNumber = 1;
	static const int kVarNameFieldNumber = 2;
	static const int kFlagsFieldNumber = 3;
	static const int kPriorityFieldNumber = 4;
	static const int kDtNameFieldNumber = 5;
	static const int kNumElementsFieldNumber = 6;
	static const int kLowValueFieldNumber = 7;
	static const int kHighValueFieldNumber = 8;
	static const int kNumBitsFieldNumber = 9;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * var_name_;  // +0x18
	int32 type_;  // +0x20
	int32 flags_;  // +0x24
	string * dt_name_;  // +0x28
	int32 priority_;  // +0x30
	int32 num_elements_;  // +0x34
	float low_value_;  // +0x38
	float high_value_;  // +0x3c
	int32 num_bits_;  // +0x40

	static CSVCMsg_SendTable_sendprop_t * default_instance_;
	CSVCMsg_SendTable_sendprop_t();
	virtual ~CSVCMsg_SendTable_sendprop_t();
	CSVCMsg_SendTable_sendprop_t(const CSVCMsg_SendTable_sendprop_t &);
	CSVCMsg_SendTable_sendprop_t & operator=(const CSVCMsg_SendTable_sendprop_t &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_SendTable_sendprop_t & default_instance();
	void Swap(CSVCMsg_SendTable_sendprop_t *);
	virtual CSVCMsg_SendTable_sendprop_t * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_SendTable_sendprop_t &);
	void MergeFrom(const CSVCMsg_SendTable_sendprop_t &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	int32 type();
	void set_type(int32);
	bool has_var_name();
	void clear_var_name();
	const string & var_name();
	void set_var_name(const string &);
	void set_var_name(const char *);
	void set_var_name(const char *, size_t);
	string * mutable_var_name();
	string * release_var_name();
	void set_allocated_var_name(string *);
	bool has_flags();
	void clear_flags();
	int32 flags();
	void set_flags(int32);
	bool has_priority();
	void clear_priority();
	int32 priority();
	void set_priority(int32);
	bool has_dt_name();
	void clear_dt_name();
	const string & dt_name();
	void set_dt_name(const string &);
	void set_dt_name(const char *);
	void set_dt_name(const char *, size_t);
	string * mutable_dt_name();
	string * release_dt_name();
	void set_allocated_dt_name(string *);
	bool has_num_elements();
	void clear_num_elements();
	int32 num_elements();
	void set_num_elements(int32);
	bool has_low_value();
	void clear_low_value();
	float low_value();
	void set_low_value(float);
	bool has_high_value();
	void clear_high_value();
	float high_value();
	void set_high_value(float);
	bool has_num_bits();
	void clear_num_bits();
	int32 num_bits();
	void set_num_bits(int32);
	void set_has_type();
	void clear_has_type();
	void set_has_var_name();
	void clear_has_var_name();
	void set_has_flags();
	void clear_has_flags();
	void set_has_priority();
	void clear_has_priority();
	void set_has_dt_name();
	void clear_has_dt_name();
	void set_has_num_elements();
	void clear_has_num_elements();
	void set_has_low_value();
	void clear_has_low_value();
	void set_has_high_value();
	void clear_has_high_value();
	void set_has_num_bits();
	void clear_has_num_bits();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:3983
class CSVCMsg_SendTable : public Message {
public:

	static const int kIsEndFieldNumber = 1;
	static const int kNetTableNameFieldNumber = 2;
	static const int kNeedsDecoderFieldNumber = 3;
	static const int kPropsFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * net_table_name_;  // +0x18
	bool is_end_;  // +0x38
	bool needs_decoder_;  // +0x39

	static CSVCMsg_SendTable * default_instance_;
	CSVCMsg_SendTable();
	virtual ~CSVCMsg_SendTable();
	CSVCMsg_SendTable(const CSVCMsg_SendTable &);
	CSVCMsg_SendTable & operator=(const CSVCMsg_SendTable &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_SendTable & default_instance();
	void Swap(CSVCMsg_SendTable *);
	virtual CSVCMsg_SendTable * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_SendTable &);
	void MergeFrom(const CSVCMsg_SendTable &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_is_end();
	void clear_is_end();
	bool is_end();
	void set_is_end(bool);
	bool has_net_table_name();
	void clear_net_table_name();
	const string & net_table_name();
	void set_net_table_name(const string &);
	void set_net_table_name(const char *);
	void set_net_table_name(const char *, size_t);
	string * mutable_net_table_name();
	string * release_net_table_name();
	void set_allocated_net_table_name(string *);
	bool has_needs_decoder();
	void clear_needs_decoder();
	bool needs_decoder();
	void set_needs_decoder(bool);
	int props_size();
	void clear_props();
	const CSVCMsg_SendTable_sendprop_t & props(int);
	CSVCMsg_SendTable_sendprop_t * mutable_props(int);
	CSVCMsg_SendTable_sendprop_t * add_props();
	const RepeatedPtrField<CSVCMsg_SendTable_sendprop_t> & props();
	RepeatedPtrField<CSVCMsg_SendTable_sendprop_t> * mutable_props();
	void set_has_is_end();
	void clear_has_is_end();
	void set_has_net_table_name();
	void clear_has_net_table_name();
	void set_has_needs_decoder();
	void clear_has_needs_decoder();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:4102
class CSVCMsg_GameEventList_key_t : public Message {
public:

	static const int kTypeFieldNumber = 1;
	static const int kNameFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * name_;  // +0x18
	int32 type_;  // +0x20

	static CSVCMsg_GameEventList_key_t * default_instance_;
	CSVCMsg_GameEventList_key_t();
	virtual ~CSVCMsg_GameEventList_key_t();
	CSVCMsg_GameEventList_key_t(const CSVCMsg_GameEventList_key_t &);
	CSVCMsg_GameEventList_key_t & operator=(const CSVCMsg_GameEventList_key_t &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_GameEventList_key_t & default_instance();
	void Swap(CSVCMsg_GameEventList_key_t *);
	virtual CSVCMsg_GameEventList_key_t * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_GameEventList_key_t &);
	void MergeFrom(const CSVCMsg_GameEventList_key_t &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	int32 type();
	void set_type(int32);
	bool has_name();
	void clear_name();
	const string & name();
	void set_name(const string &);
	void set_name(const char *);
	void set_name(const char *, size_t);
	string * mutable_name();
	string * release_name();
	void set_allocated_name(string *);
	void set_has_type();
	void clear_has_type();
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
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:4196
class CSVCMsg_GameEventList_descriptor_t : public Message {
public:

	static const int kEventidFieldNumber = 1;
	static const int kNameFieldNumber = 2;
	static const int kKeysFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * name_;  // +0x18
	int32 eventid_;  // +0x38

	static CSVCMsg_GameEventList_descriptor_t * default_instance_;
	CSVCMsg_GameEventList_descriptor_t();
	virtual ~CSVCMsg_GameEventList_descriptor_t();
	CSVCMsg_GameEventList_descriptor_t(const CSVCMsg_GameEventList_descriptor_t &);
	CSVCMsg_GameEventList_descriptor_t & operator=(const CSVCMsg_GameEventList_descriptor_t &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_GameEventList_descriptor_t & default_instance();
	void Swap(CSVCMsg_GameEventList_descriptor_t *);
	virtual CSVCMsg_GameEventList_descriptor_t * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_GameEventList_descriptor_t &);
	void MergeFrom(const CSVCMsg_GameEventList_descriptor_t &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_eventid();
	void clear_eventid();
	int32 eventid();
	void set_eventid(int32);
	bool has_name();
	void clear_name();
	const string & name();
	void set_name(const string &);
	void set_name(const char *);
	void set_name(const char *, size_t);
	string * mutable_name();
	string * release_name();
	void set_allocated_name(string *);
	int keys_size();
	void clear_keys();
	const CSVCMsg_GameEventList_key_t & keys(int);
	CSVCMsg_GameEventList_key_t * mutable_keys(int);
	CSVCMsg_GameEventList_key_t * add_keys();
	const RepeatedPtrField<CSVCMsg_GameEventList_key_t> & keys();
	RepeatedPtrField<CSVCMsg_GameEventList_key_t> * mutable_keys();
	void set_has_eventid();
	void clear_has_eventid();
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
	// sizeof = 64
};

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:4303
class CSVCMsg_GameEventList : public Message {
public:

	static const int kDescriptorsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CSVCMsg_GameEventList * default_instance_;
	CSVCMsg_GameEventList();
	virtual ~CSVCMsg_GameEventList();
	CSVCMsg_GameEventList(const CSVCMsg_GameEventList &);
	CSVCMsg_GameEventList & operator=(const CSVCMsg_GameEventList &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_GameEventList & default_instance();
	void Swap(CSVCMsg_GameEventList *);
	virtual CSVCMsg_GameEventList * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_GameEventList &);
	void MergeFrom(const CSVCMsg_GameEventList &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int descriptors_size();
	void clear_descriptors();
	const CSVCMsg_GameEventList_descriptor_t & descriptors(int);
	CSVCMsg_GameEventList_descriptor_t * mutable_descriptors(int);
	CSVCMsg_GameEventList_descriptor_t * add_descriptors();
	const RepeatedPtrField<CSVCMsg_GameEventList_descriptor_t> & descriptors();
	RepeatedPtrField<CSVCMsg_GameEventList_descriptor_t> * mutable_descriptors();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:4388
class CSVCMsg_PacketEntities : public Message {
public:

	static const int kMaxEntriesFieldNumber = 1;
	static const int kUpdatedEntriesFieldNumber = 2;
	static const int kIsDeltaFieldNumber = 3;
	static const int kUpdateBaselineFieldNumber = 4;
	static const int kBaselineFieldNumber = 5;
	static const int kDeltaFromFieldNumber = 6;
	static const int kEntityDataFieldNumber = 7;
	static const int kPendingFullFrameFieldNumber = 8;
	static const int kActiveSpawngroupHandleFieldNumber = 9;
	static const int kMaxSpawngroupCreationsequenceFieldNumber = 10;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 max_entries_;  // +0x18
	int32 updated_entries_;  // +0x1c
	int32 baseline_;  // +0x20
	bool is_delta_;  // +0x24
	bool update_baseline_;  // +0x25
	bool pending_full_frame_;  // +0x26

	string * entity_data_;  // +0x28
	int32 delta_from_;  // +0x30
	uint32 active_spawngroup_handle_;  // +0x34
	uint32 max_spawngroup_creationsequence_;  // +0x38

	static CSVCMsg_PacketEntities * default_instance_;
	CSVCMsg_PacketEntities();
	virtual ~CSVCMsg_PacketEntities();
	CSVCMsg_PacketEntities(const CSVCMsg_PacketEntities &);
	CSVCMsg_PacketEntities & operator=(const CSVCMsg_PacketEntities &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_PacketEntities & default_instance();
	void Swap(CSVCMsg_PacketEntities *);
	virtual CSVCMsg_PacketEntities * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_PacketEntities &);
	void MergeFrom(const CSVCMsg_PacketEntities &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_max_entries();
	void clear_max_entries();
	int32 max_entries();
	void set_max_entries(int32);
	bool has_updated_entries();
	void clear_updated_entries();
	int32 updated_entries();
	void set_updated_entries(int32);
	bool has_is_delta();
	void clear_is_delta();
	bool is_delta();
	void set_is_delta(bool);
	bool has_update_baseline();
	void clear_update_baseline();
	bool update_baseline();
	void set_update_baseline(bool);
	bool has_baseline();
	void clear_baseline();
	int32 baseline();
	void set_baseline(int32);
	bool has_delta_from();
	void clear_delta_from();
	int32 delta_from();
	void set_delta_from(int32);
	bool has_entity_data();
	void clear_entity_data();
	const string & entity_data();
	void set_entity_data(const string &);
	void set_entity_data(const char *);
	void set_entity_data(const void *, size_t);
	string * mutable_entity_data();
	string * release_entity_data();
	void set_allocated_entity_data(string *);
	bool has_pending_full_frame();
	void clear_pending_full_frame();
	bool pending_full_frame();
	void set_pending_full_frame(bool);
	bool has_active_spawngroup_handle();
	void clear_active_spawngroup_handle();
	uint32 active_spawngroup_handle();
	void set_active_spawngroup_handle(uint32);
	bool has_max_spawngroup_creationsequence();
	void clear_max_spawngroup_creationsequence();
	uint32 max_spawngroup_creationsequence();
	void set_max_spawngroup_creationsequence(uint32);
	void set_has_max_entries();
	void clear_has_max_entries();
	void set_has_updated_entries();
	void clear_has_updated_entries();
	void set_has_is_delta();
	void clear_has_is_delta();
	void set_has_update_baseline();
	void clear_has_update_baseline();
	void set_has_baseline();
	void clear_has_baseline();
	void set_has_delta_from();
	void clear_has_delta_from();
	void set_has_entity_data();
	void clear_has_entity_data();
	void set_has_pending_full_frame();
	void clear_has_pending_full_frame();
	void set_has_active_spawngroup_handle();
	void clear_has_active_spawngroup_handle();
	void set_has_max_spawngroup_creationsequence();
	void clear_has_max_spawngroup_creationsequence();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:4562
class CSVCMsg_TempEntities : public Message {
public:

	static const int kReliableFieldNumber = 1;
	static const int kNumEntriesFieldNumber = 2;
	static const int kEntityDataFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool reliable_;  // +0x18

	int32 num_entries_;  // +0x1c
	string * entity_data_;  // +0x20

	static CSVCMsg_TempEntities * default_instance_;
	CSVCMsg_TempEntities();
	virtual ~CSVCMsg_TempEntities();
	CSVCMsg_TempEntities(const CSVCMsg_TempEntities &);
	CSVCMsg_TempEntities & operator=(const CSVCMsg_TempEntities &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_TempEntities & default_instance();
	void Swap(CSVCMsg_TempEntities *);
	virtual CSVCMsg_TempEntities * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_TempEntities &);
	void MergeFrom(const CSVCMsg_TempEntities &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_reliable();
	void clear_reliable();
	bool reliable();
	void set_reliable(bool);
	bool has_num_entries();
	void clear_num_entries();
	int32 num_entries();
	void set_num_entries(int32);
	bool has_entity_data();
	void clear_entity_data();
	const string & entity_data();
	void set_entity_data(const string &);
	void set_entity_data(const char *);
	void set_entity_data(const void *, size_t);
	string * mutable_entity_data();
	string * release_entity_data();
	void set_allocated_entity_data(string *);
	void set_has_reliable();
	void clear_has_reliable();
	void set_has_num_entries();
	void clear_has_num_entries();
	void set_has_entity_data();
	void clear_has_entity_data();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:4666
class CSVCMsg_CreateStringTable : public Message {
public:

	static const int kNameFieldNumber = 1;
	static const int kNumEntriesFieldNumber = 2;
	static const int kUserDataFixedSizeFieldNumber = 3;
	static const int kUserDataSizeFieldNumber = 4;
	static const int kUserDataSizeBitsFieldNumber = 5;
	static const int kFlagsFieldNumber = 6;
	static const int kStringDataFieldNumber = 7;
	static const int kUncompressedSizeFieldNumber = 8;
	static const int kDataCompressedFieldNumber = 9;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * name_;  // +0x18
	int32 num_entries_;  // +0x20
	int32 user_data_size_;  // +0x24
	int32 user_data_size_bits_;  // +0x28
	int32 flags_;  // +0x2c
	bool user_data_fixed_size_;  // +0x30
	bool data_compressed_;  // +0x31

	int32 uncompressed_size_;  // +0x34
	string * string_data_;  // +0x38

	static CSVCMsg_CreateStringTable * default_instance_;
	CSVCMsg_CreateStringTable();
	virtual ~CSVCMsg_CreateStringTable();
	CSVCMsg_CreateStringTable(const CSVCMsg_CreateStringTable &);
	CSVCMsg_CreateStringTable & operator=(const CSVCMsg_CreateStringTable &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_CreateStringTable & default_instance();
	void Swap(CSVCMsg_CreateStringTable *);
	virtual CSVCMsg_CreateStringTable * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_CreateStringTable &);
	void MergeFrom(const CSVCMsg_CreateStringTable &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_num_entries();
	void clear_num_entries();
	int32 num_entries();
	void set_num_entries(int32);
	bool has_user_data_fixed_size();
	void clear_user_data_fixed_size();
	bool user_data_fixed_size();
	void set_user_data_fixed_size(bool);
	bool has_user_data_size();
	void clear_user_data_size();
	int32 user_data_size();
	void set_user_data_size(int32);
	bool has_user_data_size_bits();
	void clear_user_data_size_bits();
	int32 user_data_size_bits();
	void set_user_data_size_bits(int32);
	bool has_flags();
	void clear_flags();
	int32 flags();
	void set_flags(int32);
	bool has_string_data();
	void clear_string_data();
	const string & string_data();
	void set_string_data(const string &);
	void set_string_data(const char *);
	void set_string_data(const void *, size_t);
	string * mutable_string_data();
	string * release_string_data();
	void set_allocated_string_data(string *);
	bool has_uncompressed_size();
	void clear_uncompressed_size();
	int32 uncompressed_size();
	void set_uncompressed_size(int32);
	bool has_data_compressed();
	void clear_data_compressed();
	bool data_compressed();
	void set_data_compressed(bool);
	void set_has_name();
	void clear_has_name();
	void set_has_num_entries();
	void clear_has_num_entries();
	void set_has_user_data_fixed_size();
	void clear_has_user_data_fixed_size();
	void set_has_user_data_size();
	void clear_has_user_data_size();
	void set_has_user_data_size_bits();
	void clear_has_user_data_size_bits();
	void set_has_flags();
	void clear_has_flags();
	void set_has_string_data();
	void clear_has_string_data();
	void set_has_uncompressed_size();
	void clear_has_uncompressed_size();
	void set_has_data_compressed();
	void clear_has_data_compressed();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:4835
class CSVCMsg_UpdateStringTable : public Message {
public:

	static const int kTableIdFieldNumber = 1;
	static const int kNumChangedEntriesFieldNumber = 2;
	static const int kStringDataFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 table_id_;  // +0x18
	int32 num_changed_entries_;  // +0x1c
	string * string_data_;  // +0x20

	static CSVCMsg_UpdateStringTable * default_instance_;
	CSVCMsg_UpdateStringTable();
	virtual ~CSVCMsg_UpdateStringTable();
	CSVCMsg_UpdateStringTable(const CSVCMsg_UpdateStringTable &);
	CSVCMsg_UpdateStringTable & operator=(const CSVCMsg_UpdateStringTable &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_UpdateStringTable & default_instance();
	void Swap(CSVCMsg_UpdateStringTable *);
	virtual CSVCMsg_UpdateStringTable * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_UpdateStringTable &);
	void MergeFrom(const CSVCMsg_UpdateStringTable &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_table_id();
	void clear_table_id();
	int32 table_id();
	void set_table_id(int32);
	bool has_num_changed_entries();
	void clear_num_changed_entries();
	int32 num_changed_entries();
	void set_num_changed_entries(int32);
	bool has_string_data();
	void clear_string_data();
	const string & string_data();
	void set_string_data(const string &);
	void set_string_data(const char *);
	void set_string_data(const void *, size_t);
	string * mutable_string_data();
	string * release_string_data();
	void set_allocated_string_data(string *);
	void set_has_table_id();
	void clear_has_table_id();
	void set_has_num_changed_entries();
	void clear_has_num_changed_entries();
	void set_has_string_data();
	void clear_has_string_data();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:4939
class CSVCMsg_VoiceData : public Message {
public:

	static const int kAudioFieldNumber = 1;
	static const int kClientFieldNumber = 2;
	static const int kProximityFieldNumber = 3;
	static const int kXuidFieldNumber = 4;
	static const int kAudibleMaskFieldNumber = 5;
	static const int kTickFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 client_;  // +0x20
	bool proximity_;  // +0x24

	uint64 xuid_;  // +0x28
	int32 audible_mask_;  // +0x30
	uint32 tick_;  // +0x34

	static CSVCMsg_VoiceData * default_instance_;
	CSVCMsg_VoiceData();
	virtual ~CSVCMsg_VoiceData();
	CSVCMsg_VoiceData(const CSVCMsg_VoiceData &);
	CSVCMsg_VoiceData & operator=(const CSVCMsg_VoiceData &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_VoiceData & default_instance();
	void Swap(CSVCMsg_VoiceData *);
	virtual CSVCMsg_VoiceData * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_VoiceData &);
	void MergeFrom(const CSVCMsg_VoiceData &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_audio();
	void clear_audio();
	const CMsgVoiceAudio & audio();
	CMsgVoiceAudio * mutable_audio();
	CMsgVoiceAudio * release_audio();
	void set_allocated_audio(CMsgVoiceAudio *);
	bool has_client();
	void clear_client();
	int32 client();
	void set_client(int32);
	bool has_proximity();
	void clear_proximity();
	bool proximity();
	void set_proximity(bool);
	bool has_xuid();
	void clear_xuid();
	uint64 xuid();
	void set_xuid(uint64);
	bool has_audible_mask();
	void clear_audible_mask();
	int32 audible_mask();
	void set_audible_mask(int32);
	bool has_tick();
	void clear_tick();
	uint32 tick();
	void set_tick(uint32);
	void set_has_audio();
	void clear_has_audio();
	void set_has_client();
	void clear_has_client();
	void set_has_proximity();
	void clear_has_proximity();
	void set_has_xuid();
	void clear_has_xuid();
	void set_has_audible_mask();
	void clear_has_audible_mask();
	void set_has_tick();
	void clear_has_tick();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:5070
class CSVCMsg_PacketReliable : public Message {
public:

	static const int kTickFieldNumber = 1;
	static const int kMessagessizeFieldNumber = 2;
	static const int kStateFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 tick_;  // +0x18
	int32 messagessize_;  // +0x1c
	bool state_;  // +0x20

	static CSVCMsg_PacketReliable * default_instance_;
	CSVCMsg_PacketReliable();
	virtual ~CSVCMsg_PacketReliable();
	CSVCMsg_PacketReliable(const CSVCMsg_PacketReliable &);
	CSVCMsg_PacketReliable & operator=(const CSVCMsg_PacketReliable &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_PacketReliable & default_instance();
	void Swap(CSVCMsg_PacketReliable *);
	virtual CSVCMsg_PacketReliable * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_PacketReliable &);
	void MergeFrom(const CSVCMsg_PacketReliable &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_tick();
	void clear_tick();
	int32 tick();
	void set_tick(int32);
	bool has_messagessize();
	void clear_messagessize();
	int32 messagessize();
	void set_messagessize(int32);
	bool has_state();
	void clear_state();
	bool state();
	void set_state(bool);
	void set_has_tick();
	void clear_has_tick();
	void set_has_messagessize();
	void clear_has_messagessize();
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:5169
class CSVCMsg_FullFrameSplit : public Message {
public:

	static const int kTickFieldNumber = 1;
	static const int kSectionFieldNumber = 2;
	static const int kTotalFieldNumber = 3;
	static const int kDataFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 tick_;  // +0x18
	int32 section_;  // +0x1c
	string * data_;  // +0x20
	int32 total_;  // +0x28

	static CSVCMsg_FullFrameSplit * default_instance_;
	CSVCMsg_FullFrameSplit();
	virtual ~CSVCMsg_FullFrameSplit();
	CSVCMsg_FullFrameSplit(const CSVCMsg_FullFrameSplit &);
	CSVCMsg_FullFrameSplit & operator=(const CSVCMsg_FullFrameSplit &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_FullFrameSplit & default_instance();
	void Swap(CSVCMsg_FullFrameSplit *);
	virtual CSVCMsg_FullFrameSplit * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_FullFrameSplit &);
	void MergeFrom(const CSVCMsg_FullFrameSplit &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_tick();
	void clear_tick();
	int32 tick();
	void set_tick(int32);
	bool has_section();
	void clear_section();
	int32 section();
	void set_section(int32);
	bool has_total();
	void clear_total();
	int32 total();
	void set_total(int32);
	bool has_data();
	void clear_data();
	const string & data();
	void set_data(const string &);
	void set_data(const char *);
	void set_data(const void *, size_t);
	string * mutable_data();
	string * release_data();
	void set_allocated_data(string *);
	void set_has_tick();
	void clear_has_tick();
	void set_has_section();
	void clear_has_section();
	void set_has_total();
	void clear_has_total();
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
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:5283
class CSVCMsg_HLTVStatus : public Message {
public:

	static const int kMasterFieldNumber = 1;
	static const int kClientsFieldNumber = 2;
	static const int kSlotsFieldNumber = 3;
	static const int kProxiesFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * master_;  // +0x18
	int32 clients_;  // +0x20
	int32 slots_;  // +0x24
	int32 proxies_;  // +0x28

	static CSVCMsg_HLTVStatus * default_instance_;
	CSVCMsg_HLTVStatus();
	virtual ~CSVCMsg_HLTVStatus();
	CSVCMsg_HLTVStatus(const CSVCMsg_HLTVStatus &);
	CSVCMsg_HLTVStatus & operator=(const CSVCMsg_HLTVStatus &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_HLTVStatus & default_instance();
	void Swap(CSVCMsg_HLTVStatus *);
	virtual CSVCMsg_HLTVStatus * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_HLTVStatus &);
	void MergeFrom(const CSVCMsg_HLTVStatus &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_master();
	void clear_master();
	const string & master();
	void set_master(const string &);
	void set_master(const char *);
	void set_master(const char *, size_t);
	string * mutable_master();
	string * release_master();
	void set_allocated_master(string *);
	bool has_clients();
	void clear_clients();
	int32 clients();
	void set_clients(int32);
	bool has_slots();
	void clear_slots();
	int32 slots();
	void set_slots(int32);
	bool has_proxies();
	void clear_proxies();
	int32 proxies();
	void set_proxies(int32);
	void set_has_master();
	void clear_has_master();
	void set_has_clients();
	void clear_has_clients();
	void set_has_slots();
	void clear_has_slots();
	void set_has_proxies();
	void clear_has_proxies();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:5397
class CSVCMsg_ServerSteamID : public Message {
public:

	static const int kSteamIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 steam_id_;  // +0x18

	static CSVCMsg_ServerSteamID * default_instance_;
	CSVCMsg_ServerSteamID();
	virtual ~CSVCMsg_ServerSteamID();
	CSVCMsg_ServerSteamID(const CSVCMsg_ServerSteamID &);
	CSVCMsg_ServerSteamID & operator=(const CSVCMsg_ServerSteamID &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_ServerSteamID & default_instance();
	void Swap(CSVCMsg_ServerSteamID *);
	virtual CSVCMsg_ServerSteamID * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_ServerSteamID &);
	void MergeFrom(const CSVCMsg_ServerSteamID &);
	virtual void Clear();
	virtual bool IsInitialized();
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:5476
class CSVCMsg_CmdKeyValues : public Message {
public:

	static const int kDataFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * data_;  // +0x18

	static CSVCMsg_CmdKeyValues * default_instance_;
	CSVCMsg_CmdKeyValues();
	virtual ~CSVCMsg_CmdKeyValues();
	CSVCMsg_CmdKeyValues(const CSVCMsg_CmdKeyValues &);
	CSVCMsg_CmdKeyValues & operator=(const CSVCMsg_CmdKeyValues &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_CmdKeyValues & default_instance();
	void Swap(CSVCMsg_CmdKeyValues *);
	virtual CSVCMsg_CmdKeyValues * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_CmdKeyValues &);
	void MergeFrom(const CSVCMsg_CmdKeyValues &);
	virtual void Clear();
	virtual bool IsInitialized();
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:5560
class CMsgIPCAddress : public Message {
public:

	static const int kComputerGuidFieldNumber = 1;
	static const int kProcessIdFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 computer_guid_;  // +0x18
	uint32 process_id_;  // +0x20

	static CMsgIPCAddress * default_instance_;
	CMsgIPCAddress();
	virtual ~CMsgIPCAddress();
	CMsgIPCAddress(const CMsgIPCAddress &);
	CMsgIPCAddress & operator=(const CMsgIPCAddress &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgIPCAddress & default_instance();
	void Swap(CMsgIPCAddress *);
	virtual CMsgIPCAddress * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgIPCAddress &);
	void MergeFrom(const CMsgIPCAddress &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_computer_guid();
	void clear_computer_guid();
	uint64 computer_guid();
	void set_computer_guid(uint64);
	bool has_process_id();
	void clear_process_id();
	uint32 process_id();
	void set_process_id(uint32);
	void set_has_computer_guid();
	void clear_has_computer_guid();
	void set_has_process_id();
	void clear_has_process_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:5649
class CMsgServerPeer : public Message {
public:

	static const int kPlayerSlotFieldNumber = 1;
	static const int kSteamidFieldNumber = 2;
	static const int kIpcFieldNumber = 3;
	static const int kTheyHearYouFieldNumber = 4;
	static const int kYouHearThemFieldNumber = 5;
	static const int kIsListenserverHostFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 steamid_;  // +0x18
	int32 player_slot_;  // +0x28
	bool they_hear_you_;  // +0x2c
	bool you_hear_them_;  // +0x2d
	bool is_listenserver_host_;  // +0x2e

	static CMsgServerPeer * default_instance_;
	CMsgServerPeer();
	virtual ~CMsgServerPeer();
	CMsgServerPeer(const CMsgServerPeer &);
	CMsgServerPeer & operator=(const CMsgServerPeer &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerPeer & default_instance();
	void Swap(CMsgServerPeer *);
	virtual CMsgServerPeer * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerPeer &);
	void MergeFrom(const CMsgServerPeer &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_player_slot();
	void clear_player_slot();
	int32 player_slot();
	void set_player_slot(int32);
	bool has_steamid();
	void clear_steamid();
	uint64 steamid();
	void set_steamid(uint64);
	bool has_ipc();
	void clear_ipc();
	const CMsgIPCAddress & ipc();
	CMsgIPCAddress * mutable_ipc();
	CMsgIPCAddress * release_ipc();
	void set_allocated_ipc(CMsgIPCAddress *);
	bool has_they_hear_you();
	void clear_they_hear_you();
	bool they_hear_you();
	void set_they_hear_you(bool);
	bool has_you_hear_them();
	void clear_you_hear_them();
	bool you_hear_them();
	void set_you_hear_them(bool);
	bool has_is_listenserver_host();
	void clear_is_listenserver_host();
	bool is_listenserver_host();
	void set_is_listenserver_host(bool);
	void set_has_player_slot();
	void clear_has_player_slot();
	void set_has_steamid();
	void clear_has_steamid();
	void set_has_ipc();
	void clear_has_ipc();
	void set_has_they_hear_you();
	void clear_has_they_hear_you();
	void set_has_you_hear_them();
	void clear_has_you_hear_them();
	void set_has_is_listenserver_host();
	void clear_has_is_listenserver_host();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:5780
class CSVCMsg_PeerList : public Message {
public:

	static const int kPeerFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CSVCMsg_PeerList * default_instance_;
	CSVCMsg_PeerList();
	virtual ~CSVCMsg_PeerList();
	CSVCMsg_PeerList(const CSVCMsg_PeerList &);
	CSVCMsg_PeerList & operator=(const CSVCMsg_PeerList &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_PeerList & default_instance();
	void Swap(CSVCMsg_PeerList *);
	virtual CSVCMsg_PeerList * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_PeerList &);
	void MergeFrom(const CSVCMsg_PeerList &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int peer_size();
	void clear_peer();
	const CMsgServerPeer & peer(int);
	CMsgServerPeer * mutable_peer(int);
	CMsgServerPeer * add_peer();
	const RepeatedPtrField<CMsgServerPeer> & peer();
	RepeatedPtrField<CMsgServerPeer> * mutable_peer();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:5862
class CSVCMsg_ClearAllStringTables : public Message {
public:

	static const int kMapnameFieldNumber = 1;
	static const int kMapCrcFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * mapname_;  // +0x18
	uint32 map_crc_;  // +0x20

	static CSVCMsg_ClearAllStringTables * default_instance_;
	CSVCMsg_ClearAllStringTables();
	virtual ~CSVCMsg_ClearAllStringTables();
	CSVCMsg_ClearAllStringTables(const CSVCMsg_ClearAllStringTables &);
	CSVCMsg_ClearAllStringTables & operator=(const CSVCMsg_ClearAllStringTables &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_ClearAllStringTables & default_instance();
	void Swap(CSVCMsg_ClearAllStringTables *);
	virtual CSVCMsg_ClearAllStringTables * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_ClearAllStringTables &);
	void MergeFrom(const CSVCMsg_ClearAllStringTables &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_mapname();
	void clear_mapname();
	const string & mapname();
	void set_mapname(const string &);
	void set_mapname(const char *);
	void set_mapname(const char *, size_t);
	string * mutable_mapname();
	string * release_mapname();
	void set_allocated_mapname(string *);
	bool has_map_crc();
	void clear_map_crc();
	uint32 map_crc();
	void set_map_crc(uint32);
	void set_has_mapname();
	void clear_has_mapname();
	void set_has_map_crc();
	void clear_has_map_crc();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:5956
class ProtoFlattenedSerializerField_t : public Message {
public:

	static const int kVarTypeSymFieldNumber = 1;
	static const int kVarNameSymFieldNumber = 2;
	static const int kBitCountFieldNumber = 3;
	static const int kLowValueFieldNumber = 4;
	static const int kHighValueFieldNumber = 5;
	static const int kEncodeFlagsFieldNumber = 6;
	static const int kFieldSerializerNameSymFieldNumber = 7;
	static const int kFieldSerializerVersionFieldNumber = 8;
	static const int kSendNodeSymFieldNumber = 9;
	static const int kVarEncoderSymFieldNumber = 10;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 var_type_sym_;  // +0x18
	int32 var_name_sym_;  // +0x1c
	int32 bit_count_;  // +0x20
	float low_value_;  // +0x24
	float high_value_;  // +0x28
	int32 encode_flags_;  // +0x2c
	int32 field_serializer_name_sym_;  // +0x30
	int32 field_serializer_version_;  // +0x34
	int32 send_node_sym_;  // +0x38
	int32 var_encoder_sym_;  // +0x3c

	static ProtoFlattenedSerializerField_t * default_instance_;
	ProtoFlattenedSerializerField_t();
	virtual ~ProtoFlattenedSerializerField_t();
	ProtoFlattenedSerializerField_t(const ProtoFlattenedSerializerField_t &);
	ProtoFlattenedSerializerField_t & operator=(const ProtoFlattenedSerializerField_t &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const ProtoFlattenedSerializerField_t & default_instance();
	void Swap(ProtoFlattenedSerializerField_t *);
	virtual ProtoFlattenedSerializerField_t * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const ProtoFlattenedSerializerField_t &);
	void MergeFrom(const ProtoFlattenedSerializerField_t &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_var_type_sym();
	void clear_var_type_sym();
	int32 var_type_sym();
	void set_var_type_sym(int32);
	bool has_var_name_sym();
	void clear_var_name_sym();
	int32 var_name_sym();
	void set_var_name_sym(int32);
	bool has_bit_count();
	void clear_bit_count();
	int32 bit_count();
	void set_bit_count(int32);
	bool has_low_value();
	void clear_low_value();
	float low_value();
	void set_low_value(float);
	bool has_high_value();
	void clear_high_value();
	float high_value();
	void set_high_value(float);
	bool has_encode_flags();
	void clear_encode_flags();
	int32 encode_flags();
	void set_encode_flags(int32);
	bool has_field_serializer_name_sym();
	void clear_field_serializer_name_sym();
	int32 field_serializer_name_sym();
	void set_field_serializer_name_sym(int32);
	bool has_field_serializer_version();
	void clear_field_serializer_version();
	int32 field_serializer_version();
	void set_field_serializer_version(int32);
	bool has_send_node_sym();
	void clear_send_node_sym();
	int32 send_node_sym();
	void set_send_node_sym(int32);
	bool has_var_encoder_sym();
	void clear_var_encoder_sym();
	int32 var_encoder_sym();
	void set_var_encoder_sym(int32);
	void set_has_var_type_sym();
	void clear_has_var_type_sym();
	void set_has_var_name_sym();
	void clear_has_var_name_sym();
	void set_has_bit_count();
	void clear_has_bit_count();
	void set_has_low_value();
	void clear_has_low_value();
	void set_has_high_value();
	void clear_has_high_value();
	void set_has_encode_flags();
	void clear_has_encode_flags();
	void set_has_field_serializer_name_sym();
	void clear_has_field_serializer_name_sym();
	void set_has_field_serializer_version();
	void clear_has_field_serializer_version();
	void set_has_send_node_sym();
	void clear_has_send_node_sym();
	void set_has_var_encoder_sym();
	void clear_has_var_encoder_sym();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:6125
class ProtoFlattenedSerializer_t : public Message {
public:

	static const int kSerializerNameSymFieldNumber = 1;
	static const int kSerializerVersionFieldNumber = 2;
	static const int kFieldsIndexFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 serializer_name_sym_;  // +0x18
	int32 serializer_version_;  // +0x1c

	static ProtoFlattenedSerializer_t * default_instance_;
	ProtoFlattenedSerializer_t();
	virtual ~ProtoFlattenedSerializer_t();
	ProtoFlattenedSerializer_t(const ProtoFlattenedSerializer_t &);
	ProtoFlattenedSerializer_t & operator=(const ProtoFlattenedSerializer_t &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const ProtoFlattenedSerializer_t & default_instance();
	void Swap(ProtoFlattenedSerializer_t *);
	virtual ProtoFlattenedSerializer_t * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const ProtoFlattenedSerializer_t &);
	void MergeFrom(const ProtoFlattenedSerializer_t &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_serializer_name_sym();
	void clear_serializer_name_sym();
	int32 serializer_name_sym();
	void set_serializer_name_sym(int32);
	bool has_serializer_version();
	void clear_serializer_version();
	int32 serializer_version();
	void set_serializer_version(int32);
	int fields_index_size();
	void clear_fields_index();
	int32 fields_index(int);
	void set_fields_index(int, int32);
	void add_fields_index(int32);
	const RepeatedField<int> & fields_index();
	RepeatedField<int> * mutable_fields_index();
	void set_has_serializer_name_sym();
	void clear_has_serializer_name_sym();
	void set_has_serializer_version();
	void clear_has_serializer_version();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:6227
class CSVCMsg_FlattenedSerializer : public Message {
public:

	static const int kSerializersFieldNumber = 1;
	static const int kSymbolsFieldNumber = 2;
	static const int kFieldsFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CSVCMsg_FlattenedSerializer * default_instance_;
	CSVCMsg_FlattenedSerializer();
	virtual ~CSVCMsg_FlattenedSerializer();
	CSVCMsg_FlattenedSerializer(const CSVCMsg_FlattenedSerializer &);
	CSVCMsg_FlattenedSerializer & operator=(const CSVCMsg_FlattenedSerializer &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_FlattenedSerializer & default_instance();
	void Swap(CSVCMsg_FlattenedSerializer *);
	virtual CSVCMsg_FlattenedSerializer * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_FlattenedSerializer &);
	void MergeFrom(const CSVCMsg_FlattenedSerializer &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int serializers_size();
	void clear_serializers();
	const ProtoFlattenedSerializer_t & serializers(int);
	ProtoFlattenedSerializer_t * mutable_serializers(int);
	ProtoFlattenedSerializer_t * add_serializers();
	const RepeatedPtrField<ProtoFlattenedSerializer_t> & serializers();
	RepeatedPtrField<ProtoFlattenedSerializer_t> * mutable_serializers();
	int symbols_size();
	void clear_symbols();
	const string & symbols(int);
	string * mutable_symbols(int);
	void set_symbols(int, const string &);
	void set_symbols(int, const char *);
	void set_symbols(int, const char *, size_t);
	string * add_symbols();
	void add_symbols(const string &);
	void add_symbols(const char *);
	void add_symbols(const char *, size_t);
	const RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > & symbols();
	RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > * mutable_symbols();
	int fields_size();
	void clear_fields();
	const ProtoFlattenedSerializerField_t & fields(int);
	ProtoFlattenedSerializerField_t * mutable_fields(int);
	ProtoFlattenedSerializerField_t * add_fields();
	const RepeatedPtrField<ProtoFlattenedSerializerField_t> & fields();
	RepeatedPtrField<ProtoFlattenedSerializerField_t> * mutable_fields();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 96
};

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:6339
class CSVCMsg_StopSound : public Message {
public:

	static const int kGuidFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 guid_;  // +0x18

	static CSVCMsg_StopSound * default_instance_;
	CSVCMsg_StopSound();
	virtual ~CSVCMsg_StopSound();
	CSVCMsg_StopSound(const CSVCMsg_StopSound &);
	CSVCMsg_StopSound & operator=(const CSVCMsg_StopSound &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_StopSound & default_instance();
	void Swap(CSVCMsg_StopSound *);
	virtual CSVCMsg_StopSound * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_StopSound &);
	void MergeFrom(const CSVCMsg_StopSound &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_guid();
	void clear_guid();
	uint32 guid();
	void set_guid(uint32);
	void set_has_guid();
	void clear_has_guid();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:6418
class CBidirMsg_RebroadcastGameEvent : public Message {
public:

	static const int kPosttoserverFieldNumber = 1;
	static const int kBuftypeFieldNumber = 2;
	static const int kClientbitcountFieldNumber = 3;
	static const int kReceivingclientsFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool posttoserver_;  // +0x18

	int32 buftype_;  // +0x1c
	uint64 receivingclients_;  // +0x20
	uint32 clientbitcount_;  // +0x28

	static CBidirMsg_RebroadcastGameEvent * default_instance_;
	CBidirMsg_RebroadcastGameEvent();
	virtual ~CBidirMsg_RebroadcastGameEvent();
	CBidirMsg_RebroadcastGameEvent(const CBidirMsg_RebroadcastGameEvent &);
	CBidirMsg_RebroadcastGameEvent & operator=(const CBidirMsg_RebroadcastGameEvent &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CBidirMsg_RebroadcastGameEvent & default_instance();
	void Swap(CBidirMsg_RebroadcastGameEvent *);
	virtual CBidirMsg_RebroadcastGameEvent * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CBidirMsg_RebroadcastGameEvent &);
	void MergeFrom(const CBidirMsg_RebroadcastGameEvent &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_posttoserver();
	void clear_posttoserver();
	bool posttoserver();
	void set_posttoserver(bool);
	bool has_buftype();
	void clear_buftype();
	int32 buftype();
	void set_buftype(int32);
	bool has_clientbitcount();
	void clear_clientbitcount();
	uint32 clientbitcount();
	void set_clientbitcount(uint32);
	bool has_receivingclients();
	void clear_receivingclients();
	uint64 receivingclients();
	void set_receivingclients(uint64);
	void set_has_posttoserver();
	void clear_has_posttoserver();
	void set_has_buftype();
	void clear_has_buftype();
	void set_has_clientbitcount();
	void clear_has_clientbitcount();
	void set_has_receivingclients();
	void clear_has_receivingclients();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:6527
class CBidirMsg_RebroadcastSource : public Message {
public:

	static const int kEventsourceFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 eventsource_;  // +0x18

	static CBidirMsg_RebroadcastSource * default_instance_;
	CBidirMsg_RebroadcastSource();
	virtual ~CBidirMsg_RebroadcastSource();
	CBidirMsg_RebroadcastSource(const CBidirMsg_RebroadcastSource &);
	CBidirMsg_RebroadcastSource & operator=(const CBidirMsg_RebroadcastSource &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CBidirMsg_RebroadcastSource & default_instance();
	void Swap(CBidirMsg_RebroadcastSource *);
	virtual CBidirMsg_RebroadcastSource * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CBidirMsg_RebroadcastSource &);
	void MergeFrom(const CBidirMsg_RebroadcastSource &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_eventsource();
	void clear_eventsource();
	int32 eventsource();
	void set_eventsource(int32);
	void set_has_eventsource();
	void clear_has_eventsource();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:6606
class SerializedNetAddress_t : public Message {
public:

	static const int kSerializedAddressFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * serializedaddress_;  // +0x18

	static SerializedNetAddress_t * default_instance_;
	SerializedNetAddress_t();
	virtual ~SerializedNetAddress_t();
	SerializedNetAddress_t(const SerializedNetAddress_t &);
	SerializedNetAddress_t & operator=(const SerializedNetAddress_t &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const SerializedNetAddress_t & default_instance();
	void Swap(SerializedNetAddress_t *);
	virtual SerializedNetAddress_t * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const SerializedNetAddress_t &);
	void MergeFrom(const SerializedNetAddress_t &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_serializedaddress();
	void clear_serializedaddress();
	const string & serializedaddress();
	void set_serializedaddress(const string &);
	void set_serializedaddress(const char *);
	void set_serializedaddress(const void *, size_t);
	string * mutable_serializedaddress();
	string * release_serializedaddress();
	void set_allocated_serializedaddress(string *);
	void set_has_serializedaddress();
	void clear_has_serializedaddress();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:6690
class CBidirMsg_RelayInfo : public Message {
public:

	static const CBidirMsg_RelayInfo_Operation_t RIO_REQUEST_RELAY;
	static const CBidirMsg_RelayInfo_Operation_t RIO_WILL_RELAY = 1;
	static const CBidirMsg_RelayInfo_Operation_t RIO_NO_ROUTE = 2;
	static const CBidirMsg_RelayInfo_Operation_t RIO_REJECT_RELAY = 3;
	static const CBidirMsg_RelayInfo_Operation_t RIO_ESTABLISH_CONNECTION = 4;
	static const CBidirMsg_RelayInfo_Operation_t Operation_t_MIN;
	static const CBidirMsg_RelayInfo_Operation_t Operation_t_MAX = 4;
	static const int Operation_t_ARRAYSIZE = 5;
	static const int kOperationFieldNumber = 1;
	static const int kSerializedTargetAddressFieldNumber = 2;
	static const int kAdditionalHopsFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int operation_;  // +0x20
	uint32 additionalhops_;  // +0x24

	static CBidirMsg_RelayInfo * default_instance_;
	typedef CBidirMsg_RelayInfo_Operation_t Operation_t;
	CBidirMsg_RelayInfo();
	virtual ~CBidirMsg_RelayInfo();
	CBidirMsg_RelayInfo(const CBidirMsg_RelayInfo &);
	CBidirMsg_RelayInfo & operator=(const CBidirMsg_RelayInfo &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CBidirMsg_RelayInfo & default_instance();
	void Swap(CBidirMsg_RelayInfo *);
	virtual CBidirMsg_RelayInfo * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CBidirMsg_RelayInfo &);
	void MergeFrom(const CBidirMsg_RelayInfo &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool Operation_t_IsValid(int);
	const EnumDescriptor * Operation_t_descriptor();
	const string & Operation_t_Name(Operation_t);
	bool Operation_t_Parse(const string &, Operation_t *);
	bool has_operation();
	void clear_operation();
	CBidirMsg_RelayInfo_Operation_t operation();
	void set_operation(CBidirMsg_RelayInfo_Operation_t);
	bool has_serializedtargetaddress();
	void clear_serializedtargetaddress();
	const SerializedNetAddress_t & serializedtargetaddress();
	SerializedNetAddress_t * mutable_serializedtargetaddress();
	SerializedNetAddress_t * release_serializedtargetaddress();
	void set_allocated_serializedtargetaddress(SerializedNetAddress_t *);
	bool has_additionalhops();
	void clear_additionalhops();
	uint32 additionalhops();
	void set_additionalhops(uint32);
	void set_has_operation();
	void clear_has_operation();
	void set_has_serializedtargetaddress();
	void clear_has_serializedtargetaddress();
	void set_has_additionalhops();
	void clear_has_additionalhops();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:6818
class SignedPayload_t : public Message {
public:

	static const int kPayloadDataFieldNumber = 1;
	static const int kSignatureFieldNumber = 2;
	static const int kBPayloadEncryptedFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * payloaddata_;  // +0x18
	uint32 signature_;  // +0x20
	bool bpayloadencrypted_;  // +0x24

	static SignedPayload_t * default_instance_;
	SignedPayload_t();
	virtual ~SignedPayload_t();
	SignedPayload_t(const SignedPayload_t &);
	SignedPayload_t & operator=(const SignedPayload_t &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const SignedPayload_t & default_instance();
	void Swap(SignedPayload_t *);
	virtual SignedPayload_t * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const SignedPayload_t &);
	void MergeFrom(const SignedPayload_t &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_payloaddata();
	void clear_payloaddata();
	const string & payloaddata();
	void set_payloaddata(const string &);
	void set_payloaddata(const char *);
	void set_payloaddata(const void *, size_t);
	string * mutable_payloaddata();
	string * release_payloaddata();
	void set_allocated_payloaddata(string *);
	bool has_signature();
	void clear_signature();
	uint32 signature();
	void set_signature(uint32);
	bool has_bpayloadencrypted();
	void clear_bpayloadencrypted();
	bool bpayloadencrypted();
	void set_bpayloadencrypted(bool);
	void set_has_payloaddata();
	void clear_has_payloaddata();
	void set_has_signature();
	void clear_has_signature();
	void set_has_bpayloadencrypted();
	void clear_has_bpayloadencrypted();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:6922
class CBidirMsg_RelayPacket_SignedDestinationAddress_t : public Message {
public:

	static const int kSerializedAddrFieldNumber = 1;
	static const int kSignatureFieldNumber = 2;
	static const int kEncryptedPayloadKeyFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * encryptedpayloadkey_;  // +0x20
	uint32 signature_;  // +0x28

	static CBidirMsg_RelayPacket_SignedDestinationAddress_t * default_instance_;
	CBidirMsg_RelayPacket_SignedDestinationAddress_t();
	virtual ~CBidirMsg_RelayPacket_SignedDestinationAddress_t();
	CBidirMsg_RelayPacket_SignedDestinationAddress_t(const CBidirMsg_RelayPacket_SignedDestinationAddress_t &);
	CBidirMsg_RelayPacket_SignedDestinationAddress_t & operator=(const CBidirMsg_RelayPacket_SignedDestinationAddress_t &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CBidirMsg_RelayPacket_SignedDestinationAddress_t & default_instance();
	void Swap(CBidirMsg_RelayPacket_SignedDestinationAddress_t *);
	virtual CBidirMsg_RelayPacket_SignedDestinationAddress_t * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CBidirMsg_RelayPacket_SignedDestinationAddress_t &);
	void MergeFrom(const CBidirMsg_RelayPacket_SignedDestinationAddress_t &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_serializedaddr();
	void clear_serializedaddr();
	const SerializedNetAddress_t & serializedaddr();
	SerializedNetAddress_t * mutable_serializedaddr();
	SerializedNetAddress_t * release_serializedaddr();
	void set_allocated_serializedaddr(SerializedNetAddress_t *);
	bool has_signature();
	void clear_signature();
	uint32 signature();
	void set_signature(uint32);
	bool has_encryptedpayloadkey();
	void clear_encryptedpayloadkey();
	const string & encryptedpayloadkey();
	void set_encryptedpayloadkey(const string &);
	void set_encryptedpayloadkey(const char *);
	void set_encryptedpayloadkey(const void *, size_t);
	string * mutable_encryptedpayloadkey();
	string * release_encryptedpayloadkey();
	void set_allocated_encryptedpayloadkey(string *);
	void set_has_serializedaddr();
	void clear_has_serializedaddr();
	void set_has_signature();
	void clear_has_signature();
	void set_has_encryptedpayloadkey();
	void clear_has_encryptedpayloadkey();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:7028
class CBidirMsg_RelayPacket : public Message {
public:

	static const int kPrevhopcountFieldNumber = 1;
	static const int kOriginalSenderFieldNumber = 2;
	static const int kSignedPayloadFieldNumber = 3;
	static const int kRecipientListFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 prevhopcount_;  // +0x40

	static CBidirMsg_RelayPacket * default_instance_;
	CBidirMsg_RelayPacket();
	virtual ~CBidirMsg_RelayPacket();
	CBidirMsg_RelayPacket(const CBidirMsg_RelayPacket &);
	CBidirMsg_RelayPacket & operator=(const CBidirMsg_RelayPacket &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CBidirMsg_RelayPacket & default_instance();
	void Swap(CBidirMsg_RelayPacket *);
	virtual CBidirMsg_RelayPacket * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CBidirMsg_RelayPacket &);
	void MergeFrom(const CBidirMsg_RelayPacket &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_prevhopcount();
	void clear_prevhopcount();
	uint32 prevhopcount();
	void set_prevhopcount(uint32);
	bool has_originalsender();
	void clear_originalsender();
	const SerializedNetAddress_t & originalsender();
	SerializedNetAddress_t * mutable_originalsender();
	SerializedNetAddress_t * release_originalsender();
	void set_allocated_originalsender(SerializedNetAddress_t *);
	bool has_signedpayload();
	void clear_signedpayload();
	const SignedPayload_t & signedpayload();
	SignedPayload_t * mutable_signedpayload();
	SignedPayload_t * release_signedpayload();
	void set_allocated_signedpayload(SignedPayload_t *);
	int recipientlist_size();
	void clear_recipientlist();
	const CBidirMsg_RelayPacket_SignedDestinationAddress_t & recipientlist(int);
	CBidirMsg_RelayPacket_SignedDestinationAddress_t * mutable_recipientlist(int);
	CBidirMsg_RelayPacket_SignedDestinationAddress_t * add_recipientlist();
	const RepeatedPtrField<CBidirMsg_RelayPacket_SignedDestinationAddress_t> & recipientlist();
	RepeatedPtrField<CBidirMsg_RelayPacket_SignedDestinationAddress_t> * mutable_recipientlist();
	void set_has_prevhopcount();
	void clear_has_prevhopcount();
	void set_has_originalsender();
	void clear_has_originalsender();
	void set_has_signedpayload();
	void clear_has_signedpayload();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:7146
class CMsgServerNetworkStats_Port : public Message {
public:

	static const int kPortFieldNumber = 1;
	static const int kNameFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * name_;  // +0x18
	int32 port_;  // +0x20

	static CMsgServerNetworkStats_Port * default_instance_;
	CMsgServerNetworkStats_Port();
	virtual ~CMsgServerNetworkStats_Port();
	CMsgServerNetworkStats_Port(const CMsgServerNetworkStats_Port &);
	CMsgServerNetworkStats_Port & operator=(const CMsgServerNetworkStats_Port &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerNetworkStats_Port & default_instance();
	void Swap(CMsgServerNetworkStats_Port *);
	virtual CMsgServerNetworkStats_Port * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerNetworkStats_Port &);
	void MergeFrom(const CMsgServerNetworkStats_Port &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_port();
	void clear_port();
	int32 port();
	void set_port(int32);
	bool has_name();
	void clear_name();
	const string & name();
	void set_name(const string &);
	void set_name(const char *);
	void set_name(const char *, size_t);
	string * mutable_name();
	string * release_name();
	void set_allocated_name(string *);
	void set_has_port();
	void clear_has_port();
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
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:7240
class CMsgServerNetworkStats_Player : public Message {
public:

	static const int kSteamidFieldNumber = 1;
	static const int kRemoteAddrFieldNumber = 2;
	static const int kPingStddevMsFieldNumber = 3;
	static const int kPingAvgMsFieldNumber = 4;
	static const int kPacketLossPctFieldNumber = 5;
	static const int kIsBotFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 steamid_;  // +0x18
	string * remote_addr_;  // +0x20
	int32 ping_stddev_ms_;  // +0x28
	int32 ping_avg_ms_;  // +0x2c
	float packet_loss_pct_;  // +0x30
	bool is_bot_;  // +0x34

	static CMsgServerNetworkStats_Player * default_instance_;
	CMsgServerNetworkStats_Player();
	virtual ~CMsgServerNetworkStats_Player();
	CMsgServerNetworkStats_Player(const CMsgServerNetworkStats_Player &);
	CMsgServerNetworkStats_Player & operator=(const CMsgServerNetworkStats_Player &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerNetworkStats_Player & default_instance();
	void Swap(CMsgServerNetworkStats_Player *);
	virtual CMsgServerNetworkStats_Player * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerNetworkStats_Player &);
	void MergeFrom(const CMsgServerNetworkStats_Player &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_steamid();
	void clear_steamid();
	uint64 steamid();
	void set_steamid(uint64);
	bool has_remote_addr();
	void clear_remote_addr();
	const string & remote_addr();
	void set_remote_addr(const string &);
	void set_remote_addr(const char *);
	void set_remote_addr(const char *, size_t);
	string * mutable_remote_addr();
	string * release_remote_addr();
	void set_allocated_remote_addr(string *);
	bool has_ping_stddev_ms();
	void clear_ping_stddev_ms();
	int32 ping_stddev_ms();
	void set_ping_stddev_ms(int32);
	bool has_ping_avg_ms();
	void clear_ping_avg_ms();
	int32 ping_avg_ms();
	void set_ping_avg_ms(int32);
	bool has_packet_loss_pct();
	void clear_packet_loss_pct();
	float packet_loss_pct();
	void set_packet_loss_pct(float);
	bool has_is_bot();
	void clear_is_bot();
	bool is_bot();
	void set_is_bot(bool);
	void set_has_steamid();
	void clear_has_steamid();
	void set_has_remote_addr();
	void clear_has_remote_addr();
	void set_has_ping_stddev_ms();
	void clear_has_ping_stddev_ms();
	void set_has_ping_avg_ms();
	void clear_has_ping_avg_ms();
	void set_has_packet_loss_pct();
	void clear_has_packet_loss_pct();
	void set_has_is_bot();
	void clear_has_is_bot();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/netmessages.pb.h:7374
class CMsgServerNetworkStats : public Message {
public:

	static const int kDedicatedFieldNumber = 1;
	static const int kCpuUsageFieldNumber = 2;
	static const int kMemoryUsedMbFieldNumber = 3;
	static const int kMemoryFreeMbFieldNumber = 4;
	static const int kUptimeFieldNumber = 5;
	static const int kSpawnCountFieldNumber = 6;
	static const int kNumClientsFieldNumber = 8;
	static const int kNumBotsFieldNumber = 9;
	static const int kNumSpectatorsFieldNumber = 10;
	static const int kNumTvRelaysFieldNumber = 11;
	static const int kFpsFieldNumber = 12;
	static const int kPortsFieldNumber = 17;
	static const int kAvgLatencyOutFieldNumber = 18;
	static const int kAvgLatencyInFieldNumber = 19;
	static const int kAvgPacketsOutFieldNumber = 20;
	static const int kAvgPacketsInFieldNumber = 21;
	static const int kAvgLossOutFieldNumber = 22;
	static const int kAvgLossInFieldNumber = 23;
	static const int kAvgDataOutFieldNumber = 24;
	static const int kAvgDataInFieldNumber = 25;
	static const int kTotalDataInFieldNumber = 26;
	static const int kTotalPacketsInFieldNumber = 27;
	static const int kTotalDataOutFieldNumber = 28;
	static const int kTotalPacketsOutFieldNumber = 29;
	static const int kPlayersFieldNumber = 30;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool dedicated_;  // +0x18

	int32 cpu_usage_;  // +0x1c
	int32 memory_used_mb_;  // +0x20
	int32 memory_free_mb_;  // +0x24
	int32 uptime_;  // +0x28
	int32 spawn_count_;  // +0x2c
	int32 num_clients_;  // +0x30
	int32 num_bots_;  // +0x34
	int32 num_spectators_;  // +0x38
	int32 num_tv_relays_;  // +0x3c
	float fps_;  // +0x58
	float avg_latency_out_;  // +0x5c
	float avg_latency_in_;  // +0x60
	float avg_packets_out_;  // +0x64
	float avg_packets_in_;  // +0x68
	float avg_loss_out_;  // +0x6c
	float avg_loss_in_;  // +0x70
	float avg_data_out_;  // +0x74
	uint64 total_data_in_;  // +0x78
	uint64 total_packets_in_;  // +0x80
	uint64 total_data_out_;  // +0x88
	uint64 total_packets_out_;  // +0x90
	float avg_data_in_;  // +0xb0

	static CMsgServerNetworkStats * default_instance_;
	CMsgServerNetworkStats();
	virtual ~CMsgServerNetworkStats();
	CMsgServerNetworkStats(const CMsgServerNetworkStats &);
	CMsgServerNetworkStats & operator=(const CMsgServerNetworkStats &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerNetworkStats & default_instance();
	void Swap(CMsgServerNetworkStats *);
	virtual CMsgServerNetworkStats * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerNetworkStats &);
	void MergeFrom(const CMsgServerNetworkStats &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_dedicated();
	void clear_dedicated();
	bool dedicated();
	void set_dedicated(bool);
	bool has_cpu_usage();
	void clear_cpu_usage();
	int32 cpu_usage();
	void set_cpu_usage(int32);
	bool has_memory_used_mb();
	void clear_memory_used_mb();
	int32 memory_used_mb();
	void set_memory_used_mb(int32);
	bool has_memory_free_mb();
	void clear_memory_free_mb();
	int32 memory_free_mb();
	void set_memory_free_mb(int32);
	bool has_uptime();
	void clear_uptime();
	int32 uptime();
	void set_uptime(int32);
	bool has_spawn_count();
	void clear_spawn_count();
	int32 spawn_count();
	void set_spawn_count(int32);
	bool has_num_clients();
	void clear_num_clients();
	int32 num_clients();
	void set_num_clients(int32);
	bool has_num_bots();
	void clear_num_bots();
	int32 num_bots();
	void set_num_bots(int32);
	bool has_num_spectators();
	void clear_num_spectators();
	int32 num_spectators();
	void set_num_spectators(int32);
	bool has_num_tv_relays();
	void clear_num_tv_relays();
	int32 num_tv_relays();
	void set_num_tv_relays(int32);
	bool has_fps();
	void clear_fps();
	float fps();
	void set_fps(float);
	int ports_size();
	void clear_ports();
	const CMsgServerNetworkStats_Port & ports(int);
	CMsgServerNetworkStats_Port * mutable_ports(int);
	CMsgServerNetworkStats_Port * add_ports();
	const RepeatedPtrField<CMsgServerNetworkStats_Port> & ports();
	RepeatedPtrField<CMsgServerNetworkStats_Port> * mutable_ports();
	bool has_avg_latency_out();
	void clear_avg_latency_out();
	float avg_latency_out();
	void set_avg_latency_out(float);
	bool has_avg_latency_in();
	void clear_avg_latency_in();
	float avg_latency_in();
	void set_avg_latency_in(float);
	bool has_avg_packets_out();
	void clear_avg_packets_out();
	float avg_packets_out();
	void set_avg_packets_out(float);
	bool has_avg_packets_in();
	void clear_avg_packets_in();
	float avg_packets_in();
	void set_avg_packets_in(float);
	bool has_avg_loss_out();
	void clear_avg_loss_out();
	float avg_loss_out();
	void set_avg_loss_out(float);
	bool has_avg_loss_in();
	void clear_avg_loss_in();
	float avg_loss_in();
	void set_avg_loss_in(float);
	bool has_avg_data_out();
	void clear_avg_data_out();
	float avg_data_out();
	void set_avg_data_out(float);
	bool has_avg_data_in();
	void clear_avg_data_in();
	float avg_data_in();
	void set_avg_data_in(float);
	bool has_total_data_in();
	void clear_total_data_in();
	uint64 total_data_in();
	void set_total_data_in(uint64);
	bool has_total_packets_in();
	void clear_total_packets_in();
	uint64 total_packets_in();
	void set_total_packets_in(uint64);
	bool has_total_data_out();
	void clear_total_data_out();
	uint64 total_data_out();
	void set_total_data_out(uint64);
	bool has_total_packets_out();
	void clear_total_packets_out();
	uint64 total_packets_out();
	void set_total_packets_out(uint64);
	int players_size();
	void clear_players();
	const CMsgServerNetworkStats_Player & players(int);
	CMsgServerNetworkStats_Player * mutable_players(int);
	CMsgServerNetworkStats_Player * add_players();
	const RepeatedPtrField<CMsgServerNetworkStats_Player> & players();
	RepeatedPtrField<CMsgServerNetworkStats_Player> * mutable_players();
	void set_has_dedicated();
	void clear_has_dedicated();
	void set_has_cpu_usage();
	void clear_has_cpu_usage();
	void set_has_memory_used_mb();
	void clear_has_memory_used_mb();
	void set_has_memory_free_mb();
	void clear_has_memory_free_mb();
	void set_has_uptime();
	void clear_has_uptime();
	void set_has_spawn_count();
	void clear_has_spawn_count();
	void set_has_num_clients();
	void clear_has_num_clients();
	void set_has_num_bots();
	void clear_has_num_bots();
	void set_has_num_spectators();
	void clear_has_num_spectators();
	void set_has_num_tv_relays();
	void clear_has_num_tv_relays();
	void set_has_fps();
	void clear_has_fps();
	void set_has_avg_latency_out();
	void clear_has_avg_latency_out();
	void set_has_avg_latency_in();
	void clear_has_avg_latency_in();
	void set_has_avg_packets_out();
	void clear_has_avg_packets_out();
	void set_has_avg_packets_in();
	void clear_has_avg_packets_in();
	void set_has_avg_loss_out();
	void clear_has_avg_loss_out();
	void set_has_avg_loss_in();
	void clear_has_avg_loss_in();
	void set_has_avg_data_out();
	void clear_has_avg_data_out();
	void set_has_avg_data_in();
	void clear_has_avg_data_in();
	void set_has_total_data_in();
	void clear_has_total_data_in();
	void set_has_total_packets_in();
	void clear_has_total_packets_in();
	void set_has_total_data_out();
	void clear_has_total_data_out();
	void set_has_total_packets_out();
	void clear_has_total_packets_out();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 184
};
