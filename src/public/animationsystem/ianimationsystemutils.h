// Reconstructed from DWARF by pahole; not original source.

// src/public/animationsystem/ianimationsystemutils.h:21
struct PhysicsBonesOverlay_t {
	uint nBoneCount;  // +0x0

	uint16 * pModelBoneIndices;  // +0x8
	PhysicsBonesOverlay_t();

	// sizeof = 24
};

// src/public/animationsystem/ianimationsystemutils.h:29
struct BoneMergeOverlay_t {
	int m_nBoneMergeCount;  // +0x0

	const bone_merge_list_t * m_pBoneMerge;  // +0x8
	const matrix3x4a_t * m_pWorldSpaceMasterTransforms;  // +0x10
	BoneMergeOverlay_t();
	BoneMergeOverlay_t(int, const bone_merge_list_t *, const matrix3x4a_t *);

	// sizeof = 24
};

// src/public/animationsystem/ianimationsystemutils.h:58
class IAnimationHelper {
	int ()() * * _vptr.IAnimationHelper;  // +0x0
	IAnimationHelper();
	virtual void SetModel(HModel);
	virtual HModel GetModel();
	virtual void SetModelContext(void *);
	virtual int GetPoseParameterCount();
	virtual float * GetPoseParameters();
	virtual int GetSequenceCount();
	virtual void SetSequence(HSequence);
	virtual void SetSequence(int, HSequence, float);
	virtual void SetSequences(int, CAnimationDecodeOp *);
	virtual CAnimationDecodeOp & GetSequence(int);
	virtual void SetSequenceMovementType(SequenceMovementType_t);
	virtual SequenceMovementType_t GetSequenceMovementType();
	virtual void JumpToFrame(int, float);
	virtual void Update(matrix3x4a_t &, float, const PhysicsBonesOverlay_t *, const BoneMergeOverlay_t *, int, AnimationEventOccurrences_t *);
	virtual CAnimationState & GetAnimationState();
	virtual void SetBlendSequenceTransitions(bool);
	virtual bool IsBlendingSequenceTransitions();
	virtual void ResetSequenceTransitioner();
	virtual void SetAnimationGraphInstance(const IAnimationGraphInstancePtr &);
	virtual void AddSequenceFinishedCallback(IAnimationHelperSequenceFinishedCallback *);
	virtual void RemoveSequenceFinisheCallback(IAnimationHelperSequenceFinishedCallback *);

protected:

	virtual ~IAnimationHelper();

	// vtable[0] SetModel
	// vtable[1] GetModel
	// vtable[2] SetModelContext
	// vtable[3] GetPoseParameterCount
	// vtable[4] GetPoseParameters
	// vtable[5] GetSequenceCount
	// vtable[6] SetSequence
	// vtable[7] SetSequence
	// vtable[8] SetSequences
	// vtable[9] GetSequence
	// vtable[10] SetSequenceMovementType
	// vtable[11] GetSequenceMovementType
	// vtable[12] JumpToFrame
	// vtable[13] Update
	// vtable[14] GetAnimationState
	// vtable[15] SetBlendSequenceTransitions
	// vtable[16] IsBlendingSequenceTransitions
	// vtable[17] ResetSequenceTransitioner
	// vtable[18] SetAnimationGraphInstance
	// vtable[19] AddSequenceFinishedCallback
	// vtable[20] RemoveSequenceFinisheCallback
	// sizeof = 8
};
