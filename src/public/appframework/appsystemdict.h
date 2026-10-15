// Reconstructed from DWARF by pahole; not original source.

// src/public/appframework/appsystemdict.h:71
class CAppSystemDict {
	struct AppSystemRequest_t {
		const char * m_pRequestingModuleName;  // +0x0
		const char * m_pRequestingInterfaceName;  // +0x8
		const char * m_pModuleName;  // +0x10
		const char * m_pInterfaceName;  // +0x18
		PlatModule_t m_hModule;  // +0x28
		CreateInterfaceFn m_pModuleFactory;  // +0x30

		// sizeof = 56
	};

	struct ModuleInfo_t {
		char * m_pModuleName;  // +0x0
		PlatModule_t m_hModule;  // +0x8
		int m_nRefCount;  // +0x10

		// sizeof = 24
	};

	struct AppSystem_t {
		const char * m_pModuleName;  // +0x0
		const char * m_pInterfaceName;  // +0x8
		PlatModule_t m_hModule;  // +0x18
		int m_nPhase;  // +0x20
		bool m_bInvisible;  // +0x24

		// sizeof = 40
	};

	struct InterfaceInfo_t {
		const char * m_pModuleName;  // +0x8
		const char * m_pInterfaceName;  // +0x10
		PlatModule_t m_hModule;  // +0x20

		InterfaceInfo_t();
		~InterfaceInfo_t();

		// sizeof = 120
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	int ()() * * _vptr.CAppSystemDict;  // +0x0
private:

	CUtlVector<void* (*)(char const*, int*), CUtlMemory<void* (*)(char const*, int*), int> > m_NonAppSystemFactories;  // +0x38
	int m_nExpectedShutdownLoggingStateIndex;  // +0xd0

	void * m_hInstance;  // +0xf0
	bool m_bIsConsoleApp;  // +0xf8
	bool m_bInToolsMode;  // +0xf9
	bool m_bIsInDeveloperMode;  // +0xfa
	bool m_bIsGameApp;  // +0xfb
	bool m_bIsDedicatedServer;  // +0xfc

	bool m_bInitialized;  // +0x138
	bool m_bSuppressCOMInitialization;  // +0x139

	int m_nStartupManifestsDisabledCount;  // +0x13c
	int m_nAppSystemPhase;  // +0x140
	bool m_bIsRetail;  // +0x144
	bool m_bIsLowViolence;  // +0x145
	bool m_bInvokedPreShutdown;  // +0x146
	typedef CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable> LibraryDependencies_t;
	CAppSystemDict(const CAppSystemDict &);
	CAppSystemDict(bool, void *, void *, int, bool, bool);
	virtual ~CAppSystemDict();
	void SetModuleSearchPath(const char *);
	void SetInitializationPhase(int);
	int GetInitializationPhase();
	IAppSystem * AddSystem(IAppSystem *, const char *);
	IAppSystem * AddSystem(CreateInterfaceFn, const char *);
	IAppSystem * AddSystem(const char *, const char *, ErrorResponse_t);
	IAppSystem * AddSystem(PlatModule_t, const char *, ErrorResponse_t);
	void RemoveSystem(IAppSystem *);
	IAppSystem * ReplaceSystem(IAppSystem *, const char *, bool);
	bool AddSystems(int, const AppSystemInfo_t *);
	void AddNonAppSystemFactory(CreateInterfaceFn);
	void RemoveNonAppSystemFactory(CreateInterfaceFn);
	void * FindSystem(const char *);
	void ReconnectSystems(const char *);
	CreateInterfaceFn GetFactory();
	virtual bool Init();
	void PreShutdown();
	void Shutdown(int);
	bool InitSDL(uint32);
	void ShutdownSDL();
	bool IsConsoleApp();
	bool IsGameApp();
	void SetDedicatedServer(bool);
	bool IsDedicatedServer();
	KeyValues * GetGameInfo();
	const char * GetModPath();
	const char * GetContentPath();
	const char * GetModGameSubdir();
	const char * GetLanguage(LanguageType_t);
	void SetLanguage(LanguageType_t, const char *);
	void SetInToolsMode();
	bool IsInToolsMode();
	bool IsInDeveloperMode();
	bool IsInVRMode();
	PlatWindow_t CreateAppWindow(const char *, int, int, int, int, int);
	const char * GetExecutablePath();
	KeyValues * GetApplicationInfo();
	void * GetAppInstance();
	void SuppressCOMInitialization();
	virtual CUtlString GetConsoleLogFilename();
	virtual void ChangeLogFileSuffix(const char *);
	void SetStartupManifestsDisabled(bool);
	bool IsRunningOnCustomerMachine();
	bool IsLowViolence();
	void SetLowViolence(bool);
	AppSystemBuildType_t GetBuildType();

protected:

	virtual IApplication * CreateApplication();
	virtual void OnAppSystemLoaded();
	void SetGameInfo(KeyValues *, const char *);
	void SetInDeveloperMode(bool);
	bool AreStartupManifestsDisabled();

private:

	void UnloadAllModules();
	void RemoveAllSystems();
	bool LoadSystemAndDependencies(CUtlVector<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> > &, ErrorResponse_t);
	void ComputeDependencies(LibraryDependencies_t &);
	void SortDependentLibraries(LibraryDependencies_t &, CUtlVector<int, CUtlMemory<int, int> > *);
	bool DictSortLessFunc(LibraryDependencies_t &, const int &, const int &);
	void ReportStartupFailure(int, int);
	PlatModule_t LoadModuleInPath(const char *, int *);
	void UnloadModule(PlatModule_t);
	void FreeSystemEntry(AppSystem_t *);
	void RebuildSystemDictionary();
	void GenerateModuleFullPath(const char *, const char *, char *, int);

	// vtable[2] Init
	// vtable[3] GetConsoleLogFilename
	// vtable[4] ChangeLogFileSuffix
	// vtable[5] CreateApplication
	// vtable[6] OnAppSystemLoaded
	// sizeof = 328
};
