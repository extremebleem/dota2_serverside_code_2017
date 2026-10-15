// Reconstructed from DWARF by pahole; not original source.

// src/public/entity2/entitykeyvalues.h:42
class CEntityVariantAllocator {
private:

	static CUtlScratchMemoryPool * sm_pMemoryPool;
	void * Allocate(uint);
	void Free(void *);
	void Activate(CUtlScratchMemoryPool *, bool);

	// sizeof = 1
};

// src/public/entity2/entitykeyvalues.h:65
struct EntityIOConnectionDescFat_t {
	char * m_pOutputName;  // +0x0

	char * m_pTargetName;  // +0x10
	char * m_pInputName;  // +0x18
	char * m_pOverrideParam;  // +0x20
	float m_flDelay;  // +0x28
	int m_nTimesToFire;  // +0x2c

	// sizeof = 48
};

// src/public/entity2/entitykeyvalues.h:120
class IEntityKeyComplex {
	int ()() * * _vptr.IEntityKeyComplex;  // +0x0
private:

	int m_nRef;  // +0x8
	IEntityKeyComplex();
	void AddRef();
	void Release();

protected:

	virtual void DeleteThis();

	// vtable[0] DeleteThis
	// sizeof = 16
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();

		// sizeof = 24
	};

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();
		~KeyValueInfo_t();
		KeyValueInfo_t & operator=(const KeyValueInfo_t &);

		// sizeof = 24
	};

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);
	CHandle<CBaseEntity> GetValue<CHandle<CBaseEntity> >(EntityKeyId_t);
	int AddKeyValue<char const*>(EntityKeyId_t, const char * const &, const char *);
	void SetValue<Vector>(EntityKeyId_t, const Vector &);
	int AddKeyValue<Vector>(EntityKeyId_t, const Vector &, const char *);
	void SetValue<QAngle>(EntityKeyId_t, const QAngle &);
	int AddKeyValue<QAngle>(EntityKeyId_t, const QAngle &, const char *);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();
		~KeyValueInfo_t();
		KeyValueInfo_t & operator=(const KeyValueInfo_t &);

		// sizeof = 24
	};

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);
	Vector GetValue<Vector>(EntityKeyId_t, const Vector &);
	bool GetValue<bool>(EntityKeyId_t, const bool &);
	int GetValue<int>(EntityKeyId_t, const int &);
	int GetValue<int>(EntityKeyId_t);
	float GetValue<float>(EntityKeyId_t, const float &);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();
		~KeyValueInfo_t();
		KeyValueInfo_t & operator=(const KeyValueInfo_t &);

		// sizeof = 24
	};

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);
	int AddKeyValue<<anonymous enum> >(EntityKeyId_t, const enum &, const char *);
	void SetValue<<anonymous enum> >(EntityKeyId_t, const enum &);
	int AddKeyValue<char const*>(EntityKeyId_t, const char * const &, const char *);
	void SetValue<Vector>(EntityKeyId_t, const Vector &);
	int AddKeyValue<Vector>(EntityKeyId_t, const Vector &, const char *);
	void SetValue<QAngle>(EntityKeyId_t, const QAngle &);
	int AddKeyValue<QAngle>(EntityKeyId_t, const QAngle &, const char *);
	void SetValue<bool>(EntityKeyId_t, const bool &);
	int AddKeyValue<bool>(EntityKeyId_t, const bool &, const char *);
	void SetValue<float>(EntityKeyId_t, const float &);
	int AddKeyValue<float>(EntityKeyId_t, const float &, const char *);
	int AddKeyValue<CVariantBase<CEntityVariantAllocator> >(EntityKeyId_t, const CVariantBase<CEntityVariantAllocator> &, const char *);
	void SetDynamicAttribute<CVariantBase<CEntityVariantAllocator> >(const char *, const CVariantBase<CEntityVariantAllocator> &);
	void SetValue<CVariantBase<CEntityVariantAllocator> >(EntityKeyId_t, const CVariantBase<CEntityVariantAllocator> &);
	int GetValue<int>(EntityKeyId_t);
	float GetValue<float>(EntityKeyId_t);
	bool GetValue<bool>(EntityKeyId_t, const bool &);
	float GetValue<float>(EntityKeyId_t, const float &);
	Vector GetValue<Vector>(EntityKeyId_t, const Vector &);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();

		// sizeof = 24
	};

	class CIterator {
	private:

		const CEntityKeyValues * m_pKeyValues;  // +0x0
		int m_nIndex;  // +0x8
		CIterator(const CEntityKeyValues *);
		void First();
		void Next();
		bool IsValid();
		const CEntityVariant & Value();
		EntityKeyId_t Id();
		const char * AttributeName();
		bool IsAttribute();

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();
		~KeyValueInfo_t();
		KeyValueInfo_t & operator=(const KeyValueInfo_t &);

		// sizeof = 24
	};

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);
	Color GetValue<Color>(EntityKeyId_t);
	Vector GetValue<Vector>(EntityKeyId_t);
	bool GetValue<bool>(EntityKeyId_t, const bool &);
	int GetValue<int>(EntityKeyId_t);
	int AddKeyValue<char const*>(EntityKeyId_t, const char * const &, const char *);
	void SetValue<Vector>(EntityKeyId_t, const Vector &);
	int AddKeyValue<Vector>(EntityKeyId_t, const Vector &, const char *);
	void SetValue<QAngle>(EntityKeyId_t, const QAngle &);
	int AddKeyValue<QAngle>(EntityKeyId_t, const QAngle &, const char *);
	void SetValue<CEntityHandle>(EntityKeyId_t, const CEntityHandle &);
	int AddKeyValue<CEntityHandle>(EntityKeyId_t, const CEntityHandle &, const char *);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();
		~KeyValueInfo_t();
		KeyValueInfo_t & operator=(const KeyValueInfo_t &);

		// sizeof = 24
	};

	class CIterator {
	private:

		const CEntityKeyValues * m_pKeyValues;  // +0x0
		int m_nIndex;  // +0x8
		CIterator(const CEntityKeyValues *);
		void First();
		void Next();
		bool IsValid();
		const CEntityVariant & Value();
		EntityKeyId_t Id();
		const char * AttributeName();
		bool IsAttribute();

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);
	int AddKeyValue<char const*>(EntityKeyId_t, const char * const &, const char *);
	int GetValue<int>(EntityKeyId_t, const int &);
	float GetValue<float>(EntityKeyId_t);
	Vector GetValue<Vector>(EntityKeyId_t, const Vector &);
	bool GetValue<bool>(EntityKeyId_t, const bool &);
	float GetValue<float>(EntityKeyId_t, const float &);
	QAngle GetValue<QAngle>(EntityKeyId_t, const QAngle &);
	void SetValue<char [260]>(EntityKeyId_t, char &);
	int AddKeyValue<char [260]>(EntityKeyId_t, char &, const char *);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();
		~KeyValueInfo_t();
		KeyValueInfo_t & operator=(const KeyValueInfo_t &);

		// sizeof = 24
	};

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);
	int AddKeyValue<char const*>(EntityKeyId_t, const char * const &, const char *);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();
		~KeyValueInfo_t();
		KeyValueInfo_t & operator=(const KeyValueInfo_t &);

		// sizeof = 24
	};

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);
	long long unsigned int GetValue<long long unsigned int>(EntityKeyId_t, const long long unsigned int &);
	int AddKeyValue<char const*>(EntityKeyId_t, const char * const &, const char *);
	int GetValue<int>(EntityKeyId_t);
	void SetValue<Vector>(EntityKeyId_t, const Vector &);
	int AddKeyValue<Vector>(EntityKeyId_t, const Vector &, const char *);
	void SetValue<QAngle>(EntityKeyId_t, const QAngle &);
	int AddKeyValue<QAngle>(EntityKeyId_t, const QAngle &, const char *);
	void SetValue<CEntityHandle>(EntityKeyId_t, const CEntityHandle &);
	int AddKeyValue<CEntityHandle>(EntityKeyId_t, const CEntityHandle &, const char *);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();
		~KeyValueInfo_t();
		KeyValueInfo_t & operator=(const KeyValueInfo_t &);

		// sizeof = 24
	};

	class CIterator {
	private:

		const CEntityKeyValues * m_pKeyValues;  // +0x0
		int m_nIndex;  // +0x8
		CIterator(const CEntityKeyValues *);
		void First();
		void Next();
		bool IsValid();
		const CEntityVariant & Value();
		EntityKeyId_t Id();
		const char * AttributeName();
		bool IsAttribute();

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);
	float GetValue<float>(EntityKeyId_t);
	int AddKeyValue<char const*>(EntityKeyId_t, const char * const &, const char *);
	void SetValue<char [1024]>(EntityKeyId_t, char &);
	int AddKeyValue<char [1024]>(EntityKeyId_t, char &, const char *);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();
		~KeyValueInfo_t();
		KeyValueInfo_t & operator=(const KeyValueInfo_t &);

		// sizeof = 24
	};

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);
	Color GetValue<Color>(EntityKeyId_t);
	float GetValue<float>(EntityKeyId_t);
	int GetValue<int>(EntityKeyId_t);
	int AddKeyValue<char const*>(EntityKeyId_t, const char * const &, const char *);
	void SetValue<int>(EntityKeyId_t, const int &);
	int AddKeyValue<int>(EntityKeyId_t, const int &, const char *);
	void SetValue<float>(EntityKeyId_t, const float &);
	int AddKeyValue<float>(EntityKeyId_t, const float &, const char *);
	int AddKeyValue<CEntityHandle>(EntityKeyId_t, const CEntityHandle &, const char *);
	void SetValue<CEntityHandle>(EntityKeyId_t, const CEntityHandle &);
	void SetValue<Vector>(EntityKeyId_t, const Vector &);
	int AddKeyValue<Vector>(EntityKeyId_t, const Vector &, const char *);
	void SetValue<QAngle>(EntityKeyId_t, const QAngle &);
	int AddKeyValue<QAngle>(EntityKeyId_t, const QAngle &, const char *);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();
		~KeyValueInfo_t();
		KeyValueInfo_t & operator=(const KeyValueInfo_t &);

		// sizeof = 24
	};

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);
	float GetValue<float>(EntityKeyId_t);
	void SetValue<int>(EntityKeyId_t, const int &);
	int AddKeyValue<int>(EntityKeyId_t, const int &, const char *);
	int AddKeyValue<char const*>(EntityKeyId_t, const char * const &, const char *);
	void SetValue<Vector>(EntityKeyId_t, const Vector &);
	int AddKeyValue<Vector>(EntityKeyId_t, const Vector &, const char *);
	void SetValue<QAngle>(EntityKeyId_t, const QAngle &);
	int AddKeyValue<QAngle>(EntityKeyId_t, const QAngle &, const char *);
	void SetValue<float>(EntityKeyId_t, const float &);
	int AddKeyValue<float>(EntityKeyId_t, const float &, const char *);
	int GetValue<int>(EntityKeyId_t);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();
		~KeyValueInfo_t();
		KeyValueInfo_t & operator=(const KeyValueInfo_t &);

		// sizeof = 24
	};

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);
	int GetValue<int>(EntityKeyId_t);
	float GetValue<float>(EntityKeyId_t);
	int AddKeyValue<char const*>(EntityKeyId_t, const char * const &, const char *);
	void SetValue<Vector>(EntityKeyId_t, const Vector &);
	int AddKeyValue<Vector>(EntityKeyId_t, const Vector &, const char *);
	void SetValue<QAngle>(EntityKeyId_t, const QAngle &);
	int AddKeyValue<QAngle>(EntityKeyId_t, const QAngle &, const char *);
	void SetValue<CFuncDistanceOccluder*>(EntityKeyId_t, CFuncDistanceOccluder * const &);
	int AddKeyValue<CFuncDistanceOccluder*>(EntityKeyId_t, CFuncDistanceOccluder * const &, const char *);
	void SetValue<long long unsigned int>(EntityKeyId_t, const long long unsigned int &);
	int AddKeyValue<long long unsigned int>(EntityKeyId_t, const long long unsigned int &, const char *);
	void SetValue<int>(EntityKeyId_t, const int &);
	int AddKeyValue<int>(EntityKeyId_t, const int &, const char *);
	void SetValue<CEntityHandle>(EntityKeyId_t, const CEntityHandle &);
	int AddKeyValue<CEntityHandle>(EntityKeyId_t, const CEntityHandle &, const char *);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();
		~KeyValueInfo_t();
		KeyValueInfo_t & operator=(const KeyValueInfo_t &);

		// sizeof = 24
	};

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);
	int GetValue<int>(EntityKeyId_t);
	int AddKeyValue<char const*>(EntityKeyId_t, const char * const &, const char *);
	float GetValue<float>(EntityKeyId_t, const float &);
	void SetValue<Vector>(EntityKeyId_t, const Vector &);
	int AddKeyValue<Vector>(EntityKeyId_t, const Vector &, const char *);
	void SetValue<QAngle>(EntityKeyId_t, const QAngle &);
	int AddKeyValue<QAngle>(EntityKeyId_t, const QAngle &, const char *);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();

		// sizeof = 24
	};

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);
	Color GetValue<Color>(EntityKeyId_t);
	float GetValue<float>(EntityKeyId_t);
	int GetValue<int>(EntityKeyId_t);
	Vector GetValue<Vector>(EntityKeyId_t, const Vector &);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();
		~KeyValueInfo_t();
		KeyValueInfo_t & operator=(const KeyValueInfo_t &);

		// sizeof = 24
	};

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);
	long long unsigned int GetValue<long long unsigned int>(EntityKeyId_t, const long long unsigned int &);
	bool GetValue<bool>(EntityKeyId_t, const bool &);
	void SetValue<int>(EntityKeyId_t, const int &);
	int AddKeyValue<int>(EntityKeyId_t, const int &, const char *);
	int AddKeyValue<char const*>(EntityKeyId_t, const char * const &, const char *);
	void SetValue<long long unsigned int>(EntityKeyId_t, const long long unsigned int &);
	int AddKeyValue<long long unsigned int>(EntityKeyId_t, const long long unsigned int &, const char *);
	void SetValue<bool>(EntityKeyId_t, const bool &);
	int AddKeyValue<bool>(EntityKeyId_t, const bool &, const char *);
	void SetValue<CHandle<CBaseEntity> >(EntityKeyId_t, const CHandle<CBaseEntity> &);
	int AddKeyValue<CHandle<CBaseEntity> >(EntityKeyId_t, const CHandle<CBaseEntity> &, const char *);
	void SetValue<float>(EntityKeyId_t, const float &);
	int AddKeyValue<float>(EntityKeyId_t, const float &, const char *);
	void SetValue<Vector>(EntityKeyId_t, const Vector &);
	int AddKeyValue<Vector>(EntityKeyId_t, const Vector &, const char *);
	void SetValue<QAngle>(EntityKeyId_t, const QAngle &);
	int AddKeyValue<QAngle>(EntityKeyId_t, const QAngle &, const char *);
	void SetValue<CEntityHandle>(EntityKeyId_t, const CEntityHandle &);
	int AddKeyValue<CEntityHandle>(EntityKeyId_t, const CEntityHandle &, const char *);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();

		// sizeof = 24
	};

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);
	float GetValue<float>(EntityKeyId_t);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();
		~KeyValueInfo_t();
		KeyValueInfo_t & operator=(const KeyValueInfo_t &);

		// sizeof = 24
	};

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);
	Vector GetValue<Vector>(EntityKeyId_t, const Vector &);
	CUtlStringToken GetValue<CUtlStringToken>(EntityKeyId_t, const CUtlStringToken &);
	bool GetValue<bool>(EntityKeyId_t, const bool &);
	int GetValue<int>(EntityKeyId_t);
	int GetValue<int>(EntityKeyId_t, const int &);
	int AddKeyValue<char const*>(EntityKeyId_t, const char * const &, const char *);
	int AddKeyValue<Vector>(EntityKeyId_t, const Vector &, const char *);
	void SetValue<Vector>(EntityKeyId_t, const Vector &);
	int AddKeyValue<QAngle>(EntityKeyId_t, const QAngle &, const char *);
	void SetValue<QAngle>(EntityKeyId_t, const QAngle &);
	int AddKeyValue<float>(EntityKeyId_t, const float &, const char *);
	void SetValue<float>(EntityKeyId_t, const float &);
	void SetValue<CEntityHandle>(EntityKeyId_t, const CEntityHandle &);
	int AddKeyValue<CEntityHandle>(EntityKeyId_t, const CEntityHandle &, const char *);
	void SetValue<char [512]>(EntityKeyId_t, char &);
	int AddKeyValue<char [512]>(EntityKeyId_t, char &, const char *);
	void SetValue<bool>(EntityKeyId_t, const bool &);
	int AddKeyValue<bool>(EntityKeyId_t, const bool &, const char *);
	void SetValue<CPropVRHand*>(EntityKeyId_t, CPropVRHand * const &);
	int AddKeyValue<CPropVRHand*>(EntityKeyId_t, CPropVRHand * const &, const char *);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();

		// sizeof = 24
	};

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);
	Color GetValue<Color>(EntityKeyId_t);
	QAngle GetValue<QAngle>(EntityKeyId_t);
	Vector GetValue<Vector>(EntityKeyId_t);
	int GetValue<int>(EntityKeyId_t);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();
		~KeyValueInfo_t();
		KeyValueInfo_t & operator=(const KeyValueInfo_t &);

		// sizeof = 24
	};

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);
	float GetValue<float>(EntityKeyId_t);
	int GetValue<int>(EntityKeyId_t);
	int AddKeyValue<char const*>(EntityKeyId_t, const char * const &, const char *);
	void SetValue<Vector>(EntityKeyId_t, const Vector &);
	int AddKeyValue<Vector>(EntityKeyId_t, const Vector &, const char *);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();

		// sizeof = 24
	};

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);
	QAngle GetValue<QAngle>(EntityKeyId_t);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();
		~KeyValueInfo_t();
		KeyValueInfo_t & operator=(const KeyValueInfo_t &);

		// sizeof = 24
	};

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);
	bool GetValue<bool>(EntityKeyId_t);
	float GetValue<float>(EntityKeyId_t);
	int AddKeyValue<char const*>(EntityKeyId_t, const char * const &, const char *);
	void SetValue<CEntityHandle>(EntityKeyId_t, const CEntityHandle &);
	int AddKeyValue<CEntityHandle>(EntityKeyId_t, const CEntityHandle &, const char *);
	void SetValue<int>(EntityKeyId_t, const int &);
	int AddKeyValue<int>(EntityKeyId_t, const int &, const char *);
	void SetValue<Vector>(EntityKeyId_t, const Vector &);
	int AddKeyValue<Vector>(EntityKeyId_t, const Vector &, const char *);
	void SetValue<QAngle>(EntityKeyId_t, const QAngle &);
	int AddKeyValue<QAngle>(EntityKeyId_t, const QAngle &, const char *);
	void SetValue<bool>(EntityKeyId_t, const bool &);
	int AddKeyValue<bool>(EntityKeyId_t, const bool &, const char *);
	void SetValue<float>(EntityKeyId_t, const float &);
	int AddKeyValue<float>(EntityKeyId_t, const float &, const char *);
	void SetValue<unsigned int>(EntityKeyId_t, const unsigned int &);
	int AddKeyValue<unsigned int>(EntityKeyId_t, const unsigned int &, const char *);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();
		~KeyValueInfo_t();
		KeyValueInfo_t & operator=(const KeyValueInfo_t &);

		// sizeof = 24
	};

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);
	int AddKeyValue<char const*>(EntityKeyId_t, const char * const &, const char *);
	CHandle<CBaseEntity> GetValue<CHandle<CBaseEntity> >(EntityKeyId_t);
	long long unsigned int GetValue<long long unsigned int>(EntityKeyId_t, const long long unsigned int &);
	int GetValue<int>(EntityKeyId_t, const int &);
	float GetValue<float>(EntityKeyId_t, const float &);
	bool GetValue<bool>(EntityKeyId_t, const bool &);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();
		~KeyValueInfo_t();
		KeyValueInfo_t & operator=(const KeyValueInfo_t &);

		// sizeof = 24
	};

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);
	CEntityInstance * GetValue<CEntityInstance*>(EntityKeyId_t, CEntityInstance * const &);
	int GetValue<int>(EntityKeyId_t, const int &);
	bool GetValue<bool>(EntityKeyId_t, const bool &);
	float GetValue<float>(EntityKeyId_t, const float &);
	int AddKeyValue<char const*>(EntityKeyId_t, const char * const &, const char *);
	void SetValue<int>(EntityKeyId_t, const int &);
	int AddKeyValue<int>(EntityKeyId_t, const int &, const char *);
	int AddKeyValue<CDOTA_BaseNPC_Hero*>(EntityKeyId_t, CDOTA_BaseNPC_Hero * const &, const char *);
	void SetValue<CDOTA_BaseNPC_Hero*>(EntityKeyId_t, CDOTA_BaseNPC_Hero * const &);
	void SetValue<bool>(EntityKeyId_t, const bool &);
	int AddKeyValue<bool>(EntityKeyId_t, const bool &, const char *);
	int AddKeyValue<Vector>(EntityKeyId_t, const Vector &, const char *);
	void SetValue<Vector>(EntityKeyId_t, const Vector &);
	int AddKeyValue<QAngle>(EntityKeyId_t, const QAngle &, const char *);
	void SetValue<QAngle>(EntityKeyId_t, const QAngle &);
	void SetValue<CHandle<CBaseEntity> >(EntityKeyId_t, const CHandle<CBaseEntity> &);
	int AddKeyValue<CHandle<CBaseEntity> >(EntityKeyId_t, const CHandle<CBaseEntity> &, const char *);
	long long unsigned int GetValue<long long unsigned int>(EntityKeyId_t, const long long unsigned int &);
	Vector GetValue<Vector>(EntityKeyId_t, const Vector &);
	void SetValue<long long unsigned int>(EntityKeyId_t, const long long unsigned int &);
	int AddKeyValue<long long unsigned int>(EntityKeyId_t, const long long unsigned int &, const char *);
	void SetValue<CBaseEntity*>(EntityKeyId_t, CBaseEntity * const &);
	int AddKeyValue<CBaseEntity*>(EntityKeyId_t, CBaseEntity * const &, const char *);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();
		~KeyValueInfo_t();
		KeyValueInfo_t & operator=(const KeyValueInfo_t &);

		// sizeof = 24
	};

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);
	long long unsigned int GetValue<long long unsigned int>(EntityKeyId_t, const long long unsigned int &);
	void SetValue<long long unsigned int>(EntityKeyId_t, const long long unsigned int &);
	int AddKeyValue<long long unsigned int>(EntityKeyId_t, const long long unsigned int &, const char *);
	int AddKeyValue<char const*>(EntityKeyId_t, const char * const &, const char *);
	int AddKeyValue<Vector>(EntityKeyId_t, const Vector &, const char *);
	void SetValue<Vector>(EntityKeyId_t, const Vector &);
	int AddKeyValue<CDOTA_Item*>(EntityKeyId_t, CDOTA_Item * const &, const char *);
	void SetValue<CDOTA_Item*>(EntityKeyId_t, CDOTA_Item * const &);
	void SetValue<CDOTAPlayer*>(EntityKeyId_t, CDOTAPlayer * const &);
	int AddKeyValue<CDOTAPlayer*>(EntityKeyId_t, CDOTAPlayer * const &, const char *);
	void SetValue<QAngle>(EntityKeyId_t, const QAngle &);
	int AddKeyValue<QAngle>(EntityKeyId_t, const QAngle &, const char *);
	void SetValue<bool>(EntityKeyId_t, const bool &);
	int AddKeyValue<bool>(EntityKeyId_t, const bool &, const char *);
	void SetValue<CEntityHandle>(EntityKeyId_t, const CEntityHandle &);
	int AddKeyValue<CEntityHandle>(EntityKeyId_t, const CEntityHandle &, const char *);
	void SetValue<int>(EntityKeyId_t, const int &);
	int AddKeyValue<int>(EntityKeyId_t, const int &, const char *);
	void SetValue<float>(EntityKeyId_t, const float &);
	int AddKeyValue<float>(EntityKeyId_t, const float &, const char *);
	bool GetValue<bool>(EntityKeyId_t, const bool &);
	Vector GetValue<Vector>(EntityKeyId_t, const Vector &);
	CEntityInstance * GetValue<CEntityInstance*>(EntityKeyId_t, CEntityInstance * const &);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();
		~KeyValueInfo_t();
		KeyValueInfo_t & operator=(const KeyValueInfo_t &);

		// sizeof = 24
	};

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);
	void SetValue<int>(EntityKeyId_t, const int &);
	int AddKeyValue<int>(EntityKeyId_t, const int &, const char *);
	void SetComplexValue<CEconItemView>(EntityKeyId_t, const CEconItemView &);
	void SetValue<long long unsigned int>(EntityKeyId_t, const long long unsigned int &);
	int AddKeyValue<long long unsigned int>(EntityKeyId_t, const long long unsigned int &, const char *);
	int AddKeyValue<char const*>(EntityKeyId_t, const char * const &, const char *);
	void SetValue<float>(EntityKeyId_t, const float &);
	int AddKeyValue<float>(EntityKeyId_t, const float &, const char *);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();
		~KeyValueInfo_t();
		KeyValueInfo_t & operator=(const KeyValueInfo_t &);

		// sizeof = 24
	};

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);
	bool GetValue<bool>(EntityKeyId_t, const bool &);
	int GetValue<int>(EntityKeyId_t, const int &);
	int GetValue<int>(EntityKeyId_t);
	bool GetValue<bool>(EntityKeyId_t);
	int AddKeyValue<char const*>(EntityKeyId_t, const char * const &, const char *);
	int AddKeyValue<int>(EntityKeyId_t, const int &, const char *);
	void SetValue<int>(EntityKeyId_t, const int &);
	void SetValue<CDOTAPlayer*>(EntityKeyId_t, CDOTAPlayer * const &);
	int AddKeyValue<CDOTAPlayer*>(EntityKeyId_t, CDOTAPlayer * const &, const char *);
	CHandle<CBaseEntity> GetValue<CHandle<CBaseEntity> >(EntityKeyId_t);
	void SetValue<CEntityHandle>(EntityKeyId_t, const CEntityHandle &);
	int AddKeyValue<CEntityHandle>(EntityKeyId_t, const CEntityHandle &, const char *);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();
		~KeyValueInfo_t();
		KeyValueInfo_t & operator=(const KeyValueInfo_t &);

		// sizeof = 24
	};

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);
	bool GetValue<bool>(EntityKeyId_t, const bool &);
	int GetValue<int>(EntityKeyId_t);
	int AddKeyValue<char const*>(EntityKeyId_t, const char * const &, const char *);
	void SetValue<bool>(EntityKeyId_t, const bool &);
	int AddKeyValue<bool>(EntityKeyId_t, const bool &, const char *);
	void SetValue<DOTA_LANE>(EntityKeyId_t, const DOTA_LANE &);
	int AddKeyValue<DOTA_LANE>(EntityKeyId_t, const DOTA_LANE &, const char *);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();
		~KeyValueInfo_t();
		KeyValueInfo_t & operator=(const KeyValueInfo_t &);

		// sizeof = 24
	};

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);
	CEntityInstance * GetValue<CEntityInstance*>(EntityKeyId_t, CEntityInstance * const &);
	int GetValue<int>(EntityKeyId_t, const int &);
	bool GetValue<bool>(EntityKeyId_t, const bool &);
	int AddKeyValue<char const*>(EntityKeyId_t, const char * const &, const char *);
	int AddKeyValue<CBaseEntity*>(EntityKeyId_t, CBaseEntity * const &, const char *);
	void SetValue<CBaseEntity*>(EntityKeyId_t, CBaseEntity * const &);
	void SetValue<CDOTA_BaseNPC*>(EntityKeyId_t, CDOTA_BaseNPC * const &);
	int AddKeyValue<CDOTA_BaseNPC*>(EntityKeyId_t, CDOTA_BaseNPC * const &, const char *);
	int AddKeyValue<int>(EntityKeyId_t, const int &, const char *);
	void SetValue<int>(EntityKeyId_t, const int &);
	int AddKeyValue<CDOTAPlayer*>(EntityKeyId_t, CDOTAPlayer * const &, const char *);
	void SetValue<CDOTAPlayer*>(EntityKeyId_t, CDOTAPlayer * const &);
	int AddKeyValue<bool>(EntityKeyId_t, const bool &, const char *);
	void SetValue<bool>(EntityKeyId_t, const bool &);
	int AddKeyValue<short unsigned int>(EntityKeyId_t, const short unsigned int &, const char *);
	void SetValue<short unsigned int>(EntityKeyId_t, const short unsigned int &);
	void SetValue<CVariantBase<CEntityVariantAllocator> >(EntityKeyId_t, const CVariantBase<CEntityVariantAllocator> &);
	int AddKeyValue<CVariantBase<CEntityVariantAllocator> >(EntityKeyId_t, const CVariantBase<CEntityVariantAllocator> &, const char *);
	int AddKeyValue<Vector>(EntityKeyId_t, const Vector &, const char *);
	void SetValue<Vector>(EntityKeyId_t, const Vector &);
	void SetValue<long long unsigned int>(EntityKeyId_t, const long long unsigned int &);
	int AddKeyValue<long long unsigned int>(EntityKeyId_t, const long long unsigned int &, const char *);
	void SetValue<CFmtStrN<256> >(EntityKeyId_t, const CFmtStrN<256, false> &);
	int AddKeyValue<CFmtStrN<256> >(EntityKeyId_t, const CFmtStrN<256, false> &, const char *);
	long long unsigned int GetValue<long long unsigned int>(EntityKeyId_t, const long long unsigned int &);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();
		~KeyValueInfo_t();
		KeyValueInfo_t & operator=(const KeyValueInfo_t &);

		// sizeof = 24
	};

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);
	int GetValue<int>(EntityKeyId_t, const int &);
	int AddKeyValue<CNetworkVarBase<int, CDOTA_BaseNPC_Hero::NetworkVar_m_iPlayerID> >(EntityKeyId_t, const CNetworkVarBase<int, CDOTA_BaseNPC_Hero::NetworkVar_m_iPlayerID> &, const char *);
	void SetValue<CNetworkVarBase<int, CDOTA_BaseNPC_Hero::NetworkVar_m_iPlayerID> >(EntityKeyId_t, const CNetworkVarBase<int, CDOTA_BaseNPC_Hero::NetworkVar_m_iPlayerID> &);
	int AddKeyValue<int>(EntityKeyId_t, const int &, const char *);
	void SetValue<int>(EntityKeyId_t, const int &);
	int AddKeyValue<char const*>(EntityKeyId_t, const char * const &, const char *);
	int GetValue<int>(EntityKeyId_t);
	bool GetValue<bool>(EntityKeyId_t, const bool &);
	float GetValue<float>(EntityKeyId_t);
	float GetValue<float>(EntityKeyId_t, const float &);
	Color GetValue<Color>(EntityKeyId_t, const Color &);
	CHandle<CBaseEntity> GetValue<CHandle<CBaseEntity> >(EntityKeyId_t);
	void SetValue<bool>(EntityKeyId_t, const bool &);
	int AddKeyValue<bool>(EntityKeyId_t, const bool &, const char *);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();
		~KeyValueInfo_t();
		KeyValueInfo_t & operator=(const KeyValueInfo_t &);

		// sizeof = 24
	};

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);
	int AddKeyValue<char const*>(EntityKeyId_t, const char * const &, const char *);
	void SetValue<bool>(EntityKeyId_t, const bool &);
	int AddKeyValue<bool>(EntityKeyId_t, const bool &, const char *);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();
		~KeyValueInfo_t();
		KeyValueInfo_t & operator=(const KeyValueInfo_t &);

		// sizeof = 24
	};

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);
	int AddKeyValue<bool>(EntityKeyId_t, const bool &, const char *);
	void SetValue<bool>(EntityKeyId_t, const bool &);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();
		~KeyValueInfo_t();
		KeyValueInfo_t & operator=(const KeyValueInfo_t &);

		// sizeof = 24
	};

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);
	CEntityHandle GetValue<CEntityHandle>(EntityKeyId_t, const CEntityHandle &);
	int AddKeyValue<char const*>(EntityKeyId_t, const char * const &, const char *);
	int AddKeyValue<int>(EntityKeyId_t, const int &, const char *);
	void SetValue<int>(EntityKeyId_t, const int &);
	void SetValue<CBaseEntity*>(EntityKeyId_t, CBaseEntity * const &);
	int AddKeyValue<CBaseEntity*>(EntityKeyId_t, CBaseEntity * const &, const char *);
	void SetValue<CEntityHandle>(EntityKeyId_t, const CEntityHandle &);
	int AddKeyValue<CEntityHandle>(EntityKeyId_t, const CEntityHandle &, const char *);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();
		~KeyValueInfo_t();
		KeyValueInfo_t & operator=(const KeyValueInfo_t &);

		// sizeof = 24
	};

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);
	CEntityHandle GetValue<CEntityHandle>(EntityKeyId_t, const CEntityHandle &);
	Vector GetValue<Vector>(EntityKeyId_t, const Vector &);
	int GetValue<int>(EntityKeyId_t, const int &);
	float GetValue<float>(EntityKeyId_t, const float &);
	int AddKeyValue<float>(EntityKeyId_t, const float &, const char *);
	void SetValue<float>(EntityKeyId_t, const float &);
	int AddKeyValue<char const*>(EntityKeyId_t, const char * const &, const char *);
	int AddKeyValue<CBaseEntity*>(EntityKeyId_t, CBaseEntity * const &, const char *);
	void SetValue<CBaseEntity*>(EntityKeyId_t, CBaseEntity * const &);
	int AddKeyValue<Vector>(EntityKeyId_t, const Vector &, const char *);
	void SetValue<Vector>(EntityKeyId_t, const Vector &);
	int AddKeyValue<int>(EntityKeyId_t, const int &, const char *);
	void SetValue<int>(EntityKeyId_t, const int &);
	int AddKeyValue<CEntityHandle>(EntityKeyId_t, const CEntityHandle &, const char *);
	void SetValue<CEntityHandle>(EntityKeyId_t, const CEntityHandle &);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();
		~KeyValueInfo_t();
		KeyValueInfo_t & operator=(const KeyValueInfo_t &);

		// sizeof = 24
	};

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);
	int AddKeyValue<char const*>(EntityKeyId_t, const char * const &, const char *);
	int AddKeyValue<Vector>(EntityKeyId_t, const Vector &, const char *);
	void SetValue<int>(EntityKeyId_t, const int &);
	int AddKeyValue<int>(EntityKeyId_t, const int &, const char *);
	void SetValue<long long unsigned int>(EntityKeyId_t, const long long unsigned int &);
	int AddKeyValue<long long unsigned int>(EntityKeyId_t, const long long unsigned int &, const char *);
	void SetValue<Vector>(EntityKeyId_t, const Vector &);
	void SetValue<QAngle>(EntityKeyId_t, const QAngle &);
	int AddKeyValue<QAngle>(EntityKeyId_t, const QAngle &, const char *);
	void SetValue<CEntityHandle>(EntityKeyId_t, const CEntityHandle &);
	int AddKeyValue<CEntityHandle>(EntityKeyId_t, const CEntityHandle &, const char *);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();

		// sizeof = 24
	};

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);
	long long unsigned int GetValue<long long unsigned int>(EntityKeyId_t, const long long unsigned int &);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();

		// sizeof = 24
	};

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);
	Vector GetValue<Vector>(EntityKeyId_t, const Vector &);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:169
class CEntityKeyValues {
	struct KeyValueInfo_t {
		CEntityVariant m_value;  // +0x0
		const char * m_pAttributeName;  // +0x10
		KeyValueInfo_t();
		~KeyValueInfo_t();
		KeyValueInfo_t & operator=(const KeyValueInfo_t &);

		// sizeof = 24
	};

	class CIterator {
	private:

		const CEntityKeyValues * m_pKeyValues;  // +0x0
		int m_nIndex;  // +0x8
		CIterator(const CEntityKeyValues *);
		void First();
		void Next();
		bool IsValid();
		const CEntityVariant & Value();
		EntityKeyId_t Id();
		const char * AttributeName();
		bool IsAttribute();

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct EntityComplexKeyListElem_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int16 m_nRefCount;  // +0x50
	int16 m_nQueuedForSpawnCount;  // +0x52

	static CEntityVariant sm_EmptyVariant;
	CEntityKeyValues();
	~CEntityKeyValues();
	void SetValue(EntityKeyId_t, const char *);
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	bool HasValue(EntityKeyId_t);
	const CEntityVariant & GetValue(EntityKeyId_t);
	const char * GetValue(EntityKeyId_t, const char *);
	void * GetPtrValue(EntityKeyId_t, void *);
	const char * GetValueString(EntityKeyId_t, const char *);
	void RemoveKey(EntityKeyId_t);
	void RemoveAllKeys();
	void RemoveKeyForSpawn(EntityKeyId_t);
	bool Serialize(CUtlBuffer &);
	bool Unserialize(CUtlBuffer &);
	bool IsQueuedForSpawn();
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void AddConnectionDesc(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void SetTargetNameForConnection(int, const char *);
	void SetValueOverrideForConnection(int, const char *);
	void RemoveConnectionDesc(int);
	int GetNumConnectionDescs();
	void GetConnectionDesc(EntityIOConnectionDesc_t *, int);
	const char * GetOutputName(int);
	const EntityIOConnectionDescFat_t * GetConnectionDescFat(int);
	void AddRef();
	void Release();
	int GetRef();
	void CopyFrom(const CEntityKeyValues *, bool);
	void DumpToLog(LoggingChannelID_t, const char *);
	CEntityVariant & FindOrAddValue(EntityKeyId_t);
	bool SerializeKeys(CUtlBuffer &, bool);
	bool UnserializeKeys(CUtlBuffer &, int, bool);
	void ReleaseAllComplexKeys();
	int FindKeyHash(EntityKeyId_t);
	void RemoveKeyValue(EntityKeyId_t);
	int AddKeyValue<bool>(EntityKeyId_t, const bool &, const char *);
	void SetValue<bool>(EntityKeyId_t, const bool &);
	int AddKeyValue<char const*>(EntityKeyId_t, const char * const &, const char *);
	int AddKeyValue<Vector>(EntityKeyId_t, const Vector &, const char *);
	void SetValue<Vector>(EntityKeyId_t, const Vector &);
	int AddKeyValue<QAngle>(EntityKeyId_t, const QAngle &, const char *);
	void SetValue<QAngle>(EntityKeyId_t, const QAngle &);
	int AddKeyValue<Vector2D>(EntityKeyId_t, const Vector2D &, const char *);
	void SetValue<Vector2D>(EntityKeyId_t, const Vector2D &);
	int AddKeyValue<Vector4D>(EntityKeyId_t, const Vector4D &, const char *);
	void SetValue<Vector4D>(EntityKeyId_t, const Vector4D &);
	int AddKeyValue<Color>(EntityKeyId_t, const Color &, const char *);
	void SetValue<Color>(EntityKeyId_t, const Color &);
	int AddKeyValue<Quaternion>(EntityKeyId_t, const Quaternion &, const char *);
	void SetValue<Quaternion>(EntityKeyId_t, const Quaternion &);
	int AddKeyValue<int>(EntityKeyId_t, const int &, const char *);
	void SetValue<int>(EntityKeyId_t, const int &);
	int AddKeyValue<CVariantBase<CEntityVariantAllocator> >(EntityKeyId_t, const CVariantBase<CEntityVariantAllocator> &, const char *);
	int AddKeyValue<char [260]>(EntityKeyId_t, char &, const char *);
	void SetDynamicAttribute<float>(const char *, const float &);
	int AddKeyValue<float>(EntityKeyId_t, const float &, const char *);
	void SetDynamicAttribute<int>(const char *, const int &);
	void SetValue<char [260]>(EntityKeyId_t, char &);
	void SetValue<char>(EntityKeyId_t, const char &);
	int AddKeyValue<char>(EntityKeyId_t, const char &, const char *);
	void SetValue<float>(EntityKeyId_t, const float &);
	void SetValue<double>(EntityKeyId_t, const double &);
	int AddKeyValue<double>(EntityKeyId_t, const double &, const char *);
	void SetValue<unsigned int>(EntityKeyId_t, const unsigned int &);
	int AddKeyValue<unsigned int>(EntityKeyId_t, const unsigned int &, const char *);
	void SetValue<long long int>(EntityKeyId_t, const long long int &);
	int AddKeyValue<long long int>(EntityKeyId_t, const long long int &, const char *);
	void SetValue<long long unsigned int>(EntityKeyId_t, const long long unsigned int &);
	int AddKeyValue<long long unsigned int>(EntityKeyId_t, const long long unsigned int &, const char *);
	void SetDynamicAttribute<CVariantBase<CEntityVariantAllocator> >(const char *, const CVariantBase<CEntityVariantAllocator> &);
	void SetValue<CVariantBase<CEntityVariantAllocator> >(EntityKeyId_t, const CVariantBase<CEntityVariantAllocator> &);

	// sizeof = 112
};

// src/public/entity2/entitykeyvalues.h:351
class CEntityKeyValuesModifyScope {
private:

	static CUtlScratchMemoryPool * sm_pAllocatorOverride;
	CEntityKeyValuesModifyScope(CEntityKeyValues *);
	~CEntityKeyValuesModifyScope();
	void BeginModify(CEntityKeyValues *);
	void Release();
	CUtlScratchMemoryPool * OverrideAllocator(CUtlScratchMemoryPool *);

	// sizeof = 16
};

// src/public/entity2/entitykeyvalues.h:685
struct FGDFieldInfo_t {
	uint32 m_resourceType;  // +0x8

	FGDFieldInfo_t();

	// sizeof = 24
};
