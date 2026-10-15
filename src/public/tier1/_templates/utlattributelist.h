// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlattributelist.h:26
class CUtlAttributeListChunk<Vector4D, 4, Vector4D> {
	void Clear();
	CUtlAttributeListChunk();
	int Count();
	bool GetValue(Vector4D *, const CUtlStringToken &);
	Vector4D GetValueOrDefault(uint32, Vector4D);
	void DeleteValue(uint32);
	uint32 GetKeyFromIndex(int);
	bool IsEmpty();
	int FindIndexOfMatch(i32x4);
	int FindIndexOfMatch(uint32);
	int GetFreeIndex();

	// sizeof = 80
};

// src/public/tier1/utlattributelist.h:26
class CUtlAttributeListChunk<VMatrix, 4, VMatrix> {
	void Clear();
	CUtlAttributeListChunk();
	int Count();
	bool GetValue(VMatrix *, const CUtlStringToken &);
	VMatrix GetValueOrDefault(uint32, VMatrix);
	void DeleteValue(uint32);
	uint32 GetKeyFromIndex(int);
	bool IsEmpty();
	int FindIndexOfMatch(i32x4);
	int FindIndexOfMatch(uint32);
	int GetFreeIndex();

	// sizeof = 272
};

// src/public/tier1/utlattributelist.h:26
class CUtlAttributeListChunk<int, 8, int> {
	int m_FixedValues[8];  // +0x20
	void Clear();
	CUtlAttributeListChunk();
	int Count();
	bool GetValue(int *, const CUtlStringToken &);
	int GetValueOrDefault(uint32, int);
	void DeleteValue(uint32);
	uint32 GetKeyFromIndex(int);
	bool IsEmpty();
	int FindIndexOfMatch(i32x4);
	int FindIndexOfMatch(uint32);
	int GetFreeIndex();

	// sizeof = 64
};

// src/public/tier1/utlattributelist.h:181
class CUtlAttributeList<Vector4D, 4, Vector4D> {
	struct OverflowChunk_t {
		ChunkType_t m_storage;  // +0x10
		OverflowChunk_t();

		// sizeof = 96
	};
	/* tag__fprintf: const_type tag not supported! */;
	typedef CUtlAttributeListChunk<Vector4D, 4, Vector4D> ChunkType_t;

private:

	ChunkType_t m_fixedStorage;  // +0x0
	typedef CUtlAttributeList<Vector4D, 4, Vector4D> ThisType_t;

	const ThisType_t * m_pParent;  // +0x50
	/* tag__fprintf: const_type tag not supported! */;
	CUtlAttributeList();

protected:

	int FindIndexOfMatch(i32x4, const ChunkType_t * *);
	/* tag__fprintf: const_type tag not supported! */;
	int FindIndexOfMatch(i32x4, ChunkType_t * *);
	int FindIndexOfMatch(uint32, const ChunkType_t * *);
	int FindIndexOfMatch(uint32, ChunkType_t * *);
	void MoveToAnother(ThisType_t &);
	~CUtlAttributeList();
	Vector4D GetValueOrDefault(uint32, Vector4D);
	Vector4D GetValueOrDefault(CUtlStringToken, Vector4D);
	void ClearButLeaveParentPointerAlone(bool);
	int Count();
	void Clear(bool);
	void MergeTo(ThisType_t &);
	bool GetValue(Vector4D *, const CUtlStringToken &);
	void SetParent(const ThisType_t *);
	const ThisType_t * GetParent();
	const ThisType_t * GetRoot();
	ThisType_t * GetRootForWrite();
	bool IsEmpty();
	void DeleteValue(CUtlStringToken);
	void SetValue(uint32, Vector4D);
	void SetValue(const CUtlStringToken &, Vector4D);

	// sizeof = 96
};

// src/public/tier1/utlattributelist.h:181
class CUtlAttributeList<VMatrix, 4, VMatrix> {
	struct OverflowChunk_t {
		ChunkType_t m_storage;  // +0x10
		OverflowChunk_t();

		// sizeof = 288
	};
	/* tag__fprintf: const_type tag not supported! */;
	typedef CUtlAttributeListChunk<VMatrix, 4, VMatrix> ChunkType_t;

private:

	ChunkType_t m_fixedStorage;  // +0x0
	typedef CUtlAttributeList<VMatrix, 4, VMatrix> ThisType_t;

	const ThisType_t * m_pParent;  // +0x110
	/* tag__fprintf: const_type tag not supported! */;
	CUtlAttributeList();

protected:

	int FindIndexOfMatch(i32x4, const ChunkType_t * *);
	/* tag__fprintf: const_type tag not supported! */;
	int FindIndexOfMatch(i32x4, ChunkType_t * *);
	int FindIndexOfMatch(uint32, const ChunkType_t * *);
	int FindIndexOfMatch(uint32, ChunkType_t * *);
	void MoveToAnother(ThisType_t &);
	~CUtlAttributeList();
	VMatrix GetValueOrDefault(uint32, VMatrix);
	VMatrix GetValueOrDefault(CUtlStringToken, VMatrix);
	void ClearButLeaveParentPointerAlone(bool);
	int Count();
	void Clear(bool);
	void MergeTo(ThisType_t &);
	bool GetValue(VMatrix *, const CUtlStringToken &);
	void SetParent(const ThisType_t *);
	const ThisType_t * GetParent();
	const ThisType_t * GetRoot();
	ThisType_t * GetRootForWrite();
	bool IsEmpty();
	void DeleteValue(CUtlStringToken);
	void SetValue(uint32, VMatrix);
	void SetValue(const CUtlStringToken &, VMatrix);

	// sizeof = 288
};

// src/public/tier1/utlattributelist.h:181
class CUtlAttributeList<int, 8, int> {
	struct OverflowChunk_t {
		ChunkType_t m_storage;  // +0x10
		OverflowChunk_t();

		// sizeof = 80
	};
	/* tag__fprintf: const_type tag not supported! */;
	typedef CUtlAttributeListChunk<int, 8, int> ChunkType_t;

private:

	ChunkType_t m_fixedStorage;  // +0x0
	typedef CUtlAttributeList<int, 8, int> ThisType_t;

	const ThisType_t * m_pParent;  // +0x40
	/* tag__fprintf: const_type tag not supported! */;
	CUtlAttributeList();

protected:

	int FindIndexOfMatch(i32x4, const ChunkType_t * *);
	/* tag__fprintf: const_type tag not supported! */;
	int FindIndexOfMatch(i32x4, ChunkType_t * *);
	int FindIndexOfMatch(uint32, const ChunkType_t * *);
	int FindIndexOfMatch(uint32, ChunkType_t * *);
	void MoveToAnother(ThisType_t &);
	~CUtlAttributeList();
	int GetValueOrDefault(uint32, int);
	int GetValueOrDefault(CUtlStringToken, int);
	void ClearButLeaveParentPointerAlone(bool);
	int Count();
	void Clear(bool);
	void MergeTo(ThisType_t &);
	bool GetValue(int *, const CUtlStringToken &);
	void SetParent(const ThisType_t *);
	const ThisType_t * GetParent();
	const ThisType_t * GetRoot();
	ThisType_t * GetRootForWrite();
	bool IsEmpty();
	void DeleteValue(CUtlStringToken);
	void SetValue(uint32, int);
	void SetValue(const CUtlStringToken &, int);

	// sizeof = 80
};

// CUtlAttributeListChunk: 10 more instantiations (full list in INDEX.tsv)
//   CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 4, CRenderAttributes::TextureAttrForStorage_t>
//   CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>
//   CUtlAttributeListChunk<void*, 4, void*>
//   CUtlAttributeListChunk<CUtlString, 4, CUtlString>
//   CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>
//   CUtlAttributeListChunk<float, 16, float>
//   CUtlAttributeListChunk<int, 16, int>
//   CUtlAttributeListChunk<Color, 16, Color>
//   CUtlAttributeListChunk<Vector, 16, Vector>
//   CUtlAttributeListChunk<CUtlSymbolLarge, 16, CUtlSymbolLarge>

// CUtlAttributeList: 12 more instantiations (full list in INDEX.tsv)
//   CUtlAttributeList<CRenderAttributes::TextureAttr_t, 4, CRenderAttributes::TextureAttrForStorage_t>
//   CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>
//   CUtlAttributeList<void*, 4, void*>
//   CUtlAttributeList<CUtlString, 4, CUtlString>
//   CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>
//   CUtlAttributeList<float, 16, float>
//   CUtlAttributeList<int, 16, int>
//   CUtlAttributeList<Color, 16, Color>
//   CUtlAttributeList<Vector, 16, Vector>
//   CUtlAttributeList<CUtlSymbolLarge, 16, CUtlSymbolLarge>
//   CUtlAttributeList<CRenderAttributes::TextureAttr_t, 4, CRenderAttributes::TextureAttrForStorage_t>
//   CUtlAttributeList<CUtlString, 4, CUtlString>
