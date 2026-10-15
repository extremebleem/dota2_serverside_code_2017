// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:243
class CMsgProtoBufHeader : public Message {
public:

	static const int kClientSteamIdFieldNumber = 1;
	static const int kClientSessionIdFieldNumber = 2;
	static const int kSourceAppIdFieldNumber = 3;
	static const int kJobIdSourceFieldNumber = 10;
	static const int kJobIdTargetFieldNumber = 11;
	static const int kTargetJobNameFieldNumber = 12;
	static const int kEresultFieldNumber = 13;
	static const int kErrorMessageFieldNumber = 14;
	static const int kGcMsgSrcFieldNumber = 200;
	static const int kGcDirIndexSourceFieldNumber = 201;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 client_steam_id_;  // +0x18
	int32 client_session_id_;  // +0x20
	uint32 source_app_id_;  // +0x24
	uint64 job_id_source_;  // +0x28
	uint64 job_id_target_;  // +0x30
	string * target_job_name_;  // +0x38
	string * error_message_;  // +0x40
	int32 eresult_;  // +0x48
	int gc_msg_src_;  // +0x4c
	uint32 gc_dir_index_source_;  // +0x50

	static CMsgProtoBufHeader * default_instance_;
	CMsgProtoBufHeader();
	virtual ~CMsgProtoBufHeader();
	CMsgProtoBufHeader(const CMsgProtoBufHeader &);
	CMsgProtoBufHeader & operator=(const CMsgProtoBufHeader &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgProtoBufHeader & default_instance();
	void Swap(CMsgProtoBufHeader *);
	virtual CMsgProtoBufHeader * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgProtoBufHeader &);
	void MergeFrom(const CMsgProtoBufHeader &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_client_steam_id();
	void clear_client_steam_id();
	uint64 client_steam_id();
	void set_client_steam_id(uint64);
	bool has_client_session_id();
	void clear_client_session_id();
	int32 client_session_id();
	void set_client_session_id(int32);
	bool has_source_app_id();
	void clear_source_app_id();
	uint32 source_app_id();
	void set_source_app_id(uint32);
	bool has_job_id_source();
	void clear_job_id_source();
	uint64 job_id_source();
	void set_job_id_source(uint64);
	bool has_job_id_target();
	void clear_job_id_target();
	uint64 job_id_target();
	void set_job_id_target(uint64);
	bool has_target_job_name();
	void clear_target_job_name();
	const string & target_job_name();
	void set_target_job_name(const string &);
	void set_target_job_name(const char *);
	void set_target_job_name(const char *, size_t);
	string * mutable_target_job_name();
	string * release_target_job_name();
	void set_allocated_target_job_name(string *);
	bool has_eresult();
	void clear_eresult();
	int32 eresult();
	void set_eresult(int32);
	bool has_error_message();
	void clear_error_message();
	const string & error_message();
	void set_error_message(const string &);
	void set_error_message(const char *);
	void set_error_message(const char *, size_t);
	string * mutable_error_message();
	string * release_error_message();
	void set_allocated_error_message(string *);
	bool has_gc_msg_src();
	void clear_gc_msg_src();
	GCProtoBufMsgSrc gc_msg_src();
	void set_gc_msg_src(GCProtoBufMsgSrc);
	bool has_gc_dir_index_source();
	void clear_gc_dir_index_source();
	uint32 gc_dir_index_source();
	void set_gc_dir_index_source(uint32);
	void set_has_client_steam_id();
	void clear_has_client_steam_id();
	void set_has_client_session_id();
	void clear_has_client_session_id();
	void set_has_source_app_id();
	void clear_has_source_app_id();
	void set_has_job_id_source();
	void clear_has_job_id_source();
	void set_has_job_id_target();
	void clear_has_job_id_target();
	void set_has_target_job_name();
	void clear_has_target_job_name();
	void set_has_eresult();
	void clear_has_eresult();
	void set_has_error_message();
	void clear_has_error_message();
	void set_has_gc_msg_src();
	void clear_has_gc_msg_src();
	void set_has_gc_dir_index_source();
	void clear_has_gc_dir_index_source();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:422
class CMsgWebAPIKey : public Message {
public:

	static const int kStatusFieldNumber = 1;
	static const int kAccountIdFieldNumber = 2;
	static const int kPublisherGroupIdFieldNumber = 3;
	static const int kKeyIdFieldNumber = 4;
	static const int kDomainFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 status_;  // +0x18
	uint32 account_id_;  // +0x1c
	uint32 publisher_group_id_;  // +0x20
	uint32 key_id_;  // +0x24
	string * domain_;  // +0x28

	static CMsgWebAPIKey * default_instance_;
	CMsgWebAPIKey();
	virtual ~CMsgWebAPIKey();
	CMsgWebAPIKey(const CMsgWebAPIKey &);
	CMsgWebAPIKey & operator=(const CMsgWebAPIKey &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgWebAPIKey & default_instance();
	void Swap(CMsgWebAPIKey *);
	virtual CMsgWebAPIKey * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgWebAPIKey &);
	void MergeFrom(const CMsgWebAPIKey &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	uint32 status();
	void set_status(uint32);
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	bool has_publisher_group_id();
	void clear_publisher_group_id();
	uint32 publisher_group_id();
	void set_publisher_group_id(uint32);
	bool has_key_id();
	void clear_key_id();
	uint32 key_id();
	void set_key_id(uint32);
	bool has_domain();
	void clear_domain();
	const string & domain();
	void set_domain(const string &);
	void set_domain(const char *);
	void set_domain(const char *, size_t);
	string * mutable_domain();
	string * release_domain();
	void set_allocated_domain(string *);
	void set_has_status();
	void clear_has_status();
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_publisher_group_id();
	void clear_has_publisher_group_id();
	void set_has_key_id();
	void clear_has_key_id();
	void set_has_domain();
	void clear_has_domain();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:546
class CMsgHttpRequest_RequestHeader : public Message {
public:

	static const int kNameFieldNumber = 1;
	static const int kValueFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * name_;  // +0x18
	string * value_;  // +0x20

	static CMsgHttpRequest_RequestHeader * default_instance_;
	CMsgHttpRequest_RequestHeader();
	virtual ~CMsgHttpRequest_RequestHeader();
	CMsgHttpRequest_RequestHeader(const CMsgHttpRequest_RequestHeader &);
	CMsgHttpRequest_RequestHeader & operator=(const CMsgHttpRequest_RequestHeader &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgHttpRequest_RequestHeader & default_instance();
	void Swap(CMsgHttpRequest_RequestHeader *);
	virtual CMsgHttpRequest_RequestHeader * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgHttpRequest_RequestHeader &);
	void MergeFrom(const CMsgHttpRequest_RequestHeader &);
	virtual void Clear();
	virtual bool IsInitialized();
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:645
class CMsgHttpRequest_QueryParam : public Message {
public:

	static const int kNameFieldNumber = 1;
	static const int kValueFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * name_;  // +0x18
	string * value_;  // +0x20

	static CMsgHttpRequest_QueryParam * default_instance_;
	CMsgHttpRequest_QueryParam();
	virtual ~CMsgHttpRequest_QueryParam();
	CMsgHttpRequest_QueryParam(const CMsgHttpRequest_QueryParam &);
	CMsgHttpRequest_QueryParam & operator=(const CMsgHttpRequest_QueryParam &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgHttpRequest_QueryParam & default_instance();
	void Swap(CMsgHttpRequest_QueryParam *);
	virtual CMsgHttpRequest_QueryParam * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgHttpRequest_QueryParam &);
	void MergeFrom(const CMsgHttpRequest_QueryParam &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	void set_value(const void *, size_t);
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:744
class CMsgHttpRequest : public Message {
public:

	static const int kRequestMethodFieldNumber = 1;
	static const int kHostnameFieldNumber = 2;
	static const int kUrlFieldNumber = 3;
	static const int kHeadersFieldNumber = 4;
	static const int kGetParamsFieldNumber = 5;
	static const int kPostParamsFieldNumber = 6;
	static const int kBodyFieldNumber = 7;
	static const int kAbsoluteTimeoutFieldNumber = 8;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * hostname_;  // +0x18
	string * url_;  // +0x20
	uint32 request_method_;  // +0x40
	uint32 absolute_timeout_;  // +0x44
	string * body_;  // +0x78

	static CMsgHttpRequest * default_instance_;
	CMsgHttpRequest();
	virtual ~CMsgHttpRequest();
	CMsgHttpRequest(const CMsgHttpRequest &);
	CMsgHttpRequest & operator=(const CMsgHttpRequest &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgHttpRequest & default_instance();
	void Swap(CMsgHttpRequest *);
	virtual CMsgHttpRequest * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgHttpRequest &);
	void MergeFrom(const CMsgHttpRequest &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_request_method();
	void clear_request_method();
	uint32 request_method();
	void set_request_method(uint32);
	bool has_hostname();
	void clear_hostname();
	const string & hostname();
	void set_hostname(const string &);
	void set_hostname(const char *);
	void set_hostname(const char *, size_t);
	string * mutable_hostname();
	string * release_hostname();
	void set_allocated_hostname(string *);
	bool has_url();
	void clear_url();
	const string & url();
	void set_url(const string &);
	void set_url(const char *);
	void set_url(const char *, size_t);
	string * mutable_url();
	string * release_url();
	void set_allocated_url(string *);
	int headers_size();
	void clear_headers();
	const CMsgHttpRequest_RequestHeader & headers(int);
	CMsgHttpRequest_RequestHeader * mutable_headers(int);
	CMsgHttpRequest_RequestHeader * add_headers();
	const RepeatedPtrField<CMsgHttpRequest_RequestHeader> & headers();
	RepeatedPtrField<CMsgHttpRequest_RequestHeader> * mutable_headers();
	int get_params_size();
	void clear_get_params();
	const CMsgHttpRequest_QueryParam & get_params(int);
	CMsgHttpRequest_QueryParam * mutable_get_params(int);
	CMsgHttpRequest_QueryParam * add_get_params();
	const RepeatedPtrField<CMsgHttpRequest_QueryParam> & get_params();
	RepeatedPtrField<CMsgHttpRequest_QueryParam> * mutable_get_params();
	int post_params_size();
	void clear_post_params();
	const CMsgHttpRequest_QueryParam & post_params(int);
	CMsgHttpRequest_QueryParam * mutable_post_params(int);
	CMsgHttpRequest_QueryParam * add_post_params();
	const RepeatedPtrField<CMsgHttpRequest_QueryParam> & post_params();
	RepeatedPtrField<CMsgHttpRequest_QueryParam> * mutable_post_params();
	bool has_body();
	void clear_body();
	const string & body();
	void set_body(const string &);
	void set_body(const char *);
	void set_body(const void *, size_t);
	string * mutable_body();
	string * release_body();
	void set_allocated_body(string *);
	bool has_absolute_timeout();
	void clear_absolute_timeout();
	uint32 absolute_timeout();
	void set_absolute_timeout(uint32);
	void set_has_request_method();
	void clear_has_request_method();
	void set_has_hostname();
	void clear_has_hostname();
	void set_has_url();
	void clear_has_url();
	void set_has_body();
	void clear_has_body();
	void set_has_absolute_timeout();
	void clear_has_absolute_timeout();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:920
class CMsgWebAPIRequest : public Message {
public:

	static const int kUNUSEDJobNameFieldNumber = 1;
	static const int kInterfaceNameFieldNumber = 2;
	static const int kMethodNameFieldNumber = 3;
	static const int kVersionFieldNumber = 4;
	static const int kApiKeyFieldNumber = 5;
	static const int kRequestFieldNumber = 6;
	static const int kRoutingAppIdFieldNumber = 7;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * unused_job_name_;  // +0x18
	string * interface_name_;  // +0x20
	string * method_name_;  // +0x28
	uint32 version_;  // +0x38
	uint32 routing_app_id_;  // +0x3c

	static CMsgWebAPIRequest * default_instance_;
	CMsgWebAPIRequest();
	virtual ~CMsgWebAPIRequest();
	CMsgWebAPIRequest(const CMsgWebAPIRequest &);
	CMsgWebAPIRequest & operator=(const CMsgWebAPIRequest &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgWebAPIRequest & default_instance();
	void Swap(CMsgWebAPIRequest *);
	virtual CMsgWebAPIRequest * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgWebAPIRequest &);
	void MergeFrom(const CMsgWebAPIRequest &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_unused_job_name();
	void clear_unused_job_name();
	const string & unused_job_name();
	void set_unused_job_name(const string &);
	void set_unused_job_name(const char *);
	void set_unused_job_name(const char *, size_t);
	string * mutable_unused_job_name();
	string * release_unused_job_name();
	void set_allocated_unused_job_name(string *);
	bool has_interface_name();
	void clear_interface_name();
	const string & interface_name();
	void set_interface_name(const string &);
	void set_interface_name(const char *);
	void set_interface_name(const char *, size_t);
	string * mutable_interface_name();
	string * release_interface_name();
	void set_allocated_interface_name(string *);
	bool has_method_name();
	void clear_method_name();
	const string & method_name();
	void set_method_name(const string &);
	void set_method_name(const char *);
	void set_method_name(const char *, size_t);
	string * mutable_method_name();
	string * release_method_name();
	void set_allocated_method_name(string *);
	bool has_version();
	void clear_version();
	uint32 version();
	void set_version(uint32);
	bool has_api_key();
	void clear_api_key();
	const CMsgWebAPIKey & api_key();
	CMsgWebAPIKey * mutable_api_key();
	CMsgWebAPIKey * release_api_key();
	void set_allocated_api_key(CMsgWebAPIKey *);
	bool has_request();
	void clear_request();
	const CMsgHttpRequest & request();
	CMsgHttpRequest * mutable_request();
	CMsgHttpRequest * release_request();
	void set_allocated_request(CMsgHttpRequest *);
	bool has_routing_app_id();
	void clear_routing_app_id();
	uint32 routing_app_id();
	void set_routing_app_id(uint32);
	void set_has_unused_job_name();
	void clear_has_unused_job_name();
	void set_has_interface_name();
	void clear_has_interface_name();
	void set_has_method_name();
	void clear_has_method_name();
	void set_has_version();
	void clear_has_version();
	void set_has_api_key();
	void clear_has_api_key();
	void set_has_request();
	void clear_has_request();
	void set_has_routing_app_id();
	void clear_has_routing_app_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:1078
class CMsgHttpResponse_ResponseHeader : public Message {
public:

	static const int kNameFieldNumber = 1;
	static const int kValueFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * name_;  // +0x18
	string * value_;  // +0x20

	static CMsgHttpResponse_ResponseHeader * default_instance_;
	CMsgHttpResponse_ResponseHeader();
	virtual ~CMsgHttpResponse_ResponseHeader();
	CMsgHttpResponse_ResponseHeader(const CMsgHttpResponse_ResponseHeader &);
	CMsgHttpResponse_ResponseHeader & operator=(const CMsgHttpResponse_ResponseHeader &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgHttpResponse_ResponseHeader & default_instance();
	void Swap(CMsgHttpResponse_ResponseHeader *);
	virtual CMsgHttpResponse_ResponseHeader * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgHttpResponse_ResponseHeader &);
	void MergeFrom(const CMsgHttpResponse_ResponseHeader &);
	virtual void Clear();
	virtual bool IsInitialized();
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:1177
class CMsgHttpResponse : public Message {
public:

	static const int kStatusCodeFieldNumber = 1;
	static const int kHeadersFieldNumber = 2;
	static const int kBodyFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * body_;  // +0x30
	uint32 status_code_;  // +0x38

	static CMsgHttpResponse * default_instance_;
	CMsgHttpResponse();
	virtual ~CMsgHttpResponse();
	CMsgHttpResponse(const CMsgHttpResponse &);
	CMsgHttpResponse & operator=(const CMsgHttpResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgHttpResponse & default_instance();
	void Swap(CMsgHttpResponse *);
	virtual CMsgHttpResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgHttpResponse &);
	void MergeFrom(const CMsgHttpResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_status_code();
	void clear_status_code();
	uint32 status_code();
	void set_status_code(uint32);
	int headers_size();
	void clear_headers();
	const CMsgHttpResponse_ResponseHeader & headers(int);
	CMsgHttpResponse_ResponseHeader * mutable_headers(int);
	CMsgHttpResponse_ResponseHeader * add_headers();
	const RepeatedPtrField<CMsgHttpResponse_ResponseHeader> & headers();
	RepeatedPtrField<CMsgHttpResponse_ResponseHeader> * mutable_headers();
	bool has_body();
	void clear_body();
	const string & body();
	void set_body(const string &);
	void set_body(const char *);
	void set_body(const void *, size_t);
	string * mutable_body();
	string * release_body();
	void set_allocated_body(string *);
	void set_has_status_code();
	void clear_has_status_code();
	void set_has_body();
	void clear_has_body();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:1286
class CMsgAMFindAccounts : public Message {
public:

	static const int kSearchTypeFieldNumber = 1;
	static const int kSearchStringFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * search_string_;  // +0x18
	uint32 search_type_;  // +0x20

	static CMsgAMFindAccounts * default_instance_;
	CMsgAMFindAccounts();
	virtual ~CMsgAMFindAccounts();
	CMsgAMFindAccounts(const CMsgAMFindAccounts &);
	CMsgAMFindAccounts & operator=(const CMsgAMFindAccounts &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgAMFindAccounts & default_instance();
	void Swap(CMsgAMFindAccounts *);
	virtual CMsgAMFindAccounts * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgAMFindAccounts &);
	void MergeFrom(const CMsgAMFindAccounts &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_search_type();
	void clear_search_type();
	uint32 search_type();
	void set_search_type(uint32);
	bool has_search_string();
	void clear_search_string();
	const string & search_string();
	void set_search_string(const string &);
	void set_search_string(const char *);
	void set_search_string(const char *, size_t);
	string * mutable_search_string();
	string * release_search_string();
	void set_allocated_search_string(string *);
	void set_has_search_type();
	void clear_has_search_type();
	void set_has_search_string();
	void clear_has_search_string();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:1380
class CMsgAMFindAccountsResponse : public Message {
public:

	static const int kSteamIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgAMFindAccountsResponse * default_instance_;
	CMsgAMFindAccountsResponse();
	virtual ~CMsgAMFindAccountsResponse();
	CMsgAMFindAccountsResponse(const CMsgAMFindAccountsResponse &);
	CMsgAMFindAccountsResponse & operator=(const CMsgAMFindAccountsResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgAMFindAccountsResponse & default_instance();
	void Swap(CMsgAMFindAccountsResponse *);
	virtual CMsgAMFindAccountsResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgAMFindAccountsResponse &);
	void MergeFrom(const CMsgAMFindAccountsResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int steam_id_size();
	void clear_steam_id();
	uint64 steam_id(int);
	void set_steam_id(int, uint64);
	void add_steam_id(uint64);
	const RepeatedField<long unsigned int> & steam_id();
	RepeatedField<long unsigned int> * mutable_steam_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:1462
class CMsgNotifyWatchdog : public Message {
public:

	static const int kSourceFieldNumber = 1;
	static const int kAlertTypeFieldNumber = 2;
	static const int kCriticalFieldNumber = 4;
	static const int kTimeFieldNumber = 5;
	static const int kAppidFieldNumber = 6;
	static const int kTextFieldNumber = 7;
	static const int kRecipientFieldNumber = 12;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 source_;  // +0x18
	uint32 alert_type_;  // +0x1c
	bool critical_;  // +0x20

	uint32 time_;  // +0x24
	string * text_;  // +0x28
	string * recipient_;  // +0x30
	uint32 appid_;  // +0x38

	static CMsgNotifyWatchdog * default_instance_;
	CMsgNotifyWatchdog();
	virtual ~CMsgNotifyWatchdog();
	CMsgNotifyWatchdog(const CMsgNotifyWatchdog &);
	CMsgNotifyWatchdog & operator=(const CMsgNotifyWatchdog &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgNotifyWatchdog & default_instance();
	void Swap(CMsgNotifyWatchdog *);
	virtual CMsgNotifyWatchdog * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgNotifyWatchdog &);
	void MergeFrom(const CMsgNotifyWatchdog &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_source();
	void clear_source();
	uint32 source();
	void set_source(uint32);
	bool has_alert_type();
	void clear_alert_type();
	uint32 alert_type();
	void set_alert_type(uint32);
	bool has_critical();
	void clear_critical();
	bool critical();
	void set_critical(bool);
	bool has_time();
	void clear_time();
	uint32 time();
	void set_time(uint32);
	bool has_appid();
	void clear_appid();
	uint32 appid();
	void set_appid(uint32);
	bool has_text();
	void clear_text();
	const string & text();
	void set_text(const string &);
	void set_text(const char *);
	void set_text(const char *, size_t);
	string * mutable_text();
	string * release_text();
	void set_allocated_text(string *);
	bool has_recipient();
	void clear_recipient();
	const string & recipient();
	void set_recipient(const string &);
	void set_recipient(const char *);
	void set_recipient(const char *, size_t);
	string * mutable_recipient();
	string * release_recipient();
	void set_allocated_recipient(string *);
	void set_has_source();
	void clear_has_source();
	void set_has_alert_type();
	void clear_has_alert_type();
	void set_has_critical();
	void clear_has_critical();
	void set_has_time();
	void clear_has_time();
	void set_has_appid();
	void clear_has_appid();
	void set_has_text();
	void clear_has_text();
	void set_has_recipient();
	void clear_has_recipient();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:1611
class CMsgAMGetLicenses : public Message {
public:

	static const int kSteamidFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 steamid_;  // +0x18

	static CMsgAMGetLicenses * default_instance_;
	CMsgAMGetLicenses();
	virtual ~CMsgAMGetLicenses();
	CMsgAMGetLicenses(const CMsgAMGetLicenses &);
	CMsgAMGetLicenses & operator=(const CMsgAMGetLicenses &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgAMGetLicenses & default_instance();
	void Swap(CMsgAMGetLicenses *);
	virtual CMsgAMGetLicenses * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgAMGetLicenses &);
	void MergeFrom(const CMsgAMGetLicenses &);
	virtual void Clear();
	virtual bool IsInitialized();
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:1690
class CMsgPackageLicense : public Message {
public:

	static const int kPackageIdFieldNumber = 1;
	static const int kTimeCreatedFieldNumber = 2;
	static const int kOwnerIdFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 package_id_;  // +0x18
	uint32 time_created_;  // +0x1c
	uint32 owner_id_;  // +0x20

	static CMsgPackageLicense * default_instance_;
	CMsgPackageLicense();
	virtual ~CMsgPackageLicense();
	CMsgPackageLicense(const CMsgPackageLicense &);
	CMsgPackageLicense & operator=(const CMsgPackageLicense &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgPackageLicense & default_instance();
	void Swap(CMsgPackageLicense *);
	virtual CMsgPackageLicense * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgPackageLicense &);
	void MergeFrom(const CMsgPackageLicense &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_package_id();
	void clear_package_id();
	uint32 package_id();
	void set_package_id(uint32);
	bool has_time_created();
	void clear_time_created();
	uint32 time_created();
	void set_time_created(uint32);
	bool has_owner_id();
	void clear_owner_id();
	uint32 owner_id();
	void set_owner_id(uint32);
	void set_has_package_id();
	void clear_has_package_id();
	void set_has_time_created();
	void clear_has_time_created();
	void set_has_owner_id();
	void clear_has_owner_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:1789
class CMsgAMGetLicensesResponse : public Message {
public:

	static const int kLicenseFieldNumber = 1;
	static const int kResultFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 result_;  // +0x30

	static CMsgAMGetLicensesResponse * default_instance_;
	CMsgAMGetLicensesResponse();
	virtual ~CMsgAMGetLicensesResponse();
	CMsgAMGetLicensesResponse(const CMsgAMGetLicensesResponse &);
	CMsgAMGetLicensesResponse & operator=(const CMsgAMGetLicensesResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgAMGetLicensesResponse & default_instance();
	void Swap(CMsgAMGetLicensesResponse *);
	virtual CMsgAMGetLicensesResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgAMGetLicensesResponse &);
	void MergeFrom(const CMsgAMGetLicensesResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int license_size();
	void clear_license();
	const CMsgPackageLicense & license(int);
	CMsgPackageLicense * mutable_license(int);
	CMsgPackageLicense * add_license();
	const RepeatedPtrField<CMsgPackageLicense> & license();
	RepeatedPtrField<CMsgPackageLicense> * mutable_license();
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
	// sizeof = 56
};

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:1881
class CMsgAMGetUserGameStats : public Message {
public:

	static const int kSteamIdFieldNumber = 1;
	static const int kGameIdFieldNumber = 2;
	static const int kStatsFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 steam_id_;  // +0x18
	uint64 game_id_;  // +0x20

	static CMsgAMGetUserGameStats * default_instance_;
	CMsgAMGetUserGameStats();
	virtual ~CMsgAMGetUserGameStats();
	CMsgAMGetUserGameStats(const CMsgAMGetUserGameStats &);
	CMsgAMGetUserGameStats & operator=(const CMsgAMGetUserGameStats &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgAMGetUserGameStats & default_instance();
	void Swap(CMsgAMGetUserGameStats *);
	virtual CMsgAMGetUserGameStats * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgAMGetUserGameStats &);
	void MergeFrom(const CMsgAMGetUserGameStats &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_game_id();
	void clear_game_id();
	uint64 game_id();
	void set_game_id(uint64);
	int stats_size();
	void clear_stats();
	uint32 stats(int);
	void set_stats(int, uint32);
	void add_stats(uint32);
	const RepeatedField<unsigned int> & stats();
	RepeatedField<unsigned int> * mutable_stats();
	void set_has_steam_id();
	void clear_has_steam_id();
	void set_has_game_id();
	void clear_has_game_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:1983
class CMsgAMGetUserGameStatsResponse_Stats : public Message {
public:

	static const int kStatIdFieldNumber = 1;
	static const int kStatValueFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 stat_id_;  // +0x18
	uint32 stat_value_;  // +0x1c

	static CMsgAMGetUserGameStatsResponse_Stats * default_instance_;
	CMsgAMGetUserGameStatsResponse_Stats();
	virtual ~CMsgAMGetUserGameStatsResponse_Stats();
	CMsgAMGetUserGameStatsResponse_Stats(const CMsgAMGetUserGameStatsResponse_Stats &);
	CMsgAMGetUserGameStatsResponse_Stats & operator=(const CMsgAMGetUserGameStatsResponse_Stats &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgAMGetUserGameStatsResponse_Stats & default_instance();
	void Swap(CMsgAMGetUserGameStatsResponse_Stats *);
	virtual CMsgAMGetUserGameStatsResponse_Stats * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgAMGetUserGameStatsResponse_Stats &);
	void MergeFrom(const CMsgAMGetUserGameStatsResponse_Stats &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_stat_id();
	void clear_stat_id();
	uint32 stat_id();
	void set_stat_id(uint32);
	bool has_stat_value();
	void clear_stat_value();
	uint32 stat_value();
	void set_stat_value(uint32);
	void set_has_stat_id();
	void clear_has_stat_id();
	void set_has_stat_value();
	void clear_has_stat_value();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:2072
class CMsgAMGetUserGameStatsResponse_Achievement_Blocks : public Message {
public:

	static const int kAchievementIdFieldNumber = 1;
	static const int kAchievementBitIdFieldNumber = 2;
	static const int kUnlockTimeFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 achievement_id_;  // +0x18
	uint32 achievement_bit_id_;  // +0x1c
	uint32 unlock_time_;  // +0x20

	static CMsgAMGetUserGameStatsResponse_Achievement_Blocks * default_instance_;
	CMsgAMGetUserGameStatsResponse_Achievement_Blocks();
	virtual ~CMsgAMGetUserGameStatsResponse_Achievement_Blocks();
	CMsgAMGetUserGameStatsResponse_Achievement_Blocks(const CMsgAMGetUserGameStatsResponse_Achievement_Blocks &);
	CMsgAMGetUserGameStatsResponse_Achievement_Blocks & operator=(const CMsgAMGetUserGameStatsResponse_Achievement_Blocks &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgAMGetUserGameStatsResponse_Achievement_Blocks & default_instance();
	void Swap(CMsgAMGetUserGameStatsResponse_Achievement_Blocks *);
	virtual CMsgAMGetUserGameStatsResponse_Achievement_Blocks * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgAMGetUserGameStatsResponse_Achievement_Blocks &);
	void MergeFrom(const CMsgAMGetUserGameStatsResponse_Achievement_Blocks &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_achievement_id();
	void clear_achievement_id();
	uint32 achievement_id();
	void set_achievement_id(uint32);
	bool has_achievement_bit_id();
	void clear_achievement_bit_id();
	uint32 achievement_bit_id();
	void set_achievement_bit_id(uint32);
	bool has_unlock_time();
	void clear_unlock_time();
	uint32 unlock_time();
	void set_unlock_time(uint32);
	void set_has_achievement_id();
	void clear_has_achievement_id();
	void set_has_achievement_bit_id();
	void clear_has_achievement_bit_id();
	void set_has_unlock_time();
	void clear_has_unlock_time();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:2171
class CMsgAMGetUserGameStatsResponse : public Message {
public:

	static const int kSteamIdFieldNumber = 1;
	static const int kGameIdFieldNumber = 2;
	static const int kEresultFieldNumber = 3;
	static const int kStatsFieldNumber = 4;
	static const int kAchievementBlocksFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 steam_id_;  // +0x18
	uint64 game_id_;  // +0x20
	int32 eresult_;  // +0x58

	static CMsgAMGetUserGameStatsResponse * default_instance_;
	CMsgAMGetUserGameStatsResponse();
	virtual ~CMsgAMGetUserGameStatsResponse();
	CMsgAMGetUserGameStatsResponse(const CMsgAMGetUserGameStatsResponse &);
	CMsgAMGetUserGameStatsResponse & operator=(const CMsgAMGetUserGameStatsResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgAMGetUserGameStatsResponse & default_instance();
	void Swap(CMsgAMGetUserGameStatsResponse *);
	virtual CMsgAMGetUserGameStatsResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgAMGetUserGameStatsResponse &);
	void MergeFrom(const CMsgAMGetUserGameStatsResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_game_id();
	void clear_game_id();
	uint64 game_id();
	void set_game_id(uint64);
	bool has_eresult();
	void clear_eresult();
	int32 eresult();
	void set_eresult(int32);
	int stats_size();
	void clear_stats();
	const CMsgAMGetUserGameStatsResponse_Stats & stats(int);
	CMsgAMGetUserGameStatsResponse_Stats * mutable_stats(int);
	CMsgAMGetUserGameStatsResponse_Stats * add_stats();
	const RepeatedPtrField<CMsgAMGetUserGameStatsResponse_Stats> & stats();
	RepeatedPtrField<CMsgAMGetUserGameStatsResponse_Stats> * mutable_stats();
	int achievement_blocks_size();
	void clear_achievement_blocks();
	const CMsgAMGetUserGameStatsResponse_Achievement_Blocks & achievement_blocks(int);
	CMsgAMGetUserGameStatsResponse_Achievement_Blocks * mutable_achievement_blocks(int);
	CMsgAMGetUserGameStatsResponse_Achievement_Blocks * add_achievement_blocks();
	const RepeatedPtrField<CMsgAMGetUserGameStatsResponse_Achievement_Blocks> & achievement_blocks();
	RepeatedPtrField<CMsgAMGetUserGameStatsResponse_Achievement_Blocks> * mutable_achievement_blocks();
	void set_has_steam_id();
	void clear_has_steam_id();
	void set_has_game_id();
	void clear_has_game_id();
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
	// sizeof = 96
};

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:2299
class CMsgGCGetCommandList : public Message {
public:

	static const int kAppIdFieldNumber = 1;
	static const int kCommandPrefixFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * command_prefix_;  // +0x18
	uint32 app_id_;  // +0x20

	static CMsgGCGetCommandList * default_instance_;
	CMsgGCGetCommandList();
	virtual ~CMsgGCGetCommandList();
	CMsgGCGetCommandList(const CMsgGCGetCommandList &);
	CMsgGCGetCommandList & operator=(const CMsgGCGetCommandList &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCGetCommandList & default_instance();
	void Swap(CMsgGCGetCommandList *);
	virtual CMsgGCGetCommandList * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCGetCommandList &);
	void MergeFrom(const CMsgGCGetCommandList &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_app_id();
	void clear_app_id();
	uint32 app_id();
	void set_app_id(uint32);
	bool has_command_prefix();
	void clear_command_prefix();
	const string & command_prefix();
	void set_command_prefix(const string &);
	void set_command_prefix(const char *);
	void set_command_prefix(const char *, size_t);
	string * mutable_command_prefix();
	string * release_command_prefix();
	void set_allocated_command_prefix(string *);
	void set_has_app_id();
	void clear_has_app_id();
	void set_has_command_prefix();
	void clear_has_command_prefix();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:2393
class CMsgGCGetCommandListResponse : public Message {
public:

	static const int kCommandNameFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgGCGetCommandListResponse * default_instance_;
	CMsgGCGetCommandListResponse();
	virtual ~CMsgGCGetCommandListResponse();
	CMsgGCGetCommandListResponse(const CMsgGCGetCommandListResponse &);
	CMsgGCGetCommandListResponse & operator=(const CMsgGCGetCommandListResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCGetCommandListResponse & default_instance();
	void Swap(CMsgGCGetCommandListResponse *);
	virtual CMsgGCGetCommandListResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCGetCommandListResponse &);
	void MergeFrom(const CMsgGCGetCommandListResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int command_name_size();
	void clear_command_name();
	const string & command_name(int);
	string * mutable_command_name(int);
	void set_command_name(int, const string &);
	void set_command_name(int, const char *);
	void set_command_name(int, const char *, size_t);
	string * add_command_name();
	void add_command_name(const string &);
	void add_command_name(const char *);
	void add_command_name(const char *, size_t);
	const RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > & command_name();
	RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > * mutable_command_name();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:2479
class CGCMsgMemCachedGet : public Message {
public:

	static const int kKeysFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CGCMsgMemCachedGet * default_instance_;
	CGCMsgMemCachedGet();
	virtual ~CGCMsgMemCachedGet();
	CGCMsgMemCachedGet(const CGCMsgMemCachedGet &);
	CGCMsgMemCachedGet & operator=(const CGCMsgMemCachedGet &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CGCMsgMemCachedGet & default_instance();
	void Swap(CGCMsgMemCachedGet *);
	virtual CGCMsgMemCachedGet * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CGCMsgMemCachedGet &);
	void MergeFrom(const CGCMsgMemCachedGet &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int keys_size();
	void clear_keys();
	const string & keys(int);
	string * mutable_keys(int);
	void set_keys(int, const string &);
	void set_keys(int, const char *);
	void set_keys(int, const char *, size_t);
	string * add_keys();
	void add_keys(const string &);
	void add_keys(const char *);
	void add_keys(const char *, size_t);
	const RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > & keys();
	RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > * mutable_keys();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:2565
class CGCMsgMemCachedGetResponse_ValueTag : public Message {
public:

	static const int kFoundFieldNumber = 1;
	static const int kValueFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * value_;  // +0x18
	bool found_;  // +0x20

	static CGCMsgMemCachedGetResponse_ValueTag * default_instance_;
	CGCMsgMemCachedGetResponse_ValueTag();
	virtual ~CGCMsgMemCachedGetResponse_ValueTag();
	CGCMsgMemCachedGetResponse_ValueTag(const CGCMsgMemCachedGetResponse_ValueTag &);
	CGCMsgMemCachedGetResponse_ValueTag & operator=(const CGCMsgMemCachedGetResponse_ValueTag &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CGCMsgMemCachedGetResponse_ValueTag & default_instance();
	void Swap(CGCMsgMemCachedGetResponse_ValueTag *);
	virtual CGCMsgMemCachedGetResponse_ValueTag * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CGCMsgMemCachedGetResponse_ValueTag &);
	void MergeFrom(const CGCMsgMemCachedGetResponse_ValueTag &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_found();
	void clear_found();
	bool found();
	void set_found(bool);
	bool has_value();
	void clear_value();
	const string & value();
	void set_value(const string &);
	void set_value(const char *);
	void set_value(const void *, size_t);
	string * mutable_value();
	string * release_value();
	void set_allocated_value(string *);
	void set_has_found();
	void clear_has_found();
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:2659
class CGCMsgMemCachedGetResponse : public Message {
public:

	static const int kValuesFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CGCMsgMemCachedGetResponse * default_instance_;
	CGCMsgMemCachedGetResponse();
	virtual ~CGCMsgMemCachedGetResponse();
	CGCMsgMemCachedGetResponse(const CGCMsgMemCachedGetResponse &);
	CGCMsgMemCachedGetResponse & operator=(const CGCMsgMemCachedGetResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CGCMsgMemCachedGetResponse & default_instance();
	void Swap(CGCMsgMemCachedGetResponse *);
	virtual CGCMsgMemCachedGetResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CGCMsgMemCachedGetResponse &);
	void MergeFrom(const CGCMsgMemCachedGetResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int values_size();
	void clear_values();
	const CGCMsgMemCachedGetResponse_ValueTag & values(int);
	CGCMsgMemCachedGetResponse_ValueTag * mutable_values(int);
	CGCMsgMemCachedGetResponse_ValueTag * add_values();
	const RepeatedPtrField<CGCMsgMemCachedGetResponse_ValueTag> & values();
	RepeatedPtrField<CGCMsgMemCachedGetResponse_ValueTag> * mutable_values();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:2743
class CGCMsgMemCachedSet_KeyPair : public Message {
public:

	static const int kNameFieldNumber = 1;
	static const int kValueFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * name_;  // +0x18
	string * value_;  // +0x20

	static CGCMsgMemCachedSet_KeyPair * default_instance_;
	CGCMsgMemCachedSet_KeyPair();
	virtual ~CGCMsgMemCachedSet_KeyPair();
	CGCMsgMemCachedSet_KeyPair(const CGCMsgMemCachedSet_KeyPair &);
	CGCMsgMemCachedSet_KeyPair & operator=(const CGCMsgMemCachedSet_KeyPair &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CGCMsgMemCachedSet_KeyPair & default_instance();
	void Swap(CGCMsgMemCachedSet_KeyPair *);
	virtual CGCMsgMemCachedSet_KeyPair * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CGCMsgMemCachedSet_KeyPair &);
	void MergeFrom(const CGCMsgMemCachedSet_KeyPair &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	void set_value(const void *, size_t);
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:2842
class CGCMsgMemCachedSet : public Message {
public:

	static const int kKeysFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CGCMsgMemCachedSet * default_instance_;
	CGCMsgMemCachedSet();
	virtual ~CGCMsgMemCachedSet();
	CGCMsgMemCachedSet(const CGCMsgMemCachedSet &);
	CGCMsgMemCachedSet & operator=(const CGCMsgMemCachedSet &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CGCMsgMemCachedSet & default_instance();
	void Swap(CGCMsgMemCachedSet *);
	virtual CGCMsgMemCachedSet * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CGCMsgMemCachedSet &);
	void MergeFrom(const CGCMsgMemCachedSet &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int keys_size();
	void clear_keys();
	const CGCMsgMemCachedSet_KeyPair & keys(int);
	CGCMsgMemCachedSet_KeyPair * mutable_keys(int);
	CGCMsgMemCachedSet_KeyPair * add_keys();
	const RepeatedPtrField<CGCMsgMemCachedSet_KeyPair> & keys();
	RepeatedPtrField<CGCMsgMemCachedSet_KeyPair> * mutable_keys();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:2926
class CGCMsgMemCachedDelete : public Message {
public:

	static const int kKeysFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CGCMsgMemCachedDelete * default_instance_;
	CGCMsgMemCachedDelete();
	virtual ~CGCMsgMemCachedDelete();
	CGCMsgMemCachedDelete(const CGCMsgMemCachedDelete &);
	CGCMsgMemCachedDelete & operator=(const CGCMsgMemCachedDelete &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CGCMsgMemCachedDelete & default_instance();
	void Swap(CGCMsgMemCachedDelete *);
	virtual CGCMsgMemCachedDelete * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CGCMsgMemCachedDelete &);
	void MergeFrom(const CGCMsgMemCachedDelete &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int keys_size();
	void clear_keys();
	const string & keys(int);
	string * mutable_keys(int);
	void set_keys(int, const string &);
	void set_keys(int, const char *);
	void set_keys(int, const char *, size_t);
	string * add_keys();
	void add_keys(const string &);
	void add_keys(const char *);
	void add_keys(const char *, size_t);
	const RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > & keys();
	RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > * mutable_keys();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:3012
class CGCMsgMemCachedStats : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CGCMsgMemCachedStats * default_instance_;
	CGCMsgMemCachedStats();
	virtual ~CGCMsgMemCachedStats();
	CGCMsgMemCachedStats(const CGCMsgMemCachedStats &);
	CGCMsgMemCachedStats & operator=(const CGCMsgMemCachedStats &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CGCMsgMemCachedStats & default_instance();
	void Swap(CGCMsgMemCachedStats *);
	virtual CGCMsgMemCachedStats * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CGCMsgMemCachedStats &);
	void MergeFrom(const CGCMsgMemCachedStats &);
	virtual void Clear();
	virtual bool IsInitialized();
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:3081
class CGCMsgMemCachedStatsResponse : public Message {
public:

	static const int kCurrConnectionsFieldNumber = 1;
	static const int kCmdGetFieldNumber = 2;
	static const int kCmdSetFieldNumber = 3;
	static const int kCmdFlushFieldNumber = 4;
	static const int kGetHitsFieldNumber = 5;
	static const int kGetMissesFieldNumber = 6;
	static const int kDeleteHitsFieldNumber = 7;
	static const int kDeleteMissesFieldNumber = 8;
	static const int kBytesReadFieldNumber = 9;
	static const int kBytesWrittenFieldNumber = 10;
	static const int kLimitMaxbytesFieldNumber = 11;
	static const int kCurrItemsFieldNumber = 12;
	static const int kEvictionsFieldNumber = 13;
	static const int kBytesFieldNumber = 14;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 curr_connections_;  // +0x18
	uint64 cmd_get_;  // +0x20
	uint64 cmd_set_;  // +0x28
	uint64 cmd_flush_;  // +0x30
	uint64 get_hits_;  // +0x38
	uint64 get_misses_;  // +0x40
	uint64 delete_hits_;  // +0x48
	uint64 delete_misses_;  // +0x50
	uint64 bytes_read_;  // +0x58
	uint64 bytes_written_;  // +0x60
	uint64 limit_maxbytes_;  // +0x68
	uint64 curr_items_;  // +0x70
	uint64 evictions_;  // +0x78
	uint64 bytes_;  // +0x80

	static CGCMsgMemCachedStatsResponse * default_instance_;
	CGCMsgMemCachedStatsResponse();
	virtual ~CGCMsgMemCachedStatsResponse();
	CGCMsgMemCachedStatsResponse(const CGCMsgMemCachedStatsResponse &);
	CGCMsgMemCachedStatsResponse & operator=(const CGCMsgMemCachedStatsResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CGCMsgMemCachedStatsResponse & default_instance();
	void Swap(CGCMsgMemCachedStatsResponse *);
	virtual CGCMsgMemCachedStatsResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CGCMsgMemCachedStatsResponse &);
	void MergeFrom(const CGCMsgMemCachedStatsResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_curr_connections();
	void clear_curr_connections();
	uint64 curr_connections();
	void set_curr_connections(uint64);
	bool has_cmd_get();
	void clear_cmd_get();
	uint64 cmd_get();
	void set_cmd_get(uint64);
	bool has_cmd_set();
	void clear_cmd_set();
	uint64 cmd_set();
	void set_cmd_set(uint64);
	bool has_cmd_flush();
	void clear_cmd_flush();
	uint64 cmd_flush();
	void set_cmd_flush(uint64);
	bool has_get_hits();
	void clear_get_hits();
	uint64 get_hits();
	void set_get_hits(uint64);
	bool has_get_misses();
	void clear_get_misses();
	uint64 get_misses();
	void set_get_misses(uint64);
	bool has_delete_hits();
	void clear_delete_hits();
	uint64 delete_hits();
	void set_delete_hits(uint64);
	bool has_delete_misses();
	void clear_delete_misses();
	uint64 delete_misses();
	void set_delete_misses(uint64);
	bool has_bytes_read();
	void clear_bytes_read();
	uint64 bytes_read();
	void set_bytes_read(uint64);
	bool has_bytes_written();
	void clear_bytes_written();
	uint64 bytes_written();
	void set_bytes_written(uint64);
	bool has_limit_maxbytes();
	void clear_limit_maxbytes();
	uint64 limit_maxbytes();
	void set_limit_maxbytes(uint64);
	bool has_curr_items();
	void clear_curr_items();
	uint64 curr_items();
	void set_curr_items(uint64);
	bool has_evictions();
	void clear_evictions();
	uint64 evictions();
	void set_evictions(uint64);
	bool has_bytes();
	void clear_bytes();
	uint64 bytes();
	void set_bytes(uint64);
	void set_has_curr_connections();
	void clear_has_curr_connections();
	void set_has_cmd_get();
	void clear_has_cmd_get();
	void set_has_cmd_set();
	void clear_has_cmd_set();
	void set_has_cmd_flush();
	void clear_has_cmd_flush();
	void set_has_get_hits();
	void clear_has_get_hits();
	void set_has_get_misses();
	void clear_has_get_misses();
	void set_has_delete_hits();
	void clear_has_delete_hits();
	void set_has_delete_misses();
	void clear_has_delete_misses();
	void set_has_bytes_read();
	void clear_has_bytes_read();
	void set_has_bytes_written();
	void clear_has_bytes_written();
	void set_has_limit_maxbytes();
	void clear_has_limit_maxbytes();
	void set_has_curr_items();
	void clear_has_curr_items();
	void set_has_evictions();
	void clear_has_evictions();
	void set_has_bytes();
	void clear_has_bytes();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:3290
class CGCMsgSQLStats : public Message {
public:

	static const int kSchemaCatalogFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 schema_catalog_;  // +0x18

	static CGCMsgSQLStats * default_instance_;
	CGCMsgSQLStats();
	virtual ~CGCMsgSQLStats();
	CGCMsgSQLStats(const CGCMsgSQLStats &);
	CGCMsgSQLStats & operator=(const CGCMsgSQLStats &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CGCMsgSQLStats & default_instance();
	void Swap(CGCMsgSQLStats *);
	virtual CGCMsgSQLStats * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CGCMsgSQLStats &);
	void MergeFrom(const CGCMsgSQLStats &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_schema_catalog();
	void clear_schema_catalog();
	uint32 schema_catalog();
	void set_schema_catalog(uint32);
	void set_has_schema_catalog();
	void clear_has_schema_catalog();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:3369
class CGCMsgSQLStatsResponse : public Message {
public:

	static const int kThreadsFieldNumber = 1;
	static const int kThreadsConnectedFieldNumber = 2;
	static const int kThreadsActiveFieldNumber = 3;
	static const int kOperationsSubmittedFieldNumber = 4;
	static const int kPreparedStatementsExecutedFieldNumber = 5;
	static const int kNonPreparedStatementsExecutedFieldNumber = 6;
	static const int kDeadlockRetriesFieldNumber = 7;
	static const int kOperationsTimedOutInQueueFieldNumber = 8;
	static const int kErrorsFieldNumber = 9;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 threads_;  // +0x18
	uint32 threads_connected_;  // +0x1c
	uint32 threads_active_;  // +0x20
	uint32 operations_submitted_;  // +0x24
	uint32 prepared_statements_executed_;  // +0x28
	uint32 non_prepared_statements_executed_;  // +0x2c
	uint32 deadlock_retries_;  // +0x30
	uint32 operations_timed_out_in_queue_;  // +0x34
	uint32 errors_;  // +0x38

	static CGCMsgSQLStatsResponse * default_instance_;
	CGCMsgSQLStatsResponse();
	virtual ~CGCMsgSQLStatsResponse();
	CGCMsgSQLStatsResponse(const CGCMsgSQLStatsResponse &);
	CGCMsgSQLStatsResponse & operator=(const CGCMsgSQLStatsResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CGCMsgSQLStatsResponse & default_instance();
	void Swap(CGCMsgSQLStatsResponse *);
	virtual CGCMsgSQLStatsResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CGCMsgSQLStatsResponse &);
	void MergeFrom(const CGCMsgSQLStatsResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_threads();
	void clear_threads();
	uint32 threads();
	void set_threads(uint32);
	bool has_threads_connected();
	void clear_threads_connected();
	uint32 threads_connected();
	void set_threads_connected(uint32);
	bool has_threads_active();
	void clear_threads_active();
	uint32 threads_active();
	void set_threads_active(uint32);
	bool has_operations_submitted();
	void clear_operations_submitted();
	uint32 operations_submitted();
	void set_operations_submitted(uint32);
	bool has_prepared_statements_executed();
	void clear_prepared_statements_executed();
	uint32 prepared_statements_executed();
	void set_prepared_statements_executed(uint32);
	bool has_non_prepared_statements_executed();
	void clear_non_prepared_statements_executed();
	uint32 non_prepared_statements_executed();
	void set_non_prepared_statements_executed(uint32);
	bool has_deadlock_retries();
	void clear_deadlock_retries();
	uint32 deadlock_retries();
	void set_deadlock_retries(uint32);
	bool has_operations_timed_out_in_queue();
	void clear_operations_timed_out_in_queue();
	uint32 operations_timed_out_in_queue();
	void set_operations_timed_out_in_queue(uint32);
	bool has_errors();
	void clear_errors();
	uint32 errors();
	void set_errors(uint32);
	void set_has_threads();
	void clear_has_threads();
	void set_has_threads_connected();
	void clear_has_threads_connected();
	void set_has_threads_active();
	void clear_has_threads_active();
	void set_has_operations_submitted();
	void clear_has_operations_submitted();
	void set_has_prepared_statements_executed();
	void clear_has_prepared_statements_executed();
	void set_has_non_prepared_statements_executed();
	void clear_has_non_prepared_statements_executed();
	void set_has_deadlock_retries();
	void clear_has_deadlock_retries();
	void set_has_operations_timed_out_in_queue();
	void clear_has_operations_timed_out_in_queue();
	void set_has_errors();
	void clear_has_errors();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:3528
class CMsgAMAddFreeLicense : public Message {
public:

	static const int kSteamidFieldNumber = 1;
	static const int kIpPublicFieldNumber = 2;
	static const int kPackageidFieldNumber = 3;
	static const int kStoreCountryCodeFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 steamid_;  // +0x18
	uint32 ip_public_;  // +0x20
	uint32 packageid_;  // +0x24
	string * store_country_code_;  // +0x28

	static CMsgAMAddFreeLicense * default_instance_;
	CMsgAMAddFreeLicense();
	virtual ~CMsgAMAddFreeLicense();
	CMsgAMAddFreeLicense(const CMsgAMAddFreeLicense &);
	CMsgAMAddFreeLicense & operator=(const CMsgAMAddFreeLicense &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgAMAddFreeLicense & default_instance();
	void Swap(CMsgAMAddFreeLicense *);
	virtual CMsgAMAddFreeLicense * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgAMAddFreeLicense &);
	void MergeFrom(const CMsgAMAddFreeLicense &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_ip_public();
	void clear_ip_public();
	uint32 ip_public();
	void set_ip_public(uint32);
	bool has_packageid();
	void clear_packageid();
	uint32 packageid();
	void set_packageid(uint32);
	bool has_store_country_code();
	void clear_store_country_code();
	const string & store_country_code();
	void set_store_country_code(const string &);
	void set_store_country_code(const char *);
	void set_store_country_code(const char *, size_t);
	string * mutable_store_country_code();
	string * release_store_country_code();
	void set_allocated_store_country_code(string *);
	void set_has_steamid();
	void clear_has_steamid();
	void set_has_ip_public();
	void clear_has_ip_public();
	void set_has_packageid();
	void clear_has_packageid();
	void set_has_store_country_code();
	void clear_has_store_country_code();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:3642
class CMsgAMAddFreeLicenseResponse : public Message {
public:

	static const int kEresultFieldNumber = 1;
	static const int kPurchaseResultDetailFieldNumber = 2;
	static const int kTransidFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 eresult_;  // +0x18
	int32 purchase_result_detail_;  // +0x1c
	uint64 transid_;  // +0x20

	static CMsgAMAddFreeLicenseResponse * default_instance_;
	CMsgAMAddFreeLicenseResponse();
	virtual ~CMsgAMAddFreeLicenseResponse();
	CMsgAMAddFreeLicenseResponse(const CMsgAMAddFreeLicenseResponse &);
	CMsgAMAddFreeLicenseResponse & operator=(const CMsgAMAddFreeLicenseResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgAMAddFreeLicenseResponse & default_instance();
	void Swap(CMsgAMAddFreeLicenseResponse *);
	virtual CMsgAMAddFreeLicenseResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgAMAddFreeLicenseResponse &);
	void MergeFrom(const CMsgAMAddFreeLicenseResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_purchase_result_detail();
	void clear_purchase_result_detail();
	int32 purchase_result_detail();
	void set_purchase_result_detail(int32);
	bool has_transid();
	void clear_transid();
	uint64 transid();
	void set_transid(uint64);
	void set_has_eresult();
	void clear_has_eresult();
	void set_has_purchase_result_detail();
	void clear_has_purchase_result_detail();
	void set_has_transid();
	void clear_has_transid();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:3741
class CGCMsgGetIPLocation : public Message {
public:

	static const int kIpsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CGCMsgGetIPLocation * default_instance_;
	CGCMsgGetIPLocation();
	virtual ~CGCMsgGetIPLocation();
	CGCMsgGetIPLocation(const CGCMsgGetIPLocation &);
	CGCMsgGetIPLocation & operator=(const CGCMsgGetIPLocation &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CGCMsgGetIPLocation & default_instance();
	void Swap(CGCMsgGetIPLocation *);
	virtual CGCMsgGetIPLocation * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CGCMsgGetIPLocation &);
	void MergeFrom(const CGCMsgGetIPLocation &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int ips_size();
	void clear_ips();
	uint32 ips(int);
	void set_ips(int, uint32);
	void add_ips(uint32);
	const RepeatedField<unsigned int> & ips();
	RepeatedField<unsigned int> * mutable_ips();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:3823
class CIPLocationInfo : public Message {
public:

	static const int kIpFieldNumber = 1;
	static const int kLatitudeFieldNumber = 2;
	static const int kLongitudeFieldNumber = 3;
	static const int kCountryFieldNumber = 4;
	static const int kStateFieldNumber = 5;
	static const int kCityFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 ip_;  // +0x18
	float latitude_;  // +0x1c
	string * country_;  // +0x20
	string * state_;  // +0x28
	string * city_;  // +0x30
	float longitude_;  // +0x38

	static CIPLocationInfo * default_instance_;
	CIPLocationInfo();
	virtual ~CIPLocationInfo();
	CIPLocationInfo(const CIPLocationInfo &);
	CIPLocationInfo & operator=(const CIPLocationInfo &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CIPLocationInfo & default_instance();
	void Swap(CIPLocationInfo *);
	virtual CIPLocationInfo * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CIPLocationInfo &);
	void MergeFrom(const CIPLocationInfo &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_state();
	void clear_state();
	const string & state();
	void set_state(const string &);
	void set_state(const char *);
	void set_state(const char *, size_t);
	string * mutable_state();
	string * release_state();
	void set_allocated_state(string *);
	bool has_city();
	void clear_city();
	const string & city();
	void set_city(const string &);
	void set_city(const char *);
	void set_city(const char *, size_t);
	string * mutable_city();
	string * release_city();
	void set_allocated_city(string *);
	void set_has_ip();
	void clear_has_ip();
	void set_has_latitude();
	void clear_has_latitude();
	void set_has_longitude();
	void clear_has_longitude();
	void set_has_country();
	void clear_has_country();
	void set_has_state();
	void clear_has_state();
	void set_has_city();
	void clear_has_city();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:3967
class CGCMsgGetIPLocationResponse : public Message {
public:

	static const int kInfosFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CGCMsgGetIPLocationResponse * default_instance_;
	CGCMsgGetIPLocationResponse();
	virtual ~CGCMsgGetIPLocationResponse();
	CGCMsgGetIPLocationResponse(const CGCMsgGetIPLocationResponse &);
	CGCMsgGetIPLocationResponse & operator=(const CGCMsgGetIPLocationResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CGCMsgGetIPLocationResponse & default_instance();
	void Swap(CGCMsgGetIPLocationResponse *);
	virtual CGCMsgGetIPLocationResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CGCMsgGetIPLocationResponse &);
	void MergeFrom(const CGCMsgGetIPLocationResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int infos_size();
	void clear_infos();
	const CIPLocationInfo & infos(int);
	CIPLocationInfo * mutable_infos(int);
	CIPLocationInfo * add_infos();
	const RepeatedPtrField<CIPLocationInfo> & infos();
	RepeatedPtrField<CIPLocationInfo> * mutable_infos();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:4049
class CGCMsgGetIPASN : public Message {
public:

	static const int kIpsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CGCMsgGetIPASN * default_instance_;
	CGCMsgGetIPASN();
	virtual ~CGCMsgGetIPASN();
	CGCMsgGetIPASN(const CGCMsgGetIPASN &);
	CGCMsgGetIPASN & operator=(const CGCMsgGetIPASN &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CGCMsgGetIPASN & default_instance();
	void Swap(CGCMsgGetIPASN *);
	virtual CGCMsgGetIPASN * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CGCMsgGetIPASN &);
	void MergeFrom(const CGCMsgGetIPASN &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int ips_size();
	void clear_ips();
	uint32 ips(int);
	void set_ips(int, uint32);
	void add_ips(uint32);
	const RepeatedField<unsigned int> & ips();
	RepeatedField<unsigned int> * mutable_ips();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:4131
class CIPASNInfo : public Message {
public:

	static const int kIpFieldNumber = 1;
	static const int kAsnFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 ip_;  // +0x18
	uint32 asn_;  // +0x1c

	static CIPASNInfo * default_instance_;
	CIPASNInfo();
	virtual ~CIPASNInfo();
	CIPASNInfo(const CIPASNInfo &);
	CIPASNInfo & operator=(const CIPASNInfo &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CIPASNInfo & default_instance();
	void Swap(CIPASNInfo *);
	virtual CIPASNInfo * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CIPASNInfo &);
	void MergeFrom(const CIPASNInfo &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_asn();
	void clear_asn();
	uint32 asn();
	void set_asn(uint32);
	void set_has_ip();
	void clear_has_ip();
	void set_has_asn();
	void clear_has_asn();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:4220
class CGCMsgGetIPASNResponse : public Message {
public:

	static const int kInfosFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CGCMsgGetIPASNResponse * default_instance_;
	CGCMsgGetIPASNResponse();
	virtual ~CGCMsgGetIPASNResponse();
	CGCMsgGetIPASNResponse(const CGCMsgGetIPASNResponse &);
	CGCMsgGetIPASNResponse & operator=(const CGCMsgGetIPASNResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CGCMsgGetIPASNResponse & default_instance();
	void Swap(CGCMsgGetIPASNResponse *);
	virtual CGCMsgGetIPASNResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CGCMsgGetIPASNResponse &);
	void MergeFrom(const CGCMsgGetIPASNResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int infos_size();
	void clear_infos();
	const CIPASNInfo & infos(int);
	CIPASNInfo * mutable_infos(int);
	CIPASNInfo * add_infos();
	const RepeatedPtrField<CIPASNInfo> & infos();
	RepeatedPtrField<CIPASNInfo> * mutable_infos();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:4302
class CGCMsgSystemStatsSchema : public Message {
public:

	static const int kGcAppIdFieldNumber = 1;
	static const int kSchemaKvFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * schema_kv_;  // +0x18
	uint32 gc_app_id_;  // +0x20

	static CGCMsgSystemStatsSchema * default_instance_;
	CGCMsgSystemStatsSchema();
	virtual ~CGCMsgSystemStatsSchema();
	CGCMsgSystemStatsSchema(const CGCMsgSystemStatsSchema &);
	CGCMsgSystemStatsSchema & operator=(const CGCMsgSystemStatsSchema &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CGCMsgSystemStatsSchema & default_instance();
	void Swap(CGCMsgSystemStatsSchema *);
	virtual CGCMsgSystemStatsSchema * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CGCMsgSystemStatsSchema &);
	void MergeFrom(const CGCMsgSystemStatsSchema &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_gc_app_id();
	void clear_gc_app_id();
	uint32 gc_app_id();
	void set_gc_app_id(uint32);
	bool has_schema_kv();
	void clear_schema_kv();
	const string & schema_kv();
	void set_schema_kv(const string &);
	void set_schema_kv(const char *);
	void set_schema_kv(const void *, size_t);
	string * mutable_schema_kv();
	string * release_schema_kv();
	void set_allocated_schema_kv(string *);
	void set_has_gc_app_id();
	void clear_has_gc_app_id();
	void set_has_schema_kv();
	void clear_has_schema_kv();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:4396
class CGCMsgGetSystemStats : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CGCMsgGetSystemStats * default_instance_;
	CGCMsgGetSystemStats();
	virtual ~CGCMsgGetSystemStats();
	CGCMsgGetSystemStats(const CGCMsgGetSystemStats &);
	CGCMsgGetSystemStats & operator=(const CGCMsgGetSystemStats &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CGCMsgGetSystemStats & default_instance();
	void Swap(CGCMsgGetSystemStats *);
	virtual CGCMsgGetSystemStats * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CGCMsgGetSystemStats &);
	void MergeFrom(const CGCMsgGetSystemStats &);
	virtual void Clear();
	virtual bool IsInitialized();
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:4465
class CGCMsgGetSystemStatsResponse : public Message {
public:

	static const int kGcAppIdFieldNumber = 1;
	static const int kStatsKvFieldNumber = 2;
	static const int kActiveJobsFieldNumber = 3;
	static const int kYieldingJobsFieldNumber = 4;
	static const int kUserSessionsFieldNumber = 5;
	static const int kGameServerSessionsFieldNumber = 6;
	static const int kSocachesFieldNumber = 7;
	static const int kSocachesToUnloadFieldNumber = 8;
	static const int kSocachesLoadingFieldNumber = 9;
	static const int kWritebackQueueFieldNumber = 10;
	static const int kSteamidLocksFieldNumber = 11;
	static const int kLogonQueueFieldNumber = 12;
	static const int kLogonJobsFieldNumber = 13;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * stats_kv_;  // +0x18
	uint32 gc_app_id_;  // +0x20
	uint32 active_jobs_;  // +0x24
	uint32 yielding_jobs_;  // +0x28
	uint32 user_sessions_;  // +0x2c
	uint32 game_server_sessions_;  // +0x30
	uint32 socaches_;  // +0x34
	uint32 socaches_to_unload_;  // +0x38
	uint32 socaches_loading_;  // +0x3c
	uint32 writeback_queue_;  // +0x40
	uint32 steamid_locks_;  // +0x44
	uint32 logon_queue_;  // +0x48
	uint32 logon_jobs_;  // +0x4c

	static CGCMsgGetSystemStatsResponse * default_instance_;
	CGCMsgGetSystemStatsResponse();
	virtual ~CGCMsgGetSystemStatsResponse();
	CGCMsgGetSystemStatsResponse(const CGCMsgGetSystemStatsResponse &);
	CGCMsgGetSystemStatsResponse & operator=(const CGCMsgGetSystemStatsResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CGCMsgGetSystemStatsResponse & default_instance();
	void Swap(CGCMsgGetSystemStatsResponse *);
	virtual CGCMsgGetSystemStatsResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CGCMsgGetSystemStatsResponse &);
	void MergeFrom(const CGCMsgGetSystemStatsResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_gc_app_id();
	void clear_gc_app_id();
	uint32 gc_app_id();
	void set_gc_app_id(uint32);
	bool has_stats_kv();
	void clear_stats_kv();
	const string & stats_kv();
	void set_stats_kv(const string &);
	void set_stats_kv(const char *);
	void set_stats_kv(const void *, size_t);
	string * mutable_stats_kv();
	string * release_stats_kv();
	void set_allocated_stats_kv(string *);
	bool has_active_jobs();
	void clear_active_jobs();
	uint32 active_jobs();
	void set_active_jobs(uint32);
	bool has_yielding_jobs();
	void clear_yielding_jobs();
	uint32 yielding_jobs();
	void set_yielding_jobs(uint32);
	bool has_user_sessions();
	void clear_user_sessions();
	uint32 user_sessions();
	void set_user_sessions(uint32);
	bool has_game_server_sessions();
	void clear_game_server_sessions();
	uint32 game_server_sessions();
	void set_game_server_sessions(uint32);
	bool has_socaches();
	void clear_socaches();
	uint32 socaches();
	void set_socaches(uint32);
	bool has_socaches_to_unload();
	void clear_socaches_to_unload();
	uint32 socaches_to_unload();
	void set_socaches_to_unload(uint32);
	bool has_socaches_loading();
	void clear_socaches_loading();
	uint32 socaches_loading();
	void set_socaches_loading(uint32);
	bool has_writeback_queue();
	void clear_writeback_queue();
	uint32 writeback_queue();
	void set_writeback_queue(uint32);
	bool has_steamid_locks();
	void clear_steamid_locks();
	uint32 steamid_locks();
	void set_steamid_locks(uint32);
	bool has_logon_queue();
	void clear_logon_queue();
	uint32 logon_queue();
	void set_logon_queue(uint32);
	bool has_logon_jobs();
	void clear_logon_jobs();
	uint32 logon_jobs();
	void set_logon_jobs(uint32);
	void set_has_gc_app_id();
	void clear_has_gc_app_id();
	void set_has_stats_kv();
	void clear_has_stats_kv();
	void set_has_active_jobs();
	void clear_has_active_jobs();
	void set_has_yielding_jobs();
	void clear_has_yielding_jobs();
	void set_has_user_sessions();
	void clear_has_user_sessions();
	void set_has_game_server_sessions();
	void clear_has_game_server_sessions();
	void set_has_socaches();
	void clear_has_socaches();
	void set_has_socaches_to_unload();
	void clear_has_socaches_to_unload();
	void set_has_socaches_loading();
	void clear_has_socaches_loading();
	void set_has_writeback_queue();
	void clear_has_writeback_queue();
	void set_has_steamid_locks();
	void clear_has_steamid_locks();
	void set_has_logon_queue();
	void clear_has_logon_queue();
	void set_has_logon_jobs();
	void clear_has_logon_jobs();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:4669
class CMsgAMSendEmail_ReplacementToken : public Message {
public:

	static const int kTokenNameFieldNumber = 1;
	static const int kTokenValueFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * token_name_;  // +0x18
	string * token_value_;  // +0x20

	static CMsgAMSendEmail_ReplacementToken * default_instance_;
	CMsgAMSendEmail_ReplacementToken();
	virtual ~CMsgAMSendEmail_ReplacementToken();
	CMsgAMSendEmail_ReplacementToken(const CMsgAMSendEmail_ReplacementToken &);
	CMsgAMSendEmail_ReplacementToken & operator=(const CMsgAMSendEmail_ReplacementToken &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgAMSendEmail_ReplacementToken & default_instance();
	void Swap(CMsgAMSendEmail_ReplacementToken *);
	virtual CMsgAMSendEmail_ReplacementToken * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgAMSendEmail_ReplacementToken &);
	void MergeFrom(const CMsgAMSendEmail_ReplacementToken &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_token_name();
	void clear_token_name();
	const string & token_name();
	void set_token_name(const string &);
	void set_token_name(const char *);
	void set_token_name(const char *, size_t);
	string * mutable_token_name();
	string * release_token_name();
	void set_allocated_token_name(string *);
	bool has_token_value();
	void clear_token_value();
	const string & token_value();
	void set_token_value(const string &);
	void set_token_value(const char *);
	void set_token_value(const char *, size_t);
	string * mutable_token_value();
	string * release_token_value();
	void set_allocated_token_value(string *);
	void set_has_token_name();
	void clear_has_token_name();
	void set_has_token_value();
	void clear_has_token_value();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:4768
class CMsgAMSendEmail_PersonaNameReplacementToken : public Message {
public:

	static const int kSteamidFieldNumber = 1;
	static const int kTokenNameFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 steamid_;  // +0x18
	string * token_name_;  // +0x20

	static CMsgAMSendEmail_PersonaNameReplacementToken * default_instance_;
	CMsgAMSendEmail_PersonaNameReplacementToken();
	virtual ~CMsgAMSendEmail_PersonaNameReplacementToken();
	CMsgAMSendEmail_PersonaNameReplacementToken(const CMsgAMSendEmail_PersonaNameReplacementToken &);
	CMsgAMSendEmail_PersonaNameReplacementToken & operator=(const CMsgAMSendEmail_PersonaNameReplacementToken &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgAMSendEmail_PersonaNameReplacementToken & default_instance();
	void Swap(CMsgAMSendEmail_PersonaNameReplacementToken *);
	virtual CMsgAMSendEmail_PersonaNameReplacementToken * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgAMSendEmail_PersonaNameReplacementToken &);
	void MergeFrom(const CMsgAMSendEmail_PersonaNameReplacementToken &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_token_name();
	void clear_token_name();
	const string & token_name();
	void set_token_name(const string &);
	void set_token_name(const char *);
	void set_token_name(const char *, size_t);
	string * mutable_token_name();
	string * release_token_name();
	void set_allocated_token_name(string *);
	void set_has_steamid();
	void clear_has_steamid();
	void set_has_token_name();
	void clear_has_token_name();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:4862
class CMsgAMSendEmail : public Message {
public:

	static const int kSteamidFieldNumber = 1;
	static const int kEmailMsgTypeFieldNumber = 2;
	static const int kEmailFormatFieldNumber = 3;
	static const int kPersonaNameTokensFieldNumber = 5;
	static const int kSourceGcFieldNumber = 6;
	static const int kTokensFieldNumber = 7;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 steamid_;  // +0x18
	uint32 email_msg_type_;  // +0x20
	uint32 email_format_;  // +0x24
	uint32 source_gc_;  // +0x58

	static CMsgAMSendEmail * default_instance_;
	CMsgAMSendEmail();
	virtual ~CMsgAMSendEmail();
	CMsgAMSendEmail(const CMsgAMSendEmail &);
	CMsgAMSendEmail & operator=(const CMsgAMSendEmail &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgAMSendEmail & default_instance();
	void Swap(CMsgAMSendEmail *);
	virtual CMsgAMSendEmail * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgAMSendEmail &);
	void MergeFrom(const CMsgAMSendEmail &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_email_msg_type();
	void clear_email_msg_type();
	uint32 email_msg_type();
	void set_email_msg_type(uint32);
	bool has_email_format();
	void clear_email_format();
	uint32 email_format();
	void set_email_format(uint32);
	int persona_name_tokens_size();
	void clear_persona_name_tokens();
	const CMsgAMSendEmail_PersonaNameReplacementToken & persona_name_tokens(int);
	CMsgAMSendEmail_PersonaNameReplacementToken * mutable_persona_name_tokens(int);
	CMsgAMSendEmail_PersonaNameReplacementToken * add_persona_name_tokens();
	const RepeatedPtrField<CMsgAMSendEmail_PersonaNameReplacementToken> & persona_name_tokens();
	RepeatedPtrField<CMsgAMSendEmail_PersonaNameReplacementToken> * mutable_persona_name_tokens();
	bool has_source_gc();
	void clear_source_gc();
	uint32 source_gc();
	void set_source_gc(uint32);
	int tokens_size();
	void clear_tokens();
	const CMsgAMSendEmail_ReplacementToken & tokens(int);
	CMsgAMSendEmail_ReplacementToken * mutable_tokens(int);
	CMsgAMSendEmail_ReplacementToken * add_tokens();
	const RepeatedPtrField<CMsgAMSendEmail_ReplacementToken> & tokens();
	RepeatedPtrField<CMsgAMSendEmail_ReplacementToken> * mutable_tokens();
	void set_has_steamid();
	void clear_has_steamid();
	void set_has_email_msg_type();
	void clear_has_email_msg_type();
	void set_has_email_format();
	void clear_has_email_format();
	void set_has_source_gc();
	void clear_has_source_gc();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:5000
class CMsgAMSendEmailResponse : public Message {
public:

	static const int kEresultFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 eresult_;  // +0x18

	static CMsgAMSendEmailResponse * default_instance_;
	CMsgAMSendEmailResponse();
	virtual ~CMsgAMSendEmailResponse();
	CMsgAMSendEmailResponse(const CMsgAMSendEmailResponse &);
	CMsgAMSendEmailResponse & operator=(const CMsgAMSendEmailResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgAMSendEmailResponse & default_instance();
	void Swap(CMsgAMSendEmailResponse *);
	virtual CMsgAMSendEmailResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgAMSendEmailResponse &);
	void MergeFrom(const CMsgAMSendEmailResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	uint32 eresult();
	void set_eresult(uint32);
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:5079
class CMsgGCGetEmailTemplate : public Message {
public:

	static const int kAppIdFieldNumber = 1;
	static const int kEmailMsgTypeFieldNumber = 2;
	static const int kEmailLangFieldNumber = 3;
	static const int kEmailFormatFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 app_id_;  // +0x18
	uint32 email_msg_type_;  // +0x1c
	int32 email_lang_;  // +0x20
	int32 email_format_;  // +0x24

	static CMsgGCGetEmailTemplate * default_instance_;
	CMsgGCGetEmailTemplate();
	virtual ~CMsgGCGetEmailTemplate();
	CMsgGCGetEmailTemplate(const CMsgGCGetEmailTemplate &);
	CMsgGCGetEmailTemplate & operator=(const CMsgGCGetEmailTemplate &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCGetEmailTemplate & default_instance();
	void Swap(CMsgGCGetEmailTemplate *);
	virtual CMsgGCGetEmailTemplate * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCGetEmailTemplate &);
	void MergeFrom(const CMsgGCGetEmailTemplate &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_app_id();
	void clear_app_id();
	uint32 app_id();
	void set_app_id(uint32);
	bool has_email_msg_type();
	void clear_email_msg_type();
	uint32 email_msg_type();
	void set_email_msg_type(uint32);
	bool has_email_lang();
	void clear_email_lang();
	int32 email_lang();
	void set_email_lang(int32);
	bool has_email_format();
	void clear_email_format();
	int32 email_format();
	void set_email_format(int32);
	void set_has_app_id();
	void clear_has_app_id();
	void set_has_email_msg_type();
	void clear_has_email_msg_type();
	void set_has_email_lang();
	void clear_has_email_lang();
	void set_has_email_format();
	void clear_has_email_format();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:5188
class CMsgGCGetEmailTemplateResponse : public Message {
public:

	static const int kEresultFieldNumber = 1;
	static const int kTemplateExistsFieldNumber = 2;
	static const int kTemplateFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 eresult_;  // +0x18
	bool template_exists_;  // +0x1c

	string * template__;  // +0x20

	static CMsgGCGetEmailTemplateResponse * default_instance_;
	CMsgGCGetEmailTemplateResponse();
	virtual ~CMsgGCGetEmailTemplateResponse();
	CMsgGCGetEmailTemplateResponse(const CMsgGCGetEmailTemplateResponse &);
	CMsgGCGetEmailTemplateResponse & operator=(const CMsgGCGetEmailTemplateResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCGetEmailTemplateResponse & default_instance();
	void Swap(CMsgGCGetEmailTemplateResponse *);
	virtual CMsgGCGetEmailTemplateResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCGetEmailTemplateResponse &);
	void MergeFrom(const CMsgGCGetEmailTemplateResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	uint32 eresult();
	void set_eresult(uint32);
	bool has_template_exists();
	void clear_template_exists();
	bool template_exists();
	void set_template_exists(bool);
	bool has_template_();
	void clear_template_();
	const string & template_();
	void set_template_(const string &);
	void set_template_(const char *);
	void set_template_(const char *, size_t);
	string * mutable_template_();
	string * release_template_();
	void set_allocated_template_(string *);
	void set_has_eresult();
	void clear_has_eresult();
	void set_has_template_exists();
	void clear_has_template_exists();
	void set_has_template_();
	void clear_has_template_();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:5292
class CMsgAMGrantGuestPasses2 : public Message {
public:

	static const int kSteamIdFieldNumber = 1;
	static const int kPackageIdFieldNumber = 2;
	static const int kPassesToGrantFieldNumber = 3;
	static const int kDaysToExpirationFieldNumber = 4;
	static const int kActionFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 steam_id_;  // +0x18
	uint32 package_id_;  // +0x20
	int32 passes_to_grant_;  // +0x24
	int32 days_to_expiration_;  // +0x28
	int32 action_;  // +0x2c

	static CMsgAMGrantGuestPasses2 * default_instance_;
	CMsgAMGrantGuestPasses2();
	virtual ~CMsgAMGrantGuestPasses2();
	CMsgAMGrantGuestPasses2(const CMsgAMGrantGuestPasses2 &);
	CMsgAMGrantGuestPasses2 & operator=(const CMsgAMGrantGuestPasses2 &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgAMGrantGuestPasses2 & default_instance();
	void Swap(CMsgAMGrantGuestPasses2 *);
	virtual CMsgAMGrantGuestPasses2 * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgAMGrantGuestPasses2 &);
	void MergeFrom(const CMsgAMGrantGuestPasses2 &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_package_id();
	void clear_package_id();
	uint32 package_id();
	void set_package_id(uint32);
	bool has_passes_to_grant();
	void clear_passes_to_grant();
	int32 passes_to_grant();
	void set_passes_to_grant(int32);
	bool has_days_to_expiration();
	void clear_days_to_expiration();
	int32 days_to_expiration();
	void set_days_to_expiration(int32);
	bool has_action();
	void clear_action();
	int32 action();
	void set_action(int32);
	void set_has_steam_id();
	void clear_has_steam_id();
	void set_has_package_id();
	void clear_has_package_id();
	void set_has_passes_to_grant();
	void clear_has_passes_to_grant();
	void set_has_days_to_expiration();
	void clear_has_days_to_expiration();
	void set_has_action();
	void clear_has_action();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:5411
class CMsgAMGrantGuestPasses2Response : public Message {
public:

	static const int kEresultFieldNumber = 1;
	static const int kPassesGrantedFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 eresult_;  // +0x18
	int32 passes_granted_;  // +0x1c

	static CMsgAMGrantGuestPasses2Response * default_instance_;
	CMsgAMGrantGuestPasses2Response();
	virtual ~CMsgAMGrantGuestPasses2Response();
	CMsgAMGrantGuestPasses2Response(const CMsgAMGrantGuestPasses2Response &);
	CMsgAMGrantGuestPasses2Response & operator=(const CMsgAMGrantGuestPasses2Response &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgAMGrantGuestPasses2Response & default_instance();
	void Swap(CMsgAMGrantGuestPasses2Response *);
	virtual CMsgAMGrantGuestPasses2Response * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgAMGrantGuestPasses2Response &);
	void MergeFrom(const CMsgAMGrantGuestPasses2Response &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_passes_granted();
	void clear_passes_granted();
	int32 passes_granted();
	void set_passes_granted(int32);
	void set_has_eresult();
	void clear_has_eresult();
	void set_has_passes_granted();
	void clear_has_passes_granted();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:5500
class CGCSystemMsg_GetAccountDetails : public Message {
public:

	static const int kSteamidFieldNumber = 1;
	static const int kAppidFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 steamid_;  // +0x18
	uint32 appid_;  // +0x20

	static CGCSystemMsg_GetAccountDetails * default_instance_;
	CGCSystemMsg_GetAccountDetails();
	virtual ~CGCSystemMsg_GetAccountDetails();
	CGCSystemMsg_GetAccountDetails(const CGCSystemMsg_GetAccountDetails &);
	CGCSystemMsg_GetAccountDetails & operator=(const CGCSystemMsg_GetAccountDetails &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CGCSystemMsg_GetAccountDetails & default_instance();
	void Swap(CGCSystemMsg_GetAccountDetails *);
	virtual CGCSystemMsg_GetAccountDetails * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CGCSystemMsg_GetAccountDetails &);
	void MergeFrom(const CGCSystemMsg_GetAccountDetails &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_appid();
	void clear_appid();
	uint32 appid();
	void set_appid(uint32);
	void set_has_steamid();
	void clear_has_steamid();
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
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:5589
class CGCSystemMsg_GetAccountDetails_Response : public Message {
public:

	static const int kEresultDeprecatedFieldNumber = 1;
	static const int kAccountNameFieldNumber = 2;
	static const int kPersonaNameFieldNumber = 3;
	static const int kIsProfileCreatedFieldNumber = 26;
	static const int kIsProfilePublicFieldNumber = 4;
	static const int kIsInventoryPublicFieldNumber = 5;
	static const int kIsVacBannedFieldNumber = 7;
	static const int kIsCyberCafeFieldNumber = 8;
	static const int kIsSchoolAccountFieldNumber = 9;
	static const int kIsLimitedFieldNumber = 10;
	static const int kIsSubscribedFieldNumber = 11;
	static const int kPackageFieldNumber = 12;
	static const int kIsFreeTrialAccountFieldNumber = 13;
	static const int kFreeTrialExpirationFieldNumber = 14;
	static const int kIsLowViolenceFieldNumber = 15;
	static const int kIsAccountLockedDownFieldNumber = 16;
	static const int kIsCommunityBannedFieldNumber = 17;
	static const int kIsTradeBannedFieldNumber = 18;
	static const int kTradeBanExpirationFieldNumber = 19;
	static const int kAccountidFieldNumber = 20;
	static const int kSuspensionEndTimeFieldNumber = 21;
	static const int kCurrencyFieldNumber = 22;
	static const int kSteamLevelFieldNumber = 23;
	static const int kFriendCountFieldNumber = 24;
	static const int kAccountCreationTimeFieldNumber = 25;
	static const int kIsSteamguardEnabledFieldNumber = 27;
	static const int kIsPhoneVerifiedFieldNumber = 28;
	static const int kIsTwoFactorAuthEnabledFieldNumber = 29;
	static const int kTwoFactorEnabledTimeFieldNumber = 30;
	static const int kPhoneVerificationTimeFieldNumber = 31;
	static const int kPhoneIdFieldNumber = 33;
	static const int kIsPhoneIdentifyingFieldNumber = 34;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * account_name_;  // +0x18
	string * persona_name_;  // +0x20
	uint32 eresult_deprecated_;  // +0x28
	bool is_profile_created_;  // +0x2c
	bool is_profile_public_;  // +0x2d
	bool is_inventory_public_;  // +0x2e
	bool is_vac_banned_;  // +0x2f
	bool is_cyber_cafe_;  // +0x30
	bool is_school_account_;  // +0x31
	bool is_limited_;  // +0x32
	bool is_subscribed_;  // +0x33
	uint32 package_;  // +0x34
	uint32 free_trial_expiration_;  // +0x38
	bool is_free_trial_account_;  // +0x3c
	bool is_low_violence_;  // +0x3d
	bool is_account_locked_down_;  // +0x3e
	bool is_community_banned_;  // +0x3f
	uint32 trade_ban_expiration_;  // +0x40
	uint32 accountid_;  // +0x44
	string * currency_;  // +0x48
	uint32 suspension_end_time_;  // +0x50
	uint32 steam_level_;  // +0x54
	uint32 friend_count_;  // +0x58
	bool is_trade_banned_;  // +0x5c
	bool is_steamguard_enabled_;  // +0x5d
	bool is_phone_verified_;  // +0x5e
	bool is_two_factor_auth_enabled_;  // +0x5f
	uint32 account_creation_time_;  // +0x60
	uint32 two_factor_enabled_time_;  // +0x64
	uint64 phone_id_;  // +0x68
	uint32 phone_verification_time_;  // +0x70
	bool is_phone_identifying_;  // +0x74

	static CGCSystemMsg_GetAccountDetails_Response * default_instance_;
	CGCSystemMsg_GetAccountDetails_Response();
	virtual ~CGCSystemMsg_GetAccountDetails_Response();
	CGCSystemMsg_GetAccountDetails_Response(const CGCSystemMsg_GetAccountDetails_Response &);
	CGCSystemMsg_GetAccountDetails_Response & operator=(const CGCSystemMsg_GetAccountDetails_Response &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CGCSystemMsg_GetAccountDetails_Response & default_instance();
	void Swap(CGCSystemMsg_GetAccountDetails_Response *);
	virtual CGCSystemMsg_GetAccountDetails_Response * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CGCSystemMsg_GetAccountDetails_Response &);
	void MergeFrom(const CGCSystemMsg_GetAccountDetails_Response &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_eresult_deprecated();
	void clear_eresult_deprecated();
	uint32 eresult_deprecated();
	void set_eresult_deprecated(uint32);
	bool has_account_name();
	void clear_account_name();
	const string & account_name();
	void set_account_name(const string &);
	void set_account_name(const char *);
	void set_account_name(const char *, size_t);
	string * mutable_account_name();
	string * release_account_name();
	void set_allocated_account_name(string *);
	bool has_persona_name();
	void clear_persona_name();
	const string & persona_name();
	void set_persona_name(const string &);
	void set_persona_name(const char *);
	void set_persona_name(const char *, size_t);
	string * mutable_persona_name();
	string * release_persona_name();
	void set_allocated_persona_name(string *);
	bool has_is_profile_created();
	void clear_is_profile_created();
	bool is_profile_created();
	void set_is_profile_created(bool);
	bool has_is_profile_public();
	void clear_is_profile_public();
	bool is_profile_public();
	void set_is_profile_public(bool);
	bool has_is_inventory_public();
	void clear_is_inventory_public();
	bool is_inventory_public();
	void set_is_inventory_public(bool);
	bool has_is_vac_banned();
	void clear_is_vac_banned();
	bool is_vac_banned();
	void set_is_vac_banned(bool);
	bool has_is_cyber_cafe();
	void clear_is_cyber_cafe();
	bool is_cyber_cafe();
	void set_is_cyber_cafe(bool);
	bool has_is_school_account();
	void clear_is_school_account();
	bool is_school_account();
	void set_is_school_account(bool);
	bool has_is_limited();
	void clear_is_limited();
	bool is_limited();
	void set_is_limited(bool);
	bool has_is_subscribed();
	void clear_is_subscribed();
	bool is_subscribed();
	void set_is_subscribed(bool);
	bool has_package();
	void clear_package();
	uint32 package();
	void set_package(uint32);
	bool has_is_free_trial_account();
	void clear_is_free_trial_account();
	bool is_free_trial_account();
	void set_is_free_trial_account(bool);
	bool has_free_trial_expiration();
	void clear_free_trial_expiration();
	uint32 free_trial_expiration();
	void set_free_trial_expiration(uint32);
	bool has_is_low_violence();
	void clear_is_low_violence();
	bool is_low_violence();
	void set_is_low_violence(bool);
	bool has_is_account_locked_down();
	void clear_is_account_locked_down();
	bool is_account_locked_down();
	void set_is_account_locked_down(bool);
	bool has_is_community_banned();
	void clear_is_community_banned();
	bool is_community_banned();
	void set_is_community_banned(bool);
	bool has_is_trade_banned();
	void clear_is_trade_banned();
	bool is_trade_banned();
	void set_is_trade_banned(bool);
	bool has_trade_ban_expiration();
	void clear_trade_ban_expiration();
	uint32 trade_ban_expiration();
	void set_trade_ban_expiration(uint32);
	bool has_accountid();
	void clear_accountid();
	uint32 accountid();
	void set_accountid(uint32);
	bool has_suspension_end_time();
	void clear_suspension_end_time();
	uint32 suspension_end_time();
	void set_suspension_end_time(uint32);
	bool has_currency();
	void clear_currency();
	const string & currency();
	void set_currency(const string &);
	void set_currency(const char *);
	void set_currency(const char *, size_t);
	string * mutable_currency();
	string * release_currency();
	void set_allocated_currency(string *);
	bool has_steam_level();
	void clear_steam_level();
	uint32 steam_level();
	void set_steam_level(uint32);
	bool has_friend_count();
	void clear_friend_count();
	uint32 friend_count();
	void set_friend_count(uint32);
	bool has_account_creation_time();
	void clear_account_creation_time();
	uint32 account_creation_time();
	void set_account_creation_time(uint32);
	bool has_is_steamguard_enabled();
	void clear_is_steamguard_enabled();
	bool is_steamguard_enabled();
	void set_is_steamguard_enabled(bool);
	bool has_is_phone_verified();
	void clear_is_phone_verified();
	bool is_phone_verified();
	void set_is_phone_verified(bool);
	bool has_is_two_factor_auth_enabled();
	void clear_is_two_factor_auth_enabled();
	bool is_two_factor_auth_enabled();
	void set_is_two_factor_auth_enabled(bool);
	bool has_two_factor_enabled_time();
	void clear_two_factor_enabled_time();
	uint32 two_factor_enabled_time();
	void set_two_factor_enabled_time(uint32);
	bool has_phone_verification_time();
	void clear_phone_verification_time();
	uint32 phone_verification_time();
	void set_phone_verification_time(uint32);
	bool has_phone_id();
	void clear_phone_id();
	uint64 phone_id();
	void set_phone_id(uint64);
	bool has_is_phone_identifying();
	void clear_is_phone_identifying();
	bool is_phone_identifying();
	void set_is_phone_identifying(bool);
	void set_has_eresult_deprecated();
	void clear_has_eresult_deprecated();
	void set_has_account_name();
	void clear_has_account_name();
	void set_has_persona_name();
	void clear_has_persona_name();
	void set_has_is_profile_created();
	void clear_has_is_profile_created();
	void set_has_is_profile_public();
	void clear_has_is_profile_public();
	void set_has_is_inventory_public();
	void clear_has_is_inventory_public();
	void set_has_is_vac_banned();
	void clear_has_is_vac_banned();
	void set_has_is_cyber_cafe();
	void clear_has_is_cyber_cafe();
	void set_has_is_school_account();
	void clear_has_is_school_account();
	void set_has_is_limited();
	void clear_has_is_limited();
	void set_has_is_subscribed();
	void clear_has_is_subscribed();
	void set_has_package();
	void clear_has_package();
	void set_has_is_free_trial_account();
	void clear_has_is_free_trial_account();
	void set_has_free_trial_expiration();
	void clear_has_free_trial_expiration();
	void set_has_is_low_violence();
	void clear_has_is_low_violence();
	void set_has_is_account_locked_down();
	void clear_has_is_account_locked_down();
	void set_has_is_community_banned();
	void clear_has_is_community_banned();
	void set_has_is_trade_banned();
	void clear_has_is_trade_banned();
	void set_has_trade_ban_expiration();
	void clear_has_trade_ban_expiration();
	void set_has_accountid();
	void clear_has_accountid();
	void set_has_suspension_end_time();
	void clear_has_suspension_end_time();
	void set_has_currency();
	void clear_has_currency();
	void set_has_steam_level();
	void clear_has_steam_level();
	void set_has_friend_count();
	void clear_has_friend_count();
	void set_has_account_creation_time();
	void clear_has_account_creation_time();
	void set_has_is_steamguard_enabled();
	void clear_has_is_steamguard_enabled();
	void set_has_is_phone_verified();
	void clear_has_is_phone_verified();
	void set_has_is_two_factor_auth_enabled();
	void clear_has_is_two_factor_auth_enabled();
	void set_has_two_factor_enabled_time();
	void clear_has_two_factor_enabled_time();
	void set_has_phone_verification_time();
	void clear_has_phone_verification_time();
	void set_has_phone_id();
	void clear_has_phone_id();
	void set_has_is_phone_identifying();
	void clear_has_is_phone_identifying();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:5993
class CMsgGCGetPersonaNames : public Message {
public:

	static const int kSteamidsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgGCGetPersonaNames * default_instance_;
	CMsgGCGetPersonaNames();
	virtual ~CMsgGCGetPersonaNames();
	CMsgGCGetPersonaNames(const CMsgGCGetPersonaNames &);
	CMsgGCGetPersonaNames & operator=(const CMsgGCGetPersonaNames &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCGetPersonaNames & default_instance();
	void Swap(CMsgGCGetPersonaNames *);
	virtual CMsgGCGetPersonaNames * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCGetPersonaNames &);
	void MergeFrom(const CMsgGCGetPersonaNames &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int steamids_size();
	void clear_steamids();
	uint64 steamids(int);
	void set_steamids(int, uint64);
	void add_steamids(uint64);
	const RepeatedField<long unsigned int> & steamids();
	RepeatedField<long unsigned int> * mutable_steamids();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:6075
class CMsgGCGetPersonaNames_Response_PersonaName : public Message {
public:

	static const int kSteamidFieldNumber = 1;
	static const int kPersonaNameFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 steamid_;  // +0x18
	string * persona_name_;  // +0x20

	static CMsgGCGetPersonaNames_Response_PersonaName * default_instance_;
	CMsgGCGetPersonaNames_Response_PersonaName();
	virtual ~CMsgGCGetPersonaNames_Response_PersonaName();
	CMsgGCGetPersonaNames_Response_PersonaName(const CMsgGCGetPersonaNames_Response_PersonaName &);
	CMsgGCGetPersonaNames_Response_PersonaName & operator=(const CMsgGCGetPersonaNames_Response_PersonaName &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCGetPersonaNames_Response_PersonaName & default_instance();
	void Swap(CMsgGCGetPersonaNames_Response_PersonaName *);
	virtual CMsgGCGetPersonaNames_Response_PersonaName * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCGetPersonaNames_Response_PersonaName &);
	void MergeFrom(const CMsgGCGetPersonaNames_Response_PersonaName &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_persona_name();
	void clear_persona_name();
	const string & persona_name();
	void set_persona_name(const string &);
	void set_persona_name(const char *);
	void set_persona_name(const char *, size_t);
	string * mutable_persona_name();
	string * release_persona_name();
	void set_allocated_persona_name(string *);
	void set_has_steamid();
	void clear_has_steamid();
	void set_has_persona_name();
	void clear_has_persona_name();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:6169
class CMsgGCGetPersonaNames_Response : public Message {
public:

	static const int kSucceededLookupsFieldNumber = 1;
	static const int kFailedLookupSteamidsFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgGCGetPersonaNames_Response * default_instance_;
	CMsgGCGetPersonaNames_Response();
	virtual ~CMsgGCGetPersonaNames_Response();
	CMsgGCGetPersonaNames_Response(const CMsgGCGetPersonaNames_Response &);
	CMsgGCGetPersonaNames_Response & operator=(const CMsgGCGetPersonaNames_Response &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCGetPersonaNames_Response & default_instance();
	void Swap(CMsgGCGetPersonaNames_Response *);
	virtual CMsgGCGetPersonaNames_Response * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCGetPersonaNames_Response &);
	void MergeFrom(const CMsgGCGetPersonaNames_Response &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int succeeded_lookups_size();
	void clear_succeeded_lookups();
	const CMsgGCGetPersonaNames_Response_PersonaName & succeeded_lookups(int);
	CMsgGCGetPersonaNames_Response_PersonaName * mutable_succeeded_lookups(int);
	CMsgGCGetPersonaNames_Response_PersonaName * add_succeeded_lookups();
	const RepeatedPtrField<CMsgGCGetPersonaNames_Response_PersonaName> & succeeded_lookups();
	RepeatedPtrField<CMsgGCGetPersonaNames_Response_PersonaName> * mutable_succeeded_lookups();
	int failed_lookup_steamids_size();
	void clear_failed_lookup_steamids();
	uint64 failed_lookup_steamids(int);
	void set_failed_lookup_steamids(int, uint64);
	void add_failed_lookup_steamids(uint64);
	const RepeatedField<long unsigned int> & failed_lookup_steamids();
	RepeatedField<long unsigned int> * mutable_failed_lookup_steamids();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:6266
class CMsgGCCheckFriendship : public Message {
public:

	static const int kSteamidLeftFieldNumber = 1;
	static const int kSteamidRightFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 steamid_left_;  // +0x18
	uint64 steamid_right_;  // +0x20

	static CMsgGCCheckFriendship * default_instance_;
	CMsgGCCheckFriendship();
	virtual ~CMsgGCCheckFriendship();
	CMsgGCCheckFriendship(const CMsgGCCheckFriendship &);
	CMsgGCCheckFriendship & operator=(const CMsgGCCheckFriendship &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCCheckFriendship & default_instance();
	void Swap(CMsgGCCheckFriendship *);
	virtual CMsgGCCheckFriendship * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCCheckFriendship &);
	void MergeFrom(const CMsgGCCheckFriendship &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_steamid_left();
	void clear_steamid_left();
	uint64 steamid_left();
	void set_steamid_left(uint64);
	bool has_steamid_right();
	void clear_steamid_right();
	uint64 steamid_right();
	void set_steamid_right(uint64);
	void set_has_steamid_left();
	void clear_has_steamid_left();
	void set_has_steamid_right();
	void clear_has_steamid_right();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:6355
class CMsgGCCheckFriendship_Response : public Message {
public:

	static const int kSuccessFieldNumber = 1;
	static const int kFoundFriendshipFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool success_;  // +0x18
	bool found_friendship_;  // +0x19

	static CMsgGCCheckFriendship_Response * default_instance_;
	CMsgGCCheckFriendship_Response();
	virtual ~CMsgGCCheckFriendship_Response();
	CMsgGCCheckFriendship_Response(const CMsgGCCheckFriendship_Response &);
	CMsgGCCheckFriendship_Response & operator=(const CMsgGCCheckFriendship_Response &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCCheckFriendship_Response & default_instance();
	void Swap(CMsgGCCheckFriendship_Response *);
	virtual CMsgGCCheckFriendship_Response * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCCheckFriendship_Response &);
	void MergeFrom(const CMsgGCCheckFriendship_Response &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_found_friendship();
	void clear_found_friendship();
	bool found_friendship();
	void set_found_friendship(bool);
	void set_has_success();
	void clear_has_success();
	void set_has_found_friendship();
	void clear_has_found_friendship();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:6444
class CMsgGCGetAppFriendsList : public Message {
public:

	static const int kSteamidFieldNumber = 1;
	static const int kIncludeFriendshipTimestampsFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 steamid_;  // +0x18
	bool include_friendship_timestamps_;  // +0x20

	static CMsgGCGetAppFriendsList * default_instance_;
	CMsgGCGetAppFriendsList();
	virtual ~CMsgGCGetAppFriendsList();
	CMsgGCGetAppFriendsList(const CMsgGCGetAppFriendsList &);
	CMsgGCGetAppFriendsList & operator=(const CMsgGCGetAppFriendsList &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCGetAppFriendsList & default_instance();
	void Swap(CMsgGCGetAppFriendsList *);
	virtual CMsgGCGetAppFriendsList * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCGetAppFriendsList &);
	void MergeFrom(const CMsgGCGetAppFriendsList &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_include_friendship_timestamps();
	void clear_include_friendship_timestamps();
	bool include_friendship_timestamps();
	void set_include_friendship_timestamps(bool);
	void set_has_steamid();
	void clear_has_steamid();
	void set_has_include_friendship_timestamps();
	void clear_has_include_friendship_timestamps();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:6533
class CMsgGCGetAppFriendsList_Response : public Message {
public:

	static const int kSuccessFieldNumber = 1;
	static const int kSteamidsFieldNumber = 2;
	static const int kFriendshipTimestampsFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool success_;  // +0x38

	static CMsgGCGetAppFriendsList_Response * default_instance_;
	CMsgGCGetAppFriendsList_Response();
	virtual ~CMsgGCGetAppFriendsList_Response();
	CMsgGCGetAppFriendsList_Response(const CMsgGCGetAppFriendsList_Response &);
	CMsgGCGetAppFriendsList_Response & operator=(const CMsgGCGetAppFriendsList_Response &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCGetAppFriendsList_Response & default_instance();
	void Swap(CMsgGCGetAppFriendsList_Response *);
	virtual CMsgGCGetAppFriendsList_Response * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCGetAppFriendsList_Response &);
	void MergeFrom(const CMsgGCGetAppFriendsList_Response &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	int steamids_size();
	void clear_steamids();
	uint64 steamids(int);
	void set_steamids(int, uint64);
	void add_steamids(uint64);
	const RepeatedField<long unsigned int> & steamids();
	RepeatedField<long unsigned int> * mutable_steamids();
	int friendship_timestamps_size();
	void clear_friendship_timestamps();
	uint32 friendship_timestamps(int);
	void set_friendship_timestamps(int, uint32);
	void add_friendship_timestamps(uint32);
	const RepeatedField<unsigned int> & friendship_timestamps();
	RepeatedField<unsigned int> * mutable_friendship_timestamps();
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
	// sizeof = 64
};

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:6638
class CMsgGCMsgMasterSetDirectory_SubGC : public Message {
public:

	static const int kDirIndexFieldNumber = 1;
	static const int kNameFieldNumber = 2;
	static const int kBoxFieldNumber = 3;
	static const int kCommandLineFieldNumber = 4;
	static const int kGcBinaryFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * name_;  // +0x18
	string * box_;  // +0x20
	string * command_line_;  // +0x28
	string * gc_binary_;  // +0x30
	uint32 dir_index_;  // +0x38

	static CMsgGCMsgMasterSetDirectory_SubGC * default_instance_;
	CMsgGCMsgMasterSetDirectory_SubGC();
	virtual ~CMsgGCMsgMasterSetDirectory_SubGC();
	CMsgGCMsgMasterSetDirectory_SubGC(const CMsgGCMsgMasterSetDirectory_SubGC &);
	CMsgGCMsgMasterSetDirectory_SubGC & operator=(const CMsgGCMsgMasterSetDirectory_SubGC &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCMsgMasterSetDirectory_SubGC & default_instance();
	void Swap(CMsgGCMsgMasterSetDirectory_SubGC *);
	virtual CMsgGCMsgMasterSetDirectory_SubGC * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCMsgMasterSetDirectory_SubGC &);
	void MergeFrom(const CMsgGCMsgMasterSetDirectory_SubGC &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_name();
	void clear_name();
	const string & name();
	void set_name(const string &);
	void set_name(const char *);
	void set_name(const char *, size_t);
	string * mutable_name();
	string * release_name();
	void set_allocated_name(string *);
	bool has_box();
	void clear_box();
	const string & box();
	void set_box(const string &);
	void set_box(const char *);
	void set_box(const char *, size_t);
	string * mutable_box();
	string * release_box();
	void set_allocated_box(string *);
	bool has_command_line();
	void clear_command_line();
	const string & command_line();
	void set_command_line(const string &);
	void set_command_line(const char *);
	void set_command_line(const char *, size_t);
	string * mutable_command_line();
	string * release_command_line();
	void set_allocated_command_line(string *);
	bool has_gc_binary();
	void clear_gc_binary();
	const string & gc_binary();
	void set_gc_binary(const string &);
	void set_gc_binary(const char *);
	void set_gc_binary(const char *, size_t);
	string * mutable_gc_binary();
	string * release_gc_binary();
	void set_allocated_gc_binary(string *);
	void set_has_dir_index();
	void clear_has_dir_index();
	void set_has_name();
	void clear_has_name();
	void set_has_box();
	void clear_has_box();
	void set_has_command_line();
	void clear_has_command_line();
	void set_has_gc_binary();
	void clear_has_gc_binary();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:6777
class CMsgGCMsgMasterSetDirectory : public Message {
public:

	static const int kMasterDirIndexFieldNumber = 1;
	static const int kDirFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 master_dir_index_;  // +0x30

	static CMsgGCMsgMasterSetDirectory * default_instance_;
	CMsgGCMsgMasterSetDirectory();
	virtual ~CMsgGCMsgMasterSetDirectory();
	CMsgGCMsgMasterSetDirectory(const CMsgGCMsgMasterSetDirectory &);
	CMsgGCMsgMasterSetDirectory & operator=(const CMsgGCMsgMasterSetDirectory &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCMsgMasterSetDirectory & default_instance();
	void Swap(CMsgGCMsgMasterSetDirectory *);
	virtual CMsgGCMsgMasterSetDirectory * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCMsgMasterSetDirectory &);
	void MergeFrom(const CMsgGCMsgMasterSetDirectory &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_master_dir_index();
	void clear_master_dir_index();
	uint32 master_dir_index();
	void set_master_dir_index(uint32);
	int dir_size();
	void clear_dir();
	const CMsgGCMsgMasterSetDirectory_SubGC & dir(int);
	CMsgGCMsgMasterSetDirectory_SubGC * mutable_dir(int);
	CMsgGCMsgMasterSetDirectory_SubGC * add_dir();
	const RepeatedPtrField<CMsgGCMsgMasterSetDirectory_SubGC> & dir();
	RepeatedPtrField<CMsgGCMsgMasterSetDirectory_SubGC> * mutable_dir();
	void set_has_master_dir_index();
	void clear_has_master_dir_index();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:6871
class CMsgGCMsgMasterSetDirectory_Response : public Message {
public:

	static const int kEresultFieldNumber = 1;
	static const int kMessageFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * message_;  // +0x18
	int32 eresult_;  // +0x20

	static CMsgGCMsgMasterSetDirectory_Response * default_instance_;
	CMsgGCMsgMasterSetDirectory_Response();
	virtual ~CMsgGCMsgMasterSetDirectory_Response();
	CMsgGCMsgMasterSetDirectory_Response(const CMsgGCMsgMasterSetDirectory_Response &);
	CMsgGCMsgMasterSetDirectory_Response & operator=(const CMsgGCMsgMasterSetDirectory_Response &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCMsgMasterSetDirectory_Response & default_instance();
	void Swap(CMsgGCMsgMasterSetDirectory_Response *);
	virtual CMsgGCMsgMasterSetDirectory_Response * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCMsgMasterSetDirectory_Response &);
	void MergeFrom(const CMsgGCMsgMasterSetDirectory_Response &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_message();
	void clear_message();
	const string & message();
	void set_message(const string &);
	void set_message(const char *);
	void set_message(const char *, size_t);
	string * mutable_message();
	string * release_message();
	void set_allocated_message(string *);
	void set_has_eresult();
	void clear_has_eresult();
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
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:6965
class CMsgGCMsgWebAPIJobRequestForwardResponse : public Message {
public:

	static const int kDirIndexFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 dir_index_;  // +0x18

	static CMsgGCMsgWebAPIJobRequestForwardResponse * default_instance_;
	CMsgGCMsgWebAPIJobRequestForwardResponse();
	virtual ~CMsgGCMsgWebAPIJobRequestForwardResponse();
	CMsgGCMsgWebAPIJobRequestForwardResponse(const CMsgGCMsgWebAPIJobRequestForwardResponse &);
	CMsgGCMsgWebAPIJobRequestForwardResponse & operator=(const CMsgGCMsgWebAPIJobRequestForwardResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCMsgWebAPIJobRequestForwardResponse & default_instance();
	void Swap(CMsgGCMsgWebAPIJobRequestForwardResponse *);
	virtual CMsgGCMsgWebAPIJobRequestForwardResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCMsgWebAPIJobRequestForwardResponse &);
	void MergeFrom(const CMsgGCMsgWebAPIJobRequestForwardResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:7044
class CGCSystemMsg_GetPurchaseTrust_Request : public Message {
public:

	static const int kSteamidFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 steamid_;  // +0x18

	static CGCSystemMsg_GetPurchaseTrust_Request * default_instance_;
	CGCSystemMsg_GetPurchaseTrust_Request();
	virtual ~CGCSystemMsg_GetPurchaseTrust_Request();
	CGCSystemMsg_GetPurchaseTrust_Request(const CGCSystemMsg_GetPurchaseTrust_Request &);
	CGCSystemMsg_GetPurchaseTrust_Request & operator=(const CGCSystemMsg_GetPurchaseTrust_Request &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CGCSystemMsg_GetPurchaseTrust_Request & default_instance();
	void Swap(CGCSystemMsg_GetPurchaseTrust_Request *);
	virtual CGCSystemMsg_GetPurchaseTrust_Request * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CGCSystemMsg_GetPurchaseTrust_Request &);
	void MergeFrom(const CGCSystemMsg_GetPurchaseTrust_Request &);
	virtual void Clear();
	virtual bool IsInitialized();
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:7123
class CGCSystemMsg_GetPurchaseTrust_Response : public Message {
public:

	static const int kHasPriorPurchaseHistoryFieldNumber = 1;
	static const int kHasNoRecentPasswordResetsFieldNumber = 2;
	static const int kIsWalletCashTrustedFieldNumber = 3;
	static const int kTimeAllTrustedFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool has_prior_purchase_history_;  // +0x18
	bool has_no_recent_password_resets_;  // +0x19
	bool is_wallet_cash_trusted_;  // +0x1a

	uint32 time_all_trusted_;  // +0x1c

	static CGCSystemMsg_GetPurchaseTrust_Response * default_instance_;
	CGCSystemMsg_GetPurchaseTrust_Response();
	virtual ~CGCSystemMsg_GetPurchaseTrust_Response();
	CGCSystemMsg_GetPurchaseTrust_Response(const CGCSystemMsg_GetPurchaseTrust_Response &);
	CGCSystemMsg_GetPurchaseTrust_Response & operator=(const CGCSystemMsg_GetPurchaseTrust_Response &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CGCSystemMsg_GetPurchaseTrust_Response & default_instance();
	void Swap(CGCSystemMsg_GetPurchaseTrust_Response *);
	virtual CGCSystemMsg_GetPurchaseTrust_Response * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CGCSystemMsg_GetPurchaseTrust_Response &);
	void MergeFrom(const CGCSystemMsg_GetPurchaseTrust_Response &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_has_prior_purchase_history();
	void clear_has_prior_purchase_history();
	bool has_prior_purchase_history();
	void set_has_prior_purchase_history(bool);
	bool has_has_no_recent_password_resets();
	void clear_has_no_recent_password_resets();
	bool has_no_recent_password_resets();
	void set_has_no_recent_password_resets(bool);
	bool has_is_wallet_cash_trusted();
	void clear_is_wallet_cash_trusted();
	bool is_wallet_cash_trusted();
	void set_is_wallet_cash_trusted(bool);
	bool has_time_all_trusted();
	void clear_time_all_trusted();
	uint32 time_all_trusted();
	void set_time_all_trusted(uint32);
	void set_has_has_prior_purchase_history();
	void clear_has_has_prior_purchase_history();
	void set_has_has_no_recent_password_resets();
	void clear_has_has_no_recent_password_resets();
	void set_has_is_wallet_cash_trusted();
	void clear_has_is_wallet_cash_trusted();
	void set_has_time_all_trusted();
	void clear_has_time_all_trusted();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:7232
class CMsgGCHAccountVacStatusChange : public Message {
public:

	static const int kSteamIdFieldNumber = 1;
	static const int kAppIdFieldNumber = 2;
	static const int kRtimeVacbanStartsFieldNumber = 3;
	static const int kIsBannedNowFieldNumber = 4;
	static const int kIsBannedFutureFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 steam_id_;  // +0x18
	uint32 app_id_;  // +0x20
	uint32 rtime_vacban_starts_;  // +0x24
	bool is_banned_now_;  // +0x28
	bool is_banned_future_;  // +0x29

	static CMsgGCHAccountVacStatusChange * default_instance_;
	CMsgGCHAccountVacStatusChange();
	virtual ~CMsgGCHAccountVacStatusChange();
	CMsgGCHAccountVacStatusChange(const CMsgGCHAccountVacStatusChange &);
	CMsgGCHAccountVacStatusChange & operator=(const CMsgGCHAccountVacStatusChange &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCHAccountVacStatusChange & default_instance();
	void Swap(CMsgGCHAccountVacStatusChange *);
	virtual CMsgGCHAccountVacStatusChange * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCHAccountVacStatusChange &);
	void MergeFrom(const CMsgGCHAccountVacStatusChange &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_app_id();
	void clear_app_id();
	uint32 app_id();
	void set_app_id(uint32);
	bool has_rtime_vacban_starts();
	void clear_rtime_vacban_starts();
	uint32 rtime_vacban_starts();
	void set_rtime_vacban_starts(uint32);
	bool has_is_banned_now();
	void clear_is_banned_now();
	bool is_banned_now();
	void set_is_banned_now(bool);
	bool has_is_banned_future();
	void clear_is_banned_future();
	bool is_banned_future();
	void set_is_banned_future(bool);
	void set_has_steam_id();
	void clear_has_steam_id();
	void set_has_app_id();
	void clear_has_app_id();
	void set_has_rtime_vacban_starts();
	void clear_has_rtime_vacban_starts();
	void set_has_is_banned_now();
	void clear_has_is_banned_now();
	void set_has_is_banned_future();
	void clear_has_is_banned_future();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:7351
class CMsgGCGetPartnerAccountLink : public Message {
public:

	static const int kSteamidFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 steamid_;  // +0x18

	static CMsgGCGetPartnerAccountLink * default_instance_;
	CMsgGCGetPartnerAccountLink();
	virtual ~CMsgGCGetPartnerAccountLink();
	CMsgGCGetPartnerAccountLink(const CMsgGCGetPartnerAccountLink &);
	CMsgGCGetPartnerAccountLink & operator=(const CMsgGCGetPartnerAccountLink &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCGetPartnerAccountLink & default_instance();
	void Swap(CMsgGCGetPartnerAccountLink *);
	virtual CMsgGCGetPartnerAccountLink * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCGetPartnerAccountLink &);
	void MergeFrom(const CMsgGCGetPartnerAccountLink &);
	virtual void Clear();
	virtual bool IsInitialized();
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:7430
class CMsgGCGetPartnerAccountLink_Response : public Message {
public:

	static const int kPwidFieldNumber = 1;
	static const int kNexonidFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 pwid_;  // +0x18
	uint32 nexonid_;  // +0x1c

	static CMsgGCGetPartnerAccountLink_Response * default_instance_;
	CMsgGCGetPartnerAccountLink_Response();
	virtual ~CMsgGCGetPartnerAccountLink_Response();
	CMsgGCGetPartnerAccountLink_Response(const CMsgGCGetPartnerAccountLink_Response &);
	CMsgGCGetPartnerAccountLink_Response & operator=(const CMsgGCGetPartnerAccountLink_Response &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCGetPartnerAccountLink_Response & default_instance();
	void Swap(CMsgGCGetPartnerAccountLink_Response *);
	virtual CMsgGCGetPartnerAccountLink_Response * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCGetPartnerAccountLink_Response &);
	void MergeFrom(const CMsgGCGetPartnerAccountLink_Response &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_pwid();
	void clear_pwid();
	uint32 pwid();
	void set_pwid(uint32);
	bool has_nexonid();
	void clear_nexonid();
	uint32 nexonid();
	void set_nexonid(uint32);
	void set_has_pwid();
	void clear_has_pwid();
	void set_has_nexonid();
	void clear_has_nexonid();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:7519
class CMsgGCRoutingInfo : public Message {
public:

	static const CMsgGCRoutingInfo_RoutingMethod RANDOM;
	static const CMsgGCRoutingInfo_RoutingMethod DISCARD = 1;
	static const CMsgGCRoutingInfo_RoutingMethod CLIENT_STEAMID = 2;
	static const CMsgGCRoutingInfo_RoutingMethod PROTOBUF_FIELD_UINT64 = 3;
	static const CMsgGCRoutingInfo_RoutingMethod WEBAPI_PARAM = 4;
	static const CMsgGCRoutingInfo_RoutingMethod WEBAPI_PARAM_STEAMID_ACCOUNTID = 5;
	static const CMsgGCRoutingInfo_RoutingMethod RoutingMethod_MIN;
	static const CMsgGCRoutingInfo_RoutingMethod RoutingMethod_MAX = 5;
	static const int RoutingMethod_ARRAYSIZE = 6;
	static const int kDirIndexFieldNumber = 1;
	static const int kMethodFieldNumber = 2;
	static const int kFallbackFieldNumber = 3;
	static const int kProtobufFieldFieldNumber = 4;
	static const int kWebapiParamFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int method_;  // +0x28
	int fallback_;  // +0x2c
	string * webapi_param_;  // +0x30
	uint32 protobuf_field_;  // +0x38

	static CMsgGCRoutingInfo * default_instance_;
	typedef CMsgGCRoutingInfo_RoutingMethod RoutingMethod;
	CMsgGCRoutingInfo();
	virtual ~CMsgGCRoutingInfo();
	CMsgGCRoutingInfo(const CMsgGCRoutingInfo &);
	CMsgGCRoutingInfo & operator=(const CMsgGCRoutingInfo &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCRoutingInfo & default_instance();
	void Swap(CMsgGCRoutingInfo *);
	virtual CMsgGCRoutingInfo * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCRoutingInfo &);
	void MergeFrom(const CMsgGCRoutingInfo &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool RoutingMethod_IsValid(int);
	const EnumDescriptor * RoutingMethod_descriptor();
	const string & RoutingMethod_Name(RoutingMethod);
	bool RoutingMethod_Parse(const string &, RoutingMethod *);
	int dir_index_size();
	void clear_dir_index();
	uint32 dir_index(int);
	void set_dir_index(int, uint32);
	void add_dir_index(uint32);
	const RepeatedField<unsigned int> & dir_index();
	RepeatedField<unsigned int> * mutable_dir_index();
	bool has_method();
	void clear_method();
	CMsgGCRoutingInfo_RoutingMethod method();
	void set_method(CMsgGCRoutingInfo_RoutingMethod);
	bool has_fallback();
	void clear_fallback();
	CMsgGCRoutingInfo_RoutingMethod fallback();
	void set_fallback(CMsgGCRoutingInfo_RoutingMethod);
	bool has_protobuf_field();
	void clear_protobuf_field();
	uint32 protobuf_field();
	void set_protobuf_field(uint32);
	bool has_webapi_param();
	void clear_webapi_param();
	const string & webapi_param();
	void set_webapi_param(const string &);
	void set_webapi_param(const char *);
	void set_webapi_param(const char *, size_t);
	string * mutable_webapi_param();
	string * release_webapi_param();
	void set_allocated_webapi_param(string *);
	void set_has_method();
	void clear_has_method();
	void set_has_fallback();
	void clear_has_fallback();
	void set_has_protobuf_field();
	void clear_has_protobuf_field();
	void set_has_webapi_param();
	void clear_has_webapi_param();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:7674
class CMsgGCMsgMasterSetWebAPIRouting_Entry : public Message {
public:

	static const int kInterfaceNameFieldNumber = 1;
	static const int kMethodNameFieldNumber = 2;
	static const int kRoutingFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * interface_name_;  // +0x18
	string * method_name_;  // +0x20

	static CMsgGCMsgMasterSetWebAPIRouting_Entry * default_instance_;
	CMsgGCMsgMasterSetWebAPIRouting_Entry();
	virtual ~CMsgGCMsgMasterSetWebAPIRouting_Entry();
	CMsgGCMsgMasterSetWebAPIRouting_Entry(const CMsgGCMsgMasterSetWebAPIRouting_Entry &);
	CMsgGCMsgMasterSetWebAPIRouting_Entry & operator=(const CMsgGCMsgMasterSetWebAPIRouting_Entry &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCMsgMasterSetWebAPIRouting_Entry & default_instance();
	void Swap(CMsgGCMsgMasterSetWebAPIRouting_Entry *);
	virtual CMsgGCMsgMasterSetWebAPIRouting_Entry * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCMsgMasterSetWebAPIRouting_Entry &);
	void MergeFrom(const CMsgGCMsgMasterSetWebAPIRouting_Entry &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_interface_name();
	void clear_interface_name();
	const string & interface_name();
	void set_interface_name(const string &);
	void set_interface_name(const char *);
	void set_interface_name(const char *, size_t);
	string * mutable_interface_name();
	string * release_interface_name();
	void set_allocated_interface_name(string *);
	bool has_method_name();
	void clear_method_name();
	const string & method_name();
	void set_method_name(const string &);
	void set_method_name(const char *);
	void set_method_name(const char *, size_t);
	string * mutable_method_name();
	string * release_method_name();
	void set_allocated_method_name(string *);
	bool has_routing();
	void clear_routing();
	const CMsgGCRoutingInfo & routing();
	CMsgGCRoutingInfo * mutable_routing();
	CMsgGCRoutingInfo * release_routing();
	void set_allocated_routing(CMsgGCRoutingInfo *);
	void set_has_interface_name();
	void clear_has_interface_name();
	void set_has_method_name();
	void clear_has_method_name();
	void set_has_routing();
	void clear_has_routing();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:7785
class CMsgGCMsgMasterSetWebAPIRouting : public Message {
public:

	static const int kEntriesFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgGCMsgMasterSetWebAPIRouting * default_instance_;
	CMsgGCMsgMasterSetWebAPIRouting();
	virtual ~CMsgGCMsgMasterSetWebAPIRouting();
	CMsgGCMsgMasterSetWebAPIRouting(const CMsgGCMsgMasterSetWebAPIRouting &);
	CMsgGCMsgMasterSetWebAPIRouting & operator=(const CMsgGCMsgMasterSetWebAPIRouting &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCMsgMasterSetWebAPIRouting & default_instance();
	void Swap(CMsgGCMsgMasterSetWebAPIRouting *);
	virtual CMsgGCMsgMasterSetWebAPIRouting * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCMsgMasterSetWebAPIRouting &);
	void MergeFrom(const CMsgGCMsgMasterSetWebAPIRouting &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	const CMsgGCMsgMasterSetWebAPIRouting_Entry & entries(int);
	CMsgGCMsgMasterSetWebAPIRouting_Entry * mutable_entries(int);
	CMsgGCMsgMasterSetWebAPIRouting_Entry * add_entries();
	const RepeatedPtrField<CMsgGCMsgMasterSetWebAPIRouting_Entry> & entries();
	RepeatedPtrField<CMsgGCMsgMasterSetWebAPIRouting_Entry> * mutable_entries();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:7869
class CMsgGCMsgMasterSetClientMsgRouting_Entry : public Message {
public:

	static const int kMsgTypeFieldNumber = 1;
	static const int kRoutingFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 msg_type_;  // +0x20

	static CMsgGCMsgMasterSetClientMsgRouting_Entry * default_instance_;
	CMsgGCMsgMasterSetClientMsgRouting_Entry();
	virtual ~CMsgGCMsgMasterSetClientMsgRouting_Entry();
	CMsgGCMsgMasterSetClientMsgRouting_Entry(const CMsgGCMsgMasterSetClientMsgRouting_Entry &);
	CMsgGCMsgMasterSetClientMsgRouting_Entry & operator=(const CMsgGCMsgMasterSetClientMsgRouting_Entry &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCMsgMasterSetClientMsgRouting_Entry & default_instance();
	void Swap(CMsgGCMsgMasterSetClientMsgRouting_Entry *);
	virtual CMsgGCMsgMasterSetClientMsgRouting_Entry * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCMsgMasterSetClientMsgRouting_Entry &);
	void MergeFrom(const CMsgGCMsgMasterSetClientMsgRouting_Entry &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_routing();
	void clear_routing();
	const CMsgGCRoutingInfo & routing();
	CMsgGCRoutingInfo * mutable_routing();
	CMsgGCRoutingInfo * release_routing();
	void set_allocated_routing(CMsgGCRoutingInfo *);
	void set_has_msg_type();
	void clear_has_msg_type();
	void set_has_routing();
	void clear_has_routing();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:7960
class CMsgGCMsgMasterSetClientMsgRouting : public Message {
public:

	static const int kEntriesFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgGCMsgMasterSetClientMsgRouting * default_instance_;
	CMsgGCMsgMasterSetClientMsgRouting();
	virtual ~CMsgGCMsgMasterSetClientMsgRouting();
	CMsgGCMsgMasterSetClientMsgRouting(const CMsgGCMsgMasterSetClientMsgRouting &);
	CMsgGCMsgMasterSetClientMsgRouting & operator=(const CMsgGCMsgMasterSetClientMsgRouting &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCMsgMasterSetClientMsgRouting & default_instance();
	void Swap(CMsgGCMsgMasterSetClientMsgRouting *);
	virtual CMsgGCMsgMasterSetClientMsgRouting * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCMsgMasterSetClientMsgRouting &);
	void MergeFrom(const CMsgGCMsgMasterSetClientMsgRouting &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	const CMsgGCMsgMasterSetClientMsgRouting_Entry & entries(int);
	CMsgGCMsgMasterSetClientMsgRouting_Entry * mutable_entries(int);
	CMsgGCMsgMasterSetClientMsgRouting_Entry * add_entries();
	const RepeatedPtrField<CMsgGCMsgMasterSetClientMsgRouting_Entry> & entries();
	RepeatedPtrField<CMsgGCMsgMasterSetClientMsgRouting_Entry> * mutable_entries();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:8044
class CMsgGCMsgMasterSetWebAPIRouting_Response : public Message {
public:

	static const int kEresultFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 eresult_;  // +0x18

	static CMsgGCMsgMasterSetWebAPIRouting_Response * default_instance_;
	CMsgGCMsgMasterSetWebAPIRouting_Response();
	virtual ~CMsgGCMsgMasterSetWebAPIRouting_Response();
	CMsgGCMsgMasterSetWebAPIRouting_Response(const CMsgGCMsgMasterSetWebAPIRouting_Response &);
	CMsgGCMsgMasterSetWebAPIRouting_Response & operator=(const CMsgGCMsgMasterSetWebAPIRouting_Response &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCMsgMasterSetWebAPIRouting_Response & default_instance();
	void Swap(CMsgGCMsgMasterSetWebAPIRouting_Response *);
	virtual CMsgGCMsgMasterSetWebAPIRouting_Response * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCMsgMasterSetWebAPIRouting_Response &);
	void MergeFrom(const CMsgGCMsgMasterSetWebAPIRouting_Response &);
	virtual void Clear();
	virtual bool IsInitialized();
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:8123
class CMsgGCMsgMasterSetClientMsgRouting_Response : public Message {
public:

	static const int kEresultFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 eresult_;  // +0x18

	static CMsgGCMsgMasterSetClientMsgRouting_Response * default_instance_;
	CMsgGCMsgMasterSetClientMsgRouting_Response();
	virtual ~CMsgGCMsgMasterSetClientMsgRouting_Response();
	CMsgGCMsgMasterSetClientMsgRouting_Response(const CMsgGCMsgMasterSetClientMsgRouting_Response &);
	CMsgGCMsgMasterSetClientMsgRouting_Response & operator=(const CMsgGCMsgMasterSetClientMsgRouting_Response &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCMsgMasterSetClientMsgRouting_Response & default_instance();
	void Swap(CMsgGCMsgMasterSetClientMsgRouting_Response *);
	virtual CMsgGCMsgMasterSetClientMsgRouting_Response * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCMsgMasterSetClientMsgRouting_Response &);
	void MergeFrom(const CMsgGCMsgMasterSetClientMsgRouting_Response &);
	virtual void Clear();
	virtual bool IsInitialized();
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:8202
class CMsgGCMsgSetOptions_MessageRange : public Message {
public:

	static const int kLowFieldNumber = 1;
	static const int kHighFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 low_;  // +0x18
	uint32 high_;  // +0x1c

	static CMsgGCMsgSetOptions_MessageRange * default_instance_;
	CMsgGCMsgSetOptions_MessageRange();
	virtual ~CMsgGCMsgSetOptions_MessageRange();
	CMsgGCMsgSetOptions_MessageRange(const CMsgGCMsgSetOptions_MessageRange &);
	CMsgGCMsgSetOptions_MessageRange & operator=(const CMsgGCMsgSetOptions_MessageRange &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCMsgSetOptions_MessageRange & default_instance();
	void Swap(CMsgGCMsgSetOptions_MessageRange *);
	virtual CMsgGCMsgSetOptions_MessageRange * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCMsgSetOptions_MessageRange &);
	void MergeFrom(const CMsgGCMsgSetOptions_MessageRange &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_low();
	void clear_low();
	uint32 low();
	void set_low(uint32);
	bool has_high();
	void clear_high();
	uint32 high();
	void set_high(uint32);
	void set_has_low();
	void clear_has_low();
	void set_has_high();
	void clear_has_high();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:8291
class CMsgGCMsgSetOptions : public Message {
public:

	static const CMsgGCMsgSetOptions_Option NOTIFY_USER_SESSIONS;
	static const CMsgGCMsgSetOptions_Option NOTIFY_SERVER_SESSIONS = 1;
	static const CMsgGCMsgSetOptions_Option NOTIFY_ACHIEVEMENTS = 2;
	static const CMsgGCMsgSetOptions_Option NOTIFY_VAC_ACTION = 3;
	static const CMsgGCMsgSetOptions_Option Option_MIN;
	static const CMsgGCMsgSetOptions_Option Option_MAX = 3;
	static const int Option_ARRAYSIZE = 4;
	static const CMsgGCMsgSetOptions_GCSQLVersion GCSQL_VERSION_BASELINE = 1;
	static const CMsgGCMsgSetOptions_GCSQLVersion GCSQL_VERSION_BOOLTYPE = 2;
	static const CMsgGCMsgSetOptions_GCSQLVersion GCSQLVersion_MIN = 1;
	static const CMsgGCMsgSetOptions_GCSQLVersion GCSQLVersion_MAX = 2;
	static const int GCSQLVersion_ARRAYSIZE = 3;
	static const int kOptionsFieldNumber = 1;
	static const int kClientMsgRangesFieldNumber = 2;
	static const int kGcsqlVersionFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int gcsql_version_;  // +0x40

	static CMsgGCMsgSetOptions * default_instance_;
	typedef CMsgGCMsgSetOptions_Option Option;
	typedef CMsgGCMsgSetOptions_GCSQLVersion GCSQLVersion;
	CMsgGCMsgSetOptions();
	virtual ~CMsgGCMsgSetOptions();
	CMsgGCMsgSetOptions(const CMsgGCMsgSetOptions &);
	CMsgGCMsgSetOptions & operator=(const CMsgGCMsgSetOptions &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCMsgSetOptions & default_instance();
	void Swap(CMsgGCMsgSetOptions *);
	virtual CMsgGCMsgSetOptions * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCMsgSetOptions &);
	void MergeFrom(const CMsgGCMsgSetOptions &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool Option_IsValid(int);
	const EnumDescriptor * Option_descriptor();
	const string & Option_Name(Option);
	bool Option_Parse(const string &, Option *);
	bool GCSQLVersion_IsValid(int);
	const EnumDescriptor * GCSQLVersion_descriptor();
	const string & GCSQLVersion_Name(GCSQLVersion);
	bool GCSQLVersion_Parse(const string &, GCSQLVersion *);
	int options_size();
	void clear_options();
	CMsgGCMsgSetOptions_Option options(int);
	void set_options(int, CMsgGCMsgSetOptions_Option);
	void add_options(CMsgGCMsgSetOptions_Option);
	const RepeatedField<int> & options();
	RepeatedField<int> * mutable_options();
	int client_msg_ranges_size();
	void clear_client_msg_ranges();
	const CMsgGCMsgSetOptions_MessageRange & client_msg_ranges(int);
	CMsgGCMsgSetOptions_MessageRange * mutable_client_msg_ranges(int);
	CMsgGCMsgSetOptions_MessageRange * add_client_msg_ranges();
	const RepeatedPtrField<CMsgGCMsgSetOptions_MessageRange> & client_msg_ranges();
	RepeatedPtrField<CMsgGCMsgSetOptions_MessageRange> * mutable_client_msg_ranges();
	bool has_gcsql_version();
	void clear_gcsql_version();
	CMsgGCMsgSetOptions_GCSQLVersion gcsql_version();
	void set_gcsql_version(CMsgGCMsgSetOptions_GCSQLVersion);
	void set_has_gcsql_version();
	void clear_has_gcsql_version();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:8446
class CMsgGCHUpdateSession_ExtraField : public Message {
public:

	static const int kNameFieldNumber = 1;
	static const int kValueFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * name_;  // +0x18
	string * value_;  // +0x20

	static CMsgGCHUpdateSession_ExtraField * default_instance_;
	CMsgGCHUpdateSession_ExtraField();
	virtual ~CMsgGCHUpdateSession_ExtraField();
	CMsgGCHUpdateSession_ExtraField(const CMsgGCHUpdateSession_ExtraField &);
	CMsgGCHUpdateSession_ExtraField & operator=(const CMsgGCHUpdateSession_ExtraField &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCHUpdateSession_ExtraField & default_instance();
	void Swap(CMsgGCHUpdateSession_ExtraField *);
	virtual CMsgGCHUpdateSession_ExtraField * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCHUpdateSession_ExtraField &);
	void MergeFrom(const CMsgGCHUpdateSession_ExtraField &);
	virtual void Clear();
	virtual bool IsInitialized();
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:8545
class CMsgGCHUpdateSession : public Message {
public:

	static const int kSteamIdFieldNumber = 1;
	static const int kAppIdFieldNumber = 2;
	static const int kOnlineFieldNumber = 3;
	static const int kServerSteamIdFieldNumber = 4;
	static const int kServerAddrFieldNumber = 5;
	static const int kServerPortFieldNumber = 6;
	static const int kOsTypeFieldNumber = 7;
	static const int kClientAddrFieldNumber = 8;
	static const int kExtraFieldsFieldNumber = 9;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 steam_id_;  // +0x18
	uint32 app_id_;  // +0x20
	bool online_;  // +0x24

	uint64 server_steam_id_;  // +0x28
	uint32 server_addr_;  // +0x30
	uint32 server_port_;  // +0x34
	uint32 os_type_;  // +0x38
	uint32 client_addr_;  // +0x3c

	static CMsgGCHUpdateSession * default_instance_;
	CMsgGCHUpdateSession();
	virtual ~CMsgGCHUpdateSession();
	CMsgGCHUpdateSession(const CMsgGCHUpdateSession &);
	CMsgGCHUpdateSession & operator=(const CMsgGCHUpdateSession &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCHUpdateSession & default_instance();
	void Swap(CMsgGCHUpdateSession *);
	virtual CMsgGCHUpdateSession * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCHUpdateSession &);
	void MergeFrom(const CMsgGCHUpdateSession &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_app_id();
	void clear_app_id();
	uint32 app_id();
	void set_app_id(uint32);
	bool has_online();
	void clear_online();
	bool online();
	void set_online(bool);
	bool has_server_steam_id();
	void clear_server_steam_id();
	uint64 server_steam_id();
	void set_server_steam_id(uint64);
	bool has_server_addr();
	void clear_server_addr();
	uint32 server_addr();
	void set_server_addr(uint32);
	bool has_server_port();
	void clear_server_port();
	uint32 server_port();
	void set_server_port(uint32);
	bool has_os_type();
	void clear_os_type();
	uint32 os_type();
	void set_os_type(uint32);
	bool has_client_addr();
	void clear_client_addr();
	uint32 client_addr();
	void set_client_addr(uint32);
	int extra_fields_size();
	void clear_extra_fields();
	const CMsgGCHUpdateSession_ExtraField & extra_fields(int);
	CMsgGCHUpdateSession_ExtraField * mutable_extra_fields(int);
	CMsgGCHUpdateSession_ExtraField * add_extra_fields();
	const RepeatedPtrField<CMsgGCHUpdateSession_ExtraField> & extra_fields();
	RepeatedPtrField<CMsgGCHUpdateSession_ExtraField> * mutable_extra_fields();
	void set_has_steam_id();
	void clear_has_steam_id();
	void set_has_app_id();
	void clear_has_app_id();
	void set_has_online();
	void clear_has_online();
	void set_has_server_steam_id();
	void clear_has_server_steam_id();
	void set_has_server_addr();
	void clear_has_server_addr();
	void set_has_server_port();
	void clear_has_server_port();
	void set_has_os_type();
	void clear_has_os_type();
	void set_has_client_addr();
	void clear_has_client_addr();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:8709
class CMsgNotificationOfSuspiciousActivity_MultipleGameInstances : public Message {
public:

	static const int kAppInstanceCountFieldNumber = 1;
	static const int kOtherSteamidsFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 app_instance_count_;  // +0x28

	static CMsgNotificationOfSuspiciousActivity_MultipleGameInstances * default_instance_;
	CMsgNotificationOfSuspiciousActivity_MultipleGameInstances();
	virtual ~CMsgNotificationOfSuspiciousActivity_MultipleGameInstances();
	CMsgNotificationOfSuspiciousActivity_MultipleGameInstances(const CMsgNotificationOfSuspiciousActivity_MultipleGameInstances &);
	CMsgNotificationOfSuspiciousActivity_MultipleGameInstances & operator=(const CMsgNotificationOfSuspiciousActivity_MultipleGameInstances &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgNotificationOfSuspiciousActivity_MultipleGameInstances & default_instance();
	void Swap(CMsgNotificationOfSuspiciousActivity_MultipleGameInstances *);
	virtual CMsgNotificationOfSuspiciousActivity_MultipleGameInstances * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgNotificationOfSuspiciousActivity_MultipleGameInstances &);
	void MergeFrom(const CMsgNotificationOfSuspiciousActivity_MultipleGameInstances &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_app_instance_count();
	void clear_app_instance_count();
	uint32 app_instance_count();
	void set_app_instance_count(uint32);
	int other_steamids_size();
	void clear_other_steamids();
	uint64 other_steamids(int);
	void set_other_steamids(int, uint64);
	void add_other_steamids(uint64);
	const RepeatedField<long unsigned int> & other_steamids();
	RepeatedField<long unsigned int> * mutable_other_steamids();
	void set_has_app_instance_count();
	void clear_has_app_instance_count();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:8801
class CMsgNotificationOfSuspiciousActivity : public Message {
public:

	static const int kSteamidFieldNumber = 1;
	static const int kAppidFieldNumber = 2;
	static const int kMultipleInstancesFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 steamid_;  // +0x18
	uint32 appid_;  // +0x28

	static CMsgNotificationOfSuspiciousActivity * default_instance_;
	CMsgNotificationOfSuspiciousActivity();
	virtual ~CMsgNotificationOfSuspiciousActivity();
	CMsgNotificationOfSuspiciousActivity(const CMsgNotificationOfSuspiciousActivity &);
	CMsgNotificationOfSuspiciousActivity & operator=(const CMsgNotificationOfSuspiciousActivity &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgNotificationOfSuspiciousActivity & default_instance();
	void Swap(CMsgNotificationOfSuspiciousActivity *);
	virtual CMsgNotificationOfSuspiciousActivity * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgNotificationOfSuspiciousActivity &);
	void MergeFrom(const CMsgNotificationOfSuspiciousActivity &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_appid();
	void clear_appid();
	uint32 appid();
	void set_appid(uint32);
	bool has_multiple_instances();
	void clear_multiple_instances();
	const CMsgNotificationOfSuspiciousActivity_MultipleGameInstances & multiple_instances();
	CMsgNotificationOfSuspiciousActivity_MultipleGameInstances * mutable_multiple_instances();
	CMsgNotificationOfSuspiciousActivity_MultipleGameInstances * release_multiple_instances();
	void set_allocated_multiple_instances(CMsgNotificationOfSuspiciousActivity_MultipleGameInstances *);
	void set_has_steamid();
	void clear_has_steamid();
	void set_has_appid();
	void clear_has_appid();
	void set_has_multiple_instances();
	void clear_has_multiple_instances();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:8904
class CMsgDPPartnerMicroTxns_PartnerMicroTxn : public Message {
public:

	static const int kInitTimeFieldNumber = 1;
	static const int kLastUpdateTimeFieldNumber = 2;
	static const int kTxnIdFieldNumber = 3;
	static const int kAccountIdFieldNumber = 4;
	static const int kLineItemFieldNumber = 5;
	static const int kItemIdFieldNumber = 6;
	static const int kDefIndexFieldNumber = 7;
	static const int kPriceFieldNumber = 8;
	static const int kTaxFieldNumber = 9;
	static const int kPriceUsdFieldNumber = 10;
	static const int kTaxUsdFieldNumber = 11;
	static const int kPurchaseTypeFieldNumber = 12;
	static const int kSteamTxnTypeFieldNumber = 13;
	static const int kCountryCodeFieldNumber = 14;
	static const int kRegionCodeFieldNumber = 15;
	static const int kQuantityFieldNumber = 16;
	static const int kRefTransIdFieldNumber = 17;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 init_time_;  // +0x18
	uint32 last_update_time_;  // +0x1c
	uint64 txn_id_;  // +0x20
	uint32 account_id_;  // +0x28
	uint32 line_item_;  // +0x2c
	uint64 item_id_;  // +0x30
	uint32 def_index_;  // +0x38
	uint32 price_;  // +0x3c
	uint32 tax_;  // +0x40
	uint32 price_usd_;  // +0x44
	uint32 tax_usd_;  // +0x48
	uint32 purchase_type_;  // +0x4c
	string * country_code_;  // +0x50
	uint32 steam_txn_type_;  // +0x58
	int32 quantity_;  // +0x5c
	string * region_code_;  // +0x60
	uint64 ref_trans_id_;  // +0x68

	static CMsgDPPartnerMicroTxns_PartnerMicroTxn * default_instance_;
	CMsgDPPartnerMicroTxns_PartnerMicroTxn();
	virtual ~CMsgDPPartnerMicroTxns_PartnerMicroTxn();
	CMsgDPPartnerMicroTxns_PartnerMicroTxn(const CMsgDPPartnerMicroTxns_PartnerMicroTxn &);
	CMsgDPPartnerMicroTxns_PartnerMicroTxn & operator=(const CMsgDPPartnerMicroTxns_PartnerMicroTxn &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDPPartnerMicroTxns_PartnerMicroTxn & default_instance();
	void Swap(CMsgDPPartnerMicroTxns_PartnerMicroTxn *);
	virtual CMsgDPPartnerMicroTxns_PartnerMicroTxn * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDPPartnerMicroTxns_PartnerMicroTxn &);
	void MergeFrom(const CMsgDPPartnerMicroTxns_PartnerMicroTxn &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_init_time();
	void clear_init_time();
	uint32 init_time();
	void set_init_time(uint32);
	bool has_last_update_time();
	void clear_last_update_time();
	uint32 last_update_time();
	void set_last_update_time(uint32);
	bool has_txn_id();
	void clear_txn_id();
	uint64 txn_id();
	void set_txn_id(uint64);
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	bool has_line_item();
	void clear_line_item();
	uint32 line_item();
	void set_line_item(uint32);
	bool has_item_id();
	void clear_item_id();
	uint64 item_id();
	void set_item_id(uint64);
	bool has_def_index();
	void clear_def_index();
	uint32 def_index();
	void set_def_index(uint32);
	bool has_price();
	void clear_price();
	uint32 price();
	void set_price(uint32);
	bool has_tax();
	void clear_tax();
	uint32 tax();
	void set_tax(uint32);
	bool has_price_usd();
	void clear_price_usd();
	uint32 price_usd();
	void set_price_usd(uint32);
	bool has_tax_usd();
	void clear_tax_usd();
	uint32 tax_usd();
	void set_tax_usd(uint32);
	bool has_purchase_type();
	void clear_purchase_type();
	uint32 purchase_type();
	void set_purchase_type(uint32);
	bool has_steam_txn_type();
	void clear_steam_txn_type();
	uint32 steam_txn_type();
	void set_steam_txn_type(uint32);
	bool has_country_code();
	void clear_country_code();
	const string & country_code();
	void set_country_code(const string &);
	void set_country_code(const char *);
	void set_country_code(const char *, size_t);
	string * mutable_country_code();
	string * release_country_code();
	void set_allocated_country_code(string *);
	bool has_region_code();
	void clear_region_code();
	const string & region_code();
	void set_region_code(const string &);
	void set_region_code(const char *);
	void set_region_code(const char *, size_t);
	string * mutable_region_code();
	string * release_region_code();
	void set_allocated_region_code(string *);
	bool has_quantity();
	void clear_quantity();
	int32 quantity();
	void set_quantity(int32);
	bool has_ref_trans_id();
	void clear_ref_trans_id();
	uint64 ref_trans_id();
	void set_ref_trans_id(uint64);
	void set_has_init_time();
	void clear_has_init_time();
	void set_has_last_update_time();
	void clear_has_last_update_time();
	void set_has_txn_id();
	void clear_has_txn_id();
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_line_item();
	void clear_has_line_item();
	void set_has_item_id();
	void clear_has_item_id();
	void set_has_def_index();
	void clear_has_def_index();
	void set_has_price();
	void clear_has_price();
	void set_has_tax();
	void clear_has_tax();
	void set_has_price_usd();
	void clear_has_price_usd();
	void set_has_tax_usd();
	void clear_has_tax_usd();
	void set_has_purchase_type();
	void clear_has_purchase_type();
	void set_has_steam_txn_type();
	void clear_has_steam_txn_type();
	void set_has_country_code();
	void clear_has_country_code();
	void set_has_region_code();
	void clear_has_region_code();
	void set_has_quantity();
	void clear_has_quantity();
	void set_has_ref_trans_id();
	void clear_has_ref_trans_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:9153
class CMsgDPPartnerMicroTxns_PartnerInfo : public Message {
public:

	static const int kPartnerIdFieldNumber = 1;
	static const int kPartnerNameFieldNumber = 2;
	static const int kCurrencyCodeFieldNumber = 3;
	static const int kCurrencyNameFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * partner_name_;  // +0x18
	string * currency_code_;  // +0x20
	string * currency_name_;  // +0x28
	uint32 partner_id_;  // +0x30

	static CMsgDPPartnerMicroTxns_PartnerInfo * default_instance_;
	CMsgDPPartnerMicroTxns_PartnerInfo();
	virtual ~CMsgDPPartnerMicroTxns_PartnerInfo();
	CMsgDPPartnerMicroTxns_PartnerInfo(const CMsgDPPartnerMicroTxns_PartnerInfo &);
	CMsgDPPartnerMicroTxns_PartnerInfo & operator=(const CMsgDPPartnerMicroTxns_PartnerInfo &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDPPartnerMicroTxns_PartnerInfo & default_instance();
	void Swap(CMsgDPPartnerMicroTxns_PartnerInfo *);
	virtual CMsgDPPartnerMicroTxns_PartnerInfo * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDPPartnerMicroTxns_PartnerInfo &);
	void MergeFrom(const CMsgDPPartnerMicroTxns_PartnerInfo &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_partner_id();
	void clear_partner_id();
	uint32 partner_id();
	void set_partner_id(uint32);
	bool has_partner_name();
	void clear_partner_name();
	const string & partner_name();
	void set_partner_name(const string &);
	void set_partner_name(const char *);
	void set_partner_name(const char *, size_t);
	string * mutable_partner_name();
	string * release_partner_name();
	void set_allocated_partner_name(string *);
	bool has_currency_code();
	void clear_currency_code();
	const string & currency_code();
	void set_currency_code(const string &);
	void set_currency_code(const char *);
	void set_currency_code(const char *, size_t);
	string * mutable_currency_code();
	string * release_currency_code();
	void set_allocated_currency_code(string *);
	bool has_currency_name();
	void clear_currency_name();
	const string & currency_name();
	void set_currency_name(const string &);
	void set_currency_name(const char *);
	void set_currency_name(const char *, size_t);
	string * mutable_currency_name();
	string * release_currency_name();
	void set_allocated_currency_name(string *);
	void set_has_partner_id();
	void clear_has_partner_id();
	void set_has_partner_name();
	void clear_has_partner_name();
	void set_has_currency_code();
	void clear_has_currency_code();
	void set_has_currency_name();
	void clear_has_currency_name();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:9277
class CMsgDPPartnerMicroTxns : public Message {
public:

	static const int kAppidFieldNumber = 1;
	static const int kGcNameFieldNumber = 2;
	static const int kPartnerFieldNumber = 3;
	static const int kTransactionsFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * gc_name_;  // +0x18
	uint32 appid_;  // +0x40

	static CMsgDPPartnerMicroTxns * default_instance_;
	CMsgDPPartnerMicroTxns();
	virtual ~CMsgDPPartnerMicroTxns();
	CMsgDPPartnerMicroTxns(const CMsgDPPartnerMicroTxns &);
	CMsgDPPartnerMicroTxns & operator=(const CMsgDPPartnerMicroTxns &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDPPartnerMicroTxns & default_instance();
	void Swap(CMsgDPPartnerMicroTxns *);
	virtual CMsgDPPartnerMicroTxns * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDPPartnerMicroTxns &);
	void MergeFrom(const CMsgDPPartnerMicroTxns &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_gc_name();
	void clear_gc_name();
	const string & gc_name();
	void set_gc_name(const string &);
	void set_gc_name(const char *);
	void set_gc_name(const char *, size_t);
	string * mutable_gc_name();
	string * release_gc_name();
	void set_allocated_gc_name(string *);
	bool has_partner();
	void clear_partner();
	const CMsgDPPartnerMicroTxns_PartnerInfo & partner();
	CMsgDPPartnerMicroTxns_PartnerInfo * mutable_partner();
	CMsgDPPartnerMicroTxns_PartnerInfo * release_partner();
	void set_allocated_partner(CMsgDPPartnerMicroTxns_PartnerInfo *);
	int transactions_size();
	void clear_transactions();
	const CMsgDPPartnerMicroTxns_PartnerMicroTxn & transactions(int);
	CMsgDPPartnerMicroTxns_PartnerMicroTxn * mutable_transactions(int);
	CMsgDPPartnerMicroTxns_PartnerMicroTxn * add_transactions();
	const RepeatedPtrField<CMsgDPPartnerMicroTxns_PartnerMicroTxn> & transactions();
	RepeatedPtrField<CMsgDPPartnerMicroTxns_PartnerMicroTxn> * mutable_transactions();
	void set_has_appid();
	void clear_has_appid();
	void set_has_gc_name();
	void clear_has_gc_name();
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
	// sizeof = 72
};

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:9399
class CMsgDPPartnerMicroTxnsResponse : public Message {
public:

	static const CMsgDPPartnerMicroTxnsResponse_EErrorCode k_MsgValid;
	static const CMsgDPPartnerMicroTxnsResponse_EErrorCode k_MsgInvalidAppID = 1;
	static const CMsgDPPartnerMicroTxnsResponse_EErrorCode k_MsgInvalidPartnerInfo = 2;
	static const CMsgDPPartnerMicroTxnsResponse_EErrorCode k_MsgNoTransactions = 3;
	static const CMsgDPPartnerMicroTxnsResponse_EErrorCode k_MsgSQLFailure = 4;
	static const CMsgDPPartnerMicroTxnsResponse_EErrorCode k_MsgPartnerInfoDiscrepancy = 5;
	static const CMsgDPPartnerMicroTxnsResponse_EErrorCode k_MsgTransactionInsertFailed = 7;
	static const CMsgDPPartnerMicroTxnsResponse_EErrorCode k_MsgAlreadyRunning = 8;
	static const CMsgDPPartnerMicroTxnsResponse_EErrorCode k_MsgInvalidTransactionData = 9;
	static const CMsgDPPartnerMicroTxnsResponse_EErrorCode EErrorCode_MIN;
	static const CMsgDPPartnerMicroTxnsResponse_EErrorCode EErrorCode_MAX = 9;
	static const int EErrorCode_ARRAYSIZE = 10;
	static const int kEresultFieldNumber = 1;
	static const int kEerrorcodeFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 eresult_;  // +0x18
	int eerrorcode_;  // +0x1c

	static CMsgDPPartnerMicroTxnsResponse * default_instance_;
	typedef CMsgDPPartnerMicroTxnsResponse_EErrorCode EErrorCode;
	CMsgDPPartnerMicroTxnsResponse();
	virtual ~CMsgDPPartnerMicroTxnsResponse();
	CMsgDPPartnerMicroTxnsResponse(const CMsgDPPartnerMicroTxnsResponse &);
	CMsgDPPartnerMicroTxnsResponse & operator=(const CMsgDPPartnerMicroTxnsResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDPPartnerMicroTxnsResponse & default_instance();
	void Swap(CMsgDPPartnerMicroTxnsResponse *);
	virtual CMsgDPPartnerMicroTxnsResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDPPartnerMicroTxnsResponse &);
	void MergeFrom(const CMsgDPPartnerMicroTxnsResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool EErrorCode_IsValid(int);
	const EnumDescriptor * EErrorCode_descriptor();
	const string & EErrorCode_Name(EErrorCode);
	bool EErrorCode_Parse(const string &, EErrorCode *);
	bool has_eresult();
	void clear_eresult();
	uint32 eresult();
	void set_eresult(uint32);
	bool has_eerrorcode();
	void clear_eerrorcode();
	CMsgDPPartnerMicroTxnsResponse_EErrorCode eerrorcode();
	void set_eerrorcode(CMsgDPPartnerMicroTxnsResponse_EErrorCode);
	void set_has_eresult();
	void clear_has_eresult();
	void set_has_eerrorcode();
	void clear_has_eerrorcode();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/steammessages.pb.h:9519
class CMsgGCHVacVerificationChange : public Message {
public:

	static const int kSteamidFieldNumber = 1;
	static const int kAppidFieldNumber = 2;
	static const int kIsVerifiedFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 steamid_;  // +0x18
	uint32 appid_;  // +0x20
	bool is_verified_;  // +0x24

	static CMsgGCHVacVerificationChange * default_instance_;
	CMsgGCHVacVerificationChange();
	virtual ~CMsgGCHVacVerificationChange();
	CMsgGCHVacVerificationChange(const CMsgGCHVacVerificationChange &);
	CMsgGCHVacVerificationChange & operator=(const CMsgGCHVacVerificationChange &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCHVacVerificationChange & default_instance();
	void Swap(CMsgGCHVacVerificationChange *);
	virtual CMsgGCHVacVerificationChange * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCHVacVerificationChange &);
	void MergeFrom(const CMsgGCHVacVerificationChange &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_appid();
	void clear_appid();
	uint32 appid();
	void set_appid(uint32);
	bool has_is_verified();
	void clear_is_verified();
	bool is_verified();
	void set_is_verified(bool);
	void set_has_steamid();
	void clear_has_steamid();
	void set_has_appid();
	void clear_has_appid();
	void set_has_is_verified();
	void clear_has_is_verified();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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
