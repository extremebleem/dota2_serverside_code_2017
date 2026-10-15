// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nextbot_s1/path/nextbotchasepath.h:23
class ChasePath : public CNavPathNB {
public:

protected:

	bool m_bShouldLeadTarget;  // +0x58fc
	bool m_bAllowRepathDueToStuck;  // +0x58fd

private:

	static float ms_flRepathToleranceMin;
	static float ms_flRepathToleranceMax;
	static float ms_flRepathToleranceGrowthRate;
	ChasePath(const ChasePath &);
	ChasePath();
	virtual ~ChasePath();
	virtual void SetPathFollower(IPathFollower *);
	virtual void InvalidatePath();
	float GetLeadRadius();
	void SetShouldLeadTarget(bool);
	virtual void PostUpdate();

protected:

	virtual bool IsRepathNeeded();
	virtual bool PredictTargetPosition(const CBaseCombatCharacter &, Vector *);

private:

	void RefreshPath(const CNavTarget &, const CPathCostBase &);

	// vtable[6] SetPathFollower
	// vtable[2] InvalidatePath
	// vtable[11] PostUpdate
	// vtable[9] IsRepathNeeded
	// vtable[10] PredictTargetPosition
	// sizeof = 22832
};

// src/game/server/nextbot_s1/path/nextbotchasepath.h:148
class CPathFollowerDirect : public CPathFollower {
public:

protected:

	bool m_bDirectSuccessful;  // +0xd4

	CPathFollowerDirect(CNavPathNB &);
	virtual void UpdatePathAndFollow(INextBot &, const CNavTarget &, const CPathCostBase &);
	void DirectChase(INextBot &, const CNavTarget &);
	bool WasPathFound();
	virtual ~CPathFollowerDirect();

	// vtable[6] UpdatePathAndFollow
	// sizeof = 23048
};
