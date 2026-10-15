// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_server_custom_game_cache.h:31
class CDOTACustomGameCache : public CAutoGameSystem, public IUGCAddonPathResolver {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	typedef CAutoGameSystem BaseClass;
	CDOTACustomGameCache(const CDOTACustomGameCache &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDOTACustomGameCache *);
	CDOTACustomGameCache();
	virtual ~CDOTACustomGameCache();
	virtual bool Init();
	virtual void Shutdown();
	virtual bool GetFullAddonPathFromAddonName(const char *, char *, uint32);
	bool IsBusy();
	void StartInstallingUGC(PublishedFileId_t, uint32, uint64, function<bool(const CMsgCustomGameInstallStatus&)>);

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[0] Init
	// vtable[2] Shutdown
	// vtable[40] GetFullAddonPathFromAddonName
	// sizeof = 40
};
