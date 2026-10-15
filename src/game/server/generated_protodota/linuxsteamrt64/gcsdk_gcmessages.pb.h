// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:165
class CMsgSHA1Digest : public Message {
public:

	static const int kBlock1FieldNumber = 1;
	static const int kBlock2FieldNumber = 2;
	static const int kBlock3FieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 block1_;  // +0x18
	uint64 block2_;  // +0x20
	uint32 block3_;  // +0x28

	static CMsgSHA1Digest * default_instance_;
	CMsgSHA1Digest();
	virtual ~CMsgSHA1Digest();
	CMsgSHA1Digest(const CMsgSHA1Digest &);
	CMsgSHA1Digest & operator=(const CMsgSHA1Digest &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSHA1Digest & default_instance();
	void Swap(CMsgSHA1Digest *);
	virtual CMsgSHA1Digest * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSHA1Digest &);
	void MergeFrom(const CMsgSHA1Digest &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_block1();
	void clear_block1();
	uint64 block1();
	void set_block1(uint64);
	bool has_block2();
	void clear_block2();
	uint64 block2();
	void set_block2(uint64);
	bool has_block3();
	void clear_block3();
	uint32 block3();
	void set_block3(uint32);
	void set_has_block1();
	void clear_has_block1();
	void set_has_block2();
	void clear_has_block2();
	void set_has_block3();
	void clear_has_block3();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:264
class CMsgSOIDOwner : public Message {
public:

	static const int kTypeFieldNumber = 1;
	static const int kIdFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 id_;  // +0x18
	uint32 type_;  // +0x20

	static CMsgSOIDOwner * default_instance_;
	CMsgSOIDOwner();
	virtual ~CMsgSOIDOwner();
	CMsgSOIDOwner(const CMsgSOIDOwner &);
	CMsgSOIDOwner & operator=(const CMsgSOIDOwner &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSOIDOwner & default_instance();
	void Swap(CMsgSOIDOwner *);
	virtual CMsgSOIDOwner * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSOIDOwner &);
	void MergeFrom(const CMsgSOIDOwner &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	uint32 type();
	void set_type(uint32);
	bool has_id();
	void clear_id();
	uint64 id();
	void set_id(uint64);
	void set_has_type();
	void clear_has_type();
	void set_has_id();
	void clear_has_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:353
class CMsgSOSingleObject : public Message {
public:

	static const int kTypeIdFieldNumber = 2;
	static const int kObjectDataFieldNumber = 3;
	static const int kVersionFieldNumber = 4;
	static const int kOwnerSoidFieldNumber = 5;
	static const int kServiceIdFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * object_data_;  // +0x18
	uint64 version_;  // +0x20
	int32 type_id_;  // +0x28
	uint32 service_id_;  // +0x2c

	static CMsgSOSingleObject * default_instance_;
	CMsgSOSingleObject();
	virtual ~CMsgSOSingleObject();
	CMsgSOSingleObject(const CMsgSOSingleObject &);
	CMsgSOSingleObject & operator=(const CMsgSOSingleObject &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSOSingleObject & default_instance();
	void Swap(CMsgSOSingleObject *);
	virtual CMsgSOSingleObject * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSOSingleObject &);
	void MergeFrom(const CMsgSOSingleObject &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_type_id();
	void clear_type_id();
	int32 type_id();
	void set_type_id(int32);
	bool has_object_data();
	void clear_object_data();
	const string & object_data();
	void set_object_data(const string &);
	void set_object_data(const char *);
	void set_object_data(const void *, size_t);
	string * mutable_object_data();
	string * release_object_data();
	void set_allocated_object_data(string *);
	bool has_version();
	void clear_version();
	uint64 version();
	void set_version(uint64);
	bool has_owner_soid();
	void clear_owner_soid();
	const CMsgSOIDOwner & owner_soid();
	CMsgSOIDOwner * mutable_owner_soid();
	CMsgSOIDOwner * release_owner_soid();
	void set_allocated_owner_soid(CMsgSOIDOwner *);
	bool has_service_id();
	void clear_service_id();
	uint32 service_id();
	void set_service_id(uint32);
	void set_has_type_id();
	void clear_has_type_id();
	void set_has_object_data();
	void clear_has_object_data();
	void set_has_version();
	void clear_has_version();
	void set_has_owner_soid();
	void clear_has_owner_soid();
	void set_has_service_id();
	void clear_has_service_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:479
class CMsgSOMultipleObjects_SingleObject : public Message {
public:

	static const int kTypeIdFieldNumber = 1;
	static const int kObjectDataFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * object_data_;  // +0x18
	int32 type_id_;  // +0x20

	static CMsgSOMultipleObjects_SingleObject * default_instance_;
	CMsgSOMultipleObjects_SingleObject();
	virtual ~CMsgSOMultipleObjects_SingleObject();
	CMsgSOMultipleObjects_SingleObject(const CMsgSOMultipleObjects_SingleObject &);
	CMsgSOMultipleObjects_SingleObject & operator=(const CMsgSOMultipleObjects_SingleObject &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSOMultipleObjects_SingleObject & default_instance();
	void Swap(CMsgSOMultipleObjects_SingleObject *);
	virtual CMsgSOMultipleObjects_SingleObject * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSOMultipleObjects_SingleObject &);
	void MergeFrom(const CMsgSOMultipleObjects_SingleObject &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_type_id();
	void clear_type_id();
	int32 type_id();
	void set_type_id(int32);
	bool has_object_data();
	void clear_object_data();
	const string & object_data();
	void set_object_data(const string &);
	void set_object_data(const char *);
	void set_object_data(const void *, size_t);
	string * mutable_object_data();
	string * release_object_data();
	void set_allocated_object_data(string *);
	void set_has_type_id();
	void clear_has_type_id();
	void set_has_object_data();
	void clear_has_object_data();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:573
class CMsgSOMultipleObjects : public Message {
public:

	static const int kObjectsModifiedFieldNumber = 2;
	static const int kVersionFieldNumber = 3;
	static const int kObjectsAddedFieldNumber = 4;
	static const int kObjectsRemovedFieldNumber = 5;
	static const int kOwnerSoidFieldNumber = 6;
	static const int kServiceIdFieldNumber = 7;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 version_;  // +0x30
	uint32 service_id_;  // +0x70

	static CMsgSOMultipleObjects * default_instance_;
	CMsgSOMultipleObjects();
	virtual ~CMsgSOMultipleObjects();
	CMsgSOMultipleObjects(const CMsgSOMultipleObjects &);
	CMsgSOMultipleObjects & operator=(const CMsgSOMultipleObjects &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSOMultipleObjects & default_instance();
	void Swap(CMsgSOMultipleObjects *);
	virtual CMsgSOMultipleObjects * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSOMultipleObjects &);
	void MergeFrom(const CMsgSOMultipleObjects &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int objects_modified_size();
	void clear_objects_modified();
	const CMsgSOMultipleObjects_SingleObject & objects_modified(int);
	CMsgSOMultipleObjects_SingleObject * mutable_objects_modified(int);
	CMsgSOMultipleObjects_SingleObject * add_objects_modified();
	const RepeatedPtrField<CMsgSOMultipleObjects_SingleObject> & objects_modified();
	RepeatedPtrField<CMsgSOMultipleObjects_SingleObject> * mutable_objects_modified();
	bool has_version();
	void clear_version();
	uint64 version();
	void set_version(uint64);
	int objects_added_size();
	void clear_objects_added();
	const CMsgSOMultipleObjects_SingleObject & objects_added(int);
	CMsgSOMultipleObjects_SingleObject * mutable_objects_added(int);
	CMsgSOMultipleObjects_SingleObject * add_objects_added();
	const RepeatedPtrField<CMsgSOMultipleObjects_SingleObject> & objects_added();
	RepeatedPtrField<CMsgSOMultipleObjects_SingleObject> * mutable_objects_added();
	int objects_removed_size();
	void clear_objects_removed();
	const CMsgSOMultipleObjects_SingleObject & objects_removed(int);
	CMsgSOMultipleObjects_SingleObject * mutable_objects_removed(int);
	CMsgSOMultipleObjects_SingleObject * add_objects_removed();
	const RepeatedPtrField<CMsgSOMultipleObjects_SingleObject> & objects_removed();
	RepeatedPtrField<CMsgSOMultipleObjects_SingleObject> * mutable_objects_removed();
	bool has_owner_soid();
	void clear_owner_soid();
	const CMsgSOIDOwner & owner_soid();
	CMsgSOIDOwner * mutable_owner_soid();
	CMsgSOIDOwner * release_owner_soid();
	void set_allocated_owner_soid(CMsgSOIDOwner *);
	bool has_service_id();
	void clear_service_id();
	uint32 service_id();
	void set_service_id(uint32);
	void set_has_version();
	void clear_has_version();
	void set_has_owner_soid();
	void clear_has_owner_soid();
	void set_has_service_id();
	void clear_has_service_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:715
class CMsgSOCacheSubscribed_SubscribedType : public Message {
public:

	static const int kTypeIdFieldNumber = 1;
	static const int kObjectDataFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 type_id_;  // +0x30

	static CMsgSOCacheSubscribed_SubscribedType * default_instance_;
	CMsgSOCacheSubscribed_SubscribedType();
	virtual ~CMsgSOCacheSubscribed_SubscribedType();
	CMsgSOCacheSubscribed_SubscribedType(const CMsgSOCacheSubscribed_SubscribedType &);
	CMsgSOCacheSubscribed_SubscribedType & operator=(const CMsgSOCacheSubscribed_SubscribedType &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSOCacheSubscribed_SubscribedType & default_instance();
	void Swap(CMsgSOCacheSubscribed_SubscribedType *);
	virtual CMsgSOCacheSubscribed_SubscribedType * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSOCacheSubscribed_SubscribedType &);
	void MergeFrom(const CMsgSOCacheSubscribed_SubscribedType &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_type_id();
	void clear_type_id();
	int32 type_id();
	void set_type_id(int32);
	int object_data_size();
	void clear_object_data();
	const string & object_data(int);
	string * mutable_object_data(int);
	void set_object_data(int, const string &);
	void set_object_data(int, const char *);
	void set_object_data(int, const void *, size_t);
	string * add_object_data();
	void add_object_data(const string &);
	void add_object_data(const char *);
	void add_object_data(const void *, size_t);
	const RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > & object_data();
	RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > * mutable_object_data();
	void set_has_type_id();
	void clear_has_type_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:811
class CMsgSOCacheSubscribed : public Message {
public:

	static const int kObjectsFieldNumber = 2;
	static const int kVersionFieldNumber = 3;
	static const int kOwnerSoidFieldNumber = 4;
	static const int kServiceIdFieldNumber = 5;
	static const int kServiceListFieldNumber = 6;
	static const int kSyncVersionFieldNumber = 7;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 version_;  // +0x30
	uint64 sync_version_;  // +0x50
	uint32 service_id_;  // +0x58

	static CMsgSOCacheSubscribed * default_instance_;
	CMsgSOCacheSubscribed();
	virtual ~CMsgSOCacheSubscribed();
	CMsgSOCacheSubscribed(const CMsgSOCacheSubscribed &);
	CMsgSOCacheSubscribed & operator=(const CMsgSOCacheSubscribed &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSOCacheSubscribed & default_instance();
	void Swap(CMsgSOCacheSubscribed *);
	virtual CMsgSOCacheSubscribed * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSOCacheSubscribed &);
	void MergeFrom(const CMsgSOCacheSubscribed &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int objects_size();
	void clear_objects();
	const CMsgSOCacheSubscribed_SubscribedType & objects(int);
	CMsgSOCacheSubscribed_SubscribedType * mutable_objects(int);
	CMsgSOCacheSubscribed_SubscribedType * add_objects();
	const RepeatedPtrField<CMsgSOCacheSubscribed_SubscribedType> & objects();
	RepeatedPtrField<CMsgSOCacheSubscribed_SubscribedType> * mutable_objects();
	bool has_version();
	void clear_version();
	uint64 version();
	void set_version(uint64);
	bool has_owner_soid();
	void clear_owner_soid();
	const CMsgSOIDOwner & owner_soid();
	CMsgSOIDOwner * mutable_owner_soid();
	CMsgSOIDOwner * release_owner_soid();
	void set_allocated_owner_soid(CMsgSOIDOwner *);
	bool has_service_id();
	void clear_service_id();
	uint32 service_id();
	void set_service_id(uint32);
	int service_list_size();
	void clear_service_list();
	uint32 service_list(int);
	void set_service_list(int, uint32);
	void add_service_list(uint32);
	const RepeatedField<unsigned int> & service_list();
	RepeatedField<unsigned int> * mutable_service_list();
	bool has_sync_version();
	void clear_sync_version();
	uint64 sync_version();
	void set_sync_version(uint64);
	void set_has_version();
	void clear_has_version();
	void set_has_owner_soid();
	void clear_has_owner_soid();
	void set_has_service_id();
	void clear_has_service_id();
	void set_has_sync_version();
	void clear_has_sync_version();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:950
class CMsgSOCacheSubscribedUpToDate : public Message {
public:

	static const int kVersionFieldNumber = 1;
	static const int kOwnerSoidFieldNumber = 2;
	static const int kServiceIdFieldNumber = 3;
	static const int kServiceListFieldNumber = 4;
	static const int kSyncVersionFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 version_;  // +0x18
	uint64 sync_version_;  // +0x38
	uint32 service_id_;  // +0x40

	static CMsgSOCacheSubscribedUpToDate * default_instance_;
	CMsgSOCacheSubscribedUpToDate();
	virtual ~CMsgSOCacheSubscribedUpToDate();
	CMsgSOCacheSubscribedUpToDate(const CMsgSOCacheSubscribedUpToDate &);
	CMsgSOCacheSubscribedUpToDate & operator=(const CMsgSOCacheSubscribedUpToDate &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSOCacheSubscribedUpToDate & default_instance();
	void Swap(CMsgSOCacheSubscribedUpToDate *);
	virtual CMsgSOCacheSubscribedUpToDate * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSOCacheSubscribedUpToDate &);
	void MergeFrom(const CMsgSOCacheSubscribedUpToDate &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	uint64 version();
	void set_version(uint64);
	bool has_owner_soid();
	void clear_owner_soid();
	const CMsgSOIDOwner & owner_soid();
	CMsgSOIDOwner * mutable_owner_soid();
	CMsgSOIDOwner * release_owner_soid();
	void set_allocated_owner_soid(CMsgSOIDOwner *);
	bool has_service_id();
	void clear_service_id();
	uint32 service_id();
	void set_service_id(uint32);
	int service_list_size();
	void clear_service_list();
	uint32 service_list(int);
	void set_service_list(int, uint32);
	void add_service_list(uint32);
	const RepeatedField<unsigned int> & service_list();
	RepeatedField<unsigned int> * mutable_service_list();
	bool has_sync_version();
	void clear_sync_version();
	uint64 sync_version();
	void set_sync_version(uint64);
	void set_has_version();
	void clear_has_version();
	void set_has_owner_soid();
	void clear_has_owner_soid();
	void set_has_service_id();
	void clear_has_service_id();
	void set_has_sync_version();
	void clear_has_sync_version();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:1074
class CMsgSOCacheUnsubscribed : public Message {
public:

	static const int kOwnerSoidFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgSOCacheUnsubscribed * default_instance_;
	CMsgSOCacheUnsubscribed();
	virtual ~CMsgSOCacheUnsubscribed();
	CMsgSOCacheUnsubscribed(const CMsgSOCacheUnsubscribed &);
	CMsgSOCacheUnsubscribed & operator=(const CMsgSOCacheUnsubscribed &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSOCacheUnsubscribed & default_instance();
	void Swap(CMsgSOCacheUnsubscribed *);
	virtual CMsgSOCacheUnsubscribed * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSOCacheUnsubscribed &);
	void MergeFrom(const CMsgSOCacheUnsubscribed &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_owner_soid();
	void clear_owner_soid();
	const CMsgSOIDOwner & owner_soid();
	CMsgSOIDOwner * mutable_owner_soid();
	CMsgSOIDOwner * release_owner_soid();
	void set_allocated_owner_soid(CMsgSOIDOwner *);
	void set_has_owner_soid();
	void clear_has_owner_soid();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:1155
class CMsgSOCacheSubscriptionCheck : public Message {
public:

	static const int kVersionFieldNumber = 2;
	static const int kOwnerSoidFieldNumber = 3;
	static const int kServiceIdFieldNumber = 4;
	static const int kServiceListFieldNumber = 5;
	static const int kSyncVersionFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 version_;  // +0x18
	uint64 sync_version_;  // +0x38
	uint32 service_id_;  // +0x40

	static CMsgSOCacheSubscriptionCheck * default_instance_;
	CMsgSOCacheSubscriptionCheck();
	virtual ~CMsgSOCacheSubscriptionCheck();
	CMsgSOCacheSubscriptionCheck(const CMsgSOCacheSubscriptionCheck &);
	CMsgSOCacheSubscriptionCheck & operator=(const CMsgSOCacheSubscriptionCheck &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSOCacheSubscriptionCheck & default_instance();
	void Swap(CMsgSOCacheSubscriptionCheck *);
	virtual CMsgSOCacheSubscriptionCheck * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSOCacheSubscriptionCheck &);
	void MergeFrom(const CMsgSOCacheSubscriptionCheck &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	uint64 version();
	void set_version(uint64);
	bool has_owner_soid();
	void clear_owner_soid();
	const CMsgSOIDOwner & owner_soid();
	CMsgSOIDOwner * mutable_owner_soid();
	CMsgSOIDOwner * release_owner_soid();
	void set_allocated_owner_soid(CMsgSOIDOwner *);
	bool has_service_id();
	void clear_service_id();
	uint32 service_id();
	void set_service_id(uint32);
	int service_list_size();
	void clear_service_list();
	uint32 service_list(int);
	void set_service_list(int, uint32);
	void add_service_list(uint32);
	const RepeatedField<unsigned int> & service_list();
	RepeatedField<unsigned int> * mutable_service_list();
	bool has_sync_version();
	void clear_sync_version();
	uint64 sync_version();
	void set_sync_version(uint64);
	void set_has_version();
	void clear_has_version();
	void set_has_owner_soid();
	void clear_has_owner_soid();
	void set_has_service_id();
	void clear_has_service_id();
	void set_has_sync_version();
	void clear_has_sync_version();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:1279
class CMsgSOCacheSubscriptionRefresh : public Message {
public:

	static const int kOwnerSoidFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgSOCacheSubscriptionRefresh * default_instance_;
	CMsgSOCacheSubscriptionRefresh();
	virtual ~CMsgSOCacheSubscriptionRefresh();
	CMsgSOCacheSubscriptionRefresh(const CMsgSOCacheSubscriptionRefresh &);
	CMsgSOCacheSubscriptionRefresh & operator=(const CMsgSOCacheSubscriptionRefresh &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSOCacheSubscriptionRefresh & default_instance();
	void Swap(CMsgSOCacheSubscriptionRefresh *);
	virtual CMsgSOCacheSubscriptionRefresh * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSOCacheSubscriptionRefresh &);
	void MergeFrom(const CMsgSOCacheSubscriptionRefresh &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_owner_soid();
	void clear_owner_soid();
	const CMsgSOIDOwner & owner_soid();
	CMsgSOIDOwner * mutable_owner_soid();
	CMsgSOIDOwner * release_owner_soid();
	void set_allocated_owner_soid(CMsgSOIDOwner *);
	void set_has_owner_soid();
	void clear_has_owner_soid();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:1360
class CMsgSOCacheVersion : public Message {
public:

	static const int kVersionFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 version_;  // +0x18

	static CMsgSOCacheVersion * default_instance_;
	CMsgSOCacheVersion();
	virtual ~CMsgSOCacheVersion();
	CMsgSOCacheVersion(const CMsgSOCacheVersion &);
	CMsgSOCacheVersion & operator=(const CMsgSOCacheVersion &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSOCacheVersion & default_instance();
	void Swap(CMsgSOCacheVersion *);
	virtual CMsgSOCacheVersion * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSOCacheVersion &);
	void MergeFrom(const CMsgSOCacheVersion &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	uint64 version();
	void set_version(uint64);
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
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:1439
class CMsgGCMultiplexMessage : public Message {
public:

	static const int kMsgtypeFieldNumber = 1;
	static const int kPayloadFieldNumber = 2;
	static const int kSteamidsFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * payload_;  // +0x18
	uint32 msgtype_;  // +0x30

	static CMsgGCMultiplexMessage * default_instance_;
	CMsgGCMultiplexMessage();
	virtual ~CMsgGCMultiplexMessage();
	CMsgGCMultiplexMessage(const CMsgGCMultiplexMessage &);
	CMsgGCMultiplexMessage & operator=(const CMsgGCMultiplexMessage &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCMultiplexMessage & default_instance();
	void Swap(CMsgGCMultiplexMessage *);
	virtual CMsgGCMultiplexMessage * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCMultiplexMessage &);
	void MergeFrom(const CMsgGCMultiplexMessage &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_msgtype();
	void clear_msgtype();
	uint32 msgtype();
	void set_msgtype(uint32);
	bool has_payload();
	void clear_payload();
	const string & payload();
	void set_payload(const string &);
	void set_payload(const char *);
	void set_payload(const void *, size_t);
	string * mutable_payload();
	string * release_payload();
	void set_allocated_payload(string *);
	int steamids_size();
	void clear_steamids();
	uint64 steamids(int);
	void set_steamids(int, uint64);
	void add_steamids(uint64);
	const RepeatedField<long unsigned int> & steamids();
	RepeatedField<long unsigned int> * mutable_steamids();
	void set_has_msgtype();
	void clear_has_msgtype();
	void set_has_payload();
	void clear_has_payload();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:1546
class CGCToGCMsgMasterAck_Process : public Message {
public:

	static const int kDirIndexFieldNumber = 1;
	static const int kTypeInstancesFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 dir_index_;  // +0x28

	static CGCToGCMsgMasterAck_Process * default_instance_;
	CGCToGCMsgMasterAck_Process();
	virtual ~CGCToGCMsgMasterAck_Process();
	CGCToGCMsgMasterAck_Process(const CGCToGCMsgMasterAck_Process &);
	CGCToGCMsgMasterAck_Process & operator=(const CGCToGCMsgMasterAck_Process &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CGCToGCMsgMasterAck_Process & default_instance();
	void Swap(CGCToGCMsgMasterAck_Process *);
	virtual CGCToGCMsgMasterAck_Process * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CGCToGCMsgMasterAck_Process &);
	void MergeFrom(const CGCToGCMsgMasterAck_Process &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_dir_index();
	void clear_dir_index();
	uint32 dir_index();
	void set_dir_index(uint32);
	int type_instances_size();
	void clear_type_instances();
	uint32 type_instances(int);
	void set_type_instances(int, uint32);
	void add_type_instances(uint32);
	const RepeatedField<unsigned int> & type_instances();
	RepeatedField<unsigned int> * mutable_type_instances();
	void set_has_dir_index();
	void clear_has_dir_index();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:1638
class CGCToGCMsgMasterAck : public Message {
public:

	static const int kDirIndexFieldNumber = 1;
	static const int kMachineNameFieldNumber = 3;
	static const int kProcessNameFieldNumber = 4;
	static const int kDirectoryFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * machine_name_;  // +0x18
	string * process_name_;  // +0x20
	uint32 dir_index_;  // +0x40

	static CGCToGCMsgMasterAck * default_instance_;
	CGCToGCMsgMasterAck();
	virtual ~CGCToGCMsgMasterAck();
	CGCToGCMsgMasterAck(const CGCToGCMsgMasterAck &);
	CGCToGCMsgMasterAck & operator=(const CGCToGCMsgMasterAck &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CGCToGCMsgMasterAck & default_instance();
	void Swap(CGCToGCMsgMasterAck *);
	virtual CGCToGCMsgMasterAck * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CGCToGCMsgMasterAck &);
	void MergeFrom(const CGCToGCMsgMasterAck &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_dir_index();
	void clear_dir_index();
	uint32 dir_index();
	void set_dir_index(uint32);
	bool has_machine_name();
	void clear_machine_name();
	const string & machine_name();
	void set_machine_name(const string &);
	void set_machine_name(const char *);
	void set_machine_name(const char *, size_t);
	string * mutable_machine_name();
	string * release_machine_name();
	void set_allocated_machine_name(string *);
	bool has_process_name();
	void clear_process_name();
	const string & process_name();
	void set_process_name(const string &);
	void set_process_name(const char *);
	void set_process_name(const char *, size_t);
	string * mutable_process_name();
	string * release_process_name();
	void set_allocated_process_name(string *);
	int directory_size();
	void clear_directory();
	const CGCToGCMsgMasterAck_Process & directory(int);
	CGCToGCMsgMasterAck_Process * mutable_directory(int);
	CGCToGCMsgMasterAck_Process * add_directory();
	const RepeatedPtrField<CGCToGCMsgMasterAck_Process> & directory();
	RepeatedPtrField<CGCToGCMsgMasterAck_Process> * mutable_directory();
	void set_has_dir_index();
	void clear_has_dir_index();
	void set_has_machine_name();
	void clear_has_machine_name();
	void set_has_process_name();
	void clear_has_process_name();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:1762
class CGCToGCMsgMasterAck_Response : public Message {
public:

	static const int kEresultFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 eresult_;  // +0x18

	static CGCToGCMsgMasterAck_Response * default_instance_;
	CGCToGCMsgMasterAck_Response();
	virtual ~CGCToGCMsgMasterAck_Response();
	CGCToGCMsgMasterAck_Response(const CGCToGCMsgMasterAck_Response &);
	CGCToGCMsgMasterAck_Response & operator=(const CGCToGCMsgMasterAck_Response &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CGCToGCMsgMasterAck_Response & default_instance();
	void Swap(CGCToGCMsgMasterAck_Response *);
	virtual CGCToGCMsgMasterAck_Response * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CGCToGCMsgMasterAck_Response &);
	void MergeFrom(const CGCToGCMsgMasterAck_Response &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_eresult();
	void clear_eresult();
	int32 eresult();
	void set_eresult(int32);
	void set_has_eresult();
	void clear_has_eresult();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:1841
class CMsgGCToGCUniverseStartup : public Message {
public:

	static const int kIsInitialStartupFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool is_initial_startup_;  // +0x18

	static CMsgGCToGCUniverseStartup * default_instance_;
	CMsgGCToGCUniverseStartup();
	virtual ~CMsgGCToGCUniverseStartup();
	CMsgGCToGCUniverseStartup(const CMsgGCToGCUniverseStartup &);
	CMsgGCToGCUniverseStartup & operator=(const CMsgGCToGCUniverseStartup &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCUniverseStartup & default_instance();
	void Swap(CMsgGCToGCUniverseStartup *);
	virtual CMsgGCToGCUniverseStartup * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCUniverseStartup &);
	void MergeFrom(const CMsgGCToGCUniverseStartup &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_is_initial_startup();
	void clear_is_initial_startup();
	bool is_initial_startup();
	void set_is_initial_startup(bool);
	void set_has_is_initial_startup();
	void clear_has_is_initial_startup();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:1920
class CMsgGCToGCUniverseStartupResponse : public Message {
public:

	static const int kEresultFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 eresult_;  // +0x18

	static CMsgGCToGCUniverseStartupResponse * default_instance_;
	CMsgGCToGCUniverseStartupResponse();
	virtual ~CMsgGCToGCUniverseStartupResponse();
	CMsgGCToGCUniverseStartupResponse(const CMsgGCToGCUniverseStartupResponse &);
	CMsgGCToGCUniverseStartupResponse & operator=(const CMsgGCToGCUniverseStartupResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCUniverseStartupResponse & default_instance();
	void Swap(CMsgGCToGCUniverseStartupResponse *);
	virtual CMsgGCToGCUniverseStartupResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCUniverseStartupResponse &);
	void MergeFrom(const CMsgGCToGCUniverseStartupResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_eresult();
	void clear_eresult();
	int32 eresult();
	void set_eresult(int32);
	void set_has_eresult();
	void clear_has_eresult();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:1999
class CGCToGCMsgMasterStartupComplete_GCInfo : public Message {
public:

	static const int kDirIndexFieldNumber = 1;
	static const int kMachineNameFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * machine_name_;  // +0x18
	uint32 dir_index_;  // +0x20

	static CGCToGCMsgMasterStartupComplete_GCInfo * default_instance_;
	CGCToGCMsgMasterStartupComplete_GCInfo();
	virtual ~CGCToGCMsgMasterStartupComplete_GCInfo();
	CGCToGCMsgMasterStartupComplete_GCInfo(const CGCToGCMsgMasterStartupComplete_GCInfo &);
	CGCToGCMsgMasterStartupComplete_GCInfo & operator=(const CGCToGCMsgMasterStartupComplete_GCInfo &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CGCToGCMsgMasterStartupComplete_GCInfo & default_instance();
	void Swap(CGCToGCMsgMasterStartupComplete_GCInfo *);
	virtual CGCToGCMsgMasterStartupComplete_GCInfo * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CGCToGCMsgMasterStartupComplete_GCInfo &);
	void MergeFrom(const CGCToGCMsgMasterStartupComplete_GCInfo &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_dir_index();
	void clear_dir_index();
	uint32 dir_index();
	void set_dir_index(uint32);
	bool has_machine_name();
	void clear_machine_name();
	const string & machine_name();
	void set_machine_name(const string &);
	void set_machine_name(const char *);
	void set_machine_name(const char *, size_t);
	string * mutable_machine_name();
	string * release_machine_name();
	void set_allocated_machine_name(string *);
	void set_has_dir_index();
	void clear_has_dir_index();
	void set_has_machine_name();
	void clear_has_machine_name();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:2093
class CGCToGCMsgMasterStartupComplete : public Message {
public:

	static const int kGcInfoFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CGCToGCMsgMasterStartupComplete * default_instance_;
	CGCToGCMsgMasterStartupComplete();
	virtual ~CGCToGCMsgMasterStartupComplete();
	CGCToGCMsgMasterStartupComplete(const CGCToGCMsgMasterStartupComplete &);
	CGCToGCMsgMasterStartupComplete & operator=(const CGCToGCMsgMasterStartupComplete &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CGCToGCMsgMasterStartupComplete & default_instance();
	void Swap(CGCToGCMsgMasterStartupComplete *);
	virtual CGCToGCMsgMasterStartupComplete * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CGCToGCMsgMasterStartupComplete &);
	void MergeFrom(const CGCToGCMsgMasterStartupComplete &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int gc_info_size();
	void clear_gc_info();
	const CGCToGCMsgMasterStartupComplete_GCInfo & gc_info(int);
	CGCToGCMsgMasterStartupComplete_GCInfo * mutable_gc_info(int);
	CGCToGCMsgMasterStartupComplete_GCInfo * add_gc_info();
	const RepeatedPtrField<CGCToGCMsgMasterStartupComplete_GCInfo> & gc_info();
	RepeatedPtrField<CGCToGCMsgMasterStartupComplete_GCInfo> * mutable_gc_info();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:2177
class CGCToGCMsgRouted : public Message {
public:

	static const int kMsgTypeFieldNumber = 1;
	static const int kSenderIdFieldNumber = 2;
	static const int kNetMessageFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 sender_id_;  // +0x18
	string * net_message_;  // +0x20
	uint32 msg_type_;  // +0x28

	static CGCToGCMsgRouted * default_instance_;
	CGCToGCMsgRouted();
	virtual ~CGCToGCMsgRouted();
	CGCToGCMsgRouted(const CGCToGCMsgRouted &);
	CGCToGCMsgRouted & operator=(const CGCToGCMsgRouted &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CGCToGCMsgRouted & default_instance();
	void Swap(CGCToGCMsgRouted *);
	virtual CGCToGCMsgRouted * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CGCToGCMsgRouted &);
	void MergeFrom(const CGCToGCMsgRouted &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	uint32 msg_type();
	void set_msg_type(uint32);
	bool has_sender_id();
	void clear_sender_id();
	uint64 sender_id();
	void set_sender_id(uint64);
	bool has_net_message();
	void clear_net_message();
	const string & net_message();
	void set_net_message(const string &);
	void set_net_message(const char *);
	void set_net_message(const void *, size_t);
	string * mutable_net_message();
	string * release_net_message();
	void set_allocated_net_message(string *);
	void set_has_msg_type();
	void clear_has_msg_type();
	void set_has_sender_id();
	void clear_has_sender_id();
	void set_has_net_message();
	void clear_has_net_message();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:2281
class CGCToGCMsgRoutedReply : public Message {
public:

	static const int kMsgTypeFieldNumber = 1;
	static const int kNetMessageFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * net_message_;  // +0x18
	uint32 msg_type_;  // +0x20

	static CGCToGCMsgRoutedReply * default_instance_;
	CGCToGCMsgRoutedReply();
	virtual ~CGCToGCMsgRoutedReply();
	CGCToGCMsgRoutedReply(const CGCToGCMsgRoutedReply &);
	CGCToGCMsgRoutedReply & operator=(const CGCToGCMsgRoutedReply &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CGCToGCMsgRoutedReply & default_instance();
	void Swap(CGCToGCMsgRoutedReply *);
	virtual CGCToGCMsgRoutedReply * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CGCToGCMsgRoutedReply &);
	void MergeFrom(const CGCToGCMsgRoutedReply &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	uint32 msg_type();
	void set_msg_type(uint32);
	bool has_net_message();
	void clear_net_message();
	const string & net_message();
	void set_net_message(const string &);
	void set_net_message(const char *);
	void set_net_message(const void *, size_t);
	string * mutable_net_message();
	string * release_net_message();
	void set_allocated_net_message(string *);
	void set_has_msg_type();
	void clear_has_msg_type();
	void set_has_net_message();
	void clear_has_net_message();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:2375
class CMsgGCUpdateSubGCSessionInfo_CMsgUpdate : public Message {
public:

	static const int kSteamidFieldNumber = 1;
	static const int kIpFieldNumber = 2;
	static const int kTrustedFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 steamid_;  // +0x18
	uint32 ip_;  // +0x20
	bool trusted_;  // +0x24

	static CMsgGCUpdateSubGCSessionInfo_CMsgUpdate * default_instance_;
	CMsgGCUpdateSubGCSessionInfo_CMsgUpdate();
	virtual ~CMsgGCUpdateSubGCSessionInfo_CMsgUpdate();
	CMsgGCUpdateSubGCSessionInfo_CMsgUpdate(const CMsgGCUpdateSubGCSessionInfo_CMsgUpdate &);
	CMsgGCUpdateSubGCSessionInfo_CMsgUpdate & operator=(const CMsgGCUpdateSubGCSessionInfo_CMsgUpdate &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCUpdateSubGCSessionInfo_CMsgUpdate & default_instance();
	void Swap(CMsgGCUpdateSubGCSessionInfo_CMsgUpdate *);
	virtual CMsgGCUpdateSubGCSessionInfo_CMsgUpdate * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCUpdateSubGCSessionInfo_CMsgUpdate &);
	void MergeFrom(const CMsgGCUpdateSubGCSessionInfo_CMsgUpdate &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_ip();
	void clear_ip();
	uint32 ip();
	void set_ip(uint32);
	bool has_trusted();
	void clear_trusted();
	bool trusted();
	void set_trusted(bool);
	void set_has_steamid();
	void clear_has_steamid();
	void set_has_ip();
	void clear_has_ip();
	void set_has_trusted();
	void clear_has_trusted();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:2474
class CMsgGCUpdateSubGCSessionInfo : public Message {
public:

	static const int kUpdatesFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgGCUpdateSubGCSessionInfo * default_instance_;
	CMsgGCUpdateSubGCSessionInfo();
	virtual ~CMsgGCUpdateSubGCSessionInfo();
	CMsgGCUpdateSubGCSessionInfo(const CMsgGCUpdateSubGCSessionInfo &);
	CMsgGCUpdateSubGCSessionInfo & operator=(const CMsgGCUpdateSubGCSessionInfo &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCUpdateSubGCSessionInfo & default_instance();
	void Swap(CMsgGCUpdateSubGCSessionInfo *);
	virtual CMsgGCUpdateSubGCSessionInfo * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCUpdateSubGCSessionInfo &);
	void MergeFrom(const CMsgGCUpdateSubGCSessionInfo &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int updates_size();
	void clear_updates();
	const CMsgGCUpdateSubGCSessionInfo_CMsgUpdate & updates(int);
	CMsgGCUpdateSubGCSessionInfo_CMsgUpdate * mutable_updates(int);
	CMsgGCUpdateSubGCSessionInfo_CMsgUpdate * add_updates();
	const RepeatedPtrField<CMsgGCUpdateSubGCSessionInfo_CMsgUpdate> & updates();
	RepeatedPtrField<CMsgGCUpdateSubGCSessionInfo_CMsgUpdate> * mutable_updates();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:2558
class CMsgGCRequestSubGCSessionInfo : public Message {
public:

	static const int kSteamidFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 steamid_;  // +0x18

	static CMsgGCRequestSubGCSessionInfo * default_instance_;
	CMsgGCRequestSubGCSessionInfo();
	virtual ~CMsgGCRequestSubGCSessionInfo();
	CMsgGCRequestSubGCSessionInfo(const CMsgGCRequestSubGCSessionInfo &);
	CMsgGCRequestSubGCSessionInfo & operator=(const CMsgGCRequestSubGCSessionInfo &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCRequestSubGCSessionInfo & default_instance();
	void Swap(CMsgGCRequestSubGCSessionInfo *);
	virtual CMsgGCRequestSubGCSessionInfo * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCRequestSubGCSessionInfo &);
	void MergeFrom(const CMsgGCRequestSubGCSessionInfo &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	void set_has_steamid();
	void clear_has_steamid();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:2637
class CMsgGCRequestSubGCSessionInfoResponse : public Message {
public:

	static const int kIpFieldNumber = 1;
	static const int kTrustedFieldNumber = 2;
	static const int kPortFieldNumber = 3;
	static const int kSuccessFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 ip_;  // +0x18
	uint32 port_;  // +0x1c
	bool trusted_;  // +0x20
	bool success_;  // +0x21

	static CMsgGCRequestSubGCSessionInfoResponse * default_instance_;
	CMsgGCRequestSubGCSessionInfoResponse();
	virtual ~CMsgGCRequestSubGCSessionInfoResponse();
	CMsgGCRequestSubGCSessionInfoResponse(const CMsgGCRequestSubGCSessionInfoResponse &);
	CMsgGCRequestSubGCSessionInfoResponse & operator=(const CMsgGCRequestSubGCSessionInfoResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCRequestSubGCSessionInfoResponse & default_instance();
	void Swap(CMsgGCRequestSubGCSessionInfoResponse *);
	virtual CMsgGCRequestSubGCSessionInfoResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCRequestSubGCSessionInfoResponse &);
	void MergeFrom(const CMsgGCRequestSubGCSessionInfoResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_ip();
	void clear_ip();
	uint32 ip();
	void set_ip(uint32);
	bool has_trusted();
	void clear_trusted();
	bool trusted();
	void set_trusted(bool);
	bool has_port();
	void clear_port();
	uint32 port();
	void set_port(uint32);
	bool has_success();
	void clear_success();
	bool success();
	void set_success(bool);
	void set_has_ip();
	void clear_has_ip();
	void set_has_trusted();
	void clear_has_trusted();
	void set_has_port();
	void clear_has_port();
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
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:2746
class CMsgSOCacheHaveVersion : public Message {
public:

	static const int kSoidFieldNumber = 1;
	static const int kVersionFieldNumber = 2;
	static const int kServiceIdFieldNumber = 3;
	static const int kCachedFileVersionFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 version_;  // +0x20
	uint32 service_id_;  // +0x28
	uint32 cached_file_version_;  // +0x2c

	static CMsgSOCacheHaveVersion * default_instance_;
	CMsgSOCacheHaveVersion();
	virtual ~CMsgSOCacheHaveVersion();
	CMsgSOCacheHaveVersion(const CMsgSOCacheHaveVersion &);
	CMsgSOCacheHaveVersion & operator=(const CMsgSOCacheHaveVersion &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSOCacheHaveVersion & default_instance();
	void Swap(CMsgSOCacheHaveVersion *);
	virtual CMsgSOCacheHaveVersion * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSOCacheHaveVersion &);
	void MergeFrom(const CMsgSOCacheHaveVersion &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_soid();
	void clear_soid();
	const CMsgSOIDOwner & soid();
	CMsgSOIDOwner * mutable_soid();
	CMsgSOIDOwner * release_soid();
	void set_allocated_soid(CMsgSOIDOwner *);
	bool has_version();
	void clear_version();
	uint64 version();
	void set_version(uint64);
	bool has_service_id();
	void clear_service_id();
	uint32 service_id();
	void set_service_id(uint32);
	bool has_cached_file_version();
	void clear_cached_file_version();
	uint32 cached_file_version();
	void set_cached_file_version(uint32);
	void set_has_soid();
	void clear_has_soid();
	void set_has_version();
	void clear_has_version();
	void set_has_service_id();
	void clear_has_service_id();
	void set_has_cached_file_version();
	void clear_has_cached_file_version();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:2857
class CMsgClientHello : public Message {
public:

	static const int kVersionFieldNumber = 1;
	static const int kSocacheHaveVersionsFieldNumber = 2;
	static const int kClientSessionNeedFieldNumber = 3;
	static const int kClientLauncherFieldNumber = 4;
	static const int kSecretKeyFieldNumber = 5;
	static const int kClientLanguageFieldNumber = 6;
	static const int kEngineFieldNumber = 7;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 version_;  // +0x30
	uint32 client_session_need_;  // +0x34
	string * secret_key_;  // +0x38
	int client_launcher_;  // +0x40
	uint32 client_language_;  // +0x44
	int engine_;  // +0x48

	static CMsgClientHello * default_instance_;
	CMsgClientHello();
	virtual ~CMsgClientHello();
	CMsgClientHello(const CMsgClientHello &);
	CMsgClientHello & operator=(const CMsgClientHello &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClientHello & default_instance();
	void Swap(CMsgClientHello *);
	virtual CMsgClientHello * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClientHello &);
	void MergeFrom(const CMsgClientHello &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	int socache_have_versions_size();
	void clear_socache_have_versions();
	const CMsgSOCacheHaveVersion & socache_have_versions(int);
	CMsgSOCacheHaveVersion * mutable_socache_have_versions(int);
	CMsgSOCacheHaveVersion * add_socache_have_versions();
	const RepeatedPtrField<CMsgSOCacheHaveVersion> & socache_have_versions();
	RepeatedPtrField<CMsgSOCacheHaveVersion> * mutable_socache_have_versions();
	bool has_client_session_need();
	void clear_client_session_need();
	uint32 client_session_need();
	void set_client_session_need(uint32);
	bool has_client_launcher();
	void clear_client_launcher();
	PartnerAccountType client_launcher();
	void set_client_launcher(PartnerAccountType);
	bool has_secret_key();
	void clear_secret_key();
	const string & secret_key();
	void set_secret_key(const string &);
	void set_secret_key(const char *);
	void set_secret_key(const char *, size_t);
	string * mutable_secret_key();
	string * release_secret_key();
	void set_allocated_secret_key(string *);
	bool has_client_language();
	void clear_client_language();
	uint32 client_language();
	void set_client_language(uint32);
	bool has_engine();
	void clear_engine();
	ESourceEngine engine();
	void set_engine(ESourceEngine);
	void set_has_version();
	void clear_has_version();
	void set_has_client_session_need();
	void clear_has_client_session_need();
	void set_has_client_launcher();
	void clear_has_client_launcher();
	void set_has_secret_key();
	void clear_has_secret_key();
	void set_has_client_language();
	void clear_has_client_language();
	void set_has_engine();
	void clear_has_engine();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 80
};

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:3004
class CMsgClientWelcome_Location : public Message {
public:

	static const int kLatitudeFieldNumber = 1;
	static const int kLongitudeFieldNumber = 2;
	static const int kCountryFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	float latitude_;  // +0x18
	float longitude_;  // +0x1c
	string * country_;  // +0x20

	static CMsgClientWelcome_Location * default_instance_;
	CMsgClientWelcome_Location();
	virtual ~CMsgClientWelcome_Location();
	CMsgClientWelcome_Location(const CMsgClientWelcome_Location &);
	CMsgClientWelcome_Location & operator=(const CMsgClientWelcome_Location &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClientWelcome_Location & default_instance();
	void Swap(CMsgClientWelcome_Location *);
	virtual CMsgClientWelcome_Location * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClientWelcome_Location &);
	void MergeFrom(const CMsgClientWelcome_Location &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_latitude();
	void clear_latitude();
	float latitude();
	void set_latitude(float);
	bool has_longitude();
	void clear_longitude();
	float longitude();
	void set_longitude(float);
	bool has_country();
	void clear_country();
	const string & country();
	void set_country(const string &);
	void set_country(const char *);
	void set_country(const char *, size_t);
	string * mutable_country();
	string * release_country();
	void set_allocated_country(string *);
	void set_has_latitude();
	void clear_has_latitude();
	void set_has_longitude();
	void clear_has_longitude();
	void set_has_country();
	void clear_has_country();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:3108
class CMsgClientWelcome : public Message {
public:

	static const int kVersionFieldNumber = 1;
	static const int kGameDataFieldNumber = 2;
	static const int kOutofdateSubscribedCachesFieldNumber = 3;
	static const int kUptodateSubscribedCachesFieldNumber = 4;
	static const int kLocationFieldNumber = 5;
	static const int kSaveGameKeyFieldNumber = 6;
	static const int kItemSchemaCrcFieldNumber = 7;
	static const int kItemsGameUrlFieldNumber = 8;
	static const int kGcSocacheFileVersionFieldNumber = 9;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * game_data_;  // +0x18
	uint32 version_;  // +0x50
	uint32 item_schema_crc_;  // +0x54
	string * save_game_key_;  // +0x60
	string * items_game_url_;  // +0x68
	uint32 gc_socache_file_version_;  // +0x70

	static CMsgClientWelcome * default_instance_;
	CMsgClientWelcome();
	virtual ~CMsgClientWelcome();
	CMsgClientWelcome(const CMsgClientWelcome &);
	CMsgClientWelcome & operator=(const CMsgClientWelcome &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClientWelcome & default_instance();
	void Swap(CMsgClientWelcome *);
	virtual CMsgClientWelcome * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClientWelcome &);
	void MergeFrom(const CMsgClientWelcome &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_game_data();
	void clear_game_data();
	const string & game_data();
	void set_game_data(const string &);
	void set_game_data(const char *);
	void set_game_data(const void *, size_t);
	string * mutable_game_data();
	string * release_game_data();
	void set_allocated_game_data(string *);
	int outofdate_subscribed_caches_size();
	void clear_outofdate_subscribed_caches();
	const CMsgSOCacheSubscribed & outofdate_subscribed_caches(int);
	CMsgSOCacheSubscribed * mutable_outofdate_subscribed_caches(int);
	CMsgSOCacheSubscribed * add_outofdate_subscribed_caches();
	const RepeatedPtrField<CMsgSOCacheSubscribed> & outofdate_subscribed_caches();
	RepeatedPtrField<CMsgSOCacheSubscribed> * mutable_outofdate_subscribed_caches();
	int uptodate_subscribed_caches_size();
	void clear_uptodate_subscribed_caches();
	const CMsgSOCacheSubscriptionCheck & uptodate_subscribed_caches(int);
	CMsgSOCacheSubscriptionCheck * mutable_uptodate_subscribed_caches(int);
	CMsgSOCacheSubscriptionCheck * add_uptodate_subscribed_caches();
	const RepeatedPtrField<CMsgSOCacheSubscriptionCheck> & uptodate_subscribed_caches();
	RepeatedPtrField<CMsgSOCacheSubscriptionCheck> * mutable_uptodate_subscribed_caches();
	bool has_location();
	void clear_location();
	const CMsgClientWelcome_Location & location();
	CMsgClientWelcome_Location * mutable_location();
	CMsgClientWelcome_Location * release_location();
	void set_allocated_location(CMsgClientWelcome_Location *);
	bool has_save_game_key();
	void clear_save_game_key();
	const string & save_game_key();
	void set_save_game_key(const string &);
	void set_save_game_key(const char *);
	void set_save_game_key(const void *, size_t);
	string * mutable_save_game_key();
	string * release_save_game_key();
	void set_allocated_save_game_key(string *);
	bool has_item_schema_crc();
	void clear_item_schema_crc();
	uint32 item_schema_crc();
	void set_item_schema_crc(uint32);
	bool has_items_game_url();
	void clear_items_game_url();
	const string & items_game_url();
	void set_items_game_url(const string &);
	void set_items_game_url(const char *);
	void set_items_game_url(const char *, size_t);
	string * mutable_items_game_url();
	string * release_items_game_url();
	void set_allocated_items_game_url(string *);
	bool has_gc_socache_file_version();
	void clear_gc_socache_file_version();
	uint32 gc_socache_file_version();
	void set_gc_socache_file_version(uint32);
	void set_has_version();
	void clear_has_version();
	void set_has_game_data();
	void clear_has_game_data();
	void set_has_location();
	void clear_has_location();
	void set_has_save_game_key();
	void clear_has_save_game_key();
	void set_has_item_schema_crc();
	void clear_has_item_schema_crc();
	void set_has_items_game_url();
	void clear_has_items_game_url();
	void set_has_gc_socache_file_version();
	void clear_has_gc_socache_file_version();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:3292
class CMsgConnectionStatus : public Message {
public:

	static const int kStatusFieldNumber = 1;
	static const int kClientSessionNeedFieldNumber = 2;
	static const int kQueuePositionFieldNumber = 3;
	static const int kQueueSizeFieldNumber = 4;
	static const int kWaitSecondsFieldNumber = 5;
	static const int kEstimatedWaitSecondsRemainingFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int status_;  // +0x18
	uint32 client_session_need_;  // +0x1c
	int32 queue_position_;  // +0x20
	int32 queue_size_;  // +0x24
	int32 wait_seconds_;  // +0x28
	int32 estimated_wait_seconds_remaining_;  // +0x2c

	static CMsgConnectionStatus * default_instance_;
	CMsgConnectionStatus();
	virtual ~CMsgConnectionStatus();
	CMsgConnectionStatus(const CMsgConnectionStatus &);
	CMsgConnectionStatus & operator=(const CMsgConnectionStatus &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgConnectionStatus & default_instance();
	void Swap(CMsgConnectionStatus *);
	virtual CMsgConnectionStatus * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgConnectionStatus &);
	void MergeFrom(const CMsgConnectionStatus &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	GCConnectionStatus status();
	void set_status(GCConnectionStatus);
	bool has_client_session_need();
	void clear_client_session_need();
	uint32 client_session_need();
	void set_client_session_need(uint32);
	bool has_queue_position();
	void clear_queue_position();
	int32 queue_position();
	void set_queue_position(int32);
	bool has_queue_size();
	void clear_queue_size();
	int32 queue_size();
	void set_queue_size(int32);
	bool has_wait_seconds();
	void clear_wait_seconds();
	int32 wait_seconds();
	void set_wait_seconds(int32);
	bool has_estimated_wait_seconds_remaining();
	void clear_estimated_wait_seconds_remaining();
	int32 estimated_wait_seconds_remaining();
	void set_estimated_wait_seconds_remaining(int32);
	void set_has_status();
	void clear_has_status();
	void set_has_client_session_need();
	void clear_has_client_session_need();
	void set_has_queue_position();
	void clear_has_queue_position();
	void set_has_queue_size();
	void clear_has_queue_size();
	void set_has_wait_seconds();
	void clear_has_wait_seconds();
	void set_has_estimated_wait_seconds_remaining();
	void clear_has_estimated_wait_seconds_remaining();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:3421
class CMsgGCToGCSOCacheSubscribe_CMsgHaveVersions : public Message {
public:

	static const int kServiceIdFieldNumber = 1;
	static const int kVersionFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 version_;  // +0x18
	uint32 service_id_;  // +0x20

	static CMsgGCToGCSOCacheSubscribe_CMsgHaveVersions * default_instance_;
	CMsgGCToGCSOCacheSubscribe_CMsgHaveVersions();
	virtual ~CMsgGCToGCSOCacheSubscribe_CMsgHaveVersions();
	CMsgGCToGCSOCacheSubscribe_CMsgHaveVersions(const CMsgGCToGCSOCacheSubscribe_CMsgHaveVersions &);
	CMsgGCToGCSOCacheSubscribe_CMsgHaveVersions & operator=(const CMsgGCToGCSOCacheSubscribe_CMsgHaveVersions &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCSOCacheSubscribe_CMsgHaveVersions & default_instance();
	void Swap(CMsgGCToGCSOCacheSubscribe_CMsgHaveVersions *);
	virtual CMsgGCToGCSOCacheSubscribe_CMsgHaveVersions * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCSOCacheSubscribe_CMsgHaveVersions &);
	void MergeFrom(const CMsgGCToGCSOCacheSubscribe_CMsgHaveVersions &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_service_id();
	void clear_service_id();
	uint32 service_id();
	void set_service_id(uint32);
	bool has_version();
	void clear_version();
	uint64 version();
	void set_version(uint64);
	void set_has_service_id();
	void clear_has_service_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:3510
class CMsgGCToGCSOCacheSubscribe : public Message {
public:

	static const int kSubscriberFieldNumber = 1;
	static const int kSubscribeToIdFieldNumber = 2;
	static const int kSyncVersionFieldNumber = 3;
	static const int kHaveVersionsFieldNumber = 4;
	static const int kSubscribeToTypeFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 subscriber_;  // +0x18
	uint64 subscribe_to_id_;  // +0x20
	uint64 sync_version_;  // +0x28
	uint32 subscribe_to_type_;  // +0x48

	static CMsgGCToGCSOCacheSubscribe * default_instance_;
	CMsgGCToGCSOCacheSubscribe();
	virtual ~CMsgGCToGCSOCacheSubscribe();
	CMsgGCToGCSOCacheSubscribe(const CMsgGCToGCSOCacheSubscribe &);
	CMsgGCToGCSOCacheSubscribe & operator=(const CMsgGCToGCSOCacheSubscribe &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCSOCacheSubscribe & default_instance();
	void Swap(CMsgGCToGCSOCacheSubscribe *);
	virtual CMsgGCToGCSOCacheSubscribe * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCSOCacheSubscribe &);
	void MergeFrom(const CMsgGCToGCSOCacheSubscribe &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_subscriber();
	void clear_subscriber();
	uint64 subscriber();
	void set_subscriber(uint64);
	bool has_subscribe_to_id();
	void clear_subscribe_to_id();
	uint64 subscribe_to_id();
	void set_subscribe_to_id(uint64);
	bool has_sync_version();
	void clear_sync_version();
	uint64 sync_version();
	void set_sync_version(uint64);
	int have_versions_size();
	void clear_have_versions();
	const CMsgGCToGCSOCacheSubscribe_CMsgHaveVersions & have_versions(int);
	CMsgGCToGCSOCacheSubscribe_CMsgHaveVersions * mutable_have_versions(int);
	CMsgGCToGCSOCacheSubscribe_CMsgHaveVersions * add_have_versions();
	const RepeatedPtrField<CMsgGCToGCSOCacheSubscribe_CMsgHaveVersions> & have_versions();
	RepeatedPtrField<CMsgGCToGCSOCacheSubscribe_CMsgHaveVersions> * mutable_have_versions();
	bool has_subscribe_to_type();
	void clear_subscribe_to_type();
	uint32 subscribe_to_type();
	void set_subscribe_to_type(uint32);
	void set_has_subscriber();
	void clear_has_subscriber();
	void set_has_subscribe_to_id();
	void clear_has_subscribe_to_id();
	void set_has_sync_version();
	void clear_has_sync_version();
	void set_has_subscribe_to_type();
	void clear_has_subscribe_to_type();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 80
};

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:3634
class CMsgGCToGCSOCacheUnsubscribe : public Message {
public:

	static const int kSubscriberFieldNumber = 1;
	static const int kUnsubscribeFromIdFieldNumber = 2;
	static const int kUnsubscribeFromTypeFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 subscriber_;  // +0x18
	uint64 unsubscribe_from_id_;  // +0x20
	uint32 unsubscribe_from_type_;  // +0x28

	static CMsgGCToGCSOCacheUnsubscribe * default_instance_;
	CMsgGCToGCSOCacheUnsubscribe();
	virtual ~CMsgGCToGCSOCacheUnsubscribe();
	CMsgGCToGCSOCacheUnsubscribe(const CMsgGCToGCSOCacheUnsubscribe &);
	CMsgGCToGCSOCacheUnsubscribe & operator=(const CMsgGCToGCSOCacheUnsubscribe &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCSOCacheUnsubscribe & default_instance();
	void Swap(CMsgGCToGCSOCacheUnsubscribe *);
	virtual CMsgGCToGCSOCacheUnsubscribe * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCSOCacheUnsubscribe &);
	void MergeFrom(const CMsgGCToGCSOCacheUnsubscribe &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_subscriber();
	void clear_subscriber();
	uint64 subscriber();
	void set_subscriber(uint64);
	bool has_unsubscribe_from_id();
	void clear_unsubscribe_from_id();
	uint64 unsubscribe_from_id();
	void set_unsubscribe_from_id(uint64);
	bool has_unsubscribe_from_type();
	void clear_unsubscribe_from_type();
	uint32 unsubscribe_from_type();
	void set_unsubscribe_from_type(uint32);
	void set_has_subscriber();
	void clear_has_subscriber();
	void set_has_unsubscribe_from_id();
	void clear_has_unsubscribe_from_id();
	void set_has_unsubscribe_from_type();
	void clear_has_unsubscribe_from_type();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:3733
class CMsgGCClientPing : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgGCClientPing * default_instance_;
	CMsgGCClientPing();
	virtual ~CMsgGCClientPing();
	CMsgGCClientPing(const CMsgGCClientPing &);
	CMsgGCClientPing & operator=(const CMsgGCClientPing &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCClientPing & default_instance();
	void Swap(CMsgGCClientPing *);
	virtual CMsgGCClientPing * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCClientPing &);
	void MergeFrom(const CMsgGCClientPing &);
	virtual void Clear();
	virtual bool IsInitialized();
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:3802
class CMsgGCToGCForwardAccountDetails : public Message {
public:

	static const int kSteamidFieldNumber = 1;
	static const int kAccountDetailsFieldNumber = 2;
	static const int kAgeSecondsFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 steamid_;  // +0x18
	uint32 age_seconds_;  // +0x28

	static CMsgGCToGCForwardAccountDetails * default_instance_;
	CMsgGCToGCForwardAccountDetails();
	virtual ~CMsgGCToGCForwardAccountDetails();
	CMsgGCToGCForwardAccountDetails(const CMsgGCToGCForwardAccountDetails &);
	CMsgGCToGCForwardAccountDetails & operator=(const CMsgGCToGCForwardAccountDetails &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCForwardAccountDetails & default_instance();
	void Swap(CMsgGCToGCForwardAccountDetails *);
	virtual CMsgGCToGCForwardAccountDetails * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCForwardAccountDetails &);
	void MergeFrom(const CMsgGCToGCForwardAccountDetails &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_account_details();
	void clear_account_details();
	const CGCSystemMsg_GetAccountDetails_Response & account_details();
	CGCSystemMsg_GetAccountDetails_Response * mutable_account_details();
	CGCSystemMsg_GetAccountDetails_Response * release_account_details();
	void set_allocated_account_details(CGCSystemMsg_GetAccountDetails_Response *);
	bool has_age_seconds();
	void clear_age_seconds();
	uint32 age_seconds();
	void set_age_seconds(uint32);
	void set_has_steamid();
	void clear_has_steamid();
	void set_has_account_details();
	void clear_has_account_details();
	void set_has_age_seconds();
	void clear_has_age_seconds();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:3903
class CMsgGCToGCLoadSessionSOCache : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kForwardAccountDetailsFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x20

	static CMsgGCToGCLoadSessionSOCache * default_instance_;
	CMsgGCToGCLoadSessionSOCache();
	virtual ~CMsgGCToGCLoadSessionSOCache();
	CMsgGCToGCLoadSessionSOCache(const CMsgGCToGCLoadSessionSOCache &);
	CMsgGCToGCLoadSessionSOCache & operator=(const CMsgGCToGCLoadSessionSOCache &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCLoadSessionSOCache & default_instance();
	void Swap(CMsgGCToGCLoadSessionSOCache *);
	virtual CMsgGCToGCLoadSessionSOCache * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCLoadSessionSOCache &);
	void MergeFrom(const CMsgGCToGCLoadSessionSOCache &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_forward_account_details();
	void clear_forward_account_details();
	const CMsgGCToGCForwardAccountDetails & forward_account_details();
	CMsgGCToGCForwardAccountDetails * mutable_forward_account_details();
	CMsgGCToGCForwardAccountDetails * release_forward_account_details();
	void set_allocated_forward_account_details(CMsgGCToGCForwardAccountDetails *);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_forward_account_details();
	void clear_has_forward_account_details();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:3994
class CMsgGCToGCLoadSessionSOCacheResponse : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgGCToGCLoadSessionSOCacheResponse * default_instance_;
	CMsgGCToGCLoadSessionSOCacheResponse();
	virtual ~CMsgGCToGCLoadSessionSOCacheResponse();
	CMsgGCToGCLoadSessionSOCacheResponse(const CMsgGCToGCLoadSessionSOCacheResponse &);
	CMsgGCToGCLoadSessionSOCacheResponse & operator=(const CMsgGCToGCLoadSessionSOCacheResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCLoadSessionSOCacheResponse & default_instance();
	void Swap(CMsgGCToGCLoadSessionSOCacheResponse *);
	virtual CMsgGCToGCLoadSessionSOCacheResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCLoadSessionSOCacheResponse &);
	void MergeFrom(const CMsgGCToGCLoadSessionSOCacheResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:4063
class CMsgGCToGCUpdateSessionStats : public Message {
public:

	static const int kUserSessionsFieldNumber = 1;
	static const int kServerSessionsFieldNumber = 2;
	static const int kInLogonSurgeFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 user_sessions_;  // +0x18
	uint32 server_sessions_;  // +0x1c
	bool in_logon_surge_;  // +0x20

	static CMsgGCToGCUpdateSessionStats * default_instance_;
	CMsgGCToGCUpdateSessionStats();
	virtual ~CMsgGCToGCUpdateSessionStats();
	CMsgGCToGCUpdateSessionStats(const CMsgGCToGCUpdateSessionStats &);
	CMsgGCToGCUpdateSessionStats & operator=(const CMsgGCToGCUpdateSessionStats &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCUpdateSessionStats & default_instance();
	void Swap(CMsgGCToGCUpdateSessionStats *);
	virtual CMsgGCToGCUpdateSessionStats * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCUpdateSessionStats &);
	void MergeFrom(const CMsgGCToGCUpdateSessionStats &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_user_sessions();
	void clear_user_sessions();
	uint32 user_sessions();
	void set_user_sessions(uint32);
	bool has_server_sessions();
	void clear_server_sessions();
	uint32 server_sessions();
	void set_server_sessions(uint32);
	bool has_in_logon_surge();
	void clear_in_logon_surge();
	bool in_logon_surge();
	void set_in_logon_surge(bool);
	void set_has_user_sessions();
	void clear_has_user_sessions();
	void set_has_server_sessions();
	void clear_has_server_sessions();
	void set_has_in_logon_surge();
	void clear_has_in_logon_surge();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:4162
class CWorkshop_PopulateItemDescriptions_Request_SingleItemDescription : public Message {
public:

	static const int kGameitemidFieldNumber = 1;
	static const int kItemDescriptionFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * item_description_;  // +0x18
	uint32 gameitemid_;  // +0x20

	static CWorkshop_PopulateItemDescriptions_Request_SingleItemDescription * default_instance_;
	CWorkshop_PopulateItemDescriptions_Request_SingleItemDescription();
	virtual ~CWorkshop_PopulateItemDescriptions_Request_SingleItemDescription();
	CWorkshop_PopulateItemDescriptions_Request_SingleItemDescription(const CWorkshop_PopulateItemDescriptions_Request_SingleItemDescription &);
	CWorkshop_PopulateItemDescriptions_Request_SingleItemDescription & operator=(const CWorkshop_PopulateItemDescriptions_Request_SingleItemDescription &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CWorkshop_PopulateItemDescriptions_Request_SingleItemDescription & default_instance();
	void Swap(CWorkshop_PopulateItemDescriptions_Request_SingleItemDescription *);
	virtual CWorkshop_PopulateItemDescriptions_Request_SingleItemDescription * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CWorkshop_PopulateItemDescriptions_Request_SingleItemDescription &);
	void MergeFrom(const CWorkshop_PopulateItemDescriptions_Request_SingleItemDescription &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_gameitemid();
	void clear_gameitemid();
	uint32 gameitemid();
	void set_gameitemid(uint32);
	bool has_item_description();
	void clear_item_description();
	const string & item_description();
	void set_item_description(const string &);
	void set_item_description(const char *);
	void set_item_description(const char *, size_t);
	string * mutable_item_description();
	string * release_item_description();
	void set_allocated_item_description(string *);
	void set_has_gameitemid();
	void clear_has_gameitemid();
	void set_has_item_description();
	void clear_has_item_description();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:4256
class CWorkshop_PopulateItemDescriptions_Request_ItemDescriptionsLanguageBlock : public Message {
public:

	static const int kLanguageFieldNumber = 1;
	static const int kDescriptionsFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * language_;  // +0x18

	static CWorkshop_PopulateItemDescriptions_Request_ItemDescriptionsLanguageBlock * default_instance_;
	CWorkshop_PopulateItemDescriptions_Request_ItemDescriptionsLanguageBlock();
	virtual ~CWorkshop_PopulateItemDescriptions_Request_ItemDescriptionsLanguageBlock();
	CWorkshop_PopulateItemDescriptions_Request_ItemDescriptionsLanguageBlock(const CWorkshop_PopulateItemDescriptions_Request_ItemDescriptionsLanguageBlock &);
	CWorkshop_PopulateItemDescriptions_Request_ItemDescriptionsLanguageBlock & operator=(const CWorkshop_PopulateItemDescriptions_Request_ItemDescriptionsLanguageBlock &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CWorkshop_PopulateItemDescriptions_Request_ItemDescriptionsLanguageBlock & default_instance();
	void Swap(CWorkshop_PopulateItemDescriptions_Request_ItemDescriptionsLanguageBlock *);
	virtual CWorkshop_PopulateItemDescriptions_Request_ItemDescriptionsLanguageBlock * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CWorkshop_PopulateItemDescriptions_Request_ItemDescriptionsLanguageBlock &);
	void MergeFrom(const CWorkshop_PopulateItemDescriptions_Request_ItemDescriptionsLanguageBlock &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	const string & language();
	void set_language(const string &);
	void set_language(const char *);
	void set_language(const char *, size_t);
	string * mutable_language();
	string * release_language();
	void set_allocated_language(string *);
	int descriptions_size();
	void clear_descriptions();
	const CWorkshop_PopulateItemDescriptions_Request_SingleItemDescription & descriptions(int);
	CWorkshop_PopulateItemDescriptions_Request_SingleItemDescription * mutable_descriptions(int);
	CWorkshop_PopulateItemDescriptions_Request_SingleItemDescription * add_descriptions();
	const RepeatedPtrField<CWorkshop_PopulateItemDescriptions_Request_SingleItemDescription> & descriptions();
	RepeatedPtrField<CWorkshop_PopulateItemDescriptions_Request_SingleItemDescription> * mutable_descriptions();
	void set_has_language();
	void clear_has_language();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:4353
class CWorkshop_PopulateItemDescriptions_Request : public Message {
public:

	static const int kAppidFieldNumber = 1;
	static const int kLanguagesFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 appid_;  // +0x30

	static CWorkshop_PopulateItemDescriptions_Request * default_instance_;
	CWorkshop_PopulateItemDescriptions_Request();
	virtual ~CWorkshop_PopulateItemDescriptions_Request();
	CWorkshop_PopulateItemDescriptions_Request(const CWorkshop_PopulateItemDescriptions_Request &);
	CWorkshop_PopulateItemDescriptions_Request & operator=(const CWorkshop_PopulateItemDescriptions_Request &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CWorkshop_PopulateItemDescriptions_Request & default_instance();
	void Swap(CWorkshop_PopulateItemDescriptions_Request *);
	virtual CWorkshop_PopulateItemDescriptions_Request * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CWorkshop_PopulateItemDescriptions_Request &);
	void MergeFrom(const CWorkshop_PopulateItemDescriptions_Request &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	int languages_size();
	void clear_languages();
	const CWorkshop_PopulateItemDescriptions_Request_ItemDescriptionsLanguageBlock & languages(int);
	CWorkshop_PopulateItemDescriptions_Request_ItemDescriptionsLanguageBlock * mutable_languages(int);
	CWorkshop_PopulateItemDescriptions_Request_ItemDescriptionsLanguageBlock * add_languages();
	const RepeatedPtrField<CWorkshop_PopulateItemDescriptions_Request_ItemDescriptionsLanguageBlock> & languages();
	RepeatedPtrField<CWorkshop_PopulateItemDescriptions_Request_ItemDescriptionsLanguageBlock> * mutable_languages();
	void set_has_appid();
	void clear_has_appid();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:4448
class CWorkshop_GetContributors_Request : public Message {
public:

	static const int kAppidFieldNumber = 1;
	static const int kGameitemidFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 appid_;  // +0x18
	uint32 gameitemid_;  // +0x1c

	static CWorkshop_GetContributors_Request * default_instance_;
	CWorkshop_GetContributors_Request();
	virtual ~CWorkshop_GetContributors_Request();
	CWorkshop_GetContributors_Request(const CWorkshop_GetContributors_Request &);
	CWorkshop_GetContributors_Request & operator=(const CWorkshop_GetContributors_Request &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CWorkshop_GetContributors_Request & default_instance();
	void Swap(CWorkshop_GetContributors_Request *);
	virtual CWorkshop_GetContributors_Request * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CWorkshop_GetContributors_Request &);
	void MergeFrom(const CWorkshop_GetContributors_Request &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_gameitemid();
	void clear_gameitemid();
	uint32 gameitemid();
	void set_gameitemid(uint32);
	void set_has_appid();
	void clear_has_appid();
	void set_has_gameitemid();
	void clear_has_gameitemid();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:4537
class CWorkshop_GetContributors_Response : public Message {
public:

	static const int kContributorsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CWorkshop_GetContributors_Response * default_instance_;
	CWorkshop_GetContributors_Response();
	virtual ~CWorkshop_GetContributors_Response();
	CWorkshop_GetContributors_Response(const CWorkshop_GetContributors_Response &);
	CWorkshop_GetContributors_Response & operator=(const CWorkshop_GetContributors_Response &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CWorkshop_GetContributors_Response & default_instance();
	void Swap(CWorkshop_GetContributors_Response *);
	virtual CWorkshop_GetContributors_Response * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CWorkshop_GetContributors_Response &);
	void MergeFrom(const CWorkshop_GetContributors_Response &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int contributors_size();
	void clear_contributors();
	uint64 contributors(int);
	void set_contributors(int, uint64);
	void add_contributors(uint64);
	const RepeatedField<long unsigned int> & contributors();
	RepeatedField<long unsigned int> * mutable_contributors();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:4619
class CWorkshop_SetItemPaymentRules_Request_WorkshopItemPaymentRule : public Message {
public:

	static const int kWorkshopFileIdFieldNumber = 1;
	static const int kRevenuePercentageFieldNumber = 2;
	static const int kRuleDescriptionFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 workshop_file_id_;  // +0x18
	string * rule_description_;  // +0x20
	float revenue_percentage_;  // +0x28

	static CWorkshop_SetItemPaymentRules_Request_WorkshopItemPaymentRule * default_instance_;
	CWorkshop_SetItemPaymentRules_Request_WorkshopItemPaymentRule();
	virtual ~CWorkshop_SetItemPaymentRules_Request_WorkshopItemPaymentRule();
	CWorkshop_SetItemPaymentRules_Request_WorkshopItemPaymentRule(const CWorkshop_SetItemPaymentRules_Request_WorkshopItemPaymentRule &);
	CWorkshop_SetItemPaymentRules_Request_WorkshopItemPaymentRule & operator=(const CWorkshop_SetItemPaymentRules_Request_WorkshopItemPaymentRule &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CWorkshop_SetItemPaymentRules_Request_WorkshopItemPaymentRule & default_instance();
	void Swap(CWorkshop_SetItemPaymentRules_Request_WorkshopItemPaymentRule *);
	virtual CWorkshop_SetItemPaymentRules_Request_WorkshopItemPaymentRule * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CWorkshop_SetItemPaymentRules_Request_WorkshopItemPaymentRule &);
	void MergeFrom(const CWorkshop_SetItemPaymentRules_Request_WorkshopItemPaymentRule &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_workshop_file_id();
	void clear_workshop_file_id();
	uint64 workshop_file_id();
	void set_workshop_file_id(uint64);
	bool has_revenue_percentage();
	void clear_revenue_percentage();
	float revenue_percentage();
	void set_revenue_percentage(float);
	bool has_rule_description();
	void clear_rule_description();
	const string & rule_description();
	void set_rule_description(const string &);
	void set_rule_description(const char *);
	void set_rule_description(const char *, size_t);
	string * mutable_rule_description();
	string * release_rule_description();
	void set_allocated_rule_description(string *);
	void set_has_workshop_file_id();
	void clear_has_workshop_file_id();
	void set_has_revenue_percentage();
	void clear_has_revenue_percentage();
	void set_has_rule_description();
	void clear_has_rule_description();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:4723
class CWorkshop_SetItemPaymentRules_Request_PartnerItemPaymentRule : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kRevenuePercentageFieldNumber = 2;
	static const int kRuleDescriptionFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18
	float revenue_percentage_;  // +0x1c
	string * rule_description_;  // +0x20

	static CWorkshop_SetItemPaymentRules_Request_PartnerItemPaymentRule * default_instance_;
	CWorkshop_SetItemPaymentRules_Request_PartnerItemPaymentRule();
	virtual ~CWorkshop_SetItemPaymentRules_Request_PartnerItemPaymentRule();
	CWorkshop_SetItemPaymentRules_Request_PartnerItemPaymentRule(const CWorkshop_SetItemPaymentRules_Request_PartnerItemPaymentRule &);
	CWorkshop_SetItemPaymentRules_Request_PartnerItemPaymentRule & operator=(const CWorkshop_SetItemPaymentRules_Request_PartnerItemPaymentRule &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CWorkshop_SetItemPaymentRules_Request_PartnerItemPaymentRule & default_instance();
	void Swap(CWorkshop_SetItemPaymentRules_Request_PartnerItemPaymentRule *);
	virtual CWorkshop_SetItemPaymentRules_Request_PartnerItemPaymentRule * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CWorkshop_SetItemPaymentRules_Request_PartnerItemPaymentRule &);
	void MergeFrom(const CWorkshop_SetItemPaymentRules_Request_PartnerItemPaymentRule &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_revenue_percentage();
	void clear_revenue_percentage();
	float revenue_percentage();
	void set_revenue_percentage(float);
	bool has_rule_description();
	void clear_rule_description();
	const string & rule_description();
	void set_rule_description(const string &);
	void set_rule_description(const char *);
	void set_rule_description(const char *, size_t);
	string * mutable_rule_description();
	string * release_rule_description();
	void set_allocated_rule_description(string *);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_revenue_percentage();
	void clear_has_revenue_percentage();
	void set_has_rule_description();
	void clear_has_rule_description();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:4827
class CWorkshop_SetItemPaymentRules_Request : public Message {
public:

	static const int kAppidFieldNumber = 1;
	static const int kGameitemidFieldNumber = 2;
	static const int kAssociatedWorkshopFilesFieldNumber = 3;
	static const int kPartnerAccountsFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 appid_;  // +0x18
	uint32 gameitemid_;  // +0x1c

	static CWorkshop_SetItemPaymentRules_Request * default_instance_;
	CWorkshop_SetItemPaymentRules_Request();
	virtual ~CWorkshop_SetItemPaymentRules_Request();
	CWorkshop_SetItemPaymentRules_Request(const CWorkshop_SetItemPaymentRules_Request &);
	CWorkshop_SetItemPaymentRules_Request & operator=(const CWorkshop_SetItemPaymentRules_Request &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CWorkshop_SetItemPaymentRules_Request & default_instance();
	void Swap(CWorkshop_SetItemPaymentRules_Request *);
	virtual CWorkshop_SetItemPaymentRules_Request * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CWorkshop_SetItemPaymentRules_Request &);
	void MergeFrom(const CWorkshop_SetItemPaymentRules_Request &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_gameitemid();
	void clear_gameitemid();
	uint32 gameitemid();
	void set_gameitemid(uint32);
	int associated_workshop_files_size();
	void clear_associated_workshop_files();
	const CWorkshop_SetItemPaymentRules_Request_WorkshopItemPaymentRule & associated_workshop_files(int);
	CWorkshop_SetItemPaymentRules_Request_WorkshopItemPaymentRule * mutable_associated_workshop_files(int);
	CWorkshop_SetItemPaymentRules_Request_WorkshopItemPaymentRule * add_associated_workshop_files();
	const RepeatedPtrField<CWorkshop_SetItemPaymentRules_Request_WorkshopItemPaymentRule> & associated_workshop_files();
	RepeatedPtrField<CWorkshop_SetItemPaymentRules_Request_WorkshopItemPaymentRule> * mutable_associated_workshop_files();
	int partner_accounts_size();
	void clear_partner_accounts();
	const CWorkshop_SetItemPaymentRules_Request_PartnerItemPaymentRule & partner_accounts(int);
	CWorkshop_SetItemPaymentRules_Request_PartnerItemPaymentRule * mutable_partner_accounts(int);
	CWorkshop_SetItemPaymentRules_Request_PartnerItemPaymentRule * add_partner_accounts();
	const RepeatedPtrField<CWorkshop_SetItemPaymentRules_Request_PartnerItemPaymentRule> & partner_accounts();
	RepeatedPtrField<CWorkshop_SetItemPaymentRules_Request_PartnerItemPaymentRule> * mutable_partner_accounts();
	void set_has_appid();
	void clear_has_appid();
	void set_has_gameitemid();
	void clear_has_gameitemid();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 80
};

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:4945
class CWorkshop_SetItemPaymentRules_Response : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CWorkshop_SetItemPaymentRules_Response * default_instance_;
	CWorkshop_SetItemPaymentRules_Response();
	virtual ~CWorkshop_SetItemPaymentRules_Response();
	CWorkshop_SetItemPaymentRules_Response(const CWorkshop_SetItemPaymentRules_Response &);
	CWorkshop_SetItemPaymentRules_Response & operator=(const CWorkshop_SetItemPaymentRules_Response &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CWorkshop_SetItemPaymentRules_Response & default_instance();
	void Swap(CWorkshop_SetItemPaymentRules_Response *);
	virtual CWorkshop_SetItemPaymentRules_Response * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CWorkshop_SetItemPaymentRules_Response &);
	void MergeFrom(const CWorkshop_SetItemPaymentRules_Response &);
	virtual void Clear();
	virtual bool IsInitialized();
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:5014
class CBroadcast_PostGameDataFrame_Request : public Message {
public:

	static const int kAppidFieldNumber = 1;
	static const int kSteamidFieldNumber = 2;
	static const int kBroadcastIdFieldNumber = 3;
	static const int kFrameDataFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 steamid_;  // +0x18
	uint64 broadcast_id_;  // +0x20
	string * frame_data_;  // +0x28
	uint32 appid_;  // +0x30

	static CBroadcast_PostGameDataFrame_Request * default_instance_;
	CBroadcast_PostGameDataFrame_Request();
	virtual ~CBroadcast_PostGameDataFrame_Request();
	CBroadcast_PostGameDataFrame_Request(const CBroadcast_PostGameDataFrame_Request &);
	CBroadcast_PostGameDataFrame_Request & operator=(const CBroadcast_PostGameDataFrame_Request &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CBroadcast_PostGameDataFrame_Request & default_instance();
	void Swap(CBroadcast_PostGameDataFrame_Request *);
	virtual CBroadcast_PostGameDataFrame_Request * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CBroadcast_PostGameDataFrame_Request &);
	void MergeFrom(const CBroadcast_PostGameDataFrame_Request &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_steamid();
	void clear_steamid();
	uint64 steamid();
	void set_steamid(uint64);
	bool has_broadcast_id();
	void clear_broadcast_id();
	uint64 broadcast_id();
	void set_broadcast_id(uint64);
	bool has_frame_data();
	void clear_frame_data();
	const string & frame_data();
	void set_frame_data(const string &);
	void set_frame_data(const char *);
	void set_frame_data(const void *, size_t);
	string * mutable_frame_data();
	string * release_frame_data();
	void set_allocated_frame_data(string *);
	void set_has_appid();
	void clear_has_appid();
	void set_has_steamid();
	void clear_has_steamid();
	void set_has_broadcast_id();
	void clear_has_broadcast_id();
	void set_has_frame_data();
	void clear_has_frame_data();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:5128
class CMsgSerializedSOCache_TypeCache : public Message {
public:

	static const int kTypeFieldNumber = 1;
	static const int kObjectsFieldNumber = 2;
	static const int kServiceIdFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 type_;  // +0x30
	uint32 service_id_;  // +0x34

	static CMsgSerializedSOCache_TypeCache * default_instance_;
	CMsgSerializedSOCache_TypeCache();
	virtual ~CMsgSerializedSOCache_TypeCache();
	CMsgSerializedSOCache_TypeCache(const CMsgSerializedSOCache_TypeCache &);
	CMsgSerializedSOCache_TypeCache & operator=(const CMsgSerializedSOCache_TypeCache &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSerializedSOCache_TypeCache & default_instance();
	void Swap(CMsgSerializedSOCache_TypeCache *);
	virtual CMsgSerializedSOCache_TypeCache * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSerializedSOCache_TypeCache &);
	void MergeFrom(const CMsgSerializedSOCache_TypeCache &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	uint32 type();
	void set_type(uint32);
	int objects_size();
	void clear_objects();
	const string & objects(int);
	string * mutable_objects(int);
	void set_objects(int, const string &);
	void set_objects(int, const char *);
	void set_objects(int, const void *, size_t);
	string * add_objects();
	void add_objects(const string &);
	void add_objects(const char *);
	void add_objects(const void *, size_t);
	const RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > & objects();
	RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > * mutable_objects();
	bool has_service_id();
	void clear_service_id();
	uint32 service_id();
	void set_service_id(uint32);
	void set_has_type();
	void clear_has_type();
	void set_has_service_id();
	void clear_has_service_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:5234
class CMsgSerializedSOCache_Cache_Version : public Message {
public:

	static const int kServiceFieldNumber = 1;
	static const int kVersionFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 version_;  // +0x18
	uint32 service_;  // +0x20

	static CMsgSerializedSOCache_Cache_Version * default_instance_;
	CMsgSerializedSOCache_Cache_Version();
	virtual ~CMsgSerializedSOCache_Cache_Version();
	CMsgSerializedSOCache_Cache_Version(const CMsgSerializedSOCache_Cache_Version &);
	CMsgSerializedSOCache_Cache_Version & operator=(const CMsgSerializedSOCache_Cache_Version &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSerializedSOCache_Cache_Version & default_instance();
	void Swap(CMsgSerializedSOCache_Cache_Version *);
	virtual CMsgSerializedSOCache_Cache_Version * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSerializedSOCache_Cache_Version &);
	void MergeFrom(const CMsgSerializedSOCache_Cache_Version &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_service();
	void clear_service();
	uint32 service();
	void set_service(uint32);
	bool has_version();
	void clear_version();
	uint64 version();
	void set_version(uint64);
	void set_has_service();
	void clear_has_service();
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:5323
class CMsgSerializedSOCache_Cache : public Message {
public:

	static const int kTypeFieldNumber = 1;
	static const int kIdFieldNumber = 2;
	static const int kVersionsFieldNumber = 3;
	static const int kTypeCachesFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 id_;  // +0x18
	uint32 type_;  // +0x50

	static CMsgSerializedSOCache_Cache * default_instance_;
	CMsgSerializedSOCache_Cache();
	virtual ~CMsgSerializedSOCache_Cache();
	CMsgSerializedSOCache_Cache(const CMsgSerializedSOCache_Cache &);
	CMsgSerializedSOCache_Cache & operator=(const CMsgSerializedSOCache_Cache &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSerializedSOCache_Cache & default_instance();
	void Swap(CMsgSerializedSOCache_Cache *);
	virtual CMsgSerializedSOCache_Cache * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSerializedSOCache_Cache &);
	void MergeFrom(const CMsgSerializedSOCache_Cache &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	uint32 type();
	void set_type(uint32);
	bool has_id();
	void clear_id();
	uint64 id();
	void set_id(uint64);
	int versions_size();
	void clear_versions();
	const CMsgSerializedSOCache_Cache_Version & versions(int);
	CMsgSerializedSOCache_Cache_Version * mutable_versions(int);
	CMsgSerializedSOCache_Cache_Version * add_versions();
	const RepeatedPtrField<CMsgSerializedSOCache_Cache_Version> & versions();
	RepeatedPtrField<CMsgSerializedSOCache_Cache_Version> * mutable_versions();
	int type_caches_size();
	void clear_type_caches();
	const CMsgSerializedSOCache_TypeCache & type_caches(int);
	CMsgSerializedSOCache_TypeCache * mutable_type_caches(int);
	CMsgSerializedSOCache_TypeCache * add_type_caches();
	const RepeatedPtrField<CMsgSerializedSOCache_TypeCache> & type_caches();
	RepeatedPtrField<CMsgSerializedSOCache_TypeCache> * mutable_type_caches();
	void set_has_type();
	void clear_has_type();
	void set_has_id();
	void clear_has_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:5440
class CMsgSerializedSOCache : public Message {
public:

	static const int kFileVersionFieldNumber = 1;
	static const int kCachesFieldNumber = 2;
	static const int kGcSocacheFileVersionFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 file_version_;  // +0x30
	uint32 gc_socache_file_version_;  // +0x34

	static CMsgSerializedSOCache * default_instance_;
	CMsgSerializedSOCache();
	virtual ~CMsgSerializedSOCache();
	CMsgSerializedSOCache(const CMsgSerializedSOCache &);
	CMsgSerializedSOCache & operator=(const CMsgSerializedSOCache &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSerializedSOCache & default_instance();
	void Swap(CMsgSerializedSOCache *);
	virtual CMsgSerializedSOCache * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSerializedSOCache &);
	void MergeFrom(const CMsgSerializedSOCache &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_file_version();
	void clear_file_version();
	uint32 file_version();
	void set_file_version(uint32);
	int caches_size();
	void clear_caches();
	const CMsgSerializedSOCache_Cache & caches(int);
	CMsgSerializedSOCache_Cache * mutable_caches(int);
	CMsgSerializedSOCache_Cache * add_caches();
	const RepeatedPtrField<CMsgSerializedSOCache_Cache> & caches();
	RepeatedPtrField<CMsgSerializedSOCache_Cache> * mutable_caches();
	bool has_gc_socache_file_version();
	void clear_gc_socache_file_version();
	uint32 gc_socache_file_version();
	void set_gc_socache_file_version(uint32);
	void set_has_file_version();
	void clear_has_file_version();
	void set_has_gc_socache_file_version();
	void clear_has_gc_socache_file_version();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:5545
class CMsgGCToClientPollConvarRequest : public Message {
public:

	static const int kConvarNameFieldNumber = 1;
	static const int kPollIdFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * convar_name_;  // +0x18
	uint32 poll_id_;  // +0x20

	static CMsgGCToClientPollConvarRequest * default_instance_;
	CMsgGCToClientPollConvarRequest();
	virtual ~CMsgGCToClientPollConvarRequest();
	CMsgGCToClientPollConvarRequest(const CMsgGCToClientPollConvarRequest &);
	CMsgGCToClientPollConvarRequest & operator=(const CMsgGCToClientPollConvarRequest &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToClientPollConvarRequest & default_instance();
	void Swap(CMsgGCToClientPollConvarRequest *);
	virtual CMsgGCToClientPollConvarRequest * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToClientPollConvarRequest &);
	void MergeFrom(const CMsgGCToClientPollConvarRequest &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_convar_name();
	void clear_convar_name();
	const string & convar_name();
	void set_convar_name(const string &);
	void set_convar_name(const char *);
	void set_convar_name(const char *, size_t);
	string * mutable_convar_name();
	string * release_convar_name();
	void set_allocated_convar_name(string *);
	bool has_poll_id();
	void clear_poll_id();
	uint32 poll_id();
	void set_poll_id(uint32);
	void set_has_convar_name();
	void clear_has_convar_name();
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

// src/game/server/generated_protodota/linuxsteamrt64/gcsdk_gcmessages.pb.h:5639
class CMsgGCToClientPollConvarResponse : public Message {
public:

	static const int kPollIdFieldNumber = 1;
	static const int kConvarValueFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * convar_value_;  // +0x18
	uint32 poll_id_;  // +0x20

	static CMsgGCToClientPollConvarResponse * default_instance_;
	CMsgGCToClientPollConvarResponse();
	virtual ~CMsgGCToClientPollConvarResponse();
	CMsgGCToClientPollConvarResponse(const CMsgGCToClientPollConvarResponse &);
	CMsgGCToClientPollConvarResponse & operator=(const CMsgGCToClientPollConvarResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToClientPollConvarResponse & default_instance();
	void Swap(CMsgGCToClientPollConvarResponse *);
	virtual CMsgGCToClientPollConvarResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToClientPollConvarResponse &);
	void MergeFrom(const CMsgGCToClientPollConvarResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_convar_value();
	void clear_convar_value();
	const string & convar_value();
	void set_convar_value(const string &);
	void set_convar_value(const char *);
	void set_convar_value(const char *, size_t);
	string * mutable_convar_value();
	string * release_convar_value();
	void set_allocated_convar_value(string *);
	void set_has_poll_id();
	void clear_has_poll_id();
	void set_has_convar_value();
	void clear_has_convar_value();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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
