// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/sharedfunctorutils.h:32
class TargetScan {
	int ()() * * _vptr.TargetScan;  // +0x0
protected:

	int m_team;  // +0x1c
	float m_closeDot;  // +0x20
	float m_bestDot;  // +0x24
	float m_maxRange;  // +0x28
	float m_closestPointTestDistance;  // +0x2c
	bool m_debug;  // +0x30

	~TargetScan();
	TargetScan(TargetScan &);
	TargetScan(const TargetScan &);
	TargetScan(CBaseCombatCharacter *, int, float, float, float, bool);
	bool operator()(CBaseCombatCharacter *);
	CBaseCombatCharacter * GetTarget();
	const CUtlVector<CBaseCombatCharacter*, CUtlMemory<CBaseCombatCharacter*, int> > & GetAllTargets();
	float GetTargetDot();
	float ViewDot(const Vector &);
	virtual bool IsTargetVisible(CBaseCombatCharacter *);
	virtual bool IsPotentialTarget(CBaseCombatCharacter *);

	// vtable[0] IsTargetVisible
	// vtable[1] IsPotentialTarget
	// sizeof = 88
};

// src/game/shared/sharedfunctorutils.h:164
class AvoidActors {
private:

	float m_maxSpeed;  // +0x1c
	float m_scale;  // +0x20

	AvoidActors(CBaseCombatCharacter *, const Vector &, Vector *, float, float);
	bool operator()(CBaseCombatCharacter *);

	// sizeof = 64
};
