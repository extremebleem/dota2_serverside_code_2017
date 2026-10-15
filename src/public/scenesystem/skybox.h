// Reconstructed from DWARF by pahole; not original source.

// src/public/scenesystem/skybox.h:21
class CSceneSkyBoxLightQuery : public CRefCounted<CRefCountServiceBase<true, CRefMT> > {
public:

	CSceneSkyBoxLightQuery(const CSceneSkyBoxLightQuery &);
	CSceneSkyBoxLightQuery();
	virtual ~CSceneSkyBoxLightQuery();

	// sizeof = 40
};

// src/public/scenesystem/skybox.h:41
class CSceneSkyBoxObject : public CSceneObject {
public:

private:

	HMaterialStrong m_hMaterial;  // +0xe8
	bool m_bHasConstantColor;  // +0xf0

	float m_flFogMinStart;  // +0x110
	float m_flFogMinEnd;  // +0x114
	float m_flFogMaxStart;  // +0x118
	float m_flFogMaxEnd;  // +0x11c
	CSceneSkyBoxObject();
	virtual ~CSceneSkyBoxObject();
	CSceneSkyBoxLightQuery * FindOrCreateLightQuery();
	CSceneSkyBoxLightQuery * RelinquishOwnershipOfLightQuery();
	void SetLighting_ConstantColorHemisphere(const Vector &);
	void SetLighting_Samples(const Vector *, const Vector *, int);
	HMaterial GetMaterial();
	void SetMaterial(HMaterial);
	Vector GetConstantHemisphereColor(bool *);
	void SetSkyTint(const Vector &);
	const Vector & GetSkyTint();
	void SetFogType(ESkyboxFogType_t);
	ESkyboxFogType_t GetFogType();
	void SetAngularFogParams(float, float, float, float);
	float GetFogMinStart();
	float GetFogMinEnd();
	float GetFogMaxStart();
	float GetFogMaxEnd();

	// sizeof = 288
};
