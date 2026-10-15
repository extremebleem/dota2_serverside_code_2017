// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/gametoolevents.pb.h:60
class ChangeMapToolEvent : public Message {
public:

	static const int kMapnameFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * mapname_;  // +0x18

	static ChangeMapToolEvent * default_instance_;
	ChangeMapToolEvent();
	virtual ~ChangeMapToolEvent();
	ChangeMapToolEvent(const ChangeMapToolEvent &);
	ChangeMapToolEvent & operator=(const ChangeMapToolEvent &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const ChangeMapToolEvent & default_instance();
	void Swap(ChangeMapToolEvent *);
	virtual ChangeMapToolEvent * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const ChangeMapToolEvent &);
	void MergeFrom(const ChangeMapToolEvent &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	void set_has_mapname();
	void clear_has_mapname();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gametoolevents.pb.h:144
class TraceRayServerToolEvent : public Message {
public:

	static const int kStartFieldNumber = 1;
	static const int kEndFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static TraceRayServerToolEvent * default_instance_;
	TraceRayServerToolEvent();
	virtual ~TraceRayServerToolEvent();
	TraceRayServerToolEvent(const TraceRayServerToolEvent &);
	TraceRayServerToolEvent & operator=(const TraceRayServerToolEvent &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const TraceRayServerToolEvent & default_instance();
	void Swap(TraceRayServerToolEvent *);
	virtual TraceRayServerToolEvent * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const TraceRayServerToolEvent &);
	void MergeFrom(const TraceRayServerToolEvent &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_start();
	void clear_start();
	const CMsgVector & start();
	CMsgVector * mutable_start();
	CMsgVector * release_start();
	void set_allocated_start(CMsgVector *);
	bool has_end();
	void clear_end();
	const CMsgVector & end();
	CMsgVector * mutable_end();
	CMsgVector * release_end();
	void set_allocated_end(CMsgVector *);
	void set_has_start();
	void clear_has_start();
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

// src/game/server/generated_protodota/linuxsteamrt64/gametoolevents.pb.h:237
class ToolTraceRayResult : public Message {
public:

	static const int kHitFieldNumber = 1;
	static const int kImpactFieldNumber = 2;
	static const int kNormalFieldNumber = 3;
	static const int kDistanceFieldNumber = 4;
	static const int kFractionFieldNumber = 5;
	static const int kEhandleFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool hit_;  // +0x20

	float distance_;  // +0x24
	float fraction_;  // +0x30
	int32 ehandle_;  // +0x34

	static ToolTraceRayResult * default_instance_;
	ToolTraceRayResult();
	virtual ~ToolTraceRayResult();
	ToolTraceRayResult(const ToolTraceRayResult &);
	ToolTraceRayResult & operator=(const ToolTraceRayResult &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const ToolTraceRayResult & default_instance();
	void Swap(ToolTraceRayResult *);
	virtual ToolTraceRayResult * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const ToolTraceRayResult &);
	void MergeFrom(const ToolTraceRayResult &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_hit();
	void clear_hit();
	bool hit();
	void set_hit(bool);
	bool has_impact();
	void clear_impact();
	const CMsgVector & impact();
	CMsgVector * mutable_impact();
	CMsgVector * release_impact();
	void set_allocated_impact(CMsgVector *);
	bool has_normal();
	void clear_normal();
	const CMsgVector & normal();
	CMsgVector * mutable_normal();
	CMsgVector * release_normal();
	void set_allocated_normal(CMsgVector *);
	bool has_distance();
	void clear_distance();
	float distance();
	void set_distance(float);
	bool has_fraction();
	void clear_fraction();
	float fraction();
	void set_fraction(float);
	bool has_ehandle();
	void clear_ehandle();
	int32 ehandle();
	void set_ehandle(int32);
	void set_has_hit();
	void clear_has_hit();
	void set_has_impact();
	void clear_has_impact();
	void set_has_normal();
	void clear_has_normal();
	void set_has_distance();
	void clear_has_distance();
	void set_has_fraction();
	void clear_has_fraction();
	void set_has_ehandle();
	void clear_has_ehandle();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gametoolevents.pb.h:370
class SpawnEntityToolEvent : public Message {
public:

	static const int kEntityKeyvaluesFieldNumber = 1;
	static const int kClientsideentityFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * entity_keyvalues_;  // +0x18
	bool clientsideentity_;  // +0x20

	static SpawnEntityToolEvent * default_instance_;
	SpawnEntityToolEvent();
	virtual ~SpawnEntityToolEvent();
	SpawnEntityToolEvent(const SpawnEntityToolEvent &);
	SpawnEntityToolEvent & operator=(const SpawnEntityToolEvent &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const SpawnEntityToolEvent & default_instance();
	void Swap(SpawnEntityToolEvent *);
	virtual SpawnEntityToolEvent * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const SpawnEntityToolEvent &);
	void MergeFrom(const SpawnEntityToolEvent &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_entity_keyvalues();
	void clear_entity_keyvalues();
	const string & entity_keyvalues();
	void set_entity_keyvalues(const string &);
	void set_entity_keyvalues(const char *);
	void set_entity_keyvalues(const void *, size_t);
	string * mutable_entity_keyvalues();
	string * release_entity_keyvalues();
	void set_allocated_entity_keyvalues(string *);
	bool has_clientsideentity();
	void clear_clientsideentity();
	bool clientsideentity();
	void set_clientsideentity(bool);
	void set_has_entity_keyvalues();
	void clear_has_entity_keyvalues();
	void set_has_clientsideentity();
	void clear_has_clientsideentity();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gametoolevents.pb.h:464
class SpawnEntityToolEventResult : public Message {
public:

	static const int kEhandleFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 ehandle_;  // +0x18

	static SpawnEntityToolEventResult * default_instance_;
	SpawnEntityToolEventResult();
	virtual ~SpawnEntityToolEventResult();
	SpawnEntityToolEventResult(const SpawnEntityToolEventResult &);
	SpawnEntityToolEventResult & operator=(const SpawnEntityToolEventResult &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const SpawnEntityToolEventResult & default_instance();
	void Swap(SpawnEntityToolEventResult *);
	virtual SpawnEntityToolEventResult * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const SpawnEntityToolEventResult &);
	void MergeFrom(const SpawnEntityToolEventResult &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_ehandle();
	void clear_ehandle();
	int32 ehandle();
	void set_ehandle(int32);
	void set_has_ehandle();
	void clear_has_ehandle();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gametoolevents.pb.h:543
class DestroyEntityToolEvent : public Message {
public:

	static const int kEhandleFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 ehandle_;  // +0x18

	static DestroyEntityToolEvent * default_instance_;
	DestroyEntityToolEvent();
	virtual ~DestroyEntityToolEvent();
	DestroyEntityToolEvent(const DestroyEntityToolEvent &);
	DestroyEntityToolEvent & operator=(const DestroyEntityToolEvent &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const DestroyEntityToolEvent & default_instance();
	void Swap(DestroyEntityToolEvent *);
	virtual DestroyEntityToolEvent * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const DestroyEntityToolEvent &);
	void MergeFrom(const DestroyEntityToolEvent &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_ehandle();
	void clear_ehandle();
	int32 ehandle();
	void set_ehandle(int32);
	void set_has_ehandle();
	void clear_has_ehandle();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gametoolevents.pb.h:622
class DestroyAllEntitiesToolEvent : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static DestroyAllEntitiesToolEvent * default_instance_;
	DestroyAllEntitiesToolEvent();
	virtual ~DestroyAllEntitiesToolEvent();
	DestroyAllEntitiesToolEvent(const DestroyAllEntitiesToolEvent &);
	DestroyAllEntitiesToolEvent & operator=(const DestroyAllEntitiesToolEvent &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const DestroyAllEntitiesToolEvent & default_instance();
	void Swap(DestroyAllEntitiesToolEvent *);
	virtual DestroyAllEntitiesToolEvent * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const DestroyAllEntitiesToolEvent &);
	void MergeFrom(const DestroyAllEntitiesToolEvent &);
	virtual void Clear();
	virtual bool IsInitialized();
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

// src/game/server/generated_protodota/linuxsteamrt64/gametoolevents.pb.h:691
class RestartMapToolEvent : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static RestartMapToolEvent * default_instance_;
	RestartMapToolEvent();
	virtual ~RestartMapToolEvent();
	RestartMapToolEvent(const RestartMapToolEvent &);
	RestartMapToolEvent & operator=(const RestartMapToolEvent &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const RestartMapToolEvent & default_instance();
	void Swap(RestartMapToolEvent *);
	virtual RestartMapToolEvent * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const RestartMapToolEvent &);
	void MergeFrom(const RestartMapToolEvent &);
	virtual void Clear();
	virtual bool IsInitialized();
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

// src/game/server/generated_protodota/linuxsteamrt64/gametoolevents.pb.h:760
class ToolEvent_GetEntityInfo : public Message {
public:

	static const int kEhandleFieldNumber = 1;
	static const int kClientsideentityFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 ehandle_;  // +0x18
	bool clientsideentity_;  // +0x1c

	static ToolEvent_GetEntityInfo * default_instance_;
	ToolEvent_GetEntityInfo();
	virtual ~ToolEvent_GetEntityInfo();
	ToolEvent_GetEntityInfo(const ToolEvent_GetEntityInfo &);
	ToolEvent_GetEntityInfo & operator=(const ToolEvent_GetEntityInfo &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const ToolEvent_GetEntityInfo & default_instance();
	void Swap(ToolEvent_GetEntityInfo *);
	virtual ToolEvent_GetEntityInfo * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const ToolEvent_GetEntityInfo &);
	void MergeFrom(const ToolEvent_GetEntityInfo &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_ehandle();
	void clear_ehandle();
	int32 ehandle();
	void set_ehandle(int32);
	bool has_clientsideentity();
	void clear_clientsideentity();
	bool clientsideentity();
	void set_clientsideentity(bool);
	void set_has_ehandle();
	void clear_has_ehandle();
	void set_has_clientsideentity();
	void clear_has_clientsideentity();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gametoolevents.pb.h:849
class ToolEvent_GetEntityInfoResult : public Message {
public:

	static const int kCppclassFieldNumber = 1;
	static const int kClassnameFieldNumber = 2;
	static const int kNameFieldNumber = 3;
	static const int kOriginFieldNumber = 4;
	static const int kMinsFieldNumber = 5;
	static const int kMaxsFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static string * _default_cppclass_;
	string * cppclass_;  // +0x18
	string * classname_;  // +0x20
	string * name_;  // +0x28

	static ToolEvent_GetEntityInfoResult * default_instance_;
	ToolEvent_GetEntityInfoResult();
	virtual ~ToolEvent_GetEntityInfoResult();
	ToolEvent_GetEntityInfoResult(const ToolEvent_GetEntityInfoResult &);
	ToolEvent_GetEntityInfoResult & operator=(const ToolEvent_GetEntityInfoResult &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const ToolEvent_GetEntityInfoResult & default_instance();
	void Swap(ToolEvent_GetEntityInfoResult *);
	virtual ToolEvent_GetEntityInfoResult * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const ToolEvent_GetEntityInfoResult &);
	void MergeFrom(const ToolEvent_GetEntityInfoResult &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_cppclass();
	void clear_cppclass();
	const string & cppclass();
	void set_cppclass(const string &);
	void set_cppclass(const char *);
	void set_cppclass(const char *, size_t);
	string * mutable_cppclass();
	string * release_cppclass();
	void set_allocated_cppclass(string *);
	bool has_classname();
	void clear_classname();
	const string & classname();
	void set_classname(const string &);
	void set_classname(const char *);
	void set_classname(const char *, size_t);
	string * mutable_classname();
	string * release_classname();
	void set_allocated_classname(string *);
	bool has_name();
	void clear_name();
	const string & name();
	void set_name(const string &);
	void set_name(const char *);
	void set_name(const char *, size_t);
	string * mutable_name();
	string * release_name();
	void set_allocated_name(string *);
	bool has_origin();
	void clear_origin();
	const CMsgVector & origin();
	CMsgVector * mutable_origin();
	CMsgVector * release_origin();
	void set_allocated_origin(CMsgVector *);
	bool has_mins();
	void clear_mins();
	const CMsgVector & mins();
	CMsgVector * mutable_mins();
	CMsgVector * release_mins();
	void set_allocated_mins(CMsgVector *);
	bool has_maxs();
	void clear_maxs();
	const CMsgVector & maxs();
	CMsgVector * mutable_maxs();
	CMsgVector * release_maxs();
	void set_allocated_maxs(CMsgVector *);
	void set_has_cppclass();
	void clear_has_cppclass();
	void set_has_classname();
	void clear_has_classname();
	void set_has_name();
	void clear_has_name();
	void set_has_origin();
	void clear_has_origin();
	void set_has_mins();
	void clear_has_mins();
	void set_has_maxs();
	void clear_has_maxs();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gametoolevents.pb.h:1000
class ToolEvent_GetEntityInputs : public Message {
public:

	static const int kEhandleFieldNumber = 1;
	static const int kClientsideentityFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 ehandle_;  // +0x18
	bool clientsideentity_;  // +0x1c

	static ToolEvent_GetEntityInputs * default_instance_;
	ToolEvent_GetEntityInputs();
	virtual ~ToolEvent_GetEntityInputs();
	ToolEvent_GetEntityInputs(const ToolEvent_GetEntityInputs &);
	ToolEvent_GetEntityInputs & operator=(const ToolEvent_GetEntityInputs &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const ToolEvent_GetEntityInputs & default_instance();
	void Swap(ToolEvent_GetEntityInputs *);
	virtual ToolEvent_GetEntityInputs * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const ToolEvent_GetEntityInputs &);
	void MergeFrom(const ToolEvent_GetEntityInputs &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_ehandle();
	void clear_ehandle();
	int32 ehandle();
	void set_ehandle(int32);
	bool has_clientsideentity();
	void clear_clientsideentity();
	bool clientsideentity();
	void set_clientsideentity(bool);
	void set_has_ehandle();
	void clear_has_ehandle();
	void set_has_clientsideentity();
	void clear_has_clientsideentity();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gametoolevents.pb.h:1089
class ToolEvent_GetEntityInputsResult : public Message {
public:

	static const int kInputListFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static ToolEvent_GetEntityInputsResult * default_instance_;
	ToolEvent_GetEntityInputsResult();
	virtual ~ToolEvent_GetEntityInputsResult();
	ToolEvent_GetEntityInputsResult(const ToolEvent_GetEntityInputsResult &);
	ToolEvent_GetEntityInputsResult & operator=(const ToolEvent_GetEntityInputsResult &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const ToolEvent_GetEntityInputsResult & default_instance();
	void Swap(ToolEvent_GetEntityInputsResult *);
	virtual ToolEvent_GetEntityInputsResult * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const ToolEvent_GetEntityInputsResult &);
	void MergeFrom(const ToolEvent_GetEntityInputsResult &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int input_list_size();
	void clear_input_list();
	const string & input_list(int);
	string * mutable_input_list(int);
	void set_input_list(int, const string &);
	void set_input_list(int, const char *);
	void set_input_list(int, const char *, size_t);
	string * add_input_list();
	void add_input_list(const string &);
	void add_input_list(const char *);
	void add_input_list(const char *, size_t);
	const RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > & input_list();
	RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > * mutable_input_list();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gametoolevents.pb.h:1175
class ToolEvent_FireEntityInput : public Message {
public:

	static const int kEhandleFieldNumber = 1;
	static const int kClientsideentityFieldNumber = 2;
	static const int kInputNameFieldNumber = 3;
	static const int kInputParamFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 ehandle_;  // +0x18
	bool clientsideentity_;  // +0x1c

	string * input_name_;  // +0x20
	string * input_param_;  // +0x28

	static ToolEvent_FireEntityInput * default_instance_;
	ToolEvent_FireEntityInput();
	virtual ~ToolEvent_FireEntityInput();
	ToolEvent_FireEntityInput(const ToolEvent_FireEntityInput &);
	ToolEvent_FireEntityInput & operator=(const ToolEvent_FireEntityInput &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const ToolEvent_FireEntityInput & default_instance();
	void Swap(ToolEvent_FireEntityInput *);
	virtual ToolEvent_FireEntityInput * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const ToolEvent_FireEntityInput &);
	void MergeFrom(const ToolEvent_FireEntityInput &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_ehandle();
	void clear_ehandle();
	int32 ehandle();
	void set_ehandle(int32);
	bool has_clientsideentity();
	void clear_clientsideentity();
	bool clientsideentity();
	void set_clientsideentity(bool);
	bool has_input_name();
	void clear_input_name();
	const string & input_name();
	void set_input_name(const string &);
	void set_input_name(const char *);
	void set_input_name(const char *, size_t);
	string * mutable_input_name();
	string * release_input_name();
	void set_allocated_input_name(string *);
	bool has_input_param();
	void clear_input_param();
	const string & input_param();
	void set_input_param(const string &);
	void set_input_param(const char *);
	void set_input_param(const char *, size_t);
	string * mutable_input_param();
	string * release_input_param();
	void set_allocated_input_param(string *);
	void set_has_ehandle();
	void clear_has_ehandle();
	void set_has_clientsideentity();
	void clear_has_clientsideentity();
	void set_has_input_name();
	void clear_has_input_name();
	void set_has_input_param();
	void clear_has_input_param();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gametoolevents.pb.h:1294
class ToolEvent_SFMRecordingStateChanged : public Message {
public:

	static const int kIsrecordingFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool isrecording_;  // +0x18

	static ToolEvent_SFMRecordingStateChanged * default_instance_;
	ToolEvent_SFMRecordingStateChanged();
	virtual ~ToolEvent_SFMRecordingStateChanged();
	ToolEvent_SFMRecordingStateChanged(const ToolEvent_SFMRecordingStateChanged &);
	ToolEvent_SFMRecordingStateChanged & operator=(const ToolEvent_SFMRecordingStateChanged &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const ToolEvent_SFMRecordingStateChanged & default_instance();
	void Swap(ToolEvent_SFMRecordingStateChanged *);
	virtual ToolEvent_SFMRecordingStateChanged * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const ToolEvent_SFMRecordingStateChanged &);
	void MergeFrom(const ToolEvent_SFMRecordingStateChanged &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_isrecording();
	void clear_isrecording();
	bool isrecording();
	void set_isrecording(bool);
	void set_has_isrecording();
	void clear_has_isrecording();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gametoolevents.pb.h:1373
class ToolEvent_SFMToolActiveStateChanged : public Message {
public:

	static const int kIsactiveFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool isactive_;  // +0x18

	static ToolEvent_SFMToolActiveStateChanged * default_instance_;
	ToolEvent_SFMToolActiveStateChanged();
	virtual ~ToolEvent_SFMToolActiveStateChanged();
	ToolEvent_SFMToolActiveStateChanged(const ToolEvent_SFMToolActiveStateChanged &);
	ToolEvent_SFMToolActiveStateChanged & operator=(const ToolEvent_SFMToolActiveStateChanged &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const ToolEvent_SFMToolActiveStateChanged & default_instance();
	void Swap(ToolEvent_SFMToolActiveStateChanged *);
	virtual ToolEvent_SFMToolActiveStateChanged * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const ToolEvent_SFMToolActiveStateChanged &);
	void MergeFrom(const ToolEvent_SFMToolActiveStateChanged &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_isactive();
	void clear_isactive();
	bool isactive();
	void set_isactive(bool);
	void set_has_isactive();
	void clear_has_isactive();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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
