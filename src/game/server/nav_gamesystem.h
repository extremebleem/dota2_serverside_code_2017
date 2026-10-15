// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nav_gamesystem.h:21
class CNavGameSystem : public IGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

	class CNavInfoForSpawnGroup {
		CNavInfoForSpawnGroup();

		// sizeof = 8
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

	CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)> m_NavInfoForSpawnGroup;  // +0x18

	static const int MAX_LISTENERS = 16;
	static int s_NumListeners;
	static INavListener * s_Listeners[16];
	typedef IGameSystem BaseClass;
	CNavGameSystem(const CNavGameSystem &);
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CNavGameSystem *);
	CNavGameSystem();
	virtual ~CNavGameSystem();
	virtual void GameInit(const EventGameInit_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);
	virtual void SpawnGroupPrecache(const EventSpawnGroupPrecache_t &);
	virtual void PreSpawnGroupLoad(const EventPreSpawnGroupLoad_t &);
	virtual void PostSpawnGroupLoad(const EventPostSpawnGroupLoad_t &);
	virtual void PostSpawnGroupUnload(const EventPostSpawnGroupUnload_t &);
	void SwitchNav(const char *, bool);
	CNavMesh * GetNavForSpawnGroup(SpawnGroupHandle_t);
	bool RegisterNavListener(INavListener *);
	void UnregisterNavListener(INavListener *);
	void EnsureUniqueNavMeshForActiveSpawnGroup(bool);
	virtual bool DoesModRequirePrecaching();
	virtual void SwitchNav(CNavInfoForSpawnGroup *, bool);
	virtual void PrecacheModSpecificNavRelatedResources(SpawnGroupHandle_t, IEntityPrecacheConfiguration *, IEntityResourceManifest *, const CNavPrecacheInfo &);
	virtual void ActiveSpawnGroupChanged(const EventActiveSpawnGroupChanged_t &);
	void PrecacheNavForSpawnGroup(SpawnGroupHandle_t, IEntityPrecacheConfiguration *, IEntityResourceManifest *);
	void LoadNavForSpawnGroup(SpawnGroupHandle_t, CNavInfoForSpawnGroup *);

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[3] GameInit
	// vtable[4] GameShutdown
	// vtable[12] SpawnGroupPrecache
	// vtable[14] PreSpawnGroupLoad
	// vtable[15] PostSpawnGroupLoad
	// vtable[17] PostSpawnGroupUnload
	// vtable[40] DoesModRequirePrecaching
	// vtable[41] SwitchNav
	// vtable[42] PrecacheModSpecificNavRelatedResources
	// vtable[18] ActiveSpawnGroupChanged
	// sizeof = 72
};
