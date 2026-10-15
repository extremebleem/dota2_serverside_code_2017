// Reconstructed from DWARF by pahole; not original source.

// src/public/engine2/iengineservicemgr.h:44
struct EngineServiceDependencies_t {
	const char * m_pServiceName;  // +0x0
	uint32 m_nFlags;  // +0x8

	// sizeof = 16
};

// src/public/engine2/iengineservicemgr.h:81
class IEngineService : public IAppSystem {
public:

	IEngineService(const IEngineService &);
	IEngineService();
	virtual const EngineServiceDependencies_t * GetServiceDependencies();
	virtual const char * GetName();
	virtual EngineServiceActivateType_t ShouldActivate(const char *);
	virtual void OnLoopActivate(const EngineLoopState_t &, CEventDispatcher<CEventIDManager_Default> *);
	virtual void OnLoopDeactivate(const EngineLoopState_t &, CEventDispatcher<CEventIDManager_Default> *);
	virtual bool IsActive();

protected:

	virtual void SetActive(bool);
	virtual void SetName(const char *);
	virtual void RegisterEventMap(CEventDispatcher<CEventIDManager_Default> *, EventMapRegistrationType_t);
	virtual UtlSymId_t GetServiceIndex();
	virtual void SetServiceIndex(UtlSymId_t);
	virtual ~IEngineService();

	// vtable[11] GetServiceDependencies
	// vtable[12] GetName
	// vtable[13] ShouldActivate
	// vtable[14] OnLoopActivate
	// vtable[15] OnLoopDeactivate
	// vtable[16] IsActive
	// vtable[17] SetActive
	// vtable[18] SetName
	// vtable[19] RegisterEventMap
	// vtable[20] GetServiceIndex
	// vtable[21] SetServiceIndex
	// sizeof = 8
};

// src/public/engine2/iengineservicemgr.h:219
class CResourceManifestPrerequisite : public IPrerequisite {
public:

private:

	CResourceManifestPrerequisite(const CResourceManifestPrerequisite &);
	CResourceManifestPrerequisite();
	virtual PrerequisiteStatus_t GetPrerequisiteStatus(float64);
	virtual const char * GetName();
	virtual ~CResourceManifestPrerequisite();
	void LoadResourceManifestFile(const char *, ResourceManifestLoadBehavior_t, const char *);
	void LoadResourceManifestGroup(const char *, ResourceManifestLoadBehavior_t, const char *);
	void LoadResourceManifestNamed(const char *, ResourceManifestLoadBehavior_t, const char *);
	void CreateResourceManifest(const ResourceManifestCreationInfo_t &);
	void AddDependentManifest(HResourceManifest);
	void ReleaseOwnershipOfManifest(HResourceManifest);
	void RemoveAllManifests();

	// vtable[4] GetPrerequisiteStatus
	// vtable[5] GetName
	// sizeof = 40
};

// src/public/engine2/iengineservicemgr.h:339
struct RHBackColorBuffer_t {
	HSceneViewRenderTarget m_hBackColorBuffer;  // +0x8

	// sizeof = 16
};

// src/public/engine2/iengineservicemgr.h:349
class ILoopMode {
	int ()() * * _vptr.ILoopMode;  // +0x0
	ILoopMode(ILoopMode &);
	ILoopMode(const ILoopMode &);
	ILoopMode();
	virtual bool LoopInit(KeyValues *, ILoopModePrerequisiteRegistry *);
	virtual void LoopShutdown();
	virtual void OnLoopActivate(const EngineLoopState_t &, CEventDispatcher<CEventIDManager_Default> *);
	virtual void OnLoopDeactivate(const EngineLoopState_t &, CEventDispatcher<CEventIDManager_Default> *);
	virtual void RegisterEventMap(CEventDispatcher<CEventIDManager_Default> *, EventMapRegistrationType_t);
	virtual InputHandlerResult_t HandleInputEvent(const InputEvent_t &, CSplitScreenSlot);
	virtual RHBackColorBuffer_t AddViewsToSceneSystem(const EngineLoopState_t &, float64, float64, const RenderViewport_t &, const RHBackColorBuffer_t &);

	// vtable[0] LoopInit
	// vtable[1] LoopShutdown
	// vtable[2] OnLoopActivate
	// vtable[3] OnLoopDeactivate
	// vtable[4] RegisterEventMap
	// vtable[5] HandleInputEvent
	// vtable[6] AddViewsToSceneSystem
	// sizeof = 8
};

// src/public/engine2/iengineservicemgr.h:402
class CLoopModeBase : public ILoopMode {
public:

protected:

	~CLoopModeBase();
	CLoopModeBase(CLoopModeBase &);
	CLoopModeBase(const CLoopModeBase &);
	CLoopModeBase();
	virtual bool LoopInit(KeyValues *, ILoopModePrerequisiteRegistry *);
	virtual void LoopShutdown();
	virtual void OnLoopActivate(const EngineLoopState_t &, CEventDispatcher<CEventIDManager_Default> *);
	virtual void OnLoopDeactivate(const EngineLoopState_t &, CEventDispatcher<CEventIDManager_Default> *);
	virtual void RegisterEventMap(CEventDispatcher<CEventIDManager_Default> *, EventMapRegistrationType_t);
	virtual InputHandlerResult_t HandleInputEvent(const InputEvent_t &, CSplitScreenSlot);
	virtual RHBackColorBuffer_t AddViewsToSceneSystem(const EngineLoopState_t &, float64, float64, const RenderViewport_t &, const RHBackColorBuffer_t &);
	bool StaticInit(ILoopType *);
	void StaticShutdown();

	// vtable[0] LoopInit
	// vtable[1] LoopShutdown
	// vtable[2] OnLoopActivate
	// vtable[3] OnLoopDeactivate
	// vtable[4] RegisterEventMap
	// vtable[5] HandleInputEvent
	// vtable[6] AddViewsToSceneSystem
	// sizeof = 16
};

// src/public/engine2/iengineservicemgr.h:452
class ILoopModeFactory {
	int ()() * * _vptr.ILoopModeFactory;  // +0x0
	ILoopModeFactory(ILoopModeFactory &);
	ILoopModeFactory(const ILoopModeFactory &);
	ILoopModeFactory();
	virtual bool Init(ILoopType *);
	virtual void Shutdown();
	virtual ILoopMode * CreateLoopMode();
	virtual void DestroyLoopMode(ILoopMode *);
	virtual LoopModeType_t GetLoopModeType();

	// vtable[0] Init
	// vtable[1] Shutdown
	// vtable[2] CreateLoopMode
	// vtable[3] DestroyLoopMode
	// vtable[4] GetLoopModeType
	// sizeof = 8
};

// src/public/engine2/iengineservicemgr.h:491
class IAddonListChangeNotify {
	int ()() * * _vptr.IAddonListChangeNotify;  // +0x0
	IAddonListChangeNotify(IAddonListChangeNotify &);
	IAddonListChangeNotify(const IAddonListChangeNotify &);
	~IAddonListChangeNotify();
	IAddonListChangeNotify();
	virtual void OnAddonListChanged();

	// vtable[0] OnAddonListChanged
	// sizeof = 8
};
