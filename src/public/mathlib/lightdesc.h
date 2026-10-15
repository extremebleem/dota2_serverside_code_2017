// Reconstructed from DWARF by pahole; not original source.

// src/public/mathlib/lightdesc.h:49
struct LightDesc_t {
private:

	float m_Range;  // +0x1c
	float m_Falloff;  // +0x20
	float m_Attenuation0;  // +0x24
	float m_Attenuation1;  // +0x28
	float m_Attenuation2;  // +0x2c
	float m_Theta;  // +0x30
	float m_Phi;  // +0x34
	bool m_bCastShadows;  // +0x3c

	int m_nShadowWidth;  // +0x40
	int m_nShadowHeight;  // +0x44
	bool m_bRenderDiffuse;  // +0x48
	bool m_bRenderSpecular;  // +0x49

	float m_flLightSourceDim0;  // +0x50
	float m_flLightSourceDim1;  // +0x54
	float m_ThetaDot;  // +0x7c
	float m_PhiDot;  // +0x80
	float m_OneOverThetaDotMinusPhiDot;  // +0x84
	uint m_Flags;  // +0x88
	int32 m_nEnvProbeId;  // +0x8c
protected:

	float m_RangeSquared;  // +0x90

	void RecalculateDerivedValues();
	void RecalculateOneOverThetaDotMinusPhiDot();
	LightDesc_t();
	LightDesc_t(const Vector &, const Vector &);
	LightDesc_t & operator=(const LightDesc_t &);
	void Clear();
	LightDesc_t(const Vector &, const Vector &, const Vector &, float, float);
	void InitPoint(const Vector &, const Vector &);
	void InitDirectional(const Vector &, const Vector &);
	void InitSpot(const Vector &, const Vector &, const Vector &, float, float);
	void InitSFMSpot(const Vector &, const Vector &, const Quaternion &, float, float, float, float);
	void InitEnvironmentProbe(const Vector &, float);
	void ComputeLightAtPoints(const FourVectors &, const FourVectors &, FourVectors &, bool, bool);
	void ComputeNonincidenceLightAtPoints(const FourVectors &, FourVectors &, bool);
	void ComputeLightAtPointsForDirectional(const FourVectors &, const FourVectors &, FourVectors &, bool, bool);
	void SetupOldStyleAttenuation(float, float, float);
	void SetupNewStyleAttenuation(float, float);
	bool IsDirectionWithinLightCone(const Vector &);
	float OneOverThetaDotMinusPhiDot();
	float DistanceAtWhichBrightnessIsLessThan(float);
	void BuildShadowFrustumForSpotlight(float, CFrustum *);
	bool CalculateBounds(Vector &, Vector &);
	void SetPointLightSourceShape();
	void SetSphereLightSourceShape(float);
	void SetSphereLightSourceShapeForDirectionalLight(float);

	// sizeof = 148
};
