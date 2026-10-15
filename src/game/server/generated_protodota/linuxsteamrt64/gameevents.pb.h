// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/gameevents.pb.h:92
class CMsgVDebugGameSessionIDEvent : public Message {
public:

	static const int kClientidFieldNumber = 1;
	static const int kGamesessionidFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * gamesessionid_;  // +0x18
	int32 clientid_;  // +0x20

	static CMsgVDebugGameSessionIDEvent * default_instance_;
	CMsgVDebugGameSessionIDEvent();
	virtual ~CMsgVDebugGameSessionIDEvent();
	CMsgVDebugGameSessionIDEvent(const CMsgVDebugGameSessionIDEvent &);
	CMsgVDebugGameSessionIDEvent & operator=(const CMsgVDebugGameSessionIDEvent &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgVDebugGameSessionIDEvent & default_instance();
	void Swap(CMsgVDebugGameSessionIDEvent *);
	virtual CMsgVDebugGameSessionIDEvent * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgVDebugGameSessionIDEvent &);
	void MergeFrom(const CMsgVDebugGameSessionIDEvent &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_clientid();
	void clear_clientid();
	int32 clientid();
	void set_clientid(int32);
	bool has_gamesessionid();
	void clear_gamesessionid();
	const string & gamesessionid();
	void set_gamesessionid(const string &);
	void set_gamesessionid(const char *);
	void set_gamesessionid(const char *, size_t);
	string * mutable_gamesessionid();
	string * release_gamesessionid();
	void set_allocated_gamesessionid(string *);
	void set_has_clientid();
	void clear_has_clientid();
	void set_has_gamesessionid();
	void clear_has_gamesessionid();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gameevents.pb.h:186
class CMsgPlaceDecalEvent : public Message {
public:

	static const int kPositionFieldNumber = 1;
	static const int kNormalFieldNumber = 2;
	static const int kSaxisFieldNumber = 3;
	static const int kDecalmaterialindexFieldNumber = 4;
	static const int kFlagsFieldNumber = 5;
	static const int kColorFieldNumber = 6;
	static const int kWidthFieldNumber = 7;
	static const int kHeightFieldNumber = 8;
	static const int kDepthFieldNumber = 9;
	static const int kEntityhandleindexFieldNumber = 10;
	static const int kSkeletoninstancehashFieldNumber = 11;
	static const int kBoneindexFieldNumber = 12;
	static const int kTranslucenthitFieldNumber = 13;
	static const int kIsAdjacentFieldNumber = 14;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 decalmaterialindex_;  // +0x30
	uint32 flags_;  // +0x34
	uint32 color_;  // +0x38
	float width_;  // +0x3c
	float height_;  // +0x40
	float depth_;  // +0x44
	uint32 entityhandleindex_;  // +0x48
	uint32 skeletoninstancehash_;  // +0x4c
	int32 boneindex_;  // +0x50
	bool translucenthit_;  // +0x54
	bool is_adjacent_;  // +0x55

	static CMsgPlaceDecalEvent * default_instance_;
	CMsgPlaceDecalEvent();
	virtual ~CMsgPlaceDecalEvent();
	CMsgPlaceDecalEvent(const CMsgPlaceDecalEvent &);
	CMsgPlaceDecalEvent & operator=(const CMsgPlaceDecalEvent &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgPlaceDecalEvent & default_instance();
	void Swap(CMsgPlaceDecalEvent *);
	virtual CMsgPlaceDecalEvent * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgPlaceDecalEvent &);
	void MergeFrom(const CMsgPlaceDecalEvent &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	const CMsgVector & position();
	CMsgVector * mutable_position();
	CMsgVector * release_position();
	void set_allocated_position(CMsgVector *);
	bool has_normal();
	void clear_normal();
	const CMsgVector & normal();
	CMsgVector * mutable_normal();
	CMsgVector * release_normal();
	void set_allocated_normal(CMsgVector *);
	bool has_saxis();
	void clear_saxis();
	const CMsgVector & saxis();
	CMsgVector * mutable_saxis();
	CMsgVector * release_saxis();
	void set_allocated_saxis(CMsgVector *);
	bool has_decalmaterialindex();
	void clear_decalmaterialindex();
	uint32 decalmaterialindex();
	void set_decalmaterialindex(uint32);
	bool has_flags();
	void clear_flags();
	uint32 flags();
	void set_flags(uint32);
	bool has_color();
	void clear_color();
	uint32 color();
	void set_color(uint32);
	bool has_width();
	void clear_width();
	float width();
	void set_width(float);
	bool has_height();
	void clear_height();
	float height();
	void set_height(float);
	bool has_depth();
	void clear_depth();
	float depth();
	void set_depth(float);
	bool has_entityhandleindex();
	void clear_entityhandleindex();
	uint32 entityhandleindex();
	void set_entityhandleindex(uint32);
	bool has_skeletoninstancehash();
	void clear_skeletoninstancehash();
	uint32 skeletoninstancehash();
	void set_skeletoninstancehash(uint32);
	bool has_boneindex();
	void clear_boneindex();
	int32 boneindex();
	void set_boneindex(int32);
	bool has_translucenthit();
	void clear_translucenthit();
	bool translucenthit();
	void set_translucenthit(bool);
	bool has_is_adjacent();
	void clear_is_adjacent();
	bool is_adjacent();
	void set_is_adjacent(bool);
	void set_has_position();
	void clear_has_position();
	void set_has_normal();
	void clear_has_normal();
	void set_has_saxis();
	void clear_has_saxis();
	void set_has_decalmaterialindex();
	void clear_has_decalmaterialindex();
	void set_has_flags();
	void clear_has_flags();
	void set_has_color();
	void clear_has_color();
	void set_has_width();
	void clear_has_width();
	void set_has_height();
	void clear_has_height();
	void set_has_depth();
	void clear_has_depth();
	void set_has_entityhandleindex();
	void clear_has_entityhandleindex();
	void set_has_skeletoninstancehash();
	void clear_has_skeletoninstancehash();
	void set_has_boneindex();
	void clear_has_boneindex();
	void set_has_translucenthit();
	void clear_has_translucenthit();
	void set_has_is_adjacent();
	void clear_has_is_adjacent();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gameevents.pb.h:401
class CMsgClearWorldDecalsEvent : public Message {
public:

	static const int kFlagstoclearFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 flagstoclear_;  // +0x18

	static CMsgClearWorldDecalsEvent * default_instance_;
	CMsgClearWorldDecalsEvent();
	virtual ~CMsgClearWorldDecalsEvent();
	CMsgClearWorldDecalsEvent(const CMsgClearWorldDecalsEvent &);
	CMsgClearWorldDecalsEvent & operator=(const CMsgClearWorldDecalsEvent &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClearWorldDecalsEvent & default_instance();
	void Swap(CMsgClearWorldDecalsEvent *);
	virtual CMsgClearWorldDecalsEvent * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClearWorldDecalsEvent &);
	void MergeFrom(const CMsgClearWorldDecalsEvent &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_flagstoclear();
	void clear_flagstoclear();
	uint32 flagstoclear();
	void set_flagstoclear(uint32);
	void set_has_flagstoclear();
	void clear_has_flagstoclear();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gameevents.pb.h:480
class CMsgClearEntityDecalsEvent : public Message {
public:

	static const int kFlagstoclearFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 flagstoclear_;  // +0x18

	static CMsgClearEntityDecalsEvent * default_instance_;
	CMsgClearEntityDecalsEvent();
	virtual ~CMsgClearEntityDecalsEvent();
	CMsgClearEntityDecalsEvent(const CMsgClearEntityDecalsEvent &);
	CMsgClearEntityDecalsEvent & operator=(const CMsgClearEntityDecalsEvent &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClearEntityDecalsEvent & default_instance();
	void Swap(CMsgClearEntityDecalsEvent *);
	virtual CMsgClearEntityDecalsEvent * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClearEntityDecalsEvent &);
	void MergeFrom(const CMsgClearEntityDecalsEvent &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_flagstoclear();
	void clear_flagstoclear();
	uint32 flagstoclear();
	void set_flagstoclear(uint32);
	void set_has_flagstoclear();
	void clear_has_flagstoclear();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gameevents.pb.h:559
class CMsgClearDecalsForSkeletonInstanceEvent : public Message {
public:

	static const int kFlagstoclearFieldNumber = 1;
	static const int kEntityhandleindexFieldNumber = 2;
	static const int kSkeletoninstancehashFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 flagstoclear_;  // +0x18
	uint32 entityhandleindex_;  // +0x1c
	uint32 skeletoninstancehash_;  // +0x20

	static CMsgClearDecalsForSkeletonInstanceEvent * default_instance_;
	CMsgClearDecalsForSkeletonInstanceEvent();
	virtual ~CMsgClearDecalsForSkeletonInstanceEvent();
	CMsgClearDecalsForSkeletonInstanceEvent(const CMsgClearDecalsForSkeletonInstanceEvent &);
	CMsgClearDecalsForSkeletonInstanceEvent & operator=(const CMsgClearDecalsForSkeletonInstanceEvent &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClearDecalsForSkeletonInstanceEvent & default_instance();
	void Swap(CMsgClearDecalsForSkeletonInstanceEvent *);
	virtual CMsgClearDecalsForSkeletonInstanceEvent * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClearDecalsForSkeletonInstanceEvent &);
	void MergeFrom(const CMsgClearDecalsForSkeletonInstanceEvent &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_flagstoclear();
	void clear_flagstoclear();
	uint32 flagstoclear();
	void set_flagstoclear(uint32);
	bool has_entityhandleindex();
	void clear_entityhandleindex();
	uint32 entityhandleindex();
	void set_entityhandleindex(uint32);
	bool has_skeletoninstancehash();
	void clear_skeletoninstancehash();
	uint32 skeletoninstancehash();
	void set_skeletoninstancehash(uint32);
	void set_has_flagstoclear();
	void clear_has_flagstoclear();
	void set_has_entityhandleindex();
	void clear_has_entityhandleindex();
	void set_has_skeletoninstancehash();
	void clear_has_skeletoninstancehash();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gameevents.pb.h:658
class CMsgSource1LegacyGameEventList_key_t : public Message {
public:

	static const int kTypeFieldNumber = 1;
	static const int kNameFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * name_;  // +0x18
	int32 type_;  // +0x20

	static CMsgSource1LegacyGameEventList_key_t * default_instance_;
	CMsgSource1LegacyGameEventList_key_t();
	virtual ~CMsgSource1LegacyGameEventList_key_t();
	CMsgSource1LegacyGameEventList_key_t(const CMsgSource1LegacyGameEventList_key_t &);
	CMsgSource1LegacyGameEventList_key_t & operator=(const CMsgSource1LegacyGameEventList_key_t &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSource1LegacyGameEventList_key_t & default_instance();
	void Swap(CMsgSource1LegacyGameEventList_key_t *);
	virtual CMsgSource1LegacyGameEventList_key_t * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSource1LegacyGameEventList_key_t &);
	void MergeFrom(const CMsgSource1LegacyGameEventList_key_t &);
	virtual void Clear();
	virtual bool IsInitialized();
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

// src/game/server/generated_protodota/linuxsteamrt64/gameevents.pb.h:752
class CMsgSource1LegacyGameEventList_descriptor_t : public Message {
public:

	static const int kEventidFieldNumber = 1;
	static const int kNameFieldNumber = 2;
	static const int kKeysFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * name_;  // +0x18
	int32 eventid_;  // +0x38

	static CMsgSource1LegacyGameEventList_descriptor_t * default_instance_;
	CMsgSource1LegacyGameEventList_descriptor_t();
	virtual ~CMsgSource1LegacyGameEventList_descriptor_t();
	CMsgSource1LegacyGameEventList_descriptor_t(const CMsgSource1LegacyGameEventList_descriptor_t &);
	CMsgSource1LegacyGameEventList_descriptor_t & operator=(const CMsgSource1LegacyGameEventList_descriptor_t &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSource1LegacyGameEventList_descriptor_t & default_instance();
	void Swap(CMsgSource1LegacyGameEventList_descriptor_t *);
	virtual CMsgSource1LegacyGameEventList_descriptor_t * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSource1LegacyGameEventList_descriptor_t &);
	void MergeFrom(const CMsgSource1LegacyGameEventList_descriptor_t &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	const CMsgSource1LegacyGameEventList_key_t & keys(int);
	CMsgSource1LegacyGameEventList_key_t * mutable_keys(int);
	CMsgSource1LegacyGameEventList_key_t * add_keys();
	const RepeatedPtrField<CMsgSource1LegacyGameEventList_key_t> & keys();
	RepeatedPtrField<CMsgSource1LegacyGameEventList_key_t> * mutable_keys();
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

// src/game/server/generated_protodota/linuxsteamrt64/gameevents.pb.h:859
class CMsgSource1LegacyGameEventList : public Message {
public:

	static const int kDescriptorsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgSource1LegacyGameEventList * default_instance_;
	CMsgSource1LegacyGameEventList();
	virtual ~CMsgSource1LegacyGameEventList();
	CMsgSource1LegacyGameEventList(const CMsgSource1LegacyGameEventList &);
	CMsgSource1LegacyGameEventList & operator=(const CMsgSource1LegacyGameEventList &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSource1LegacyGameEventList & default_instance();
	void Swap(CMsgSource1LegacyGameEventList *);
	virtual CMsgSource1LegacyGameEventList * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSource1LegacyGameEventList &);
	void MergeFrom(const CMsgSource1LegacyGameEventList &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	const CMsgSource1LegacyGameEventList_descriptor_t & descriptors(int);
	CMsgSource1LegacyGameEventList_descriptor_t * mutable_descriptors(int);
	CMsgSource1LegacyGameEventList_descriptor_t * add_descriptors();
	const RepeatedPtrField<CMsgSource1LegacyGameEventList_descriptor_t> & descriptors();
	RepeatedPtrField<CMsgSource1LegacyGameEventList_descriptor_t> * mutable_descriptors();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gameevents.pb.h:944
class CMsgSource1LegacyListenEvents : public Message {
public:

	static const int kPlayerslotFieldNumber = 1;
	static const int kEventarraybitsFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 playerslot_;  // +0x28

	static CMsgSource1LegacyListenEvents * default_instance_;
	CMsgSource1LegacyListenEvents();
	virtual ~CMsgSource1LegacyListenEvents();
	CMsgSource1LegacyListenEvents(const CMsgSource1LegacyListenEvents &);
	CMsgSource1LegacyListenEvents & operator=(const CMsgSource1LegacyListenEvents &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSource1LegacyListenEvents & default_instance();
	void Swap(CMsgSource1LegacyListenEvents *);
	virtual CMsgSource1LegacyListenEvents * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSource1LegacyListenEvents &);
	void MergeFrom(const CMsgSource1LegacyListenEvents &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_playerslot();
	void clear_playerslot();
	int32 playerslot();
	void set_playerslot(int32);
	int eventarraybits_size();
	void clear_eventarraybits();
	uint32 eventarraybits(int);
	void set_eventarraybits(int, uint32);
	void add_eventarraybits(uint32);
	const RepeatedField<unsigned int> & eventarraybits();
	RepeatedField<unsigned int> * mutable_eventarraybits();
	void set_has_playerslot();
	void clear_has_playerslot();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gameevents.pb.h:1036
class CMsgSource1LegacyGameEvent_key_t : public Message {
public:

	static const int kTypeFieldNumber = 1;
	static const int kValStringFieldNumber = 2;
	static const int kValFloatFieldNumber = 3;
	static const int kValLongFieldNumber = 4;
	static const int kValShortFieldNumber = 5;
	static const int kValByteFieldNumber = 6;
	static const int kValBoolFieldNumber = 7;
	static const int kValUint64FieldNumber = 8;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * val_string_;  // +0x18
	int32 type_;  // +0x20
	float val_float_;  // +0x24
	int32 val_long_;  // +0x28
	int32 val_short_;  // +0x2c
	int32 val_byte_;  // +0x30
	bool val_bool_;  // +0x34

	uint64 val_uint64_;  // +0x38

	static CMsgSource1LegacyGameEvent_key_t * default_instance_;
	CMsgSource1LegacyGameEvent_key_t();
	virtual ~CMsgSource1LegacyGameEvent_key_t();
	CMsgSource1LegacyGameEvent_key_t(const CMsgSource1LegacyGameEvent_key_t &);
	CMsgSource1LegacyGameEvent_key_t & operator=(const CMsgSource1LegacyGameEvent_key_t &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSource1LegacyGameEvent_key_t & default_instance();
	void Swap(CMsgSource1LegacyGameEvent_key_t *);
	virtual CMsgSource1LegacyGameEvent_key_t * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSource1LegacyGameEvent_key_t &);
	void MergeFrom(const CMsgSource1LegacyGameEvent_key_t &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_val_string();
	void clear_val_string();
	const string & val_string();
	void set_val_string(const string &);
	void set_val_string(const char *);
	void set_val_string(const char *, size_t);
	string * mutable_val_string();
	string * release_val_string();
	void set_allocated_val_string(string *);
	bool has_val_float();
	void clear_val_float();
	float val_float();
	void set_val_float(float);
	bool has_val_long();
	void clear_val_long();
	int32 val_long();
	void set_val_long(int32);
	bool has_val_short();
	void clear_val_short();
	int32 val_short();
	void set_val_short(int32);
	bool has_val_byte();
	void clear_val_byte();
	int32 val_byte();
	void set_val_byte(int32);
	bool has_val_bool();
	void clear_val_bool();
	bool val_bool();
	void set_val_bool(bool);
	bool has_val_uint64();
	void clear_val_uint64();
	uint64 val_uint64();
	void set_val_uint64(uint64);
	void set_has_type();
	void clear_has_type();
	void set_has_val_string();
	void clear_has_val_string();
	void set_has_val_float();
	void clear_has_val_float();
	void set_has_val_long();
	void clear_has_val_long();
	void set_has_val_short();
	void clear_has_val_short();
	void set_has_val_byte();
	void clear_has_val_byte();
	void set_has_val_bool();
	void clear_has_val_bool();
	void set_has_val_uint64();
	void clear_has_val_uint64();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gameevents.pb.h:1190
class CMsgSource1LegacyGameEvent : public Message {
public:

	static const int kEventNameFieldNumber = 1;
	static const int kEventidFieldNumber = 2;
	static const int kKeysFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * event_name_;  // +0x18
	int32 eventid_;  // +0x38

	static CMsgSource1LegacyGameEvent * default_instance_;
	CMsgSource1LegacyGameEvent();
	virtual ~CMsgSource1LegacyGameEvent();
	CMsgSource1LegacyGameEvent(const CMsgSource1LegacyGameEvent &);
	CMsgSource1LegacyGameEvent & operator=(const CMsgSource1LegacyGameEvent &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSource1LegacyGameEvent & default_instance();
	void Swap(CMsgSource1LegacyGameEvent *);
	virtual CMsgSource1LegacyGameEvent * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSource1LegacyGameEvent &);
	void MergeFrom(const CMsgSource1LegacyGameEvent &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_eventid();
	void clear_eventid();
	int32 eventid();
	void set_eventid(int32);
	int keys_size();
	void clear_keys();
	const CMsgSource1LegacyGameEvent_key_t & keys(int);
	CMsgSource1LegacyGameEvent_key_t * mutable_keys(int);
	CMsgSource1LegacyGameEvent_key_t * add_keys();
	const RepeatedPtrField<CMsgSource1LegacyGameEvent_key_t> & keys();
	RepeatedPtrField<CMsgSource1LegacyGameEvent_key_t> * mutable_keys();
	void set_has_event_name();
	void clear_has_event_name();
	void set_has_eventid();
	void clear_has_eventid();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gameevents.pb.h:1299
class CMsgSosStartSoundEvent : public Message {
public:

	static const int kSoundeventGuidFieldNumber = 1;
	static const int kSoundeventHashFieldNumber = 2;
	static const int kSourceEntityIndexFieldNumber = 3;
	static const int kSeedFieldNumber = 4;
	static const int kPackedParamsFieldNumber = 5;
	static const int kStartTimeFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 soundevent_guid_;  // +0x18
	uint32 soundevent_hash_;  // +0x1c
	int32 source_entity_index_;  // +0x20
	int32 seed_;  // +0x24
	string * packed_params_;  // +0x28
	float start_time_;  // +0x30

	static CMsgSosStartSoundEvent * default_instance_;
	CMsgSosStartSoundEvent();
	virtual ~CMsgSosStartSoundEvent();
	CMsgSosStartSoundEvent(const CMsgSosStartSoundEvent &);
	CMsgSosStartSoundEvent & operator=(const CMsgSosStartSoundEvent &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSosStartSoundEvent & default_instance();
	void Swap(CMsgSosStartSoundEvent *);
	virtual CMsgSosStartSoundEvent * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSosStartSoundEvent &);
	void MergeFrom(const CMsgSosStartSoundEvent &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_soundevent_guid();
	void clear_soundevent_guid();
	int32 soundevent_guid();
	void set_soundevent_guid(int32);
	bool has_soundevent_hash();
	void clear_soundevent_hash();
	uint32 soundevent_hash();
	void set_soundevent_hash(uint32);
	bool has_source_entity_index();
	void clear_source_entity_index();
	int32 source_entity_index();
	void set_source_entity_index(int32);
	bool has_seed();
	void clear_seed();
	int32 seed();
	void set_seed(int32);
	bool has_packed_params();
	void clear_packed_params();
	const string & packed_params();
	void set_packed_params(const string &);
	void set_packed_params(const char *);
	void set_packed_params(const void *, size_t);
	string * mutable_packed_params();
	string * release_packed_params();
	void set_allocated_packed_params(string *);
	bool has_start_time();
	void clear_start_time();
	float start_time();
	void set_start_time(float);
	void set_has_soundevent_guid();
	void clear_has_soundevent_guid();
	void set_has_soundevent_hash();
	void clear_has_soundevent_hash();
	void set_has_source_entity_index();
	void clear_has_source_entity_index();
	void set_has_seed();
	void clear_has_seed();
	void set_has_packed_params();
	void clear_has_packed_params();
	void set_has_start_time();
	void clear_has_start_time();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gameevents.pb.h:1433
class CMsgSosStopSoundEvent : public Message {
public:

	static const int kSoundeventGuidFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 soundevent_guid_;  // +0x18

	static CMsgSosStopSoundEvent * default_instance_;
	CMsgSosStopSoundEvent();
	virtual ~CMsgSosStopSoundEvent();
	CMsgSosStopSoundEvent(const CMsgSosStopSoundEvent &);
	CMsgSosStopSoundEvent & operator=(const CMsgSosStopSoundEvent &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSosStopSoundEvent & default_instance();
	void Swap(CMsgSosStopSoundEvent *);
	virtual CMsgSosStopSoundEvent * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSosStopSoundEvent &);
	void MergeFrom(const CMsgSosStopSoundEvent &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_soundevent_guid();
	void clear_soundevent_guid();
	int32 soundevent_guid();
	void set_soundevent_guid(int32);
	void set_has_soundevent_guid();
	void clear_has_soundevent_guid();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gameevents.pb.h:1512
class CMsgSosStopSoundEventHash : public Message {
public:

	static const int kSoundeventHashFieldNumber = 1;
	static const int kSourceEntityIndexFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 soundevent_hash_;  // +0x18
	int32 source_entity_index_;  // +0x1c

	static CMsgSosStopSoundEventHash * default_instance_;
	CMsgSosStopSoundEventHash();
	virtual ~CMsgSosStopSoundEventHash();
	CMsgSosStopSoundEventHash(const CMsgSosStopSoundEventHash &);
	CMsgSosStopSoundEventHash & operator=(const CMsgSosStopSoundEventHash &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSosStopSoundEventHash & default_instance();
	void Swap(CMsgSosStopSoundEventHash *);
	virtual CMsgSosStopSoundEventHash * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSosStopSoundEventHash &);
	void MergeFrom(const CMsgSosStopSoundEventHash &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_soundevent_hash();
	void clear_soundevent_hash();
	uint32 soundevent_hash();
	void set_soundevent_hash(uint32);
	bool has_source_entity_index();
	void clear_source_entity_index();
	int32 source_entity_index();
	void set_source_entity_index(int32);
	void set_has_soundevent_hash();
	void clear_has_soundevent_hash();
	void set_has_source_entity_index();
	void clear_has_source_entity_index();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gameevents.pb.h:1601
class CMsgSosSetSoundEventParams : public Message {
public:

	static const int kSoundeventGuidFieldNumber = 1;
	static const int kPackedParamsFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * packed_params_;  // +0x18
	int32 soundevent_guid_;  // +0x20

	static CMsgSosSetSoundEventParams * default_instance_;
	CMsgSosSetSoundEventParams();
	virtual ~CMsgSosSetSoundEventParams();
	CMsgSosSetSoundEventParams(const CMsgSosSetSoundEventParams &);
	CMsgSosSetSoundEventParams & operator=(const CMsgSosSetSoundEventParams &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSosSetSoundEventParams & default_instance();
	void Swap(CMsgSosSetSoundEventParams *);
	virtual CMsgSosSetSoundEventParams * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSosSetSoundEventParams &);
	void MergeFrom(const CMsgSosSetSoundEventParams &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_soundevent_guid();
	void clear_soundevent_guid();
	int32 soundevent_guid();
	void set_soundevent_guid(int32);
	bool has_packed_params();
	void clear_packed_params();
	const string & packed_params();
	void set_packed_params(const string &);
	void set_packed_params(const char *);
	void set_packed_params(const void *, size_t);
	string * mutable_packed_params();
	string * release_packed_params();
	void set_allocated_packed_params(string *);
	void set_has_soundevent_guid();
	void clear_has_soundevent_guid();
	void set_has_packed_params();
	void clear_has_packed_params();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gameevents.pb.h:1695
class CMsgSosSetLibraryStackFields : public Message {
public:

	static const int kStackHashFieldNumber = 1;
	static const int kPackedFieldsFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * packed_fields_;  // +0x18
	uint32 stack_hash_;  // +0x20

	static CMsgSosSetLibraryStackFields * default_instance_;
	CMsgSosSetLibraryStackFields();
	virtual ~CMsgSosSetLibraryStackFields();
	CMsgSosSetLibraryStackFields(const CMsgSosSetLibraryStackFields &);
	CMsgSosSetLibraryStackFields & operator=(const CMsgSosSetLibraryStackFields &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSosSetLibraryStackFields & default_instance();
	void Swap(CMsgSosSetLibraryStackFields *);
	virtual CMsgSosSetLibraryStackFields * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSosSetLibraryStackFields &);
	void MergeFrom(const CMsgSosSetLibraryStackFields &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_stack_hash();
	void clear_stack_hash();
	uint32 stack_hash();
	void set_stack_hash(uint32);
	bool has_packed_fields();
	void clear_packed_fields();
	const string & packed_fields();
	void set_packed_fields(const string &);
	void set_packed_fields(const char *);
	void set_packed_fields(const void *, size_t);
	string * mutable_packed_fields();
	string * release_packed_fields();
	void set_allocated_packed_fields(string *);
	void set_has_stack_hash();
	void clear_has_stack_hash();
	void set_has_packed_fields();
	void clear_has_packed_fields();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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
