// Reconstructed from DWARF by pahole; not original source.

// src/public/appframework/tier1app.h:29
class CTier1Application : public CTier1AppSystem<IApplication, 0> {
public:

protected:

	CTier1Application(CTier1Application &);
	CTier1Application(const CTier1Application &);
	CTier1Application(CAppSystemDict *);
	virtual const AppSystemInfo_t * GetDependencies();
	virtual void SetInitializationPhase(int);
	virtual int GetInitializationPhase();
	virtual IAppSystem * AddSystem(IAppSystem *, const char *);
	virtual IAppSystem * AddSystemDontLoadStartupManifests(const char *, const char *);
	virtual void LoadStartupManifestGroup(const char *);
	virtual IAppSystem * AddSystem(const char *, const char *);
	virtual IAppSystem * AddSystem(PlatModule_t, const char *);
	virtual bool AddSystems(int, const AppSystemInfo_t *);
	virtual void * FindSystem(const char *);
	virtual void RemoveSystem(IAppSystem *);
	virtual KeyValues * GetGameInfo();
	virtual const char * GetLanguage(LanguageType_t);
	virtual bool IsInToolsMode();
	virtual bool IsInDeveloperMode();
	virtual const char * GetModPath();
	virtual const char * GetContentPath();
	virtual const char * GetModGameSubdir();
	virtual bool IsConsoleApp();
	virtual const char * GetExecutablePath();
	virtual KeyValues * GetApplicationInfo();
	virtual void * GetAppInstance();
	virtual CUtlString GetConsoleLogFilename();
	virtual void ChangeLogFileSuffix(const char *);
	virtual AppGameMode_t GetGameMode();
	virtual void MountAddon(const char *);
	virtual void UnmountAddon(const char *);
	virtual void GetMountedAddons(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);
	virtual int GetMountedAddons(const char * *, int);
	virtual bool GetAddonsDirectory(char *, int);
	virtual bool GetAddonsContentDirectory(char *, int);
	virtual bool IsFileInAddon(const char *);
	virtual void GetAvailableAddons(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, int);
	virtual bool GetAddonInfo(KeyValues *, const char *);
	virtual bool IsRunningOnCustomerMachine();
	virtual bool IsLowViolence();
	virtual void SetLowViolence(bool);
	virtual const char * GetRestrictAddonsTo();
	virtual void SetAllowAddonChanges(bool);
	virtual void SetUGCAddonPathResolver(IUGCAddonPathResolver *);
	virtual CUtlString GetAddonNameFromID(uint64);
	virtual uint64 GetIDFromAddonName(const char *);
	virtual CUtlString GetFullAddonPathFromAddonName(const char *);
	virtual void GetAvailableAddonMaps(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, const char *);
	virtual ~CTier1Application();

	// vtable[6] GetDependencies
	// vtable[46] SetInitializationPhase
	// vtable[47] GetInitializationPhase
	// vtable[13] AddSystem
	// vtable[32] AddSystemDontLoadStartupManifests
	// vtable[55] LoadStartupManifestGroup
	// vtable[14] AddSystem
	// vtable[15] AddSystem
	// vtable[17] AddSystems
	// vtable[18] FindSystem
	// vtable[16] RemoveSystem
	// vtable[19] GetGameInfo
	// vtable[20] GetLanguage
	// vtable[21] IsInToolsMode
	// vtable[24] IsInDeveloperMode
	// vtable[22] GetModPath
	// vtable[29] GetContentPath
	// vtable[26] GetModGameSubdir
	// vtable[23] IsConsoleApp
	// vtable[25] GetExecutablePath
	// vtable[27] GetApplicationInfo
	// vtable[28] GetAppInstance
	// vtable[30] GetConsoleLogFilename
	// vtable[31] ChangeLogFileSuffix
	// vtable[33] GetGameMode
	// vtable[34] MountAddon
	// vtable[35] UnmountAddon
	// vtable[36] GetMountedAddons
	// vtable[37] GetMountedAddons
	// vtable[38] GetAddonsDirectory
	// vtable[39] GetAddonsContentDirectory
	// vtable[40] IsFileInAddon
	// vtable[41] GetAvailableAddons
	// vtable[42] GetAddonInfo
	// vtable[43] IsRunningOnCustomerMachine
	// vtable[44] IsLowViolence
	// vtable[45] SetLowViolence
	// vtable[48] GetRestrictAddonsTo
	// vtable[49] SetAllowAddonChanges
	// vtable[50] SetUGCAddonPathResolver
	// vtable[51] GetAddonNameFromID
	// vtable[52] GetIDFromAddonName
	// vtable[53] GetFullAddonPathFromAddonName
	// vtable[54] GetAvailableAddonMaps
	// sizeof = 16
};

// src/public/appframework/tier1app.h:270
class CTier1AppSystemDict : public CAppSystemDict {
public:

private:

	bool m_bNoExeCheck;  // +0x147
	CTier1AppSystemDict(CTier1AppSystemDict &);
	CTier1AppSystemDict(const CTier1AppSystemDict &);
	CTier1AppSystemDict(bool, void *, void *, int, bool, bool);
	virtual bool Init();
	void SetModPath(const char *);
	void SetModFromFileName(const char *, bool);
	void DisableModPathCheck();
	bool ComputeModPathFromFileName(const char *, char *, int);
	virtual ~CTier1AppSystemDict();

	// vtable[2] Init
	// sizeof = 328
};
