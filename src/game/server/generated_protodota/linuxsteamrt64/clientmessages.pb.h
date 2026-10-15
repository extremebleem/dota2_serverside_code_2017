// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/clientmessages.pb.h:93
class CClientMsg_CustomGameEvent : public Message {
public:

	static const int kEventNameFieldNumber = 1;
	static const int kDataFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * event_name_;  // +0x18
	string * data_;  // +0x20

	static CClientMsg_CustomGameEvent * default_instance_;
	CClientMsg_CustomGameEvent();
	virtual ~CClientMsg_CustomGameEvent();
	CClientMsg_CustomGameEvent(const CClientMsg_CustomGameEvent &);
	CClientMsg_CustomGameEvent & operator=(const CClientMsg_CustomGameEvent &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CClientMsg_CustomGameEvent & default_instance();
	void Swap(CClientMsg_CustomGameEvent *);
	virtual CClientMsg_CustomGameEvent * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CClientMsg_CustomGameEvent &);
	void MergeFrom(const CClientMsg_CustomGameEvent &);
	virtual void Clear();
	virtual bool IsInitialized();
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

// src/game/server/generated_protodota/linuxsteamrt64/clientmessages.pb.h:192
class CClientMsg_ClientUIEvent : public Message {
public:

	static const int kEventFieldNumber = 1;
	static const int kEntEhandleFieldNumber = 2;
	static const int kClientEhandleFieldNumber = 3;
	static const int kData1FieldNumber = 4;
	static const int kData2FieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int event_;  // +0x18
	uint32 ent_ehandle_;  // +0x1c
	string * data1_;  // +0x20
	string * data2_;  // +0x28
	uint32 client_ehandle_;  // +0x30

	static CClientMsg_ClientUIEvent * default_instance_;
	CClientMsg_ClientUIEvent();
	virtual ~CClientMsg_ClientUIEvent();
	CClientMsg_ClientUIEvent(const CClientMsg_ClientUIEvent &);
	CClientMsg_ClientUIEvent & operator=(const CClientMsg_ClientUIEvent &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CClientMsg_ClientUIEvent & default_instance();
	void Swap(CClientMsg_ClientUIEvent *);
	virtual CClientMsg_ClientUIEvent * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CClientMsg_ClientUIEvent &);
	void MergeFrom(const CClientMsg_ClientUIEvent &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_event();
	void clear_event();
	EClientUIEvent event();
	void set_event(EClientUIEvent);
	bool has_ent_ehandle();
	void clear_ent_ehandle();
	uint32 ent_ehandle();
	void set_ent_ehandle(uint32);
	bool has_client_ehandle();
	void clear_client_ehandle();
	uint32 client_ehandle();
	void set_client_ehandle(uint32);
	bool has_data1();
	void clear_data1();
	const string & data1();
	void set_data1(const string &);
	void set_data1(const char *);
	void set_data1(const char *, size_t);
	string * mutable_data1();
	string * release_data1();
	void set_allocated_data1(string *);
	bool has_data2();
	void clear_data2();
	const string & data2();
	void set_data2(const string &);
	void set_data2(const char *);
	void set_data2(const char *, size_t);
	string * mutable_data2();
	string * release_data2();
	void set_allocated_data2(string *);
	void set_has_event();
	void clear_has_event();
	void set_has_ent_ehandle();
	void clear_has_ent_ehandle();
	void set_has_client_ehandle();
	void clear_has_client_ehandle();
	void set_has_data1();
	void clear_has_data1();
	void set_has_data2();
	void clear_has_data2();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/clientmessages.pb.h:321
class CClientMsg_DevPaletteVisibilityChangedEvent : public Message {
public:

	static const int kVisibleFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool visible_;  // +0x18

	static CClientMsg_DevPaletteVisibilityChangedEvent * default_instance_;
	CClientMsg_DevPaletteVisibilityChangedEvent();
	virtual ~CClientMsg_DevPaletteVisibilityChangedEvent();
	CClientMsg_DevPaletteVisibilityChangedEvent(const CClientMsg_DevPaletteVisibilityChangedEvent &);
	CClientMsg_DevPaletteVisibilityChangedEvent & operator=(const CClientMsg_DevPaletteVisibilityChangedEvent &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CClientMsg_DevPaletteVisibilityChangedEvent & default_instance();
	void Swap(CClientMsg_DevPaletteVisibilityChangedEvent *);
	virtual CClientMsg_DevPaletteVisibilityChangedEvent * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CClientMsg_DevPaletteVisibilityChangedEvent &);
	void MergeFrom(const CClientMsg_DevPaletteVisibilityChangedEvent &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_visible();
	void clear_visible();
	bool visible();
	void set_visible(bool);
	void set_has_visible();
	void clear_has_visible();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/clientmessages.pb.h:400
class CClientMsg_WorldUIControllerHasPanelChangedEvent : public Message {
public:

	static const int kHasPanelFieldNumber = 1;
	static const int kClientEhandleFieldNumber = 2;
	static const int kLiteralHandTypeFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool has_panel_;  // +0x18

	uint32 client_ehandle_;  // +0x1c
	uint32 literal_hand_type_;  // +0x20

	static CClientMsg_WorldUIControllerHasPanelChangedEvent * default_instance_;
	CClientMsg_WorldUIControllerHasPanelChangedEvent();
	virtual ~CClientMsg_WorldUIControllerHasPanelChangedEvent();
	CClientMsg_WorldUIControllerHasPanelChangedEvent(const CClientMsg_WorldUIControllerHasPanelChangedEvent &);
	CClientMsg_WorldUIControllerHasPanelChangedEvent & operator=(const CClientMsg_WorldUIControllerHasPanelChangedEvent &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CClientMsg_WorldUIControllerHasPanelChangedEvent & default_instance();
	void Swap(CClientMsg_WorldUIControllerHasPanelChangedEvent *);
	virtual CClientMsg_WorldUIControllerHasPanelChangedEvent * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CClientMsg_WorldUIControllerHasPanelChangedEvent &);
	void MergeFrom(const CClientMsg_WorldUIControllerHasPanelChangedEvent &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_has_panel();
	void clear_has_panel();
	bool has_panel();
	void set_has_panel(bool);
	bool has_client_ehandle();
	void clear_client_ehandle();
	uint32 client_ehandle();
	void set_client_ehandle(uint32);
	bool has_literal_hand_type();
	void clear_literal_hand_type();
	uint32 literal_hand_type();
	void set_literal_hand_type(uint32);
	void set_has_has_panel();
	void clear_has_has_panel();
	void set_has_client_ehandle();
	void clear_has_client_ehandle();
	void set_has_literal_hand_type();
	void clear_has_literal_hand_type();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/clientmessages.pb.h:499
class CClientMsg_RotateAnchor : public Message {
public:

	static const int kAngleFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	float angle_;  // +0x18

	static CClientMsg_RotateAnchor * default_instance_;
	CClientMsg_RotateAnchor();
	virtual ~CClientMsg_RotateAnchor();
	CClientMsg_RotateAnchor(const CClientMsg_RotateAnchor &);
	CClientMsg_RotateAnchor & operator=(const CClientMsg_RotateAnchor &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CClientMsg_RotateAnchor & default_instance();
	void Swap(CClientMsg_RotateAnchor *);
	virtual CClientMsg_RotateAnchor * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CClientMsg_RotateAnchor &);
	void MergeFrom(const CClientMsg_RotateAnchor &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	float angle();
	void set_angle(float);
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
