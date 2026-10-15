// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/econ_shared_enums.pb.h:142
class CMsgGenericResult : public Message {
public:

	static const int kEresultFieldNumber = 1;
	static const int kDebugMessageFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * debug_message_;  // +0x18
	uint32 eresult_;  // +0x20

	static CMsgGenericResult * default_instance_;
	CMsgGenericResult();
	virtual ~CMsgGenericResult();
	CMsgGenericResult(const CMsgGenericResult &);
	CMsgGenericResult & operator=(const CMsgGenericResult &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGenericResult & default_instance();
	void Swap(CMsgGenericResult *);
	virtual CMsgGenericResult * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGenericResult &);
	void MergeFrom(const CMsgGenericResult &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_debug_message();
	void clear_debug_message();
	const string & debug_message();
	void set_debug_message(const string &);
	void set_debug_message(const char *);
	void set_debug_message(const char *, size_t);
	string * mutable_debug_message();
	string * release_debug_message();
	void set_allocated_debug_message(string *);
	void set_has_eresult();
	void clear_has_eresult();
	void set_has_debug_message();
	void clear_has_debug_message();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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
