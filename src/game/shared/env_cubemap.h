// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/env_cubemap.h:10
class CBaseCubemap : public IToolObject {
public:

protected:

	HRenderTextureStrong m_hCubemapTexture;  // +0x10
	float m_flInfluenceRadius;  // +0x18

	string_t m_LightGroups;  // +0x38
	bool m_bStatic;  // +0x40

	int m_nHandshake;  // +0x44
	bool m_bStartDisabled;  // +0x48

	int m_nProjectionMode;  // +0x4c
	int m_nCubeMapIndex;  // +0x50
	CBaseCubemap(const CBaseCubemap &);
	CBaseCubemap(IToolObjectContext *);
	virtual ~CBaseCubemap();
	virtual void UpdateStateFromKeyValues(const CEntityKeyValues *);
	virtual CSceneObject * CreateSceneObjectForRenderInstance(const matrix3x4_t &, ISceneWorld *);
	HRenderTexture CubeMapTexture();
	void UpdateCubemapTexture();
	int AllocIndex();
	void FreeIndex(int &);
	CEnvMapSceneObject * CreateSceneObject(ISceneWorld *);
	void UpdateSceneObject(CEnvMapSceneObject *, const matrix3x4_t &, bool);
	bool UploadToTextureArray();

	// vtable[2] UpdateStateFromKeyValues
	// vtable[4] CreateSceneObjectForRenderInstance
	// sizeof = 88
};
