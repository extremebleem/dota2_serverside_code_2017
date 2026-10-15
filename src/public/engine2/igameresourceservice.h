// Reconstructed from DWARF by pahole; not original source.

// src/public/engine2/igameresourceservice.h:28
struct HGameResourceManifest__ {
	int unused;  // +0x0

	// sizeof = 4
};

// src/public/engine2/igameresourceservice.h:35
class IGameResourceManifestLoadCompletionCallback {
	int ()() * * _vptr.IGameResourceManifestLoadCompletionCallback;  // +0x0
	IGameResourceManifestLoadCompletionCallback(IGameResourceManifestLoadCompletionCallback &);
	IGameResourceManifestLoadCompletionCallback(const IGameResourceManifestLoadCompletionCallback &);
	IGameResourceManifestLoadCompletionCallback();
	virtual void DeleteThis();
	virtual void OnGameResourceManifestLoaded(HGameResourceManifest, int, ResourceHandle_t *);

	// vtable[0] DeleteThis
	// vtable[1] OnGameResourceManifestLoaded
	// sizeof = 8
};

// src/public/engine2/igameresourceservice.h:153
class CGameResourceManifestPrerequisite : public IPrerequisite {
public:

protected:

	virtual PrerequisiteStatus_t GetPrerequisiteStatus(float64);
	virtual const char * GetName();
	virtual void OnStatusFinished(PrerequisiteStatus_t);
	void BuildCompressedResourceManifest(IGameResourceService *, CCompressedResourceManifest *);
	CGameResourceManifestPrerequisite(IGameResourceService *);
	virtual ~CGameResourceManifestPrerequisite();
	void Init(IGameResourceService *);
	HGameResourceManifest LoadGameResourceManifestGroup(const char *, ResourceManifestLoadBehavior_t, const char *, ResourceManifestLoadPriority_t);
	HGameResourceManifest LoadGameResourceManifestNamed(const char *, ResourceManifestLoadBehavior_t, const char *, ResourceManifestLoadPriority_t);
	void AddDependentManifest(HGameResourceManifest);
	void ReleaseOwnershipOfManifest(HGameResourceManifest);
	void TransferOwnershipOfManifestsTo(CGameResourceManifestPrerequisite *);
	void BlockUntilAllManifestsLoaded();
	void RemoveAllManifests();

	// vtable[4] GetPrerequisiteStatus
	// vtable[5] GetName
	// vtable[7] OnStatusFinished
	// sizeof = 48
};
