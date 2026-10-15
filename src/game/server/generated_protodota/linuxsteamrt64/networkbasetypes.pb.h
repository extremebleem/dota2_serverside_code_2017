// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/networkbasetypes.pb.h:127
class CMsgVector : public Message {
public:

	static const int kXFieldNumber = 1;
	static const int kYFieldNumber = 2;
	static const int kZFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	float x_;  // +0x18
	float y_;  // +0x1c
	float z_;  // +0x20

	static CMsgVector * default_instance_;
	CMsgVector();
	virtual ~CMsgVector();
	CMsgVector(const CMsgVector &);
	CMsgVector & operator=(const CMsgVector &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgVector & default_instance();
	void Swap(CMsgVector *);
	virtual CMsgVector * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgVector &);
	void MergeFrom(const CMsgVector &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	float x();
	void set_x(float);
	bool has_y();
	void clear_y();
	float y();
	void set_y(float);
	bool has_z();
	void clear_z();
	float z();
	void set_z(float);
	void set_has_x();
	void clear_has_x();
	void set_has_y();
	void clear_has_y();
	void set_has_z();
	void clear_has_z();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/networkbasetypes.pb.h:226
class CMsgVector2D : public Message {
public:

	static const int kXFieldNumber = 1;
	static const int kYFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	float x_;  // +0x18
	float y_;  // +0x1c

	static CMsgVector2D * default_instance_;
	CMsgVector2D();
	virtual ~CMsgVector2D();
	CMsgVector2D(const CMsgVector2D &);
	CMsgVector2D & operator=(const CMsgVector2D &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgVector2D & default_instance();
	void Swap(CMsgVector2D *);
	virtual CMsgVector2D * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgVector2D &);
	void MergeFrom(const CMsgVector2D &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	float x();
	void set_x(float);
	bool has_y();
	void clear_y();
	float y();
	void set_y(float);
	void set_has_x();
	void clear_has_x();
	void set_has_y();
	void clear_has_y();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/networkbasetypes.pb.h:315
class CMsgQAngle : public Message {
public:

	static const int kXFieldNumber = 1;
	static const int kYFieldNumber = 2;
	static const int kZFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	float x_;  // +0x18
	float y_;  // +0x1c
	float z_;  // +0x20

	static CMsgQAngle * default_instance_;
	CMsgQAngle();
	virtual ~CMsgQAngle();
	CMsgQAngle(const CMsgQAngle &);
	CMsgQAngle & operator=(const CMsgQAngle &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgQAngle & default_instance();
	void Swap(CMsgQAngle *);
	virtual CMsgQAngle * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgQAngle &);
	void MergeFrom(const CMsgQAngle &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	float x();
	void set_x(float);
	bool has_y();
	void clear_y();
	float y();
	void set_y(float);
	bool has_z();
	void clear_z();
	float z();
	void set_z(float);
	void set_has_x();
	void clear_has_x();
	void set_has_y();
	void clear_has_y();
	void set_has_z();
	void clear_has_z();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/networkbasetypes.pb.h:414
class CMsgPlayerInfo : public Message {
public:

	static const int kNameFieldNumber = 1;
	static const int kXuidFieldNumber = 2;
	static const int kUseridFieldNumber = 3;
	static const int kSteamidFieldNumber = 4;
	static const int kFakeplayerFieldNumber = 5;
	static const int kIshltvFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * name_;  // +0x18
	uint64 xuid_;  // +0x20
	uint64 steamid_;  // +0x28
	int32 userid_;  // +0x30
	bool fakeplayer_;  // +0x34
	bool ishltv_;  // +0x35

	static CMsgPlayerInfo * default_instance_;
	CMsgPlayerInfo();
	virtual ~CMsgPlayerInfo();
	CMsgPlayerInfo(const CMsgPlayerInfo &);
	CMsgPlayerInfo & operator=(const CMsgPlayerInfo &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgPlayerInfo & default_instance();
	void Swap(CMsgPlayerInfo *);
	virtual CMsgPlayerInfo * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgPlayerInfo &);
	void MergeFrom(const CMsgPlayerInfo &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_xuid();
	void clear_xuid();
	uint64 xuid();
	void set_xuid(uint64);
	bool has_userid();
	void clear_userid();
	int32 userid();
	void set_userid(int32);
	bool has_steamid();
	void clear_steamid();
	uint64 steamid();
	void set_steamid(uint64);
	bool has_fakeplayer();
	void clear_fakeplayer();
	bool fakeplayer();
	void set_fakeplayer(bool);
	bool has_ishltv();
	void clear_ishltv();
	bool ishltv();
	void set_ishltv(bool);
	void set_has_name();
	void clear_has_name();
	void set_has_xuid();
	void clear_has_xuid();
	void set_has_userid();
	void clear_has_userid();
	void set_has_steamid();
	void clear_has_steamid();
	void set_has_fakeplayer();
	void clear_has_fakeplayer();
	void set_has_ishltv();
	void clear_has_ishltv();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/networkbasetypes.pb.h:548
class CMsg_CVars_CVar : public Message {
public:

	static const int kNameFieldNumber = 1;
	static const int kValueFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * name_;  // +0x18
	string * value_;  // +0x20

	static CMsg_CVars_CVar * default_instance_;
	CMsg_CVars_CVar();
	virtual ~CMsg_CVars_CVar();
	CMsg_CVars_CVar(const CMsg_CVars_CVar &);
	CMsg_CVars_CVar & operator=(const CMsg_CVars_CVar &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsg_CVars_CVar & default_instance();
	void Swap(CMsg_CVars_CVar *);
	virtual CMsg_CVars_CVar * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsg_CVars_CVar &);
	void MergeFrom(const CMsg_CVars_CVar &);
	virtual void Clear();
	virtual bool IsInitialized();
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

// src/game/server/generated_protodota/linuxsteamrt64/networkbasetypes.pb.h:647
class CMsg_CVars : public Message {
public:

	static const int kCvarsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsg_CVars * default_instance_;
	CMsg_CVars();
	virtual ~CMsg_CVars();
	CMsg_CVars(const CMsg_CVars &);
	CMsg_CVars & operator=(const CMsg_CVars &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsg_CVars & default_instance();
	void Swap(CMsg_CVars *);
	virtual CMsg_CVars * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsg_CVars &);
	void MergeFrom(const CMsg_CVars &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int cvars_size();
	void clear_cvars();
	const CMsg_CVars_CVar & cvars(int);
	CMsg_CVars_CVar * mutable_cvars(int);
	CMsg_CVars_CVar * add_cvars();
	const RepeatedPtrField<CMsg_CVars_CVar> & cvars();
	RepeatedPtrField<CMsg_CVars_CVar> * mutable_cvars();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/networkbasetypes.pb.h:731
class CNETMsg_NOP : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CNETMsg_NOP * default_instance_;
	CNETMsg_NOP();
	virtual ~CNETMsg_NOP();
	CNETMsg_NOP(const CNETMsg_NOP &);
	CNETMsg_NOP & operator=(const CNETMsg_NOP &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CNETMsg_NOP & default_instance();
	void Swap(CNETMsg_NOP *);
	virtual CNETMsg_NOP * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CNETMsg_NOP &);
	void MergeFrom(const CNETMsg_NOP &);
	virtual void Clear();
	virtual bool IsInitialized();
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

// src/game/server/generated_protodota/linuxsteamrt64/networkbasetypes.pb.h:800
class CNETMsg_SplitScreenUser : public Message {
public:

	static const int kSlotFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 slot_;  // +0x18

	static CNETMsg_SplitScreenUser * default_instance_;
	CNETMsg_SplitScreenUser();
	virtual ~CNETMsg_SplitScreenUser();
	CNETMsg_SplitScreenUser(const CNETMsg_SplitScreenUser &);
	CNETMsg_SplitScreenUser & operator=(const CNETMsg_SplitScreenUser &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CNETMsg_SplitScreenUser & default_instance();
	void Swap(CNETMsg_SplitScreenUser *);
	virtual CNETMsg_SplitScreenUser * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CNETMsg_SplitScreenUser &);
	void MergeFrom(const CNETMsg_SplitScreenUser &);
	virtual void Clear();
	virtual bool IsInitialized();
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

// src/game/server/generated_protodota/linuxsteamrt64/networkbasetypes.pb.h:879
class CNETMsg_Disconnect : public Message {
public:

	static const int kReasonFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int reason_;  // +0x18

	static CNETMsg_Disconnect * default_instance_;
	CNETMsg_Disconnect();
	virtual ~CNETMsg_Disconnect();
	CNETMsg_Disconnect(const CNETMsg_Disconnect &);
	CNETMsg_Disconnect & operator=(const CNETMsg_Disconnect &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CNETMsg_Disconnect & default_instance();
	void Swap(CNETMsg_Disconnect *);
	virtual CNETMsg_Disconnect * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CNETMsg_Disconnect &);
	void MergeFrom(const CNETMsg_Disconnect &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_reason();
	void clear_reason();
	ENetworkDisconnectionReason reason();
	void set_reason(ENetworkDisconnectionReason);
	void set_has_reason();
	void clear_has_reason();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/networkbasetypes.pb.h:958
class CNETMsg_Tick : public Message {
public:

	static const int kTickFieldNumber = 1;
	static const int kHostFrametimeFieldNumber = 2;
	static const int kHostFrametimeStdDeviationFieldNumber = 3;
	static const int kHostComputationtimeFieldNumber = 4;
	static const int kHostComputationtimeStdDeviationFieldNumber = 5;
	static const int kHostFramestarttimeStdDeviationFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 tick_;  // +0x18
	uint32 host_frametime_;  // +0x1c
	uint32 host_frametime_std_deviation_;  // +0x20
	uint32 host_computationtime_;  // +0x24
	uint32 host_computationtime_std_deviation_;  // +0x28
	uint32 host_framestarttime_std_deviation_;  // +0x2c

	static CNETMsg_Tick * default_instance_;
	CNETMsg_Tick();
	virtual ~CNETMsg_Tick();
	CNETMsg_Tick(const CNETMsg_Tick &);
	CNETMsg_Tick & operator=(const CNETMsg_Tick &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CNETMsg_Tick & default_instance();
	void Swap(CNETMsg_Tick *);
	virtual CNETMsg_Tick * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CNETMsg_Tick &);
	void MergeFrom(const CNETMsg_Tick &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	uint32 tick();
	void set_tick(uint32);
	bool has_host_frametime();
	void clear_host_frametime();
	uint32 host_frametime();
	void set_host_frametime(uint32);
	bool has_host_frametime_std_deviation();
	void clear_host_frametime_std_deviation();
	uint32 host_frametime_std_deviation();
	void set_host_frametime_std_deviation(uint32);
	bool has_host_computationtime();
	void clear_host_computationtime();
	uint32 host_computationtime();
	void set_host_computationtime(uint32);
	bool has_host_computationtime_std_deviation();
	void clear_host_computationtime_std_deviation();
	uint32 host_computationtime_std_deviation();
	void set_host_computationtime_std_deviation(uint32);
	bool has_host_framestarttime_std_deviation();
	void clear_host_framestarttime_std_deviation();
	uint32 host_framestarttime_std_deviation();
	void set_host_framestarttime_std_deviation(uint32);
	void set_has_tick();
	void clear_has_tick();
	void set_has_host_frametime();
	void clear_has_host_frametime();
	void set_has_host_frametime_std_deviation();
	void clear_has_host_frametime_std_deviation();
	void set_has_host_computationtime();
	void clear_has_host_computationtime();
	void set_has_host_computationtime_std_deviation();
	void clear_has_host_computationtime_std_deviation();
	void set_has_host_framestarttime_std_deviation();
	void clear_has_host_framestarttime_std_deviation();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/networkbasetypes.pb.h:1087
class CNETMsg_StringCmd : public Message {
public:

	static const int kCommandFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * command_;  // +0x18

	static CNETMsg_StringCmd * default_instance_;
	CNETMsg_StringCmd();
	virtual ~CNETMsg_StringCmd();
	CNETMsg_StringCmd(const CNETMsg_StringCmd &);
	CNETMsg_StringCmd & operator=(const CNETMsg_StringCmd &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CNETMsg_StringCmd & default_instance();
	void Swap(CNETMsg_StringCmd *);
	virtual CNETMsg_StringCmd * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CNETMsg_StringCmd &);
	void MergeFrom(const CNETMsg_StringCmd &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	const string & command();
	void set_command(const string &);
	void set_command(const char *);
	void set_command(const char *, size_t);
	string * mutable_command();
	string * release_command();
	void set_allocated_command(string *);
	void set_has_command();
	void clear_has_command();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/networkbasetypes.pb.h:1171
class CNETMsg_SetConVar : public Message {
public:

	static const int kConvarsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CNETMsg_SetConVar * default_instance_;
	CNETMsg_SetConVar();
	virtual ~CNETMsg_SetConVar();
	CNETMsg_SetConVar(const CNETMsg_SetConVar &);
	CNETMsg_SetConVar & operator=(const CNETMsg_SetConVar &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CNETMsg_SetConVar & default_instance();
	void Swap(CNETMsg_SetConVar *);
	virtual CNETMsg_SetConVar * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CNETMsg_SetConVar &);
	void MergeFrom(const CNETMsg_SetConVar &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_convars();
	void clear_convars();
	const CMsg_CVars & convars();
	CMsg_CVars * mutable_convars();
	CMsg_CVars * release_convars();
	void set_allocated_convars(CMsg_CVars *);
	void set_has_convars();
	void clear_has_convars();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/networkbasetypes.pb.h:1252
class CNETMsg_SignonState : public Message {
public:

	static const int kSignonStateFieldNumber = 1;
	static const int kSpawnCountFieldNumber = 2;
	static const int kNumServerPlayersFieldNumber = 3;
	static const int kPlayersNetworkidsFieldNumber = 4;
	static const int kMapNameFieldNumber = 5;
	static const int kAddonsFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 signon_state_;  // +0x18
	uint32 spawn_count_;  // +0x1c
	string * map_name_;  // +0x38
	string * addons_;  // +0x40
	uint32 num_server_players_;  // +0x48

	static CNETMsg_SignonState * default_instance_;
	CNETMsg_SignonState();
	virtual ~CNETMsg_SignonState();
	CNETMsg_SignonState(const CNETMsg_SignonState &);
	CNETMsg_SignonState & operator=(const CNETMsg_SignonState &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CNETMsg_SignonState & default_instance();
	void Swap(CNETMsg_SignonState *);
	virtual CNETMsg_SignonState * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CNETMsg_SignonState &);
	void MergeFrom(const CNETMsg_SignonState &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_signon_state();
	void clear_signon_state();
	uint32 signon_state();
	void set_signon_state(uint32);
	bool has_spawn_count();
	void clear_spawn_count();
	uint32 spawn_count();
	void set_spawn_count(uint32);
	bool has_num_server_players();
	void clear_num_server_players();
	uint32 num_server_players();
	void set_num_server_players(uint32);
	int players_networkids_size();
	void clear_players_networkids();
	const string & players_networkids(int);
	string * mutable_players_networkids(int);
	void set_players_networkids(int, const string &);
	void set_players_networkids(int, const char *);
	void set_players_networkids(int, const char *, size_t);
	string * add_players_networkids();
	void add_players_networkids(const string &);
	void add_players_networkids(const char *);
	void add_players_networkids(const char *, size_t);
	const RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > & players_networkids();
	RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > * mutable_players_networkids();
	bool has_map_name();
	void clear_map_name();
	const string & map_name();
	void set_map_name(const string &);
	void set_map_name(const char *);
	void set_map_name(const char *, size_t);
	string * mutable_map_name();
	string * release_map_name();
	void set_allocated_map_name(string *);
	bool has_addons();
	void clear_addons();
	const string & addons();
	void set_addons(const string &);
	void set_addons(const char *);
	void set_addons(const char *, size_t);
	string * mutable_addons();
	string * release_addons();
	void set_allocated_addons(string *);
	void set_has_signon_state();
	void clear_has_signon_state();
	void set_has_spawn_count();
	void clear_has_spawn_count();
	void set_has_num_server_players();
	void clear_has_num_server_players();
	void set_has_map_name();
	void clear_has_map_name();
	void set_has_addons();
	void clear_has_addons();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/networkbasetypes.pb.h:1398
class CSVCMsg_GameEvent_key_t : public Message {
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

	static CSVCMsg_GameEvent_key_t * default_instance_;
	CSVCMsg_GameEvent_key_t();
	virtual ~CSVCMsg_GameEvent_key_t();
	CSVCMsg_GameEvent_key_t(const CSVCMsg_GameEvent_key_t &);
	CSVCMsg_GameEvent_key_t & operator=(const CSVCMsg_GameEvent_key_t &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_GameEvent_key_t & default_instance();
	void Swap(CSVCMsg_GameEvent_key_t *);
	virtual CSVCMsg_GameEvent_key_t * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_GameEvent_key_t &);
	void MergeFrom(const CSVCMsg_GameEvent_key_t &);
	virtual void Clear();
	virtual bool IsInitialized();
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

// src/game/server/generated_protodota/linuxsteamrt64/networkbasetypes.pb.h:1552
class CSVCMsg_GameEvent : public Message {
public:

	static const int kEventNameFieldNumber = 1;
	static const int kEventidFieldNumber = 2;
	static const int kKeysFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * event_name_;  // +0x18
	int32 eventid_;  // +0x38

	static CSVCMsg_GameEvent * default_instance_;
	CSVCMsg_GameEvent();
	virtual ~CSVCMsg_GameEvent();
	CSVCMsg_GameEvent(const CSVCMsg_GameEvent &);
	CSVCMsg_GameEvent & operator=(const CSVCMsg_GameEvent &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_GameEvent & default_instance();
	void Swap(CSVCMsg_GameEvent *);
	virtual CSVCMsg_GameEvent * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_GameEvent &);
	void MergeFrom(const CSVCMsg_GameEvent &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	const CSVCMsg_GameEvent_key_t & keys(int);
	CSVCMsg_GameEvent_key_t * mutable_keys(int);
	CSVCMsg_GameEvent_key_t * add_keys();
	const RepeatedPtrField<CSVCMsg_GameEvent_key_t> & keys();
	RepeatedPtrField<CSVCMsg_GameEvent_key_t> * mutable_keys();
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

// src/game/server/generated_protodota/linuxsteamrt64/networkbasetypes.pb.h:1661
class CSVCMsgList_GameEvents_event_t : public Message {
public:

	static const int kTickFieldNumber = 1;
	static const int kEventFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 tick_;  // +0x20

	static CSVCMsgList_GameEvents_event_t * default_instance_;
	CSVCMsgList_GameEvents_event_t();
	virtual ~CSVCMsgList_GameEvents_event_t();
	CSVCMsgList_GameEvents_event_t(const CSVCMsgList_GameEvents_event_t &);
	CSVCMsgList_GameEvents_event_t & operator=(const CSVCMsgList_GameEvents_event_t &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsgList_GameEvents_event_t & default_instance();
	void Swap(CSVCMsgList_GameEvents_event_t *);
	virtual CSVCMsgList_GameEvents_event_t * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsgList_GameEvents_event_t &);
	void MergeFrom(const CSVCMsgList_GameEvents_event_t &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_event();
	void clear_event();
	const CSVCMsg_GameEvent & event();
	CSVCMsg_GameEvent * mutable_event();
	CSVCMsg_GameEvent * release_event();
	void set_allocated_event(CSVCMsg_GameEvent *);
	void set_has_tick();
	void clear_has_tick();
	void set_has_event();
	void clear_has_event();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/networkbasetypes.pb.h:1752
class CSVCMsgList_GameEvents : public Message {
public:

	static const int kEventsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CSVCMsgList_GameEvents * default_instance_;
	CSVCMsgList_GameEvents();
	virtual ~CSVCMsgList_GameEvents();
	CSVCMsgList_GameEvents(const CSVCMsgList_GameEvents &);
	CSVCMsgList_GameEvents & operator=(const CSVCMsgList_GameEvents &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsgList_GameEvents & default_instance();
	void Swap(CSVCMsgList_GameEvents *);
	virtual CSVCMsgList_GameEvents * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsgList_GameEvents &);
	void MergeFrom(const CSVCMsgList_GameEvents &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int events_size();
	void clear_events();
	const CSVCMsgList_GameEvents_event_t & events(int);
	CSVCMsgList_GameEvents_event_t * mutable_events(int);
	CSVCMsgList_GameEvents_event_t * add_events();
	const RepeatedPtrField<CSVCMsgList_GameEvents_event_t> & events();
	RepeatedPtrField<CSVCMsgList_GameEvents_event_t> * mutable_events();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/networkbasetypes.pb.h:1836
class CSVCMsg_UserMessage : public Message {
public:

	static const int kMsgTypeFieldNumber = 1;
	static const int kMsgDataFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * msg_data_;  // +0x18
	int32 msg_type_;  // +0x20

	static CSVCMsg_UserMessage * default_instance_;
	CSVCMsg_UserMessage();
	virtual ~CSVCMsg_UserMessage();
	CSVCMsg_UserMessage(const CSVCMsg_UserMessage &);
	CSVCMsg_UserMessage & operator=(const CSVCMsg_UserMessage &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_UserMessage & default_instance();
	void Swap(CSVCMsg_UserMessage *);
	virtual CSVCMsg_UserMessage * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_UserMessage &);
	void MergeFrom(const CSVCMsg_UserMessage &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_msg_data();
	void clear_msg_data();
	const string & msg_data();
	void set_msg_data(const string &);
	void set_msg_data(const char *);
	void set_msg_data(const void *, size_t);
	string * mutable_msg_data();
	string * release_msg_data();
	void set_allocated_msg_data(string *);
	void set_has_msg_type();
	void clear_has_msg_type();
	void set_has_msg_data();
	void clear_has_msg_data();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/networkbasetypes.pb.h:1930
class CSVCMsgList_UserMessages_usermsg_t : public Message {
public:

	static const int kTickFieldNumber = 1;
	static const int kMsgFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 tick_;  // +0x20

	static CSVCMsgList_UserMessages_usermsg_t * default_instance_;
	CSVCMsgList_UserMessages_usermsg_t();
	virtual ~CSVCMsgList_UserMessages_usermsg_t();
	CSVCMsgList_UserMessages_usermsg_t(const CSVCMsgList_UserMessages_usermsg_t &);
	CSVCMsgList_UserMessages_usermsg_t & operator=(const CSVCMsgList_UserMessages_usermsg_t &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsgList_UserMessages_usermsg_t & default_instance();
	void Swap(CSVCMsgList_UserMessages_usermsg_t *);
	virtual CSVCMsgList_UserMessages_usermsg_t * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsgList_UserMessages_usermsg_t &);
	void MergeFrom(const CSVCMsgList_UserMessages_usermsg_t &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_msg();
	void clear_msg();
	const CSVCMsg_UserMessage & msg();
	CSVCMsg_UserMessage * mutable_msg();
	CSVCMsg_UserMessage * release_msg();
	void set_allocated_msg(CSVCMsg_UserMessage *);
	void set_has_tick();
	void clear_has_tick();
	void set_has_msg();
	void clear_has_msg();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/networkbasetypes.pb.h:2021
class CSVCMsgList_UserMessages : public Message {
public:

	static const int kUsermsgsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CSVCMsgList_UserMessages * default_instance_;
	CSVCMsgList_UserMessages();
	virtual ~CSVCMsgList_UserMessages();
	CSVCMsgList_UserMessages(const CSVCMsgList_UserMessages &);
	CSVCMsgList_UserMessages & operator=(const CSVCMsgList_UserMessages &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsgList_UserMessages & default_instance();
	void Swap(CSVCMsgList_UserMessages *);
	virtual CSVCMsgList_UserMessages * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsgList_UserMessages &);
	void MergeFrom(const CSVCMsgList_UserMessages &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int usermsgs_size();
	void clear_usermsgs();
	const CSVCMsgList_UserMessages_usermsg_t & usermsgs(int);
	CSVCMsgList_UserMessages_usermsg_t * mutable_usermsgs(int);
	CSVCMsgList_UserMessages_usermsg_t * add_usermsgs();
	const RepeatedPtrField<CSVCMsgList_UserMessages_usermsg_t> & usermsgs();
	RepeatedPtrField<CSVCMsgList_UserMessages_usermsg_t> * mutable_usermsgs();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/networkbasetypes.pb.h:2105
class CNETMsg_SpawnGroup_Load : public Message {
public:

	static const int kWorldnameFieldNumber = 1;
	static const int kEntitylumpnameFieldNumber = 2;
	static const int kEntityfilternameFieldNumber = 3;
	static const int kSpawngrouphandleFieldNumber = 4;
	static const int kSpawngroupownerhandleFieldNumber = 5;
	static const int kWorldOffsetPosFieldNumber = 6;
	static const int kWorldOffsetAngleFieldNumber = 7;
	static const int kSpawngroupmanifestFieldNumber = 8;
	static const int kFlagsFieldNumber = 9;
	static const int kTickcountFieldNumber = 10;
	static const int kManifestincompleteFieldNumber = 11;
	static const int kLocalnamefixupFieldNumber = 12;
	static const int kParentnamefixupFieldNumber = 13;
	static const int kManifestloadpriorityFieldNumber = 14;
	static const int kWorldgroupidFieldNumber = 15;
	static const int kCreationsequenceFieldNumber = 16;
	static const int kSavegamefilenameFieldNumber = 17;
	static const int kSpawngroupparenthandleFieldNumber = 18;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * worldname_;  // +0x18
	string * entitylumpname_;  // +0x20
	string * entityfiltername_;  // +0x28
	uint32 spawngrouphandle_;  // +0x30
	uint32 spawngroupownerhandle_;  // +0x34
	string * spawngroupmanifest_;  // +0x48
	uint32 flags_;  // +0x50
	int32 tickcount_;  // +0x54
	string * localnamefixup_;  // +0x58
	bool manifestincomplete_;  // +0x60

	int32 manifestloadpriority_;  // +0x64
	string * parentnamefixup_;  // +0x68
	uint32 worldgroupid_;  // +0x70
	uint32 creationsequence_;  // +0x74
	string * savegamefilename_;  // +0x78
	uint32 spawngroupparenthandle_;  // +0x80

	static CNETMsg_SpawnGroup_Load * default_instance_;
	CNETMsg_SpawnGroup_Load();
	virtual ~CNETMsg_SpawnGroup_Load();
	CNETMsg_SpawnGroup_Load(const CNETMsg_SpawnGroup_Load &);
	CNETMsg_SpawnGroup_Load & operator=(const CNETMsg_SpawnGroup_Load &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CNETMsg_SpawnGroup_Load & default_instance();
	void Swap(CNETMsg_SpawnGroup_Load *);
	virtual CNETMsg_SpawnGroup_Load * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CNETMsg_SpawnGroup_Load &);
	void MergeFrom(const CNETMsg_SpawnGroup_Load &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_worldname();
	void clear_worldname();
	const string & worldname();
	void set_worldname(const string &);
	void set_worldname(const char *);
	void set_worldname(const char *, size_t);
	string * mutable_worldname();
	string * release_worldname();
	void set_allocated_worldname(string *);
	bool has_entitylumpname();
	void clear_entitylumpname();
	const string & entitylumpname();
	void set_entitylumpname(const string &);
	void set_entitylumpname(const char *);
	void set_entitylumpname(const char *, size_t);
	string * mutable_entitylumpname();
	string * release_entitylumpname();
	void set_allocated_entitylumpname(string *);
	bool has_entityfiltername();
	void clear_entityfiltername();
	const string & entityfiltername();
	void set_entityfiltername(const string &);
	void set_entityfiltername(const char *);
	void set_entityfiltername(const char *, size_t);
	string * mutable_entityfiltername();
	string * release_entityfiltername();
	void set_allocated_entityfiltername(string *);
	bool has_spawngrouphandle();
	void clear_spawngrouphandle();
	uint32 spawngrouphandle();
	void set_spawngrouphandle(uint32);
	bool has_spawngroupownerhandle();
	void clear_spawngroupownerhandle();
	uint32 spawngroupownerhandle();
	void set_spawngroupownerhandle(uint32);
	bool has_world_offset_pos();
	void clear_world_offset_pos();
	const CMsgVector & world_offset_pos();
	CMsgVector * mutable_world_offset_pos();
	CMsgVector * release_world_offset_pos();
	void set_allocated_world_offset_pos(CMsgVector *);
	bool has_world_offset_angle();
	void clear_world_offset_angle();
	const CMsgQAngle & world_offset_angle();
	CMsgQAngle * mutable_world_offset_angle();
	CMsgQAngle * release_world_offset_angle();
	void set_allocated_world_offset_angle(CMsgQAngle *);
	bool has_spawngroupmanifest();
	void clear_spawngroupmanifest();
	const string & spawngroupmanifest();
	void set_spawngroupmanifest(const string &);
	void set_spawngroupmanifest(const char *);
	void set_spawngroupmanifest(const void *, size_t);
	string * mutable_spawngroupmanifest();
	string * release_spawngroupmanifest();
	void set_allocated_spawngroupmanifest(string *);
	bool has_flags();
	void clear_flags();
	uint32 flags();
	void set_flags(uint32);
	bool has_tickcount();
	void clear_tickcount();
	int32 tickcount();
	void set_tickcount(int32);
	bool has_manifestincomplete();
	void clear_manifestincomplete();
	bool manifestincomplete();
	void set_manifestincomplete(bool);
	bool has_localnamefixup();
	void clear_localnamefixup();
	const string & localnamefixup();
	void set_localnamefixup(const string &);
	void set_localnamefixup(const char *);
	void set_localnamefixup(const char *, size_t);
	string * mutable_localnamefixup();
	string * release_localnamefixup();
	void set_allocated_localnamefixup(string *);
	bool has_parentnamefixup();
	void clear_parentnamefixup();
	const string & parentnamefixup();
	void set_parentnamefixup(const string &);
	void set_parentnamefixup(const char *);
	void set_parentnamefixup(const char *, size_t);
	string * mutable_parentnamefixup();
	string * release_parentnamefixup();
	void set_allocated_parentnamefixup(string *);
	bool has_manifestloadpriority();
	void clear_manifestloadpriority();
	int32 manifestloadpriority();
	void set_manifestloadpriority(int32);
	bool has_worldgroupid();
	void clear_worldgroupid();
	uint32 worldgroupid();
	void set_worldgroupid(uint32);
	bool has_creationsequence();
	void clear_creationsequence();
	uint32 creationsequence();
	void set_creationsequence(uint32);
	bool has_savegamefilename();
	void clear_savegamefilename();
	const string & savegamefilename();
	void set_savegamefilename(const string &);
	void set_savegamefilename(const char *);
	void set_savegamefilename(const char *, size_t);
	string * mutable_savegamefilename();
	string * release_savegamefilename();
	void set_allocated_savegamefilename(string *);
	bool has_spawngroupparenthandle();
	void clear_spawngroupparenthandle();
	uint32 spawngroupparenthandle();
	void set_spawngroupparenthandle(uint32);
	void set_has_worldname();
	void clear_has_worldname();
	void set_has_entitylumpname();
	void clear_has_entitylumpname();
	void set_has_entityfiltername();
	void clear_has_entityfiltername();
	void set_has_spawngrouphandle();
	void clear_has_spawngrouphandle();
	void set_has_spawngroupownerhandle();
	void clear_has_spawngroupownerhandle();
	void set_has_world_offset_pos();
	void clear_has_world_offset_pos();
	void set_has_world_offset_angle();
	void clear_has_world_offset_angle();
	void set_has_spawngroupmanifest();
	void clear_has_spawngroupmanifest();
	void set_has_flags();
	void clear_has_flags();
	void set_has_tickcount();
	void clear_has_tickcount();
	void set_has_manifestincomplete();
	void clear_has_manifestincomplete();
	void set_has_localnamefixup();
	void clear_has_localnamefixup();
	void set_has_parentnamefixup();
	void clear_has_parentnamefixup();
	void set_has_manifestloadpriority();
	void clear_has_manifestloadpriority();
	void set_has_worldgroupid();
	void clear_has_worldgroupid();
	void set_has_creationsequence();
	void clear_has_creationsequence();
	void set_has_savegamefilename();
	void clear_has_savegamefilename();
	void set_has_spawngroupparenthandle();
	void clear_has_spawngroupparenthandle();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/networkbasetypes.pb.h:2393
class CNETMsg_SpawnGroup_ManifestUpdate : public Message {
public:

	static const int kSpawngrouphandleFieldNumber = 1;
	static const int kSpawngroupmanifestFieldNumber = 2;
	static const int kManifestincompleteFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * spawngroupmanifest_;  // +0x18
	uint32 spawngrouphandle_;  // +0x20
	bool manifestincomplete_;  // +0x24

	static CNETMsg_SpawnGroup_ManifestUpdate * default_instance_;
	CNETMsg_SpawnGroup_ManifestUpdate();
	virtual ~CNETMsg_SpawnGroup_ManifestUpdate();
	CNETMsg_SpawnGroup_ManifestUpdate(const CNETMsg_SpawnGroup_ManifestUpdate &);
	CNETMsg_SpawnGroup_ManifestUpdate & operator=(const CNETMsg_SpawnGroup_ManifestUpdate &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CNETMsg_SpawnGroup_ManifestUpdate & default_instance();
	void Swap(CNETMsg_SpawnGroup_ManifestUpdate *);
	virtual CNETMsg_SpawnGroup_ManifestUpdate * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CNETMsg_SpawnGroup_ManifestUpdate &);
	void MergeFrom(const CNETMsg_SpawnGroup_ManifestUpdate &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_spawngrouphandle();
	void clear_spawngrouphandle();
	uint32 spawngrouphandle();
	void set_spawngrouphandle(uint32);
	bool has_spawngroupmanifest();
	void clear_spawngroupmanifest();
	const string & spawngroupmanifest();
	void set_spawngroupmanifest(const string &);
	void set_spawngroupmanifest(const char *);
	void set_spawngroupmanifest(const void *, size_t);
	string * mutable_spawngroupmanifest();
	string * release_spawngroupmanifest();
	void set_allocated_spawngroupmanifest(string *);
	bool has_manifestincomplete();
	void clear_manifestincomplete();
	bool manifestincomplete();
	void set_manifestincomplete(bool);
	void set_has_spawngrouphandle();
	void clear_has_spawngrouphandle();
	void set_has_spawngroupmanifest();
	void clear_has_spawngroupmanifest();
	void set_has_manifestincomplete();
	void clear_has_manifestincomplete();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/networkbasetypes.pb.h:2497
class CNETMsg_SpawnGroup_SetCreationTick : public Message {
public:

	static const int kSpawngrouphandleFieldNumber = 1;
	static const int kTickcountFieldNumber = 2;
	static const int kCreationsequenceFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 spawngrouphandle_;  // +0x18
	int32 tickcount_;  // +0x1c
	uint32 creationsequence_;  // +0x20

	static CNETMsg_SpawnGroup_SetCreationTick * default_instance_;
	CNETMsg_SpawnGroup_SetCreationTick();
	virtual ~CNETMsg_SpawnGroup_SetCreationTick();
	CNETMsg_SpawnGroup_SetCreationTick(const CNETMsg_SpawnGroup_SetCreationTick &);
	CNETMsg_SpawnGroup_SetCreationTick & operator=(const CNETMsg_SpawnGroup_SetCreationTick &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CNETMsg_SpawnGroup_SetCreationTick & default_instance();
	void Swap(CNETMsg_SpawnGroup_SetCreationTick *);
	virtual CNETMsg_SpawnGroup_SetCreationTick * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CNETMsg_SpawnGroup_SetCreationTick &);
	void MergeFrom(const CNETMsg_SpawnGroup_SetCreationTick &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_spawngrouphandle();
	void clear_spawngrouphandle();
	uint32 spawngrouphandle();
	void set_spawngrouphandle(uint32);
	bool has_tickcount();
	void clear_tickcount();
	int32 tickcount();
	void set_tickcount(int32);
	bool has_creationsequence();
	void clear_creationsequence();
	uint32 creationsequence();
	void set_creationsequence(uint32);
	void set_has_spawngrouphandle();
	void clear_has_spawngrouphandle();
	void set_has_tickcount();
	void clear_has_tickcount();
	void set_has_creationsequence();
	void clear_has_creationsequence();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/networkbasetypes.pb.h:2596
class CNETMsg_SpawnGroup_Unload : public Message {
public:

	static const int kSpawngrouphandleFieldNumber = 1;
	static const int kFlagsFieldNumber = 2;
	static const int kTickcountFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 spawngrouphandle_;  // +0x18
	uint32 flags_;  // +0x1c
	int32 tickcount_;  // +0x20

	static CNETMsg_SpawnGroup_Unload * default_instance_;
	CNETMsg_SpawnGroup_Unload();
	virtual ~CNETMsg_SpawnGroup_Unload();
	CNETMsg_SpawnGroup_Unload(const CNETMsg_SpawnGroup_Unload &);
	CNETMsg_SpawnGroup_Unload & operator=(const CNETMsg_SpawnGroup_Unload &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CNETMsg_SpawnGroup_Unload & default_instance();
	void Swap(CNETMsg_SpawnGroup_Unload *);
	virtual CNETMsg_SpawnGroup_Unload * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CNETMsg_SpawnGroup_Unload &);
	void MergeFrom(const CNETMsg_SpawnGroup_Unload &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_spawngrouphandle();
	void clear_spawngrouphandle();
	uint32 spawngrouphandle();
	void set_spawngrouphandle(uint32);
	bool has_flags();
	void clear_flags();
	uint32 flags();
	void set_flags(uint32);
	bool has_tickcount();
	void clear_tickcount();
	int32 tickcount();
	void set_tickcount(int32);
	void set_has_spawngrouphandle();
	void clear_has_spawngrouphandle();
	void set_has_flags();
	void clear_has_flags();
	void set_has_tickcount();
	void clear_has_tickcount();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/networkbasetypes.pb.h:2695
class CNETMsg_SpawnGroup_LoadCompleted : public Message {
public:

	static const int kSpawngrouphandleFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 spawngrouphandle_;  // +0x18

	static CNETMsg_SpawnGroup_LoadCompleted * default_instance_;
	CNETMsg_SpawnGroup_LoadCompleted();
	virtual ~CNETMsg_SpawnGroup_LoadCompleted();
	CNETMsg_SpawnGroup_LoadCompleted(const CNETMsg_SpawnGroup_LoadCompleted &);
	CNETMsg_SpawnGroup_LoadCompleted & operator=(const CNETMsg_SpawnGroup_LoadCompleted &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CNETMsg_SpawnGroup_LoadCompleted & default_instance();
	void Swap(CNETMsg_SpawnGroup_LoadCompleted *);
	virtual CNETMsg_SpawnGroup_LoadCompleted * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CNETMsg_SpawnGroup_LoadCompleted &);
	void MergeFrom(const CNETMsg_SpawnGroup_LoadCompleted &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_spawngrouphandle();
	void clear_spawngrouphandle();
	uint32 spawngrouphandle();
	void set_spawngrouphandle(uint32);
	void set_has_spawngrouphandle();
	void clear_has_spawngrouphandle();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/networkbasetypes.pb.h:2774
class CSVCMsg_GameSessionConfiguration : public Message {
public:

	static const int kIsMultiplayerFieldNumber = 1;
	static const int kIsLoadsavegameFieldNumber = 2;
	static const int kIsBackgroundMapFieldNumber = 3;
	static const int kIsHeadlessFieldNumber = 4;
	static const int kMinClientLimitFieldNumber = 5;
	static const int kMaxClientLimitFieldNumber = 6;
	static const int kMaxClientsFieldNumber = 7;
	static const int kTickIntervalFieldNumber = 8;
	static const int kHostnameFieldNumber = 9;
	static const int kSavegamenameFieldNumber = 10;
	static const int kS1MapnameFieldNumber = 11;
	static const int kGamemodeFieldNumber = 12;
	static const int kServerIpAddressFieldNumber = 13;
	static const int kDataFieldNumber = 14;
	static const int kIsLocalonlyFieldNumber = 15;
	static const int kIsTransitionFieldNumber = 16;
	static const int kPreviouslevelFieldNumber = 17;
	static const int kLandmarknameFieldNumber = 18;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool is_multiplayer_;  // +0x18
	bool is_loadsavegame_;  // +0x19
	bool is_background_map_;  // +0x1a
	bool is_headless_;  // +0x1b
	uint32 min_client_limit_;  // +0x1c
	uint32 max_client_limit_;  // +0x20
	uint32 max_clients_;  // +0x24
	string * hostname_;  // +0x28
	string * savegamename_;  // +0x30
	string * s1_mapname_;  // +0x38
	string * gamemode_;  // +0x40
	string * server_ip_address_;  // +0x48
	uint32 tick_interval_;  // +0x50
	bool is_localonly_;  // +0x54
	bool is_transition_;  // +0x55

	string * data_;  // +0x58
	string * previouslevel_;  // +0x60
	string * landmarkname_;  // +0x68

	static CSVCMsg_GameSessionConfiguration * default_instance_;
	CSVCMsg_GameSessionConfiguration();
	virtual ~CSVCMsg_GameSessionConfiguration();
	CSVCMsg_GameSessionConfiguration(const CSVCMsg_GameSessionConfiguration &);
	CSVCMsg_GameSessionConfiguration & operator=(const CSVCMsg_GameSessionConfiguration &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSVCMsg_GameSessionConfiguration & default_instance();
	void Swap(CSVCMsg_GameSessionConfiguration *);
	virtual CSVCMsg_GameSessionConfiguration * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSVCMsg_GameSessionConfiguration &);
	void MergeFrom(const CSVCMsg_GameSessionConfiguration &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_is_multiplayer();
	void clear_is_multiplayer();
	bool is_multiplayer();
	void set_is_multiplayer(bool);
	bool has_is_loadsavegame();
	void clear_is_loadsavegame();
	bool is_loadsavegame();
	void set_is_loadsavegame(bool);
	bool has_is_background_map();
	void clear_is_background_map();
	bool is_background_map();
	void set_is_background_map(bool);
	bool has_is_headless();
	void clear_is_headless();
	bool is_headless();
	void set_is_headless(bool);
	bool has_min_client_limit();
	void clear_min_client_limit();
	uint32 min_client_limit();
	void set_min_client_limit(uint32);
	bool has_max_client_limit();
	void clear_max_client_limit();
	uint32 max_client_limit();
	void set_max_client_limit(uint32);
	bool has_max_clients();
	void clear_max_clients();
	uint32 max_clients();
	void set_max_clients(uint32);
	bool has_tick_interval();
	void clear_tick_interval();
	uint32 tick_interval();
	void set_tick_interval(uint32);
	bool has_hostname();
	void clear_hostname();
	const string & hostname();
	void set_hostname(const string &);
	void set_hostname(const char *);
	void set_hostname(const char *, size_t);
	string * mutable_hostname();
	string * release_hostname();
	void set_allocated_hostname(string *);
	bool has_savegamename();
	void clear_savegamename();
	const string & savegamename();
	void set_savegamename(const string &);
	void set_savegamename(const char *);
	void set_savegamename(const char *, size_t);
	string * mutable_savegamename();
	string * release_savegamename();
	void set_allocated_savegamename(string *);
	bool has_s1_mapname();
	void clear_s1_mapname();
	const string & s1_mapname();
	void set_s1_mapname(const string &);
	void set_s1_mapname(const char *);
	void set_s1_mapname(const char *, size_t);
	string * mutable_s1_mapname();
	string * release_s1_mapname();
	void set_allocated_s1_mapname(string *);
	bool has_gamemode();
	void clear_gamemode();
	const string & gamemode();
	void set_gamemode(const string &);
	void set_gamemode(const char *);
	void set_gamemode(const char *, size_t);
	string * mutable_gamemode();
	string * release_gamemode();
	void set_allocated_gamemode(string *);
	bool has_server_ip_address();
	void clear_server_ip_address();
	const string & server_ip_address();
	void set_server_ip_address(const string &);
	void set_server_ip_address(const char *);
	void set_server_ip_address(const char *, size_t);
	string * mutable_server_ip_address();
	string * release_server_ip_address();
	void set_allocated_server_ip_address(string *);
	bool has_data();
	void clear_data();
	const string & data();
	void set_data(const string &);
	void set_data(const char *);
	void set_data(const void *, size_t);
	string * mutable_data();
	string * release_data();
	void set_allocated_data(string *);
	bool has_is_localonly();
	void clear_is_localonly();
	bool is_localonly();
	void set_is_localonly(bool);
	bool has_is_transition();
	void clear_is_transition();
	bool is_transition();
	void set_is_transition(bool);
	bool has_previouslevel();
	void clear_previouslevel();
	const string & previouslevel();
	void set_previouslevel(const string &);
	void set_previouslevel(const char *);
	void set_previouslevel(const char *, size_t);
	string * mutable_previouslevel();
	string * release_previouslevel();
	void set_allocated_previouslevel(string *);
	bool has_landmarkname();
	void clear_landmarkname();
	const string & landmarkname();
	void set_landmarkname(const string &);
	void set_landmarkname(const char *);
	void set_landmarkname(const char *, size_t);
	string * mutable_landmarkname();
	string * release_landmarkname();
	void set_allocated_landmarkname(string *);
	void set_has_is_multiplayer();
	void clear_has_is_multiplayer();
	void set_has_is_loadsavegame();
	void clear_has_is_loadsavegame();
	void set_has_is_background_map();
	void clear_has_is_background_map();
	void set_has_is_headless();
	void clear_has_is_headless();
	void set_has_min_client_limit();
	void clear_has_min_client_limit();
	void set_has_max_client_limit();
	void clear_has_max_client_limit();
	void set_has_max_clients();
	void clear_has_max_clients();
	void set_has_tick_interval();
	void clear_has_tick_interval();
	void set_has_hostname();
	void clear_has_hostname();
	void set_has_savegamename();
	void clear_has_savegamename();
	void set_has_s1_mapname();
	void clear_has_s1_mapname();
	void set_has_gamemode();
	void clear_has_gamemode();
	void set_has_server_ip_address();
	void clear_has_server_ip_address();
	void set_has_data();
	void clear_has_data();
	void set_has_is_localonly();
	void clear_has_is_localonly();
	void set_has_is_transition();
	void clear_has_is_transition();
	void set_has_previouslevel();
	void clear_has_previouslevel();
	void set_has_landmarkname();
	void clear_has_landmarkname();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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
