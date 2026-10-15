// Reconstructed from DWARF by pahole; not original source.

// src/game/server/pushentity.h:18
class CPhysicsPushedEntities {
	struct RotatingPushMove_t {
		RotatingPushMove_t();

		// sizeof = 120
	};

	struct PhysicsPusherInfo_t {
		bool m_bDisabledCollisionWhilePushing;  // +0x14
		PhysicsPusherInfo_t();

		// sizeof = 24
	};

	struct PhysicsPushedInfo_t {
		trace_t m_Trace;  // +0x18
		bool m_bBlocked;  // +0xc0
		bool m_bPusherIsGround;  // +0xc1
		PhysicsPushedInfo_t();

		// sizeof = 200
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	int ()() * * _vptr.CPhysicsPushedEntities;  // +0x0
protected:

	int m_nBlocker;  // +0x38
	bool m_bIsUnblockableByPlayer;  // +0x3c

	float m_rootPusherStartLocaltime;  // +0x58
	float m_flMoveTime;  // +0x5c
	CPhysicsPushedEntities(CPhysicsPushedEntities &);
	CPhysicsPushedEntities(const CPhysicsPushedEntities &);
	CPhysicsPushedEntities();
	CBaseEntity * PerformRotatePush(CBaseEntity *, float);
	CBaseEntity * PerformLinearPush(CBaseEntity *, float);
	int CountMovedEntities();
	void StoreMovedEntities(physicspushlist_t &);
	void BeginPush(CBaseEntity *);
	void AddEntity(CBaseEntity *);
	void RestoreEntities();
	void ComputeRotationalPushDirection(CBaseEntity *, const RotatingPushMove_t &, Vector *, CBaseEntity *);
	/* tag__fprintf: const_type tag not supported! */;
	bool SpeculativelyCheckPush(PhysicsPushedInfo_t &, const Vector &, bool, CBaseEntity *);
	virtual bool SpeculativelyCheckRotPush(const RotatingPushMove_t &, CBaseEntity *);
	virtual bool SpeculativelyCheckLinearPush(const Vector &);
	CBaseEntity * RegisterBlockage();
	virtual void FinishRotPushedEntity(CBaseEntity *, const RotatingPushMove_t &);
	void FinishPush(bool, const RotatingPushMove_t *);
	void GenerateBlockingEntityList(const Vector &);
	void SetupAllInHierarchy(CBaseEntity *);
	void UnlinkPusherList(int *);
	void RelinkPusherList(int *);
	void FinishPushers();
	void RotateRootEntity(CBaseEntity *, float, RotatingPushMove_t &);
	void LinearlyMoveRootEntity(CBaseEntity *, float, Vector *);
	bool IsPushedPositionValid(CBaseEntity *);
	~CPhysicsPushedEntities();

	// vtable[0] SpeculativelyCheckRotPush
	// vtable[1] SpeculativelyCheckLinearPush
	// vtable[2] FinishRotPushedEntity
	// sizeof = 96
};

// src/game/server/pushentity.h:127
class CTraceFilterPushMove : public CTraceFilterSimple {
public:

private:

	CTraceFilterPushMove(CTraceFilterPushMove &);
	CTraceFilterPushMove(const CTraceFilterPushMove &);
	CTraceFilterPushMove(CBaseEntity *, int, uint64);
	virtual bool ShouldHitEntity(CBaseEntity *);
	virtual ~CTraceFilterPushMove();

	// vtable[2] ShouldHitEntity
	// sizeof = 72
};
