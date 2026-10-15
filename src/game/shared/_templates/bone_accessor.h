// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/bone_accessor.h:28
class CBoneAccessor<matrix3x4a_t> {
protected:

	const matrix3x4a_t * m_pBones;  // +0x0
	const uint32 * m_pReadableBones;  // +0x8
	uint16 m_nBones;  // +0x10
	bool m_bOwnsMemory;  // +0x12
	CBoneAccessor();
	CBoneAccessor(int);
	CBoneAccessor(int, const matrix3x4a_t *, const uint32 *);
	CBoneAccessor(const CBoneAccessor<matrix3x4a_t> &);
	~CBoneAccessor();
	const CBoneAccessor<matrix3x4a_t> & operator=(const CBoneAccessor<matrix3x4a_t> &);
	void Init(int);
	void Init(int, const matrix3x4a_t *, const uint32 *);
	void Cleanup();
	bool IsValid();
	bool IsBoneReadable(int);
	const matrix3x4a_t & GetBone(int);
	const matrix3x4a_t & operator[](int);
	int GetNumBones();
	const matrix3x4a_t * GetBoneArray_Unchecked();
	const uint32 * GetReadableBones();
	void SanityCheckBone(int);
	void Alloc(int);

	// sizeof = 24
};

// src/game/shared/bone_accessor.h:28
class CBoneAccessor<CTransform> {
protected:

	const CTransform * m_pBones;  // +0x0
	const uint32 * m_pReadableBones;  // +0x8
	uint16 m_nBones;  // +0x10
	bool m_bOwnsMemory;  // +0x12
	CBoneAccessor();
	CBoneAccessor(int);
	CBoneAccessor(int, const CTransform *, const uint32 *);
	CBoneAccessor(const CBoneAccessor<CTransform> &);
	~CBoneAccessor();
	const CBoneAccessor<CTransform> & operator=(const CBoneAccessor<CTransform> &);
	void Init(int);
	void Init(int, const CTransform *, const uint32 *);
	void Cleanup();
	bool IsValid();
	bool IsBoneReadable(int);
	const CTransform & GetBone(int);
	const CTransform & operator[](int);
	int GetNumBones();
	const CTransform * GetBoneArray_Unchecked();
	const uint32 * GetReadableBones();
	void SanityCheckBone(int);
	void Alloc(int);

	// sizeof = 24
};

// src/game/shared/bone_accessor.h:78
class CWritableBoneAccessor<matrix3x4a_t> : public CBoneAccessor<matrix3x4a_t> {
public:

	CWritableBoneAccessor();
	CWritableBoneAccessor(int, matrix3x4a_t *, uint32 *);
	CWritableBoneAccessor(const CWritableBoneAccessor<matrix3x4a_t> &);
	const CWritableBoneAccessor<matrix3x4a_t> & operator=(const CWritableBoneAccessor<matrix3x4a_t> &);
	void CopyFrom(const CBoneAccessor<matrix3x4a_t> &);
	void SetBoneAndMarkReadable(int, const matrix3x4a_t &);
	matrix3x4a_t & GetBoneForWriteAndMarkReadable(int);
	void SetBone(int, const matrix3x4a_t &);
	matrix3x4a_t & GetBoneForWrite(int);
	matrix3x4a_t * GetBoneArrayForWrite();
	void MarkBoneReadable(int, bool);
	uint32 * GetReadableBoneArrayForWrite();
	void ClearBoneReadableBits();

	// sizeof = 24
};

// src/game/shared/bone_accessor.h:78
class CWritableBoneAccessor<CTransform> : public CBoneAccessor<CTransform> {
public:

	CWritableBoneAccessor();
	CWritableBoneAccessor(int, CTransform *, uint32 *);
	CWritableBoneAccessor(const CWritableBoneAccessor<CTransform> &);
	const CWritableBoneAccessor<CTransform> & operator=(const CWritableBoneAccessor<CTransform> &);
	void CopyFrom(const CBoneAccessor<CTransform> &);
	void SetBoneAndMarkReadable(int, const CTransform &);
	CTransform & GetBoneForWriteAndMarkReadable(int);
	void SetBone(int, const CTransform &);
	CTransform & GetBoneForWrite(int);
	CTransform * GetBoneArrayForWrite();
	void MarkBoneReadable(int, bool);
	uint32 * GetReadableBoneArrayForWrite();
	void ClearBoneReadableBits();
	~CWritableBoneAccessor();

	// sizeof = 24
};

// src/game/shared/bone_accessor.h:108
class CWritableBoneContainer<matrix3x4a_t, 100> : public CWritableBoneAccessor<matrix3x4a_t> {
public:

protected:

	unsigned int m_readableBoneStorage[25];  // +0x12e0
	CWritableBoneContainer(int);
	CWritableBoneContainer(HModel);
	CWritableBoneContainer(const CModel *);
	void Init_Internal(int);
	~CWritableBoneContainer();

	// sizeof = 4944
};
