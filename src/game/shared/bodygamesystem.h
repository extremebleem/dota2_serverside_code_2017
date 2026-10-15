// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/bodygamesystem.h:22
class CBodyGameSystem : public IGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

	struct HierarchySetupWork_t {
		int m_nHierarchicalDepth;  // +0x0
		int m_nEntIndex;  // +0x4
		const void * m_pInfo;  // +0x8

		// sizeof = 24
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	typedef IGameSystem BaseClass;
	CBodyGameSystem(const CBodyGameSystem &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CBodyGameSystem *);
	CBodyGameSystem();
	virtual ~CBodyGameSystem();
	virtual void GameActivate(const EventGameActivate_t &);
	virtual void GameDeactivate(const EventGameDeactivate_t &);
	void Spawn(int, const EntitySpawnInfo_t *);
	void SpawnDependencyIsland(SpawnPhaseType_t, int, const EntitySpawnInfo_t *);
	void PostDataUpdate(int, const PostDataUpdateInfo_t *);
	void OnSetDormant(int, const EntityDormancyChange_t *, bool);
	void UpdateOnRemove(int, const EntityDeletion_t *);
	void OnRestore(int, const CEntityHandle *);
	void QueueExtraPostDataUpdateCallIfNecessary(CGameSceneNode *);

private:

	void PostSpawnHierarchySetup(HierarchySetupWork_t *, int);
	void PostDataUpdateHierarchySetup(HierarchySetupWork_t *, int);
	void OnRestoreHierarchically(HierarchySetupWork_t *, int);
	void DecodeAnimationsAtSpawn(int, CSkeletonAnimationController * *);
	int BuildWorkList(int, const EntityNotification_t *, int, CUtlVectorFixedGrowable<CBodyGameSystem::HierarchySetupWork_t, 256ul> &);
	int ComputeHierarchicalDepth(CGameSceneNode *);
	bool SortByHierarchicalDepth(const HierarchySetupWork_t &, const HierarchySetupWork_t &);
	int BuildWorkList<EntityNotification_t>(int, EntityNotification_t *, CUtlVectorFixedGrowable<CBodyGameSystem::HierarchySetupWork_t, 256ul> &);
	int BuildWorkList<const EntityDormancyChange_t>(int, const EntityDormancyChange_t *, CUtlVectorFixedGrowable<CBodyGameSystem::HierarchySetupWork_t, 256ul> &);
	int BuildWorkList<const EntityDeletion_t>(int, const EntityDeletion_t *, CUtlVectorFixedGrowable<CBodyGameSystem::HierarchySetupWork_t, 256ul> &);
	int BuildWorkList<const PostDataUpdateInfo_t>(int, const PostDataUpdateInfo_t *, CUtlVectorFixedGrowable<CBodyGameSystem::HierarchySetupWork_t, 256ul> &);
	void DoWorkAtDepth<CBodyGameSystem::HierarchySetupWork_t, void (CBodyGameSystem::*)(CBodyGameSystem::HierarchySetupWork_t*, int)>(HierarchySetupWork_t *, class , int &, int, int);

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[8] GameActivate
	// vtable[11] GameDeactivate
	// sizeof = 48
};
