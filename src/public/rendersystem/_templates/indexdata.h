// Reconstructed from DWARF by pahole; not original source.

// src/public/rendersystem/indexdata.h:20
class CIndexDataBase<unsigned int> {
protected:

	unsigned int * m_pMemory;  // +0x0
	int m_nIndexCount;  // +0x8
	int m_nIndexIncrement;  // +0xc
	int m_nMaxIndexCount;  // +0x18
	uint32 m_nBufferIndexCount:30;  // +0x1c:0
	uint32 m_bShouldDeallocate:1;  // +0x1c:30
	uint32 m_bBufferInstalled:1;  // +0x1c:31
	CIndexDataBase();
	~CIndexDataBase();
	int IndexCount();
	int GetBufferIndexCount();
	void AdvanceIndexCount(int);
	IRenderContext * GetRenderContext();
	void SetCurrentIndexValue(unsigned int);
	const unsigned int * Index();
	void Index(unsigned int);
	void Index2(unsigned int, unsigned int);
	void Index3(unsigned int, unsigned int, unsigned int);
	unsigned int * Base();
	void ClearIndexFields();

	// sizeof = 32
};

// src/public/rendersystem/indexdata.h:269
class CIndexData<unsigned int> : public CIndexDataBase<unsigned int> {
public:

private:

	IndexBufferHandle_t m_hIndexBuffer;  // +0x20
	CIndexData();
	CIndexData(unsigned int *, int);
	CIndexData(IRenderContext *, IndexBufferHandle_t);
	CIndexData(IRenderContext *, RenderBufferType_t, int, const char *, const char *);
	~CIndexData();
	bool Lock(int);
	void Unlock();
	void Bind(int);
	void UnlockAndBind(int);
	IndexBufferHandle_t TakeOwnership();
	void ReleaseBuffer();

protected:

	void Init(unsigned int *, int);
	void Init(IRenderContext *, IndexBufferHandle_t);
	void Init(IRenderContext *, RenderBufferType_t, int, const char *, const char *);
	void Release();

	// sizeof = 40
};
