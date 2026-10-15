// Reconstructed from DWARF by pahole; not original source.

// src/public/entity2/entityidentity.h:71
struct EntityComponentIter_t__ {
	int unused;  // +0x0

	// sizeof = 4
};

// src/public/entity2/entityidentity.h:76
class CEntityIdentity {
	struct EntityNameTable_t {
		bool m_bServer;  // +0x8

		// sizeof = 16
	};

	class NetworkVar_m_nameStringableIndex {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

private:

	static datamap_t m_DataMap;

	static EntityNameTable_t s_pEntityNameStringTable;

	string_t m_name;  // +0x18
	string_t m_designerName;  // +0x20
	CEntityPublicScriptScope m_hPublicScope;  // +0x28
	uint32 m_flags;  // +0x30
	SpawnGroupHandle_t m_hSpawnGroup;  // +0x34
	uint32 m_fDataObjectTypes;  // +0x38
	uint16 m_Padding;  // +0x3e

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	const CEntityHandle GetEHandle();
	EHANDLE2 operator EHANDLE2();
	uint32 GetFlags();
	void SetFlags(uint32);
	void AddFlags(uint32);
	void RemoveFlags(uint32);
	bool IsReady();
	bool IsPendingCreation();
	bool IsMarkedForDeletion();
	EntityDormancyType_t GetDormancyType();
	bool IsDormant();
	const V_uuid_t & GetId();
	CEntityClass * GetClass();
	CEntityInstance * operator CEntityInstance*();
	CEntityInstance * GetInstance();
	const ISchemaBinding * GetInstanceSchemaBinding();
	bool HasComponent(int);
	void * GetComponent(int);
	void * IterComponentsStart(EntityComponentIter_t *, const EntComponentInfo_t * *);
	void * IterComponentsNext(EntityComponentIter_t *, const EntComponentInfo_t * *);
	void IterComponentsStop(EntityComponentIter_t *);
	string_t GetEntityName();
	const char * GetEntityNameAsCStr();
	void SetEntityName(string_t);
	void SetEntityName(const char *);
	bool NameMatches(const char *);
	bool NameMatches(string_t);
	bool NameMatchesExact(string_t);
	string_t GetClassName();
	const char * GetClassNameAsCStr();
	bool ClassMatches(const char *);
	bool ClassMatches(string_t);
	bool ClassMatchesExact(string_t);
	bool ClassInheritsFrom(const char *);
	bool ClassInheritsFrom(string_t);
	const char * GetDebugName();
	void SetSpawnGroupHandle(SpawnGroupHandle_t);
	SpawnGroupHandle_t GetSpawnGroupHandle();
	bool AcceptInput(string_t, CEntityInstance *, CEntityInstance *, const CVariant &, int);
	CUtlObjectAttributeTable<CEntityIdentity, CUtlStringToken> * GetEntityAttributes();
	CRenderAttributesDoubleBuffered * GetEntityRenderAttrs();
	bool HasEntityRenderAttrs();
	void FreeAttributes(bool);
	void FindEntityIOOutputsByName(const char *, CUtlVector<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> > &);
	void GetEntityIOInputs(CUtlVector<char const*, CUtlMemory<char const*, int> > &);
	void GetEntityIOOutputs(CUtlVector<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> > &);
	void GetEntityIOOutputs(CUtlVector<const EntityIOOutputDesc_t*, CUtlMemory<const EntityIOOutputDesc_t*, int> > &);
	const CEntityPublicScriptScope & GetPublicScriptScope(GetScriptScopeBehavior_t);
	bool HasDataObjectType(EntityDataObjectType_t);
	void AddDataObjectType(EntityDataObjectType_t);
	void RemoveDataObjectType(EntityDataObjectType_t);
	void * GetDataObject(EntityDataObjectType_t);
	void * CreateDataObject(EntityDataObjectType_t);
	void DestroyDataObject(EntityDataObjectType_t);
	void DestroyAllDataObjects();
	~CEntityIdentity();
	void NetworkStateChanged();
	void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	int Save(ISave &);
	int Restore(IRestore &);
	void GetStringTableDefs(bool, CUtlVector<StringTableDef_t, CUtlMemory<StringTableDef_t, int> > &);
	void OnEntityNameChanged(CEntityInstance *, const int32 *);
	void CreatePublicScriptScope();
	CEntityIdentity();
	void ClearId();

	// sizeof = 120
};

// src/public/entity2/entityidentity.h:76
class CEntityIdentity {
	struct EntityNameTable_t {
		bool m_bServer;  // +0x8

		// sizeof = 16
	};

	class NetworkVar_m_nameStringableIndex {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

private:

	static datamap_t m_DataMap;

	static EntityNameTable_t s_pEntityNameStringTable;

	string_t m_name;  // +0x18
	string_t m_designerName;  // +0x20
	CEntityPublicScriptScope m_hPublicScope;  // +0x28
	uint32 m_flags;  // +0x30
	SpawnGroupHandle_t m_hSpawnGroup;  // +0x34
	uint32 m_fDataObjectTypes;  // +0x38
	uint16 m_Padding;  // +0x3e

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	const CEntityHandle GetEHandle();
	EHANDLE2 operator EHANDLE2();
	uint32 GetFlags();
	void SetFlags(uint32);
	void AddFlags(uint32);
	void RemoveFlags(uint32);
	bool IsReady();
	bool IsPendingCreation();
	bool IsMarkedForDeletion();
	EntityDormancyType_t GetDormancyType();
	bool IsDormant();
	const V_uuid_t & GetId();
	CEntityClass * GetClass();
	CEntityInstance * operator CEntityInstance*();
	CEntityInstance * GetInstance();
	const ISchemaBinding * GetInstanceSchemaBinding();
	bool HasComponent(int);
	void * GetComponent(int);
	void * IterComponentsStart(EntityComponentIter_t *, const EntComponentInfo_t * *);
	void * IterComponentsNext(EntityComponentIter_t *, const EntComponentInfo_t * *);
	void IterComponentsStop(EntityComponentIter_t *);
	string_t GetEntityName();
	const char * GetEntityNameAsCStr();
	void SetEntityName(string_t);
	void SetEntityName(const char *);
	bool NameMatches(const char *);
	bool NameMatches(string_t);
	bool NameMatchesExact(string_t);
	string_t GetClassName();
	const char * GetClassNameAsCStr();
	bool ClassMatches(const char *);
	bool ClassMatches(string_t);
	bool ClassMatchesExact(string_t);
	bool ClassInheritsFrom(const char *);
	bool ClassInheritsFrom(string_t);
	const char * GetDebugName();
	void SetSpawnGroupHandle(SpawnGroupHandle_t);
	SpawnGroupHandle_t GetSpawnGroupHandle();
	bool AcceptInput(string_t, CEntityInstance *, CEntityInstance *, const CVariant &, int);
	CUtlObjectAttributeTable<CEntityIdentity, CUtlStringToken> * GetEntityAttributes();
	CRenderAttributesDoubleBuffered * GetEntityRenderAttrs();
	bool HasEntityRenderAttrs();
	void FreeAttributes(bool);
	void FindEntityIOOutputsByName(const char *, CUtlVector<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> > &);
	void GetEntityIOInputs(CUtlVector<char const*, CUtlMemory<char const*, int> > &);
	void GetEntityIOOutputs(CUtlVector<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> > &);
	void GetEntityIOOutputs(CUtlVector<const EntityIOOutputDesc_t*, CUtlMemory<const EntityIOOutputDesc_t*, int> > &);
	const CEntityPublicScriptScope & GetPublicScriptScope(GetScriptScopeBehavior_t);
	bool HasDataObjectType(EntityDataObjectType_t);
	void AddDataObjectType(EntityDataObjectType_t);
	void RemoveDataObjectType(EntityDataObjectType_t);
	void * GetDataObject(EntityDataObjectType_t);
	void * CreateDataObject(EntityDataObjectType_t);
	void DestroyDataObject(EntityDataObjectType_t);
	void DestroyAllDataObjects();
	~CEntityIdentity();
	void NetworkStateChanged();
	void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	int Save(ISave &);
	int Restore(IRestore &);
	void GetStringTableDefs(bool, CUtlVector<StringTableDef_t, CUtlMemory<StringTableDef_t, int> > &);
	void OnEntityNameChanged(CEntityInstance *, const int32 *);
	void CreatePublicScriptScope();
	CEntityIdentity();
	void ClearId();
	CBodyComponent * GetComponent<CBodyComponent>();

	// sizeof = 120
};

// src/public/entity2/entityidentity.h:76
class CEntityIdentity {
	struct EntityNameTable_t {
		bool m_bServer;  // +0x8

		// sizeof = 16
	};

	class NetworkVar_m_nameStringableIndex {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

private:

	static datamap_t m_DataMap;

	static EntityNameTable_t s_pEntityNameStringTable;

	string_t m_name;  // +0x18
	string_t m_designerName;  // +0x20
	CEntityPublicScriptScope m_hPublicScope;  // +0x28
	uint32 m_flags;  // +0x30
	SpawnGroupHandle_t m_hSpawnGroup;  // +0x34
	uint32 m_fDataObjectTypes;  // +0x38
	uint16 m_Padding;  // +0x3e

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	const CEntityHandle GetEHandle();
	EHANDLE2 operator EHANDLE2();
	uint32 GetFlags();
	void SetFlags(uint32);
	void AddFlags(uint32);
	void RemoveFlags(uint32);
	bool IsReady();
	bool IsPendingCreation();
	bool IsMarkedForDeletion();
	EntityDormancyType_t GetDormancyType();
	bool IsDormant();
	const V_uuid_t & GetId();
	CEntityClass * GetClass();
	CEntityInstance * operator CEntityInstance*();
	CEntityInstance * GetInstance();
	const ISchemaBinding * GetInstanceSchemaBinding();
	bool HasComponent(int);
	void * GetComponent(int);
	void * IterComponentsStart(EntityComponentIter_t *, const EntComponentInfo_t * *);
	void * IterComponentsNext(EntityComponentIter_t *, const EntComponentInfo_t * *);
	void IterComponentsStop(EntityComponentIter_t *);
	string_t GetEntityName();
	const char * GetEntityNameAsCStr();
	void SetEntityName(string_t);
	void SetEntityName(const char *);
	bool NameMatches(const char *);
	bool NameMatches(string_t);
	bool NameMatchesExact(string_t);
	string_t GetClassName();
	const char * GetClassNameAsCStr();
	bool ClassMatches(const char *);
	bool ClassMatches(string_t);
	bool ClassMatchesExact(string_t);
	bool ClassInheritsFrom(const char *);
	bool ClassInheritsFrom(string_t);
	const char * GetDebugName();
	void SetSpawnGroupHandle(SpawnGroupHandle_t);
	SpawnGroupHandle_t GetSpawnGroupHandle();
	bool AcceptInput(string_t, CEntityInstance *, CEntityInstance *, const CVariant &, int);
	CUtlObjectAttributeTable<CEntityIdentity, CUtlStringToken> * GetEntityAttributes();
	CRenderAttributesDoubleBuffered * GetEntityRenderAttrs();
	bool HasEntityRenderAttrs();
	void FreeAttributes(bool);
	void FindEntityIOOutputsByName(const char *, CUtlVector<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> > &);
	void GetEntityIOInputs(CUtlVector<char const*, CUtlMemory<char const*, int> > &);
	void GetEntityIOOutputs(CUtlVector<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> > &);
	void GetEntityIOOutputs(CUtlVector<const EntityIOOutputDesc_t*, CUtlMemory<const EntityIOOutputDesc_t*, int> > &);
	const CEntityPublicScriptScope & GetPublicScriptScope(GetScriptScopeBehavior_t);
	bool HasDataObjectType(EntityDataObjectType_t);
	void AddDataObjectType(EntityDataObjectType_t);
	void RemoveDataObjectType(EntityDataObjectType_t);
	void * GetDataObject(EntityDataObjectType_t);
	void * CreateDataObject(EntityDataObjectType_t);
	void DestroyDataObject(EntityDataObjectType_t);
	void DestroyAllDataObjects();
	~CEntityIdentity();
	void NetworkStateChanged();
	void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	int Save(ISave &);
	int Restore(IRestore &);
	void GetStringTableDefs(bool, CUtlVector<StringTableDef_t, CUtlMemory<StringTableDef_t, int> > &);
	void OnEntityNameChanged(CEntityInstance *, const int32 *);
	void CreatePublicScriptScope();
	CEntityIdentity();
	void ClearId();
	CBodyComponent * GetComponent<CBodyComponent>();
	CHitboxComponent * GetComponent<CHitboxComponent>();

	// sizeof = 120
};

// src/public/entity2/entityidentity.h:76
class CEntityIdentity {
	struct EntityNameTable_t {
		bool m_bServer;  // +0x8

		// sizeof = 16
	};

	class NetworkVar_m_nameStringableIndex {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

private:

	static datamap_t m_DataMap;

	static EntityNameTable_t s_pEntityNameStringTable;

	string_t m_name;  // +0x18
	string_t m_designerName;  // +0x20
	CEntityPublicScriptScope m_hPublicScope;  // +0x28
	uint32 m_flags;  // +0x30
	SpawnGroupHandle_t m_hSpawnGroup;  // +0x34
	uint32 m_fDataObjectTypes;  // +0x38
	uint16 m_Padding;  // +0x3e

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	const CEntityHandle GetEHandle();
	EHANDLE2 operator EHANDLE2();
	uint32 GetFlags();
	void SetFlags(uint32);
	void AddFlags(uint32);
	void RemoveFlags(uint32);
	bool IsReady();
	bool IsPendingCreation();
	bool IsMarkedForDeletion();
	EntityDormancyType_t GetDormancyType();
	bool IsDormant();
	const V_uuid_t & GetId();
	CEntityClass * GetClass();
	CEntityInstance * operator CEntityInstance*();
	CEntityInstance * GetInstance();
	const ISchemaBinding * GetInstanceSchemaBinding();
	bool HasComponent(int);
	void * GetComponent(int);
	void * IterComponentsStart(EntityComponentIter_t *, const EntComponentInfo_t * *);
	void * IterComponentsNext(EntityComponentIter_t *, const EntComponentInfo_t * *);
	void IterComponentsStop(EntityComponentIter_t *);
	string_t GetEntityName();
	const char * GetEntityNameAsCStr();
	void SetEntityName(string_t);
	void SetEntityName(const char *);
	bool NameMatches(const char *);
	bool NameMatches(string_t);
	bool NameMatchesExact(string_t);
	string_t GetClassName();
	const char * GetClassNameAsCStr();
	bool ClassMatches(const char *);
	bool ClassMatches(string_t);
	bool ClassMatchesExact(string_t);
	bool ClassInheritsFrom(const char *);
	bool ClassInheritsFrom(string_t);
	const char * GetDebugName();
	void SetSpawnGroupHandle(SpawnGroupHandle_t);
	SpawnGroupHandle_t GetSpawnGroupHandle();
	bool AcceptInput(string_t, CEntityInstance *, CEntityInstance *, const CVariant &, int);
	CUtlObjectAttributeTable<CEntityIdentity, CUtlStringToken> * GetEntityAttributes();
	CRenderAttributesDoubleBuffered * GetEntityRenderAttrs();
	bool HasEntityRenderAttrs();
	void FreeAttributes(bool);
	void FindEntityIOOutputsByName(const char *, CUtlVector<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> > &);
	void GetEntityIOInputs(CUtlVector<char const*, CUtlMemory<char const*, int> > &);
	void GetEntityIOOutputs(CUtlVector<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> > &);
	void GetEntityIOOutputs(CUtlVector<const EntityIOOutputDesc_t*, CUtlMemory<const EntityIOOutputDesc_t*, int> > &);
	const CEntityPublicScriptScope & GetPublicScriptScope(GetScriptScopeBehavior_t);
	bool HasDataObjectType(EntityDataObjectType_t);
	void AddDataObjectType(EntityDataObjectType_t);
	void RemoveDataObjectType(EntityDataObjectType_t);
	void * GetDataObject(EntityDataObjectType_t);
	void * CreateDataObject(EntityDataObjectType_t);
	void DestroyDataObject(EntityDataObjectType_t);
	void DestroyAllDataObjects();
	~CEntityIdentity();
	void NetworkStateChanged();
	void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	int Save(ISave &);
	int Restore(IRestore &);
	void GetStringTableDefs(bool, CUtlVector<StringTableDef_t, CUtlMemory<StringTableDef_t, int> > &);
	void OnEntityNameChanged(CEntityInstance *, const int32 *);
	void CreatePublicScriptScope();
	CEntityIdentity();
	void ClearId();
	CBodyComponent * GetComponent<CBodyComponent>();
	CLightComponent * GetComponent<CLightComponent>();

	// sizeof = 120
};

// src/public/entity2/entityidentity.h:76
class CEntityIdentity {
	struct EntityNameTable_t {
		bool m_bServer;  // +0x8

		// sizeof = 16
	};

	class NetworkVar_m_nameStringableIndex {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

private:

	static datamap_t m_DataMap;

	static EntityNameTable_t s_pEntityNameStringTable;

	string_t m_name;  // +0x18
	string_t m_designerName;  // +0x20
	CEntityPublicScriptScope m_hPublicScope;  // +0x28
	uint32 m_flags;  // +0x30
	SpawnGroupHandle_t m_hSpawnGroup;  // +0x34
	uint32 m_fDataObjectTypes;  // +0x38
	uint16 m_Padding;  // +0x3e

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	const CEntityHandle GetEHandle();
	EHANDLE2 operator EHANDLE2();
	uint32 GetFlags();
	void SetFlags(uint32);
	void AddFlags(uint32);
	void RemoveFlags(uint32);
	bool IsReady();
	bool IsPendingCreation();
	bool IsMarkedForDeletion();
	EntityDormancyType_t GetDormancyType();
	bool IsDormant();
	const V_uuid_t & GetId();
	CEntityClass * GetClass();
	CEntityInstance * operator CEntityInstance*();
	CEntityInstance * GetInstance();
	const ISchemaBinding * GetInstanceSchemaBinding();
	bool HasComponent(int);
	void * GetComponent(int);
	void * IterComponentsStart(EntityComponentIter_t *, const EntComponentInfo_t * *);
	void * IterComponentsNext(EntityComponentIter_t *, const EntComponentInfo_t * *);
	void IterComponentsStop(EntityComponentIter_t *);
	string_t GetEntityName();
	const char * GetEntityNameAsCStr();
	void SetEntityName(string_t);
	void SetEntityName(const char *);
	bool NameMatches(const char *);
	bool NameMatches(string_t);
	bool NameMatchesExact(string_t);
	string_t GetClassName();
	const char * GetClassNameAsCStr();
	bool ClassMatches(const char *);
	bool ClassMatches(string_t);
	bool ClassMatchesExact(string_t);
	bool ClassInheritsFrom(const char *);
	bool ClassInheritsFrom(string_t);
	const char * GetDebugName();
	void SetSpawnGroupHandle(SpawnGroupHandle_t);
	SpawnGroupHandle_t GetSpawnGroupHandle();
	bool AcceptInput(string_t, CEntityInstance *, CEntityInstance *, const CVariant &, int);
	CUtlObjectAttributeTable<CEntityIdentity, CUtlStringToken> * GetEntityAttributes();
	CRenderAttributesDoubleBuffered * GetEntityRenderAttrs();
	bool HasEntityRenderAttrs();
	void FreeAttributes(bool);
	void FindEntityIOOutputsByName(const char *, CUtlVector<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> > &);
	void GetEntityIOInputs(CUtlVector<char const*, CUtlMemory<char const*, int> > &);
	void GetEntityIOOutputs(CUtlVector<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> > &);
	void GetEntityIOOutputs(CUtlVector<const EntityIOOutputDesc_t*, CUtlMemory<const EntityIOOutputDesc_t*, int> > &);
	const CEntityPublicScriptScope & GetPublicScriptScope(GetScriptScopeBehavior_t);
	bool HasDataObjectType(EntityDataObjectType_t);
	void AddDataObjectType(EntityDataObjectType_t);
	void RemoveDataObjectType(EntityDataObjectType_t);
	void * GetDataObject(EntityDataObjectType_t);
	void * CreateDataObject(EntityDataObjectType_t);
	void DestroyDataObject(EntityDataObjectType_t);
	void DestroyAllDataObjects();
	~CEntityIdentity();
	void NetworkStateChanged();
	void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	int Save(ISave &);
	int Restore(IRestore &);
	void GetStringTableDefs(bool, CUtlVector<StringTableDef_t, CUtlMemory<StringTableDef_t, int> > &);
	void OnEntityNameChanged(CEntityInstance *, const int32 *);
	void CreatePublicScriptScope();
	CEntityIdentity();
	void ClearId();
	CBodyComponent * GetComponent<CBodyComponent>();
	CHealthComponent * GetComponent<CHealthComponent>();
	CDamageComponent * GetComponent<CDamageComponent>();

	// sizeof = 120
};

// src/public/entity2/entityidentity.h:76
class CEntityIdentity {
	struct EntityNameTable_t {
		bool m_bServer;  // +0x8

		// sizeof = 16
	};

	class NetworkVar_m_nameStringableIndex {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

private:

	static datamap_t m_DataMap;

	static EntityNameTable_t s_pEntityNameStringTable;

	string_t m_name;  // +0x18
	string_t m_designerName;  // +0x20
	CEntityPublicScriptScope m_hPublicScope;  // +0x28
	uint32 m_flags;  // +0x30
	SpawnGroupHandle_t m_hSpawnGroup;  // +0x34
	uint32 m_fDataObjectTypes;  // +0x38
	uint16 m_Padding;  // +0x3e

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	const CEntityHandle GetEHandle();
	EHANDLE2 operator EHANDLE2();
	uint32 GetFlags();
	void SetFlags(uint32);
	void AddFlags(uint32);
	void RemoveFlags(uint32);
	bool IsReady();
	bool IsPendingCreation();
	bool IsMarkedForDeletion();
	EntityDormancyType_t GetDormancyType();
	bool IsDormant();
	const V_uuid_t & GetId();
	CEntityClass * GetClass();
	CEntityInstance * operator CEntityInstance*();
	CEntityInstance * GetInstance();
	const ISchemaBinding * GetInstanceSchemaBinding();
	bool HasComponent(int);
	void * GetComponent(int);
	void * IterComponentsStart(EntityComponentIter_t *, const EntComponentInfo_t * *);
	void * IterComponentsNext(EntityComponentIter_t *, const EntComponentInfo_t * *);
	void IterComponentsStop(EntityComponentIter_t *);
	string_t GetEntityName();
	const char * GetEntityNameAsCStr();
	void SetEntityName(string_t);
	void SetEntityName(const char *);
	bool NameMatches(const char *);
	bool NameMatches(string_t);
	bool NameMatchesExact(string_t);
	string_t GetClassName();
	const char * GetClassNameAsCStr();
	bool ClassMatches(const char *);
	bool ClassMatches(string_t);
	bool ClassMatchesExact(string_t);
	bool ClassInheritsFrom(const char *);
	bool ClassInheritsFrom(string_t);
	const char * GetDebugName();
	void SetSpawnGroupHandle(SpawnGroupHandle_t);
	SpawnGroupHandle_t GetSpawnGroupHandle();
	bool AcceptInput(string_t, CEntityInstance *, CEntityInstance *, const CVariant &, int);
	CUtlObjectAttributeTable<CEntityIdentity, CUtlStringToken> * GetEntityAttributes();
	CRenderAttributesDoubleBuffered * GetEntityRenderAttrs();
	bool HasEntityRenderAttrs();
	void FreeAttributes(bool);
	void FindEntityIOOutputsByName(const char *, CUtlVector<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> > &);
	void GetEntityIOInputs(CUtlVector<char const*, CUtlMemory<char const*, int> > &);
	void GetEntityIOOutputs(CUtlVector<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> > &);
	void GetEntityIOOutputs(CUtlVector<const EntityIOOutputDesc_t*, CUtlMemory<const EntityIOOutputDesc_t*, int> > &);
	const CEntityPublicScriptScope & GetPublicScriptScope(GetScriptScopeBehavior_t);
	bool HasDataObjectType(EntityDataObjectType_t);
	void AddDataObjectType(EntityDataObjectType_t);
	void RemoveDataObjectType(EntityDataObjectType_t);
	void * GetDataObject(EntityDataObjectType_t);
	void * CreateDataObject(EntityDataObjectType_t);
	void DestroyDataObject(EntityDataObjectType_t);
	void DestroyAllDataObjects();
	~CEntityIdentity();
	void NetworkStateChanged();
	void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	int Save(ISave &);
	int Restore(IRestore &);
	void GetStringTableDefs(bool, CUtlVector<StringTableDef_t, CUtlMemory<StringTableDef_t, int> > &);
	void OnEntityNameChanged(CEntityInstance *, const int32 *);
	void CreatePublicScriptScope();
	CEntityIdentity();
	void ClearId();
	CRenderComponent * GetComponent<CRenderComponent>();

	// sizeof = 120
};

// src/public/entity2/entityidentity.h:76
class CEntityIdentity {
	struct EntityNameTable_t {
		bool m_bServer;  // +0x8

		// sizeof = 16
	};

	class NetworkVar_m_nameStringableIndex {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

private:

	static datamap_t m_DataMap;

	static EntityNameTable_t s_pEntityNameStringTable;

	string_t m_name;  // +0x18
	string_t m_designerName;  // +0x20
	CEntityPublicScriptScope m_hPublicScope;  // +0x28
	uint32 m_flags;  // +0x30
	SpawnGroupHandle_t m_hSpawnGroup;  // +0x34
	uint32 m_fDataObjectTypes;  // +0x38
	uint16 m_Padding;  // +0x3e
	typedef CEntityIdentity ThisClass;

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	const CEntityHandle GetEHandle();
	EHANDLE2 operator EHANDLE2();
	uint32 GetFlags();
	void SetFlags(uint32);
	void AddFlags(uint32);
	void RemoveFlags(uint32);
	bool IsReady();
	bool IsPendingCreation();
	bool IsMarkedForDeletion();
	EntityDormancyType_t GetDormancyType();
	bool IsDormant();
	const V_uuid_t & GetId();
	CEntityClass * GetClass();
	CEntityInstance * operator CEntityInstance*();
	CEntityInstance * GetInstance();
	const ISchemaBinding * GetInstanceSchemaBinding();
	bool HasComponent(int);
	void * GetComponent(int);
	void * IterComponentsStart(EntityComponentIter_t *, const EntComponentInfo_t * *);
	void * IterComponentsNext(EntityComponentIter_t *, const EntComponentInfo_t * *);
	void IterComponentsStop(EntityComponentIter_t *);
	string_t GetEntityName();
	const char * GetEntityNameAsCStr();
	void SetEntityName(string_t);
	void SetEntityName(const char *);
	bool NameMatches(const char *);
	bool NameMatches(string_t);
	bool NameMatchesExact(string_t);
	string_t GetClassName();
	const char * GetClassNameAsCStr();
	bool ClassMatches(const char *);
	bool ClassMatches(string_t);
	bool ClassMatchesExact(string_t);
	bool ClassInheritsFrom(const char *);
	bool ClassInheritsFrom(string_t);
	const char * GetDebugName();
	void SetSpawnGroupHandle(SpawnGroupHandle_t);
	SpawnGroupHandle_t GetSpawnGroupHandle();
	bool AcceptInput(string_t, CEntityInstance *, CEntityInstance *, const CVariant &, int);
	CUtlObjectAttributeTable<CEntityIdentity, CUtlStringToken> * GetEntityAttributes();
	CRenderAttributesDoubleBuffered * GetEntityRenderAttrs();
	bool HasEntityRenderAttrs();
	void FreeAttributes(bool);
	void FindEntityIOOutputsByName(const char *, CUtlVector<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> > &);
	void GetEntityIOInputs(CUtlVector<char const*, CUtlMemory<char const*, int> > &);
	void GetEntityIOOutputs(CUtlVector<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> > &);
	void GetEntityIOOutputs(CUtlVector<const EntityIOOutputDesc_t*, CUtlMemory<const EntityIOOutputDesc_t*, int> > &);
	const CEntityPublicScriptScope & GetPublicScriptScope(GetScriptScopeBehavior_t);
	bool HasDataObjectType(EntityDataObjectType_t);
	void AddDataObjectType(EntityDataObjectType_t);
	void RemoveDataObjectType(EntityDataObjectType_t);
	void * GetDataObject(EntityDataObjectType_t);
	void * CreateDataObject(EntityDataObjectType_t);
	void DestroyDataObject(EntityDataObjectType_t);
	void DestroyAllDataObjects();
	~CEntityIdentity();
	void NetworkStateChanged();
	void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	int Save(ISave &);
	int Restore(IRestore &);
	void GetStringTableDefs(bool, CUtlVector<StringTableDef_t, CUtlMemory<StringTableDef_t, int> > &);
	void OnEntityNameChanged(CEntityInstance *, const int32 *);
	void CreatePublicScriptScope();
	CEntityIdentity();
	void ClearId();
	CScriptComponent * GetComponent<CScriptComponent>();

	// sizeof = 120
};

// src/public/entity2/entityidentity.h:76
class CEntityIdentity {
	struct EntityNameTable_t {
		bool m_bServer;  // +0x8

		// sizeof = 16
	};

	class NetworkVar_m_nameStringableIndex {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

private:

	static datamap_t m_DataMap;

	static EntityNameTable_t s_pEntityNameStringTable;

	string_t m_name;  // +0x18
	string_t m_designerName;  // +0x20
	CEntityPublicScriptScope m_hPublicScope;  // +0x28
	uint32 m_flags;  // +0x30
	SpawnGroupHandle_t m_hSpawnGroup;  // +0x34
	uint32 m_fDataObjectTypes;  // +0x38
	uint16 m_Padding;  // +0x3e
	typedef CEntityIdentity ThisClass;

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	const CEntityHandle GetEHandle();
	EHANDLE2 operator EHANDLE2();
	uint32 GetFlags();
	void SetFlags(uint32);
	void AddFlags(uint32);
	void RemoveFlags(uint32);
	bool IsReady();
	bool IsPendingCreation();
	bool IsMarkedForDeletion();
	EntityDormancyType_t GetDormancyType();
	bool IsDormant();
	const V_uuid_t & GetId();
	CEntityClass * GetClass();
	CEntityInstance * operator CEntityInstance*();
	CEntityInstance * GetInstance();
	const ISchemaBinding * GetInstanceSchemaBinding();
	bool HasComponent(int);
	void * GetComponent(int);
	void * IterComponentsStart(EntityComponentIter_t *, const EntComponentInfo_t * *);
	void * IterComponentsNext(EntityComponentIter_t *, const EntComponentInfo_t * *);
	void IterComponentsStop(EntityComponentIter_t *);
	string_t GetEntityName();
	const char * GetEntityNameAsCStr();
	void SetEntityName(string_t);
	void SetEntityName(const char *);
	bool NameMatches(const char *);
	bool NameMatches(string_t);
	bool NameMatchesExact(string_t);
	string_t GetClassName();
	const char * GetClassNameAsCStr();
	bool ClassMatches(const char *);
	bool ClassMatches(string_t);
	bool ClassMatchesExact(string_t);
	bool ClassInheritsFrom(const char *);
	bool ClassInheritsFrom(string_t);
	const char * GetDebugName();
	void SetSpawnGroupHandle(SpawnGroupHandle_t);
	SpawnGroupHandle_t GetSpawnGroupHandle();
	bool AcceptInput(string_t, CEntityInstance *, CEntityInstance *, const CVariant &, int);
	CUtlObjectAttributeTable<CEntityIdentity, CUtlStringToken> * GetEntityAttributes();
	CRenderAttributesDoubleBuffered * GetEntityRenderAttrs();
	bool HasEntityRenderAttrs();
	void FreeAttributes(bool);
	void FindEntityIOOutputsByName(const char *, CUtlVector<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> > &);
	void GetEntityIOInputs(CUtlVector<char const*, CUtlMemory<char const*, int> > &);
	void GetEntityIOOutputs(CUtlVector<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> > &);
	void GetEntityIOOutputs(CUtlVector<const EntityIOOutputDesc_t*, CUtlMemory<const EntityIOOutputDesc_t*, int> > &);
	const CEntityPublicScriptScope & GetPublicScriptScope(GetScriptScopeBehavior_t);
	bool HasDataObjectType(EntityDataObjectType_t);
	void AddDataObjectType(EntityDataObjectType_t);
	void RemoveDataObjectType(EntityDataObjectType_t);
	void * GetDataObject(EntityDataObjectType_t);
	void * CreateDataObject(EntityDataObjectType_t);
	void DestroyDataObject(EntityDataObjectType_t);
	void DestroyAllDataObjects();
	~CEntityIdentity();
	void NetworkStateChanged();
	void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	int Save(ISave &);
	int Restore(IRestore &);
	void GetStringTableDefs(bool, CUtlVector<StringTableDef_t, CUtlMemory<StringTableDef_t, int> > &);
	void OnEntityNameChanged(CEntityInstance *, const int32 *);
	void CreatePublicScriptScope();
	CEntityIdentity();
	void ClearId();

	// sizeof = 120
};

// src/public/entity2/entityidentity.h:76
class CEntityIdentity {
	struct EntityNameTable_t {
		bool m_bServer;  // +0x8

		// sizeof = 16
	};

	class NetworkVar_m_nameStringableIndex {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

private:

	static datamap_t m_DataMap;

	static EntityNameTable_t s_pEntityNameStringTable;

	string_t m_name;  // +0x18
	string_t m_designerName;  // +0x20
	CEntityPublicScriptScope m_hPublicScope;  // +0x28
	uint32 m_flags;  // +0x30
	SpawnGroupHandle_t m_hSpawnGroup;  // +0x34
	uint32 m_fDataObjectTypes;  // +0x38
	uint16 m_Padding;  // +0x3e
	typedef CEntityIdentity ThisClass;

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	const CEntityHandle GetEHandle();
	EHANDLE2 operator EHANDLE2();
	uint32 GetFlags();
	void SetFlags(uint32);
	void AddFlags(uint32);
	void RemoveFlags(uint32);
	bool IsReady();
	bool IsPendingCreation();
	bool IsMarkedForDeletion();
	EntityDormancyType_t GetDormancyType();
	bool IsDormant();
	const V_uuid_t & GetId();
	CEntityClass * GetClass();
	CEntityInstance * operator CEntityInstance*();
	CEntityInstance * GetInstance();
	const ISchemaBinding * GetInstanceSchemaBinding();
	bool HasComponent(int);
	void * GetComponent(int);
	void * IterComponentsStart(EntityComponentIter_t *, const EntComponentInfo_t * *);
	void * IterComponentsNext(EntityComponentIter_t *, const EntComponentInfo_t * *);
	void IterComponentsStop(EntityComponentIter_t *);
	string_t GetEntityName();
	const char * GetEntityNameAsCStr();
	void SetEntityName(string_t);
	void SetEntityName(const char *);
	bool NameMatches(const char *);
	bool NameMatches(string_t);
	bool NameMatchesExact(string_t);
	string_t GetClassName();
	const char * GetClassNameAsCStr();
	bool ClassMatches(const char *);
	bool ClassMatches(string_t);
	bool ClassMatchesExact(string_t);
	bool ClassInheritsFrom(const char *);
	bool ClassInheritsFrom(string_t);
	const char * GetDebugName();
	void SetSpawnGroupHandle(SpawnGroupHandle_t);
	SpawnGroupHandle_t GetSpawnGroupHandle();
	bool AcceptInput(string_t, CEntityInstance *, CEntityInstance *, const CVariant &, int);
	CUtlObjectAttributeTable<CEntityIdentity, CUtlStringToken> * GetEntityAttributes();
	CRenderAttributesDoubleBuffered * GetEntityRenderAttrs();
	bool HasEntityRenderAttrs();
	void FreeAttributes(bool);
	void FindEntityIOOutputsByName(const char *, CUtlVector<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> > &);
	void GetEntityIOInputs(CUtlVector<char const*, CUtlMemory<char const*, int> > &);
	void GetEntityIOOutputs(CUtlVector<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> > &);
	void GetEntityIOOutputs(CUtlVector<const EntityIOOutputDesc_t*, CUtlMemory<const EntityIOOutputDesc_t*, int> > &);
	const CEntityPublicScriptScope & GetPublicScriptScope(GetScriptScopeBehavior_t);
	bool HasDataObjectType(EntityDataObjectType_t);
	void AddDataObjectType(EntityDataObjectType_t);
	void RemoveDataObjectType(EntityDataObjectType_t);
	void * GetDataObject(EntityDataObjectType_t);
	void * CreateDataObject(EntityDataObjectType_t);
	void DestroyDataObject(EntityDataObjectType_t);
	void DestroyAllDataObjects();
	~CEntityIdentity();
	void NetworkStateChanged();
	void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	int Save(ISave &);
	int Restore(IRestore &);
	void GetStringTableDefs(bool, CUtlVector<StringTableDef_t, CUtlMemory<StringTableDef_t, int> > &);
	void OnEntityNameChanged(CEntityInstance *, const int32 *);
	void CreatePublicScriptScope();
	CEntityIdentity();
	void ClearId();
	CEntityIdentity & operator=(const CEntityIdentity &);

	// sizeof = 120
};
