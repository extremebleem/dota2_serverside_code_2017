// Reconstructed from DWARF by pahole; not original source.

// src/public/meshsystem/imeshsystem.h:47
class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > {
protected:

	int m_iMesh;  // +0x8
	CModelMeshHandleBase(CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *);
	CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > & operator=(CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *, const CModelMeshHandle &);
	CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > & operator=(CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *, const CModelMeshHandleStrong &);
	void Clear(CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *);
	void Assign(CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *, const CModelMeshHandle &);
	void Assign(CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *, const CModelMeshHandleStrong &);
	const CRenderMesh * GetData(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *);
	bool IsValid(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *);
	HModel GetModelHandle(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *);
	const CModel * GetModelData(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *);
	int GetMeshIndex(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *);
	void GetMeshName(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *, char *, int);

	// sizeof = 16
};

// src/public/meshsystem/imeshsystem.h:47
class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > {
protected:

	int m_iMesh;  // +0x8
	CModelMeshHandleBase(CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *);
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > & operator=(CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *, const CModelMeshHandle &);
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > & operator=(CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *, const CModelMeshHandleStrong &);
	void Clear(CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *);
	void Assign(CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *, const CModelMeshHandle &);
	void Assign(CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *, const CModelMeshHandleStrong &);
	const CRenderMesh * GetData(const CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *);
	bool IsValid(const CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *);
	HModel GetModelHandle(const CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *);
	const CModel * GetModelData(const CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *);
	int GetMeshIndex(const CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *);
	void GetMeshName(const CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *, char *, int);
	~CModelMeshHandleBase(CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *, int);

	// sizeof = 16
};
