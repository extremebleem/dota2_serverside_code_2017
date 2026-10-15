// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/ragdoll_shared.h:34
struct ragdollelement_t {
private:

	IPhysicsObject * pObject;  // +0x10
	HPhysicsJoint hConstraint;  // +0x18
	int parentIndex;  // +0x20
	float m_flRadius;  // +0x24
	ragdollelement_t();

	ragdollelement_t & operator=(const ragdollelement_t &);

	// sizeof = 40
};

// src/game/shared/ragdoll_shared.h:47
struct ragdoll_t {
private:

	int listCount;  // +0x0

	int boneIndex[32];  // +0x508
	bool allowStretch;  // +0x588
	bool unused;  // +0x589
	ragdoll_t();

	ragdoll_t & operator=(const ragdoll_t &);

	// sizeof = 1424
};

// src/game/shared/ragdoll_shared.h:60
struct ragdollparams_t {
	void * pGameData;  // +0x0
	const CModel * pStudioHdr;  // +0x8
	HModel modelIndex;  // +0x10
	int forceBoneIndex;  // +0x30

	const matrix3x4_t * pCurrentBones;  // +0x38
	float jointFrictionScale;  // +0x40
	bool allowStretch;  // +0x44
	ragdollparams_t();
	~ragdollparams_t();

	// sizeof = 72
};

// src/game/shared/ragdoll_shared.h:75
struct cache_ragdollsolid_t {
	short int boneIndex;  // +0x44
	short int collideIndex;  // +0x46
	short int bodypart2Index;  // +0x48
	short int pad;  // +0x4a
	cache_ragdollsolid_t();

	// sizeof = 80
};

// src/game/shared/ragdoll_shared.h:85
struct cache_ragdollconstraint_t {
	short int parentIndex;  // +0x60
	short int childIndex;  // +0x62
	cache_ragdollconstraint_t();

	// sizeof = 100
};

// src/game/shared/ragdoll_shared.h:95
struct cache_ragdoll_t {
private:

	short int solidCount;  // +0x0
	short int constraintCount;  // +0x2

	const cache_ragdollsolid_t * GetSolids();
	const cache_ragdollconstraint_t * GetConstraints();

	// sizeof = 4
};

// src/game/shared/ragdoll_shared.h:115
class CRagdollLRURetirement : public CAutoGameSystem {
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

	int m_iMaxRagdolls;  // +0x68
	int m_iSimulatedRagdollCount;  // +0x6c
	int m_iRagdollCount;  // +0x70
	typedef CAutoGameSystem BaseClass;
	CRagdollLRURetirement(CRagdollLRURetirement &);
	CRagdollLRURetirement(const CRagdollLRURetirement &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CRagdollLRURetirement *);
	CRagdollLRURetirement();
	virtual void Update(const EventClientUpdate_t &);
	virtual void FrameUpdatePostEntityThink(const EventServerPostEntityThink_t &);
	void MoveToTopOfLRU(CBaseAnimating *, bool);
	void SetMaxRagdollCount(int);
	virtual void GameInit(const EventGameInit_t &);
	int CountRagdolls(bool);
	void CleanRagdolls();
	virtual ~CRagdollLRURetirement();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[22] Update
	// vtable[25] FrameUpdatePostEntityThink
	// vtable[3] GameInit
	// sizeof = 120
};

// src/game/shared/ragdoll_shared.h:151
class CRagdollLowViolenceManager : public CAutoGameSystem {
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

	bool m_bLowViolence;  // +0x11
	typedef CAutoGameSystem BaseClass;

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CRagdollLowViolenceManager *);
	CRagdollLowViolenceManager();
	virtual void ActiveSpawnGroupChanged(const EventActiveSpawnGroupChanged_t &);
	bool IsLowViolence();
	virtual ~CRagdollLowViolenceManager();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[18] ActiveSpawnGroupChanged
	// sizeof = 24
};
