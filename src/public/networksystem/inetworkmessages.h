// Reconstructed from DWARF by pahole; not original source.

// src/public/networksystem/inetworkmessages.h:81
class NetworkableData_t {
	union {
		bool m_bVal;  // +0x0
		int64 m_iVal64;  // +0x0
		uint64 m_uVal64;  // +0x0
		float m_flVal32[7];  // +0x0
		float64 m_flVal64;  // +0x0
		const char * m_pString;  // +0x0
		const void * m_pBuffer;  // +0x0
	};

	union {
		bool m_bVal;  // +0x0
		int64 m_iVal64;  // +0x0
		uint64 m_uVal64;  // +0x0
		float m_flVal32[7];  // +0x0
		float64 m_flVal64;  // +0x0
		const char * m_pString;  // +0x0
		const void * m_pBuffer;  // +0x0
	};
	int m_nNumComponents;  // +0x28
	NetworkableData_t(CUtlMemory<char, int> *);
	void SetInvalid();
	void Set(const Vector &, const QAngle &);
	void Set(const char *);
	void Set(const void *, size_t);
	void SetStringToScratchBuf();
	void SetBufferToScratchBuf(size_t);
	void Get(Vector &, QAngle &);
	void Get(char * *);
	void Get(void * *);
	bool operator!=(const NetworkableData_t &);
	bool operator==(const NetworkableData_t &);
	bool operator==(const char * *);
	bool IsZero();
	CUtlString ToString();
	void CopyFrom(const NetworkableData_t &);
	void Set<long long unsigned int>(const long long unsigned int &);
	void Set<QAngle>(const QAngle &);
	void Set<long long int>(const long long int &);
	void Set<float>(const float &);
	void Get<float>(float *);

	// sizeof = 48
};

// src/public/networksystem/inetworkmessages.h:81
class NetworkableData_t {
	union {
		bool m_bVal;  // +0x0
		int64 m_iVal64;  // +0x0
		uint64 m_uVal64;  // +0x0
		float m_flVal32[7];  // +0x0
		float64 m_flVal64;  // +0x0
		const char * m_pString;  // +0x0
		const void * m_pBuffer;  // +0x0
	};

	union {
		bool m_bVal;  // +0x0
		int64 m_iVal64;  // +0x0
		uint64 m_uVal64;  // +0x0
		float m_flVal32[7];  // +0x0
		float64 m_flVal64;  // +0x0
		const char * m_pString;  // +0x0
		const void * m_pBuffer;  // +0x0
	};
	int m_nNumComponents;  // +0x28
	NetworkableData_t(CUtlMemory<char, int> *);
	void SetInvalid();
	void Set(const Vector &, const QAngle &);
	void Set(const char *);
	void Set(const void *, size_t);
	void SetStringToScratchBuf();
	void SetBufferToScratchBuf(size_t);
	void Get(Vector &, QAngle &);
	void Get(char * *);
	void Get(void * *);
	bool operator!=(const NetworkableData_t &);
	bool operator==(const NetworkableData_t &);
	bool operator==(const char * *);
	bool IsZero();
	CUtlString ToString();
	void CopyFrom(const NetworkableData_t &);
	void Set<long long unsigned int>(const long long unsigned int &);

	// sizeof = 48
};

// src/public/networksystem/inetworkmessages.h:81
class NetworkableData_t {
	union {
		bool m_bVal;  // +0x0
		int64 m_iVal64;  // +0x0
		uint64 m_uVal64;  // +0x0
		float m_flVal32[7];  // +0x0
		float64 m_flVal64;  // +0x0
		const char * m_pString;  // +0x0
		const void * m_pBuffer;  // +0x0
	};

	union {
		bool m_bVal;  // +0x0
		int64 m_iVal64;  // +0x0
		uint64 m_uVal64;  // +0x0
		float m_flVal32[7];  // +0x0
		float64 m_flVal64;  // +0x0
		const char * m_pString;  // +0x0
		const void * m_pBuffer;  // +0x0
	};
	int m_nNumComponents;  // +0x28
	NetworkableData_t(CUtlMemory<char, int> *);
	void SetInvalid();
	void Set(const Vector &, const QAngle &);
	void Set(const char *);
	void Set(const void *, size_t);
	void SetStringToScratchBuf();
	void SetBufferToScratchBuf(size_t);
	void Get(Vector &, QAngle &);
	void Get(char * *);
	void Get(void * *);
	bool operator!=(const NetworkableData_t &);
	bool operator==(const NetworkableData_t &);
	bool operator==(const char * *);
	bool IsZero();
	CUtlString ToString();
	void CopyFrom(const NetworkableData_t &);
	void Set<long long unsigned int>(const long long unsigned int &);
	void Set<Vector>(const Vector &);
	void Set<QAngle>(const QAngle &);
	void Set<long long int>(const long long int &);
	void Set<float>(const float &);

	// sizeof = 48
};

// src/public/networksystem/inetworkmessages.h:81
class NetworkableData_t {
	union {
		bool m_bVal;  // +0x0
		int64 m_iVal64;  // +0x0
		uint64 m_uVal64;  // +0x0
		float m_flVal32[7];  // +0x0
		float64 m_flVal64;  // +0x0
		const char * m_pString;  // +0x0
		const void * m_pBuffer;  // +0x0
	};

	union {
		bool m_bVal;  // +0x0
		int64 m_iVal64;  // +0x0
		uint64 m_uVal64;  // +0x0
		float m_flVal32[7];  // +0x0
		float64 m_flVal64;  // +0x0
		const char * m_pString;  // +0x0
		const void * m_pBuffer;  // +0x0
	};
	int m_nNumComponents;  // +0x28
	NetworkableData_t(CUtlMemory<char, int> *);
	void SetInvalid();
	void Set(const Vector &, const QAngle &);
	void Set(const char *);
	void Set(const void *, size_t);
	void SetStringToScratchBuf();
	void SetBufferToScratchBuf(size_t);
	void Get(Vector &, QAngle &);
	void Get(char * *);
	void Get(void * *);
	bool operator!=(const NetworkableData_t &);
	bool operator==(const NetworkableData_t &);
	bool operator==(const char * *);
	bool IsZero();
	CUtlString ToString();
	void CopyFrom(const NetworkableData_t &);
	void Set<float>(const float &);
	void Get<float>(float *);

	// sizeof = 48
};

// src/public/networksystem/inetworkmessages.h:454
struct NetworkFieldInfo_t {
	uint16 m_nMemoryOffset;  // +0x0
	uint16 m_nArrayCount;  // +0x2
	uint16 m_nArrayStride;  // +0x4
	uint8 m_priority;  // +0x6
	uint8 m_nNetworkDataType:5;  // +0x7:0
	uint8 m_nNumComponents:3;  // +0x7:5
	ClassIntrospectionHandle_t m_pDataClass;  // +0x8
	FieldIntrospectionHandle_t m_pFieldSchema;  // +0x10
	NetworkFieldInfo_t();
	const char * GetName();
	NetworkFieldInfo_t & operator=(const NetworkFieldInfo_t &);
	int ArrayCount(void *);
	uint8 * ArrayElement(void *, int);

	// sizeof = 32
};

// src/public/networksystem/inetworkmessages.h:526
struct FieldMetaInfo_t {
	bool m_bNetworkDisable:1;  // +0xc0:0
	bool m_bNetworkEnable:1;  // +0xc0:1
	bool m_bOptionalSerializer:1;  // +0xc0:2
	bool m_bBitCountPresent:1;  // +0xc0:3

	const char * m_pNetworkAlias;  // +0xc8
	const char * m_pNetworkTypeAlias;  // +0xd0
	const char * m_pUserDefinedChangeCallback;  // +0xd8
	const char * m_pUserDefinedArraySerializer;  // +0xe0
	const char * m_pUserDefinedSerializer;  // +0xe8
	const char * m_pEncoderName;  // +0xf0
	const char * m_pCountFieldName;  // +0xf8
	const char * m_pCountIfFieldTrueName;  // +0x100
	uint8 m_priority;  // +0x108

	SendProxyRecipientsFilter_t m_pfnSendProxyRecipientsFilter;  // +0x128
	int m_nBitCount;  // +0x130
	int m_nNetworkEncodeFlags;  // +0x134
	float32 m_flMinValue;  // +0x138
	float32 m_flMaxValue;  // +0x13c
	FieldMetaInfo_t();
	void Init(CSchemaFieldIterator &);

	// sizeof = 320
};

// src/public/networksystem/inetworkmessages.h:642
struct NetworkSerializerInfo_t {
	const void * m_pSerializerData;  // +0x0
	const NetworkFieldInfo_t * m_pFieldInfo;  // +0x8
	const void * m_pStructBase;  // +0x10
	const void * m_pFieldData;  // +0x18
	int m_nObjectId;  // +0x24

	// sizeof = 40
};

// src/public/networksystem/inetworkmessages.h:652
struct NetworkUnserializerInfo_t {
	const void * m_pSerializerData;  // +0x0
	const NetworkFieldInfo_t * m_pFieldInfo;  // +0x8
	void * m_pStructBase;  // +0x10
	void * m_pFieldData;  // +0x18

	bool m_bIsPerformingChangeCallback;  // +0x30

	int m_nObjectId;  // +0x34
	NetworkUnserializerInfo_t();
	NetworkUnserializerInfo_t(const NetworkFieldInfo_t *, void *, void *, NetworkSerializationMode_t, int);

	// sizeof = 56
};

// src/public/networksystem/inetworkmessages.h:726
class IProtobufBinding {
	int ()() * * _vptr.IProtobufBinding;  // +0x0
	IProtobufBinding(IProtobufBinding &);
	IProtobufBinding(const IProtobufBinding &);
	IProtobufBinding();
	virtual const char * GetName();
	virtual size_t GetSize();
	virtual const char * ToString(const void *, CUtlString &);
	virtual const char * GetGroup();
	virtual Color GetGroupColor();
	virtual NetChannelBufType_t GetBufType();
	virtual bool ReadFromBuffer(void *, bf_read &);
	virtual bool WriteToBuffer(const void *, bf_write &);
	virtual void * AllocateMessage();
	virtual void DeallocateMessage(void *);
	virtual void * AllocateAndCopyConstructNetMessage(const void *);
	virtual bool OkToRedispatch();
	virtual void Copy(const void *, void *);

	// vtable[0] GetName
	// vtable[1] GetSize
	// vtable[2] ToString
	// vtable[3] GetGroup
	// vtable[4] GetGroupColor
	// vtable[5] GetBufType
	// vtable[6] ReadFromBuffer
	// vtable[7] WriteToBuffer
	// vtable[8] AllocateMessage
	// vtable[9] DeallocateMessage
	// vtable[10] AllocateAndCopyConstructNetMessage
	// vtable[11] OkToRedispatch
	// vtable[12] Copy
	// sizeof = 8
};

// src/public/networksystem/inetworkmessages.h:753
struct NetMessageInfo_t {
	uint32 m_nCategoryMask;  // +0x0

	const CSchemaClassBindingBase * m_pSchemaBinding;  // +0x8
	const IProtobufBinding * m_pProtobufBinding;  // +0x10
	uint16 m_nMessageId;  // +0x20
	uint8 m_nGroupId;  // +0x22
	int8 m_nDefaultBufferType:6;  // +0x23:0
	uint8 m_bCannotBeNetworked:1;  // +0x23:6
	uint8 m_bAssumeFieldsNotNetworked:1;  // +0x23:7
	NetMessageInfo_t();
	const char * GetName();
	const IProtobufBinding * GetProtobufBinding();
	bool operator==(const NetMessageInfo_t &);

	// sizeof = 40
};

// src/public/networksystem/inetworkmessages.h:1196
class INetworkSerializerBindingBuildFilter {
	int ()() * * _vptr.INetworkSerializerBindingBuildFilter;  // +0x0
	INetworkSerializerBindingBuildFilter();
	virtual ~INetworkSerializerBindingBuildFilter();
	virtual int GetFieldPriority(ClassIntrospectionHandle_t);
	virtual const char * GetDefaultGroupName();
	virtual CSchemaType * GetOverridePointedToClass(const char *, CSchemaType *);

	// vtable[2] GetFieldPriority
	// vtable[3] GetDefaultGroupName
	// vtable[4] GetOverridePointedToClass
	// sizeof = 8
};

// src/public/networksystem/inetworkmessages.h:1207
struct BuildFlattenedSerializerInfo_t {
	ClassIntrospectionHandle_t m_pClassIntrospection;  // +0x0
	FlattenedSerializerHandle_t * m_pSerializerHandle;  // +0x10
	bool m_bUseNetworkVars;  // +0x18
	bool m_bForceCannotBeNetworked;  // +0x19
	bool m_bSerializerAlreadyExisted;  // +0x1a
	BuildFlattenedSerializerInfo_t();

	// sizeof = 32
};

// src/public/networksystem/inetworkmessages.h:1487
class IFlattenedSerializerSpewFunc {
	int ()() * * _vptr.IFlattenedSerializerSpewFunc;  // +0x0
	IFlattenedSerializerSpewFunc(const IFlattenedSerializerSpewFunc &);
	IFlattenedSerializerSpewFunc();
	virtual ~IFlattenedSerializerSpewFunc();
	virtual void Spew(const char *);

	// vtable[2] Spew
	// sizeof = 8
};

// src/public/networksystem/inetworkmessages.h:1496
class CFlattenedSerializerSpewFunc_Log : public IFlattenedSerializerSpewFunc {
public:

private:

	CFlattenedSerializerSpewFunc_Log_Func m_pfnLog;  // +0x8
	CFlattenedSerializerSpewFunc_Log(CFlattenedSerializerSpewFunc_Log_Func);
	virtual void Spew(const char *);
	virtual ~CFlattenedSerializerSpewFunc_Log();

	// vtable[2] Spew
	// sizeof = 16
};

// src/public/networksystem/inetworkmessages.h:1704
class CSendProxyRecipients {
	CSendProxyRecipients();
	void SetAllRecipients();
	void ClearAllRecipients();
	void SetRecipient(CPlayerSlot);
	void ClearRecipient(CPlayerSlot);
	void SetOnly(CPlayerSlot);
	void ExcludeOnly(CPlayerSlot);
	bool operator==(const CSendProxyRecipients &);

	// sizeof = 8
};

// src/public/networksystem/inetworkmessages.h:1989
class CNetworkFieldReallocRecord {
	const void * m_pOldStart;  // +0x0
	const void * m_pNewStart;  // +0x8
	size_t m_unOldSpan;  // +0x10
	void * MaybeRebase(void *);

	// sizeof = 24
};

// src/public/networksystem/inetworkmessages.h:2008
class CNetworkFieldDeallocRecord {
	const void * m_pDeletedMemoryStart;  // +0x0
	const void * m_pDeletedMemoryEnd;  // +0x8
	bool Contains(const void *);

	// sizeof = 16
};

// src/public/networksystem/inetworkmessages.h:2022
class INetworkFieldScratchData {
	int ()() * * _vptr.INetworkFieldScratchData;  // +0x0
	INetworkFieldScratchData();
	virtual ~INetworkFieldScratchData();
	virtual void Init(uint32, LoggingChannelID_t);
	virtual void * Alloc(uint32);
	virtual void Purge();
	virtual LoggingChannelID_t LoggingChannel();

	// vtable[2] Init
	// vtable[3] Alloc
	// vtable[4] Purge
	// vtable[5] LoggingChannel
	// sizeof = 8
};

// src/public/networksystem/inetworkmessages.h:2033
struct CNetworkFieldChangedEventQueueChangeInfo_t {
	void * m_pContext;  // +0x18
	void * m_pData;  // +0x20
	uint32 m_unAllocSize;  // +0x28
	int32 m_nFieldIndex:24;  // +0x2c:0
	int32 m_type:8;  // +0x2c:24

	int32 m_nObjectId;  // +0x48
	UtlSymId_t m_changeCallbackNameSym;  // +0x4c
	CNetworkFieldChangedEventQueueChangeInfo_t();

	// sizeof = 80
};

// src/public/networksystem/inetworkmessages.h:2052
class CNetworkFieldChangedEventQueue {
private:

	int m_nProcessedOrder;  // +0x190
	bool m_bTrackReallocs;  // +0x194

	CNetworkFieldChangedEventQueue(INetworkFieldScratchData *, IFieldChangeLimitSpew *);
	void Reset();
	void SetTrackReallocs(bool);
	bool IsTrackingReallocs();
	void NoteMemoryReallocation(const void *, const void *, uint64);
	void NoteMemoryDeallocation(const void *, const void *);
	void ResolveAndCopyToQueue(CNetworkFieldChangedEventQueue *);
	void QueueChange(int, const CFieldPath &, UtlSymId_t, void *, void *, void * &, int, NetworkFieldChangedDelegateType_t, CUtlAbstractDelegate, int, int);
	void InvokeChangeCallbacks(int, float);
	void SetChangeCallbackTimeLimitSpewFunc(IFieldChangeLimitSpew *);

	// sizeof = 424
};

// src/public/networksystem/inetworkmessages.h:2052
class CNetworkFieldChangedEventQueue {
	enum {
		DEFAULT_CHANGEQUEUE_BYTES = 0x10000,
	};

private:

	int m_nProcessedOrder;  // +0x190
	bool m_bTrackReallocs;  // +0x194

	CNetworkFieldChangedEventQueue(INetworkFieldScratchData *, IFieldChangeLimitSpew *);
	void Reset();
	void SetTrackReallocs(bool);
	bool IsTrackingReallocs();
	void NoteMemoryReallocation(const void *, const void *, uint64);
	void NoteMemoryDeallocation(const void *, const void *);
	void ResolveAndCopyToQueue(CNetworkFieldChangedEventQueue *);
	void QueueChange(int, const CFieldPath &, UtlSymId_t, void *, void *, void * &, int, NetworkFieldChangedDelegateType_t, CUtlAbstractDelegate, int, int);
	void InvokeChangeCallbacks(int, float);
	void SetChangeCallbackTimeLimitSpewFunc(IFieldChangeLimitSpew *);
	~CNetworkFieldChangedEventQueue();

	// sizeof = 424
};
