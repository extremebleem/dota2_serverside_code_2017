// Reconstructed from DWARF by pahole; not original source.

// src/public/appframework/iapplication.h:43
class IUGCAddonPathResolver {
	int ()() * * _vptr.IUGCAddonPathResolver;  // +0x0
	IUGCAddonPathResolver(IUGCAddonPathResolver &);
	IUGCAddonPathResolver(const IUGCAddonPathResolver &);
	~IUGCAddonPathResolver();
	IUGCAddonPathResolver();
	virtual bool GetFullAddonPathFromAddonName(const char *, char *, uint32);

	// vtable[0] GetFullAddonPathFromAddonName
	// sizeof = 8
};

// src/public/appframework/iapplication.h:72
class IApplication : public IAppSystem {
public:

	IApplication();
	virtual ~IApplication();
	virtual IAppSystem * AddSystem(IAppSystem *, const char *);
	virtual IAppSystem * AddSystem(const char *, const char *);
	virtual IAppSystem * AddSystem(PlatModule_t, const char *);
	virtual void RemoveSystem(IAppSystem *);
	virtual bool AddSystems(int, const AppSystemInfo_t *);
	virtual void * FindSystem(const char *);
	virtual KeyValues * GetGameInfo();
	virtual const char * GetLanguage(LanguageType_t);
	virtual bool IsInToolsMode();
	virtual const char * GetModPath();
	virtual bool IsConsoleApp();
	virtual bool IsInDeveloperMode();
	virtual const char * GetExecutablePath();
	virtual const char * GetModGameSubdir();
	virtual KeyValues * GetApplicationInfo();
	virtual void * GetAppInstance();
	virtual const char * GetContentPath();
	virtual CUtlString GetConsoleLogFilename();
	virtual void ChangeLogFileSuffix(const char *);
	virtual IAppSystem * AddSystemDontLoadStartupManifests(const char *, const char *);
	virtual AppGameMode_t GetGameMode();
	bool IsDedicatedServer();
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
	virtual void SetInitializationPhase(int);
	virtual int GetInitializationPhase();
	virtual const char * GetRestrictAddonsTo();
	virtual void SetAllowAddonChanges(bool);
	virtual void SetUGCAddonPathResolver(IUGCAddonPathResolver *);
	virtual CUtlString GetAddonNameFromID(uint64);
	virtual uint64 GetIDFromAddonName(const char *);
	virtual CUtlString GetFullAddonPathFromAddonName(const char *);
	virtual void GetAvailableAddonMaps(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, const char *);
	virtual void LoadStartupManifestGroup(const char *);

	// vtable[13] AddSystem
	// vtable[14] AddSystem
	// vtable[15] AddSystem
	// vtable[16] RemoveSystem
	// vtable[17] AddSystems
	// vtable[18] FindSystem
	// vtable[19] GetGameInfo
	// vtable[20] GetLanguage
	// vtable[21] IsInToolsMode
	// vtable[22] GetModPath
	// vtable[23] IsConsoleApp
	// vtable[24] IsInDeveloperMode
	// vtable[25] GetExecutablePath
	// vtable[26] GetModGameSubdir
	// vtable[27] GetApplicationInfo
	// vtable[28] GetAppInstance
	// vtable[29] GetContentPath
	// vtable[30] GetConsoleLogFilename
	// vtable[31] ChangeLogFileSuffix
	// vtable[32] AddSystemDontLoadStartupManifests
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
	// vtable[46] SetInitializationPhase
	// vtable[47] GetInitializationPhase
	// vtable[48] GetRestrictAddonsTo
	// vtable[49] SetAllowAddonChanges
	// vtable[50] SetUGCAddonPathResolver
	// vtable[51] GetAddonNameFromID
	// vtable[52] GetIDFromAddonName
	// vtable[53] GetFullAddonPathFromAddonName
	// vtable[54] GetAvailableAddonMaps
	// vtable[55] LoadStartupManifestGroup
	// sizeof = 8
};
