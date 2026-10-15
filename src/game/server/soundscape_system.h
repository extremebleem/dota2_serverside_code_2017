// Reconstructed from DWARF by pahole; not original source.

// src/game/server/soundscape_system.h:18
struct clusterSoundscapeList_t {
	short unsigned int soundscapeCount;  // +0x0
	short unsigned int firstSoundscape;  // +0x2

	// sizeof = 4
};

// src/game/server/soundscape_system.h:26
class CSoundscapeSystem : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

	struct SoundscapeInfo_t {
		SoundscapeInfo_t();
		~SoundscapeInfo_t();

		// sizeof = 32
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)> m_spawnGroupSoundscapes;  // +0x38
	int m_nGlobalSoundscapeCount;  // +0x68
	int m_nSpawnGroupSoundscapeCount;  // +0x6c
	SpawnGroupHandle_t m_nPVSClusterSpawnGroup;  // +0xb8
	int m_activeIndex;  // +0xbc
	bool m_bCacheDirty;  // +0xc0
	typedef CAutoGameSystem BaseClass;
	CSoundscapeSystem(CSoundscapeSystem &);
	CSoundscapeSystem(const CSoundscapeSystem &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CSoundscapeSystem *);
	CSoundscapeSystem();
	virtual void GameInit(const EventGameInit_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);
	virtual void FrameUpdatePreEntityThink(const EventServerPreEntityThink_t &);
	virtual void PreSpawnGroupLoad(const EventPreSpawnGroupLoad_t &);
	virtual void PostSpawnGroupUnload(const EventPostSpawnGroupUnload_t &);
	virtual void ActiveSpawnGroupChanged(const EventActiveSpawnGroupChanged_t &);
	int GetSoundscapeIndex(const char *);
	bool IsValidIndex(int);
	void AddSoundscapeEntity(CEnvSoundscape *);
	void RemoveSoundscapeEntity(CEnvSoundscape *);
	void PrintDebugInfo();
	void PrecacheSounds(SpawnGroupHandle_t, const char *, const CEntityPrecacheContext *);
	void ReloadSoundscapes();

private:

	void ReassignSoundscapeIndicesForEntities();
	void CacheClusterInfoForSpawnGroup(SpawnGroupHandle_t);
	void RefreshCacheClusters();
	void InitGlobalSoundscapes();
	void InitForSpawnGroup(SpawnGroupHandle_t);
	void AddSoundscapeFile(const char *, SoundscapeInfo_t *);
	void AddSoundscapeSounds(KeyValues *, int, SoundscapeInfo_t *);
	void CleanupSoundscape(SoundscapeInfo_t *);
	virtual ~CSoundscapeSystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[3] GameInit
	// vtable[4] GameShutdown
	// vtable[24] FrameUpdatePreEntityThink
	// vtable[14] PreSpawnGroupLoad
	// vtable[17] PostSpawnGroupUnload
	// vtable[18] ActiveSpawnGroupChanged
	// sizeof = 200
};
