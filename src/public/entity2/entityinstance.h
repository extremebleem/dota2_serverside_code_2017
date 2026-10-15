// Reconstructed from DWARF by pahole; not original source.

// src/public/entity2/entityinstance.h:62
class CEntityInstance : public IHandleEntity {
	struct InputDataForScriptTable_t {
		const char * m_pFunctionName;  // +0x0
		HSCRIPT m_hTable;  // +0x8
		HSCRIPT m_hValue;  // +0x10
		char m_pTempBuf[256];  // +0x20

		// sizeof = 288
	};

public:

private:

	CEntityPrivateScriptScope m_hPrivateScope;  // +0x10
	string_t m_iszPrivateVScripts;  // +0x18
	WorldGroupId_t m_worldGroupId;  // +0x20

protected:

	Storage_t m_CScriptComponent;  // +0x28
	CEntityInstance(const CEntityInstance &);
	virtual ScriptClassDesc_t * GetScriptDesc();
	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	CEntityInstance();
	virtual ~CEntityInstance();
	virtual void Connect();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void AddedToEntityDatabase();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void PostDataUpdate(DataUpdateType_t);
	virtual void Activate(ActivateType_t);
	virtual void UpdateOnRemove();
	virtual void OnSetDormant(EntityDormancyType_t, EntityDormancyType_t);
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);
	virtual void PreDataUpdate(DataUpdateType_t);
	virtual void DrawEntityDebugOverlays(uint64);
	virtual int Save(ISave &);
	virtual int Restore(IRestore &);
	virtual void OnSave();
	virtual void OnRestore();
	virtual int ObjectCaps();
	virtual CEntityIndex RequiredEdictIndex();
	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	virtual ChangeAccessorFieldPathIndex_t AddChangeAccessorPath(const CFieldPath &);
	bool IsCapableOfNetworking();
	bool IsNetworked();
	bool IsAuthoritative();
	EntityDormancyType_t GetDormancyType();
	bool IsDormant();
	bool IsMarkedForDeletion();
	bool IsSpawnInProgress();
	bool IsConstructionInProgress();
	bool IsDeletionInProgress();
	bool IsPreSpawn();
	bool IsInEntityDatabase();
	CEntityIdentity * GetEntityIdentity();
	const V_uuid_t & GetId();
	CEntityClass * GetClass();
	bool HasComponent(int);
	void * GetComponent(int);
	void * IterComponentsStart(EntityComponentIter_t *, const EntComponentInfo_t * *);
	void * IterComponentsNext(EntityComponentIter_t *, const EntComponentInfo_t * *);
	void IterComponentsStop(EntityComponentIter_t *);
	int Attribute_GetIntValue(CUtlStringToken, int, bool *);
	void Attribute_SetIntValue(CUtlStringToken, int);
	EHANDLE2 Attribute_GetEHandleValue(CUtlStringToken, EHANDLE2, bool *);
	void Attribute_SetEHandleValue(CUtlStringToken, EHANDLE2);
	float Attribute_GetFloatValue(CUtlStringToken, float, bool *);
	void Attribute_SetFloatValue(CUtlStringToken, float);
	bool HasAttribute(CUtlStringToken);
	void DeleteAttribute(CUtlStringToken);
	CScriptComponent * SetScriptComponent(CScriptComponent *);
	bool AcceptInput(string_t, CEntityInstance *, CEntityInstance *, const CVariant &, int);
	bool AcceptInput(const char *, CEntityInstance *, CEntityInstance *, const CVariant &, int);
	void GetEntityIOInputs(CUtlVector<char const*, CUtlMemory<char const*, int> > &);
	void GetEntityIOOutputs(CUtlVector<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> > &);
	void GetEntityIOOutputs(CUtlVector<const EntityIOOutputDesc_t*, CUtlMemory<const EntityIOOutputDesc_t*, int> > &);
	void FindEntityIOOutputsByName(const char *, CUtlVector<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> > &);
	void SetEntityName(string_t);
	void SetEntityName(const char *);
	string_t GetEntityName();
	const char * GetEntityNameAsCStr();
	bool NameMatches(const char *);
	bool NameMatches(string_t);
	bool NameMatchesExact(string_t);
	const char * GetDebugName();
	EHANDLE2 GetEHandle();
	CEntityIndex GetEntityIndex();
	SpawnGroupHandle_t GetSpawnGroupHandle();
	string_t GetClassName();
	const char * GetClassNameAsCStr();
	bool ClassMatches(const char *);
	bool ClassMatches(string_t);
	bool ClassMatchesExact(string_t);
	uint32 GetSizeOf();
	bool HasDataObjectType(EntityDataObjectType_t);
	void AddDataObjectType(EntityDataObjectType_t);
	void RemoveDataObjectType(EntityDataObjectType_t);
	void * GetDataObject(EntityDataObjectType_t);
	void * CreateDataObject(EntityDataObjectType_t);
	void DestroyDataObject(EntityDataObjectType_t);
	void DestroyAllDataObjects();
	string_t GetScriptClassName();
	void RecreateScriptHooks(const char *);
	void DestroyPrivateScriptScope();
	void DestroyPublicScriptScope();
	const CEntityPublicScriptScope & GetPublicScriptScope(GetScriptScopeBehavior_t);
	const CEntityPrivateScriptScope & GetPrivateScriptScope(GetScriptScopeBehavior_t);
	void ValidatePrivateScriptScope();
	const CScriptAccessorT<CEntityFrameScriptAccessorBase, false> & GetGlobalScriptScope();
	bool CallScriptFunction(CallScriptFunctionBehavior_t, const char *, ScriptVariant_t *, HSCRIPT);
	virtual void ReloadPrivateScripts();
	string_t GetHammerSpecifiedPrivateScripts();
	void DumpScriptScopes();
	const WorldGroupId_t & GetWorldGroupId();
	void DataDescValidate_CEntityInstance(ValidationResult_t *);
	virtual bool DataDescValidate(ValidationResult_t *);
	virtual const char * DataDescValidateClassname();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClass();
	bool RunPrivateScriptFile(const char *);

private:

	void FireOutputInternal(const char *, CEntityInstance *, CEntityInstance *, const CVariant &, float);
	void ScriptFireOutput(const char *, HSCRIPT, HSCRIPT, const CVariant &, float);
	void RemoveSelf();
	void SetIntAttr(const char *, int);
	int GetIntAttr(const char *);
	void ConnectOutputToScript(const char *, const char *, HSCRIPT);
	void ConnectOutputToScriptSelf(const char *, const char *);
	void DisconnectOutputFromScript(const char *, const char *, HSCRIPT);
	void DisconnectOutputFromScriptSelf(const char *, const char *);
	CEntityHandle ScriptGetEHandle();
	int ScriptGetEntityIndex();
	HSCRIPT ScriptGetPublicScriptScope();
	HSCRIPT ScriptGetPrivateScriptScope();
	HSCRIPT ScriptGetOrCreatePublicScriptScope();
	HSCRIPT ScriptGetOrCreatePrivateScriptScope();
	void CreatePublicScriptScope(const char *);
	bool RunPrivateScript(const char *, const char *);
	void PutInputDataInScriptTable(inputdata2_t &, bool, InputDataForScriptTable_t *);
	void CleanupInputDataForScriptTable(InputDataForScriptTable_t *);
	void InputAddOutput(inputdata2_t &);
	void InputRunPrivateScript(inputdata2_t &);
	void InputRunPrivateScriptFile(inputdata2_t &);
	void InputCallScriptFunction(inputdata2_t &);
	void InputCallPrivateScriptFunction(inputdata2_t &);
	void InputCallGlobalScriptFunction(inputdata2_t &);

	CScriptComponent * GetComponent_CScriptComponent();
	const CScriptComponent * GetComponent(const CScriptComponent *);
	CScriptComponent * GetComponent(CScriptComponent *);
	virtual const CEntityHandle GetRefEHandle();
	CScriptComponent * GetComponent<CScriptComponent>();

	// vtable[4] GetScriptDesc
	// vtable[5] Connect
	// vtable[6] Precache
	// vtable[7] AddedToEntityDatabase
	// vtable[8] Spawn
	// vtable[9] PostDataUpdate
	// vtable[10] Activate
	// vtable[11] UpdateOnRemove
	// vtable[12] OnSetDormant
	// vtable[13] PreDataUpdate
	// vtable[14] DrawEntityDebugOverlays
	// vtable[15] Save
	// vtable[16] Restore
	// vtable[17] OnSave
	// vtable[18] OnRestore
	// vtable[19] ObjectCaps
	// vtable[20] RequiredEdictIndex
	// vtable[21] NetworkStateChanged
	// vtable[22] NetworkStateChanged
	// vtable[23] NetworkStateChangedLog
	// vtable[24] AddChangeAccessorPath
	// vtable[25] ReloadPrivateScripts
	// vtable[26] DataDescValidate
	// vtable[27] DataDescValidateClassname
	// vtable[0] Schema_DynamicBinding
	// vtable[3] GetRefEHandle
	// sizeof = 48
};
