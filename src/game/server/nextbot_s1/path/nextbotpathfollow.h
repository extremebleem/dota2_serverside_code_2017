// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nextbot_s1/path/nextbotpathfollow.h:19
class CPathFollower : public IPathFollower {
public:

protected:

	const CNavPathNB & m_rPath;  // +0x10
	bool m_bIsDebugging;  // +0x18
	bool m_bNotifyPathTarget;  // +0x19

	const CPathSegment * m_pGoal;  // +0x20
	float m_minLookAheadRange;  // +0x28
	bool m_bIsOnStairs;  // +0x30

	static int gm_frameLastLookedAhead;
	bool m_bDidAvoidCheck;  // +0x80

	bool m_isLeftClear;  // +0x9c

	bool m_isRightClear;  // +0xb8

	CPathFollower(const CPathFollower &);
	CPathFollower(CNavPathNB &);
	virtual ~CPathFollower();
	CNavPathNB & GetPath();
	const CNavPathNB & GetPath();
	void InvalidatePath();
	bool IsPathValid();
	const PathCursorData & GetCursorData();
	const CPathSegment * FirstSegment();
	const CPathSegment * NextSegment(const CPathSegment *);
	virtual void Draw(const CPathSegment *);
	void UpdateFollow(INextBot &);
	virtual void UpdatePathAndFollow(INextBot &, const CNavTarget &, const CPathCostBase &);
	virtual void OnPathInvalidated();
	virtual void OnPathChanged();
	const CPathSegment * GetCurrentGoal();
	void SetMinLookAheadDistance(float);
	CBaseEntity * GetHindrance();
	bool IsDiscontinuityAhead(INextBot *, SegmentType, float);
	virtual void SetNotifyPathTarget(bool);
	bool IsAtGoal();
	bool CheckProgress();
	void AdjustSpeed();
	Vector Avoid(const Vector &, const Vector &, const Vector &);
	bool Climbing(const CPathSegment *, const Vector &, const Vector &, float);
	bool JumpOverGaps(const CPathSegment *, const Vector &, const Vector &, float);
	bool LadderUpdate();
	CBaseEntity * FindBlocker();
	void NotifyPathTarget();

	// vtable[5] Draw
	// vtable[6] UpdatePathAndFollow
	// vtable[0] OnPathInvalidated
	// vtable[1] OnPathChanged
	// vtable[2] SetNotifyPathTarget
	// sizeof = 216
};
