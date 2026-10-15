// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_utils.h:129
struct SChatMessageStringEntry {
	int nMessage;  // +0x0

	const char * pszMessage;  // +0x8
	int nFlags;  // +0x10

	// sizeof = 24
};

// src/game/shared/dota/dota_utils.h:248
struct herolist_sort_t {
	int nHeroID;  // +0x0

	const wchar_t * pwszHeroName;  // +0x8

	// sizeof = 16
};

// src/game/shared/dota/dota_utils.h:254
struct herolist_sort_ascii_t {
	int nHeroID;  // +0x0

	const char * pszHeroName;  // +0x8

	// sizeof = 16
};

// src/game/shared/dota/dota_utils.h:287
class CDOTA_UnitFilterCache : public CAutoGameSystem, public IEntityListener {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

	typedef CAutoGameSystem BaseClass;
	CDOTA_UnitFilterCache();
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDOTA_UnitFilterCache *);
	virtual void OnEntitySpawned(CEntityInstance *);
	virtual void GameShutdown(const EventGameShutdown_t &);
	virtual void GameInit(const EventGameInit_t &);
	const CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> > & GetUnitsInCategory(int);
	void AddNewlyCreatedEntity(EHANDLE);
	virtual void FrameUpdatePreEntityThink(const EventServerPreEntityThink_t &);
	void UpdateUnitsThisFrame();
	void AddEntity(CDOTA_BaseNPC *);
	virtual ~CDOTA_UnitFilterCache();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[40] OnEntitySpawned
	// vtable[4] GameShutdown
	// vtable[3] GameInit
	// vtable[24] FrameUpdatePreEntityThink
	// sizeof = 176
};

// src/game/shared/dota/dota_utils.h:327
class CDOTA_Grinder : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

	enum Mode {
		GRINDER_OFF = 0,
		GRINDER_HEROES = 0x1,
		GRINDER_BUILDINGS = 0x2,
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	int m_nNextHeroIndex;  // +0x18
	int m_nEndHeroIndex;  // +0x1c
	int m_nNextAbilityIndex;  // +0x20
	float m_flNextTick;  // +0x24
	int m_nDamageLimit;  // +0x50
	int m_nDamagePerHit;  // +0x54
	typedef CAutoGameSystem BaseClass;
	CDOTA_Grinder(CDOTA_Grinder &);
	CDOTA_Grinder(const CDOTA_Grinder &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDOTA_Grinder *);
	CDOTA_Grinder();
	void StartHeroes(CDOTAPlayer *, int, int);
	void StartBuildings(CDOTAPlayer *, const char *);
	void NextBuilding();
	void FrameUpdateHeroes();
	void FrameUpdateBuildings();
	virtual void FrameUpdatePreEntityThink(const EventServerPreEntityThink_t &);
	bool DisableDamage();
	bool DisableWin();
	CDOTAPlayer * GetCurrentPlayer();
	virtual ~CDOTA_Grinder();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[24] FrameUpdatePreEntityThink
	// sizeof = 88
};
