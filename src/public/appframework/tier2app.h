// Reconstructed from DWARF by pahole; not original source.

// src/public/appframework/tier2app.h:57
class CTier2Application : public CTier1Application {
public:

protected:

	int m_nAppTier2LibraryConnects;  // +0x10
	CTier2Application(CTier2Application &);
	CTier2Application(const CTier2Application &);
	CTier2Application(CAppSystemDict *);
	virtual bool Connect(CreateInterfaceFn);
	virtual void Reconnect(CreateInterfaceFn, const char *);
	virtual void Disconnect();
	virtual void MountAddon(const char *);
	virtual void UnmountAddon(const char *);
	virtual void GetMountedAddons(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);
	virtual int GetMountedAddons(const char * *, int);
	virtual bool GetAddonsDirectory(char *, int);
	virtual bool GetAddonsContentDirectory(char *, int);
	virtual bool IsFileInAddon(const char *);
	virtual void GetAvailableAddons(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, int);
	virtual bool GetAddonInfo(KeyValues *, const char *);
	virtual const char * GetRestrictAddonsTo();
	virtual void SetAllowAddonChanges(bool);
	virtual void SetUGCAddonPathResolver(IUGCAddonPathResolver *);
	virtual CUtlString GetAddonNameFromID(uint64);
	virtual uint64 GetIDFromAddonName(const char *);
	virtual CUtlString GetFullAddonPathFromAddonName(const char *);
	virtual void GetAvailableAddonMaps(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, const char *);
	virtual void LoadStartupManifestGroup(const char *);
	virtual ~CTier2Application();

	// vtable[0] Connect
	// vtable[8] Reconnect
	// vtable[1] Disconnect
	// vtable[34] MountAddon
	// vtable[35] UnmountAddon
	// vtable[36] GetMountedAddons
	// vtable[37] GetMountedAddons
	// vtable[38] GetAddonsDirectory
	// vtable[39] GetAddonsContentDirectory
	// vtable[40] IsFileInAddon
	// vtable[41] GetAvailableAddons
	// vtable[42] GetAddonInfo
	// vtable[48] GetRestrictAddonsTo
	// vtable[49] SetAllowAddonChanges
	// vtable[50] SetUGCAddonPathResolver
	// vtable[51] GetAddonNameFromID
	// vtable[52] GetIDFromAddonName
	// vtable[53] GetFullAddonPathFromAddonName
	// vtable[54] GetAvailableAddonMaps
	// vtable[55] LoadStartupManifestGroup
	// sizeof = 24
};

// src/public/appframework/tier2app.h:93
class CTier2AppSystemDict : public CTier1AppSystemDict {
public:

private:

	int m_nStartupManifestSuppressionCount;  // +0x1d0
	bool m_bStaleStartupResources;  // +0x1d4
	bool m_bUseModPathBinDir;  // +0x1d5
	bool m_bLibrariesConnected;  // +0x1d6
	bool m_bEnsureToolStartupManifests;  // +0x1d7
	bool m_bEnsureVRStartupManifests;  // +0x1d8
	bool m_bEnsureGameStartupManifests;  // +0x1d9
	bool m_bEnsureConsoleStartupManifests;  // +0x1da
	bool m_bAddonsOnRestricted;  // +0x1db
	CInterlockedInt m_nAllowAddonChanges;  // +0x1dc
	bool m_bLogToFile;  // +0x200

	LoggingFileHandle_t m_bLogFileHandle;  // +0x204
	CTier2AppSystemDict(const CTier2AppSystemDict &);
	CTier2AppSystemDict(bool, void *, void *, int, bool, bool);
	virtual ~CTier2AppSystemDict();
	virtual bool Init();
	void SuppressStartupManifestLoad(bool);
	void UseModPathBinDir(bool);
	void LoadStartupManifestGroup(const char *);
	void EnsureToolStartupManifests(bool);
	void EnsureVRStartupManifests(bool);
	void EnsureGameStartupManifests(bool);
	void EnsureConsoleStartupManifests(bool);
	void RestrictAddonsTo(const char *);
	const char * GetRestrictAddonsTo();
	void SetAllowAddonChanges(bool);
	void MountAddon(const char *);
	void UnmountAddon(const char *);
	void UnmountAllAddons();
	void GetMountedAddons(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);
	int GetMountedAddons(const char * *, int);
	bool GetAddonsDirectory(char *, int);
	bool GetAddonsContentDirectory(char *, int);
	void GetAvailableAddons(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, int);
	bool GetAddonInfo(KeyValues *, const char *);
	bool IsAddonMounted(const char *);
	bool AddSearchPathsForAddonsFromFileName(const char *);
	virtual CUtlString GetConsoleLogFilename();
	virtual void ChangeLogFileSuffix(const char *);
	bool IsFileInAddon(const char *);
	void SetUGCAddonPathResolver(IUGCAddonPathResolver *);
	CUtlString GetAddonNameFromID(uint64);
	uint64 GetIDFromAddonName(const char *);
	CUtlString GetFullAddonPathFromAddonName(const char *);
	void GetAvailableAddonMaps(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, const char *);

protected:

	virtual IApplication * CreateApplication();
	virtual void OnAppSystemLoaded();
	bool ResetFileSystemPaths();

private:

	void LoadStartupManifest();
	void VerifySchemaBindingConsistency();
	bool SetupFileSystemPaths();
	void InitLoggingToFile();
	void AddGameSearchPath(const char *, const char *, bool);
	void RemoveAddonSearchPaths(const char *, const char *, const char *);
	bool IsUGCAddonName(const char *);
	void GetAvailableAddonMaps_(KeyValues *, const char *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);

	// vtable[2] Init
	// vtable[3] GetConsoleLogFilename
	// vtable[4] ChangeLogFileSuffix
	// vtable[5] CreateApplication
	// vtable[6] OnAppSystemLoaded
	// sizeof = 1688
};
