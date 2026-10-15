// Reconstructed from DWARF by pahole; not original source.

// src/public/modellib/boneconstraints.h:41
struct CConstraintTarget {
private:

	uint32 m_nBoneHash;  // +0x0
	float m_flWeight;  // +0x4
	bool m_bIsAttachment;  // +0x24
	CConstraintTarget();

	CConstraintTarget * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	void KV3TransferSave(CKV3TransferSaveContext *);
	void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_CConstraintTarget(CKV3TransferSaveContext *);
	void KV3TransferLoad_CConstraintTarget(CKV3TransferLoadContext *);

	// sizeof = 40
};

// src/public/modellib/boneconstraints.h:41
struct CConstraintTarget {
	enum {
		KV3TRANSFER_BEHAVIOR = 0x1,
	};

	enum {
		KV3TRANSFER_IS_VIRTUAL = 0,
	};

private:

	uint32 m_nBoneHash;  // +0x0
	float m_flWeight;  // +0x4
	bool m_bIsAttachment;  // +0x24
	CConstraintTarget();

	CConstraintTarget * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	void KV3TransferSave(CKV3TransferSaveContext *);
	void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_CConstraintTarget(CKV3TransferSaveContext *);
	void KV3TransferLoad_CConstraintTarget(CKV3TransferLoadContext *);
	CConstraintTarget & operator=(const CConstraintTarget &);

	// sizeof = 40
};

// src/public/modellib/boneconstraints.h:56
struct CConstraintSlave {
private:

	uint32 m_nBoneHash;  // +0x0
	float m_flWeight;  // +0x4
	CConstraintSlave();

	CConstraintSlave * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	void KV3TransferSave(CKV3TransferSaveContext *);
	void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_CConstraintSlave(CKV3TransferSaveContext *);
	void KV3TransferLoad_CConstraintSlave(CKV3TransferLoadContext *);

	// sizeof = 36
};

// src/public/modellib/boneconstraints.h:56
struct CConstraintSlave {
	enum {
		KV3TRANSFER_BEHAVIOR = 0x1,
	};

private:

	uint32 m_nBoneHash;  // +0x0
	float m_flWeight;  // +0x4
	CConstraintSlave();

	CConstraintSlave * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	void KV3TransferSave(CKV3TransferSaveContext *);
	void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_CConstraintSlave(CKV3TransferSaveContext *);
	void KV3TransferLoad_CConstraintSlave(CKV3TransferLoadContext *);
	CConstraintSlave & operator=(const CConstraintSlave &);

	// sizeof = 36
};

// src/public/modellib/boneconstraints.h:71
class CBaseConstraint {
	int ()() * * _vptr.CBaseConstraint;  // +0x0
private:

	~CBaseConstraint();
	CBaseConstraint(CBaseConstraint &);
	CBaseConstraint(const CBaseConstraint &);

	void KV3TransferPolymorphicClassname(char &);
	CBaseConstraint * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	virtual void KV3TransferSave(CKV3TransferSaveContext *);
	virtual void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_CBaseConstraint(CKV3TransferSaveContext *);
	void KV3TransferLoad_CBaseConstraint(CKV3TransferLoadContext *);
	CBaseConstraint();
	void Init(const char *);
	void Init(const char *, const Vector &);
	void AddSlave(uint32, float, const Vector &, const Quaternion &);
	void AddTarget(uint32, float, const Vector &, const Quaternion &, bool);
	CConstraintTarget * GetTarget(int);
	virtual bool UsesBone(uint32);
	virtual BoneConstraintType_t GetConstraintType();
	virtual void FillInPermData(BaseConstraint_t *, CResourceStream *);
	virtual void InitFromOldDiskData(const BaseConstraint_t *);
	virtual void Compute(const CModel *, matrix3x4a_t *, const float *);
	CBaseConstraint & operator=(const CBaseConstraint &);

	// vtable[0] Schema_DynamicBinding
	// vtable[1] KV3TransferSave
	// vtable[2] KV3TransferLoad
	// vtable[3] UsesBone
	// vtable[4] GetConstraintType
	// vtable[5] FillInPermData
	// vtable[6] InitFromOldDiskData
	// vtable[7] Compute
	// sizeof = 80
};

// src/public/modellib/boneconstraints.h:105
class CPointConstraint : public CBaseConstraint {
	enum {
		KV3TRANSFER_IS_VIRTUAL = 0x1,
	};

public:

private:

	~CPointConstraint();
	CPointConstraint(CPointConstraint &);
	CPointConstraint(const CPointConstraint &);

	void KV3TransferPolymorphicClassname(char &);
	CPointConstraint * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	virtual void KV3TransferSave(CKV3TransferSaveContext *);
	virtual void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_CPointConstraint(CKV3TransferSaveContext *);
	void KV3TransferLoad_CPointConstraint(CKV3TransferLoadContext *);
	CPointConstraint();
	void Init(const char *);
	virtual BoneConstraintType_t GetConstraintType();
	virtual void Compute(const CModel *, matrix3x4a_t *, const float *);
	CPointConstraint & operator=(const CPointConstraint &);

	// vtable[0] Schema_DynamicBinding
	// vtable[1] KV3TransferSave
	// vtable[2] KV3TransferLoad
	// vtable[4] GetConstraintType
	// vtable[7] Compute
	// sizeof = 80
};

// src/public/modellib/boneconstraints.h:124
class COrientConstraint : public CBaseConstraint {
	enum {
		KV3TRANSFER_IS_VIRTUAL = 0x1,
	};

public:

private:

	~COrientConstraint();
	COrientConstraint(COrientConstraint &);
	COrientConstraint(const COrientConstraint &);

	void KV3TransferPolymorphicClassname(char &);
	COrientConstraint * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	virtual void KV3TransferSave(CKV3TransferSaveContext *);
	virtual void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_COrientConstraint(CKV3TransferSaveContext *);
	void KV3TransferLoad_COrientConstraint(CKV3TransferLoadContext *);
	COrientConstraint();
	void Init(const char *);
	virtual BoneConstraintType_t GetConstraintType();
	virtual void Compute(const CModel *, matrix3x4a_t *, const float *);
	COrientConstraint & operator=(const COrientConstraint &);

	// vtable[0] Schema_DynamicBinding
	// vtable[1] KV3TransferSave
	// vtable[2] KV3TransferLoad
	// vtable[4] GetConstraintType
	// vtable[7] Compute
	// sizeof = 80
};

// src/public/modellib/boneconstraints.h:143
class CAimConstraint : public CBaseConstraint {
	enum {
		KV3TRANSFER_IS_VIRTUAL = 0x1,
	};

public:

private:

	uint m_nUpType;  // +0x60
	~CAimConstraint();
	CAimConstraint(CAimConstraint &);
	CAimConstraint(const CAimConstraint &);

	void KV3TransferPolymorphicClassname(char &);
	CAimConstraint * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	virtual void KV3TransferSave(CKV3TransferSaveContext *);
	virtual void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_CAimConstraint(CKV3TransferSaveContext *);
	void KV3TransferLoad_CAimConstraint(CKV3TransferLoadContext *);
	CAimConstraint();
	void Init(const char *, const Quaternion &, const Vector &, uint);
	virtual void FillInPermData(BaseConstraint_t *, CResourceStream *);
	virtual void InitFromOldDiskData(const BaseConstraint_t *);
	virtual void Compute(const CModel *, matrix3x4a_t *, const float *);
	virtual BoneConstraintType_t GetConstraintType();
	CAimConstraint & operator=(const CAimConstraint &);

	// vtable[0] Schema_DynamicBinding
	// vtable[1] KV3TransferSave
	// vtable[2] KV3TransferLoad
	// vtable[5] FillInPermData
	// vtable[6] InitFromOldDiskData
	// vtable[7] Compute
	// vtable[4] GetConstraintType
	// sizeof = 104
};

// src/public/modellib/boneconstraints.h:168
class CTwistConstraint : public CBaseConstraint {
public:

private:

	bool m_bInverse;  // +0x50

	~CTwistConstraint();
	CTwistConstraint(CTwistConstraint &);
	CTwistConstraint(const CTwistConstraint &);

	void KV3TransferPolymorphicClassname(char &);
	CTwistConstraint * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	virtual void KV3TransferSave(CKV3TransferSaveContext *);
	virtual void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_CTwistConstraint(CKV3TransferSaveContext *);
	void KV3TransferLoad_CTwistConstraint(CKV3TransferLoadContext *);
	CTwistConstraint();
	void Init(const char *, bool, const Vector &, const Quaternion &, const Quaternion &);
	virtual void FillInPermData(BaseConstraint_t *, CResourceStream *);
	virtual void InitFromOldDiskData(const BaseConstraint_t *);
	virtual void Compute(const CModel *, matrix3x4a_t *, const float *);
	virtual BoneConstraintType_t GetConstraintType();
	CTwistConstraint & operator=(const CTwistConstraint &);

	// vtable[0] Schema_DynamicBinding
	// vtable[1] KV3TransferSave
	// vtable[2] KV3TransferLoad
	// vtable[5] FillInPermData
	// vtable[6] InitFromOldDiskData
	// vtable[7] Compute
	// vtable[4] GetConstraintType
	// sizeof = 120
};

// src/public/modellib/boneconstraints.h:195
class CTiltTwistConstraint : public CBaseConstraint {
	enum {
		KV3TRANSFER_IS_VIRTUAL = 0x1,
	};

public:

private:

protected:

	int m_nTargetAxis;  // +0x50
	int m_nSlaveAxis;  // +0x54
	bool m_bTwistLastValid;  // +0x58

	float m_flTwistLast;  // +0x5c
	bool m_bCached;  // +0x60

	int m_nTargetBoneIndex;  // +0x64
	int m_nTargetParentBoneIndex;  // +0x68
	int m_nSlaveBoneIndex;  // +0x6c
	int m_nSlaveParentBoneIndex;  // +0x70
	~CTiltTwistConstraint();
	CTiltTwistConstraint(CTiltTwistConstraint &);
	CTiltTwistConstraint(const CTiltTwistConstraint &);

private:

	void KV3TransferPolymorphicClassname(char &);
	CTiltTwistConstraint * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	virtual void KV3TransferSave(CKV3TransferSaveContext *);
	virtual void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_CTiltTwistConstraint(CKV3TransferSaveContext *);
	void KV3TransferLoad_CTiltTwistConstraint(CKV3TransferLoadContext *);
	CTiltTwistConstraint();
	void Init(const char *, int, int);
	virtual void FillInPermData(BaseConstraint_t *, CResourceStream *);
	virtual void InitFromOldDiskData(const BaseConstraint_t *);
	virtual void Compute(const CModel *, matrix3x4a_t *, const float *);
	virtual BoneConstraintType_t GetConstraintType();
	float NormalizeAngle(float);
	float ComputeNoFlipAngle(float, float);
	float ComputeTwistAroundAxisInRadians(matrix3x4a_t &, int, float);

protected:

	bool CacheModelData(const CModel *);
	void GetTwistMatrix(matrix3x4a_t &, matrix3x4a_t *);
	void TransferPostLoadFn(CKV3TransferLoadContext *);
	CTiltTwistConstraint & operator=(const CTiltTwistConstraint &);

	// vtable[0] Schema_DynamicBinding
	// vtable[1] KV3TransferSave
	// vtable[2] KV3TransferLoad
	// vtable[5] FillInPermData
	// vtable[6] InitFromOldDiskData
	// vtable[7] Compute
	// vtable[4] GetConstraintType
	// sizeof = 136
};

// src/public/modellib/boneconstraints.h:247
class CMorphConstraint : public CBaseConstraint {
	struct BoneParentPair_t {
		int m_nBoneIndex;  // +0x0
		int m_nBoneParentIndex;  // +0x4

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

private:

protected:

	bool m_bCacheAttempted;  // +0x50
	bool m_bCacheOk;  // +0x51

	int m_nSlaveChannel;  // +0x60
	float m_flMin;  // +0x64
	float m_flMax;  // +0x68
	int m_nTargetMorphControl;  // +0x6c
	~CMorphConstraint();
	CMorphConstraint(CMorphConstraint &);
	CMorphConstraint(const CMorphConstraint &);

private:

	void KV3TransferPolymorphicClassname(char &);
	CMorphConstraint * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	virtual void KV3TransferSave(CKV3TransferSaveContext *);
	virtual void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_CMorphConstraint(CKV3TransferSaveContext *);
	void KV3TransferLoad_CMorphConstraint(CKV3TransferLoadContext *);
	CMorphConstraint();
	void Init(const char *, const char *, int, int, int);
	virtual void Compute(const CModel *, matrix3x4a_t *, const float *);
	virtual BoneConstraintType_t GetConstraintType();

protected:

	void CalcSlaveLocalMatrix(matrix3x4a_t &, const CConstraintSlave &, float);
	bool CacheModelData(const CModel *);
	CMorphConstraint & operator=(const CMorphConstraint &);

	// vtable[0] Schema_DynamicBinding
	// vtable[1] KV3TransferSave
	// vtable[2] KV3TransferLoad
	// vtable[7] Compute
	// vtable[4] GetConstraintType
	// sizeof = 144
};
