// Reconstructed from DWARF by pahole; not original source.

// src/game/server/player_lagcompensation.h:22
struct LayerRecord {
	float m_cycle;  // +0x4
	float m_weight;  // +0x8
	int m_order;  // +0xc
	LayerRecord();
	LayerRecord(const LayerRecord &);
	void Clear();

	// sizeof = 16
};

// src/game/server/player_lagcompensation.h:51
struct LagRecord {
	int m_fFlags;  // +0x0
	float m_flSimulationTime;  // +0x34
	float m_masterCycle;  // +0x12c
	LagRecord();
	LagRecord(const LagRecord &);
	void Clear();

	// sizeof = 304
};

// src/game/server/player_lagcompensation.h:111
class CLagCompensationManager : public CAutoGameSystem, public ILagCompensationManager {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

	struct EntityLagData {
		bool m_bRestoreEntity;  // +0x0

		LagRecordList m_LagRecords;  // +0x8
		EntityLagData();
		~EntityLagData();

		// sizeof = 696
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*, short unsigned int, bool (*)(const CHandle<CBaseEntity>&, const CHandle<CBaseEntity>&)> m_CompensatedEntities;  // +0x20
	bool m_bNeedToRestore;  // +0x48

	float m_weaponRange;  // +0x74
	bool m_isCurrentlyDoingCompensation;  // +0x78

	CUtlRBTree<CHandle<CBaseEntity>, short unsigned int, bool (*)(const CHandle<CBaseEntity>&, const CHandle<CBaseEntity>&), CUtlMemory<UtlRBTreeNode_t<CHandle<CBaseEntity>, short unsigned int>, short unsigned int> > m_AdditionalEntities;  // +0x80
	typedef CAutoGameSystem BaseClass;
	CLagCompensationManager(CLagCompensationManager &);
	CLagCompensationManager(const CLagCompensationManager &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CLagCompensationManager *);
	CLagCompensationManager();
	virtual void Shutdown();
	virtual void GameShutdown(const EventGameShutdown_t &);
	virtual void FrameUpdatePostEntityThink(const EventServerPostEntityThink_t &);
	virtual void StartLagCompensation(CBasePlayer *, LagCompensationType, const Vector &, const QAngle &, float);
	virtual void FinishLagCompensation(CBasePlayer *);
	virtual void AddAdditionalEntity(CBaseEntity *);
	virtual void RemoveAdditionalEntity(CBaseEntity *);
	virtual bool IsCurrentlyDoingLagCompensation();
	void RecordDataIntoTrack(CBaseEntity *, LagRecordList *, bool);
	bool BacktrackEntity(CBaseEntity *, float, LagRecordList *, LagRecord *, LagRecord *, bool);
	void RestoreEntityFromRecords(CBaseEntity *, LagRecord *, LagRecord *, bool);

private:

	void ClearHistory();
	virtual ~CLagCompensationManager();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[2] Shutdown
	// vtable[4] GameShutdown
	// vtable[25] FrameUpdatePostEntityThink
	// vtable[40] StartLagCompensation
	// vtable[41] FinishLagCompensation
	// vtable[42] AddAdditionalEntity
	// vtable[43] RemoveAdditionalEntity
	// vtable[44] IsCurrentlyDoingLagCompensation
	// sizeof = 168
};
