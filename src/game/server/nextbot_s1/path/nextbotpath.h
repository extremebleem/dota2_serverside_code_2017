// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nextbot_s1/path/nextbotpath.h:18
class CNavTarget {
	bool m_bUseEntity;  // +0x10
	bool m_bIsOpenGoal;  // +0x11
	CNavTarget();
	CNavTarget(CHandle<const CBaseEntity>);
	CNavTarget(const CBaseEntity &);
	CNavTarget(const Vector &);
	bool IsValid();
	void Invalidate();
	void SetTargetEntity(CHandle<const CBaseEntity>);
	void SetTargetEntity(const CBaseEntity &);
	void SetTargetPoint(const Vector &);
	void SetOpenGoal();
	bool UseEntity();
	const CBaseEntity * GetTargetEntity();
	bool IsTargetSameEntity(const CNavTarget &);
	Vector GetCurrentPosition();
	CNavTarget & operator=(const CNavTarget &);

	// sizeof = 20
};

// src/game/server/nextbot_s1/path/nextbotpath.h:112
class CNavPathNB : public CPath {
public:

protected:

	CNavPathNB(CNavPathNB &);
	CNavPathNB(const CNavPathNB &);
	CNavPathNB();
	virtual void InvalidatePath();
	CNavTarget & GetTarget();
	const CNavTarget & GetTarget();
	const CNavTarget & GetLastTarget();
	void SetPathingBot(INextBot *);
	bool ComputePathTrivial(const Vector &, const Vector &, NavHull_t);
	virtual bool IsRepathNeeded();
	virtual bool PredictTargetPosition(const CBaseCombatCharacter &, Vector *);
	virtual void PostUpdate();
	void SetPredictedTargetPos(const Vector &);
	virtual bool FinishComputePathWrapper(bool);
	virtual ~CNavPathNB();
	bool ComputePathToPos<CSimpleBot>(const CSimpleBot &, const Vector &, const CPathCostBase &);
	bool UpdatePathForTarget<INextBot>(const INextBot &, const CPathCostBase &);

	// vtable[2] InvalidatePath
	// vtable[9] IsRepathNeeded
	// vtable[10] PredictTargetPosition
	// vtable[11] PostUpdate
	// vtable[8] FinishComputePathWrapper
	// sizeof = 22784
};

// src/game/server/nextbot_s1/path/nextbotpath.h:306
class CPathOptimizerNextbot : public CPathOptimizerStraightener {
public:

protected:

	const const INextBot & m_rNextBot;  // +0x8
	CPathOptimizerNextbot(const INextBot &);
	virtual int FindNextOccludedNode(CPath &, const CPathCostBase &, int);

	// vtable[1] FindNextOccludedNode
	// sizeof = 16
};
