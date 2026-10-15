// Reconstructed from DWARF by pahole; not original source.

// src/public/scenesystem/sceneanimatableobject.h:20
class CSceneAnimatableObject : public CSceneObject {
public:

	int m_nPerVertexBoneInfluenceCount;  // +0xd0

private:

	CSceneAnimatableObject(const CSceneAnimatableObject &);
	CSceneAnimatableObject();
	virtual ~CSceneAnimatableObject();
	void Init(const matrix3x4a_t &, const CModel *);
	void SetProceduralBoneTransforms(ISceneAnimatableProceduralBoneTransforms *);
	ISceneAnimatableProceduralBoneTransforms * GetProceduralBoneTransforms();
	void SetWorldSpaceRenderBoneTransforms(int, const matrix3x4a_t *);
	void SetWorldSpaceRenderBoneTransforms(int, const CTransform *);
	bool FindOrAllocateTransforms(CMeshInstance *, int *, const Vector4D &);

	// sizeof = 240
};
