// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/vscriptgamesystem.h:29
class CBaseEntityScriptInstanceHelper : public IScriptInstanceHelper {
public:

	CBaseEntityScriptInstanceHelper(CBaseEntityScriptInstanceHelper &);
	CBaseEntityScriptInstanceHelper(const CBaseEntityScriptInstanceHelper &);
	CBaseEntityScriptInstanceHelper();

private:

	virtual bool ToString(void *, char *, int);

	// vtable[1] ToString
	// sizeof = 8
};

// src/game/shared/vscriptgamesystem.h:41
class CVScriptGameSystem : public IGameSystem, public IVScriptGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

	class CScriptScopeBase {
		IScriptVM * GetVM();
		CScriptScopeBase();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

	CUtlMap<CUtlSymbol, HSCRIPT__*, short unsigned int, bool (*)(const CUtlSymbol&, const CUtlSymbol&)> m_ScriptScopeCache;  // +0x38
	CUtlMap<CUtlSymbol, HSCRIPT__*, short unsigned int, bool (*)(const CUtlSymbol&, const CUtlSymbol&)> m_CompiledScriptCache;  // +0x60
	bool m_bAllowEntityCreationInScripts;  // +0x88
	bool m_bVscriptServerInitialized;  // +0x89
	typedef IGameSystem BaseClass;
	CVScriptGameSystem(CVScriptGameSystem &);
	CVScriptGameSystem(const CVScriptGameSystem &);
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CVScriptGameSystem *);
	int GetPriority();
	virtual void OnServerGamePostSimulate(const EventServerGamePostSimulate_t &);
	virtual void FrameBoundary(const EventGameFrameBoundary_t &);
	virtual void BuildGameSessionManifest(const EventBuildGameSessionManifest_t &);
	virtual void GameInit(const EventGameInit_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);
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
	CVScriptGameSystem();
	void InitVM();
	void DestroyVM();
	virtual ScriptLanguage_t GetScriptLanguage();
	virtual void InstallScriptBindings();
	virtual void RemoveScriptBindings();
	virtual ~CVScriptGameSystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[27] OnServerGamePostSimulate
	// vtable[29] FrameBoundary
	// vtable[7] BuildGameSessionManifest
	// vtable[3] GameInit
	// vtable[4] GameShutdown
	// vtable[40] VScriptInit
	// vtable[41] VScriptTerm
	// vtable[42] IsVScriptInitialized
	// vtable[43] IsEntityCreationAllowedInScripts
	// vtable[44] GetVM
	// vtable[45] CompileScript
	// vtable[46] RunScript
	// vtable[47] RunScript
	// vtable[48] RunScript
	// vtable[49] FetchCachedScriptScope
	// vtable[50] ClearCachedScripts
	// vtable[51] ReloadCachedScripts
	// vtable[52] RegisterGameEventListenersInScope
	// vtable[53] UnregisterGameEventListenersInScope
	// vtable[54] ClearScriptGameEventListeners
	// vtable[55] GetScriptLanguage
	// vtable[56] InstallScriptBindings
	// vtable[57] RemoveScriptBindings
	// sizeof = 144
};
