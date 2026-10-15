// Reconstructed from DWARF by pahole; not original source.

// src/public/meshsystem/imeshsystem.h:141
class CModelMeshHandle : public CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > {
public:

	CModelMeshHandle();
	CModelMeshHandle(HModel, int);
	CModelMeshHandle(const CModelMeshHandle &);
	CModelMeshHandle(const CModelMeshHandleStrong &);

	// sizeof = 16
};

// src/public/meshsystem/imeshsystem.h:168
class CModelMeshHandleStrong : public CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > {
public:

	CModelMeshHandleStrong();
	CModelMeshHandleStrong(HModel, int);
	CModelMeshHandleStrong(const CModelMeshHandle &);
	CModelMeshHandleStrong(const CModelMeshHandleStrong &);
	~CModelMeshHandleStrong();

	// sizeof = 16
};

// src/public/meshsystem/imeshsystem.h:268
struct HProjectedDecal__ {
	int unused;  // +0x0

	// sizeof = 4
};
