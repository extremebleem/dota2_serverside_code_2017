// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/ivscriptgamesystem.h:18
class IVScriptGameSystem {
	int ()() * * _vptr.IVScriptGameSystem;  // +0x0
	IVScriptGameSystem(IVScriptGameSystem &);
	IVScriptGameSystem(const IVScriptGameSystem &);
	~IVScriptGameSystem();
	IVScriptGameSystem();
	virtual void VScriptInit();
	virtual void VScriptTerm();
	virtual bool IsVScriptInitialized();
	virtual bool IsEntityCreationAllowedInScripts();
	virtual IScriptVM * GetVM();
	virtual HSCRIPT CompileScript(const char *, bool);
	virtual bool RunScript(const char *, HSCRIPT, bool);
	virtual bool RunScript(const char *, bool);
	virtual bool RunScript(const char *);
	virtual HSCRIPT FetchCachedScriptScope(const char *);
	virtual void ClearCachedScripts();
	virtual void ReloadCachedScripts();
	virtual void RegisterGameEventListenersInScope(HSCRIPT);
	virtual void UnregisterGameEventListenersInScope(HSCRIPT);
	virtual void ClearScriptGameEventListeners();

	// vtable[0] VScriptInit
	// vtable[1] VScriptTerm
	// vtable[2] IsVScriptInitialized
	// vtable[3] IsEntityCreationAllowedInScripts
	// vtable[4] GetVM
	// vtable[5] CompileScript
	// vtable[6] RunScript
	// vtable[7] RunScript
	// vtable[8] RunScript
	// vtable[9] FetchCachedScriptScope
	// vtable[10] ClearCachedScripts
	// vtable[11] ReloadCachedScripts
	// vtable[12] RegisterGameEventListenersInScope
	// vtable[13] UnregisterGameEventListenersInScope
	// vtable[14] ClearScriptGameEventListeners
	// sizeof = 8
};
