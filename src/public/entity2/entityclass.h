// Reconstructed from DWARF by pahole; not original source.

// src/public/entity2/entityclass.h:40
struct CEntityClassInfo {
private:

	const char * m_pszClassname;  // +0x0
	const char * m_pszCPPClassname;  // +0x8
	const char * m_pszDescription;  // +0x10

	// sizeof = 40
};

// src/public/entity2/entityclass.h:52
struct CEntityClassInfo_StaticHelper : public CEntityClassInfo {
public:

	CEntityClassInfo_StaticHelper(const char *, const char *, const char *, CEntityClassInfo *);

	// sizeof = 40
};

// src/public/entity2/entityclass.h:382
struct EntClassComponentOverride_t {
	const char * pszBaseComponent;  // +0x0
	const char * pszOverrideComponent;  // +0x8
private:

	// sizeof = 16
};

// src/public/entity2/entityclass.h:450
class CEntityClass {
	struct ClassInputInfo_t {
		string_t m_inputName;  // +0x0
		ClassInputInfo_t();
		bool operator==(const ClassInputInfo_t &);
		int Less(const ClassInputInfo_t *);
		bool SortLess(const ClassInputInfo_t &, const ClassInputInfo_t &, void *);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct ClassOutputInfo_t {
		string_t m_outputName;  // +0x0
		ClassOutputInfo_t();
		bool operator==(const ClassOutputInfo_t &);
		int Less(const ClassOutputInfo_t *);
		bool SortLess(const ClassOutputInfo_t &, const ClassOutputInfo_t &, void *);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct ComponentOffsets_t {
		ComponentOffset_t m_nBaseOffset;  // +0x0
	private:

		// sizeof = 2
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct ComponentHelper_t {
		size_t m_offset;  // +0x0
	private:

		ComponentHelper_t();
		ComponentHelper_t(size_t, CEntityComponentHelper *);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	class CClassAttributes {
	private:

		// sizeof = 1
	};
	/* tag__fprintf: const_type tag not supported! */;

	enum AcceptInputRetval_t {
		ACCEPT_INPUT_UNKNOWN = 0,
		ACCEPT_INPUT_KNOWN_BUT_UNHANDLED = 0x1,
		ACCEPT_INPUT_KNOWN_AND_HANDLED = 0x2,
	};

	struct UnserializationContext_t {
		bool m_bIsPrecaching;  // +0x0

		const matrix3x4a_t * m_pSpawnGroupToWorld;  // +0x8
		bool m_bSpawnGroupHasRotation;  // +0x10

		// sizeof = 24
	};

	int ()() * * _vptr.CEntityClass;  // +0x0
	int m_nInputCount;  // +0x18

	int m_nOutputCount;  // +0x28

private:

	string_t m_designerName;  // +0x48
	uint32 m_flags;  // +0x50
	uint32 m_nAllHelpersFlags;  // +0x54
	FlattenedSerializerHandle_t m_hNetworkSerializer;  // +0x220
	typedef CUtlVector<CEntityClass::ClassInputInfo_t, CUtlMemory<CEntityClass::ClassInputInfo_t, int> > ClassInputs_t;

	ClassInputs_t m_classInputs;  // +0x228
	typedef CUtlVector<CEntityClass::ClassOutputInfo_t, CUtlMemory<CEntityClass::ClassOutputInfo_t, int> > ClassOutputs_t;

	ClassOutputs_t m_classOutputs;  // +0x240

	void * m_pGameClass;  // +0x270

	static CUtlVector<bool, CUtlMemory<bool, int> > gm_fComponentsContained;
	static CUtlVector<const EntComponentInfo_t*, CUtlMemory<const EntComponentInfo_t*, int> > gm_ComponentInfosById;
	static CClassAttributes gm_ClassAttributes;

	CEntityClass(const CEntityClass &);
	CEntityClass();
	virtual ~CEntityClass();
	virtual void OnRegister();
	CEntityClass * GetSingleton();
	CEntityClass * GetBaseClass();
	CEntityClassInfo * GetClassInfo();
	CEntityClassInfo * GetBaseClassInfo();
	FlattenedSerializerHandle_t GetNetworkSerializer();
	uint32 GetFlags();
	void SetFlag(EntityClassFlags_t);
	void SetRequiredEntityHandle(CEntityHandle);
	CEntityHandle GetRequiredEntityHandle();
	bool IsCapableOfNetworking();
	bool ShouldSpawnInSpawnGroupInvalid();
	uint32 GetComponentOrComponentPointerOffset(int);
	bool UsesComponent(int);
	void * GetComponent(CEntityInstance *, int);
	bool IsA(CEntityClass *);
	FlattenedSerializerHandle_t GetClassSerializer();
	virtual void * AllocateInstance();
	virtual CEntityInstance * ConstructInstance(void *);
	virtual void DestructInstance(CEntityInstance *);
	virtual void FreeInstance(void *);
	virtual const ISchemaBinding * GetInstanceSchemaBinding();
	virtual bool CanAllocate();
	uint32 GetInstanceClassSizeOf();
	virtual const char * GetDefaultScriptClass();
	CEntityClass * * GetGlobalList();
	bool Unserialize(CEntityInstance *, const CEntityKeyValues *);
	void GetEntityIOInputs(CUtlVector<char const*, CUtlMemory<char const*, int> > &);
	void GetEntityIOOutputs(CUtlVector<const EntityIOOutputDesc_t*, CUtlMemory<const EntityIOOutputDesc_t*, int> > &);
	void GetEntityUnserializer(CUtlVector<ComponentUnserializerClassInfo_t*, CUtlMemory<ComponentUnserializerClassInfo_t*, int> > &);
	string_t GetName();
	const char * GetNameAsCStr();
	bool ClassMatches(const char *);
	bool ClassMatches(string_t);
	bool ClassMatchesExact(string_t);
	bool IsKeyUsedByUnserialization(EntityKeyId_t);
	void SetGameClass(void *);
	void * GetGameClass(bool);
	void SetClassInfo(CEntityClassInfo *, CEntityClassInfo *);
	virtual CUtlVector<bool, CUtlMemory<bool, int> > & GetComponentsContainedFlags();
	void BuildEntityIOTables();
	void AddEntityInputsToTable(EntInput_t *, int, int);
	void AddEntityOutputsToTable(EntOutput_t *, int, int);
	void FixupEntityOutputPointers(CEntityInstance *);
	AcceptInputRetval_t AcceptInput(CEntityInstance *, string_t, CEntityInstance *, CEntityInstance *, const CVariant &, int);
	void GetEntityIOOutputs(CEntityInstance *, CUtlVector<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> > &);
	CEntityIOOutput * FindEntityIOOutputByName(const char *, CEntityInstance *);
	void InheritFlagsFromBase(EntityClassFlags_t);
	bool FindKeyToUnserialize(void *, const ComponentUnserializerClassInfo_t *, EntityKeyId_t, void * *, const ComponentUnserializerFieldInfo_t * *);
	bool UnserializeKey(const UnserializationContext_t &, CEntityInstance *, void *, const ComponentUnserializerFieldInfo_t *, const CEntityVariant &);
	/* tag__fprintf: const_type tag not supported! */;
	void InvokePostUnserializationHandlers(void *, const ComponentUnserializerClassInfo_t *);
	bool IsKeyUsedByUnserialization(EntityKeyId_t, const ComponentUnserializerClassInfo_t *);
	void ReacquirePooledStrings();
	void AddToClassList(CEntityIdentity *);
	void RemoveFromClassList(CEntityIdentity *);
	bool HasHelper(uint32);

	// vtable[2] OnRegister
	// vtable[3] AllocateInstance
	// vtable[4] ConstructInstance
	// vtable[5] DestructInstance
	// vtable[6] FreeInstance
	// vtable[7] GetInstanceSchemaBinding
	// vtable[8] CanAllocate
	// vtable[9] GetDefaultScriptClass
	// vtable[10] GetComponentsContainedFlags
	// vtable[11] Schema_DynamicBinding
	// sizeof = 632
};

// src/public/entity2/entityclass.h:450
class CEntityClass {
	struct ClassInputInfo_t {
		string_t m_inputName;  // +0x0
		ClassInputInfo_t();
		bool operator==(const ClassInputInfo_t &);
		int Less(const ClassInputInfo_t *);
		bool SortLess(const ClassInputInfo_t &, const ClassInputInfo_t &, void *);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct ClassOutputInfo_t {
		string_t m_outputName;  // +0x0
		ClassOutputInfo_t();
		bool operator==(const ClassOutputInfo_t &);
		int Less(const ClassOutputInfo_t *);
		bool SortLess(const ClassOutputInfo_t &, const ClassOutputInfo_t &, void *);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct ComponentOffsets_t {
		ComponentOffset_t m_nBaseOffset;  // +0x0
	private:

		// sizeof = 2
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct ComponentHelper_t {
		size_t m_offset;  // +0x0
	private:

		ComponentHelper_t();
		ComponentHelper_t(size_t, CEntityComponentHelper *);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	class CClassAttributes {
	private:

		// sizeof = 1
	};
	/* tag__fprintf: const_type tag not supported! */;

	enum AcceptInputRetval_t {
		ACCEPT_INPUT_UNKNOWN = 0,
		ACCEPT_INPUT_KNOWN_BUT_UNHANDLED = 0x1,
		ACCEPT_INPUT_KNOWN_AND_HANDLED = 0x2,
	};

	struct UnserializationContext_t {
		bool m_bIsPrecaching;  // +0x0

		const matrix3x4a_t * m_pSpawnGroupToWorld;  // +0x8
		bool m_bSpawnGroupHasRotation;  // +0x10

		// sizeof = 24
	};

	int ()() * * _vptr.CEntityClass;  // +0x0
	int m_nInputCount;  // +0x18

	int m_nOutputCount;  // +0x28

private:

	string_t m_designerName;  // +0x48
	uint32 m_flags;  // +0x50
	uint32 m_nAllHelpersFlags;  // +0x54
	FlattenedSerializerHandle_t m_hNetworkSerializer;  // +0x220
	typedef CUtlVector<CEntityClass::ClassInputInfo_t, CUtlMemory<CEntityClass::ClassInputInfo_t, int> > ClassInputs_t;

	ClassInputs_t m_classInputs;  // +0x228
	typedef CUtlVector<CEntityClass::ClassOutputInfo_t, CUtlMemory<CEntityClass::ClassOutputInfo_t, int> > ClassOutputs_t;

	ClassOutputs_t m_classOutputs;  // +0x240

	void * m_pGameClass;  // +0x270

	static CUtlVector<bool, CUtlMemory<bool, int> > gm_fComponentsContained;
	static CUtlVector<const EntComponentInfo_t*, CUtlMemory<const EntComponentInfo_t*, int> > gm_ComponentInfosById;
	static CClassAttributes gm_ClassAttributes;

	CEntityClass(const CEntityClass &);
	CEntityClass();
	virtual ~CEntityClass();
	virtual void OnRegister();
	CEntityClass * GetSingleton();
	CEntityClass * GetBaseClass();
	CEntityClassInfo * GetClassInfo();
	CEntityClassInfo * GetBaseClassInfo();
	FlattenedSerializerHandle_t GetNetworkSerializer();
	uint32 GetFlags();
	void SetFlag(EntityClassFlags_t);
	void SetRequiredEntityHandle(CEntityHandle);
	CEntityHandle GetRequiredEntityHandle();
	bool IsCapableOfNetworking();
	bool ShouldSpawnInSpawnGroupInvalid();
	uint32 GetComponentOrComponentPointerOffset(int);
	bool UsesComponent(int);
	void * GetComponent(CEntityInstance *, int);
	bool IsA(CEntityClass *);
	FlattenedSerializerHandle_t GetClassSerializer();
	virtual void * AllocateInstance();
	virtual CEntityInstance * ConstructInstance(void *);
	virtual void DestructInstance(CEntityInstance *);
	virtual void FreeInstance(void *);
	virtual const ISchemaBinding * GetInstanceSchemaBinding();
	virtual bool CanAllocate();
	uint32 GetInstanceClassSizeOf();
	virtual const char * GetDefaultScriptClass();
	CEntityClass * * GetGlobalList();
	bool Unserialize(CEntityInstance *, const CEntityKeyValues *);
	void GetEntityIOInputs(CUtlVector<char const*, CUtlMemory<char const*, int> > &);
	void GetEntityIOOutputs(CUtlVector<const EntityIOOutputDesc_t*, CUtlMemory<const EntityIOOutputDesc_t*, int> > &);
	void GetEntityUnserializer(CUtlVector<ComponentUnserializerClassInfo_t*, CUtlMemory<ComponentUnserializerClassInfo_t*, int> > &);
	string_t GetName();
	const char * GetNameAsCStr();
	bool ClassMatches(const char *);
	bool ClassMatches(string_t);
	bool ClassMatchesExact(string_t);
	bool IsKeyUsedByUnserialization(EntityKeyId_t);
	void SetGameClass(void *);
	void * GetGameClass(bool);
	void SetClassInfo(CEntityClassInfo *, CEntityClassInfo *);
	virtual CUtlVector<bool, CUtlMemory<bool, int> > & GetComponentsContainedFlags();
	void BuildEntityIOTables();
	void AddEntityInputsToTable(EntInput_t *, int, int);
	void AddEntityOutputsToTable(EntOutput_t *, int, int);
	void FixupEntityOutputPointers(CEntityInstance *);
	AcceptInputRetval_t AcceptInput(CEntityInstance *, string_t, CEntityInstance *, CEntityInstance *, const CVariant &, int);
	void GetEntityIOOutputs(CEntityInstance *, CUtlVector<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> > &);
	CEntityIOOutput * FindEntityIOOutputByName(const char *, CEntityInstance *);
	void InheritFlagsFromBase(EntityClassFlags_t);
	bool FindKeyToUnserialize(void *, const ComponentUnserializerClassInfo_t *, EntityKeyId_t, void * *, const ComponentUnserializerFieldInfo_t * *);
	bool UnserializeKey(const UnserializationContext_t &, CEntityInstance *, void *, const ComponentUnserializerFieldInfo_t *, const CEntityVariant &);
	/* tag__fprintf: const_type tag not supported! */;
	void InvokePostUnserializationHandlers(void *, const ComponentUnserializerClassInfo_t *);
	bool IsKeyUsedByUnserialization(EntityKeyId_t, const ComponentUnserializerClassInfo_t *);
	void ReacquirePooledStrings();
	void AddToClassList(CEntityIdentity *);
	void RemoveFromClassList(CEntityIdentity *);
	bool HasHelper(uint32);

	bool GetComponent<CBodyComponent>(CEntityInstance *, CBodyComponent * *);

	// vtable[2] OnRegister
	// vtable[3] AllocateInstance
	// vtable[4] ConstructInstance
	// vtable[5] DestructInstance
	// vtable[6] FreeInstance
	// vtable[7] GetInstanceSchemaBinding
	// vtable[8] CanAllocate
	// vtable[9] GetDefaultScriptClass
	// vtable[10] GetComponentsContainedFlags
	// vtable[11] Schema_DynamicBinding
	// sizeof = 632
};

// src/public/entity2/entityclass.h:450
class CEntityClass {
	struct ClassInputInfo_t {
		string_t m_inputName;  // +0x0
		ClassInputInfo_t();
		bool operator==(const ClassInputInfo_t &);
		int Less(const ClassInputInfo_t *);
		bool SortLess(const ClassInputInfo_t &, const ClassInputInfo_t &, void *);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct ClassOutputInfo_t {
		string_t m_outputName;  // +0x0
		ClassOutputInfo_t();
		bool operator==(const ClassOutputInfo_t &);
		int Less(const ClassOutputInfo_t *);
		bool SortLess(const ClassOutputInfo_t &, const ClassOutputInfo_t &, void *);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct ComponentOffsets_t {
		ComponentOffset_t m_nBaseOffset;  // +0x0
	private:

		// sizeof = 2
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct ComponentHelper_t {
		size_t m_offset;  // +0x0
	private:

		ComponentHelper_t();
		ComponentHelper_t(size_t, CEntityComponentHelper *);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	class CClassAttributes {
	private:

		// sizeof = 1
	};
	/* tag__fprintf: const_type tag not supported! */;

	enum AcceptInputRetval_t {
		ACCEPT_INPUT_UNKNOWN = 0,
		ACCEPT_INPUT_KNOWN_BUT_UNHANDLED = 0x1,
		ACCEPT_INPUT_KNOWN_AND_HANDLED = 0x2,
	};

	struct UnserializationContext_t {
		bool m_bIsPrecaching;  // +0x0

		const matrix3x4a_t * m_pSpawnGroupToWorld;  // +0x8
		bool m_bSpawnGroupHasRotation;  // +0x10

		// sizeof = 24
	};

	int ()() * * _vptr.CEntityClass;  // +0x0
	int m_nInputCount;  // +0x18

	int m_nOutputCount;  // +0x28

private:

	string_t m_designerName;  // +0x48
	uint32 m_flags;  // +0x50
	uint32 m_nAllHelpersFlags;  // +0x54
	FlattenedSerializerHandle_t m_hNetworkSerializer;  // +0x220
	typedef CUtlVector<CEntityClass::ClassInputInfo_t, CUtlMemory<CEntityClass::ClassInputInfo_t, int> > ClassInputs_t;

	ClassInputs_t m_classInputs;  // +0x228
	typedef CUtlVector<CEntityClass::ClassOutputInfo_t, CUtlMemory<CEntityClass::ClassOutputInfo_t, int> > ClassOutputs_t;

	ClassOutputs_t m_classOutputs;  // +0x240

	void * m_pGameClass;  // +0x270

	static CUtlVector<bool, CUtlMemory<bool, int> > gm_fComponentsContained;
	static CUtlVector<const EntComponentInfo_t*, CUtlMemory<const EntComponentInfo_t*, int> > gm_ComponentInfosById;
	static CClassAttributes gm_ClassAttributes;

	CEntityClass(const CEntityClass &);
	CEntityClass();
	virtual ~CEntityClass();
	virtual void OnRegister();
	CEntityClass * GetSingleton();
	CEntityClass * GetBaseClass();
	CEntityClassInfo * GetClassInfo();
	CEntityClassInfo * GetBaseClassInfo();
	FlattenedSerializerHandle_t GetNetworkSerializer();
	uint32 GetFlags();
	void SetFlag(EntityClassFlags_t);
	void SetRequiredEntityHandle(CEntityHandle);
	CEntityHandle GetRequiredEntityHandle();
	bool IsCapableOfNetworking();
	bool ShouldSpawnInSpawnGroupInvalid();
	uint32 GetComponentOrComponentPointerOffset(int);
	bool UsesComponent(int);
	void * GetComponent(CEntityInstance *, int);
	bool IsA(CEntityClass *);
	FlattenedSerializerHandle_t GetClassSerializer();
	virtual void * AllocateInstance();
	virtual CEntityInstance * ConstructInstance(void *);
	virtual void DestructInstance(CEntityInstance *);
	virtual void FreeInstance(void *);
	virtual const ISchemaBinding * GetInstanceSchemaBinding();
	virtual bool CanAllocate();
	uint32 GetInstanceClassSizeOf();
	virtual const char * GetDefaultScriptClass();
	CEntityClass * * GetGlobalList();
	bool Unserialize(CEntityInstance *, const CEntityKeyValues *);
	void GetEntityIOInputs(CUtlVector<char const*, CUtlMemory<char const*, int> > &);
	void GetEntityIOOutputs(CUtlVector<const EntityIOOutputDesc_t*, CUtlMemory<const EntityIOOutputDesc_t*, int> > &);
	void GetEntityUnserializer(CUtlVector<ComponentUnserializerClassInfo_t*, CUtlMemory<ComponentUnserializerClassInfo_t*, int> > &);
	string_t GetName();
	const char * GetNameAsCStr();
	bool ClassMatches(const char *);
	bool ClassMatches(string_t);
	bool ClassMatchesExact(string_t);
	bool IsKeyUsedByUnserialization(EntityKeyId_t);
	void SetGameClass(void *);
	void * GetGameClass(bool);
	void SetClassInfo(CEntityClassInfo *, CEntityClassInfo *);
	virtual CUtlVector<bool, CUtlMemory<bool, int> > & GetComponentsContainedFlags();
	void BuildEntityIOTables();
	void AddEntityInputsToTable(EntInput_t *, int, int);
	void AddEntityOutputsToTable(EntOutput_t *, int, int);
	void FixupEntityOutputPointers(CEntityInstance *);
	AcceptInputRetval_t AcceptInput(CEntityInstance *, string_t, CEntityInstance *, CEntityInstance *, const CVariant &, int);
	void GetEntityIOOutputs(CEntityInstance *, CUtlVector<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> > &);
	CEntityIOOutput * FindEntityIOOutputByName(const char *, CEntityInstance *);
	void InheritFlagsFromBase(EntityClassFlags_t);
	bool FindKeyToUnserialize(void *, const ComponentUnserializerClassInfo_t *, EntityKeyId_t, void * *, const ComponentUnserializerFieldInfo_t * *);
	bool UnserializeKey(const UnserializationContext_t &, CEntityInstance *, void *, const ComponentUnserializerFieldInfo_t *, const CEntityVariant &);
	/* tag__fprintf: const_type tag not supported! */;
	void InvokePostUnserializationHandlers(void *, const ComponentUnserializerClassInfo_t *);
	bool IsKeyUsedByUnserialization(EntityKeyId_t, const ComponentUnserializerClassInfo_t *);
	void ReacquirePooledStrings();
	void AddToClassList(CEntityIdentity *);
	void RemoveFromClassList(CEntityIdentity *);
	bool HasHelper(uint32);

	bool GetComponent<CHitboxComponent>(CEntityInstance *, CHitboxComponent * *);
	bool GetComponent<CBodyComponent>(CEntityInstance *, CBodyComponent * *);

	// vtable[2] OnRegister
	// vtable[3] AllocateInstance
	// vtable[4] ConstructInstance
	// vtable[5] DestructInstance
	// vtable[6] FreeInstance
	// vtable[7] GetInstanceSchemaBinding
	// vtable[8] CanAllocate
	// vtable[9] GetDefaultScriptClass
	// vtable[10] GetComponentsContainedFlags
	// vtable[11] Schema_DynamicBinding
	// sizeof = 632
};

// src/public/entity2/entityclass.h:450
class CEntityClass {
	struct ClassInputInfo_t {
		string_t m_inputName;  // +0x0
		ClassInputInfo_t();
		bool operator==(const ClassInputInfo_t &);
		int Less(const ClassInputInfo_t *);
		bool SortLess(const ClassInputInfo_t &, const ClassInputInfo_t &, void *);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct ClassOutputInfo_t {
		string_t m_outputName;  // +0x0
		ClassOutputInfo_t();
		bool operator==(const ClassOutputInfo_t &);
		int Less(const ClassOutputInfo_t *);
		bool SortLess(const ClassOutputInfo_t &, const ClassOutputInfo_t &, void *);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct ComponentOffsets_t {
		ComponentOffset_t m_nBaseOffset;  // +0x0
	private:

		// sizeof = 2
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct ComponentHelper_t {
		size_t m_offset;  // +0x0
	private:

		ComponentHelper_t();
		ComponentHelper_t(size_t, CEntityComponentHelper *);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	class CClassAttributes {
	private:

		// sizeof = 1
	};
	/* tag__fprintf: const_type tag not supported! */;

	enum AcceptInputRetval_t {
		ACCEPT_INPUT_UNKNOWN = 0,
		ACCEPT_INPUT_KNOWN_BUT_UNHANDLED = 0x1,
		ACCEPT_INPUT_KNOWN_AND_HANDLED = 0x2,
	};

	struct UnserializationContext_t {
		bool m_bIsPrecaching;  // +0x0

		const matrix3x4a_t * m_pSpawnGroupToWorld;  // +0x8
		bool m_bSpawnGroupHasRotation;  // +0x10

		// sizeof = 24
	};

	int ()() * * _vptr.CEntityClass;  // +0x0
	int m_nInputCount;  // +0x18

	int m_nOutputCount;  // +0x28

private:

	string_t m_designerName;  // +0x48
	uint32 m_flags;  // +0x50
	uint32 m_nAllHelpersFlags;  // +0x54
	FlattenedSerializerHandle_t m_hNetworkSerializer;  // +0x220
	typedef CUtlVector<CEntityClass::ClassInputInfo_t, CUtlMemory<CEntityClass::ClassInputInfo_t, int> > ClassInputs_t;

	ClassInputs_t m_classInputs;  // +0x228
	typedef CUtlVector<CEntityClass::ClassOutputInfo_t, CUtlMemory<CEntityClass::ClassOutputInfo_t, int> > ClassOutputs_t;

	ClassOutputs_t m_classOutputs;  // +0x240

	void * m_pGameClass;  // +0x270

	static CUtlVector<bool, CUtlMemory<bool, int> > gm_fComponentsContained;
	static CUtlVector<const EntComponentInfo_t*, CUtlMemory<const EntComponentInfo_t*, int> > gm_ComponentInfosById;
	static CClassAttributes gm_ClassAttributes;

	CEntityClass(const CEntityClass &);
	CEntityClass();
	virtual ~CEntityClass();
	virtual void OnRegister();
	CEntityClass * GetSingleton();
	CEntityClass * GetBaseClass();
	CEntityClassInfo * GetClassInfo();
	CEntityClassInfo * GetBaseClassInfo();
	FlattenedSerializerHandle_t GetNetworkSerializer();
	uint32 GetFlags();
	void SetFlag(EntityClassFlags_t);
	void SetRequiredEntityHandle(CEntityHandle);
	CEntityHandle GetRequiredEntityHandle();
	bool IsCapableOfNetworking();
	bool ShouldSpawnInSpawnGroupInvalid();
	uint32 GetComponentOrComponentPointerOffset(int);
	bool UsesComponent(int);
	void * GetComponent(CEntityInstance *, int);
	bool IsA(CEntityClass *);
	FlattenedSerializerHandle_t GetClassSerializer();
	virtual void * AllocateInstance();
	virtual CEntityInstance * ConstructInstance(void *);
	virtual void DestructInstance(CEntityInstance *);
	virtual void FreeInstance(void *);
	virtual const ISchemaBinding * GetInstanceSchemaBinding();
	virtual bool CanAllocate();
	uint32 GetInstanceClassSizeOf();
	virtual const char * GetDefaultScriptClass();
	CEntityClass * * GetGlobalList();
	bool Unserialize(CEntityInstance *, const CEntityKeyValues *);
	void GetEntityIOInputs(CUtlVector<char const*, CUtlMemory<char const*, int> > &);
	void GetEntityIOOutputs(CUtlVector<const EntityIOOutputDesc_t*, CUtlMemory<const EntityIOOutputDesc_t*, int> > &);
	void GetEntityUnserializer(CUtlVector<ComponentUnserializerClassInfo_t*, CUtlMemory<ComponentUnserializerClassInfo_t*, int> > &);
	string_t GetName();
	const char * GetNameAsCStr();
	bool ClassMatches(const char *);
	bool ClassMatches(string_t);
	bool ClassMatchesExact(string_t);
	bool IsKeyUsedByUnserialization(EntityKeyId_t);
	void SetGameClass(void *);
	void * GetGameClass(bool);
	void SetClassInfo(CEntityClassInfo *, CEntityClassInfo *);
	virtual CUtlVector<bool, CUtlMemory<bool, int> > & GetComponentsContainedFlags();
	void BuildEntityIOTables();
	void AddEntityInputsToTable(EntInput_t *, int, int);
	void AddEntityOutputsToTable(EntOutput_t *, int, int);
	void FixupEntityOutputPointers(CEntityInstance *);
	AcceptInputRetval_t AcceptInput(CEntityInstance *, string_t, CEntityInstance *, CEntityInstance *, const CVariant &, int);
	void GetEntityIOOutputs(CEntityInstance *, CUtlVector<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> > &);
	CEntityIOOutput * FindEntityIOOutputByName(const char *, CEntityInstance *);
	void InheritFlagsFromBase(EntityClassFlags_t);
	bool FindKeyToUnserialize(void *, const ComponentUnserializerClassInfo_t *, EntityKeyId_t, void * *, const ComponentUnserializerFieldInfo_t * *);
	bool UnserializeKey(const UnserializationContext_t &, CEntityInstance *, void *, const ComponentUnserializerFieldInfo_t *, const CEntityVariant &);
	/* tag__fprintf: const_type tag not supported! */;
	void InvokePostUnserializationHandlers(void *, const ComponentUnserializerClassInfo_t *);
	bool IsKeyUsedByUnserialization(EntityKeyId_t, const ComponentUnserializerClassInfo_t *);
	void ReacquirePooledStrings();
	void AddToClassList(CEntityIdentity *);
	void RemoveFromClassList(CEntityIdentity *);
	bool HasHelper(uint32);

	bool GetComponent<CLightComponent>(CEntityInstance *, CLightComponent * *);
	bool GetComponent<CBodyComponent>(CEntityInstance *, CBodyComponent * *);

	// vtable[2] OnRegister
	// vtable[3] AllocateInstance
	// vtable[4] ConstructInstance
	// vtable[5] DestructInstance
	// vtable[6] FreeInstance
	// vtable[7] GetInstanceSchemaBinding
	// vtable[8] CanAllocate
	// vtable[9] GetDefaultScriptClass
	// vtable[10] GetComponentsContainedFlags
	// vtable[11] Schema_DynamicBinding
	// sizeof = 632
};

// src/public/entity2/entityclass.h:450
class CEntityClass {
	struct ClassInputInfo_t {
		string_t m_inputName;  // +0x0
		ClassInputInfo_t();
		bool operator==(const ClassInputInfo_t &);
		int Less(const ClassInputInfo_t *);
		bool SortLess(const ClassInputInfo_t &, const ClassInputInfo_t &, void *);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct ClassOutputInfo_t {
		string_t m_outputName;  // +0x0
		ClassOutputInfo_t();
		bool operator==(const ClassOutputInfo_t &);
		int Less(const ClassOutputInfo_t *);
		bool SortLess(const ClassOutputInfo_t &, const ClassOutputInfo_t &, void *);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct ComponentOffsets_t {
		ComponentOffset_t m_nBaseOffset;  // +0x0
	private:

		// sizeof = 2
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct ComponentHelper_t {
		size_t m_offset;  // +0x0
	private:

		ComponentHelper_t();
		ComponentHelper_t(size_t, CEntityComponentHelper *);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	class CClassAttributes {
	private:

		// sizeof = 1
	};
	/* tag__fprintf: const_type tag not supported! */;

	enum AcceptInputRetval_t {
		ACCEPT_INPUT_UNKNOWN = 0,
		ACCEPT_INPUT_KNOWN_BUT_UNHANDLED = 0x1,
		ACCEPT_INPUT_KNOWN_AND_HANDLED = 0x2,
	};

	struct UnserializationContext_t {
		bool m_bIsPrecaching;  // +0x0

		const matrix3x4a_t * m_pSpawnGroupToWorld;  // +0x8
		bool m_bSpawnGroupHasRotation;  // +0x10

		// sizeof = 24
	};

	int ()() * * _vptr.CEntityClass;  // +0x0
	int m_nInputCount;  // +0x18

	int m_nOutputCount;  // +0x28

private:

	string_t m_designerName;  // +0x48
	uint32 m_flags;  // +0x50
	uint32 m_nAllHelpersFlags;  // +0x54
	FlattenedSerializerHandle_t m_hNetworkSerializer;  // +0x220
	typedef CUtlVector<CEntityClass::ClassInputInfo_t, CUtlMemory<CEntityClass::ClassInputInfo_t, int> > ClassInputs_t;

	ClassInputs_t m_classInputs;  // +0x228
	typedef CUtlVector<CEntityClass::ClassOutputInfo_t, CUtlMemory<CEntityClass::ClassOutputInfo_t, int> > ClassOutputs_t;

	ClassOutputs_t m_classOutputs;  // +0x240

	void * m_pGameClass;  // +0x270

	static CUtlVector<bool, CUtlMemory<bool, int> > gm_fComponentsContained;
	static CUtlVector<const EntComponentInfo_t*, CUtlMemory<const EntComponentInfo_t*, int> > gm_ComponentInfosById;
	static CClassAttributes gm_ClassAttributes;

	CEntityClass(const CEntityClass &);
	CEntityClass();
	virtual ~CEntityClass();
	virtual void OnRegister();
	CEntityClass * GetSingleton();
	CEntityClass * GetBaseClass();
	CEntityClassInfo * GetClassInfo();
	CEntityClassInfo * GetBaseClassInfo();
	FlattenedSerializerHandle_t GetNetworkSerializer();
	uint32 GetFlags();
	void SetFlag(EntityClassFlags_t);
	void SetRequiredEntityHandle(CEntityHandle);
	CEntityHandle GetRequiredEntityHandle();
	bool IsCapableOfNetworking();
	bool ShouldSpawnInSpawnGroupInvalid();
	uint32 GetComponentOrComponentPointerOffset(int);
	bool UsesComponent(int);
	void * GetComponent(CEntityInstance *, int);
	bool IsA(CEntityClass *);
	FlattenedSerializerHandle_t GetClassSerializer();
	virtual void * AllocateInstance();
	virtual CEntityInstance * ConstructInstance(void *);
	virtual void DestructInstance(CEntityInstance *);
	virtual void FreeInstance(void *);
	virtual const ISchemaBinding * GetInstanceSchemaBinding();
	virtual bool CanAllocate();
	uint32 GetInstanceClassSizeOf();
	virtual const char * GetDefaultScriptClass();
	CEntityClass * * GetGlobalList();
	bool Unserialize(CEntityInstance *, const CEntityKeyValues *);
	void GetEntityIOInputs(CUtlVector<char const*, CUtlMemory<char const*, int> > &);
	void GetEntityIOOutputs(CUtlVector<const EntityIOOutputDesc_t*, CUtlMemory<const EntityIOOutputDesc_t*, int> > &);
	void GetEntityUnserializer(CUtlVector<ComponentUnserializerClassInfo_t*, CUtlMemory<ComponentUnserializerClassInfo_t*, int> > &);
	string_t GetName();
	const char * GetNameAsCStr();
	bool ClassMatches(const char *);
	bool ClassMatches(string_t);
	bool ClassMatchesExact(string_t);
	bool IsKeyUsedByUnserialization(EntityKeyId_t);
	void SetGameClass(void *);
	void * GetGameClass(bool);
	void SetClassInfo(CEntityClassInfo *, CEntityClassInfo *);
	virtual CUtlVector<bool, CUtlMemory<bool, int> > & GetComponentsContainedFlags();
	void BuildEntityIOTables();
	void AddEntityInputsToTable(EntInput_t *, int, int);
	void AddEntityOutputsToTable(EntOutput_t *, int, int);
	void FixupEntityOutputPointers(CEntityInstance *);
	AcceptInputRetval_t AcceptInput(CEntityInstance *, string_t, CEntityInstance *, CEntityInstance *, const CVariant &, int);
	void GetEntityIOOutputs(CEntityInstance *, CUtlVector<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> > &);
	CEntityIOOutput * FindEntityIOOutputByName(const char *, CEntityInstance *);
	void InheritFlagsFromBase(EntityClassFlags_t);
	bool FindKeyToUnserialize(void *, const ComponentUnserializerClassInfo_t *, EntityKeyId_t, void * *, const ComponentUnserializerFieldInfo_t * *);
	bool UnserializeKey(const UnserializationContext_t &, CEntityInstance *, void *, const ComponentUnserializerFieldInfo_t *, const CEntityVariant &);
	/* tag__fprintf: const_type tag not supported! */;
	void InvokePostUnserializationHandlers(void *, const ComponentUnserializerClassInfo_t *);
	bool IsKeyUsedByUnserialization(EntityKeyId_t, const ComponentUnserializerClassInfo_t *);
	void ReacquirePooledStrings();
	void AddToClassList(CEntityIdentity *);
	void RemoveFromClassList(CEntityIdentity *);
	bool HasHelper(uint32);

	bool GetComponent<CBodyComponent>(CEntityInstance *, CBodyComponent * *);
	bool GetComponent<CHitboxComponent>(CEntityInstance *, CHitboxComponent * *);

	// vtable[2] OnRegister
	// vtable[3] AllocateInstance
	// vtable[4] ConstructInstance
	// vtable[5] DestructInstance
	// vtable[6] FreeInstance
	// vtable[7] GetInstanceSchemaBinding
	// vtable[8] CanAllocate
	// vtable[9] GetDefaultScriptClass
	// vtable[10] GetComponentsContainedFlags
	// vtable[11] Schema_DynamicBinding
	// sizeof = 632
};

// src/public/entity2/entityclass.h:450
class CEntityClass {
	struct ClassInputInfo_t {
		string_t m_inputName;  // +0x0
		ClassInputInfo_t();
		bool operator==(const ClassInputInfo_t &);
		int Less(const ClassInputInfo_t *);
		bool SortLess(const ClassInputInfo_t &, const ClassInputInfo_t &, void *);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct ClassOutputInfo_t {
		string_t m_outputName;  // +0x0
		ClassOutputInfo_t();
		bool operator==(const ClassOutputInfo_t &);
		int Less(const ClassOutputInfo_t *);
		bool SortLess(const ClassOutputInfo_t &, const ClassOutputInfo_t &, void *);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct ComponentOffsets_t {
		ComponentOffset_t m_nBaseOffset;  // +0x0
	private:

		// sizeof = 2
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct ComponentHelper_t {
		size_t m_offset;  // +0x0
	private:

		ComponentHelper_t();
		ComponentHelper_t(size_t, CEntityComponentHelper *);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	class CClassAttributes {
	private:

		// sizeof = 1
	};
	/* tag__fprintf: const_type tag not supported! */;

	enum AcceptInputRetval_t {
		ACCEPT_INPUT_UNKNOWN = 0,
		ACCEPT_INPUT_KNOWN_BUT_UNHANDLED = 0x1,
		ACCEPT_INPUT_KNOWN_AND_HANDLED = 0x2,
	};

	struct UnserializationContext_t {
		bool m_bIsPrecaching;  // +0x0

		const matrix3x4a_t * m_pSpawnGroupToWorld;  // +0x8
		bool m_bSpawnGroupHasRotation;  // +0x10

		// sizeof = 24
	};

	int ()() * * _vptr.CEntityClass;  // +0x0
	int m_nInputCount;  // +0x18

	int m_nOutputCount;  // +0x28

private:

	string_t m_designerName;  // +0x48
	uint32 m_flags;  // +0x50
	uint32 m_nAllHelpersFlags;  // +0x54
	FlattenedSerializerHandle_t m_hNetworkSerializer;  // +0x220
	typedef CUtlVector<CEntityClass::ClassInputInfo_t, CUtlMemory<CEntityClass::ClassInputInfo_t, int> > ClassInputs_t;

	ClassInputs_t m_classInputs;  // +0x228
	typedef CUtlVector<CEntityClass::ClassOutputInfo_t, CUtlMemory<CEntityClass::ClassOutputInfo_t, int> > ClassOutputs_t;

	ClassOutputs_t m_classOutputs;  // +0x240

	void * m_pGameClass;  // +0x270

	static CUtlVector<bool, CUtlMemory<bool, int> > gm_fComponentsContained;
	static CUtlVector<const EntComponentInfo_t*, CUtlMemory<const EntComponentInfo_t*, int> > gm_ComponentInfosById;
	static CClassAttributes gm_ClassAttributes;

	CEntityClass(const CEntityClass &);
	CEntityClass();
	virtual ~CEntityClass();
	virtual void OnRegister();
	CEntityClass * GetSingleton();
	CEntityClass * GetBaseClass();
	CEntityClassInfo * GetClassInfo();
	CEntityClassInfo * GetBaseClassInfo();
	FlattenedSerializerHandle_t GetNetworkSerializer();
	uint32 GetFlags();
	void SetFlag(EntityClassFlags_t);
	void SetRequiredEntityHandle(CEntityHandle);
	CEntityHandle GetRequiredEntityHandle();
	bool IsCapableOfNetworking();
	bool ShouldSpawnInSpawnGroupInvalid();
	uint32 GetComponentOrComponentPointerOffset(int);
	bool UsesComponent(int);
	void * GetComponent(CEntityInstance *, int);
	bool IsA(CEntityClass *);
	FlattenedSerializerHandle_t GetClassSerializer();
	virtual void * AllocateInstance();
	virtual CEntityInstance * ConstructInstance(void *);
	virtual void DestructInstance(CEntityInstance *);
	virtual void FreeInstance(void *);
	virtual const ISchemaBinding * GetInstanceSchemaBinding();
	virtual bool CanAllocate();
	uint32 GetInstanceClassSizeOf();
	virtual const char * GetDefaultScriptClass();
	CEntityClass * * GetGlobalList();
	bool Unserialize(CEntityInstance *, const CEntityKeyValues *);
	void GetEntityIOInputs(CUtlVector<char const*, CUtlMemory<char const*, int> > &);
	void GetEntityIOOutputs(CUtlVector<const EntityIOOutputDesc_t*, CUtlMemory<const EntityIOOutputDesc_t*, int> > &);
	void GetEntityUnserializer(CUtlVector<ComponentUnserializerClassInfo_t*, CUtlMemory<ComponentUnserializerClassInfo_t*, int> > &);
	string_t GetName();
	const char * GetNameAsCStr();
	bool ClassMatches(const char *);
	bool ClassMatches(string_t);
	bool ClassMatchesExact(string_t);
	bool IsKeyUsedByUnserialization(EntityKeyId_t);
	void SetGameClass(void *);
	void * GetGameClass(bool);
	void SetClassInfo(CEntityClassInfo *, CEntityClassInfo *);
	virtual CUtlVector<bool, CUtlMemory<bool, int> > & GetComponentsContainedFlags();
	void BuildEntityIOTables();
	void AddEntityInputsToTable(EntInput_t *, int, int);
	void AddEntityOutputsToTable(EntOutput_t *, int, int);
	void FixupEntityOutputPointers(CEntityInstance *);
	AcceptInputRetval_t AcceptInput(CEntityInstance *, string_t, CEntityInstance *, CEntityInstance *, const CVariant &, int);
	void GetEntityIOOutputs(CEntityInstance *, CUtlVector<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> > &);
	CEntityIOOutput * FindEntityIOOutputByName(const char *, CEntityInstance *);
	void InheritFlagsFromBase(EntityClassFlags_t);
	bool FindKeyToUnserialize(void *, const ComponentUnserializerClassInfo_t *, EntityKeyId_t, void * *, const ComponentUnserializerFieldInfo_t * *);
	bool UnserializeKey(const UnserializationContext_t &, CEntityInstance *, void *, const ComponentUnserializerFieldInfo_t *, const CEntityVariant &);
	/* tag__fprintf: const_type tag not supported! */;
	void InvokePostUnserializationHandlers(void *, const ComponentUnserializerClassInfo_t *);
	bool IsKeyUsedByUnserialization(EntityKeyId_t, const ComponentUnserializerClassInfo_t *);
	void ReacquirePooledStrings();
	void AddToClassList(CEntityIdentity *);
	void RemoveFromClassList(CEntityIdentity *);
	bool HasHelper(uint32);

	bool GetComponent<CBodyComponent>(CEntityInstance *, CBodyComponent * *);
	bool GetComponent<CHealthComponent>(CEntityInstance *, CHealthComponent * *);
	bool GetComponent<CDamageComponent>(CEntityInstance *, CDamageComponent * *);

	// vtable[2] OnRegister
	// vtable[3] AllocateInstance
	// vtable[4] ConstructInstance
	// vtable[5] DestructInstance
	// vtable[6] FreeInstance
	// vtable[7] GetInstanceSchemaBinding
	// vtable[8] CanAllocate
	// vtable[9] GetDefaultScriptClass
	// vtable[10] GetComponentsContainedFlags
	// vtable[11] Schema_DynamicBinding
	// sizeof = 632
};

// src/public/entity2/entityclass.h:450
class CEntityClass {
	struct ClassInputInfo_t {
		string_t m_inputName;  // +0x0
		ClassInputInfo_t();
		bool operator==(const ClassInputInfo_t &);
		int Less(const ClassInputInfo_t *);
		bool SortLess(const ClassInputInfo_t &, const ClassInputInfo_t &, void *);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct ClassOutputInfo_t {
		string_t m_outputName;  // +0x0
		ClassOutputInfo_t();
		bool operator==(const ClassOutputInfo_t &);
		int Less(const ClassOutputInfo_t *);
		bool SortLess(const ClassOutputInfo_t &, const ClassOutputInfo_t &, void *);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct ComponentOffsets_t {
		ComponentOffset_t m_nBaseOffset;  // +0x0
	private:

		// sizeof = 2
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct ComponentHelper_t {
		size_t m_offset;  // +0x0
	private:

		ComponentHelper_t();
		ComponentHelper_t(size_t, CEntityComponentHelper *);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	class CClassAttributes {
	private:

		// sizeof = 1
	};
	/* tag__fprintf: const_type tag not supported! */;

	enum AcceptInputRetval_t {
		ACCEPT_INPUT_UNKNOWN = 0,
		ACCEPT_INPUT_KNOWN_BUT_UNHANDLED = 0x1,
		ACCEPT_INPUT_KNOWN_AND_HANDLED = 0x2,
	};

	struct UnserializationContext_t {
		bool m_bIsPrecaching;  // +0x0

		const matrix3x4a_t * m_pSpawnGroupToWorld;  // +0x8
		bool m_bSpawnGroupHasRotation;  // +0x10

		// sizeof = 24
	};

	int ()() * * _vptr.CEntityClass;  // +0x0
	int m_nInputCount;  // +0x18

	int m_nOutputCount;  // +0x28

private:

	string_t m_designerName;  // +0x48
	uint32 m_flags;  // +0x50
	uint32 m_nAllHelpersFlags;  // +0x54
	FlattenedSerializerHandle_t m_hNetworkSerializer;  // +0x220
	typedef CUtlVector<CEntityClass::ClassInputInfo_t, CUtlMemory<CEntityClass::ClassInputInfo_t, int> > ClassInputs_t;

	ClassInputs_t m_classInputs;  // +0x228
	typedef CUtlVector<CEntityClass::ClassOutputInfo_t, CUtlMemory<CEntityClass::ClassOutputInfo_t, int> > ClassOutputs_t;

	ClassOutputs_t m_classOutputs;  // +0x240

	void * m_pGameClass;  // +0x270

	static CUtlVector<bool, CUtlMemory<bool, int> > gm_fComponentsContained;
	static CUtlVector<const EntComponentInfo_t*, CUtlMemory<const EntComponentInfo_t*, int> > gm_ComponentInfosById;
	static CClassAttributes gm_ClassAttributes;

	CEntityClass(const CEntityClass &);
	CEntityClass();
	virtual ~CEntityClass();
	virtual void OnRegister();
	CEntityClass * GetSingleton();
	CEntityClass * GetBaseClass();
	CEntityClassInfo * GetClassInfo();
	CEntityClassInfo * GetBaseClassInfo();
	FlattenedSerializerHandle_t GetNetworkSerializer();
	uint32 GetFlags();
	void SetFlag(EntityClassFlags_t);
	void SetRequiredEntityHandle(CEntityHandle);
	CEntityHandle GetRequiredEntityHandle();
	bool IsCapableOfNetworking();
	bool ShouldSpawnInSpawnGroupInvalid();
	uint32 GetComponentOrComponentPointerOffset(int);
	bool UsesComponent(int);
	void * GetComponent(CEntityInstance *, int);
	bool IsA(CEntityClass *);
	FlattenedSerializerHandle_t GetClassSerializer();
	virtual void * AllocateInstance();
	virtual CEntityInstance * ConstructInstance(void *);
	virtual void DestructInstance(CEntityInstance *);
	virtual void FreeInstance(void *);
	virtual const ISchemaBinding * GetInstanceSchemaBinding();
	virtual bool CanAllocate();
	uint32 GetInstanceClassSizeOf();
	virtual const char * GetDefaultScriptClass();
	CEntityClass * * GetGlobalList();
	bool Unserialize(CEntityInstance *, const CEntityKeyValues *);
	void GetEntityIOInputs(CUtlVector<char const*, CUtlMemory<char const*, int> > &);
	void GetEntityIOOutputs(CUtlVector<const EntityIOOutputDesc_t*, CUtlMemory<const EntityIOOutputDesc_t*, int> > &);
	void GetEntityUnserializer(CUtlVector<ComponentUnserializerClassInfo_t*, CUtlMemory<ComponentUnserializerClassInfo_t*, int> > &);
	string_t GetName();
	const char * GetNameAsCStr();
	bool ClassMatches(const char *);
	bool ClassMatches(string_t);
	bool ClassMatchesExact(string_t);
	bool IsKeyUsedByUnserialization(EntityKeyId_t);
	void SetGameClass(void *);
	void * GetGameClass(bool);
	void SetClassInfo(CEntityClassInfo *, CEntityClassInfo *);
	virtual CUtlVector<bool, CUtlMemory<bool, int> > & GetComponentsContainedFlags();
	void BuildEntityIOTables();
	void AddEntityInputsToTable(EntInput_t *, int, int);
	void AddEntityOutputsToTable(EntOutput_t *, int, int);
	void FixupEntityOutputPointers(CEntityInstance *);
	AcceptInputRetval_t AcceptInput(CEntityInstance *, string_t, CEntityInstance *, CEntityInstance *, const CVariant &, int);
	void GetEntityIOOutputs(CEntityInstance *, CUtlVector<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> > &);
	CEntityIOOutput * FindEntityIOOutputByName(const char *, CEntityInstance *);
	void InheritFlagsFromBase(EntityClassFlags_t);
	bool FindKeyToUnserialize(void *, const ComponentUnserializerClassInfo_t *, EntityKeyId_t, void * *, const ComponentUnserializerFieldInfo_t * *);
	bool UnserializeKey(const UnserializationContext_t &, CEntityInstance *, void *, const ComponentUnserializerFieldInfo_t *, const CEntityVariant &);
	/* tag__fprintf: const_type tag not supported! */;
	void InvokePostUnserializationHandlers(void *, const ComponentUnserializerClassInfo_t *);
	bool IsKeyUsedByUnserialization(EntityKeyId_t, const ComponentUnserializerClassInfo_t *);
	void ReacquirePooledStrings();
	void AddToClassList(CEntityIdentity *);
	void RemoveFromClassList(CEntityIdentity *);
	bool HasHelper(uint32);

	bool GetComponent<CRenderComponent>(CEntityInstance *, CRenderComponent * *);

	// vtable[2] OnRegister
	// vtable[3] AllocateInstance
	// vtable[4] ConstructInstance
	// vtable[5] DestructInstance
	// vtable[6] FreeInstance
	// vtable[7] GetInstanceSchemaBinding
	// vtable[8] CanAllocate
	// vtable[9] GetDefaultScriptClass
	// vtable[10] GetComponentsContainedFlags
	// vtable[11] Schema_DynamicBinding
	// sizeof = 632
};

// src/public/entity2/entityclass.h:450
class CEntityClass {
	struct ClassInputInfo_t {
		string_t m_inputName;  // +0x0
		ClassInputInfo_t();
		bool operator==(const ClassInputInfo_t &);
		int Less(const ClassInputInfo_t *);
		bool SortLess(const ClassInputInfo_t &, const ClassInputInfo_t &, void *);
		ClassInputInfo_t(const ClassInputInfo_t &);
		ClassInputInfo_t & operator=(const ClassInputInfo_t &);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct ClassOutputInfo_t {
		string_t m_outputName;  // +0x0
		ClassOutputInfo_t();
		bool operator==(const ClassOutputInfo_t &);
		int Less(const ClassOutputInfo_t *);
		bool SortLess(const ClassOutputInfo_t &, const ClassOutputInfo_t &, void *);
		ClassOutputInfo_t(const ClassOutputInfo_t &);
		ClassOutputInfo_t & operator=(const ClassOutputInfo_t &);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct ComponentOffsets_t {
		ComponentOffset_t m_nBaseOffset;  // +0x0
	private:

		// sizeof = 2
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct ComponentHelper_t {
		size_t m_offset;  // +0x0
	private:

		ComponentHelper_t();
		ComponentHelper_t(size_t, CEntityComponentHelper *);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	class CClassAttributes {
	private:

		// sizeof = 1
	};
	/* tag__fprintf: const_type tag not supported! */;

	enum AcceptInputRetval_t {
		ACCEPT_INPUT_UNKNOWN = 0,
		ACCEPT_INPUT_KNOWN_BUT_UNHANDLED = 0x1,
		ACCEPT_INPUT_KNOWN_AND_HANDLED = 0x2,
	};

	struct UnserializationContext_t {
		bool m_bIsPrecaching;  // +0x0

		const matrix3x4a_t * m_pSpawnGroupToWorld;  // +0x8
		bool m_bSpawnGroupHasRotation;  // +0x10

		// sizeof = 24
	};

	int ()() * * _vptr.CEntityClass;  // +0x0
	int m_nInputCount;  // +0x18

	int m_nOutputCount;  // +0x28

private:

	string_t m_designerName;  // +0x48
	uint32 m_flags;  // +0x50
	uint32 m_nAllHelpersFlags;  // +0x54
	FlattenedSerializerHandle_t m_hNetworkSerializer;  // +0x220
	typedef CUtlVector<CEntityClass::ClassInputInfo_t, CUtlMemory<CEntityClass::ClassInputInfo_t, int> > ClassInputs_t;

	ClassInputs_t m_classInputs;  // +0x228
	typedef CUtlVector<CEntityClass::ClassOutputInfo_t, CUtlMemory<CEntityClass::ClassOutputInfo_t, int> > ClassOutputs_t;

	ClassOutputs_t m_classOutputs;  // +0x240

	void * m_pGameClass;  // +0x270

	static CUtlVector<bool, CUtlMemory<bool, int> > gm_fComponentsContained;
	static CUtlVector<const EntComponentInfo_t*, CUtlMemory<const EntComponentInfo_t*, int> > gm_ComponentInfosById;
	static CClassAttributes gm_ClassAttributes;

	CEntityClass(const CEntityClass &);
	CEntityClass();
	virtual ~CEntityClass();
	virtual void OnRegister();
	CEntityClass * GetSingleton();
	CEntityClass * GetBaseClass();
	CEntityClassInfo * GetClassInfo();
	CEntityClassInfo * GetBaseClassInfo();
	FlattenedSerializerHandle_t GetNetworkSerializer();
	uint32 GetFlags();
	void SetFlag(EntityClassFlags_t);
	void SetRequiredEntityHandle(CEntityHandle);
	CEntityHandle GetRequiredEntityHandle();
	bool IsCapableOfNetworking();
	bool ShouldSpawnInSpawnGroupInvalid();
	uint32 GetComponentOrComponentPointerOffset(int);
	bool UsesComponent(int);
	void * GetComponent(CEntityInstance *, int);
	bool IsA(CEntityClass *);
	FlattenedSerializerHandle_t GetClassSerializer();
	virtual void * AllocateInstance();
	virtual CEntityInstance * ConstructInstance(void *);
	virtual void DestructInstance(CEntityInstance *);
	virtual void FreeInstance(void *);
	virtual const ISchemaBinding * GetInstanceSchemaBinding();
	virtual bool CanAllocate();
	uint32 GetInstanceClassSizeOf();
	virtual const char * GetDefaultScriptClass();
	CEntityClass * * GetGlobalList();
	bool Unserialize(CEntityInstance *, const CEntityKeyValues *);
	void GetEntityIOInputs(CUtlVector<char const*, CUtlMemory<char const*, int> > &);
	void GetEntityIOOutputs(CUtlVector<const EntityIOOutputDesc_t*, CUtlMemory<const EntityIOOutputDesc_t*, int> > &);
	void GetEntityUnserializer(CUtlVector<ComponentUnserializerClassInfo_t*, CUtlMemory<ComponentUnserializerClassInfo_t*, int> > &);
	string_t GetName();
	const char * GetNameAsCStr();
	bool ClassMatches(const char *);
	bool ClassMatches(string_t);
	bool ClassMatchesExact(string_t);
	bool IsKeyUsedByUnserialization(EntityKeyId_t);
	void SetGameClass(void *);
	void * GetGameClass(bool);
	void SetClassInfo(CEntityClassInfo *, CEntityClassInfo *);
	virtual CUtlVector<bool, CUtlMemory<bool, int> > & GetComponentsContainedFlags();
	void BuildEntityIOTables();
	void AddEntityInputsToTable(EntInput_t *, int, int);
	void AddEntityOutputsToTable(EntOutput_t *, int, int);
	void FixupEntityOutputPointers(CEntityInstance *);
	AcceptInputRetval_t AcceptInput(CEntityInstance *, string_t, CEntityInstance *, CEntityInstance *, const CVariant &, int);
	void GetEntityIOOutputs(CEntityInstance *, CUtlVector<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> > &);
	CEntityIOOutput * FindEntityIOOutputByName(const char *, CEntityInstance *);
	void InheritFlagsFromBase(EntityClassFlags_t);
	bool FindKeyToUnserialize(void *, const ComponentUnserializerClassInfo_t *, EntityKeyId_t, void * *, const ComponentUnserializerFieldInfo_t * *);
	bool UnserializeKey(const UnserializationContext_t &, CEntityInstance *, void *, const ComponentUnserializerFieldInfo_t *, const CEntityVariant &);
	/* tag__fprintf: const_type tag not supported! */;
	void InvokePostUnserializationHandlers(void *, const ComponentUnserializerClassInfo_t *);
	bool IsKeyUsedByUnserialization(EntityKeyId_t, const ComponentUnserializerClassInfo_t *);
	void ReacquirePooledStrings();
	void AddToClassList(CEntityIdentity *);
	void RemoveFromClassList(CEntityIdentity *);
	bool HasHelper(uint32);

	// vtable[2] OnRegister
	// vtable[3] AllocateInstance
	// vtable[4] ConstructInstance
	// vtable[5] DestructInstance
	// vtable[6] FreeInstance
	// vtable[7] GetInstanceSchemaBinding
	// vtable[8] CanAllocate
	// vtable[9] GetDefaultScriptClass
	// vtable[10] GetComponentsContainedFlags
	// vtable[11] Schema_DynamicBinding
	// sizeof = 632
};

// src/public/entity2/entityclass.h:450
class CEntityClass {
	struct ClassInputInfo_t {
		string_t m_inputName;  // +0x0
		ClassInputInfo_t();
		bool operator==(const ClassInputInfo_t &);
		int Less(const ClassInputInfo_t *);
		bool SortLess(const ClassInputInfo_t &, const ClassInputInfo_t &, void *);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct ClassOutputInfo_t {
		string_t m_outputName;  // +0x0
		ClassOutputInfo_t();
		bool operator==(const ClassOutputInfo_t &);
		int Less(const ClassOutputInfo_t *);
		bool SortLess(const ClassOutputInfo_t &, const ClassOutputInfo_t &, void *);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct ComponentOffsets_t {
		ComponentOffset_t m_nBaseOffset;  // +0x0
	private:

		// sizeof = 2
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct ComponentHelper_t {
		size_t m_offset;  // +0x0
	private:

		ComponentHelper_t();
		ComponentHelper_t(size_t, CEntityComponentHelper *);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	class CClassAttributes {
	private:

		// sizeof = 1
	};
	/* tag__fprintf: const_type tag not supported! */;

	enum AcceptInputRetval_t {
		ACCEPT_INPUT_UNKNOWN = 0,
		ACCEPT_INPUT_KNOWN_BUT_UNHANDLED = 0x1,
		ACCEPT_INPUT_KNOWN_AND_HANDLED = 0x2,
	};

	struct UnserializationContext_t {
		bool m_bIsPrecaching;  // +0x0

		const matrix3x4a_t * m_pSpawnGroupToWorld;  // +0x8
		bool m_bSpawnGroupHasRotation;  // +0x10

		// sizeof = 24
	};

	int ()() * * _vptr.CEntityClass;  // +0x0
	int m_nInputCount;  // +0x18

	int m_nOutputCount;  // +0x28

private:

	string_t m_designerName;  // +0x48
	uint32 m_flags;  // +0x50
	uint32 m_nAllHelpersFlags;  // +0x54
	FlattenedSerializerHandle_t m_hNetworkSerializer;  // +0x220
	typedef CUtlVector<CEntityClass::ClassInputInfo_t, CUtlMemory<CEntityClass::ClassInputInfo_t, int> > ClassInputs_t;

	ClassInputs_t m_classInputs;  // +0x228
	typedef CUtlVector<CEntityClass::ClassOutputInfo_t, CUtlMemory<CEntityClass::ClassOutputInfo_t, int> > ClassOutputs_t;

	ClassOutputs_t m_classOutputs;  // +0x240

	void * m_pGameClass;  // +0x270

	static CUtlVector<bool, CUtlMemory<bool, int> > gm_fComponentsContained;
	static CUtlVector<const EntComponentInfo_t*, CUtlMemory<const EntComponentInfo_t*, int> > gm_ComponentInfosById;
	static CClassAttributes gm_ClassAttributes;

	CEntityClass(const CEntityClass &);
	CEntityClass();
	virtual ~CEntityClass();
	virtual void OnRegister();
	CEntityClass * GetSingleton();
	CEntityClass * GetBaseClass();
	CEntityClassInfo * GetClassInfo();
	CEntityClassInfo * GetBaseClassInfo();
	FlattenedSerializerHandle_t GetNetworkSerializer();
	uint32 GetFlags();
	void SetFlag(EntityClassFlags_t);
	void SetRequiredEntityHandle(CEntityHandle);
	CEntityHandle GetRequiredEntityHandle();
	bool IsCapableOfNetworking();
	bool ShouldSpawnInSpawnGroupInvalid();
	uint32 GetComponentOrComponentPointerOffset(int);
	bool UsesComponent(int);
	void * GetComponent(CEntityInstance *, int);
	bool IsA(CEntityClass *);
	FlattenedSerializerHandle_t GetClassSerializer();
	virtual void * AllocateInstance();
	virtual CEntityInstance * ConstructInstance(void *);
	virtual void DestructInstance(CEntityInstance *);
	virtual void FreeInstance(void *);
	virtual const ISchemaBinding * GetInstanceSchemaBinding();
	virtual bool CanAllocate();
	uint32 GetInstanceClassSizeOf();
	virtual const char * GetDefaultScriptClass();
	CEntityClass * * GetGlobalList();
	bool Unserialize(CEntityInstance *, const CEntityKeyValues *);
	void GetEntityIOInputs(CUtlVector<char const*, CUtlMemory<char const*, int> > &);
	void GetEntityIOOutputs(CUtlVector<const EntityIOOutputDesc_t*, CUtlMemory<const EntityIOOutputDesc_t*, int> > &);
	void GetEntityUnserializer(CUtlVector<ComponentUnserializerClassInfo_t*, CUtlMemory<ComponentUnserializerClassInfo_t*, int> > &);
	string_t GetName();
	const char * GetNameAsCStr();
	bool ClassMatches(const char *);
	bool ClassMatches(string_t);
	bool ClassMatchesExact(string_t);
	bool IsKeyUsedByUnserialization(EntityKeyId_t);
	void SetGameClass(void *);
	void * GetGameClass(bool);
	void SetClassInfo(CEntityClassInfo *, CEntityClassInfo *);
	virtual CUtlVector<bool, CUtlMemory<bool, int> > & GetComponentsContainedFlags();
	void BuildEntityIOTables();
	void AddEntityInputsToTable(EntInput_t *, int, int);
	void AddEntityOutputsToTable(EntOutput_t *, int, int);
	void FixupEntityOutputPointers(CEntityInstance *);
	AcceptInputRetval_t AcceptInput(CEntityInstance *, string_t, CEntityInstance *, CEntityInstance *, const CVariant &, int);
	void GetEntityIOOutputs(CEntityInstance *, CUtlVector<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> > &);
	CEntityIOOutput * FindEntityIOOutputByName(const char *, CEntityInstance *);
	void InheritFlagsFromBase(EntityClassFlags_t);
	bool FindKeyToUnserialize(void *, const ComponentUnserializerClassInfo_t *, EntityKeyId_t, void * *, const ComponentUnserializerFieldInfo_t * *);
	bool UnserializeKey(const UnserializationContext_t &, CEntityInstance *, void *, const ComponentUnserializerFieldInfo_t *, const CEntityVariant &);
	/* tag__fprintf: const_type tag not supported! */;
	void InvokePostUnserializationHandlers(void *, const ComponentUnserializerClassInfo_t *);
	bool IsKeyUsedByUnserialization(EntityKeyId_t, const ComponentUnserializerClassInfo_t *);
	void ReacquirePooledStrings();
	void AddToClassList(CEntityIdentity *);
	void RemoveFromClassList(CEntityIdentity *);
	bool HasHelper(uint32);

	bool GetComponent<CScriptComponent>(CEntityInstance *, CScriptComponent * *);

	// vtable[2] OnRegister
	// vtable[3] AllocateInstance
	// vtable[4] ConstructInstance
	// vtable[5] DestructInstance
	// vtable[6] FreeInstance
	// vtable[7] GetInstanceSchemaBinding
	// vtable[8] CanAllocate
	// vtable[9] GetDefaultScriptClass
	// vtable[10] GetComponentsContainedFlags
	// vtable[11] Schema_DynamicBinding
	// sizeof = 632
};
