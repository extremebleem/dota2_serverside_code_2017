// Reconstructed from DWARF by pahole; not original source.

// src/public/vscript/ivscript.h:657
class CScriptConstructor<CRuleScriptBridge> {
	void * Construct();

	// sizeof = 1
};

// src/public/vscript/ivscript.h:657
class CScriptConstructor<CScriptNativeOutputs> {
	void * Construct();

	// sizeof = 1
};

// src/public/vscript/ivscript.h:663
class CScriptDestructor<CRuleScriptBridge> {
	void Destruct(void *);

	// sizeof = 1
};

// src/public/vscript/ivscript.h:663
class CScriptDestructor<AI_ResponseScriptWrapper> {
	void Destruct(void *);

	// sizeof = 1
};

// src/public/vscript/ivscript.h:663
class CScriptDestructor<CScriptNativeOutputs> {
	void Destruct(void *);

	// sizeof = 1
};

// src/public/vscript/ivscript.h:1116
class CScriptAccessorT<CDefScriptAccessorBase, true> : public CDefScriptAccessorBase {
public:

protected:

	HSCRIPT m_hScope;  // +0x0
	CScriptAccessorT();
	~CScriptAccessorT();
	IScriptVM * GetVM();
	bool IsInitialized();
	void Init(HSCRIPT);
	void Term();
	void Nullify();
	HSCRIPT operator HSCRIPT();
	HSCRIPT AsHScript();
	HSCRIPT Get();
	bool ValueExists(const char *);
	bool SetValue(const char *, const ScriptVariant_t &);
	bool GetValue(const char *, ScriptVariant_t *);
	void ReleaseValue(ScriptVariant_t &);
	bool ClearValue(const char *);
	HSCRIPT LookupFunction(const char *, bool);
	void ReleaseFunction(HSCRIPT);
	bool FunctionExists(const char *);
	bool ShouldUseScope();
	ScriptStatus_t Call(HSCRIPT, ScriptVariant_t *);
	ScriptStatus_t ExecuteFunction(HSCRIPT, ScriptVariant_t *, int, ScriptVariant_t *);
	ScriptStatus_t Call(const char *, ScriptVariant_t *);

	// sizeof = 8
};

// src/public/vscript/ivscript.h:1116
class CScriptAccessorT<CEntityFrameScriptAccessorBase, false> : public CEntityFrameScriptAccessorBase {
public:

protected:

	HSCRIPT m_hScope;  // +0x0
	CScriptAccessorT();
	~CScriptAccessorT();
	IScriptVM * GetVM();
	bool IsInitialized();
	void Init(HSCRIPT);
	void Term();
	void Nullify();
	HSCRIPT operator HSCRIPT();
	HSCRIPT AsHScript();
	HSCRIPT Get();
	bool ValueExists(const char *);
	bool SetValue(const char *, const ScriptVariant_t &);
	bool GetValue(const char *, ScriptVariant_t *);
	void ReleaseValue(ScriptVariant_t &);
	bool ClearValue(const char *);
	HSCRIPT LookupFunction(const char *, bool);
	void ReleaseFunction(HSCRIPT);
	bool FunctionExists(const char *);
	bool ShouldUseScope();
	ScriptStatus_t Call(HSCRIPT, ScriptVariant_t *);
	ScriptStatus_t ExecuteFunction(HSCRIPT, ScriptVariant_t *, int, ScriptVariant_t *);
	ScriptStatus_t Call(const char *, ScriptVariant_t *);

	// sizeof = 8
};

// src/public/vscript/ivscript.h:1116
class CScriptAccessorT<CEntityFrameScriptAccessorBase, true> : public CEntityFrameScriptAccessorBase {
public:

protected:

	HSCRIPT m_hScope;  // +0x0
	CScriptAccessorT();
	~CScriptAccessorT();
	IScriptVM * GetVM();
	bool IsInitialized();
	void Init(HSCRIPT);
	void Term();
	void Nullify();
	HSCRIPT operator HSCRIPT();
	HSCRIPT AsHScript();
	HSCRIPT Get();
	bool ValueExists(const char *);
	bool SetValue(const char *, const ScriptVariant_t &);
	bool GetValue(const char *, ScriptVariant_t *);
	void ReleaseValue(ScriptVariant_t &);
	bool ClearValue(const char *);
	HSCRIPT LookupFunction(const char *, bool);
	void ReleaseFunction(HSCRIPT);
	bool FunctionExists(const char *);
	bool ShouldUseScope();
	ScriptStatus_t Call(HSCRIPT, ScriptVariant_t *);
	ScriptStatus_t ExecuteFunction(HSCRIPT, ScriptVariant_t *, int, ScriptVariant_t *);
	ScriptStatus_t Call(const char *, ScriptVariant_t *);

	// sizeof = 8
};

// src/public/vscript/ivscript.h:1509
class CScriptScopeT<CDefScriptAccessorBase, true> : public CScriptAccessorT<CDefScriptAccessorBase, true> {
public:

protected:

	int m_flags;  // +0x10
	CScriptScopeT();
	~CScriptScopeT();
	IScriptVM * GetVM();
	bool Init(const char *, HSCRIPT);
	bool Init(HSCRIPT, int);
	bool InitGlobal();
	void Term();
	void Nullify();
	void InvalidateCachedValues();
	ScriptStatus_t Run(HSCRIPT);
	ScriptStatus_t Run(const char *, const char *);
	ScriptStatus_t Run(const unsigned char *, const char *);

	// sizeof = 24
};

// src/public/vscript/ivscript.h:1509
class CScriptScopeT<CDefScriptAccessorBase, true> : public CScriptAccessorT<CDefScriptAccessorBase, true> {
	enum Flags_t {
		DONT_RELEASE = 0x1,
		DONT_ADDREF = 0x2,
	};

public:

protected:

	int m_flags;  // +0x10
	CScriptScopeT();
	~CScriptScopeT();
	IScriptVM * GetVM();
	bool Init(const char *, HSCRIPT);
	bool Init(HSCRIPT, int);
	bool InitGlobal();
	void Term();
	void Nullify();
	void InvalidateCachedValues();
	ScriptStatus_t Run(HSCRIPT);
	ScriptStatus_t Run(const char *, const char *);
	ScriptStatus_t Run(const unsigned char *, const char *);

	// sizeof = 24
};

// src/public/vscript/ivscript.h:1509
class CScriptScopeT<CVScriptGameSystem::CScriptScopeBase, true> : public CScriptAccessorT<CVScriptGameSystem::CScriptScopeBase, true> {
	enum Flags_t {
		DONT_RELEASE = 0x1,
		DONT_ADDREF = 0x2,
	};

public:

protected:

	int m_flags;  // +0x10
	CScriptScopeT();
	~CScriptScopeT();
	IScriptVM * GetVM();
	bool Init(const char *, HSCRIPT);
	bool Init(HSCRIPT, int);
	bool InitGlobal();
	void Term();
	void Nullify();
	void InvalidateCachedValues();
	ScriptStatus_t Run(HSCRIPT);
	ScriptStatus_t Run(const char *, const char *);
	ScriptStatus_t Run(const unsigned char *, const char *);

	// sizeof = 24
};

// CScriptAccessorT: 1 more instantiations (full list in INDEX.tsv)
//   CScriptAccessorT<CVScriptGameSystem::CScriptScopeBase, true>
