// Reconstructed from DWARF by pahole; not original source.

// src/public/entity2/entityscriptframework.h:73
class CScriptPrecacheContext {
protected:

	const CEntityPrecacheContext * m_pContext;  // +0x18
	HSCRIPT m_hPrecacheContext;  // +0x20
	CScriptPrecacheContext(const CEntityPrecacheContext *);
	CScriptPrecacheContext(IEntityResourceManifest *);
	~CScriptPrecacheContext();
	HSCRIPT GetHScript();
	ScriptVariant_t GetValue(const char *);
	void AddResource(const char *);

	// sizeof = 40
};

// src/public/entity2/entityscriptframework.h:95
class CScriptKeyValues {
protected:

	const CEntityKeyValues * m_pKeyValues;  // +0x0
	HSCRIPT m_hKeyValues;  // +0x8
	CScriptKeyValues(const CEntityKeyValues *);
	~CScriptKeyValues();
	HSCRIPT GetHScript();
	ScriptVariant_t GetValue(const char *);

	// sizeof = 16
};

// src/public/entity2/entityscriptframework.h:115
struct ScriptEntityIOOutputDesc_t : public EntityIOOutputDesc_t {
public:

	string_t m_name;  // +0x10
	ScriptEntityIOOutputDesc_t();
	ScriptEntityIOOutputDesc_t(const char *, int, uint32);
	ScriptEntityIOOutputDesc_t(const ScriptEntityIOOutputDesc_t &);

	// sizeof = 24
};

// src/public/entity2/entityscriptframework.h:125
class CEntityFrameScriptAccessorBase {
	IScriptVM * GetVM();

	// sizeof = 1
};

// src/public/entity2/entityscriptframework.h:135
class CEntityScriptFramework : CScriptScopeT<CDefScriptAccessorBase, true> {
private:

	static CScriptAccessorT<CEntityFrameScriptAccessorBase, false> sm_GlobalScriptScope;
	CEntityScriptFramework();
	IScriptVM * GetVM();
	bool IsInitialized();
	const CScriptAccessorT<CEntityFrameScriptAccessorBase, false> & GetGlobalScriptScope();
	bool LoadFramework();
	bool LoadEntityClasses();
	void DisconnectFromVM();
	HSCRIPT CompileScript(const char *, bool);
	bool RunScript(const char *, HSCRIPT, bool);
	bool RunScript(const char *);
	void DispatchPrecache(CEntityInstance *, CScriptComponent *, const CEntityPrecacheContext *);
	void DispatchSpawn(CEntityInstance *, CScriptComponent *, const CEntityKeyValues *);
	bool DispatchActivate(CEntityInstance *, CScriptComponent *);
	void DispatchUpdateOnRemove(CEntityInstance *, CScriptComponent *);
	CUtlVector<ScriptEntityIOOutputDesc_t, CUtlMemory<ScriptEntityIOOutputDesc_t, int> > * GetOutputsForClass(const char *);
	bool IsKeyUsedByScriptClass(const char *, EntityKeyId_t);
	const CEntityPrecacheContext * GetPrecacheContext(HSCRIPT);
	HSCRIPT CreatePublicScriptScope(CEntityInstance *, const char *);
	void DestroyPublicScriptScope(CEntityInstance *, HSCRIPT);
	bool InstallClasses();
	void InstallCppClasses();
	const char * GetScriptClassNameOverride(const char *, char *, int);

	// sizeof = 144
};

// src/public/entity2/entityscriptframework.h:240
class CScriptComponent : public CEntityComponent, public CScriptScopeT<CDefScriptAccessorBase, true> {
public:

private:

	static EntComponentInfo_t s_EntComponentInfo;
	static int entity_component_error_class_decl_says_contained_but_impl_is_referenced;
	string_t m_scriptClassName;  // +0x28
	CEntityComponentHelper * GetBaseComponentHelper();

protected:

	EntComponentInfo_t & GetEntComponentInfo();
	int GetRuntimeComponentIndex();
	bool EntIsContained();
	CEntityInstance * GetOwner();
	const CEntityInstance * GetOwner();
	CScriptComponent();
	~CScriptComponent();
	void Precache(CEntityInstance *, const CEntityPrecacheContext *);
	void Spawn(CEntityInstance *, const CEntityKeyValues *);
	bool Activate(CEntityInstance *);
	void UpdateOnRemove(CEntityInstance *);
	bool AcceptInput(string_t, HSCRIPT);
	void FindEntityIOOutputsByName(const char *, CUtlVector<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> > &);
	void GetEntityIOOutputs(CUtlVector<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> > &);
	void GetEntityIOOutputs(CUtlVector<const EntityIOOutputDesc_t*, CUtlMemory<const EntityIOOutputDesc_t*, int> > &);
	void GetEntityIOInputs(CUtlVector<char const*, CUtlMemory<char const*, int> > &);
	string_t GetScriptClassName();
	void AttachToScriptEntityClass(HSCRIPT, const char *);
	void DetachFromScriptEntityClass();

	// sizeof = 48
};

// src/public/entity2/entityscriptframework.h:240
class CScriptComponent : public CEntityComponent, public CScriptScopeT<CDefScriptAccessorBase, true> {
	enum {
		ENT_IS_CONTAINED = 0,
	};

public:

private:

	static EntComponentInfo_t s_EntComponentInfo;
	static int entity_component_error_class_decl_says_contained_but_impl_is_referenced;
	string_t m_scriptClassName;  // +0x28
	typedef CScriptComponent * Storage_t;
	CEntityComponentHelper * GetBaseComponentHelper();

protected:

	EntComponentInfo_t & GetEntComponentInfo();
	int GetRuntimeComponentIndex();
	bool EntIsContained();
	CEntityInstance * GetOwner();
	const CEntityInstance * GetOwner();
	CScriptComponent();
	~CScriptComponent();
	void Precache(CEntityInstance *, const CEntityPrecacheContext *);
	void Spawn(CEntityInstance *, const CEntityKeyValues *);
	bool Activate(CEntityInstance *);
	void UpdateOnRemove(CEntityInstance *);
	bool AcceptInput(string_t, HSCRIPT);
	void FindEntityIOOutputsByName(const char *, CUtlVector<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> > &);
	void GetEntityIOOutputs(CUtlVector<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> > &);
	void GetEntityIOOutputs(CUtlVector<const EntityIOOutputDesc_t*, CUtlMemory<const EntityIOOutputDesc_t*, int> > &);
	void GetEntityIOInputs(CUtlVector<char const*, CUtlMemory<char const*, int> > &);
	string_t GetScriptClassName();
	void AttachToScriptEntityClass(HSCRIPT, const char *);
	void DetachFromScriptEntityClass();

	// sizeof = 48
};

// src/public/entity2/entityscriptframework.h:240
class CScriptComponent : public CEntityComponent, public CScriptScopeT<CDefScriptAccessorBase, true> {
	enum {
		ENT_IS_CONTAINED = 0,
	};

public:

private:

	static EntComponentInfo_t s_EntComponentInfo;
	static int entity_component_error_class_decl_says_contained_but_impl_is_referenced;
	string_t m_scriptClassName;  // +0x28
	CEntityComponentHelper * GetBaseComponentHelper();

protected:

	EntComponentInfo_t & GetEntComponentInfo();
	int GetRuntimeComponentIndex();
	bool EntIsContained();
	CEntityInstance * GetOwner();
	const CEntityInstance * GetOwner();
	CScriptComponent();
	~CScriptComponent();
	void Precache(CEntityInstance *, const CEntityPrecacheContext *);
	void Spawn(CEntityInstance *, const CEntityKeyValues *);
	bool Activate(CEntityInstance *);
	void UpdateOnRemove(CEntityInstance *);
	bool AcceptInput(string_t, HSCRIPT);
	void FindEntityIOOutputsByName(const char *, CUtlVector<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> > &);
	void GetEntityIOOutputs(CUtlVector<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> > &);
	void GetEntityIOOutputs(CUtlVector<const EntityIOOutputDesc_t*, CUtlMemory<const EntityIOOutputDesc_t*, int> > &);
	void GetEntityIOInputs(CUtlVector<char const*, CUtlMemory<char const*, int> > &);
	string_t GetScriptClassName();
	void AttachToScriptEntityClass(HSCRIPT, const char *);
	void DetachFromScriptEntityClass();

	class CAllocator<CScriptComponent> {
		bool Allocate(CEntityIdentity *, CScriptComponent * *);
		void Free(CEntityIdentity *, CScriptComponent * *);

		// sizeof = 1
	};

	// sizeof = 48
};
