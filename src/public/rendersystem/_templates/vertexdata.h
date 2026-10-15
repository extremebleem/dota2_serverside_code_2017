// Reconstructed from DWARF by pahole; not original source.

// src/public/rendersystem/vertexdata.h:86
class CVertexDataBase<VertexPos_t> {
protected:

	int m_nVertexCount;  // +0x18
	int m_nVertexIncrement;  // +0x1c
	int m_nMaxVertexCount;  // +0x28
	uint32 m_nBufferVertexCount:30;  // +0x2c:0
	uint32 m_bShouldDeallocate:1;  // +0x2c:30
	uint32 m_bBufferInstalled:1;  // +0x2c:31
	CVertexDataBase();
	~CVertexDataBase();
	int VertexCount();
	int GetBufferVertexCount();
	void AdvanceVertex();
	void AdvanceVertexCount(int);
	IRenderContext * GetRenderContext();
	VertexPos_t * operator->();
	const VertexPos_t * operator->();
	VertexPos_t & CurrentVertex();
	VertexPos_t * Base();
	void ClearVertexFields();
	void Position<Vector>(Vector);

	// sizeof = 48
};

// src/public/rendersystem/vertexdata.h:86
class CVertexDataBase<VertexColorPos_t> {
protected:

	int m_nVertexCount;  // +0x18
	int m_nVertexIncrement;  // +0x1c
	int m_nMaxVertexCount;  // +0x28
	uint32 m_nBufferVertexCount:30;  // +0x2c:0
	uint32 m_bShouldDeallocate:1;  // +0x2c:30
	uint32 m_bBufferInstalled:1;  // +0x2c:31
	CVertexDataBase();
	~CVertexDataBase();
	int VertexCount();
	int GetBufferVertexCount();
	void AdvanceVertex();
	void AdvanceVertexCount(int);
	IRenderContext * GetRenderContext();
	VertexColorPos_t * operator->();
	const VertexColorPos_t * operator->();
	VertexColorPos_t & CurrentVertex();
	VertexColorPos_t * Base();
	void ClearVertexFields();
	void Position<Vector>(Vector);

	// sizeof = 48
};

// src/public/rendersystem/vertexdata.h:86
class CVertexDataBase<VertexUVPosColorNormalAndTangent_t> {
protected:

	int m_nVertexCount;  // +0x40
	int m_nVertexIncrement;  // +0x44
	int m_nMaxVertexCount;  // +0x50
	uint32 m_nBufferVertexCount:30;  // +0x54:0
	uint32 m_bShouldDeallocate:1;  // +0x54:30
	uint32 m_bBufferInstalled:1;  // +0x54:31
	CVertexDataBase();
	~CVertexDataBase();
	int VertexCount();
	int GetBufferVertexCount();
	void AdvanceVertex();
	void AdvanceVertexCount(int);
	IRenderContext * GetRenderContext();
	VertexUVPosColorNormalAndTangent_t * operator->();
	const VertexUVPosColorNormalAndTangent_t * operator->();
	VertexUVPosColorNormalAndTangent_t & CurrentVertex();
	VertexUVPosColorNormalAndTangent_t * Base();
	void ClearVertexFields();
	void TexCoord2f<int, float, float>(int, float, float);
	void Position<Vector>(Vector);
	void Normal<Vector>(Vector);

	// sizeof = 96
};

// src/public/rendersystem/vertexdata.h:402
class CVertexData<VertexPos_t> : public CVertexDataBase<VertexPos_t> {
public:

private:

	VertexBufferHandle_t m_hVertexBuffer;  // +0x30
	CVertexData();
	CVertexData(VertexPos_t *, int);
	CVertexData(IRenderContext *, VertexBufferHandle_t);
	CVertexData(IRenderContext *, RenderBufferType_t, int, const char *, const char *);
	~CVertexData();
	void Init(VertexPos_t *, int);
	void Init(IRenderContext *, VertexBufferHandle_t);
	bool Lock(int);
	void Unlock();
	void Bind(int, int, int);
	void UnlockAndBind(int, int, int);
	VertexBufferHandle_t TakeOwnership();
	void ReleaseBuffer();

protected:

	void Release();

	// sizeof = 64
};

// src/public/rendersystem/vertexdata.h:402
class CVertexData<VertexColorPos_t> : public CVertexDataBase<VertexColorPos_t> {
public:

private:

	VertexBufferHandle_t m_hVertexBuffer;  // +0x30
	CVertexData();
	CVertexData(VertexColorPos_t *, int);
	CVertexData(IRenderContext *, VertexBufferHandle_t);
	CVertexData(IRenderContext *, RenderBufferType_t, int, const char *, const char *);
	~CVertexData();
	void Init(VertexColorPos_t *, int);
	void Init(IRenderContext *, VertexBufferHandle_t);
	bool Lock(int);
	void Unlock();
	void Bind(int, int, int);
	void UnlockAndBind(int, int, int);
	VertexBufferHandle_t TakeOwnership();
	void ReleaseBuffer();

protected:

	void Release();

	// sizeof = 64
};

// src/public/rendersystem/vertexdata.h:402
class CVertexData<VertexUVPosColorNormalAndTangent_t> : public CVertexDataBase<VertexUVPosColorNormalAndTangent_t> {
public:

private:

	VertexBufferHandle_t m_hVertexBuffer;  // +0x58
	CVertexData();
	CVertexData(VertexUVPosColorNormalAndTangent_t *, int);
	CVertexData(IRenderContext *, VertexBufferHandle_t);
	CVertexData(IRenderContext *, RenderBufferType_t, int, const char *, const char *);
	~CVertexData();
	void Init(VertexUVPosColorNormalAndTangent_t *, int);
	void Init(IRenderContext *, VertexBufferHandle_t);
	bool Lock(int);
	void Unlock();
	void Bind(int, int, int);
	void UnlockAndBind(int, int, int);
	VertexBufferHandle_t TakeOwnership();
	void ReleaseBuffer();

protected:

	void Release();

	// sizeof = 96
};

// CVertexDataBase: 1 more instantiations (full list in INDEX.tsv)
//   CVertexDataBase<VertexWireFrame_t>

// CVertexData: 1 more instantiations (full list in INDEX.tsv)
//   CVertexData<VertexWireFrame_t>
