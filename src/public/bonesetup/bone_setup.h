// Reconstructed from DWARF by pahole; not original source.

// src/public/bonesetup/bone_setup.h:28
class CBoneBitList : public CVarBitVecT<short unsigned int, 1024u> {
public:

	CBoneBitList(int);
	void MarkBone(int);
	bool IsBoneMarked(int);
	~CBoneBitList();

	// sizeof = 144
};

// src/public/bonesetup/bone_setup.h:191
class CIKTarget {
	struct x2 {
		const char * pAttachmentName;  // +0x0
		x2();

		// sizeof = 40
	};

	struct x3 {
		x3();

		// sizeof = 28
	};

	struct x4 {
		float latched;  // +0x0
		float release;  // +0x4
		float height;  // +0x8
		float floor;  // +0xc
		float radius;  // +0x10
		float flTime;  // +0x14
		float flWeight;  // +0x18
		bool onWorld;  // +0x38
		x4();

		// sizeof = 60
	};

	struct x5 {
		float hipToFoot;  // +0x0
		float hipToKnee;  // +0x4
		float kneeToFoot;  // +0x8
		x5();

		// sizeof = 72
	};

	struct x1 {
		bool bNeedsLatch;  // +0x0
		bool bHasLatch;  // +0x1

		float influence;  // +0x4
		int iFramecounter;  // +0x8
		int owner;  // +0xc
		x1();

		// sizeof = 124
	};

	struct x6 {
		float flTime;  // +0x0
		float flErrorTime;  // +0x4
		float ramp;  // +0x8
		bool bInError;  // +0xc

		// sizeof = 16
	};

	int chain;  // +0x0
	int type;  // +0x4

private:

	CIKTarget();
	void SetOwner(int, const Vector &, const QAngle &);
	void ClearOwner();
	int GetOwner();
	void UpdateOwner(int, const Vector &, const QAngle &);
	void SetPos(const Vector &);
	void SetAngles(const QAngle &);
	void SetQuaternion(const Quaternion &);
	void SetNormal(const Vector &);
	void SetPosWithNormalOffset(const Vector &, const Vector &);
	void SetOnWorld(bool);
	bool IsActive();
	void IKFailed();
	void MoveReferenceFrame(Vector &, QAngle &);

	// sizeof = 352
};

// src/public/bonesetup/bone_setup.h:283
struct ikcontextikrule_t {
	int index;  // +0x0
	int type;  // +0x4
	int chain;  // +0x8
	int bone;  // +0xc
	int slot;  // +0x10
	float height;  // +0x14
	float radius;  // +0x18
	float floor;  // +0x1c
	float start;  // +0x3c
	float peak;  // +0x40
	float tail;  // +0x44
	float end;  // +0x48
	float top;  // +0x4c
	float drop;  // +0x50
	float commit;  // +0x54
	float release;  // +0x58
	float flWeight;  // +0x5c
	float flRuleWeight;  // +0x60
	float latched;  // +0x64
	const char * szLabel;  // +0x68
	ikcontextikrule_t();

private:

	ikcontextikrule_t(const ikcontextikrule_t &);

	// sizeof = 136
};

// src/public/bonesetup/bone_setup.h:391
class CIKContext {
private:

	const CModel * m_pModel;  // +0x1088
	int m_iFramecounter;  // +0x10f0
	float m_flTime;  // +0x10f4
	int m_boneMask;  // +0x10f8

	CIKContext();
	void SetDebugOverlay(ISceneViewDebugOverlays *);
	void Init(HModel, const CTransform &, float, int);
	void Init(HModel, const matrix3x4a_t &, float, int);
	void Init(const CModel *, const QAngle &, const Vector &, float, int, int);
	void AddDependencies(HSequence, float, const CAnimationBlendList &, float);
	bool AddRule(float, int, const CAnimationBlendList &, ikcontextikrule_t &);
	bool CalcGoalOffset(const CAnimIKRule *, const CAnimDesc *, float, Vector &, Quaternion &, float &);
	void ClearTargets();
	void UpdateTargets(uint32 *, CTransform *, matrix3x4a_t *);
	void AutoIKRelease();
	void SolveDependencies(uint32 *, CTransform *, matrix3x4a_t *);
	void AddAutoplayLocks(CTransform *);
	void SolveAutoplayLocks(CTransform *);
	void AddSequenceLocks(HSequence, CTransform *);
	void SolveSequenceLocks(HSequence, CTransform *);
	void AddAllLocks(CTransform *);
	void SolveAllLocks(CTransform *);
	void SolveLock(const CSeqIKLock *, int, Vector *, Quaternion *, matrix3x4a_t *, CBoneBitList &);
	bool Estimate(HSequence, float, int, const float *, float);
	~CIKContext();

	// sizeof = 4368
};
