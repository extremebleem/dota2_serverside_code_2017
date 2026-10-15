// Reconstructed from DWARF by pahole; not original source.

// src/public/meshutils/mesh.h:65
struct IndexRange_t {
	int m_nStartIndex;  // +0x0
	int m_nIndexCount;  // +0x4

	// sizeof = 8
};

// src/public/meshutils/mesh.h:89
class CMeshVertexAttribute {
	int m_nSemanticIndex;  // +0x10
	int m_nOffsetFloats;  // +0x14
	int m_nSizeFloats;  // +0x18
	bool m_bDelta;  // +0x1c
	bool m_bNoCompression;  // +0x1d

	CMeshVertexAttribute();
	bool IsJointWeight();
	bool IsJointIndices();
	bool IsNormal();
	bool IsTangent();
	bool IsTexcoord();
	bool IsColor();
	bool IsPosition();
	bool IsPerVertexLighting();
	bool IsClothEnable();
	bool IsPositionRemap();
	~CMeshVertexAttribute();

	// sizeof = 40
};

// src/public/meshutils/mesh.h:118
struct ShaderInputSignatureDesc_t {
	CVsInputSignatureVector m_inputElements;  // +0x0
	ShaderInputSignatureDesc_t();

	// sizeof = 24
};

// src/public/meshutils/mesh.h:125
struct PackedInputLayoutInfo_t {
	bool m_bHasPackedTangentFrame;  // +0x0
	bool m_bHasCompressedPerVertexLighting;  // +0x1
	bool m_bHasUncompressedPerVertexLighting;  // +0x2

	// sizeof = 3
};

// src/public/meshutils/mesh.h:135
class CMesh {
	struct SkinningDataFields_t {
		int m_nBoneWeights;  // +0x0
		int m_nBoneIndices;  // +0x4
		SkinningDataFields_t();
		bool HasSkinningData();

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct ClothDataFields_t {
		int m_nClothEnable;  // +0x0
		int m_nPositionRemap;  // +0x4
		ClothDataFields_t();
		bool HasClothData();

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

	float * m_pVerts;  // +0x0
	uint32 * m_pIndices;  // +0x10
	int m_nVertexCount;  // +0x18
	int m_nVertexStrideFloats;  // +0x1c
	int m_nAttributeCount;  // +0x20
	int m_nIndexCount;  // +0x24
	char m_materialName[260];  // +0x40

	uint m_nDebugIndex;  // +0x150

	static uint s_nDebugIndex;
	bool m_bNoCollapse;  // +0x154
	bool m_bUseTintColor;  // +0x155

	int8 m_nCollisionType;  // +0x168
private:

	bool m_bAllocatedMeshData;  // +0x17d
	typedef CUtlVector<int, CUtlMemory<int, int> > InputLayoutToAttributeMap;
	CMesh();
	~CMesh();
	void AllocateMesh(int, int, int, CMeshVertexAttribute *, int);
	void AllocateAndCopyMesh(int, const float *, int, int, const uint32 *, int, CMeshVertexAttribute *, int);
	void AllocateAndCopyMesh(const CMesh &);
	void FreeAllMemory();
	void InitExternalMesh(float *, int, uint32 *, int, int, CMeshVertexAttribute *, int);
	void AppendMesh(const CMesh &);
	int TriangleCount();
	int IndexCount();
	int VertexCount();
	float * GetVertex(int);
	const float * GetVertex(int);
	const Vector & GetVertexPosition(int);
	void SetVertexPosition(int, const Vector &);
	uint32 GetVertexSizeInBytes();
	uint32 GetTotalVertexSizeInBytes();
	uint32 GetTotalIndexSizeInBytes();
	Vector4D PlaneFromTriangle(int);
	bool CalculateBounds(Vector *, Vector *, int, int);
	bool CalculateBoundsForIndexRange(Vector *, Vector *, int, int);
	bool CalculateAdjacency(int *, int);
	bool CalculateIndicentFacesForVertices(CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsigned int, int);
	bool CalculateInputLayoutFromAttributes(RenderInputLayoutField_t *, int *);
	void CreateSimpleUnpackedVBAndIBForMesh(VertexBufferHandle_t *, IndexBufferHandle_t *);
	float CalculateAvgUvDensityForIndexRange(int, int);
	int CreatePackedInputLayout(PackedInputLayoutInfo_t *, CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> > &, InputLayoutToAttributeMap &, const ShaderInputSignatureDesc_t *, bool, bool);
	int CreatePackedInputLayout(CDmeVertexData *, PackedInputLayoutInfo_t *, CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> > &, InputLayoutToAttributeMap &, const ShaderInputSignatureDesc_t *, bool);
	CMeshVertexAttribute * FindFirstAttribute(const char *, int);
	int FindFirstAttributeOffset(const char *, int);
	int FindFirstDeltaAttributeOffset(const char *, const char *, int);
	int FindExactAttributeOffset(const char *, int);
	void AddAttributes(CMeshVertexAttribute *, int);
	void AddAttribute(const char *, int, int);
	void AddExtraVertexStreamsFromMesh(const CMesh &);
	void CalculateTangents();
	void CalculateSmoothNormals();
	void CalculateCurvature();
	void CalculateWorldSpaceTextureCoordinateProjection();
	void FindFacesWithMultipleWorldSpaceTextureProjections(CUtlVector<int, CUtlMemory<int, int> > *, CUtlVector<int, CUtlMemory<int, int> > *);
	void ScalePositions(float, float, float);
	bool RemoveFirstAttribute(const char *, int);
	bool RemoveAttribute(CMeshVertexAttribute *);
	bool RemoveAttribute(int);
	bool RemoveAttributes(const SkinningDataFields_t &);
	void RemoveTangents();
	void RemoveColors();
	void RemoveUnusedVertices();
	void SkinToBoneIfNotSkinned(int);
	void SetBlendWeightAndIndexCount(int, bool);
	bool NormalizeSkinWeights();
	bool CalculateTangentSpaceWorldLengthsPerFace(Vector2D *, int, float);
	bool CalculateFaceCenters(Vector *, int);
	void ReverseTriangleWinding();
	void SplitLongEdges(float);
	bool IsConvex(float);
	int CreatePackedVB(void *, const CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> > &, const InputLayoutToAttributeMap &, int, bool, bool, EPackedVBFlags_t);
	/* tag__fprintf: const_type tag not supported! */;
	bool HasSkinningData();
	bool HasDeltaData(const char *);
	bool GetUsedJoints(CVarBitVec &);
	SkinningDataFields_t GetSkinningDataFields();
	ClothDataFields_t GetClothDataFields();

	class CAttrArray<int> {
	protected:

		float * m_pBase;  // +0x0
		int m_nStride;  // +0x8
		int m_nElementCount;  // +0xc
		int m_nAttrCount;  // +0x10
		struct Range_t {
			int m_Min;  // +0x0
			int m_Max;  // +0x4
			Range_t();
			void Append(int);

			// sizeof = 8
		};
		CAttrArray(float *, int, int, int);
		Range_t GetRange();
		bool operator bool();
		CSingleVertexFieldAccessor<int> operator[](int);
		CSingleVertexFieldAccessor<int const> operator[](int);
		int GetElementCount();
		int GetAttrCount();

		// sizeof = 24
	};
	CAttrArray<int> GetSkinIndexArray();

	class CAttrArray<float> {
	protected:

		float * m_pBase;  // +0x0
		int m_nStride;  // +0x8
		int m_nElementCount;  // +0xc
		int m_nAttrCount;  // +0x10
		struct Range_t {
			float m_Min;  // +0x0
			float m_Max;  // +0x4
			Range_t();
			void Append(float);

			// sizeof = 8
		};
		CAttrArray(float *, int, int, int);
		Range_t GetRange();
		bool operator bool();
		CSingleVertexFieldAccessor<float> operator[](int);
		CSingleVertexFieldAccessor<float const> operator[](int);
		int GetElementCount();
		int GetAttrCount();

		// sizeof = 24
	};
	CAttrArray<float> GetSkinWeightArray();

	class CAttrArray<Vector> {
	protected:

		float * m_pBase;  // +0x0
		int m_nStride;  // +0x8
		int m_nElementCount;  // +0xc
		int m_nAttrCount;  // +0x10
		struct Range_t {
			// sizeof = 0
		};
		CAttrArray(float *, int, int, int);
		Range_t GetRange();
		bool operator bool();
		CSingleVertexFieldAccessor<Vector> operator[](int);
		CSingleVertexFieldAccessor<const Vector> operator[](int);
		int GetElementCount();
		int GetAttrCount();

		// sizeof = 24
	};
	CAttrArray<Vector> GetPositionArray();
	CAttrArray<Vector> GetNormalArray();
	CAttrArray<Vector> GetTangentArray();
	CAttrArray<float> GetClothEnableArray();
	int GetNormalAttributeIndex(int);
	int GetBlendWeightCount();
	void RemapBlendIndices(const int *, int, int);
	float GetVertexJointWeight(const SkinningDataFields_t &, int, int);
	float GetVertexJointSumWeight(const SkinningDataFields_t &, int, const CVarBitVec &);
	bool GetBoneInfluenceStats(CUtlVector<float, CUtlMemory<float, int> > &, CUtlVector<int, CUtlMemory<int, int> > &, float);
	void WriteMeshWireframeToGlViewBuffer(CGlViewBuffer *, float, float, float);
	void GetDeltaNames(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);
	float ComputeVolume();
	int GetMostlyAttachedBone();
	AABB_t GetBounds();
	int BuildIslandMap(CUtlVector<int, CUtlMemory<int, int> > &);
	int BuildIslandMap(CUtlVector<int, CUtlMemory<int, int> > &, CAttrArray<int>);
	void SaveObj(IFileSystem *, const char *, ...);
	void SaveObj(const CMeshDisjointSetPartition &, int, IFileSystem *, const char *, ...);
	void Validate();
	void SetTintColor(const Vector4D &);
	CMesh(const CMesh &);
	CMesh & operator=(const CMesh &);
	void RestrideVertexBuffer(int);
	/* tag__fprintf: const_type tag not supported! */;

	class CSingleVertexFieldAccessor<int> {
		// sizeof = 0
	};

	class CSingleVertexFieldAccessor<int const> {
		// sizeof = 0
	};
	/* tag__fprintf: const_type tag not supported! */;

	class CSingleVertexFieldAccessor<float> {
		// sizeof = 0
	};

	class CSingleVertexFieldAccessor<float const> {
		// sizeof = 0
	};
	/* tag__fprintf: const_type tag not supported! */;

	class CSingleVertexFieldAccessor<Vector> {
	protected:

		int m_nCount;  // +0x8
		CSingleVertexFieldAccessor(Vector *, int);
		Vector & operator[](int);
		const Vector & operator[](int);
		Vector & operator*();
		const Vector & operator*();
		Vector & Tail();
		const Vector & Tail();
		int Count();

		// sizeof = 16
	};

	class CSingleVertexFieldAccessor<const Vector> {
		// sizeof = 0
	};

	class CAttrArray<Vector2D> {
	protected:

		float * m_pBase;  // +0x0
		int m_nStride;  // +0x8
		int m_nElementCount;  // +0xc
		int m_nAttrCount;  // +0x10
		struct Range_t {
			// sizeof = 0
		};
		CAttrArray(float *, int, int, int);
		Range_t GetRange();
		bool operator bool();
		CSingleVertexFieldAccessor<Vector2D> operator[](int);
		CSingleVertexFieldAccessor<const Vector2D> operator[](int);
		int GetElementCount();
		int GetAttrCount();

		// sizeof = 24
	};
	/* tag__fprintf: const_type tag not supported! */;

	class CSingleVertexFieldAccessor<Vector2D> {
	protected:

		int m_nCount;  // +0x8
		CSingleVertexFieldAccessor(Vector2D *, int);
		Vector2D & operator[](int);
		const Vector2D & operator[](int);
		Vector2D & operator*();
		const Vector2D & operator*();
		Vector2D & Tail();
		const Vector2D & Tail();
		int Count();

		// sizeof = 16
	};

	class CSingleVertexFieldAccessor<const Vector2D> {
		// sizeof = 0
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;
	CAttrArray<Vector> GetAttrArray<Vector>(CMeshVertexAttribute *);
	CAttrArray<Vector> FindAttrArray<Vector>(const char *);
	CAttrArray<Vector2D> GetAttrArray<Vector2D>(CMeshVertexAttribute *);
	CAttrArray<Vector2D> GetAttrArray<Vector2D>(int);

	// sizeof = 384
};

// src/public/meshutils/mesh.h:135
class CMesh {
	struct SkinningDataFields_t {
		int m_nBoneWeights;  // +0x0
		int m_nBoneIndices;  // +0x4
		SkinningDataFields_t();
		bool HasSkinningData();

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct ClothDataFields_t {
		int m_nClothEnable;  // +0x0
		int m_nPositionRemap;  // +0x4
		ClothDataFields_t();
		bool HasClothData();

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

	float * m_pVerts;  // +0x0
	uint32 * m_pIndices;  // +0x10
	int m_nVertexCount;  // +0x18
	int m_nVertexStrideFloats;  // +0x1c
	int m_nAttributeCount;  // +0x20
	int m_nIndexCount;  // +0x24
	char m_materialName[260];  // +0x40

	uint m_nDebugIndex;  // +0x150

	static uint s_nDebugIndex;
	bool m_bNoCollapse;  // +0x154
	bool m_bUseTintColor;  // +0x155

	int8 m_nCollisionType;  // +0x168
private:

	bool m_bAllocatedMeshData;  // +0x17d
	typedef CUtlVector<int, CUtlMemory<int, int> > InputLayoutToAttributeMap;
	CMesh();
	~CMesh();
	void AllocateMesh(int, int, int, CMeshVertexAttribute *, int);
	void AllocateAndCopyMesh(int, const float *, int, int, const uint32 *, int, CMeshVertexAttribute *, int);
	void AllocateAndCopyMesh(const CMesh &);
	void FreeAllMemory();
	void InitExternalMesh(float *, int, uint32 *, int, int, CMeshVertexAttribute *, int);
	void AppendMesh(const CMesh &);
	int TriangleCount();
	int IndexCount();
	int VertexCount();
	float * GetVertex(int);
	const float * GetVertex(int);
	const Vector & GetVertexPosition(int);
	void SetVertexPosition(int, const Vector &);
	uint32 GetVertexSizeInBytes();
	uint32 GetTotalVertexSizeInBytes();
	uint32 GetTotalIndexSizeInBytes();
	Vector4D PlaneFromTriangle(int);
	bool CalculateBounds(Vector *, Vector *, int, int);
	bool CalculateBoundsForIndexRange(Vector *, Vector *, int, int);
	bool CalculateAdjacency(int *, int);
	bool CalculateIndicentFacesForVertices(CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsigned int, int);
	bool CalculateInputLayoutFromAttributes(RenderInputLayoutField_t *, int *);
	void CreateSimpleUnpackedVBAndIBForMesh(VertexBufferHandle_t *, IndexBufferHandle_t *);
	float CalculateAvgUvDensityForIndexRange(int, int);
	int CreatePackedInputLayout(PackedInputLayoutInfo_t *, CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> > &, InputLayoutToAttributeMap &, const ShaderInputSignatureDesc_t *, bool, bool);
	int CreatePackedInputLayout(CDmeVertexData *, PackedInputLayoutInfo_t *, CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> > &, InputLayoutToAttributeMap &, const ShaderInputSignatureDesc_t *, bool);
	CMeshVertexAttribute * FindFirstAttribute(const char *, int);
	int FindFirstAttributeOffset(const char *, int);
	int FindFirstDeltaAttributeOffset(const char *, const char *, int);
	int FindExactAttributeOffset(const char *, int);
	void AddAttributes(CMeshVertexAttribute *, int);
	void AddAttribute(const char *, int, int);
	void AddExtraVertexStreamsFromMesh(const CMesh &);
	void CalculateTangents();
	void CalculateSmoothNormals();
	void CalculateCurvature();
	void CalculateWorldSpaceTextureCoordinateProjection();
	void FindFacesWithMultipleWorldSpaceTextureProjections(CUtlVector<int, CUtlMemory<int, int> > *, CUtlVector<int, CUtlMemory<int, int> > *);
	void ScalePositions(float, float, float);
	bool RemoveFirstAttribute(const char *, int);
	bool RemoveAttribute(CMeshVertexAttribute *);
	bool RemoveAttribute(int);
	bool RemoveAttributes(const SkinningDataFields_t &);
	void RemoveTangents();
	void RemoveColors();
	void RemoveUnusedVertices();
	void SkinToBoneIfNotSkinned(int);
	void SetBlendWeightAndIndexCount(int, bool);
	bool NormalizeSkinWeights();
	bool CalculateTangentSpaceWorldLengthsPerFace(Vector2D *, int, float);
	bool CalculateFaceCenters(Vector *, int);
	void ReverseTriangleWinding();
	void SplitLongEdges(float);
	bool IsConvex(float);
	int CreatePackedVB(void *, const CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> > &, const InputLayoutToAttributeMap &, int, bool, bool, EPackedVBFlags_t);
	/* tag__fprintf: const_type tag not supported! */;
	bool HasSkinningData();
	bool HasDeltaData(const char *);
	bool GetUsedJoints(CVarBitVec &);
	SkinningDataFields_t GetSkinningDataFields();
	ClothDataFields_t GetClothDataFields();

	class CAttrArray<int> {
	protected:

		float * m_pBase;  // +0x0
		int m_nStride;  // +0x8
		int m_nElementCount;  // +0xc
		int m_nAttrCount;  // +0x10
		struct Range_t {
			int m_Min;  // +0x0
			int m_Max;  // +0x4
			Range_t();
			void Append(int);

			// sizeof = 8
		};
		CAttrArray(float *, int, int, int);
		Range_t GetRange();
		bool operator bool();
		CSingleVertexFieldAccessor<int> operator[](int);
		CSingleVertexFieldAccessor<int const> operator[](int);
		int GetElementCount();
		int GetAttrCount();

		// sizeof = 24
	};
	CAttrArray<int> GetSkinIndexArray();

	class CAttrArray<float> {
	protected:

		float * m_pBase;  // +0x0
		int m_nStride;  // +0x8
		int m_nElementCount;  // +0xc
		int m_nAttrCount;  // +0x10
		struct Range_t {
			float m_Min;  // +0x0
			float m_Max;  // +0x4
			Range_t();
			void Append(float);

			// sizeof = 8
		};
		CAttrArray(float *, int, int, int);
		Range_t GetRange();
		bool operator bool();
		CSingleVertexFieldAccessor<float> operator[](int);
		CSingleVertexFieldAccessor<float const> operator[](int);
		int GetElementCount();
		int GetAttrCount();

		// sizeof = 24
	};
	CAttrArray<float> GetSkinWeightArray();

	class CAttrArray<Vector> {
	protected:

		float * m_pBase;  // +0x0
		int m_nStride;  // +0x8
		int m_nElementCount;  // +0xc
		int m_nAttrCount;  // +0x10
		struct Range_t {
			// sizeof = 0
		};
		CAttrArray(float *, int, int, int);
		Range_t GetRange();
		bool operator bool();
		CSingleVertexFieldAccessor<Vector> operator[](int);
		CSingleVertexFieldAccessor<const Vector> operator[](int);
		int GetElementCount();
		int GetAttrCount();

		// sizeof = 24
	};
	CAttrArray<Vector> GetPositionArray();
	CAttrArray<Vector> GetNormalArray();
	CAttrArray<Vector> GetTangentArray();
	CAttrArray<float> GetClothEnableArray();
	int GetNormalAttributeIndex(int);
	int GetBlendWeightCount();
	void RemapBlendIndices(const int *, int, int);
	float GetVertexJointWeight(const SkinningDataFields_t &, int, int);
	float GetVertexJointSumWeight(const SkinningDataFields_t &, int, const CVarBitVec &);
	bool GetBoneInfluenceStats(CUtlVector<float, CUtlMemory<float, int> > &, CUtlVector<int, CUtlMemory<int, int> > &, float);
	void WriteMeshWireframeToGlViewBuffer(CGlViewBuffer *, float, float, float);
	void GetDeltaNames(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);
	float ComputeVolume();
	int GetMostlyAttachedBone();
	AABB_t GetBounds();
	int BuildIslandMap(CUtlVector<int, CUtlMemory<int, int> > &);
	int BuildIslandMap(CUtlVector<int, CUtlMemory<int, int> > &, CAttrArray<int>);
	void SaveObj(IFileSystem *, const char *, ...);
	void SaveObj(const CMeshDisjointSetPartition &, int, IFileSystem *, const char *, ...);
	void Validate();
	void SetTintColor(const Vector4D &);
	CMesh(const CMesh &);
	CMesh & operator=(const CMesh &);
	void RestrideVertexBuffer(int);
	/* tag__fprintf: const_type tag not supported! */;

	class CSingleVertexFieldAccessor<int> {
		// sizeof = 0
	};

	class CSingleVertexFieldAccessor<int const> {
		// sizeof = 0
	};
	/* tag__fprintf: const_type tag not supported! */;

	class CSingleVertexFieldAccessor<float> {
		// sizeof = 0
	};

	class CSingleVertexFieldAccessor<float const> {
		// sizeof = 0
	};
	/* tag__fprintf: const_type tag not supported! */;

	class CSingleVertexFieldAccessor<Vector> {
		// sizeof = 0
	};

	class CSingleVertexFieldAccessor<const Vector> {
		// sizeof = 0
	};

	// sizeof = 384
};

// src/public/meshutils/mesh.h:135
class CMesh {
	struct SkinningDataFields_t {
		int m_nBoneWeights;  // +0x0
		int m_nBoneIndices;  // +0x4
		SkinningDataFields_t();
		bool HasSkinningData();

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct ClothDataFields_t {
		int m_nClothEnable;  // +0x0
		int m_nPositionRemap;  // +0x4
		ClothDataFields_t();
		bool HasClothData();

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

	float * m_pVerts;  // +0x0
	uint32 * m_pIndices;  // +0x10
	int m_nVertexCount;  // +0x18
	int m_nVertexStrideFloats;  // +0x1c
	int m_nAttributeCount;  // +0x20
	int m_nIndexCount;  // +0x24
	char m_materialName[260];  // +0x40

	uint m_nDebugIndex;  // +0x150

	static uint s_nDebugIndex;
	bool m_bNoCollapse;  // +0x154
	bool m_bUseTintColor;  // +0x155

	int8 m_nCollisionType;  // +0x168
private:

	bool m_bAllocatedMeshData;  // +0x17d
	typedef CUtlVector<int, CUtlMemory<int, int> > InputLayoutToAttributeMap;
	CMesh();
	~CMesh();
	void AllocateMesh(int, int, int, CMeshVertexAttribute *, int);
	void AllocateAndCopyMesh(int, const float *, int, int, const uint32 *, int, CMeshVertexAttribute *, int);
	void AllocateAndCopyMesh(const CMesh &);
	void FreeAllMemory();
	void InitExternalMesh(float *, int, uint32 *, int, int, CMeshVertexAttribute *, int);
	void AppendMesh(const CMesh &);
	int TriangleCount();
	int IndexCount();
	int VertexCount();
	float * GetVertex(int);
	const float * GetVertex(int);
	const Vector & GetVertexPosition(int);
	void SetVertexPosition(int, const Vector &);
	uint32 GetVertexSizeInBytes();
	uint32 GetTotalVertexSizeInBytes();
	uint32 GetTotalIndexSizeInBytes();
	Vector4D PlaneFromTriangle(int);
	bool CalculateBounds(Vector *, Vector *, int, int);
	bool CalculateBoundsForIndexRange(Vector *, Vector *, int, int);
	bool CalculateAdjacency(int *, int);
	bool CalculateIndicentFacesForVertices(CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsigned int, int);
	bool CalculateInputLayoutFromAttributes(RenderInputLayoutField_t *, int *);
	void CreateSimpleUnpackedVBAndIBForMesh(VertexBufferHandle_t *, IndexBufferHandle_t *);
	float CalculateAvgUvDensityForIndexRange(int, int);
	int CreatePackedInputLayout(PackedInputLayoutInfo_t *, CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> > &, InputLayoutToAttributeMap &, const ShaderInputSignatureDesc_t *, bool, bool);
	int CreatePackedInputLayout(CDmeVertexData *, PackedInputLayoutInfo_t *, CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> > &, InputLayoutToAttributeMap &, const ShaderInputSignatureDesc_t *, bool);
	CMeshVertexAttribute * FindFirstAttribute(const char *, int);
	int FindFirstAttributeOffset(const char *, int);
	int FindFirstDeltaAttributeOffset(const char *, const char *, int);
	int FindExactAttributeOffset(const char *, int);
	void AddAttributes(CMeshVertexAttribute *, int);
	void AddAttribute(const char *, int, int);
	void AddExtraVertexStreamsFromMesh(const CMesh &);
	void CalculateTangents();
	void CalculateSmoothNormals();
	void CalculateCurvature();
	void CalculateWorldSpaceTextureCoordinateProjection();
	void FindFacesWithMultipleWorldSpaceTextureProjections(CUtlVector<int, CUtlMemory<int, int> > *, CUtlVector<int, CUtlMemory<int, int> > *);
	void ScalePositions(float, float, float);
	bool RemoveFirstAttribute(const char *, int);
	bool RemoveAttribute(CMeshVertexAttribute *);
	bool RemoveAttribute(int);
	bool RemoveAttributes(const SkinningDataFields_t &);
	void RemoveTangents();
	void RemoveColors();
	void RemoveUnusedVertices();
	void SkinToBoneIfNotSkinned(int);
	void SetBlendWeightAndIndexCount(int, bool);
	bool NormalizeSkinWeights();
	bool CalculateTangentSpaceWorldLengthsPerFace(Vector2D *, int, float);
	bool CalculateFaceCenters(Vector *, int);
	void ReverseTriangleWinding();
	void SplitLongEdges(float);
	bool IsConvex(float);
	int CreatePackedVB(void *, const CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> > &, const InputLayoutToAttributeMap &, int, bool, bool, EPackedVBFlags_t);
	/* tag__fprintf: const_type tag not supported! */;
	bool HasSkinningData();
	bool HasDeltaData(const char *);
	bool GetUsedJoints(CVarBitVec &);
	SkinningDataFields_t GetSkinningDataFields();
	ClothDataFields_t GetClothDataFields();

	class CAttrArray<int> {
	protected:

		float * m_pBase;  // +0x0
		int m_nStride;  // +0x8
		int m_nElementCount;  // +0xc
		int m_nAttrCount;  // +0x10
		struct Range_t {
			int m_Min;  // +0x0
			int m_Max;  // +0x4
			Range_t();
			void Append(int);

			// sizeof = 8
		};
		CAttrArray(float *, int, int, int);
		Range_t GetRange();
		bool operator bool();
		CSingleVertexFieldAccessor<int> operator[](int);
		CSingleVertexFieldAccessor<int const> operator[](int);
		int GetElementCount();
		int GetAttrCount();

		// sizeof = 24
	};
	CAttrArray<int> GetSkinIndexArray();

	class CAttrArray<float> {
	protected:

		float * m_pBase;  // +0x0
		int m_nStride;  // +0x8
		int m_nElementCount;  // +0xc
		int m_nAttrCount;  // +0x10
		struct Range_t {
			float m_Min;  // +0x0
			float m_Max;  // +0x4
			Range_t();
			void Append(float);

			// sizeof = 8
		};
		CAttrArray(float *, int, int, int);
		Range_t GetRange();
		bool operator bool();
		CSingleVertexFieldAccessor<float> operator[](int);
		CSingleVertexFieldAccessor<float const> operator[](int);
		int GetElementCount();
		int GetAttrCount();

		// sizeof = 24
	};
	CAttrArray<float> GetSkinWeightArray();

	class CAttrArray<Vector> {
	protected:

		float * m_pBase;  // +0x0
		int m_nStride;  // +0x8
		int m_nElementCount;  // +0xc
		int m_nAttrCount;  // +0x10
		struct Range_t {
			// sizeof = 0
		};
		CAttrArray(float *, int, int, int);
		Range_t GetRange();
		bool operator bool();
		CSingleVertexFieldAccessor<Vector> operator[](int);
		CSingleVertexFieldAccessor<const Vector> operator[](int);
		int GetElementCount();
		int GetAttrCount();

		// sizeof = 24
	};
	CAttrArray<Vector> GetPositionArray();
	CAttrArray<Vector> GetNormalArray();
	CAttrArray<Vector> GetTangentArray();
	CAttrArray<float> GetClothEnableArray();
	int GetNormalAttributeIndex(int);
	int GetBlendWeightCount();
	void RemapBlendIndices(const int *, int, int);
	float GetVertexJointWeight(const SkinningDataFields_t &, int, int);
	float GetVertexJointSumWeight(const SkinningDataFields_t &, int, const CVarBitVec &);
	bool GetBoneInfluenceStats(CUtlVector<float, CUtlMemory<float, int> > &, CUtlVector<int, CUtlMemory<int, int> > &, float);
	void WriteMeshWireframeToGlViewBuffer(CGlViewBuffer *, float, float, float);
	void GetDeltaNames(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);
	float ComputeVolume();
	int GetMostlyAttachedBone();
	AABB_t GetBounds();
	int BuildIslandMap(CUtlVector<int, CUtlMemory<int, int> > &);
	int BuildIslandMap(CUtlVector<int, CUtlMemory<int, int> > &, CAttrArray<int>);
	void SaveObj(IFileSystem *, const char *, ...);
	void SaveObj(const CMeshDisjointSetPartition &, int, IFileSystem *, const char *, ...);
	void Validate();
	void SetTintColor(const Vector4D &);
	CMesh(const CMesh &);
	CMesh & operator=(const CMesh &);
	void RestrideVertexBuffer(int);
	/* tag__fprintf: const_type tag not supported! */;

	class CSingleVertexFieldAccessor<int> {
	protected:

		int * m_pBase;  // +0x0
		int m_nCount;  // +0x8
		CSingleVertexFieldAccessor(int *, int);
		int & operator[](int);
		const int & operator[](int);
		int & operator*();
		const int & operator*();
		int & Tail();
		const int & Tail();
		int Count();

		// sizeof = 16
	};

	class CSingleVertexFieldAccessor<int const> {
	protected:

		const int * m_pBase;  // +0x0
		int m_nCount;  // +0x8
		CSingleVertexFieldAccessor(const int *, int);
		const int & operator[](int);
		const int & operator[](int);
		const int & operator*();
		const int & operator*();
		const int & Tail();
		const int & Tail();
		int Count();

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	class CSingleVertexFieldAccessor<float> {
	protected:

		float * m_pBase;  // +0x0
		int m_nCount;  // +0x8
		CSingleVertexFieldAccessor(float *, int);
		float & operator[](int);
		const float & operator[](int);
		float & operator*();
		const float & operator*();
		float & Tail();
		const float & Tail();
		int Count();

		// sizeof = 16
	};

	class CSingleVertexFieldAccessor<float const> {
		// sizeof = 0
	};
	/* tag__fprintf: const_type tag not supported! */;

	class CSingleVertexFieldAccessor<Vector> {
		// sizeof = 0
	};

	class CSingleVertexFieldAccessor<const Vector> {
		// sizeof = 0
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;
	CAttrArray<int> GetAttrArray<int>(CMeshVertexAttribute *);
	CAttrArray<float> GetAttrArray<float>(CMeshVertexAttribute *);
	CAttrArray<float> FindAttrArray<float>(const char *);
	CAttrArray<int> FindAttrArray<int>(const char *);

	// sizeof = 384
};
