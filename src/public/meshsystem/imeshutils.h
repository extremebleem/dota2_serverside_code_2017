// Reconstructed from DWARF by pahole; not original source.

// src/public/meshsystem/imeshutils.h:28
class CSceneSkeletonObject : public CSceneObject {
public:

	CSceneSkeletonObject();
	virtual ~CSceneSkeletonObject();

	// sizeof = 288
};

// src/public/meshsystem/imeshutils.h:41
struct ShowSkeletonJointFilter_t {
	int32 m_nMask;  // +0x0
	int32 m_nEqual;  // +0x4
	ShowSkeletonJointFilter_t(int);
	bool Pass(int32);

	// sizeof = 8
};
