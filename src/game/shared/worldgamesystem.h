// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/worldgamesystem.h:20
struct WorldInfo_t {
	float32 m_flMaxPropScreenSpaceWidth;  // +0x20
	float32 m_flMinPropScreenSpaceWidth;  // +0x24
	bool m_bNewUnit;  // +0x28
	bool m_bStartDark;  // +0x29

	float m_flTileGridMinHeight;  // +0x2c
	float m_flTileGridMaxHeight;  // +0x30
	float m_flTileGridStepHeight;  // +0x34
	float m_flTileGridHeightShift;  // +0x38

	DotaMapDataHandle_t m_mapDataHandle;  // +0x58
	int m_nRefCount;  // +0x60
	WorldInfo_t();
	~WorldInfo_t();

	// sizeof = 104
};

// src/game/shared/worldgamesystem.h:54
class CWorldGameSystem : public CAutoGameSystem {
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
	CWorldGameSystem(CWorldGameSystem &);
	CWorldGameSystem(const CWorldGameSystem &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CWorldGameSystem *);
	int GetPriority();
	virtual void PreSpawnGroupLoad(const EventPreSpawnGroupLoad_t &);
	virtual void PostSpawnGroupUnload(const EventPostSpawnGroupUnload_t &);
	virtual void ActiveSpawnGroupChanged(const EventActiveSpawnGroupChanged_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);
	CWorldGameSystem();
	bool HasWorldInfoForSpawnGroup(SpawnGroupHandle_t);
	const WorldInfo_t * GetWorldInfoForSpawnGroup(SpawnGroupHandle_t);
	DotaMapDataHandle_t GetMapDataForSpawnGroup(SpawnGroupHandle_t);

private:

	UtlHashHandle_t FindWorldInfoForSpawnGroup(SpawnGroupHandle_t);
	const CEntityKeyValues * GetWorldSpawnKeys(const char *, const char *);
	virtual ~CWorldGameSystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[14] PreSpawnGroupLoad
	// vtable[17] PostSpawnGroupUnload
	// vtable[18] ActiveSpawnGroupChanged
	// vtable[4] GameShutdown
	// sizeof = 160
};
