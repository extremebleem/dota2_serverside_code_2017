// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/env_lightprobevolume.h:10
class CBaseLightProbeVolume : public IToolObject {
public:

protected:

	HRenderTextureStrong m_hLightProbeTexture;  // +0x10
	string_t m_LightGroups;  // +0x30
	bool m_bStatic;  // +0x38

	int m_nHandshake;  // +0x3c
	bool m_bStartDisabled;  // +0x40
	CBaseLightProbeVolume(const CBaseLightProbeVolume &);
	CBaseLightProbeVolume(IToolObjectContext *);
	virtual ~CBaseLightProbeVolume();
	virtual void UpdateStateFromKeyValues(const CEntityKeyValues *);
	virtual CSceneObject * CreateSceneObjectForRenderInstance(const matrix3x4_t &, ISceneWorld *);
	HRenderTexture LightProbeTexture();
	bool UpdateLightProbeTexture();
	CSceneLightProbeVolumeObject * CreateSceneObject(ISceneWorld *);
	void UpdateSceneObject(CSceneLightProbeVolumeObject *, const matrix3x4_t &, bool);

	// vtable[2] UpdateStateFromKeyValues
	// vtable[4] CreateSceneObjectForRenderInstance
	// sizeof = 72
};
